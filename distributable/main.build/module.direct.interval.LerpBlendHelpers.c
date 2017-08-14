/* Generated code for Python source for module 'direct.interval.LerpBlendHelpers'
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

/* The _module_direct$interval$LerpBlendHelpers is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$interval$LerpBlendHelpers;
PyDictObject *moduledict_direct$interval$LerpBlendHelpers;

/* The module constants used, if any. */
static PyObject *const_str_digest_927ea398cdf6256d62f9201137030443;
static PyObject *const_str_digest_1c0d3fee29d11bc0c7e39283fb09f398;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain_EaseInOutBlendType;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_blendType_tuple;
static PyObject *const_str_digest_043b27f856b7cd143cfdb889d9da942e;
static PyObject *const_str_plain_easeInOut;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_EaseOutBlendType;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_c07076d8bfa0010e485f0fb75fc700fb;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_NoBlendType;
static PyObject *const_str_plain_EaseInBlendType;
static PyObject *const_str_plain_easeOut;
extern PyObject *const_str_digest_89b460296e7ca3625b60e1c649d47260;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_blendType;
static PyObject *const_str_plain_easeIn;
static PyObject *const_str_digest_37f9fe35de56172b954622be51cf280a;
static PyObject *const_list_str_plain_getBlend_list;
extern PyObject *const_str_plain_getBlend;
extern PyObject *const_str_plain_noBlend;
extern PyObject *const_str_plain_LerpBlendHelpers;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_927ea398cdf6256d62f9201137030443 = UNSTREAM_STRING( &constant_bin[ 98606 ], 35, 0 );
    const_str_digest_1c0d3fee29d11bc0c7e39283fb09f398 = UNSTREAM_STRING( &constant_bin[ 98641 ], 56, 0 );
    const_str_plain_EaseInOutBlendType = UNSTREAM_STRING( &constant_bin[ 98697 ], 18, 1 );
    const_tuple_str_plain_blendType_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_blendType_tuple, 0, const_str_plain_blendType ); Py_INCREF( const_str_plain_blendType );
    const_str_digest_043b27f856b7cd143cfdb889d9da942e = UNSTREAM_STRING( &constant_bin[ 98715 ], 50, 0 );
    const_str_plain_easeInOut = UNSTREAM_STRING( &constant_bin[ 98765 ], 9, 1 );
    const_str_plain_EaseOutBlendType = UNSTREAM_STRING( &constant_bin[ 98774 ], 16, 1 );
    const_str_digest_c07076d8bfa0010e485f0fb75fc700fb = UNSTREAM_STRING( &constant_bin[ 98790 ], 32, 0 );
    const_str_plain_NoBlendType = UNSTREAM_STRING( &constant_bin[ 98822 ], 11, 1 );
    const_str_plain_EaseInBlendType = UNSTREAM_STRING( &constant_bin[ 98833 ], 15, 1 );
    const_str_plain_easeOut = UNSTREAM_STRING( &constant_bin[ 98848 ], 7, 1 );
    const_str_plain_easeIn = UNSTREAM_STRING( &constant_bin[ 98765 ], 6, 1 );
    const_str_digest_37f9fe35de56172b954622be51cf280a = UNSTREAM_STRING( &constant_bin[ 98855 ], 70, 0 );
    const_list_str_plain_getBlend_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_getBlend_list, 0, const_str_plain_getBlend ); Py_INCREF( const_str_plain_getBlend );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$interval$LerpBlendHelpers( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4c21ad69f4a90de51cc64f230e878b79;
static PyCodeObject *codeobj_a46ac60a2c8a1941100d4ecbb4d15542;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_927ea398cdf6256d62f9201137030443 );
    codeobj_4c21ad69f4a90de51cc64f230e878b79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LerpBlendHelpers, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_a46ac60a2c8a1941100d4ecbb4d15542 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getBlend, 18, const_tuple_str_plain_blendType_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_direct$interval$LerpBlendHelpers$$$function_1_getBlend(  );


// The module function definitions.
static PyObject *impl_direct$interval$LerpBlendHelpers$$$function_1_getBlend( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_blendType = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a46ac60a2c8a1941100d4ecbb4d15542, module_direct$interval$LerpBlendHelpers, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_blendType;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_str_plain_easeIn;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_easeIn );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_easeIn );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "easeIn" );
        exception_tb = NULL;

        exception_lineno = 24;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_blendType;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_str_plain_easeOut;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_easeOut );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_easeOut );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "easeOut" );
        exception_tb = NULL;

        exception_lineno = 26;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = par_blendType;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_str_plain_easeInOut;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_easeInOut );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_easeInOut );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "easeInOut" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_4 = par_blendType;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_str_plain_noBlend;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_noBlend );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_noBlend );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "noBlend" );
        exception_tb = NULL;

        exception_lineno = 30;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_make_exception_arg_1 = const_str_digest_043b27f856b7cd143cfdb889d9da942e;
    frame_function->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 32;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "o";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_function->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_function, exception_lineno );
    }

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_blendType );

    // Release cached frame.
    if ( frame_function == cache_frame_function )
    {
        Py_DECREF( frame_function );
    }
    cache_frame_function = NULL;

    assertFrameObject( frame_function );


    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$interval$LerpBlendHelpers$$$function_1_getBlend );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_blendType );
    Py_DECREF( par_blendType );
    par_blendType = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_blendType );
    Py_DECREF( par_blendType );
    par_blendType = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$interval$LerpBlendHelpers$$$function_1_getBlend );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_direct$interval$LerpBlendHelpers$$$function_1_getBlend(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$interval$LerpBlendHelpers$$$function_1_getBlend,
        const_str_plain_getBlend,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a46ac60a2c8a1941100d4ecbb4d15542,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$interval$LerpBlendHelpers,
        const_str_digest_37f9fe35de56172b954622be51cf280a,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$interval$LerpBlendHelpers =
{
    PyModuleDef_HEAD_INIT,
    "direct.interval.LerpBlendHelpers",   /* m_name */
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

MOD_INIT_DECL( direct$interval$LerpBlendHelpers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$interval$LerpBlendHelpers );
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
    puts("direct.interval.LerpBlendHelpers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.interval.LerpBlendHelpers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$interval$LerpBlendHelpers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$interval$LerpBlendHelpers = Py_InitModule4(
        "direct.interval.LerpBlendHelpers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$interval$LerpBlendHelpers = PyModule_Create( &mdef_direct$interval$LerpBlendHelpers );
#endif

    moduledict_direct$interval$LerpBlendHelpers = (PyDictObject *)((PyModuleObject *)module_direct$interval$LerpBlendHelpers)->md_dict;

    CHECK_OBJECT( module_direct$interval$LerpBlendHelpers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c07076d8bfa0010e485f0fb75fc700fb, module_direct$interval$LerpBlendHelpers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$interval$LerpBlendHelpers );

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
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_1c0d3fee29d11bc0c7e39283fb09f398;
    UPDATE_STRING_DICT0( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_getBlend_list );
    UPDATE_STRING_DICT1( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_4c21ad69f4a90de51cc64f230e878b79, module_direct$interval$LerpBlendHelpers );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_89b460296e7ca3625b60e1c649d47260;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$interval$LerpBlendHelpers)->md_dict;
    tmp_locals_name_1 = ((PyModuleObject *)module_direct$interval$LerpBlendHelpers)->md_dict;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    frame_module->m_frame.f_lineno = 5;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$interval$LerpBlendHelpers, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_EaseInBlendType );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EaseInBlendType );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EaseInBlendType" );
        exception_tb = NULL;

        exception_lineno = 9;

        goto frame_exception_exit_1;
    }

    frame_module->m_frame.f_lineno = 9;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_easeIn, tmp_assign_source_4 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_EaseOutBlendType );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EaseOutBlendType );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EaseOutBlendType" );
        exception_tb = NULL;

        exception_lineno = 11;

        goto frame_exception_exit_1;
    }

    frame_module->m_frame.f_lineno = 11;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_easeOut, tmp_assign_source_5 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_EaseInOutBlendType );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EaseInOutBlendType );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "EaseInOutBlendType" );
        exception_tb = NULL;

        exception_lineno = 13;

        goto frame_exception_exit_1;
    }

    frame_module->m_frame.f_lineno = 13;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_easeInOut, tmp_assign_source_6 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_NoBlendType );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoBlendType );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "NoBlendType" );
        exception_tb = NULL;

        exception_lineno = 15;

        goto frame_exception_exit_1;
    }

    frame_module->m_frame.f_lineno = 15;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_noBlend, tmp_assign_source_7 );

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
    tmp_assign_source_8 = MAKE_FUNCTION_direct$interval$LerpBlendHelpers$$$function_1_getBlend(  );
    UPDATE_STRING_DICT1( moduledict_direct$interval$LerpBlendHelpers, (Nuitka_StringObject *)const_str_plain_getBlend, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_direct$interval$LerpBlendHelpers );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
