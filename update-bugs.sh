#!/bin/bash -
# update-bugs.sh
# Copyright (C) 2009-2015 Red Hat Inc.
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
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

# In 'make dist' this is used to update the top level 'BUGS' file with
# the current bug list from Red Hat Bugzilla (bugzilla.redhat.com).

# First of all fetch the bugs from the database.  This might fail,
# eg. if there is no net access or no 'bugzilla' program, but if that
# happens just exit and leave the BUGS file alone.

bugzilla --nosslverify query -c libguestfs \
  --outputformat='%{bug_id} %{bug_status} %{short_desc}' > .bugs.tmp || exit 0

perl -e '
    sub bugclass {
      local $_ = shift;
      return 1 if /NEW/;
      return 2 if /ASSIGNED/;
      return 3 if /ON_DEV/;
      return 4 if /POST/;
      return 5 if /MODIFIED/;
      return 6 if /ON_QA/;
      return 7 if /VERIFIED/;
      return 8 if /RELEASE_PENDING/;
      return 9 #if /CLOSED/;
    }
    sub compare {
      $a->[0] <=> $b->[0] || $a->[1] <=> $b->[1]
    }
    while (<>) {
      /^(\d+) (\w+) (.*)/; push @bugs, [bugclass($2), $1, $2, $3];
    }
    # No bugs?  Fail.
    print STDERR "#bugs = ", 0+@bugs;
    if (0+@bugs == 0) {
        die "failed to get list of bugs\n"
    }
    foreach (sort compare @bugs) {
      print $_->[1], " ", $_->[2], " ", $_->[3], "\n";
    }
' < .bugs.tmp > .bugs.tmp2 || exit 0

# Any errors from now on are fatal.
set -e

# Print prologue.
echo 'NOTE: This file is automatically generated from "update-bugs.sh".'
echo -n 'Last updated: ' ; date +'%Y-%m-%d'
echo '
This contains a local list of the bugs that are open against
libguestfs.  Bugs are tracked in the Red Hat Bugzilla database
at https://bugzilla.redhat.com/ and to report a new bug you
should follow this link:

https://bugzilla.redhat.com/enter_bug.cgi?component=libguestfs&product=Virtualization+Tools

When reporting a new bug, please check:

 - That the bug has not been reported already.
 - That you are testing a recent version.
 - Describe the bug accurately, and give a way to reproduce it.
 - Include the version of libguestfs, distro version and any other
   relevant information.
 - Attach the complete output of "libguestfs-test-tool".
'

lastclass=X
count=0
while read bugno status summary; do
    # Ignore RELEASE_PENDING or CLOSED bugs in this list.
    if [ "$status" = "RELEASE_PENDING" -o "$status" = "CLOSED" ]; then
        continue
    fi

    # Treat ASSIGNED the same as NEW.
    # Treat MODIFIED, POST and ON_QA as the same.
    case "$status" in
        ASSIGNED) bugclass=NEW ;;
        POST|ON_QA) bugclass=MODIFIED ;;
        *) bugclass=$status ;;
    esac

    # perl sort returns the bugs sorted by status, NEW, ASSIGNED,
    # MODIFIED, ..., CLOSED.  Therefore start a new section when the
    # status field changes.
    if [ "$bugclass" != "$lastclass" ]; then
        if [ $count -ge 1 ]; then
            echo "($count bugs)"
            echo
        fi
        count=0
        echo '--------------------------------------------------'
        case "$bugclass" in
            NEW)
                echo 'Bugs in NEW or ASSIGNED state are open and waiting for someone to fix.' ;;
            NEEDINFO)
                echo 'Bugs in NEEDINFO state require additional information.' ;;
            MODIFIED)
                echo 'Bugs in MODIFIED, POST or ON_QA state are fixed.'
                echo 'You can help by testing the fixes.'
                ;;
            *)
                echo "These bugs are in the $status state." ;;
        esac
        echo
    fi
    ((count++)) ||:
    lastclass=$bugclass

    # Display the bug.
    echo "$bugno $status https://bugzilla.redhat.com/show_bug.cgi?id=$bugno"
    echo "  $summary"
    echo
done < .bugs.tmp2

if [ $count -ge 1 ]; then
    echo "($count bugs)"
    echo
fi
echo "End of BUGS file."

# Clean up temporary files.
rm .bugs.tmp .bugs.tmp2
