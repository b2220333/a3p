/* Generated code for Python source for module 'direct.gui.DirectGui'
 * created by Nuitka version 0.5.26
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_direct$gui$DirectGui is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$gui$DirectGui;
PyDictObject *moduledict_direct$gui$DirectGui;

/* The module constants used, if any. */
extern PyObject *const_str_plain_DirectDialog;
extern PyObject *const_str_plain_DirectEntry;
extern PyObject *const_str_digest_96d3e6c5696e4dd82f00af6da2bbb6b5;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_DirectFrame;
static PyObject *const_str_digest_8f30b06e01d61753a7cf5a9d87f1872d;
extern PyObject *const_str_plain_DirectWaitBar;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_0164b08bd315f47da13942ef3371781d;
extern PyObject *const_str_plain_OnscreenImage;
static PyObject *const_str_plain_DirectGui;
extern PyObject *const_str_plain_DirectScrolledList;
extern PyObject *const_str_plain_OnscreenGeom;
extern PyObject *const_str_plain_DirectScrollBar;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_DirectGuiGlobals_tuple;
extern PyObject *const_str_plain_DirectRadioButton;
extern PyObject *const_str_plain_OnscreenText;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_DirectButton;
extern PyObject *const_str_plain_DirectScrolledFrame;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_DirectCheckButton;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_DirectGuiGlobals;
extern PyObject *const_str_plain_DirectEntryScroll;
extern PyObject *const_str_plain_DirectOptionMenu;
extern PyObject *const_str_plain_DirectLabel;
extern PyObject *const_str_plain_DGG;
extern PyObject *const_str_plain_DirectSlider;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8f30b06e01d61753a7cf5a9d87f1872d = UNSTREAM_STRING( &constant_bin[ 71036 ], 23, 0 );
    const_str_digest_0164b08bd315f47da13942ef3371781d = UNSTREAM_STRING( &constant_bin[ 71059 ], 39, 0 );
    const_str_plain_DirectGui = UNSTREAM_STRING( &constant_bin[ 34622 ], 9, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$gui$DirectGui( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f115ac639666231e005d2d57c69a9522;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8f30b06e01d61753a7cf5a9d87f1872d );
    codeobj_f115ac639666231e005d2d57c69a9522 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DirectGui, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$gui$DirectGui =
{
    PyModuleDef_HEAD_INIT,
    "direct.gui.DirectGui",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( direct$gui$DirectGui )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$gui$DirectGui );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.gui.DirectGui: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.gui.DirectGui: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$gui$DirectGui" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$gui$DirectGui = Py_InitModule4(
        "direct.gui.DirectGui",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$gui$DirectGui = PyModule_Create( &mdef_direct$gui$DirectGui );
#endif

    moduledict_direct$gui$DirectGui = (PyDictObject *)((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;

    CHECK_OBJECT( module_direct$gui$DirectGui );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_96d3e6c5696e4dd82f00af6da2bbb6b5, module_direct$gui$DirectGui );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$gui$DirectGui );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
    PyObject *tmp_star_imported_8;
    PyObject *tmp_star_imported_9;
    PyObject *tmp_star_imported_10;
    PyObject *tmp_star_imported_11;
    PyObject *tmp_star_imported_12;
    PyObject *tmp_star_imported_13;
    PyObject *tmp_star_imported_14;
    PyObject *tmp_star_imported_15;
    PyObject *tmp_star_imported_16;
    PyObject *tmp_star_imported_17;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_0164b08bd315f47da13942ef3371781d;
    UPDATE_STRING_DICT0( moduledict_direct$gui$DirectGui, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$gui$DirectGui, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_f115ac639666231e005d2d57c69a9522, module_direct$gui$DirectGui );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_DirectGuiGlobals_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_DirectGuiGlobals );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$gui$DirectGui, (Nuitka_StringObject *)const_str_plain_DGG, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_OnscreenText;
    tmp_globals_name_2 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_2 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 4;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_name_name_3 = const_str_plain_OnscreenGeom;
    tmp_globals_name_3 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_3 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 5;
    tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_name_name_4 = const_str_plain_OnscreenImage;
    tmp_globals_name_4 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_4 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_4 = const_tuple_str_chr_42_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 6;
    tmp_star_imported_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_name_name_5 = const_str_plain_DirectFrame;
    tmp_globals_name_5 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_5 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_5 = const_tuple_str_chr_42_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 15;
    tmp_star_imported_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_4 );
    Py_DECREF( tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_name_name_6 = const_str_plain_DirectButton;
    tmp_globals_name_6 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_6 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_6 = const_tuple_str_chr_42_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 16;
    tmp_star_imported_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_5 );
    Py_DECREF( tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_name_name_7 = const_str_plain_DirectEntry;
    tmp_globals_name_7 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_7 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 17;
    tmp_star_imported_6 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_6 );
    Py_DECREF( tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_name_name_8 = const_str_plain_DirectEntryScroll;
    tmp_globals_name_8 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_8 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_8 = const_tuple_str_chr_42_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 18;
    tmp_star_imported_7 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_7 );
    Py_DECREF( tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_name_name_9 = const_str_plain_DirectLabel;
    tmp_globals_name_9 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_9 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_9 = const_tuple_str_chr_42_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 19;
    tmp_star_imported_8 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_8 );
    Py_DECREF( tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_name_name_10 = const_str_plain_DirectScrolledList;
    tmp_globals_name_10 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_10 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_10 = const_tuple_str_chr_42_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 20;
    tmp_star_imported_9 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_star_imported_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_9 );
    Py_DECREF( tmp_star_imported_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_name_name_11 = const_str_plain_DirectDialog;
    tmp_globals_name_11 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_11 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_11 = const_tuple_str_chr_42_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 21;
    tmp_star_imported_10 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_star_imported_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_10 );
    Py_DECREF( tmp_star_imported_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_name_name_12 = const_str_plain_DirectWaitBar;
    tmp_globals_name_12 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_12 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_12 = const_tuple_str_chr_42_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 22;
    tmp_star_imported_11 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_star_imported_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_11 );
    Py_DECREF( tmp_star_imported_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_name_name_13 = const_str_plain_DirectSlider;
    tmp_globals_name_13 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_13 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_13 = const_tuple_str_chr_42_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 23;
    tmp_star_imported_12 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_star_imported_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_12 );
    Py_DECREF( tmp_star_imported_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_name_name_14 = const_str_plain_DirectScrollBar;
    tmp_globals_name_14 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_14 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_14 = const_tuple_str_chr_42_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 24;
    tmp_star_imported_13 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_star_imported_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_13 );
    Py_DECREF( tmp_star_imported_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_name_name_15 = const_str_plain_DirectScrolledFrame;
    tmp_globals_name_15 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_15 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_15 = const_tuple_str_chr_42_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 25;
    tmp_star_imported_14 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_star_imported_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_14 );
    Py_DECREF( tmp_star_imported_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_name_name_16 = const_str_plain_DirectCheckButton;
    tmp_globals_name_16 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_16 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_16 = const_tuple_str_chr_42_tuple;
    tmp_level_name_16 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 26;
    tmp_star_imported_15 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_star_imported_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_15 );
    Py_DECREF( tmp_star_imported_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_name_name_17 = const_str_plain_DirectOptionMenu;
    tmp_globals_name_17 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_17 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_17 = const_tuple_str_chr_42_tuple;
    tmp_level_name_17 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 27;
    tmp_star_imported_16 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_star_imported_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_16 );
    Py_DECREF( tmp_star_imported_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_name_name_18 = const_str_plain_DirectRadioButton;
    tmp_globals_name_18 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_locals_name_18 = ((PyModuleObject *)module_direct$gui$DirectGui)->md_dict;
    tmp_fromlist_name_18 = const_tuple_str_chr_42_tuple;
    tmp_level_name_18 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 28;
    tmp_star_imported_17 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_star_imported_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$gui$DirectGui, true, tmp_star_imported_17 );
    Py_DECREF( tmp_star_imported_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_module->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_module, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_direct$gui$DirectGui );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
