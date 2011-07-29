/* libguestfs - guestfish and guestmount shared option parsing
 * Copyright (C) 2010 Red Hat Inc.
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
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "guestfs.h"

#include "options.h"

/* Implements the guts of the '-d' option.
 * Returns the number of drives added (> 0), or -1 for failure.
 */
int
add_libvirt_drives (const char *guest)
{
  struct guestfs_add_domain_argv optargs = { .bitmask = 0 };

  if (libvirt_uri) {
    optargs.bitmask |= GUESTFS_ADD_DOMAIN_LIBVIRTURI_BITMASK;
    optargs.libvirturi = libvirt_uri;
  }
  if (read_only) {
    optargs.bitmask |= GUESTFS_ADD_DOMAIN_READONLY_BITMASK;
    optargs.readonly = 1;
  }
  if (live) {
    optargs.bitmask |= GUESTFS_ADD_DOMAIN_LIVE_BITMASK;
    optargs.live = 1;
  }

  return guestfs_add_domain_argv (g, guest, &optargs);
}