#!/bin/bash -
# (C) Copyright 2015-2016 Red Hat Inc.
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

# See guestfs-hacking(1) section "HOW OCAML PROGRAMS ARE COMPILED AND LINKED"

# Hack automake to link OCaml-based binaries properly.
# There is no other way to add the -cclib parameter to the end of
# the command line.

# Usage:
#   ./ocaml-link.sh -cclib '...' -- ARGS
# Pass the cclib argument separately, and the rest as separated
# arguments.

TEMP=`getopt -a -o '' --long 'cclib:' \
  -n "$(basename $0)" -- "$@"`
if [ $? != 0 ] ; then echo "Terminating..." >&2 ; exit 1 ; fi
eval set -- "$TEMP"

cclib=

while true ; do
  case "$1" in
    -cclib|--cclib) cclib="$2" ; shift 2 ;;
    --) shift ; break ;;
    *) echo "Internal error!" ; exit 1 ;;
  esac
done

exec "$@" -linkpkg -cclib "${cclib}"
