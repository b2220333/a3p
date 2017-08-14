/* Generated code for Python source for module 'direct.directnotify.Logger'
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

/* The _module_direct$directnotify$Logger is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$directnotify$Logger;
PyDictObject *moduledict_direct$directnotify$Logger;

/* The module constants used, if any. */
extern PyObject *const_str_plain_log;
static PyObject *const_str_plain__Logger__openLogFile;
static PyObject *const_str_plain__Logger__timeStamp;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain__Logger__logFileName;
extern PyObject *const_str_plain_write;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_b045113620d75eca0e6cd37c9d2fc9af;
static PyObject *const_str_digest_ceb3525953d7dc4a576730801efba9cf;
extern PyObject *const_str_plain_strftime;
extern PyObject *const_str_dot;
static PyObject *const_str_digest_9e40efcbab230f5ec0f6b6bbd9532810;
extern PyObject *const_str_plain_self;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_localtime;
static PyObject *const_str_digest_5926d4dce8d3c8002fe9e4ffe0229350;
extern PyObject *const_str_plain_st;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_hours;
static PyObject *const_str_digest_db8026f8679e7b6d3db00f007f365186;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_0;
static PyObject *const_str_plain_setTimeStamp;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_fileName;
static PyObject *const_str_digest_c038e3ae2cdac6dfdc23044ebe8355df;
static PyObject *const_tuple_str_plain_log_tuple;
extern PyObject *const_str_plain_math;
static PyObject *const_tuple_3eedcecd2ee5f5b4aed1f4570bee9be1_tuple;
static PyObject *const_str_digest_9fd9b525e9985133d77d3e9a76adb589;
static PyObject *const_tuple_str_plain_self_str_plain_entryString_tuple;
static PyObject *const_str_plain_logFileName;
static PyObject *const_str_digest_0b210cb946b376f14d6b60b3c62be608;
extern PyObject *const_str_plain_dt;
static PyObject *const_str_digest_e9921dfbd320c2902879255f0f598402;
extern PyObject *const_str_plain_Logger;
static PyObject *const_str_digest_7cd2a0ae33e18ee1f90f8ffc9ceafa87;
extern PyObject *const_str_plain_seconds;
static PyObject *const_str_plain__Logger__logFile;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_entryString;
static PyObject *const_int_pos_86400;
static PyObject *const_tuple_70735eb87676aec3c490c845e1b35995_tuple;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_minutes;
static PyObject *const_str_plain___closeLogFile;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_int_pos_3600;
static PyObject *const_str_digest_4ffe7d7f038b638d370bf519041d0c87;
extern PyObject *const_str_newline;
static PyObject *const_str_digest_9305609988fa1f71756bf2b8fe423ffb;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_days;
static PyObject *const_str_plain__Logger__getTimeStamp;
extern PyObject *const_str_plain_floor;
static PyObject *const_str_plain_getTimeStamp;
static PyObject *const_tuple_str_plain_self_str_plain_fileName_tuple;
static PyObject *const_str_digest_fcbd00adf814e2166e7857e3d8579443;
extern PyObject *const_str_plain_t;
static PyObject *const_str_plain_resetStartTime;
static PyObject *const_str_plain___getTimeStamp;
extern PyObject *const_tuple_str_plain_self_str_plain_bool_tuple;
static PyObject *const_str_plain__Logger__startTime;
static PyObject *const_str_plain___openLogFile;
static PyObject *const_str_plain__Logger__closeLogFile;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__Logger__openLogFile = UNSTREAM_STRING( &constant_bin[ 37004 ], 20, 1 );
    const_str_plain__Logger__timeStamp = UNSTREAM_STRING( &constant_bin[ 37024 ], 18, 1 );
    const_str_plain__Logger__logFileName = UNSTREAM_STRING( &constant_bin[ 37042 ], 20, 1 );
    const_str_digest_b045113620d75eca0e6cd37c9d2fc9af = UNSTREAM_STRING( &constant_bin[ 37062 ], 17, 0 );
    const_str_digest_ceb3525953d7dc4a576730801efba9cf = UNSTREAM_STRING( &constant_bin[ 37079 ], 26, 0 );
    const_str_digest_9e40efcbab230f5ec0f6b6bbd9532810 = UNSTREAM_STRING( &constant_bin[ 37105 ], 64, 0 );
    const_str_digest_5926d4dce8d3c8002fe9e4ffe0229350 = UNSTREAM_STRING( &constant_bin[ 37169 ], 36, 0 );
    const_str_digest_db8026f8679e7b6d3db00f007f365186 = UNSTREAM_STRING( &constant_bin[ 37205 ], 29, 0 );
    const_str_plain_setTimeStamp = UNSTREAM_STRING( &constant_bin[ 37234 ], 12, 1 );
    const_str_digest_c038e3ae2cdac6dfdc23044ebe8355df = UNSTREAM_STRING( &constant_bin[ 37246 ], 21, 0 );
    const_tuple_str_plain_log_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_log_tuple, 0, const_str_plain_log ); Py_INCREF( const_str_plain_log );
    const_tuple_3eedcecd2ee5f5b4aed1f4570bee9be1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3eedcecd2ee5f5b4aed1f4570bee9be1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3eedcecd2ee5f5b4aed1f4570bee9be1_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_3eedcecd2ee5f5b4aed1f4570bee9be1_tuple, 2, const_str_plain_st ); Py_INCREF( const_str_plain_st );
    const_str_plain_logFileName = UNSTREAM_STRING( &constant_bin[ 37051 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_3eedcecd2ee5f5b4aed1f4570bee9be1_tuple, 3, const_str_plain_logFileName ); Py_INCREF( const_str_plain_logFileName );
    const_str_digest_9fd9b525e9985133d77d3e9a76adb589 = UNSTREAM_STRING( &constant_bin[ 37267 ], 53, 0 );
    const_tuple_str_plain_self_str_plain_entryString_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_entryString_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_entryString = UNSTREAM_STRING( &constant_bin[ 37320 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_entryString_tuple, 1, const_str_plain_entryString ); Py_INCREF( const_str_plain_entryString );
    const_str_digest_0b210cb946b376f14d6b60b3c62be608 = UNSTREAM_STRING( &constant_bin[ 37331 ], 84, 0 );
    const_str_digest_e9921dfbd320c2902879255f0f598402 = UNSTREAM_STRING( &constant_bin[ 37415 ], 72, 0 );
    const_str_digest_7cd2a0ae33e18ee1f90f8ffc9ceafa87 = UNSTREAM_STRING( &constant_bin[ 37487 ], 94, 0 );
    const_str_plain__Logger__logFile = UNSTREAM_STRING( &constant_bin[ 37042 ], 16, 1 );
    const_int_pos_86400 = PyInt_FromLong( 86400l );
    const_tuple_70735eb87676aec3c490c845e1b35995_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 2, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 3, const_str_plain_days ); Py_INCREF( const_str_plain_days );
    PyTuple_SET_ITEM( const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 4, const_str_plain_hours ); Py_INCREF( const_str_plain_hours );
    PyTuple_SET_ITEM( const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 5, const_str_plain_minutes ); Py_INCREF( const_str_plain_minutes );
    PyTuple_SET_ITEM( const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 6, const_str_plain_seconds ); Py_INCREF( const_str_plain_seconds );
    const_str_plain___closeLogFile = UNSTREAM_STRING( &constant_bin[ 37581 ], 14, 1 );
    const_str_digest_4ffe7d7f038b638d370bf519041d0c87 = UNSTREAM_STRING( &constant_bin[ 37595 ], 79, 0 );
    const_str_digest_9305609988fa1f71756bf2b8fe423ffb = UNSTREAM_STRING( &constant_bin[ 37674 ], 70, 0 );
    const_str_plain__Logger__getTimeStamp = UNSTREAM_STRING( &constant_bin[ 37744 ], 21, 1 );
    const_str_plain_getTimeStamp = UNSTREAM_STRING( &constant_bin[ 37753 ], 12, 1 );
    const_tuple_str_plain_self_str_plain_fileName_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fileName_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_fileName_tuple, 1, const_str_plain_fileName ); Py_INCREF( const_str_plain_fileName );
    const_str_digest_fcbd00adf814e2166e7857e3d8579443 = UNSTREAM_STRING( &constant_bin[ 37765 ], 64, 0 );
    const_str_plain_resetStartTime = UNSTREAM_STRING( &constant_bin[ 37829 ], 14, 1 );
    const_str_plain___getTimeStamp = UNSTREAM_STRING( &constant_bin[ 37751 ], 14, 1 );
    const_str_plain__Logger__startTime = UNSTREAM_STRING( &constant_bin[ 37843 ], 18, 1 );
    const_str_plain___openLogFile = UNSTREAM_STRING( &constant_bin[ 37011 ], 13, 1 );
    const_str_plain__Logger__closeLogFile = UNSTREAM_STRING( &constant_bin[ 37861 ], 21, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$directnotify$Logger( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_63744289aeedf474155b4320f4a7f08d;
static PyCodeObject *codeobj_0dfd0b0e9074a2303675451fee7e72cf;
static PyCodeObject *codeobj_b5dc720fa47e3bf048c713f71bf58c7b;
static PyCodeObject *codeobj_453e88939a3ad64d9dee37e593076dd2;
static PyCodeObject *codeobj_e2b7a0763acd1b079e4552c0bdded94f;
static PyCodeObject *codeobj_35cde9f1d7a28167be1ed9d5cc8d2c97;
static PyCodeObject *codeobj_1bb3df088974c9c2f00a28c9711fdd97;
static PyCodeObject *codeobj_8aefb9e6e8e2ef397a0f6f0bec7b737c;
static PyCodeObject *codeobj_93a1443b0cfa86d259f5c27f82cc6153;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_db8026f8679e7b6d3db00f007f365186 );
    codeobj_63744289aeedf474155b4320f4a7f08d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Logger, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_0dfd0b0e9074a2303675451fee7e72cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___closeLogFile, 60, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b5dc720fa47e3bf048c713f71bf58c7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getTimeStamp, 67, const_tuple_70735eb87676aec3c490c845e1b35995_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_453e88939a3ad64d9dee37e593076dd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 8, const_tuple_str_plain_self_str_plain_fileName_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e2b7a0763acd1b079e4552c0bdded94f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___openLogFile, 50, const_tuple_3eedcecd2ee5f5b4aed1f4570bee9be1_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35cde9f1d7a28167be1ed9d5cc8d2c97 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getTimeStamp, 23, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1bb3df088974c9c2f00a28c9711fdd97 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_log, 38, const_tuple_str_plain_self_str_plain_entryString_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8aefb9e6e8e2ef397a0f6f0bec7b737c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resetStartTime, 32, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_93a1443b0cfa86d259f5c27f82cc6153 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setTimeStamp, 17, const_tuple_str_plain_self_str_plain_bool_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_direct$directnotify$Logger$$$class_1_Logger( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_2_setTimeStamp(  );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_3_getTimeStamp(  );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_4_resetStartTime(  );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_5_log(  );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_6___openLogFile(  );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_7___closeLogFile(  );


static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_8___getTimeStamp(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_direct$directnotify$Logger$$$class_1_Logger( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_setTimeStamp = NULL;
    PyObject *var_getTimeStamp = NULL;
    PyObject *var_resetStartTime = NULL;
    PyObject *var_log = NULL;
    PyObject *var__Logger__openLogFile = NULL;
    PyObject *var__Logger__closeLogFile = NULL;
    PyObject *var__Logger__getTimeStamp = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_defaults_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_ceb3525953d7dc4a576730801efba9cf;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_defaults_1 = const_tuple_str_plain_log_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_2 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_1___init__( tmp_defaults_1 );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_2_setTimeStamp(  );
    assert( var_setTimeStamp == NULL );
    var_setTimeStamp = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_3_getTimeStamp(  );
    assert( var_getTimeStamp == NULL );
    var_getTimeStamp = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_4_resetStartTime(  );
    assert( var_resetStartTime == NULL );
    var_resetStartTime = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_5_log(  );
    assert( var_log == NULL );
    var_log = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_6___openLogFile(  );
    assert( var__Logger__openLogFile == NULL );
    var__Logger__openLogFile = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_7___closeLogFile(  );
    assert( var__Logger__closeLogFile == NULL );
    var__Logger__closeLogFile = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_8___getTimeStamp(  );
    assert( var__Logger__getTimeStamp == NULL );
    var__Logger__getTimeStamp = tmp_assign_source_9;

    // Tried code:
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

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var_setTimeStamp )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setTimeStamp,
            var_setTimeStamp
        );

        assert( res == 0 );
    }

    if ( var_getTimeStamp )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getTimeStamp,
            var_getTimeStamp
        );

        assert( res == 0 );
    }

    if ( var_resetStartTime )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_resetStartTime,
            var_resetStartTime
        );

        assert( res == 0 );
    }

    if ( var_log )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_log,
            var_log
        );

        assert( res == 0 );
    }

    if ( var__Logger__openLogFile )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__Logger__openLogFile,
            var__Logger__openLogFile
        );

        assert( res == 0 );
    }

    if ( var__Logger__closeLogFile )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__Logger__closeLogFile,
            var__Logger__closeLogFile
        );

        assert( res == 0 );
    }

    if ( var__Logger__getTimeStamp )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__Logger__getTimeStamp,
            var__Logger__getTimeStamp
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_setTimeStamp );
    Py_DECREF( var_setTimeStamp );
    var_setTimeStamp = NULL;

    CHECK_OBJECT( (PyObject *)var_getTimeStamp );
    Py_DECREF( var_getTimeStamp );
    var_getTimeStamp = NULL;

    CHECK_OBJECT( (PyObject *)var_resetStartTime );
    Py_DECREF( var_resetStartTime );
    var_resetStartTime = NULL;

    CHECK_OBJECT( (PyObject *)var_log );
    Py_DECREF( var_log );
    var_log = NULL;

    CHECK_OBJECT( (PyObject *)var__Logger__openLogFile );
    Py_DECREF( var__Logger__openLogFile );
    var__Logger__openLogFile = NULL;

    CHECK_OBJECT( (PyObject *)var__Logger__closeLogFile );
    Py_DECREF( var__Logger__closeLogFile );
    var__Logger__closeLogFile = NULL;

    CHECK_OBJECT( (PyObject *)var__Logger__getTimeStamp );
    Py_DECREF( var__Logger__getTimeStamp );
    var__Logger__getTimeStamp = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_setTimeStamp );
    Py_DECREF( var_setTimeStamp );
    var_setTimeStamp = NULL;

    CHECK_OBJECT( (PyObject *)var_getTimeStamp );
    Py_DECREF( var_getTimeStamp );
    var_getTimeStamp = NULL;

    CHECK_OBJECT( (PyObject *)var_resetStartTime );
    Py_DECREF( var_resetStartTime );
    var_resetStartTime = NULL;

    CHECK_OBJECT( (PyObject *)var_log );
    Py_DECREF( var_log );
    var_log = NULL;

    CHECK_OBJECT( (PyObject *)var__Logger__openLogFile );
    Py_DECREF( var__Logger__openLogFile );
    var__Logger__openLogFile = NULL;

    CHECK_OBJECT( (PyObject *)var__Logger__closeLogFile );
    Py_DECREF( var__Logger__closeLogFile );
    var__Logger__closeLogFile = NULL;

    CHECK_OBJECT( (PyObject *)var__Logger__getTimeStamp );
    Py_DECREF( var__Logger__getTimeStamp );
    var__Logger__getTimeStamp = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fileName = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_453e88939a3ad64d9dee37e593076dd2, module_direct$directnotify$Logger, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = const_int_pos_1;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__Logger__timeStamp, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = const_float_0_0;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__Logger__startTime, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__Logger__logFile, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_fileName;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__Logger__logFileName, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description = "oo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_fileName );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fileName );
    Py_DECREF( par_fileName );
    par_fileName = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fileName );
    Py_DECREF( par_fileName );
    par_fileName = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_1___init__ );
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


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_2_setTimeStamp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bool = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_93a1443b0cfa86d259f5c27f82cc6153, module_direct$directnotify$Logger, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_bool;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__Logger__timeStamp, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description = "oo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_bool );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_2_setTimeStamp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bool );
    Py_DECREF( par_bool );
    par_bool = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bool );
    Py_DECREF( par_bool );
    par_bool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_2_setTimeStamp );
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


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_3_getTimeStamp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_35cde9f1d7a28167be1ed9d5cc8d2c97, module_direct$directnotify$Logger, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__Logger__timeStamp );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_3_getTimeStamp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_3_getTimeStamp );
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


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_4_resetStartTime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8aefb9e6e8e2ef397a0f6f0bec7b737c, module_direct$directnotify$Logger, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 36;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 36;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__Logger__startTime, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 36;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_4_resetStartTime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_4_resetStartTime );
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


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_5_log( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_entryString = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1bb3df088974c9c2f00a28c9711fdd97, module_direct$directnotify$Logger, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__Logger__logFile );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 41;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 42;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__Logger__openLogFile );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__Logger__timeStamp );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 43;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__Logger__logFile );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 44;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__Logger__getTimeStamp );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 44;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__Logger__logFile );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_write );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_entryString;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_str_newline;
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 45;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_entryString );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_5_log );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_entryString );
    Py_DECREF( par_entryString );
    par_entryString = NULL;

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

    CHECK_OBJECT( (PyObject *)par_entryString );
    Py_DECREF( par_entryString );
    par_entryString = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_5_log );
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


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_6___openLogFile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *var_st = NULL;
    PyObject *var_logFileName = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e2b7a0763acd1b079e4552c0bdded94f, module_direct$directnotify$Logger, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 54;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_resetStartTime );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 55;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_localtime );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__Logger__startTime );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 55;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_t == NULL );
    var_t = tmp_assign_source_1;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_str_digest_b045113620d75eca0e6cd37c9d2fc9af;
    tmp_args_element_name_3 = var_t;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_function->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_strftime, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_st == NULL );
    var_st = tmp_assign_source_2;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__Logger__logFileName );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_str_dot;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = var_st;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_logFileName == NULL );
    var_logFileName = tmp_assign_source_3;

    tmp_open_filename_1 = var_logFileName;

    CHECK_OBJECT( tmp_open_filename_1 );
    tmp_open_mode_1 = const_str_plain_w;
    tmp_assattr_name_1 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__Logger__logFile, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 58;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, var_t, var_st, var_logFileName );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_6___openLogFile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_st );
    Py_DECREF( var_st );
    var_st = NULL;

    CHECK_OBJECT( (PyObject *)var_logFileName );
    Py_DECREF( var_logFileName );
    var_logFileName = NULL;

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

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    Py_XDECREF( var_logFileName );
    var_logFileName = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_6___openLogFile );
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


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_7___closeLogFile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0dfd0b0e9074a2303675451fee7e72cf, module_direct$directnotify$Logger, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__Logger__logFile );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 64;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__Logger__logFile );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 65;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_7___closeLogFile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_7___closeLogFile );
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


static PyObject *impl_direct$directnotify$Logger$$$class_1_Logger$$$function_8___getTimeStamp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_t = NULL;
    PyObject *var_dt = NULL;
    PyObject *var_days = NULL;
    PyObject *var_hours = NULL;
    PyObject *var_minutes = NULL;
    PyObject *var_seconds = NULL;
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
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_GtE_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b5dc720fa47e3bf048c713f71bf58c7b, module_direct$directnotify$Logger, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
        exception_tb = NULL;

        exception_lineno = 71;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 71;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_t == NULL );
    var_t = tmp_assign_source_1;

    tmp_left_name_1 = var_t;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__Logger__startTime );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dt == NULL );
    var_dt = tmp_assign_source_2;

    tmp_compare_left_1 = var_dt;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_86400;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
        exception_tb = NULL;

        exception_lineno = 74;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_floor );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = var_dt;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_86400;
    tmp_args_element_name_1 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 74;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_days == NULL );
    var_days = tmp_assign_source_3;

    tmp_left_name_3 = var_dt;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_86400;
    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_dt;
        assert( old != NULL );
        var_dt = tmp_assign_source_4;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_5 = const_int_0;
    assert( var_days == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_days = tmp_assign_source_5;

    branch_end_1:;
    tmp_compare_left_2 = var_dt;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_pos_3600;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
        exception_tb = NULL;

        exception_lineno = 79;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_floor );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = var_dt;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = const_int_pos_3600;
    tmp_args_element_name_2 = BINARY_OPERATION_DIV( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 79;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hours == NULL );
    var_hours = tmp_assign_source_6;

    tmp_left_name_5 = var_dt;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = const_int_pos_3600;
    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_dt;
        assert( old != NULL );
        var_dt = tmp_assign_source_7;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_8 = const_int_0;
    assert( var_hours == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_hours = tmp_assign_source_8;

    branch_end_2:;
    tmp_compare_left_3 = var_dt;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_pos_60;
    tmp_cmp_GtE_3 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_floor );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = var_dt;

    if ( tmp_left_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_60;
    tmp_args_element_name_3 = BINARY_OPERATION_DIV( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 84;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_minutes == NULL );
    var_minutes = tmp_assign_source_9;

    tmp_left_name_7 = var_dt;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_60;
    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_dt;
        var_dt = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_11 = const_int_0;
    assert( var_minutes == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_minutes = tmp_assign_source_11;

    branch_end_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
        exception_tb = NULL;

        exception_lineno = 88;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ceil );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_dt;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;

        exception_lineno = 88;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_int_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_int_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = PyNumber_Int( tmp_int_arg_4 );
    Py_DECREF( tmp_int_arg_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_seconds == NULL );
    var_seconds = tmp_assign_source_12;

    tmp_left_name_8 = const_str_digest_c038e3ae2cdac6dfdc23044ebe8355df;
    tmp_right_name_8 = PyTuple_New( 4 );
    tmp_tuple_element_1 = var_days;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_hours;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_minutes;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_8, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_seconds;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_8, 3, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, var_t, var_dt, var_days, var_hours, var_minutes, var_seconds );

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
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_8___getTimeStamp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_t );
    Py_DECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    CHECK_OBJECT( (PyObject *)var_days );
    Py_DECREF( var_days );
    var_days = NULL;

    CHECK_OBJECT( (PyObject *)var_hours );
    Py_DECREF( var_hours );
    var_hours = NULL;

    CHECK_OBJECT( (PyObject *)var_minutes );
    Py_DECREF( var_minutes );
    var_minutes = NULL;

    CHECK_OBJECT( (PyObject *)var_seconds );
    Py_DECREF( var_seconds );
    var_seconds = NULL;

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

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_days );
    var_days = NULL;

    Py_XDECREF( var_hours );
    var_hours = NULL;

    Py_XDECREF( var_minutes );
    var_minutes = NULL;

    Py_XDECREF( var_seconds );
    var_seconds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$directnotify$Logger$$$class_1_Logger$$$function_8___getTimeStamp );
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



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_453e88939a3ad64d9dee37e593076dd2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_5926d4dce8d3c8002fe9e4ffe0229350,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_2_setTimeStamp(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_2_setTimeStamp,
        const_str_plain_setTimeStamp,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_93a1443b0cfa86d259f5c27f82cc6153,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_e9921dfbd320c2902879255f0f598402,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_3_getTimeStamp(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_3_getTimeStamp,
        const_str_plain_getTimeStamp,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_35cde9f1d7a28167be1ed9d5cc8d2c97,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_0b210cb946b376f14d6b60b3c62be608,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_4_resetStartTime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_4_resetStartTime,
        const_str_plain_resetStartTime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8aefb9e6e8e2ef397a0f6f0bec7b737c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_9305609988fa1f71756bf2b8fe423ffb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_5_log(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_5_log,
        const_str_plain_log,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1bb3df088974c9c2f00a28c9711fdd97,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_9e40efcbab230f5ec0f6b6bbd9532810,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_6___openLogFile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_6___openLogFile,
        const_str_plain___openLogFile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e2b7a0763acd1b079e4552c0bdded94f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_fcbd00adf814e2166e7857e3d8579443,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_7___closeLogFile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_7___closeLogFile,
        const_str_plain___closeLogFile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0dfd0b0e9074a2303675451fee7e72cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_9fd9b525e9985133d77d3e9a76adb589,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$directnotify$Logger$$$class_1_Logger$$$function_8___getTimeStamp(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$directnotify$Logger$$$class_1_Logger$$$function_8___getTimeStamp,
        const_str_plain___getTimeStamp,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b5dc720fa47e3bf048c713f71bf58c7b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$directnotify$Logger,
        const_str_digest_4ffe7d7f038b638d370bf519041d0c87,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$directnotify$Logger =
{
    PyModuleDef_HEAD_INIT,
    "direct.directnotify.Logger",   /* m_name */
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

MOD_INIT_DECL( direct$directnotify$Logger )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$directnotify$Logger );
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
    puts("direct.directnotify.Logger: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.directnotify.Logger: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$directnotify$Logger" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$directnotify$Logger = Py_InitModule4(
        "direct.directnotify.Logger",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$directnotify$Logger = PyModule_Create( &mdef_direct$directnotify$Logger );
#endif

    moduledict_direct$directnotify$Logger = (PyDictObject *)((PyModuleObject *)module_direct$directnotify$Logger)->md_dict;

    CHECK_OBJECT( module_direct$directnotify$Logger );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ceb3525953d7dc4a576730801efba9cf, module_direct$directnotify$Logger );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$directnotify$Logger );

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
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_7cd2a0ae33e18ee1f90f8ffc9ceafa87;
    UPDATE_STRING_DICT0( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_name_name_1 = const_str_plain_time;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$directnotify$Logger)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_3 != NULL );
    UPDATE_STRING_DICT1( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_plain_math;
    tmp_globals_name_2 = ((PyModuleObject *)module_direct$directnotify$Logger)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_4 );
    tmp_assign_source_5 = impl_direct$directnotify$Logger$$$class_1_Logger( NULL );
    assert( tmp_assign_source_5 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_5;

    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_63744289aeedf474155b4320f4a7f08d, module_direct$directnotify$Logger );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    // Tried code:
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


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_6 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_6;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_Logger;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_module->m_frame.f_lineno = 7;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
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
    UPDATE_STRING_DICT0( moduledict_direct$directnotify$Logger, (Nuitka_StringObject *)const_str_plain_Logger, tmp_assign_source_8 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_direct$directnotify$Logger );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
