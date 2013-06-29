/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM:
 *   generator/ *.ml
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
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
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef HAVE_LIBREADLINE
#include <readline/readline.h>
#endif

#include "fish.h"

#ifdef HAVE_LIBREADLINE

static const char *const commands[] = {
  BUILTIN_COMMANDS_FOR_COMPLETION,
  "acl-delete-def-file",
  "acl-get-file",
  "acl-set-file",
  "add-cdrom",
  "add-domain",
  "domain",
  "add-drive",
  "add",
  "add-drive-opts",
  "add-drive-ro",
  "add-ro",
  "add-drive-ro-with-if",
  "add-drive-with-if",
  "alloc",
  "allocate",
  "aug-clear",
  "aug-close",
  "aug-defnode",
  "aug-defvar",
  "aug-get",
  "aug-init",
  "aug-insert",
  "aug-load",
  "aug-ls",
  "aug-match",
  "aug-mv",
  "aug-rm",
  "aug-save",
  "aug-set",
  "available",
  "available-all-groups",
  "base64-in",
  "base64-out",
  "blkid",
  "blockdev-flushbufs",
  "blockdev-getbsz",
  "blockdev-getro",
  "blockdev-getsize64",
  "blockdev-getss",
  "blockdev-getsz",
  "blockdev-rereadpt",
  "blockdev-setbsz",
  "blockdev-setro",
  "blockdev-setrw",
  "btrfs-device-add",
  "btrfs-device-delete",
  "btrfs-filesystem-balance",
  "btrfs-filesystem-resize",
  "btrfs-filesystem-sync",
  "btrfs-fsck",
  "btrfs-set-seeding",
  "btrfs-subvolume-create",
  "btrfs-subvolume-delete",
  "btrfs-subvolume-list",
  "btrfs-subvolume-set-default",
  "btrfs-subvolume-snapshot",
  "canonical-device-name",
  "cap-get-file",
  "cap-set-file",
  "case-sensitive-path",
  "cat",
  "checksum",
  "checksum-device",
  "checksums-out",
  "chmod",
  "chown",
  "command",
  "command-lines",
  "compress-device-out",
  "compress-out",
  "config",
  "copy-device-to-device",
  "copy-device-to-file",
  "copy-file-to-device",
  "copy-file-to-file",
  "copy-in",
  "copy-out",
  "copy-size",
  "cp",
  "cp-a",
  "cp-r",
  "dd",
  "debug",
  "debug-drives",
  "debug-upload",
  "delete-event",
  "device-index",
  "df",
  "df-h",
  "disk-format",
  "disk-has-backing-file",
  "disk-virtual-size",
  "display",
  "dmesg",
  "download",
  "download-offset",
  "drop-caches",
  "du",
  "e2fsck",
  "e2fsck-f",
  "echo",
  "echo-daemon",
  "edit",
  "vi",
  "emacs",
  "egrep",
  "egrepi",
  "equal",
  "event",
  "exists",
  "extlinux",
  "fallocate",
  "fallocate64",
  "feature-available",
  "fgrep",
  "fgrepi",
  "file",
  "file-architecture",
  "filesize",
  "filesystem-available",
  "fill",
  "fill-dir",
  "fill-pattern",
  "find",
  "find0",
  "findfs-label",
  "findfs-uuid",
  "fsck",
  "fstrim",
  "get-append",
  "get-attach-method",
  "get-autosync",
  "get-backend",
  "get-cachedir",
  "get-direct",
  "get-e2attrs",
  "get-e2generation",
  "get-e2label",
  "get-e2uuid",
  "get-libvirt-requested-credential-challenge",
  "get-libvirt-requested-credential-defresult",
  "get-libvirt-requested-credential-prompt",
  "get-libvirt-requested-credentials",
  "get-memsize",
  "get-network",
  "get-path",
  "get-pgroup",
  "get-pid",
  "pid",
  "get-program",
  "get-qemu",
  "get-recovery-proc",
  "get-selinux",
  "get-smp",
  "get-tmpdir",
  "get-trace",
  "get-umask",
  "get-verbose",
  "getcon",
  "getxattr",
  "getxattrs",
  "glob",
  "glob-expand",
  "grep",
  "grep-opts",
  "grepi",
  "grub-install",
  "head",
  "head-n",
  "hexdump",
  "hexedit",
  "hivex-close",
  "hivex-commit",
  "hivex-node-add-child",
  "hivex-node-children",
  "hivex-node-delete-child",
  "hivex-node-get-child",
  "hivex-node-get-value",
  "hivex-node-name",
  "hivex-node-parent",
  "hivex-node-set-value",
  "hivex-node-values",
  "hivex-open",
  "hivex-root",
  "hivex-value-key",
  "hivex-value-type",
  "hivex-value-utf8",
  "hivex-value-value",
  "initrd-cat",
  "initrd-list",
  "inotify-add-watch",
  "inotify-close",
  "inotify-files",
  "inotify-init",
  "inotify-read",
  "inotify-rm-watch",
  "inspect-get-arch",
  "inspect-get-distro",
  "inspect-get-drive-mappings",
  "inspect-get-filesystems",
  "inspect-get-format",
  "inspect-get-hostname",
  "inspect-get-icon",
  "inspect-get-major-version",
  "inspect-get-minor-version",
  "inspect-get-mountpoints",
  "inspect-get-package-format",
  "inspect-get-package-management",
  "inspect-get-product-name",
  "inspect-get-product-variant",
  "inspect-get-roots",
  "inspect-get-type",
  "inspect-get-windows-current-control-set",
  "inspect-get-windows-systemroot",
  "inspect-is-live",
  "inspect-is-multipart",
  "inspect-is-netinst",
  "inspect-list-applications",
  "inspect-list-applications2",
  "inspect-os",
  "is-blockdev",
  "is-blockdev-opts",
  "is-chardev",
  "is-chardev-opts",
  "is-config",
  "is-dir",
  "is-dir-opts",
  "is-fifo",
  "is-fifo-opts",
  "is-file",
  "is-file-opts",
  "is-lv",
  "is-socket",
  "is-socket-opts",
  "is-symlink",
  "is-whole-device",
  "is-zero",
  "is-zero-device",
  "isoinfo",
  "isoinfo-device",
  "kill-subprocess",
  "launch",
  "run",
  "lcd",
  "lchown",
  "ldmtool-create-all",
  "ldmtool-diskgroup-disks",
  "ldmtool-diskgroup-name",
  "ldmtool-diskgroup-volumes",
  "ldmtool-remove-all",
  "ldmtool-scan",
  "ldmtool-scan-devices",
  "ldmtool-volume-hint",
  "ldmtool-volume-partitions",
  "ldmtool-volume-type",
  "lgetxattr",
  "lgetxattrs",
  "list-9p",
  "list-devices",
  "list-disk-labels",
  "list-dm-devices",
  "list-events",
  "list-filesystems",
  "list-ldm-partitions",
  "list-ldm-volumes",
  "list-md-devices",
  "list-partitions",
  "ll",
  "llz",
  "ln",
  "ln-f",
  "ln-s",
  "ln-sf",
  "lremovexattr",
  "ls",
  "ls0",
  "lsetxattr",
  "lstat",
  "lstatlist",
  "luks-add-key",
  "luks-close",
  "luks-format",
  "luks-format-cipher",
  "luks-kill-slot",
  "luks-open",
  "luks-open-ro",
  "lvcreate",
  "lvcreate-free",
  "lvm-canonical-lv-name",
  "lvm-clear-filter",
  "lvm-remove-all",
  "lvm-set-filter",
  "lvremove",
  "lvrename",
  "lvresize",
  "lvresize-free",
  "lvs",
  "lvs-full",
  "lvuuid",
  "lxattrlist",
  "man",
  "manual",
  "max-disks",
  "md-create",
  "md-detail",
  "md-stat",
  "md-stop",
  "mkdir",
  "mkdir-mode",
  "mkdir-p",
  "mkdtemp",
  "mke2fs",
  "mke2fs-J",
  "mke2fs-JL",
  "mke2fs-JU",
  "mke2journal",
  "mke2journal-L",
  "mke2journal-U",
  "mkfifo",
  "mkfs",
  "mkfs-opts",
  "mkfs-b",
  "mkfs-btrfs",
  "mklost-and-found",
  "mkmountpoint",
  "mknod",
  "mknod-b",
  "mknod-c",
  "mkswap",
  "mkswap-opts",
  "mkswap-L",
  "mkswap-U",
  "mkswap-file",
  "mktemp",
  "modprobe",
  "more",
  "less",
  "mount",
  "mount-9p",
  "mount-local",
  "mount-local-run",
  "mount-loop",
  "mount-options",
  "mount-ro",
  "mount-vfs",
  "mountpoints",
  "mounts",
  "mv",
  "nr-devices",
  "ntfs-3g-probe",
  "ntfsclone-in",
  "ntfsclone-out",
  "ntfsfix",
  "ntfsresize",
  "ntfsresize-opts",
  "ntfsresize-size",
  "parse-environment",
  "parse-environment-list",
  "part-add",
  "part-del",
  "part-disk",
  "part-get-bootable",
  "part-get-gpt-type",
  "part-get-mbr-id",
  "part-get-parttype",
  "part-init",
  "part-list",
  "part-set-bootable",
  "part-set-gpt-type",
  "part-set-mbr-id",
  "part-set-name",
  "part-to-dev",
  "part-to-partnum",
  "ping-daemon",
  "pread",
  "pread-device",
  "pvchange-uuid",
  "pvchange-uuid-all",
  "pvcreate",
  "pvremove",
  "pvresize",
  "pvresize-size",
  "pvs",
  "pvs-full",
  "pvuuid",
  "pwrite",
  "pwrite-device",
  "read-file",
  "read-lines",
  "readdir",
  "readlink",
  "readlinklist",
  "realpath",
  "remount",
  "remove-drive",
  "removexattr",
  "rename",
  "reopen",
  "resize2fs",
  "resize2fs-M",
  "resize2fs-size",
  "rm",
  "rm-f",
  "rm-rf",
  "rmdir",
  "rmmountpoint",
  "rsync",
  "rsync-in",
  "rsync-out",
  "scrub-device",
  "scrub-file",
  "scrub-freespace",
  "set-append",
  "append",
  "set-attach-method",
  "attach-method",
  "set-autosync",
  "autosync",
  "set-backend",
  "backend",
  "set-cachedir",
  "cachedir",
  "set-direct",
  "direct",
  "set-e2attrs",
  "set-e2generation",
  "set-e2label",
  "set-e2uuid",
  "set-label",
  "set-libvirt-requested-credential",
  "set-libvirt-supported-credentials",
  "set-memsize",
  "memsize",
  "set-network",
  "network",
  "set-path",
  "path",
  "set-pgroup",
  "pgroup",
  "set-program",
  "program",
  "set-qemu",
  "qemu",
  "set-recovery-proc",
  "recovery-proc",
  "set-selinux",
  "selinux",
  "set-smp",
  "smp",
  "set-tmpdir",
  "tmpdir",
  "set-trace",
  "trace",
  "set-verbose",
  "verbose",
  "setcon",
  "setenv",
  "setxattr",
  "sfdisk",
  "sfdiskM",
  "sfdisk-N",
  "sfdisk-disk-geometry",
  "sfdisk-kernel-geometry",
  "sfdisk-l",
  "sh",
  "sh-lines",
  "shutdown",
  "sleep",
  "sparse",
  "stat",
  "statvfs",
  "strings",
  "strings-e",
  "supported",
  "swapoff-device",
  "swapoff-file",
  "swapoff-label",
  "swapoff-uuid",
  "swapon-device",
  "swapon-file",
  "swapon-label",
  "swapon-uuid",
  "sync",
  "syslinux",
  "tail",
  "tail-n",
  "tar-in",
  "tar-in-opts",
  "tar-out",
  "tar-out-opts",
  "tgz-in",
  "tgz-out",
  "time",
  "touch",
  "truncate",
  "truncate-size",
  "tune2fs",
  "tune2fs-l",
  "txz-in",
  "txz-out",
  "umask",
  "umount",
  "unmount",
  "umount-opts",
  "umount-all",
  "unmount-all",
  "umount-local",
  "unsetenv",
  "upload",
  "upload-offset",
  "user-cancel",
  "utimens",
  "utsname",
  "version",
  "vfs-label",
  "vfs-type",
  "vfs-uuid",
  "vg-activate",
  "vg-activate-all",
  "vgchange-uuid",
  "vgchange-uuid-all",
  "vgcreate",
  "vglvuuids",
  "vgmeta",
  "vgpvuuids",
  "vgremove",
  "vgrename",
  "vgs",
  "vgs-full",
  "vgscan",
  "vguuid",
  "wc-c",
  "wc-l",
  "wc-w",
  "wipefs",
  "write",
  "write-append",
  "write-file",
  "xfs-admin",
  "xfs-growfs",
  "xfs-info",
  "xfs-repair",
  "zegrep",
  "zegrepi",
  "zero",
  "zero-device",
  "zero-free-space",
  "zerofree",
  "zfgrep",
  "zfgrepi",
  "zfile",
  "zgrep",
  "zgrepi",
  NULL
};

static char *
generator (const char *text, int state)
{
  static size_t index, len;
  const char *name;

  if (!state) {
    index = 0;
    len = strlen (text);
  }

  rl_attempted_completion_over = 1;

  while ((name = commands[index]) != NULL) {
    index++;
    if (STRCASEEQLEN (name, text, len))
      return strdup (name);
  }

  return NULL;
}

#endif /* HAVE_LIBREADLINE */

#ifdef HAVE_RL_COMPLETION_MATCHES
#define RL_COMPLETION_MATCHES rl_completion_matches
#else
#ifdef HAVE_COMPLETION_MATCHES
#define RL_COMPLETION_MATCHES completion_matches
#endif
#endif /* else just fail if we don't have either symbol */

char **
do_completion (const char *text, int start, int end)
{
  char **matches = NULL;

#ifdef HAVE_LIBREADLINE
  rl_completion_append_character = ' ';

  if (start == 0)
    matches = RL_COMPLETION_MATCHES (text, generator);
  else if (complete_dest_paths)
    matches = RL_COMPLETION_MATCHES (text, complete_dest_paths_generator);
#endif

  return matches;
}
