#!/bin/bash -
# libguestfs
# Copyright (C) 2009 Red Hat Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

# Test if we can handle qemu failure during launch.

set -e

rm -f test.img

../fish/guestfish <<'EOF'
alloc test.img 10M

append "root=/dev/null"
-run

# We should now be able to rerun the subprocess.
append ""
run
ping-daemon
EOF

rm -f test.img