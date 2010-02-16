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

struct guestfs_int_bool {
  int32_t i;
  int32_t b;
};

struct guestfs_int_bool_list {
  uint32_t len;
  struct guestfs_int_bool *val;
};

extern void guestfs_free_int_bool (struct guestfs_int_bool *);
extern void guestfs_free_int_bool_list (struct guestfs_int_bool_list *);

struct guestfs_lvm_pv {
  char *pv_name;
  char pv_uuid[32]; /* this is NOT nul-terminated, be careful when printing */
  char *pv_fmt;
  uint64_t pv_size;
  uint64_t dev_size;
  uint64_t pv_free;
  uint64_t pv_used;
  char *pv_attr;
  int64_t pv_pe_count;
  int64_t pv_pe_alloc_count;
  char *pv_tags;
  uint64_t pe_start;
  int64_t pv_mda_count;
  uint64_t pv_mda_free;
};

struct guestfs_lvm_pv_list {
  uint32_t len;
  struct guestfs_lvm_pv *val;
};

extern void guestfs_free_lvm_pv (struct guestfs_lvm_pv *);
extern void guestfs_free_lvm_pv_list (struct guestfs_lvm_pv_list *);

struct guestfs_lvm_vg {
  char *vg_name;
  char vg_uuid[32]; /* this is NOT nul-terminated, be careful when printing */
  char *vg_fmt;
  char *vg_attr;
  uint64_t vg_size;
  uint64_t vg_free;
  char *vg_sysid;
  uint64_t vg_extent_size;
  int64_t vg_extent_count;
  int64_t vg_free_count;
  int64_t max_lv;
  int64_t max_pv;
  int64_t pv_count;
  int64_t lv_count;
  int64_t snap_count;
  int64_t vg_seqno;
  char *vg_tags;
  int64_t vg_mda_count;
  uint64_t vg_mda_free;
};

struct guestfs_lvm_vg_list {
  uint32_t len;
  struct guestfs_lvm_vg *val;
};

extern void guestfs_free_lvm_vg (struct guestfs_lvm_vg *);
extern void guestfs_free_lvm_vg_list (struct guestfs_lvm_vg_list *);

struct guestfs_lvm_lv {
  char *lv_name;
  char lv_uuid[32]; /* this is NOT nul-terminated, be careful when printing */
  char *lv_attr;
  int64_t lv_major;
  int64_t lv_minor;
  int64_t lv_kernel_major;
  int64_t lv_kernel_minor;
  uint64_t lv_size;
  int64_t seg_count;
  char *origin;
  float snap_percent; /* [0..100] or -1 */
  float copy_percent; /* [0..100] or -1 */
  char *move_pv;
  char *lv_tags;
  char *mirror_log;
  char *modules;
};

struct guestfs_lvm_lv_list {
  uint32_t len;
  struct guestfs_lvm_lv *val;
};

extern void guestfs_free_lvm_lv (struct guestfs_lvm_lv *);
extern void guestfs_free_lvm_lv_list (struct guestfs_lvm_lv_list *);

struct guestfs_stat {
  int64_t dev;
  int64_t ino;
  int64_t mode;
  int64_t nlink;
  int64_t uid;
  int64_t gid;
  int64_t rdev;
  int64_t size;
  int64_t blksize;
  int64_t blocks;
  int64_t atime;
  int64_t mtime;
  int64_t ctime;
};

struct guestfs_stat_list {
  uint32_t len;
  struct guestfs_stat *val;
};

extern void guestfs_free_stat (struct guestfs_stat *);
extern void guestfs_free_stat_list (struct guestfs_stat_list *);

struct guestfs_statvfs {
  int64_t bsize;
  int64_t frsize;
  int64_t blocks;
  int64_t bfree;
  int64_t bavail;
  int64_t files;
  int64_t ffree;
  int64_t favail;
  int64_t fsid;
  int64_t flag;
  int64_t namemax;
};

struct guestfs_statvfs_list {
  uint32_t len;
  struct guestfs_statvfs *val;
};

extern void guestfs_free_statvfs (struct guestfs_statvfs *);
extern void guestfs_free_statvfs_list (struct guestfs_statvfs_list *);

struct guestfs_dirent {
  int64_t ino;
  char ftyp;
  char *name;
};

struct guestfs_dirent_list {
  uint32_t len;
  struct guestfs_dirent *val;
};

extern void guestfs_free_dirent (struct guestfs_dirent *);
extern void guestfs_free_dirent_list (struct guestfs_dirent_list *);

struct guestfs_version {
  int64_t major;
  int64_t minor;
  int64_t release;
  char *extra;
};

struct guestfs_version_list {
  uint32_t len;
  struct guestfs_version *val;
};

extern void guestfs_free_version (struct guestfs_version *);
extern void guestfs_free_version_list (struct guestfs_version_list *);

struct guestfs_xattr {
  char *attrname;
  uint32_t attrval_len;
  char *attrval;
};

struct guestfs_xattr_list {
  uint32_t len;
  struct guestfs_xattr *val;
};

extern void guestfs_free_xattr (struct guestfs_xattr *);
extern void guestfs_free_xattr_list (struct guestfs_xattr_list *);

struct guestfs_inotify_event {
  int64_t in_wd;
  uint32_t in_mask;
  uint32_t in_cookie;
  char *in_name;
};

struct guestfs_inotify_event_list {
  uint32_t len;
  struct guestfs_inotify_event *val;
};

extern void guestfs_free_inotify_event (struct guestfs_inotify_event *);
extern void guestfs_free_inotify_event_list (struct guestfs_inotify_event_list *);

struct guestfs_partition {
  int32_t part_num;
  uint64_t part_start;
  uint64_t part_end;
  uint64_t part_size;
};

struct guestfs_partition_list {
  uint32_t len;
  struct guestfs_partition *val;
};

extern void guestfs_free_partition (struct guestfs_partition *);
extern void guestfs_free_partition_list (struct guestfs_partition_list *);

