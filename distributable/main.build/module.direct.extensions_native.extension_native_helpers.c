/* Generated code for Python source for module 'direct.extensions_native.extension_native_helpers'
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

/* The _module_direct$extensions_native$extension_native_helpers is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$extensions_native$extension_native_helpers;
PyDictObject *moduledict_direct$extensions_native$extension_native_helpers;

/* The module constants used, if any. */
static PyObject *const_str_plain_im_func;
static PyObject *const_str_plain_method_name;
static PyObject *const_str_digest_fc4de24566765d244d222aab087ddefa;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_plain_Dtool_ObjectToDict;
static PyObject *const_list_str_plain_Dtool_ObjectToDict_str_plain_Dtool_funcToMethod_list;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_30d37d4e5576163513601db418a2b32a;
static PyObject *const_str_plain_im_class;
static PyObject *const_tuple_str_plain_cls_str_plain_name_str_plain_obj_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___func__;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_im_self;
static PyObject *const_str_digest_2b3682dbababcb3ddfb5e771031ff306;
extern PyObject *const_str_plain___self__;
extern PyObject *const_str_plain_DtoolClassDict;
extern PyObject *const_str_plain_Dtool_funcToMethod;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_func;
extern PyObject *const_int_0;
extern PyObject *const_tuple_int_pos_3_int_0_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_plain_func_str_plain_cls_str_plain_method_name_tuple;
extern PyObject *const_int_pos_3;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_im_func = UNSTREAM_STRING( &constant_bin[ 50042 ], 7, 1 );
    const_str_plain_method_name = UNSTREAM_STRING( &constant_bin[ 50049 ], 11, 1 );
    const_str_digest_fc4de24566765d244d222aab087ddefa = UNSTREAM_STRING( &constant_bin[ 50060 ], 52, 0 );
    const_str_plain_Dtool_ObjectToDict = UNSTREAM_STRING( &constant_bin[ 50112 ], 18, 1 );
    const_list_str_plain_Dtool_ObjectToDict_str_plain_Dtool_funcToMethod_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_Dtool_ObjectToDict_str_plain_Dtool_funcToMethod_list, 0, const_str_plain_Dtool_ObjectToDict ); Py_INCREF( const_str_plain_Dtool_ObjectToDict );
    PyList_SET_ITEM( const_list_str_plain_Dtool_ObjectToDict_str_plain_Dtool_funcToMethod_list, 1, const_str_plain_Dtool_funcToMethod ); Py_INCREF( const_str_plain_Dtool_funcToMethod );
    const_str_digest_30d37d4e5576163513601db418a2b32a = UNSTREAM_STRING( &constant_bin[ 50130 ], 49, 0 );
    const_str_plain_im_class = UNSTREAM_STRING( &constant_bin[ 50179 ], 8, 1 );
    const_tuple_str_plain_cls_str_plain_name_str_plain_obj_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_name_str_plain_obj_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_name_str_plain_obj_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_name_str_plain_obj_tuple, 2, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    const_str_plain_im_self = UNSTREAM_STRING( &constant_bin[ 50187 ], 7, 1 );
    const_str_digest_2b3682dbababcb3ddfb5e771031ff306 = UNSTREAM_STRING( &constant_bin[ 50194 ], 182, 0 );
    const_tuple_str_plain_func_str_plain_cls_str_plain_method_name_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_cls_str_plain_method_name_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_cls_str_plain_method_name_tuple, 1, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_cls_str_plain_method_name_tuple, 2, const_str_plain_method_name ); Py_INCREF( const_str_plain_method_name );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$extensions_native$extension_native_helpers( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_34bed644e32d5f18958134a68f9b9591;
static PyCodeObject *codeobj_7487d663af9bfa2ed2aef7077b229480;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_fc4de24566765d244d222aab087ddefa );
    codeobj_34bed644e32d5f18958134a68f9b9591 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Dtool_ObjectToDict, 5, const_tuple_str_plain_cls_str_plain_name_str_plain_obj_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7487d663af9bfa2ed2aef7077b229480 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Dtool_funcToMethod, 8, const_tuple_str_plain_func_str_plain_cls_str_plain_method_name_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_direct$extensions_native$extension_native_helpers$$$function_1_Dtool_ObjectToDict(  );


static PyObject *MAKE_FUNCTION_direct$extensions_native$extension_native_helpers$$$function_2_Dtool_funcToMethod( PyObject *defaults );


// The module function definitions.
static PyObject *impl_direct$extensions_native$extension_native_helpers$$$function_1_Dtool_ObjectToDict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_obj = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_34bed644e32d5f18958134a68f9b9591, module_direct$extensions_native$extension_native_helpers, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_ass_subvalue_1 = par_obj;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DtoolClassDict );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = par_name;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_cls, par_name, par_obj );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$extensions_native$extension_native_helpers$$$function_1_Dtool_ObjectToDict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$extensions_native$extension_native_helpers$$$function_1_Dtool_ObjectToDict );
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


static PyObject *impl_direct$extensions_native$extension_native_helpers$$$function_2_Dtool_funcToMethod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_cls = python_pars[ 1 ];
    PyObject *par_method_name = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7487d663af9bfa2ed2aef7077b229480, module_direct$extensions_native$extension_native_helpers, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$extensions_native$extension_native_helpers, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 11;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_int_pos_3_int_0_tuple;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 11;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = par_cls;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_func;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_im_class, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_func;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_func;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_im_func, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_func;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_im_self, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_assattr_name_4 = par_func;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_func;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain___func__, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = Py_None;
    tmp_assattr_target_5 = par_func;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain___self__, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = par_method_name;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_func;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_method_name;
        assert( old != NULL );
        par_method_name = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_ass_subvalue_1 = par_func;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_3 = par_cls;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DtoolClassDict );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = par_method_name;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_func, par_cls, par_method_name );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$extensions_native$extension_native_helpers$$$function_2_Dtool_funcToMethod );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_method_name );
    Py_DECREF( par_method_name );
    par_method_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_method_name );
    par_method_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$extensions_native$extension_native_helpers$$$function_2_Dtool_funcToMethod );
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



static PyObject *MAKE_FUNCTION_direct$extensions_native$extension_native_helpers$$$function_1_Dtool_ObjectToDict(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$extension_native_helpers$$$function_1_Dtool_ObjectToDict,
        const_str_plain_Dtool_ObjectToDict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_34bed644e32d5f18958134a68f9b9591,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$extensions_native$extension_native_helpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$extensions_native$extension_native_helpers$$$function_2_Dtool_funcToMethod( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$extensions_native$extension_native_helpers$$$function_2_Dtool_funcToMethod,
        const_str_plain_Dtool_funcToMethod,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7487d663af9bfa2ed2aef7077b229480,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$extensions_native$extension_native_helpers,
        const_str_digest_2b3682dbababcb3ddfb5e771031ff306,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$extensions_native$extension_native_helpers =
{
    PyModuleDef_HEAD_INIT,
    "direct.extensions_native.extension_native_helpers",   /* m_name */
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

MOD_INIT_DECL( direct$extensions_native$extension_native_helpers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$extensions_native$extension_native_helpers );
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
    puts("direct.extensions_native.extension_native_helpers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.extensions_native.extension_native_helpers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$extensions_native$extension_native_helpers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$extensions_native$extension_native_helpers = Py_InitModule4(
        "direct.extensions_native.extension_native_helpers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$extensions_native$extension_native_helpers = PyModule_Create( &mdef_direct$extensions_native$extension_native_helpers );
#endif

    moduledict_direct$extensions_native$extension_native_helpers = (PyDictObject *)((PyModuleObject *)module_direct$extensions_native$extension_native_helpers)->md_dict;

    CHECK_OBJECT( module_direct$extensions_native$extension_native_helpers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_30d37d4e5576163513601db418a2b32a, module_direct$extensions_native$extension_native_helpers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$extensions_native$extension_native_helpers );

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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_direct$extensions_native$extension_native_helpers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$extensions_native$extension_native_helpers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_Dtool_ObjectToDict_str_plain_Dtool_funcToMethod_list );
    UPDATE_STRING_DICT1( moduledict_direct$extensions_native$extension_native_helpers, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$extensions_native$extension_native_helpers)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_direct$extensions_native$extension_native_helpers, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    tmp_assign_source_5 = MAKE_FUNCTION_direct$extensions_native$extension_native_helpers$$$function_1_Dtool_ObjectToDict(  );
    UPDATE_STRING_DICT1( moduledict_direct$extensions_native$extension_native_helpers, (Nuitka_StringObject *)const_str_plain_Dtool_ObjectToDict, tmp_assign_source_5 );
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_6 = MAKE_FUNCTION_direct$extensions_native$extension_native_helpers$$$function_2_Dtool_funcToMethod( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_direct$extensions_native$extension_native_helpers, (Nuitka_StringObject *)const_str_plain_Dtool_funcToMethod, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_direct$extensions_native$extension_native_helpers );
}
