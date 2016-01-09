/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM:
 *   generator/ *.ml
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2016 Red Hat Inc.
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

#include "guestfs-gobject.h"

/**
 * SECTION:struct-statvfs
 * @title: GuestfsStatVFS
 * @include: guestfs-gobject.h
 */

static GuestfsStatVFS *
guestfs_statvfs_copy (GuestfsStatVFS *src)
{
  return g_slice_dup (GuestfsStatVFS, src);
}

static void
guestfs_statvfs_free (GuestfsStatVFS *src)
{
  g_slice_free (GuestfsStatVFS, src);
}

G_DEFINE_BOXED_TYPE (GuestfsStatVFS, guestfs_statvfs, guestfs_statvfs_copy, guestfs_statvfs_free)
