/* libguestfs - guestfish and guestmount shared option parsing
 * Copyright (C) 2010-2012 Red Hat Inc.
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <libintl.h>
#include <getopt.h>

#include <libxml/uri.h>

#include "c-ctype.h"

#include "guestfs.h"
#include "options.h"

static int is_uri (const char *arg);
static void parse_uri (const char *arg, const char *format, struct drv *drv);

/* Handle the '-a' option when passed on the command line. */
void
option_a (const char *arg, const char *format, struct drv **drvsp)
{
  struct drv *drv;

  drv = calloc (1, sizeof (struct drv));
  if (!drv) {
    perror ("malloc");
    exit (EXIT_FAILURE);
  }

  /* Does it look like a URI? */
  if (is_uri (arg))
    parse_uri (arg, format, drv);
  else {
    /* Ordinary file. */
    if (access (arg, R_OK) != 0) {
      perror (arg);
      exit (EXIT_FAILURE);
    }

    drv->type = drv_a;
    drv->nr_drives = -1;
    drv->a.filename = optarg;
    drv->a.format = format;
  }

  drv->next = *drvsp;
  *drvsp = drv;
}

/* Does it "look like" a URI?  A short lower-case ASCII string
 * followed by "://" will do.  Note that we properly parse the URI
 * later on using libxml2.
 */
static int
is_uri (const char *arg)
{
  const char *p;

  p = strstr (arg, "://");
  if (!p)
    return 0;

  if (p - arg >= 8)
    return 0;

  for (p--; p >= arg; p--) {
    if (!c_islower (*p))
      return 0;
  }

  return 1;
}

static void
parse_uri (const char *arg, const char *format, struct drv *drv)
{
  xmlURIPtr uri;

  uri = xmlParseURI (arg);
  if (!uri) {
    fprintf (stderr, _("%s: --add: could not parse URI '%s'\n"),
             program_name, arg);
    exit (EXIT_FAILURE);
  }

  /* Note we don't do much checking of the parsed URI, since the
   * underlying function 'guestfs_add_drive_opts' will check for us.
   * So just the basics here.
   */
  if (uri->scheme == NULL) {
    /* Probably can never happen. */
    fprintf (stderr, _("%s: --add: scheme of URI '%s' is NULL\n"),
             program_name, arg);
    exit (EXIT_FAILURE);
  }

  drv->type = drv_uri;
  drv->nr_drives = -1;
  drv->uri.uri = uri;
  drv->uri.format = format;
}

static char **
make_server (xmlURIPtr uri)
{
  char **ret;
  char *host_port;

  if (uri->port == 0) {
    host_port = strdup (uri->server);
    if (host_port == NULL) {
      perror ("strdup");
      exit (EXIT_FAILURE);
    }
  }
  else {
    if (asprintf (&host_port, "%s:%d", uri->server, uri->port) == -1) {
      perror ("asprintf");
      exit (EXIT_FAILURE);
    }
  }

  /* The .server parameter is in fact a list of strings, although
   * only a singleton is passed by us.
   */
  ret = malloc (sizeof (char *) * 2);
  ret[0] = host_port;
  ret[1] = NULL;

  return ret;
}

char
add_drives (struct drv *drv, char next_drive)
{
  int r;
  struct guestfs_add_drive_opts_argv ad_optargs;

  if (next_drive > 'z') {
    fprintf (stderr,
             _("%s: too many drives added on the command line\n"),
             program_name);
    exit (EXIT_FAILURE);
  }

  if (drv) {
    next_drive = add_drives (drv->next, next_drive);

    free (drv->device);
    drv->device = NULL;

    if (asprintf (&drv->device, "/dev/sd%c", next_drive) == -1) {
      perror ("asprintf");
      exit (EXIT_FAILURE);
    }

    switch (drv->type) {
    case drv_a:
      ad_optargs.bitmask = 0;
      if (read_only) {
        ad_optargs.bitmask |= GUESTFS_ADD_DRIVE_OPTS_READONLY_BITMASK;
        ad_optargs.readonly = 1;
      }
      if (drv->a.format) {
        ad_optargs.bitmask |= GUESTFS_ADD_DRIVE_OPTS_FORMAT_BITMASK;
        ad_optargs.format = drv->a.format;
      }

      r = guestfs_add_drive_opts_argv (g, drv->a.filename, &ad_optargs);
      if (r == -1)
        exit (EXIT_FAILURE);

      drv->nr_drives = 1;
      next_drive++;
      break;

    case drv_uri:
      ad_optargs.bitmask = 0;
      if (read_only) {
        ad_optargs.bitmask |= GUESTFS_ADD_DRIVE_OPTS_READONLY_BITMASK;
        ad_optargs.readonly = 1;
      }
      if (drv->uri.format) {
        ad_optargs.bitmask |= GUESTFS_ADD_DRIVE_OPTS_FORMAT_BITMASK;
        ad_optargs.format = drv->uri.format;
      }
      ad_optargs.bitmask |= GUESTFS_ADD_DRIVE_OPTS_PROTOCOL_BITMASK;
      ad_optargs.protocol = drv->uri.uri->scheme;
      if (drv->uri.uri->server && STRNEQ (drv->uri.uri->server, "")) {
        ad_optargs.bitmask |= GUESTFS_ADD_DRIVE_OPTS_SERVER_BITMASK;
        ad_optargs.server = make_server (drv->uri.uri);
      }
      else
        ad_optargs.server = NULL;
      if (drv->uri.uri->user && STRNEQ (drv->uri.uri->user, "")) {
        ad_optargs.bitmask |= GUESTFS_ADD_DRIVE_OPTS_USERNAME_BITMASK;
        ad_optargs.username = drv->uri.uri->user;
      }

      r = guestfs_add_drive_opts_argv (g, drv->uri.uri->path ? : "",
                                       &ad_optargs);
      if (r == -1)
        exit (EXIT_FAILURE);

      guestfs___free_string_list ((char **) ad_optargs.server);

      drv->nr_drives = 1;
      next_drive++;
      break;

    case drv_d:
      r = add_libvirt_drives (drv->d.guest);
      if (r == -1)
        exit (EXIT_FAILURE);

      drv->nr_drives = r;
      next_drive += r;
      break;

#if COMPILING_GUESTFISH
    case drv_N:
      /* guestfs_add_drive (ie. autodetecting) should be safe here
       * since we have just created the prepared disk.  At the moment
       * it will always be "raw" but in a theoretical future we might
       * create other formats.
       */
      /* -N option is not affected by --ro */
      r = guestfs_add_drive (g, drv->N.filename);
      if (r == -1)
        exit (EXIT_FAILURE);

      drv->nr_drives = 1;
      next_drive++;
      break;
#endif

    default: /* keep GCC happy */
      abort ();
    }
  }

  return next_drive;
}

static void display_mountpoints_on_failure (const char *mp_device, const char *user_supplied_options);

/* List is built in reverse order, so mount them in reverse order. */
void
mount_mps (struct mp *mp)
{
  int r;

  if (mp) {
    mount_mps (mp->next);

    const char *options;
    if (mp->options)
      options = mp->options;
    else if (read_only)
      options = "ro";
    else
      options = "";

    r = guestfs_mount_options (g, options, mp->device, mp->mountpoint);
    if (r == -1) {
      display_mountpoints_on_failure (mp->device, mp->options);
      exit (EXIT_FAILURE);
    }
  }
}

/* If the -m option fails on any command, display a useful error
 * message listing the mountpoints.
 */
static void
display_mountpoints_on_failure (const char *mp_device,
                                const char *user_supplied_options)
{
  CLEANUP_FREE_STRING_LIST char **fses = guestfs_list_filesystems (g);
  size_t i;

  if (fses == NULL || fses[0] == NULL)
    return;

  fprintf (stderr, _("%s: '%s' could not be mounted.\n"),
           program_name, mp_device);

  if (user_supplied_options)
    fprintf (stderr, _("%s: Check mount(8) man page to ensure options '%s'\n"
                       "%s: are supported by the filesystem that is being mounted.\n"),
             program_name, user_supplied_options, program_name);

  fprintf (stderr, _("%s: Did you mean to mount one of these filesystems?\n"),
           program_name);

  for (i = 0; fses[i] != NULL; i += 2) {
    CLEANUP_FREE char *p = guestfs_canonical_device_name (g, fses[i]);
    fprintf (stderr, "%s: \t%s (%s)\n", program_name,
             p ? p : fses[i], fses[i+1]);
  }
}

void
free_drives (struct drv *drv)
{
  if (!drv) return;
  free_drives (drv->next);

  free (drv->device);

  switch (drv->type) {
  case drv_a:
    /* a.filename and a.format are optargs, don't free them */
    break;
  case drv_uri:
    xmlFreeURI (drv->uri.uri);
    break;
  case drv_d:
    /* d.filename is optarg, don't free it */
    break;
#if COMPILING_GUESTFISH
  case drv_N:
    free (drv->N.filename);
    drv->N.data_free (drv->N.data);
    break;
#endif
  default: ;                    /* keep GCC happy */
  }
  free (drv);
}

void
free_mps (struct mp *mp)
{
  if (!mp) return;
  free_mps (mp->next);

  /* The drive and mountpoint fields are not allocated
   * from the heap, so we should not free them here.
   */

  free (mp);
}

/* Implements the internal 'tool --long-options' flag, which just
 * lists out the long options available.  Used by bash completion.
 */
void
display_long_options (const struct option *long_options)
{
  while (long_options->name) {
    if (STRNEQ (long_options->name, "long-options"))
      printf ("--%s\n", long_options->name);
    long_options++;
  }
  exit (EXIT_SUCCESS);
}
