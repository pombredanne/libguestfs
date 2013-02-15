(* libguestfs
 * Copyright (C) 2009-2013 Red Hat Inc.
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *)

(* Please read generator/README first. *)

open Types
open Actions

(* Create list of optional groups. *)
let optgroups =
  let h = Hashtbl.create 13 in
  List.iter (
    function
    | { optional = Some group } as fn ->
      let fns = try Hashtbl.find h group with Not_found -> [] in
      Hashtbl.replace h group (fn :: fns)
    | _ -> ()
  ) daemon_functions;
  let groups = Hashtbl.fold (fun k _ ks -> k :: ks) h [] in
  let groups =
    List.map (
      fun group ->
        (* Ensure the functions are sorted on the name field. *)
        let fns = Hashtbl.find h group in
        let cmp { name = n1 } { name = n2 } = compare n1 n2 in
        let fns = List.sort cmp fns in
        group, fns
    ) groups in
  List.sort (fun x y -> compare (fst x) (fst y)) groups
