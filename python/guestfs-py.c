/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM:
 *   src/generator.ml
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2010 Red Hat Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <Python.h>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "guestfs.h"

typedef struct {
  PyObject_HEAD
  guestfs_h *g;
} Pyguestfs_Object;

static guestfs_h *
get_handle (PyObject *obj)
{
  assert (obj);
  assert (obj != Py_None);
  return ((Pyguestfs_Object *) obj)->g;
}

static PyObject *
put_handle (guestfs_h *g)
{
  assert (g);
  return
    PyCObject_FromVoidPtrAndDesc ((void *) g, (char *) "guestfs_h", NULL);
}

/* This list should be freed (but not the strings) after use. */
static char **
get_string_list (PyObject *obj)
{
  int i, len;
  char **r;

  assert (obj);

  if (!PyList_Check (obj)) {
    PyErr_SetString (PyExc_RuntimeError, "expecting a list parameter");
    return NULL;
  }

  len = PyList_Size (obj);
  r = malloc (sizeof (char *) * (len+1));
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, "get_string_list: out of memory");
    return NULL;
  }

  for (i = 0; i < len; ++i)
    r[i] = PyString_AsString (PyList_GetItem (obj, i));
  r[len] = NULL;

  return r;
}

static PyObject *
put_string_list (char * const * const argv)
{
  PyObject *list;
  int argc, i;

  for (argc = 0; argv[argc] != NULL; ++argc)
    ;

  list = PyList_New (argc);
  for (i = 0; i < argc; ++i)
    PyList_SetItem (list, i, PyString_FromString (argv[i]));

  return list;
}

static PyObject *
put_table (char * const * const argv)
{
  PyObject *list, *item;
  int argc, i;

  for (argc = 0; argv[argc] != NULL; ++argc)
    ;

  list = PyList_New (argc >> 1);
  for (i = 0; i < argc; i += 2) {
    item = PyTuple_New (2);
    PyTuple_SetItem (item, 0, PyString_FromString (argv[i]));
    PyTuple_SetItem (item, 1, PyString_FromString (argv[i+1]));
    PyList_SetItem (list, i >> 1, item);
  }

  return list;
}

static void
free_strings (char **argv)
{
  int argc;

  for (argc = 0; argv[argc] != NULL; ++argc)
    free (argv[argc]);
  free (argv);
}

static PyObject *
py_guestfs_create (PyObject *self, PyObject *args)
{
  guestfs_h *g;

  g = guestfs_create ();
  if (g == NULL) {
    PyErr_SetString (PyExc_RuntimeError,
                     "guestfs.create: failed to allocate handle");
    return NULL;
  }
  guestfs_set_error_handler (g, NULL, NULL);
  return put_handle (g);
}

static PyObject *
py_guestfs_close (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_close", &py_g))
    return NULL;
  g = get_handle (py_g);

  guestfs_close (g);

  Py_INCREF (Py_None);
  return Py_None;
}

static PyObject *
put_int_bool (struct guestfs_int_bool *int_bool)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "i",
                        PyLong_FromLong (int_bool->i));
  PyDict_SetItemString (dict, "b",
                        PyLong_FromLong (int_bool->b));
  return dict;
};

static PyObject *
put_lvm_pv (struct guestfs_lvm_pv *lvm_pv)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "pv_name",
                        PyString_FromString (lvm_pv->pv_name));
  PyDict_SetItemString (dict, "pv_uuid",
                        PyString_FromStringAndSize (lvm_pv->pv_uuid, 32));
  PyDict_SetItemString (dict, "pv_fmt",
                        PyString_FromString (lvm_pv->pv_fmt));
  PyDict_SetItemString (dict, "pv_size",
                        PyLong_FromUnsignedLongLong (lvm_pv->pv_size));
  PyDict_SetItemString (dict, "dev_size",
                        PyLong_FromUnsignedLongLong (lvm_pv->dev_size));
  PyDict_SetItemString (dict, "pv_free",
                        PyLong_FromUnsignedLongLong (lvm_pv->pv_free));
  PyDict_SetItemString (dict, "pv_used",
                        PyLong_FromUnsignedLongLong (lvm_pv->pv_used));
  PyDict_SetItemString (dict, "pv_attr",
                        PyString_FromString (lvm_pv->pv_attr));
  PyDict_SetItemString (dict, "pv_pe_count",
                        PyLong_FromLongLong (lvm_pv->pv_pe_count));
  PyDict_SetItemString (dict, "pv_pe_alloc_count",
                        PyLong_FromLongLong (lvm_pv->pv_pe_alloc_count));
  PyDict_SetItemString (dict, "pv_tags",
                        PyString_FromString (lvm_pv->pv_tags));
  PyDict_SetItemString (dict, "pe_start",
                        PyLong_FromUnsignedLongLong (lvm_pv->pe_start));
  PyDict_SetItemString (dict, "pv_mda_count",
                        PyLong_FromLongLong (lvm_pv->pv_mda_count));
  PyDict_SetItemString (dict, "pv_mda_free",
                        PyLong_FromUnsignedLongLong (lvm_pv->pv_mda_free));
  return dict;
};

static PyObject *
put_lvm_vg (struct guestfs_lvm_vg *lvm_vg)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "vg_name",
                        PyString_FromString (lvm_vg->vg_name));
  PyDict_SetItemString (dict, "vg_uuid",
                        PyString_FromStringAndSize (lvm_vg->vg_uuid, 32));
  PyDict_SetItemString (dict, "vg_fmt",
                        PyString_FromString (lvm_vg->vg_fmt));
  PyDict_SetItemString (dict, "vg_attr",
                        PyString_FromString (lvm_vg->vg_attr));
  PyDict_SetItemString (dict, "vg_size",
                        PyLong_FromUnsignedLongLong (lvm_vg->vg_size));
  PyDict_SetItemString (dict, "vg_free",
                        PyLong_FromUnsignedLongLong (lvm_vg->vg_free));
  PyDict_SetItemString (dict, "vg_sysid",
                        PyString_FromString (lvm_vg->vg_sysid));
  PyDict_SetItemString (dict, "vg_extent_size",
                        PyLong_FromUnsignedLongLong (lvm_vg->vg_extent_size));
  PyDict_SetItemString (dict, "vg_extent_count",
                        PyLong_FromLongLong (lvm_vg->vg_extent_count));
  PyDict_SetItemString (dict, "vg_free_count",
                        PyLong_FromLongLong (lvm_vg->vg_free_count));
  PyDict_SetItemString (dict, "max_lv",
                        PyLong_FromLongLong (lvm_vg->max_lv));
  PyDict_SetItemString (dict, "max_pv",
                        PyLong_FromLongLong (lvm_vg->max_pv));
  PyDict_SetItemString (dict, "pv_count",
                        PyLong_FromLongLong (lvm_vg->pv_count));
  PyDict_SetItemString (dict, "lv_count",
                        PyLong_FromLongLong (lvm_vg->lv_count));
  PyDict_SetItemString (dict, "snap_count",
                        PyLong_FromLongLong (lvm_vg->snap_count));
  PyDict_SetItemString (dict, "vg_seqno",
                        PyLong_FromLongLong (lvm_vg->vg_seqno));
  PyDict_SetItemString (dict, "vg_tags",
                        PyString_FromString (lvm_vg->vg_tags));
  PyDict_SetItemString (dict, "vg_mda_count",
                        PyLong_FromLongLong (lvm_vg->vg_mda_count));
  PyDict_SetItemString (dict, "vg_mda_free",
                        PyLong_FromUnsignedLongLong (lvm_vg->vg_mda_free));
  return dict;
};

static PyObject *
put_lvm_lv (struct guestfs_lvm_lv *lvm_lv)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "lv_name",
                        PyString_FromString (lvm_lv->lv_name));
  PyDict_SetItemString (dict, "lv_uuid",
                        PyString_FromStringAndSize (lvm_lv->lv_uuid, 32));
  PyDict_SetItemString (dict, "lv_attr",
                        PyString_FromString (lvm_lv->lv_attr));
  PyDict_SetItemString (dict, "lv_major",
                        PyLong_FromLongLong (lvm_lv->lv_major));
  PyDict_SetItemString (dict, "lv_minor",
                        PyLong_FromLongLong (lvm_lv->lv_minor));
  PyDict_SetItemString (dict, "lv_kernel_major",
                        PyLong_FromLongLong (lvm_lv->lv_kernel_major));
  PyDict_SetItemString (dict, "lv_kernel_minor",
                        PyLong_FromLongLong (lvm_lv->lv_kernel_minor));
  PyDict_SetItemString (dict, "lv_size",
                        PyLong_FromUnsignedLongLong (lvm_lv->lv_size));
  PyDict_SetItemString (dict, "seg_count",
                        PyLong_FromLongLong (lvm_lv->seg_count));
  PyDict_SetItemString (dict, "origin",
                        PyString_FromString (lvm_lv->origin));
  if (lvm_lv->snap_percent >= 0)
    PyDict_SetItemString (dict, "snap_percent",
                          PyFloat_FromDouble ((double) lvm_lv->snap_percent));
  else {
    Py_INCREF (Py_None);
    PyDict_SetItemString (dict, "snap_percent", Py_None);
  }
  if (lvm_lv->copy_percent >= 0)
    PyDict_SetItemString (dict, "copy_percent",
                          PyFloat_FromDouble ((double) lvm_lv->copy_percent));
  else {
    Py_INCREF (Py_None);
    PyDict_SetItemString (dict, "copy_percent", Py_None);
  }
  PyDict_SetItemString (dict, "move_pv",
                        PyString_FromString (lvm_lv->move_pv));
  PyDict_SetItemString (dict, "lv_tags",
                        PyString_FromString (lvm_lv->lv_tags));
  PyDict_SetItemString (dict, "mirror_log",
                        PyString_FromString (lvm_lv->mirror_log));
  PyDict_SetItemString (dict, "modules",
                        PyString_FromString (lvm_lv->modules));
  return dict;
};

static PyObject *
put_stat (struct guestfs_stat *stat)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "dev",
                        PyLong_FromLongLong (stat->dev));
  PyDict_SetItemString (dict, "ino",
                        PyLong_FromLongLong (stat->ino));
  PyDict_SetItemString (dict, "mode",
                        PyLong_FromLongLong (stat->mode));
  PyDict_SetItemString (dict, "nlink",
                        PyLong_FromLongLong (stat->nlink));
  PyDict_SetItemString (dict, "uid",
                        PyLong_FromLongLong (stat->uid));
  PyDict_SetItemString (dict, "gid",
                        PyLong_FromLongLong (stat->gid));
  PyDict_SetItemString (dict, "rdev",
                        PyLong_FromLongLong (stat->rdev));
  PyDict_SetItemString (dict, "size",
                        PyLong_FromLongLong (stat->size));
  PyDict_SetItemString (dict, "blksize",
                        PyLong_FromLongLong (stat->blksize));
  PyDict_SetItemString (dict, "blocks",
                        PyLong_FromLongLong (stat->blocks));
  PyDict_SetItemString (dict, "atime",
                        PyLong_FromLongLong (stat->atime));
  PyDict_SetItemString (dict, "mtime",
                        PyLong_FromLongLong (stat->mtime));
  PyDict_SetItemString (dict, "ctime",
                        PyLong_FromLongLong (stat->ctime));
  return dict;
};

static PyObject *
put_statvfs (struct guestfs_statvfs *statvfs)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "bsize",
                        PyLong_FromLongLong (statvfs->bsize));
  PyDict_SetItemString (dict, "frsize",
                        PyLong_FromLongLong (statvfs->frsize));
  PyDict_SetItemString (dict, "blocks",
                        PyLong_FromLongLong (statvfs->blocks));
  PyDict_SetItemString (dict, "bfree",
                        PyLong_FromLongLong (statvfs->bfree));
  PyDict_SetItemString (dict, "bavail",
                        PyLong_FromLongLong (statvfs->bavail));
  PyDict_SetItemString (dict, "files",
                        PyLong_FromLongLong (statvfs->files));
  PyDict_SetItemString (dict, "ffree",
                        PyLong_FromLongLong (statvfs->ffree));
  PyDict_SetItemString (dict, "favail",
                        PyLong_FromLongLong (statvfs->favail));
  PyDict_SetItemString (dict, "fsid",
                        PyLong_FromLongLong (statvfs->fsid));
  PyDict_SetItemString (dict, "flag",
                        PyLong_FromLongLong (statvfs->flag));
  PyDict_SetItemString (dict, "namemax",
                        PyLong_FromLongLong (statvfs->namemax));
  return dict;
};

static PyObject *
put_dirent (struct guestfs_dirent *dirent)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "ino",
                        PyLong_FromLongLong (dirent->ino));
  PyDict_SetItemString (dict, "ftyp",
                        PyString_FromStringAndSize (&dirent->ftyp, 1));
  PyDict_SetItemString (dict, "name",
                        PyString_FromString (dirent->name));
  return dict;
};

static PyObject *
put_version (struct guestfs_version *version)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "major",
                        PyLong_FromLongLong (version->major));
  PyDict_SetItemString (dict, "minor",
                        PyLong_FromLongLong (version->minor));
  PyDict_SetItemString (dict, "release",
                        PyLong_FromLongLong (version->release));
  PyDict_SetItemString (dict, "extra",
                        PyString_FromString (version->extra));
  return dict;
};

static PyObject *
put_xattr (struct guestfs_xattr *xattr)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "attrname",
                        PyString_FromString (xattr->attrname));
  PyDict_SetItemString (dict, "attrval",
                        PyString_FromStringAndSize (xattr->attrval, xattr->attrval_len));
  return dict;
};

static PyObject *
put_inotify_event (struct guestfs_inotify_event *inotify_event)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "in_wd",
                        PyLong_FromLongLong (inotify_event->in_wd));
  PyDict_SetItemString (dict, "in_mask",
                        PyLong_FromUnsignedLong (inotify_event->in_mask));
  PyDict_SetItemString (dict, "in_cookie",
                        PyLong_FromUnsignedLong (inotify_event->in_cookie));
  PyDict_SetItemString (dict, "in_name",
                        PyString_FromString (inotify_event->in_name));
  return dict;
};

static PyObject *
put_partition (struct guestfs_partition *partition)
{
  PyObject *dict;

  dict = PyDict_New ();
  PyDict_SetItemString (dict, "part_num",
                        PyLong_FromLong (partition->part_num));
  PyDict_SetItemString (dict, "part_start",
                        PyLong_FromUnsignedLongLong (partition->part_start));
  PyDict_SetItemString (dict, "part_end",
                        PyLong_FromUnsignedLongLong (partition->part_end));
  PyDict_SetItemString (dict, "part_size",
                        PyLong_FromUnsignedLongLong (partition->part_size));
  return dict;
};

static PyObject *
put_lvm_vg_list (struct guestfs_lvm_vg_list *lvm_vgs)
{
  PyObject *list;
  int i;

  list = PyList_New (lvm_vgs->len);
  for (i = 0; i < lvm_vgs->len; ++i)
    PyList_SetItem (list, i, put_lvm_vg (&lvm_vgs->val[i]));
  return list;
};

static PyObject *
put_stat_list (struct guestfs_stat_list *stats)
{
  PyObject *list;
  int i;

  list = PyList_New (stats->len);
  for (i = 0; i < stats->len; ++i)
    PyList_SetItem (list, i, put_stat (&stats->val[i]));
  return list;
};

static PyObject *
put_dirent_list (struct guestfs_dirent_list *dirents)
{
  PyObject *list;
  int i;

  list = PyList_New (dirents->len);
  for (i = 0; i < dirents->len; ++i)
    PyList_SetItem (list, i, put_dirent (&dirents->val[i]));
  return list;
};

static PyObject *
put_partition_list (struct guestfs_partition_list *partitions)
{
  PyObject *list;
  int i;

  list = PyList_New (partitions->len);
  for (i = 0; i < partitions->len; ++i)
    PyList_SetItem (list, i, put_partition (&partitions->val[i]));
  return list;
};

static PyObject *
put_lvm_lv_list (struct guestfs_lvm_lv_list *lvm_lvs)
{
  PyObject *list;
  int i;

  list = PyList_New (lvm_lvs->len);
  for (i = 0; i < lvm_lvs->len; ++i)
    PyList_SetItem (list, i, put_lvm_lv (&lvm_lvs->val[i]));
  return list;
};

static PyObject *
put_xattr_list (struct guestfs_xattr_list *xattrs)
{
  PyObject *list;
  int i;

  list = PyList_New (xattrs->len);
  for (i = 0; i < xattrs->len; ++i)
    PyList_SetItem (list, i, put_xattr (&xattrs->val[i]));
  return list;
};

static PyObject *
put_lvm_pv_list (struct guestfs_lvm_pv_list *lvm_pvs)
{
  PyObject *list;
  int i;

  list = PyList_New (lvm_pvs->len);
  for (i = 0; i < lvm_pvs->len; ++i)
    PyList_SetItem (list, i, put_lvm_pv (&lvm_pvs->val[i]));
  return list;
};

static PyObject *
put_inotify_event_list (struct guestfs_inotify_event_list *inotify_events)
{
  PyObject *list;
  int i;

  list = PyList_New (inotify_events->len);
  for (i = 0; i < inotify_events->len; ++i)
    PyList_SetItem (list, i, put_inotify_event (&inotify_events->val[i]));
  return list;
};

static PyObject *
py_guestfs_test0 (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *str;
  const char *optstr;
  PyObject *py_strlist;
  char **strlist;
  int b;
  int integer;
  long long integer64;
  const char *filein;
  const char *fileout;

  if (!PyArg_ParseTuple (args, (char *) "OszOiiLss:guestfs_test0",
                         &py_g, &str, &optstr, &py_strlist, &b, &integer, &integer64, &filein, &fileout))
    return NULL;
  g = get_handle (py_g);
  strlist = get_string_list (py_strlist);
  if (!strlist) return NULL;

  r = guestfs_test0 (g, str, optstr, strlist, b, integer, integer64, filein, fileout);
  free (strlist);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_test0rint (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rint",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rint (g, val);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_test0rinterr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rinterr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rinterr (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_test0rint64 (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int64_t r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rint64",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rint64 (g, val);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyLong_FromLongLong (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rint64err (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int64_t r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rint64err",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rint64err (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyLong_FromLongLong (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rbool (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rbool",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rbool (g, val);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_test0rboolerr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rboolerr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rboolerr (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_test0rconststring (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  const char *r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rconststring",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rconststring (g, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rconststringerr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  const char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rconststringerr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rconststringerr (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rconstoptstring (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  const char *r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rconstoptstring",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rconstoptstring (g, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  if (r)
    py_r = PyString_FromString (r);
  else {
    Py_INCREF (Py_None);
    py_r = Py_None;
  }
  return py_r;
}

static PyObject *
py_guestfs_test0rconstoptstringerr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  const char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rconstoptstringerr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rconstoptstringerr (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  if (r)
    py_r = PyString_FromString (r);
  else {
    Py_INCREF (Py_None);
    py_r = Py_None;
  }
  return py_r;
}

static PyObject *
py_guestfs_test0rstring (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rstring",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstring (g, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rstringerr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rstringerr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstringerr (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rstringlist (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rstringlist",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstringlist (g, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rstringlisterr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rstringlisterr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstringlisterr (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rstruct (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_lvm_pv *r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rstruct",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstruct (g, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_lvm_pv (r);
  guestfs_free_lvm_pv (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rstructerr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_lvm_pv *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rstructerr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstructerr (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_lvm_pv (r);
  guestfs_free_lvm_pv (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rstructlist (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_lvm_pv_list *r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rstructlist",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstructlist (g, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_lvm_pv_list (r);
  guestfs_free_lvm_pv_list (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rstructlisterr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_lvm_pv_list *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rstructlisterr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rstructlisterr (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_lvm_pv_list (r);
  guestfs_free_lvm_pv_list (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rhashtable (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_test0rhashtable",
                         &py_g, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rhashtable (g, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_table (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_test0rhashtableerr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_test0rhashtableerr",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_test0rhashtableerr (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_table (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_launch (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_launch",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_launch (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_wait_ready (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_wait_ready",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_wait_ready (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_kill_subprocess (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_kill_subprocess",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_kill_subprocess (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_add_drive (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *filename;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_add_drive",
                         &py_g, &filename))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_add_drive (g, filename);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_add_cdrom (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *filename;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_add_cdrom",
                         &py_g, &filename))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_add_cdrom (g, filename);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_add_drive_ro (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *filename;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_add_drive_ro",
                         &py_g, &filename))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_add_drive_ro (g, filename);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_config (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *qemuparam;
  const char *qemuvalue;

  if (!PyArg_ParseTuple (args, (char *) "Osz:guestfs_config",
                         &py_g, &qemuparam, &qemuvalue))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_config (g, qemuparam, qemuvalue);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_set_qemu (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *qemu;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_set_qemu",
                         &py_g, &qemu))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_qemu (g, qemu);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_qemu (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  const char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_qemu",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_qemu (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  return py_r;
}

static PyObject *
py_guestfs_set_path (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *searchpath;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_set_path",
                         &py_g, &searchpath))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_path (g, searchpath);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_path (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  const char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_path",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_path (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  return py_r;
}

static PyObject *
py_guestfs_set_append (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *append;

  if (!PyArg_ParseTuple (args, (char *) "Oz:guestfs_set_append",
                         &py_g, &append))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_append (g, append);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_append (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  const char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_append",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_append (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  if (r)
    py_r = PyString_FromString (r);
  else {
    Py_INCREF (Py_None);
    py_r = Py_None;
  }
  return py_r;
}

static PyObject *
py_guestfs_set_autosync (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int autosync;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_set_autosync",
                         &py_g, &autosync))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_autosync (g, autosync);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_autosync (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_autosync",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_autosync (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_set_verbose (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int verbose;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_set_verbose",
                         &py_g, &verbose))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_verbose (g, verbose);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_verbose (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_verbose",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_verbose (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_is_ready (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_is_ready",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_is_ready (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_is_config (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_is_config",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_is_config (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_is_launching (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_is_launching",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_is_launching (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_is_busy (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_is_busy",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_is_busy (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_get_state (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_state",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_state (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_set_memsize (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int memsize;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_set_memsize",
                         &py_g, &memsize))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_memsize (g, memsize);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_memsize (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_memsize",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_memsize (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_get_pid (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_pid",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_pid (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_version (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_version *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_version",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_version (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_version (r);
  guestfs_free_version (r);
  return py_r;
}

static PyObject *
py_guestfs_set_selinux (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int selinux;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_set_selinux",
                         &py_g, &selinux))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_selinux (g, selinux);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_selinux (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_selinux",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_selinux (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_set_trace (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int trace;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_set_trace",
                         &py_g, &trace))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_trace (g, trace);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_trace (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_trace",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_trace (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_set_direct (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int direct;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_set_direct",
                         &py_g, &direct))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_direct (g, direct);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_direct (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_direct",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_direct (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_set_recovery_proc (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int recoveryproc;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_set_recovery_proc",
                         &py_g, &recoveryproc))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_recovery_proc (g, recoveryproc);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_recovery_proc (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_get_recovery_proc",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_recovery_proc (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_add_drive_with_if (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *filename;
  const char *iface;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_add_drive_with_if",
                         &py_g, &filename, &iface))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_add_drive_with_if (g, filename, iface);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_add_drive_ro_with_if (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *filename;
  const char *iface;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_add_drive_ro_with_if",
                         &py_g, &filename, &iface))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_add_drive_ro_with_if (g, filename, iface);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mount (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  const char *mountpoint;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_mount",
                         &py_g, &device, &mountpoint))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mount (g, device, mountpoint);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_sync (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_sync",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sync (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_touch (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_touch",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_touch (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_cat (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_cat",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_cat (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_ll (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *directory;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_ll",
                         &py_g, &directory))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ll (g, directory);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_ls (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *directory;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_ls",
                         &py_g, &directory))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ls (g, directory);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_list_devices (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_list_devices",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_list_devices (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_list_partitions (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_list_partitions",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_list_partitions (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_pvs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_pvs",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_pvs (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_vgs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_vgs",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_vgs (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_lvs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_lvs",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lvs (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_pvs_full (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_lvm_pv_list *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_pvs_full",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_pvs_full (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_lvm_pv_list (r);
  guestfs_free_lvm_pv_list (r);
  return py_r;
}

static PyObject *
py_guestfs_vgs_full (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_lvm_vg_list *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_vgs_full",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_vgs_full (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_lvm_vg_list (r);
  guestfs_free_lvm_vg_list (r);
  return py_r;
}

static PyObject *
py_guestfs_lvs_full (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_lvm_lv_list *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_lvs_full",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lvs_full (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_lvm_lv_list (r);
  guestfs_free_lvm_lv_list (r);
  return py_r;
}

static PyObject *
py_guestfs_read_lines (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_read_lines",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_read_lines (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_aug_init (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *root;
  int flags;

  if (!PyArg_ParseTuple (args, (char *) "Osi:guestfs_aug_init",
                         &py_g, &root, &flags))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_init (g, root, flags);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_aug_close (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_aug_close",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_close (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_aug_defvar (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *name;
  const char *expr;

  if (!PyArg_ParseTuple (args, (char *) "Osz:guestfs_aug_defvar",
                         &py_g, &name, &expr))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_defvar (g, name, expr);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_aug_defnode (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_int_bool *r;
  const char *name;
  const char *expr;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Osss:guestfs_aug_defnode",
                         &py_g, &name, &expr, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_defnode (g, name, expr, val);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_int_bool (r);
  guestfs_free_int_bool (r);
  return py_r;
}

static PyObject *
py_guestfs_aug_get (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *augpath;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_aug_get",
                         &py_g, &augpath))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_get (g, augpath);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_aug_set (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *augpath;
  const char *val;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_aug_set",
                         &py_g, &augpath, &val))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_set (g, augpath, val);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_aug_insert (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *augpath;
  const char *label;
  int before;

  if (!PyArg_ParseTuple (args, (char *) "Ossi:guestfs_aug_insert",
                         &py_g, &augpath, &label, &before))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_insert (g, augpath, label, before);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_aug_rm (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *augpath;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_aug_rm",
                         &py_g, &augpath))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_rm (g, augpath);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_aug_mv (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *src;
  const char *dest;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_aug_mv",
                         &py_g, &src, &dest))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_mv (g, src, dest);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_aug_match (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *augpath;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_aug_match",
                         &py_g, &augpath))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_match (g, augpath);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_aug_save (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_aug_save",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_save (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_aug_load (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_aug_load",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_load (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_aug_ls (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *augpath;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_aug_ls",
                         &py_g, &augpath))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_aug_ls (g, augpath);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_rm (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_rm",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_rm (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_rmdir (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_rmdir",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_rmdir (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_rm_rf (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_rm_rf",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_rm_rf (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkdir (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_mkdir",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkdir (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkdir_p (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_mkdir_p",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkdir_p (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_chmod (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int mode;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Ois:guestfs_chmod",
                         &py_g, &mode, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_chmod (g, mode, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_chown (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int owner;
  int group;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oiis:guestfs_chown",
                         &py_g, &owner, &group, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_chown (g, owner, group, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_exists (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_exists",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_exists (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_is_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_is_file",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_is_file (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_is_dir (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_is_dir",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_is_dir (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_pvcreate (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_pvcreate",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_pvcreate (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_vgcreate (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *volgroup;
  PyObject *py_physvols;
  char **physvols;

  if (!PyArg_ParseTuple (args, (char *) "OsO:guestfs_vgcreate",
                         &py_g, &volgroup, &py_physvols))
    return NULL;
  g = get_handle (py_g);
  physvols = get_string_list (py_physvols);
  if (!physvols) return NULL;

  r = guestfs_vgcreate (g, volgroup, physvols);
  free (physvols);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_lvcreate (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *logvol;
  const char *volgroup;
  int mbytes;

  if (!PyArg_ParseTuple (args, (char *) "Ossi:guestfs_lvcreate",
                         &py_g, &logvol, &volgroup, &mbytes))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lvcreate (g, logvol, volgroup, mbytes);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkfs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *fstype;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_mkfs",
                         &py_g, &fstype, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkfs (g, fstype, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_sfdisk (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  int cyls;
  int heads;
  int sectors;
  PyObject *py_lines;
  char **lines;

  if (!PyArg_ParseTuple (args, (char *) "OsiiiO:guestfs_sfdisk",
                         &py_g, &device, &cyls, &heads, &sectors, &py_lines))
    return NULL;
  g = get_handle (py_g);
  lines = get_string_list (py_lines);
  if (!lines) return NULL;

  r = guestfs_sfdisk (g, device, cyls, heads, sectors, lines);
  free (lines);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_write_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;
  const char *content;
  int size;

  if (!PyArg_ParseTuple (args, (char *) "Ossi:guestfs_write_file",
                         &py_g, &path, &content, &size))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_write_file (g, path, content, size);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_umount (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *pathordevice;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_umount",
                         &py_g, &pathordevice))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_umount (g, pathordevice);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mounts (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_mounts",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mounts (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_umount_all (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_umount_all",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_umount_all (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_lvm_remove_all (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_lvm_remove_all",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lvm_remove_all (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_file",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_file (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_command (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  PyObject *py_arguments;
  char **arguments;

  if (!PyArg_ParseTuple (args, (char *) "OO:guestfs_command",
                         &py_g, &py_arguments))
    return NULL;
  g = get_handle (py_g);
  arguments = get_string_list (py_arguments);
  if (!arguments) return NULL;

  r = guestfs_command (g, arguments);
  free (arguments);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_command_lines (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  PyObject *py_arguments;
  char **arguments;

  if (!PyArg_ParseTuple (args, (char *) "OO:guestfs_command_lines",
                         &py_g, &py_arguments))
    return NULL;
  g = get_handle (py_g);
  arguments = get_string_list (py_arguments);
  if (!arguments) return NULL;

  r = guestfs_command_lines (g, arguments);
  free (arguments);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_stat (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_stat *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_stat",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_stat (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_stat (r);
  guestfs_free_stat (r);
  return py_r;
}

static PyObject *
py_guestfs_lstat (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_stat *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_lstat",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lstat (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_stat (r);
  guestfs_free_stat (r);
  return py_r;
}

static PyObject *
py_guestfs_statvfs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_statvfs *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_statvfs",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_statvfs (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_statvfs (r);
  guestfs_free_statvfs (r);
  return py_r;
}

static PyObject *
py_guestfs_tune2fs_l (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_tune2fs_l",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_tune2fs_l (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_table (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_blockdev_setro (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_setro",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_setro (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_blockdev_setrw (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_setrw",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_setrw (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_blockdev_getro (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_getro",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_getro (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_blockdev_getss (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_getss",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_getss (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_blockdev_getbsz (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_getbsz",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_getbsz (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_blockdev_setbsz (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  int blocksize;

  if (!PyArg_ParseTuple (args, (char *) "Osi:guestfs_blockdev_setbsz",
                         &py_g, &device, &blocksize))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_setbsz (g, device, blocksize);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_blockdev_getsz (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int64_t r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_getsz",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_getsz (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyLong_FromLongLong (r);
  return py_r;
}

static PyObject *
py_guestfs_blockdev_getsize64 (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int64_t r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_getsize64",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_getsize64 (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyLong_FromLongLong (r);
  return py_r;
}

static PyObject *
py_guestfs_blockdev_flushbufs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_flushbufs",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_flushbufs (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_blockdev_rereadpt (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_blockdev_rereadpt",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_blockdev_rereadpt (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_upload (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *filename;
  const char *remotefilename;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_upload",
                         &py_g, &filename, &remotefilename))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_upload (g, filename, remotefilename);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_download (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *remotefilename;
  const char *filename;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_download",
                         &py_g, &remotefilename, &filename))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_download (g, remotefilename, filename);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_checksum (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *csumtype;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_checksum",
                         &py_g, &csumtype, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_checksum (g, csumtype, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_tar_in (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *tarfile;
  const char *directory;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_tar_in",
                         &py_g, &tarfile, &directory))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_tar_in (g, tarfile, directory);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_tar_out (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *directory;
  const char *tarfile;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_tar_out",
                         &py_g, &directory, &tarfile))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_tar_out (g, directory, tarfile);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_tgz_in (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *tarball;
  const char *directory;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_tgz_in",
                         &py_g, &tarball, &directory))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_tgz_in (g, tarball, directory);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_tgz_out (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *directory;
  const char *tarball;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_tgz_out",
                         &py_g, &directory, &tarball))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_tgz_out (g, directory, tarball);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mount_ro (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  const char *mountpoint;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_mount_ro",
                         &py_g, &device, &mountpoint))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mount_ro (g, device, mountpoint);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mount_options (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *options;
  const char *device;
  const char *mountpoint;

  if (!PyArg_ParseTuple (args, (char *) "Osss:guestfs_mount_options",
                         &py_g, &options, &device, &mountpoint))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mount_options (g, options, device, mountpoint);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mount_vfs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *options;
  const char *vfstype;
  const char *device;
  const char *mountpoint;

  if (!PyArg_ParseTuple (args, (char *) "Ossss:guestfs_mount_vfs",
                         &py_g, &options, &vfstype, &device, &mountpoint))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mount_vfs (g, options, vfstype, device, mountpoint);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_debug (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *subcmd;
  PyObject *py_extraargs;
  char **extraargs;

  if (!PyArg_ParseTuple (args, (char *) "OsO:guestfs_debug",
                         &py_g, &subcmd, &py_extraargs))
    return NULL;
  g = get_handle (py_g);
  extraargs = get_string_list (py_extraargs);
  if (!extraargs) return NULL;

  r = guestfs_debug (g, subcmd, extraargs);
  free (extraargs);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_lvremove (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_lvremove",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lvremove (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_vgremove (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *vgname;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_vgremove",
                         &py_g, &vgname))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_vgremove (g, vgname);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_pvremove (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_pvremove",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_pvremove (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_set_e2label (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  const char *label;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_set_e2label",
                         &py_g, &device, &label))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_e2label (g, device, label);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_e2label (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_get_e2label",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_e2label (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_set_e2uuid (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  const char *uuid;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_set_e2uuid",
                         &py_g, &device, &uuid))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_set_e2uuid (g, device, uuid);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_get_e2uuid (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_get_e2uuid",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_get_e2uuid (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_fsck (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *fstype;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_fsck",
                         &py_g, &fstype, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_fsck (g, fstype, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_zero (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_zero",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zero (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_grub_install (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *root;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_grub_install",
                         &py_g, &root, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_grub_install (g, root, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_cp (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *src;
  const char *dest;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_cp",
                         &py_g, &src, &dest))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_cp (g, src, dest);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_cp_a (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *src;
  const char *dest;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_cp_a",
                         &py_g, &src, &dest))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_cp_a (g, src, dest);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mv (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *src;
  const char *dest;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_mv",
                         &py_g, &src, &dest))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mv (g, src, dest);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_drop_caches (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int whattodrop;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_drop_caches",
                         &py_g, &whattodrop))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_drop_caches (g, whattodrop);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_dmesg (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_dmesg",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_dmesg (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_ping_daemon (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_ping_daemon",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ping_daemon (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_equal (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *file1;
  const char *file2;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_equal",
                         &py_g, &file1, &file2))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_equal (g, file1, file2);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_strings (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_strings",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_strings (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_strings_e (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *encoding;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_strings_e",
                         &py_g, &encoding, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_strings_e (g, encoding, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_hexdump (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_hexdump",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_hexdump (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_zerofree (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_zerofree",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zerofree (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_pvresize (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_pvresize",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_pvresize (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_sfdisk_N (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  int partnum;
  int cyls;
  int heads;
  int sectors;
  const char *line;

  if (!PyArg_ParseTuple (args, (char *) "Osiiiis:guestfs_sfdisk_N",
                         &py_g, &device, &partnum, &cyls, &heads, &sectors, &line))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sfdisk_N (g, device, partnum, cyls, heads, sectors, line);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_sfdisk_l (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_sfdisk_l",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sfdisk_l (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_sfdisk_kernel_geometry (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_sfdisk_kernel_geometry",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sfdisk_kernel_geometry (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_sfdisk_disk_geometry (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_sfdisk_disk_geometry",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sfdisk_disk_geometry (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_vg_activate_all (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int activate;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_vg_activate_all",
                         &py_g, &activate))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_vg_activate_all (g, activate);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_vg_activate (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int activate;
  PyObject *py_volgroups;
  char **volgroups;

  if (!PyArg_ParseTuple (args, (char *) "OiO:guestfs_vg_activate",
                         &py_g, &activate, &py_volgroups))
    return NULL;
  g = get_handle (py_g);
  volgroups = get_string_list (py_volgroups);
  if (!volgroups) return NULL;

  r = guestfs_vg_activate (g, activate, volgroups);
  free (volgroups);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_lvresize (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  int mbytes;

  if (!PyArg_ParseTuple (args, (char *) "Osi:guestfs_lvresize",
                         &py_g, &device, &mbytes))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lvresize (g, device, mbytes);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_resize2fs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_resize2fs",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_resize2fs (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_find (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *directory;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_find",
                         &py_g, &directory))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_find (g, directory);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_e2fsck_f (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_e2fsck_f",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_e2fsck_f (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_sleep (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int secs;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_sleep",
                         &py_g, &secs))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sleep (g, secs);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_ntfs_3g_probe (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int rw;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Ois:guestfs_ntfs_3g_probe",
                         &py_g, &rw, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ntfs_3g_probe (g, rw, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_sh (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *command;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_sh",
                         &py_g, &command))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sh (g, command);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_sh_lines (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *command;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_sh_lines",
                         &py_g, &command))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_sh_lines (g, command);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_glob_expand (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *pattern;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_glob_expand",
                         &py_g, &pattern))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_glob_expand (g, pattern);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_scrub_device (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_scrub_device",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_scrub_device (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_scrub_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *file;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_scrub_file",
                         &py_g, &file))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_scrub_file (g, file);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_scrub_freespace (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *dir;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_scrub_freespace",
                         &py_g, &dir))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_scrub_freespace (g, dir);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkdtemp (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *template;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_mkdtemp",
                         &py_g, &template))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkdtemp (g, template);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_wc_l (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_wc_l",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_wc_l (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_wc_w (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_wc_w",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_wc_w (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_wc_c (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_wc_c",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_wc_c (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_head (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_head",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_head (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_head_n (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  int nrlines;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Ois:guestfs_head_n",
                         &py_g, &nrlines, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_head_n (g, nrlines, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_tail (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_tail",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_tail (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_tail_n (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  int nrlines;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Ois:guestfs_tail_n",
                         &py_g, &nrlines, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_tail_n (g, nrlines, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_df (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_df",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_df (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_df_h (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_df_h",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_df_h (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_du (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int64_t r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_du",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_du (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyLong_FromLongLong (r);
  return py_r;
}

static PyObject *
py_guestfs_initrd_list (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_initrd_list",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_initrd_list (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_mount_loop (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *file;
  const char *mountpoint;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_mount_loop",
                         &py_g, &file, &mountpoint))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mount_loop (g, file, mountpoint);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkswap (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_mkswap",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkswap (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkswap_L (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *label;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_mkswap_L",
                         &py_g, &label, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkswap_L (g, label, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkswap_U (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *uuid;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_mkswap_U",
                         &py_g, &uuid, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkswap_U (g, uuid, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mknod (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int mode;
  int devmajor;
  int devminor;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oiiis:guestfs_mknod",
                         &py_g, &mode, &devmajor, &devminor, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mknod (g, mode, devmajor, devminor, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkfifo (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int mode;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Ois:guestfs_mkfifo",
                         &py_g, &mode, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkfifo (g, mode, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mknod_b (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int mode;
  int devmajor;
  int devminor;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oiiis:guestfs_mknod_b",
                         &py_g, &mode, &devmajor, &devminor, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mknod_b (g, mode, devmajor, devminor, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mknod_c (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int mode;
  int devmajor;
  int devminor;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oiiis:guestfs_mknod_c",
                         &py_g, &mode, &devmajor, &devminor, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mknod_c (g, mode, devmajor, devminor, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_umask (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int mask;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_umask",
                         &py_g, &mask))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_umask (g, mask);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyInt_FromLong ((long) r);
  return py_r;
}

static PyObject *
py_guestfs_readdir (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_dirent_list *r;
  const char *dir;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_readdir",
                         &py_g, &dir))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_readdir (g, dir);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_dirent_list (r);
  guestfs_free_dirent_list (r);
  return py_r;
}

static PyObject *
py_guestfs_sfdiskM (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  PyObject *py_lines;
  char **lines;

  if (!PyArg_ParseTuple (args, (char *) "OsO:guestfs_sfdiskM",
                         &py_g, &device, &py_lines))
    return NULL;
  g = get_handle (py_g);
  lines = get_string_list (py_lines);
  if (!lines) return NULL;

  r = guestfs_sfdiskM (g, device, lines);
  free (lines);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_zfile (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *meth;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_zfile",
                         &py_g, &meth, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zfile (g, meth, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_getxattrs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_xattr_list *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_getxattrs",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_getxattrs (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_xattr_list (r);
  guestfs_free_xattr_list (r);
  return py_r;
}

static PyObject *
py_guestfs_lgetxattrs (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_xattr_list *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_lgetxattrs",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lgetxattrs (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_xattr_list (r);
  guestfs_free_xattr_list (r);
  return py_r;
}

static PyObject *
py_guestfs_setxattr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *xattr;
  const char *val;
  int vallen;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Ossis:guestfs_setxattr",
                         &py_g, &xattr, &val, &vallen, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_setxattr (g, xattr, val, vallen, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_lsetxattr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *xattr;
  const char *val;
  int vallen;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Ossis:guestfs_lsetxattr",
                         &py_g, &xattr, &val, &vallen, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lsetxattr (g, xattr, val, vallen, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_removexattr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *xattr;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_removexattr",
                         &py_g, &xattr, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_removexattr (g, xattr, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_lremovexattr (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *xattr;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_lremovexattr",
                         &py_g, &xattr, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lremovexattr (g, xattr, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mountpoints (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_mountpoints",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mountpoints (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_table (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_mkmountpoint (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *exemptpath;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_mkmountpoint",
                         &py_g, &exemptpath))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkmountpoint (g, exemptpath);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_rmmountpoint (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *exemptpath;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_rmmountpoint",
                         &py_g, &exemptpath))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_rmmountpoint (g, exemptpath);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_read_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  size_t size;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_read_file",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_read_file (g, path, &size);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromStringAndSize (r, size);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_grep (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_grep",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_grep (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_egrep (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_egrep",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_egrep (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_fgrep (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *pattern;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_fgrep",
                         &py_g, &pattern, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_fgrep (g, pattern, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_grepi (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_grepi",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_grepi (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_egrepi (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_egrepi",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_egrepi (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_fgrepi (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *pattern;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_fgrepi",
                         &py_g, &pattern, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_fgrepi (g, pattern, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_zgrep (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_zgrep",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zgrep (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_zegrep (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_zegrep",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zegrep (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_zfgrep (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *pattern;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_zfgrep",
                         &py_g, &pattern, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zfgrep (g, pattern, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_zgrepi (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_zgrepi",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zgrepi (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_zegrepi (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *regex;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_zegrepi",
                         &py_g, &regex, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zegrepi (g, regex, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_zfgrepi (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *pattern;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_zfgrepi",
                         &py_g, &pattern, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_zfgrepi (g, pattern, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_realpath (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_realpath",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_realpath (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_ln (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *target;
  const char *linkname;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_ln",
                         &py_g, &target, &linkname))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ln (g, target, linkname);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_ln_f (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *target;
  const char *linkname;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_ln_f",
                         &py_g, &target, &linkname))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ln_f (g, target, linkname);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_ln_s (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *target;
  const char *linkname;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_ln_s",
                         &py_g, &target, &linkname))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ln_s (g, target, linkname);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_ln_sf (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *target;
  const char *linkname;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_ln_sf",
                         &py_g, &target, &linkname))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_ln_sf (g, target, linkname);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_readlink (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_readlink",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_readlink (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_fallocate (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;
  int len;

  if (!PyArg_ParseTuple (args, (char *) "Osi:guestfs_fallocate",
                         &py_g, &path, &len))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_fallocate (g, path, len);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapon_device (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapon_device",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapon_device (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapoff_device (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapoff_device",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapoff_device (g, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapon_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *file;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapon_file",
                         &py_g, &file))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapon_file (g, file);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapoff_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *file;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapoff_file",
                         &py_g, &file))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapoff_file (g, file);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapon_label (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *label;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapon_label",
                         &py_g, &label))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapon_label (g, label);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapoff_label (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *label;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapoff_label",
                         &py_g, &label))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapoff_label (g, label);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapon_uuid (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *uuid;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapon_uuid",
                         &py_g, &uuid))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapon_uuid (g, uuid);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_swapoff_uuid (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *uuid;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_swapoff_uuid",
                         &py_g, &uuid))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_swapoff_uuid (g, uuid);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkswap_file (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_mkswap_file",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkswap_file (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_inotify_init (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int maxevents;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_inotify_init",
                         &py_g, &maxevents))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_inotify_init (g, maxevents);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_inotify_add_watch (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int64_t r;
  const char *path;
  int mask;

  if (!PyArg_ParseTuple (args, (char *) "Osi:guestfs_inotify_add_watch",
                         &py_g, &path, &mask))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_inotify_add_watch (g, path, mask);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyLong_FromLongLong (r);
  return py_r;
}

static PyObject *
py_guestfs_inotify_rm_watch (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int wd;

  if (!PyArg_ParseTuple (args, (char *) "Oi:guestfs_inotify_rm_watch",
                         &py_g, &wd))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_inotify_rm_watch (g, wd);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_inotify_read (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_inotify_event_list *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_inotify_read",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_inotify_read (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_inotify_event_list (r);
  guestfs_free_inotify_event_list (r);
  return py_r;
}

static PyObject *
py_guestfs_inotify_files (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_inotify_files",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_inotify_files (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_inotify_close (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_inotify_close",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_inotify_close (g);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_setcon (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *context;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_setcon",
                         &py_g, &context))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_setcon (g, context);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_getcon (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;

  if (!PyArg_ParseTuple (args, (char *) "O:guestfs_getcon",
                         &py_g))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_getcon (g);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_mkfs_b (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *fstype;
  int blocksize;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Osis:guestfs_mkfs_b",
                         &py_g, &fstype, &blocksize, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkfs_b (g, fstype, blocksize, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mke2journal (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int blocksize;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Ois:guestfs_mke2journal",
                         &py_g, &blocksize, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mke2journal (g, blocksize, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mke2journal_L (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int blocksize;
  const char *label;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Oiss:guestfs_mke2journal_L",
                         &py_g, &blocksize, &label, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mke2journal_L (g, blocksize, label, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mke2journal_U (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int blocksize;
  const char *uuid;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Oiss:guestfs_mke2journal_U",
                         &py_g, &blocksize, &uuid, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mke2journal_U (g, blocksize, uuid, device);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mke2fs_J (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *fstype;
  int blocksize;
  const char *device;
  const char *journal;

  if (!PyArg_ParseTuple (args, (char *) "Osiss:guestfs_mke2fs_J",
                         &py_g, &fstype, &blocksize, &device, &journal))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mke2fs_J (g, fstype, blocksize, device, journal);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mke2fs_JL (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *fstype;
  int blocksize;
  const char *device;
  const char *label;

  if (!PyArg_ParseTuple (args, (char *) "Osiss:guestfs_mke2fs_JL",
                         &py_g, &fstype, &blocksize, &device, &label))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mke2fs_JL (g, fstype, blocksize, device, label);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mke2fs_JU (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *fstype;
  int blocksize;
  const char *device;
  const char *uuid;

  if (!PyArg_ParseTuple (args, (char *) "Osiss:guestfs_mke2fs_JU",
                         &py_g, &fstype, &blocksize, &device, &uuid))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mke2fs_JU (g, fstype, blocksize, device, uuid);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_modprobe (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *modulename;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_modprobe",
                         &py_g, &modulename))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_modprobe (g, modulename);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_echo_daemon (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  PyObject *py_words;
  char **words;

  if (!PyArg_ParseTuple (args, (char *) "OO:guestfs_echo_daemon",
                         &py_g, &py_words))
    return NULL;
  g = get_handle (py_g);
  words = get_string_list (py_words);
  if (!words) return NULL;

  r = guestfs_echo_daemon (g, words);
  free (words);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_find0 (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *directory;
  const char *files;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_find0",
                         &py_g, &directory, &files))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_find0 (g, directory, files);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_case_sensitive_path (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_case_sensitive_path",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_case_sensitive_path (g, path);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_vfs_type (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_vfs_type",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_vfs_type (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_truncate (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_truncate",
                         &py_g, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_truncate (g, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_truncate_size (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;
  long long size;

  if (!PyArg_ParseTuple (args, (char *) "OsL:guestfs_truncate_size",
                         &py_g, &path, &size))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_truncate_size (g, path, size);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_utimens (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;
  long long atsecs;
  long long atnsecs;
  long long mtsecs;
  long long mtnsecs;

  if (!PyArg_ParseTuple (args, (char *) "OsLLLL:guestfs_utimens",
                         &py_g, &path, &atsecs, &atnsecs, &mtsecs, &mtnsecs))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_utimens (g, path, atsecs, atnsecs, mtsecs, mtnsecs);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_mkdir_mode (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *path;
  int mode;

  if (!PyArg_ParseTuple (args, (char *) "Osi:guestfs_mkdir_mode",
                         &py_g, &path, &mode))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_mkdir_mode (g, path, mode);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_lchown (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int owner;
  int group;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oiis:guestfs_lchown",
                         &py_g, &owner, &group, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lchown (g, owner, group, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_lstatlist (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_stat_list *r;
  const char *path;
  PyObject *py_names;
  char **names;

  if (!PyArg_ParseTuple (args, (char *) "OsO:guestfs_lstatlist",
                         &py_g, &path, &py_names))
    return NULL;
  g = get_handle (py_g);
  names = get_string_list (py_names);
  if (!names) return NULL;

  r = guestfs_lstatlist (g, path, names);
  free (names);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_stat_list (r);
  guestfs_free_stat_list (r);
  return py_r;
}

static PyObject *
py_guestfs_lxattrlist (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_xattr_list *r;
  const char *path;
  PyObject *py_names;
  char **names;

  if (!PyArg_ParseTuple (args, (char *) "OsO:guestfs_lxattrlist",
                         &py_g, &path, &py_names))
    return NULL;
  g = get_handle (py_g);
  names = get_string_list (py_names);
  if (!names) return NULL;

  r = guestfs_lxattrlist (g, path, names);
  free (names);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_xattr_list (r);
  guestfs_free_xattr_list (r);
  return py_r;
}

static PyObject *
py_guestfs_readlinklist (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char **r;
  const char *path;
  PyObject *py_names;
  char **names;

  if (!PyArg_ParseTuple (args, (char *) "OsO:guestfs_readlinklist",
                         &py_g, &path, &py_names))
    return NULL;
  g = get_handle (py_g);
  names = get_string_list (py_names);
  if (!names) return NULL;

  r = guestfs_readlinklist (g, path, names);
  free (names);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_string_list (r);
  free_strings (r);
  return py_r;
}

static PyObject *
py_guestfs_pread (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  size_t size;
  const char *path;
  int count;
  long long offset;

  if (!PyArg_ParseTuple (args, (char *) "OsiL:guestfs_pread",
                         &py_g, &path, &count, &offset))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_pread (g, path, count, offset, &size);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromStringAndSize (r, size);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_part_init (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  const char *parttype;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_part_init",
                         &py_g, &device, &parttype))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_part_init (g, device, parttype);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_part_add (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  const char *prlogex;
  long long startsect;
  long long endsect;

  if (!PyArg_ParseTuple (args, (char *) "OssLL:guestfs_part_add",
                         &py_g, &device, &prlogex, &startsect, &endsect))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_part_add (g, device, prlogex, startsect, endsect);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_part_disk (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  const char *parttype;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_part_disk",
                         &py_g, &device, &parttype))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_part_disk (g, device, parttype);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_part_set_bootable (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  int partnum;
  int bootable;

  if (!PyArg_ParseTuple (args, (char *) "Osii:guestfs_part_set_bootable",
                         &py_g, &device, &partnum, &bootable))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_part_set_bootable (g, device, partnum, bootable);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_part_set_name (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *device;
  int partnum;
  const char *name;

  if (!PyArg_ParseTuple (args, (char *) "Osis:guestfs_part_set_name",
                         &py_g, &device, &partnum, &name))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_part_set_name (g, device, partnum, name);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_part_list (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  struct guestfs_partition_list *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_part_list",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_part_list (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = put_partition_list (r);
  guestfs_free_partition_list (r);
  return py_r;
}

static PyObject *
py_guestfs_part_get_parttype (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  const char *device;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_part_get_parttype",
                         &py_g, &device))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_part_get_parttype (g, device);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromString (r);
  free (r);
  return py_r;
}

static PyObject *
py_guestfs_fill (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  int c;
  int len;
  const char *path;

  if (!PyArg_ParseTuple (args, (char *) "Oiis:guestfs_fill",
                         &py_g, &c, &len, &path))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_fill (g, c, len, path);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_available (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  PyObject *py_groups;
  char **groups;

  if (!PyArg_ParseTuple (args, (char *) "OO:guestfs_available",
                         &py_g, &py_groups))
    return NULL;
  g = get_handle (py_g);
  groups = get_string_list (py_groups);
  if (!groups) return NULL;

  r = guestfs_available (g, groups);
  free (groups);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_dd (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *src;
  const char *dest;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_dd",
                         &py_g, &src, &dest))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_dd (g, src, dest);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_filesize (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int64_t r;
  const char *file;

  if (!PyArg_ParseTuple (args, (char *) "Os:guestfs_filesize",
                         &py_g, &file))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_filesize (g, file);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyLong_FromLongLong (r);
  return py_r;
}

static PyObject *
py_guestfs_lvrename (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *logvol;
  const char *newlogvol;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_lvrename",
                         &py_g, &logvol, &newlogvol))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_lvrename (g, logvol, newlogvol);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_vgrename (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  int r;
  const char *volgroup;
  const char *newvolgroup;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_vgrename",
                         &py_g, &volgroup, &newvolgroup))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_vgrename (g, volgroup, newvolgroup);
  if (r == -1) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  Py_INCREF (Py_None);
  py_r = Py_None;
  return py_r;
}

static PyObject *
py_guestfs_initrd_cat (PyObject *self, PyObject *args)
{
  PyObject *py_g;
  guestfs_h *g;
  PyObject *py_r;
  char *r;
  size_t size;
  const char *initrdpath;
  const char *filename;

  if (!PyArg_ParseTuple (args, (char *) "Oss:guestfs_initrd_cat",
                         &py_g, &initrdpath, &filename))
    return NULL;
  g = get_handle (py_g);

  r = guestfs_initrd_cat (g, initrdpath, filename, &size);
  if (r == NULL) {
    PyErr_SetString (PyExc_RuntimeError, guestfs_last_error (g));
    return NULL;
  }

  py_r = PyString_FromStringAndSize (r, size);
  free (r);
  return py_r;
}

static PyMethodDef methods[] = {
  { (char *) "create", py_guestfs_create, METH_VARARGS, NULL },
  { (char *) "close", py_guestfs_close, METH_VARARGS, NULL },
  { (char *) "test0", py_guestfs_test0, METH_VARARGS, NULL },
  { (char *) "test0rint", py_guestfs_test0rint, METH_VARARGS, NULL },
  { (char *) "test0rinterr", py_guestfs_test0rinterr, METH_VARARGS, NULL },
  { (char *) "test0rint64", py_guestfs_test0rint64, METH_VARARGS, NULL },
  { (char *) "test0rint64err", py_guestfs_test0rint64err, METH_VARARGS, NULL },
  { (char *) "test0rbool", py_guestfs_test0rbool, METH_VARARGS, NULL },
  { (char *) "test0rboolerr", py_guestfs_test0rboolerr, METH_VARARGS, NULL },
  { (char *) "test0rconststring", py_guestfs_test0rconststring, METH_VARARGS, NULL },
  { (char *) "test0rconststringerr", py_guestfs_test0rconststringerr, METH_VARARGS, NULL },
  { (char *) "test0rconstoptstring", py_guestfs_test0rconstoptstring, METH_VARARGS, NULL },
  { (char *) "test0rconstoptstringerr", py_guestfs_test0rconstoptstringerr, METH_VARARGS, NULL },
  { (char *) "test0rstring", py_guestfs_test0rstring, METH_VARARGS, NULL },
  { (char *) "test0rstringerr", py_guestfs_test0rstringerr, METH_VARARGS, NULL },
  { (char *) "test0rstringlist", py_guestfs_test0rstringlist, METH_VARARGS, NULL },
  { (char *) "test0rstringlisterr", py_guestfs_test0rstringlisterr, METH_VARARGS, NULL },
  { (char *) "test0rstruct", py_guestfs_test0rstruct, METH_VARARGS, NULL },
  { (char *) "test0rstructerr", py_guestfs_test0rstructerr, METH_VARARGS, NULL },
  { (char *) "test0rstructlist", py_guestfs_test0rstructlist, METH_VARARGS, NULL },
  { (char *) "test0rstructlisterr", py_guestfs_test0rstructlisterr, METH_VARARGS, NULL },
  { (char *) "test0rhashtable", py_guestfs_test0rhashtable, METH_VARARGS, NULL },
  { (char *) "test0rhashtableerr", py_guestfs_test0rhashtableerr, METH_VARARGS, NULL },
  { (char *) "launch", py_guestfs_launch, METH_VARARGS, NULL },
  { (char *) "wait_ready", py_guestfs_wait_ready, METH_VARARGS, NULL },
  { (char *) "kill_subprocess", py_guestfs_kill_subprocess, METH_VARARGS, NULL },
  { (char *) "add_drive", py_guestfs_add_drive, METH_VARARGS, NULL },
  { (char *) "add_cdrom", py_guestfs_add_cdrom, METH_VARARGS, NULL },
  { (char *) "add_drive_ro", py_guestfs_add_drive_ro, METH_VARARGS, NULL },
  { (char *) "config", py_guestfs_config, METH_VARARGS, NULL },
  { (char *) "set_qemu", py_guestfs_set_qemu, METH_VARARGS, NULL },
  { (char *) "get_qemu", py_guestfs_get_qemu, METH_VARARGS, NULL },
  { (char *) "set_path", py_guestfs_set_path, METH_VARARGS, NULL },
  { (char *) "get_path", py_guestfs_get_path, METH_VARARGS, NULL },
  { (char *) "set_append", py_guestfs_set_append, METH_VARARGS, NULL },
  { (char *) "get_append", py_guestfs_get_append, METH_VARARGS, NULL },
  { (char *) "set_autosync", py_guestfs_set_autosync, METH_VARARGS, NULL },
  { (char *) "get_autosync", py_guestfs_get_autosync, METH_VARARGS, NULL },
  { (char *) "set_verbose", py_guestfs_set_verbose, METH_VARARGS, NULL },
  { (char *) "get_verbose", py_guestfs_get_verbose, METH_VARARGS, NULL },
  { (char *) "is_ready", py_guestfs_is_ready, METH_VARARGS, NULL },
  { (char *) "is_config", py_guestfs_is_config, METH_VARARGS, NULL },
  { (char *) "is_launching", py_guestfs_is_launching, METH_VARARGS, NULL },
  { (char *) "is_busy", py_guestfs_is_busy, METH_VARARGS, NULL },
  { (char *) "get_state", py_guestfs_get_state, METH_VARARGS, NULL },
  { (char *) "set_memsize", py_guestfs_set_memsize, METH_VARARGS, NULL },
  { (char *) "get_memsize", py_guestfs_get_memsize, METH_VARARGS, NULL },
  { (char *) "get_pid", py_guestfs_get_pid, METH_VARARGS, NULL },
  { (char *) "version", py_guestfs_version, METH_VARARGS, NULL },
  { (char *) "set_selinux", py_guestfs_set_selinux, METH_VARARGS, NULL },
  { (char *) "get_selinux", py_guestfs_get_selinux, METH_VARARGS, NULL },
  { (char *) "set_trace", py_guestfs_set_trace, METH_VARARGS, NULL },
  { (char *) "get_trace", py_guestfs_get_trace, METH_VARARGS, NULL },
  { (char *) "set_direct", py_guestfs_set_direct, METH_VARARGS, NULL },
  { (char *) "get_direct", py_guestfs_get_direct, METH_VARARGS, NULL },
  { (char *) "set_recovery_proc", py_guestfs_set_recovery_proc, METH_VARARGS, NULL },
  { (char *) "get_recovery_proc", py_guestfs_get_recovery_proc, METH_VARARGS, NULL },
  { (char *) "add_drive_with_if", py_guestfs_add_drive_with_if, METH_VARARGS, NULL },
  { (char *) "add_drive_ro_with_if", py_guestfs_add_drive_ro_with_if, METH_VARARGS, NULL },
  { (char *) "mount", py_guestfs_mount, METH_VARARGS, NULL },
  { (char *) "sync", py_guestfs_sync, METH_VARARGS, NULL },
  { (char *) "touch", py_guestfs_touch, METH_VARARGS, NULL },
  { (char *) "cat", py_guestfs_cat, METH_VARARGS, NULL },
  { (char *) "ll", py_guestfs_ll, METH_VARARGS, NULL },
  { (char *) "ls", py_guestfs_ls, METH_VARARGS, NULL },
  { (char *) "list_devices", py_guestfs_list_devices, METH_VARARGS, NULL },
  { (char *) "list_partitions", py_guestfs_list_partitions, METH_VARARGS, NULL },
  { (char *) "pvs", py_guestfs_pvs, METH_VARARGS, NULL },
  { (char *) "vgs", py_guestfs_vgs, METH_VARARGS, NULL },
  { (char *) "lvs", py_guestfs_lvs, METH_VARARGS, NULL },
  { (char *) "pvs_full", py_guestfs_pvs_full, METH_VARARGS, NULL },
  { (char *) "vgs_full", py_guestfs_vgs_full, METH_VARARGS, NULL },
  { (char *) "lvs_full", py_guestfs_lvs_full, METH_VARARGS, NULL },
  { (char *) "read_lines", py_guestfs_read_lines, METH_VARARGS, NULL },
  { (char *) "aug_init", py_guestfs_aug_init, METH_VARARGS, NULL },
  { (char *) "aug_close", py_guestfs_aug_close, METH_VARARGS, NULL },
  { (char *) "aug_defvar", py_guestfs_aug_defvar, METH_VARARGS, NULL },
  { (char *) "aug_defnode", py_guestfs_aug_defnode, METH_VARARGS, NULL },
  { (char *) "aug_get", py_guestfs_aug_get, METH_VARARGS, NULL },
  { (char *) "aug_set", py_guestfs_aug_set, METH_VARARGS, NULL },
  { (char *) "aug_insert", py_guestfs_aug_insert, METH_VARARGS, NULL },
  { (char *) "aug_rm", py_guestfs_aug_rm, METH_VARARGS, NULL },
  { (char *) "aug_mv", py_guestfs_aug_mv, METH_VARARGS, NULL },
  { (char *) "aug_match", py_guestfs_aug_match, METH_VARARGS, NULL },
  { (char *) "aug_save", py_guestfs_aug_save, METH_VARARGS, NULL },
  { (char *) "aug_load", py_guestfs_aug_load, METH_VARARGS, NULL },
  { (char *) "aug_ls", py_guestfs_aug_ls, METH_VARARGS, NULL },
  { (char *) "rm", py_guestfs_rm, METH_VARARGS, NULL },
  { (char *) "rmdir", py_guestfs_rmdir, METH_VARARGS, NULL },
  { (char *) "rm_rf", py_guestfs_rm_rf, METH_VARARGS, NULL },
  { (char *) "mkdir", py_guestfs_mkdir, METH_VARARGS, NULL },
  { (char *) "mkdir_p", py_guestfs_mkdir_p, METH_VARARGS, NULL },
  { (char *) "chmod", py_guestfs_chmod, METH_VARARGS, NULL },
  { (char *) "chown", py_guestfs_chown, METH_VARARGS, NULL },
  { (char *) "exists", py_guestfs_exists, METH_VARARGS, NULL },
  { (char *) "is_file", py_guestfs_is_file, METH_VARARGS, NULL },
  { (char *) "is_dir", py_guestfs_is_dir, METH_VARARGS, NULL },
  { (char *) "pvcreate", py_guestfs_pvcreate, METH_VARARGS, NULL },
  { (char *) "vgcreate", py_guestfs_vgcreate, METH_VARARGS, NULL },
  { (char *) "lvcreate", py_guestfs_lvcreate, METH_VARARGS, NULL },
  { (char *) "mkfs", py_guestfs_mkfs, METH_VARARGS, NULL },
  { (char *) "sfdisk", py_guestfs_sfdisk, METH_VARARGS, NULL },
  { (char *) "write_file", py_guestfs_write_file, METH_VARARGS, NULL },
  { (char *) "umount", py_guestfs_umount, METH_VARARGS, NULL },
  { (char *) "mounts", py_guestfs_mounts, METH_VARARGS, NULL },
  { (char *) "umount_all", py_guestfs_umount_all, METH_VARARGS, NULL },
  { (char *) "lvm_remove_all", py_guestfs_lvm_remove_all, METH_VARARGS, NULL },
  { (char *) "file", py_guestfs_file, METH_VARARGS, NULL },
  { (char *) "command", py_guestfs_command, METH_VARARGS, NULL },
  { (char *) "command_lines", py_guestfs_command_lines, METH_VARARGS, NULL },
  { (char *) "stat", py_guestfs_stat, METH_VARARGS, NULL },
  { (char *) "lstat", py_guestfs_lstat, METH_VARARGS, NULL },
  { (char *) "statvfs", py_guestfs_statvfs, METH_VARARGS, NULL },
  { (char *) "tune2fs_l", py_guestfs_tune2fs_l, METH_VARARGS, NULL },
  { (char *) "blockdev_setro", py_guestfs_blockdev_setro, METH_VARARGS, NULL },
  { (char *) "blockdev_setrw", py_guestfs_blockdev_setrw, METH_VARARGS, NULL },
  { (char *) "blockdev_getro", py_guestfs_blockdev_getro, METH_VARARGS, NULL },
  { (char *) "blockdev_getss", py_guestfs_blockdev_getss, METH_VARARGS, NULL },
  { (char *) "blockdev_getbsz", py_guestfs_blockdev_getbsz, METH_VARARGS, NULL },
  { (char *) "blockdev_setbsz", py_guestfs_blockdev_setbsz, METH_VARARGS, NULL },
  { (char *) "blockdev_getsz", py_guestfs_blockdev_getsz, METH_VARARGS, NULL },
  { (char *) "blockdev_getsize64", py_guestfs_blockdev_getsize64, METH_VARARGS, NULL },
  { (char *) "blockdev_flushbufs", py_guestfs_blockdev_flushbufs, METH_VARARGS, NULL },
  { (char *) "blockdev_rereadpt", py_guestfs_blockdev_rereadpt, METH_VARARGS, NULL },
  { (char *) "upload", py_guestfs_upload, METH_VARARGS, NULL },
  { (char *) "download", py_guestfs_download, METH_VARARGS, NULL },
  { (char *) "checksum", py_guestfs_checksum, METH_VARARGS, NULL },
  { (char *) "tar_in", py_guestfs_tar_in, METH_VARARGS, NULL },
  { (char *) "tar_out", py_guestfs_tar_out, METH_VARARGS, NULL },
  { (char *) "tgz_in", py_guestfs_tgz_in, METH_VARARGS, NULL },
  { (char *) "tgz_out", py_guestfs_tgz_out, METH_VARARGS, NULL },
  { (char *) "mount_ro", py_guestfs_mount_ro, METH_VARARGS, NULL },
  { (char *) "mount_options", py_guestfs_mount_options, METH_VARARGS, NULL },
  { (char *) "mount_vfs", py_guestfs_mount_vfs, METH_VARARGS, NULL },
  { (char *) "debug", py_guestfs_debug, METH_VARARGS, NULL },
  { (char *) "lvremove", py_guestfs_lvremove, METH_VARARGS, NULL },
  { (char *) "vgremove", py_guestfs_vgremove, METH_VARARGS, NULL },
  { (char *) "pvremove", py_guestfs_pvremove, METH_VARARGS, NULL },
  { (char *) "set_e2label", py_guestfs_set_e2label, METH_VARARGS, NULL },
  { (char *) "get_e2label", py_guestfs_get_e2label, METH_VARARGS, NULL },
  { (char *) "set_e2uuid", py_guestfs_set_e2uuid, METH_VARARGS, NULL },
  { (char *) "get_e2uuid", py_guestfs_get_e2uuid, METH_VARARGS, NULL },
  { (char *) "fsck", py_guestfs_fsck, METH_VARARGS, NULL },
  { (char *) "zero", py_guestfs_zero, METH_VARARGS, NULL },
  { (char *) "grub_install", py_guestfs_grub_install, METH_VARARGS, NULL },
  { (char *) "cp", py_guestfs_cp, METH_VARARGS, NULL },
  { (char *) "cp_a", py_guestfs_cp_a, METH_VARARGS, NULL },
  { (char *) "mv", py_guestfs_mv, METH_VARARGS, NULL },
  { (char *) "drop_caches", py_guestfs_drop_caches, METH_VARARGS, NULL },
  { (char *) "dmesg", py_guestfs_dmesg, METH_VARARGS, NULL },
  { (char *) "ping_daemon", py_guestfs_ping_daemon, METH_VARARGS, NULL },
  { (char *) "equal", py_guestfs_equal, METH_VARARGS, NULL },
  { (char *) "strings", py_guestfs_strings, METH_VARARGS, NULL },
  { (char *) "strings_e", py_guestfs_strings_e, METH_VARARGS, NULL },
  { (char *) "hexdump", py_guestfs_hexdump, METH_VARARGS, NULL },
  { (char *) "zerofree", py_guestfs_zerofree, METH_VARARGS, NULL },
  { (char *) "pvresize", py_guestfs_pvresize, METH_VARARGS, NULL },
  { (char *) "sfdisk_N", py_guestfs_sfdisk_N, METH_VARARGS, NULL },
  { (char *) "sfdisk_l", py_guestfs_sfdisk_l, METH_VARARGS, NULL },
  { (char *) "sfdisk_kernel_geometry", py_guestfs_sfdisk_kernel_geometry, METH_VARARGS, NULL },
  { (char *) "sfdisk_disk_geometry", py_guestfs_sfdisk_disk_geometry, METH_VARARGS, NULL },
  { (char *) "vg_activate_all", py_guestfs_vg_activate_all, METH_VARARGS, NULL },
  { (char *) "vg_activate", py_guestfs_vg_activate, METH_VARARGS, NULL },
  { (char *) "lvresize", py_guestfs_lvresize, METH_VARARGS, NULL },
  { (char *) "resize2fs", py_guestfs_resize2fs, METH_VARARGS, NULL },
  { (char *) "find", py_guestfs_find, METH_VARARGS, NULL },
  { (char *) "e2fsck_f", py_guestfs_e2fsck_f, METH_VARARGS, NULL },
  { (char *) "sleep", py_guestfs_sleep, METH_VARARGS, NULL },
  { (char *) "ntfs_3g_probe", py_guestfs_ntfs_3g_probe, METH_VARARGS, NULL },
  { (char *) "sh", py_guestfs_sh, METH_VARARGS, NULL },
  { (char *) "sh_lines", py_guestfs_sh_lines, METH_VARARGS, NULL },
  { (char *) "glob_expand", py_guestfs_glob_expand, METH_VARARGS, NULL },
  { (char *) "scrub_device", py_guestfs_scrub_device, METH_VARARGS, NULL },
  { (char *) "scrub_file", py_guestfs_scrub_file, METH_VARARGS, NULL },
  { (char *) "scrub_freespace", py_guestfs_scrub_freespace, METH_VARARGS, NULL },
  { (char *) "mkdtemp", py_guestfs_mkdtemp, METH_VARARGS, NULL },
  { (char *) "wc_l", py_guestfs_wc_l, METH_VARARGS, NULL },
  { (char *) "wc_w", py_guestfs_wc_w, METH_VARARGS, NULL },
  { (char *) "wc_c", py_guestfs_wc_c, METH_VARARGS, NULL },
  { (char *) "head", py_guestfs_head, METH_VARARGS, NULL },
  { (char *) "head_n", py_guestfs_head_n, METH_VARARGS, NULL },
  { (char *) "tail", py_guestfs_tail, METH_VARARGS, NULL },
  { (char *) "tail_n", py_guestfs_tail_n, METH_VARARGS, NULL },
  { (char *) "df", py_guestfs_df, METH_VARARGS, NULL },
  { (char *) "df_h", py_guestfs_df_h, METH_VARARGS, NULL },
  { (char *) "du", py_guestfs_du, METH_VARARGS, NULL },
  { (char *) "initrd_list", py_guestfs_initrd_list, METH_VARARGS, NULL },
  { (char *) "mount_loop", py_guestfs_mount_loop, METH_VARARGS, NULL },
  { (char *) "mkswap", py_guestfs_mkswap, METH_VARARGS, NULL },
  { (char *) "mkswap_L", py_guestfs_mkswap_L, METH_VARARGS, NULL },
  { (char *) "mkswap_U", py_guestfs_mkswap_U, METH_VARARGS, NULL },
  { (char *) "mknod", py_guestfs_mknod, METH_VARARGS, NULL },
  { (char *) "mkfifo", py_guestfs_mkfifo, METH_VARARGS, NULL },
  { (char *) "mknod_b", py_guestfs_mknod_b, METH_VARARGS, NULL },
  { (char *) "mknod_c", py_guestfs_mknod_c, METH_VARARGS, NULL },
  { (char *) "umask", py_guestfs_umask, METH_VARARGS, NULL },
  { (char *) "readdir", py_guestfs_readdir, METH_VARARGS, NULL },
  { (char *) "sfdiskM", py_guestfs_sfdiskM, METH_VARARGS, NULL },
  { (char *) "zfile", py_guestfs_zfile, METH_VARARGS, NULL },
  { (char *) "getxattrs", py_guestfs_getxattrs, METH_VARARGS, NULL },
  { (char *) "lgetxattrs", py_guestfs_lgetxattrs, METH_VARARGS, NULL },
  { (char *) "setxattr", py_guestfs_setxattr, METH_VARARGS, NULL },
  { (char *) "lsetxattr", py_guestfs_lsetxattr, METH_VARARGS, NULL },
  { (char *) "removexattr", py_guestfs_removexattr, METH_VARARGS, NULL },
  { (char *) "lremovexattr", py_guestfs_lremovexattr, METH_VARARGS, NULL },
  { (char *) "mountpoints", py_guestfs_mountpoints, METH_VARARGS, NULL },
  { (char *) "mkmountpoint", py_guestfs_mkmountpoint, METH_VARARGS, NULL },
  { (char *) "rmmountpoint", py_guestfs_rmmountpoint, METH_VARARGS, NULL },
  { (char *) "read_file", py_guestfs_read_file, METH_VARARGS, NULL },
  { (char *) "grep", py_guestfs_grep, METH_VARARGS, NULL },
  { (char *) "egrep", py_guestfs_egrep, METH_VARARGS, NULL },
  { (char *) "fgrep", py_guestfs_fgrep, METH_VARARGS, NULL },
  { (char *) "grepi", py_guestfs_grepi, METH_VARARGS, NULL },
  { (char *) "egrepi", py_guestfs_egrepi, METH_VARARGS, NULL },
  { (char *) "fgrepi", py_guestfs_fgrepi, METH_VARARGS, NULL },
  { (char *) "zgrep", py_guestfs_zgrep, METH_VARARGS, NULL },
  { (char *) "zegrep", py_guestfs_zegrep, METH_VARARGS, NULL },
  { (char *) "zfgrep", py_guestfs_zfgrep, METH_VARARGS, NULL },
  { (char *) "zgrepi", py_guestfs_zgrepi, METH_VARARGS, NULL },
  { (char *) "zegrepi", py_guestfs_zegrepi, METH_VARARGS, NULL },
  { (char *) "zfgrepi", py_guestfs_zfgrepi, METH_VARARGS, NULL },
  { (char *) "realpath", py_guestfs_realpath, METH_VARARGS, NULL },
  { (char *) "ln", py_guestfs_ln, METH_VARARGS, NULL },
  { (char *) "ln_f", py_guestfs_ln_f, METH_VARARGS, NULL },
  { (char *) "ln_s", py_guestfs_ln_s, METH_VARARGS, NULL },
  { (char *) "ln_sf", py_guestfs_ln_sf, METH_VARARGS, NULL },
  { (char *) "readlink", py_guestfs_readlink, METH_VARARGS, NULL },
  { (char *) "fallocate", py_guestfs_fallocate, METH_VARARGS, NULL },
  { (char *) "swapon_device", py_guestfs_swapon_device, METH_VARARGS, NULL },
  { (char *) "swapoff_device", py_guestfs_swapoff_device, METH_VARARGS, NULL },
  { (char *) "swapon_file", py_guestfs_swapon_file, METH_VARARGS, NULL },
  { (char *) "swapoff_file", py_guestfs_swapoff_file, METH_VARARGS, NULL },
  { (char *) "swapon_label", py_guestfs_swapon_label, METH_VARARGS, NULL },
  { (char *) "swapoff_label", py_guestfs_swapoff_label, METH_VARARGS, NULL },
  { (char *) "swapon_uuid", py_guestfs_swapon_uuid, METH_VARARGS, NULL },
  { (char *) "swapoff_uuid", py_guestfs_swapoff_uuid, METH_VARARGS, NULL },
  { (char *) "mkswap_file", py_guestfs_mkswap_file, METH_VARARGS, NULL },
  { (char *) "inotify_init", py_guestfs_inotify_init, METH_VARARGS, NULL },
  { (char *) "inotify_add_watch", py_guestfs_inotify_add_watch, METH_VARARGS, NULL },
  { (char *) "inotify_rm_watch", py_guestfs_inotify_rm_watch, METH_VARARGS, NULL },
  { (char *) "inotify_read", py_guestfs_inotify_read, METH_VARARGS, NULL },
  { (char *) "inotify_files", py_guestfs_inotify_files, METH_VARARGS, NULL },
  { (char *) "inotify_close", py_guestfs_inotify_close, METH_VARARGS, NULL },
  { (char *) "setcon", py_guestfs_setcon, METH_VARARGS, NULL },
  { (char *) "getcon", py_guestfs_getcon, METH_VARARGS, NULL },
  { (char *) "mkfs_b", py_guestfs_mkfs_b, METH_VARARGS, NULL },
  { (char *) "mke2journal", py_guestfs_mke2journal, METH_VARARGS, NULL },
  { (char *) "mke2journal_L", py_guestfs_mke2journal_L, METH_VARARGS, NULL },
  { (char *) "mke2journal_U", py_guestfs_mke2journal_U, METH_VARARGS, NULL },
  { (char *) "mke2fs_J", py_guestfs_mke2fs_J, METH_VARARGS, NULL },
  { (char *) "mke2fs_JL", py_guestfs_mke2fs_JL, METH_VARARGS, NULL },
  { (char *) "mke2fs_JU", py_guestfs_mke2fs_JU, METH_VARARGS, NULL },
  { (char *) "modprobe", py_guestfs_modprobe, METH_VARARGS, NULL },
  { (char *) "echo_daemon", py_guestfs_echo_daemon, METH_VARARGS, NULL },
  { (char *) "find0", py_guestfs_find0, METH_VARARGS, NULL },
  { (char *) "case_sensitive_path", py_guestfs_case_sensitive_path, METH_VARARGS, NULL },
  { (char *) "vfs_type", py_guestfs_vfs_type, METH_VARARGS, NULL },
  { (char *) "truncate", py_guestfs_truncate, METH_VARARGS, NULL },
  { (char *) "truncate_size", py_guestfs_truncate_size, METH_VARARGS, NULL },
  { (char *) "utimens", py_guestfs_utimens, METH_VARARGS, NULL },
  { (char *) "mkdir_mode", py_guestfs_mkdir_mode, METH_VARARGS, NULL },
  { (char *) "lchown", py_guestfs_lchown, METH_VARARGS, NULL },
  { (char *) "lstatlist", py_guestfs_lstatlist, METH_VARARGS, NULL },
  { (char *) "lxattrlist", py_guestfs_lxattrlist, METH_VARARGS, NULL },
  { (char *) "readlinklist", py_guestfs_readlinklist, METH_VARARGS, NULL },
  { (char *) "pread", py_guestfs_pread, METH_VARARGS, NULL },
  { (char *) "part_init", py_guestfs_part_init, METH_VARARGS, NULL },
  { (char *) "part_add", py_guestfs_part_add, METH_VARARGS, NULL },
  { (char *) "part_disk", py_guestfs_part_disk, METH_VARARGS, NULL },
  { (char *) "part_set_bootable", py_guestfs_part_set_bootable, METH_VARARGS, NULL },
  { (char *) "part_set_name", py_guestfs_part_set_name, METH_VARARGS, NULL },
  { (char *) "part_list", py_guestfs_part_list, METH_VARARGS, NULL },
  { (char *) "part_get_parttype", py_guestfs_part_get_parttype, METH_VARARGS, NULL },
  { (char *) "fill", py_guestfs_fill, METH_VARARGS, NULL },
  { (char *) "available", py_guestfs_available, METH_VARARGS, NULL },
  { (char *) "dd", py_guestfs_dd, METH_VARARGS, NULL },
  { (char *) "filesize", py_guestfs_filesize, METH_VARARGS, NULL },
  { (char *) "lvrename", py_guestfs_lvrename, METH_VARARGS, NULL },
  { (char *) "vgrename", py_guestfs_vgrename, METH_VARARGS, NULL },
  { (char *) "initrd_cat", py_guestfs_initrd_cat, METH_VARARGS, NULL },
  { NULL, NULL, 0, NULL }
};

void
initlibguestfsmod (void)
{
  static int initialized = 0;

  if (initialized) return;
  Py_InitModule ((char *) "libguestfsmod", methods);
  initialized = 1;
}
