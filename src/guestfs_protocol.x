/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM:
 *   src/generator.ml
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2010 Red Hat Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

typedef string str<>;

struct guestfs_int_int_bool {
  int i;
  int b;
};

typedef struct guestfs_int_int_bool guestfs_int_int_bool_list<>;

struct guestfs_int_lvm_pv {
  string pv_name<>;
  opaque pv_uuid[32];
  string pv_fmt<>;
  hyper pv_size;
  hyper dev_size;
  hyper pv_free;
  hyper pv_used;
  string pv_attr<>;
  hyper pv_pe_count;
  hyper pv_pe_alloc_count;
  string pv_tags<>;
  hyper pe_start;
  hyper pv_mda_count;
  hyper pv_mda_free;
};

typedef struct guestfs_int_lvm_pv guestfs_int_lvm_pv_list<>;

struct guestfs_int_lvm_vg {
  string vg_name<>;
  opaque vg_uuid[32];
  string vg_fmt<>;
  string vg_attr<>;
  hyper vg_size;
  hyper vg_free;
  string vg_sysid<>;
  hyper vg_extent_size;
  hyper vg_extent_count;
  hyper vg_free_count;
  hyper max_lv;
  hyper max_pv;
  hyper pv_count;
  hyper lv_count;
  hyper snap_count;
  hyper vg_seqno;
  string vg_tags<>;
  hyper vg_mda_count;
  hyper vg_mda_free;
};

typedef struct guestfs_int_lvm_vg guestfs_int_lvm_vg_list<>;

struct guestfs_int_lvm_lv {
  string lv_name<>;
  opaque lv_uuid[32];
  string lv_attr<>;
  hyper lv_major;
  hyper lv_minor;
  hyper lv_kernel_major;
  hyper lv_kernel_minor;
  hyper lv_size;
  hyper seg_count;
  string origin<>;
  float snap_percent;
  float copy_percent;
  string move_pv<>;
  string lv_tags<>;
  string mirror_log<>;
  string modules<>;
};

typedef struct guestfs_int_lvm_lv guestfs_int_lvm_lv_list<>;

struct guestfs_int_stat {
  hyper dev;
  hyper ino;
  hyper mode;
  hyper nlink;
  hyper uid;
  hyper gid;
  hyper rdev;
  hyper size;
  hyper blksize;
  hyper blocks;
  hyper atime;
  hyper mtime;
  hyper ctime;
};

typedef struct guestfs_int_stat guestfs_int_stat_list<>;

struct guestfs_int_statvfs {
  hyper bsize;
  hyper frsize;
  hyper blocks;
  hyper bfree;
  hyper bavail;
  hyper files;
  hyper ffree;
  hyper favail;
  hyper fsid;
  hyper flag;
  hyper namemax;
};

typedef struct guestfs_int_statvfs guestfs_int_statvfs_list<>;

struct guestfs_int_dirent {
  hyper ino;
  char ftyp;
  string name<>;
};

typedef struct guestfs_int_dirent guestfs_int_dirent_list<>;

struct guestfs_int_version {
  hyper major;
  hyper minor;
  hyper release;
  string extra<>;
};

typedef struct guestfs_int_version guestfs_int_version_list<>;

struct guestfs_int_xattr {
  string attrname<>;
  opaque attrval<>;
};

typedef struct guestfs_int_xattr guestfs_int_xattr_list<>;

struct guestfs_int_inotify_event {
  hyper in_wd;
  int in_mask;
  int in_cookie;
  string in_name<>;
};

typedef struct guestfs_int_inotify_event guestfs_int_inotify_event_list<>;

struct guestfs_int_partition {
  int part_num;
  hyper part_start;
  hyper part_end;
  hyper part_size;
};

typedef struct guestfs_int_partition guestfs_int_partition_list<>;

struct guestfs_mount_args {
  string device<>;
  string mountpoint<>;
};

struct guestfs_touch_args {
  string path<>;
};

struct guestfs_cat_args {
  string path<>;
};

struct guestfs_cat_ret {
  string content<>;
};

struct guestfs_ll_args {
  string directory<>;
};

struct guestfs_ll_ret {
  string listing<>;
};

struct guestfs_ls_args {
  string directory<>;
};

struct guestfs_ls_ret {
  str listing<>;
};

struct guestfs_list_devices_ret {
  str devices<>;
};

struct guestfs_list_partitions_ret {
  str partitions<>;
};

struct guestfs_pvs_ret {
  str physvols<>;
};

struct guestfs_vgs_ret {
  str volgroups<>;
};

struct guestfs_lvs_ret {
  str logvols<>;
};

struct guestfs_pvs_full_ret {
  guestfs_int_lvm_pv_list physvols;
};

struct guestfs_vgs_full_ret {
  guestfs_int_lvm_vg_list volgroups;
};

struct guestfs_lvs_full_ret {
  guestfs_int_lvm_lv_list logvols;
};

struct guestfs_read_lines_args {
  string path<>;
};

struct guestfs_read_lines_ret {
  str lines<>;
};

struct guestfs_aug_init_args {
  string root<>;
  int flags;
};

struct guestfs_aug_defvar_args {
  string name<>;
  str *expr;
};

struct guestfs_aug_defvar_ret {
  int nrnodes;
};

struct guestfs_aug_defnode_args {
  string name<>;
  string expr<>;
  string val<>;
};

struct guestfs_aug_defnode_ret {
  guestfs_int_int_bool nrnodescreated;
};

struct guestfs_aug_get_args {
  string augpath<>;
};

struct guestfs_aug_get_ret {
  string val<>;
};

struct guestfs_aug_set_args {
  string augpath<>;
  string val<>;
};

struct guestfs_aug_insert_args {
  string augpath<>;
  string label<>;
  bool before;
};

struct guestfs_aug_rm_args {
  string augpath<>;
};

struct guestfs_aug_rm_ret {
  int nrnodes;
};

struct guestfs_aug_mv_args {
  string src<>;
  string dest<>;
};

struct guestfs_aug_match_args {
  string augpath<>;
};

struct guestfs_aug_match_ret {
  str matches<>;
};

struct guestfs_aug_ls_args {
  string augpath<>;
};

struct guestfs_aug_ls_ret {
  str matches<>;
};

struct guestfs_rm_args {
  string path<>;
};

struct guestfs_rmdir_args {
  string path<>;
};

struct guestfs_rm_rf_args {
  string path<>;
};

struct guestfs_mkdir_args {
  string path<>;
};

struct guestfs_mkdir_p_args {
  string path<>;
};

struct guestfs_chmod_args {
  int mode;
  string path<>;
};

struct guestfs_chown_args {
  int owner;
  int group;
  string path<>;
};

struct guestfs_exists_args {
  string path<>;
};

struct guestfs_exists_ret {
  bool existsflag;
};

struct guestfs_is_file_args {
  string path<>;
};

struct guestfs_is_file_ret {
  bool fileflag;
};

struct guestfs_is_dir_args {
  string path<>;
};

struct guestfs_is_dir_ret {
  bool dirflag;
};

struct guestfs_pvcreate_args {
  string device<>;
};

struct guestfs_vgcreate_args {
  string volgroup<>;
  str physvols<>;
};

struct guestfs_lvcreate_args {
  string logvol<>;
  string volgroup<>;
  int mbytes;
};

struct guestfs_mkfs_args {
  string fstype<>;
  string device<>;
};

struct guestfs_sfdisk_args {
  string device<>;
  int cyls;
  int heads;
  int sectors;
  str lines<>;
};

struct guestfs_write_file_args {
  string path<>;
  string content<>;
  int size;
};

struct guestfs_umount_args {
  string pathordevice<>;
};

struct guestfs_mounts_ret {
  str devices<>;
};

struct guestfs_file_args {
  string path<>;
};

struct guestfs_file_ret {
  string description<>;
};

struct guestfs_command_args {
  str arguments<>;
};

struct guestfs_command_ret {
  string output<>;
};

struct guestfs_command_lines_args {
  str arguments<>;
};

struct guestfs_command_lines_ret {
  str lines<>;
};

struct guestfs_stat_args {
  string path<>;
};

struct guestfs_stat_ret {
  guestfs_int_stat statbuf;
};

struct guestfs_lstat_args {
  string path<>;
};

struct guestfs_lstat_ret {
  guestfs_int_stat statbuf;
};

struct guestfs_statvfs_args {
  string path<>;
};

struct guestfs_statvfs_ret {
  guestfs_int_statvfs statbuf;
};

struct guestfs_tune2fs_l_args {
  string device<>;
};

struct guestfs_tune2fs_l_ret {
  str superblock<>;
};

struct guestfs_blockdev_setro_args {
  string device<>;
};

struct guestfs_blockdev_setrw_args {
  string device<>;
};

struct guestfs_blockdev_getro_args {
  string device<>;
};

struct guestfs_blockdev_getro_ret {
  bool ro;
};

struct guestfs_blockdev_getss_args {
  string device<>;
};

struct guestfs_blockdev_getss_ret {
  int sectorsize;
};

struct guestfs_blockdev_getbsz_args {
  string device<>;
};

struct guestfs_blockdev_getbsz_ret {
  int blocksize;
};

struct guestfs_blockdev_setbsz_args {
  string device<>;
  int blocksize;
};

struct guestfs_blockdev_getsz_args {
  string device<>;
};

struct guestfs_blockdev_getsz_ret {
  hyper sizeinsectors;
};

struct guestfs_blockdev_getsize64_args {
  string device<>;
};

struct guestfs_blockdev_getsize64_ret {
  hyper sizeinbytes;
};

struct guestfs_blockdev_flushbufs_args {
  string device<>;
};

struct guestfs_blockdev_rereadpt_args {
  string device<>;
};

struct guestfs_upload_args {
  string remotefilename<>;
};

struct guestfs_download_args {
  string remotefilename<>;
};

struct guestfs_checksum_args {
  string csumtype<>;
  string path<>;
};

struct guestfs_checksum_ret {
  string checksum<>;
};

struct guestfs_tar_in_args {
  string directory<>;
};

struct guestfs_tar_out_args {
  string directory<>;
};

struct guestfs_tgz_in_args {
  string directory<>;
};

struct guestfs_tgz_out_args {
  string directory<>;
};

struct guestfs_mount_ro_args {
  string device<>;
  string mountpoint<>;
};

struct guestfs_mount_options_args {
  string options<>;
  string device<>;
  string mountpoint<>;
};

struct guestfs_mount_vfs_args {
  string options<>;
  string vfstype<>;
  string device<>;
  string mountpoint<>;
};

struct guestfs_debug_args {
  string subcmd<>;
  str extraargs<>;
};

struct guestfs_debug_ret {
  string result<>;
};

struct guestfs_lvremove_args {
  string device<>;
};

struct guestfs_vgremove_args {
  string vgname<>;
};

struct guestfs_pvremove_args {
  string device<>;
};

struct guestfs_set_e2label_args {
  string device<>;
  string label<>;
};

struct guestfs_get_e2label_args {
  string device<>;
};

struct guestfs_get_e2label_ret {
  string label<>;
};

struct guestfs_set_e2uuid_args {
  string device<>;
  string uuid<>;
};

struct guestfs_get_e2uuid_args {
  string device<>;
};

struct guestfs_get_e2uuid_ret {
  string uuid<>;
};

struct guestfs_fsck_args {
  string fstype<>;
  string device<>;
};

struct guestfs_fsck_ret {
  int status;
};

struct guestfs_zero_args {
  string device<>;
};

struct guestfs_grub_install_args {
  string root<>;
  string device<>;
};

struct guestfs_cp_args {
  string src<>;
  string dest<>;
};

struct guestfs_cp_a_args {
  string src<>;
  string dest<>;
};

struct guestfs_mv_args {
  string src<>;
  string dest<>;
};

struct guestfs_drop_caches_args {
  int whattodrop;
};

struct guestfs_dmesg_ret {
  string kmsgs<>;
};

struct guestfs_equal_args {
  string file1<>;
  string file2<>;
};

struct guestfs_equal_ret {
  bool equality;
};

struct guestfs_strings_args {
  string path<>;
};

struct guestfs_strings_ret {
  str stringsout<>;
};

struct guestfs_strings_e_args {
  string encoding<>;
  string path<>;
};

struct guestfs_strings_e_ret {
  str stringsout<>;
};

struct guestfs_hexdump_args {
  string path<>;
};

struct guestfs_hexdump_ret {
  string dump<>;
};

struct guestfs_zerofree_args {
  string device<>;
};

struct guestfs_pvresize_args {
  string device<>;
};

struct guestfs_sfdisk_N_args {
  string device<>;
  int partnum;
  int cyls;
  int heads;
  int sectors;
  string line<>;
};

struct guestfs_sfdisk_l_args {
  string device<>;
};

struct guestfs_sfdisk_l_ret {
  string partitions<>;
};

struct guestfs_sfdisk_kernel_geometry_args {
  string device<>;
};

struct guestfs_sfdisk_kernel_geometry_ret {
  string partitions<>;
};

struct guestfs_sfdisk_disk_geometry_args {
  string device<>;
};

struct guestfs_sfdisk_disk_geometry_ret {
  string partitions<>;
};

struct guestfs_vg_activate_all_args {
  bool activate;
};

struct guestfs_vg_activate_args {
  bool activate;
  str volgroups<>;
};

struct guestfs_lvresize_args {
  string device<>;
  int mbytes;
};

struct guestfs_resize2fs_args {
  string device<>;
};

struct guestfs_find_args {
  string directory<>;
};

struct guestfs_find_ret {
  str names<>;
};

struct guestfs_e2fsck_f_args {
  string device<>;
};

struct guestfs_sleep_args {
  int secs;
};

struct guestfs_ntfs_3g_probe_args {
  bool rw;
  string device<>;
};

struct guestfs_ntfs_3g_probe_ret {
  int status;
};

struct guestfs_sh_args {
  string command<>;
};

struct guestfs_sh_ret {
  string output<>;
};

struct guestfs_sh_lines_args {
  string command<>;
};

struct guestfs_sh_lines_ret {
  str lines<>;
};

struct guestfs_glob_expand_args {
  string pattern<>;
};

struct guestfs_glob_expand_ret {
  str paths<>;
};

struct guestfs_scrub_device_args {
  string device<>;
};

struct guestfs_scrub_file_args {
  string file<>;
};

struct guestfs_scrub_freespace_args {
  string dir<>;
};

struct guestfs_mkdtemp_args {
  string template<>;
};

struct guestfs_mkdtemp_ret {
  string dir<>;
};

struct guestfs_wc_l_args {
  string path<>;
};

struct guestfs_wc_l_ret {
  int lines;
};

struct guestfs_wc_w_args {
  string path<>;
};

struct guestfs_wc_w_ret {
  int words;
};

struct guestfs_wc_c_args {
  string path<>;
};

struct guestfs_wc_c_ret {
  int chars;
};

struct guestfs_head_args {
  string path<>;
};

struct guestfs_head_ret {
  str lines<>;
};

struct guestfs_head_n_args {
  int nrlines;
  string path<>;
};

struct guestfs_head_n_ret {
  str lines<>;
};

struct guestfs_tail_args {
  string path<>;
};

struct guestfs_tail_ret {
  str lines<>;
};

struct guestfs_tail_n_args {
  int nrlines;
  string path<>;
};

struct guestfs_tail_n_ret {
  str lines<>;
};

struct guestfs_df_ret {
  string output<>;
};

struct guestfs_df_h_ret {
  string output<>;
};

struct guestfs_du_args {
  string path<>;
};

struct guestfs_du_ret {
  hyper sizekb;
};

struct guestfs_initrd_list_args {
  string path<>;
};

struct guestfs_initrd_list_ret {
  str filenames<>;
};

struct guestfs_mount_loop_args {
  string file<>;
  string mountpoint<>;
};

struct guestfs_mkswap_args {
  string device<>;
};

struct guestfs_mkswap_L_args {
  string label<>;
  string device<>;
};

struct guestfs_mkswap_U_args {
  string uuid<>;
  string device<>;
};

struct guestfs_mknod_args {
  int mode;
  int devmajor;
  int devminor;
  string path<>;
};

struct guestfs_mkfifo_args {
  int mode;
  string path<>;
};

struct guestfs_mknod_b_args {
  int mode;
  int devmajor;
  int devminor;
  string path<>;
};

struct guestfs_mknod_c_args {
  int mode;
  int devmajor;
  int devminor;
  string path<>;
};

struct guestfs_umask_args {
  int mask;
};

struct guestfs_umask_ret {
  int oldmask;
};

struct guestfs_readdir_args {
  string dir<>;
};

struct guestfs_readdir_ret {
  guestfs_int_dirent_list entries;
};

struct guestfs_sfdiskM_args {
  string device<>;
  str lines<>;
};

struct guestfs_zfile_args {
  string meth<>;
  string path<>;
};

struct guestfs_zfile_ret {
  string description<>;
};

struct guestfs_getxattrs_args {
  string path<>;
};

struct guestfs_getxattrs_ret {
  guestfs_int_xattr_list xattrs;
};

struct guestfs_lgetxattrs_args {
  string path<>;
};

struct guestfs_lgetxattrs_ret {
  guestfs_int_xattr_list xattrs;
};

struct guestfs_setxattr_args {
  string xattr<>;
  string val<>;
  int vallen;
  string path<>;
};

struct guestfs_lsetxattr_args {
  string xattr<>;
  string val<>;
  int vallen;
  string path<>;
};

struct guestfs_removexattr_args {
  string xattr<>;
  string path<>;
};

struct guestfs_lremovexattr_args {
  string xattr<>;
  string path<>;
};

struct guestfs_mountpoints_ret {
  str mps<>;
};

struct guestfs_mkmountpoint_args {
  string exemptpath<>;
};

struct guestfs_rmmountpoint_args {
  string exemptpath<>;
};

struct guestfs_read_file_args {
  string path<>;
};

struct guestfs_read_file_ret {
  opaque content<>;
};

struct guestfs_grep_args {
  string regex<>;
  string path<>;
};

struct guestfs_grep_ret {
  str lines<>;
};

struct guestfs_egrep_args {
  string regex<>;
  string path<>;
};

struct guestfs_egrep_ret {
  str lines<>;
};

struct guestfs_fgrep_args {
  string pattern<>;
  string path<>;
};

struct guestfs_fgrep_ret {
  str lines<>;
};

struct guestfs_grepi_args {
  string regex<>;
  string path<>;
};

struct guestfs_grepi_ret {
  str lines<>;
};

struct guestfs_egrepi_args {
  string regex<>;
  string path<>;
};

struct guestfs_egrepi_ret {
  str lines<>;
};

struct guestfs_fgrepi_args {
  string pattern<>;
  string path<>;
};

struct guestfs_fgrepi_ret {
  str lines<>;
};

struct guestfs_zgrep_args {
  string regex<>;
  string path<>;
};

struct guestfs_zgrep_ret {
  str lines<>;
};

struct guestfs_zegrep_args {
  string regex<>;
  string path<>;
};

struct guestfs_zegrep_ret {
  str lines<>;
};

struct guestfs_zfgrep_args {
  string pattern<>;
  string path<>;
};

struct guestfs_zfgrep_ret {
  str lines<>;
};

struct guestfs_zgrepi_args {
  string regex<>;
  string path<>;
};

struct guestfs_zgrepi_ret {
  str lines<>;
};

struct guestfs_zegrepi_args {
  string regex<>;
  string path<>;
};

struct guestfs_zegrepi_ret {
  str lines<>;
};

struct guestfs_zfgrepi_args {
  string pattern<>;
  string path<>;
};

struct guestfs_zfgrepi_ret {
  str lines<>;
};

struct guestfs_realpath_args {
  string path<>;
};

struct guestfs_realpath_ret {
  string rpath<>;
};

struct guestfs_ln_args {
  string target<>;
  string linkname<>;
};

struct guestfs_ln_f_args {
  string target<>;
  string linkname<>;
};

struct guestfs_ln_s_args {
  string target<>;
  string linkname<>;
};

struct guestfs_ln_sf_args {
  string target<>;
  string linkname<>;
};

struct guestfs_readlink_args {
  string path<>;
};

struct guestfs_readlink_ret {
  string link<>;
};

struct guestfs_fallocate_args {
  string path<>;
  int len;
};

struct guestfs_swapon_device_args {
  string device<>;
};

struct guestfs_swapoff_device_args {
  string device<>;
};

struct guestfs_swapon_file_args {
  string file<>;
};

struct guestfs_swapoff_file_args {
  string file<>;
};

struct guestfs_swapon_label_args {
  string label<>;
};

struct guestfs_swapoff_label_args {
  string label<>;
};

struct guestfs_swapon_uuid_args {
  string uuid<>;
};

struct guestfs_swapoff_uuid_args {
  string uuid<>;
};

struct guestfs_mkswap_file_args {
  string path<>;
};

struct guestfs_inotify_init_args {
  int maxevents;
};

struct guestfs_inotify_add_watch_args {
  string path<>;
  int mask;
};

struct guestfs_inotify_add_watch_ret {
  hyper wd;
};

struct guestfs_inotify_rm_watch_args {
  int wd;
};

struct guestfs_inotify_read_ret {
  guestfs_int_inotify_event_list events;
};

struct guestfs_inotify_files_ret {
  str paths<>;
};

struct guestfs_setcon_args {
  string context<>;
};

struct guestfs_getcon_ret {
  string context<>;
};

struct guestfs_mkfs_b_args {
  string fstype<>;
  int blocksize;
  string device<>;
};

struct guestfs_mke2journal_args {
  int blocksize;
  string device<>;
};

struct guestfs_mke2journal_L_args {
  int blocksize;
  string label<>;
  string device<>;
};

struct guestfs_mke2journal_U_args {
  int blocksize;
  string uuid<>;
  string device<>;
};

struct guestfs_mke2fs_J_args {
  string fstype<>;
  int blocksize;
  string device<>;
  string journal<>;
};

struct guestfs_mke2fs_JL_args {
  string fstype<>;
  int blocksize;
  string device<>;
  string label<>;
};

struct guestfs_mke2fs_JU_args {
  string fstype<>;
  int blocksize;
  string device<>;
  string uuid<>;
};

struct guestfs_modprobe_args {
  string modulename<>;
};

struct guestfs_echo_daemon_args {
  str words<>;
};

struct guestfs_echo_daemon_ret {
  string output<>;
};

struct guestfs_find0_args {
  string directory<>;
};

struct guestfs_case_sensitive_path_args {
  string path<>;
};

struct guestfs_case_sensitive_path_ret {
  string rpath<>;
};

struct guestfs_vfs_type_args {
  string device<>;
};

struct guestfs_vfs_type_ret {
  string fstype<>;
};

struct guestfs_truncate_args {
  string path<>;
};

struct guestfs_truncate_size_args {
  string path<>;
  hyper size;
};

struct guestfs_utimens_args {
  string path<>;
  hyper atsecs;
  hyper atnsecs;
  hyper mtsecs;
  hyper mtnsecs;
};

struct guestfs_mkdir_mode_args {
  string path<>;
  int mode;
};

struct guestfs_lchown_args {
  int owner;
  int group;
  string path<>;
};

struct guestfs_lstatlist_args {
  string path<>;
  str names<>;
};

struct guestfs_lstatlist_ret {
  guestfs_int_stat_list statbufs;
};

struct guestfs_lxattrlist_args {
  string path<>;
  str names<>;
};

struct guestfs_lxattrlist_ret {
  guestfs_int_xattr_list xattrs;
};

struct guestfs_readlinklist_args {
  string path<>;
  str names<>;
};

struct guestfs_readlinklist_ret {
  str links<>;
};

struct guestfs_pread_args {
  string path<>;
  int count;
  hyper offset;
};

struct guestfs_pread_ret {
  opaque content<>;
};

struct guestfs_part_init_args {
  string device<>;
  string parttype<>;
};

struct guestfs_part_add_args {
  string device<>;
  string prlogex<>;
  hyper startsect;
  hyper endsect;
};

struct guestfs_part_disk_args {
  string device<>;
  string parttype<>;
};

struct guestfs_part_set_bootable_args {
  string device<>;
  int partnum;
  bool bootable;
};

struct guestfs_part_set_name_args {
  string device<>;
  int partnum;
  string name<>;
};

struct guestfs_part_list_args {
  string device<>;
};

struct guestfs_part_list_ret {
  guestfs_int_partition_list partitions;
};

struct guestfs_part_get_parttype_args {
  string device<>;
};

struct guestfs_part_get_parttype_ret {
  string parttype<>;
};

struct guestfs_fill_args {
  int c;
  int len;
  string path<>;
};

struct guestfs_available_args {
  str groups<>;
};

struct guestfs_dd_args {
  string src<>;
  string dest<>;
};

struct guestfs_filesize_args {
  string file<>;
};

struct guestfs_filesize_ret {
  hyper size;
};

struct guestfs_lvrename_args {
  string logvol<>;
  string newlogvol<>;
};

struct guestfs_vgrename_args {
  string volgroup<>;
  string newvolgroup<>;
};

struct guestfs_initrd_cat_args {
  string initrdpath<>;
  string filename<>;
};

struct guestfs_initrd_cat_ret {
  opaque content<>;
};

enum guestfs_procedure {
  GUESTFS_PROC_MOUNT = 1,
  GUESTFS_PROC_SYNC = 2,
  GUESTFS_PROC_TOUCH = 3,
  GUESTFS_PROC_CAT = 4,
  GUESTFS_PROC_LL = 5,
  GUESTFS_PROC_LS = 6,
  GUESTFS_PROC_LIST_DEVICES = 7,
  GUESTFS_PROC_LIST_PARTITIONS = 8,
  GUESTFS_PROC_PVS = 9,
  GUESTFS_PROC_VGS = 10,
  GUESTFS_PROC_LVS = 11,
  GUESTFS_PROC_PVS_FULL = 12,
  GUESTFS_PROC_VGS_FULL = 13,
  GUESTFS_PROC_LVS_FULL = 14,
  GUESTFS_PROC_READ_LINES = 15,
  GUESTFS_PROC_AUG_INIT = 16,
  GUESTFS_PROC_AUG_CLOSE = 26,
  GUESTFS_PROC_AUG_DEFVAR = 17,
  GUESTFS_PROC_AUG_DEFNODE = 18,
  GUESTFS_PROC_AUG_GET = 19,
  GUESTFS_PROC_AUG_SET = 20,
  GUESTFS_PROC_AUG_INSERT = 21,
  GUESTFS_PROC_AUG_RM = 22,
  GUESTFS_PROC_AUG_MV = 23,
  GUESTFS_PROC_AUG_MATCH = 24,
  GUESTFS_PROC_AUG_SAVE = 25,
  GUESTFS_PROC_AUG_LOAD = 27,
  GUESTFS_PROC_AUG_LS = 28,
  GUESTFS_PROC_RM = 29,
  GUESTFS_PROC_RMDIR = 30,
  GUESTFS_PROC_RM_RF = 31,
  GUESTFS_PROC_MKDIR = 32,
  GUESTFS_PROC_MKDIR_P = 33,
  GUESTFS_PROC_CHMOD = 34,
  GUESTFS_PROC_CHOWN = 35,
  GUESTFS_PROC_EXISTS = 36,
  GUESTFS_PROC_IS_FILE = 37,
  GUESTFS_PROC_IS_DIR = 38,
  GUESTFS_PROC_PVCREATE = 39,
  GUESTFS_PROC_VGCREATE = 40,
  GUESTFS_PROC_LVCREATE = 41,
  GUESTFS_PROC_MKFS = 42,
  GUESTFS_PROC_SFDISK = 43,
  GUESTFS_PROC_WRITE_FILE = 44,
  GUESTFS_PROC_UMOUNT = 45,
  GUESTFS_PROC_MOUNTS = 46,
  GUESTFS_PROC_UMOUNT_ALL = 47,
  GUESTFS_PROC_LVM_REMOVE_ALL = 48,
  GUESTFS_PROC_FILE = 49,
  GUESTFS_PROC_COMMAND = 50,
  GUESTFS_PROC_COMMAND_LINES = 51,
  GUESTFS_PROC_STAT = 52,
  GUESTFS_PROC_LSTAT = 53,
  GUESTFS_PROC_STATVFS = 54,
  GUESTFS_PROC_TUNE2FS_L = 55,
  GUESTFS_PROC_BLOCKDEV_SETRO = 56,
  GUESTFS_PROC_BLOCKDEV_SETRW = 57,
  GUESTFS_PROC_BLOCKDEV_GETRO = 58,
  GUESTFS_PROC_BLOCKDEV_GETSS = 59,
  GUESTFS_PROC_BLOCKDEV_GETBSZ = 60,
  GUESTFS_PROC_BLOCKDEV_SETBSZ = 61,
  GUESTFS_PROC_BLOCKDEV_GETSZ = 62,
  GUESTFS_PROC_BLOCKDEV_GETSIZE64 = 63,
  GUESTFS_PROC_BLOCKDEV_FLUSHBUFS = 64,
  GUESTFS_PROC_BLOCKDEV_REREADPT = 65,
  GUESTFS_PROC_UPLOAD = 66,
  GUESTFS_PROC_DOWNLOAD = 67,
  GUESTFS_PROC_CHECKSUM = 68,
  GUESTFS_PROC_TAR_IN = 69,
  GUESTFS_PROC_TAR_OUT = 70,
  GUESTFS_PROC_TGZ_IN = 71,
  GUESTFS_PROC_TGZ_OUT = 72,
  GUESTFS_PROC_MOUNT_RO = 73,
  GUESTFS_PROC_MOUNT_OPTIONS = 74,
  GUESTFS_PROC_MOUNT_VFS = 75,
  GUESTFS_PROC_DEBUG = 76,
  GUESTFS_PROC_LVREMOVE = 77,
  GUESTFS_PROC_VGREMOVE = 78,
  GUESTFS_PROC_PVREMOVE = 79,
  GUESTFS_PROC_SET_E2LABEL = 80,
  GUESTFS_PROC_GET_E2LABEL = 81,
  GUESTFS_PROC_SET_E2UUID = 82,
  GUESTFS_PROC_GET_E2UUID = 83,
  GUESTFS_PROC_FSCK = 84,
  GUESTFS_PROC_ZERO = 85,
  GUESTFS_PROC_GRUB_INSTALL = 86,
  GUESTFS_PROC_CP = 87,
  GUESTFS_PROC_CP_A = 88,
  GUESTFS_PROC_MV = 89,
  GUESTFS_PROC_DROP_CACHES = 90,
  GUESTFS_PROC_DMESG = 91,
  GUESTFS_PROC_PING_DAEMON = 92,
  GUESTFS_PROC_EQUAL = 93,
  GUESTFS_PROC_STRINGS = 94,
  GUESTFS_PROC_STRINGS_E = 95,
  GUESTFS_PROC_HEXDUMP = 96,
  GUESTFS_PROC_ZEROFREE = 97,
  GUESTFS_PROC_PVRESIZE = 98,
  GUESTFS_PROC_SFDISK_N = 99,
  GUESTFS_PROC_SFDISK_L = 100,
  GUESTFS_PROC_SFDISK_KERNEL_GEOMETRY = 101,
  GUESTFS_PROC_SFDISK_DISK_GEOMETRY = 102,
  GUESTFS_PROC_VG_ACTIVATE_ALL = 103,
  GUESTFS_PROC_VG_ACTIVATE = 104,
  GUESTFS_PROC_LVRESIZE = 105,
  GUESTFS_PROC_RESIZE2FS = 106,
  GUESTFS_PROC_FIND = 107,
  GUESTFS_PROC_E2FSCK_F = 108,
  GUESTFS_PROC_SLEEP = 109,
  GUESTFS_PROC_NTFS_3G_PROBE = 110,
  GUESTFS_PROC_SH = 111,
  GUESTFS_PROC_SH_LINES = 112,
  GUESTFS_PROC_GLOB_EXPAND = 113,
  GUESTFS_PROC_SCRUB_DEVICE = 114,
  GUESTFS_PROC_SCRUB_FILE = 115,
  GUESTFS_PROC_SCRUB_FREESPACE = 116,
  GUESTFS_PROC_MKDTEMP = 117,
  GUESTFS_PROC_WC_L = 118,
  GUESTFS_PROC_WC_W = 119,
  GUESTFS_PROC_WC_C = 120,
  GUESTFS_PROC_HEAD = 121,
  GUESTFS_PROC_HEAD_N = 122,
  GUESTFS_PROC_TAIL = 123,
  GUESTFS_PROC_TAIL_N = 124,
  GUESTFS_PROC_DF = 125,
  GUESTFS_PROC_DF_H = 126,
  GUESTFS_PROC_DU = 127,
  GUESTFS_PROC_INITRD_LIST = 128,
  GUESTFS_PROC_MOUNT_LOOP = 129,
  GUESTFS_PROC_MKSWAP = 130,
  GUESTFS_PROC_MKSWAP_L = 131,
  GUESTFS_PROC_MKSWAP_U = 132,
  GUESTFS_PROC_MKNOD = 133,
  GUESTFS_PROC_MKFIFO = 134,
  GUESTFS_PROC_MKNOD_B = 135,
  GUESTFS_PROC_MKNOD_C = 136,
  GUESTFS_PROC_UMASK = 137,
  GUESTFS_PROC_READDIR = 138,
  GUESTFS_PROC_SFDISKM = 139,
  GUESTFS_PROC_ZFILE = 140,
  GUESTFS_PROC_GETXATTRS = 141,
  GUESTFS_PROC_LGETXATTRS = 142,
  GUESTFS_PROC_SETXATTR = 143,
  GUESTFS_PROC_LSETXATTR = 144,
  GUESTFS_PROC_REMOVEXATTR = 145,
  GUESTFS_PROC_LREMOVEXATTR = 146,
  GUESTFS_PROC_MOUNTPOINTS = 147,
  GUESTFS_PROC_MKMOUNTPOINT = 148,
  GUESTFS_PROC_RMMOUNTPOINT = 149,
  GUESTFS_PROC_READ_FILE = 150,
  GUESTFS_PROC_GREP = 151,
  GUESTFS_PROC_EGREP = 152,
  GUESTFS_PROC_FGREP = 153,
  GUESTFS_PROC_GREPI = 154,
  GUESTFS_PROC_EGREPI = 155,
  GUESTFS_PROC_FGREPI = 156,
  GUESTFS_PROC_ZGREP = 157,
  GUESTFS_PROC_ZEGREP = 158,
  GUESTFS_PROC_ZFGREP = 159,
  GUESTFS_PROC_ZGREPI = 160,
  GUESTFS_PROC_ZEGREPI = 161,
  GUESTFS_PROC_ZFGREPI = 162,
  GUESTFS_PROC_REALPATH = 163,
  GUESTFS_PROC_LN = 164,
  GUESTFS_PROC_LN_F = 165,
  GUESTFS_PROC_LN_S = 166,
  GUESTFS_PROC_LN_SF = 167,
  GUESTFS_PROC_READLINK = 168,
  GUESTFS_PROC_FALLOCATE = 169,
  GUESTFS_PROC_SWAPON_DEVICE = 170,
  GUESTFS_PROC_SWAPOFF_DEVICE = 171,
  GUESTFS_PROC_SWAPON_FILE = 172,
  GUESTFS_PROC_SWAPOFF_FILE = 173,
  GUESTFS_PROC_SWAPON_LABEL = 174,
  GUESTFS_PROC_SWAPOFF_LABEL = 175,
  GUESTFS_PROC_SWAPON_UUID = 176,
  GUESTFS_PROC_SWAPOFF_UUID = 177,
  GUESTFS_PROC_MKSWAP_FILE = 178,
  GUESTFS_PROC_INOTIFY_INIT = 179,
  GUESTFS_PROC_INOTIFY_ADD_WATCH = 180,
  GUESTFS_PROC_INOTIFY_RM_WATCH = 181,
  GUESTFS_PROC_INOTIFY_READ = 182,
  GUESTFS_PROC_INOTIFY_FILES = 183,
  GUESTFS_PROC_INOTIFY_CLOSE = 184,
  GUESTFS_PROC_SETCON = 185,
  GUESTFS_PROC_GETCON = 186,
  GUESTFS_PROC_MKFS_B = 187,
  GUESTFS_PROC_MKE2JOURNAL = 188,
  GUESTFS_PROC_MKE2JOURNAL_L = 189,
  GUESTFS_PROC_MKE2JOURNAL_U = 190,
  GUESTFS_PROC_MKE2FS_J = 191,
  GUESTFS_PROC_MKE2FS_JL = 192,
  GUESTFS_PROC_MKE2FS_JU = 193,
  GUESTFS_PROC_MODPROBE = 194,
  GUESTFS_PROC_ECHO_DAEMON = 195,
  GUESTFS_PROC_FIND0 = 196,
  GUESTFS_PROC_CASE_SENSITIVE_PATH = 197,
  GUESTFS_PROC_VFS_TYPE = 198,
  GUESTFS_PROC_TRUNCATE = 199,
  GUESTFS_PROC_TRUNCATE_SIZE = 200,
  GUESTFS_PROC_UTIMENS = 201,
  GUESTFS_PROC_MKDIR_MODE = 202,
  GUESTFS_PROC_LCHOWN = 203,
  GUESTFS_PROC_LSTATLIST = 204,
  GUESTFS_PROC_LXATTRLIST = 205,
  GUESTFS_PROC_READLINKLIST = 206,
  GUESTFS_PROC_PREAD = 207,
  GUESTFS_PROC_PART_INIT = 208,
  GUESTFS_PROC_PART_ADD = 209,
  GUESTFS_PROC_PART_DISK = 210,
  GUESTFS_PROC_PART_SET_BOOTABLE = 211,
  GUESTFS_PROC_PART_SET_NAME = 212,
  GUESTFS_PROC_PART_LIST = 213,
  GUESTFS_PROC_PART_GET_PARTTYPE = 214,
  GUESTFS_PROC_FILL = 215,
  GUESTFS_PROC_AVAILABLE = 216,
  GUESTFS_PROC_DD = 217,
  GUESTFS_PROC_FILESIZE = 218,
  GUESTFS_PROC_LVRENAME = 219,
  GUESTFS_PROC_VGRENAME = 220,
  GUESTFS_PROC_INITRD_CAT = 221,
  GUESTFS_PROC_NR_PROCS
};

const GUESTFS_MESSAGE_MAX = 4194304;

/* The communication protocol is now documented in the guestfs(3)
 * manpage.
 */

const GUESTFS_PROGRAM = 0x2000F5F5;
const GUESTFS_PROTOCOL_VERSION = 1;

/* These constants must be larger than any possible message length. */
const GUESTFS_LAUNCH_FLAG = 0xf5f55ff5;
const GUESTFS_CANCEL_FLAG = 0xffffeeee;

enum guestfs_message_direction {
  GUESTFS_DIRECTION_CALL = 0,        /* client -> daemon */
  GUESTFS_DIRECTION_REPLY = 1        /* daemon -> client */
};

enum guestfs_message_status {
  GUESTFS_STATUS_OK = 0,
  GUESTFS_STATUS_ERROR = 1
};

const GUESTFS_ERROR_LEN = 256;

struct guestfs_message_error {
  string error_message<GUESTFS_ERROR_LEN>;
};

struct guestfs_message_header {
  unsigned prog;                     /* GUESTFS_PROGRAM */
  unsigned vers;                     /* GUESTFS_PROTOCOL_VERSION */
  guestfs_procedure proc;            /* GUESTFS_PROC_x */
  guestfs_message_direction direction;
  unsigned serial;                   /* message serial number */
  guestfs_message_status status;
};

const GUESTFS_MAX_CHUNK_SIZE = 8192;

struct guestfs_chunk {
  int cancel;			     /* if non-zero, transfer is cancelled */
  /* data size is 0 bytes if the transfer has finished successfully */
  opaque data<GUESTFS_MAX_CHUNK_SIZE>;
};
