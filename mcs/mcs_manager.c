/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 6 "mcs_manager.override"
#include "pygobject.h"
#include <gtk/gtk.h>
#include <libxfce4mcs/mcs-client.h> /* or: manager */

#line 13 "mcs_manager.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */


/* ----------- functions ----------- */

PyMethodDef pymcs_manager_functions[] = {
    { NULL, NULL, 0 }
};

/* initialise stuff extension classes */
void
pymcs_manager_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        PyObject *moddict = PyModule_GetDict(module);

        _PyGObject_Type = (PyTypeObject *)PyDict_GetItemString(moddict, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return;
    }


#line 52 "mcs_manager.c"
}