/* Tests of chown.
   Copyright (C) 2009, 2010 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Eric Blake <ebb9@byu.net>, 2009.  */

#include <config.h>

#include <unistd.h>

#include "signature.h"
SIGNATURE_CHECK (chown, int, (char const *, uid_t, gid_t));

#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#include "mgetgroups.h"
#include "stat-time.h"
#include "macros.h"

#define BASE "test-chown.t"

#include "test-chown.h"

int
main (void)
{
  /* Remove any leftovers from a previous partial run.  */
  system ("rm -rf " BASE "*");

  return test_chown (chown, true);
}
