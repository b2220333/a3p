/* Generated code for Python source for module 'direct.distributed.PyDatagram'
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

/* The _module_direct$distributed$PyDatagram is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$distributed$PyDatagram;
PyDictObject *moduledict_direct$distributed$PyDatagram;

/* The module constants used, if any. */
extern PyObject *const_str_digest_4314234708fbc134069947f7a4708b23;
static PyObject *const_str_plain_channel;
extern PyObject *const_str_plain_STUint32;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_addFunc;
static PyObject *const_str_plain_Datagram;
extern PyObject *const_str_plain_STInt32array;
static PyObject *const_str_plain_addServerHeader;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_48cceaf76360b603bcbed2e78ebccaf0;
static PyObject *const_tuple_7e679536572ae75f7b306d5124d8de08_tuple;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_addChannel;
static PyObject *const_str_digest_a588886a2190f15186cdb3e844b53ed4;
extern PyObject *const_str_plain_addInt8;
extern PyObject *const_str_plain_STUint16;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_STInt8;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_STInt8array;
extern PyObject *const_str_plain_addInt16;
extern PyObject *const_str_plain_STInt32;
static PyObject *const_str_plain_addFloat64;
extern PyObject *const_str_plain_STInt16;
extern PyObject *const_str_digest_72f8f399b1660646213868132229411b;
static PyObject *const_str_plain_addUint64;
extern PyObject *const_str_plain_STBlob;
extern PyObject *const_str_plain_STUint32uint8array;
extern PyObject *const_str_plain_subatomicType;
extern PyObject *const_str_plain_round;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_STUint8;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_addString;
extern PyObject *const_str_plain_code;
static PyObject *const_str_plain_funcSpecs;
static PyObject *const_str_plain_addString32;
extern PyObject *const_str_plain_STUint8array;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_argFunc;
extern PyObject *const_str_plain_STUint16array;
extern PyObject *const_str_plain_STUint64;
extern PyObject *const_str_plain_PyDatagram;
extern PyObject *const_str_plain_A;
static PyObject *const_str_plain_addInt32;
static PyObject *const_str_plain_sender;
extern PyObject *const_str_plain_STInt16array;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_Datagram_tuple;
extern PyObject *const_str_digest_89b460296e7ca3625b60e1c649d47260;
extern PyObject *const_str_plain_STBlob32;
extern PyObject *const_str_digest_76b24f06be30781a30d554784efa3686;
static PyObject *const_str_plain_addOldServerHeader;
extern PyObject *const_str_plain_addUint16;
extern PyObject *const_str_plain_divisor;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_putArg;
static PyObject *const_str_plain_addInt64;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_STUint32array;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_STFloat64;
extern PyObject *const_str_plain_STInt64;
static PyObject *const_tuple_str_plain_A_tuple;
extern PyObject *const_str_plain_int;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_STString;
extern PyObject *const_str_plain_addUint8;
static PyObject *const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple;
extern PyObject *const_str_plain_FuncDict;
extern PyObject *const_str_plain_addUint32;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_channel = UNSTREAM_STRING( &constant_bin[ 43259 ], 7, 1 );
    const_str_plain_addFunc = UNSTREAM_STRING( &constant_bin[ 43266 ], 7, 1 );
    const_str_plain_Datagram = UNSTREAM_STRING( &constant_bin[ 43273 ], 8, 1 );
    const_str_plain_addServerHeader = UNSTREAM_STRING( &constant_bin[ 43281 ], 15, 1 );
    const_str_digest_48cceaf76360b603bcbed2e78ebccaf0 = UNSTREAM_STRING( &constant_bin[ 43296 ], 32, 0 );
    const_tuple_7e679536572ae75f7b306d5124d8de08_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7e679536572ae75f7b306d5124d8de08_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_7e679536572ae75f7b306d5124d8de08_tuple, 1, const_str_plain_FuncDict ); Py_INCREF( const_str_plain_FuncDict );
    const_str_plain_addChannel = UNSTREAM_STRING( &constant_bin[ 43328 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_7e679536572ae75f7b306d5124d8de08_tuple, 2, const_str_plain_addChannel ); Py_INCREF( const_str_plain_addChannel );
    PyTuple_SET_ITEM( const_tuple_7e679536572ae75f7b306d5124d8de08_tuple, 3, const_str_plain_addServerHeader ); Py_INCREF( const_str_plain_addServerHeader );
    const_str_plain_addOldServerHeader = UNSTREAM_STRING( &constant_bin[ 43338 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_7e679536572ae75f7b306d5124d8de08_tuple, 4, const_str_plain_addOldServerHeader ); Py_INCREF( const_str_plain_addOldServerHeader );
    const_str_plain_putArg = UNSTREAM_STRING( &constant_bin[ 43356 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_7e679536572ae75f7b306d5124d8de08_tuple, 5, const_str_plain_putArg ); Py_INCREF( const_str_plain_putArg );
    const_str_digest_a588886a2190f15186cdb3e844b53ed4 = UNSTREAM_STRING( &constant_bin[ 43362 ], 37, 0 );
    const_str_plain_addFloat64 = UNSTREAM_STRING( &constant_bin[ 43399 ], 10, 1 );
    const_str_plain_addUint64 = UNSTREAM_STRING( &constant_bin[ 43409 ], 9, 1 );
    const_str_plain_funcSpecs = UNSTREAM_STRING( &constant_bin[ 43418 ], 9, 1 );
    const_str_plain_addString32 = UNSTREAM_STRING( &constant_bin[ 43427 ], 11, 1 );
    const_str_plain_argFunc = UNSTREAM_STRING( &constant_bin[ 43438 ], 7, 1 );
    const_str_plain_addInt32 = UNSTREAM_STRING( &constant_bin[ 43445 ], 8, 1 );
    const_str_plain_sender = UNSTREAM_STRING( &constant_bin[ 43453 ], 6, 1 );
    const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 1, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 2, const_str_plain_subatomicType ); Py_INCREF( const_str_plain_subatomicType );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 3, const_str_plain_divisor ); Py_INCREF( const_str_plain_divisor );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 4, const_str_plain_funcSpecs ); Py_INCREF( const_str_plain_funcSpecs );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 5, const_str_plain_addFunc ); Py_INCREF( const_str_plain_addFunc );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 6, const_str_plain_argFunc ); Py_INCREF( const_str_plain_argFunc );
    PyTuple_SET_ITEM( const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_Datagram_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Datagram_tuple, 0, const_str_plain_Datagram ); Py_INCREF( const_str_plain_Datagram );
    const_str_plain_addInt64 = UNSTREAM_STRING( &constant_bin[ 43459 ], 8, 1 );
    const_tuple_str_plain_A_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple, 2, const_str_plain_sender ); Py_INCREF( const_str_plain_sender );
    PyTuple_SET_ITEM( const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple, 3, const_str_plain_code ); Py_INCREF( const_str_plain_code );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$distributed$PyDatagram( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_101ea91e9e7fcdca1fe636efde67f987;
static PyCodeObject *codeobj_6c6d776e622e7f2288232c29105ac240;
static PyCodeObject *codeobj_cd7794507f87158512f5ae339bb7449e;
static PyCodeObject *codeobj_aa0785f1a43f29bea7f45092dd0b6fa0;
static PyCodeObject *codeobj_df2295783575e4c0981fe4836eaf0be6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_48cceaf76360b603bcbed2e78ebccaf0 );
    codeobj_101ea91e9e7fcdca1fe636efde67f987 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyDatagram, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_6c6d776e622e7f2288232c29105ac240 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyDatagram, 12, const_tuple_7e679536572ae75f7b306d5124d8de08_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_cd7794507f87158512f5ae339bb7449e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addOldServerHeader, 43, const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aa0785f1a43f29bea7f45092dd0b6fa0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addServerHeader, 36, const_tuple_f8e042b789c5211257b8690ce3bbce30_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_df2295783575e4c0981fe4836eaf0be6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_putArg, 58, const_tuple_67b8fbb66deb9ff6eab1d2051104d90e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_direct$distributed$PyDatagram$$$class_1_PyDatagram( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_1_addServerHeader(  );


static PyObject *MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_2_addOldServerHeader(  );


static PyObject *MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_3_putArg( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_direct$distributed$PyDatagram$$$class_1_PyDatagram( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var_FuncDict = NULL;
    PyObject *var_addChannel = NULL;
    PyObject *var_addServerHeader = NULL;
    PyObject *var_addOldServerHeader = NULL;
    PyObject *var_putArg = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_76b24f06be30781a30d554784efa3686;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6c6d776e622e7f2288232c29105ac240, module_direct$distributed$PyDatagram, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_2 = _PyDict_NewPresized( 12 );
    tmp_dict_value_1 = PyTuple_New( 2 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 18;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_addInt8 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_1 );

        exception_lineno = 18;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt8 );

    if (unlikely( tmp_dict_key_1 == NULL ))
    {
        tmp_dict_key_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt8 );
    }

    if ( tmp_dict_key_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STInt8" );
        exception_tb = NULL;

        exception_lineno = 18;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_1 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_value_2 = PyTuple_New( 2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 19;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addInt16 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_2 );

        exception_lineno = 19;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dict_value_2, 1, tmp_tuple_element_2 );
    tmp_dict_key_2 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt16 );

    if (unlikely( tmp_dict_key_2 == NULL ))
    {
        tmp_dict_key_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt16 );
    }

    if ( tmp_dict_key_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STInt16" );
        exception_tb = NULL;

        exception_lineno = 19;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_2 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = PyTuple_New( 2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 20;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addInt32 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 20;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_3 != NULL );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dict_value_3, 1, tmp_tuple_element_3 );
    tmp_dict_key_3 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt32 );

    if (unlikely( tmp_dict_key_3 == NULL ))
    {
        tmp_dict_key_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt32 );
    }

    if ( tmp_dict_key_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STInt32" );
        exception_tb = NULL;

        exception_lineno = 20;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_3, tmp_dict_value_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = PyTuple_New( 2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 21;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_addInt64 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_4 );

        exception_lineno = 21;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_4 != NULL );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dict_value_4, 1, tmp_tuple_element_4 );
    tmp_dict_key_4 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt64 );

    if (unlikely( tmp_dict_key_4 == NULL ))
    {
        tmp_dict_key_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt64 );
    }

    if ( tmp_dict_key_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STInt64" );
        exception_tb = NULL;

        exception_lineno = 21;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_4, tmp_dict_value_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_4 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_value_5 = PyTuple_New( 2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_addUint8 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_5 );

        exception_lineno = 22;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_5, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_5 != NULL );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_dict_value_5, 1, tmp_tuple_element_5 );
    tmp_dict_key_5 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint8 );

    if (unlikely( tmp_dict_key_5 == NULL ))
    {
        tmp_dict_key_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint8 );
    }

    if ( tmp_dict_key_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STUint8" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_5, tmp_dict_value_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_5 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_5 );
    tmp_dict_value_6 = PyTuple_New( 2 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 23;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_addUint16 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_6 );

        exception_lineno = 23;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_6, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_6 != NULL );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_dict_value_6, 1, tmp_tuple_element_6 );
    tmp_dict_key_6 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint16 );

    if (unlikely( tmp_dict_key_6 == NULL ))
    {
        tmp_dict_key_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint16 );
    }

    if ( tmp_dict_key_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STUint16" );
        exception_tb = NULL;

        exception_lineno = 23;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_6, tmp_dict_value_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_6 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_6 );
    tmp_dict_value_7 = PyTuple_New( 2 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 24;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_addUint32 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 24;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_7, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_7 != NULL );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_dict_value_7, 1, tmp_tuple_element_7 );
    tmp_dict_key_7 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint32 );

    if (unlikely( tmp_dict_key_7 == NULL ))
    {
        tmp_dict_key_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint32 );
    }

    if ( tmp_dict_key_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STUint32" );
        exception_tb = NULL;

        exception_lineno = 24;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_7, tmp_dict_value_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_7 );
    tmp_dict_value_8 = PyTuple_New( 2 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 25;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_addUint64 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_8 );

        exception_lineno = 25;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_8, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_8 != NULL );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_dict_value_8, 1, tmp_tuple_element_8 );
    tmp_dict_key_8 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint64 );

    if (unlikely( tmp_dict_key_8 == NULL ))
    {
        tmp_dict_key_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint64 );
    }

    if ( tmp_dict_key_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STUint64" );
        exception_tb = NULL;

        exception_lineno = 25;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_8, tmp_dict_value_8 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_8 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_8 );
    tmp_dict_value_9 = PyTuple_New( 2 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 26;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_addFloat64 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_9 );

        exception_lineno = 26;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_9, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = Py_None;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_dict_value_9, 1, tmp_tuple_element_9 );
    tmp_dict_key_9 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STFloat64 );

    if (unlikely( tmp_dict_key_9 == NULL ))
    {
        tmp_dict_key_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STFloat64 );
    }

    if ( tmp_dict_key_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STFloat64" );
        exception_tb = NULL;

        exception_lineno = 26;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_9, tmp_dict_value_9 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_9 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_9 );
    tmp_dict_value_10 = PyTuple_New( 2 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 27;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_addString );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_10 );

        exception_lineno = 27;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_10, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_dict_value_10, 1, tmp_tuple_element_10 );
    tmp_dict_key_10 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STString );

    if (unlikely( tmp_dict_key_10 == NULL ))
    {
        tmp_dict_key_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STString );
    }

    if ( tmp_dict_key_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STString" );
        exception_tb = NULL;

        exception_lineno = 27;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_10, tmp_dict_value_10 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_10 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_10 );
    tmp_dict_value_11 = PyTuple_New( 2 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_addString );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_11 );

        exception_lineno = 28;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_11, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = Py_None;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_dict_value_11, 1, tmp_tuple_element_11 );
    tmp_dict_key_11 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STBlob );

    if (unlikely( tmp_dict_key_11 == NULL ))
    {
        tmp_dict_key_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STBlob );
    }

    if ( tmp_dict_key_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STBlob" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_11, tmp_dict_value_11 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_11 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_11 );
    tmp_dict_value_12 = PyTuple_New( 2 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 29;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_addString32 );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_12 );

        exception_lineno = 29;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_12, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = Py_None;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_dict_value_12, 1, tmp_tuple_element_12 );
    tmp_dict_key_12 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STBlob32 );

    if (unlikely( tmp_dict_key_12 == NULL ))
    {
        tmp_dict_key_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STBlob32 );
    }

    if ( tmp_dict_key_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "STBlob32" );
        exception_tb = NULL;

        exception_lineno = 29;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_12, tmp_dict_value_12 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_dict_value_12 );

        exception_lineno = 17;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_dict_value_12 );
    assert( var_FuncDict == NULL );
    var_FuncDict = tmp_assign_source_2;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 34;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_addUint64 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_addChannel == NULL );
    var_addChannel = tmp_assign_source_3;


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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,var___module__, var_FuncDict, var_addChannel, var_addServerHeader, var_addOldServerHeader, var_putArg );

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

    tmp_assign_source_4 = MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_1_addServerHeader(  );
    assert( var_addServerHeader == NULL );
    var_addServerHeader = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_2_addOldServerHeader(  );
    assert( var_addOldServerHeader == NULL );
    var_addOldServerHeader = tmp_assign_source_5;

    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_6 = MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_3_putArg( tmp_defaults_1 );
    assert( var_putArg == NULL );
    var_putArg = tmp_assign_source_6;

    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var_FuncDict )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_FuncDict,
            var_FuncDict
        );

        assert( res == 0 );
    }

    if ( var_addChannel )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_addChannel,
            var_addChannel
        );

        assert( res == 0 );
    }

    if ( var_addServerHeader )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_addServerHeader,
            var_addServerHeader
        );

        assert( res == 0 );
    }

    if ( var_addOldServerHeader )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_addOldServerHeader,
            var_addOldServerHeader
        );

        assert( res == 0 );
    }

    if ( var_putArg )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_putArg,
            var_putArg
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_FuncDict );
    Py_DECREF( var_FuncDict );
    var_FuncDict = NULL;

    CHECK_OBJECT( (PyObject *)var_addChannel );
    Py_DECREF( var_addChannel );
    var_addChannel = NULL;

    CHECK_OBJECT( (PyObject *)var_addServerHeader );
    Py_DECREF( var_addServerHeader );
    var_addServerHeader = NULL;

    CHECK_OBJECT( (PyObject *)var_addOldServerHeader );
    Py_DECREF( var_addOldServerHeader );
    var_addOldServerHeader = NULL;

    CHECK_OBJECT( (PyObject *)var_putArg );
    Py_DECREF( var_putArg );
    var_putArg = NULL;

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

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var_FuncDict );
    var_FuncDict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram );
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


static PyObject *impl_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_1_addServerHeader( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_sender = python_pars[ 2 ];
    PyObject *par_code = python_pars[ 3 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_aa0785f1a43f29bea7f45092dd0b6fa0, module_direct$distributed$PyDatagram, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 37;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addInt8, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_1 = par_channel;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_addChannel, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_2 = par_sender;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_addChannel, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = par_self;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_3 = par_code;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_function->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_addUint16, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_channel, par_sender, par_code );

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
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_1_addServerHeader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_channel );
    Py_DECREF( par_channel );
    par_channel = NULL;

    CHECK_OBJECT( (PyObject *)par_sender );
    Py_DECREF( par_sender );
    par_sender = NULL;

    CHECK_OBJECT( (PyObject *)par_code );
    Py_DECREF( par_code );
    par_code = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_channel );
    Py_DECREF( par_channel );
    par_channel = NULL;

    CHECK_OBJECT( (PyObject *)par_sender );
    Py_DECREF( par_sender );
    par_sender = NULL;

    CHECK_OBJECT( (PyObject *)par_code );
    Py_DECREF( par_code );
    par_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_1_addServerHeader );
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


static PyObject *impl_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_2_addOldServerHeader( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_sender = python_pars[ 2 ];
    PyObject *par_code = python_pars[ 3 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cd7794507f87158512f5ae339bb7449e, module_direct$distributed$PyDatagram, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_channel;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addChannel, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = par_sender;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_addChannel, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_function->m_frame.f_lineno = 46;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_addChannel, &PyTuple_GET_ITEM( const_tuple_str_plain_A_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = par_self;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_3 = par_code;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_function->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_addUint16, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_channel, par_sender, par_code );

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
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_2_addOldServerHeader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_channel );
    Py_DECREF( par_channel );
    par_channel = NULL;

    CHECK_OBJECT( (PyObject *)par_sender );
    Py_DECREF( par_sender );
    par_sender = NULL;

    CHECK_OBJECT( (PyObject *)par_code );
    Py_DECREF( par_code );
    par_code = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_channel );
    Py_DECREF( par_channel );
    par_channel = NULL;

    CHECK_OBJECT( (PyObject *)par_sender );
    Py_DECREF( par_sender );
    par_sender = NULL;

    CHECK_OBJECT( (PyObject *)par_code );
    Py_DECREF( par_code );
    par_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_2_addOldServerHeader );
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


static PyObject *impl_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_3_putArg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arg = python_pars[ 1 ];
    PyObject *par_subatomicType = python_pars[ 2 ];
    PyObject *par_divisor = python_pars[ 3 ];
    PyObject *var_funcSpecs = NULL;
    PyObject *var_addFunc = NULL;
    PyObject *var_argFunc = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_for_loop_10__for_iterator = NULL;
    PyObject *tmp_for_loop_10__iter_value = NULL;
    PyObject *tmp_for_loop_11__for_iterator = NULL;
    PyObject *tmp_for_loop_11__iter_value = NULL;
    PyObject *tmp_for_loop_12__for_iterator = NULL;
    PyObject *tmp_for_loop_12__iter_value = NULL;
    PyObject *tmp_for_loop_13__for_iterator = NULL;
    PyObject *tmp_for_loop_13__iter_value = NULL;
    PyObject *tmp_for_loop_14__for_iterator = NULL;
    PyObject *tmp_for_loop_14__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Eq_9;
    int tmp_cmp_Eq_10;
    int tmp_cmp_Eq_11;
    int tmp_cmp_Eq_12;
    int tmp_cmp_Eq_13;
    int tmp_cmp_Eq_14;
    int tmp_cmp_Eq_15;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    PyObject *tmp_int_arg_5;
    PyObject *tmp_int_arg_6;
    PyObject *tmp_int_arg_7;
    PyObject *tmp_int_arg_8;
    PyObject *tmp_int_arg_9;
    PyObject *tmp_int_arg_10;
    PyObject *tmp_int_arg_11;
    PyObject *tmp_int_arg_12;
    PyObject *tmp_int_arg_13;
    PyObject *tmp_int_arg_14;
    PyObject *tmp_int_arg_15;
    PyObject *tmp_int_arg_16;
    PyObject *tmp_int_arg_17;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iter_arg_10;
    PyObject *tmp_iter_arg_11;
    PyObject *tmp_iter_arg_12;
    PyObject *tmp_iter_arg_13;
    PyObject *tmp_iter_arg_14;
    PyObject *tmp_iter_arg_15;
    PyObject *tmp_iter_arg_16;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_left_name_19;
    PyObject *tmp_left_name_20;
    PyObject *tmp_left_name_21;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_len_arg_7;
    PyObject *tmp_len_arg_8;
    PyObject *tmp_len_arg_9;
    PyObject *tmp_len_arg_10;
    PyObject *tmp_len_arg_11;
    PyObject *tmp_len_arg_12;
    PyObject *tmp_len_arg_13;
    PyObject *tmp_len_arg_14;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    PyObject *tmp_next_source_8;
    PyObject *tmp_next_source_9;
    PyObject *tmp_next_source_10;
    PyObject *tmp_next_source_11;
    PyObject *tmp_next_source_12;
    PyObject *tmp_next_source_13;
    PyObject *tmp_next_source_14;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_right_name_19;
    PyObject *tmp_right_name_20;
    PyObject *tmp_right_name_21;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_df2295783575e4c0981fe4836eaf0be6, module_direct$distributed$PyDatagram, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_divisor;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description = "oooooooo";
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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_FuncDict );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_subatomicType;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_funcSpecs == NULL );
    var_funcSpecs = tmp_assign_source_1;

    tmp_cond_value_1 = var_funcSpecs;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_iter_arg_1 = var_funcSpecs;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "oooooooo";
        exception_lineno = 62;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "oooooooo";
        exception_lineno = 62;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description = "oooooooo";
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description = "oooooooo";
        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_addFunc == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_addFunc = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_argFunc == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_argFunc = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_cond_value_2 = var_argFunc;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_1 = var_argFunc;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_2 = par_arg;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_arg;
        assert( old != NULL );
        par_arg = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_called_name_2 = var_addFunc;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_3 = par_self;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_arg;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_function->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_2 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt8array );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt8array );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STInt8array" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addUint16 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = par_arg;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_args_element_name_5 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 68;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_2 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 69;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_10;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addInt8 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_int_arg_1 = var_i;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_args_element_name_6 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_4;
    }
    frame_function->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description = "oooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_3 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt16array );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt16array );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STInt16array" );
        exception_tb = NULL;

        exception_lineno = 71;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_addUint16 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_arg;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 72;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_args_element_name_7 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 72;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_3 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 73;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_13;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_addInt16 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "oooooooo";
        goto try_except_handler_5;
    }
    tmp_int_arg_2 = var_i;

    CHECK_OBJECT( tmp_int_arg_2 );
    tmp_args_element_name_8 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 74;
        type_description = "oooooooo";
        goto try_except_handler_5;
    }
    frame_function->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "oooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "oooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_4 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt32array );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt32array );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STInt32array" );
        exception_tb = NULL;

        exception_lineno = 75;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_addUint16 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_3 = par_arg;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 76;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_args_element_name_9 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 76;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_4 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_14;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 77;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_16;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_addInt32 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "oooooooo";
        goto try_except_handler_6;
    }
    tmp_int_arg_3 = var_i;

    CHECK_OBJECT( tmp_int_arg_3 );
    tmp_args_element_name_10 = PyNumber_Int( tmp_int_arg_3 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 78;
        type_description = "oooooooo";
        goto try_except_handler_6;
    }
    frame_function->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "oooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "oooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_5 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint8array );

    if (unlikely( tmp_compare_right_5 == NULL ))
    {
        tmp_compare_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint8array );
    }

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint8array" );
        exception_tb = NULL;

        exception_lineno = 79;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_addUint16 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_4 = par_arg;

    CHECK_OBJECT( tmp_len_arg_4 );
    tmp_args_element_name_11 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 80;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_5 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator == NULL );
    tmp_for_loop_4__for_iterator = tmp_assign_source_17;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    CHECK_OBJECT( tmp_next_source_4 );
    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 81;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_assign_source_19 = tmp_for_loop_4__iter_value;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_19;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_addUint8 );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "oooooooo";
        goto try_except_handler_7;
    }
    tmp_int_arg_4 = var_i;

    CHECK_OBJECT( tmp_int_arg_4 );
    tmp_args_element_name_12 = PyNumber_Int( tmp_int_arg_4 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 82;
        type_description = "oooooooo";
        goto try_except_handler_7;
    }
    frame_function->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "oooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description = "oooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_6 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint16array );

    if (unlikely( tmp_compare_right_6 == NULL ))
    {
        tmp_compare_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint16array );
    }

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint16array" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_addUint16 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_5 = par_arg;

    CHECK_OBJECT( tmp_len_arg_5 );
    tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 84;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_args_element_name_13 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 84;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_6 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_6 );
    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator == NULL );
    tmp_for_loop_5__for_iterator = tmp_assign_source_20;

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator;

    CHECK_OBJECT( tmp_next_source_5 );
    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 85;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_assign_source_22 = tmp_for_loop_5__iter_value;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_22;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_addUint16 );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description = "oooooooo";
        goto try_except_handler_8;
    }
    tmp_int_arg_5 = var_i;

    CHECK_OBJECT( tmp_int_arg_5 );
    tmp_args_element_name_14 = PyNumber_Int( tmp_int_arg_5 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 86;
        type_description = "oooooooo";
        goto try_except_handler_8;
    }
    frame_function->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description = "oooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description = "oooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    goto branch_end_8;
    branch_no_8:;
    tmp_compare_left_7 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint32array );

    if (unlikely( tmp_compare_right_7 == NULL ))
    {
        tmp_compare_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint32array );
    }

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint32array" );
        exception_tb = NULL;

        exception_lineno = 87;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_7 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_addUint16 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_6 = par_arg;

    CHECK_OBJECT( tmp_len_arg_6 );
    tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 88;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_2;
    tmp_args_element_name_15 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 88;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_7 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_7 );
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator == NULL );
    tmp_for_loop_6__for_iterator = tmp_assign_source_23;

    // Tried code:
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator;

    CHECK_OBJECT( tmp_next_source_6 );
    tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_6;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 89;
            goto try_except_handler_9;
        }
    }

    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_assign_source_25 = tmp_for_loop_6__iter_value;

    CHECK_OBJECT( tmp_assign_source_25 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_25;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_addUint32 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description = "oooooooo";
        goto try_except_handler_9;
    }
    tmp_int_arg_6 = var_i;

    CHECK_OBJECT( tmp_int_arg_6 );
    tmp_args_element_name_16 = PyNumber_Int( tmp_int_arg_6 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 90;
        type_description = "oooooooo";
        goto try_except_handler_9;
    }
    frame_function->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description = "oooooooo";
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "oooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_8 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_8 );
    tmp_compare_right_8 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint32uint8array );

    if (unlikely( tmp_compare_right_8 == NULL ))
    {
        tmp_compare_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint32uint8array );
    }

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint32uint8array" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_8 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_addUint16 );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_7 = par_arg;

    CHECK_OBJECT( tmp_len_arg_7 );
    tmp_left_name_5 = BUILTIN_LEN( tmp_len_arg_7 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 92;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_5;
    tmp_args_element_name_17 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 92;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_8 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_8 );
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_7__for_iterator == NULL );
    tmp_for_loop_7__for_iterator = tmp_assign_source_26;

    // Tried code:
    loop_start_7:;
    tmp_next_source_7 = tmp_for_loop_7__for_iterator;

    CHECK_OBJECT( tmp_next_source_7 );
    tmp_assign_source_27 = ITERATOR_NEXT( tmp_next_source_7 );
    if ( tmp_assign_source_27 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_7;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 93;
            goto try_except_handler_10;
        }
    }

    {
        PyObject *old = tmp_for_loop_7__iter_value;
        tmp_for_loop_7__iter_value = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_assign_source_28 = tmp_for_loop_7__iter_value;

    CHECK_OBJECT( tmp_assign_source_28 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_28;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_15 = par_self;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_addUint32 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    tmp_subscribed_name_1 = var_i;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_int_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_int_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 94;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    tmp_args_element_name_18 = PyNumber_Int( tmp_int_arg_7 );
    Py_DECREF( tmp_int_arg_7 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 94;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    frame_function->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = par_self;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_addUint8 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    tmp_subscribed_name_2 = var_i;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_int_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_int_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 95;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    tmp_args_element_name_19 = PyNumber_Int( tmp_int_arg_8 );
    Py_DECREF( tmp_int_arg_8 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 95;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    frame_function->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "oooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    goto branch_end_10;
    branch_no_10:;
    tmp_left_name_6 = const_str_digest_72f8f399b1660646213868132229411b;
    tmp_str_arg_1 = par_subatomicType;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_right_name_6 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 97;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooooo";
    goto frame_exception_exit_1;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_17 = par_self;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_FuncDict );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = par_subatomicType;

    CHECK_OBJECT( tmp_args_element_name_20 );
    frame_function->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_funcSpecs == NULL );
    var_funcSpecs = tmp_assign_source_29;

    tmp_cond_value_3 = var_funcSpecs;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    // Tried code:
    tmp_iter_arg_9 = var_funcSpecs;

    CHECK_OBJECT( tmp_iter_arg_9 );
    tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_9 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oooooooo";
        goto try_except_handler_11;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_30;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_31 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "oooooooo";
        exception_lineno = 102;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_31;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_32 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description = "oooooooo";
        exception_lineno = 102;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_32;

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description = "oooooooo";
                goto try_except_handler_12;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description = "oooooooo";
        goto try_except_handler_12;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_33 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_33 );
    assert( var_addFunc == NULL );
    Py_INCREF( tmp_assign_source_33 );
    var_addFunc = tmp_assign_source_33;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_34 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_34 );
    assert( var_argFunc == NULL );
    Py_INCREF( tmp_assign_source_34 );
    var_argFunc = tmp_assign_source_34;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_called_name_18 = var_addFunc;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_args_element_name_21 = par_self;

    CHECK_OBJECT( tmp_args_element_name_21 );
    tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_19 != NULL );
    tmp_left_name_7 = par_arg;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_right_name_7 = par_divisor;

    CHECK_OBJECT( tmp_right_name_7 );
    tmp_args_element_name_23 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_int_arg_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_int_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = PyNumber_Int( tmp_int_arg_9 );
    Py_DECREF( tmp_int_arg_9 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_11;
    branch_no_11:;
    tmp_compare_left_9 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_9 );
    tmp_compare_right_9 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt8array );

    if (unlikely( tmp_compare_right_9 == NULL ))
    {
        tmp_compare_right_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt8array );
    }

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STInt8array" );
        exception_tb = NULL;

        exception_lineno = 105;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_9 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_18 = par_self;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_addUint16 );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_8 = par_arg;

    CHECK_OBJECT( tmp_len_arg_8 );
    tmp_args_element_name_24 = BUILTIN_LEN( tmp_len_arg_8 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );

        exception_lineno = 106;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_10 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_10 );
    tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_10 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_8__for_iterator == NULL );
    tmp_for_loop_8__for_iterator = tmp_assign_source_35;

    // Tried code:
    loop_start_8:;
    tmp_next_source_8 = tmp_for_loop_8__for_iterator;

    CHECK_OBJECT( tmp_next_source_8 );
    tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_8 );
    if ( tmp_assign_source_36 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_8;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 107;
            goto try_except_handler_13;
        }
    }

    {
        PyObject *old = tmp_for_loop_8__iter_value;
        tmp_for_loop_8__iter_value = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    tmp_assign_source_37 = tmp_for_loop_8__iter_value;

    CHECK_OBJECT( tmp_assign_source_37 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_37;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_19 = par_self;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_addInt8 );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description = "oooooooo";
        goto try_except_handler_13;
    }
    tmp_called_name_22 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_22 != NULL );
    tmp_left_name_8 = var_i;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_right_name_8 = par_divisor;

    CHECK_OBJECT( tmp_right_name_8 );
    tmp_args_element_name_26 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 108;
        type_description = "oooooooo";
        goto try_except_handler_13;
    }
    frame_function->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_int_arg_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_int_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 108;
        type_description = "oooooooo";
        goto try_except_handler_13;
    }
    tmp_args_element_name_25 = PyNumber_Int( tmp_int_arg_10 );
    Py_DECREF( tmp_int_arg_10 );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 108;
        type_description = "oooooooo";
        goto try_except_handler_13;
    }
    frame_function->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description = "oooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description = "oooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_8__iter_value );
    tmp_for_loop_8__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
    Py_DECREF( tmp_for_loop_8__for_iterator );
    tmp_for_loop_8__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_for_loop_8__iter_value );
    tmp_for_loop_8__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
    Py_DECREF( tmp_for_loop_8__for_iterator );
    tmp_for_loop_8__for_iterator = NULL;

    goto branch_end_12;
    branch_no_12:;
    tmp_compare_left_10 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_10 );
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt16array );

    if (unlikely( tmp_compare_right_10 == NULL ))
    {
        tmp_compare_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt16array );
    }

    if ( tmp_compare_right_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STInt16array" );
        exception_tb = NULL;

        exception_lineno = 109;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_10 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_10 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_20 = par_self;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_addUint16 );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_9 = par_arg;

    CHECK_OBJECT( tmp_len_arg_9 );
    tmp_left_name_9 = BUILTIN_LEN( tmp_len_arg_9 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );

        exception_lineno = 110;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = const_int_pos_1;
    tmp_args_element_name_27 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );

        exception_lineno = 110;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_11 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_11 );
    tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_11 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_9__for_iterator == NULL );
    tmp_for_loop_9__for_iterator = tmp_assign_source_38;

    // Tried code:
    loop_start_9:;
    tmp_next_source_9 = tmp_for_loop_9__for_iterator;

    CHECK_OBJECT( tmp_next_source_9 );
    tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_9 );
    if ( tmp_assign_source_39 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_9;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 111;
            goto try_except_handler_14;
        }
    }

    {
        PyObject *old = tmp_for_loop_9__iter_value;
        tmp_for_loop_9__iter_value = tmp_assign_source_39;
        Py_XDECREF( old );
    }

    tmp_assign_source_40 = tmp_for_loop_9__iter_value;

    CHECK_OBJECT( tmp_assign_source_40 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_40;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_21 = par_self;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_addInt16 );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description = "oooooooo";
        goto try_except_handler_14;
    }
    tmp_called_name_25 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_25 != NULL );
    tmp_left_name_10 = var_i;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_right_name_10 = par_divisor;

    CHECK_OBJECT( tmp_right_name_10 );
    tmp_args_element_name_29 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_24 );

        exception_lineno = 112;
        type_description = "oooooooo";
        goto try_except_handler_14;
    }
    frame_function->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_int_arg_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_int_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_24 );

        exception_lineno = 112;
        type_description = "oooooooo";
        goto try_except_handler_14;
    }
    tmp_args_element_name_28 = PyNumber_Int( tmp_int_arg_11 );
    Py_DECREF( tmp_int_arg_11 );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_24 );

        exception_lineno = 112;
        type_description = "oooooooo";
        goto try_except_handler_14;
    }
    frame_function->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description = "oooooooo";
        goto try_except_handler_14;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description = "oooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_9__iter_value );
    tmp_for_loop_9__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
    Py_DECREF( tmp_for_loop_9__for_iterator );
    tmp_for_loop_9__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_for_loop_9__iter_value );
    tmp_for_loop_9__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
    Py_DECREF( tmp_for_loop_9__for_iterator );
    tmp_for_loop_9__for_iterator = NULL;

    goto branch_end_13;
    branch_no_13:;
    tmp_compare_left_11 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_11 );
    tmp_compare_right_11 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STInt32array );

    if (unlikely( tmp_compare_right_11 == NULL ))
    {
        tmp_compare_right_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STInt32array );
    }

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STInt32array" );
        exception_tb = NULL;

        exception_lineno = 113;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_11 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_11 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_22 = par_self;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_addUint16 );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_10 = par_arg;

    CHECK_OBJECT( tmp_len_arg_10 );
    tmp_left_name_11 = BUILTIN_LEN( tmp_len_arg_10 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );

        exception_lineno = 114;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = const_int_pos_2;
    tmp_args_element_name_30 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_26 );

        exception_lineno = 114;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_12 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_12 );
    tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_12 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_10__for_iterator == NULL );
    tmp_for_loop_10__for_iterator = tmp_assign_source_41;

    // Tried code:
    loop_start_10:;
    tmp_next_source_10 = tmp_for_loop_10__for_iterator;

    CHECK_OBJECT( tmp_next_source_10 );
    tmp_assign_source_42 = ITERATOR_NEXT( tmp_next_source_10 );
    if ( tmp_assign_source_42 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_10;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 115;
            goto try_except_handler_15;
        }
    }

    {
        PyObject *old = tmp_for_loop_10__iter_value;
        tmp_for_loop_10__iter_value = tmp_assign_source_42;
        Py_XDECREF( old );
    }

    tmp_assign_source_43 = tmp_for_loop_10__iter_value;

    CHECK_OBJECT( tmp_assign_source_43 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_43;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_23 = par_self;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_addInt32 );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "oooooooo";
        goto try_except_handler_15;
    }
    tmp_called_name_28 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_28 != NULL );
    tmp_left_name_12 = var_i;

    CHECK_OBJECT( tmp_left_name_12 );
    tmp_right_name_12 = par_divisor;

    CHECK_OBJECT( tmp_right_name_12 );
    tmp_args_element_name_32 = BINARY_OPERATION_MUL( tmp_left_name_12, tmp_right_name_12 );
    if ( tmp_args_element_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 116;
        type_description = "oooooooo";
        goto try_except_handler_15;
    }
    frame_function->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_int_arg_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_int_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 116;
        type_description = "oooooooo";
        goto try_except_handler_15;
    }
    tmp_args_element_name_31 = PyNumber_Int( tmp_int_arg_12 );
    Py_DECREF( tmp_int_arg_12 );
    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 116;
        type_description = "oooooooo";
        goto try_except_handler_15;
    }
    frame_function->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "oooooooo";
        goto try_except_handler_15;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_10__iter_value );
    tmp_for_loop_10__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_10__for_iterator );
    Py_DECREF( tmp_for_loop_10__for_iterator );
    tmp_for_loop_10__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_for_loop_10__iter_value );
    tmp_for_loop_10__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_10__for_iterator );
    Py_DECREF( tmp_for_loop_10__for_iterator );
    tmp_for_loop_10__for_iterator = NULL;

    goto branch_end_14;
    branch_no_14:;
    tmp_compare_left_12 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_12 );
    tmp_compare_right_12 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint8array );

    if (unlikely( tmp_compare_right_12 == NULL ))
    {
        tmp_compare_right_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint8array );
    }

    if ( tmp_compare_right_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint8array" );
        exception_tb = NULL;

        exception_lineno = 117;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_12 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_12 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_24 = par_self;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_addUint16 );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_11 = par_arg;

    CHECK_OBJECT( tmp_len_arg_11 );
    tmp_args_element_name_33 = BUILTIN_LEN( tmp_len_arg_11 );
    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_29 );

        exception_lineno = 118;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_13 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_13 );
    tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_13 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_11__for_iterator == NULL );
    tmp_for_loop_11__for_iterator = tmp_assign_source_44;

    // Tried code:
    loop_start_11:;
    tmp_next_source_11 = tmp_for_loop_11__for_iterator;

    CHECK_OBJECT( tmp_next_source_11 );
    tmp_assign_source_45 = ITERATOR_NEXT( tmp_next_source_11 );
    if ( tmp_assign_source_45 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_11;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 119;
            goto try_except_handler_16;
        }
    }

    {
        PyObject *old = tmp_for_loop_11__iter_value;
        tmp_for_loop_11__iter_value = tmp_assign_source_45;
        Py_XDECREF( old );
    }

    tmp_assign_source_46 = tmp_for_loop_11__iter_value;

    CHECK_OBJECT( tmp_assign_source_46 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_46;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_25 = par_self;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_addUint8 );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description = "oooooooo";
        goto try_except_handler_16;
    }
    tmp_called_name_31 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_31 != NULL );
    tmp_left_name_13 = var_i;

    CHECK_OBJECT( tmp_left_name_13 );
    tmp_right_name_13 = par_divisor;

    CHECK_OBJECT( tmp_right_name_13 );
    tmp_args_element_name_35 = BINARY_OPERATION_MUL( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_args_element_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_30 );

        exception_lineno = 120;
        type_description = "oooooooo";
        goto try_except_handler_16;
    }
    frame_function->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_int_arg_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_int_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_30 );

        exception_lineno = 120;
        type_description = "oooooooo";
        goto try_except_handler_16;
    }
    tmp_args_element_name_34 = PyNumber_Int( tmp_int_arg_13 );
    Py_DECREF( tmp_int_arg_13 );
    if ( tmp_args_element_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_30 );

        exception_lineno = 120;
        type_description = "oooooooo";
        goto try_except_handler_16;
    }
    frame_function->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_element_name_34 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description = "oooooooo";
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_11__iter_value );
    tmp_for_loop_11__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_11__for_iterator );
    Py_DECREF( tmp_for_loop_11__for_iterator );
    tmp_for_loop_11__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF( tmp_for_loop_11__iter_value );
    tmp_for_loop_11__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_11__for_iterator );
    Py_DECREF( tmp_for_loop_11__for_iterator );
    tmp_for_loop_11__for_iterator = NULL;

    goto branch_end_15;
    branch_no_15:;
    tmp_compare_left_13 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_13 );
    tmp_compare_right_13 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint16array );

    if (unlikely( tmp_compare_right_13 == NULL ))
    {
        tmp_compare_right_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint16array );
    }

    if ( tmp_compare_right_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint16array" );
        exception_tb = NULL;

        exception_lineno = 121;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_13 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Eq_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_13 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_26 = par_self;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_addUint16 );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_12 = par_arg;

    CHECK_OBJECT( tmp_len_arg_12 );
    tmp_left_name_14 = BUILTIN_LEN( tmp_len_arg_12 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );

        exception_lineno = 122;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = const_int_pos_1;
    tmp_args_element_name_36 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_args_element_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_32 );

        exception_lineno = 122;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_14 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_14 );
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_14 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_12__for_iterator == NULL );
    tmp_for_loop_12__for_iterator = tmp_assign_source_47;

    // Tried code:
    loop_start_12:;
    tmp_next_source_12 = tmp_for_loop_12__for_iterator;

    CHECK_OBJECT( tmp_next_source_12 );
    tmp_assign_source_48 = ITERATOR_NEXT( tmp_next_source_12 );
    if ( tmp_assign_source_48 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_12;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 123;
            goto try_except_handler_17;
        }
    }

    {
        PyObject *old = tmp_for_loop_12__iter_value;
        tmp_for_loop_12__iter_value = tmp_assign_source_48;
        Py_XDECREF( old );
    }

    tmp_assign_source_49 = tmp_for_loop_12__iter_value;

    CHECK_OBJECT( tmp_assign_source_49 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_49;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_27 = par_self;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_addUint16 );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oooooooo";
        goto try_except_handler_17;
    }
    tmp_called_name_34 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_34 != NULL );
    tmp_left_name_15 = var_i;

    CHECK_OBJECT( tmp_left_name_15 );
    tmp_right_name_15 = par_divisor;

    CHECK_OBJECT( tmp_right_name_15 );
    tmp_args_element_name_38 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_args_element_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_33 );

        exception_lineno = 124;
        type_description = "oooooooo";
        goto try_except_handler_17;
    }
    frame_function->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_int_arg_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_int_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_33 );

        exception_lineno = 124;
        type_description = "oooooooo";
        goto try_except_handler_17;
    }
    tmp_args_element_name_37 = PyNumber_Int( tmp_int_arg_14 );
    Py_DECREF( tmp_int_arg_14 );
    if ( tmp_args_element_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_33 );

        exception_lineno = 124;
        type_description = "oooooooo";
        goto try_except_handler_17;
    }
    frame_function->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description = "oooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_12__iter_value );
    tmp_for_loop_12__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_12__for_iterator );
    Py_DECREF( tmp_for_loop_12__for_iterator );
    tmp_for_loop_12__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF( tmp_for_loop_12__iter_value );
    tmp_for_loop_12__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_12__for_iterator );
    Py_DECREF( tmp_for_loop_12__for_iterator );
    tmp_for_loop_12__for_iterator = NULL;

    goto branch_end_16;
    branch_no_16:;
    tmp_compare_left_14 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_14 );
    tmp_compare_right_14 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint32array );

    if (unlikely( tmp_compare_right_14 == NULL ))
    {
        tmp_compare_right_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint32array );
    }

    if ( tmp_compare_right_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint32array" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_14 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_14 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_source_name_28 = par_self;

    CHECK_OBJECT( tmp_source_name_28 );
    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_addUint16 );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_13 = par_arg;

    CHECK_OBJECT( tmp_len_arg_13 );
    tmp_left_name_16 = BUILTIN_LEN( tmp_len_arg_13 );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_35 );

        exception_lineno = 126;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = const_int_pos_2;
    tmp_args_element_name_39 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_16, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_args_element_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_35 );

        exception_lineno = 126;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_15 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_15 );
    tmp_assign_source_50 = MAKE_ITERATOR( tmp_iter_arg_15 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_13__for_iterator == NULL );
    tmp_for_loop_13__for_iterator = tmp_assign_source_50;

    // Tried code:
    loop_start_13:;
    tmp_next_source_13 = tmp_for_loop_13__for_iterator;

    CHECK_OBJECT( tmp_next_source_13 );
    tmp_assign_source_51 = ITERATOR_NEXT( tmp_next_source_13 );
    if ( tmp_assign_source_51 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_13;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 127;
            goto try_except_handler_18;
        }
    }

    {
        PyObject *old = tmp_for_loop_13__iter_value;
        tmp_for_loop_13__iter_value = tmp_assign_source_51;
        Py_XDECREF( old );
    }

    tmp_assign_source_52 = tmp_for_loop_13__iter_value;

    CHECK_OBJECT( tmp_assign_source_52 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_52;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_29 = par_self;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_addUint32 );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description = "oooooooo";
        goto try_except_handler_18;
    }
    tmp_called_name_37 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_37 != NULL );
    tmp_left_name_17 = var_i;

    CHECK_OBJECT( tmp_left_name_17 );
    tmp_right_name_17 = par_divisor;

    CHECK_OBJECT( tmp_right_name_17 );
    tmp_args_element_name_41 = BINARY_OPERATION_MUL( tmp_left_name_17, tmp_right_name_17 );
    if ( tmp_args_element_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_36 );

        exception_lineno = 128;
        type_description = "oooooooo";
        goto try_except_handler_18;
    }
    frame_function->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_int_arg_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_int_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_36 );

        exception_lineno = 128;
        type_description = "oooooooo";
        goto try_except_handler_18;
    }
    tmp_args_element_name_40 = PyNumber_Int( tmp_int_arg_15 );
    Py_DECREF( tmp_int_arg_15 );
    if ( tmp_args_element_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_36 );

        exception_lineno = 128;
        type_description = "oooooooo";
        goto try_except_handler_18;
    }
    frame_function->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    Py_DECREF( tmp_args_element_name_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description = "oooooooo";
        goto try_except_handler_18;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description = "oooooooo";
        goto try_except_handler_18;
    }
    goto loop_start_13;
    loop_end_13:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_13__iter_value );
    tmp_for_loop_13__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_13__for_iterator );
    Py_DECREF( tmp_for_loop_13__for_iterator );
    tmp_for_loop_13__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF( tmp_for_loop_13__iter_value );
    tmp_for_loop_13__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_13__for_iterator );
    Py_DECREF( tmp_for_loop_13__for_iterator );
    tmp_for_loop_13__for_iterator = NULL;

    goto branch_end_17;
    branch_no_17:;
    tmp_compare_left_15 = par_subatomicType;

    CHECK_OBJECT( tmp_compare_left_15 );
    tmp_compare_right_15 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_STUint32uint8array );

    if (unlikely( tmp_compare_right_15 == NULL ))
    {
        tmp_compare_right_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STUint32uint8array );
    }

    if ( tmp_compare_right_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STUint32uint8array" );
        exception_tb = NULL;

        exception_lineno = 129;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_15 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_15 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_30 = par_self;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_addUint16 );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_14 = par_arg;

    CHECK_OBJECT( tmp_len_arg_14 );
    tmp_left_name_18 = BUILTIN_LEN( tmp_len_arg_14 );
    if ( tmp_left_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_38 );

        exception_lineno = 130;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_18 = const_int_pos_5;
    tmp_args_element_name_42 = BINARY_OPERATION_MUL( tmp_left_name_18, tmp_right_name_18 );
    Py_DECREF( tmp_left_name_18 );
    if ( tmp_args_element_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_38 );

        exception_lineno = 130;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_42 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    Py_DECREF( tmp_args_element_name_42 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_16 = par_arg;

    CHECK_OBJECT( tmp_iter_arg_16 );
    tmp_assign_source_53 = MAKE_ITERATOR( tmp_iter_arg_16 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_14__for_iterator == NULL );
    tmp_for_loop_14__for_iterator = tmp_assign_source_53;

    // Tried code:
    loop_start_14:;
    tmp_next_source_14 = tmp_for_loop_14__for_iterator;

    CHECK_OBJECT( tmp_next_source_14 );
    tmp_assign_source_54 = ITERATOR_NEXT( tmp_next_source_14 );
    if ( tmp_assign_source_54 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_14;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooooooo";
            frame_function->m_frame.f_lineno = 131;
            goto try_except_handler_19;
        }
    }

    {
        PyObject *old = tmp_for_loop_14__iter_value;
        tmp_for_loop_14__iter_value = tmp_assign_source_54;
        Py_XDECREF( old );
    }

    tmp_assign_source_55 = tmp_for_loop_14__iter_value;

    CHECK_OBJECT( tmp_assign_source_55 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_55;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_31 = par_self;

    CHECK_OBJECT( tmp_source_name_31 );
    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_addUint32 );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    tmp_called_name_40 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_40 != NULL );
    tmp_subscribed_name_3 = var_i;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_left_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_left_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 132;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    tmp_right_name_19 = par_divisor;

    CHECK_OBJECT( tmp_right_name_19 );
    tmp_args_element_name_44 = BINARY_OPERATION_MUL( tmp_left_name_19, tmp_right_name_19 );
    Py_DECREF( tmp_left_name_19 );
    if ( tmp_args_element_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 132;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    frame_function->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_44 };
        tmp_int_arg_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_args_element_name_44 );
    if ( tmp_int_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 132;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    tmp_args_element_name_43 = PyNumber_Int( tmp_int_arg_16 );
    Py_DECREF( tmp_int_arg_16 );
    if ( tmp_args_element_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 132;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    frame_function->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_43 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    Py_DECREF( tmp_args_element_name_43 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_32 = par_self;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_addUint8 );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    tmp_called_name_42 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_42 != NULL );
    tmp_subscribed_name_4 = var_i;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_pos_1;
    tmp_left_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_left_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_41 );

        exception_lineno = 133;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    tmp_right_name_20 = par_divisor;

    CHECK_OBJECT( tmp_right_name_20 );
    tmp_args_element_name_46 = BINARY_OPERATION_MUL( tmp_left_name_20, tmp_right_name_20 );
    Py_DECREF( tmp_left_name_20 );
    if ( tmp_args_element_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_41 );

        exception_lineno = 133;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    frame_function->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_46 };
        tmp_int_arg_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_args_element_name_46 );
    if ( tmp_int_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_41 );

        exception_lineno = 133;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    tmp_args_element_name_45 = PyNumber_Int( tmp_int_arg_17 );
    Py_DECREF( tmp_int_arg_17 );
    if ( tmp_args_element_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_41 );

        exception_lineno = 133;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    frame_function->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_45 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_called_name_41 );
    Py_DECREF( tmp_args_element_name_45 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description = "oooooooo";
        goto try_except_handler_19;
    }
    goto loop_start_14;
    loop_end_14:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_14__iter_value );
    tmp_for_loop_14__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_14__for_iterator );
    Py_DECREF( tmp_for_loop_14__for_iterator );
    tmp_for_loop_14__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF( tmp_for_loop_14__iter_value );
    tmp_for_loop_14__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_14__for_iterator );
    Py_DECREF( tmp_for_loop_14__for_iterator );
    tmp_for_loop_14__for_iterator = NULL;

    goto branch_end_18;
    branch_no_18:;
    tmp_left_name_21 = const_str_digest_a588886a2190f15186cdb3e844b53ed4;
    tmp_str_arg_2 = par_subatomicType;

    CHECK_OBJECT( tmp_str_arg_2 );
    tmp_right_name_21 = PyObject_Str( tmp_str_arg_2 );
    if ( tmp_right_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_ADD( tmp_left_name_21, tmp_right_name_21 );
    Py_DECREF( tmp_right_name_21 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 135;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooooo";
    goto frame_exception_exit_1;
    branch_end_18:;
    branch_end_17:;
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_1:;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_arg, par_subatomicType, par_divisor, var_funcSpecs, var_addFunc, var_argFunc, var_i );

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
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_3_putArg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)par_subatomicType );
    Py_DECREF( par_subatomicType );
    par_subatomicType = NULL;

    CHECK_OBJECT( (PyObject *)par_divisor );
    Py_DECREF( par_divisor );
    par_divisor = NULL;

    CHECK_OBJECT( (PyObject *)var_funcSpecs );
    Py_DECREF( var_funcSpecs );
    var_funcSpecs = NULL;

    Py_XDECREF( var_addFunc );
    var_addFunc = NULL;

    Py_XDECREF( var_argFunc );
    var_argFunc = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)par_subatomicType );
    Py_DECREF( par_subatomicType );
    par_subatomicType = NULL;

    CHECK_OBJECT( (PyObject *)par_divisor );
    Py_DECREF( par_divisor );
    par_divisor = NULL;

    Py_XDECREF( var_funcSpecs );
    var_funcSpecs = NULL;

    Py_XDECREF( var_addFunc );
    var_addFunc = NULL;

    Py_XDECREF( var_argFunc );
    var_argFunc = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_3_putArg );
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



static PyObject *MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_1_addServerHeader(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_1_addServerHeader,
        const_str_plain_addServerHeader,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aa0785f1a43f29bea7f45092dd0b6fa0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$distributed$PyDatagram,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_2_addOldServerHeader(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_2_addOldServerHeader,
        const_str_plain_addOldServerHeader,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd7794507f87158512f5ae339bb7449e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$distributed$PyDatagram,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_3_putArg( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$distributed$PyDatagram$$$class_1_PyDatagram$$$function_3_putArg,
        const_str_plain_putArg,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df2295783575e4c0981fe4836eaf0be6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$distributed$PyDatagram,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$distributed$PyDatagram =
{
    PyModuleDef_HEAD_INIT,
    "direct.distributed.PyDatagram",   /* m_name */
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

MOD_INIT_DECL( direct$distributed$PyDatagram )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$distributed$PyDatagram );
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
    puts("direct.distributed.PyDatagram: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.distributed.PyDatagram: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$distributed$PyDatagram" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$distributed$PyDatagram = Py_InitModule4(
        "direct.distributed.PyDatagram",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$distributed$PyDatagram = PyModule_Create( &mdef_direct$distributed$PyDatagram );
#endif

    moduledict_direct$distributed$PyDatagram = (PyDictObject *)((PyModuleObject *)module_direct$distributed$PyDatagram)->md_dict;

    CHECK_OBJECT( module_direct$distributed$PyDatagram );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_76b24f06be30781a30d554784efa3686, module_direct$distributed$PyDatagram );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$distributed$PyDatagram );

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
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_101ea91e9e7fcdca1fe636efde67f987, module_direct$distributed$PyDatagram );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_4314234708fbc134069947f7a4708b23;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$distributed$PyDatagram)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Datagram_tuple;
    frame_module->m_frame.f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Datagram );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_digest_89b460296e7ca3625b60e1c649d47260;
    tmp_globals_name_2 = ((PyModuleObject *)module_direct$distributed$PyDatagram)->md_dict;
    tmp_locals_name_2 = ((PyModuleObject *)module_direct$distributed$PyDatagram)->md_dict;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    frame_module->m_frame.f_lineno = 7;
    tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_direct$distributed$PyDatagram, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_Datagram );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Datagram );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Datagram" );
        exception_tb = NULL;

        exception_lineno = 12;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_4;

    tmp_assign_source_5 = impl_direct$distributed$PyDatagram$$$class_1_PyDatagram( NULL );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_5;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_6 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_6 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_6;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_PyDatagram;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_module->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_7;

    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
    tmp_assign_source_8 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_8 );
    UPDATE_STRING_DICT0( moduledict_direct$distributed$PyDatagram, (Nuitka_StringObject *)const_str_plain_PyDatagram, tmp_assign_source_8 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_direct$distributed$PyDatagram );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
