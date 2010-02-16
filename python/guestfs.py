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

u"""Python bindings for libguestfs

import guestfs
g = guestfs.GuestFS ()
g.add_drive ("guest.img")
g.launch ()
parts = g.list_partitions ()

The guestfs module provides a Python binding to the libguestfs API
for examining and modifying virtual machine disk images.

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

Errors which happen while using the API are turned into Python
RuntimeError exceptions.

To create a guestfs handle you usually have to perform the following
sequence of calls:

# Create the handle, call add_drive at least once, and possibly
# several times if the guest has multiple block devices:
g = guestfs.GuestFS ()
g.add_drive ("guest.img")

# Launch the qemu subprocess and wait for it to become ready:
g.launch ()

# Now you can issue commands, for example:
logvols = g.lvs ()

"""

import libguestfsmod

class GuestFS:
    """Instances of this class are libguestfs API handles."""

    def __init__ (self):
        """Create a new libguestfs handle."""
        self._o = libguestfsmod.create ()

    def __del__ (self):
        libguestfsmod.close (self._o)

    def test0 (self, str, optstr, strlist, b, integer, integer64, filein, fileout):
        return libguestfsmod.test0 (self._o, str, optstr, strlist, b, integer, integer64, filein, fileout)

    def test0rint (self, val):
        return libguestfsmod.test0rint (self._o, val)

    def test0rinterr (self):
        return libguestfsmod.test0rinterr (self._o)

    def test0rint64 (self, val):
        return libguestfsmod.test0rint64 (self._o, val)

    def test0rint64err (self):
        return libguestfsmod.test0rint64err (self._o)

    def test0rbool (self, val):
        return libguestfsmod.test0rbool (self._o, val)

    def test0rboolerr (self):
        return libguestfsmod.test0rboolerr (self._o)

    def test0rconststring (self, val):
        return libguestfsmod.test0rconststring (self._o, val)

    def test0rconststringerr (self):
        return libguestfsmod.test0rconststringerr (self._o)

    def test0rconstoptstring (self, val):
        return libguestfsmod.test0rconstoptstring (self._o, val)

    def test0rconstoptstringerr (self):
        return libguestfsmod.test0rconstoptstringerr (self._o)

    def test0rstring (self, val):
        return libguestfsmod.test0rstring (self._o, val)

    def test0rstringerr (self):
        return libguestfsmod.test0rstringerr (self._o)

    def test0rstringlist (self, val):
        return libguestfsmod.test0rstringlist (self._o, val)

    def test0rstringlisterr (self):
        return libguestfsmod.test0rstringlisterr (self._o)

    def test0rstruct (self, val):
        return libguestfsmod.test0rstruct (self._o, val)

    def test0rstructerr (self):
        return libguestfsmod.test0rstructerr (self._o)

    def test0rstructlist (self, val):
        return libguestfsmod.test0rstructlist (self._o, val)

    def test0rstructlisterr (self):
        return libguestfsmod.test0rstructlisterr (self._o)

    def test0rhashtable (self, val):
        return libguestfsmod.test0rhashtable (self._o, val)

    def test0rhashtableerr (self):
        return libguestfsmod.test0rhashtableerr (self._o)

    def launch (self):
        u"""Internally libguestfs is implemented by running a
        virtual machine using qemu(1).
        
        You should call this after configuring the handle (eg.
        adding drives) but before performing any actions.
        """
        return libguestfsmod.launch (self._o)

    def wait_ready (self):
        u"""This function is a no op.
        
        In versions of the API < 1.0.71 you had to call this
        function just after calling "g.launch" to wait for the
        launch to complete. However this is no longer necessary
        because "g.launch" now does the waiting.
        
        If you see any calls to this function in code then you
        can just remove them, unless you want to retain
        compatibility with older versions of the API.
        """
        return libguestfsmod.wait_ready (self._o)

    def kill_subprocess (self):
        u"""This kills the qemu subprocess. You should never need to
        call this.
        """
        return libguestfsmod.kill_subprocess (self._o)

    def add_drive (self, filename):
        u"""This function adds a virtual machine disk image
        "filename" to the guest. The first time you call this
        function, the disk appears as IDE disk 0 ("/dev/sda") in
        the guest, the second time as "/dev/sdb", and so on.
        
        You don't necessarily need to be root when using
        libguestfs. However you obviously do need sufficient
        permissions to access the filename for whatever
        operations you want to perform (ie. read access if you
        just want to read the image or write access if you want
        to modify the image).
        
        This is equivalent to the qemu parameter "-drive
        file=filename,cache=off,if=...".
        
        "cache=off" is omitted in cases where it is not
        supported by the underlying filesystem.
        
        "if=..." is set at compile time by the configuration
        option "./configure --with-drive-if=...". In the rare
        case where you might need to change this at run time,
        use "g.add_drive_with_if" or "g.add_drive_ro_with_if".
        
        Note that this call checks for the existence of
        "filename". This stops you from specifying other types
        of drive which are supported by qemu such as "nbd:" and
        "http:" URLs. To specify those, use the general
        "g.config" call instead.
        """
        return libguestfsmod.add_drive (self._o, filename)

    def add_cdrom (self, filename):
        u"""This function adds a virtual CD-ROM disk image to the
        guest.
        
        This is equivalent to the qemu parameter "-cdrom
        filename".
        
        Notes:
        
        *   This call checks for the existence of "filename".
        This stops you from specifying other types of drive
        which are supported by qemu such as "nbd:" and
        "http:" URLs. To specify those, use the general
        "g.config" call instead.
        
        *   If you just want to add an ISO file (often you use
        this as an efficient way to transfer large files
        into the guest), then you should probably use
        "g.add_drive_ro" instead.
        """
        return libguestfsmod.add_cdrom (self._o, filename)

    def add_drive_ro (self, filename):
        u"""This adds a drive in snapshot mode, making it
        effectively read-only.
        
        Note that writes to the device are allowed, and will be
        seen for the duration of the guestfs handle, but they
        are written to a temporary file which is discarded as
        soon as the guestfs handle is closed. We don't currently
        have any method to enable changes to be committed,
        although qemu can support this.
        
        This is equivalent to the qemu parameter "-drive
        file=filename,snapshot=on,if=...".
        
        "if=..." is set at compile time by the configuration
        option "./configure --with-drive-if=...". In the rare
        case where you might need to change this at run time,
        use "g.add_drive_with_if" or "g.add_drive_ro_with_if".
        
        Note that this call checks for the existence of
        "filename". This stops you from specifying other types
        of drive which are supported by qemu such as "nbd:" and
        "http:" URLs. To specify those, use the general
        "g.config" call instead.
        """
        return libguestfsmod.add_drive_ro (self._o, filename)

    def config (self, qemuparam, qemuvalue):
        u"""This can be used to add arbitrary qemu command line
        parameters of the form "-param value". Actually it's not
        quite arbitrary - we prevent you from setting some
        parameters which would interfere with parameters that we
        use.
        
        The first character of "param" string must be a "-"
        (dash).
        
        "value" can be NULL.
        """
        return libguestfsmod.config (self._o, qemuparam, qemuvalue)

    def set_qemu (self, qemu):
        u"""Set the qemu binary that we will use.
        
        The default is chosen when the library was compiled by
        the configure script.
        
        You can also override this by setting the
        "LIBGUESTFS_QEMU" environment variable.
        
        Setting "qemu" to "NULL" restores the default qemu
        binary.
        """
        return libguestfsmod.set_qemu (self._o, qemu)

    def get_qemu (self):
        u"""Return the current qemu binary.
        
        This is always non-NULL. If it wasn't set already, then
        this will return the default qemu binary name.
        """
        return libguestfsmod.get_qemu (self._o)

    def set_path (self, searchpath):
        u"""Set the path that libguestfs searches for kernel and
        initrd.img.
        
        The default is "$libdir/guestfs" unless overridden by
        setting "LIBGUESTFS_PATH" environment variable.
        
        Setting "path" to "NULL" restores the default path.
        """
        return libguestfsmod.set_path (self._o, searchpath)

    def get_path (self):
        u"""Return the current search path.
        
        This is always non-NULL. If it wasn't set already, then
        this will return the default path.
        """
        return libguestfsmod.get_path (self._o)

    def set_append (self, append):
        u"""This function is used to add additional options to the
        guest kernel command line.
        
        The default is "NULL" unless overridden by setting
        "LIBGUESTFS_APPEND" environment variable.
        
        Setting "append" to "NULL" means *no* additional options
        are passed (libguestfs always adds a few of its own).
        """
        return libguestfsmod.set_append (self._o, append)

    def get_append (self):
        u"""Return the additional kernel options which are added to
        the guest kernel command line.
        
        If "NULL" then no options are added.
        """
        return libguestfsmod.get_append (self._o)

    def set_autosync (self, autosync):
        u"""If "autosync" is true, this enables autosync. Libguestfs
        will make a best effort attempt to run "g.umount_all"
        followed by "g.sync" when the handle is closed (also if
        the program exits without closing handles).
        
        This is disabled by default (except in guestfish where
        it is enabled by default).
        """
        return libguestfsmod.set_autosync (self._o, autosync)

    def get_autosync (self):
        u"""Get the autosync flag.
        """
        return libguestfsmod.get_autosync (self._o)

    def set_verbose (self, verbose):
        u"""If "verbose" is true, this turns on verbose messages (to
        "stderr").
        
        Verbose messages are disabled unless the environment
        variable "LIBGUESTFS_DEBUG" is defined and set to 1.
        """
        return libguestfsmod.set_verbose (self._o, verbose)

    def get_verbose (self):
        u"""This returns the verbose messages flag.
        """
        return libguestfsmod.get_verbose (self._o)

    def is_ready (self):
        u"""This returns true iff this handle is ready to accept
        commands (in the "READY" state).
        
        For more information on states, see guestfs(3).
        """
        return libguestfsmod.is_ready (self._o)

    def is_config (self):
        u"""This returns true iff this handle is being configured
        (in the "CONFIG" state).
        
        For more information on states, see guestfs(3).
        """
        return libguestfsmod.is_config (self._o)

    def is_launching (self):
        u"""This returns true iff this handle is launching the
        subprocess (in the "LAUNCHING" state).
        
        For more information on states, see guestfs(3).
        """
        return libguestfsmod.is_launching (self._o)

    def is_busy (self):
        u"""This returns true iff this handle is busy processing a
        command (in the "BUSY" state).
        
        For more information on states, see guestfs(3).
        """
        return libguestfsmod.is_busy (self._o)

    def get_state (self):
        u"""This returns the current state as an opaque integer.
        This is only useful for printing debug and internal
        error messages.
        
        For more information on states, see guestfs(3).
        """
        return libguestfsmod.get_state (self._o)

    def set_memsize (self, memsize):
        u"""This sets the memory size in megabytes allocated to the
        qemu subprocess. This only has any effect if called
        before "g.launch".
        
        You can also change this by setting the environment
        variable "LIBGUESTFS_MEMSIZE" before the handle is
        created.
        
        For more information on the architecture of libguestfs,
        see guestfs(3).
        """
        return libguestfsmod.set_memsize (self._o, memsize)

    def get_memsize (self):
        u"""This gets the memory size in megabytes allocated to the
        qemu subprocess.
        
        If "g.set_memsize" was not called on this handle, and if
        "LIBGUESTFS_MEMSIZE" was not set, then this returns the
        compiled-in default value for memsize.
        
        For more information on the architecture of libguestfs,
        see guestfs(3).
        """
        return libguestfsmod.get_memsize (self._o)

    def get_pid (self):
        u"""Return the process ID of the qemu subprocess. If there
        is no qemu subprocess, then this will return an error.
        
        This is an internal call used for debugging and testing.
        """
        return libguestfsmod.get_pid (self._o)

    def version (self):
        u"""Return the libguestfs version number that the program is
        linked against.
        
        Note that because of dynamic linking this is not
        necessarily the version of libguestfs that you compiled
        against. You can compile the program, and then at
        runtime dynamically link against a completely different
        "libguestfs.so" library.
        
        This call was added in version 1.0.58. In previous
        versions of libguestfs there was no way to get the
        version number. From C code you can use ELF weak linking
        tricks to find out if this symbol exists (if it doesn't,
        then it's an earlier version).
        
        The call returns a structure with four elements. The
        first three ("major", "minor" and "release") are numbers
        and correspond to the usual version triplet. The fourth
        element ("extra") is a string and is normally empty, but
        may be used for distro-specific information.
        
        To construct the original version string:
        "$major.$minor.$release$extra"
        
        *Note:* Don't use this call to test for availability of
        features. Distro backports makes this unreliable. Use
        "g.available" instead.
        
        This function returns a dictionary, with keys matching
        the various fields in the guestfs_version structure.
        """
        return libguestfsmod.version (self._o)

    def set_selinux (self, selinux):
        u"""This sets the selinux flag that is passed to the
        appliance at boot time. The default is "selinux=0"
        (disabled).
        
        Note that if SELinux is enabled, it is always in
        Permissive mode ("enforcing=0").
        
        For more information on the architecture of libguestfs,
        see guestfs(3).
        """
        return libguestfsmod.set_selinux (self._o, selinux)

    def get_selinux (self):
        u"""This returns the current setting of the selinux flag
        which is passed to the appliance at boot time. See
        "g.set_selinux".
        
        For more information on the architecture of libguestfs,
        see guestfs(3).
        """
        return libguestfsmod.get_selinux (self._o)

    def set_trace (self, trace):
        u"""If the command trace flag is set to 1, then commands are
        printed on stdout before they are executed in a format
        which is very similar to the one used by guestfish. In
        other words, you can run a program with this enabled,
        and you will get out a script which you can feed to
        guestfish to perform the same set of actions.
        
        If you want to trace C API calls into libguestfs (and
        other libraries) then possibly a better way is to use
        the external ltrace(1) command.
        
        Command traces are disabled unless the environment
        variable "LIBGUESTFS_TRACE" is defined and set to 1.
        """
        return libguestfsmod.set_trace (self._o, trace)

    def get_trace (self):
        u"""Return the command trace flag.
        """
        return libguestfsmod.get_trace (self._o)

    def set_direct (self, direct):
        u"""If the direct appliance mode flag is enabled, then stdin
        and stdout are passed directly through to the appliance
        once it is launched.
        
        One consequence of this is that log messages aren't
        caught by the library and handled by
        "g.set_log_message_callback", but go straight to stdout.
        
        You probably don't want to use this unless you know what
        you are doing.
        
        The default is disabled.
        """
        return libguestfsmod.set_direct (self._o, direct)

    def get_direct (self):
        u"""Return the direct appliance mode flag.
        """
        return libguestfsmod.get_direct (self._o)

    def set_recovery_proc (self, recoveryproc):
        u"""If this is called with the parameter "false" then
        "g.launch" does not create a recovery process. The
        purpose of the recovery process is to stop runaway qemu
        processes in the case where the main program aborts
        abruptly.
        
        This only has any effect if called before "g.launch",
        and the default is true.
        
        About the only time when you would want to disable this
        is if the main process will fork itself into the
        background ("daemonize" itself). In this case the
        recovery process thinks that the main program has
        disappeared and so kills qemu, which is not very
        helpful.
        """
        return libguestfsmod.set_recovery_proc (self._o, recoveryproc)

    def get_recovery_proc (self):
        u"""Return the recovery process enabled flag.
        """
        return libguestfsmod.get_recovery_proc (self._o)

    def add_drive_with_if (self, filename, iface):
        u"""This is the same as "g.add_drive" but it allows you to
        specify the QEMU interface emulation to use at run time.
        """
        return libguestfsmod.add_drive_with_if (self._o, filename, iface)

    def add_drive_ro_with_if (self, filename, iface):
        u"""This is the same as "g.add_drive_ro" but it allows you
        to specify the QEMU interface emulation to use at run
        time.
        """
        return libguestfsmod.add_drive_ro_with_if (self._o, filename, iface)

    def mount (self, device, mountpoint):
        u"""Mount a guest disk at a position in the filesystem.
        Block devices are named "/dev/sda", "/dev/sdb" and so
        on, as they were added to the guest. If those block
        devices contain partitions, they will have the usual
        names (eg. "/dev/sda1"). Also LVM "/dev/VG/LV"-style
        names can be used.
        
        The rules are the same as for mount(2): A filesystem
        must first be mounted on "/" before others can be
        mounted. Other filesystems can only be mounted on
        directories which already exist.
        
        The mounted filesystem is writable, if we have
        sufficient permissions on the underlying device.
        
        The filesystem options "sync" and "noatime" are set with
        this call, in order to improve reliability.
        """
        return libguestfsmod.mount (self._o, device, mountpoint)

    def sync (self):
        u"""This syncs the disk, so that any writes are flushed
        through to the underlying disk image.
        
        You should always call this if you have modified a disk
        image, before closing the handle.
        """
        return libguestfsmod.sync (self._o)

    def touch (self, path):
        u"""Touch acts like the touch(1) command. It can be used to
        update the timestamps on a file, or, if the file does
        not exist, to create a new zero-length file.
        """
        return libguestfsmod.touch (self._o, path)

    def cat (self, path):
        u"""Return the contents of the file named "path".
        
        Note that this function cannot correctly handle binary
        files (specifically, files containing "\\0" character
        which is treated as end of string). For those you need
        to use the "g.read_file" or "g.download" functions which
        have a more complex interface.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.cat (self._o, path)

    def ll (self, directory):
        u"""List the files in "directory" (relative to the root
        directory, there is no cwd) in the format of 'ls -la'.
        
        This command is mostly useful for interactive sessions.
        It is *not* intended that you try to parse the output
        string.
        """
        return libguestfsmod.ll (self._o, directory)

    def ls (self, directory):
        u"""List the files in "directory" (relative to the root
        directory, there is no cwd). The '.' and '..' entries
        are not returned, but hidden files are shown.
        
        This command is mostly useful for interactive sessions.
        Programs should probably use "g.readdir" instead.
        
        This function returns a list of strings.
        """
        return libguestfsmod.ls (self._o, directory)

    def list_devices (self):
        u"""List all the block devices.
        
        The full block device names are returned, eg. "/dev/sda"
        
        This function returns a list of strings.
        """
        return libguestfsmod.list_devices (self._o)

    def list_partitions (self):
        u"""List all the partitions detected on all block devices.
        
        The full partition device names are returned, eg.
        "/dev/sda1"
        
        This does not return logical volumes. For that you will
        need to call "g.lvs".
        
        This function returns a list of strings.
        """
        return libguestfsmod.list_partitions (self._o)

    def pvs (self):
        u"""List all the physical volumes detected. This is the
        equivalent of the pvs(8) command.
        
        This returns a list of just the device names that
        contain PVs (eg. "/dev/sda2").
        
        See also "g.pvs_full".
        
        This function returns a list of strings.
        """
        return libguestfsmod.pvs (self._o)

    def vgs (self):
        u"""List all the volumes groups detected. This is the
        equivalent of the vgs(8) command.
        
        This returns a list of just the volume group names that
        were detected (eg. "VolGroup00").
        
        See also "g.vgs_full".
        
        This function returns a list of strings.
        """
        return libguestfsmod.vgs (self._o)

    def lvs (self):
        u"""List all the logical volumes detected. This is the
        equivalent of the lvs(8) command.
        
        This returns a list of the logical volume device names
        (eg. "/dev/VolGroup00/LogVol00").
        
        See also "g.lvs_full".
        
        This function returns a list of strings.
        """
        return libguestfsmod.lvs (self._o)

    def pvs_full (self):
        u"""List all the physical volumes detected. This is the
        equivalent of the pvs(8) command. The "full" version
        includes all fields.
        
        This function returns a list of lvm_pvs. Each lvm_pv is
        represented as a dictionary.
        """
        return libguestfsmod.pvs_full (self._o)

    def vgs_full (self):
        u"""List all the volumes groups detected. This is the
        equivalent of the vgs(8) command. The "full" version
        includes all fields.
        
        This function returns a list of lvm_vgs. Each lvm_vg is
        represented as a dictionary.
        """
        return libguestfsmod.vgs_full (self._o)

    def lvs_full (self):
        u"""List all the logical volumes detected. This is the
        equivalent of the lvs(8) command. The "full" version
        includes all fields.
        
        This function returns a list of lvm_lvs. Each lvm_lv is
        represented as a dictionary.
        """
        return libguestfsmod.lvs_full (self._o)

    def read_lines (self, path):
        u"""Return the contents of the file named "path".
        
        The file contents are returned as a list of lines.
        Trailing "LF" and "CRLF" character sequences are *not*
        returned.
        
        Note that this function cannot correctly handle binary
        files (specifically, files containing "\\0" character
        which is treated as end of line). For those you need to
        use the "g.read_file" function which has a more complex
        interface.
        
        This function returns a list of strings.
        """
        return libguestfsmod.read_lines (self._o, path)

    def aug_init (self, root, flags):
        u"""Create a new Augeas handle for editing configuration
        files. If there was any previous Augeas handle
        associated with this guestfs session, then it is closed.
        
        You must call this before using any other "g.aug_*"
        commands.
        
        "root" is the filesystem root. "root" must not be NULL,
        use "/" instead.
        
        The flags are the same as the flags defined in
        <augeas.h>, the logical *or* of the following integers:
        
        "AUG_SAVE_BACKUP" = 1
        Keep the original file with a ".augsave" extension.
        
        "AUG_SAVE_NEWFILE" = 2
        Save changes into a file with extension ".augnew",
        and do not overwrite original. Overrides
        "AUG_SAVE_BACKUP".
        
        "AUG_TYPE_CHECK" = 4
        Typecheck lenses (can be expensive).
        
        "AUG_NO_STDINC" = 8
        Do not use standard load path for modules.
        
        "AUG_SAVE_NOOP" = 16
        Make save a no-op, just record what would have been
        changed.
        
        "AUG_NO_LOAD" = 32
        Do not load the tree in "g.aug_init".
        
        To close the handle, you can call "g.aug_close".
        
        To find out more about Augeas, see <http://augeas.net/>.
        """
        return libguestfsmod.aug_init (self._o, root, flags)

    def aug_close (self):
        u"""Close the current Augeas handle and free up any
        resources used by it. After calling this, you have to
        call "g.aug_init" again before you can use any other
        Augeas functions.
        """
        return libguestfsmod.aug_close (self._o)

    def aug_defvar (self, name, expr):
        u"""Defines an Augeas variable "name" whose value is the
        result of evaluating "expr". If "expr" is NULL, then
        "name" is undefined.
        
        On success this returns the number of nodes in "expr",
        or 0 if "expr" evaluates to something which is not a
        nodeset.
        """
        return libguestfsmod.aug_defvar (self._o, name, expr)

    def aug_defnode (self, name, expr, val):
        u"""Defines a variable "name" whose value is the result of
        evaluating "expr".
        
        If "expr" evaluates to an empty nodeset, a node is
        created, equivalent to calling "g.aug_set" "expr",
        "value". "name" will be the nodeset containing that
        single node.
        
        On success this returns a pair containing the number of
        nodes in the nodeset, and a boolean flag if a node was
        created.
        
        This function returns a dictionary, with keys matching
        the various fields in the guestfs_int_bool structure.
        """
        return libguestfsmod.aug_defnode (self._o, name, expr, val)

    def aug_get (self, augpath):
        u"""Look up the value associated with "path". If "path"
        matches exactly one node, the "value" is returned.
        """
        return libguestfsmod.aug_get (self._o, augpath)

    def aug_set (self, augpath, val):
        u"""Set the value associated with "path" to "value".
        """
        return libguestfsmod.aug_set (self._o, augpath, val)

    def aug_insert (self, augpath, label, before):
        u"""Create a new sibling "label" for "path", inserting it
        into the tree before or after "path" (depending on the
        boolean flag "before").
        
        "path" must match exactly one existing node in the tree,
        and "label" must be a label, ie. not contain "/", "*" or
        end with a bracketed index "[N]".
        """
        return libguestfsmod.aug_insert (self._o, augpath, label, before)

    def aug_rm (self, augpath):
        u"""Remove "path" and all of its children.
        
        On success this returns the number of entries which were
        removed.
        """
        return libguestfsmod.aug_rm (self._o, augpath)

    def aug_mv (self, src, dest):
        u"""Move the node "src" to "dest". "src" must match exactly
        one node. "dest" is overwritten if it exists.
        """
        return libguestfsmod.aug_mv (self._o, src, dest)

    def aug_match (self, augpath):
        u"""Returns a list of paths which match the path expression
        "path". The returned paths are sufficiently qualified so
        that they match exactly one node in the current tree.
        
        This function returns a list of strings.
        """
        return libguestfsmod.aug_match (self._o, augpath)

    def aug_save (self):
        u"""This writes all pending changes to disk.
        
        The flags which were passed to "g.aug_init" affect
        exactly how files are saved.
        """
        return libguestfsmod.aug_save (self._o)

    def aug_load (self):
        u"""Load files into the tree.
        
        See "aug_load" in the Augeas documentation for the full
        gory details.
        """
        return libguestfsmod.aug_load (self._o)

    def aug_ls (self, augpath):
        u"""This is just a shortcut for listing "g.aug_match"
        "path/*" and sorting the resulting nodes into
        alphabetical order.
        
        This function returns a list of strings.
        """
        return libguestfsmod.aug_ls (self._o, augpath)

    def rm (self, path):
        u"""Remove the single file "path".
        """
        return libguestfsmod.rm (self._o, path)

    def rmdir (self, path):
        u"""Remove the single directory "path".
        """
        return libguestfsmod.rmdir (self._o, path)

    def rm_rf (self, path):
        u"""Remove the file or directory "path", recursively
        removing the contents if its a directory. This is like
        the "rm -rf" shell command.
        """
        return libguestfsmod.rm_rf (self._o, path)

    def mkdir (self, path):
        u"""Create a directory named "path".
        """
        return libguestfsmod.mkdir (self._o, path)

    def mkdir_p (self, path):
        u"""Create a directory named "path", creating any parent
        directories as necessary. This is like the "mkdir -p"
        shell command.
        """
        return libguestfsmod.mkdir_p (self._o, path)

    def chmod (self, mode, path):
        u"""Change the mode (permissions) of "path" to "mode". Only
        numeric modes are supported.
        
        *Note*: When using this command from guestfish, "mode"
        by default would be decimal, unless you prefix it with 0
        to get octal, ie. use 0700 not 700.
        """
        return libguestfsmod.chmod (self._o, mode, path)

    def chown (self, owner, group, path):
        u"""Change the file owner to "owner" and group to "group".
        
        Only numeric uid and gid are supported. If you want to
        use names, you will need to locate and parse the
        password file yourself (Augeas support makes this
        relatively easy).
        """
        return libguestfsmod.chown (self._o, owner, group, path)

    def exists (self, path):
        u"""This returns "true" if and only if there is a file,
        directory (or anything) with the given "path" name.
        
        See also "g.is_file", "g.is_dir", "g.stat".
        """
        return libguestfsmod.exists (self._o, path)

    def is_file (self, path):
        u"""This returns "true" if and only if there is a file with
        the given "path" name. Note that it returns false for
        other objects like directories.
        
        See also "g.stat".
        """
        return libguestfsmod.is_file (self._o, path)

    def is_dir (self, path):
        u"""This returns "true" if and only if there is a directory
        with the given "path" name. Note that it returns false
        for other objects like files.
        
        See also "g.stat".
        """
        return libguestfsmod.is_dir (self._o, path)

    def pvcreate (self, device):
        u"""This creates an LVM physical volume on the named
        "device", where "device" should usually be a partition
        name such as "/dev/sda1".
        """
        return libguestfsmod.pvcreate (self._o, device)

    def vgcreate (self, volgroup, physvols):
        u"""This creates an LVM volume group called "volgroup" from
        the non-empty list of physical volumes "physvols".
        """
        return libguestfsmod.vgcreate (self._o, volgroup, physvols)

    def lvcreate (self, logvol, volgroup, mbytes):
        u"""This creates an LVM volume group called "logvol" on the
        volume group "volgroup", with "size" megabytes.
        """
        return libguestfsmod.lvcreate (self._o, logvol, volgroup, mbytes)

    def mkfs (self, fstype, device):
        u"""This creates a filesystem on "device" (usually a
        partition or LVM logical volume). The filesystem type is
        "fstype", for example "ext3".
        """
        return libguestfsmod.mkfs (self._o, fstype, device)

    def sfdisk (self, device, cyls, heads, sectors, lines):
        u"""This is a direct interface to the sfdisk(8) program for
        creating partitions on block devices.
        
        "device" should be a block device, for example
        "/dev/sda".
        
        "cyls", "heads" and "sectors" are the number of
        cylinders, heads and sectors on the device, which are
        passed directly to sfdisk as the *-C*, *-H* and *-S*
        parameters. If you pass 0 for any of these, then the
        corresponding parameter is omitted. Usually for 'large'
        disks, you can just pass 0 for these, but for small
        (floppy-sized) disks, sfdisk (or rather, the kernel)
        cannot work out the right geometry and you will need to
        tell it.
        
        "lines" is a list of lines that we feed to "sfdisk". For
        more information refer to the sfdisk(8) manpage.
        
        To create a single partition occupying the whole disk,
        you would pass "lines" as a single element list, when
        the single element being the string "," (comma).
        
        See also: "g.sfdisk_l", "g.sfdisk_N", "g.part_init"
        
        This command is dangerous. Without careful use you can
        easily destroy all your data.
        """
        return libguestfsmod.sfdisk (self._o, device, cyls, heads, sectors, lines)

    def write_file (self, path, content, size):
        u"""This call creates a file called "path". The contents of
        the file is the string "content" (which can contain any
        8 bit data), with length "size".
        
        As a special case, if "size" is 0 then the length is
        calculated using "strlen" (so in this case the content
        cannot contain embedded ASCII NULs).
        
        *NB.* Owing to a bug, writing content containing ASCII
        NUL characters does *not* work, even if the length is
        specified. We hope to resolve this bug in a future
        version. In the meantime use "g.upload".
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.write_file (self._o, path, content, size)

    def umount (self, pathordevice):
        u"""This unmounts the given filesystem. The filesystem may
        be specified either by its mountpoint (path) or the
        device which contains the filesystem.
        """
        return libguestfsmod.umount (self._o, pathordevice)

    def mounts (self):
        u"""This returns the list of currently mounted filesystems.
        It returns the list of devices (eg. "/dev/sda1",
        "/dev/VG/LV").
        
        Some internal mounts are not shown.
        
        See also: "g.mountpoints"
        
        This function returns a list of strings.
        """
        return libguestfsmod.mounts (self._o)

    def umount_all (self):
        u"""This unmounts all mounted filesystems.
        
        Some internal mounts are not unmounted by this call.
        """
        return libguestfsmod.umount_all (self._o)

    def lvm_remove_all (self):
        u"""This command removes all LVM logical volumes, volume
        groups and physical volumes.
        
        This command is dangerous. Without careful use you can
        easily destroy all your data.
        """
        return libguestfsmod.lvm_remove_all (self._o)

    def file (self, path):
        u"""This call uses the standard file(1) command to determine
        the type or contents of the file. This also works on
        devices, for example to find out whether a partition
        contains a filesystem.
        
        This call will also transparently look inside various
        types of compressed file.
        
        The exact command which runs is "file -zbsL path". Note
        in particular that the filename is not prepended to the
        output (the "-b" option).
        """
        return libguestfsmod.file (self._o, path)

    def command (self, arguments):
        u"""This call runs a command from the guest filesystem. The
        filesystem must be mounted, and must contain a
        compatible operating system (ie. something Linux, with
        the same or compatible processor architecture).
        
        The single parameter is an argv-style list of arguments.
        The first element is the name of the program to run.
        Subsequent elements are parameters. The list must be
        non-empty (ie. must contain a program name). Note that
        the command runs directly, and is *not* invoked via the
        shell (see "g.sh").
        
        The return value is anything printed to *stdout* by the
        command.
        
        If the command returns a non-zero exit status, then this
        function returns an error message. The error message
        string is the content of *stderr* from the command.
        
        The $PATH environment variable will contain at least
        "/usr/bin" and "/bin". If you require a program from
        another location, you should provide the full path in
        the first parameter.
        
        Shared libraries and data files required by the program
        must be available on filesystems which are mounted in
        the correct places. It is the caller's responsibility to
        ensure all filesystems that are needed are mounted at
        the right locations.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.command (self._o, arguments)

    def command_lines (self, arguments):
        u"""This is the same as "g.command", but splits the result
        into a list of lines.
        
        See also: "g.sh_lines"
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.command_lines (self._o, arguments)

    def stat (self, path):
        u"""Returns file information for the given "path".
        
        This is the same as the stat(2) system call.
        
        This function returns a dictionary, with keys matching
        the various fields in the guestfs_stat structure.
        """
        return libguestfsmod.stat (self._o, path)

    def lstat (self, path):
        u"""Returns file information for the given "path".
        
        This is the same as "g.stat" except that if "path" is a
        symbolic link, then the link is stat-ed, not the file it
        refers to.
        
        This is the same as the lstat(2) system call.
        
        This function returns a dictionary, with keys matching
        the various fields in the guestfs_stat structure.
        """
        return libguestfsmod.lstat (self._o, path)

    def statvfs (self, path):
        u"""Returns file system statistics for any mounted file
        system. "path" should be a file or directory in the
        mounted file system (typically it is the mount point
        itself, but it doesn't need to be).
        
        This is the same as the statvfs(2) system call.
        
        This function returns a dictionary, with keys matching
        the various fields in the guestfs_statvfs structure.
        """
        return libguestfsmod.statvfs (self._o, path)

    def tune2fs_l (self, device):
        u"""This returns the contents of the ext2, ext3 or ext4
        filesystem superblock on "device".
        
        It is the same as running "tune2fs -l device". See
        tune2fs(8) manpage for more details. The list of fields
        returned isn't clearly defined, and depends on both the
        version of "tune2fs" that libguestfs was built against,
        and the filesystem itself.
        
        This function returns a dictionary.
        """
        return libguestfsmod.tune2fs_l (self._o, device)

    def blockdev_setro (self, device):
        u"""Sets the block device named "device" to read-only.
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_setro (self._o, device)

    def blockdev_setrw (self, device):
        u"""Sets the block device named "device" to read-write.
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_setrw (self._o, device)

    def blockdev_getro (self, device):
        u"""Returns a boolean indicating if the block device is
        read-only (true if read-only, false if not).
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_getro (self._o, device)

    def blockdev_getss (self, device):
        u"""This returns the size of sectors on a block device.
        Usually 512, but can be larger for modern devices.
        
        (Note, this is not the size in sectors, use
        "g.blockdev_getsz" for that).
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_getss (self._o, device)

    def blockdev_getbsz (self, device):
        u"""This returns the block size of a device.
        
        (Note this is different from both *size in blocks* and
        *filesystem block size*).
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_getbsz (self._o, device)

    def blockdev_setbsz (self, device, blocksize):
        u"""This sets the block size of a device.
        
        (Note this is different from both *size in blocks* and
        *filesystem block size*).
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_setbsz (self._o, device, blocksize)

    def blockdev_getsz (self, device):
        u"""This returns the size of the device in units of 512-byte
        sectors (even if the sectorsize isn't 512 bytes ...
        weird).
        
        See also "g.blockdev_getss" for the real sector size of
        the device, and "g.blockdev_getsize64" for the more
        useful *size in bytes*.
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_getsz (self._o, device)

    def blockdev_getsize64 (self, device):
        u"""This returns the size of the device in bytes.
        
        See also "g.blockdev_getsz".
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_getsize64 (self._o, device)

    def blockdev_flushbufs (self, device):
        u"""This tells the kernel to flush internal buffers
        associated with "device".
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_flushbufs (self._o, device)

    def blockdev_rereadpt (self, device):
        u"""Reread the partition table on "device".
        
        This uses the blockdev(8) command.
        """
        return libguestfsmod.blockdev_rereadpt (self._o, device)

    def upload (self, filename, remotefilename):
        u"""Upload local file "filename" to "remotefilename" on the
        filesystem.
        
        "filename" can also be a named pipe.
        
        See also "g.download".
        """
        return libguestfsmod.upload (self._o, filename, remotefilename)

    def download (self, remotefilename, filename):
        u"""Download file "remotefilename" and save it as "filename"
        on the local machine.
        
        "filename" can also be a named pipe.
        
        See also "g.upload", "g.cat".
        """
        return libguestfsmod.download (self._o, remotefilename, filename)

    def checksum (self, csumtype, path):
        u"""This call computes the MD5, SHAx or CRC checksum of the
        file named "path".
        
        The type of checksum to compute is given by the
        "csumtype" parameter which must have one of the
        following values:
        
        "crc"
        Compute the cyclic redundancy check (CRC) specified
        by POSIX for the "cksum" command.
        
        "md5"
        Compute the MD5 hash (using the "md5sum" program).
        
        "sha1"
        Compute the SHA1 hash (using the "sha1sum" program).
        
        "sha224"
        Compute the SHA224 hash (using the "sha224sum"
        program).
        
        "sha256"
        Compute the SHA256 hash (using the "sha256sum"
        program).
        
        "sha384"
        Compute the SHA384 hash (using the "sha384sum"
        program).
        
        "sha512"
        Compute the SHA512 hash (using the "sha512sum"
        program).
        
        The checksum is returned as a printable string.
        """
        return libguestfsmod.checksum (self._o, csumtype, path)

    def tar_in (self, tarfile, directory):
        u"""This command uploads and unpacks local file "tarfile"
        (an *uncompressed* tar file) into "directory".
        
        To upload a compressed tarball, use "g.tgz_in".
        """
        return libguestfsmod.tar_in (self._o, tarfile, directory)

    def tar_out (self, directory, tarfile):
        u"""This command packs the contents of "directory" and
        downloads it to local file "tarfile".
        
        To download a compressed tarball, use "g.tgz_out".
        """
        return libguestfsmod.tar_out (self._o, directory, tarfile)

    def tgz_in (self, tarball, directory):
        u"""This command uploads and unpacks local file "tarball" (a
        *gzip compressed* tar file) into "directory".
        
        To upload an uncompressed tarball, use "g.tar_in".
        """
        return libguestfsmod.tgz_in (self._o, tarball, directory)

    def tgz_out (self, directory, tarball):
        u"""This command packs the contents of "directory" and
        downloads it to local file "tarball".
        
        To download an uncompressed tarball, use "g.tar_out".
        """
        return libguestfsmod.tgz_out (self._o, directory, tarball)

    def mount_ro (self, device, mountpoint):
        u"""This is the same as the "g.mount" command, but it mounts
        the filesystem with the read-only (*-o ro*) flag.
        """
        return libguestfsmod.mount_ro (self._o, device, mountpoint)

    def mount_options (self, options, device, mountpoint):
        u"""This is the same as the "g.mount" command, but it allows
        you to set the mount options as for the mount(8) *-o*
        flag.
        """
        return libguestfsmod.mount_options (self._o, options, device, mountpoint)

    def mount_vfs (self, options, vfstype, device, mountpoint):
        u"""This is the same as the "g.mount" command, but it allows
        you to set both the mount options and the vfstype as for
        the mount(8) *-o* and *-t* flags.
        """
        return libguestfsmod.mount_vfs (self._o, options, vfstype, device, mountpoint)

    def debug (self, subcmd, extraargs):
        u"""The "g.debug" command exposes some internals of
        "guestfsd" (the guestfs daemon) that runs inside the
        qemu subprocess.
        
        There is no comprehensive help for this command. You
        have to look at the file "daemon/debug.c" in the
        libguestfs source to find out what you can do.
        """
        return libguestfsmod.debug (self._o, subcmd, extraargs)

    def lvremove (self, device):
        u"""Remove an LVM logical volume "device", where "device" is
        the path to the LV, such as "/dev/VG/LV".
        
        You can also remove all LVs in a volume group by
        specifying the VG name, "/dev/VG".
        """
        return libguestfsmod.lvremove (self._o, device)

    def vgremove (self, vgname):
        u"""Remove an LVM volume group "vgname", (for example "VG").
        
        This also forcibly removes all logical volumes in the
        volume group (if any).
        """
        return libguestfsmod.vgremove (self._o, vgname)

    def pvremove (self, device):
        u"""This wipes a physical volume "device" so that LVM will
        no longer recognise it.
        
        The implementation uses the "pvremove" command which
        refuses to wipe physical volumes that contain any volume
        groups, so you have to remove those first.
        """
        return libguestfsmod.pvremove (self._o, device)

    def set_e2label (self, device, label):
        u"""This sets the ext2/3/4 filesystem label of the
        filesystem on "device" to "label". Filesystem labels are
        limited to 16 characters.
        
        You can use either "g.tune2fs_l" or "g.get_e2label" to
        return the existing label on a filesystem.
        """
        return libguestfsmod.set_e2label (self._o, device, label)

    def get_e2label (self, device):
        u"""This returns the ext2/3/4 filesystem label of the
        filesystem on "device".
        """
        return libguestfsmod.get_e2label (self._o, device)

    def set_e2uuid (self, device, uuid):
        u"""This sets the ext2/3/4 filesystem UUID of the filesystem
        on "device" to "uuid". The format of the UUID and
        alternatives such as "clear", "random" and "time" are
        described in the tune2fs(8) manpage.
        
        You can use either "g.tune2fs_l" or "g.get_e2uuid" to
        return the existing UUID of a filesystem.
        """
        return libguestfsmod.set_e2uuid (self._o, device, uuid)

    def get_e2uuid (self, device):
        u"""This returns the ext2/3/4 filesystem UUID of the
        filesystem on "device".
        """
        return libguestfsmod.get_e2uuid (self._o, device)

    def fsck (self, fstype, device):
        u"""This runs the filesystem checker (fsck) on "device"
        which should have filesystem type "fstype".
        
        The returned integer is the status. See fsck(8) for the
        list of status codes from "fsck".
        
        Notes:
        
        *   Multiple status codes can be summed together.
        
        *   A non-zero return code can mean "success", for
        example if errors have been corrected on the
        filesystem.
        
        *   Checking or repairing NTFS volumes is not supported
        (by linux-ntfs).
        
        This command is entirely equivalent to running "fsck -a
        -t fstype device".
        """
        return libguestfsmod.fsck (self._o, fstype, device)

    def zero (self, device):
        u"""This command writes zeroes over the first few blocks of
        "device".
        
        How many blocks are zeroed isn't specified (but it's
        *not* enough to securely wipe the device). It should be
        sufficient to remove any partition tables, filesystem
        superblocks and so on.
        
        See also: "g.scrub_device".
        """
        return libguestfsmod.zero (self._o, device)

    def grub_install (self, root, device):
        u"""This command installs GRUB (the Grand Unified
        Bootloader) on "device", with the root directory being
        "root".
        """
        return libguestfsmod.grub_install (self._o, root, device)

    def cp (self, src, dest):
        u"""This copies a file from "src" to "dest" where "dest" is
        either a destination filename or destination directory.
        """
        return libguestfsmod.cp (self._o, src, dest)

    def cp_a (self, src, dest):
        u"""This copies a file or directory from "src" to "dest"
        recursively using the "cp -a" command.
        """
        return libguestfsmod.cp_a (self._o, src, dest)

    def mv (self, src, dest):
        u"""This moves a file from "src" to "dest" where "dest" is
        either a destination filename or destination directory.
        """
        return libguestfsmod.mv (self._o, src, dest)

    def drop_caches (self, whattodrop):
        u"""This instructs the guest kernel to drop its page cache,
        and/or dentries and inode caches. The parameter
        "whattodrop" tells the kernel what precisely to drop,
        see <http://linux-mm.org/Drop_Caches>
        
        Setting "whattodrop" to 3 should drop everything.
        
        This automatically calls sync(2) before the operation,
        so that the maximum guest memory is freed.
        """
        return libguestfsmod.drop_caches (self._o, whattodrop)

    def dmesg (self):
        u"""This returns the kernel messages ("dmesg" output) from
        the guest kernel. This is sometimes useful for extended
        debugging of problems.
        
        Another way to get the same information is to enable
        verbose messages with "g.set_verbose" or by setting the
        environment variable "LIBGUESTFS_DEBUG=1" before running
        the program.
        """
        return libguestfsmod.dmesg (self._o)

    def ping_daemon (self):
        u"""This is a test probe into the guestfs daemon running
        inside the qemu subprocess. Calling this function checks
        that the daemon responds to the ping message, without
        affecting the daemon or attached block device(s) in any
        other way.
        """
        return libguestfsmod.ping_daemon (self._o)

    def equal (self, file1, file2):
        u"""This compares the two files "file1" and "file2" and
        returns true if their content is exactly equal, or false
        otherwise.
        
        The external cmp(1) program is used for the comparison.
        """
        return libguestfsmod.equal (self._o, file1, file2)

    def strings (self, path):
        u"""This runs the strings(1) command on a file and returns
        the list of printable strings found.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.strings (self._o, path)

    def strings_e (self, encoding, path):
        u"""This is like the "g.strings" command, but allows you to
        specify the encoding.
        
        See the strings(1) manpage for the full list of
        encodings.
        
        Commonly useful encodings are "l" (lower case L) which
        will show strings inside Windows/x86 files.
        
        The returned strings are transcoded to UTF-8.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.strings_e (self._o, encoding, path)

    def hexdump (self, path):
        u"""This runs "hexdump -C" on the given "path". The result
        is the human-readable, canonical hex dump of the file.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.hexdump (self._o, path)

    def zerofree (self, device):
        u"""This runs the *zerofree* program on "device". This
        program claims to zero unused inodes and disk blocks on
        an ext2/3 filesystem, thus making it possible to
        compress the filesystem more effectively.
        
        You should not run this program if the filesystem is
        mounted.
        
        It is possible that using this program can damage the
        filesystem or data on the filesystem.
        """
        return libguestfsmod.zerofree (self._o, device)

    def pvresize (self, device):
        u"""This resizes (expands or shrinks) an existing LVM
        physical volume to match the new size of the underlying
        device.
        """
        return libguestfsmod.pvresize (self._o, device)

    def sfdisk_N (self, device, partnum, cyls, heads, sectors, line):
        u"""This runs sfdisk(8) option to modify just the single
        partition "n" (note: "n" counts from 1).
        
        For other parameters, see "g.sfdisk". You should usually
        pass 0 for the cyls/heads/sectors parameters.
        
        See also: "g.part_add"
        
        This command is dangerous. Without careful use you can
        easily destroy all your data.
        """
        return libguestfsmod.sfdisk_N (self._o, device, partnum, cyls, heads, sectors, line)

    def sfdisk_l (self, device):
        u"""This displays the partition table on "device", in the
        human-readable output of the sfdisk(8) command. It is
        not intended to be parsed.
        
        See also: "g.part_list"
        """
        return libguestfsmod.sfdisk_l (self._o, device)

    def sfdisk_kernel_geometry (self, device):
        u"""This displays the kernel's idea of the geometry of
        "device".
        
        The result is in human-readable format, and not designed
        to be parsed.
        """
        return libguestfsmod.sfdisk_kernel_geometry (self._o, device)

    def sfdisk_disk_geometry (self, device):
        u"""This displays the disk geometry of "device" read from
        the partition table. Especially in the case where the
        underlying block device has been resized, this can be
        different from the kernel's idea of the geometry (see
        "g.sfdisk_kernel_geometry").
        
        The result is in human-readable format, and not designed
        to be parsed.
        """
        return libguestfsmod.sfdisk_disk_geometry (self._o, device)

    def vg_activate_all (self, activate):
        u"""This command activates or (if "activate" is false)
        deactivates all logical volumes in all volume groups. If
        activated, then they are made known to the kernel, ie.
        they appear as "/dev/mapper" devices. If deactivated,
        then those devices disappear.
        
        This command is the same as running "vgchange -a y|n"
        """
        return libguestfsmod.vg_activate_all (self._o, activate)

    def vg_activate (self, activate, volgroups):
        u"""This command activates or (if "activate" is false)
        deactivates all logical volumes in the listed volume
        groups "volgroups". If activated, then they are made
        known to the kernel, ie. they appear as "/dev/mapper"
        devices. If deactivated, then those devices disappear.
        
        This command is the same as running "vgchange -a y|n
        volgroups..."
        
        Note that if "volgroups" is an empty list then all
        volume groups are activated or deactivated.
        """
        return libguestfsmod.vg_activate (self._o, activate, volgroups)

    def lvresize (self, device, mbytes):
        u"""This resizes (expands or shrinks) an existing LVM
        logical volume to "mbytes". When reducing, data in the
        reduced part is lost.
        """
        return libguestfsmod.lvresize (self._o, device, mbytes)

    def resize2fs (self, device):
        u"""This resizes an ext2 or ext3 filesystem to match the
        size of the underlying device.
        
        *Note:* It is sometimes required that you run
        "g.e2fsck_f" on the "device" before calling this
        command. For unknown reasons "resize2fs" sometimes gives
        an error about this and sometimes not. In any case, it
        is always safe to call "g.e2fsck_f" before calling this
        function.
        """
        return libguestfsmod.resize2fs (self._o, device)

    def find (self, directory):
        u"""This command lists out all files and directories,
        recursively, starting at "directory". It is essentially
        equivalent to running the shell command "find directory
        -print" but some post-processing happens on the output,
        described below.
        
        This returns a list of strings *without any prefix*.
        Thus if the directory structure was:
        
        /tmp/a
        /tmp/b
        /tmp/c/d
        
        then the returned list from "g.find" "/tmp" would be 4
        elements:
        
        a
        b
        c
        c/d
        
        If "directory" is not a directory, then this command
        returns an error.
        
        The returned list is sorted.
        
        See also "g.find0".
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.find (self._o, directory)

    def e2fsck_f (self, device):
        u"""This runs "e2fsck -p -f device", ie. runs the ext2/ext3
        filesystem checker on "device", noninteractively ("-p"),
        even if the filesystem appears to be clean ("-f").
        
        This command is only needed because of "g.resize2fs"
        (q.v.). Normally you should use "g.fsck".
        """
        return libguestfsmod.e2fsck_f (self._o, device)

    def sleep (self, secs):
        u"""Sleep for "secs" seconds.
        """
        return libguestfsmod.sleep (self._o, secs)

    def ntfs_3g_probe (self, rw, device):
        u"""This command runs the ntfs-3g.probe(8) command which
        probes an NTFS "device" for mountability. (Not all NTFS
        volumes can be mounted read-write, and some cannot be
        mounted at all).
        
        "rw" is a boolean flag. Set it to true if you want to
        test if the volume can be mounted read-write. Set it to
        false if you want to test if the volume can be mounted
        read-only.
        
        The return value is an integer which 0 if the operation
        would succeed, or some non-zero value documented in the
        ntfs-3g.probe(8) manual page.
        """
        return libguestfsmod.ntfs_3g_probe (self._o, rw, device)

    def sh (self, command):
        u"""This call runs a command from the guest filesystem via
        the guest's "/bin/sh".
        
        This is like "g.command", but passes the command to:
        
        /bin/sh -c "command"
        
        Depending on the guest's shell, this usually results in
        wildcards being expanded, shell expressions being
        interpolated and so on.
        
        All the provisos about "g.command" apply to this call.
        """
        return libguestfsmod.sh (self._o, command)

    def sh_lines (self, command):
        u"""This is the same as "g.sh", but splits the result into a
        list of lines.
        
        See also: "g.command_lines"
        
        This function returns a list of strings.
        """
        return libguestfsmod.sh_lines (self._o, command)

    def glob_expand (self, pattern):
        u"""This command searches for all the pathnames matching
        "pattern" according to the wildcard expansion rules used
        by the shell.
        
        If no paths match, then this returns an empty list
        (note: not an error).
        
        It is just a wrapper around the C glob(3) function with
        flags "GLOB_MARK|GLOB_BRACE". See that manual page for
        more details.
        
        This function returns a list of strings.
        """
        return libguestfsmod.glob_expand (self._o, pattern)

    def scrub_device (self, device):
        u"""This command writes patterns over "device" to make data
        retrieval more difficult.
        
        It is an interface to the scrub(1) program. See that
        manual page for more details.
        
        This command is dangerous. Without careful use you can
        easily destroy all your data.
        """
        return libguestfsmod.scrub_device (self._o, device)

    def scrub_file (self, file):
        u"""This command writes patterns over a file to make data
        retrieval more difficult.
        
        The file is *removed* after scrubbing.
        
        It is an interface to the scrub(1) program. See that
        manual page for more details.
        """
        return libguestfsmod.scrub_file (self._o, file)

    def scrub_freespace (self, dir):
        u"""This command creates the directory "dir" and then fills
        it with files until the filesystem is full, and scrubs
        the files as for "g.scrub_file", and deletes them. The
        intention is to scrub any free space on the partition
        containing "dir".
        
        It is an interface to the scrub(1) program. See that
        manual page for more details.
        """
        return libguestfsmod.scrub_freespace (self._o, dir)

    def mkdtemp (self, template):
        u"""This command creates a temporary directory. The
        "template" parameter should be a full pathname for the
        temporary directory name with the final six characters
        being "XXXXXX".
        
        For example: "/tmp/myprogXXXXXX" or
        "/Temp/myprogXXXXXX", the second one being suitable for
        Windows filesystems.
        
        The name of the temporary directory that was created is
        returned.
        
        The temporary directory is created with mode 0700 and is
        owned by root.
        
        The caller is responsible for deleting the temporary
        directory and its contents after use.
        
        See also: mkdtemp(3)
        """
        return libguestfsmod.mkdtemp (self._o, template)

    def wc_l (self, path):
        u"""This command counts the lines in a file, using the "wc
        -l" external command.
        """
        return libguestfsmod.wc_l (self._o, path)

    def wc_w (self, path):
        u"""This command counts the words in a file, using the "wc
        -w" external command.
        """
        return libguestfsmod.wc_w (self._o, path)

    def wc_c (self, path):
        u"""This command counts the characters in a file, using the
        "wc -c" external command.
        """
        return libguestfsmod.wc_c (self._o, path)

    def head (self, path):
        u"""This command returns up to the first 10 lines of a file
        as a list of strings.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.head (self._o, path)

    def head_n (self, nrlines, path):
        u"""If the parameter "nrlines" is a positive number, this
        returns the first "nrlines" lines of the file "path".
        
        If the parameter "nrlines" is a negative number, this
        returns lines from the file "path", excluding the last
        "nrlines" lines.
        
        If the parameter "nrlines" is zero, this returns an
        empty list.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.head_n (self._o, nrlines, path)

    def tail (self, path):
        u"""This command returns up to the last 10 lines of a file
        as a list of strings.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.tail (self._o, path)

    def tail_n (self, nrlines, path):
        u"""If the parameter "nrlines" is a positive number, this
        returns the last "nrlines" lines of the file "path".
        
        If the parameter "nrlines" is a negative number, this
        returns lines from the file "path", starting with the
        "-nrlines"th line.
        
        If the parameter "nrlines" is zero, this returns an
        empty list.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.tail_n (self._o, nrlines, path)

    def df (self):
        u"""This command runs the "df" command to report disk space
        used.
        
        This command is mostly useful for interactive sessions.
        It is *not* intended that you try to parse the output
        string. Use "statvfs" from programs.
        """
        return libguestfsmod.df (self._o)

    def df_h (self):
        u"""This command runs the "df -h" command to report disk
        space used in human-readable format.
        
        This command is mostly useful for interactive sessions.
        It is *not* intended that you try to parse the output
        string. Use "statvfs" from programs.
        """
        return libguestfsmod.df_h (self._o)

    def du (self, path):
        u"""This command runs the "du -s" command to estimate file
        space usage for "path".
        
        "path" can be a file or a directory. If "path" is a
        directory then the estimate includes the contents of the
        directory and all subdirectories (recursively).
        
        The result is the estimated size in *kilobytes* (ie.
        units of 1024 bytes).
        """
        return libguestfsmod.du (self._o, path)

    def initrd_list (self, path):
        u"""This command lists out files contained in an initrd.
        
        The files are listed without any initial "/" character.
        The files are listed in the order they appear (not
        necessarily alphabetical). Directory names are listed as
        separate items.
        
        Old Linux kernels (2.4 and earlier) used a compressed
        ext2 filesystem as initrd. We *only* support the newer
        initramfs format (compressed cpio files).
        
        This function returns a list of strings.
        """
        return libguestfsmod.initrd_list (self._o, path)

    def mount_loop (self, file, mountpoint):
        u"""This command lets you mount "file" (a filesystem image
        in a file) on a mount point. It is entirely equivalent
        to the command "mount -o loop file mountpoint".
        """
        return libguestfsmod.mount_loop (self._o, file, mountpoint)

    def mkswap (self, device):
        u"""Create a swap partition on "device".
        """
        return libguestfsmod.mkswap (self._o, device)

    def mkswap_L (self, label, device):
        u"""Create a swap partition on "device" with label "label".
        
        Note that you cannot attach a swap label to a block
        device (eg. "/dev/sda"), just to a partition. This
        appears to be a limitation of the kernel or swap tools.
        """
        return libguestfsmod.mkswap_L (self._o, label, device)

    def mkswap_U (self, uuid, device):
        u"""Create a swap partition on "device" with UUID "uuid".
        """
        return libguestfsmod.mkswap_U (self._o, uuid, device)

    def mknod (self, mode, devmajor, devminor, path):
        u"""This call creates block or character special devices, or
        named pipes (FIFOs).
        
        The "mode" parameter should be the mode, using the
        standard constants. "devmajor" and "devminor" are the
        device major and minor numbers, only used when creating
        block and character special devices.
        """
        return libguestfsmod.mknod (self._o, mode, devmajor, devminor, path)

    def mkfifo (self, mode, path):
        u"""This call creates a FIFO (named pipe) called "path" with
        mode "mode". It is just a convenient wrapper around
        "g.mknod".
        """
        return libguestfsmod.mkfifo (self._o, mode, path)

    def mknod_b (self, mode, devmajor, devminor, path):
        u"""This call creates a block device node called "path" with
        mode "mode" and device major/minor "devmajor" and
        "devminor". It is just a convenient wrapper around
        "g.mknod".
        """
        return libguestfsmod.mknod_b (self._o, mode, devmajor, devminor, path)

    def mknod_c (self, mode, devmajor, devminor, path):
        u"""This call creates a char device node called "path" with
        mode "mode" and device major/minor "devmajor" and
        "devminor". It is just a convenient wrapper around
        "g.mknod".
        """
        return libguestfsmod.mknod_c (self._o, mode, devmajor, devminor, path)

    def umask (self, mask):
        u"""This function sets the mask used for creating new files
        and device nodes to "mask & 0777".
        
        Typical umask values would be 022 which creates new
        files with permissions like "-rw-r--r--" or
        "-rwxr-xr-x", and 002 which creates new files with
        permissions like "-rw-rw-r--" or "-rwxrwxr-x".
        
        The default umask is 022. This is important because it
        means that directories and device nodes will be created
        with 0644 or 0755 mode even if you specify 0777.
        
        See also umask(2), "g.mknod", "g.mkdir".
        
        This call returns the previous umask.
        """
        return libguestfsmod.umask (self._o, mask)

    def readdir (self, dir):
        u"""This returns the list of directory entries in directory
        "dir".
        
        All entries in the directory are returned, including "."
        and "..". The entries are *not* sorted, but returned in
        the same order as the underlying filesystem.
        
        Also this call returns basic file type information about
        each file. The "ftyp" field will contain one of the
        following characters:
        
        'b' Block special
        
        'c' Char special
        
        'd' Directory
        
        'f' FIFO (named pipe)
        
        'l' Symbolic link
        
        'r' Regular file
        
        's' Socket
        
        'u' Unknown file type
        
        '?' The readdir(3) returned a "d_type" field with an
        unexpected value
        
        This function is primarily intended for use by programs.
        To get a simple list of names, use "g.ls". To get a
        printable directory for human consumption, use "g.ll".
        
        This function returns a list of dirents. Each dirent is
        represented as a dictionary.
        """
        return libguestfsmod.readdir (self._o, dir)

    def sfdiskM (self, device, lines):
        u"""This is a simplified interface to the "g.sfdisk"
        command, where partition sizes are specified in
        megabytes only (rounded to the nearest cylinder) and you
        don't need to specify the cyls, heads and sectors
        parameters which were rarely if ever used anyway.
        
        See also: "g.sfdisk", the sfdisk(8) manpage and
        "g.part_disk"
        
        This command is dangerous. Without careful use you can
        easily destroy all your data.
        """
        return libguestfsmod.sfdiskM (self._o, device, lines)

    def zfile (self, meth, path):
        u"""This command runs "file" after first decompressing
        "path" using "method".
        
        "method" must be one of "gzip", "compress" or "bzip2".
        
        Since 1.0.63, use "g.file" instead which can now process
        compressed files.
        
        This function is deprecated. In new code, use the "file"
        call instead.
        
        Deprecated functions will not be removed from the API,
        but the fact that they are deprecated indicates that
        there are problems with correct use of these functions.
        """
        return libguestfsmod.zfile (self._o, meth, path)

    def getxattrs (self, path):
        u"""This call lists the extended attributes of the file or
        directory "path".
        
        At the system call level, this is a combination of the
        listxattr(2) and getxattr(2) calls.
        
        See also: "g.lgetxattrs", attr(5).
        
        This function returns a list of xattrs. Each xattr is
        represented as a dictionary.
        """
        return libguestfsmod.getxattrs (self._o, path)

    def lgetxattrs (self, path):
        u"""This is the same as "g.getxattrs", but if "path" is a
        symbolic link, then it returns the extended attributes
        of the link itself.
        
        This function returns a list of xattrs. Each xattr is
        represented as a dictionary.
        """
        return libguestfsmod.lgetxattrs (self._o, path)

    def setxattr (self, xattr, val, vallen, path):
        u"""This call sets the extended attribute named "xattr" of
        the file "path" to the value "val" (of length "vallen").
        The value is arbitrary 8 bit data.
        
        See also: "g.lsetxattr", attr(5).
        """
        return libguestfsmod.setxattr (self._o, xattr, val, vallen, path)

    def lsetxattr (self, xattr, val, vallen, path):
        u"""This is the same as "g.setxattr", but if "path" is a
        symbolic link, then it sets an extended attribute of the
        link itself.
        """
        return libguestfsmod.lsetxattr (self._o, xattr, val, vallen, path)

    def removexattr (self, xattr, path):
        u"""This call removes the extended attribute named "xattr"
        of the file "path".
        
        See also: "g.lremovexattr", attr(5).
        """
        return libguestfsmod.removexattr (self._o, xattr, path)

    def lremovexattr (self, xattr, path):
        u"""This is the same as "g.removexattr", but if "path" is a
        symbolic link, then it removes an extended attribute of
        the link itself.
        """
        return libguestfsmod.lremovexattr (self._o, xattr, path)

    def mountpoints (self):
        u"""This call is similar to "g.mounts". That call returns a
        list of devices. This one returns a hash table (map) of
        device name to directory where the device is mounted.
        
        This function returns a dictionary.
        """
        return libguestfsmod.mountpoints (self._o)

    def mkmountpoint (self, exemptpath):
        u""""g.mkmountpoint" and "g.rmmountpoint" are specialized
        calls that can be used to create extra mountpoints
        before mounting the first filesystem.
        
        These calls are *only* necessary in some very limited
        circumstances, mainly the case where you want to mount a
        mix of unrelated and/or read-only filesystems together.
        
        For example, live CDs often contain a "Russian doll"
        nest of filesystems, an ISO outer layer, with a squashfs
        image inside, with an ext2/3 image inside that. You can
        unpack this as follows in guestfish:
        
        add-ro Fedora-11-i686-Live.iso
        run
        mkmountpoint /cd
        mkmountpoint /squash
        mkmountpoint /ext3
        mount /dev/sda /cd
        mount-loop /cd/LiveOS/squashfs.img /squash
        mount-loop /squash/LiveOS/ext3fs.img /ext3
        
        The inner filesystem is now unpacked under the /ext3
        mountpoint.
        """
        return libguestfsmod.mkmountpoint (self._o, exemptpath)

    def rmmountpoint (self, exemptpath):
        u"""This calls removes a mountpoint that was previously
        created with "g.mkmountpoint". See "g.mkmountpoint" for
        full details.
        """
        return libguestfsmod.rmmountpoint (self._o, exemptpath)

    def read_file (self, path):
        u"""This calls returns the contents of the file "path" as a
        buffer.
        
        Unlike "g.cat", this function can correctly handle files
        that contain embedded ASCII NUL characters. However
        unlike "g.download", this function is limited in the
        total size of file that can be handled.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.read_file (self._o, path)

    def grep (self, regex, path):
        u"""This calls the external "grep" program and returns the
        matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.grep (self._o, regex, path)

    def egrep (self, regex, path):
        u"""This calls the external "egrep" program and returns the
        matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.egrep (self._o, regex, path)

    def fgrep (self, pattern, path):
        u"""This calls the external "fgrep" program and returns the
        matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.fgrep (self._o, pattern, path)

    def grepi (self, regex, path):
        u"""This calls the external "grep -i" program and returns
        the matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.grepi (self._o, regex, path)

    def egrepi (self, regex, path):
        u"""This calls the external "egrep -i" program and returns
        the matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.egrepi (self._o, regex, path)

    def fgrepi (self, pattern, path):
        u"""This calls the external "fgrep -i" program and returns
        the matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.fgrepi (self._o, pattern, path)

    def zgrep (self, regex, path):
        u"""This calls the external "zgrep" program and returns the
        matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.zgrep (self._o, regex, path)

    def zegrep (self, regex, path):
        u"""This calls the external "zegrep" program and returns the
        matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.zegrep (self._o, regex, path)

    def zfgrep (self, pattern, path):
        u"""This calls the external "zfgrep" program and returns the
        matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.zfgrep (self._o, pattern, path)

    def zgrepi (self, regex, path):
        u"""This calls the external "zgrep -i" program and returns
        the matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.zgrepi (self._o, regex, path)

    def zegrepi (self, regex, path):
        u"""This calls the external "zegrep -i" program and returns
        the matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.zegrepi (self._o, regex, path)

    def zfgrepi (self, pattern, path):
        u"""This calls the external "zfgrep -i" program and returns
        the matching lines.
        
        This function returns a list of strings.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.zfgrepi (self._o, pattern, path)

    def realpath (self, path):
        u"""Return the canonicalized absolute pathname of "path".
        The returned path has no ".", ".." or symbolic link path
        elements.
        """
        return libguestfsmod.realpath (self._o, path)

    def ln (self, target, linkname):
        u"""This command creates a hard link using the "ln" command.
        """
        return libguestfsmod.ln (self._o, target, linkname)

    def ln_f (self, target, linkname):
        u"""This command creates a hard link using the "ln -f"
        command. The "-f" option removes the link ("linkname")
        if it exists already.
        """
        return libguestfsmod.ln_f (self._o, target, linkname)

    def ln_s (self, target, linkname):
        u"""This command creates a symbolic link using the "ln -s"
        command.
        """
        return libguestfsmod.ln_s (self._o, target, linkname)

    def ln_sf (self, target, linkname):
        u"""This command creates a symbolic link using the "ln -sf"
        command, The "-f" option removes the link ("linkname")
        if it exists already.
        """
        return libguestfsmod.ln_sf (self._o, target, linkname)

    def readlink (self, path):
        u"""This command reads the target of a symbolic link.
        """
        return libguestfsmod.readlink (self._o, path)

    def fallocate (self, path, len):
        u"""This command preallocates a file (containing zero bytes)
        named "path" of size "len" bytes. If the file exists
        already, it is overwritten.
        
        Do not confuse this with the guestfish-specific "alloc"
        command which allocates a file in the host and attaches
        it as a device.
        """
        return libguestfsmod.fallocate (self._o, path, len)

    def swapon_device (self, device):
        u"""This command enables the libguestfs appliance to use the
        swap device or partition named "device". The increased
        memory is made available for all commands, for example
        those run using "g.command" or "g.sh".
        
        Note that you should not swap to existing guest swap
        partitions unless you know what you are doing. They may
        contain hibernation information, or other information
        that the guest doesn't want you to trash. You also risk
        leaking information about the host to the guest this
        way. Instead, attach a new host device to the guest and
        swap on that.
        """
        return libguestfsmod.swapon_device (self._o, device)

    def swapoff_device (self, device):
        u"""This command disables the libguestfs appliance swap
        device or partition named "device". See
        "g.swapon_device".
        """
        return libguestfsmod.swapoff_device (self._o, device)

    def swapon_file (self, file):
        u"""This command enables swap to a file. See
        "g.swapon_device" for other notes.
        """
        return libguestfsmod.swapon_file (self._o, file)

    def swapoff_file (self, file):
        u"""This command disables the libguestfs appliance swap on
        file.
        """
        return libguestfsmod.swapoff_file (self._o, file)

    def swapon_label (self, label):
        u"""This command enables swap to a labeled swap partition.
        See "g.swapon_device" for other notes.
        """
        return libguestfsmod.swapon_label (self._o, label)

    def swapoff_label (self, label):
        u"""This command disables the libguestfs appliance swap on
        labeled swap partition.
        """
        return libguestfsmod.swapoff_label (self._o, label)

    def swapon_uuid (self, uuid):
        u"""This command enables swap to a swap partition with the
        given UUID. See "g.swapon_device" for other notes.
        """
        return libguestfsmod.swapon_uuid (self._o, uuid)

    def swapoff_uuid (self, uuid):
        u"""This command disables the libguestfs appliance swap
        partition with the given UUID.
        """
        return libguestfsmod.swapoff_uuid (self._o, uuid)

    def mkswap_file (self, path):
        u"""Create a swap file.
        
        This command just writes a swap file signature to an
        existing file. To create the file itself, use something
        like "g.fallocate".
        """
        return libguestfsmod.mkswap_file (self._o, path)

    def inotify_init (self, maxevents):
        u"""This command creates a new inotify handle. The inotify
        subsystem can be used to notify events which happen to
        objects in the guest filesystem.
        
        "maxevents" is the maximum number of events which will
        be queued up between calls to "g.inotify_read" or
        "g.inotify_files". If this is passed as 0, then the
        kernel (or previously set) default is used. For Linux
        2.6.29 the default was 16384 events. Beyond this limit,
        the kernel throws away events, but records the fact that
        it threw them away by setting a flag "IN_Q_OVERFLOW" in
        the returned structure list (see "g.inotify_read").
        
        Before any events are generated, you have to add some
        watches to the internal watch list. See:
        "g.inotify_add_watch", "g.inotify_rm_watch" and
        "g.inotify_watch_all".
        
        Queued up events should be read periodically by calling
        "g.inotify_read" (or "g.inotify_files" which is just a
        helpful wrapper around "g.inotify_read"). If you don't
        read the events out often enough then you risk the
        internal queue overflowing.
        
        The handle should be closed after use by calling
        "g.inotify_close". This also removes any watches
        automatically.
        
        See also inotify(7) for an overview of the inotify
        interface as exposed by the Linux kernel, which is
        roughly what we expose via libguestfs. Note that there
        is one global inotify handle per libguestfs instance.
        """
        return libguestfsmod.inotify_init (self._o, maxevents)

    def inotify_add_watch (self, path, mask):
        u"""Watch "path" for the events listed in "mask".
        
        Note that if "path" is a directory then events within
        that directory are watched, but this does *not* happen
        recursively (in subdirectories).
        
        Note for non-C or non-Linux callers: the inotify events
        are defined by the Linux kernel ABI and are listed in
        "/usr/include/sys/inotify.h".
        """
        return libguestfsmod.inotify_add_watch (self._o, path, mask)

    def inotify_rm_watch (self, wd):
        u"""Remove a previously defined inotify watch. See
        "g.inotify_add_watch".
        """
        return libguestfsmod.inotify_rm_watch (self._o, wd)

    def inotify_read (self):
        u"""Return the complete queue of events that have happened
        since the previous read call.
        
        If no events have happened, this returns an empty list.
        
        *Note*: In order to make sure that all events have been
        read, you must call this function repeatedly until it
        returns an empty list. The reason is that the call will
        read events up to the maximum appliance-to-host message
        size and leave remaining events in the queue.
        
        This function returns a list of inotify_events. Each
        inotify_event is represented as a dictionary.
        """
        return libguestfsmod.inotify_read (self._o)

    def inotify_files (self):
        u"""This function is a helpful wrapper around
        "g.inotify_read" which just returns a list of pathnames
        of objects that were touched. The returned pathnames are
        sorted and deduplicated.
        
        This function returns a list of strings.
        """
        return libguestfsmod.inotify_files (self._o)

    def inotify_close (self):
        u"""This closes the inotify handle which was previously
        opened by inotify_init. It removes all watches, throws
        away any pending events, and deallocates all resources.
        """
        return libguestfsmod.inotify_close (self._o)

    def setcon (self, context):
        u"""This sets the SELinux security context of the daemon to
        the string "context".
        
        See the documentation about SELINUX in guestfs(3).
        """
        return libguestfsmod.setcon (self._o, context)

    def getcon (self):
        u"""This gets the SELinux security context of the daemon.
        
        See the documentation about SELINUX in guestfs(3), and
        "g.setcon"
        """
        return libguestfsmod.getcon (self._o)

    def mkfs_b (self, fstype, blocksize, device):
        u"""This call is similar to "g.mkfs", but it allows you to
        control the block size of the resulting filesystem.
        Supported block sizes depend on the filesystem type, but
        typically they are 1024, 2048 or 4096 only.
        """
        return libguestfsmod.mkfs_b (self._o, fstype, blocksize, device)

    def mke2journal (self, blocksize, device):
        u"""This creates an ext2 external journal on "device". It is
        equivalent to the command:
        
        mke2fs -O journal_dev -b blocksize device
        """
        return libguestfsmod.mke2journal (self._o, blocksize, device)

    def mke2journal_L (self, blocksize, label, device):
        u"""This creates an ext2 external journal on "device" with
        label "label".
        """
        return libguestfsmod.mke2journal_L (self._o, blocksize, label, device)

    def mke2journal_U (self, blocksize, uuid, device):
        u"""This creates an ext2 external journal on "device" with
        UUID "uuid".
        """
        return libguestfsmod.mke2journal_U (self._o, blocksize, uuid, device)

    def mke2fs_J (self, fstype, blocksize, device, journal):
        u"""This creates an ext2/3/4 filesystem on "device" with an
        external journal on "journal". It is equivalent to the
        command:
        
        mke2fs -t fstype -b blocksize -J device=<journal> <device>
        
        See also "g.mke2journal".
        """
        return libguestfsmod.mke2fs_J (self._o, fstype, blocksize, device, journal)

    def mke2fs_JL (self, fstype, blocksize, device, label):
        u"""This creates an ext2/3/4 filesystem on "device" with an
        external journal on the journal labeled "label".
        
        See also "g.mke2journal_L".
        """
        return libguestfsmod.mke2fs_JL (self._o, fstype, blocksize, device, label)

    def mke2fs_JU (self, fstype, blocksize, device, uuid):
        u"""This creates an ext2/3/4 filesystem on "device" with an
        external journal on the journal with UUID "uuid".
        
        See also "g.mke2journal_U".
        """
        return libguestfsmod.mke2fs_JU (self._o, fstype, blocksize, device, uuid)

    def modprobe (self, modulename):
        u"""This loads a kernel module in the appliance.
        
        The kernel module must have been whitelisted when
        libguestfs was built (see "appliance/kmod.whitelist.in"
        in the source).
        """
        return libguestfsmod.modprobe (self._o, modulename)

    def echo_daemon (self, words):
        u"""This command concatenate the list of "words" passed with
        single spaces between them and returns the resulting
        string.
        
        You can use this command to test the connection through
        to the daemon.
        
        See also "g.ping_daemon".
        """
        return libguestfsmod.echo_daemon (self._o, words)

    def find0 (self, directory, files):
        u"""This command lists out all files and directories,
        recursively, starting at "directory", placing the
        resulting list in the external file called "files".
        
        This command works the same way as "g.find" with the
        following exceptions:
        
        *   The resulting list is written to an external file.
        
        *   Items (filenames) in the result are separated by
        "\\0" characters. See find(1) option *-print0*.
        
        *   This command is not limited in the number of names
        that it can return.
        
        *   The result list is not sorted.
        """
        return libguestfsmod.find0 (self._o, directory, files)

    def case_sensitive_path (self, path):
        u"""This can be used to resolve case insensitive paths on a
        filesystem which is case sensitive. The use case is to
        resolve paths which you have read from Windows
        configuration files or the Windows Registry, to the true
        path.
        
        The command handles a peculiarity of the Linux ntfs-3g
        filesystem driver (and probably others), which is that
        although the underlying filesystem is case-insensitive,
        the driver exports the filesystem to Linux as
        case-sensitive.
        
        One consequence of this is that special directories such
        as "c:\\windows" may appear as "/WINDOWS" or "/windows"
        (or other things) depending on the precise details of
        how they were created. In Windows itself this would not
        be a problem.
        
        Bug or feature? You decide:
        <http://www.tuxera.com/community/ntfs-3g-faq/#posixfilen
        ames1>
        
        This function resolves the true case of each element in
        the path and returns the case-sensitive path.
        
        Thus "g.case_sensitive_path" ("/Windows/System32") might
        return "/WINDOWS/system32" (the exact return value would
        depend on details of how the directories were originally
        created under Windows).
        
        *Note*: This function does not handle drive names,
        backslashes etc.
        
        See also "g.realpath".
        """
        return libguestfsmod.case_sensitive_path (self._o, path)

    def vfs_type (self, device):
        u"""This command gets the block device type corresponding to
        a mounted device called "device".
        
        Usually the result is the name of the Linux VFS module
        that is used to mount this device (probably determined
        automatically if you used the "g.mount" call).
        """
        return libguestfsmod.vfs_type (self._o, device)

    def truncate (self, path):
        u"""This command truncates "path" to a zero-length file. The
        file must exist already.
        """
        return libguestfsmod.truncate (self._o, path)

    def truncate_size (self, path, size):
        u"""This command truncates "path" to size "size" bytes. The
        file must exist already. If the file is smaller than
        "size" then the file is extended to the required size
        with null bytes.
        """
        return libguestfsmod.truncate_size (self._o, path, size)

    def utimens (self, path, atsecs, atnsecs, mtsecs, mtnsecs):
        u"""This command sets the timestamps of a file with
        nanosecond precision.
        
        "atsecs, atnsecs" are the last access time (atime) in
        secs and nanoseconds from the epoch.
        
        "mtsecs, mtnsecs" are the last modification time (mtime)
        in secs and nanoseconds from the epoch.
        
        If the *nsecs field contains the special value -1 then
        the corresponding timestamp is set to the current time.
        (The *secs field is ignored in this case).
        
        If the *nsecs field contains the special value -2 then
        the corresponding timestamp is left unchanged. (The
        *secs field is ignored in this case).
        """
        return libguestfsmod.utimens (self._o, path, atsecs, atnsecs, mtsecs, mtnsecs)

    def mkdir_mode (self, path, mode):
        u"""This command creates a directory, setting the initial
        permissions of the directory to "mode". See also
        "g.mkdir".
        """
        return libguestfsmod.mkdir_mode (self._o, path, mode)

    def lchown (self, owner, group, path):
        u"""Change the file owner to "owner" and group to "group".
        This is like "g.chown" but if "path" is a symlink then
        the link itself is changed, not the target.
        
        Only numeric uid and gid are supported. If you want to
        use names, you will need to locate and parse the
        password file yourself (Augeas support makes this
        relatively easy).
        """
        return libguestfsmod.lchown (self._o, owner, group, path)

    def lstatlist (self, path, names):
        u"""This call allows you to perform the "g.lstat" operation
        on multiple files, where all files are in the directory
        "path". "names" is the list of files from this
        directory.
        
        On return you get a list of stat structs, with a
        one-to-one correspondence to the "names" list. If any
        name did not exist or could not be lstat'd, then the
        "ino" field of that structure is set to -1.
        
        This call is intended for programs that want to
        efficiently list a directory contents without making
        many round-trips. See also "g.lxattrlist" for a
        similarly efficient call for getting extended
        attributes. Very long directory listings might cause the
        protocol message size to be exceeded, causing this call
        to fail. The caller must split up such requests into
        smaller groups of names.
        
        This function returns a list of stats. Each stat is
        represented as a dictionary.
        """
        return libguestfsmod.lstatlist (self._o, path, names)

    def lxattrlist (self, path, names):
        u"""This call allows you to get the extended attributes of
        multiple files, where all files are in the directory
        "path". "names" is the list of files from this
        directory.
        
        On return you get a flat list of xattr structs which
        must be interpreted sequentially. The first xattr struct
        always has a zero-length "attrname". "attrval" in this
        struct is zero-length to indicate there was an error
        doing "lgetxattr" for this file, *or* is a C string
        which is a decimal number (the number of following
        attributes for this file, which could be "0"). Then
        after the first xattr struct are the zero or more
        attributes for the first named file. This repeats for
        the second and subsequent files.
        
        This call is intended for programs that want to
        efficiently list a directory contents without making
        many round-trips. See also "g.lstatlist" for a similarly
        efficient call for getting standard stats. Very long
        directory listings might cause the protocol message size
        to be exceeded, causing this call to fail. The caller
        must split up such requests into smaller groups of
        names.
        
        This function returns a list of xattrs. Each xattr is
        represented as a dictionary.
        """
        return libguestfsmod.lxattrlist (self._o, path, names)

    def readlinklist (self, path, names):
        u"""This call allows you to do a "readlink" operation on
        multiple files, where all files are in the directory
        "path". "names" is the list of files from this
        directory.
        
        On return you get a list of strings, with a one-to-one
        correspondence to the "names" list. Each string is the
        value of the symbol link.
        
        If the readlink(2) operation fails on any name, then the
        corresponding result string is the empty string "".
        However the whole operation is completed even if there
        were readlink(2) errors, and so you can call this
        function with names where you don't know if they are
        symbolic links already (albeit slightly less efficient).
        
        This call is intended for programs that want to
        efficiently list a directory contents without making
        many round-trips. Very long directory listings might
        cause the protocol message size to be exceeded, causing
        this call to fail. The caller must split up such
        requests into smaller groups of names.
        
        This function returns a list of strings.
        """
        return libguestfsmod.readlinklist (self._o, path, names)

    def pread (self, path, count, offset):
        u"""This command lets you read part of a file. It reads
        "count" bytes of the file, starting at "offset", from
        file "path".
        
        This may read fewer bytes than requested. For further
        details see the pread(2) system call.
        
        Because of the message protocol, there is a transfer
        limit of somewhere between 2MB and 4MB. To transfer
        large files you should use FTP.
        """
        return libguestfsmod.pread (self._o, path, count, offset)

    def part_init (self, device, parttype):
        u"""This creates an empty partition table on "device" of one
        of the partition types listed below. Usually "parttype"
        should be either "msdos" or "gpt" (for large disks).
        
        Initially there are no partitions. Following this, you
        should call "g.part_add" for each partition required.
        
        Possible values for "parttype" are:
        
        efi | gpt
        Intel EFI / GPT partition table.
        
        This is recommended for >= 2 TB partitions that will
        be accessed from Linux and Intel-based Mac OS X. It
        also has limited backwards compatibility with the
        "mbr" format.
        
        mbr | msdos
        The standard PC "Master Boot Record" (MBR) format
        used by MS-DOS and Windows. This partition type will
        only work for device sizes up to 2 TB. For large
        disks we recommend using "gpt".
        
        Other partition table types that may work but are not
        supported include:
        
        aix AIX disk labels.
        
        amiga | rdb
        Amiga "Rigid Disk Block" format.
        
        bsd BSD disk labels.
        
        dasd
        DASD, used on IBM mainframes.
        
        dvh MIPS/SGI volumes.
        
        mac Old Mac partition format. Modern Macs use "gpt".
        
        pc98
        NEC PC-98 format, common in Japan apparently.
        
        sun Sun disk labels.
        """
        return libguestfsmod.part_init (self._o, device, parttype)

    def part_add (self, device, prlogex, startsect, endsect):
        u"""This command adds a partition to "device". If there is
        no partition table on the device, call "g.part_init"
        first.
        
        The "prlogex" parameter is the type of partition.
        Normally you should pass "p" or "primary" here, but MBR
        partition tables also support "l" (or "logical") and "e"
        (or "extended") partition types.
        
        "startsect" and "endsect" are the start and end of the
        partition in *sectors*. "endsect" may be negative, which
        means it counts backwards from the end of the disk (-1
        is the last sector).
        
        Creating a partition which covers the whole disk is not
        so easy. Use "g.part_disk" to do that.
        """
        return libguestfsmod.part_add (self._o, device, prlogex, startsect, endsect)

    def part_disk (self, device, parttype):
        u"""This command is simply a combination of "g.part_init"
        followed by "g.part_add" to create a single primary
        partition covering the whole disk.
        
        "parttype" is the partition table type, usually "mbr" or
        "gpt", but other possible values are described in
        "g.part_init".
        
        This command is dangerous. Without careful use you can
        easily destroy all your data.
        """
        return libguestfsmod.part_disk (self._o, device, parttype)

    def part_set_bootable (self, device, partnum, bootable):
        u"""This sets the bootable flag on partition numbered
        "partnum" on device "device". Note that partitions are
        numbered from 1.
        
        The bootable flag is used by some PC BIOSes to determine
        which partition to boot from. It is by no means
        universally recognized, and in any case if your
        operating system installed a boot sector on the device
        itself, then that takes precedence.
        """
        return libguestfsmod.part_set_bootable (self._o, device, partnum, bootable)

    def part_set_name (self, device, partnum, name):
        u"""This sets the partition name on partition numbered
        "partnum" on device "device". Note that partitions are
        numbered from 1.
        
        The partition name can only be set on certain types of
        partition table. This works on "gpt" but not on "mbr"
        partitions.
        """
        return libguestfsmod.part_set_name (self._o, device, partnum, name)

    def part_list (self, device):
        u"""This command parses the partition table on "device" and
        returns the list of partitions found.
        
        The fields in the returned structure are:
        
        part_num
        Partition number, counting from 1.
        
        part_start
        Start of the partition *in bytes*. To get sectors
        you have to divide by the device's sector size, see
        "g.blockdev_getss".
        
        part_end
        End of the partition in bytes.
        
        part_size
        Size of the partition in bytes.
        
        This function returns a list of partitions. Each
        partition is represented as a dictionary.
        """
        return libguestfsmod.part_list (self._o, device)

    def part_get_parttype (self, device):
        u"""This command examines the partition table on "device"
        and returns the partition table type (format) being
        used.
        
        Common return values include: "msdos" (a DOS/Windows
        style MBR partition table), "gpt" (a GPT/EFI-style
        partition table). Other values are possible, although
        unusual. See "g.part_init" for a full list.
        """
        return libguestfsmod.part_get_parttype (self._o, device)

    def fill (self, c, len, path):
        u"""This command creates a new file called "path". The
        initial content of the file is "len" octets of "c",
        where "c" must be a number in the range "[0..255]".
        
        To fill a file with zero bytes (sparsely), it is much
        more efficient to use "g.truncate_size".
        """
        return libguestfsmod.fill (self._o, c, len, path)

    def available (self, groups):
        u"""This command is used to check the availability of some
        groups of functionality in the appliance, which not all
        builds of the libguestfs appliance will be able to
        provide.
        
        The libguestfs groups, and the functions that those
        groups correspond to, are listed in "AVAILABILITY" in
        guestfs(3).
        
        The argument "groups" is a list of group names, eg:
        "["inotify", "augeas"]" would check for the availability
        of the Linux inotify functions and Augeas (configuration
        file editing) functions.
        
        The command returns no error if *all* requested groups
        are available.
        
        It fails with an error if one or more of the requested
        groups is unavailable in the appliance.
        
        If an unknown group name is included in the list of
        groups then an error is always returned.
        
        *Notes:*
        
        *   You must call "g.launch" before calling this
        function.
        
        The reason is because we don't know what groups are
        supported by the appliance/daemon until it is
        running and can be queried.
        
        *   If a group of functions is available, this does not
        necessarily mean that they will work. You still have
        to check for errors when calling individual API
        functions even if they are available.
        
        *   It is usually the job of distro packagers to build
        complete functionality into the libguestfs
        appliance. Upstream libguestfs, if built from source
        with all requirements satisfied, will support
        everything.
        
        *   This call was added in version 1.0.80. In previous
        versions of libguestfs all you could do would be to
        speculatively execute a command to find out if the
        daemon implemented it. See also "g.version".
        """
        return libguestfsmod.available (self._o, groups)

    def dd (self, src, dest):
        u"""This command copies from one source device or file "src"
        to another destination device or file "dest". Normally
        you would use this to copy to or from a device or
        partition, for example to duplicate a filesystem.
        
        If the destination is a device, it must be as large or
        larger than the source file or device, otherwise the
        copy will fail. This command cannot do partial copies.
        """
        return libguestfsmod.dd (self._o, src, dest)

    def filesize (self, file):
        u"""This command returns the size of "file" in bytes.
        
        To get other stats about a file, use "g.stat",
        "g.lstat", "g.is_dir", "g.is_file" etc. To get the size
        of block devices, use "g.blockdev_getsize64".
        """
        return libguestfsmod.filesize (self._o, file)

    def lvrename (self, logvol, newlogvol):
        u"""Rename a logical volume "logvol" with the new name
        "newlogvol".
        """
        return libguestfsmod.lvrename (self._o, logvol, newlogvol)

    def vgrename (self, volgroup, newvolgroup):
        u"""Rename a volume group "volgroup" with the new name
        "newvolgroup".
        """
        return libguestfsmod.vgrename (self._o, volgroup, newvolgroup)

    def initrd_cat (self, initrdpath, filename):
        u"""This command unpacks the file "filename" from the initrd
        file called "initrdpath". The filename must be given
        *without* the initial "/" character.
        
        For example, in guestfish you could use the following
        command to examine the boot script (usually called
        "/init") contained in a Linux initrd or initramfs image:
        
        initrd-cat /boot/initrd-<version>.img init
        
        See also "g.initrd_list".
        """
        return libguestfsmod.initrd_cat (self._o, initrdpath, filename)

