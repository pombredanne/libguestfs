/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM:
 *   src/generator.ml
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2010 Red Hat Inc.
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
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#include <guestfs.h>
#include "c-ctype.h"
#include "full-write.h"
#include "xstrtol.h"
#include "fish.h"

void list_commands (void)
{
  printf ("    %-16s     %s\n", _("Command"), _("Description"));
  list_builtin_commands ();
  printf ("%-20s %s\n", "add-cdrom", _("add a CD-ROM disk image to examine"));
  printf ("%-20s %s\n", "add-drive", _("add an image to examine or modify"));
  printf ("%-20s %s\n", "add-drive-ro", _("add a drive in snapshot mode (read-only)"));
  printf ("%-20s %s\n", "add-drive-ro-with-if", _("add a drive read-only specifying the QEMU block emulation to use"));
  printf ("%-20s %s\n", "add-drive-with-if", _("add a drive specifying the QEMU block emulation to use"));
  printf ("%-20s %s\n", "aug-close", _("close the current Augeas handle"));
  printf ("%-20s %s\n", "aug-defnode", _("define an Augeas node"));
  printf ("%-20s %s\n", "aug-defvar", _("define an Augeas variable"));
  printf ("%-20s %s\n", "aug-get", _("look up the value of an Augeas path"));
  printf ("%-20s %s\n", "aug-init", _("create a new Augeas handle"));
  printf ("%-20s %s\n", "aug-insert", _("insert a sibling Augeas node"));
  printf ("%-20s %s\n", "aug-load", _("load files into the tree"));
  printf ("%-20s %s\n", "aug-ls", _("list Augeas nodes under augpath"));
  printf ("%-20s %s\n", "aug-match", _("return Augeas nodes which match augpath"));
  printf ("%-20s %s\n", "aug-mv", _("move Augeas node"));
  printf ("%-20s %s\n", "aug-rm", _("remove an Augeas path"));
  printf ("%-20s %s\n", "aug-save", _("write all pending Augeas changes to disk"));
  printf ("%-20s %s\n", "aug-set", _("set Augeas path to value"));
  printf ("%-20s %s\n", "available", _("test availability of some parts of the API"));
  printf ("%-20s %s\n", "blockdev-flushbufs", _("flush device buffers"));
  printf ("%-20s %s\n", "blockdev-getbsz", _("get blocksize of block device"));
  printf ("%-20s %s\n", "blockdev-getro", _("is block device set to read-only"));
  printf ("%-20s %s\n", "blockdev-getsize64", _("get total size of device in bytes"));
  printf ("%-20s %s\n", "blockdev-getss", _("get sectorsize of block device"));
  printf ("%-20s %s\n", "blockdev-getsz", _("get total size of device in 512-byte sectors"));
  printf ("%-20s %s\n", "blockdev-rereadpt", _("reread partition table"));
  printf ("%-20s %s\n", "blockdev-setbsz", _("set blocksize of block device"));
  printf ("%-20s %s\n", "blockdev-setro", _("set block device to read-only"));
  printf ("%-20s %s\n", "blockdev-setrw", _("set block device to read-write"));
  printf ("%-20s %s\n", "case-sensitive-path", _("return true path on case-insensitive filesystem"));
  printf ("%-20s %s\n", "cat", _("list the contents of a file"));
  printf ("%-20s %s\n", "checksum", _("compute MD5, SHAx or CRC checksum of file"));
  printf ("%-20s %s\n", "chmod", _("change file mode"));
  printf ("%-20s %s\n", "chown", _("change file owner and group"));
  printf ("%-20s %s\n", "command", _("run a command from the guest filesystem"));
  printf ("%-20s %s\n", "command-lines", _("run a command, returning lines"));
  printf ("%-20s %s\n", "config", _("add qemu parameters"));
  printf ("%-20s %s\n", "cp", _("copy a file"));
  printf ("%-20s %s\n", "cp-a", _("copy a file or directory recursively"));
  printf ("%-20s %s\n", "dd", _("copy from source to destination using dd"));
  printf ("%-20s %s\n", "debug", _("debugging and internals"));
  printf ("%-20s %s\n", "df", _("report file system disk space usage"));
  printf ("%-20s %s\n", "df-h", _("report file system disk space usage (human readable)"));
  printf ("%-20s %s\n", "dmesg", _("return kernel messages"));
  printf ("%-20s %s\n", "download", _("download a file to the local machine"));
  printf ("%-20s %s\n", "drop-caches", _("drop kernel page cache, dentries and inodes"));
  printf ("%-20s %s\n", "du", _("estimate file space usage"));
  printf ("%-20s %s\n", "e2fsck-f", _("check an ext2/ext3 filesystem"));
  printf ("%-20s %s\n", "echo-daemon", _("echo arguments back to the client"));
  printf ("%-20s %s\n", "egrep", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "egrepi", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "equal", _("test if two files have equal contents"));
  printf ("%-20s %s\n", "exists", _("test if file or directory exists"));
  printf ("%-20s %s\n", "fallocate", _("preallocate a file in the guest filesystem"));
  printf ("%-20s %s\n", "fgrep", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "fgrepi", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "file", _("determine file type"));
  printf ("%-20s %s\n", "filesize", _("return the size of the file in bytes"));
  printf ("%-20s %s\n", "fill", _("fill a file with octets"));
  printf ("%-20s %s\n", "find", _("find all files and directories"));
  printf ("%-20s %s\n", "find0", _("find all files and directories, returning NUL-separated list"));
  printf ("%-20s %s\n", "fsck", _("run the filesystem checker"));
  printf ("%-20s %s\n", "get-append", _("get the additional kernel options"));
  printf ("%-20s %s\n", "get-autosync", _("get autosync mode"));
  printf ("%-20s %s\n", "get-direct", _("get direct appliance mode flag"));
  printf ("%-20s %s\n", "get-e2label", _("get the ext2/3/4 filesystem label"));
  printf ("%-20s %s\n", "get-e2uuid", _("get the ext2/3/4 filesystem UUID"));
  printf ("%-20s %s\n", "get-memsize", _("get memory allocated to the qemu subprocess"));
  printf ("%-20s %s\n", "get-path", _("get the search path"));
  printf ("%-20s %s\n", "get-pid", _("get PID of qemu subprocess"));
  printf ("%-20s %s\n", "get-qemu", _("get the qemu binary"));
  printf ("%-20s %s\n", "get-recovery-proc", _("get recovery process enabled flag"));
  printf ("%-20s %s\n", "get-selinux", _("get SELinux enabled flag"));
  printf ("%-20s %s\n", "get-state", _("get the current state"));
  printf ("%-20s %s\n", "get-trace", _("get command trace enabled flag"));
  printf ("%-20s %s\n", "get-verbose", _("get verbose mode"));
  printf ("%-20s %s\n", "getcon", _("get SELinux security context"));
  printf ("%-20s %s\n", "getxattrs", _("list extended attributes of a file or directory"));
  printf ("%-20s %s\n", "glob-expand", _("expand a wildcard path"));
  printf ("%-20s %s\n", "grep", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "grepi", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "grub-install", _("install GRUB"));
  printf ("%-20s %s\n", "head", _("return first 10 lines of a file"));
  printf ("%-20s %s\n", "head-n", _("return first N lines of a file"));
  printf ("%-20s %s\n", "hexdump", _("dump a file in hexadecimal"));
  printf ("%-20s %s\n", "initrd-cat", _("list the contents of a single file in an initrd"));
  printf ("%-20s %s\n", "initrd-list", _("list files in an initrd"));
  printf ("%-20s %s\n", "inotify-add-watch", _("add an inotify watch"));
  printf ("%-20s %s\n", "inotify-close", _("close the inotify handle"));
  printf ("%-20s %s\n", "inotify-files", _("return list of watched files that had events"));
  printf ("%-20s %s\n", "inotify-init", _("create an inotify handle"));
  printf ("%-20s %s\n", "inotify-read", _("return list of inotify events"));
  printf ("%-20s %s\n", "inotify-rm-watch", _("remove an inotify watch"));
  printf ("%-20s %s\n", "is-busy", _("is busy processing a command"));
  printf ("%-20s %s\n", "is-config", _("is in configuration state"));
  printf ("%-20s %s\n", "is-dir", _("test if file exists"));
  printf ("%-20s %s\n", "is-file", _("test if file exists"));
  printf ("%-20s %s\n", "is-launching", _("is launching subprocess"));
  printf ("%-20s %s\n", "is-ready", _("is ready to accept commands"));
  printf ("%-20s %s\n", "kill-subprocess", _("kill the qemu subprocess"));
  printf ("%-20s %s\n", "launch", _("launch the qemu subprocess"));
  printf ("%-20s %s\n", "lchown", _("change file owner and group"));
  printf ("%-20s %s\n", "lgetxattrs", _("list extended attributes of a file or directory"));
  printf ("%-20s %s\n", "list-devices", _("list the block devices"));
  printf ("%-20s %s\n", "list-partitions", _("list the partitions"));
  printf ("%-20s %s\n", "ll", _("list the files in a directory (long format)"));
  printf ("%-20s %s\n", "ln", _("create a hard link"));
  printf ("%-20s %s\n", "ln-f", _("create a hard link"));
  printf ("%-20s %s\n", "ln-s", _("create a symbolic link"));
  printf ("%-20s %s\n", "ln-sf", _("create a symbolic link"));
  printf ("%-20s %s\n", "lremovexattr", _("remove extended attribute of a file or directory"));
  printf ("%-20s %s\n", "ls", _("list the files in a directory"));
  printf ("%-20s %s\n", "lsetxattr", _("set extended attribute of a file or directory"));
  printf ("%-20s %s\n", "lstat", _("get file information for a symbolic link"));
  printf ("%-20s %s\n", "lstatlist", _("lstat on multiple files"));
  printf ("%-20s %s\n", "lvcreate", _("create an LVM volume group"));
  printf ("%-20s %s\n", "lvm-remove-all", _("remove all LVM LVs, VGs and PVs"));
  printf ("%-20s %s\n", "lvremove", _("remove an LVM logical volume"));
  printf ("%-20s %s\n", "lvrename", _("rename an LVM logical volume"));
  printf ("%-20s %s\n", "lvresize", _("resize an LVM logical volume"));
  printf ("%-20s %s\n", "lvs", _("list the LVM logical volumes (LVs)"));
  printf ("%-20s %s\n", "lvs-full", _("list the LVM logical volumes (LVs)"));
  printf ("%-20s %s\n", "lxattrlist", _("lgetxattr on multiple files"));
  printf ("%-20s %s\n", "mkdir", _("create a directory"));
  printf ("%-20s %s\n", "mkdir-mode", _("create a directory with a particular mode"));
  printf ("%-20s %s\n", "mkdir-p", _("create a directory and parents"));
  printf ("%-20s %s\n", "mkdtemp", _("create a temporary directory"));
  printf ("%-20s %s\n", "mke2fs-J", _("make ext2/3/4 filesystem with external journal"));
  printf ("%-20s %s\n", "mke2fs-JL", _("make ext2/3/4 filesystem with external journal"));
  printf ("%-20s %s\n", "mke2fs-JU", _("make ext2/3/4 filesystem with external journal"));
  printf ("%-20s %s\n", "mke2journal", _("make ext2/3/4 external journal"));
  printf ("%-20s %s\n", "mke2journal-L", _("make ext2/3/4 external journal with label"));
  printf ("%-20s %s\n", "mke2journal-U", _("make ext2/3/4 external journal with UUID"));
  printf ("%-20s %s\n", "mkfifo", _("make FIFO (named pipe)"));
  printf ("%-20s %s\n", "mkfs", _("make a filesystem"));
  printf ("%-20s %s\n", "mkfs-b", _("make a filesystem with block size"));
  printf ("%-20s %s\n", "mkmountpoint", _("create a mountpoint"));
  printf ("%-20s %s\n", "mknod", _("make block, character or FIFO devices"));
  printf ("%-20s %s\n", "mknod-b", _("make block device node"));
  printf ("%-20s %s\n", "mknod-c", _("make char device node"));
  printf ("%-20s %s\n", "mkswap", _("create a swap partition"));
  printf ("%-20s %s\n", "mkswap-L", _("create a swap partition with a label"));
  printf ("%-20s %s\n", "mkswap-U", _("create a swap partition with an explicit UUID"));
  printf ("%-20s %s\n", "mkswap-file", _("create a swap file"));
  printf ("%-20s %s\n", "modprobe", _("load a kernel module"));
  printf ("%-20s %s\n", "mount", _("mount a guest disk at a position in the filesystem"));
  printf ("%-20s %s\n", "mount-loop", _("mount a file using the loop device"));
  printf ("%-20s %s\n", "mount-options", _("mount a guest disk with mount options"));
  printf ("%-20s %s\n", "mount-ro", _("mount a guest disk, read-only"));
  printf ("%-20s %s\n", "mount-vfs", _("mount a guest disk with mount options and vfstype"));
  printf ("%-20s %s\n", "mountpoints", _("show mountpoints"));
  printf ("%-20s %s\n", "mounts", _("show mounted filesystems"));
  printf ("%-20s %s\n", "mv", _("move a file"));
  printf ("%-20s %s\n", "ntfs-3g-probe", _("probe NTFS volume"));
  printf ("%-20s %s\n", "part-add", _("add a partition to the device"));
  printf ("%-20s %s\n", "part-disk", _("partition whole disk with a single primary partition"));
  printf ("%-20s %s\n", "part-get-parttype", _("get the partition table type"));
  printf ("%-20s %s\n", "part-init", _("create an empty partition table"));
  printf ("%-20s %s\n", "part-list", _("list partitions on a device"));
  printf ("%-20s %s\n", "part-set-bootable", _("make a partition bootable"));
  printf ("%-20s %s\n", "part-set-name", _("set partition name"));
  printf ("%-20s %s\n", "ping-daemon", _("ping the guest daemon"));
  printf ("%-20s %s\n", "pread", _("read part of a file"));
  printf ("%-20s %s\n", "pvcreate", _("create an LVM physical volume"));
  printf ("%-20s %s\n", "pvremove", _("remove an LVM physical volume"));
  printf ("%-20s %s\n", "pvresize", _("resize an LVM physical volume"));
  printf ("%-20s %s\n", "pvs", _("list the LVM physical volumes (PVs)"));
  printf ("%-20s %s\n", "pvs-full", _("list the LVM physical volumes (PVs)"));
  printf ("%-20s %s\n", "read-file", _("read a file"));
  printf ("%-20s %s\n", "read-lines", _("read file as lines"));
  printf ("%-20s %s\n", "readdir", _("read directories entries"));
  printf ("%-20s %s\n", "readlink", _("read the target of a symbolic link"));
  printf ("%-20s %s\n", "readlinklist", _("readlink on multiple files"));
  printf ("%-20s %s\n", "realpath", _("canonicalized absolute pathname"));
  printf ("%-20s %s\n", "removexattr", _("remove extended attribute of a file or directory"));
  printf ("%-20s %s\n", "resize2fs", _("resize an ext2/ext3 filesystem"));
  printf ("%-20s %s\n", "rm", _("remove a file"));
  printf ("%-20s %s\n", "rm-rf", _("remove a file or directory recursively"));
  printf ("%-20s %s\n", "rmdir", _("remove a directory"));
  printf ("%-20s %s\n", "rmmountpoint", _("remove a mountpoint"));
  printf ("%-20s %s\n", "scrub-device", _("scrub (securely wipe) a device"));
  printf ("%-20s %s\n", "scrub-file", _("scrub (securely wipe) a file"));
  printf ("%-20s %s\n", "scrub-freespace", _("scrub (securely wipe) free space"));
  printf ("%-20s %s\n", "set-append", _("add options to kernel command line"));
  printf ("%-20s %s\n", "set-autosync", _("set autosync mode"));
  printf ("%-20s %s\n", "set-direct", _("enable or disable direct appliance mode"));
  printf ("%-20s %s\n", "set-e2label", _("set the ext2/3/4 filesystem label"));
  printf ("%-20s %s\n", "set-e2uuid", _("set the ext2/3/4 filesystem UUID"));
  printf ("%-20s %s\n", "set-memsize", _("set memory allocated to the qemu subprocess"));
  printf ("%-20s %s\n", "set-path", _("set the search path"));
  printf ("%-20s %s\n", "set-qemu", _("set the qemu binary"));
  printf ("%-20s %s\n", "set-recovery-proc", _("enable or disable the recovery process"));
  printf ("%-20s %s\n", "set-selinux", _("set SELinux enabled or disabled at appliance boot"));
  printf ("%-20s %s\n", "set-trace", _("enable or disable command traces"));
  printf ("%-20s %s\n", "set-verbose", _("set verbose mode"));
  printf ("%-20s %s\n", "setcon", _("set SELinux security context"));
  printf ("%-20s %s\n", "setxattr", _("set extended attribute of a file or directory"));
  printf ("%-20s %s\n", "sfdisk", _("create partitions on a block device"));
  printf ("%-20s %s\n", "sfdiskM", _("create partitions on a block device"));
  printf ("%-20s %s\n", "sfdisk-N", _("modify a single partition on a block device"));
  printf ("%-20s %s\n", "sfdisk-disk-geometry", _("display the disk geometry from the partition table"));
  printf ("%-20s %s\n", "sfdisk-kernel-geometry", _("display the kernel geometry"));
  printf ("%-20s %s\n", "sfdisk-l", _("display the partition table"));
  printf ("%-20s %s\n", "sh", _("run a command via the shell"));
  printf ("%-20s %s\n", "sh-lines", _("run a command via the shell returning lines"));
  printf ("%-20s %s\n", "sleep", _("sleep for some seconds"));
  printf ("%-20s %s\n", "stat", _("get file information"));
  printf ("%-20s %s\n", "statvfs", _("get file system statistics"));
  printf ("%-20s %s\n", "strings", _("print the printable strings in a file"));
  printf ("%-20s %s\n", "strings-e", _("print the printable strings in a file"));
  printf ("%-20s %s\n", "swapoff-device", _("disable swap on device"));
  printf ("%-20s %s\n", "swapoff-file", _("disable swap on file"));
  printf ("%-20s %s\n", "swapoff-label", _("disable swap on labeled swap partition"));
  printf ("%-20s %s\n", "swapoff-uuid", _("disable swap on swap partition by UUID"));
  printf ("%-20s %s\n", "swapon-device", _("enable swap on device"));
  printf ("%-20s %s\n", "swapon-file", _("enable swap on file"));
  printf ("%-20s %s\n", "swapon-label", _("enable swap on labeled swap partition"));
  printf ("%-20s %s\n", "swapon-uuid", _("enable swap on swap partition by UUID"));
  printf ("%-20s %s\n", "sync", _("sync disks, writes are flushed through to the disk image"));
  printf ("%-20s %s\n", "tail", _("return last 10 lines of a file"));
  printf ("%-20s %s\n", "tail-n", _("return last N lines of a file"));
  printf ("%-20s %s\n", "tar-in", _("unpack tarfile to directory"));
  printf ("%-20s %s\n", "tar-out", _("pack directory into tarfile"));
  printf ("%-20s %s\n", "tgz-in", _("unpack compressed tarball to directory"));
  printf ("%-20s %s\n", "tgz-out", _("pack directory into compressed tarball"));
  printf ("%-20s %s\n", "touch", _("update file timestamps or create a new file"));
  printf ("%-20s %s\n", "truncate", _("truncate a file to zero size"));
  printf ("%-20s %s\n", "truncate-size", _("truncate a file to a particular size"));
  printf ("%-20s %s\n", "tune2fs-l", _("get ext2/ext3/ext4 superblock details"));
  printf ("%-20s %s\n", "umask", _("set file mode creation mask (umask)"));
  printf ("%-20s %s\n", "umount", _("unmount a filesystem"));
  printf ("%-20s %s\n", "umount-all", _("unmount all filesystems"));
  printf ("%-20s %s\n", "upload", _("upload a file from the local machine"));
  printf ("%-20s %s\n", "utimens", _("set timestamp of a file with nanosecond precision"));
  printf ("%-20s %s\n", "version", _("get the library version number"));
  printf ("%-20s %s\n", "vfs-type", _("get the Linux VFS type corresponding to a mounted device"));
  printf ("%-20s %s\n", "vg-activate", _("activate or deactivate some volume groups"));
  printf ("%-20s %s\n", "vg-activate-all", _("activate or deactivate all volume groups"));
  printf ("%-20s %s\n", "vgcreate", _("create an LVM volume group"));
  printf ("%-20s %s\n", "vgremove", _("remove an LVM volume group"));
  printf ("%-20s %s\n", "vgrename", _("rename an LVM volume group"));
  printf ("%-20s %s\n", "vgs", _("list the LVM volume groups (VGs)"));
  printf ("%-20s %s\n", "vgs-full", _("list the LVM volume groups (VGs)"));
  printf ("%-20s %s\n", "wc-c", _("count characters in a file"));
  printf ("%-20s %s\n", "wc-l", _("count lines in a file"));
  printf ("%-20s %s\n", "wc-w", _("count words in a file"));
  printf ("%-20s %s\n", "write-file", _("create a file"));
  printf ("%-20s %s\n", "zegrep", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "zegrepi", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "zero", _("write zeroes to the device"));
  printf ("%-20s %s\n", "zerofree", _("zero unused inodes and disk blocks on ext2/3 filesystem"));
  printf ("%-20s %s\n", "zfgrep", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "zfgrepi", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "zfile", _("determine file type inside a compressed file"));
  printf ("%-20s %s\n", "zgrep", _("return lines matching a pattern"));
  printf ("%-20s %s\n", "zgrepi", _("return lines matching a pattern"));
  printf ("    %s\n",          _("Use -h <cmd> / help <cmd> to show detailed help for a command."));
}

void display_command (const char *cmd)
{
  if (STRCASEEQ (cmd, "launch") || STRCASEEQ (cmd, "run"))
    pod2text ("launch", _("launch the qemu subprocess"), "=head1 SYNOPSIS\n\n launch\n\n=head1 DESCRIPTION\n\nInternally libguestfs is implemented by running a virtual machine\nusing L<qemu(1)>.\n\nYou should call this after configuring the handle\n(eg. adding drives) but before performing any actions.\n\nYou can use 'run' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "kill_subprocess") || STRCASEEQ (cmd, "kill-subprocess"))
    pod2text ("kill-subprocess", _("kill the qemu subprocess"), "=head1 SYNOPSIS\n\n kill-subprocess\n\n=head1 DESCRIPTION\n\nThis kills the qemu subprocess.  You should never need to call this.");
  else
  if (STRCASEEQ (cmd, "add_drive") || STRCASEEQ (cmd, "add-drive") || STRCASEEQ (cmd, "add"))
    pod2text ("add-drive", _("add an image to examine or modify"), "=head1 SYNOPSIS\n\n add-drive filename\n\n=head1 DESCRIPTION\n\nThis function adds a virtual machine disk image C<filename> to the\nguest.  The first time you call this function, the disk appears as IDE\ndisk 0 (C</dev/sda>) in the guest, the second time as C</dev/sdb>, and\nso on.\n\nYou don't necessarily need to be root when using libguestfs.  However\nyou obviously do need sufficient permissions to access the filename\nfor whatever operations you want to perform (ie. read access if you\njust want to read the image or write access if you want to modify the\nimage).\n\nThis is equivalent to the qemu parameter\nC<-drive file=filename,cache=off,if=...>.\n\nC<cache=off> is omitted in cases where it is not supported by\nthe underlying filesystem.\n\nC<if=...> is set at compile time by the configuration option\nC<./configure --with-drive-if=...>.  In the rare case where you\nmight need to change this at run time, use C<add_drive_with_if>\nor C<add_drive_ro_with_if>.\n\nNote that this call checks for the existence of C<filename>.  This\nstops you from specifying other types of drive which are supported\nby qemu such as C<nbd:> and C<http:> URLs.  To specify those, use\nthe general C<config> call instead.\n\nYou can use 'add' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "add_cdrom") || STRCASEEQ (cmd, "add-cdrom") || STRCASEEQ (cmd, "cdrom"))
    pod2text ("add-cdrom", _("add a CD-ROM disk image to examine"), "=head1 SYNOPSIS\n\n add-cdrom filename\n\n=head1 DESCRIPTION\n\nThis function adds a virtual CD-ROM disk image to the guest.\n\nThis is equivalent to the qemu parameter C<-cdrom filename>.\n\nNotes:\n\n=over 4\n\n=item *\n\nThis call checks for the existence of C<filename>.  This\nstops you from specifying other types of drive which are supported\nby qemu such as C<nbd:> and C<http:> URLs.  To specify those, use\nthe general C<config> call instead.\n\n=item *\n\nIf you just want to add an ISO file (often you use this as an\nefficient way to transfer large files into the guest), then you\nshould probably use C<add_drive_ro> instead.\n\n=back\n\nYou can use 'cdrom' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "add_drive_ro") || STRCASEEQ (cmd, "add-drive-ro") || STRCASEEQ (cmd, "add-ro"))
    pod2text ("add-drive-ro", _("add a drive in snapshot mode (read-only)"), "=head1 SYNOPSIS\n\n add-drive-ro filename\n\n=head1 DESCRIPTION\n\nThis adds a drive in snapshot mode, making it effectively\nread-only.\n\nNote that writes to the device are allowed, and will be seen for\nthe duration of the guestfs handle, but they are written\nto a temporary file which is discarded as soon as the guestfs\nhandle is closed.  We don't currently have any method to enable\nchanges to be committed, although qemu can support this.\n\nThis is equivalent to the qemu parameter\nC<-drive file=filename,snapshot=on,if=...>.\n\nC<if=...> is set at compile time by the configuration option\nC<./configure --with-drive-if=...>.  In the rare case where you\nmight need to change this at run time, use C<add_drive_with_if>\nor C<add_drive_ro_with_if>.\n\nNote that this call checks for the existence of C<filename>.  This\nstops you from specifying other types of drive which are supported\nby qemu such as C<nbd:> and C<http:> URLs.  To specify those, use\nthe general C<config> call instead.\n\nYou can use 'add-ro' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "config"))
    pod2text ("config", _("add qemu parameters"), "=head1 SYNOPSIS\n\n config qemuparam qemuvalue\n\n=head1 DESCRIPTION\n\nThis can be used to add arbitrary qemu command line parameters\nof the form C<-param value>.  Actually it's not quite arbitrary - we\nprevent you from setting some parameters which would interfere with\nparameters that we use.\n\nThe first character of C<param> string must be a C<-> (dash).\n\nC<value> can be NULL.");
  else
  if (STRCASEEQ (cmd, "set_qemu") || STRCASEEQ (cmd, "set-qemu") || STRCASEEQ (cmd, "qemu"))
    pod2text ("set-qemu", _("set the qemu binary"), "=head1 SYNOPSIS\n\n set-qemu qemu\n\n=head1 DESCRIPTION\n\nSet the qemu binary that we will use.\n\nThe default is chosen when the library was compiled by the\nconfigure script.\n\nYou can also override this by setting the C<LIBGUESTFS_QEMU>\nenvironment variable.\n\nSetting C<qemu> to C<NULL> restores the default qemu binary.\n\nYou can use 'qemu' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_qemu") || STRCASEEQ (cmd, "get-qemu"))
    pod2text ("get-qemu", _("get the qemu binary"), "=head1 SYNOPSIS\n\n get-qemu\n\n=head1 DESCRIPTION\n\nReturn the current qemu binary.\n\nThis is always non-NULL.  If it wasn't set already, then this will\nreturn the default qemu binary name.");
  else
  if (STRCASEEQ (cmd, "set_path") || STRCASEEQ (cmd, "set-path") || STRCASEEQ (cmd, "path"))
    pod2text ("set-path", _("set the search path"), "=head1 SYNOPSIS\n\n set-path searchpath\n\n=head1 DESCRIPTION\n\nSet the path that libguestfs searches for kernel and initrd.img.\n\nThe default is C<$libdir/guestfs> unless overridden by setting\nC<LIBGUESTFS_PATH> environment variable.\n\nSetting C<path> to C<NULL> restores the default path.\n\nYou can use 'path' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_path") || STRCASEEQ (cmd, "get-path"))
    pod2text ("get-path", _("get the search path"), "=head1 SYNOPSIS\n\n get-path\n\n=head1 DESCRIPTION\n\nReturn the current search path.\n\nThis is always non-NULL.  If it wasn't set already, then this will\nreturn the default path.");
  else
  if (STRCASEEQ (cmd, "set_append") || STRCASEEQ (cmd, "set-append") || STRCASEEQ (cmd, "append"))
    pod2text ("set-append", _("add options to kernel command line"), "=head1 SYNOPSIS\n\n set-append append\n\n=head1 DESCRIPTION\n\nThis function is used to add additional options to the\nguest kernel command line.\n\nThe default is C<NULL> unless overridden by setting\nC<LIBGUESTFS_APPEND> environment variable.\n\nSetting C<append> to C<NULL> means I<no> additional options\nare passed (libguestfs always adds a few of its own).\n\nYou can use 'append' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_append") || STRCASEEQ (cmd, "get-append"))
    pod2text ("get-append", _("get the additional kernel options"), "=head1 SYNOPSIS\n\n get-append\n\n=head1 DESCRIPTION\n\nReturn the additional kernel options which are added to the\nguest kernel command line.\n\nIf C<NULL> then no options are added.");
  else
  if (STRCASEEQ (cmd, "set_autosync") || STRCASEEQ (cmd, "set-autosync") || STRCASEEQ (cmd, "autosync"))
    pod2text ("set-autosync", _("set autosync mode"), "=head1 SYNOPSIS\n\n set-autosync autosync\n\n=head1 DESCRIPTION\n\nIf C<autosync> is true, this enables autosync.  Libguestfs will make a\nbest effort attempt to run C<umount_all> followed by\nC<sync> when the handle is closed\n(also if the program exits without closing handles).\n\nThis is disabled by default (except in guestfish where it is\nenabled by default).\n\nYou can use 'autosync' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_autosync") || STRCASEEQ (cmd, "get-autosync"))
    pod2text ("get-autosync", _("get autosync mode"), "=head1 SYNOPSIS\n\n get-autosync\n\n=head1 DESCRIPTION\n\nGet the autosync flag.");
  else
  if (STRCASEEQ (cmd, "set_verbose") || STRCASEEQ (cmd, "set-verbose") || STRCASEEQ (cmd, "verbose"))
    pod2text ("set-verbose", _("set verbose mode"), "=head1 SYNOPSIS\n\n set-verbose verbose\n\n=head1 DESCRIPTION\n\nIf C<verbose> is true, this turns on verbose messages (to C<stderr>).\n\nVerbose messages are disabled unless the environment variable\nC<LIBGUESTFS_DEBUG> is defined and set to C<1>.\n\nYou can use 'verbose' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_verbose") || STRCASEEQ (cmd, "get-verbose"))
    pod2text ("get-verbose", _("get verbose mode"), "=head1 SYNOPSIS\n\n get-verbose\n\n=head1 DESCRIPTION\n\nThis returns the verbose messages flag.");
  else
  if (STRCASEEQ (cmd, "is_ready") || STRCASEEQ (cmd, "is-ready"))
    pod2text ("is-ready", _("is ready to accept commands"), "=head1 SYNOPSIS\n\n is-ready\n\n=head1 DESCRIPTION\n\nThis returns true iff this handle is ready to accept commands\n(in the C<READY> state).\n\nFor more information on states, see L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "is_config") || STRCASEEQ (cmd, "is-config"))
    pod2text ("is-config", _("is in configuration state"), "=head1 SYNOPSIS\n\n is-config\n\n=head1 DESCRIPTION\n\nThis returns true iff this handle is being configured\n(in the C<CONFIG> state).\n\nFor more information on states, see L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "is_launching") || STRCASEEQ (cmd, "is-launching"))
    pod2text ("is-launching", _("is launching subprocess"), "=head1 SYNOPSIS\n\n is-launching\n\n=head1 DESCRIPTION\n\nThis returns true iff this handle is launching the subprocess\n(in the C<LAUNCHING> state).\n\nFor more information on states, see L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "is_busy") || STRCASEEQ (cmd, "is-busy"))
    pod2text ("is-busy", _("is busy processing a command"), "=head1 SYNOPSIS\n\n is-busy\n\n=head1 DESCRIPTION\n\nThis returns true iff this handle is busy processing a command\n(in the C<BUSY> state).\n\nFor more information on states, see L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "get_state") || STRCASEEQ (cmd, "get-state"))
    pod2text ("get-state", _("get the current state"), "=head1 SYNOPSIS\n\n get-state\n\n=head1 DESCRIPTION\n\nThis returns the current state as an opaque integer.  This is\nonly useful for printing debug and internal error messages.\n\nFor more information on states, see L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "set_memsize") || STRCASEEQ (cmd, "set-memsize") || STRCASEEQ (cmd, "memsize"))
    pod2text ("set-memsize", _("set memory allocated to the qemu subprocess"), "=head1 SYNOPSIS\n\n set-memsize memsize\n\n=head1 DESCRIPTION\n\nThis sets the memory size in megabytes allocated to the\nqemu subprocess.  This only has any effect if called before\nC<launch>.\n\nYou can also change this by setting the environment\nvariable C<LIBGUESTFS_MEMSIZE> before the handle is\ncreated.\n\nFor more information on the architecture of libguestfs,\nsee L<guestfs(3)>.\n\nYou can use 'memsize' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_memsize") || STRCASEEQ (cmd, "get-memsize"))
    pod2text ("get-memsize", _("get memory allocated to the qemu subprocess"), "=head1 SYNOPSIS\n\n get-memsize\n\n=head1 DESCRIPTION\n\nThis gets the memory size in megabytes allocated to the\nqemu subprocess.\n\nIf C<set_memsize> was not called\non this handle, and if C<LIBGUESTFS_MEMSIZE> was not set,\nthen this returns the compiled-in default value for memsize.\n\nFor more information on the architecture of libguestfs,\nsee L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "get_pid") || STRCASEEQ (cmd, "get-pid") || STRCASEEQ (cmd, "pid"))
    pod2text ("get-pid", _("get PID of qemu subprocess"), "=head1 SYNOPSIS\n\n get-pid\n\n=head1 DESCRIPTION\n\nReturn the process ID of the qemu subprocess.  If there is no\nqemu subprocess, then this will return an error.\n\nThis is an internal call used for debugging and testing.\n\nYou can use 'pid' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "version"))
    pod2text ("version", _("get the library version number"), "=head1 SYNOPSIS\n\n version\n\n=head1 DESCRIPTION\n\nReturn the libguestfs version number that the program is linked\nagainst.\n\nNote that because of dynamic linking this is not necessarily\nthe version of libguestfs that you compiled against.  You can\ncompile the program, and then at runtime dynamically link\nagainst a completely different C<libguestfs.so> library.\n\nThis call was added in version C<1.0.58>.  In previous\nversions of libguestfs there was no way to get the version\nnumber.  From C code you can use ELF weak linking tricks to find out if\nthis symbol exists (if it doesn't, then it's an earlier version).\n\nThe call returns a structure with four elements.  The first\nthree (C<major>, C<minor> and C<release>) are numbers and\ncorrespond to the usual version triplet.  The fourth element\n(C<extra>) is a string and is normally empty, but may be\nused for distro-specific information.\n\nTo construct the original version string:\nC<$major.$minor.$release$extra>\n\nI<Note:> Don't use this call to test for availability\nof features.  Distro backports makes this unreliable.  Use\nC<available> instead.");
  else
  if (STRCASEEQ (cmd, "set_selinux") || STRCASEEQ (cmd, "set-selinux") || STRCASEEQ (cmd, "selinux"))
    pod2text ("set-selinux", _("set SELinux enabled or disabled at appliance boot"), "=head1 SYNOPSIS\n\n set-selinux selinux\n\n=head1 DESCRIPTION\n\nThis sets the selinux flag that is passed to the appliance\nat boot time.  The default is C<selinux=0> (disabled).\n\nNote that if SELinux is enabled, it is always in\nPermissive mode (C<enforcing=0>).\n\nFor more information on the architecture of libguestfs,\nsee L<guestfs(3)>.\n\nYou can use 'selinux' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_selinux") || STRCASEEQ (cmd, "get-selinux"))
    pod2text ("get-selinux", _("get SELinux enabled flag"), "=head1 SYNOPSIS\n\n get-selinux\n\n=head1 DESCRIPTION\n\nThis returns the current setting of the selinux flag which\nis passed to the appliance at boot time.  See C<set_selinux>.\n\nFor more information on the architecture of libguestfs,\nsee L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "set_trace") || STRCASEEQ (cmd, "set-trace") || STRCASEEQ (cmd, "trace"))
    pod2text ("set-trace", _("enable or disable command traces"), "=head1 SYNOPSIS\n\n set-trace trace\n\n=head1 DESCRIPTION\n\nIf the command trace flag is set to 1, then commands are\nprinted on stdout before they are executed in a format\nwhich is very similar to the one used by guestfish.  In\nother words, you can run a program with this enabled, and\nyou will get out a script which you can feed to guestfish\nto perform the same set of actions.\n\nIf you want to trace C API calls into libguestfs (and\nother libraries) then possibly a better way is to use\nthe external ltrace(1) command.\n\nCommand traces are disabled unless the environment variable\nC<LIBGUESTFS_TRACE> is defined and set to C<1>.\n\nYou can use 'trace' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_trace") || STRCASEEQ (cmd, "get-trace"))
    pod2text ("get-trace", _("get command trace enabled flag"), "=head1 SYNOPSIS\n\n get-trace\n\n=head1 DESCRIPTION\n\nReturn the command trace flag.");
  else
  if (STRCASEEQ (cmd, "set_direct") || STRCASEEQ (cmd, "set-direct") || STRCASEEQ (cmd, "direct"))
    pod2text ("set-direct", _("enable or disable direct appliance mode"), "=head1 SYNOPSIS\n\n set-direct direct\n\n=head1 DESCRIPTION\n\nIf the direct appliance mode flag is enabled, then stdin and\nstdout are passed directly through to the appliance once it\nis launched.\n\nOne consequence of this is that log messages aren't caught\nby the library and handled by C<set_log_message_callback>,\nbut go straight to stdout.\n\nYou probably don't want to use this unless you know what you\nare doing.\n\nThe default is disabled.\n\nYou can use 'direct' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_direct") || STRCASEEQ (cmd, "get-direct"))
    pod2text ("get-direct", _("get direct appliance mode flag"), "=head1 SYNOPSIS\n\n get-direct\n\n=head1 DESCRIPTION\n\nReturn the direct appliance mode flag.");
  else
  if (STRCASEEQ (cmd, "set_recovery_proc") || STRCASEEQ (cmd, "set-recovery-proc") || STRCASEEQ (cmd, "recovery-proc"))
    pod2text ("set-recovery-proc", _("enable or disable the recovery process"), "=head1 SYNOPSIS\n\n set-recovery-proc recoveryproc\n\n=head1 DESCRIPTION\n\nIf this is called with the parameter C<false> then\nC<launch> does not create a recovery process.  The\npurpose of the recovery process is to stop runaway qemu\nprocesses in the case where the main program aborts abruptly.\n\nThis only has any effect if called before C<launch>,\nand the default is true.\n\nAbout the only time when you would want to disable this is\nif the main process will fork itself into the background\n(\"daemonize\" itself).  In this case the recovery process\nthinks that the main program has disappeared and so kills\nqemu, which is not very helpful.\n\nYou can use 'recovery-proc' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "get_recovery_proc") || STRCASEEQ (cmd, "get-recovery-proc"))
    pod2text ("get-recovery-proc", _("get recovery process enabled flag"), "=head1 SYNOPSIS\n\n get-recovery-proc\n\n=head1 DESCRIPTION\n\nReturn the recovery process enabled flag.");
  else
  if (STRCASEEQ (cmd, "add_drive_with_if") || STRCASEEQ (cmd, "add-drive-with-if"))
    pod2text ("add-drive-with-if", _("add a drive specifying the QEMU block emulation to use"), "=head1 SYNOPSIS\n\n add-drive-with-if filename iface\n\n=head1 DESCRIPTION\n\nThis is the same as C<add_drive> but it allows you\nto specify the QEMU interface emulation to use at run time.");
  else
  if (STRCASEEQ (cmd, "add_drive_ro_with_if") || STRCASEEQ (cmd, "add-drive-ro-with-if"))
    pod2text ("add-drive-ro-with-if", _("add a drive read-only specifying the QEMU block emulation to use"), "=head1 SYNOPSIS\n\n add-drive-ro-with-if filename iface\n\n=head1 DESCRIPTION\n\nThis is the same as C<add_drive_ro> but it allows you\nto specify the QEMU interface emulation to use at run time.");
  else
  if (STRCASEEQ (cmd, "mount"))
    pod2text ("mount", _("mount a guest disk at a position in the filesystem"), "=head1 SYNOPSIS\n\n mount device mountpoint\n\n=head1 DESCRIPTION\n\nMount a guest disk at a position in the filesystem.  Block devices\nare named C</dev/sda>, C</dev/sdb> and so on, as they were added to\nthe guest.  If those block devices contain partitions, they will have\nthe usual names (eg. C</dev/sda1>).  Also LVM C</dev/VG/LV>-style\nnames can be used.\n\nThe rules are the same as for L<mount(2)>:  A filesystem must\nfirst be mounted on C</> before others can be mounted.  Other\nfilesystems can only be mounted on directories which already\nexist.\n\nThe mounted filesystem is writable, if we have sufficient permissions\non the underlying device.\n\nThe filesystem options C<sync> and C<noatime> are set with this\ncall, in order to improve reliability.");
  else
  if (STRCASEEQ (cmd, "sync"))
    pod2text ("sync", _("sync disks, writes are flushed through to the disk image"), "=head1 SYNOPSIS\n\n sync\n\n=head1 DESCRIPTION\n\nThis syncs the disk, so that any writes are flushed through to the\nunderlying disk image.\n\nYou should always call this if you have modified a disk image, before\nclosing the handle.");
  else
  if (STRCASEEQ (cmd, "touch"))
    pod2text ("touch", _("update file timestamps or create a new file"), "=head1 SYNOPSIS\n\n touch path\n\n=head1 DESCRIPTION\n\nTouch acts like the L<touch(1)> command.  It can be used to\nupdate the timestamps on a file, or, if the file does not exist,\nto create a new zero-length file.");
  else
  if (STRCASEEQ (cmd, "cat"))
    pod2text ("cat", _("list the contents of a file"), "=head1 SYNOPSIS\n\n cat path\n\n=head1 DESCRIPTION\n\nReturn the contents of the file named C<path>.\n\nNote that this function cannot correctly handle binary files\n(specifically, files containing C<\\0> character which is treated\nas end of string).  For those you need to use the C<read_file>\nor C<download> functions which have a more complex interface.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "ll"))
    pod2text ("ll", _("list the files in a directory (long format)"), "=head1 SYNOPSIS\n\n ll directory\n\n=head1 DESCRIPTION\n\nList the files in C<directory> (relative to the root directory,\nthere is no cwd) in the format of 'ls -la'.\n\nThis command is mostly useful for interactive sessions.  It\nis I<not> intended that you try to parse the output string.");
  else
  if (STRCASEEQ (cmd, "ls"))
    pod2text ("ls", _("list the files in a directory"), "=head1 SYNOPSIS\n\n ls directory\n\n=head1 DESCRIPTION\n\nList the files in C<directory> (relative to the root directory,\nthere is no cwd).  The '.' and '..' entries are not returned, but\nhidden files are shown.\n\nThis command is mostly useful for interactive sessions.  Programs\nshould probably use C<readdir> instead.");
  else
  if (STRCASEEQ (cmd, "list_devices") || STRCASEEQ (cmd, "list-devices"))
    pod2text ("list-devices", _("list the block devices"), "=head1 SYNOPSIS\n\n list-devices\n\n=head1 DESCRIPTION\n\nList all the block devices.\n\nThe full block device names are returned, eg. C</dev/sda>");
  else
  if (STRCASEEQ (cmd, "list_partitions") || STRCASEEQ (cmd, "list-partitions"))
    pod2text ("list-partitions", _("list the partitions"), "=head1 SYNOPSIS\n\n list-partitions\n\n=head1 DESCRIPTION\n\nList all the partitions detected on all block devices.\n\nThe full partition device names are returned, eg. C</dev/sda1>\n\nThis does not return logical volumes.  For that you will need to\ncall C<lvs>.");
  else
  if (STRCASEEQ (cmd, "pvs"))
    pod2text ("pvs", _("list the LVM physical volumes (PVs)"), "=head1 SYNOPSIS\n\n pvs\n\n=head1 DESCRIPTION\n\nList all the physical volumes detected.  This is the equivalent\nof the L<pvs(8)> command.\n\nThis returns a list of just the device names that contain\nPVs (eg. C</dev/sda2>).\n\nSee also C<pvs_full>.");
  else
  if (STRCASEEQ (cmd, "vgs"))
    pod2text ("vgs", _("list the LVM volume groups (VGs)"), "=head1 SYNOPSIS\n\n vgs\n\n=head1 DESCRIPTION\n\nList all the volumes groups detected.  This is the equivalent\nof the L<vgs(8)> command.\n\nThis returns a list of just the volume group names that were\ndetected (eg. C<VolGroup00>).\n\nSee also C<vgs_full>.");
  else
  if (STRCASEEQ (cmd, "lvs"))
    pod2text ("lvs", _("list the LVM logical volumes (LVs)"), "=head1 SYNOPSIS\n\n lvs\n\n=head1 DESCRIPTION\n\nList all the logical volumes detected.  This is the equivalent\nof the L<lvs(8)> command.\n\nThis returns a list of the logical volume device names\n(eg. C</dev/VolGroup00/LogVol00>).\n\nSee also C<lvs_full>.");
  else
  if (STRCASEEQ (cmd, "pvs_full") || STRCASEEQ (cmd, "pvs-full"))
    pod2text ("pvs-full", _("list the LVM physical volumes (PVs)"), "=head1 SYNOPSIS\n\n pvs-full\n\n=head1 DESCRIPTION\n\nList all the physical volumes detected.  This is the equivalent\nof the L<pvs(8)> command.  The \"full\" version includes all fields.");
  else
  if (STRCASEEQ (cmd, "vgs_full") || STRCASEEQ (cmd, "vgs-full"))
    pod2text ("vgs-full", _("list the LVM volume groups (VGs)"), "=head1 SYNOPSIS\n\n vgs-full\n\n=head1 DESCRIPTION\n\nList all the volumes groups detected.  This is the equivalent\nof the L<vgs(8)> command.  The \"full\" version includes all fields.");
  else
  if (STRCASEEQ (cmd, "lvs_full") || STRCASEEQ (cmd, "lvs-full"))
    pod2text ("lvs-full", _("list the LVM logical volumes (LVs)"), "=head1 SYNOPSIS\n\n lvs-full\n\n=head1 DESCRIPTION\n\nList all the logical volumes detected.  This is the equivalent\nof the L<lvs(8)> command.  The \"full\" version includes all fields.");
  else
  if (STRCASEEQ (cmd, "read_lines") || STRCASEEQ (cmd, "read-lines"))
    pod2text ("read-lines", _("read file as lines"), "=head1 SYNOPSIS\n\n read-lines path\n\n=head1 DESCRIPTION\n\nReturn the contents of the file named C<path>.\n\nThe file contents are returned as a list of lines.  Trailing\nC<LF> and C<CRLF> character sequences are I<not> returned.\n\nNote that this function cannot correctly handle binary files\n(specifically, files containing C<\\0> character which is treated\nas end of line).  For those you need to use the C<read_file>\nfunction which has a more complex interface.");
  else
  if (STRCASEEQ (cmd, "aug_init") || STRCASEEQ (cmd, "aug-init"))
    pod2text ("aug-init", _("create a new Augeas handle"), "=head1 SYNOPSIS\n\n aug-init root flags\n\n=head1 DESCRIPTION\n\nCreate a new Augeas handle for editing configuration files.\nIf there was any previous Augeas handle associated with this\nguestfs session, then it is closed.\n\nYou must call this before using any other C<aug_*>\ncommands.\n\nC<root> is the filesystem root.  C<root> must not be NULL,\nuse C</> instead.\n\nThe flags are the same as the flags defined in\nE<lt>augeas.hE<gt>, the logical I<or> of the following\nintegers:\n\n=over 4\n\n=item C<AUG_SAVE_BACKUP> = 1\n\nKeep the original file with a C<.augsave> extension.\n\n=item C<AUG_SAVE_NEWFILE> = 2\n\nSave changes into a file with extension C<.augnew>, and\ndo not overwrite original.  Overrides C<AUG_SAVE_BACKUP>.\n\n=item C<AUG_TYPE_CHECK> = 4\n\nTypecheck lenses (can be expensive).\n\n=item C<AUG_NO_STDINC> = 8\n\nDo not use standard load path for modules.\n\n=item C<AUG_SAVE_NOOP> = 16\n\nMake save a no-op, just record what would have been changed.\n\n=item C<AUG_NO_LOAD> = 32\n\nDo not load the tree in C<aug_init>.\n\n=back\n\nTo close the handle, you can call C<aug_close>.\n\nTo find out more about Augeas, see L<http://augeas.net/>.");
  else
  if (STRCASEEQ (cmd, "aug_close") || STRCASEEQ (cmd, "aug-close"))
    pod2text ("aug-close", _("close the current Augeas handle"), "=head1 SYNOPSIS\n\n aug-close\n\n=head1 DESCRIPTION\n\nClose the current Augeas handle and free up any resources\nused by it.  After calling this, you have to call\nC<aug_init> again before you can use any other\nAugeas functions.");
  else
  if (STRCASEEQ (cmd, "aug_defvar") || STRCASEEQ (cmd, "aug-defvar"))
    pod2text ("aug-defvar", _("define an Augeas variable"), "=head1 SYNOPSIS\n\n aug-defvar name expr\n\n=head1 DESCRIPTION\n\nDefines an Augeas variable C<name> whose value is the result\nof evaluating C<expr>.  If C<expr> is NULL, then C<name> is\nundefined.\n\nOn success this returns the number of nodes in C<expr>, or\nC<0> if C<expr> evaluates to something which is not a nodeset.");
  else
  if (STRCASEEQ (cmd, "aug_defnode") || STRCASEEQ (cmd, "aug-defnode"))
    pod2text ("aug-defnode", _("define an Augeas node"), "=head1 SYNOPSIS\n\n aug-defnode name expr val\n\n=head1 DESCRIPTION\n\nDefines a variable C<name> whose value is the result of\nevaluating C<expr>.\n\nIf C<expr> evaluates to an empty nodeset, a node is created,\nequivalent to calling C<aug_set> C<expr>, C<value>.\nC<name> will be the nodeset containing that single node.\n\nOn success this returns a pair containing the\nnumber of nodes in the nodeset, and a boolean flag\nif a node was created.");
  else
  if (STRCASEEQ (cmd, "aug_get") || STRCASEEQ (cmd, "aug-get"))
    pod2text ("aug-get", _("look up the value of an Augeas path"), "=head1 SYNOPSIS\n\n aug-get augpath\n\n=head1 DESCRIPTION\n\nLook up the value associated with C<path>.  If C<path>\nmatches exactly one node, the C<value> is returned.");
  else
  if (STRCASEEQ (cmd, "aug_set") || STRCASEEQ (cmd, "aug-set"))
    pod2text ("aug-set", _("set Augeas path to value"), "=head1 SYNOPSIS\n\n aug-set augpath val\n\n=head1 DESCRIPTION\n\nSet the value associated with C<path> to C<value>.");
  else
  if (STRCASEEQ (cmd, "aug_insert") || STRCASEEQ (cmd, "aug-insert"))
    pod2text ("aug-insert", _("insert a sibling Augeas node"), "=head1 SYNOPSIS\n\n aug-insert augpath label before\n\n=head1 DESCRIPTION\n\nCreate a new sibling C<label> for C<path>, inserting it into\nthe tree before or after C<path> (depending on the boolean\nflag C<before>).\n\nC<path> must match exactly one existing node in the tree, and\nC<label> must be a label, ie. not contain C</>, C<*> or end\nwith a bracketed index C<[N]>.");
  else
  if (STRCASEEQ (cmd, "aug_rm") || STRCASEEQ (cmd, "aug-rm"))
    pod2text ("aug-rm", _("remove an Augeas path"), "=head1 SYNOPSIS\n\n aug-rm augpath\n\n=head1 DESCRIPTION\n\nRemove C<path> and all of its children.\n\nOn success this returns the number of entries which were removed.");
  else
  if (STRCASEEQ (cmd, "aug_mv") || STRCASEEQ (cmd, "aug-mv"))
    pod2text ("aug-mv", _("move Augeas node"), "=head1 SYNOPSIS\n\n aug-mv src dest\n\n=head1 DESCRIPTION\n\nMove the node C<src> to C<dest>.  C<src> must match exactly\none node.  C<dest> is overwritten if it exists.");
  else
  if (STRCASEEQ (cmd, "aug_match") || STRCASEEQ (cmd, "aug-match"))
    pod2text ("aug-match", _("return Augeas nodes which match augpath"), "=head1 SYNOPSIS\n\n aug-match augpath\n\n=head1 DESCRIPTION\n\nReturns a list of paths which match the path expression C<path>.\nThe returned paths are sufficiently qualified so that they match\nexactly one node in the current tree.");
  else
  if (STRCASEEQ (cmd, "aug_save") || STRCASEEQ (cmd, "aug-save"))
    pod2text ("aug-save", _("write all pending Augeas changes to disk"), "=head1 SYNOPSIS\n\n aug-save\n\n=head1 DESCRIPTION\n\nThis writes all pending changes to disk.\n\nThe flags which were passed to C<aug_init> affect exactly\nhow files are saved.");
  else
  if (STRCASEEQ (cmd, "aug_load") || STRCASEEQ (cmd, "aug-load"))
    pod2text ("aug-load", _("load files into the tree"), "=head1 SYNOPSIS\n\n aug-load\n\n=head1 DESCRIPTION\n\nLoad files into the tree.\n\nSee C<aug_load> in the Augeas documentation for the full gory\ndetails.");
  else
  if (STRCASEEQ (cmd, "aug_ls") || STRCASEEQ (cmd, "aug-ls"))
    pod2text ("aug-ls", _("list Augeas nodes under augpath"), "=head1 SYNOPSIS\n\n aug-ls augpath\n\n=head1 DESCRIPTION\n\nThis is just a shortcut for listing C<aug_match>\nC<path/*> and sorting the resulting nodes into alphabetical order.");
  else
  if (STRCASEEQ (cmd, "rm"))
    pod2text ("rm", _("remove a file"), "=head1 SYNOPSIS\n\n rm path\n\n=head1 DESCRIPTION\n\nRemove the single file C<path>.");
  else
  if (STRCASEEQ (cmd, "rmdir"))
    pod2text ("rmdir", _("remove a directory"), "=head1 SYNOPSIS\n\n rmdir path\n\n=head1 DESCRIPTION\n\nRemove the single directory C<path>.");
  else
  if (STRCASEEQ (cmd, "rm_rf") || STRCASEEQ (cmd, "rm-rf"))
    pod2text ("rm-rf", _("remove a file or directory recursively"), "=head1 SYNOPSIS\n\n rm-rf path\n\n=head1 DESCRIPTION\n\nRemove the file or directory C<path>, recursively removing the\ncontents if its a directory.  This is like the C<rm -rf> shell\ncommand.");
  else
  if (STRCASEEQ (cmd, "mkdir"))
    pod2text ("mkdir", _("create a directory"), "=head1 SYNOPSIS\n\n mkdir path\n\n=head1 DESCRIPTION\n\nCreate a directory named C<path>.");
  else
  if (STRCASEEQ (cmd, "mkdir_p") || STRCASEEQ (cmd, "mkdir-p"))
    pod2text ("mkdir-p", _("create a directory and parents"), "=head1 SYNOPSIS\n\n mkdir-p path\n\n=head1 DESCRIPTION\n\nCreate a directory named C<path>, creating any parent directories\nas necessary.  This is like the C<mkdir -p> shell command.");
  else
  if (STRCASEEQ (cmd, "chmod"))
    pod2text ("chmod", _("change file mode"), "=head1 SYNOPSIS\n\n chmod mode path\n\n=head1 DESCRIPTION\n\nChange the mode (permissions) of C<path> to C<mode>.  Only\nnumeric modes are supported.\n\nI<Note>: When using this command from guestfish, C<mode>\nby default would be decimal, unless you prefix it with\nC<0> to get octal, ie. use C<0700> not C<700>.");
  else
  if (STRCASEEQ (cmd, "chown"))
    pod2text ("chown", _("change file owner and group"), "=head1 SYNOPSIS\n\n chown owner group path\n\n=head1 DESCRIPTION\n\nChange the file owner to C<owner> and group to C<group>.\n\nOnly numeric uid and gid are supported.  If you want to use\nnames, you will need to locate and parse the password file\nyourself (Augeas support makes this relatively easy).");
  else
  if (STRCASEEQ (cmd, "exists"))
    pod2text ("exists", _("test if file or directory exists"), "=head1 SYNOPSIS\n\n exists path\n\n=head1 DESCRIPTION\n\nThis returns C<true> if and only if there is a file, directory\n(or anything) with the given C<path> name.\n\nSee also C<is_file>, C<is_dir>, C<stat>.");
  else
  if (STRCASEEQ (cmd, "is_file") || STRCASEEQ (cmd, "is-file"))
    pod2text ("is-file", _("test if file exists"), "=head1 SYNOPSIS\n\n is-file path\n\n=head1 DESCRIPTION\n\nThis returns C<true> if and only if there is a file\nwith the given C<path> name.  Note that it returns false for\nother objects like directories.\n\nSee also C<stat>.");
  else
  if (STRCASEEQ (cmd, "is_dir") || STRCASEEQ (cmd, "is-dir"))
    pod2text ("is-dir", _("test if file exists"), "=head1 SYNOPSIS\n\n is-dir path\n\n=head1 DESCRIPTION\n\nThis returns C<true> if and only if there is a directory\nwith the given C<path> name.  Note that it returns false for\nother objects like files.\n\nSee also C<stat>.");
  else
  if (STRCASEEQ (cmd, "pvcreate"))
    pod2text ("pvcreate", _("create an LVM physical volume"), "=head1 SYNOPSIS\n\n pvcreate device\n\n=head1 DESCRIPTION\n\nThis creates an LVM physical volume on the named C<device>,\nwhere C<device> should usually be a partition name such\nas C</dev/sda1>.");
  else
  if (STRCASEEQ (cmd, "vgcreate"))
    pod2text ("vgcreate", _("create an LVM volume group"), "=head1 SYNOPSIS\n\n vgcreate volgroup physvols\n\n=head1 DESCRIPTION\n\nThis creates an LVM volume group called C<volgroup>\nfrom the non-empty list of physical volumes C<physvols>.");
  else
  if (STRCASEEQ (cmd, "lvcreate"))
    pod2text ("lvcreate", _("create an LVM volume group"), "=head1 SYNOPSIS\n\n lvcreate logvol volgroup mbytes\n\n=head1 DESCRIPTION\n\nThis creates an LVM volume group called C<logvol>\non the volume group C<volgroup>, with C<size> megabytes.");
  else
  if (STRCASEEQ (cmd, "mkfs"))
    pod2text ("mkfs", _("make a filesystem"), "=head1 SYNOPSIS\n\n mkfs fstype device\n\n=head1 DESCRIPTION\n\nThis creates a filesystem on C<device> (usually a partition\nor LVM logical volume).  The filesystem type is C<fstype>, for\nexample C<ext3>.");
  else
  if (STRCASEEQ (cmd, "sfdisk"))
    pod2text ("sfdisk", _("create partitions on a block device"), "=head1 SYNOPSIS\n\n sfdisk device cyls heads sectors lines\n\n=head1 DESCRIPTION\n\nThis is a direct interface to the L<sfdisk(8)> program for creating\npartitions on block devices.\n\nC<device> should be a block device, for example C</dev/sda>.\n\nC<cyls>, C<heads> and C<sectors> are the number of cylinders, heads\nand sectors on the device, which are passed directly to sfdisk as\nthe I<-C>, I<-H> and I<-S> parameters.  If you pass C<0> for any\nof these, then the corresponding parameter is omitted.  Usually for\n'large' disks, you can just pass C<0> for these, but for small\n(floppy-sized) disks, sfdisk (or rather, the kernel) cannot work\nout the right geometry and you will need to tell it.\n\nC<lines> is a list of lines that we feed to C<sfdisk>.  For more\ninformation refer to the L<sfdisk(8)> manpage.\n\nTo create a single partition occupying the whole disk, you would\npass C<lines> as a single element list, when the single element being\nthe string C<,> (comma).\n\nSee also: C<sfdisk_l>, C<sfdisk_N>,\nC<part_init>\n\nB<This command is dangerous.  Without careful use you\ncan easily destroy all your data>.");
  else
  if (STRCASEEQ (cmd, "write_file") || STRCASEEQ (cmd, "write-file"))
    pod2text ("write-file", _("create a file"), "=head1 SYNOPSIS\n\n write-file path content size\n\n=head1 DESCRIPTION\n\nThis call creates a file called C<path>.  The contents of the\nfile is the string C<content> (which can contain any 8 bit data),\nwith length C<size>.\n\nAs a special case, if C<size> is C<0>\nthen the length is calculated using C<strlen> (so in this case\nthe content cannot contain embedded ASCII NULs).\n\nI<NB.> Owing to a bug, writing content containing ASCII NUL\ncharacters does I<not> work, even if the length is specified.\nWe hope to resolve this bug in a future version.  In the meantime\nuse C<upload>.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "umount") || STRCASEEQ (cmd, "unmount"))
    pod2text ("umount", _("unmount a filesystem"), "=head1 SYNOPSIS\n\n umount pathordevice\n\n=head1 DESCRIPTION\n\nThis unmounts the given filesystem.  The filesystem may be\nspecified either by its mountpoint (path) or the device which\ncontains the filesystem.\n\nYou can use 'unmount' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "mounts"))
    pod2text ("mounts", _("show mounted filesystems"), "=head1 SYNOPSIS\n\n mounts\n\n=head1 DESCRIPTION\n\nThis returns the list of currently mounted filesystems.  It returns\nthe list of devices (eg. C</dev/sda1>, C</dev/VG/LV>).\n\nSome internal mounts are not shown.\n\nSee also: C<mountpoints>");
  else
  if (STRCASEEQ (cmd, "umount_all") || STRCASEEQ (cmd, "umount-all") || STRCASEEQ (cmd, "unmount-all"))
    pod2text ("umount-all", _("unmount all filesystems"), "=head1 SYNOPSIS\n\n umount-all\n\n=head1 DESCRIPTION\n\nThis unmounts all mounted filesystems.\n\nSome internal mounts are not unmounted by this call.\n\nYou can use 'unmount-all' as an alias for this command.");
  else
  if (STRCASEEQ (cmd, "lvm_remove_all") || STRCASEEQ (cmd, "lvm-remove-all"))
    pod2text ("lvm-remove-all", _("remove all LVM LVs, VGs and PVs"), "=head1 SYNOPSIS\n\n lvm-remove-all\n\n=head1 DESCRIPTION\n\nThis command removes all LVM logical volumes, volume groups\nand physical volumes.\n\nB<This command is dangerous.  Without careful use you\ncan easily destroy all your data>.");
  else
  if (STRCASEEQ (cmd, "file"))
    pod2text ("file", _("determine file type"), "=head1 SYNOPSIS\n\n file path\n\n=head1 DESCRIPTION\n\nThis call uses the standard L<file(1)> command to determine\nthe type or contents of the file.  This also works on devices,\nfor example to find out whether a partition contains a filesystem.\n\nThis call will also transparently look inside various types\nof compressed file.\n\nThe exact command which runs is C<file -zbsL path>.  Note in\nparticular that the filename is not prepended to the output\n(the C<-b> option).");
  else
  if (STRCASEEQ (cmd, "command"))
    pod2text ("command", _("run a command from the guest filesystem"), "=head1 SYNOPSIS\n\n command arguments\n\n=head1 DESCRIPTION\n\nThis call runs a command from the guest filesystem.  The\nfilesystem must be mounted, and must contain a compatible\noperating system (ie. something Linux, with the same\nor compatible processor architecture).\n\nThe single parameter is an argv-style list of arguments.\nThe first element is the name of the program to run.\nSubsequent elements are parameters.  The list must be\nnon-empty (ie. must contain a program name).  Note that\nthe command runs directly, and is I<not> invoked via\nthe shell (see C<sh>).\n\nThe return value is anything printed to I<stdout> by\nthe command.\n\nIf the command returns a non-zero exit status, then\nthis function returns an error message.  The error message\nstring is the content of I<stderr> from the command.\n\nThe C<$PATH> environment variable will contain at least\nC</usr/bin> and C</bin>.  If you require a program from\nanother location, you should provide the full path in the\nfirst parameter.\n\nShared libraries and data files required by the program\nmust be available on filesystems which are mounted in the\ncorrect places.  It is the caller's responsibility to ensure\nall filesystems that are needed are mounted at the right\nlocations.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "command_lines") || STRCASEEQ (cmd, "command-lines"))
    pod2text ("command-lines", _("run a command, returning lines"), "=head1 SYNOPSIS\n\n command-lines arguments\n\n=head1 DESCRIPTION\n\nThis is the same as C<command>, but splits the\nresult into a list of lines.\n\nSee also: C<sh_lines>\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "stat"))
    pod2text ("stat", _("get file information"), "=head1 SYNOPSIS\n\n stat path\n\n=head1 DESCRIPTION\n\nReturns file information for the given C<path>.\n\nThis is the same as the C<stat(2)> system call.");
  else
  if (STRCASEEQ (cmd, "lstat"))
    pod2text ("lstat", _("get file information for a symbolic link"), "=head1 SYNOPSIS\n\n lstat path\n\n=head1 DESCRIPTION\n\nReturns file information for the given C<path>.\n\nThis is the same as C<stat> except that if C<path>\nis a symbolic link, then the link is stat-ed, not the file it\nrefers to.\n\nThis is the same as the C<lstat(2)> system call.");
  else
  if (STRCASEEQ (cmd, "statvfs"))
    pod2text ("statvfs", _("get file system statistics"), "=head1 SYNOPSIS\n\n statvfs path\n\n=head1 DESCRIPTION\n\nReturns file system statistics for any mounted file system.\nC<path> should be a file or directory in the mounted file system\n(typically it is the mount point itself, but it doesn't need to be).\n\nThis is the same as the C<statvfs(2)> system call.");
  else
  if (STRCASEEQ (cmd, "tune2fs_l") || STRCASEEQ (cmd, "tune2fs-l"))
    pod2text ("tune2fs-l", _("get ext2/ext3/ext4 superblock details"), "=head1 SYNOPSIS\n\n tune2fs-l device\n\n=head1 DESCRIPTION\n\nThis returns the contents of the ext2, ext3 or ext4 filesystem\nsuperblock on C<device>.\n\nIt is the same as running C<tune2fs -l device>.  See L<tune2fs(8)>\nmanpage for more details.  The list of fields returned isn't\nclearly defined, and depends on both the version of C<tune2fs>\nthat libguestfs was built against, and the filesystem itself.");
  else
  if (STRCASEEQ (cmd, "blockdev_setro") || STRCASEEQ (cmd, "blockdev-setro"))
    pod2text ("blockdev-setro", _("set block device to read-only"), "=head1 SYNOPSIS\n\n blockdev-setro device\n\n=head1 DESCRIPTION\n\nSets the block device named C<device> to read-only.\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_setrw") || STRCASEEQ (cmd, "blockdev-setrw"))
    pod2text ("blockdev-setrw", _("set block device to read-write"), "=head1 SYNOPSIS\n\n blockdev-setrw device\n\n=head1 DESCRIPTION\n\nSets the block device named C<device> to read-write.\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_getro") || STRCASEEQ (cmd, "blockdev-getro"))
    pod2text ("blockdev-getro", _("is block device set to read-only"), "=head1 SYNOPSIS\n\n blockdev-getro device\n\n=head1 DESCRIPTION\n\nReturns a boolean indicating if the block device is read-only\n(true if read-only, false if not).\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_getss") || STRCASEEQ (cmd, "blockdev-getss"))
    pod2text ("blockdev-getss", _("get sectorsize of block device"), "=head1 SYNOPSIS\n\n blockdev-getss device\n\n=head1 DESCRIPTION\n\nThis returns the size of sectors on a block device.\nUsually 512, but can be larger for modern devices.\n\n(Note, this is not the size in sectors, use C<blockdev_getsz>\nfor that).\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_getbsz") || STRCASEEQ (cmd, "blockdev-getbsz"))
    pod2text ("blockdev-getbsz", _("get blocksize of block device"), "=head1 SYNOPSIS\n\n blockdev-getbsz device\n\n=head1 DESCRIPTION\n\nThis returns the block size of a device.\n\n(Note this is different from both I<size in blocks> and\nI<filesystem block size>).\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_setbsz") || STRCASEEQ (cmd, "blockdev-setbsz"))
    pod2text ("blockdev-setbsz", _("set blocksize of block device"), "=head1 SYNOPSIS\n\n blockdev-setbsz device blocksize\n\n=head1 DESCRIPTION\n\nThis sets the block size of a device.\n\n(Note this is different from both I<size in blocks> and\nI<filesystem block size>).\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_getsz") || STRCASEEQ (cmd, "blockdev-getsz"))
    pod2text ("blockdev-getsz", _("get total size of device in 512-byte sectors"), "=head1 SYNOPSIS\n\n blockdev-getsz device\n\n=head1 DESCRIPTION\n\nThis returns the size of the device in units of 512-byte sectors\n(even if the sectorsize isn't 512 bytes ... weird).\n\nSee also C<blockdev_getss> for the real sector size of\nthe device, and C<blockdev_getsize64> for the more\nuseful I<size in bytes>.\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_getsize64") || STRCASEEQ (cmd, "blockdev-getsize64"))
    pod2text ("blockdev-getsize64", _("get total size of device in bytes"), "=head1 SYNOPSIS\n\n blockdev-getsize64 device\n\n=head1 DESCRIPTION\n\nThis returns the size of the device in bytes.\n\nSee also C<blockdev_getsz>.\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_flushbufs") || STRCASEEQ (cmd, "blockdev-flushbufs"))
    pod2text ("blockdev-flushbufs", _("flush device buffers"), "=head1 SYNOPSIS\n\n blockdev-flushbufs device\n\n=head1 DESCRIPTION\n\nThis tells the kernel to flush internal buffers associated\nwith C<device>.\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "blockdev_rereadpt") || STRCASEEQ (cmd, "blockdev-rereadpt"))
    pod2text ("blockdev-rereadpt", _("reread partition table"), "=head1 SYNOPSIS\n\n blockdev-rereadpt device\n\n=head1 DESCRIPTION\n\nReread the partition table on C<device>.\n\nThis uses the L<blockdev(8)> command.");
  else
  if (STRCASEEQ (cmd, "upload"))
    pod2text ("upload", _("upload a file from the local machine"), "=head1 SYNOPSIS\n\n upload filename remotefilename\n\n=head1 DESCRIPTION\n\nUpload local file C<filename> to C<remotefilename> on the\nfilesystem.\n\nC<filename> can also be a named pipe.\n\nSee also C<download>.");
  else
  if (STRCASEEQ (cmd, "download"))
    pod2text ("download", _("download a file to the local machine"), "=head1 SYNOPSIS\n\n download remotefilename filename\n\n=head1 DESCRIPTION\n\nDownload file C<remotefilename> and save it as C<filename>\non the local machine.\n\nC<filename> can also be a named pipe.\n\nSee also C<upload>, C<cat>.");
  else
  if (STRCASEEQ (cmd, "checksum"))
    pod2text ("checksum", _("compute MD5, SHAx or CRC checksum of file"), "=head1 SYNOPSIS\n\n checksum csumtype path\n\n=head1 DESCRIPTION\n\nThis call computes the MD5, SHAx or CRC checksum of the\nfile named C<path>.\n\nThe type of checksum to compute is given by the C<csumtype>\nparameter which must have one of the following values:\n\n=over 4\n\n=item C<crc>\n\nCompute the cyclic redundancy check (CRC) specified by POSIX\nfor the C<cksum> command.\n\n=item C<md5>\n\nCompute the MD5 hash (using the C<md5sum> program).\n\n=item C<sha1>\n\nCompute the SHA1 hash (using the C<sha1sum> program).\n\n=item C<sha224>\n\nCompute the SHA224 hash (using the C<sha224sum> program).\n\n=item C<sha256>\n\nCompute the SHA256 hash (using the C<sha256sum> program).\n\n=item C<sha384>\n\nCompute the SHA384 hash (using the C<sha384sum> program).\n\n=item C<sha512>\n\nCompute the SHA512 hash (using the C<sha512sum> program).\n\n=back\n\nThe checksum is returned as a printable string.");
  else
  if (STRCASEEQ (cmd, "tar_in") || STRCASEEQ (cmd, "tar-in"))
    pod2text ("tar-in", _("unpack tarfile to directory"), "=head1 SYNOPSIS\n\n tar-in tarfile directory\n\n=head1 DESCRIPTION\n\nThis command uploads and unpacks local file C<tarfile> (an\nI<uncompressed> tar file) into C<directory>.\n\nTo upload a compressed tarball, use C<tgz_in>.");
  else
  if (STRCASEEQ (cmd, "tar_out") || STRCASEEQ (cmd, "tar-out"))
    pod2text ("tar-out", _("pack directory into tarfile"), "=head1 SYNOPSIS\n\n tar-out directory tarfile\n\n=head1 DESCRIPTION\n\nThis command packs the contents of C<directory> and downloads\nit to local file C<tarfile>.\n\nTo download a compressed tarball, use C<tgz_out>.");
  else
  if (STRCASEEQ (cmd, "tgz_in") || STRCASEEQ (cmd, "tgz-in"))
    pod2text ("tgz-in", _("unpack compressed tarball to directory"), "=head1 SYNOPSIS\n\n tgz-in tarball directory\n\n=head1 DESCRIPTION\n\nThis command uploads and unpacks local file C<tarball> (a\nI<gzip compressed> tar file) into C<directory>.\n\nTo upload an uncompressed tarball, use C<tar_in>.");
  else
  if (STRCASEEQ (cmd, "tgz_out") || STRCASEEQ (cmd, "tgz-out"))
    pod2text ("tgz-out", _("pack directory into compressed tarball"), "=head1 SYNOPSIS\n\n tgz-out directory tarball\n\n=head1 DESCRIPTION\n\nThis command packs the contents of C<directory> and downloads\nit to local file C<tarball>.\n\nTo download an uncompressed tarball, use C<tar_out>.");
  else
  if (STRCASEEQ (cmd, "mount_ro") || STRCASEEQ (cmd, "mount-ro"))
    pod2text ("mount-ro", _("mount a guest disk, read-only"), "=head1 SYNOPSIS\n\n mount-ro device mountpoint\n\n=head1 DESCRIPTION\n\nThis is the same as the C<mount> command, but it\nmounts the filesystem with the read-only (I<-o ro>) flag.");
  else
  if (STRCASEEQ (cmd, "mount_options") || STRCASEEQ (cmd, "mount-options"))
    pod2text ("mount-options", _("mount a guest disk with mount options"), "=head1 SYNOPSIS\n\n mount-options options device mountpoint\n\n=head1 DESCRIPTION\n\nThis is the same as the C<mount> command, but it\nallows you to set the mount options as for the\nL<mount(8)> I<-o> flag.");
  else
  if (STRCASEEQ (cmd, "mount_vfs") || STRCASEEQ (cmd, "mount-vfs"))
    pod2text ("mount-vfs", _("mount a guest disk with mount options and vfstype"), "=head1 SYNOPSIS\n\n mount-vfs options vfstype device mountpoint\n\n=head1 DESCRIPTION\n\nThis is the same as the C<mount> command, but it\nallows you to set both the mount options and the vfstype\nas for the L<mount(8)> I<-o> and I<-t> flags.");
  else
  if (STRCASEEQ (cmd, "debug"))
    pod2text ("debug", _("debugging and internals"), "=head1 SYNOPSIS\n\n debug subcmd extraargs\n\n=head1 DESCRIPTION\n\nThe C<debug> command exposes some internals of\nC<guestfsd> (the guestfs daemon) that runs inside the\nqemu subprocess.\n\nThere is no comprehensive help for this command.  You have\nto look at the file C<daemon/debug.c> in the libguestfs source\nto find out what you can do.");
  else
  if (STRCASEEQ (cmd, "lvremove"))
    pod2text ("lvremove", _("remove an LVM logical volume"), "=head1 SYNOPSIS\n\n lvremove device\n\n=head1 DESCRIPTION\n\nRemove an LVM logical volume C<device>, where C<device> is\nthe path to the LV, such as C</dev/VG/LV>.\n\nYou can also remove all LVs in a volume group by specifying\nthe VG name, C</dev/VG>.");
  else
  if (STRCASEEQ (cmd, "vgremove"))
    pod2text ("vgremove", _("remove an LVM volume group"), "=head1 SYNOPSIS\n\n vgremove vgname\n\n=head1 DESCRIPTION\n\nRemove an LVM volume group C<vgname>, (for example C<VG>).\n\nThis also forcibly removes all logical volumes in the volume\ngroup (if any).");
  else
  if (STRCASEEQ (cmd, "pvremove"))
    pod2text ("pvremove", _("remove an LVM physical volume"), "=head1 SYNOPSIS\n\n pvremove device\n\n=head1 DESCRIPTION\n\nThis wipes a physical volume C<device> so that LVM will no longer\nrecognise it.\n\nThe implementation uses the C<pvremove> command which refuses to\nwipe physical volumes that contain any volume groups, so you have\nto remove those first.");
  else
  if (STRCASEEQ (cmd, "set_e2label") || STRCASEEQ (cmd, "set-e2label"))
    pod2text ("set-e2label", _("set the ext2/3/4 filesystem label"), "=head1 SYNOPSIS\n\n set-e2label device label\n\n=head1 DESCRIPTION\n\nThis sets the ext2/3/4 filesystem label of the filesystem on\nC<device> to C<label>.  Filesystem labels are limited to\n16 characters.\n\nYou can use either C<tune2fs_l> or C<get_e2label>\nto return the existing label on a filesystem.");
  else
  if (STRCASEEQ (cmd, "get_e2label") || STRCASEEQ (cmd, "get-e2label"))
    pod2text ("get-e2label", _("get the ext2/3/4 filesystem label"), "=head1 SYNOPSIS\n\n get-e2label device\n\n=head1 DESCRIPTION\n\nThis returns the ext2/3/4 filesystem label of the filesystem on\nC<device>.");
  else
  if (STRCASEEQ (cmd, "set_e2uuid") || STRCASEEQ (cmd, "set-e2uuid"))
    pod2text ("set-e2uuid", _("set the ext2/3/4 filesystem UUID"), "=head1 SYNOPSIS\n\n set-e2uuid device uuid\n\n=head1 DESCRIPTION\n\nThis sets the ext2/3/4 filesystem UUID of the filesystem on\nC<device> to C<uuid>.  The format of the UUID and alternatives\nsuch as C<clear>, C<random> and C<time> are described in the\nL<tune2fs(8)> manpage.\n\nYou can use either C<tune2fs_l> or C<get_e2uuid>\nto return the existing UUID of a filesystem.");
  else
  if (STRCASEEQ (cmd, "get_e2uuid") || STRCASEEQ (cmd, "get-e2uuid"))
    pod2text ("get-e2uuid", _("get the ext2/3/4 filesystem UUID"), "=head1 SYNOPSIS\n\n get-e2uuid device\n\n=head1 DESCRIPTION\n\nThis returns the ext2/3/4 filesystem UUID of the filesystem on\nC<device>.");
  else
  if (STRCASEEQ (cmd, "fsck"))
    pod2text ("fsck", _("run the filesystem checker"), "=head1 SYNOPSIS\n\n fsck fstype device\n\n=head1 DESCRIPTION\n\nThis runs the filesystem checker (fsck) on C<device> which\nshould have filesystem type C<fstype>.\n\nThe returned integer is the status.  See L<fsck(8)> for the\nlist of status codes from C<fsck>.\n\nNotes:\n\n=over 4\n\n=item *\n\nMultiple status codes can be summed together.\n\n=item *\n\nA non-zero return code can mean \"success\", for example if\nerrors have been corrected on the filesystem.\n\n=item *\n\nChecking or repairing NTFS volumes is not supported\n(by linux-ntfs).\n\n=back\n\nThis command is entirely equivalent to running C<fsck -a -t fstype device>.");
  else
  if (STRCASEEQ (cmd, "zero"))
    pod2text ("zero", _("write zeroes to the device"), "=head1 SYNOPSIS\n\n zero device\n\n=head1 DESCRIPTION\n\nThis command writes zeroes over the first few blocks of C<device>.\n\nHow many blocks are zeroed isn't specified (but it's I<not> enough\nto securely wipe the device).  It should be sufficient to remove\nany partition tables, filesystem superblocks and so on.\n\nSee also: C<scrub_device>.");
  else
  if (STRCASEEQ (cmd, "grub_install") || STRCASEEQ (cmd, "grub-install"))
    pod2text ("grub-install", _("install GRUB"), "=head1 SYNOPSIS\n\n grub-install root device\n\n=head1 DESCRIPTION\n\nThis command installs GRUB (the Grand Unified Bootloader) on\nC<device>, with the root directory being C<root>.");
  else
  if (STRCASEEQ (cmd, "cp"))
    pod2text ("cp", _("copy a file"), "=head1 SYNOPSIS\n\n cp src dest\n\n=head1 DESCRIPTION\n\nThis copies a file from C<src> to C<dest> where C<dest> is\neither a destination filename or destination directory.");
  else
  if (STRCASEEQ (cmd, "cp_a") || STRCASEEQ (cmd, "cp-a"))
    pod2text ("cp-a", _("copy a file or directory recursively"), "=head1 SYNOPSIS\n\n cp-a src dest\n\n=head1 DESCRIPTION\n\nThis copies a file or directory from C<src> to C<dest>\nrecursively using the C<cp -a> command.");
  else
  if (STRCASEEQ (cmd, "mv"))
    pod2text ("mv", _("move a file"), "=head1 SYNOPSIS\n\n mv src dest\n\n=head1 DESCRIPTION\n\nThis moves a file from C<src> to C<dest> where C<dest> is\neither a destination filename or destination directory.");
  else
  if (STRCASEEQ (cmd, "drop_caches") || STRCASEEQ (cmd, "drop-caches"))
    pod2text ("drop-caches", _("drop kernel page cache, dentries and inodes"), "=head1 SYNOPSIS\n\n drop-caches whattodrop\n\n=head1 DESCRIPTION\n\nThis instructs the guest kernel to drop its page cache,\nand/or dentries and inode caches.  The parameter C<whattodrop>\ntells the kernel what precisely to drop, see\nL<http://linux-mm.org/Drop_Caches>\n\nSetting C<whattodrop> to 3 should drop everything.\n\nThis automatically calls L<sync(2)> before the operation,\nso that the maximum guest memory is freed.");
  else
  if (STRCASEEQ (cmd, "dmesg"))
    pod2text ("dmesg", _("return kernel messages"), "=head1 SYNOPSIS\n\n dmesg\n\n=head1 DESCRIPTION\n\nThis returns the kernel messages (C<dmesg> output) from\nthe guest kernel.  This is sometimes useful for extended\ndebugging of problems.\n\nAnother way to get the same information is to enable\nverbose messages with C<set_verbose> or by setting\nthe environment variable C<LIBGUESTFS_DEBUG=1> before\nrunning the program.");
  else
  if (STRCASEEQ (cmd, "ping_daemon") || STRCASEEQ (cmd, "ping-daemon"))
    pod2text ("ping-daemon", _("ping the guest daemon"), "=head1 SYNOPSIS\n\n ping-daemon\n\n=head1 DESCRIPTION\n\nThis is a test probe into the guestfs daemon running inside\nthe qemu subprocess.  Calling this function checks that the\ndaemon responds to the ping message, without affecting the daemon\nor attached block device(s) in any other way.");
  else
  if (STRCASEEQ (cmd, "equal"))
    pod2text ("equal", _("test if two files have equal contents"), "=head1 SYNOPSIS\n\n equal file1 file2\n\n=head1 DESCRIPTION\n\nThis compares the two files C<file1> and C<file2> and returns\ntrue if their content is exactly equal, or false otherwise.\n\nThe external L<cmp(1)> program is used for the comparison.");
  else
  if (STRCASEEQ (cmd, "strings"))
    pod2text ("strings", _("print the printable strings in a file"), "=head1 SYNOPSIS\n\n strings path\n\n=head1 DESCRIPTION\n\nThis runs the L<strings(1)> command on a file and returns\nthe list of printable strings found.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "strings_e") || STRCASEEQ (cmd, "strings-e"))
    pod2text ("strings-e", _("print the printable strings in a file"), "=head1 SYNOPSIS\n\n strings-e encoding path\n\n=head1 DESCRIPTION\n\nThis is like the C<strings> command, but allows you to\nspecify the encoding.\n\nSee the L<strings(1)> manpage for the full list of encodings.\n\nCommonly useful encodings are C<l> (lower case L) which will\nshow strings inside Windows/x86 files.\n\nThe returned strings are transcoded to UTF-8.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "hexdump"))
    pod2text ("hexdump", _("dump a file in hexadecimal"), "=head1 SYNOPSIS\n\n hexdump path\n\n=head1 DESCRIPTION\n\nThis runs C<hexdump -C> on the given C<path>.  The result is\nthe human-readable, canonical hex dump of the file.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "zerofree"))
    pod2text ("zerofree", _("zero unused inodes and disk blocks on ext2/3 filesystem"), "=head1 SYNOPSIS\n\n zerofree device\n\n=head1 DESCRIPTION\n\nThis runs the I<zerofree> program on C<device>.  This program\nclaims to zero unused inodes and disk blocks on an ext2/3\nfilesystem, thus making it possible to compress the filesystem\nmore effectively.\n\nYou should B<not> run this program if the filesystem is\nmounted.\n\nIt is possible that using this program can damage the filesystem\nor data on the filesystem.");
  else
  if (STRCASEEQ (cmd, "pvresize"))
    pod2text ("pvresize", _("resize an LVM physical volume"), "=head1 SYNOPSIS\n\n pvresize device\n\n=head1 DESCRIPTION\n\nThis resizes (expands or shrinks) an existing LVM physical\nvolume to match the new size of the underlying device.");
  else
  if (STRCASEEQ (cmd, "sfdisk_N") || STRCASEEQ (cmd, "sfdisk-N"))
    pod2text ("sfdisk-N", _("modify a single partition on a block device"), "=head1 SYNOPSIS\n\n sfdisk-N device partnum cyls heads sectors line\n\n=head1 DESCRIPTION\n\nThis runs L<sfdisk(8)> option to modify just the single\npartition C<n> (note: C<n> counts from 1).\n\nFor other parameters, see C<sfdisk>.  You should usually\npass C<0> for the cyls/heads/sectors parameters.\n\nSee also: C<part_add>\n\nB<This command is dangerous.  Without careful use you\ncan easily destroy all your data>.");
  else
  if (STRCASEEQ (cmd, "sfdisk_l") || STRCASEEQ (cmd, "sfdisk-l"))
    pod2text ("sfdisk-l", _("display the partition table"), "=head1 SYNOPSIS\n\n sfdisk-l device\n\n=head1 DESCRIPTION\n\nThis displays the partition table on C<device>, in the\nhuman-readable output of the L<sfdisk(8)> command.  It is\nnot intended to be parsed.\n\nSee also: C<part_list>");
  else
  if (STRCASEEQ (cmd, "sfdisk_kernel_geometry") || STRCASEEQ (cmd, "sfdisk-kernel-geometry"))
    pod2text ("sfdisk-kernel-geometry", _("display the kernel geometry"), "=head1 SYNOPSIS\n\n sfdisk-kernel-geometry device\n\n=head1 DESCRIPTION\n\nThis displays the kernel's idea of the geometry of C<device>.\n\nThe result is in human-readable format, and not designed to\nbe parsed.");
  else
  if (STRCASEEQ (cmd, "sfdisk_disk_geometry") || STRCASEEQ (cmd, "sfdisk-disk-geometry"))
    pod2text ("sfdisk-disk-geometry", _("display the disk geometry from the partition table"), "=head1 SYNOPSIS\n\n sfdisk-disk-geometry device\n\n=head1 DESCRIPTION\n\nThis displays the disk geometry of C<device> read from the\npartition table.  Especially in the case where the underlying\nblock device has been resized, this can be different from the\nkernel's idea of the geometry (see C<sfdisk_kernel_geometry>).\n\nThe result is in human-readable format, and not designed to\nbe parsed.");
  else
  if (STRCASEEQ (cmd, "vg_activate_all") || STRCASEEQ (cmd, "vg-activate-all"))
    pod2text ("vg-activate-all", _("activate or deactivate all volume groups"), "=head1 SYNOPSIS\n\n vg-activate-all activate\n\n=head1 DESCRIPTION\n\nThis command activates or (if C<activate> is false) deactivates\nall logical volumes in all volume groups.\nIf activated, then they are made known to the\nkernel, ie. they appear as C</dev/mapper> devices.  If deactivated,\nthen those devices disappear.\n\nThis command is the same as running C<vgchange -a y|n>");
  else
  if (STRCASEEQ (cmd, "vg_activate") || STRCASEEQ (cmd, "vg-activate"))
    pod2text ("vg-activate", _("activate or deactivate some volume groups"), "=head1 SYNOPSIS\n\n vg-activate activate volgroups\n\n=head1 DESCRIPTION\n\nThis command activates or (if C<activate> is false) deactivates\nall logical volumes in the listed volume groups C<volgroups>.\nIf activated, then they are made known to the\nkernel, ie. they appear as C</dev/mapper> devices.  If deactivated,\nthen those devices disappear.\n\nThis command is the same as running C<vgchange -a y|n volgroups...>\n\nNote that if C<volgroups> is an empty list then B<all> volume groups\nare activated or deactivated.");
  else
  if (STRCASEEQ (cmd, "lvresize"))
    pod2text ("lvresize", _("resize an LVM logical volume"), "=head1 SYNOPSIS\n\n lvresize device mbytes\n\n=head1 DESCRIPTION\n\nThis resizes (expands or shrinks) an existing LVM logical\nvolume to C<mbytes>.  When reducing, data in the reduced part\nis lost.");
  else
  if (STRCASEEQ (cmd, "resize2fs"))
    pod2text ("resize2fs", _("resize an ext2/ext3 filesystem"), "=head1 SYNOPSIS\n\n resize2fs device\n\n=head1 DESCRIPTION\n\nThis resizes an ext2 or ext3 filesystem to match the size of\nthe underlying device.\n\nI<Note:> It is sometimes required that you run C<e2fsck_f>\non the C<device> before calling this command.  For unknown reasons\nC<resize2fs> sometimes gives an error about this and sometimes not.\nIn any case, it is always safe to call C<e2fsck_f> before\ncalling this function.");
  else
  if (STRCASEEQ (cmd, "find"))
    pod2text ("find", _("find all files and directories"), "=head1 SYNOPSIS\n\n find directory\n\n=head1 DESCRIPTION\n\nThis command lists out all files and directories, recursively,\nstarting at C<directory>.  It is essentially equivalent to\nrunning the shell command C<find directory -print> but some\npost-processing happens on the output, described below.\n\nThis returns a list of strings I<without any prefix>.  Thus\nif the directory structure was:\n\n /tmp/a\n /tmp/b\n /tmp/c/d\n\nthen the returned list from C<find> C</tmp> would be\n4 elements:\n\n a\n b\n c\n c/d\n\nIf C<directory> is not a directory, then this command returns\nan error.\n\nThe returned list is sorted.\n\nSee also C<find0>.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "e2fsck_f") || STRCASEEQ (cmd, "e2fsck-f"))
    pod2text ("e2fsck-f", _("check an ext2/ext3 filesystem"), "=head1 SYNOPSIS\n\n e2fsck-f device\n\n=head1 DESCRIPTION\n\nThis runs C<e2fsck -p -f device>, ie. runs the ext2/ext3\nfilesystem checker on C<device>, noninteractively (C<-p>),\neven if the filesystem appears to be clean (C<-f>).\n\nThis command is only needed because of C<resize2fs>\n(q.v.).  Normally you should use C<fsck>.");
  else
  if (STRCASEEQ (cmd, "sleep"))
    pod2text ("sleep", _("sleep for some seconds"), "=head1 SYNOPSIS\n\n sleep secs\n\n=head1 DESCRIPTION\n\nSleep for C<secs> seconds.");
  else
  if (STRCASEEQ (cmd, "ntfs_3g_probe") || STRCASEEQ (cmd, "ntfs-3g-probe"))
    pod2text ("ntfs-3g-probe", _("probe NTFS volume"), "=head1 SYNOPSIS\n\n ntfs-3g-probe rw device\n\n=head1 DESCRIPTION\n\nThis command runs the L<ntfs-3g.probe(8)> command which probes\nan NTFS C<device> for mountability.  (Not all NTFS volumes can\nbe mounted read-write, and some cannot be mounted at all).\n\nC<rw> is a boolean flag.  Set it to true if you want to test\nif the volume can be mounted read-write.  Set it to false if\nyou want to test if the volume can be mounted read-only.\n\nThe return value is an integer which C<0> if the operation\nwould succeed, or some non-zero value documented in the\nL<ntfs-3g.probe(8)> manual page.");
  else
  if (STRCASEEQ (cmd, "sh"))
    pod2text ("sh", _("run a command via the shell"), "=head1 SYNOPSIS\n\n sh command\n\n=head1 DESCRIPTION\n\nThis call runs a command from the guest filesystem via the\nguest's C</bin/sh>.\n\nThis is like C<command>, but passes the command to:\n\n /bin/sh -c \"command\"\n\nDepending on the guest's shell, this usually results in\nwildcards being expanded, shell expressions being interpolated\nand so on.\n\nAll the provisos about C<command> apply to this call.");
  else
  if (STRCASEEQ (cmd, "sh_lines") || STRCASEEQ (cmd, "sh-lines"))
    pod2text ("sh-lines", _("run a command via the shell returning lines"), "=head1 SYNOPSIS\n\n sh-lines command\n\n=head1 DESCRIPTION\n\nThis is the same as C<sh>, but splits the result\ninto a list of lines.\n\nSee also: C<command_lines>");
  else
  if (STRCASEEQ (cmd, "glob_expand") || STRCASEEQ (cmd, "glob-expand"))
    pod2text ("glob-expand", _("expand a wildcard path"), "=head1 SYNOPSIS\n\n glob-expand pattern\n\n=head1 DESCRIPTION\n\nThis command searches for all the pathnames matching\nC<pattern> according to the wildcard expansion rules\nused by the shell.\n\nIf no paths match, then this returns an empty list\n(note: not an error).\n\nIt is just a wrapper around the C L<glob(3)> function\nwith flags C<GLOB_MARK|GLOB_BRACE>.\nSee that manual page for more details.");
  else
  if (STRCASEEQ (cmd, "scrub_device") || STRCASEEQ (cmd, "scrub-device"))
    pod2text ("scrub-device", _("scrub (securely wipe) a device"), "=head1 SYNOPSIS\n\n scrub-device device\n\n=head1 DESCRIPTION\n\nThis command writes patterns over C<device> to make data retrieval\nmore difficult.\n\nIt is an interface to the L<scrub(1)> program.  See that\nmanual page for more details.\n\nB<This command is dangerous.  Without careful use you\ncan easily destroy all your data>.");
  else
  if (STRCASEEQ (cmd, "scrub_file") || STRCASEEQ (cmd, "scrub-file"))
    pod2text ("scrub-file", _("scrub (securely wipe) a file"), "=head1 SYNOPSIS\n\n scrub-file file\n\n=head1 DESCRIPTION\n\nThis command writes patterns over a file to make data retrieval\nmore difficult.\n\nThe file is I<removed> after scrubbing.\n\nIt is an interface to the L<scrub(1)> program.  See that\nmanual page for more details.");
  else
  if (STRCASEEQ (cmd, "scrub_freespace") || STRCASEEQ (cmd, "scrub-freespace"))
    pod2text ("scrub-freespace", _("scrub (securely wipe) free space"), "=head1 SYNOPSIS\n\n scrub-freespace dir\n\n=head1 DESCRIPTION\n\nThis command creates the directory C<dir> and then fills it\nwith files until the filesystem is full, and scrubs the files\nas for C<scrub_file>, and deletes them.\nThe intention is to scrub any free space on the partition\ncontaining C<dir>.\n\nIt is an interface to the L<scrub(1)> program.  See that\nmanual page for more details.");
  else
  if (STRCASEEQ (cmd, "mkdtemp"))
    pod2text ("mkdtemp", _("create a temporary directory"), "=head1 SYNOPSIS\n\n mkdtemp template\n\n=head1 DESCRIPTION\n\nThis command creates a temporary directory.  The\nC<template> parameter should be a full pathname for the\ntemporary directory name with the final six characters being\n\"XXXXXX\".\n\nFor example: \"/tmp/myprogXXXXXX\" or \"/Temp/myprogXXXXXX\",\nthe second one being suitable for Windows filesystems.\n\nThe name of the temporary directory that was created\nis returned.\n\nThe temporary directory is created with mode 0700\nand is owned by root.\n\nThe caller is responsible for deleting the temporary\ndirectory and its contents after use.\n\nSee also: L<mkdtemp(3)>");
  else
  if (STRCASEEQ (cmd, "wc_l") || STRCASEEQ (cmd, "wc-l"))
    pod2text ("wc-l", _("count lines in a file"), "=head1 SYNOPSIS\n\n wc-l path\n\n=head1 DESCRIPTION\n\nThis command counts the lines in a file, using the\nC<wc -l> external command.");
  else
  if (STRCASEEQ (cmd, "wc_w") || STRCASEEQ (cmd, "wc-w"))
    pod2text ("wc-w", _("count words in a file"), "=head1 SYNOPSIS\n\n wc-w path\n\n=head1 DESCRIPTION\n\nThis command counts the words in a file, using the\nC<wc -w> external command.");
  else
  if (STRCASEEQ (cmd, "wc_c") || STRCASEEQ (cmd, "wc-c"))
    pod2text ("wc-c", _("count characters in a file"), "=head1 SYNOPSIS\n\n wc-c path\n\n=head1 DESCRIPTION\n\nThis command counts the characters in a file, using the\nC<wc -c> external command.");
  else
  if (STRCASEEQ (cmd, "head"))
    pod2text ("head", _("return first 10 lines of a file"), "=head1 SYNOPSIS\n\n head path\n\n=head1 DESCRIPTION\n\nThis command returns up to the first 10 lines of a file as\na list of strings.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "head_n") || STRCASEEQ (cmd, "head-n"))
    pod2text ("head-n", _("return first N lines of a file"), "=head1 SYNOPSIS\n\n head-n nrlines path\n\n=head1 DESCRIPTION\n\nIf the parameter C<nrlines> is a positive number, this returns the first\nC<nrlines> lines of the file C<path>.\n\nIf the parameter C<nrlines> is a negative number, this returns lines\nfrom the file C<path>, excluding the last C<nrlines> lines.\n\nIf the parameter C<nrlines> is zero, this returns an empty list.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "tail"))
    pod2text ("tail", _("return last 10 lines of a file"), "=head1 SYNOPSIS\n\n tail path\n\n=head1 DESCRIPTION\n\nThis command returns up to the last 10 lines of a file as\na list of strings.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "tail_n") || STRCASEEQ (cmd, "tail-n"))
    pod2text ("tail-n", _("return last N lines of a file"), "=head1 SYNOPSIS\n\n tail-n nrlines path\n\n=head1 DESCRIPTION\n\nIf the parameter C<nrlines> is a positive number, this returns the last\nC<nrlines> lines of the file C<path>.\n\nIf the parameter C<nrlines> is a negative number, this returns lines\nfrom the file C<path>, starting with the C<-nrlines>th line.\n\nIf the parameter C<nrlines> is zero, this returns an empty list.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "df"))
    pod2text ("df", _("report file system disk space usage"), "=head1 SYNOPSIS\n\n df\n\n=head1 DESCRIPTION\n\nThis command runs the C<df> command to report disk space used.\n\nThis command is mostly useful for interactive sessions.  It\nis I<not> intended that you try to parse the output string.\nUse C<statvfs> from programs.");
  else
  if (STRCASEEQ (cmd, "df_h") || STRCASEEQ (cmd, "df-h"))
    pod2text ("df-h", _("report file system disk space usage (human readable)"), "=head1 SYNOPSIS\n\n df-h\n\n=head1 DESCRIPTION\n\nThis command runs the C<df -h> command to report disk space used\nin human-readable format.\n\nThis command is mostly useful for interactive sessions.  It\nis I<not> intended that you try to parse the output string.\nUse C<statvfs> from programs.");
  else
  if (STRCASEEQ (cmd, "du"))
    pod2text ("du", _("estimate file space usage"), "=head1 SYNOPSIS\n\n du path\n\n=head1 DESCRIPTION\n\nThis command runs the C<du -s> command to estimate file space\nusage for C<path>.\n\nC<path> can be a file or a directory.  If C<path> is a directory\nthen the estimate includes the contents of the directory and all\nsubdirectories (recursively).\n\nThe result is the estimated size in I<kilobytes>\n(ie. units of 1024 bytes).");
  else
  if (STRCASEEQ (cmd, "initrd_list") || STRCASEEQ (cmd, "initrd-list"))
    pod2text ("initrd-list", _("list files in an initrd"), "=head1 SYNOPSIS\n\n initrd-list path\n\n=head1 DESCRIPTION\n\nThis command lists out files contained in an initrd.\n\nThe files are listed without any initial C</> character.  The\nfiles are listed in the order they appear (not necessarily\nalphabetical).  Directory names are listed as separate items.\n\nOld Linux kernels (2.4 and earlier) used a compressed ext2\nfilesystem as initrd.  We I<only> support the newer initramfs\nformat (compressed cpio files).");
  else
  if (STRCASEEQ (cmd, "mount_loop") || STRCASEEQ (cmd, "mount-loop"))
    pod2text ("mount-loop", _("mount a file using the loop device"), "=head1 SYNOPSIS\n\n mount-loop file mountpoint\n\n=head1 DESCRIPTION\n\nThis command lets you mount C<file> (a filesystem image\nin a file) on a mount point.  It is entirely equivalent to\nthe command C<mount -o loop file mountpoint>.");
  else
  if (STRCASEEQ (cmd, "mkswap"))
    pod2text ("mkswap", _("create a swap partition"), "=head1 SYNOPSIS\n\n mkswap device\n\n=head1 DESCRIPTION\n\nCreate a swap partition on C<device>.");
  else
  if (STRCASEEQ (cmd, "mkswap_L") || STRCASEEQ (cmd, "mkswap-L"))
    pod2text ("mkswap-L", _("create a swap partition with a label"), "=head1 SYNOPSIS\n\n mkswap-L label device\n\n=head1 DESCRIPTION\n\nCreate a swap partition on C<device> with label C<label>.\n\nNote that you cannot attach a swap label to a block device\n(eg. C</dev/sda>), just to a partition.  This appears to be\na limitation of the kernel or swap tools.");
  else
  if (STRCASEEQ (cmd, "mkswap_U") || STRCASEEQ (cmd, "mkswap-U"))
    pod2text ("mkswap-U", _("create a swap partition with an explicit UUID"), "=head1 SYNOPSIS\n\n mkswap-U uuid device\n\n=head1 DESCRIPTION\n\nCreate a swap partition on C<device> with UUID C<uuid>.");
  else
  if (STRCASEEQ (cmd, "mknod"))
    pod2text ("mknod", _("make block, character or FIFO devices"), "=head1 SYNOPSIS\n\n mknod mode devmajor devminor path\n\n=head1 DESCRIPTION\n\nThis call creates block or character special devices, or\nnamed pipes (FIFOs).\n\nThe C<mode> parameter should be the mode, using the standard\nconstants.  C<devmajor> and C<devminor> are the\ndevice major and minor numbers, only used when creating block\nand character special devices.");
  else
  if (STRCASEEQ (cmd, "mkfifo"))
    pod2text ("mkfifo", _("make FIFO (named pipe)"), "=head1 SYNOPSIS\n\n mkfifo mode path\n\n=head1 DESCRIPTION\n\nThis call creates a FIFO (named pipe) called C<path> with\nmode C<mode>.  It is just a convenient wrapper around\nC<mknod>.");
  else
  if (STRCASEEQ (cmd, "mknod_b") || STRCASEEQ (cmd, "mknod-b"))
    pod2text ("mknod-b", _("make block device node"), "=head1 SYNOPSIS\n\n mknod-b mode devmajor devminor path\n\n=head1 DESCRIPTION\n\nThis call creates a block device node called C<path> with\nmode C<mode> and device major/minor C<devmajor> and C<devminor>.\nIt is just a convenient wrapper around C<mknod>.");
  else
  if (STRCASEEQ (cmd, "mknod_c") || STRCASEEQ (cmd, "mknod-c"))
    pod2text ("mknod-c", _("make char device node"), "=head1 SYNOPSIS\n\n mknod-c mode devmajor devminor path\n\n=head1 DESCRIPTION\n\nThis call creates a char device node called C<path> with\nmode C<mode> and device major/minor C<devmajor> and C<devminor>.\nIt is just a convenient wrapper around C<mknod>.");
  else
  if (STRCASEEQ (cmd, "umask"))
    pod2text ("umask", _("set file mode creation mask (umask)"), "=head1 SYNOPSIS\n\n umask mask\n\n=head1 DESCRIPTION\n\nThis function sets the mask used for creating new files and\ndevice nodes to C<mask & 0777>.\n\nTypical umask values would be C<022> which creates new files\nwith permissions like \"-rw-r--r--\" or \"-rwxr-xr-x\", and\nC<002> which creates new files with permissions like\n\"-rw-rw-r--\" or \"-rwxrwxr-x\".\n\nThe default umask is C<022>.  This is important because it\nmeans that directories and device nodes will be created with\nC<0644> or C<0755> mode even if you specify C<0777>.\n\nSee also L<umask(2)>, C<mknod>, C<mkdir>.\n\nThis call returns the previous umask.");
  else
  if (STRCASEEQ (cmd, "readdir"))
    pod2text ("readdir", _("read directories entries"), "=head1 SYNOPSIS\n\n readdir dir\n\n=head1 DESCRIPTION\n\nThis returns the list of directory entries in directory C<dir>.\n\nAll entries in the directory are returned, including C<.> and\nC<..>.  The entries are I<not> sorted, but returned in the same\norder as the underlying filesystem.\n\nAlso this call returns basic file type information about each\nfile.  The C<ftyp> field will contain one of the following characters:\n\n=over 4\n\n=item 'b'\n\nBlock special\n\n=item 'c'\n\nChar special\n\n=item 'd'\n\nDirectory\n\n=item 'f'\n\nFIFO (named pipe)\n\n=item 'l'\n\nSymbolic link\n\n=item 'r'\n\nRegular file\n\n=item 's'\n\nSocket\n\n=item 'u'\n\nUnknown file type\n\n=item '?'\n\nThe L<readdir(3)> returned a C<d_type> field with an\nunexpected value\n\n=back\n\nThis function is primarily intended for use by programs.  To\nget a simple list of names, use C<ls>.  To get a printable\ndirectory for human consumption, use C<ll>.");
  else
  if (STRCASEEQ (cmd, "sfdiskM"))
    pod2text ("sfdiskM", _("create partitions on a block device"), "=head1 SYNOPSIS\n\n sfdiskM device lines\n\n=head1 DESCRIPTION\n\nThis is a simplified interface to the C<sfdisk>\ncommand, where partition sizes are specified in megabytes\nonly (rounded to the nearest cylinder) and you don't need\nto specify the cyls, heads and sectors parameters which\nwere rarely if ever used anyway.\n\nSee also: C<sfdisk>, the L<sfdisk(8)> manpage\nand C<part_disk>\n\nB<This command is dangerous.  Without careful use you\ncan easily destroy all your data>.");
  else
  if (STRCASEEQ (cmd, "zfile"))
    pod2text ("zfile", _("determine file type inside a compressed file"), "=head1 SYNOPSIS\n\n zfile meth path\n\n=head1 DESCRIPTION\n\nThis command runs C<file> after first decompressing C<path>\nusing C<method>.\n\nC<method> must be one of C<gzip>, C<compress> or C<bzip2>.\n\nSince 1.0.63, use C<file> instead which can now\nprocess compressed files.\n\nThis function is deprecated.\nIn new code, use the C<file> call instead.\n\nDeprecated functions will not be removed from the API, but the\nfact that they are deprecated indicates that there are problems\nwith correct use of these functions.");
  else
  if (STRCASEEQ (cmd, "getxattrs"))
    pod2text ("getxattrs", _("list extended attributes of a file or directory"), "=head1 SYNOPSIS\n\n getxattrs path\n\n=head1 DESCRIPTION\n\nThis call lists the extended attributes of the file or directory\nC<path>.\n\nAt the system call level, this is a combination of the\nL<listxattr(2)> and L<getxattr(2)> calls.\n\nSee also: C<lgetxattrs>, L<attr(5)>.");
  else
  if (STRCASEEQ (cmd, "lgetxattrs"))
    pod2text ("lgetxattrs", _("list extended attributes of a file or directory"), "=head1 SYNOPSIS\n\n lgetxattrs path\n\n=head1 DESCRIPTION\n\nThis is the same as C<getxattrs>, but if C<path>\nis a symbolic link, then it returns the extended attributes\nof the link itself.");
  else
  if (STRCASEEQ (cmd, "setxattr"))
    pod2text ("setxattr", _("set extended attribute of a file or directory"), "=head1 SYNOPSIS\n\n setxattr xattr val vallen path\n\n=head1 DESCRIPTION\n\nThis call sets the extended attribute named C<xattr>\nof the file C<path> to the value C<val> (of length C<vallen>).\nThe value is arbitrary 8 bit data.\n\nSee also: C<lsetxattr>, L<attr(5)>.");
  else
  if (STRCASEEQ (cmd, "lsetxattr"))
    pod2text ("lsetxattr", _("set extended attribute of a file or directory"), "=head1 SYNOPSIS\n\n lsetxattr xattr val vallen path\n\n=head1 DESCRIPTION\n\nThis is the same as C<setxattr>, but if C<path>\nis a symbolic link, then it sets an extended attribute\nof the link itself.");
  else
  if (STRCASEEQ (cmd, "removexattr"))
    pod2text ("removexattr", _("remove extended attribute of a file or directory"), "=head1 SYNOPSIS\n\n removexattr xattr path\n\n=head1 DESCRIPTION\n\nThis call removes the extended attribute named C<xattr>\nof the file C<path>.\n\nSee also: C<lremovexattr>, L<attr(5)>.");
  else
  if (STRCASEEQ (cmd, "lremovexattr"))
    pod2text ("lremovexattr", _("remove extended attribute of a file or directory"), "=head1 SYNOPSIS\n\n lremovexattr xattr path\n\n=head1 DESCRIPTION\n\nThis is the same as C<removexattr>, but if C<path>\nis a symbolic link, then it removes an extended attribute\nof the link itself.");
  else
  if (STRCASEEQ (cmd, "mountpoints"))
    pod2text ("mountpoints", _("show mountpoints"), "=head1 SYNOPSIS\n\n mountpoints\n\n=head1 DESCRIPTION\n\nThis call is similar to C<mounts>.  That call returns\na list of devices.  This one returns a hash table (map) of\ndevice name to directory where the device is mounted.");
  else
  if (STRCASEEQ (cmd, "mkmountpoint"))
    pod2text ("mkmountpoint", _("create a mountpoint"), "=head1 SYNOPSIS\n\n mkmountpoint exemptpath\n\n=head1 DESCRIPTION\n\nC<mkmountpoint> and C<rmmountpoint> are\nspecialized calls that can be used to create extra mountpoints\nbefore mounting the first filesystem.\n\nThese calls are I<only> necessary in some very limited circumstances,\nmainly the case where you want to mount a mix of unrelated and/or\nread-only filesystems together.\n\nFor example, live CDs often contain a \"Russian doll\" nest of\nfilesystems, an ISO outer layer, with a squashfs image inside, with\nan ext2/3 image inside that.  You can unpack this as follows\nin guestfish:\n\n add-ro Fedora-11-i686-Live.iso\n run\n mkmountpoint /cd\n mkmountpoint /squash\n mkmountpoint /ext3\n mount /dev/sda /cd\n mount-loop /cd/LiveOS/squashfs.img /squash\n mount-loop /squash/LiveOS/ext3fs.img /ext3\n\nThe inner filesystem is now unpacked under the /ext3 mountpoint.");
  else
  if (STRCASEEQ (cmd, "rmmountpoint"))
    pod2text ("rmmountpoint", _("remove a mountpoint"), "=head1 SYNOPSIS\n\n rmmountpoint exemptpath\n\n=head1 DESCRIPTION\n\nThis calls removes a mountpoint that was previously created\nwith C<mkmountpoint>.  See C<mkmountpoint>\nfor full details.");
  else
  if (STRCASEEQ (cmd, "read_file") || STRCASEEQ (cmd, "read-file"))
    pod2text ("read-file", _("read a file"), "=head1 SYNOPSIS\n\n read-file path\n\n=head1 DESCRIPTION\n\nThis calls returns the contents of the file C<path> as a\nbuffer.\n\nUnlike C<cat>, this function can correctly\nhandle files that contain embedded ASCII NUL characters.\nHowever unlike C<download>, this function is limited\nin the total size of file that can be handled.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "grep"))
    pod2text ("grep", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n grep regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<grep> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "egrep"))
    pod2text ("egrep", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n egrep regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<egrep> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "fgrep"))
    pod2text ("fgrep", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n fgrep pattern path\n\n=head1 DESCRIPTION\n\nThis calls the external C<fgrep> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "grepi"))
    pod2text ("grepi", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n grepi regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<grep -i> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "egrepi"))
    pod2text ("egrepi", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n egrepi regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<egrep -i> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "fgrepi"))
    pod2text ("fgrepi", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n fgrepi pattern path\n\n=head1 DESCRIPTION\n\nThis calls the external C<fgrep -i> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "zgrep"))
    pod2text ("zgrep", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n zgrep regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<zgrep> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "zegrep"))
    pod2text ("zegrep", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n zegrep regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<zegrep> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "zfgrep"))
    pod2text ("zfgrep", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n zfgrep pattern path\n\n=head1 DESCRIPTION\n\nThis calls the external C<zfgrep> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "zgrepi"))
    pod2text ("zgrepi", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n zgrepi regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<zgrep -i> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "zegrepi"))
    pod2text ("zegrepi", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n zegrepi regex path\n\n=head1 DESCRIPTION\n\nThis calls the external C<zegrep -i> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "zfgrepi"))
    pod2text ("zfgrepi", _("return lines matching a pattern"), "=head1 SYNOPSIS\n\n zfgrepi pattern path\n\n=head1 DESCRIPTION\n\nThis calls the external C<zfgrep -i> program and returns the\nmatching lines.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "realpath"))
    pod2text ("realpath", _("canonicalized absolute pathname"), "=head1 SYNOPSIS\n\n realpath path\n\n=head1 DESCRIPTION\n\nReturn the canonicalized absolute pathname of C<path>.  The\nreturned path has no C<.>, C<..> or symbolic link path elements.");
  else
  if (STRCASEEQ (cmd, "ln"))
    pod2text ("ln", _("create a hard link"), "=head1 SYNOPSIS\n\n ln target linkname\n\n=head1 DESCRIPTION\n\nThis command creates a hard link using the C<ln> command.");
  else
  if (STRCASEEQ (cmd, "ln_f") || STRCASEEQ (cmd, "ln-f"))
    pod2text ("ln-f", _("create a hard link"), "=head1 SYNOPSIS\n\n ln-f target linkname\n\n=head1 DESCRIPTION\n\nThis command creates a hard link using the C<ln -f> command.\nThe C<-f> option removes the link (C<linkname>) if it exists already.");
  else
  if (STRCASEEQ (cmd, "ln_s") || STRCASEEQ (cmd, "ln-s"))
    pod2text ("ln-s", _("create a symbolic link"), "=head1 SYNOPSIS\n\n ln-s target linkname\n\n=head1 DESCRIPTION\n\nThis command creates a symbolic link using the C<ln -s> command.");
  else
  if (STRCASEEQ (cmd, "ln_sf") || STRCASEEQ (cmd, "ln-sf"))
    pod2text ("ln-sf", _("create a symbolic link"), "=head1 SYNOPSIS\n\n ln-sf target linkname\n\n=head1 DESCRIPTION\n\nThis command creates a symbolic link using the C<ln -sf> command,\nThe C<-f> option removes the link (C<linkname>) if it exists already.");
  else
  if (STRCASEEQ (cmd, "readlink"))
    pod2text ("readlink", _("read the target of a symbolic link"), "=head1 SYNOPSIS\n\n readlink path\n\n=head1 DESCRIPTION\n\nThis command reads the target of a symbolic link.");
  else
  if (STRCASEEQ (cmd, "fallocate"))
    pod2text ("fallocate", _("preallocate a file in the guest filesystem"), "=head1 SYNOPSIS\n\n fallocate path len\n\n=head1 DESCRIPTION\n\nThis command preallocates a file (containing zero bytes) named\nC<path> of size C<len> bytes.  If the file exists already, it\nis overwritten.\n\nDo not confuse this with the guestfish-specific\nC<alloc> command which allocates a file in the host and\nattaches it as a device.");
  else
  if (STRCASEEQ (cmd, "swapon_device") || STRCASEEQ (cmd, "swapon-device"))
    pod2text ("swapon-device", _("enable swap on device"), "=head1 SYNOPSIS\n\n swapon-device device\n\n=head1 DESCRIPTION\n\nThis command enables the libguestfs appliance to use the\nswap device or partition named C<device>.  The increased\nmemory is made available for all commands, for example\nthose run using C<command> or C<sh>.\n\nNote that you should not swap to existing guest swap\npartitions unless you know what you are doing.  They may\ncontain hibernation information, or other information that\nthe guest doesn't want you to trash.  You also risk leaking\ninformation about the host to the guest this way.  Instead,\nattach a new host device to the guest and swap on that.");
  else
  if (STRCASEEQ (cmd, "swapoff_device") || STRCASEEQ (cmd, "swapoff-device"))
    pod2text ("swapoff-device", _("disable swap on device"), "=head1 SYNOPSIS\n\n swapoff-device device\n\n=head1 DESCRIPTION\n\nThis command disables the libguestfs appliance swap\ndevice or partition named C<device>.\nSee C<swapon_device>.");
  else
  if (STRCASEEQ (cmd, "swapon_file") || STRCASEEQ (cmd, "swapon-file"))
    pod2text ("swapon-file", _("enable swap on file"), "=head1 SYNOPSIS\n\n swapon-file file\n\n=head1 DESCRIPTION\n\nThis command enables swap to a file.\nSee C<swapon_device> for other notes.");
  else
  if (STRCASEEQ (cmd, "swapoff_file") || STRCASEEQ (cmd, "swapoff-file"))
    pod2text ("swapoff-file", _("disable swap on file"), "=head1 SYNOPSIS\n\n swapoff-file file\n\n=head1 DESCRIPTION\n\nThis command disables the libguestfs appliance swap on file.");
  else
  if (STRCASEEQ (cmd, "swapon_label") || STRCASEEQ (cmd, "swapon-label"))
    pod2text ("swapon-label", _("enable swap on labeled swap partition"), "=head1 SYNOPSIS\n\n swapon-label label\n\n=head1 DESCRIPTION\n\nThis command enables swap to a labeled swap partition.\nSee C<swapon_device> for other notes.");
  else
  if (STRCASEEQ (cmd, "swapoff_label") || STRCASEEQ (cmd, "swapoff-label"))
    pod2text ("swapoff-label", _("disable swap on labeled swap partition"), "=head1 SYNOPSIS\n\n swapoff-label label\n\n=head1 DESCRIPTION\n\nThis command disables the libguestfs appliance swap on\nlabeled swap partition.");
  else
  if (STRCASEEQ (cmd, "swapon_uuid") || STRCASEEQ (cmd, "swapon-uuid"))
    pod2text ("swapon-uuid", _("enable swap on swap partition by UUID"), "=head1 SYNOPSIS\n\n swapon-uuid uuid\n\n=head1 DESCRIPTION\n\nThis command enables swap to a swap partition with the given UUID.\nSee C<swapon_device> for other notes.");
  else
  if (STRCASEEQ (cmd, "swapoff_uuid") || STRCASEEQ (cmd, "swapoff-uuid"))
    pod2text ("swapoff-uuid", _("disable swap on swap partition by UUID"), "=head1 SYNOPSIS\n\n swapoff-uuid uuid\n\n=head1 DESCRIPTION\n\nThis command disables the libguestfs appliance swap partition\nwith the given UUID.");
  else
  if (STRCASEEQ (cmd, "mkswap_file") || STRCASEEQ (cmd, "mkswap-file"))
    pod2text ("mkswap-file", _("create a swap file"), "=head1 SYNOPSIS\n\n mkswap-file path\n\n=head1 DESCRIPTION\n\nCreate a swap file.\n\nThis command just writes a swap file signature to an existing\nfile.  To create the file itself, use something like C<fallocate>.");
  else
  if (STRCASEEQ (cmd, "inotify_init") || STRCASEEQ (cmd, "inotify-init"))
    pod2text ("inotify-init", _("create an inotify handle"), "=head1 SYNOPSIS\n\n inotify-init maxevents\n\n=head1 DESCRIPTION\n\nThis command creates a new inotify handle.\nThe inotify subsystem can be used to notify events which happen to\nobjects in the guest filesystem.\n\nC<maxevents> is the maximum number of events which will be\nqueued up between calls to C<inotify_read> or\nC<inotify_files>.\nIf this is passed as C<0>, then the kernel (or previously set)\ndefault is used.  For Linux 2.6.29 the default was 16384 events.\nBeyond this limit, the kernel throws away events, but records\nthe fact that it threw them away by setting a flag\nC<IN_Q_OVERFLOW> in the returned structure list (see\nC<inotify_read>).\n\nBefore any events are generated, you have to add some\nwatches to the internal watch list.  See:\nC<inotify_add_watch>,\nC<inotify_rm_watch> and\nC<inotify_watch_all>.\n\nQueued up events should be read periodically by calling\nC<inotify_read>\n(or C<inotify_files> which is just a helpful\nwrapper around C<inotify_read>).  If you don't\nread the events out often enough then you risk the internal\nqueue overflowing.\n\nThe handle should be closed after use by calling\nC<inotify_close>.  This also removes any\nwatches automatically.\n\nSee also L<inotify(7)> for an overview of the inotify interface\nas exposed by the Linux kernel, which is roughly what we expose\nvia libguestfs.  Note that there is one global inotify handle\nper libguestfs instance.");
  else
  if (STRCASEEQ (cmd, "inotify_add_watch") || STRCASEEQ (cmd, "inotify-add-watch"))
    pod2text ("inotify-add-watch", _("add an inotify watch"), "=head1 SYNOPSIS\n\n inotify-add-watch path mask\n\n=head1 DESCRIPTION\n\nWatch C<path> for the events listed in C<mask>.\n\nNote that if C<path> is a directory then events within that\ndirectory are watched, but this does I<not> happen recursively\n(in subdirectories).\n\nNote for non-C or non-Linux callers: the inotify events are\ndefined by the Linux kernel ABI and are listed in\nC</usr/include/sys/inotify.h>.");
  else
  if (STRCASEEQ (cmd, "inotify_rm_watch") || STRCASEEQ (cmd, "inotify-rm-watch"))
    pod2text ("inotify-rm-watch", _("remove an inotify watch"), "=head1 SYNOPSIS\n\n inotify-rm-watch wd\n\n=head1 DESCRIPTION\n\nRemove a previously defined inotify watch.\nSee C<inotify_add_watch>.");
  else
  if (STRCASEEQ (cmd, "inotify_read") || STRCASEEQ (cmd, "inotify-read"))
    pod2text ("inotify-read", _("return list of inotify events"), "=head1 SYNOPSIS\n\n inotify-read\n\n=head1 DESCRIPTION\n\nReturn the complete queue of events that have happened\nsince the previous read call.\n\nIf no events have happened, this returns an empty list.\n\nI<Note>: In order to make sure that all events have been\nread, you must call this function repeatedly until it\nreturns an empty list.  The reason is that the call will\nread events up to the maximum appliance-to-host message\nsize and leave remaining events in the queue.");
  else
  if (STRCASEEQ (cmd, "inotify_files") || STRCASEEQ (cmd, "inotify-files"))
    pod2text ("inotify-files", _("return list of watched files that had events"), "=head1 SYNOPSIS\n\n inotify-files\n\n=head1 DESCRIPTION\n\nThis function is a helpful wrapper around C<inotify_read>\nwhich just returns a list of pathnames of objects that were\ntouched.  The returned pathnames are sorted and deduplicated.");
  else
  if (STRCASEEQ (cmd, "inotify_close") || STRCASEEQ (cmd, "inotify-close"))
    pod2text ("inotify-close", _("close the inotify handle"), "=head1 SYNOPSIS\n\n inotify-close\n\n=head1 DESCRIPTION\n\nThis closes the inotify handle which was previously\nopened by inotify_init.  It removes all watches, throws\naway any pending events, and deallocates all resources.");
  else
  if (STRCASEEQ (cmd, "setcon"))
    pod2text ("setcon", _("set SELinux security context"), "=head1 SYNOPSIS\n\n setcon context\n\n=head1 DESCRIPTION\n\nThis sets the SELinux security context of the daemon\nto the string C<context>.\n\nSee the documentation about SELINUX in L<guestfs(3)>.");
  else
  if (STRCASEEQ (cmd, "getcon"))
    pod2text ("getcon", _("get SELinux security context"), "=head1 SYNOPSIS\n\n getcon\n\n=head1 DESCRIPTION\n\nThis gets the SELinux security context of the daemon.\n\nSee the documentation about SELINUX in L<guestfs(3)>,\nand C<setcon>");
  else
  if (STRCASEEQ (cmd, "mkfs_b") || STRCASEEQ (cmd, "mkfs-b"))
    pod2text ("mkfs-b", _("make a filesystem with block size"), "=head1 SYNOPSIS\n\n mkfs-b fstype blocksize device\n\n=head1 DESCRIPTION\n\nThis call is similar to C<mkfs>, but it allows you to\ncontrol the block size of the resulting filesystem.  Supported\nblock sizes depend on the filesystem type, but typically they\nare C<1024>, C<2048> or C<4096> only.");
  else
  if (STRCASEEQ (cmd, "mke2journal"))
    pod2text ("mke2journal", _("make ext2/3/4 external journal"), "=head1 SYNOPSIS\n\n mke2journal blocksize device\n\n=head1 DESCRIPTION\n\nThis creates an ext2 external journal on C<device>.  It is equivalent\nto the command:\n\n mke2fs -O journal_dev -b blocksize device");
  else
  if (STRCASEEQ (cmd, "mke2journal_L") || STRCASEEQ (cmd, "mke2journal-L"))
    pod2text ("mke2journal-L", _("make ext2/3/4 external journal with label"), "=head1 SYNOPSIS\n\n mke2journal-L blocksize label device\n\n=head1 DESCRIPTION\n\nThis creates an ext2 external journal on C<device> with label C<label>.");
  else
  if (STRCASEEQ (cmd, "mke2journal_U") || STRCASEEQ (cmd, "mke2journal-U"))
    pod2text ("mke2journal-U", _("make ext2/3/4 external journal with UUID"), "=head1 SYNOPSIS\n\n mke2journal-U blocksize uuid device\n\n=head1 DESCRIPTION\n\nThis creates an ext2 external journal on C<device> with UUID C<uuid>.");
  else
  if (STRCASEEQ (cmd, "mke2fs_J") || STRCASEEQ (cmd, "mke2fs-J"))
    pod2text ("mke2fs-J", _("make ext2/3/4 filesystem with external journal"), "=head1 SYNOPSIS\n\n mke2fs-J fstype blocksize device journal\n\n=head1 DESCRIPTION\n\nThis creates an ext2/3/4 filesystem on C<device> with\nan external journal on C<journal>.  It is equivalent\nto the command:\n\n mke2fs -t fstype -b blocksize -J device=<journal> <device>\n\nSee also C<mke2journal>.");
  else
  if (STRCASEEQ (cmd, "mke2fs_JL") || STRCASEEQ (cmd, "mke2fs-JL"))
    pod2text ("mke2fs-JL", _("make ext2/3/4 filesystem with external journal"), "=head1 SYNOPSIS\n\n mke2fs-JL fstype blocksize device label\n\n=head1 DESCRIPTION\n\nThis creates an ext2/3/4 filesystem on C<device> with\nan external journal on the journal labeled C<label>.\n\nSee also C<mke2journal_L>.");
  else
  if (STRCASEEQ (cmd, "mke2fs_JU") || STRCASEEQ (cmd, "mke2fs-JU"))
    pod2text ("mke2fs-JU", _("make ext2/3/4 filesystem with external journal"), "=head1 SYNOPSIS\n\n mke2fs-JU fstype blocksize device uuid\n\n=head1 DESCRIPTION\n\nThis creates an ext2/3/4 filesystem on C<device> with\nan external journal on the journal with UUID C<uuid>.\n\nSee also C<mke2journal_U>.");
  else
  if (STRCASEEQ (cmd, "modprobe"))
    pod2text ("modprobe", _("load a kernel module"), "=head1 SYNOPSIS\n\n modprobe modulename\n\n=head1 DESCRIPTION\n\nThis loads a kernel module in the appliance.\n\nThe kernel module must have been whitelisted when libguestfs\nwas built (see C<appliance/kmod.whitelist.in> in the source).");
  else
  if (STRCASEEQ (cmd, "echo_daemon") || STRCASEEQ (cmd, "echo-daemon"))
    pod2text ("echo-daemon", _("echo arguments back to the client"), "=head1 SYNOPSIS\n\n echo-daemon words\n\n=head1 DESCRIPTION\n\nThis command concatenate the list of C<words> passed with single spaces between\nthem and returns the resulting string.\n\nYou can use this command to test the connection through to the daemon.\n\nSee also C<ping_daemon>.");
  else
  if (STRCASEEQ (cmd, "find0"))
    pod2text ("find0", _("find all files and directories, returning NUL-separated list"), "=head1 SYNOPSIS\n\n find0 directory files\n\n=head1 DESCRIPTION\n\nThis command lists out all files and directories, recursively,\nstarting at C<directory>, placing the resulting list in the\nexternal file called C<files>.\n\nThis command works the same way as C<find> with the\nfollowing exceptions:\n\n=over 4\n\n=item *\n\nThe resulting list is written to an external file.\n\n=item *\n\nItems (filenames) in the result are separated\nby C<\\0> characters.  See L<find(1)> option I<-print0>.\n\n=item *\n\nThis command is not limited in the number of names that it\ncan return.\n\n=item *\n\nThe result list is not sorted.\n\n=back");
  else
  if (STRCASEEQ (cmd, "case_sensitive_path") || STRCASEEQ (cmd, "case-sensitive-path"))
    pod2text ("case-sensitive-path", _("return true path on case-insensitive filesystem"), "=head1 SYNOPSIS\n\n case-sensitive-path path\n\n=head1 DESCRIPTION\n\nThis can be used to resolve case insensitive paths on\na filesystem which is case sensitive.  The use case is\nto resolve paths which you have read from Windows configuration\nfiles or the Windows Registry, to the true path.\n\nThe command handles a peculiarity of the Linux ntfs-3g\nfilesystem driver (and probably others), which is that although\nthe underlying filesystem is case-insensitive, the driver\nexports the filesystem to Linux as case-sensitive.\n\nOne consequence of this is that special directories such\nas C<c:\\windows> may appear as C</WINDOWS> or C</windows>\n(or other things) depending on the precise details of how\nthey were created.  In Windows itself this would not be\na problem.\n\nBug or feature?  You decide:\nL<http://www.tuxera.com/community/ntfs-3g-faq/#posixfilenames1>\n\nThis function resolves the true case of each element in the\npath and returns the case-sensitive path.\n\nThus C<case_sensitive_path> (\"/Windows/System32\")\nmight return C<\"/WINDOWS/system32\"> (the exact return value\nwould depend on details of how the directories were originally\ncreated under Windows).\n\nI<Note>:\nThis function does not handle drive names, backslashes etc.\n\nSee also C<realpath>.");
  else
  if (STRCASEEQ (cmd, "vfs_type") || STRCASEEQ (cmd, "vfs-type"))
    pod2text ("vfs-type", _("get the Linux VFS type corresponding to a mounted device"), "=head1 SYNOPSIS\n\n vfs-type device\n\n=head1 DESCRIPTION\n\nThis command gets the block device type corresponding to\na mounted device called C<device>.\n\nUsually the result is the name of the Linux VFS module that\nis used to mount this device (probably determined automatically\nif you used the C<mount> call).");
  else
  if (STRCASEEQ (cmd, "truncate"))
    pod2text ("truncate", _("truncate a file to zero size"), "=head1 SYNOPSIS\n\n truncate path\n\n=head1 DESCRIPTION\n\nThis command truncates C<path> to a zero-length file.  The\nfile must exist already.");
  else
  if (STRCASEEQ (cmd, "truncate_size") || STRCASEEQ (cmd, "truncate-size"))
    pod2text ("truncate-size", _("truncate a file to a particular size"), "=head1 SYNOPSIS\n\n truncate-size path size\n\n=head1 DESCRIPTION\n\nThis command truncates C<path> to size C<size> bytes.  The file\nmust exist already.  If the file is smaller than C<size> then\nthe file is extended to the required size with null bytes.");
  else
  if (STRCASEEQ (cmd, "utimens"))
    pod2text ("utimens", _("set timestamp of a file with nanosecond precision"), "=head1 SYNOPSIS\n\n utimens path atsecs atnsecs mtsecs mtnsecs\n\n=head1 DESCRIPTION\n\nThis command sets the timestamps of a file with nanosecond\nprecision.\n\nC<atsecs, atnsecs> are the last access time (atime) in secs and\nnanoseconds from the epoch.\n\nC<mtsecs, mtnsecs> are the last modification time (mtime) in\nsecs and nanoseconds from the epoch.\n\nIf the C<*nsecs> field contains the special value C<-1> then\nthe corresponding timestamp is set to the current time.  (The\nC<*secs> field is ignored in this case).\n\nIf the C<*nsecs> field contains the special value C<-2> then\nthe corresponding timestamp is left unchanged.  (The\nC<*secs> field is ignored in this case).");
  else
  if (STRCASEEQ (cmd, "mkdir_mode") || STRCASEEQ (cmd, "mkdir-mode"))
    pod2text ("mkdir-mode", _("create a directory with a particular mode"), "=head1 SYNOPSIS\n\n mkdir-mode path mode\n\n=head1 DESCRIPTION\n\nThis command creates a directory, setting the initial permissions\nof the directory to C<mode>.  See also C<mkdir>.");
  else
  if (STRCASEEQ (cmd, "lchown"))
    pod2text ("lchown", _("change file owner and group"), "=head1 SYNOPSIS\n\n lchown owner group path\n\n=head1 DESCRIPTION\n\nChange the file owner to C<owner> and group to C<group>.\nThis is like C<chown> but if C<path> is a symlink then\nthe link itself is changed, not the target.\n\nOnly numeric uid and gid are supported.  If you want to use\nnames, you will need to locate and parse the password file\nyourself (Augeas support makes this relatively easy).");
  else
  if (STRCASEEQ (cmd, "lstatlist"))
    pod2text ("lstatlist", _("lstat on multiple files"), "=head1 SYNOPSIS\n\n lstatlist path names\n\n=head1 DESCRIPTION\n\nThis call allows you to perform the C<lstat> operation\non multiple files, where all files are in the directory C<path>.\nC<names> is the list of files from this directory.\n\nOn return you get a list of stat structs, with a one-to-one\ncorrespondence to the C<names> list.  If any name did not exist\nor could not be lstat'd, then the C<ino> field of that structure\nis set to C<-1>.\n\nThis call is intended for programs that want to efficiently\nlist a directory contents without making many round-trips.\nSee also C<lxattrlist> for a similarly efficient call\nfor getting extended attributes.  Very long directory listings\nmight cause the protocol message size to be exceeded, causing\nthis call to fail.  The caller must split up such requests\ninto smaller groups of names.");
  else
  if (STRCASEEQ (cmd, "lxattrlist"))
    pod2text ("lxattrlist", _("lgetxattr on multiple files"), "=head1 SYNOPSIS\n\n lxattrlist path names\n\n=head1 DESCRIPTION\n\nThis call allows you to get the extended attributes\nof multiple files, where all files are in the directory C<path>.\nC<names> is the list of files from this directory.\n\nOn return you get a flat list of xattr structs which must be\ninterpreted sequentially.  The first xattr struct always has a zero-length\nC<attrname>.  C<attrval> in this struct is zero-length\nto indicate there was an error doing C<lgetxattr> for this\nfile, I<or> is a C string which is a decimal number\n(the number of following attributes for this file, which could\nbe C<\"0\">).  Then after the first xattr struct are the\nzero or more attributes for the first named file.\nThis repeats for the second and subsequent files.\n\nThis call is intended for programs that want to efficiently\nlist a directory contents without making many round-trips.\nSee also C<lstatlist> for a similarly efficient call\nfor getting standard stats.  Very long directory listings\nmight cause the protocol message size to be exceeded, causing\nthis call to fail.  The caller must split up such requests\ninto smaller groups of names.");
  else
  if (STRCASEEQ (cmd, "readlinklist"))
    pod2text ("readlinklist", _("readlink on multiple files"), "=head1 SYNOPSIS\n\n readlinklist path names\n\n=head1 DESCRIPTION\n\nThis call allows you to do a C<readlink> operation\non multiple files, where all files are in the directory C<path>.\nC<names> is the list of files from this directory.\n\nOn return you get a list of strings, with a one-to-one\ncorrespondence to the C<names> list.  Each string is the\nvalue of the symbol link.\n\nIf the C<readlink(2)> operation fails on any name, then\nthe corresponding result string is the empty string C<\"\">.\nHowever the whole operation is completed even if there\nwere C<readlink(2)> errors, and so you can call this\nfunction with names where you don't know if they are\nsymbolic links already (albeit slightly less efficient).\n\nThis call is intended for programs that want to efficiently\nlist a directory contents without making many round-trips.\nVery long directory listings might cause the protocol\nmessage size to be exceeded, causing\nthis call to fail.  The caller must split up such requests\ninto smaller groups of names.");
  else
  if (STRCASEEQ (cmd, "pread"))
    pod2text ("pread", _("read part of a file"), "=head1 SYNOPSIS\n\n pread path count offset\n\n=head1 DESCRIPTION\n\nThis command lets you read part of a file.  It reads C<count>\nbytes of the file, starting at C<offset>, from file C<path>.\n\nThis may read fewer bytes than requested.  For further details\nsee the L<pread(2)> system call.\n\nBecause of the message protocol, there is a transfer limit\nof somewhere between 2MB and 4MB.  To transfer large files you should use\nFTP.");
  else
  if (STRCASEEQ (cmd, "part_init") || STRCASEEQ (cmd, "part-init"))
    pod2text ("part-init", _("create an empty partition table"), "=head1 SYNOPSIS\n\n part-init device parttype\n\n=head1 DESCRIPTION\n\nThis creates an empty partition table on C<device> of one of the\npartition types listed below.  Usually C<parttype> should be\neither C<msdos> or C<gpt> (for large disks).\n\nInitially there are no partitions.  Following this, you should\ncall C<part_add> for each partition required.\n\nPossible values for C<parttype> are:\n\n=over 4\n\n=item B<efi> | B<gpt>\n\nIntel EFI / GPT partition table.\n\nThis is recommended for >= 2 TB partitions that will be accessed\nfrom Linux and Intel-based Mac OS X.  It also has limited backwards\ncompatibility with the C<mbr> format.\n\n=item B<mbr> | B<msdos>\n\nThe standard PC \"Master Boot Record\" (MBR) format used\nby MS-DOS and Windows.  This partition type will B<only> work\nfor device sizes up to 2 TB.  For large disks we recommend\nusing C<gpt>.\n\n=back\n\nOther partition table types that may work but are not\nsupported include:\n\n=over 4\n\n=item B<aix>\n\nAIX disk labels.\n\n=item B<amiga> | B<rdb>\n\nAmiga \"Rigid Disk Block\" format.\n\n=item B<bsd>\n\nBSD disk labels.\n\n=item B<dasd>\n\nDASD, used on IBM mainframes.\n\n=item B<dvh>\n\nMIPS/SGI volumes.\n\n=item B<mac>\n\nOld Mac partition format.  Modern Macs use C<gpt>.\n\n=item B<pc98>\n\nNEC PC-98 format, common in Japan apparently.\n\n=item B<sun>\n\nSun disk labels.\n\n=back");
  else
  if (STRCASEEQ (cmd, "part_add") || STRCASEEQ (cmd, "part-add"))
    pod2text ("part-add", _("add a partition to the device"), "=head1 SYNOPSIS\n\n part-add device prlogex startsect endsect\n\n=head1 DESCRIPTION\n\nThis command adds a partition to C<device>.  If there is no partition\ntable on the device, call C<part_init> first.\n\nThe C<prlogex> parameter is the type of partition.  Normally you\nshould pass C<p> or C<primary> here, but MBR partition tables also\nsupport C<l> (or C<logical>) and C<e> (or C<extended>) partition\ntypes.\n\nC<startsect> and C<endsect> are the start and end of the partition\nin I<sectors>.  C<endsect> may be negative, which means it counts\nbackwards from the end of the disk (C<-1> is the last sector).\n\nCreating a partition which covers the whole disk is not so easy.\nUse C<part_disk> to do that.");
  else
  if (STRCASEEQ (cmd, "part_disk") || STRCASEEQ (cmd, "part-disk"))
    pod2text ("part-disk", _("partition whole disk with a single primary partition"), "=head1 SYNOPSIS\n\n part-disk device parttype\n\n=head1 DESCRIPTION\n\nThis command is simply a combination of C<part_init>\nfollowed by C<part_add> to create a single primary partition\ncovering the whole disk.\n\nC<parttype> is the partition table type, usually C<mbr> or C<gpt>,\nbut other possible values are described in C<part_init>.\n\nB<This command is dangerous.  Without careful use you\ncan easily destroy all your data>.");
  else
  if (STRCASEEQ (cmd, "part_set_bootable") || STRCASEEQ (cmd, "part-set-bootable"))
    pod2text ("part-set-bootable", _("make a partition bootable"), "=head1 SYNOPSIS\n\n part-set-bootable device partnum bootable\n\n=head1 DESCRIPTION\n\nThis sets the bootable flag on partition numbered C<partnum> on\ndevice C<device>.  Note that partitions are numbered from 1.\n\nThe bootable flag is used by some PC BIOSes to determine which\npartition to boot from.  It is by no means universally recognized,\nand in any case if your operating system installed a boot\nsector on the device itself, then that takes precedence.");
  else
  if (STRCASEEQ (cmd, "part_set_name") || STRCASEEQ (cmd, "part-set-name"))
    pod2text ("part-set-name", _("set partition name"), "=head1 SYNOPSIS\n\n part-set-name device partnum name\n\n=head1 DESCRIPTION\n\nThis sets the partition name on partition numbered C<partnum> on\ndevice C<device>.  Note that partitions are numbered from 1.\n\nThe partition name can only be set on certain types of partition\ntable.  This works on C<gpt> but not on C<mbr> partitions.");
  else
  if (STRCASEEQ (cmd, "part_list") || STRCASEEQ (cmd, "part-list"))
    pod2text ("part-list", _("list partitions on a device"), "=head1 SYNOPSIS\n\n part-list device\n\n=head1 DESCRIPTION\n\nThis command parses the partition table on C<device> and\nreturns the list of partitions found.\n\nThe fields in the returned structure are:\n\n=over 4\n\n=item B<part_num>\n\nPartition number, counting from 1.\n\n=item B<part_start>\n\nStart of the partition I<in bytes>.  To get sectors you have to\ndivide by the device's sector size, see C<blockdev_getss>.\n\n=item B<part_end>\n\nEnd of the partition in bytes.\n\n=item B<part_size>\n\nSize of the partition in bytes.\n\n=back");
  else
  if (STRCASEEQ (cmd, "part_get_parttype") || STRCASEEQ (cmd, "part-get-parttype"))
    pod2text ("part-get-parttype", _("get the partition table type"), "=head1 SYNOPSIS\n\n part-get-parttype device\n\n=head1 DESCRIPTION\n\nThis command examines the partition table on C<device> and\nreturns the partition table type (format) being used.\n\nCommon return values include: C<msdos> (a DOS/Windows style MBR\npartition table), C<gpt> (a GPT/EFI-style partition table).  Other\nvalues are possible, although unusual.  See C<part_init>\nfor a full list.");
  else
  if (STRCASEEQ (cmd, "fill"))
    pod2text ("fill", _("fill a file with octets"), "=head1 SYNOPSIS\n\n fill c len path\n\n=head1 DESCRIPTION\n\nThis command creates a new file called C<path>.  The initial\ncontent of the file is C<len> octets of C<c>, where C<c>\nmust be a number in the range C<[0..255]>.\n\nTo fill a file with zero bytes (sparsely), it is\nmuch more efficient to use C<truncate_size>.");
  else
  if (STRCASEEQ (cmd, "available"))
    pod2text ("available", _("test availability of some parts of the API"), "=head1 SYNOPSIS\n\n available groups\n\n=head1 DESCRIPTION\n\nThis command is used to check the availability of some\ngroups of functionality in the appliance, which not all builds of\nthe libguestfs appliance will be able to provide.\n\nThe libguestfs groups, and the functions that those\ngroups correspond to, are listed in L<guestfs(3)/AVAILABILITY>.\n\nThe argument C<groups> is a list of group names, eg:\nC<[\"inotify\", \"augeas\"]> would check for the availability of\nthe Linux inotify functions and Augeas (configuration file\nediting) functions.\n\nThe command returns no error if I<all> requested groups are available.\n\nIt fails with an error if one or more of the requested\ngroups is unavailable in the appliance.\n\nIf an unknown group name is included in the\nlist of groups then an error is always returned.\n\nI<Notes:>\n\n=over 4\n\n=item *\n\nYou must call C<launch> before calling this function.\n\nThe reason is because we don't know what groups are\nsupported by the appliance/daemon until it is running and can\nbe queried.\n\n=item *\n\nIf a group of functions is available, this does not necessarily\nmean that they will work.  You still have to check for errors\nwhen calling individual API functions even if they are\navailable.\n\n=item *\n\nIt is usually the job of distro packagers to build\ncomplete functionality into the libguestfs appliance.\nUpstream libguestfs, if built from source with all\nrequirements satisfied, will support everything.\n\n=item *\n\nThis call was added in version C<1.0.80>.  In previous\nversions of libguestfs all you could do would be to speculatively\nexecute a command to find out if the daemon implemented it.\nSee also C<version>.\n\n=back");
  else
  if (STRCASEEQ (cmd, "dd"))
    pod2text ("dd", _("copy from source to destination using dd"), "=head1 SYNOPSIS\n\n dd src dest\n\n=head1 DESCRIPTION\n\nThis command copies from one source device or file C<src>\nto another destination device or file C<dest>.  Normally you\nwould use this to copy to or from a device or partition, for\nexample to duplicate a filesystem.\n\nIf the destination is a device, it must be as large or larger\nthan the source file or device, otherwise the copy will fail.\nThis command cannot do partial copies.");
  else
  if (STRCASEEQ (cmd, "filesize"))
    pod2text ("filesize", _("return the size of the file in bytes"), "=head1 SYNOPSIS\n\n filesize file\n\n=head1 DESCRIPTION\n\nThis command returns the size of C<file> in bytes.\n\nTo get other stats about a file, use C<stat>, C<lstat>,\nC<is_dir>, C<is_file> etc.\nTo get the size of block devices, use C<blockdev_getsize64>.");
  else
  if (STRCASEEQ (cmd, "lvrename"))
    pod2text ("lvrename", _("rename an LVM logical volume"), "=head1 SYNOPSIS\n\n lvrename logvol newlogvol\n\n=head1 DESCRIPTION\n\nRename a logical volume C<logvol> with the new name C<newlogvol>.");
  else
  if (STRCASEEQ (cmd, "vgrename"))
    pod2text ("vgrename", _("rename an LVM volume group"), "=head1 SYNOPSIS\n\n vgrename volgroup newvolgroup\n\n=head1 DESCRIPTION\n\nRename a volume group C<volgroup> with the new name C<newvolgroup>.");
  else
  if (STRCASEEQ (cmd, "initrd_cat") || STRCASEEQ (cmd, "initrd-cat"))
    pod2text ("initrd-cat", _("list the contents of a single file in an initrd"), "=head1 SYNOPSIS\n\n initrd-cat initrdpath filename\n\n=head1 DESCRIPTION\n\nThis command unpacks the file C<filename> from the initrd file\ncalled C<initrdpath>.  The filename must be given I<without> the\ninitial C</> character.\n\nFor example, in guestfish you could use the following command\nto examine the boot script (usually called C</init>)\ncontained in a Linux initrd or initramfs image:\n\n initrd-cat /boot/initrd-<version>.img init\n\nSee also C<initrd_list>.");
  else
    display_builtin_command (cmd);
}

static void print_int_bool_indent (struct guestfs_int_bool *int_bool, const char *indent)
{
  printf ("%si: %" PRIi32 "\n", indent, int_bool->i);
  printf ("%sb: %" PRIi32 "\n", indent, int_bool->b);
}

static void print_lvm_pv_indent (struct guestfs_lvm_pv *lvm_pv, const char *indent)
{
  unsigned int i;

  printf ("%spv_name: %s\n", indent, lvm_pv->pv_name);
  printf ("%spv_uuid: ", indent);
  for (i = 0; i < 32; ++i)
    printf ("%c", lvm_pv->pv_uuid[i]);
  printf ("\n");
  printf ("%spv_fmt: %s\n", indent, lvm_pv->pv_fmt);
  printf ("%spv_size: %" PRIu64 "\n", indent, lvm_pv->pv_size);
  printf ("%sdev_size: %" PRIu64 "\n", indent, lvm_pv->dev_size);
  printf ("%spv_free: %" PRIu64 "\n", indent, lvm_pv->pv_free);
  printf ("%spv_used: %" PRIu64 "\n", indent, lvm_pv->pv_used);
  printf ("%spv_attr: %s\n", indent, lvm_pv->pv_attr);
  printf ("%spv_pe_count: %" PRIi64 "\n", indent, lvm_pv->pv_pe_count);
  printf ("%spv_pe_alloc_count: %" PRIi64 "\n", indent, lvm_pv->pv_pe_alloc_count);
  printf ("%spv_tags: %s\n", indent, lvm_pv->pv_tags);
  printf ("%spe_start: %" PRIu64 "\n", indent, lvm_pv->pe_start);
  printf ("%spv_mda_count: %" PRIi64 "\n", indent, lvm_pv->pv_mda_count);
  printf ("%spv_mda_free: %" PRIu64 "\n", indent, lvm_pv->pv_mda_free);
}

static void print_lvm_vg_indent (struct guestfs_lvm_vg *lvm_vg, const char *indent)
{
  unsigned int i;

  printf ("%svg_name: %s\n", indent, lvm_vg->vg_name);
  printf ("%svg_uuid: ", indent);
  for (i = 0; i < 32; ++i)
    printf ("%c", lvm_vg->vg_uuid[i]);
  printf ("\n");
  printf ("%svg_fmt: %s\n", indent, lvm_vg->vg_fmt);
  printf ("%svg_attr: %s\n", indent, lvm_vg->vg_attr);
  printf ("%svg_size: %" PRIu64 "\n", indent, lvm_vg->vg_size);
  printf ("%svg_free: %" PRIu64 "\n", indent, lvm_vg->vg_free);
  printf ("%svg_sysid: %s\n", indent, lvm_vg->vg_sysid);
  printf ("%svg_extent_size: %" PRIu64 "\n", indent, lvm_vg->vg_extent_size);
  printf ("%svg_extent_count: %" PRIi64 "\n", indent, lvm_vg->vg_extent_count);
  printf ("%svg_free_count: %" PRIi64 "\n", indent, lvm_vg->vg_free_count);
  printf ("%smax_lv: %" PRIi64 "\n", indent, lvm_vg->max_lv);
  printf ("%smax_pv: %" PRIi64 "\n", indent, lvm_vg->max_pv);
  printf ("%spv_count: %" PRIi64 "\n", indent, lvm_vg->pv_count);
  printf ("%slv_count: %" PRIi64 "\n", indent, lvm_vg->lv_count);
  printf ("%ssnap_count: %" PRIi64 "\n", indent, lvm_vg->snap_count);
  printf ("%svg_seqno: %" PRIi64 "\n", indent, lvm_vg->vg_seqno);
  printf ("%svg_tags: %s\n", indent, lvm_vg->vg_tags);
  printf ("%svg_mda_count: %" PRIi64 "\n", indent, lvm_vg->vg_mda_count);
  printf ("%svg_mda_free: %" PRIu64 "\n", indent, lvm_vg->vg_mda_free);
}

static void print_lvm_lv_indent (struct guestfs_lvm_lv *lvm_lv, const char *indent)
{
  unsigned int i;

  printf ("%slv_name: %s\n", indent, lvm_lv->lv_name);
  printf ("%slv_uuid: ", indent);
  for (i = 0; i < 32; ++i)
    printf ("%c", lvm_lv->lv_uuid[i]);
  printf ("\n");
  printf ("%slv_attr: %s\n", indent, lvm_lv->lv_attr);
  printf ("%slv_major: %" PRIi64 "\n", indent, lvm_lv->lv_major);
  printf ("%slv_minor: %" PRIi64 "\n", indent, lvm_lv->lv_minor);
  printf ("%slv_kernel_major: %" PRIi64 "\n", indent, lvm_lv->lv_kernel_major);
  printf ("%slv_kernel_minor: %" PRIi64 "\n", indent, lvm_lv->lv_kernel_minor);
  printf ("%slv_size: %" PRIu64 "\n", indent, lvm_lv->lv_size);
  printf ("%sseg_count: %" PRIi64 "\n", indent, lvm_lv->seg_count);
  printf ("%sorigin: %s\n", indent, lvm_lv->origin);
  if (lvm_lv->snap_percent >= 0) printf ("%ssnap_percent: %g %%\n", indent, lvm_lv->snap_percent);
  else printf ("%ssnap_percent: \n", indent);
  if (lvm_lv->copy_percent >= 0) printf ("%scopy_percent: %g %%\n", indent, lvm_lv->copy_percent);
  else printf ("%scopy_percent: \n", indent);
  printf ("%smove_pv: %s\n", indent, lvm_lv->move_pv);
  printf ("%slv_tags: %s\n", indent, lvm_lv->lv_tags);
  printf ("%smirror_log: %s\n", indent, lvm_lv->mirror_log);
  printf ("%smodules: %s\n", indent, lvm_lv->modules);
}

static void print_stat_indent (struct guestfs_stat *stat, const char *indent)
{
  printf ("%sdev: %" PRIi64 "\n", indent, stat->dev);
  printf ("%sino: %" PRIi64 "\n", indent, stat->ino);
  printf ("%smode: %" PRIi64 "\n", indent, stat->mode);
  printf ("%snlink: %" PRIi64 "\n", indent, stat->nlink);
  printf ("%suid: %" PRIi64 "\n", indent, stat->uid);
  printf ("%sgid: %" PRIi64 "\n", indent, stat->gid);
  printf ("%srdev: %" PRIi64 "\n", indent, stat->rdev);
  printf ("%ssize: %" PRIi64 "\n", indent, stat->size);
  printf ("%sblksize: %" PRIi64 "\n", indent, stat->blksize);
  printf ("%sblocks: %" PRIi64 "\n", indent, stat->blocks);
  printf ("%satime: %" PRIi64 "\n", indent, stat->atime);
  printf ("%smtime: %" PRIi64 "\n", indent, stat->mtime);
  printf ("%sctime: %" PRIi64 "\n", indent, stat->ctime);
}

static void print_statvfs_indent (struct guestfs_statvfs *statvfs, const char *indent)
{
  printf ("%sbsize: %" PRIi64 "\n", indent, statvfs->bsize);
  printf ("%sfrsize: %" PRIi64 "\n", indent, statvfs->frsize);
  printf ("%sblocks: %" PRIi64 "\n", indent, statvfs->blocks);
  printf ("%sbfree: %" PRIi64 "\n", indent, statvfs->bfree);
  printf ("%sbavail: %" PRIi64 "\n", indent, statvfs->bavail);
  printf ("%sfiles: %" PRIi64 "\n", indent, statvfs->files);
  printf ("%sffree: %" PRIi64 "\n", indent, statvfs->ffree);
  printf ("%sfavail: %" PRIi64 "\n", indent, statvfs->favail);
  printf ("%sfsid: %" PRIi64 "\n", indent, statvfs->fsid);
  printf ("%sflag: %" PRIi64 "\n", indent, statvfs->flag);
  printf ("%snamemax: %" PRIi64 "\n", indent, statvfs->namemax);
}

static void print_dirent_indent (struct guestfs_dirent *dirent, const char *indent)
{
  printf ("%sino: %" PRIi64 "\n", indent, dirent->ino);
  printf ("%sftyp: %c\n", indent, dirent->ftyp);
  printf ("%sname: %s\n", indent, dirent->name);
}

static void print_version_indent (struct guestfs_version *version, const char *indent)
{
  printf ("%smajor: %" PRIi64 "\n", indent, version->major);
  printf ("%sminor: %" PRIi64 "\n", indent, version->minor);
  printf ("%srelease: %" PRIi64 "\n", indent, version->release);
  printf ("%sextra: %s\n", indent, version->extra);
}

static void print_xattr_indent (struct guestfs_xattr *xattr, const char *indent)
{
  unsigned int i;

  printf ("%sattrname: %s\n", indent, xattr->attrname);
  printf ("%sattrval: ", indent);
  for (i = 0; i < xattr->attrval_len; ++i)
    if (c_isprint (xattr->attrval[i]))
      printf ("%c", xattr->attrval[i]);
    else
      printf ("\\x%02x", xattr->attrval[i]);
  printf ("\n");
}

static void print_inotify_event_indent (struct guestfs_inotify_event *inotify_event, const char *indent)
{
  printf ("%sin_wd: %" PRIi64 "\n", indent, inotify_event->in_wd);
  printf ("%sin_mask: %" PRIu32 "\n", indent, inotify_event->in_mask);
  printf ("%sin_cookie: %" PRIu32 "\n", indent, inotify_event->in_cookie);
  printf ("%sin_name: %s\n", indent, inotify_event->in_name);
}

static void print_partition_indent (struct guestfs_partition *partition, const char *indent)
{
  printf ("%spart_num: %" PRIi32 "\n", indent, partition->part_num);
  printf ("%spart_start: %" PRIu64 "\n", indent, partition->part_start);
  printf ("%spart_end: %" PRIu64 "\n", indent, partition->part_end);
  printf ("%spart_size: %" PRIu64 "\n", indent, partition->part_size);
}

static void print_lvm_vg_list (struct guestfs_lvm_vg_list *lvm_vgs)
{
  unsigned int i;

  for (i = 0; i < lvm_vgs->len; ++i) {
    printf ("[%d] = {\n", i);
    print_lvm_vg_indent (&lvm_vgs->val[i], "  ");
    printf ("}\n");
  }
}

static void print_stat_list (struct guestfs_stat_list *stats)
{
  unsigned int i;

  for (i = 0; i < stats->len; ++i) {
    printf ("[%d] = {\n", i);
    print_stat_indent (&stats->val[i], "  ");
    printf ("}\n");
  }
}

static void print_dirent_list (struct guestfs_dirent_list *dirents)
{
  unsigned int i;

  for (i = 0; i < dirents->len; ++i) {
    printf ("[%d] = {\n", i);
    print_dirent_indent (&dirents->val[i], "  ");
    printf ("}\n");
  }
}

static void print_partition_list (struct guestfs_partition_list *partitions)
{
  unsigned int i;

  for (i = 0; i < partitions->len; ++i) {
    printf ("[%d] = {\n", i);
    print_partition_indent (&partitions->val[i], "  ");
    printf ("}\n");
  }
}

static void print_lvm_lv_list (struct guestfs_lvm_lv_list *lvm_lvs)
{
  unsigned int i;

  for (i = 0; i < lvm_lvs->len; ++i) {
    printf ("[%d] = {\n", i);
    print_lvm_lv_indent (&lvm_lvs->val[i], "  ");
    printf ("}\n");
  }
}

static void print_xattr_list (struct guestfs_xattr_list *xattrs)
{
  unsigned int i;

  for (i = 0; i < xattrs->len; ++i) {
    printf ("[%d] = {\n", i);
    print_xattr_indent (&xattrs->val[i], "  ");
    printf ("}\n");
  }
}

static void print_lvm_pv_list (struct guestfs_lvm_pv_list *lvm_pvs)
{
  unsigned int i;

  for (i = 0; i < lvm_pvs->len; ++i) {
    printf ("[%d] = {\n", i);
    print_lvm_pv_indent (&lvm_pvs->val[i], "  ");
    printf ("}\n");
  }
}

static void print_inotify_event_list (struct guestfs_inotify_event_list *inotify_events)
{
  unsigned int i;

  for (i = 0; i < inotify_events->len; ++i) {
    printf ("[%d] = {\n", i);
    print_inotify_event_indent (&inotify_events->val[i], "  ");
    printf ("}\n");
  }
}

static void print_stat (struct guestfs_stat *stat)
{
  print_stat_indent (stat, "");
}

static void print_statvfs (struct guestfs_statvfs *statvfs)
{
  print_statvfs_indent (statvfs, "");
}

static void print_version (struct guestfs_version *version)
{
  print_version_indent (version, "");
}

static void print_int_bool (struct guestfs_int_bool *int_bool)
{
  print_int_bool_indent (int_bool, "");
}

static int run_launch (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = launch (g);
  return r;
}

static int run_kill_subprocess (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_kill_subprocess (g);
  return r;
}

static int run_add_drive (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *filename;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  filename = argv[0];
  r = guestfs_add_drive (g, filename);
  return r;
}

static int run_add_cdrom (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *filename;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  filename = argv[0];
  r = guestfs_add_cdrom (g, filename);
  return r;
}

static int run_add_drive_ro (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *filename;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  filename = argv[0];
  r = guestfs_add_drive_ro (g, filename);
  return r;
}

static int run_config (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *qemuparam;
  const char *qemuvalue;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  qemuparam = argv[0];
  qemuvalue = STRNEQ (argv[1], "") ? argv[1] : NULL;
  r = guestfs_config (g, qemuparam, qemuvalue);
  return r;
}

static int run_set_qemu (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *qemu;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  qemu = argv[0];
  r = guestfs_set_qemu (g, qemu);
  return r;
}

static int run_get_qemu (const char *cmd, int argc, char *argv[])
{
  const char *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_qemu (g);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  return 0;
}

static int run_set_path (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *searchpath;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  searchpath = argv[0];
  r = guestfs_set_path (g, searchpath);
  return r;
}

static int run_get_path (const char *cmd, int argc, char *argv[])
{
  const char *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_path (g);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  return 0;
}

static int run_set_append (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *append;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  append = STRNEQ (argv[0], "") ? argv[0] : NULL;
  r = guestfs_set_append (g, append);
  return r;
}

static int run_get_append (const char *cmd, int argc, char *argv[])
{
  const char *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_append (g);
  printf ("%s\n", r ? : "(null)");
  return 0;
}

static int run_set_autosync (const char *cmd, int argc, char *argv[])
{
  int r;
  int autosync;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  autosync = is_true (argv[0]) ? 1 : 0;
  r = guestfs_set_autosync (g, autosync);
  return r;
}

static int run_get_autosync (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_autosync (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_set_verbose (const char *cmd, int argc, char *argv[])
{
  int r;
  int verbose;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  verbose = is_true (argv[0]) ? 1 : 0;
  r = guestfs_set_verbose (g, verbose);
  return r;
}

static int run_get_verbose (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_verbose (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_is_ready (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_is_ready (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_is_config (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_is_config (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_is_launching (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_is_launching (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_is_busy (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_is_busy (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_get_state (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_state (g);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_set_memsize (const char *cmd, int argc, char *argv[])
{
  int r;
  int memsize;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "memsize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "memsize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    memsize = r;
  }
  r = guestfs_set_memsize (g, memsize);
  return r;
}

static int run_get_memsize (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_memsize (g);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_get_pid (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_pid (g);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_version (const char *cmd, int argc, char *argv[])
{
  struct guestfs_version *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_version (g);
  if (r == NULL) return -1;
  print_version (r);
  guestfs_free_version (r);
  return 0;
}

static int run_set_selinux (const char *cmd, int argc, char *argv[])
{
  int r;
  int selinux;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  selinux = is_true (argv[0]) ? 1 : 0;
  r = guestfs_set_selinux (g, selinux);
  return r;
}

static int run_get_selinux (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_selinux (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_set_trace (const char *cmd, int argc, char *argv[])
{
  int r;
  int trace;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  trace = is_true (argv[0]) ? 1 : 0;
  r = guestfs_set_trace (g, trace);
  return r;
}

static int run_get_trace (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_trace (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_set_direct (const char *cmd, int argc, char *argv[])
{
  int r;
  int direct;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  direct = is_true (argv[0]) ? 1 : 0;
  r = guestfs_set_direct (g, direct);
  return r;
}

static int run_get_direct (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_direct (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_set_recovery_proc (const char *cmd, int argc, char *argv[])
{
  int r;
  int recoveryproc;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  recoveryproc = is_true (argv[0]) ? 1 : 0;
  r = guestfs_set_recovery_proc (g, recoveryproc);
  return r;
}

static int run_get_recovery_proc (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_get_recovery_proc (g);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_add_drive_with_if (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *filename;
  const char *iface;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  filename = argv[0];
  iface = argv[1];
  r = guestfs_add_drive_with_if (g, filename, iface);
  return r;
}

static int run_add_drive_ro_with_if (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *filename;
  const char *iface;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  filename = argv[0];
  iface = argv[1];
  r = guestfs_add_drive_ro_with_if (g, filename, iface);
  return r;
}

static int run_mount (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  const char *mountpoint;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  mountpoint = argv[1];
  r = guestfs_mount (g, device, mountpoint);
  return r;
}

static int run_sync (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_sync (g);
  return r;
}

static int run_touch (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_touch (g, path);
  free (path);
  return r;
}

static int run_cat (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_cat (g, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_ll (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *directory;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  directory = resolve_win_path (argv[0]);
  if (directory == NULL) return -1;
  r = guestfs_ll (g, directory);
  free (directory);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_ls (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *directory;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  directory = resolve_win_path (argv[0]);
  if (directory == NULL) return -1;
  r = guestfs_ls (g, directory);
  free (directory);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_list_devices (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_list_devices (g);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_list_partitions (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_list_partitions (g);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_pvs (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_pvs (g);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_vgs (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_vgs (g);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_lvs (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_lvs (g);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_pvs_full (const char *cmd, int argc, char *argv[])
{
  struct guestfs_lvm_pv_list *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_pvs_full (g);
  if (r == NULL) return -1;
  print_lvm_pv_list (r);
  guestfs_free_lvm_pv_list (r);
  return 0;
}

static int run_vgs_full (const char *cmd, int argc, char *argv[])
{
  struct guestfs_lvm_vg_list *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_vgs_full (g);
  if (r == NULL) return -1;
  print_lvm_vg_list (r);
  guestfs_free_lvm_vg_list (r);
  return 0;
}

static int run_lvs_full (const char *cmd, int argc, char *argv[])
{
  struct guestfs_lvm_lv_list *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_lvs_full (g);
  if (r == NULL) return -1;
  print_lvm_lv_list (r);
  guestfs_free_lvm_lv_list (r);
  return 0;
}

static int run_read_lines (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_read_lines (g, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_aug_init (const char *cmd, int argc, char *argv[])
{
  int r;
  char *root;
  int flags;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  root = resolve_win_path (argv[0]);
  if (root == NULL) return -1;
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "flags", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "flags");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    flags = r;
  }
  r = guestfs_aug_init (g, root, flags);
  free (root);
  return r;
}

static int run_aug_close (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_aug_close (g);
  return r;
}

static int run_aug_defvar (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *name;
  const char *expr;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  name = argv[0];
  expr = STRNEQ (argv[1], "") ? argv[1] : NULL;
  r = guestfs_aug_defvar (g, name, expr);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_aug_defnode (const char *cmd, int argc, char *argv[])
{
  struct guestfs_int_bool *r;
  const char *name;
  const char *expr;
  const char *val;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  name = argv[0];
  expr = argv[1];
  val = argv[2];
  r = guestfs_aug_defnode (g, name, expr, val);
  if (r == NULL) return -1;
  print_int_bool (r);
  guestfs_free_int_bool (r);
  return 0;
}

static int run_aug_get (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *augpath;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  augpath = argv[0];
  r = guestfs_aug_get (g, augpath);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_aug_set (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *augpath;
  const char *val;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  augpath = argv[0];
  val = argv[1];
  r = guestfs_aug_set (g, augpath, val);
  return r;
}

static int run_aug_insert (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *augpath;
  const char *label;
  int before;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  augpath = argv[0];
  label = argv[1];
  before = is_true (argv[2]) ? 1 : 0;
  r = guestfs_aug_insert (g, augpath, label, before);
  return r;
}

static int run_aug_rm (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *augpath;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  augpath = argv[0];
  r = guestfs_aug_rm (g, augpath);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_aug_mv (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *src;
  const char *dest;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  src = argv[0];
  dest = argv[1];
  r = guestfs_aug_mv (g, src, dest);
  return r;
}

static int run_aug_match (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *augpath;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  augpath = argv[0];
  r = guestfs_aug_match (g, augpath);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_aug_save (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_aug_save (g);
  return r;
}

static int run_aug_load (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_aug_load (g);
  return r;
}

static int run_aug_ls (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *augpath;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  augpath = argv[0];
  r = guestfs_aug_ls (g, augpath);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_rm (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_rm (g, path);
  free (path);
  return r;
}

static int run_rmdir (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_rmdir (g, path);
  free (path);
  return r;
}

static int run_rm_rf (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_rm_rf (g, path);
  free (path);
  return r;
}

static int run_mkdir (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_mkdir (g, path);
  free (path);
  return r;
}

static int run_mkdir_p (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_mkdir_p (g, path);
  free (path);
  return r;
}

static int run_chmod (const char *cmd, int argc, char *argv[])
{
  int r;
  int mode;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mode", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mode");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mode = r;
  }
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_chmod (g, mode, path);
  free (path);
  return r;
}

static int run_chown (const char *cmd, int argc, char *argv[])
{
  int r;
  int owner;
  int group;
  char *path;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "owner", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "owner");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    owner = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "group", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "group");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    group = r;
  }
  path = resolve_win_path (argv[2]);
  if (path == NULL) return -1;
  r = guestfs_chown (g, owner, group, path);
  free (path);
  return r;
}

static int run_exists (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_exists (g, path);
  free (path);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_is_file (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_is_file (g, path);
  free (path);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_is_dir (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_is_dir (g, path);
  free (path);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_pvcreate (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_pvcreate (g, device);
  return r;
}

static int run_vgcreate (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *volgroup;
  char **physvols;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  volgroup = argv[0];
  physvols = parse_string_list (argv[1]);
  if (physvols == NULL) return -1;
  r = guestfs_vgcreate (g, volgroup, physvols);
  free_strings (physvols);
  return r;
}

static int run_lvcreate (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *logvol;
  const char *volgroup;
  int mbytes;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  logvol = argv[0];
  volgroup = argv[1];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mbytes", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mbytes");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mbytes = r;
  }
  r = guestfs_lvcreate (g, logvol, volgroup, mbytes);
  return r;
}

static int run_mkfs (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *fstype;
  const char *device;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  fstype = argv[0];
  device = argv[1];
  r = guestfs_mkfs (g, fstype, device);
  return r;
}

static int run_sfdisk (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  int cyls;
  int heads;
  int sectors;
  char **lines;
  if (argc != 5) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 5);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "cyls", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "cyls");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    cyls = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "heads", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "heads");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    heads = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[3], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "sectors", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "sectors");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    sectors = r;
  }
  lines = parse_string_list (argv[4]);
  if (lines == NULL) return -1;
  r = guestfs_sfdisk (g, device, cyls, heads, sectors, lines);
  free_strings (lines);
  return r;
}

static int run_write_file (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  const char *content;
  int size;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  content = argv[1];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "size", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "size");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    size = r;
  }
  r = guestfs_write_file (g, path, content, size);
  free (path);
  return r;
}

static int run_umount (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *pathordevice;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  pathordevice = argv[0];
  r = guestfs_umount (g, pathordevice);
  return r;
}

static int run_mounts (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_mounts (g);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_umount_all (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_umount_all (g);
  return r;
}

static int run_lvm_remove_all (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_lvm_remove_all (g);
  return r;
}

static int run_file (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_file (g, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_command (const char *cmd, int argc, char *argv[])
{
  char *r;
  char **arguments;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  arguments = parse_string_list (argv[0]);
  if (arguments == NULL) return -1;
  r = guestfs_command (g, arguments);
  free_strings (arguments);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_command_lines (const char *cmd, int argc, char *argv[])
{
  char **r;
  char **arguments;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  arguments = parse_string_list (argv[0]);
  if (arguments == NULL) return -1;
  r = guestfs_command_lines (g, arguments);
  free_strings (arguments);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_stat (const char *cmd, int argc, char *argv[])
{
  struct guestfs_stat *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_stat (g, path);
  free (path);
  if (r == NULL) return -1;
  print_stat (r);
  guestfs_free_stat (r);
  return 0;
}

static int run_lstat (const char *cmd, int argc, char *argv[])
{
  struct guestfs_stat *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_lstat (g, path);
  free (path);
  if (r == NULL) return -1;
  print_stat (r);
  guestfs_free_stat (r);
  return 0;
}

static int run_statvfs (const char *cmd, int argc, char *argv[])
{
  struct guestfs_statvfs *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_statvfs (g, path);
  free (path);
  if (r == NULL) return -1;
  print_statvfs (r);
  guestfs_free_statvfs (r);
  return 0;
}

static int run_tune2fs_l (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_tune2fs_l (g, device);
  if (r == NULL) return -1;
  print_table (r);
  free_strings (r);
  return 0;
}

static int run_blockdev_setro (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_setro (g, device);
  return r;
}

static int run_blockdev_setrw (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_setrw (g, device);
  return r;
}

static int run_blockdev_getro (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_getro (g, device);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_blockdev_getss (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_getss (g, device);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_blockdev_getbsz (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_getbsz (g, device);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_blockdev_setbsz (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  int blocksize;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  r = guestfs_blockdev_setbsz (g, device, blocksize);
  return r;
}

static int run_blockdev_getsz (const char *cmd, int argc, char *argv[])
{
  int64_t r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_getsz (g, device);
  if (r == -1) return -1;
  printf ("%" PRIi64 "\n", r);
  return 0;
}

static int run_blockdev_getsize64 (const char *cmd, int argc, char *argv[])
{
  int64_t r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_getsize64 (g, device);
  if (r == -1) return -1;
  printf ("%" PRIi64 "\n", r);
  return 0;
}

static int run_blockdev_flushbufs (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_flushbufs (g, device);
  return r;
}

static int run_blockdev_rereadpt (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_blockdev_rereadpt (g, device);
  return r;
}

static int run_upload (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *filename;
  char *remotefilename;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  filename = STRNEQ (argv[0], "-") ? argv[0] : "/dev/stdin";
  remotefilename = resolve_win_path (argv[1]);
  if (remotefilename == NULL) return -1;
  r = guestfs_upload (g, filename, remotefilename);
  free (remotefilename);
  return r;
}

static int run_download (const char *cmd, int argc, char *argv[])
{
  int r;
  char *remotefilename;
  const char *filename;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  remotefilename = resolve_win_path (argv[0]);
  if (remotefilename == NULL) return -1;
  filename = STRNEQ (argv[1], "-") ? argv[1] : "/dev/stdout";
  r = guestfs_download (g, remotefilename, filename);
  free (remotefilename);
  return r;
}

static int run_checksum (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *csumtype;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  csumtype = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_checksum (g, csumtype, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_tar_in (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *tarfile;
  const char *directory;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  tarfile = STRNEQ (argv[0], "-") ? argv[0] : "/dev/stdin";
  directory = argv[1];
  r = guestfs_tar_in (g, tarfile, directory);
  return r;
}

static int run_tar_out (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *directory;
  const char *tarfile;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  directory = argv[0];
  tarfile = STRNEQ (argv[1], "-") ? argv[1] : "/dev/stdout";
  r = guestfs_tar_out (g, directory, tarfile);
  return r;
}

static int run_tgz_in (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *tarball;
  const char *directory;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  tarball = STRNEQ (argv[0], "-") ? argv[0] : "/dev/stdin";
  directory = argv[1];
  r = guestfs_tgz_in (g, tarball, directory);
  return r;
}

static int run_tgz_out (const char *cmd, int argc, char *argv[])
{
  int r;
  char *directory;
  const char *tarball;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  directory = resolve_win_path (argv[0]);
  if (directory == NULL) return -1;
  tarball = STRNEQ (argv[1], "-") ? argv[1] : "/dev/stdout";
  r = guestfs_tgz_out (g, directory, tarball);
  free (directory);
  return r;
}

static int run_mount_ro (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  const char *mountpoint;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  mountpoint = argv[1];
  r = guestfs_mount_ro (g, device, mountpoint);
  return r;
}

static int run_mount_options (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *options;
  const char *device;
  const char *mountpoint;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  options = argv[0];
  device = argv[1];
  mountpoint = argv[2];
  r = guestfs_mount_options (g, options, device, mountpoint);
  return r;
}

static int run_mount_vfs (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *options;
  const char *vfstype;
  const char *device;
  const char *mountpoint;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  options = argv[0];
  vfstype = argv[1];
  device = argv[2];
  mountpoint = argv[3];
  r = guestfs_mount_vfs (g, options, vfstype, device, mountpoint);
  return r;
}

static int run_debug (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *subcmd;
  char **extraargs;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  subcmd = argv[0];
  extraargs = parse_string_list (argv[1]);
  if (extraargs == NULL) return -1;
  r = guestfs_debug (g, subcmd, extraargs);
  free_strings (extraargs);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_lvremove (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_lvremove (g, device);
  return r;
}

static int run_vgremove (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *vgname;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  vgname = argv[0];
  r = guestfs_vgremove (g, vgname);
  return r;
}

static int run_pvremove (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_pvremove (g, device);
  return r;
}

static int run_set_e2label (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  const char *label;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  label = argv[1];
  r = guestfs_set_e2label (g, device, label);
  return r;
}

static int run_get_e2label (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_get_e2label (g, device);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_set_e2uuid (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  const char *uuid;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  uuid = argv[1];
  r = guestfs_set_e2uuid (g, device, uuid);
  return r;
}

static int run_get_e2uuid (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_get_e2uuid (g, device);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_fsck (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *fstype;
  const char *device;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  fstype = argv[0];
  device = argv[1];
  r = guestfs_fsck (g, fstype, device);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_zero (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_zero (g, device);
  return r;
}

static int run_grub_install (const char *cmd, int argc, char *argv[])
{
  int r;
  char *root;
  const char *device;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  root = resolve_win_path (argv[0]);
  if (root == NULL) return -1;
  device = argv[1];
  r = guestfs_grub_install (g, root, device);
  free (root);
  return r;
}

static int run_cp (const char *cmd, int argc, char *argv[])
{
  int r;
  char *src;
  char *dest;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  src = resolve_win_path (argv[0]);
  if (src == NULL) return -1;
  dest = resolve_win_path (argv[1]);
  if (dest == NULL) return -1;
  r = guestfs_cp (g, src, dest);
  free (src);
  free (dest);
  return r;
}

static int run_cp_a (const char *cmd, int argc, char *argv[])
{
  int r;
  char *src;
  char *dest;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  src = resolve_win_path (argv[0]);
  if (src == NULL) return -1;
  dest = resolve_win_path (argv[1]);
  if (dest == NULL) return -1;
  r = guestfs_cp_a (g, src, dest);
  free (src);
  free (dest);
  return r;
}

static int run_mv (const char *cmd, int argc, char *argv[])
{
  int r;
  char *src;
  char *dest;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  src = resolve_win_path (argv[0]);
  if (src == NULL) return -1;
  dest = resolve_win_path (argv[1]);
  if (dest == NULL) return -1;
  r = guestfs_mv (g, src, dest);
  free (src);
  free (dest);
  return r;
}

static int run_drop_caches (const char *cmd, int argc, char *argv[])
{
  int r;
  int whattodrop;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "whattodrop", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "whattodrop");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    whattodrop = r;
  }
  r = guestfs_drop_caches (g, whattodrop);
  return r;
}

static int run_dmesg (const char *cmd, int argc, char *argv[])
{
  char *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_dmesg (g);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_ping_daemon (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_ping_daemon (g);
  return r;
}

static int run_equal (const char *cmd, int argc, char *argv[])
{
  int r;
  char *file1;
  char *file2;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  file1 = resolve_win_path (argv[0]);
  if (file1 == NULL) return -1;
  file2 = resolve_win_path (argv[1]);
  if (file2 == NULL) return -1;
  r = guestfs_equal (g, file1, file2);
  free (file1);
  free (file2);
  if (r == -1) return -1;
  if (r) printf ("true\n"); else printf ("false\n");
  return 0;
}

static int run_strings (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_strings (g, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_strings_e (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *encoding;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  encoding = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_strings_e (g, encoding, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_hexdump (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_hexdump (g, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_zerofree (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_zerofree (g, device);
  return r;
}

static int run_pvresize (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_pvresize (g, device);
  return r;
}

static int run_sfdisk_N (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  int partnum;
  int cyls;
  int heads;
  int sectors;
  const char *line;
  if (argc != 6) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 6);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "partnum", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "partnum");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    partnum = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "cyls", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "cyls");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    cyls = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[3], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "heads", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "heads");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    heads = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[4], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "sectors", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "sectors");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    sectors = r;
  }
  line = argv[5];
  r = guestfs_sfdisk_N (g, device, partnum, cyls, heads, sectors, line);
  return r;
}

static int run_sfdisk_l (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_sfdisk_l (g, device);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_sfdisk_kernel_geometry (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_sfdisk_kernel_geometry (g, device);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_sfdisk_disk_geometry (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_sfdisk_disk_geometry (g, device);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_vg_activate_all (const char *cmd, int argc, char *argv[])
{
  int r;
  int activate;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  activate = is_true (argv[0]) ? 1 : 0;
  r = guestfs_vg_activate_all (g, activate);
  return r;
}

static int run_vg_activate (const char *cmd, int argc, char *argv[])
{
  int r;
  int activate;
  char **volgroups;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  activate = is_true (argv[0]) ? 1 : 0;
  volgroups = parse_string_list (argv[1]);
  if (volgroups == NULL) return -1;
  r = guestfs_vg_activate (g, activate, volgroups);
  free_strings (volgroups);
  return r;
}

static int run_lvresize (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  int mbytes;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mbytes", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mbytes");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mbytes = r;
  }
  r = guestfs_lvresize (g, device, mbytes);
  return r;
}

static int run_resize2fs (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_resize2fs (g, device);
  return r;
}

static int run_find (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *directory;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  directory = resolve_win_path (argv[0]);
  if (directory == NULL) return -1;
  r = guestfs_find (g, directory);
  free (directory);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_e2fsck_f (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_e2fsck_f (g, device);
  return r;
}

static int run_sleep (const char *cmd, int argc, char *argv[])
{
  int r;
  int secs;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "secs", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "secs");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    secs = r;
  }
  r = guestfs_sleep (g, secs);
  return r;
}

static int run_ntfs_3g_probe (const char *cmd, int argc, char *argv[])
{
  int r;
  int rw;
  const char *device;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  rw = is_true (argv[0]) ? 1 : 0;
  device = argv[1];
  r = guestfs_ntfs_3g_probe (g, rw, device);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_sh (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *command;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  command = argv[0];
  r = guestfs_sh (g, command);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_sh_lines (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *command;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  command = argv[0];
  r = guestfs_sh_lines (g, command);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_glob_expand (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *pattern;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  pattern = resolve_win_path (argv[0]);
  if (pattern == NULL) return -1;
  r = guestfs_glob_expand (g, pattern);
  free (pattern);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_scrub_device (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_scrub_device (g, device);
  return r;
}

static int run_scrub_file (const char *cmd, int argc, char *argv[])
{
  int r;
  char *file;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  file = resolve_win_path (argv[0]);
  if (file == NULL) return -1;
  r = guestfs_scrub_file (g, file);
  free (file);
  return r;
}

static int run_scrub_freespace (const char *cmd, int argc, char *argv[])
{
  int r;
  char *dir;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  dir = resolve_win_path (argv[0]);
  if (dir == NULL) return -1;
  r = guestfs_scrub_freespace (g, dir);
  free (dir);
  return r;
}

static int run_mkdtemp (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *template;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  template = resolve_win_path (argv[0]);
  if (template == NULL) return -1;
  r = guestfs_mkdtemp (g, template);
  free (template);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_wc_l (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_wc_l (g, path);
  free (path);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_wc_w (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_wc_w (g, path);
  free (path);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_wc_c (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_wc_c (g, path);
  free (path);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_head (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_head (g, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_head_n (const char *cmd, int argc, char *argv[])
{
  char **r;
  int nrlines;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "nrlines", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "nrlines");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    nrlines = r;
  }
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_head_n (g, nrlines, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_tail (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_tail (g, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_tail_n (const char *cmd, int argc, char *argv[])
{
  char **r;
  int nrlines;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "nrlines", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "nrlines");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    nrlines = r;
  }
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_tail_n (g, nrlines, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_df (const char *cmd, int argc, char *argv[])
{
  char *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_df (g);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_df_h (const char *cmd, int argc, char *argv[])
{
  char *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_df_h (g);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_du (const char *cmd, int argc, char *argv[])
{
  int64_t r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_du (g, path);
  free (path);
  if (r == -1) return -1;
  printf ("%" PRIi64 "\n", r);
  return 0;
}

static int run_initrd_list (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_initrd_list (g, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_mount_loop (const char *cmd, int argc, char *argv[])
{
  int r;
  char *file;
  char *mountpoint;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  file = resolve_win_path (argv[0]);
  if (file == NULL) return -1;
  mountpoint = resolve_win_path (argv[1]);
  if (mountpoint == NULL) return -1;
  r = guestfs_mount_loop (g, file, mountpoint);
  free (file);
  free (mountpoint);
  return r;
}

static int run_mkswap (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_mkswap (g, device);
  return r;
}

static int run_mkswap_L (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *label;
  const char *device;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  label = argv[0];
  device = argv[1];
  r = guestfs_mkswap_L (g, label, device);
  return r;
}

static int run_mkswap_U (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *uuid;
  const char *device;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  uuid = argv[0];
  device = argv[1];
  r = guestfs_mkswap_U (g, uuid, device);
  return r;
}

static int run_mknod (const char *cmd, int argc, char *argv[])
{
  int r;
  int mode;
  int devmajor;
  int devminor;
  char *path;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mode", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mode");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mode = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "devmajor", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "devmajor");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    devmajor = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "devminor", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "devminor");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    devminor = r;
  }
  path = resolve_win_path (argv[3]);
  if (path == NULL) return -1;
  r = guestfs_mknod (g, mode, devmajor, devminor, path);
  free (path);
  return r;
}

static int run_mkfifo (const char *cmd, int argc, char *argv[])
{
  int r;
  int mode;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mode", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mode");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mode = r;
  }
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_mkfifo (g, mode, path);
  free (path);
  return r;
}

static int run_mknod_b (const char *cmd, int argc, char *argv[])
{
  int r;
  int mode;
  int devmajor;
  int devminor;
  char *path;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mode", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mode");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mode = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "devmajor", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "devmajor");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    devmajor = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "devminor", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "devminor");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    devminor = r;
  }
  path = resolve_win_path (argv[3]);
  if (path == NULL) return -1;
  r = guestfs_mknod_b (g, mode, devmajor, devminor, path);
  free (path);
  return r;
}

static int run_mknod_c (const char *cmd, int argc, char *argv[])
{
  int r;
  int mode;
  int devmajor;
  int devminor;
  char *path;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mode", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mode");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mode = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "devmajor", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "devmajor");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    devmajor = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "devminor", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "devminor");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    devminor = r;
  }
  path = resolve_win_path (argv[3]);
  if (path == NULL) return -1;
  r = guestfs_mknod_c (g, mode, devmajor, devminor, path);
  free (path);
  return r;
}

static int run_umask (const char *cmd, int argc, char *argv[])
{
  int r;
  int mask;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mask", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mask");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mask = r;
  }
  r = guestfs_umask (g, mask);
  if (r == -1) return -1;
  printf ("%d\n", r);
  return 0;
}

static int run_readdir (const char *cmd, int argc, char *argv[])
{
  struct guestfs_dirent_list *r;
  char *dir;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  dir = resolve_win_path (argv[0]);
  if (dir == NULL) return -1;
  r = guestfs_readdir (g, dir);
  free (dir);
  if (r == NULL) return -1;
  print_dirent_list (r);
  guestfs_free_dirent_list (r);
  return 0;
}

static int run_sfdiskM (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  char **lines;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  lines = parse_string_list (argv[1]);
  if (lines == NULL) return -1;
  r = guestfs_sfdiskM (g, device, lines);
  free_strings (lines);
  return r;
}

static int run_zfile (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *meth;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  meth = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_zfile (g, meth, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_getxattrs (const char *cmd, int argc, char *argv[])
{
  struct guestfs_xattr_list *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_getxattrs (g, path);
  free (path);
  if (r == NULL) return -1;
  print_xattr_list (r);
  guestfs_free_xattr_list (r);
  return 0;
}

static int run_lgetxattrs (const char *cmd, int argc, char *argv[])
{
  struct guestfs_xattr_list *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_lgetxattrs (g, path);
  free (path);
  if (r == NULL) return -1;
  print_xattr_list (r);
  guestfs_free_xattr_list (r);
  return 0;
}

static int run_setxattr (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *xattr;
  const char *val;
  int vallen;
  char *path;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  xattr = argv[0];
  val = argv[1];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "vallen", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "vallen");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    vallen = r;
  }
  path = resolve_win_path (argv[3]);
  if (path == NULL) return -1;
  r = guestfs_setxattr (g, xattr, val, vallen, path);
  free (path);
  return r;
}

static int run_lsetxattr (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *xattr;
  const char *val;
  int vallen;
  char *path;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  xattr = argv[0];
  val = argv[1];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "vallen", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "vallen");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    vallen = r;
  }
  path = resolve_win_path (argv[3]);
  if (path == NULL) return -1;
  r = guestfs_lsetxattr (g, xattr, val, vallen, path);
  free (path);
  return r;
}

static int run_removexattr (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *xattr;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  xattr = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_removexattr (g, xattr, path);
  free (path);
  return r;
}

static int run_lremovexattr (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *xattr;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  xattr = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_lremovexattr (g, xattr, path);
  free (path);
  return r;
}

static int run_mountpoints (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_mountpoints (g);
  if (r == NULL) return -1;
  print_table (r);
  free_strings (r);
  return 0;
}

static int run_mkmountpoint (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *exemptpath;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  exemptpath = argv[0];
  r = guestfs_mkmountpoint (g, exemptpath);
  return r;
}

static int run_rmmountpoint (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *exemptpath;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  exemptpath = argv[0];
  r = guestfs_rmmountpoint (g, exemptpath);
  return r;
}

static int run_read_file (const char *cmd, int argc, char *argv[])
{
  char *r;
  size_t size;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_read_file (g, path, &size);
  free (path);
  if (r == NULL) return -1;
  if (full_write (1, r, size) != size) {
    perror ("write");
    free (r);
    return -1;
  }
  free (r);
  return 0;
}

static int run_grep (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_grep (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_egrep (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_egrep (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_fgrep (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *pattern;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  pattern = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_fgrep (g, pattern, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_grepi (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_grepi (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_egrepi (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_egrepi (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_fgrepi (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *pattern;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  pattern = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_fgrepi (g, pattern, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_zgrep (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_zgrep (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_zegrep (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_zegrep (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_zfgrep (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *pattern;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  pattern = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_zfgrep (g, pattern, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_zgrepi (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_zgrepi (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_zegrepi (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *regex;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  regex = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_zegrepi (g, regex, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_zfgrepi (const char *cmd, int argc, char *argv[])
{
  char **r;
  const char *pattern;
  char *path;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  pattern = argv[0];
  path = resolve_win_path (argv[1]);
  if (path == NULL) return -1;
  r = guestfs_zfgrepi (g, pattern, path);
  free (path);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_realpath (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_realpath (g, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_ln (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *target;
  char *linkname;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  target = argv[0];
  linkname = resolve_win_path (argv[1]);
  if (linkname == NULL) return -1;
  r = guestfs_ln (g, target, linkname);
  free (linkname);
  return r;
}

static int run_ln_f (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *target;
  char *linkname;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  target = argv[0];
  linkname = resolve_win_path (argv[1]);
  if (linkname == NULL) return -1;
  r = guestfs_ln_f (g, target, linkname);
  free (linkname);
  return r;
}

static int run_ln_s (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *target;
  char *linkname;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  target = argv[0];
  linkname = resolve_win_path (argv[1]);
  if (linkname == NULL) return -1;
  r = guestfs_ln_s (g, target, linkname);
  free (linkname);
  return r;
}

static int run_ln_sf (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *target;
  char *linkname;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  target = argv[0];
  linkname = resolve_win_path (argv[1]);
  if (linkname == NULL) return -1;
  r = guestfs_ln_sf (g, target, linkname);
  free (linkname);
  return r;
}

static int run_readlink (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_readlink (g, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_fallocate (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  int len;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "len", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "len");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    len = r;
  }
  r = guestfs_fallocate (g, path, len);
  free (path);
  return r;
}

static int run_swapon_device (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_swapon_device (g, device);
  return r;
}

static int run_swapoff_device (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_swapoff_device (g, device);
  return r;
}

static int run_swapon_file (const char *cmd, int argc, char *argv[])
{
  int r;
  char *file;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  file = resolve_win_path (argv[0]);
  if (file == NULL) return -1;
  r = guestfs_swapon_file (g, file);
  free (file);
  return r;
}

static int run_swapoff_file (const char *cmd, int argc, char *argv[])
{
  int r;
  char *file;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  file = resolve_win_path (argv[0]);
  if (file == NULL) return -1;
  r = guestfs_swapoff_file (g, file);
  free (file);
  return r;
}

static int run_swapon_label (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *label;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  label = argv[0];
  r = guestfs_swapon_label (g, label);
  return r;
}

static int run_swapoff_label (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *label;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  label = argv[0];
  r = guestfs_swapoff_label (g, label);
  return r;
}

static int run_swapon_uuid (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *uuid;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  uuid = argv[0];
  r = guestfs_swapon_uuid (g, uuid);
  return r;
}

static int run_swapoff_uuid (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *uuid;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  uuid = argv[0];
  r = guestfs_swapoff_uuid (g, uuid);
  return r;
}

static int run_mkswap_file (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_mkswap_file (g, path);
  free (path);
  return r;
}

static int run_inotify_init (const char *cmd, int argc, char *argv[])
{
  int r;
  int maxevents;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "maxevents", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "maxevents");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    maxevents = r;
  }
  r = guestfs_inotify_init (g, maxevents);
  return r;
}

static int run_inotify_add_watch (const char *cmd, int argc, char *argv[])
{
  int64_t r;
  char *path;
  int mask;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mask", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mask");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mask = r;
  }
  r = guestfs_inotify_add_watch (g, path, mask);
  free (path);
  if (r == -1) return -1;
  printf ("%" PRIi64 "\n", r);
  return 0;
}

static int run_inotify_rm_watch (const char *cmd, int argc, char *argv[])
{
  int r;
  int wd;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "wd", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "wd");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    wd = r;
  }
  r = guestfs_inotify_rm_watch (g, wd);
  return r;
}

static int run_inotify_read (const char *cmd, int argc, char *argv[])
{
  struct guestfs_inotify_event_list *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_inotify_read (g);
  if (r == NULL) return -1;
  print_inotify_event_list (r);
  guestfs_free_inotify_event_list (r);
  return 0;
}

static int run_inotify_files (const char *cmd, int argc, char *argv[])
{
  char **r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_inotify_files (g);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_inotify_close (const char *cmd, int argc, char *argv[])
{
  int r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_inotify_close (g);
  return r;
}

static int run_setcon (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *context;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  context = argv[0];
  r = guestfs_setcon (g, context);
  return r;
}

static int run_getcon (const char *cmd, int argc, char *argv[])
{
  char *r;
  if (argc != 0) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 0);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  r = guestfs_getcon (g);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_mkfs_b (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *fstype;
  int blocksize;
  const char *device;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  fstype = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  device = argv[2];
  r = guestfs_mkfs_b (g, fstype, blocksize, device);
  return r;
}

static int run_mke2journal (const char *cmd, int argc, char *argv[])
{
  int r;
  int blocksize;
  const char *device;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  device = argv[1];
  r = guestfs_mke2journal (g, blocksize, device);
  return r;
}

static int run_mke2journal_L (const char *cmd, int argc, char *argv[])
{
  int r;
  int blocksize;
  const char *label;
  const char *device;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  label = argv[1];
  device = argv[2];
  r = guestfs_mke2journal_L (g, blocksize, label, device);
  return r;
}

static int run_mke2journal_U (const char *cmd, int argc, char *argv[])
{
  int r;
  int blocksize;
  const char *uuid;
  const char *device;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  uuid = argv[1];
  device = argv[2];
  r = guestfs_mke2journal_U (g, blocksize, uuid, device);
  return r;
}

static int run_mke2fs_J (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *fstype;
  int blocksize;
  const char *device;
  const char *journal;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  fstype = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  device = argv[2];
  journal = argv[3];
  r = guestfs_mke2fs_J (g, fstype, blocksize, device, journal);
  return r;
}

static int run_mke2fs_JL (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *fstype;
  int blocksize;
  const char *device;
  const char *label;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  fstype = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  device = argv[2];
  label = argv[3];
  r = guestfs_mke2fs_JL (g, fstype, blocksize, device, label);
  return r;
}

static int run_mke2fs_JU (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *fstype;
  int blocksize;
  const char *device;
  const char *uuid;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  fstype = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "blocksize", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "blocksize");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    blocksize = r;
  }
  device = argv[2];
  uuid = argv[3];
  r = guestfs_mke2fs_JU (g, fstype, blocksize, device, uuid);
  return r;
}

static int run_modprobe (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *modulename;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  modulename = argv[0];
  r = guestfs_modprobe (g, modulename);
  return r;
}

static int run_echo_daemon (const char *cmd, int argc, char *argv[])
{
  char *r;
  char **words;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  words = parse_string_list (argv[0]);
  if (words == NULL) return -1;
  r = guestfs_echo_daemon (g, words);
  free_strings (words);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_find0 (const char *cmd, int argc, char *argv[])
{
  int r;
  char *directory;
  const char *files;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  directory = resolve_win_path (argv[0]);
  if (directory == NULL) return -1;
  files = STRNEQ (argv[1], "-") ? argv[1] : "/dev/stdout";
  r = guestfs_find0 (g, directory, files);
  free (directory);
  return r;
}

static int run_case_sensitive_path (const char *cmd, int argc, char *argv[])
{
  char *r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_case_sensitive_path (g, path);
  free (path);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_vfs_type (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_vfs_type (g, device);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_truncate (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  r = guestfs_truncate (g, path);
  free (path);
  return r;
}

static int run_truncate_size (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  int64_t size;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "size", "xstrtoll", xerr);
      return -1;
    }
    size = r;
  }
  r = guestfs_truncate_size (g, path, size);
  free (path);
  return r;
}

static int run_utimens (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  int64_t atsecs;
  int64_t atnsecs;
  int64_t mtsecs;
  int64_t mtnsecs;
  if (argc != 5) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 5);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "atsecs", "xstrtoll", xerr);
      return -1;
    }
    atsecs = r;
  }
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "atnsecs", "xstrtoll", xerr);
      return -1;
    }
    atnsecs = r;
  }
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[3], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mtsecs", "xstrtoll", xerr);
      return -1;
    }
    mtsecs = r;
  }
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[4], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mtnsecs", "xstrtoll", xerr);
      return -1;
    }
    mtnsecs = r;
  }
  r = guestfs_utimens (g, path, atsecs, atnsecs, mtsecs, mtnsecs);
  free (path);
  return r;
}

static int run_mkdir_mode (const char *cmd, int argc, char *argv[])
{
  int r;
  char *path;
  int mode;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "mode", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "mode");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    mode = r;
  }
  r = guestfs_mkdir_mode (g, path, mode);
  free (path);
  return r;
}

static int run_lchown (const char *cmd, int argc, char *argv[])
{
  int r;
  int owner;
  int group;
  char *path;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "owner", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "owner");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    owner = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "group", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "group");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    group = r;
  }
  path = resolve_win_path (argv[2]);
  if (path == NULL) return -1;
  r = guestfs_lchown (g, owner, group, path);
  free (path);
  return r;
}

static int run_lstatlist (const char *cmd, int argc, char *argv[])
{
  struct guestfs_stat_list *r;
  char *path;
  char **names;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  names = parse_string_list (argv[1]);
  if (names == NULL) return -1;
  r = guestfs_lstatlist (g, path, names);
  free (path);
  free_strings (names);
  if (r == NULL) return -1;
  print_stat_list (r);
  guestfs_free_stat_list (r);
  return 0;
}

static int run_lxattrlist (const char *cmd, int argc, char *argv[])
{
  struct guestfs_xattr_list *r;
  char *path;
  char **names;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  names = parse_string_list (argv[1]);
  if (names == NULL) return -1;
  r = guestfs_lxattrlist (g, path, names);
  free (path);
  free_strings (names);
  if (r == NULL) return -1;
  print_xattr_list (r);
  guestfs_free_xattr_list (r);
  return 0;
}

static int run_readlinklist (const char *cmd, int argc, char *argv[])
{
  char **r;
  char *path;
  char **names;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  names = parse_string_list (argv[1]);
  if (names == NULL) return -1;
  r = guestfs_readlinklist (g, path, names);
  free (path);
  free_strings (names);
  if (r == NULL) return -1;
  print_strings (r);
  free_strings (r);
  return 0;
}

static int run_pread (const char *cmd, int argc, char *argv[])
{
  char *r;
  size_t size;
  char *path;
  int count;
  int64_t offset;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  path = resolve_win_path (argv[0]);
  if (path == NULL) return -1;
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "count", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "count");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    count = r;
  }
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "offset", "xstrtoll", xerr);
      return -1;
    }
    offset = r;
  }
  r = guestfs_pread (g, path, count, offset, &size);
  free (path);
  if (r == NULL) return -1;
  if (full_write (1, r, size) != size) {
    perror ("write");
    free (r);
    return -1;
  }
  free (r);
  return 0;
}

static int run_part_init (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  const char *parttype;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  parttype = argv[1];
  r = guestfs_part_init (g, device, parttype);
  return r;
}

static int run_part_add (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  const char *prlogex;
  int64_t startsect;
  int64_t endsect;
  if (argc != 4) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 4);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  prlogex = argv[1];
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[2], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "startsect", "xstrtoll", xerr);
      return -1;
    }
    startsect = r;
  }
  {
    strtol_error xerr;
    long long r;

    xerr = xstrtoll (argv[3], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "endsect", "xstrtoll", xerr);
      return -1;
    }
    endsect = r;
  }
  r = guestfs_part_add (g, device, prlogex, startsect, endsect);
  return r;
}

static int run_part_disk (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  const char *parttype;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  parttype = argv[1];
  r = guestfs_part_disk (g, device, parttype);
  return r;
}

static int run_part_set_bootable (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  int partnum;
  int bootable;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "partnum", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "partnum");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    partnum = r;
  }
  bootable = is_true (argv[2]) ? 1 : 0;
  r = guestfs_part_set_bootable (g, device, partnum, bootable);
  return r;
}

static int run_part_set_name (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *device;
  int partnum;
  const char *name;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "partnum", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "partnum");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    partnum = r;
  }
  name = argv[2];
  r = guestfs_part_set_name (g, device, partnum, name);
  return r;
}

static int run_part_list (const char *cmd, int argc, char *argv[])
{
  struct guestfs_partition_list *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_part_list (g, device);
  if (r == NULL) return -1;
  print_partition_list (r);
  guestfs_free_partition_list (r);
  return 0;
}

static int run_part_get_parttype (const char *cmd, int argc, char *argv[])
{
  char *r;
  const char *device;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  device = argv[0];
  r = guestfs_part_get_parttype (g, device);
  if (r == NULL) return -1;
  printf ("%s\n", r);
  free (r);
  return 0;
}

static int run_fill (const char *cmd, int argc, char *argv[])
{
  int r;
  int c;
  int len;
  char *path;
  if (argc != 3) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 3);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[0], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "c", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "c");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    c = r;
  }
  {
    strtol_error xerr;
    long r;

    xerr = xstrtol (argv[1], NULL, 0, &r, "");
    if (xerr != LONGINT_OK) {
      fprintf (stderr,
               _("%s: %s: invalid integer parameter (%s returned %d)\n"),
               cmd, "len", "xstrtol", xerr);
      return -1;
    }
    /* The Int type in the generator is a signed 31 bit int. */
    if (r < (-(2LL<<30)) || r > ((2LL<<30)-1)) {
      fprintf (stderr, _("%s: %s: integer out of range\n"), cmd, "len");
      return -1;
    }
    /* The check above should ensure this assignment does not overflow. */
    len = r;
  }
  path = resolve_win_path (argv[2]);
  if (path == NULL) return -1;
  r = guestfs_fill (g, c, len, path);
  free (path);
  return r;
}

static int run_available (const char *cmd, int argc, char *argv[])
{
  int r;
  char **groups;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  groups = parse_string_list (argv[0]);
  if (groups == NULL) return -1;
  r = guestfs_available (g, groups);
  free_strings (groups);
  return r;
}

static int run_dd (const char *cmd, int argc, char *argv[])
{
  int r;
  char *src;
  char *dest;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  src = resolve_win_path (argv[0]);
  if (src == NULL) return -1;
  dest = resolve_win_path (argv[1]);
  if (dest == NULL) return -1;
  r = guestfs_dd (g, src, dest);
  free (src);
  free (dest);
  return r;
}

static int run_filesize (const char *cmd, int argc, char *argv[])
{
  int64_t r;
  char *file;
  if (argc != 1) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 1);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  file = resolve_win_path (argv[0]);
  if (file == NULL) return -1;
  r = guestfs_filesize (g, file);
  free (file);
  if (r == -1) return -1;
  printf ("%" PRIi64 "\n", r);
  return 0;
}

static int run_lvrename (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *logvol;
  const char *newlogvol;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  logvol = argv[0];
  newlogvol = argv[1];
  r = guestfs_lvrename (g, logvol, newlogvol);
  return r;
}

static int run_vgrename (const char *cmd, int argc, char *argv[])
{
  int r;
  const char *volgroup;
  const char *newvolgroup;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  volgroup = argv[0];
  newvolgroup = argv[1];
  r = guestfs_vgrename (g, volgroup, newvolgroup);
  return r;
}

static int run_initrd_cat (const char *cmd, int argc, char *argv[])
{
  char *r;
  size_t size;
  char *initrdpath;
  const char *filename;
  if (argc != 2) {
    fprintf (stderr, _("%s should have %d parameter(s)\n"), cmd, 2);
    fprintf (stderr, _("type 'help %s' for help on %s\n"), cmd, cmd);
    return -1;
  }
  initrdpath = resolve_win_path (argv[0]);
  if (initrdpath == NULL) return -1;
  filename = argv[1];
  r = guestfs_initrd_cat (g, initrdpath, filename, &size);
  free (initrdpath);
  if (r == NULL) return -1;
  if (full_write (1, r, size) != size) {
    perror ("write");
    free (r);
    return -1;
  }
  free (r);
  return 0;
}

int run_action (const char *cmd, int argc, char *argv[])
{
  if (STRCASEEQ (cmd, "launch") || STRCASEEQ (cmd, "run"))
    return run_launch (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "kill_subprocess") || STRCASEEQ (cmd, "kill-subprocess"))
    return run_kill_subprocess (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "add_drive") || STRCASEEQ (cmd, "add-drive") || STRCASEEQ (cmd, "add"))
    return run_add_drive (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "add_cdrom") || STRCASEEQ (cmd, "add-cdrom") || STRCASEEQ (cmd, "cdrom"))
    return run_add_cdrom (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "add_drive_ro") || STRCASEEQ (cmd, "add-drive-ro") || STRCASEEQ (cmd, "add-ro"))
    return run_add_drive_ro (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "config"))
    return run_config (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_qemu") || STRCASEEQ (cmd, "set-qemu") || STRCASEEQ (cmd, "qemu"))
    return run_set_qemu (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_qemu") || STRCASEEQ (cmd, "get-qemu"))
    return run_get_qemu (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_path") || STRCASEEQ (cmd, "set-path") || STRCASEEQ (cmd, "path"))
    return run_set_path (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_path") || STRCASEEQ (cmd, "get-path"))
    return run_get_path (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_append") || STRCASEEQ (cmd, "set-append") || STRCASEEQ (cmd, "append"))
    return run_set_append (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_append") || STRCASEEQ (cmd, "get-append"))
    return run_get_append (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_autosync") || STRCASEEQ (cmd, "set-autosync") || STRCASEEQ (cmd, "autosync"))
    return run_set_autosync (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_autosync") || STRCASEEQ (cmd, "get-autosync"))
    return run_get_autosync (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_verbose") || STRCASEEQ (cmd, "set-verbose") || STRCASEEQ (cmd, "verbose"))
    return run_set_verbose (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_verbose") || STRCASEEQ (cmd, "get-verbose"))
    return run_get_verbose (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "is_ready") || STRCASEEQ (cmd, "is-ready"))
    return run_is_ready (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "is_config") || STRCASEEQ (cmd, "is-config"))
    return run_is_config (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "is_launching") || STRCASEEQ (cmd, "is-launching"))
    return run_is_launching (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "is_busy") || STRCASEEQ (cmd, "is-busy"))
    return run_is_busy (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_state") || STRCASEEQ (cmd, "get-state"))
    return run_get_state (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_memsize") || STRCASEEQ (cmd, "set-memsize") || STRCASEEQ (cmd, "memsize"))
    return run_set_memsize (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_memsize") || STRCASEEQ (cmd, "get-memsize"))
    return run_get_memsize (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_pid") || STRCASEEQ (cmd, "get-pid") || STRCASEEQ (cmd, "pid"))
    return run_get_pid (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "version"))
    return run_version (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_selinux") || STRCASEEQ (cmd, "set-selinux") || STRCASEEQ (cmd, "selinux"))
    return run_set_selinux (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_selinux") || STRCASEEQ (cmd, "get-selinux"))
    return run_get_selinux (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_trace") || STRCASEEQ (cmd, "set-trace") || STRCASEEQ (cmd, "trace"))
    return run_set_trace (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_trace") || STRCASEEQ (cmd, "get-trace"))
    return run_get_trace (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_direct") || STRCASEEQ (cmd, "set-direct") || STRCASEEQ (cmd, "direct"))
    return run_set_direct (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_direct") || STRCASEEQ (cmd, "get-direct"))
    return run_get_direct (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_recovery_proc") || STRCASEEQ (cmd, "set-recovery-proc") || STRCASEEQ (cmd, "recovery-proc"))
    return run_set_recovery_proc (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_recovery_proc") || STRCASEEQ (cmd, "get-recovery-proc"))
    return run_get_recovery_proc (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "add_drive_with_if") || STRCASEEQ (cmd, "add-drive-with-if"))
    return run_add_drive_with_if (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "add_drive_ro_with_if") || STRCASEEQ (cmd, "add-drive-ro-with-if"))
    return run_add_drive_ro_with_if (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mount"))
    return run_mount (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sync"))
    return run_sync (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "touch"))
    return run_touch (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "cat"))
    return run_cat (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ll"))
    return run_ll (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ls"))
    return run_ls (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "list_devices") || STRCASEEQ (cmd, "list-devices"))
    return run_list_devices (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "list_partitions") || STRCASEEQ (cmd, "list-partitions"))
    return run_list_partitions (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "pvs"))
    return run_pvs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vgs"))
    return run_vgs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lvs"))
    return run_lvs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "pvs_full") || STRCASEEQ (cmd, "pvs-full"))
    return run_pvs_full (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vgs_full") || STRCASEEQ (cmd, "vgs-full"))
    return run_vgs_full (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lvs_full") || STRCASEEQ (cmd, "lvs-full"))
    return run_lvs_full (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "read_lines") || STRCASEEQ (cmd, "read-lines"))
    return run_read_lines (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_init") || STRCASEEQ (cmd, "aug-init"))
    return run_aug_init (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_close") || STRCASEEQ (cmd, "aug-close"))
    return run_aug_close (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_defvar") || STRCASEEQ (cmd, "aug-defvar"))
    return run_aug_defvar (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_defnode") || STRCASEEQ (cmd, "aug-defnode"))
    return run_aug_defnode (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_get") || STRCASEEQ (cmd, "aug-get"))
    return run_aug_get (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_set") || STRCASEEQ (cmd, "aug-set"))
    return run_aug_set (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_insert") || STRCASEEQ (cmd, "aug-insert"))
    return run_aug_insert (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_rm") || STRCASEEQ (cmd, "aug-rm"))
    return run_aug_rm (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_mv") || STRCASEEQ (cmd, "aug-mv"))
    return run_aug_mv (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_match") || STRCASEEQ (cmd, "aug-match"))
    return run_aug_match (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_save") || STRCASEEQ (cmd, "aug-save"))
    return run_aug_save (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_load") || STRCASEEQ (cmd, "aug-load"))
    return run_aug_load (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "aug_ls") || STRCASEEQ (cmd, "aug-ls"))
    return run_aug_ls (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "rm"))
    return run_rm (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "rmdir"))
    return run_rmdir (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "rm_rf") || STRCASEEQ (cmd, "rm-rf"))
    return run_rm_rf (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkdir"))
    return run_mkdir (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkdir_p") || STRCASEEQ (cmd, "mkdir-p"))
    return run_mkdir_p (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "chmod"))
    return run_chmod (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "chown"))
    return run_chown (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "exists"))
    return run_exists (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "is_file") || STRCASEEQ (cmd, "is-file"))
    return run_is_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "is_dir") || STRCASEEQ (cmd, "is-dir"))
    return run_is_dir (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "pvcreate"))
    return run_pvcreate (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vgcreate"))
    return run_vgcreate (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lvcreate"))
    return run_lvcreate (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkfs"))
    return run_mkfs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sfdisk"))
    return run_sfdisk (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "write_file") || STRCASEEQ (cmd, "write-file"))
    return run_write_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "umount") || STRCASEEQ (cmd, "unmount"))
    return run_umount (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mounts"))
    return run_mounts (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "umount_all") || STRCASEEQ (cmd, "umount-all") || STRCASEEQ (cmd, "unmount-all"))
    return run_umount_all (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lvm_remove_all") || STRCASEEQ (cmd, "lvm-remove-all"))
    return run_lvm_remove_all (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "file"))
    return run_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "command"))
    return run_command (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "command_lines") || STRCASEEQ (cmd, "command-lines"))
    return run_command_lines (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "stat"))
    return run_stat (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lstat"))
    return run_lstat (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "statvfs"))
    return run_statvfs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "tune2fs_l") || STRCASEEQ (cmd, "tune2fs-l"))
    return run_tune2fs_l (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_setro") || STRCASEEQ (cmd, "blockdev-setro"))
    return run_blockdev_setro (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_setrw") || STRCASEEQ (cmd, "blockdev-setrw"))
    return run_blockdev_setrw (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_getro") || STRCASEEQ (cmd, "blockdev-getro"))
    return run_blockdev_getro (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_getss") || STRCASEEQ (cmd, "blockdev-getss"))
    return run_blockdev_getss (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_getbsz") || STRCASEEQ (cmd, "blockdev-getbsz"))
    return run_blockdev_getbsz (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_setbsz") || STRCASEEQ (cmd, "blockdev-setbsz"))
    return run_blockdev_setbsz (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_getsz") || STRCASEEQ (cmd, "blockdev-getsz"))
    return run_blockdev_getsz (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_getsize64") || STRCASEEQ (cmd, "blockdev-getsize64"))
    return run_blockdev_getsize64 (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_flushbufs") || STRCASEEQ (cmd, "blockdev-flushbufs"))
    return run_blockdev_flushbufs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "blockdev_rereadpt") || STRCASEEQ (cmd, "blockdev-rereadpt"))
    return run_blockdev_rereadpt (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "upload"))
    return run_upload (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "download"))
    return run_download (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "checksum"))
    return run_checksum (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "tar_in") || STRCASEEQ (cmd, "tar-in"))
    return run_tar_in (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "tar_out") || STRCASEEQ (cmd, "tar-out"))
    return run_tar_out (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "tgz_in") || STRCASEEQ (cmd, "tgz-in"))
    return run_tgz_in (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "tgz_out") || STRCASEEQ (cmd, "tgz-out"))
    return run_tgz_out (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mount_ro") || STRCASEEQ (cmd, "mount-ro"))
    return run_mount_ro (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mount_options") || STRCASEEQ (cmd, "mount-options"))
    return run_mount_options (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mount_vfs") || STRCASEEQ (cmd, "mount-vfs"))
    return run_mount_vfs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "debug"))
    return run_debug (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lvremove"))
    return run_lvremove (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vgremove"))
    return run_vgremove (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "pvremove"))
    return run_pvremove (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_e2label") || STRCASEEQ (cmd, "set-e2label"))
    return run_set_e2label (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_e2label") || STRCASEEQ (cmd, "get-e2label"))
    return run_get_e2label (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "set_e2uuid") || STRCASEEQ (cmd, "set-e2uuid"))
    return run_set_e2uuid (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "get_e2uuid") || STRCASEEQ (cmd, "get-e2uuid"))
    return run_get_e2uuid (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "fsck"))
    return run_fsck (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zero"))
    return run_zero (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "grub_install") || STRCASEEQ (cmd, "grub-install"))
    return run_grub_install (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "cp"))
    return run_cp (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "cp_a") || STRCASEEQ (cmd, "cp-a"))
    return run_cp_a (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mv"))
    return run_mv (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "drop_caches") || STRCASEEQ (cmd, "drop-caches"))
    return run_drop_caches (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "dmesg"))
    return run_dmesg (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ping_daemon") || STRCASEEQ (cmd, "ping-daemon"))
    return run_ping_daemon (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "equal"))
    return run_equal (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "strings"))
    return run_strings (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "strings_e") || STRCASEEQ (cmd, "strings-e"))
    return run_strings_e (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "hexdump"))
    return run_hexdump (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zerofree"))
    return run_zerofree (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "pvresize"))
    return run_pvresize (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sfdisk_N") || STRCASEEQ (cmd, "sfdisk-N"))
    return run_sfdisk_N (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sfdisk_l") || STRCASEEQ (cmd, "sfdisk-l"))
    return run_sfdisk_l (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sfdisk_kernel_geometry") || STRCASEEQ (cmd, "sfdisk-kernel-geometry"))
    return run_sfdisk_kernel_geometry (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sfdisk_disk_geometry") || STRCASEEQ (cmd, "sfdisk-disk-geometry"))
    return run_sfdisk_disk_geometry (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vg_activate_all") || STRCASEEQ (cmd, "vg-activate-all"))
    return run_vg_activate_all (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vg_activate") || STRCASEEQ (cmd, "vg-activate"))
    return run_vg_activate (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lvresize"))
    return run_lvresize (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "resize2fs"))
    return run_resize2fs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "find"))
    return run_find (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "e2fsck_f") || STRCASEEQ (cmd, "e2fsck-f"))
    return run_e2fsck_f (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sleep"))
    return run_sleep (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ntfs_3g_probe") || STRCASEEQ (cmd, "ntfs-3g-probe"))
    return run_ntfs_3g_probe (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sh"))
    return run_sh (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sh_lines") || STRCASEEQ (cmd, "sh-lines"))
    return run_sh_lines (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "glob_expand") || STRCASEEQ (cmd, "glob-expand"))
    return run_glob_expand (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "scrub_device") || STRCASEEQ (cmd, "scrub-device"))
    return run_scrub_device (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "scrub_file") || STRCASEEQ (cmd, "scrub-file"))
    return run_scrub_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "scrub_freespace") || STRCASEEQ (cmd, "scrub-freespace"))
    return run_scrub_freespace (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkdtemp"))
    return run_mkdtemp (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "wc_l") || STRCASEEQ (cmd, "wc-l"))
    return run_wc_l (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "wc_w") || STRCASEEQ (cmd, "wc-w"))
    return run_wc_w (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "wc_c") || STRCASEEQ (cmd, "wc-c"))
    return run_wc_c (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "head"))
    return run_head (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "head_n") || STRCASEEQ (cmd, "head-n"))
    return run_head_n (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "tail"))
    return run_tail (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "tail_n") || STRCASEEQ (cmd, "tail-n"))
    return run_tail_n (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "df"))
    return run_df (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "df_h") || STRCASEEQ (cmd, "df-h"))
    return run_df_h (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "du"))
    return run_du (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "initrd_list") || STRCASEEQ (cmd, "initrd-list"))
    return run_initrd_list (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mount_loop") || STRCASEEQ (cmd, "mount-loop"))
    return run_mount_loop (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkswap"))
    return run_mkswap (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkswap_L") || STRCASEEQ (cmd, "mkswap-L"))
    return run_mkswap_L (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkswap_U") || STRCASEEQ (cmd, "mkswap-U"))
    return run_mkswap_U (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mknod"))
    return run_mknod (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkfifo"))
    return run_mkfifo (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mknod_b") || STRCASEEQ (cmd, "mknod-b"))
    return run_mknod_b (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mknod_c") || STRCASEEQ (cmd, "mknod-c"))
    return run_mknod_c (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "umask"))
    return run_umask (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "readdir"))
    return run_readdir (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "sfdiskM"))
    return run_sfdiskM (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zfile"))
    return run_zfile (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "getxattrs"))
    return run_getxattrs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lgetxattrs"))
    return run_lgetxattrs (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "setxattr"))
    return run_setxattr (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lsetxattr"))
    return run_lsetxattr (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "removexattr"))
    return run_removexattr (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lremovexattr"))
    return run_lremovexattr (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mountpoints"))
    return run_mountpoints (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkmountpoint"))
    return run_mkmountpoint (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "rmmountpoint"))
    return run_rmmountpoint (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "read_file") || STRCASEEQ (cmd, "read-file"))
    return run_read_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "grep"))
    return run_grep (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "egrep"))
    return run_egrep (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "fgrep"))
    return run_fgrep (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "grepi"))
    return run_grepi (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "egrepi"))
    return run_egrepi (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "fgrepi"))
    return run_fgrepi (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zgrep"))
    return run_zgrep (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zegrep"))
    return run_zegrep (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zfgrep"))
    return run_zfgrep (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zgrepi"))
    return run_zgrepi (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zegrepi"))
    return run_zegrepi (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "zfgrepi"))
    return run_zfgrepi (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "realpath"))
    return run_realpath (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ln"))
    return run_ln (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ln_f") || STRCASEEQ (cmd, "ln-f"))
    return run_ln_f (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ln_s") || STRCASEEQ (cmd, "ln-s"))
    return run_ln_s (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "ln_sf") || STRCASEEQ (cmd, "ln-sf"))
    return run_ln_sf (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "readlink"))
    return run_readlink (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "fallocate"))
    return run_fallocate (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapon_device") || STRCASEEQ (cmd, "swapon-device"))
    return run_swapon_device (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapoff_device") || STRCASEEQ (cmd, "swapoff-device"))
    return run_swapoff_device (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapon_file") || STRCASEEQ (cmd, "swapon-file"))
    return run_swapon_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapoff_file") || STRCASEEQ (cmd, "swapoff-file"))
    return run_swapoff_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapon_label") || STRCASEEQ (cmd, "swapon-label"))
    return run_swapon_label (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapoff_label") || STRCASEEQ (cmd, "swapoff-label"))
    return run_swapoff_label (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapon_uuid") || STRCASEEQ (cmd, "swapon-uuid"))
    return run_swapon_uuid (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "swapoff_uuid") || STRCASEEQ (cmd, "swapoff-uuid"))
    return run_swapoff_uuid (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkswap_file") || STRCASEEQ (cmd, "mkswap-file"))
    return run_mkswap_file (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "inotify_init") || STRCASEEQ (cmd, "inotify-init"))
    return run_inotify_init (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "inotify_add_watch") || STRCASEEQ (cmd, "inotify-add-watch"))
    return run_inotify_add_watch (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "inotify_rm_watch") || STRCASEEQ (cmd, "inotify-rm-watch"))
    return run_inotify_rm_watch (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "inotify_read") || STRCASEEQ (cmd, "inotify-read"))
    return run_inotify_read (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "inotify_files") || STRCASEEQ (cmd, "inotify-files"))
    return run_inotify_files (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "inotify_close") || STRCASEEQ (cmd, "inotify-close"))
    return run_inotify_close (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "setcon"))
    return run_setcon (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "getcon"))
    return run_getcon (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkfs_b") || STRCASEEQ (cmd, "mkfs-b"))
    return run_mkfs_b (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mke2journal"))
    return run_mke2journal (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mke2journal_L") || STRCASEEQ (cmd, "mke2journal-L"))
    return run_mke2journal_L (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mke2journal_U") || STRCASEEQ (cmd, "mke2journal-U"))
    return run_mke2journal_U (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mke2fs_J") || STRCASEEQ (cmd, "mke2fs-J"))
    return run_mke2fs_J (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mke2fs_JL") || STRCASEEQ (cmd, "mke2fs-JL"))
    return run_mke2fs_JL (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mke2fs_JU") || STRCASEEQ (cmd, "mke2fs-JU"))
    return run_mke2fs_JU (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "modprobe"))
    return run_modprobe (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "echo_daemon") || STRCASEEQ (cmd, "echo-daemon"))
    return run_echo_daemon (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "find0"))
    return run_find0 (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "case_sensitive_path") || STRCASEEQ (cmd, "case-sensitive-path"))
    return run_case_sensitive_path (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vfs_type") || STRCASEEQ (cmd, "vfs-type"))
    return run_vfs_type (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "truncate"))
    return run_truncate (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "truncate_size") || STRCASEEQ (cmd, "truncate-size"))
    return run_truncate_size (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "utimens"))
    return run_utimens (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "mkdir_mode") || STRCASEEQ (cmd, "mkdir-mode"))
    return run_mkdir_mode (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lchown"))
    return run_lchown (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lstatlist"))
    return run_lstatlist (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lxattrlist"))
    return run_lxattrlist (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "readlinklist"))
    return run_readlinklist (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "pread"))
    return run_pread (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "part_init") || STRCASEEQ (cmd, "part-init"))
    return run_part_init (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "part_add") || STRCASEEQ (cmd, "part-add"))
    return run_part_add (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "part_disk") || STRCASEEQ (cmd, "part-disk"))
    return run_part_disk (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "part_set_bootable") || STRCASEEQ (cmd, "part-set-bootable"))
    return run_part_set_bootable (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "part_set_name") || STRCASEEQ (cmd, "part-set-name"))
    return run_part_set_name (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "part_list") || STRCASEEQ (cmd, "part-list"))
    return run_part_list (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "part_get_parttype") || STRCASEEQ (cmd, "part-get-parttype"))
    return run_part_get_parttype (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "fill"))
    return run_fill (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "available"))
    return run_available (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "dd"))
    return run_dd (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "filesize"))
    return run_filesize (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "lvrename"))
    return run_lvrename (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "vgrename"))
    return run_vgrename (cmd, argc, argv);
  else
  if (STRCASEEQ (cmd, "initrd_cat") || STRCASEEQ (cmd, "initrd-cat"))
    return run_initrd_cat (cmd, argc, argv);
  else
    {
      fprintf (stderr, _("%s: unknown command\n"), cmd);
      return -1;
    }
  return 0;
}

