# libguestfs generated file
# WARNING: THIS FILE IS GENERATED FROM:
#   src/generator.ml
# ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
#
# Copyright (C) 2009-2010 Red Hat Inc.
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

=pod

=head1 NAME

Sys::Guestfs - Perl bindings for libguestfs

=head1 SYNOPSIS

 use Sys::Guestfs;

 my $h = Sys::Guestfs->new ();
 $h->add_drive ('guest.img');
 $h->launch ();
 $h->mount ('/dev/sda1', '/');
 $h->touch ('/hello');
 $h->sync ();

=head1 DESCRIPTION

The C<Sys::Guestfs> module provides a Perl XS binding to the
libguestfs API for examining and modifying virtual machine
disk images.

Amongst the things this is good for: making batch configuration
changes to guests, getting disk used/free statistics (see also:
virt-df), migrating between virtualization systems (see also:
virt-p2v), performing partial backups, performing partial guest
clones, cloning guests and changing registry/UUID/hostname info, and
much else besides.

Libguestfs uses Linux kernel and qemu code, and can access any type of
guest filesystem that Linux and qemu can, including but not limited
to: ext2/3/4, btrfs, FAT and NTFS, LVM, many different disk partition
schemes, qcow, qcow2, vmdk.

Libguestfs provides ways to enumerate guest storage (eg. partitions,
LVs, what filesystem is in each LV, etc.).  It can also run commands
in the context of the guest.  Also you can access filesystems over FTP.

See also L<Sys::Guestfs::Lib(3)> for a set of useful library
functions for using libguestfs from Perl, including integration
with libvirt.

=head1 ERRORS

All errors turn into calls to C<croak> (see L<Carp(3)>).

=head1 METHODS

=over 4

=cut

package Sys::Guestfs;

use strict;
use warnings;

require XSLoader;
XSLoader::load ('Sys::Guestfs');

=item $h = Sys::Guestfs->new ();

Create a new guestfs handle.

=cut

sub new {
  my $proto = shift;
  my $class = ref ($proto) || $proto;

  my $self = Sys::Guestfs::_create ();
  bless $self, $class;
  return $self;
}

=item $h->add_cdrom ($filename);

This function adds a virtual CD-ROM disk image to the guest.

This is equivalent to the qemu parameter C<-cdrom filename>.

Notes:

=over 4

=item *

This call checks for the existence of C<filename>.  This
stops you from specifying other types of drive which are supported
by qemu such as C<nbd:> and C<http:> URLs.  To specify those, use
the general C<$h-E<gt>config> call instead.

=item *

If you just want to add an ISO file (often you use this as an
efficient way to transfer large files into the guest), then you
should probably use C<$h-E<gt>add_drive_ro> instead.

=back

=item $h->add_drive ($filename);

This function adds a virtual machine disk image C<filename> to the
guest.  The first time you call this function, the disk appears as IDE
disk 0 (C</dev/sda>) in the guest, the second time as C</dev/sdb>, and
so on.

You don't necessarily need to be root when using libguestfs.  However
you obviously do need sufficient permissions to access the filename
for whatever operations you want to perform (ie. read access if you
just want to read the image or write access if you want to modify the
image).

This is equivalent to the qemu parameter
C<-drive file=filename,cache=off,if=...>.

C<cache=off> is omitted in cases where it is not supported by
the underlying filesystem.

C<if=...> is set at compile time by the configuration option
C<./configure --with-drive-if=...>.  In the rare case where you
might need to change this at run time, use C<$h-E<gt>add_drive_with_if>
or C<$h-E<gt>add_drive_ro_with_if>.

Note that this call checks for the existence of C<filename>.  This
stops you from specifying other types of drive which are supported
by qemu such as C<nbd:> and C<http:> URLs.  To specify those, use
the general C<$h-E<gt>config> call instead.

=item $h->add_drive_ro ($filename);

This adds a drive in snapshot mode, making it effectively
read-only.

Note that writes to the device are allowed, and will be seen for
the duration of the guestfs handle, but they are written
to a temporary file which is discarded as soon as the guestfs
handle is closed.  We don't currently have any method to enable
changes to be committed, although qemu can support this.

This is equivalent to the qemu parameter
C<-drive file=filename,snapshot=on,if=...>.

C<if=...> is set at compile time by the configuration option
C<./configure --with-drive-if=...>.  In the rare case where you
might need to change this at run time, use C<$h-E<gt>add_drive_with_if>
or C<$h-E<gt>add_drive_ro_with_if>.

Note that this call checks for the existence of C<filename>.  This
stops you from specifying other types of drive which are supported
by qemu such as C<nbd:> and C<http:> URLs.  To specify those, use
the general C<$h-E<gt>config> call instead.

=item $h->add_drive_ro_with_if ($filename, $iface);

This is the same as C<$h-E<gt>add_drive_ro> but it allows you
to specify the QEMU interface emulation to use at run time.

=item $h->add_drive_with_if ($filename, $iface);

This is the same as C<$h-E<gt>add_drive> but it allows you
to specify the QEMU interface emulation to use at run time.

=item $h->aug_close ();

Close the current Augeas handle and free up any resources
used by it.  After calling this, you have to call
C<$h-E<gt>aug_init> again before you can use any other
Augeas functions.

=item %nrnodescreated = $h->aug_defnode ($name, $expr, $val);

Defines a variable C<name> whose value is the result of
evaluating C<expr>.

If C<expr> evaluates to an empty nodeset, a node is created,
equivalent to calling C<$h-E<gt>aug_set> C<expr>, C<value>.
C<name> will be the nodeset containing that single node.

On success this returns a pair containing the
number of nodes in the nodeset, and a boolean flag
if a node was created.

=item $nrnodes = $h->aug_defvar ($name, $expr);

Defines an Augeas variable C<name> whose value is the result
of evaluating C<expr>.  If C<expr> is NULL, then C<name> is
undefined.

On success this returns the number of nodes in C<expr>, or
C<0> if C<expr> evaluates to something which is not a nodeset.

=item $val = $h->aug_get ($augpath);

Look up the value associated with C<path>.  If C<path>
matches exactly one node, the C<value> is returned.

=item $h->aug_init ($root, $flags);

Create a new Augeas handle for editing configuration files.
If there was any previous Augeas handle associated with this
guestfs session, then it is closed.

You must call this before using any other C<$h-E<gt>aug_*>
commands.

C<root> is the filesystem root.  C<root> must not be NULL,
use C</> instead.

The flags are the same as the flags defined in
E<lt>augeas.hE<gt>, the logical I<or> of the following
integers:

=over 4

=item C<AUG_SAVE_BACKUP> = 1

Keep the original file with a C<.augsave> extension.

=item C<AUG_SAVE_NEWFILE> = 2

Save changes into a file with extension C<.augnew>, and
do not overwrite original.  Overrides C<AUG_SAVE_BACKUP>.

=item C<AUG_TYPE_CHECK> = 4

Typecheck lenses (can be expensive).

=item C<AUG_NO_STDINC> = 8

Do not use standard load path for modules.

=item C<AUG_SAVE_NOOP> = 16

Make save a no-op, just record what would have been changed.

=item C<AUG_NO_LOAD> = 32

Do not load the tree in C<$h-E<gt>aug_init>.

=back

To close the handle, you can call C<$h-E<gt>aug_close>.

To find out more about Augeas, see L<http://augeas.net/>.

=item $h->aug_insert ($augpath, $label, $before);

Create a new sibling C<label> for C<path>, inserting it into
the tree before or after C<path> (depending on the boolean
flag C<before>).

C<path> must match exactly one existing node in the tree, and
C<label> must be a label, ie. not contain C</>, C<*> or end
with a bracketed index C<[N]>.

=item $h->aug_load ();

Load files into the tree.

See C<aug_load> in the Augeas documentation for the full gory
details.

=item @matches = $h->aug_ls ($augpath);

This is just a shortcut for listing C<$h-E<gt>aug_match>
C<path/*> and sorting the resulting nodes into alphabetical order.

=item @matches = $h->aug_match ($augpath);

Returns a list of paths which match the path expression C<path>.
The returned paths are sufficiently qualified so that they match
exactly one node in the current tree.

=item $h->aug_mv ($src, $dest);

Move the node C<src> to C<dest>.  C<src> must match exactly
one node.  C<dest> is overwritten if it exists.

=item $nrnodes = $h->aug_rm ($augpath);

Remove C<path> and all of its children.

On success this returns the number of entries which were removed.

=item $h->aug_save ();

This writes all pending changes to disk.

The flags which were passed to C<$h-E<gt>aug_init> affect exactly
how files are saved.

=item $h->aug_set ($augpath, $val);

Set the value associated with C<path> to C<value>.

=item $h->available (\@groups);

This command is used to check the availability of some
groups of functionality in the appliance, which not all builds of
the libguestfs appliance will be able to provide.

The libguestfs groups, and the functions that those
groups correspond to, are listed in L<guestfs(3)/AVAILABILITY>.

The argument C<groups> is a list of group names, eg:
C<["inotify", "augeas"]> would check for the availability of
the Linux inotify functions and Augeas (configuration file
editing) functions.

The command returns no error if I<all> requested groups are available.

It fails with an error if one or more of the requested
groups is unavailable in the appliance.

If an unknown group name is included in the
list of groups then an error is always returned.

I<Notes:>

=over 4

=item *

You must call C<$h-E<gt>launch> before calling this function.

The reason is because we don't know what groups are
supported by the appliance/daemon until it is running and can
be queried.

=item *

If a group of functions is available, this does not necessarily
mean that they will work.  You still have to check for errors
when calling individual API functions even if they are
available.

=item *

It is usually the job of distro packagers to build
complete functionality into the libguestfs appliance.
Upstream libguestfs, if built from source with all
requirements satisfied, will support everything.

=item *

This call was added in version C<1.0.80>.  In previous
versions of libguestfs all you could do would be to speculatively
execute a command to find out if the daemon implemented it.
See also C<$h-E<gt>version>.

=back

=item $h->blockdev_flushbufs ($device);

This tells the kernel to flush internal buffers associated
with C<device>.

This uses the L<blockdev(8)> command.

=item $blocksize = $h->blockdev_getbsz ($device);

This returns the block size of a device.

(Note this is different from both I<size in blocks> and
I<filesystem block size>).

This uses the L<blockdev(8)> command.

=item $ro = $h->blockdev_getro ($device);

Returns a boolean indicating if the block device is read-only
(true if read-only, false if not).

This uses the L<blockdev(8)> command.

=item $sizeinbytes = $h->blockdev_getsize64 ($device);

This returns the size of the device in bytes.

See also C<$h-E<gt>blockdev_getsz>.

This uses the L<blockdev(8)> command.

=item $sectorsize = $h->blockdev_getss ($device);

This returns the size of sectors on a block device.
Usually 512, but can be larger for modern devices.

(Note, this is not the size in sectors, use C<$h-E<gt>blockdev_getsz>
for that).

This uses the L<blockdev(8)> command.

=item $sizeinsectors = $h->blockdev_getsz ($device);

This returns the size of the device in units of 512-byte sectors
(even if the sectorsize isn't 512 bytes ... weird).

See also C<$h-E<gt>blockdev_getss> for the real sector size of
the device, and C<$h-E<gt>blockdev_getsize64> for the more
useful I<size in bytes>.

This uses the L<blockdev(8)> command.

=item $h->blockdev_rereadpt ($device);

Reread the partition table on C<device>.

This uses the L<blockdev(8)> command.

=item $h->blockdev_setbsz ($device, $blocksize);

This sets the block size of a device.

(Note this is different from both I<size in blocks> and
I<filesystem block size>).

This uses the L<blockdev(8)> command.

=item $h->blockdev_setro ($device);

Sets the block device named C<device> to read-only.

This uses the L<blockdev(8)> command.

=item $h->blockdev_setrw ($device);

Sets the block device named C<device> to read-write.

This uses the L<blockdev(8)> command.

=item $rpath = $h->case_sensitive_path ($path);

This can be used to resolve case insensitive paths on
a filesystem which is case sensitive.  The use case is
to resolve paths which you have read from Windows configuration
files or the Windows Registry, to the true path.

The command handles a peculiarity of the Linux ntfs-3g
filesystem driver (and probably others), which is that although
the underlying filesystem is case-insensitive, the driver
exports the filesystem to Linux as case-sensitive.

One consequence of this is that special directories such
as C<c:\windows> may appear as C</WINDOWS> or C</windows>
(or other things) depending on the precise details of how
they were created.  In Windows itself this would not be
a problem.

Bug or feature?  You decide:
L<http://www.tuxera.com/community/ntfs-3g-faq/#posixfilenames1>

This function resolves the true case of each element in the
path and returns the case-sensitive path.

Thus C<$h-E<gt>case_sensitive_path> ("/Windows/System32")
might return C<"/WINDOWS/system32"> (the exact return value
would depend on details of how the directories were originally
created under Windows).

I<Note>:
This function does not handle drive names, backslashes etc.

See also C<$h-E<gt>realpath>.

=item $content = $h->cat ($path);

Return the contents of the file named C<path>.

Note that this function cannot correctly handle binary files
(specifically, files containing C<\0> character which is treated
as end of string).  For those you need to use the C<$h-E<gt>read_file>
or C<$h-E<gt>download> functions which have a more complex interface.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $checksum = $h->checksum ($csumtype, $path);

This call computes the MD5, SHAx or CRC checksum of the
file named C<path>.

The type of checksum to compute is given by the C<csumtype>
parameter which must have one of the following values:

=over 4

=item C<crc>

Compute the cyclic redundancy check (CRC) specified by POSIX
for the C<cksum> command.

=item C<md5>

Compute the MD5 hash (using the C<md5sum> program).

=item C<sha1>

Compute the SHA1 hash (using the C<sha1sum> program).

=item C<sha224>

Compute the SHA224 hash (using the C<sha224sum> program).

=item C<sha256>

Compute the SHA256 hash (using the C<sha256sum> program).

=item C<sha384>

Compute the SHA384 hash (using the C<sha384sum> program).

=item C<sha512>

Compute the SHA512 hash (using the C<sha512sum> program).

=back

The checksum is returned as a printable string.

=item $h->chmod ($mode, $path);

Change the mode (permissions) of C<path> to C<mode>.  Only
numeric modes are supported.

I<Note>: When using this command from guestfish, C<mode>
by default would be decimal, unless you prefix it with
C<0> to get octal, ie. use C<0700> not C<700>.

=item $h->chown ($owner, $group, $path);

Change the file owner to C<owner> and group to C<group>.

Only numeric uid and gid are supported.  If you want to use
names, you will need to locate and parse the password file
yourself (Augeas support makes this relatively easy).

=item $output = $h->command (\@arguments);

This call runs a command from the guest filesystem.  The
filesystem must be mounted, and must contain a compatible
operating system (ie. something Linux, with the same
or compatible processor architecture).

The single parameter is an argv-style list of arguments.
The first element is the name of the program to run.
Subsequent elements are parameters.  The list must be
non-empty (ie. must contain a program name).  Note that
the command runs directly, and is I<not> invoked via
the shell (see C<$h-E<gt>sh>).

The return value is anything printed to I<stdout> by
the command.

If the command returns a non-zero exit status, then
this function returns an error message.  The error message
string is the content of I<stderr> from the command.

The C<$PATH> environment variable will contain at least
C</usr/bin> and C</bin>.  If you require a program from
another location, you should provide the full path in the
first parameter.

Shared libraries and data files required by the program
must be available on filesystems which are mounted in the
correct places.  It is the caller's responsibility to ensure
all filesystems that are needed are mounted at the right
locations.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->command_lines (\@arguments);

This is the same as C<$h-E<gt>command>, but splits the
result into a list of lines.

See also: C<$h-E<gt>sh_lines>

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $h->config ($qemuparam, $qemuvalue);

This can be used to add arbitrary qemu command line parameters
of the form C<-param value>.  Actually it's not quite arbitrary - we
prevent you from setting some parameters which would interfere with
parameters that we use.

The first character of C<param> string must be a C<-> (dash).

C<value> can be NULL.

=item $h->cp ($src, $dest);

This copies a file from C<src> to C<dest> where C<dest> is
either a destination filename or destination directory.

=item $h->cp_a ($src, $dest);

This copies a file or directory from C<src> to C<dest>
recursively using the C<cp -a> command.

=item $h->dd ($src, $dest);

This command copies from one source device or file C<src>
to another destination device or file C<dest>.  Normally you
would use this to copy to or from a device or partition, for
example to duplicate a filesystem.

If the destination is a device, it must be as large or larger
than the source file or device, otherwise the copy will fail.
This command cannot do partial copies.

=item $result = $h->debug ($subcmd, \@extraargs);

The C<$h-E<gt>debug> command exposes some internals of
C<guestfsd> (the guestfs daemon) that runs inside the
qemu subprocess.

There is no comprehensive help for this command.  You have
to look at the file C<daemon/debug.c> in the libguestfs source
to find out what you can do.

=item $output = $h->df ();

This command runs the C<df> command to report disk space used.

This command is mostly useful for interactive sessions.  It
is I<not> intended that you try to parse the output string.
Use C<statvfs> from programs.

=item $output = $h->df_h ();

This command runs the C<df -h> command to report disk space used
in human-readable format.

This command is mostly useful for interactive sessions.  It
is I<not> intended that you try to parse the output string.
Use C<statvfs> from programs.

=item $kmsgs = $h->dmesg ();

This returns the kernel messages (C<dmesg> output) from
the guest kernel.  This is sometimes useful for extended
debugging of problems.

Another way to get the same information is to enable
verbose messages with C<$h-E<gt>set_verbose> or by setting
the environment variable C<LIBGUESTFS_DEBUG=1> before
running the program.

=item $h->download ($remotefilename, $filename);

Download file C<remotefilename> and save it as C<filename>
on the local machine.

C<filename> can also be a named pipe.

See also C<$h-E<gt>upload>, C<$h-E<gt>cat>.

=item $h->drop_caches ($whattodrop);

This instructs the guest kernel to drop its page cache,
and/or dentries and inode caches.  The parameter C<whattodrop>
tells the kernel what precisely to drop, see
L<http://linux-mm.org/Drop_Caches>

Setting C<whattodrop> to 3 should drop everything.

This automatically calls L<sync(2)> before the operation,
so that the maximum guest memory is freed.

=item $sizekb = $h->du ($path);

This command runs the C<du -s> command to estimate file space
usage for C<path>.

C<path> can be a file or a directory.  If C<path> is a directory
then the estimate includes the contents of the directory and all
subdirectories (recursively).

The result is the estimated size in I<kilobytes>
(ie. units of 1024 bytes).

=item $h->e2fsck_f ($device);

This runs C<e2fsck -p -f device>, ie. runs the ext2/ext3
filesystem checker on C<device>, noninteractively (C<-p>),
even if the filesystem appears to be clean (C<-f>).

This command is only needed because of C<$h-E<gt>resize2fs>
(q.v.).  Normally you should use C<$h-E<gt>fsck>.

=item $output = $h->echo_daemon (\@words);

This command concatenate the list of C<words> passed with single spaces between
them and returns the resulting string.

You can use this command to test the connection through to the daemon.

See also C<$h-E<gt>ping_daemon>.

=item @lines = $h->egrep ($regex, $path);

This calls the external C<egrep> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->egrepi ($regex, $path);

This calls the external C<egrep -i> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $equality = $h->equal ($file1, $file2);

This compares the two files C<file1> and C<file2> and returns
true if their content is exactly equal, or false otherwise.

The external L<cmp(1)> program is used for the comparison.

=item $existsflag = $h->exists ($path);

This returns C<true> if and only if there is a file, directory
(or anything) with the given C<path> name.

See also C<$h-E<gt>is_file>, C<$h-E<gt>is_dir>, C<$h-E<gt>stat>.

=item $h->fallocate ($path, $len);

This command preallocates a file (containing zero bytes) named
C<path> of size C<len> bytes.  If the file exists already, it
is overwritten.

Do not confuse this with the guestfish-specific
C<alloc> command which allocates a file in the host and
attaches it as a device.

=item @lines = $h->fgrep ($pattern, $path);

This calls the external C<fgrep> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->fgrepi ($pattern, $path);

This calls the external C<fgrep -i> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $description = $h->file ($path);

This call uses the standard L<file(1)> command to determine
the type or contents of the file.  This also works on devices,
for example to find out whether a partition contains a filesystem.

This call will also transparently look inside various types
of compressed file.

The exact command which runs is C<file -zbsL path>.  Note in
particular that the filename is not prepended to the output
(the C<-b> option).

=item $size = $h->filesize ($file);

This command returns the size of C<file> in bytes.

To get other stats about a file, use C<$h-E<gt>stat>, C<$h-E<gt>lstat>,
C<$h-E<gt>is_dir>, C<$h-E<gt>is_file> etc.
To get the size of block devices, use C<$h-E<gt>blockdev_getsize64>.

=item $h->fill ($c, $len, $path);

This command creates a new file called C<path>.  The initial
content of the file is C<len> octets of C<c>, where C<c>
must be a number in the range C<[0..255]>.

To fill a file with zero bytes (sparsely), it is
much more efficient to use C<$h-E<gt>truncate_size>.

=item @names = $h->find ($directory);

This command lists out all files and directories, recursively,
starting at C<directory>.  It is essentially equivalent to
running the shell command C<find directory -print> but some
post-processing happens on the output, described below.

This returns a list of strings I<without any prefix>.  Thus
if the directory structure was:

 /tmp/a
 /tmp/b
 /tmp/c/d

then the returned list from C<$h-E<gt>find> C</tmp> would be
4 elements:

 a
 b
 c
 c/d

If C<directory> is not a directory, then this command returns
an error.

The returned list is sorted.

See also C<$h-E<gt>find0>.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $h->find0 ($directory, $files);

This command lists out all files and directories, recursively,
starting at C<directory>, placing the resulting list in the
external file called C<files>.

This command works the same way as C<$h-E<gt>find> with the
following exceptions:

=over 4

=item *

The resulting list is written to an external file.

=item *

Items (filenames) in the result are separated
by C<\0> characters.  See L<find(1)> option I<-print0>.

=item *

This command is not limited in the number of names that it
can return.

=item *

The result list is not sorted.

=back

=item $status = $h->fsck ($fstype, $device);

This runs the filesystem checker (fsck) on C<device> which
should have filesystem type C<fstype>.

The returned integer is the status.  See L<fsck(8)> for the
list of status codes from C<fsck>.

Notes:

=over 4

=item *

Multiple status codes can be summed together.

=item *

A non-zero return code can mean "success", for example if
errors have been corrected on the filesystem.

=item *

Checking or repairing NTFS volumes is not supported
(by linux-ntfs).

=back

This command is entirely equivalent to running C<fsck -a -t fstype device>.

=item $append = $h->get_append ();

Return the additional kernel options which are added to the
guest kernel command line.

If C<NULL> then no options are added.

=item $autosync = $h->get_autosync ();

Get the autosync flag.

=item $direct = $h->get_direct ();

Return the direct appliance mode flag.

=item $label = $h->get_e2label ($device);

This returns the ext2/3/4 filesystem label of the filesystem on
C<device>.

=item $uuid = $h->get_e2uuid ($device);

This returns the ext2/3/4 filesystem UUID of the filesystem on
C<device>.

=item $memsize = $h->get_memsize ();

This gets the memory size in megabytes allocated to the
qemu subprocess.

If C<$h-E<gt>set_memsize> was not called
on this handle, and if C<LIBGUESTFS_MEMSIZE> was not set,
then this returns the compiled-in default value for memsize.

For more information on the architecture of libguestfs,
see L<guestfs(3)>.

=item $path = $h->get_path ();

Return the current search path.

This is always non-NULL.  If it wasn't set already, then this will
return the default path.

=item $pid = $h->get_pid ();

Return the process ID of the qemu subprocess.  If there is no
qemu subprocess, then this will return an error.

This is an internal call used for debugging and testing.

=item $qemu = $h->get_qemu ();

Return the current qemu binary.

This is always non-NULL.  If it wasn't set already, then this will
return the default qemu binary name.

=item $recoveryproc = $h->get_recovery_proc ();

Return the recovery process enabled flag.

=item $selinux = $h->get_selinux ();

This returns the current setting of the selinux flag which
is passed to the appliance at boot time.  See C<$h-E<gt>set_selinux>.

For more information on the architecture of libguestfs,
see L<guestfs(3)>.

=item $state = $h->get_state ();

This returns the current state as an opaque integer.  This is
only useful for printing debug and internal error messages.

For more information on states, see L<guestfs(3)>.

=item $trace = $h->get_trace ();

Return the command trace flag.

=item $verbose = $h->get_verbose ();

This returns the verbose messages flag.

=item $context = $h->getcon ();

This gets the SELinux security context of the daemon.

See the documentation about SELINUX in L<guestfs(3)>,
and C<$h-E<gt>setcon>

=item @xattrs = $h->getxattrs ($path);

This call lists the extended attributes of the file or directory
C<path>.

At the system call level, this is a combination of the
L<listxattr(2)> and L<getxattr(2)> calls.

See also: C<$h-E<gt>lgetxattrs>, L<attr(5)>.

=item @paths = $h->glob_expand ($pattern);

This command searches for all the pathnames matching
C<pattern> according to the wildcard expansion rules
used by the shell.

If no paths match, then this returns an empty list
(note: not an error).

It is just a wrapper around the C L<glob(3)> function
with flags C<GLOB_MARK|GLOB_BRACE>.
See that manual page for more details.

=item @lines = $h->grep ($regex, $path);

This calls the external C<grep> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->grepi ($regex, $path);

This calls the external C<grep -i> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $h->grub_install ($root, $device);

This command installs GRUB (the Grand Unified Bootloader) on
C<device>, with the root directory being C<root>.

=item @lines = $h->head ($path);

This command returns up to the first 10 lines of a file as
a list of strings.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->head_n ($nrlines, $path);

If the parameter C<nrlines> is a positive number, this returns the first
C<nrlines> lines of the file C<path>.

If the parameter C<nrlines> is a negative number, this returns lines
from the file C<path>, excluding the last C<nrlines> lines.

If the parameter C<nrlines> is zero, this returns an empty list.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $dump = $h->hexdump ($path);

This runs C<hexdump -C> on the given C<path>.  The result is
the human-readable, canonical hex dump of the file.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $content = $h->initrd_cat ($initrdpath, $filename);

This command unpacks the file C<filename> from the initrd file
called C<initrdpath>.  The filename must be given I<without> the
initial C</> character.

For example, in guestfish you could use the following command
to examine the boot script (usually called C</init>)
contained in a Linux initrd or initramfs image:

 initrd-cat /boot/initrd-<version>.img init

See also C<$h-E<gt>initrd_list>.

=item @filenames = $h->initrd_list ($path);

This command lists out files contained in an initrd.

The files are listed without any initial C</> character.  The
files are listed in the order they appear (not necessarily
alphabetical).  Directory names are listed as separate items.

Old Linux kernels (2.4 and earlier) used a compressed ext2
filesystem as initrd.  We I<only> support the newer initramfs
format (compressed cpio files).

=item $wd = $h->inotify_add_watch ($path, $mask);

Watch C<path> for the events listed in C<mask>.

Note that if C<path> is a directory then events within that
directory are watched, but this does I<not> happen recursively
(in subdirectories).

Note for non-C or non-Linux callers: the inotify events are
defined by the Linux kernel ABI and are listed in
C</usr/include/sys/inotify.h>.

=item $h->inotify_close ();

This closes the inotify handle which was previously
opened by inotify_init.  It removes all watches, throws
away any pending events, and deallocates all resources.

=item @paths = $h->inotify_files ();

This function is a helpful wrapper around C<$h-E<gt>inotify_read>
which just returns a list of pathnames of objects that were
touched.  The returned pathnames are sorted and deduplicated.

=item $h->inotify_init ($maxevents);

This command creates a new inotify handle.
The inotify subsystem can be used to notify events which happen to
objects in the guest filesystem.

C<maxevents> is the maximum number of events which will be
queued up between calls to C<$h-E<gt>inotify_read> or
C<$h-E<gt>inotify_files>.
If this is passed as C<0>, then the kernel (or previously set)
default is used.  For Linux 2.6.29 the default was 16384 events.
Beyond this limit, the kernel throws away events, but records
the fact that it threw them away by setting a flag
C<IN_Q_OVERFLOW> in the returned structure list (see
C<$h-E<gt>inotify_read>).

Before any events are generated, you have to add some
watches to the internal watch list.  See:
C<$h-E<gt>inotify_add_watch>,
C<$h-E<gt>inotify_rm_watch> and
C<$h-E<gt>inotify_watch_all>.

Queued up events should be read periodically by calling
C<$h-E<gt>inotify_read>
(or C<$h-E<gt>inotify_files> which is just a helpful
wrapper around C<$h-E<gt>inotify_read>).  If you don't
read the events out often enough then you risk the internal
queue overflowing.

The handle should be closed after use by calling
C<$h-E<gt>inotify_close>.  This also removes any
watches automatically.

See also L<inotify(7)> for an overview of the inotify interface
as exposed by the Linux kernel, which is roughly what we expose
via libguestfs.  Note that there is one global inotify handle
per libguestfs instance.

=item @events = $h->inotify_read ();

Return the complete queue of events that have happened
since the previous read call.

If no events have happened, this returns an empty list.

I<Note>: In order to make sure that all events have been
read, you must call this function repeatedly until it
returns an empty list.  The reason is that the call will
read events up to the maximum appliance-to-host message
size and leave remaining events in the queue.

=item $h->inotify_rm_watch ($wd);

Remove a previously defined inotify watch.
See C<$h-E<gt>inotify_add_watch>.

=item $busy = $h->is_busy ();

This returns true iff this handle is busy processing a command
(in the C<BUSY> state).

For more information on states, see L<guestfs(3)>.

=item $config = $h->is_config ();

This returns true iff this handle is being configured
(in the C<CONFIG> state).

For more information on states, see L<guestfs(3)>.

=item $dirflag = $h->is_dir ($path);

This returns C<true> if and only if there is a directory
with the given C<path> name.  Note that it returns false for
other objects like files.

See also C<$h-E<gt>stat>.

=item $fileflag = $h->is_file ($path);

This returns C<true> if and only if there is a file
with the given C<path> name.  Note that it returns false for
other objects like directories.

See also C<$h-E<gt>stat>.

=item $launching = $h->is_launching ();

This returns true iff this handle is launching the subprocess
(in the C<LAUNCHING> state).

For more information on states, see L<guestfs(3)>.

=item $ready = $h->is_ready ();

This returns true iff this handle is ready to accept commands
(in the C<READY> state).

For more information on states, see L<guestfs(3)>.

=item $h->kill_subprocess ();

This kills the qemu subprocess.  You should never need to call this.

=item $h->launch ();

Internally libguestfs is implemented by running a virtual machine
using L<qemu(1)>.

You should call this after configuring the handle
(eg. adding drives) but before performing any actions.

=item $h->lchown ($owner, $group, $path);

Change the file owner to C<owner> and group to C<group>.
This is like C<$h-E<gt>chown> but if C<path> is a symlink then
the link itself is changed, not the target.

Only numeric uid and gid are supported.  If you want to use
names, you will need to locate and parse the password file
yourself (Augeas support makes this relatively easy).

=item @xattrs = $h->lgetxattrs ($path);

This is the same as C<$h-E<gt>getxattrs>, but if C<path>
is a symbolic link, then it returns the extended attributes
of the link itself.

=item @devices = $h->list_devices ();

List all the block devices.

The full block device names are returned, eg. C</dev/sda>

=item @partitions = $h->list_partitions ();

List all the partitions detected on all block devices.

The full partition device names are returned, eg. C</dev/sda1>

This does not return logical volumes.  For that you will need to
call C<$h-E<gt>lvs>.

=item $listing = $h->ll ($directory);

List the files in C<directory> (relative to the root directory,
there is no cwd) in the format of 'ls -la'.

This command is mostly useful for interactive sessions.  It
is I<not> intended that you try to parse the output string.

=item $h->ln ($target, $linkname);

This command creates a hard link using the C<ln> command.

=item $h->ln_f ($target, $linkname);

This command creates a hard link using the C<ln -f> command.
The C<-f> option removes the link (C<linkname>) if it exists already.

=item $h->ln_s ($target, $linkname);

This command creates a symbolic link using the C<ln -s> command.

=item $h->ln_sf ($target, $linkname);

This command creates a symbolic link using the C<ln -sf> command,
The C<-f> option removes the link (C<linkname>) if it exists already.

=item $h->lremovexattr ($xattr, $path);

This is the same as C<$h-E<gt>removexattr>, but if C<path>
is a symbolic link, then it removes an extended attribute
of the link itself.

=item @listing = $h->ls ($directory);

List the files in C<directory> (relative to the root directory,
there is no cwd).  The '.' and '..' entries are not returned, but
hidden files are shown.

This command is mostly useful for interactive sessions.  Programs
should probably use C<$h-E<gt>readdir> instead.

=item $h->lsetxattr ($xattr, $val, $vallen, $path);

This is the same as C<$h-E<gt>setxattr>, but if C<path>
is a symbolic link, then it sets an extended attribute
of the link itself.

=item %statbuf = $h->lstat ($path);

Returns file information for the given C<path>.

This is the same as C<$h-E<gt>stat> except that if C<path>
is a symbolic link, then the link is stat-ed, not the file it
refers to.

This is the same as the C<lstat(2)> system call.

=item @statbufs = $h->lstatlist ($path, \@names);

This call allows you to perform the C<$h-E<gt>lstat> operation
on multiple files, where all files are in the directory C<path>.
C<names> is the list of files from this directory.

On return you get a list of stat structs, with a one-to-one
correspondence to the C<names> list.  If any name did not exist
or could not be lstat'd, then the C<ino> field of that structure
is set to C<-1>.

This call is intended for programs that want to efficiently
list a directory contents without making many round-trips.
See also C<$h-E<gt>lxattrlist> for a similarly efficient call
for getting extended attributes.  Very long directory listings
might cause the protocol message size to be exceeded, causing
this call to fail.  The caller must split up such requests
into smaller groups of names.

=item $h->lvcreate ($logvol, $volgroup, $mbytes);

This creates an LVM volume group called C<logvol>
on the volume group C<volgroup>, with C<size> megabytes.

=item $h->lvm_remove_all ();

This command removes all LVM logical volumes, volume groups
and physical volumes.

B<This command is dangerous.  Without careful use you
can easily destroy all your data>.

=item $h->lvremove ($device);

Remove an LVM logical volume C<device>, where C<device> is
the path to the LV, such as C</dev/VG/LV>.

You can also remove all LVs in a volume group by specifying
the VG name, C</dev/VG>.

=item $h->lvrename ($logvol, $newlogvol);

Rename a logical volume C<logvol> with the new name C<newlogvol>.

=item $h->lvresize ($device, $mbytes);

This resizes (expands or shrinks) an existing LVM logical
volume to C<mbytes>.  When reducing, data in the reduced part
is lost.

=item @logvols = $h->lvs ();

List all the logical volumes detected.  This is the equivalent
of the L<lvs(8)> command.

This returns a list of the logical volume device names
(eg. C</dev/VolGroup00/LogVol00>).

See also C<$h-E<gt>lvs_full>.

=item @logvols = $h->lvs_full ();

List all the logical volumes detected.  This is the equivalent
of the L<lvs(8)> command.  The "full" version includes all fields.

=item @xattrs = $h->lxattrlist ($path, \@names);

This call allows you to get the extended attributes
of multiple files, where all files are in the directory C<path>.
C<names> is the list of files from this directory.

On return you get a flat list of xattr structs which must be
interpreted sequentially.  The first xattr struct always has a zero-length
C<attrname>.  C<attrval> in this struct is zero-length
to indicate there was an error doing C<lgetxattr> for this
file, I<or> is a C string which is a decimal number
(the number of following attributes for this file, which could
be C<"0">).  Then after the first xattr struct are the
zero or more attributes for the first named file.
This repeats for the second and subsequent files.

This call is intended for programs that want to efficiently
list a directory contents without making many round-trips.
See also C<$h-E<gt>lstatlist> for a similarly efficient call
for getting standard stats.  Very long directory listings
might cause the protocol message size to be exceeded, causing
this call to fail.  The caller must split up such requests
into smaller groups of names.

=item $h->mkdir ($path);

Create a directory named C<path>.

=item $h->mkdir_mode ($path, $mode);

This command creates a directory, setting the initial permissions
of the directory to C<mode>.  See also C<$h-E<gt>mkdir>.

=item $h->mkdir_p ($path);

Create a directory named C<path>, creating any parent directories
as necessary.  This is like the C<mkdir -p> shell command.

=item $dir = $h->mkdtemp ($template);

This command creates a temporary directory.  The
C<template> parameter should be a full pathname for the
temporary directory name with the final six characters being
"XXXXXX".

For example: "/tmp/myprogXXXXXX" or "/Temp/myprogXXXXXX",
the second one being suitable for Windows filesystems.

The name of the temporary directory that was created
is returned.

The temporary directory is created with mode 0700
and is owned by root.

The caller is responsible for deleting the temporary
directory and its contents after use.

See also: L<mkdtemp(3)>

=item $h->mke2fs_J ($fstype, $blocksize, $device, $journal);

This creates an ext2/3/4 filesystem on C<device> with
an external journal on C<journal>.  It is equivalent
to the command:

 mke2fs -t fstype -b blocksize -J device=<journal> <device>

See also C<$h-E<gt>mke2journal>.

=item $h->mke2fs_JL ($fstype, $blocksize, $device, $label);

This creates an ext2/3/4 filesystem on C<device> with
an external journal on the journal labeled C<label>.

See also C<$h-E<gt>mke2journal_L>.

=item $h->mke2fs_JU ($fstype, $blocksize, $device, $uuid);

This creates an ext2/3/4 filesystem on C<device> with
an external journal on the journal with UUID C<uuid>.

See also C<$h-E<gt>mke2journal_U>.

=item $h->mke2journal ($blocksize, $device);

This creates an ext2 external journal on C<device>.  It is equivalent
to the command:

 mke2fs -O journal_dev -b blocksize device

=item $h->mke2journal_L ($blocksize, $label, $device);

This creates an ext2 external journal on C<device> with label C<label>.

=item $h->mke2journal_U ($blocksize, $uuid, $device);

This creates an ext2 external journal on C<device> with UUID C<uuid>.

=item $h->mkfifo ($mode, $path);

This call creates a FIFO (named pipe) called C<path> with
mode C<mode>.  It is just a convenient wrapper around
C<$h-E<gt>mknod>.

=item $h->mkfs ($fstype, $device);

This creates a filesystem on C<device> (usually a partition
or LVM logical volume).  The filesystem type is C<fstype>, for
example C<ext3>.

=item $h->mkfs_b ($fstype, $blocksize, $device);

This call is similar to C<$h-E<gt>mkfs>, but it allows you to
control the block size of the resulting filesystem.  Supported
block sizes depend on the filesystem type, but typically they
are C<1024>, C<2048> or C<4096> only.

=item $h->mkmountpoint ($exemptpath);

C<$h-E<gt>mkmountpoint> and C<$h-E<gt>rmmountpoint> are
specialized calls that can be used to create extra mountpoints
before mounting the first filesystem.

These calls are I<only> necessary in some very limited circumstances,
mainly the case where you want to mount a mix of unrelated and/or
read-only filesystems together.

For example, live CDs often contain a "Russian doll" nest of
filesystems, an ISO outer layer, with a squashfs image inside, with
an ext2/3 image inside that.  You can unpack this as follows
in guestfish:

 add-ro Fedora-11-i686-Live.iso
 run
 mkmountpoint /cd
 mkmountpoint /squash
 mkmountpoint /ext3
 mount /dev/sda /cd
 mount-loop /cd/LiveOS/squashfs.img /squash
 mount-loop /squash/LiveOS/ext3fs.img /ext3

The inner filesystem is now unpacked under the /ext3 mountpoint.

=item $h->mknod ($mode, $devmajor, $devminor, $path);

This call creates block or character special devices, or
named pipes (FIFOs).

The C<mode> parameter should be the mode, using the standard
constants.  C<devmajor> and C<devminor> are the
device major and minor numbers, only used when creating block
and character special devices.

=item $h->mknod_b ($mode, $devmajor, $devminor, $path);

This call creates a block device node called C<path> with
mode C<mode> and device major/minor C<devmajor> and C<devminor>.
It is just a convenient wrapper around C<$h-E<gt>mknod>.

=item $h->mknod_c ($mode, $devmajor, $devminor, $path);

This call creates a char device node called C<path> with
mode C<mode> and device major/minor C<devmajor> and C<devminor>.
It is just a convenient wrapper around C<$h-E<gt>mknod>.

=item $h->mkswap ($device);

Create a swap partition on C<device>.

=item $h->mkswap_L ($label, $device);

Create a swap partition on C<device> with label C<label>.

Note that you cannot attach a swap label to a block device
(eg. C</dev/sda>), just to a partition.  This appears to be
a limitation of the kernel or swap tools.

=item $h->mkswap_U ($uuid, $device);

Create a swap partition on C<device> with UUID C<uuid>.

=item $h->mkswap_file ($path);

Create a swap file.

This command just writes a swap file signature to an existing
file.  To create the file itself, use something like C<$h-E<gt>fallocate>.

=item $h->modprobe ($modulename);

This loads a kernel module in the appliance.

The kernel module must have been whitelisted when libguestfs
was built (see C<appliance/kmod.whitelist.in> in the source).

=item $h->mount ($device, $mountpoint);

Mount a guest disk at a position in the filesystem.  Block devices
are named C</dev/sda>, C</dev/sdb> and so on, as they were added to
the guest.  If those block devices contain partitions, they will have
the usual names (eg. C</dev/sda1>).  Also LVM C</dev/VG/LV>-style
names can be used.

The rules are the same as for L<mount(2)>:  A filesystem must
first be mounted on C</> before others can be mounted.  Other
filesystems can only be mounted on directories which already
exist.

The mounted filesystem is writable, if we have sufficient permissions
on the underlying device.

The filesystem options C<sync> and C<noatime> are set with this
call, in order to improve reliability.

=item $h->mount_loop ($file, $mountpoint);

This command lets you mount C<file> (a filesystem image
in a file) on a mount point.  It is entirely equivalent to
the command C<mount -o loop file mountpoint>.

=item $h->mount_options ($options, $device, $mountpoint);

This is the same as the C<$h-E<gt>mount> command, but it
allows you to set the mount options as for the
L<mount(8)> I<-o> flag.

=item $h->mount_ro ($device, $mountpoint);

This is the same as the C<$h-E<gt>mount> command, but it
mounts the filesystem with the read-only (I<-o ro>) flag.

=item $h->mount_vfs ($options, $vfstype, $device, $mountpoint);

This is the same as the C<$h-E<gt>mount> command, but it
allows you to set both the mount options and the vfstype
as for the L<mount(8)> I<-o> and I<-t> flags.

=item %mps = $h->mountpoints ();

This call is similar to C<$h-E<gt>mounts>.  That call returns
a list of devices.  This one returns a hash table (map) of
device name to directory where the device is mounted.

=item @devices = $h->mounts ();

This returns the list of currently mounted filesystems.  It returns
the list of devices (eg. C</dev/sda1>, C</dev/VG/LV>).

Some internal mounts are not shown.

See also: C<$h-E<gt>mountpoints>

=item $h->mv ($src, $dest);

This moves a file from C<src> to C<dest> where C<dest> is
either a destination filename or destination directory.

=item $status = $h->ntfs_3g_probe ($rw, $device);

This command runs the L<ntfs-3g.probe(8)> command which probes
an NTFS C<device> for mountability.  (Not all NTFS volumes can
be mounted read-write, and some cannot be mounted at all).

C<rw> is a boolean flag.  Set it to true if you want to test
if the volume can be mounted read-write.  Set it to false if
you want to test if the volume can be mounted read-only.

The return value is an integer which C<0> if the operation
would succeed, or some non-zero value documented in the
L<ntfs-3g.probe(8)> manual page.

=item $h->part_add ($device, $prlogex, $startsect, $endsect);

This command adds a partition to C<device>.  If there is no partition
table on the device, call C<$h-E<gt>part_init> first.

The C<prlogex> parameter is the type of partition.  Normally you
should pass C<p> or C<primary> here, but MBR partition tables also
support C<l> (or C<logical>) and C<e> (or C<extended>) partition
types.

C<startsect> and C<endsect> are the start and end of the partition
in I<sectors>.  C<endsect> may be negative, which means it counts
backwards from the end of the disk (C<-1> is the last sector).

Creating a partition which covers the whole disk is not so easy.
Use C<$h-E<gt>part_disk> to do that.

=item $h->part_disk ($device, $parttype);

This command is simply a combination of C<$h-E<gt>part_init>
followed by C<$h-E<gt>part_add> to create a single primary partition
covering the whole disk.

C<parttype> is the partition table type, usually C<mbr> or C<gpt>,
but other possible values are described in C<$h-E<gt>part_init>.

B<This command is dangerous.  Without careful use you
can easily destroy all your data>.

=item $parttype = $h->part_get_parttype ($device);

This command examines the partition table on C<device> and
returns the partition table type (format) being used.

Common return values include: C<msdos> (a DOS/Windows style MBR
partition table), C<gpt> (a GPT/EFI-style partition table).  Other
values are possible, although unusual.  See C<$h-E<gt>part_init>
for a full list.

=item $h->part_init ($device, $parttype);

This creates an empty partition table on C<device> of one of the
partition types listed below.  Usually C<parttype> should be
either C<msdos> or C<gpt> (for large disks).

Initially there are no partitions.  Following this, you should
call C<$h-E<gt>part_add> for each partition required.

Possible values for C<parttype> are:

=over 4

=item B<efi> | B<gpt>

Intel EFI / GPT partition table.

This is recommended for >= 2 TB partitions that will be accessed
from Linux and Intel-based Mac OS X.  It also has limited backwards
compatibility with the C<mbr> format.

=item B<mbr> | B<msdos>

The standard PC "Master Boot Record" (MBR) format used
by MS-DOS and Windows.  This partition type will B<only> work
for device sizes up to 2 TB.  For large disks we recommend
using C<gpt>.

=back

Other partition table types that may work but are not
supported include:

=over 4

=item B<aix>

AIX disk labels.

=item B<amiga> | B<rdb>

Amiga "Rigid Disk Block" format.

=item B<bsd>

BSD disk labels.

=item B<dasd>

DASD, used on IBM mainframes.

=item B<dvh>

MIPS/SGI volumes.

=item B<mac>

Old Mac partition format.  Modern Macs use C<gpt>.

=item B<pc98>

NEC PC-98 format, common in Japan apparently.

=item B<sun>

Sun disk labels.

=back

=item @partitions = $h->part_list ($device);

This command parses the partition table on C<device> and
returns the list of partitions found.

The fields in the returned structure are:

=over 4

=item B<part_num>

Partition number, counting from 1.

=item B<part_start>

Start of the partition I<in bytes>.  To get sectors you have to
divide by the device's sector size, see C<$h-E<gt>blockdev_getss>.

=item B<part_end>

End of the partition in bytes.

=item B<part_size>

Size of the partition in bytes.

=back

=item $h->part_set_bootable ($device, $partnum, $bootable);

This sets the bootable flag on partition numbered C<partnum> on
device C<device>.  Note that partitions are numbered from 1.

The bootable flag is used by some PC BIOSes to determine which
partition to boot from.  It is by no means universally recognized,
and in any case if your operating system installed a boot
sector on the device itself, then that takes precedence.

=item $h->part_set_name ($device, $partnum, $name);

This sets the partition name on partition numbered C<partnum> on
device C<device>.  Note that partitions are numbered from 1.

The partition name can only be set on certain types of partition
table.  This works on C<gpt> but not on C<mbr> partitions.

=item $h->ping_daemon ();

This is a test probe into the guestfs daemon running inside
the qemu subprocess.  Calling this function checks that the
daemon responds to the ping message, without affecting the daemon
or attached block device(s) in any other way.

=item $content = $h->pread ($path, $count, $offset);

This command lets you read part of a file.  It reads C<count>
bytes of the file, starting at C<offset>, from file C<path>.

This may read fewer bytes than requested.  For further details
see the L<pread(2)> system call.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $h->pvcreate ($device);

This creates an LVM physical volume on the named C<device>,
where C<device> should usually be a partition name such
as C</dev/sda1>.

=item $h->pvremove ($device);

This wipes a physical volume C<device> so that LVM will no longer
recognise it.

The implementation uses the C<pvremove> command which refuses to
wipe physical volumes that contain any volume groups, so you have
to remove those first.

=item $h->pvresize ($device);

This resizes (expands or shrinks) an existing LVM physical
volume to match the new size of the underlying device.

=item @physvols = $h->pvs ();

List all the physical volumes detected.  This is the equivalent
of the L<pvs(8)> command.

This returns a list of just the device names that contain
PVs (eg. C</dev/sda2>).

See also C<$h-E<gt>pvs_full>.

=item @physvols = $h->pvs_full ();

List all the physical volumes detected.  This is the equivalent
of the L<pvs(8)> command.  The "full" version includes all fields.

=item $content = $h->read_file ($path);

This calls returns the contents of the file C<path> as a
buffer.

Unlike C<$h-E<gt>cat>, this function can correctly
handle files that contain embedded ASCII NUL characters.
However unlike C<$h-E<gt>download>, this function is limited
in the total size of file that can be handled.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->read_lines ($path);

Return the contents of the file named C<path>.

The file contents are returned as a list of lines.  Trailing
C<LF> and C<CRLF> character sequences are I<not> returned.

Note that this function cannot correctly handle binary files
(specifically, files containing C<\0> character which is treated
as end of line).  For those you need to use the C<$h-E<gt>read_file>
function which has a more complex interface.

=item @entries = $h->readdir ($dir);

This returns the list of directory entries in directory C<dir>.

All entries in the directory are returned, including C<.> and
C<..>.  The entries are I<not> sorted, but returned in the same
order as the underlying filesystem.

Also this call returns basic file type information about each
file.  The C<ftyp> field will contain one of the following characters:

=over 4

=item 'b'

Block special

=item 'c'

Char special

=item 'd'

Directory

=item 'f'

FIFO (named pipe)

=item 'l'

Symbolic link

=item 'r'

Regular file

=item 's'

Socket

=item 'u'

Unknown file type

=item '?'

The L<readdir(3)> returned a C<d_type> field with an
unexpected value

=back

This function is primarily intended for use by programs.  To
get a simple list of names, use C<$h-E<gt>ls>.  To get a printable
directory for human consumption, use C<$h-E<gt>ll>.

=item $link = $h->readlink ($path);

This command reads the target of a symbolic link.

=item @links = $h->readlinklist ($path, \@names);

This call allows you to do a C<readlink> operation
on multiple files, where all files are in the directory C<path>.
C<names> is the list of files from this directory.

On return you get a list of strings, with a one-to-one
correspondence to the C<names> list.  Each string is the
value of the symbol link.

If the C<readlink(2)> operation fails on any name, then
the corresponding result string is the empty string C<"">.
However the whole operation is completed even if there
were C<readlink(2)> errors, and so you can call this
function with names where you don't know if they are
symbolic links already (albeit slightly less efficient).

This call is intended for programs that want to efficiently
list a directory contents without making many round-trips.
Very long directory listings might cause the protocol
message size to be exceeded, causing
this call to fail.  The caller must split up such requests
into smaller groups of names.

=item $rpath = $h->realpath ($path);

Return the canonicalized absolute pathname of C<path>.  The
returned path has no C<.>, C<..> or symbolic link path elements.

=item $h->removexattr ($xattr, $path);

This call removes the extended attribute named C<xattr>
of the file C<path>.

See also: C<$h-E<gt>lremovexattr>, L<attr(5)>.

=item $h->resize2fs ($device);

This resizes an ext2 or ext3 filesystem to match the size of
the underlying device.

I<Note:> It is sometimes required that you run C<$h-E<gt>e2fsck_f>
on the C<device> before calling this command.  For unknown reasons
C<resize2fs> sometimes gives an error about this and sometimes not.
In any case, it is always safe to call C<$h-E<gt>e2fsck_f> before
calling this function.

=item $h->rm ($path);

Remove the single file C<path>.

=item $h->rm_rf ($path);

Remove the file or directory C<path>, recursively removing the
contents if its a directory.  This is like the C<rm -rf> shell
command.

=item $h->rmdir ($path);

Remove the single directory C<path>.

=item $h->rmmountpoint ($exemptpath);

This calls removes a mountpoint that was previously created
with C<$h-E<gt>mkmountpoint>.  See C<$h-E<gt>mkmountpoint>
for full details.

=item $h->scrub_device ($device);

This command writes patterns over C<device> to make data retrieval
more difficult.

It is an interface to the L<scrub(1)> program.  See that
manual page for more details.

B<This command is dangerous.  Without careful use you
can easily destroy all your data>.

=item $h->scrub_file ($file);

This command writes patterns over a file to make data retrieval
more difficult.

The file is I<removed> after scrubbing.

It is an interface to the L<scrub(1)> program.  See that
manual page for more details.

=item $h->scrub_freespace ($dir);

This command creates the directory C<dir> and then fills it
with files until the filesystem is full, and scrubs the files
as for C<$h-E<gt>scrub_file>, and deletes them.
The intention is to scrub any free space on the partition
containing C<dir>.

It is an interface to the L<scrub(1)> program.  See that
manual page for more details.

=item $h->set_append ($append);

This function is used to add additional options to the
guest kernel command line.

The default is C<NULL> unless overridden by setting
C<LIBGUESTFS_APPEND> environment variable.

Setting C<append> to C<NULL> means I<no> additional options
are passed (libguestfs always adds a few of its own).

=item $h->set_autosync ($autosync);

If C<autosync> is true, this enables autosync.  Libguestfs will make a
best effort attempt to run C<$h-E<gt>umount_all> followed by
C<$h-E<gt>sync> when the handle is closed
(also if the program exits without closing handles).

This is disabled by default (except in guestfish where it is
enabled by default).

=item $h->set_direct ($direct);

If the direct appliance mode flag is enabled, then stdin and
stdout are passed directly through to the appliance once it
is launched.

One consequence of this is that log messages aren't caught
by the library and handled by C<$h-E<gt>set_log_message_callback>,
but go straight to stdout.

You probably don't want to use this unless you know what you
are doing.

The default is disabled.

=item $h->set_e2label ($device, $label);

This sets the ext2/3/4 filesystem label of the filesystem on
C<device> to C<label>.  Filesystem labels are limited to
16 characters.

You can use either C<$h-E<gt>tune2fs_l> or C<$h-E<gt>get_e2label>
to return the existing label on a filesystem.

=item $h->set_e2uuid ($device, $uuid);

This sets the ext2/3/4 filesystem UUID of the filesystem on
C<device> to C<uuid>.  The format of the UUID and alternatives
such as C<clear>, C<random> and C<time> are described in the
L<tune2fs(8)> manpage.

You can use either C<$h-E<gt>tune2fs_l> or C<$h-E<gt>get_e2uuid>
to return the existing UUID of a filesystem.

=item $h->set_memsize ($memsize);

This sets the memory size in megabytes allocated to the
qemu subprocess.  This only has any effect if called before
C<$h-E<gt>launch>.

You can also change this by setting the environment
variable C<LIBGUESTFS_MEMSIZE> before the handle is
created.

For more information on the architecture of libguestfs,
see L<guestfs(3)>.

=item $h->set_path ($searchpath);

Set the path that libguestfs searches for kernel and initrd.img.

The default is C<$libdir/guestfs> unless overridden by setting
C<LIBGUESTFS_PATH> environment variable.

Setting C<path> to C<NULL> restores the default path.

=item $h->set_qemu ($qemu);

Set the qemu binary that we will use.

The default is chosen when the library was compiled by the
configure script.

You can also override this by setting the C<LIBGUESTFS_QEMU>
environment variable.

Setting C<qemu> to C<NULL> restores the default qemu binary.

=item $h->set_recovery_proc ($recoveryproc);

If this is called with the parameter C<false> then
C<$h-E<gt>launch> does not create a recovery process.  The
purpose of the recovery process is to stop runaway qemu
processes in the case where the main program aborts abruptly.

This only has any effect if called before C<$h-E<gt>launch>,
and the default is true.

About the only time when you would want to disable this is
if the main process will fork itself into the background
("daemonize" itself).  In this case the recovery process
thinks that the main program has disappeared and so kills
qemu, which is not very helpful.

=item $h->set_selinux ($selinux);

This sets the selinux flag that is passed to the appliance
at boot time.  The default is C<selinux=0> (disabled).

Note that if SELinux is enabled, it is always in
Permissive mode (C<enforcing=0>).

For more information on the architecture of libguestfs,
see L<guestfs(3)>.

=item $h->set_trace ($trace);

If the command trace flag is set to 1, then commands are
printed on stdout before they are executed in a format
which is very similar to the one used by guestfish.  In
other words, you can run a program with this enabled, and
you will get out a script which you can feed to guestfish
to perform the same set of actions.

If you want to trace C API calls into libguestfs (and
other libraries) then possibly a better way is to use
the external ltrace(1) command.

Command traces are disabled unless the environment variable
C<LIBGUESTFS_TRACE> is defined and set to C<1>.

=item $h->set_verbose ($verbose);

If C<verbose> is true, this turns on verbose messages (to C<stderr>).

Verbose messages are disabled unless the environment variable
C<LIBGUESTFS_DEBUG> is defined and set to C<1>.

=item $h->setcon ($context);

This sets the SELinux security context of the daemon
to the string C<context>.

See the documentation about SELINUX in L<guestfs(3)>.

=item $h->setxattr ($xattr, $val, $vallen, $path);

This call sets the extended attribute named C<xattr>
of the file C<path> to the value C<val> (of length C<vallen>).
The value is arbitrary 8 bit data.

See also: C<$h-E<gt>lsetxattr>, L<attr(5)>.

=item $h->sfdisk ($device, $cyls, $heads, $sectors, \@lines);

This is a direct interface to the L<sfdisk(8)> program for creating
partitions on block devices.

C<device> should be a block device, for example C</dev/sda>.

C<cyls>, C<heads> and C<sectors> are the number of cylinders, heads
and sectors on the device, which are passed directly to sfdisk as
the I<-C>, I<-H> and I<-S> parameters.  If you pass C<0> for any
of these, then the corresponding parameter is omitted.  Usually for
'large' disks, you can just pass C<0> for these, but for small
(floppy-sized) disks, sfdisk (or rather, the kernel) cannot work
out the right geometry and you will need to tell it.

C<lines> is a list of lines that we feed to C<sfdisk>.  For more
information refer to the L<sfdisk(8)> manpage.

To create a single partition occupying the whole disk, you would
pass C<lines> as a single element list, when the single element being
the string C<,> (comma).

See also: C<$h-E<gt>sfdisk_l>, C<$h-E<gt>sfdisk_N>,
C<$h-E<gt>part_init>

B<This command is dangerous.  Without careful use you
can easily destroy all your data>.

=item $h->sfdiskM ($device, \@lines);

This is a simplified interface to the C<$h-E<gt>sfdisk>
command, where partition sizes are specified in megabytes
only (rounded to the nearest cylinder) and you don't need
to specify the cyls, heads and sectors parameters which
were rarely if ever used anyway.

See also: C<$h-E<gt>sfdisk>, the L<sfdisk(8)> manpage
and C<$h-E<gt>part_disk>

B<This command is dangerous.  Without careful use you
can easily destroy all your data>.

=item $h->sfdisk_N ($device, $partnum, $cyls, $heads, $sectors, $line);

This runs L<sfdisk(8)> option to modify just the single
partition C<n> (note: C<n> counts from 1).

For other parameters, see C<$h-E<gt>sfdisk>.  You should usually
pass C<0> for the cyls/heads/sectors parameters.

See also: C<$h-E<gt>part_add>

B<This command is dangerous.  Without careful use you
can easily destroy all your data>.

=item $partitions = $h->sfdisk_disk_geometry ($device);

This displays the disk geometry of C<device> read from the
partition table.  Especially in the case where the underlying
block device has been resized, this can be different from the
kernel's idea of the geometry (see C<$h-E<gt>sfdisk_kernel_geometry>).

The result is in human-readable format, and not designed to
be parsed.

=item $partitions = $h->sfdisk_kernel_geometry ($device);

This displays the kernel's idea of the geometry of C<device>.

The result is in human-readable format, and not designed to
be parsed.

=item $partitions = $h->sfdisk_l ($device);

This displays the partition table on C<device>, in the
human-readable output of the L<sfdisk(8)> command.  It is
not intended to be parsed.

See also: C<$h-E<gt>part_list>

=item $output = $h->sh ($command);

This call runs a command from the guest filesystem via the
guest's C</bin/sh>.

This is like C<$h-E<gt>command>, but passes the command to:

 /bin/sh -c "command"

Depending on the guest's shell, this usually results in
wildcards being expanded, shell expressions being interpolated
and so on.

All the provisos about C<$h-E<gt>command> apply to this call.

=item @lines = $h->sh_lines ($command);

This is the same as C<$h-E<gt>sh>, but splits the result
into a list of lines.

See also: C<$h-E<gt>command_lines>

=item $h->sleep ($secs);

Sleep for C<secs> seconds.

=item %statbuf = $h->stat ($path);

Returns file information for the given C<path>.

This is the same as the C<stat(2)> system call.

=item %statbuf = $h->statvfs ($path);

Returns file system statistics for any mounted file system.
C<path> should be a file or directory in the mounted file system
(typically it is the mount point itself, but it doesn't need to be).

This is the same as the C<statvfs(2)> system call.

=item @stringsout = $h->strings ($path);

This runs the L<strings(1)> command on a file and returns
the list of printable strings found.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @stringsout = $h->strings_e ($encoding, $path);

This is like the C<$h-E<gt>strings> command, but allows you to
specify the encoding.

See the L<strings(1)> manpage for the full list of encodings.

Commonly useful encodings are C<l> (lower case L) which will
show strings inside Windows/x86 files.

The returned strings are transcoded to UTF-8.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $h->swapoff_device ($device);

This command disables the libguestfs appliance swap
device or partition named C<device>.
See C<$h-E<gt>swapon_device>.

=item $h->swapoff_file ($file);

This command disables the libguestfs appliance swap on file.

=item $h->swapoff_label ($label);

This command disables the libguestfs appliance swap on
labeled swap partition.

=item $h->swapoff_uuid ($uuid);

This command disables the libguestfs appliance swap partition
with the given UUID.

=item $h->swapon_device ($device);

This command enables the libguestfs appliance to use the
swap device or partition named C<device>.  The increased
memory is made available for all commands, for example
those run using C<$h-E<gt>command> or C<$h-E<gt>sh>.

Note that you should not swap to existing guest swap
partitions unless you know what you are doing.  They may
contain hibernation information, or other information that
the guest doesn't want you to trash.  You also risk leaking
information about the host to the guest this way.  Instead,
attach a new host device to the guest and swap on that.

=item $h->swapon_file ($file);

This command enables swap to a file.
See C<$h-E<gt>swapon_device> for other notes.

=item $h->swapon_label ($label);

This command enables swap to a labeled swap partition.
See C<$h-E<gt>swapon_device> for other notes.

=item $h->swapon_uuid ($uuid);

This command enables swap to a swap partition with the given UUID.
See C<$h-E<gt>swapon_device> for other notes.

=item $h->sync ();

This syncs the disk, so that any writes are flushed through to the
underlying disk image.

You should always call this if you have modified a disk image, before
closing the handle.

=item @lines = $h->tail ($path);

This command returns up to the last 10 lines of a file as
a list of strings.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->tail_n ($nrlines, $path);

If the parameter C<nrlines> is a positive number, this returns the last
C<nrlines> lines of the file C<path>.

If the parameter C<nrlines> is a negative number, this returns lines
from the file C<path>, starting with the C<-nrlines>th line.

If the parameter C<nrlines> is zero, this returns an empty list.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $h->tar_in ($tarfile, $directory);

This command uploads and unpacks local file C<tarfile> (an
I<uncompressed> tar file) into C<directory>.

To upload a compressed tarball, use C<$h-E<gt>tgz_in>.

=item $h->tar_out ($directory, $tarfile);

This command packs the contents of C<directory> and downloads
it to local file C<tarfile>.

To download a compressed tarball, use C<$h-E<gt>tgz_out>.

=item $h->tgz_in ($tarball, $directory);

This command uploads and unpacks local file C<tarball> (a
I<gzip compressed> tar file) into C<directory>.

To upload an uncompressed tarball, use C<$h-E<gt>tar_in>.

=item $h->tgz_out ($directory, $tarball);

This command packs the contents of C<directory> and downloads
it to local file C<tarball>.

To download an uncompressed tarball, use C<$h-E<gt>tar_out>.

=item $h->touch ($path);

Touch acts like the L<touch(1)> command.  It can be used to
update the timestamps on a file, or, if the file does not exist,
to create a new zero-length file.

=item $h->truncate ($path);

This command truncates C<path> to a zero-length file.  The
file must exist already.

=item $h->truncate_size ($path, $size);

This command truncates C<path> to size C<size> bytes.  The file
must exist already.  If the file is smaller than C<size> then
the file is extended to the required size with null bytes.

=item %superblock = $h->tune2fs_l ($device);

This returns the contents of the ext2, ext3 or ext4 filesystem
superblock on C<device>.

It is the same as running C<tune2fs -l device>.  See L<tune2fs(8)>
manpage for more details.  The list of fields returned isn't
clearly defined, and depends on both the version of C<tune2fs>
that libguestfs was built against, and the filesystem itself.

=item $oldmask = $h->umask ($mask);

This function sets the mask used for creating new files and
device nodes to C<mask & 0777>.

Typical umask values would be C<022> which creates new files
with permissions like "-rw-r--r--" or "-rwxr-xr-x", and
C<002> which creates new files with permissions like
"-rw-rw-r--" or "-rwxrwxr-x".

The default umask is C<022>.  This is important because it
means that directories and device nodes will be created with
C<0644> or C<0755> mode even if you specify C<0777>.

See also L<umask(2)>, C<$h-E<gt>mknod>, C<$h-E<gt>mkdir>.

This call returns the previous umask.

=item $h->umount ($pathordevice);

This unmounts the given filesystem.  The filesystem may be
specified either by its mountpoint (path) or the device which
contains the filesystem.

=item $h->umount_all ();

This unmounts all mounted filesystems.

Some internal mounts are not unmounted by this call.

=item $h->upload ($filename, $remotefilename);

Upload local file C<filename> to C<remotefilename> on the
filesystem.

C<filename> can also be a named pipe.

See also C<$h-E<gt>download>.

=item $h->utimens ($path, $atsecs, $atnsecs, $mtsecs, $mtnsecs);

This command sets the timestamps of a file with nanosecond
precision.

C<atsecs, atnsecs> are the last access time (atime) in secs and
nanoseconds from the epoch.

C<mtsecs, mtnsecs> are the last modification time (mtime) in
secs and nanoseconds from the epoch.

If the C<*nsecs> field contains the special value C<-1> then
the corresponding timestamp is set to the current time.  (The
C<*secs> field is ignored in this case).

If the C<*nsecs> field contains the special value C<-2> then
the corresponding timestamp is left unchanged.  (The
C<*secs> field is ignored in this case).

=item %version = $h->version ();

Return the libguestfs version number that the program is linked
against.

Note that because of dynamic linking this is not necessarily
the version of libguestfs that you compiled against.  You can
compile the program, and then at runtime dynamically link
against a completely different C<libguestfs.so> library.

This call was added in version C<1.0.58>.  In previous
versions of libguestfs there was no way to get the version
number.  From C code you can use ELF weak linking tricks to find out if
this symbol exists (if it doesn't, then it's an earlier version).

The call returns a structure with four elements.  The first
three (C<major>, C<minor> and C<release>) are numbers and
correspond to the usual version triplet.  The fourth element
(C<extra>) is a string and is normally empty, but may be
used for distro-specific information.

To construct the original version string:
C<$major.$minor.$release$extra>

I<Note:> Don't use this call to test for availability
of features.  Distro backports makes this unreliable.  Use
C<$h-E<gt>available> instead.

=item $fstype = $h->vfs_type ($device);

This command gets the block device type corresponding to
a mounted device called C<device>.

Usually the result is the name of the Linux VFS module that
is used to mount this device (probably determined automatically
if you used the C<$h-E<gt>mount> call).

=item $h->vg_activate ($activate, \@volgroups);

This command activates or (if C<activate> is false) deactivates
all logical volumes in the listed volume groups C<volgroups>.
If activated, then they are made known to the
kernel, ie. they appear as C</dev/mapper> devices.  If deactivated,
then those devices disappear.

This command is the same as running C<vgchange -a y|n volgroups...>

Note that if C<volgroups> is an empty list then B<all> volume groups
are activated or deactivated.

=item $h->vg_activate_all ($activate);

This command activates or (if C<activate> is false) deactivates
all logical volumes in all volume groups.
If activated, then they are made known to the
kernel, ie. they appear as C</dev/mapper> devices.  If deactivated,
then those devices disappear.

This command is the same as running C<vgchange -a y|n>

=item $h->vgcreate ($volgroup, \@physvols);

This creates an LVM volume group called C<volgroup>
from the non-empty list of physical volumes C<physvols>.

=item $h->vgremove ($vgname);

Remove an LVM volume group C<vgname>, (for example C<VG>).

This also forcibly removes all logical volumes in the volume
group (if any).

=item $h->vgrename ($volgroup, $newvolgroup);

Rename a volume group C<volgroup> with the new name C<newvolgroup>.

=item @volgroups = $h->vgs ();

List all the volumes groups detected.  This is the equivalent
of the L<vgs(8)> command.

This returns a list of just the volume group names that were
detected (eg. C<VolGroup00>).

See also C<$h-E<gt>vgs_full>.

=item @volgroups = $h->vgs_full ();

List all the volumes groups detected.  This is the equivalent
of the L<vgs(8)> command.  The "full" version includes all fields.

=item $h->wait_ready ();

This function is a no op.

In versions of the API E<lt> 1.0.71 you had to call this function
just after calling C<$h-E<gt>launch> to wait for the launch
to complete.  However this is no longer necessary because
C<$h-E<gt>launch> now does the waiting.

If you see any calls to this function in code then you can just
remove them, unless you want to retain compatibility with older
versions of the API.

=item $chars = $h->wc_c ($path);

This command counts the characters in a file, using the
C<wc -c> external command.

=item $lines = $h->wc_l ($path);

This command counts the lines in a file, using the
C<wc -l> external command.

=item $words = $h->wc_w ($path);

This command counts the words in a file, using the
C<wc -w> external command.

=item $h->write_file ($path, $content, $size);

This call creates a file called C<path>.  The contents of the
file is the string C<content> (which can contain any 8 bit data),
with length C<size>.

As a special case, if C<size> is C<0>
then the length is calculated using C<strlen> (so in this case
the content cannot contain embedded ASCII NULs).

I<NB.> Owing to a bug, writing content containing ASCII NUL
characters does I<not> work, even if the length is specified.
We hope to resolve this bug in a future version.  In the meantime
use C<$h-E<gt>upload>.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->zegrep ($regex, $path);

This calls the external C<zegrep> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->zegrepi ($regex, $path);

This calls the external C<zegrep -i> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $h->zero ($device);

This command writes zeroes over the first few blocks of C<device>.

How many blocks are zeroed isn't specified (but it's I<not> enough
to securely wipe the device).  It should be sufficient to remove
any partition tables, filesystem superblocks and so on.

See also: C<$h-E<gt>scrub_device>.

=item $h->zerofree ($device);

This runs the I<zerofree> program on C<device>.  This program
claims to zero unused inodes and disk blocks on an ext2/3
filesystem, thus making it possible to compress the filesystem
more effectively.

You should B<not> run this program if the filesystem is
mounted.

It is possible that using this program can damage the filesystem
or data on the filesystem.

=item @lines = $h->zfgrep ($pattern, $path);

This calls the external C<zfgrep> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->zfgrepi ($pattern, $path);

This calls the external C<zfgrep -i> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item $description = $h->zfile ($meth, $path);

This command runs C<file> after first decompressing C<path>
using C<method>.

C<method> must be one of C<gzip>, C<compress> or C<bzip2>.

Since 1.0.63, use C<$h-E<gt>file> instead which can now
process compressed files.

This function is deprecated.
In new code, use the C<file> call instead.

Deprecated functions will not be removed from the API, but the
fact that they are deprecated indicates that there are problems
with correct use of these functions.

=item @lines = $h->zgrep ($regex, $path);

This calls the external C<zgrep> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=item @lines = $h->zgrepi ($regex, $path);

This calls the external C<zgrep -i> program and returns the
matching lines.

Because of the message protocol, there is a transfer limit
of somewhere between 2MB and 4MB.  To transfer large files you should use
FTP.

=cut

1;

=back

=head1 COPYRIGHT

Copyright (C) 2009-2010 Red Hat Inc.

=head1 LICENSE

Please see the file COPYING.LIB for the full license.

=head1 SEE ALSO

L<guestfs(3)>,
L<guestfish(1)>,
L<http://libguestfs.org>,
L<Sys::Guestfs::Lib(3)>.

=cut
