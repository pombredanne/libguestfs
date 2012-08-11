/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -t cmds-gperf.gperf  */
/* Computed positions: -k'1-14,17' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 29 "cmds-gperf.gperf"


#include <config.h>

#include <stdlib.h>
#include <string.h>

#include "cmds-gperf.h"

extern struct command_entry add_cdrom_cmd_entry;
extern struct command_entry add_domain_cmd_entry;
extern struct command_entry add_drive_cmd_entry;
extern struct command_entry add_drive_opts_cmd_entry;
extern struct command_entry add_drive_ro_cmd_entry;
extern struct command_entry add_drive_ro_with_if_cmd_entry;
extern struct command_entry add_drive_with_if_cmd_entry;
extern struct command_entry alloc_cmd_entry;
extern struct command_entry aug_clear_cmd_entry;
extern struct command_entry aug_close_cmd_entry;
extern struct command_entry aug_defnode_cmd_entry;
extern struct command_entry aug_defvar_cmd_entry;
extern struct command_entry aug_get_cmd_entry;
extern struct command_entry aug_init_cmd_entry;
extern struct command_entry aug_insert_cmd_entry;
extern struct command_entry aug_load_cmd_entry;
extern struct command_entry aug_ls_cmd_entry;
extern struct command_entry aug_match_cmd_entry;
extern struct command_entry aug_mv_cmd_entry;
extern struct command_entry aug_rm_cmd_entry;
extern struct command_entry aug_save_cmd_entry;
extern struct command_entry aug_set_cmd_entry;
extern struct command_entry available_cmd_entry;
extern struct command_entry available_all_groups_cmd_entry;
extern struct command_entry base64_in_cmd_entry;
extern struct command_entry base64_out_cmd_entry;
extern struct command_entry blkid_cmd_entry;
extern struct command_entry blockdev_flushbufs_cmd_entry;
extern struct command_entry blockdev_getbsz_cmd_entry;
extern struct command_entry blockdev_getro_cmd_entry;
extern struct command_entry blockdev_getsize64_cmd_entry;
extern struct command_entry blockdev_getss_cmd_entry;
extern struct command_entry blockdev_getsz_cmd_entry;
extern struct command_entry blockdev_rereadpt_cmd_entry;
extern struct command_entry blockdev_setbsz_cmd_entry;
extern struct command_entry blockdev_setro_cmd_entry;
extern struct command_entry blockdev_setrw_cmd_entry;
extern struct command_entry btrfs_device_add_cmd_entry;
extern struct command_entry btrfs_device_delete_cmd_entry;
extern struct command_entry btrfs_filesystem_balance_cmd_entry;
extern struct command_entry btrfs_filesystem_resize_cmd_entry;
extern struct command_entry btrfs_filesystem_sync_cmd_entry;
extern struct command_entry btrfs_fsck_cmd_entry;
extern struct command_entry btrfs_set_seeding_cmd_entry;
extern struct command_entry btrfs_subvolume_create_cmd_entry;
extern struct command_entry btrfs_subvolume_delete_cmd_entry;
extern struct command_entry btrfs_subvolume_list_cmd_entry;
extern struct command_entry btrfs_subvolume_set_default_cmd_entry;
extern struct command_entry btrfs_subvolume_snapshot_cmd_entry;
extern struct command_entry case_sensitive_path_cmd_entry;
extern struct command_entry cat_cmd_entry;
extern struct command_entry checksum_cmd_entry;
extern struct command_entry checksum_device_cmd_entry;
extern struct command_entry checksums_out_cmd_entry;
extern struct command_entry chmod_cmd_entry;
extern struct command_entry chown_cmd_entry;
extern struct command_entry command_cmd_entry;
extern struct command_entry command_lines_cmd_entry;
extern struct command_entry compress_device_out_cmd_entry;
extern struct command_entry compress_out_cmd_entry;
extern struct command_entry config_cmd_entry;
extern struct command_entry copy_device_to_device_cmd_entry;
extern struct command_entry copy_device_to_file_cmd_entry;
extern struct command_entry copy_file_to_device_cmd_entry;
extern struct command_entry copy_file_to_file_cmd_entry;
extern struct command_entry copy_in_cmd_entry;
extern struct command_entry copy_out_cmd_entry;
extern struct command_entry copy_size_cmd_entry;
extern struct command_entry cp_cmd_entry;
extern struct command_entry cp_a_cmd_entry;
extern struct command_entry dd_cmd_entry;
extern struct command_entry debug_cmd_entry;
extern struct command_entry debug_cmdline_cmd_entry;
extern struct command_entry debug_drives_cmd_entry;
extern struct command_entry debug_upload_cmd_entry;
extern struct command_entry delete_event_cmd_entry;
extern struct command_entry device_index_cmd_entry;
extern struct command_entry df_cmd_entry;
extern struct command_entry df_h_cmd_entry;
extern struct command_entry display_cmd_entry;
extern struct command_entry dmesg_cmd_entry;
extern struct command_entry download_cmd_entry;
extern struct command_entry download_offset_cmd_entry;
extern struct command_entry drop_caches_cmd_entry;
extern struct command_entry du_cmd_entry;
extern struct command_entry e2fsck_cmd_entry;
extern struct command_entry e2fsck_f_cmd_entry;
extern struct command_entry echo_cmd_entry;
extern struct command_entry echo_daemon_cmd_entry;
extern struct command_entry edit_cmd_entry;
extern struct command_entry egrep_cmd_entry;
extern struct command_entry egrepi_cmd_entry;
extern struct command_entry equal_cmd_entry;
extern struct command_entry event_cmd_entry;
extern struct command_entry exists_cmd_entry;
extern struct command_entry fallocate_cmd_entry;
extern struct command_entry fallocate64_cmd_entry;
extern struct command_entry fgrep_cmd_entry;
extern struct command_entry fgrepi_cmd_entry;
extern struct command_entry file_cmd_entry;
extern struct command_entry file_architecture_cmd_entry;
extern struct command_entry filesize_cmd_entry;
extern struct command_entry fill_cmd_entry;
extern struct command_entry fill_pattern_cmd_entry;
extern struct command_entry find_cmd_entry;
extern struct command_entry find0_cmd_entry;
extern struct command_entry findfs_label_cmd_entry;
extern struct command_entry findfs_uuid_cmd_entry;
extern struct command_entry fsck_cmd_entry;
extern struct command_entry get_append_cmd_entry;
extern struct command_entry get_attach_method_cmd_entry;
extern struct command_entry get_autosync_cmd_entry;
extern struct command_entry get_direct_cmd_entry;
extern struct command_entry get_e2attrs_cmd_entry;
extern struct command_entry get_e2generation_cmd_entry;
extern struct command_entry get_e2label_cmd_entry;
extern struct command_entry get_e2uuid_cmd_entry;
extern struct command_entry get_memsize_cmd_entry;
extern struct command_entry get_network_cmd_entry;
extern struct command_entry get_path_cmd_entry;
extern struct command_entry get_pgroup_cmd_entry;
extern struct command_entry get_pid_cmd_entry;
extern struct command_entry get_qemu_cmd_entry;
extern struct command_entry get_recovery_proc_cmd_entry;
extern struct command_entry get_selinux_cmd_entry;
extern struct command_entry get_smp_cmd_entry;
extern struct command_entry get_state_cmd_entry;
extern struct command_entry get_trace_cmd_entry;
extern struct command_entry get_umask_cmd_entry;
extern struct command_entry get_verbose_cmd_entry;
extern struct command_entry getcon_cmd_entry;
extern struct command_entry getxattr_cmd_entry;
extern struct command_entry getxattrs_cmd_entry;
extern struct command_entry glob_cmd_entry;
extern struct command_entry glob_expand_cmd_entry;
extern struct command_entry grep_cmd_entry;
extern struct command_entry grepi_cmd_entry;
extern struct command_entry grub_install_cmd_entry;
extern struct command_entry head_cmd_entry;
extern struct command_entry head_n_cmd_entry;
extern struct command_entry hexdump_cmd_entry;
extern struct command_entry hexedit_cmd_entry;
extern struct command_entry initrd_cat_cmd_entry;
extern struct command_entry initrd_list_cmd_entry;
extern struct command_entry inotify_add_watch_cmd_entry;
extern struct command_entry inotify_close_cmd_entry;
extern struct command_entry inotify_files_cmd_entry;
extern struct command_entry inotify_init_cmd_entry;
extern struct command_entry inotify_read_cmd_entry;
extern struct command_entry inotify_rm_watch_cmd_entry;
extern struct command_entry inspect_get_arch_cmd_entry;
extern struct command_entry inspect_get_distro_cmd_entry;
extern struct command_entry inspect_get_drive_mappings_cmd_entry;
extern struct command_entry inspect_get_filesystems_cmd_entry;
extern struct command_entry inspect_get_format_cmd_entry;
extern struct command_entry inspect_get_hostname_cmd_entry;
extern struct command_entry inspect_get_icon_cmd_entry;
extern struct command_entry inspect_get_major_version_cmd_entry;
extern struct command_entry inspect_get_minor_version_cmd_entry;
extern struct command_entry inspect_get_mountpoints_cmd_entry;
extern struct command_entry inspect_get_package_format_cmd_entry;
extern struct command_entry inspect_get_package_management_cmd_entry;
extern struct command_entry inspect_get_product_name_cmd_entry;
extern struct command_entry inspect_get_product_variant_cmd_entry;
extern struct command_entry inspect_get_roots_cmd_entry;
extern struct command_entry inspect_get_type_cmd_entry;
extern struct command_entry inspect_get_windows_current_control_set_cmd_entry;
extern struct command_entry inspect_get_windows_systemroot_cmd_entry;
extern struct command_entry inspect_is_live_cmd_entry;
extern struct command_entry inspect_is_multipart_cmd_entry;
extern struct command_entry inspect_is_netinst_cmd_entry;
extern struct command_entry inspect_list_applications_cmd_entry;
extern struct command_entry inspect_os_cmd_entry;
extern struct command_entry is_blockdev_cmd_entry;
extern struct command_entry is_busy_cmd_entry;
extern struct command_entry is_chardev_cmd_entry;
extern struct command_entry is_config_cmd_entry;
extern struct command_entry is_dir_cmd_entry;
extern struct command_entry is_fifo_cmd_entry;
extern struct command_entry is_file_cmd_entry;
extern struct command_entry is_launching_cmd_entry;
extern struct command_entry is_lv_cmd_entry;
extern struct command_entry is_ready_cmd_entry;
extern struct command_entry is_socket_cmd_entry;
extern struct command_entry is_symlink_cmd_entry;
extern struct command_entry is_zero_cmd_entry;
extern struct command_entry is_zero_device_cmd_entry;
extern struct command_entry isoinfo_cmd_entry;
extern struct command_entry isoinfo_device_cmd_entry;
extern struct command_entry kill_subprocess_cmd_entry;
extern struct command_entry launch_cmd_entry;
extern struct command_entry lcd_cmd_entry;
extern struct command_entry lchown_cmd_entry;
extern struct command_entry lgetxattr_cmd_entry;
extern struct command_entry lgetxattrs_cmd_entry;
extern struct command_entry list_9p_cmd_entry;
extern struct command_entry list_devices_cmd_entry;
extern struct command_entry list_dm_devices_cmd_entry;
extern struct command_entry list_events_cmd_entry;
extern struct command_entry list_filesystems_cmd_entry;
extern struct command_entry list_md_devices_cmd_entry;
extern struct command_entry list_partitions_cmd_entry;
extern struct command_entry ll_cmd_entry;
extern struct command_entry llz_cmd_entry;
extern struct command_entry ln_cmd_entry;
extern struct command_entry ln_f_cmd_entry;
extern struct command_entry ln_s_cmd_entry;
extern struct command_entry ln_sf_cmd_entry;
extern struct command_entry lremovexattr_cmd_entry;
extern struct command_entry ls_cmd_entry;
extern struct command_entry lsetxattr_cmd_entry;
extern struct command_entry lstat_cmd_entry;
extern struct command_entry lstatlist_cmd_entry;
extern struct command_entry luks_add_key_cmd_entry;
extern struct command_entry luks_close_cmd_entry;
extern struct command_entry luks_format_cmd_entry;
extern struct command_entry luks_format_cipher_cmd_entry;
extern struct command_entry luks_kill_slot_cmd_entry;
extern struct command_entry luks_open_cmd_entry;
extern struct command_entry luks_open_ro_cmd_entry;
extern struct command_entry lvcreate_cmd_entry;
extern struct command_entry lvcreate_free_cmd_entry;
extern struct command_entry lvm_canonical_lv_name_cmd_entry;
extern struct command_entry lvm_clear_filter_cmd_entry;
extern struct command_entry lvm_remove_all_cmd_entry;
extern struct command_entry lvm_set_filter_cmd_entry;
extern struct command_entry lvremove_cmd_entry;
extern struct command_entry lvrename_cmd_entry;
extern struct command_entry lvresize_cmd_entry;
extern struct command_entry lvresize_free_cmd_entry;
extern struct command_entry lvs_cmd_entry;
extern struct command_entry lvs_full_cmd_entry;
extern struct command_entry lvuuid_cmd_entry;
extern struct command_entry lxattrlist_cmd_entry;
extern struct command_entry man_cmd_entry;
extern struct command_entry md_create_cmd_entry;
extern struct command_entry md_detail_cmd_entry;
extern struct command_entry md_stat_cmd_entry;
extern struct command_entry md_stop_cmd_entry;
extern struct command_entry mkdir_cmd_entry;
extern struct command_entry mkdir_mode_cmd_entry;
extern struct command_entry mkdir_p_cmd_entry;
extern struct command_entry mkdtemp_cmd_entry;
extern struct command_entry mke2fs_J_cmd_entry;
extern struct command_entry mke2fs_JL_cmd_entry;
extern struct command_entry mke2fs_JU_cmd_entry;
extern struct command_entry mke2journal_cmd_entry;
extern struct command_entry mke2journal_L_cmd_entry;
extern struct command_entry mke2journal_U_cmd_entry;
extern struct command_entry mkfifo_cmd_entry;
extern struct command_entry mkfs_cmd_entry;
extern struct command_entry mkfs_b_cmd_entry;
extern struct command_entry mkfs_btrfs_cmd_entry;
extern struct command_entry mkfs_opts_cmd_entry;
extern struct command_entry mkmountpoint_cmd_entry;
extern struct command_entry mknod_cmd_entry;
extern struct command_entry mknod_b_cmd_entry;
extern struct command_entry mknod_c_cmd_entry;
extern struct command_entry mkswap_cmd_entry;
extern struct command_entry mkswap_L_cmd_entry;
extern struct command_entry mkswap_U_cmd_entry;
extern struct command_entry mkswap_file_cmd_entry;
extern struct command_entry modprobe_cmd_entry;
extern struct command_entry more_cmd_entry;
extern struct command_entry mount_cmd_entry;
extern struct command_entry mount_9p_cmd_entry;
extern struct command_entry mount_local_cmd_entry;
extern struct command_entry mount_local_run_cmd_entry;
extern struct command_entry mount_loop_cmd_entry;
extern struct command_entry mount_options_cmd_entry;
extern struct command_entry mount_ro_cmd_entry;
extern struct command_entry mount_vfs_cmd_entry;
extern struct command_entry mountpoints_cmd_entry;
extern struct command_entry mounts_cmd_entry;
extern struct command_entry mv_cmd_entry;
extern struct command_entry nr_devices_cmd_entry;
extern struct command_entry ntfs_3g_probe_cmd_entry;
extern struct command_entry ntfsclone_in_cmd_entry;
extern struct command_entry ntfsclone_out_cmd_entry;
extern struct command_entry ntfsfix_cmd_entry;
extern struct command_entry ntfsresize_cmd_entry;
extern struct command_entry ntfsresize_opts_cmd_entry;
extern struct command_entry ntfsresize_size_cmd_entry;
extern struct command_entry part_add_cmd_entry;
extern struct command_entry part_del_cmd_entry;
extern struct command_entry part_disk_cmd_entry;
extern struct command_entry part_get_bootable_cmd_entry;
extern struct command_entry part_get_mbr_id_cmd_entry;
extern struct command_entry part_get_parttype_cmd_entry;
extern struct command_entry part_init_cmd_entry;
extern struct command_entry part_list_cmd_entry;
extern struct command_entry part_set_bootable_cmd_entry;
extern struct command_entry part_set_mbr_id_cmd_entry;
extern struct command_entry part_set_name_cmd_entry;
extern struct command_entry part_to_dev_cmd_entry;
extern struct command_entry part_to_partnum_cmd_entry;
extern struct command_entry ping_daemon_cmd_entry;
extern struct command_entry pread_cmd_entry;
extern struct command_entry pread_device_cmd_entry;
extern struct command_entry pvcreate_cmd_entry;
extern struct command_entry pvremove_cmd_entry;
extern struct command_entry pvresize_cmd_entry;
extern struct command_entry pvresize_size_cmd_entry;
extern struct command_entry pvs_cmd_entry;
extern struct command_entry pvs_full_cmd_entry;
extern struct command_entry pvuuid_cmd_entry;
extern struct command_entry pwrite_cmd_entry;
extern struct command_entry pwrite_device_cmd_entry;
extern struct command_entry read_file_cmd_entry;
extern struct command_entry read_lines_cmd_entry;
extern struct command_entry readdir_cmd_entry;
extern struct command_entry readlink_cmd_entry;
extern struct command_entry readlinklist_cmd_entry;
extern struct command_entry realpath_cmd_entry;
extern struct command_entry removexattr_cmd_entry;
extern struct command_entry reopen_cmd_entry;
extern struct command_entry resize2fs_cmd_entry;
extern struct command_entry resize2fs_M_cmd_entry;
extern struct command_entry resize2fs_size_cmd_entry;
extern struct command_entry rm_cmd_entry;
extern struct command_entry rm_rf_cmd_entry;
extern struct command_entry rmdir_cmd_entry;
extern struct command_entry rmmountpoint_cmd_entry;
extern struct command_entry scrub_device_cmd_entry;
extern struct command_entry scrub_file_cmd_entry;
extern struct command_entry scrub_freespace_cmd_entry;
extern struct command_entry set_append_cmd_entry;
extern struct command_entry set_attach_method_cmd_entry;
extern struct command_entry set_autosync_cmd_entry;
extern struct command_entry set_direct_cmd_entry;
extern struct command_entry set_e2attrs_cmd_entry;
extern struct command_entry set_e2generation_cmd_entry;
extern struct command_entry set_e2label_cmd_entry;
extern struct command_entry set_e2uuid_cmd_entry;
extern struct command_entry set_label_cmd_entry;
extern struct command_entry set_memsize_cmd_entry;
extern struct command_entry set_network_cmd_entry;
extern struct command_entry set_path_cmd_entry;
extern struct command_entry set_pgroup_cmd_entry;
extern struct command_entry set_qemu_cmd_entry;
extern struct command_entry set_recovery_proc_cmd_entry;
extern struct command_entry set_selinux_cmd_entry;
extern struct command_entry set_smp_cmd_entry;
extern struct command_entry set_trace_cmd_entry;
extern struct command_entry set_verbose_cmd_entry;
extern struct command_entry setcon_cmd_entry;
extern struct command_entry setenv_cmd_entry;
extern struct command_entry setxattr_cmd_entry;
extern struct command_entry sfdisk_cmd_entry;
extern struct command_entry sfdiskM_cmd_entry;
extern struct command_entry sfdisk_N_cmd_entry;
extern struct command_entry sfdisk_disk_geometry_cmd_entry;
extern struct command_entry sfdisk_kernel_geometry_cmd_entry;
extern struct command_entry sfdisk_l_cmd_entry;
extern struct command_entry sh_cmd_entry;
extern struct command_entry sh_lines_cmd_entry;
extern struct command_entry shutdown_cmd_entry;
extern struct command_entry sleep_cmd_entry;
extern struct command_entry sparse_cmd_entry;
extern struct command_entry stat_cmd_entry;
extern struct command_entry statvfs_cmd_entry;
extern struct command_entry strings_cmd_entry;
extern struct command_entry strings_e_cmd_entry;
extern struct command_entry supported_cmd_entry;
extern struct command_entry swapoff_device_cmd_entry;
extern struct command_entry swapoff_file_cmd_entry;
extern struct command_entry swapoff_label_cmd_entry;
extern struct command_entry swapoff_uuid_cmd_entry;
extern struct command_entry swapon_device_cmd_entry;
extern struct command_entry swapon_file_cmd_entry;
extern struct command_entry swapon_label_cmd_entry;
extern struct command_entry swapon_uuid_cmd_entry;
extern struct command_entry sync_cmd_entry;
extern struct command_entry tail_cmd_entry;
extern struct command_entry tail_n_cmd_entry;
extern struct command_entry tar_in_cmd_entry;
extern struct command_entry tar_out_cmd_entry;
extern struct command_entry tgz_in_cmd_entry;
extern struct command_entry tgz_out_cmd_entry;
extern struct command_entry time_cmd_entry;
extern struct command_entry touch_cmd_entry;
extern struct command_entry truncate_cmd_entry;
extern struct command_entry truncate_size_cmd_entry;
extern struct command_entry tune2fs_cmd_entry;
extern struct command_entry tune2fs_l_cmd_entry;
extern struct command_entry txz_in_cmd_entry;
extern struct command_entry txz_out_cmd_entry;
extern struct command_entry umask_cmd_entry;
extern struct command_entry umount_cmd_entry;
extern struct command_entry umount_all_cmd_entry;
extern struct command_entry umount_local_cmd_entry;
extern struct command_entry unsetenv_cmd_entry;
extern struct command_entry upload_cmd_entry;
extern struct command_entry upload_offset_cmd_entry;
extern struct command_entry utimens_cmd_entry;
extern struct command_entry version_cmd_entry;
extern struct command_entry vfs_label_cmd_entry;
extern struct command_entry vfs_type_cmd_entry;
extern struct command_entry vfs_uuid_cmd_entry;
extern struct command_entry vg_activate_cmd_entry;
extern struct command_entry vg_activate_all_cmd_entry;
extern struct command_entry vgcreate_cmd_entry;
extern struct command_entry vglvuuids_cmd_entry;
extern struct command_entry vgmeta_cmd_entry;
extern struct command_entry vgpvuuids_cmd_entry;
extern struct command_entry vgremove_cmd_entry;
extern struct command_entry vgrename_cmd_entry;
extern struct command_entry vgs_cmd_entry;
extern struct command_entry vgs_full_cmd_entry;
extern struct command_entry vgscan_cmd_entry;
extern struct command_entry vguuid_cmd_entry;
extern struct command_entry wc_c_cmd_entry;
extern struct command_entry wc_l_cmd_entry;
extern struct command_entry wc_w_cmd_entry;
extern struct command_entry wipefs_cmd_entry;
extern struct command_entry write_cmd_entry;
extern struct command_entry write_append_cmd_entry;
extern struct command_entry write_file_cmd_entry;
extern struct command_entry zegrep_cmd_entry;
extern struct command_entry zegrepi_cmd_entry;
extern struct command_entry zero_cmd_entry;
extern struct command_entry zero_device_cmd_entry;
extern struct command_entry zero_free_space_cmd_entry;
extern struct command_entry zerofree_cmd_entry;
extern struct command_entry zfgrep_cmd_entry;
extern struct command_entry zfgrepi_cmd_entry;
extern struct command_entry zfile_cmd_entry;
extern struct command_entry zgrep_cmd_entry;
extern struct command_entry zgrepi_cmd_entry;
#line 469 "cmds-gperf.gperf"
struct command_table;

#define TOTAL_KEYWORDS 740
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 39
#define MIN_HASH_VALUE 17
#define MAX_HASH_VALUE 5296
/* maximum key range = 5280, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (register const char *s1, register const char *s2)
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297,    5,  410, 5297,    0, 5297,
       505,    0,   80, 5297,    0, 5297, 5297,   10,    0, 5297,
      5297, 5297, 5297, 5297, 5297,   35,  655,   15,  340,    0,
       575,   20,  933,    5,  920,  610,  250,  145,   30,   85,
         0, 1394,   25,    0,    0,    5,  405,  845,   65,  916,
       968,   35, 5297, 5297, 5297,    0,  450,   35,  655,   15,
       340,    0,  575,   20,  933,    5,  920,  610,  250,  145,
        30,   85,    0, 1394,   25,    0,    0,    5,  405,  845,
        65,  916,  968,   35, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297, 5297,
      5297, 5297, 5297, 5297, 5297, 5297, 5297
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
      case 15:
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]+1];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct command_table *
lookup_fish_command (register const char *str, register unsigned int len)
{
  static const struct command_table wordlist[] =
    {
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 603 "cmds-gperf.gperf"
      {"cp", &cp_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 685 "cmds-gperf.gperf"
      {"get_pid", &get_pid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 686 "cmds-gperf.gperf"
      {"get-pid", &get_pid_cmd_entry},
      {(char*)0},
#line 1106 "cmds-gperf.gperf"
      {"stat", &stat_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 710 "cmds-gperf.gperf"
      {"grep", &grep_cmd_entry},
#line 638 "cmds-gperf.gperf"
      {"egrep", &egrep_cmd_entry},
      {(char*)0}, {(char*)0},
#line 573 "cmds-gperf.gperf"
      {"cat", &cat_cmd_entry},
#line 604 "cmds-gperf.gperf"
      {"cp_a", &cp_a_cmd_entry},
#line 711 "cmds-gperf.gperf"
      {"grepi", &grepi_cmd_entry},
#line 639 "cmds-gperf.gperf"
      {"egrepi", &egrepi_cmd_entry},
      {(char*)0}, {(char*)0},
#line 605 "cmds-gperf.gperf"
      {"cp-a", &cp_a_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 815 "cmds-gperf.gperf"
      {"run", &launch_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1105 "cmds-gperf.gperf"
      {"sparse", &sparse_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 517 "cmds-gperf.gperf"
      {"aug_set", &aug_set_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 642 "cmds-gperf.gperf"
      {"exists", &exists_cmd_entry},
#line 518 "cmds-gperf.gperf"
      {"aug-set", &aug_set_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1083 "cmds-gperf.gperf"
      {"trace", &set_trace_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1108 "cmds-gperf.gperf"
      {"strings", &strings_cmd_entry},
      {(char*)0},
#line 1109 "cmds-gperf.gperf"
      {"strings_e", &strings_e_cmd_entry},
      {(char*)0}, {(char*)0},
#line 499 "cmds-gperf.gperf"
      {"aug_get", &aug_get_cmd_entry},
      {(char*)0},
#line 1110 "cmds-gperf.gperf"
      {"strings-e", &strings_e_cmd_entry},
      {(char*)0}, {(char*)0},
#line 500 "cmds-gperf.gperf"
      {"aug-get", &aug_get_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1132 "cmds-gperf.gperf"
      {"tar_in", &tar_in_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1133 "cmds-gperf.gperf"
      {"tar-in", &tar_in_cmd_entry},
      {(char*)0},
#line 775 "cmds-gperf.gperf"
      {"inspect_is_netinst", &inspect_is_netinst_cmd_entry},
      {(char*)0}, {(char*)0},
#line 747 "cmds-gperf.gperf"
      {"inspect_get_icon", &inspect_get_icon_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 776 "cmds-gperf.gperf"
      {"inspect-is-netinst", &inspect_is_netinst_cmd_entry},
      {(char*)0},
#line 1066 "cmds-gperf.gperf"
      {"set_pgroup", &set_pgroup_cmd_entry},
#line 748 "cmds-gperf.gperf"
      {"inspect-get-icon", &inspect_get_icon_cmd_entry},
      {(char*)0},
#line 1142 "cmds-gperf.gperf"
      {"truncate", &truncate_cmd_entry},
      {(char*)0},
#line 1067 "cmds-gperf.gperf"
      {"set-pgroup", &set_pgroup_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 759 "cmds-gperf.gperf"
      {"inspect_get_product_name", &inspect_get_product_name_cmd_entry},
#line 503 "cmds-gperf.gperf"
      {"aug_insert", &aug_insert_cmd_entry},
      {(char*)0},
#line 761 "cmds-gperf.gperf"
      {"inspect_get_product_variant", &inspect_get_product_variant_cmd_entry},
      {(char*)0}, {(char*)0},
#line 504 "cmds-gperf.gperf"
      {"aug-insert", &aug_insert_cmd_entry},
#line 1087 "cmds-gperf.gperf"
      {"setcon", &setcon_cmd_entry},
      {(char*)0},
#line 1089 "cmds-gperf.gperf"
      {"setxattr", &setxattr_cmd_entry},
#line 760 "cmds-gperf.gperf"
      {"inspect-get-product-name", &inspect_get_product_name_cmd_entry},
#line 683 "cmds-gperf.gperf"
      {"get_pgroup", &get_pgroup_cmd_entry},
#line 1068 "cmds-gperf.gperf"
      {"pgroup", &set_pgroup_cmd_entry},
#line 762 "cmds-gperf.gperf"
      {"inspect-get-product-variant", &inspect_get_product_variant_cmd_entry},
      {(char*)0}, {(char*)0},
#line 684 "cmds-gperf.gperf"
      {"get-pgroup", &get_pgroup_cmd_entry},
#line 1018 "cmds-gperf.gperf"
      {"reopen", &reopen_cmd_entry},
      {(char*)0},
#line 1080 "cmds-gperf.gperf"
      {"smp", &set_smp_cmd_entry},
      {(char*)0},
#line 779 "cmds-gperf.gperf"
      {"inspect_os", &inspect_os_cmd_entry},
#line 735 "cmds-gperf.gperf"
      {"inspect_get_arch", &inspect_get_arch_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1140 "cmds-gperf.gperf"
      {"time", &time_cmd_entry},
#line 780 "cmds-gperf.gperf"
      {"inspect-os", &inspect_os_cmd_entry},
#line 704 "cmds-gperf.gperf"
      {"getcon", &getcon_cmd_entry},
      {(char*)0},
#line 705 "cmds-gperf.gperf"
      {"getxattr", &getxattr_cmd_entry},
#line 706 "cmds-gperf.gperf"
      {"getxattrs", &getxattrs_cmd_entry},
      {(char*)0},
#line 736 "cmds-gperf.gperf"
      {"inspect-get-arch", &inspect_get_arch_cmd_entry},
#line 1134 "cmds-gperf.gperf"
      {"tar_out", &tar_out_cmd_entry},
      {(char*)0},
#line 978 "cmds-gperf.gperf"
      {"part_init", &part_init_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1135 "cmds-gperf.gperf"
      {"tar-out", &tar_out_cmd_entry},
      {(char*)0},
#line 979 "cmds-gperf.gperf"
      {"part-init", &part_init_cmd_entry},
#line 990 "cmds-gperf.gperf"
      {"part_to_partnum", &part_to_partnum_cmd_entry},
#line 755 "cmds-gperf.gperf"
      {"inspect_get_package_format", &inspect_get_package_format_cmd_entry},
#line 1024 "cmds-gperf.gperf"
      {"rm", &rm_cmd_entry},
      {(char*)0}, {(char*)0},
#line 757 "cmds-gperf.gperf"
      {"inspect_get_package_management", &inspect_get_package_management_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 991 "cmds-gperf.gperf"
      {"part-to-partnum", &part_to_partnum_cmd_entry},
#line 756 "cmds-gperf.gperf"
      {"inspect-get-package-format", &inspect_get_package_format_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 758 "cmds-gperf.gperf"
      {"inspect-get-package-management", &inspect_get_package_management_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 787 "cmds-gperf.gperf"
      {"is_config", &is_config_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1164 "cmds-gperf.gperf"
      {"utimens", &utimens_cmd_entry},
      {(char*)0},
#line 788 "cmds-gperf.gperf"
      {"is-config", &is_config_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 637 "cmds-gperf.gperf"
      {"emacs", &edit_cmd_entry},
      {(char*)0},
#line 763 "cmds-gperf.gperf"
      {"inspect_get_roots", &inspect_get_roots_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 764 "cmds-gperf.gperf"
      {"inspect-get-roots", &inspect_get_roots_cmd_entry},
#line 883 "cmds-gperf.gperf"
      {"man", &man_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 513 "cmds-gperf.gperf"
      {"aug_rm", &aug_rm_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 514 "cmds-gperf.gperf"
      {"aug-rm", &aug_rm_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 844 "cmds-gperf.gperf"
      {"ls", &ls_cmd_entry},
      {(char*)0},
#line 933 "cmds-gperf.gperf"
      {"less", &more_cmd_entry},
#line 1104 "cmds-gperf.gperf"
      {"sleep", &sleep_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 932 "cmds-gperf.gperf"
      {"more", &more_cmd_entry},
      {(char*)0},
#line 1075 "cmds-gperf.gperf"
      {"set_selinux", &set_selinux_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1076 "cmds-gperf.gperf"
      {"set-selinux", &set_selinux_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 934 "cmds-gperf.gperf"
      {"mount", &mount_cmd_entry},
#line 950 "cmds-gperf.gperf"
      {"mounts", &mounts_cmd_entry},
      {(char*)0},
#line 935 "cmds-gperf.gperf"
      {"mount_9p", &mount_9p_cmd_entry},
      {(char*)0},
#line 751 "cmds-gperf.gperf"
      {"inspect_get_minor_version", &inspect_get_minor_version_cmd_entry},
#line 1153 "cmds-gperf.gperf"
      {"umount", &umount_cmd_entry},
      {(char*)0},
#line 936 "cmds-gperf.gperf"
      {"mount-9p", &mount_9p_cmd_entry},
      {(char*)0}, {(char*)0},
#line 692 "cmds-gperf.gperf"
      {"get_selinux", &get_selinux_cmd_entry},
#line 836 "cmds-gperf.gperf"
      {"ln", &ln_cmd_entry},
      {(char*)0},
#line 839 "cmds-gperf.gperf"
      {"ln_s", &ln_s_cmd_entry},
#line 752 "cmds-gperf.gperf"
      {"inspect-get-minor-version", &inspect_get_minor_version_cmd_entry},
#line 693 "cmds-gperf.gperf"
      {"get-selinux", &get_selinux_cmd_entry},
      {(char*)0}, {(char*)0},
#line 840 "cmds-gperf.gperf"
      {"ln-s", &ln_s_cmd_entry},
#line 846 "cmds-gperf.gperf"
      {"lstat", &lstat_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1129 "cmds-gperf.gperf"
      {"tail", &tail_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 749 "cmds-gperf.gperf"
      {"inspect_get_major_version", &inspect_get_major_version_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 949 "cmds-gperf.gperf"
      {"mountpoints", &mountpoints_cmd_entry},
#line 1154 "cmds-gperf.gperf"
      {"unmount", &umount_cmd_entry},
      {(char*)0}, {(char*)0},
#line 750 "cmds-gperf.gperf"
      {"inspect-get-major-version", &inspect_get_major_version_cmd_entry},
#line 507 "cmds-gperf.gperf"
      {"aug_ls", &aug_ls_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 508 "cmds-gperf.gperf"
      {"aug-ls", &aug_ls_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1130 "cmds-gperf.gperf"
      {"tail_n", &tail_n_cmd_entry},
      {(char*)0},
#line 753 "cmds-gperf.gperf"
      {"inspect_get_mountpoints", &inspect_get_mountpoints_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1131 "cmds-gperf.gperf"
      {"tail-n", &tail_n_cmd_entry},
      {(char*)0}, {(char*)0},
#line 493 "cmds-gperf.gperf"
      {"aug_close", &aug_close_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 754 "cmds-gperf.gperf"
      {"inspect-get-mountpoints", &inspect_get_mountpoints_cmd_entry},
#line 494 "cmds-gperf.gperf"
      {"aug-close", &aug_close_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 628 "cmds-gperf.gperf"
      {"du", &du_cmd_entry},
#line 687 "cmds-gperf.gperf"
      {"pid", &get_pid_cmd_entry},
#line 635 "cmds-gperf.gperf"
      {"edit", &edit_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 945 "cmds-gperf.gperf"
      {"mount_ro", &mount_ro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 946 "cmds-gperf.gperf"
      {"mount-ro", &mount_ro_cmd_entry},
#line 801 "cmds-gperf.gperf"
      {"is_socket", &is_socket_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 802 "cmds-gperf.gperf"
      {"is-socket", &is_socket_cmd_entry},
#line 1044 "cmds-gperf.gperf"
      {"set_direct", &set_direct_cmd_entry},
      {(char*)0},
#line 586 "cmds-gperf.gperf"
      {"compress_out", &compress_out_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1045 "cmds-gperf.gperf"
      {"set-direct", &set_direct_cmd_entry},
      {(char*)0},
#line 587 "cmds-gperf.gperf"
      {"compress-out", &compress_out_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 789 "cmds-gperf.gperf"
      {"is_dir", &is_dir_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 790 "cmds-gperf.gperf"
      {"is-dir", &is_dir_cmd_entry},
      {(char*)0}, {(char*)0},
#line 845 "cmds-gperf.gperf"
      {"lsetxattr", &lsetxattr_cmd_entry},
#line 667 "cmds-gperf.gperf"
      {"get_direct", &get_direct_cmd_entry},
#line 1046 "cmds-gperf.gperf"
      {"direct", &set_direct_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 668 "cmds-gperf.gperf"
      {"get-direct", &get_direct_cmd_entry},
      {(char*)0}, {(char*)0},
#line 943 "cmds-gperf.gperf"
      {"mount_options", &mount_options_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 944 "cmds-gperf.gperf"
      {"mount-options", &mount_options_cmd_entry},
      {(char*)0},
#line 994 "cmds-gperf.gperf"
      {"pread", &pread_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1002 "cmds-gperf.gperf"
      {"pvs", &pvs_cmd_entry},
#line 818 "cmds-gperf.gperf"
      {"lgetxattr", &lgetxattr_cmd_entry},
#line 819 "cmds-gperf.gperf"
      {"lgetxattrs", &lgetxattrs_cmd_entry},
#line 1037 "cmds-gperf.gperf"
      {"append", &set_append_cmd_entry},
#line 636 "cmds-gperf.gperf"
      {"vi", &edit_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1182 "cmds-gperf.gperf"
      {"vgs", &vgs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 641 "cmds-gperf.gperf"
      {"event", &event_cmd_entry},
#line 1088 "cmds-gperf.gperf"
      {"setenv", &setenv_cmd_entry},
      {(char*)0},
#line 966 "cmds-gperf.gperf"
      {"part_add", &part_add_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 967 "cmds-gperf.gperf"
      {"part-add", &part_add_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 581 "cmds-gperf.gperf"
      {"command", &command_cmd_entry},
#line 737 "cmds-gperf.gperf"
      {"inspect_get_distro", &inspect_get_distro_cmd_entry},
      {(char*)0}, {(char*)0},
#line 739 "cmds-gperf.gperf"
      {"inspect_get_drive_mappings", &inspect_get_drive_mappings_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1111 "cmds-gperf.gperf"
      {"supported", &supported_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 738 "cmds-gperf.gperf"
      {"inspect-get-distro", &inspect_get_distro_cmd_entry},
      {(char*)0}, {(char*)0},
#line 740 "cmds-gperf.gperf"
      {"inspect-get-drive-mappings", &inspect_get_drive_mappings_cmd_entry},
      {(char*)0},
#line 999 "cmds-gperf.gperf"
      {"pvresize", &pvresize_cmd_entry},
      {(char*)0},
#line 773 "cmds-gperf.gperf"
      {"inspect_is_multipart", &inspect_is_multipart_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 774 "cmds-gperf.gperf"
      {"inspect-is-multipart", &inspect_is_multipart_cmd_entry},
      {(char*)0}, {(char*)0},
#line 997 "cmds-gperf.gperf"
      {"pvcreate", &pvcreate_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 834 "cmds-gperf.gperf"
      {"ll", &ll_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 884 "cmds-gperf.gperf"
      {"manual", &man_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 622 "cmds-gperf.gperf"
      {"dmesg", &dmesg_cmd_entry},
#line 1185 "cmds-gperf.gperf"
      {"vgscan", &vgscan_cmd_entry},
      {(char*)0},
#line 1176 "cmds-gperf.gperf"
      {"vgcreate", &vgcreate_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 889 "cmds-gperf.gperf"
      {"md_stat", &md_stat_cmd_entry},
#line 1160 "cmds-gperf.gperf"
      {"unsetenv", &unsetenv_cmd_entry},
      {(char*)0},
#line 882 "cmds-gperf.gperf"
      {"lxattrlist", &lxattrlist_cmd_entry},
      {(char*)0},
#line 890 "cmds-gperf.gperf"
      {"md-stat", &md_stat_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1027 "cmds-gperf.gperf"
      {"rmdir", &rmdir_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 951 "cmds-gperf.gperf"
      {"mv", &mv_cmd_entry},
#line 1181 "cmds-gperf.gperf"
      {"vgrename", &vgrename_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1055 "cmds-gperf.gperf"
      {"set_label", &set_label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1056 "cmds-gperf.gperf"
      {"set-label", &set_label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1028 "cmds-gperf.gperf"
      {"rmmountpoint", &rmmountpoint_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 941 "cmds-gperf.gperf"
      {"mount_loop", &mount_loop_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 942 "cmds-gperf.gperf"
      {"mount-loop", &mount_loop_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 816 "cmds-gperf.gperf"
      {"lcd", &lcd_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1178 "cmds-gperf.gperf"
      {"vgmeta", &vgmeta_cmd_entry},
#line 1165 "cmds-gperf.gperf"
      {"version", &version_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 511 "cmds-gperf.gperf"
      {"aug_mv", &aug_mv_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 777 "cmds-gperf.gperf"
      {"inspect_list_applications", &inspect_list_applications_cmd_entry},
#line 512 "cmds-gperf.gperf"
      {"aug-mv", &aug_mv_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 645 "cmds-gperf.gperf"
      {"fgrep", &fgrep_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 778 "cmds-gperf.gperf"
      {"inspect-list-applications", &inspect_list_applications_cmd_entry},
#line 646 "cmds-gperf.gperf"
      {"fgrepi", &fgrepi_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 489 "cmds-gperf.gperf"
      {"alloc", &alloc_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 476 "cmds-gperf.gperf"
      {"domain", &add_domain_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 878 "cmds-gperf.gperf"
      {"lvs", &lvs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 797 "cmds-gperf.gperf"
      {"is_lv", &is_lv_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 798 "cmds-gperf.gperf"
      {"is-lv", &is_lv_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 741 "cmds-gperf.gperf"
      {"inspect_get_filesystems", &inspect_get_filesystems_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 606 "cmds-gperf.gperf"
      {"dd", &dd_cmd_entry},
#line 490 "cmds-gperf.gperf"
      {"allocate", &alloc_cmd_entry},
#line 696 "cmds-gperf.gperf"
      {"get_state", &get_state_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 742 "cmds-gperf.gperf"
      {"inspect-get-filesystems", &inspect_get_filesystems_cmd_entry},
#line 697 "cmds-gperf.gperf"
      {"get-state", &get_state_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 931 "cmds-gperf.gperf"
      {"modprobe", &modprobe_cmd_entry},
#line 1081 "cmds-gperf.gperf"
      {"set_trace", &set_trace_cmd_entry},
      {(char*)0}, {(char*)0},
#line 809 "cmds-gperf.gperf"
      {"isoinfo", &isoinfo_cmd_entry},
      {(char*)0},
#line 1082 "cmds-gperf.gperf"
      {"set-trace", &set_trace_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 481 "cmds-gperf.gperf"
      {"add", &add_drive_opts_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1161 "cmds-gperf.gperf"
      {"upload", &upload_cmd_entry},
      {(char*)0}, {(char*)0},
#line 698 "cmds-gperf.gperf"
      {"get_trace", &get_trace_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 875 "cmds-gperf.gperf"
      {"lvresize", &lvresize_cmd_entry},
#line 699 "cmds-gperf.gperf"
      {"get-trace", &get_trace_cmd_entry},
      {(char*)0}, {(char*)0},
#line 976 "cmds-gperf.gperf"
      {"part_get_parttype", &part_get_parttype_cmd_entry},
      {(char*)0}, {(char*)0},
#line 771 "cmds-gperf.gperf"
      {"inspect_is_live", &inspect_is_live_cmd_entry},
#line 588 "cmds-gperf.gperf"
      {"config", &config_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 977 "cmds-gperf.gperf"
      {"part-get-parttype", &part_get_parttype_cmd_entry},
#line 862 "cmds-gperf.gperf"
      {"lvcreate", &lvcreate_cmd_entry},
      {(char*)0},
#line 772 "cmds-gperf.gperf"
      {"inspect-is-live", &inspect_is_live_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1013 "cmds-gperf.gperf"
      {"readdir", &readdir_cmd_entry},
#line 582 "cmds-gperf.gperf"
      {"command_lines", &command_lines_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 583 "cmds-gperf.gperf"
      {"command-lines", &command_lines_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1005 "cmds-gperf.gperf"
      {"pvuuid", &pvuuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1025 "cmds-gperf.gperf"
      {"rm_rf", &rm_rf_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1026 "cmds-gperf.gperf"
      {"rm-rf", &rm_rf_cmd_entry},
      {(char*)0}, {(char*)0},
#line 874 "cmds-gperf.gperf"
      {"lvrename", &lvrename_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1186 "cmds-gperf.gperf"
      {"vguuid", &vguuid_cmd_entry},
      {(char*)0},
#line 743 "cmds-gperf.gperf"
      {"inspect_get_format", &inspect_get_format_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 744 "cmds-gperf.gperf"
      {"inspect-get-format", &inspect_get_format_cmd_entry},
      {(char*)0},
#line 1152 "cmds-gperf.gperf"
      {"umask", &umask_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 937 "cmds-gperf.gperf"
      {"mount_local", &mount_local_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1033 "cmds-gperf.gperf"
      {"scrub_freespace", &scrub_freespace_cmd_entry},
#line 938 "cmds-gperf.gperf"
      {"mount-local", &mount_local_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1034 "cmds-gperf.gperf"
      {"scrub-freespace", &scrub_freespace_cmd_entry},
#line 988 "cmds-gperf.gperf"
      {"part_to_dev", &part_to_dev_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 989 "cmds-gperf.gperf"
      {"part-to-dev", &part_to_dev_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 647 "cmds-gperf.gperf"
      {"file", &file_cmd_entry},
      {(char*)0},
#line 484 "cmds-gperf.gperf"
      {"add-ro", &add_drive_ro_cmd_entry},
#line 995 "cmds-gperf.gperf"
      {"pread_device", &pread_device_cmd_entry},
      {(char*)0}, {(char*)0},
#line 939 "cmds-gperf.gperf"
      {"mount_local_run", &mount_local_run_cmd_entry},
      {(char*)0},
#line 996 "cmds-gperf.gperf"
      {"pread-device", &pread_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 940 "cmds-gperf.gperf"
      {"mount-local-run", &mount_local_run_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1157 "cmds-gperf.gperf"
      {"unmount-all", &umount_all_cmd_entry},
      {(char*)0},
#line 986 "cmds-gperf.gperf"
      {"part_set_name", &part_set_name_cmd_entry},
#line 837 "cmds-gperf.gperf"
      {"ln_f", &ln_f_cmd_entry},
#line 841 "cmds-gperf.gperf"
      {"ln_sf", &ln_sf_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 838 "cmds-gperf.gperf"
      {"ln-f", &ln_f_cmd_entry},
#line 842 "cmds-gperf.gperf"
      {"ln-sf", &ln_sf_cmd_entry},
      {(char*)0}, {(char*)0},
#line 987 "cmds-gperf.gperf"
      {"part-set-name", &part_set_name_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 720 "cmds-gperf.gperf"
      {"initrd-cat", &initrd_cat_cmd_entry},
      {(char*)0}, {(char*)0},
#line 650 "cmds-gperf.gperf"
      {"filesize", &filesize_cmd_entry},
#line 1187 "cmds-gperf.gperf"
      {"wc_c", &wc_c_cmd_entry},
#line 1194 "cmds-gperf.gperf"
      {"write", &write_cmd_entry},
#line 1006 "cmds-gperf.gperf"
      {"pwrite", &pwrite_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1188 "cmds-gperf.gperf"
      {"wc-c", &wc_c_cmd_entry},
      {(char*)0},
#line 495 "cmds-gperf.gperf"
      {"aug_defnode", &aug_defnode_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 496 "cmds-gperf.gperf"
      {"aug-defnode", &aug_defnode_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 497 "cmds-gperf.gperf"
      {"aug_defvar", &aug_defvar_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 498 "cmds-gperf.gperf"
      {"aug-defvar", &aug_defvar_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 719 "cmds-gperf.gperf"
      {"initrd_cat", &initrd_cat_cmd_entry},
      {(char*)0},
#line 618 "cmds-gperf.gperf"
      {"df", &df_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1100 "cmds-gperf.gperf"
      {"sh", &sh_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 956 "cmds-gperf.gperf"
      {"ntfsclone_in", &ntfsclone_in_cmd_entry},
#line 515 "cmds-gperf.gperf"
      {"aug_save", &aug_save_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 957 "cmds-gperf.gperf"
      {"ntfsclone-in", &ntfsclone_in_cmd_entry},
#line 516 "cmds-gperf.gperf"
      {"aug-save", &aug_save_cmd_entry},
#line 654 "cmds-gperf.gperf"
      {"find", &find_cmd_entry},
#line 655 "cmds-gperf.gperf"
      {"find0", &find0_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1128 "cmds-gperf.gperf"
      {"sync", &sync_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 491 "cmds-gperf.gperf"
      {"aug_clear", &aug_clear_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1065 "cmds-gperf.gperf"
      {"path", &set_path_cmd_entry},
      {(char*)0},
#line 492 "cmds-gperf.gperf"
      {"aug-clear", &aug_clear_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1063 "cmds-gperf.gperf"
      {"set_path", &set_path_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1031 "cmds-gperf.gperf"
      {"scrub_file", &scrub_file_cmd_entry},
#line 1064 "cmds-gperf.gperf"
      {"set-path", &set_path_cmd_entry},
      {(char*)0}, {(char*)0},
#line 799 "cmds-gperf.gperf"
      {"is_ready", &is_ready_cmd_entry},
#line 1032 "cmds-gperf.gperf"
      {"scrub-file", &scrub_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 800 "cmds-gperf.gperf"
      {"is-ready", &is_ready_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 681 "cmds-gperf.gperf"
      {"get_path", &get_path_cmd_entry},
      {(char*)0},
#line 958 "cmds-gperf.gperf"
      {"ntfsclone_out", &ntfsclone_out_cmd_entry},
      {(char*)0},
#line 805 "cmds-gperf.gperf"
      {"is_zero", &is_zero_cmd_entry},
#line 682 "cmds-gperf.gperf"
      {"get-path", &get_path_cmd_entry},
#line 765 "cmds-gperf.gperf"
      {"inspect_get_type", &inspect_get_type_cmd_entry},
#line 959 "cmds-gperf.gperf"
      {"ntfsclone-out", &ntfsclone_out_cmd_entry},
      {(char*)0},
#line 806 "cmds-gperf.gperf"
      {"is-zero", &is_zero_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 707 "cmds-gperf.gperf"
      {"glob", &glob_cmd_entry},
      {(char*)0},
#line 881 "cmds-gperf.gperf"
      {"lvuuid", &lvuuid_cmd_entry},
#line 766 "cmds-gperf.gperf"
      {"inspect-get-type", &inspect_get_type_cmd_entry},
#line 1210 "cmds-gperf.gperf"
      {"zgrep", &zgrep_cmd_entry},
#line 1199 "cmds-gperf.gperf"
      {"zegrep", &zegrep_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1107 "cmds-gperf.gperf"
      {"statvfs", &statvfs_cmd_entry},
#line 501 "cmds-gperf.gperf"
      {"aug_init", &aug_init_cmd_entry},
#line 1211 "cmds-gperf.gperf"
      {"zgrepi", &zgrepi_cmd_entry},
#line 607 "cmds-gperf.gperf"
      {"debug", &debug_cmd_entry},
      {(char*)0}, {(char*)0},
#line 502 "cmds-gperf.gperf"
      {"aug-init", &aug_init_cmd_entry},
#line 1136 "cmds-gperf.gperf"
      {"tgz_in", &tgz_in_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1137 "cmds-gperf.gperf"
      {"tgz-in", &tgz_in_cmd_entry},
      {(char*)0}, {(char*)0},
#line 632 "cmds-gperf.gperf"
      {"echo", &echo_cmd_entry},
      {(char*)0},
#line 519 "cmds-gperf.gperf"
      {"available", &available_cmd_entry},
#line 769 "cmds-gperf.gperf"
      {"inspect_get_windows_systemroot", &inspect_get_windows_systemroot_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1141 "cmds-gperf.gperf"
      {"touch", &touch_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 767 "cmds-gperf.gperf"
      {"inspect_get_windows_current_control_set", &inspect_get_windows_current_control_set_cmd_entry},
#line 770 "cmds-gperf.gperf"
      {"inspect-get-windows-systemroot", &inspect_get_windows_systemroot_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 768 "cmds-gperf.gperf"
      {"inspect-get-windows-current-control-set", &inspect_get_windows_current_control_set_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1148 "cmds-gperf.gperf"
      {"txz_in", &txz_in_cmd_entry},
#line 832 "cmds-gperf.gperf"
      {"list_partitions", &list_partitions_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1149 "cmds-gperf.gperf"
      {"txz-in", &txz_in_cmd_entry},
#line 833 "cmds-gperf.gperf"
      {"list-partitions", &list_partitions_cmd_entry},
#line 722 "cmds-gperf.gperf"
      {"initrd-list", &initrd_list_cmd_entry},
#line 1201 "cmds-gperf.gperf"
      {"zero", &zero_cmd_entry},
      {(char*)0},
#line 651 "cmds-gperf.gperf"
      {"fill", &fill_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1138 "cmds-gperf.gperf"
      {"tgz_out", &tgz_out_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1139 "cmds-gperf.gperf"
      {"tgz-out", &tgz_out_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1143 "cmds-gperf.gperf"
      {"truncate_size", &truncate_size_cmd_entry},
      {(char*)0},
#line 1041 "cmds-gperf.gperf"
      {"set_autosync", &set_autosync_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1144 "cmds-gperf.gperf"
      {"truncate-size", &truncate_size_cmd_entry},
      {(char*)0},
#line 1042 "cmds-gperf.gperf"
      {"set-autosync", &set_autosync_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 597 "cmds-gperf.gperf"
      {"copy_in", &copy_in_cmd_entry},
#line 1189 "cmds-gperf.gperf"
      {"wc_l", &wc_l_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 598 "cmds-gperf.gperf"
      {"copy-in", &copy_in_cmd_entry},
#line 1190 "cmds-gperf.gperf"
      {"wc-l", &wc_l_cmd_entry},
#line 850 "cmds-gperf.gperf"
      {"luks_close", &luks_close_cmd_entry},
#line 721 "cmds-gperf.gperf"
      {"initrd_list", &initrd_list_cmd_entry},
#line 1145 "cmds-gperf.gperf"
      {"tune2fs", &tune2fs_cmd_entry},
#line 665 "cmds-gperf.gperf"
      {"get_autosync", &get_autosync_cmd_entry},
#line 571 "cmds-gperf.gperf"
      {"case_sensitive_path", &case_sensitive_path_cmd_entry},
#line 851 "cmds-gperf.gperf"
      {"luks-close", &luks_close_cmd_entry},
      {(char*)0}, {(char*)0},
#line 666 "cmds-gperf.gperf"
      {"get-autosync", &get_autosync_cmd_entry},
#line 572 "cmds-gperf.gperf"
      {"case-sensitive-path", &case_sensitive_path_cmd_entry},
#line 893 "cmds-gperf.gperf"
      {"mkdir", &mkdir_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1150 "cmds-gperf.gperf"
      {"txz_out", &txz_out_cmd_entry},
      {(char*)0},
#line 1029 "cmds-gperf.gperf"
      {"scrub_device", &scrub_device_cmd_entry},
      {(char*)0},
#line 584 "cmds-gperf.gperf"
      {"compress_device_out", &compress_device_out_cmd_entry},
#line 1151 "cmds-gperf.gperf"
      {"txz-out", &txz_out_cmd_entry},
#line 826 "cmds-gperf.gperf"
      {"list_events", &list_events_cmd_entry},
#line 1030 "cmds-gperf.gperf"
      {"scrub-device", &scrub_device_cmd_entry},
#line 745 "cmds-gperf.gperf"
      {"inspect_get_hostname", &inspect_get_hostname_cmd_entry},
#line 585 "cmds-gperf.gperf"
      {"compress-device-out", &compress_device_out_cmd_entry},
      {(char*)0},
#line 827 "cmds-gperf.gperf"
      {"list-events", &list_events_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1043 "cmds-gperf.gperf"
      {"autosync", &set_autosync_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 746 "cmds-gperf.gperf"
      {"inspect-get-hostname", &inspect_get_hostname_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1084 "cmds-gperf.gperf"
      {"set_verbose", &set_verbose_cmd_entry},
#line 918 "cmds-gperf.gperf"
      {"mkmountpoint", &mkmountpoint_cmd_entry},
      {(char*)0},
#line 1057 "cmds-gperf.gperf"
      {"set_memsize", &set_memsize_cmd_entry},
#line 1197 "cmds-gperf.gperf"
      {"write_file", &write_file_cmd_entry},
#line 1085 "cmds-gperf.gperf"
      {"set-verbose", &set_verbose_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1058 "cmds-gperf.gperf"
      {"set-memsize", &set_memsize_cmd_entry},
#line 1198 "cmds-gperf.gperf"
      {"write-file", &write_file_cmd_entry},
      {(char*)0},
#line 791 "cmds-gperf.gperf"
      {"is_fifo", &is_fifo_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 792 "cmds-gperf.gperf"
      {"is-fifo", &is_fifo_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 702 "cmds-gperf.gperf"
      {"get_verbose", &get_verbose_cmd_entry},
      {(char*)0}, {(char*)0},
#line 677 "cmds-gperf.gperf"
      {"get_memsize", &get_memsize_cmd_entry},
#line 830 "cmds-gperf.gperf"
      {"list_md_devices", &list_md_devices_cmd_entry},
#line 703 "cmds-gperf.gperf"
      {"get-verbose", &get_verbose_cmd_entry},
      {(char*)0}, {(char*)0},
#line 678 "cmds-gperf.gperf"
      {"get-memsize", &get_memsize_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 885 "cmds-gperf.gperf"
      {"md_create", &md_create_cmd_entry},
#line 831 "cmds-gperf.gperf"
      {"list-md-devices", &list_md_devices_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 886 "cmds-gperf.gperf"
      {"md-create", &md_create_cmd_entry},
      {(char*)0},
#line 1047 "cmds-gperf.gperf"
      {"set_e2attrs", &set_e2attrs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1048 "cmds-gperf.gperf"
      {"set-e2attrs", &set_e2attrs_cmd_entry},
#line 509 "cmds-gperf.gperf"
      {"aug_match", &aug_match_cmd_entry},
      {(char*)0},
#line 660 "cmds-gperf.gperf"
      {"fsck", &fsck_cmd_entry},
      {(char*)0}, {(char*)0},
#line 510 "cmds-gperf.gperf"
      {"aug-match", &aug_match_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1077 "cmds-gperf.gperf"
      {"selinux", &set_selinux_cmd_entry},
      {(char*)0},
#line 919 "cmds-gperf.gperf"
      {"mknod", &mknod_cmd_entry},
#line 669 "cmds-gperf.gperf"
      {"get_e2attrs", &get_e2attrs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 670 "cmds-gperf.gperf"
      {"get-e2attrs", &get_e2attrs_cmd_entry},
      {(char*)0}, {(char*)0},
#line 523 "cmds-gperf.gperf"
      {"base64-in", &base64_in_cmd_entry},
#line 1156 "cmds-gperf.gperf"
      {"umount-all", &umount_all_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 920 "cmds-gperf.gperf"
      {"mknod_b", &mknod_b_cmd_entry},
#line 968 "cmds-gperf.gperf"
      {"part_del", &part_del_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 921 "cmds-gperf.gperf"
      {"mknod-b", &mknod_b_cmd_entry},
#line 969 "cmds-gperf.gperf"
      {"part-del", &part_del_cmd_entry},
#line 980 "cmds-gperf.gperf"
      {"part_list", &part_list_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1062 "cmds-gperf.gperf"
      {"network", &set_network_cmd_entry},
      {(char*)0},
#line 981 "cmds-gperf.gperf"
      {"part-list", &part_list_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 474 "cmds-gperf.gperf"
      {"add_domain", &add_domain_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 475 "cmds-gperf.gperf"
      {"add-domain", &add_domain_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 522 "cmds-gperf.gperf"
      {"base64_in", &base64_in_cmd_entry},
#line 1155 "cmds-gperf.gperf"
      {"umount_all", &umount_all_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1053 "cmds-gperf.gperf"
      {"set_e2uuid", &set_e2uuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 814 "cmds-gperf.gperf"
      {"launch", &launch_cmd_entry},
#line 1054 "cmds-gperf.gperf"
      {"set-e2uuid", &set_e2uuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 525 "cmds-gperf.gperf"
      {"base64-out", &base64_out_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 675 "cmds-gperf.gperf"
      {"get_e2uuid", &get_e2uuid_cmd_entry},
#line 1016 "cmds-gperf.gperf"
      {"realpath", &realpath_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 676 "cmds-gperf.gperf"
      {"get-e2uuid", &get_e2uuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 472 "cmds-gperf.gperf"
      {"add_cdrom", &add_cdrom_cmd_entry},
      {(char*)0}, {(char*)0},
#line 714 "cmds-gperf.gperf"
      {"head", &head_cmd_entry},
      {(char*)0},
#line 473 "cmds-gperf.gperf"
      {"add-cdrom", &add_cdrom_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 524 "cmds-gperf.gperf"
      {"base64_out", &base64_out_cmd_entry},
#line 992 "cmds-gperf.gperf"
      {"ping_daemon", &ping_daemon_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 993 "cmds-gperf.gperf"
      {"ping-daemon", &ping_daemon_cmd_entry},
#line 1159 "cmds-gperf.gperf"
      {"umount-local", &umount_local_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 876 "cmds-gperf.gperf"
      {"lvresize_free", &lvresize_free_cmd_entry},
#line 911 "cmds-gperf.gperf"
      {"mkfs", &mkfs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 877 "cmds-gperf.gperf"
      {"lvresize-free", &lvresize_free_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 712 "cmds-gperf.gperf"
      {"grub_install", &grub_install_cmd_entry},
      {(char*)0},
#line 715 "cmds-gperf.gperf"
      {"head_n", &head_n_cmd_entry},
      {(char*)0}, {(char*)0},
#line 713 "cmds-gperf.gperf"
      {"grub-install", &grub_install_cmd_entry},
#line 863 "cmds-gperf.gperf"
      {"lvcreate_free", &lvcreate_free_cmd_entry},
#line 716 "cmds-gperf.gperf"
      {"head-n", &head_n_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 864 "cmds-gperf.gperf"
      {"lvcreate-free", &lvcreate_free_cmd_entry},
      {(char*)0},
#line 718 "cmds-gperf.gperf"
      {"hexedit", &hexedit_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1014 "cmds-gperf.gperf"
      {"readlink", &readlink_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1158 "cmds-gperf.gperf"
      {"umount_local", &umount_local_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1146 "cmds-gperf.gperf"
      {"tune2fs_l", &tune2fs_l_cmd_entry},
      {(char*)0},
#line 865 "cmds-gperf.gperf"
      {"lvm_canonical_lv_name", &lvm_canonical_lv_name_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1147 "cmds-gperf.gperf"
      {"tune2fs-l", &tune2fs_l_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1003 "cmds-gperf.gperf"
      {"pvs_full", &pvs_full_cmd_entry},
      {(char*)0}, {(char*)0},
#line 866 "cmds-gperf.gperf"
      {"lvm-canonical-lv-name", &lvm_canonical_lv_name_cmd_entry},
      {(char*)0},
#line 1004 "cmds-gperf.gperf"
      {"pvs-full", &pvs_full_cmd_entry},
      {(char*)0},
#line 795 "cmds-gperf.gperf"
      {"is_launching", &is_launching_cmd_entry},
      {(char*)0}, {(char*)0},
#line 505 "cmds-gperf.gperf"
      {"aug_load", &aug_load_cmd_entry},
      {(char*)0},
#line 796 "cmds-gperf.gperf"
      {"is-launching", &is_launching_cmd_entry},
      {(char*)0}, {(char*)0},
#line 506 "cmds-gperf.gperf"
      {"aug-load", &aug_load_cmd_entry},
      {(char*)0},
#line 824 "cmds-gperf.gperf"
      {"list_dm_devices", &list_dm_devices_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1183 "cmds-gperf.gperf"
      {"vgs_full", &vgs_full_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1184 "cmds-gperf.gperf"
      {"vgs-full", &vgs_full_cmd_entry},
      {(char*)0},
#line 825 "cmds-gperf.gperf"
      {"list-dm-devices", &list_dm_devices_cmd_entry},
      {(char*)0},
#line 793 "cmds-gperf.gperf"
      {"is_file", &is_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 794 "cmds-gperf.gperf"
      {"is-file", &is_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1193 "cmds-gperf.gperf"
      {"wipefs", &wipefs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1069 "cmds-gperf.gperf"
      {"set_qemu", &set_qemu_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1070 "cmds-gperf.gperf"
      {"set-qemu", &set_qemu_cmd_entry},
      {(char*)0},
#line 700 "cmds-gperf.gperf"
      {"get_umask", &get_umask_cmd_entry},
      {(char*)0}, {(char*)0},
#line 615 "cmds-gperf.gperf"
      {"delete-event", &delete_event_cmd_entry},
      {(char*)0},
#line 701 "cmds-gperf.gperf"
      {"get-umask", &get_umask_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1000 "cmds-gperf.gperf"
      {"pvresize_size", &pvresize_size_cmd_entry},
#line 688 "cmds-gperf.gperf"
      {"get_qemu", &get_qemu_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1001 "cmds-gperf.gperf"
      {"pvresize-size", &pvresize_size_cmd_entry},
#line 689 "cmds-gperf.gperf"
      {"get-qemu", &get_qemu_cmd_entry},
      {(char*)0},
#line 847 "cmds-gperf.gperf"
      {"lstatlist", &lstatlist_cmd_entry},
      {(char*)0},
#line 1103 "cmds-gperf.gperf"
      {"shutdown", &shutdown_cmd_entry},
#line 610 "cmds-gperf.gperf"
      {"debug_drives", &debug_drives_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 835 "cmds-gperf.gperf"
      {"llz", &llz_cmd_entry},
#line 611 "cmds-gperf.gperf"
      {"debug-drives", &debug_drives_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 810 "cmds-gperf.gperf"
      {"isoinfo_device", &isoinfo_device_cmd_entry},
#line 984 "cmds-gperf.gperf"
      {"part_set_mbr_id", &part_set_mbr_id_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 811 "cmds-gperf.gperf"
      {"isoinfo-device", &isoinfo_device_cmd_entry},
      {(char*)0}, {(char*)0},
#line 614 "cmds-gperf.gperf"
      {"delete_event", &delete_event_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 985 "cmds-gperf.gperf"
      {"part-set-mbr-id", &part_set_mbr_id_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 974 "cmds-gperf.gperf"
      {"part_get_mbr_id", &part_get_mbr_id_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 982 "cmds-gperf.gperf"
      {"part_set_bootable", &part_set_bootable_cmd_entry},
#line 998 "cmds-gperf.gperf"
      {"pvremove", &pvremove_cmd_entry},
#line 599 "cmds-gperf.gperf"
      {"copy_out", &copy_out_cmd_entry},
#line 975 "cmds-gperf.gperf"
      {"part-get-mbr-id", &part_get_mbr_id_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 600 "cmds-gperf.gperf"
      {"copy-out", &copy_out_cmd_entry},
      {(char*)0}, {(char*)0},
#line 983 "cmds-gperf.gperf"
      {"part-set-bootable", &part_set_bootable_cmd_entry},
#line 579 "cmds-gperf.gperf"
      {"chmod", &chmod_cmd_entry},
      {(char*)0},
#line 1038 "cmds-gperf.gperf"
      {"set_attach_method", &set_attach_method_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 972 "cmds-gperf.gperf"
      {"part_get_bootable", &part_get_bootable_cmd_entry},
#line 1180 "cmds-gperf.gperf"
      {"vgremove", &vgremove_cmd_entry},
      {(char*)0},
#line 1039 "cmds-gperf.gperf"
      {"set-attach-method", &set_attach_method_cmd_entry},
#line 1090 "cmds-gperf.gperf"
      {"sfdisk", &sfdisk_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1166 "cmds-gperf.gperf"
      {"vfs_label", &vfs_label_cmd_entry},
      {(char*)0}, {(char*)0},
#line 973 "cmds-gperf.gperf"
      {"part-get-bootable", &part_get_bootable_cmd_entry},
      {(char*)0},
#line 1167 "cmds-gperf.gperf"
      {"vfs-label", &vfs_label_cmd_entry},
#line 663 "cmds-gperf.gperf"
      {"get_attach_method", &get_attach_method_cmd_entry},
#line 1078 "cmds-gperf.gperf"
      {"set_smp", &set_smp_cmd_entry},
      {(char*)0},
#line 1071 "cmds-gperf.gperf"
      {"qemu", &set_qemu_cmd_entry},
#line 1049 "cmds-gperf.gperf"
      {"set_e2generation", &set_e2generation_cmd_entry},
      {(char*)0},
#line 1079 "cmds-gperf.gperf"
      {"set-smp", &set_smp_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1050 "cmds-gperf.gperf"
      {"set-e2generation", &set_e2generation_cmd_entry},
#line 664 "cmds-gperf.gperf"
      {"get-attach-method", &get_attach_method_cmd_entry},
      {(char*)0},
#line 922 "cmds-gperf.gperf"
      {"mknod_c", &mknod_c_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 923 "cmds-gperf.gperf"
      {"mknod-c", &mknod_c_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 694 "cmds-gperf.gperf"
      {"get_smp", &get_smp_cmd_entry},
#line 1091 "cmds-gperf.gperf"
      {"sfdiskM", &sfdiskM_cmd_entry},
      {(char*)0},
#line 671 "cmds-gperf.gperf"
      {"get_e2generation", &get_e2generation_cmd_entry},
      {(char*)0},
#line 695 "cmds-gperf.gperf"
      {"get-smp", &get_smp_cmd_entry},
      {(char*)0}, {(char*)0},
#line 672 "cmds-gperf.gperf"
      {"get-e2generation", &get_e2generation_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1019 "cmds-gperf.gperf"
      {"resize2fs", &resize2fs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1074 "cmds-gperf.gperf"
      {"recovery-proc", &set_recovery_proc_cmd_entry},
#line 894 "cmds-gperf.gperf"
      {"mkdir_mode", &mkdir_mode_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1207 "cmds-gperf.gperf"
      {"zfgrep", &zfgrep_cmd_entry},
#line 895 "cmds-gperf.gperf"
      {"mkdir-mode", &mkdir_mode_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1051 "cmds-gperf.gperf"
      {"set_e2label", &set_e2label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 621 "cmds-gperf.gperf"
      {"display", &display_cmd_entry},
#line 1052 "cmds-gperf.gperf"
      {"set-e2label", &set_e2label_cmd_entry},
#line 822 "cmds-gperf.gperf"
      {"list_devices", &list_devices_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1011 "cmds-gperf.gperf"
      {"read_lines", &read_lines_cmd_entry},
#line 1060 "cmds-gperf.gperf"
      {"set_network", &set_network_cmd_entry},
#line 823 "cmds-gperf.gperf"
      {"list-devices", &list_devices_cmd_entry},
#line 961 "cmds-gperf.gperf"
      {"ntfsresize", &ntfsresize_cmd_entry},
      {(char*)0},
#line 1012 "cmds-gperf.gperf"
      {"read-lines", &read_lines_cmd_entry},
#line 1061 "cmds-gperf.gperf"
      {"set-network", &set_network_cmd_entry},
#line 1015 "cmds-gperf.gperf"
      {"readlinklist", &readlinklist_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 673 "cmds-gperf.gperf"
      {"get_e2label", &get_e2label_cmd_entry},
#line 843 "cmds-gperf.gperf"
      {"lremovexattr", &lremovexattr_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 674 "cmds-gperf.gperf"
      {"get-e2label", &get_e2label_cmd_entry},
#line 617 "cmds-gperf.gperf"
      {"device-index", &device_index_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 679 "cmds-gperf.gperf"
      {"get_network", &get_network_cmd_entry},
#line 559 "cmds-gperf.gperf"
      {"btrfs_set_seeding", &btrfs_set_seeding_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 680 "cmds-gperf.gperf"
      {"get-network", &get_network_cmd_entry},
      {(char*)0},
#line 879 "cmds-gperf.gperf"
      {"lvs_full", &lvs_full_cmd_entry},
      {(char*)0},
#line 783 "cmds-gperf.gperf"
      {"is_busy", &is_busy_cmd_entry},
#line 924 "cmds-gperf.gperf"
      {"mkswap", &mkswap_cmd_entry},
#line 560 "cmds-gperf.gperf"
      {"btrfs-set-seeding", &btrfs_set_seeding_cmd_entry},
#line 880 "cmds-gperf.gperf"
      {"lvs-full", &lvs_full_cmd_entry},
      {(char*)0},
#line 784 "cmds-gperf.gperf"
      {"is-busy", &is_busy_cmd_entry},
      {(char*)0},
#line 1017 "cmds-gperf.gperf"
      {"removexattr", &removexattr_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 852 "cmds-gperf.gperf"
      {"luks_format", &luks_format_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 853 "cmds-gperf.gperf"
      {"luks-format", &luks_format_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 820 "cmds-gperf.gperf"
      {"list_9p", &list_9p_cmd_entry},
#line 616 "cmds-gperf.gperf"
      {"device_index", &device_index_cmd_entry},
      {(char*)0}, {(char*)0},
#line 520 "cmds-gperf.gperf"
      {"available_all_groups", &available_all_groups_cmd_entry},
#line 821 "cmds-gperf.gperf"
      {"list-9p", &list_9p_cmd_entry},
      {(char*)0}, {(char*)0},
#line 871 "cmds-gperf.gperf"
      {"lvm_set_filter", &lvm_set_filter_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 521 "cmds-gperf.gperf"
      {"available-all-groups", &available_all_groups_cmd_entry},
      {(char*)0}, {(char*)0},
#line 854 "cmds-gperf.gperf"
      {"luks_format_cipher", &luks_format_cipher_cmd_entry},
#line 872 "cmds-gperf.gperf"
      {"lvm-set-filter", &lvm_set_filter_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 640 "cmds-gperf.gperf"
      {"equal", &equal_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 855 "cmds-gperf.gperf"
      {"luks-format-cipher", &luks_format_cipher_cmd_entry},
#line 947 "cmds-gperf.gperf"
      {"mount_vfs", &mount_vfs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 948 "cmds-gperf.gperf"
      {"mount-vfs", &mount_vfs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 962 "cmds-gperf.gperf"
      {"ntfsresize_opts", &ntfsresize_opts_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 963 "cmds-gperf.gperf"
      {"ntfsresize-opts", &ntfsresize_opts_cmd_entry},
#line 1191 "cmds-gperf.gperf"
      {"wc_w", &wc_w_cmd_entry},
      {(char*)0},
#line 629 "cmds-gperf.gperf"
      {"e2fsck", &e2fsck_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1192 "cmds-gperf.gperf"
      {"wc-w", &wc_w_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1204 "cmds-gperf.gperf"
      {"zero_free_space", &zero_free_space_cmd_entry},
      {(char*)0},
#line 729 "cmds-gperf.gperf"
      {"inotify_init", &inotify_init_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 730 "cmds-gperf.gperf"
      {"inotify-init", &inotify_init_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1205 "cmds-gperf.gperf"
      {"zero-free-space", &zero_free_space_cmd_entry},
#line 1020 "cmds-gperf.gperf"
      {"resize2fs_M", &resize2fs_M_cmd_entry},
      {(char*)0},
#line 547 "cmds-gperf.gperf"
      {"btrfs_device_add", &btrfs_device_add_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1021 "cmds-gperf.gperf"
      {"resize2fs-M", &resize2fs_M_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 548 "cmds-gperf.gperf"
      {"btrfs-device-add", &btrfs_device_add_cmd_entry},
      {(char*)0},
#line 785 "cmds-gperf.gperf"
      {"is_chardev", &is_chardev_cmd_entry},
#line 887 "cmds-gperf.gperf"
      {"md_detail", &md_detail_cmd_entry},
#line 952 "cmds-gperf.gperf"
      {"nr_devices", &nr_devices_cmd_entry},
      {(char*)0}, {(char*)0},
#line 786 "cmds-gperf.gperf"
      {"is-chardev", &is_chardev_cmd_entry},
#line 888 "cmds-gperf.gperf"
      {"md-detail", &md_detail_cmd_entry},
#line 953 "cmds-gperf.gperf"
      {"nr-devices", &nr_devices_cmd_entry},
      {(char*)0},
#line 1086 "cmds-gperf.gperf"
      {"verbose", &set_verbose_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 873 "cmds-gperf.gperf"
      {"lvremove", &lvremove_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1127 "cmds-gperf.gperf"
      {"swapon-uuid", &swapon_uuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 807 "cmds-gperf.gperf"
      {"is_zero_device", &is_zero_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 808 "cmds-gperf.gperf"
      {"is-zero-device", &is_zero_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1101 "cmds-gperf.gperf"
      {"sh_lines", &sh_lines_cmd_entry},
#line 652 "cmds-gperf.gperf"
      {"fill_pattern", &fill_pattern_cmd_entry},
#line 1209 "cmds-gperf.gperf"
      {"zfile", &zfile_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1102 "cmds-gperf.gperf"
      {"sh-lines", &sh_lines_cmd_entry},
#line 653 "cmds-gperf.gperf"
      {"fill-pattern", &fill_pattern_cmd_entry},
      {(char*)0},
#line 1035 "cmds-gperf.gperf"
      {"set_append", &set_append_cmd_entry},
      {(char*)0},
#line 1126 "cmds-gperf.gperf"
      {"swapon_uuid", &swapon_uuid_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1036 "cmds-gperf.gperf"
      {"set-append", &set_append_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1072 "cmds-gperf.gperf"
      {"set_recovery_proc", &set_recovery_proc_cmd_entry},
#line 661 "cmds-gperf.gperf"
      {"get_append", &get_append_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 662 "cmds-gperf.gperf"
      {"get-append", &get_append_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1073 "cmds-gperf.gperf"
      {"set-recovery-proc", &set_recovery_proc_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1059 "cmds-gperf.gperf"
      {"memsize", &set_memsize_cmd_entry},
#line 1172 "cmds-gperf.gperf"
      {"vg_activate", &vg_activate_cmd_entry},
      {(char*)0},
#line 690 "cmds-gperf.gperf"
      {"get_recovery_proc", &get_recovery_proc_cmd_entry},
      {(char*)0},
#line 648 "cmds-gperf.gperf"
      {"file_architecture", &file_architecture_cmd_entry},
#line 1173 "cmds-gperf.gperf"
      {"vg-activate", &vg_activate_cmd_entry},
#line 619 "cmds-gperf.gperf"
      {"df_h", &df_h_cmd_entry},
      {(char*)0}, {(char*)0},
#line 649 "cmds-gperf.gperf"
      {"file-architecture", &file_architecture_cmd_entry},
      {(char*)0},
#line 620 "cmds-gperf.gperf"
      {"df-h", &df_h_cmd_entry},
#line 691 "cmds-gperf.gperf"
      {"get-recovery-proc", &get_recovery_proc_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 526 "cmds-gperf.gperf"
      {"blkid", &blkid_cmd_entry},
#line 803 "cmds-gperf.gperf"
      {"is_symlink", &is_symlink_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 804 "cmds-gperf.gperf"
      {"is-symlink", &is_symlink_cmd_entry},
      {(char*)0}, {(char*)0},
#line 643 "cmds-gperf.gperf"
      {"fallocate", &fallocate_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 869 "cmds-gperf.gperf"
      {"lvm_remove_all", &lvm_remove_all_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 870 "cmds-gperf.gperf"
      {"lvm-remove-all", &lvm_remove_all_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 557 "cmds-gperf.gperf"
      {"btrfs_fsck", &btrfs_fsck_cmd_entry},
      {(char*)0},
#line 1195 "cmds-gperf.gperf"
      {"write_append", &write_append_cmd_entry},
#line 580 "cmds-gperf.gperf"
      {"chown", &chown_cmd_entry},
      {(char*)0},
#line 558 "cmds-gperf.gperf"
      {"btrfs-fsck", &btrfs_fsck_cmd_entry},
      {(char*)0},
#line 1196 "cmds-gperf.gperf"
      {"write-append", &write_append_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1118 "cmds-gperf.gperf"
      {"swapoff_uuid", &swapoff_uuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1119 "cmds-gperf.gperf"
      {"swapoff-uuid", &swapoff_uuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 970 "cmds-gperf.gperf"
      {"part_disk", &part_disk_cmd_entry},
#line 1200 "cmds-gperf.gperf"
      {"zegrepi", &zegrepi_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 971 "cmds-gperf.gperf"
      {"part-disk", &part_disk_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 644 "cmds-gperf.gperf"
      {"fallocate64", &fallocate64_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 891 "cmds-gperf.gperf"
      {"md_stop", &md_stop_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 892 "cmds-gperf.gperf"
      {"md-stop", &md_stop_cmd_entry},
      {(char*)0},
#line 1093 "cmds-gperf.gperf"
      {"sfdisk-N", &sfdisk_N_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 912 "cmds-gperf.gperf"
      {"mkfs_b", &mkfs_b_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 913 "cmds-gperf.gperf"
      {"mkfs-b", &mkfs_b_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 910 "cmds-gperf.gperf"
      {"mkfifo", &mkfifo_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1092 "cmds-gperf.gperf"
      {"sfdisk_N", &sfdisk_N_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 725 "cmds-gperf.gperf"
      {"inotify_close", &inotify_close_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 726 "cmds-gperf.gperf"
      {"inotify-close", &inotify_close_cmd_entry},
      {(char*)0}, {(char*)0},
#line 549 "cmds-gperf.gperf"
      {"btrfs_device_delete", &btrfs_device_delete_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 550 "cmds-gperf.gperf"
      {"btrfs-device-delete", &btrfs_device_delete_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 928 "cmds-gperf.gperf"
      {"mkswap-U", &mkswap_U_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1008 "cmds-gperf.gperf"
      {"pwrite-device", &pwrite_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 626 "cmds-gperf.gperf"
      {"drop_caches", &drop_caches_cmd_entry},
#line 731 "cmds-gperf.gperf"
      {"inotify_read", &inotify_read_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 627 "cmds-gperf.gperf"
      {"drop-caches", &drop_caches_cmd_entry},
#line 732 "cmds-gperf.gperf"
      {"inotify-read", &inotify_read_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 927 "cmds-gperf.gperf"
      {"mkswap_U", &mkswap_U_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1007 "cmds-gperf.gperf"
      {"pwrite_device", &pwrite_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 960 "cmds-gperf.gperf"
      {"ntfsfix", &ntfsfix_cmd_entry},
#line 1179 "cmds-gperf.gperf"
      {"vgpvuuids", &vgpvuuids_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 574 "cmds-gperf.gperf"
      {"checksum", &checksum_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1174 "cmds-gperf.gperf"
      {"vg_activate_all", &vg_activate_all_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 608 "cmds-gperf.gperf"
      {"debug_cmdline", &debug_cmdline_cmd_entry},
      {(char*)0},
#line 1175 "cmds-gperf.gperf"
      {"vg-activate-all", &vg_activate_all_cmd_entry},
      {(char*)0},
#line 612 "cmds-gperf.gperf"
      {"debug_upload", &debug_upload_cmd_entry},
#line 609 "cmds-gperf.gperf"
      {"debug-cmdline", &debug_cmdline_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 613 "cmds-gperf.gperf"
      {"debug-upload", &debug_upload_cmd_entry},
      {(char*)0},
#line 1009 "cmds-gperf.gperf"
      {"read_file", &read_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1010 "cmds-gperf.gperf"
      {"read-file", &read_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 817 "cmds-gperf.gperf"
      {"lchown", &lchown_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1121 "cmds-gperf.gperf"
      {"swapon-device", &swapon_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1099 "cmds-gperf.gperf"
      {"sfdisk-l", &sfdisk_l_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1120 "cmds-gperf.gperf"
      {"swapon_device", &swapon_device_cmd_entry},
      {(char*)0}, {(char*)0},
#line 577 "cmds-gperf.gperf"
      {"checksums_out", &checksums_out_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 578 "cmds-gperf.gperf"
      {"checksums-out", &checksums_out_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1098 "cmds-gperf.gperf"
      {"sfdisk_l", &sfdisk_l_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1123 "cmds-gperf.gperf"
      {"swapon-file", &swapon_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1170 "cmds-gperf.gperf"
      {"vfs_uuid", &vfs_uuid_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1206 "cmds-gperf.gperf"
      {"zerofree", &zerofree_cmd_entry},
      {(char*)0},
#line 1171 "cmds-gperf.gperf"
      {"vfs-uuid", &vfs_uuid_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1122 "cmds-gperf.gperf"
      {"swapon_file", &swapon_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 633 "cmds-gperf.gperf"
      {"echo_daemon", &echo_daemon_cmd_entry},
      {(char*)0},
#line 659 "cmds-gperf.gperf"
      {"findfs-uuid", &findfs_uuid_cmd_entry},
      {(char*)0},
#line 926 "cmds-gperf.gperf"
      {"mkswap-L", &mkswap_L_cmd_entry},
#line 634 "cmds-gperf.gperf"
      {"echo-daemon", &echo_daemon_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 812 "cmds-gperf.gperf"
      {"kill_subprocess", &kill_subprocess_cmd_entry},
#line 954 "cmds-gperf.gperf"
      {"ntfs_3g_probe", &ntfs_3g_probe_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 813 "cmds-gperf.gperf"
      {"kill-subprocess", &kill_subprocess_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 955 "cmds-gperf.gperf"
      {"ntfs-3g-probe", &ntfs_3g_probe_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1112 "cmds-gperf.gperf"
      {"swapoff_device", &swapoff_device_cmd_entry},
      {(char*)0},
#line 658 "cmds-gperf.gperf"
      {"findfs_uuid", &findfs_uuid_cmd_entry},
#line 708 "cmds-gperf.gperf"
      {"glob_expand", &glob_expand_cmd_entry},
#line 925 "cmds-gperf.gperf"
      {"mkswap_L", &mkswap_L_cmd_entry},
#line 1113 "cmds-gperf.gperf"
      {"swapoff-device", &swapoff_device_cmd_entry},
      {(char*)0}, {(char*)0},
#line 709 "cmds-gperf.gperf"
      {"glob-expand", &glob_expand_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1177 "cmds-gperf.gperf"
      {"vglvuuids", &vglvuuids_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1163 "cmds-gperf.gperf"
      {"upload-offset", &upload_offset_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 858 "cmds-gperf.gperf"
      {"luks_open", &luks_open_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 859 "cmds-gperf.gperf"
      {"luks-open", &luks_open_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1114 "cmds-gperf.gperf"
      {"swapoff_file", &swapoff_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1115 "cmds-gperf.gperf"
      {"swapoff-file", &swapoff_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1162 "cmds-gperf.gperf"
      {"upload_offset", &upload_offset_cmd_entry},
#line 477 "cmds-gperf.gperf"
      {"add_drive", &add_drive_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 478 "cmds-gperf.gperf"
      {"add-drive", &add_drive_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1202 "cmds-gperf.gperf"
      {"zero_device", &zero_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1203 "cmds-gperf.gperf"
      {"zero-device", &zero_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 589 "cmds-gperf.gperf"
      {"copy_device_to_device", &copy_device_to_device_cmd_entry},
      {(char*)0}, {(char*)0},
#line 591 "cmds-gperf.gperf"
      {"copy_device_to_file", &copy_device_to_file_cmd_entry},
      {(char*)0},
#line 555 "cmds-gperf.gperf"
      {"btrfs_filesystem_sync", &btrfs_filesystem_sync_cmd_entry},
      {(char*)0},
#line 553 "cmds-gperf.gperf"
      {"btrfs_filesystem_resize", &btrfs_filesystem_resize_cmd_entry},
#line 551 "cmds-gperf.gperf"
      {"btrfs_filesystem_balance", &btrfs_filesystem_balance_cmd_entry},
      {(char*)0},
#line 590 "cmds-gperf.gperf"
      {"copy-device-to-device", &copy_device_to_device_cmd_entry},
      {(char*)0}, {(char*)0},
#line 592 "cmds-gperf.gperf"
      {"copy-device-to-file", &copy_device_to_file_cmd_entry},
      {(char*)0},
#line 556 "cmds-gperf.gperf"
      {"btrfs-filesystem-sync", &btrfs_filesystem_sync_cmd_entry},
      {(char*)0},
#line 554 "cmds-gperf.gperf"
      {"btrfs-filesystem-resize", &btrfs_filesystem_resize_cmd_entry},
#line 552 "cmds-gperf.gperf"
      {"btrfs-filesystem-balance", &btrfs_filesystem_balance_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 860 "cmds-gperf.gperf"
      {"luks_open_ro", &luks_open_ro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 479 "cmds-gperf.gperf"
      {"add_drive_opts", &add_drive_opts_cmd_entry},
      {(char*)0},
#line 861 "cmds-gperf.gperf"
      {"luks-open-ro", &luks_open_ro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 727 "cmds-gperf.gperf"
      {"inotify_files", &inotify_files_cmd_entry},
      {(char*)0}, {(char*)0},
#line 480 "cmds-gperf.gperf"
      {"add-drive-opts", &add_drive_opts_cmd_entry},
#line 1208 "cmds-gperf.gperf"
      {"zfgrepi", &zfgrepi_cmd_entry},
#line 728 "cmds-gperf.gperf"
      {"inotify-files", &inotify_files_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 896 "cmds-gperf.gperf"
      {"mkdir_p", &mkdir_p_cmd_entry},
#line 482 "cmds-gperf.gperf"
      {"add_drive_ro", &add_drive_ro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 897 "cmds-gperf.gperf"
      {"mkdir-p", &mkdir_p_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 483 "cmds-gperf.gperf"
      {"add-drive-ro", &add_drive_ro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 867 "cmds-gperf.gperf"
      {"lvm_clear_filter", &lvm_clear_filter_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 868 "cmds-gperf.gperf"
      {"lvm-clear-filter", &lvm_clear_filter_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1022 "cmds-gperf.gperf"
      {"resize2fs_size", &resize2fs_size_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1023 "cmds-gperf.gperf"
      {"resize2fs-size", &resize2fs_size_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 964 "cmds-gperf.gperf"
      {"ntfsresize_size", &ntfsresize_size_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 965 "cmds-gperf.gperf"
      {"ntfsresize-size", &ntfsresize_size_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 914 "cmds-gperf.gperf"
      {"mkfs_btrfs", &mkfs_btrfs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 915 "cmds-gperf.gperf"
      {"mkfs-btrfs", &mkfs_btrfs_cmd_entry},
      {(char*)0},
#line 1125 "cmds-gperf.gperf"
      {"swapon-label", &swapon_label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 623 "cmds-gperf.gperf"
      {"download", &download_cmd_entry},
      {(char*)0}, {(char*)0},
#line 898 "cmds-gperf.gperf"
      {"mkdtemp", &mkdtemp_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 1124 "cmds-gperf.gperf"
      {"swapon_label", &swapon_label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 631 "cmds-gperf.gperf"
      {"e2fsck-f", &e2fsck_f_cmd_entry},
      {(char*)0}, {(char*)0},
#line 781 "cmds-gperf.gperf"
      {"is_blockdev", &is_blockdev_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 782 "cmds-gperf.gperf"
      {"is-blockdev", &is_blockdev_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 733 "cmds-gperf.gperf"
      {"inotify_rm_watch", &inotify_rm_watch_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 630 "cmds-gperf.gperf"
      {"e2fsck_f", &e2fsck_f_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 734 "cmds-gperf.gperf"
      {"inotify-rm-watch", &inotify_rm_watch_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1116 "cmds-gperf.gperf"
      {"swapoff_label", &swapoff_label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1117 "cmds-gperf.gperf"
      {"swapoff-label", &swapoff_label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 848 "cmds-gperf.gperf"
      {"luks_add_key", &luks_add_key_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 849 "cmds-gperf.gperf"
      {"luks-add-key", &luks_add_key_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 916 "cmds-gperf.gperf"
      {"mkfs_opts", &mkfs_opts_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 917 "cmds-gperf.gperf"
      {"mkfs-opts", &mkfs_opts_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 569 "cmds-gperf.gperf"
      {"btrfs_subvolume_snapshot", &btrfs_subvolume_snapshot_cmd_entry},
      {(char*)0}, {(char*)0},
#line 567 "cmds-gperf.gperf"
      {"btrfs_subvolume_set_default", &btrfs_subvolume_set_default_cmd_entry},
      {(char*)0},
#line 570 "cmds-gperf.gperf"
      {"btrfs-subvolume-snapshot", &btrfs_subvolume_snapshot_cmd_entry},
      {(char*)0}, {(char*)0},
#line 568 "cmds-gperf.gperf"
      {"btrfs-subvolume-set-default", &btrfs_subvolume_set_default_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 561 "cmds-gperf.gperf"
      {"btrfs_subvolume_create", &btrfs_subvolume_create_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 562 "cmds-gperf.gperf"
      {"btrfs-subvolume-create", &btrfs_subvolume_create_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 930 "cmds-gperf.gperf"
      {"mkswap-file", &mkswap_file_cmd_entry},
      {(char*)0}, {(char*)0},
#line 717 "cmds-gperf.gperf"
      {"hexdump", &hexdump_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 575 "cmds-gperf.gperf"
      {"checksum_device", &checksum_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 576 "cmds-gperf.gperf"
      {"checksum-device", &checksum_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 601 "cmds-gperf.gperf"
      {"copy_size", &copy_size_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 602 "cmds-gperf.gperf"
      {"copy-size", &copy_size_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 929 "cmds-gperf.gperf"
      {"mkswap_file", &mkswap_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 828 "cmds-gperf.gperf"
      {"list_filesystems", &list_filesystems_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 829 "cmds-gperf.gperf"
      {"list-filesystems", &list_filesystems_cmd_entry},
      {(char*)0}, {(char*)0},
#line 1095 "cmds-gperf.gperf"
      {"sfdisk-disk-geometry", &sfdisk_disk_geometry_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1040 "cmds-gperf.gperf"
      {"attach-method", &set_attach_method_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1097 "cmds-gperf.gperf"
      {"sfdisk-kernel-geometry", &sfdisk_kernel_geometry_cmd_entry},
      {(char*)0},
#line 535 "cmds-gperf.gperf"
      {"blockdev_getss", &blockdev_getss_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 536 "cmds-gperf.gperf"
      {"blockdev-getss", &blockdev_getss_cmd_entry},
#line 1094 "cmds-gperf.gperf"
      {"sfdisk_disk_geometry", &sfdisk_disk_geometry_cmd_entry},
      {(char*)0}, {(char*)0},
#line 533 "cmds-gperf.gperf"
      {"blockdev_getsize64", &blockdev_getsize64_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 534 "cmds-gperf.gperf"
      {"blockdev-getsize64", &blockdev_getsize64_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 1096 "cmds-gperf.gperf"
      {"sfdisk_kernel_geometry", &sfdisk_kernel_geometry_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 905 "cmds-gperf.gperf"
      {"mke2journal", &mke2journal_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 908 "cmds-gperf.gperf"
      {"mke2journal_U", &mke2journal_U_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 909 "cmds-gperf.gperf"
      {"mke2journal-U", &mke2journal_U_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 539 "cmds-gperf.gperf"
      {"blockdev_rereadpt", &blockdev_rereadpt_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 540 "cmds-gperf.gperf"
      {"blockdev-rereadpt", &blockdev_rereadpt_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 543 "cmds-gperf.gperf"
      {"blockdev_setro", &blockdev_setro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 544 "cmds-gperf.gperf"
      {"blockdev-setro", &blockdev_setro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 565 "cmds-gperf.gperf"
      {"btrfs_subvolume_list", &btrfs_subvolume_list_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 531 "cmds-gperf.gperf"
      {"blockdev_getro", &blockdev_getro_cmd_entry},
#line 566 "cmds-gperf.gperf"
      {"btrfs-subvolume-list", &btrfs_subvolume_list_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 532 "cmds-gperf.gperf"
      {"blockdev-getro", &blockdev_getro_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 657 "cmds-gperf.gperf"
      {"findfs-label", &findfs_label_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 563 "cmds-gperf.gperf"
      {"btrfs_subvolume_delete", &btrfs_subvolume_delete_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 564 "cmds-gperf.gperf"
      {"btrfs-subvolume-delete", &btrfs_subvolume_delete_cmd_entry},
#line 900 "cmds-gperf.gperf"
      {"mke2fs-J", &mke2fs_J_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 656 "cmds-gperf.gperf"
      {"findfs_label", &findfs_label_cmd_entry},
      {(char*)0},
#line 904 "cmds-gperf.gperf"
      {"mke2fs-JU", &mke2fs_JU_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 593 "cmds-gperf.gperf"
      {"copy_file_to_device", &copy_file_to_device_cmd_entry},
      {(char*)0}, {(char*)0},
#line 899 "cmds-gperf.gperf"
      {"mke2fs_J", &mke2fs_J_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 903 "cmds-gperf.gperf"
      {"mke2fs_JU", &mke2fs_JU_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 594 "cmds-gperf.gperf"
      {"copy-file-to-device", &copy_file_to_device_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 856 "cmds-gperf.gperf"
      {"luks_kill_slot", &luks_kill_slot_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 857 "cmds-gperf.gperf"
      {"luks-kill-slot", &luks_kill_slot_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 906 "cmds-gperf.gperf"
      {"mke2journal_L", &mke2journal_L_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 907 "cmds-gperf.gperf"
      {"mke2journal-L", &mke2journal_L_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 1168 "cmds-gperf.gperf"
      {"vfs_type", &vfs_type_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 1169 "cmds-gperf.gperf"
      {"vfs-type", &vfs_type_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 902 "cmds-gperf.gperf"
      {"mke2fs-JL", &mke2fs_JL_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 595 "cmds-gperf.gperf"
      {"copy_file_to_file", &copy_file_to_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 596 "cmds-gperf.gperf"
      {"copy-file-to-file", &copy_file_to_file_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 901 "cmds-gperf.gperf"
      {"mke2fs_JL", &mke2fs_JL_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 541 "cmds-gperf.gperf"
      {"blockdev_setbsz", &blockdev_setbsz_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 542 "cmds-gperf.gperf"
      {"blockdev-setbsz", &blockdev_setbsz_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 529 "cmds-gperf.gperf"
      {"blockdev_getbsz", &blockdev_getbsz_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 530 "cmds-gperf.gperf"
      {"blockdev-getbsz", &blockdev_getbsz_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 545 "cmds-gperf.gperf"
      {"blockdev_setrw", &blockdev_setrw_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 546 "cmds-gperf.gperf"
      {"blockdev-setrw", &blockdev_setrw_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 624 "cmds-gperf.gperf"
      {"download_offset", &download_offset_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 625 "cmds-gperf.gperf"
      {"download-offset", &download_offset_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 537 "cmds-gperf.gperf"
      {"blockdev_getsz", &blockdev_getsz_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 538 "cmds-gperf.gperf"
      {"blockdev-getsz", &blockdev_getsz_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 723 "cmds-gperf.gperf"
      {"inotify_add_watch", &inotify_add_watch_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 724 "cmds-gperf.gperf"
      {"inotify-add-watch", &inotify_add_watch_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 485 "cmds-gperf.gperf"
      {"add_drive_ro_with_if", &add_drive_ro_with_if_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 486 "cmds-gperf.gperf"
      {"add-drive-ro-with-if", &add_drive_ro_with_if_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 487 "cmds-gperf.gperf"
      {"add_drive_with_if", &add_drive_with_if_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 488 "cmds-gperf.gperf"
      {"add-drive-with-if", &add_drive_with_if_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 527 "cmds-gperf.gperf"
      {"blockdev_flushbufs", &blockdev_flushbufs_cmd_entry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 528 "cmds-gperf.gperf"
      {"blockdev-flushbufs", &blockdev_flushbufs_cmd_entry}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (s && (((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
            return &wordlist[key];
        }
    }
  return 0;
}