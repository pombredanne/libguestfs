(* virt-resize
 * Copyright (C) 2010-2011 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *)

open Printf

module G = Guestfs

open Utils

(* Minimum surplus before we create an extra partition. *)
let min_extra_partition = 10L *^ 1024L *^ 1024L

(* Command line argument parsing. *)
let prog = Filename.basename Sys.executable_name

let infile, outfile, copy_boot_loader, debug, deletes, dryrun,
  expand, expand_content, extra_partition, format, ignores,
  lv_expands, output_format,
  quiet, resizes, resizes_force, shrink =
  let display_version () =
    let g = new G.guestfs () in
    let version = g#version () in
    printf "virt-resize %Ld.%Ld.%Ld%s\n"
      version.G.major version.G.minor version.G.release version.G.extra;
    exit 0
  in

  let add xs s = xs := s :: !xs in

  let copy_boot_loader = ref true in
  let debug = ref false in
  let deletes = ref [] in
  let dryrun = ref false in
  let expand = ref "" in
  let set_expand s =
    if s = "" then error "%s: empty --expand option" prog
    else if !expand <> "" then error "--expand option given twice"
    else expand := s
  in
  let expand_content = ref true in
  let extra_partition = ref true in
  let format = ref "" in
  let ignores = ref [] in
  let lv_expands = ref [] in
  let output_format = ref "" in
  let quiet = ref false in
  let resizes = ref [] in
  let resizes_force = ref [] in
  let shrink = ref "" in
  let set_shrink s =
    if s = "" then error "empty --shrink option"
    else if !shrink <> "" then error "--shrink option given twice"
    else shrink := s
  in

  let argspec = Arg.align [
    "--no-copy-boot-loader", Arg.Clear copy_boot_loader, " Don't copy boot loader";
    "-d",        Arg.Set debug,             " Enable debugging messages";
    "--debug",   Arg.Set debug,             " -\"-";
    "--delete",  Arg.String (add deletes),  "part Delete partition";
    "--expand",  Arg.String set_expand,     "part Expand partition";
    "--no-expand-content", Arg.Clear expand_content, " Don't expand content";
    "--no-extra-partition", Arg.Clear extra_partition, " Don't create extra partition";
    "--format",  Arg.Set_string format,     "format Format of input disk";
    "--ignore",  Arg.String (add ignores),  "part Ignore partition";
    "--lv-expand", Arg.String (add lv_expands), "lv Expand logical volume";
    "--LV-expand", Arg.String (add lv_expands), "lv -\"-";
    "--lvexpand", Arg.String (add lv_expands), "lv -\"-";
    "--LVexpand", Arg.String (add lv_expands), "lv -\"-";
    "-n",        Arg.Set dryrun,            " Don't perform changes";
    "--dryrun",  Arg.Set dryrun,            " -\"-";
    "--dry-run", Arg.Set dryrun,            " -\"-";
    "--output-format", Arg.Set_string format, "format Format of output disk";
    "-q",        Arg.Set quiet,             " Don't print the summary";
    "--quiet",   Arg.Set quiet,             " -\"-";
    "--resize",  Arg.String (add resizes),  "part=size Resize partition";
    "--resize-force", Arg.String (add resizes_force), "part=size Forcefully resize partition";
    "--shrink",  Arg.String set_shrink,     "part Shrink partition";
    "-V",        Arg.Unit display_version,  " Display version and exit";
    "--version", Arg.Unit display_version,  " -\"-";
  ] in
  let disks = ref [] in
  let anon_fun s = disks := s :: !disks in
  let usage_msg =
    sprintf "\
%s: resize a virtual machine disk

A short summary of the options is given below.  For detailed help please
read the man page virt-resize(1).
"
      prog in
  Arg.parse argspec anon_fun usage_msg;

  let debug = !debug in
  if debug then (
    eprintf "command line:";
    List.iter (eprintf " %s") (Array.to_list Sys.argv);
    prerr_newline ()
  );

  (* Dereference the rest of the args. *)
  let copy_boot_loader = !copy_boot_loader in
  let deletes = List.rev !deletes in
  let dryrun = !dryrun in
  let expand = match !expand with "" -> None | str -> Some str in
  let expand_content = !expand_content in
  let extra_partition = !extra_partition in
  let format = match !format with "" -> None | str -> Some str in
  let ignores = List.rev !ignores in
  let lv_expands = List.rev !lv_expands in
  let output_format = match !output_format with "" -> None | str -> Some str in
  let quiet = !quiet in
  let resizes = List.rev !resizes in
  let resizes_force = List.rev !resizes_force in
  let shrink = match !shrink with "" -> None | str -> Some str in

  (* Verify we got exactly 2 disks. *)
  let infile, outfile =
    match List.rev !disks with
    | [infile; outfile] -> infile, outfile
    | _ ->
        error "usage is: %s [--options] indisk outdisk" prog in

  infile, outfile, copy_boot_loader, debug, deletes, dryrun,
  expand, expand_content, extra_partition, format, ignores,
  lv_expands, output_format,
  quiet, resizes, resizes_force, shrink

(* Default to true, since NTFS support is usually available. *)
let ntfs_available = ref true

(* Add in and out disks to the handle and launch. *)
let connect_both_disks () =
  let g = new G.guestfs () in
  if debug then g#set_trace true;
  g#add_drive_opts ?format ~readonly:true infile;
  g#add_drive_opts ?format:output_format ~readonly:false outfile;
  if not quiet then Progress.set_up_progress_bar g;
  g#launch ();

  (* Set the filter to /dev/sda, in case there are any rogue
   * PVs lying around on the target disk.
   *)
  g#lvm_set_filter [|"/dev/sda"|];

  (* Update features available in the daemon. *)
  ntfs_available := feature_available g [|"ntfsprogs"; "ntfs3g"|];

  g

let g =
  if not quiet then
    printf "Examining %s ...\n%!" infile;

  let g = connect_both_disks () in

  g

(* Get the size in bytes of each disk.
 *
 * Originally we computed this by looking at the same of the host file,
 * but of course this failed for qcow2 images (RHBZ#633096).  The right
 * way to do it is with g#blockdev_getsize64.
 *)
let sectsize, insize, outsize =
  let sectsize = g#blockdev_getss "/dev/sdb" in
  let insize = g#blockdev_getsize64 "/dev/sda" in
  let outsize = g#blockdev_getsize64 "/dev/sdb" in
  if debug then (
    eprintf "%s size %Ld bytes\n" infile insize;
    eprintf "%s size %Ld bytes\n" outfile outsize
  );
  sectsize, insize, outsize

let max_bootloader =
  (* In reality the number of sectors containing boot loader data will be
   * less than this (although Windows 7 defaults to putting the first
   * partition on sector 2048, and has quite a large boot loader).
   *
   * However make this large enough to be sure that we have copied over
   * the boot loader.  We could also do this by looking for the sector
   * offset of the first partition.
   *
   * It doesn't matter if we copy too much.
   *)
  4096 * 512

(* Check the disks are at least as big as the bootloader. *)
let () =
  if insize < Int64.of_int max_bootloader then
    error "%s: file is too small to be a disk image (%Ld bytes)"
      infile insize;
  if outsize < Int64.of_int max_bootloader then
    error "%s: file is too small to be a disk image (%Ld bytes)"
      outfile outsize

(* Build a data structure describing the source disk's partition layout. *)
type partition = {
  p_name : string;               (* Device name, like /dev/sda1. *)
  p_size : int64;                (* Current size of this partition. *)
  p_part : G.partition;          (* Partition data from libguestfs. *)
  p_bootable : bool;             (* Is it bootable? *)
  p_mbr_id : int option;         (* MBR ID, if it has one. *)
  p_type : partition_content;    (* Content type and content size. *)
  mutable p_operation : partition_operation; (* What we're going to do. *)
  mutable p_target_partnum : int; (* Partition number on target. *)
}
and partition_content =
  | ContentUnknown               (* undetermined *)
  | ContentPV of int64           (* physical volume (size of PV) *)
  | ContentFS of string * int64  (* mountable filesystem (FS type, FS size) *)
and partition_operation =
  | OpCopy                       (* copy it as-is, no resizing *)
  | OpIgnore                     (* ignore it (create on target, but don't
                                    copy any content) *)
  | OpDelete                     (* delete it *)
  | OpResize of int64            (* resize it to the new size *)

let rec debug_partition p =
  eprintf "%s:\n" p.p_name;
  eprintf "\tpartition data: %ld %Ld-%Ld (%Ld bytes)\n"
    p.p_part.G.part_num p.p_part.G.part_start p.p_part.G.part_end
    p.p_part.G.part_size;
  eprintf "\tbootable: %b\n" p.p_bootable;
  eprintf "\tpartition ID: %s\n"
    (match p.p_mbr_id with None -> "(none)" | Some i -> sprintf "0x%x" i);
  eprintf "\tcontent: %s\n" (string_of_partition_content p.p_type)
and string_of_partition_content = function
  | ContentUnknown -> "unknown data"
  | ContentPV sz -> sprintf "LVM PV (%Ld bytes)" sz
  | ContentFS (fs, sz) -> sprintf "filesystem %s (%Ld bytes)" fs sz
and string_of_partition_content_no_size = function
  | ContentUnknown -> "unknown data"
  | ContentPV _ -> sprintf "LVM PV"
  | ContentFS (fs, _) -> sprintf "filesystem %s" fs

let get_partition_content =
  let pvs_full = Array.to_list (g#pvs_full ()) in
  fun dev ->
    try
      let fs = g#vfs_type dev in
      if fs = "unknown" then
        ContentUnknown
      else if fs = "LVM2_member" then (
        let rec loop = function
          | [] ->
              error "%s: physical volume not returned by pvs_full"
                dev
          | pv :: _ when canonicalize pv.G.pv_name = dev ->
              ContentPV pv.G.pv_size
          | _ :: pvs -> loop pvs
        in
        loop pvs_full
      )
      else (
        g#mount_ro dev "/";
        let stat = g#statvfs "/" in
        let size = stat.G.bsize *^ stat.G.blocks in
        ContentFS (fs, size)
      )
    with
      G.Error _ -> ContentUnknown

let partitions : partition list =
  let parts = Array.to_list (g#part_list "/dev/sda") in

  if List.length parts = 0 then
    error "the source disk has no partitions";

  let partitions =
    List.map (
      fun ({ G.part_num = part_num } as part) ->
        let part_num = Int32.to_int part_num in
        let name = sprintf "/dev/sda%d" part_num in
        let bootable = g#part_get_bootable "/dev/sda" part_num in
        let mbr_id =
          try Some (g#part_get_mbr_id "/dev/sda" part_num)
          with G.Error _ -> None in
        let typ = get_partition_content name in

        { p_name = name; p_size = part.G.part_size; p_part = part;
          p_bootable = bootable; p_mbr_id = mbr_id; p_type = typ;
          p_operation = OpCopy; p_target_partnum = 0 }
    ) parts in

  if debug then (
    eprintf "%d partitions found\n" (List.length partitions);
    List.iter debug_partition partitions
  );

  (* Check content isn't larger than partitions.  If it is then
   * something has gone wrong and we shouldn't continue.  Old
   * virt-resize didn't do these checks.
   *)
  List.iter (
    function
    | { p_name = name; p_size = size; p_type = ContentPV pv_size }
        when size < pv_size ->
        error "%s: partition size %Ld < physical volume size %Ld"
          name size pv_size
    | { p_name = name; p_size = size; p_type = ContentFS (_, fs_size) }
        when size < fs_size ->
        error "%s: partition size %Ld < filesystem size %Ld"
          name size fs_size
    | _ -> ()
  ) partitions;

  (* Check partitions don't overlap. *)
  let rec loop end_of_prev = function
    | [] -> ()
    | { p_name = name; p_part = { G.part_start = part_start } } :: _
        when end_of_prev > part_start ->
        error "%s: this partition overlaps the previous one" name
    | { p_part = { G.part_end = part_end } } :: parts -> loop part_end parts
  in
  loop 0L partitions;

  partitions

(* Build a data structure describing LVs on the source disk.
 * This is only used if the user gave the --lv-expand option.
 *)
type logvol = {
  lv_name : string;
  lv_type : logvol_content;
  mutable lv_operation : logvol_operation
}
and logvol_content = partition_content (* except ContentPV cannot occur *)
and logvol_operation =
  | LVOpNone                     (* nothing *)
  | LVOpExpand                   (* expand it *)

let debug_logvol lv =
  eprintf "%s:\n" lv.lv_name;
  eprintf "\tcontent: %s\n" (string_of_partition_content lv.lv_type)

let lvs =
  let lvs = Array.to_list (g#lvs ()) in

  let lvs = List.map (
    fun name ->
      let typ = get_partition_content name in
      assert (match typ with ContentPV _ -> false | _ -> true);

      { lv_name = name; lv_type = typ; lv_operation = LVOpNone }
  ) lvs in

  if debug then (
    eprintf "%d logical volumes found\n" (List.length lvs);
    List.iter debug_logvol lvs
  );

  lvs

(* These functions tell us if we know how to expand the content of
 * a particular partition or LV, and what method to use.
 *)
type expand_content_method = PVResize | Resize2fs | NTFSResize

let string_of_expand_content_method = function
  | PVResize -> "pvresize"
  | Resize2fs -> "resize2fs"
  | NTFSResize -> "ntfsresize"

let can_expand_content =
  if expand_content then
    function
    | ContentUnknown -> false
    | ContentPV _ -> true
    | ContentFS (("ext2"|"ext3"|"ext4"), _) -> true
    | ContentFS (("ntfs"), _) when !ntfs_available -> true
    | ContentFS (_, _) -> false
  else
    fun _ -> false

let expand_content_method =
  if expand_content then
    function
    | ContentUnknown -> assert false
    | ContentPV _ -> PVResize
    | ContentFS (("ext2"|"ext3"|"ext4"), _) -> Resize2fs
    | ContentFS (("ntfs"), _) when !ntfs_available -> NTFSResize
    | ContentFS (_, _) -> assert false
  else
    fun _ -> assert false

(* Helper function to locate a partition given what the user might
 * type on the command line.  It also gives errors for partitions
 * that the user has asked to be ignored or deleted.
 *)
let find_partition =
  let hash = Hashtbl.create 13 in
  List.iter (fun ({ p_name = name } as p) -> Hashtbl.add hash name p)
    partitions;
  fun ~option name ->
    let name =
      if String.length name < 5 || String.sub name 0 5 <> "/dev/" then
        "/dev/" ^ name
      else
        name in
    let name = canonicalize name in

    let partition =
      try Hashtbl.find hash name
      with Not_found ->
        error "%s: partition not found in the source disk image (this error came from '%s' option on the command line).  Try running this command: virt-filesystems --partitions --long -a %s"
          name option infile in

    if partition.p_operation = OpIgnore then
      error "%s: partition already ignored, you cannot use it in '%s' option"
        name option;

    if partition.p_operation = OpDelete then
      error "%s: partition already deleted, you cannot use it in '%s' option"
        name option;

    partition

(* Handle --ignore option. *)
let () =
  List.iter (
    fun dev ->
      let p = find_partition ~option:"--ignore" dev in
      p.p_operation <- OpIgnore
  ) ignores

(* Handle --delete option. *)
let () =
  List.iter (
    fun dev ->
      let p = find_partition ~option:"--delete" dev in
      p.p_operation <- OpDelete
  ) deletes

(* Helper function to mark a partition for resizing.  It prevents the
 * user from trying to mark the same partition twice.  If the force
 * flag is given, then we will allow the user to shrink the partition
 * even if we think that would destroy the content.
 *)
let mark_partition_for_resize ~option ?(force = false) p newsize =
  let name = p.p_name in
  let oldsize = p.p_size in

  (match p.p_operation with
   | OpResize _ ->
       error "%s: this partition has already been marked for resizing"
         name
   | OpIgnore | OpDelete ->
       (* This error should have been caught already by find_partition ... *)
       error "%s: this partition has already been ignored or deleted"
         name
   | OpCopy -> ()
  );

  (* Only do something if the size will change. *)
  if oldsize <> newsize then (
    let bigger = newsize > oldsize in

    if not bigger && not force then (
      (* Check if this contains filesystem content, and how big that is
       * and whether we will destroy any content by shrinking this.
       *)
      match p.p_type with
      | ContentUnknown ->
          error "%s: This partition has unknown content which might be damaged by shrinking it.  If you want to shrink this partition, you need to use the '--resize-force' option, but that could destroy any data on this partition.  (This error came from '%s' option on the command line.)"
            name option
      | ContentPV size when size > newsize ->
          error "%s: This partition has contains an LVM physical volume which will be damaged by shrinking it below %Ld bytes (user asked to shrink it to %Ld bytes).  If you want to shrink this partition, you need to use the '--resize-force' option, but that could destroy any data on this partition.  (This error came from '%s' option on the command line.)"
            name size newsize option
      | ContentPV _ -> ()
      | ContentFS (fstype, size) when size > newsize ->
          error "%s: This partition has contains a %s filesystem which will be damaged by shrinking it below %Ld bytes (user asked to shrink it to %Ld bytes).  If you want to shrink this partition, you need to use the '--resize-force' option, but that could destroy any data on this partition.  (This error came from '%s' option on the command line.)"
            name fstype size newsize option
      | ContentFS _ -> ()
    );

    p.p_operation <- OpResize newsize
  )

(* Handle --resize and --resize-force options. *)
let () =
  let do_resize ~option ?(force = false) arg =
    (* Argument is "dev=size". *)
    let dev, sizefield =
      try
        let i = String.index arg '=' in
        let n = String.length arg - (i+1) in
        if n == 0 then raise Not_found;
        String.sub arg 0 i, String.sub arg (i+1) n
      with Not_found ->
        error "%s: missing size field in '%s' option" arg option in

    let p = find_partition ~option dev in

    (* Parse the size field. *)
    let oldsize = p.p_size in
    let newsize = parse_size oldsize sizefield in

    if newsize <= 0L then
      error "%s: new partition size is zero or negative" dev;

    mark_partition_for_resize ~option ~force p newsize
  in

  List.iter (do_resize ~option:"--resize") resizes;
  List.iter (do_resize ~option:"--resize-force" ~force:true) resizes_force

(* Helper function calculates the surplus space, given the total
 * required so far for the current partition layout, compared to
 * the size of the target disk.  If the return value >= 0 then it's
 * a surplus, if it is < 0 then it's a deficit.
 *)
let calculate_surplus () =
  (* We need some overhead for partitioning.  Worst case would be for
   * EFI partitioning + massive per-partition alignment.
   *)
  let nr_partitions = List.length partitions in
  let overhead = (Int64.of_int sectsize) *^ (
    2L *^ 64L +^                                 (* GPT start and end *)
    (64L *^ (Int64.of_int (nr_partitions + 1)))  (* Maximum alignment *)
  ) +^
  (Int64.of_int (max_bootloader - 64 * 512)) in  (* Bootloader *)

  let required = List.fold_left (
    fun total p ->
      let newsize =
        match p.p_operation with
        | OpCopy | OpIgnore -> p.p_size
        | OpDelete -> 0L
        | OpResize newsize -> newsize in
      total +^ newsize
  ) 0L partitions in

  outsize -^ (required +^ overhead)

(* Handle --expand and --shrink options. *)
let () =
  if expand <> None && shrink <> None then
    error "you cannot use options --expand and --shrink together";

  if expand <> None || shrink <> None then (
    let surplus = calculate_surplus () in

    if debug then
      eprintf "surplus before --expand or --shrink: %Ld\n" surplus;

    (match expand with
     | None -> ()
     | Some dev ->
         if surplus < 0L then
           error "You cannot use --expand when there is no surplus space to expand into.  You need to make the target disk larger by at least %s."
             (human_size (Int64.neg surplus));

         let option = "--expand" in
         let p = find_partition ~option dev in
         let oldsize = p.p_size in
         mark_partition_for_resize ~option p (oldsize +^ surplus)
    );
    (match shrink with
     | None -> ()
     | Some dev ->
         if surplus > 0L then
           error "You cannot use --shrink when there is no deficit (see 'deficit' in the virt-resize(1) man page).";

         let option = "--shrink" in
         let p = find_partition ~option dev in
         let oldsize = p.p_size in
         mark_partition_for_resize ~option p (oldsize +^ surplus)
    )
  )

(* Calculate the final surplus.
 * At this point, this number must be >= 0.
 *)
let surplus =
  let surplus = calculate_surplus () in

  if surplus < 0L then (
    let deficit = Int64.neg surplus in
    error "There is a deficit of %Ld bytes (%s).  You need to make the target disk larger by at least this amount or adjust your resizing requests."
      deficit (human_size deficit)
  );

  surplus

(* Mark the --lv-expand LVs. *)
let () =
  let hash = Hashtbl.create 13 in
  List.iter (fun ({ lv_name = name } as lv) -> Hashtbl.add hash name lv) lvs;

  List.iter (
    fun name ->
      let lv =
        try Hashtbl.find hash name
        with Not_found ->
          error "%s: logical volume not found in the source disk image (this error came from '--lv-expand' option on the command line).  Try running this command: virt-filesystems --logical-volumes --long -a %s"
            name infile in
      lv.lv_operation <- LVOpExpand
  ) lv_expands

(* Print a summary of what we will do. *)
let () =
  flush stderr;

  if not quiet then (
    printf "**********\n\n";
    printf "Summary of changes:\n\n";

    List.iter (
      fun ({ p_name = name; p_size = oldsize } as p) ->
        let text =
          match p.p_operation with
          | OpCopy ->
              sprintf "%s: This partition will be left alone." name
          | OpIgnore ->
              sprintf "%s: This partition will be created, but the contents will be ignored (ie. not copied to the target)." name
          | OpDelete ->
              sprintf "%s: This partition will be deleted." name
          | OpResize newsize ->
              sprintf "%s: This partition will be resized from %s to %s."
                name (human_size oldsize) (human_size newsize) ^
              if can_expand_content p.p_type then (
                sprintf "  The %s on %s will be expanded using the '%s' method."
                  (string_of_partition_content_no_size p.p_type)
                  name
                  (string_of_expand_content_method
                     (expand_content_method p.p_type))
              ) else "" in

        wrap ~hanging:4 (text ^ "\n\n")
    ) partitions;

    List.iter (
      fun ({ lv_name = name } as lv) ->
        match lv.lv_operation with
        | LVOpNone -> ()
        | LVOpExpand ->
            let text =
              sprintf "%s: This logical volume will be expanded to maximum size."
                name ^
              if can_expand_content lv.lv_type then (
                sprintf "  The %s on %s will be expanded using the '%s' method."
                  (string_of_partition_content_no_size lv.lv_type)
                  name
                  (string_of_expand_content_method
                     (expand_content_method lv.lv_type))
              ) else "" in

            wrap ~hanging:4 (text ^ "\n\n")
    ) lvs;

    if surplus > 0L then (
      let text =
        sprintf "There is a surplus of %s." (human_size surplus) ^
        if extra_partition then (
          if surplus >= min_extra_partition then
            sprintf "  An extra partition will be created for the surplus."
          else
            sprintf "  The surplus space is not large enough for an extra partition to be created and so it will just be ignored."
        ) else
          sprintf "  The surplus space will be ignored.  Run a partitioning program in the guest to partition this extra space if you want." in

      wrap (text ^ "\n\n")
    );

    printf "**********\n";
    flush stdout
  );

  if dryrun then exit 0

(* Create a partition table.
 *
 * We *must* do this before copying the bootloader across, and copying
 * the bootloader must be careful not to disturb this partition table
 * (RHBZ#633766).  There are two reasons for this:
 *
 * (1) The 'parted' library is stupid and broken.  In many ways.  In
 * this particular instance the stupid and broken bit is that it
 * overwrites the whole boot sector when initializating a partition
 * table.  (Upstream don't consider this obvious problem to be a bug).
 *
 * (2) GPT has a backup partition table located at the end of the disk.
 * It's non-movable, because the primary GPT contains fixed references
 * to both the size of the disk and the backup partition table at the
 * end.  This would be a problem for any resize that didn't either
 * carefully move the backup GPT (and rewrite those references) or
 * recreate the whole partition table from scratch.
 *)
let g, parttype =
  let parttype = g#part_get_parttype "/dev/sda" in
  if debug then eprintf "partition table type: %s\n%!" parttype;

  (* Try hard to initialize the partition table.  This might involve
   * relaunching another handle.
   *)
  if not quiet then
    printf "Setting up initial partition table on %s ...\n%!" outfile;

  let last_error = ref "" in
  let rec initialize_partition_table g attempts =
    let ok =
      try g#part_init "/dev/sdb" parttype; true
      with G.Error error -> last_error := error; false in
    if ok then g, true
    else if attempts > 0 then (
      g#zero "/dev/sdb";
      g#sync ();
      g#close ();

      let g = connect_both_disks () in
      initialize_partition_table g (attempts-1)
    )
    else g, false
  in

  let g, ok = initialize_partition_table g 5 in
  if not ok then
    error "Failed to initialize the partition table on the target disk.  You need to wipe or recreate the target disk and then run virt-resize again.\n\nThe underlying error was: %s" !last_error;

  g, parttype

(* Copy the bootloader across.
 * Don't disturb the partition table that we just wrote.
 * https://secure.wikimedia.org/wikipedia/en/wiki/Master_Boot_Record
 * https://secure.wikimedia.org/wikipedia/en/wiki/GUID_Partition_Table
 *)
let () =
  if copy_boot_loader then (
    let bootsect = g#pread_device "/dev/sda" 446 0L in
    if String.length bootsect < 446 then
      error "pread-device: short read";
    ignore (g#pwrite_device "/dev/sdb" bootsect 0L);

    let start =
      if parttype <> "gpt" then 512L
      else
        (* XXX With 4K sectors does GPT just fit more entries in a
         * sector, or does it always use 34 sectors?
         *)
        17408L in

    let loader = g#pread_device "/dev/sda" max_bootloader start in
    if String.length loader < max_bootloader then
      error "pread-device: short read";
    ignore (g#pwrite_device "/dev/sdb" loader start)
  )

(* Repartition the target disk. *)
let () =
  (* The first partition must start at the same position as the old
   * first partition.  Old virt-resize used to align this to 64
   * sectors, but I suspect this is the cause of boot failures, so
   * let's not do this.
   *)
  let sectsize = Int64.of_int sectsize in
  let start = ref ((List.hd partitions).p_part.G.part_start /^ sectsize) in

  (* This counts the partition numbers on the target disk. *)
  let nextpart = ref 1 in

  let rec repartition = function
    | [] -> ()
    | p :: ps ->
        let target_partnum =
          match p.p_operation with
          | OpDelete -> None            (* do nothing *)
          | OpIgnore | OpCopy ->        (* new partition, same size *)
              (* Size in sectors. *)
              let size = (p.p_size +^ sectsize -^ 1L) /^ sectsize in
              Some (add_partition size)
          | OpResize newsize ->         (* new partition, resized *)
              (* Size in sectors. *)
              let size = (newsize +^ sectsize -^ 1L) /^ sectsize in
              Some (add_partition size) in

        (match target_partnum with
         | None ->                      (* OpDelete *)
             ()
         | Some target_partnum ->       (* not OpDelete *)
             p.p_target_partnum <- target_partnum;

             (* Set bootable and MBR IDs *)
             if p.p_bootable then
               g#part_set_bootable "/dev/sdb" target_partnum true;

             (match p.p_mbr_id with
              | None -> ()
              | Some mbr_id ->
                  g#part_set_mbr_id "/dev/sdb" target_partnum mbr_id
             );
        );

        repartition ps

  (* Add a partition, returns the partition number on the target. *)
  and add_partition size (* in SECTORS *) =
    let target_partnum, end_ =
      if !nextpart <= 3 || parttype <> "msdos" then (
        let target_partnum = !nextpart in
        let end_ = !start +^ size -^ 1L in
        g#part_add "/dev/sdb" "primary" !start end_;
        incr nextpart;
        target_partnum, end_
      ) else (
        if !nextpart = 4 then (
          g#part_add "/dev/sdb" "extended" !start (-1L);
          incr nextpart;
          start := !start +^ 64L
        );
        let target_partnum = !nextpart in
        let end_ = !start +^ size -^ 1L in
        g#part_add "/dev/sdb" "logical" !start end_;
        incr nextpart;
        target_partnum, end_
      ) in

    (* Start of next partition + alignment to 64 sectors. *)
    start := ((end_ +^ 1L) +^ 63L) &^ (~^ 63L);

    target_partnum
  in

  repartition partitions;

  (* Create the surplus partition. *)
  if extra_partition && surplus >= min_extra_partition then (
    let size = outsize /^ sectsize -^ 64L -^ !start in
    ignore (add_partition size)
  )

(* Copy over the data. *)
let () =
  let rec copy_data = function
    | [] -> ()

    | ({ p_name = source; p_target_partnum = target_partnum;
         p_operation = (OpCopy | OpResize _) } as p) :: ps
        when target_partnum > 0 ->
        let oldsize = p.p_size in
        let newsize =
          match p.p_operation with OpResize s -> s | _ -> oldsize in

        let copysize = if newsize < oldsize then newsize else oldsize in

        let target = sprintf "/dev/sdb%d" target_partnum in

        if not quiet then
          printf "Copying %s ...\n%!" source;

        g#copy_size source target copysize;

        copy_data ps

    | _ :: ps ->
        copy_data ps
  in

  copy_data partitions

(* After copying the data over we must shut down and restart the
 * appliance in order to expand the content.  The reason for this may
 * not be obvious, but it's because otherwise we'll have duplicate VGs
 * (the old VG(s) and the new VG(s)) which breaks LVM.
 *
 * The restart is only required if we're going to expand something.
 *)
let to_be_expanded =
  List.exists (
    function
    | ({ p_operation = OpResize _ } as p) -> can_expand_content p.p_type
    | _ -> false
  ) partitions
  || List.exists (
    function
    | ({ lv_operation = LVOpExpand } as lv) -> can_expand_content lv.lv_type
    | _ -> false
  ) lvs

let g =
  if to_be_expanded then (
    g#umount_all ();
    g#sync ();
    g#close ();

    let g = new G.guestfs () in
    if debug then g#set_trace true;
    g#add_drive_opts ?format:output_format ~readonly:false outfile;
    if not quiet then Progress.set_up_progress_bar g;
    g#launch ();

    g (* Return new handle. *)
  )
  else g (* Return existing handle. *)

let () =
  if to_be_expanded then (
    (* Helper function to expand partition or LV content. *)
    let do_expand_content target = function
      | PVResize -> g#pvresize target
      | Resize2fs ->
          g#e2fsck_f target;
          g#resize2fs target
      | NTFSResize -> g#ntfsresize target
    in

    (* Expand partition content as required. *)
    List.iter (
      function
      | ({ p_operation = OpResize _ } as p) when can_expand_content p.p_type ->
          let source = p.p_name in
          let target = sprintf "/dev/sda%d" p.p_target_partnum in
          let meth = expand_content_method p.p_type in

          if not quiet then
            printf "Expanding %s%s using the '%s' method ...\n%!"
              source
              (if source <> target then sprintf " (now %s)" target else "")
              (string_of_expand_content_method meth);

          do_expand_content target meth
      | _ -> ()
    ) partitions;

    (* Expand logical volume content as required. *)
    List.iter (
      function
      | ({ lv_operation = LVOpExpand } as lv) when can_expand_content lv.lv_type ->
          let name = lv.lv_name in
          let meth = expand_content_method lv.lv_type in

          if not quiet then
            printf "Expanding %s using the '%s' method ...\n%!"
              name
              (string_of_expand_content_method meth);

          (* First expand the LV itself to maximum size. *)
          g#lvresize_free name 100;

          (* Then expand the content in the LV. *)
          do_expand_content name meth
      | _ -> ()
    ) lvs
  )

(* Finished.  Unmount disks and exit. *)
let () =
  g#umount_all ();
  g#sync ();
  g#close ();

  if not quiet then (
    print_newline ();
    wrap "Resize operation completed with no errors.  Before deleting the old disk, carefully check that the resized disk boots and works correctly.\n";
  );

  exit 0