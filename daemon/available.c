/* libguestfs - the guestfsd daemon
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/guestfs_protocol.h"
#include "daemon.h"
#include "actions.h"

int
do_available (char *const *groups)
{
  int av;
  size_t i, j;

  for (i = 0; groups[i] != NULL; ++i) {
    for (j = 0; optgroups[j].group != NULL; ++j) {
      if (STREQ (groups[i], optgroups[j].group)) {
        av = optgroups[j].available ();
        if (!av) {
          reply_with_error ("%s: group not available", optgroups[j].group);
          return -1;
        }
        break; /* out of for (j) loop */
      }
    }

    /* Unknown group? */
    if (optgroups[j].group == NULL) {
      reply_with_error ("%s: unknown group", groups[i]);
      return -1;
    }
  }

  return 0;
}
