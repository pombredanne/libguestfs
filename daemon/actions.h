/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED BY 'src/generator.ml'.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009 Red Hat Inc.
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

#include "../src/guestfs_protocol.h"

extern int do_mount (char *device, char *mountpoint);
extern int do_sync (void);
extern int do_touch (char *path);
extern char *do_cat (char *path);
extern char *do_ll (char *directory);
extern char **do_ls (char *directory);
extern char **do_list_devices (void);
extern char **do_list_partitions (void);
extern char **do_pvs (void);
extern char **do_vgs (void);
extern char **do_lvs (void);
extern guestfs_int_lvm_pv_list *do_pvs_full (void);
extern guestfs_int_lvm_vg_list *do_vgs_full (void);
extern guestfs_int_lvm_lv_list *do_lvs_full (void);
extern char **do_read_lines (char *path);
extern int do_aug_init (char *root, int flags);
extern int do_aug_close (void);
extern int do_aug_defvar (char *name, char *expr);
extern guestfs_int_int_bool *do_aug_defnode (char *name, char *expr, char *val);
extern char *do_aug_get (char *path);
extern int do_aug_set (char *path, char *val);
extern int do_aug_insert (char *path, char *label, int before);
extern int do_aug_rm (char *path);
extern int do_aug_mv (char *src, char *dest);
extern char **do_aug_match (char *path);
extern int do_aug_save (void);
extern int do_aug_load (void);
extern char **do_aug_ls (char *path);
extern int do_rm (char *path);
extern int do_rmdir (char *path);
extern int do_rm_rf (char *path);
extern int do_mkdir (char *path);
extern int do_mkdir_p (char *path);
extern int do_chmod (int mode, char *path);
extern int do_chown (int owner, int group, char *path);
extern int do_exists (char *path);
extern int do_is_file (char *path);
extern int do_is_dir (char *path);
extern int do_pvcreate (char *device);
extern int do_vgcreate (char *volgroup, char **physvols);
extern int do_lvcreate (char *logvol, char *volgroup, int mbytes);
extern int do_mkfs (char *fstype, char *device);
extern int do_sfdisk (char *device, int cyls, int heads, int sectors, char **lines);
extern int do_write_file (char *path, char *content, int size);
extern int do_umount (char *pathordevice);
extern char **do_mounts (void);
extern int do_umount_all (void);
extern int do_lvm_remove_all (void);
extern char *do_file (char *path);
extern char *do_command (char **arguments);
extern char **do_command_lines (char **arguments);
extern guestfs_int_stat *do_stat (char *path);
extern guestfs_int_stat *do_lstat (char *path);
extern guestfs_int_statvfs *do_statvfs (char *path);
extern char **do_tune2fs_l (char *device);
extern int do_blockdev_setro (char *device);
extern int do_blockdev_setrw (char *device);
extern int do_blockdev_getro (char *device);
extern int do_blockdev_getss (char *device);
extern int do_blockdev_getbsz (char *device);
extern int do_blockdev_setbsz (char *device, int blocksize);
extern int64_t do_blockdev_getsz (char *device);
extern int64_t do_blockdev_getsize64 (char *device);
extern int do_blockdev_flushbufs (char *device);
extern int do_blockdev_rereadpt (char *device);
extern int do_upload (char *remotefilename);
extern int do_download (char *remotefilename);
extern char *do_checksum (char *csumtype, char *path);
extern int do_tar_in (char *directory);
extern int do_tar_out (char *directory);
extern int do_tgz_in (char *directory);
extern int do_tgz_out (char *directory);
extern int do_mount_ro (char *device, char *mountpoint);
extern int do_mount_options (char *options, char *device, char *mountpoint);
extern int do_mount_vfs (char *options, char *vfstype, char *device, char *mountpoint);
extern char *do_debug (char *subcmd, char **extraargs);
extern int do_lvremove (char *device);
extern int do_vgremove (char *vgname);
extern int do_pvremove (char *device);
extern int do_set_e2label (char *device, char *label);
extern char *do_get_e2label (char *device);
extern int do_set_e2uuid (char *device, char *uuid);
extern char *do_get_e2uuid (char *device);
extern int do_fsck (char *fstype, char *device);
extern int do_zero (char *device);
extern int do_grub_install (char *root, char *device);
extern int do_cp (char *src, char *dest);
extern int do_cp_a (char *src, char *dest);
extern int do_mv (char *src, char *dest);
extern int do_drop_caches (int whattodrop);
extern char *do_dmesg (void);
extern int do_ping_daemon (void);
extern int do_equal (char *file1, char *file2);
extern char **do_strings (char *path);
extern char **do_strings_e (char *encoding, char *path);
extern char *do_hexdump (char *path);
extern int do_zerofree (char *device);
extern int do_pvresize (char *device);
extern int do_sfdisk_N (char *device, int partnum, int cyls, int heads, int sectors, char *line);
extern char *do_sfdisk_l (char *device);
extern char *do_sfdisk_kernel_geometry (char *device);
extern char *do_sfdisk_disk_geometry (char *device);
extern int do_vg_activate_all (int activate);
extern int do_vg_activate (int activate, char **volgroups);
extern int do_lvresize (char *device, int mbytes);
extern int do_resize2fs (char *device);
extern char **do_find (char *directory);
extern int do_e2fsck_f (char *device);
extern int do_sleep (int secs);
extern int do_ntfs_3g_probe (int rw, char *device);
extern char *do_sh (char *command);
extern char **do_sh_lines (char *command);
extern char **do_glob_expand (char *pattern);
extern int do_scrub_device (char *device);
extern int do_scrub_file (char *file);
extern int do_scrub_freespace (char *dir);
extern char *do_mkdtemp (char *template);
extern int do_wc_l (char *path);
extern int do_wc_w (char *path);
extern int do_wc_c (char *path);
extern char **do_head (char *path);
extern char **do_head_n (int nrlines, char *path);
extern char **do_tail (char *path);
extern char **do_tail_n (int nrlines, char *path);
extern char *do_df (void);
extern char *do_df_h (void);
extern int64_t do_du (char *path);
extern char **do_initrd_list (char *path);
extern int do_mount_loop (char *file, char *mountpoint);
extern int do_mkswap (char *device);
extern int do_mkswap_L (char *label, char *device);
extern int do_mkswap_U (char *uuid, char *device);
extern int do_mknod (int mode, int devmajor, int devminor, char *path);
extern int do_mkfifo (int mode, char *path);
extern int do_mknod_b (int mode, int devmajor, int devminor, char *path);
extern int do_mknod_c (int mode, int devmajor, int devminor, char *path);
extern int do_umask (int mask);
extern guestfs_int_dirent_list *do_readdir (char *dir);
extern int do_sfdiskM (char *device, char **lines);
extern char *do_zfile (char *method, char *path);
extern guestfs_int_xattr_list *do_getxattrs (char *path);
extern guestfs_int_xattr_list *do_lgetxattrs (char *path);
extern int do_setxattr (char *xattr, char *val, int vallen, char *path);
extern int do_lsetxattr (char *xattr, char *val, int vallen, char *path);
extern int do_removexattr (char *xattr, char *path);
extern int do_lremovexattr (char *xattr, char *path);
