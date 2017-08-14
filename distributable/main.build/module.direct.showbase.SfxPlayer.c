/* Generated code for Python source for module 'direct.showbase.SfxPlayer'
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

/* The _module_direct$showbase$SfxPlayer is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$showbase$SfxPlayer;
PyDictObject *moduledict_direct$showbase$SfxPlayer;

/* The module constants used, if any. */
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_digest_4314234708fbc134069947f7a4708b23;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_setTime;
static PyObject *const_str_plain_getNetAudioVolume;
static PyObject *const_str_plain_rawCutoffDistance;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_looping;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_UseInverseSquare;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_finalVolume;
extern PyObject *const_str_plain_setLoop;
static PyObject *const_str_digest_c4477beea1636a99398a047e84c7500e;
extern PyObject *const_str_plain_sfx;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_cutoffDistance;
static PyObject *const_str_plain_getLocalizedVolume;
static PyObject *const_tuple_str_plain_self_str_plain_d_str_plain_rawCutoffDistance_tuple;
static PyObject *const_tuple_float_300_0_tuple;
extern PyObject *const_float_0_0;
static PyObject *const_str_plain_listenerNode;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_list_str_plain_SfxPlayer_list;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_fb6f8a349fb72fda6a68476972b25db0;
extern PyObject *const_str_plain_AudioSound;
static PyObject *const_str_plain_setCutoffDistance;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_sd;
extern PyObject *const_int_0;
static PyObject *const_tuple_float_120_0_tuple;
static PyObject *const_str_digest_c93c96226262c12710974e8d9d595382;
extern PyObject *const_str_plain_PLAYING;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_SfxPlayer;
static PyObject *const_str_digest_9ff5233c3d56f5464e66c6d4562de818;
extern PyObject *const_float_300_0;
static PyObject *const_str_plain_cutoffVolume;
extern PyObject *const_str_plain_isEmpty;
extern PyObject *const_str_plain_play;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_getDistance;
extern PyObject *const_str_plain_setVolume;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_d3b63d4c7cf0f39b01686e59892dfb46;
extern PyObject *const_tuple_int_0_int_pos_1_none_float_0_0_none_none_none_tuple;
extern PyObject *const_str_plain_volume;
extern PyObject *const_float_0_02;
extern PyObject *const_str_plain_interrupt;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_playSfx;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_cutoff;
static PyObject *const_float_120_0;
extern PyObject *const_str_plain_cam;
static PyObject *const_str_digest_f1b503772b8b990822a499a807f86aef;
static PyObject *const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple;
static PyObject *const_str_plain_setFinalVolume;
static PyObject *const_str_digest_8ddec075be7cf199515bea897ed8953e;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_getCutoffDistance;
static PyObject *const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple;
static PyObject *const_str_plain_distanceScale;
static PyObject *const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_getNetAudioVolume = UNSTREAM_STRING( &constant_bin[ 164643 ], 17, 1 );
    const_str_plain_rawCutoffDistance = UNSTREAM_STRING( &constant_bin[ 164660 ], 17, 1 );
    const_str_plain_UseInverseSquare = UNSTREAM_STRING( &constant_bin[ 164677 ], 16, 1 );
    const_str_plain_finalVolume = UNSTREAM_STRING( &constant_bin[ 164693 ], 11, 1 );
    const_str_digest_c4477beea1636a99398a047e84c7500e = UNSTREAM_STRING( &constant_bin[ 164704 ], 52, 0 );
    const_str_plain_cutoffDistance = UNSTREAM_STRING( &constant_bin[ 164756 ], 14, 1 );
    const_str_plain_getLocalizedVolume = UNSTREAM_STRING( &constant_bin[ 164770 ], 18, 1 );
    const_tuple_str_plain_self_str_plain_d_str_plain_rawCutoffDistance_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_d_str_plain_rawCutoffDistance_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_d_str_plain_rawCutoffDistance_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_d_str_plain_rawCutoffDistance_tuple, 2, const_str_plain_rawCutoffDistance ); Py_INCREF( const_str_plain_rawCutoffDistance );
    const_tuple_float_300_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_300_0_tuple, 0, const_float_300_0 ); Py_INCREF( const_float_300_0 );
    const_str_plain_listenerNode = UNSTREAM_STRING( &constant_bin[ 164788 ], 12, 1 );
    const_list_str_plain_SfxPlayer_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_SfxPlayer_list, 0, const_str_plain_SfxPlayer ); Py_INCREF( const_str_plain_SfxPlayer );
    const_str_digest_fb6f8a349fb72fda6a68476972b25db0 = UNSTREAM_STRING( &constant_bin[ 164800 ], 28, 0 );
    const_str_plain_setCutoffDistance = UNSTREAM_STRING( &constant_bin[ 164828 ], 17, 1 );
    const_tuple_float_120_0_tuple = PyTuple_New( 1 );
    const_float_120_0 = UNSTREAM_FLOAT( &constant_bin[ 164845 ] );
    PyTuple_SET_ITEM( const_tuple_float_120_0_tuple, 0, const_float_120_0 ); Py_INCREF( const_float_120_0 );
    const_str_digest_c93c96226262c12710974e8d9d595382 = UNSTREAM_STRING( &constant_bin[ 164853 ], 34, 0 );
    const_str_digest_9ff5233c3d56f5464e66c6d4562de818 = UNSTREAM_STRING( &constant_bin[ 164887 ], 95, 0 );
    const_str_plain_cutoffVolume = UNSTREAM_STRING( &constant_bin[ 164982 ], 12, 1 );
    const_str_plain_getDistance = UNSTREAM_STRING( &constant_bin[ 164994 ], 11, 1 );
    const_str_digest_d3b63d4c7cf0f39b01686e59892dfb46 = UNSTREAM_STRING( &constant_bin[ 165005 ], 60, 0 );
    const_str_digest_f1b503772b8b990822a499a807f86aef = UNSTREAM_STRING( &constant_bin[ 165065 ], 165, 0 );
    const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 1, const_str_plain_sfx ); Py_INCREF( const_str_plain_sfx );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 2, const_str_plain_looping ); Py_INCREF( const_str_plain_looping );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 3, const_str_plain_interrupt ); Py_INCREF( const_str_plain_interrupt );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 4, const_str_plain_volume ); Py_INCREF( const_str_plain_volume );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 5, const_str_plain_time ); Py_INCREF( const_str_plain_time );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 6, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 7, const_str_plain_listenerNode ); Py_INCREF( const_str_plain_listenerNode );
    PyTuple_SET_ITEM( const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 8, const_str_plain_cutoff ); Py_INCREF( const_str_plain_cutoff );
    const_str_plain_setFinalVolume = UNSTREAM_STRING( &constant_bin[ 165230 ], 14, 1 );
    const_str_digest_8ddec075be7cf199515bea897ed8953e = UNSTREAM_STRING( &constant_bin[ 165244 ], 25, 0 );
    const_str_plain_getCutoffDistance = UNSTREAM_STRING( &constant_bin[ 165269 ], 17, 1 );
    const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 2, const_str_plain_listenerNode ); Py_INCREF( const_str_plain_listenerNode );
    PyTuple_SET_ITEM( const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 3, const_str_plain_cutoff ); Py_INCREF( const_str_plain_cutoff );
    PyTuple_SET_ITEM( const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 4, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 5, const_str_plain_volume ); Py_INCREF( const_str_plain_volume );
    PyTuple_SET_ITEM( const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 6, const_str_plain_sd ); Py_INCREF( const_str_plain_sd );
    const_str_plain_distanceScale = UNSTREAM_STRING( &constant_bin[ 165286 ], 13, 1 );
    const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 1, const_str_plain_sfx ); Py_INCREF( const_str_plain_sfx );
    PyTuple_SET_ITEM( const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 2, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 3, const_str_plain_volume ); Py_INCREF( const_str_plain_volume );
    PyTuple_SET_ITEM( const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 4, const_str_plain_listenerNode ); Py_INCREF( const_str_plain_listenerNode );
    PyTuple_SET_ITEM( const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 5, const_str_plain_cutoff ); Py_INCREF( const_str_plain_cutoff );
    PyTuple_SET_ITEM( const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 6, const_str_plain_finalVolume ); Py_INCREF( const_str_plain_finalVolume );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$showbase$SfxPlayer( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3e4575468b0ba81d6a05e7db757f311e;
static PyCodeObject *codeobj_b3b38166a9991d3c5e0194a5caabcac7;
static PyCodeObject *codeobj_36bcbad9e2b655b091b4051439ad4b02;
static PyCodeObject *codeobj_bf39b622843252c19963b4791fda1da2;
static PyCodeObject *codeobj_d45776b24e6587a24be143a17ca52cec;
static PyCodeObject *codeobj_bde63a87fac4fad72c72a2e249f40fbc;
static PyCodeObject *codeobj_5fa4e1731c83b3b93fb155b937c65b85;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_fb6f8a349fb72fda6a68476972b25db0 );
    codeobj_3e4575468b0ba81d6a05e7db757f311e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SfxPlayer, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_b3b38166a9991d3c5e0194a5caabcac7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 16, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36bcbad9e2b655b091b4051439ad4b02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getCutoffDistance, 40, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bf39b622843252c19963b4791fda1da2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getLocalizedVolume, 44, const_tuple_c62e70b79f4e5a11df11e45abd12820d_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d45776b24e6587a24be143a17ca52cec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_playSfx, 69, const_tuple_7ed34176a5ba8dda826e02ed487e665a_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bde63a87fac4fad72c72a2e249f40fbc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setCutoffDistance, 30, const_tuple_str_plain_self_str_plain_d_str_plain_rawCutoffDistance_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5fa4e1731c83b3b93fb155b937c65b85 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setFinalVolume, 85, const_tuple_ed637a3ba19642f0fe24a0fdfe19ef91_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_2_setCutoffDistance(  );


static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_3_getCutoffDistance(  );


static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_4_getLocalizedVolume( PyObject *defaults );


static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_5_playSfx( PyObject *defaults );


static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_6_setFinalVolume( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_UseInverseSquare = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_setCutoffDistance = NULL;
    PyObject *var_getCutoffDistance = NULL;
    PyObject *var_getLocalizedVolume = NULL;
    PyObject *var_playSfx = NULL;
    PyObject *var_setFinalVolume = NULL;
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
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_8ddec075be7cf199515bea897ed8953e;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c4477beea1636a99398a047e84c7500e;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_0;
    assert( var_UseInverseSquare == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_UseInverseSquare = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_1___init__(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_2_setCutoffDistance(  );
    assert( var_setCutoffDistance == NULL );
    var_setCutoffDistance = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_3_getCutoffDistance(  );
    assert( var_getCutoffDistance == NULL );
    var_getCutoffDistance = tmp_assign_source_6;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_7 = MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_4_getLocalizedVolume( tmp_defaults_1 );
    assert( var_getLocalizedVolume == NULL );
    var_getLocalizedVolume = tmp_assign_source_7;

    tmp_defaults_2 = const_tuple_int_0_int_pos_1_none_float_0_0_none_none_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_8 = MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_5_playSfx( tmp_defaults_2 );
    assert( var_playSfx == NULL );
    var_playSfx = tmp_assign_source_8;

    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_9 = MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_6_setFinalVolume( tmp_defaults_3 );
    assert( var_setFinalVolume == NULL );
    var_setFinalVolume = tmp_assign_source_9;

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

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    if ( var_UseInverseSquare )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_UseInverseSquare,
            var_UseInverseSquare
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

    if ( var_setCutoffDistance )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setCutoffDistance,
            var_setCutoffDistance
        );

        assert( res == 0 );
    }

    if ( var_getCutoffDistance )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getCutoffDistance,
            var_getCutoffDistance
        );

        assert( res == 0 );
    }

    if ( var_getLocalizedVolume )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getLocalizedVolume,
            var_getLocalizedVolume
        );

        assert( res == 0 );
    }

    if ( var_playSfx )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_playSfx,
            var_playSfx
        );

        assert( res == 0 );
    }

    if ( var_setFinalVolume )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setFinalVolume,
            var_setFinalVolume
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_UseInverseSquare );
    Py_DECREF( var_UseInverseSquare );
    var_UseInverseSquare = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_setCutoffDistance );
    Py_DECREF( var_setCutoffDistance );
    var_setCutoffDistance = NULL;

    CHECK_OBJECT( (PyObject *)var_getCutoffDistance );
    Py_DECREF( var_getCutoffDistance );
    var_getCutoffDistance = NULL;

    CHECK_OBJECT( (PyObject *)var_getLocalizedVolume );
    Py_DECREF( var_getLocalizedVolume );
    var_getLocalizedVolume = NULL;

    CHECK_OBJECT( (PyObject *)var_playSfx );
    Py_DECREF( var_playSfx );
    var_playSfx = NULL;

    CHECK_OBJECT( (PyObject *)var_setFinalVolume );
    Py_DECREF( var_setFinalVolume );
    var_setFinalVolume = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b3b38166a9991d3c5e0194a5caabcac7, module_direct$showbase$SfxPlayer, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = const_float_0_02;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cutoffVolume, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain_SfxPlayer );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SfxPlayer );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SfxPlayer" );
        exception_tb = NULL;

        exception_lineno = 23;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UseInverseSquare );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 23;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
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
    frame_function->m_frame.f_lineno = 24;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_setCutoffDistance, &PyTuple_GET_ITEM( const_tuple_float_300_0_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_self;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 28;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_setCutoffDistance, &PyTuple_GET_ITEM( const_tuple_float_120_0_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_1___init__ );
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


static PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_2_setCutoffDistance( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *var_rawCutoffDistance = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bde63a87fac4fad72c72a2e249f40fbc, module_direct$showbase$SfxPlayer, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_d;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cutoffDistance, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
        exception_tb = NULL;

        exception_lineno = 34;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sqrt );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_float_1_0;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cutoffVolume );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 34;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 34;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 34;
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


        exception_lineno = 34;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_rawCutoffDistance == NULL );
    var_rawCutoffDistance = tmp_assign_source_1;

    tmp_left_name_2 = var_rawCutoffDistance;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cutoffDistance );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_distanceScale, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 38;
        type_description = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_d, var_rawCutoffDistance );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_2_setCutoffDistance );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_rawCutoffDistance );
    Py_DECREF( var_rawCutoffDistance );
    var_rawCutoffDistance = NULL;

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

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_rawCutoffDistance );
    var_rawCutoffDistance = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_2_setCutoffDistance );
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


static PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_3_getCutoffDistance( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_36bcbad9e2b655b091b4051439ad4b02, module_direct$showbase$SfxPlayer, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cutoffDistance );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_3_getCutoffDistance );
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_3_getCutoffDistance );
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


static PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_4_getLocalizedVolume( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    PyObject *par_listenerNode = python_pars[ 2 ];
    PyObject *par_cutoff = python_pars[ 3 ];
    PyObject *var_d = NULL;
    PyObject *var_volume = NULL;
    PyObject *var_sd = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_d == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_d = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bf39b622843252c19963b4791fda1da2, module_direct$showbase$SfxPlayer, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_node;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 51;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isEmpty );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 51;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_and_left_value_1 = par_listenerNode;

    CHECK_OBJECT( tmp_and_left_value_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_called_instance_2 = par_listenerNode;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 52;
    tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_isEmpty );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_3 = par_node;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_1 = par_listenerNode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_getDistance, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_d;
        assert( old != NULL );
        var_d = tmp_assign_source_2;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_1 = par_node;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getDistance );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain_base );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "base" );
        exception_tb = NULL;

        exception_lineno = 55;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cam );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 55;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_d;
        assert( old != NULL );
        var_d = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_end_2:;
    branch_no_1:;
    tmp_compexpr_left_1 = var_d;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 56;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_compexpr_left_2 = var_d;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = par_cutoff;

    CHECK_OBJECT( tmp_compexpr_right_2 );
    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_3 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 56;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_4 = const_int_0;
    assert( var_volume == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_volume = tmp_assign_source_4;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain_SfxPlayer );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SfxPlayer );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SfxPlayer" );
        exception_tb = NULL;

        exception_lineno = 59;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_UseInverseSquare );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 59;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_1 = var_d;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_distanceScale );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_sd == NULL );
    var_sd = tmp_assign_source_5;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_3 = const_int_pos_1;
    tmp_left_name_2 = const_int_pos_1;
    tmp_left_name_3 = var_sd;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = var_sd;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_or_left_value_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 61;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_or_right_value_2 = const_int_pos_1;
    Py_INCREF( tmp_or_right_value_2 );
    tmp_right_name_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_right_name_2 = tmp_or_left_value_2;
    or_end_2:;
    tmp_args_element_name_4 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_volume == NULL );
    var_volume = tmp_assign_source_6;

    goto branch_end_4;
    branch_no_4:;
    tmp_left_name_4 = const_int_pos_1;
    tmp_left_name_5 = var_d;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;

        exception_lineno = 64;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_3 = par_cutoff;

    CHECK_OBJECT( tmp_or_left_value_3 );
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    tmp_or_right_value_3 = const_int_pos_1;
    tmp_right_name_5 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_right_name_5 = tmp_or_left_value_3;
    or_end_3:;
    tmp_right_name_4 = BINARY_OPERATION_DIV( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_volume == NULL );
    var_volume = tmp_assign_source_7;

    branch_end_4:;
    branch_end_3:;
    tmp_return_value = var_volume;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "volume" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_node, par_listenerNode, par_cutoff, var_d, var_volume, var_sd );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_4_getLocalizedVolume );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_listenerNode );
    Py_DECREF( par_listenerNode );
    par_listenerNode = NULL;

    CHECK_OBJECT( (PyObject *)par_cutoff );
    Py_DECREF( par_cutoff );
    par_cutoff = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_volume );
    var_volume = NULL;

    Py_XDECREF( var_sd );
    var_sd = NULL;

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

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_listenerNode );
    Py_DECREF( par_listenerNode );
    par_listenerNode = NULL;

    CHECK_OBJECT( (PyObject *)par_cutoff );
    Py_DECREF( par_cutoff );
    par_cutoff = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_volume );
    var_volume = NULL;

    Py_XDECREF( var_sd );
    var_sd = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_4_getLocalizedVolume );
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


static PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_5_playSfx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sfx = python_pars[ 1 ];
    PyObject *par_looping = python_pars[ 2 ];
    PyObject *par_interrupt = python_pars[ 3 ];
    PyObject *par_volume = python_pars[ 4 ];
    PyObject *par_time = python_pars[ 5 ];
    PyObject *par_node = python_pars[ 6 ];
    PyObject *par_listenerNode = python_pars[ 7 ];
    PyObject *par_cutoff = python_pars[ 8 ];
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d45776b24e6587a24be143a17ca52cec, module_direct$showbase$SfxPlayer, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_sfx;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_cond_value_2 = par_cutoff;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cutoffDistance );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_cutoff;
        assert( old != NULL );
        par_cutoff = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_sfx;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_node;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_volume;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_listenerNode;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_cutoff;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_function->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS5( tmp_called_instance_1, const_str_plain_setFinalVolume, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_or_left_value_1 = par_interrupt;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_instance_2 = par_sfx;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 80;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_status );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain_AudioSound );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AudioSound );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AudioSound" );
        exception_tb = NULL;

        exception_lineno = 80;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PLAYING );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 80;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_3 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 80;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_3 = par_sfx;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_6 = par_time;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_function->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_setTime, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = par_sfx;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_7 = par_looping;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_function->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_setLoop, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_5 = par_sfx;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_function->m_frame.f_lineno = 83;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_play );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_sfx, par_looping, par_interrupt, par_volume, par_time, par_node, par_listenerNode, par_cutoff );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_5_playSfx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sfx );
    Py_DECREF( par_sfx );
    par_sfx = NULL;

    CHECK_OBJECT( (PyObject *)par_looping );
    Py_DECREF( par_looping );
    par_looping = NULL;

    CHECK_OBJECT( (PyObject *)par_interrupt );
    Py_DECREF( par_interrupt );
    par_interrupt = NULL;

    CHECK_OBJECT( (PyObject *)par_volume );
    Py_DECREF( par_volume );
    par_volume = NULL;

    CHECK_OBJECT( (PyObject *)par_time );
    Py_DECREF( par_time );
    par_time = NULL;

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_listenerNode );
    Py_DECREF( par_listenerNode );
    par_listenerNode = NULL;

    Py_XDECREF( par_cutoff );
    par_cutoff = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sfx );
    Py_DECREF( par_sfx );
    par_sfx = NULL;

    CHECK_OBJECT( (PyObject *)par_looping );
    Py_DECREF( par_looping );
    par_looping = NULL;

    CHECK_OBJECT( (PyObject *)par_interrupt );
    Py_DECREF( par_interrupt );
    par_interrupt = NULL;

    CHECK_OBJECT( (PyObject *)par_volume );
    Py_DECREF( par_volume );
    par_volume = NULL;

    CHECK_OBJECT( (PyObject *)par_time );
    Py_DECREF( par_time );
    par_time = NULL;

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_listenerNode );
    Py_DECREF( par_listenerNode );
    par_listenerNode = NULL;

    Py_XDECREF( par_cutoff );
    par_cutoff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_5_playSfx );
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


static PyObject *impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_6_setFinalVolume( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sfx = python_pars[ 1 ];
    PyObject *par_node = python_pars[ 2 ];
    PyObject *par_volume = python_pars[ 3 ];
    PyObject *par_listenerNode = python_pars[ 4 ];
    PyObject *par_cutoff = python_pars[ 5 ];
    PyObject *var_finalVolume = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5fa4e1731c83b3b93fb155b937c65b85, module_direct$showbase$SfxPlayer, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_or_left_value_1 = par_node;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_1 = par_volume;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_cond_value_2 = par_node;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_node;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_listenerNode;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_cutoff;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_function->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_getLocalizedVolume, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_finalVolume == NULL );
    var_finalVolume = tmp_assign_source_1;

    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_2 = const_int_pos_1;
    assert( var_finalVolume == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_finalVolume = tmp_assign_source_2;

    branch_end_2:;
    tmp_compare_left_1 = par_volume;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_1 = var_finalVolume;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = par_volume;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_3 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_finalVolume = tmp_assign_source_3;

    branch_no_3:;
    tmp_compare_left_2 = par_node;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_2 = var_finalVolume;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "finalVolume" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = par_node;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 97;
    tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getNetAudioVolume );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_4 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_finalVolume = tmp_assign_source_4;

    branch_no_4:;
    tmp_source_name_1 = par_sfx;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setVolume );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_finalVolume;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "finalVolume" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "ooooooo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_sfx, par_node, par_volume, par_listenerNode, par_cutoff, var_finalVolume );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_6_setFinalVolume );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sfx );
    Py_DECREF( par_sfx );
    par_sfx = NULL;

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_volume );
    Py_DECREF( par_volume );
    par_volume = NULL;

    CHECK_OBJECT( (PyObject *)par_listenerNode );
    Py_DECREF( par_listenerNode );
    par_listenerNode = NULL;

    CHECK_OBJECT( (PyObject *)par_cutoff );
    Py_DECREF( par_cutoff );
    par_cutoff = NULL;

    Py_XDECREF( var_finalVolume );
    var_finalVolume = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sfx );
    Py_DECREF( par_sfx );
    par_sfx = NULL;

    CHECK_OBJECT( (PyObject *)par_node );
    Py_DECREF( par_node );
    par_node = NULL;

    CHECK_OBJECT( (PyObject *)par_volume );
    Py_DECREF( par_volume );
    par_volume = NULL;

    CHECK_OBJECT( (PyObject *)par_listenerNode );
    Py_DECREF( par_listenerNode );
    par_listenerNode = NULL;

    CHECK_OBJECT( (PyObject *)par_cutoff );
    Py_DECREF( par_cutoff );
    par_cutoff = NULL;

    Py_XDECREF( var_finalVolume );
    var_finalVolume = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_6_setFinalVolume );
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



static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3b38166a9991d3c5e0194a5caabcac7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$SfxPlayer,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_2_setCutoffDistance(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_2_setCutoffDistance,
        const_str_plain_setCutoffDistance,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bde63a87fac4fad72c72a2e249f40fbc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$SfxPlayer,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_3_getCutoffDistance(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_3_getCutoffDistance,
        const_str_plain_getCutoffDistance,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_36bcbad9e2b655b091b4051439ad4b02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$SfxPlayer,
        const_str_digest_c93c96226262c12710974e8d9d595382,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_4_getLocalizedVolume( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_4_getLocalizedVolume,
        const_str_plain_getLocalizedVolume,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bf39b622843252c19963b4791fda1da2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$SfxPlayer,
        const_str_digest_f1b503772b8b990822a499a807f86aef,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_5_playSfx( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_5_playSfx,
        const_str_plain_playSfx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d45776b24e6587a24be143a17ca52cec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$SfxPlayer,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_6_setFinalVolume( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer$$$function_6_setFinalVolume,
        const_str_plain_setFinalVolume,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5fa4e1731c83b3b93fb155b937c65b85,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$SfxPlayer,
        const_str_digest_d3b63d4c7cf0f39b01686e59892dfb46,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$showbase$SfxPlayer =
{
    PyModuleDef_HEAD_INIT,
    "direct.showbase.SfxPlayer",   /* m_name */
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

MOD_INIT_DECL( direct$showbase$SfxPlayer )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$showbase$SfxPlayer );
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
    puts("direct.showbase.SfxPlayer: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.showbase.SfxPlayer: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$showbase$SfxPlayer" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$showbase$SfxPlayer = Py_InitModule4(
        "direct.showbase.SfxPlayer",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$showbase$SfxPlayer = PyModule_Create( &mdef_direct$showbase$SfxPlayer );
#endif

    moduledict_direct$showbase$SfxPlayer = (PyDictObject *)((PyModuleObject *)module_direct$showbase$SfxPlayer)->md_dict;

    CHECK_OBJECT( module_direct$showbase$SfxPlayer );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8ddec075be7cf199515bea897ed8953e, module_direct$showbase$SfxPlayer );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$showbase$SfxPlayer );

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
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_9ff5233c3d56f5464e66c6d4562de818;
    UPDATE_STRING_DICT0( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_SfxPlayer_list );
    UPDATE_STRING_DICT1( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_math;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$showbase$SfxPlayer)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    assert( tmp_assign_source_4 != NULL );
    UPDATE_STRING_DICT1( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_3e4575468b0ba81d6a05e7db757f311e, module_direct$showbase$SfxPlayer );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_digest_4314234708fbc134069947f7a4708b23;
    tmp_globals_name_2 = ((PyModuleObject *)module_direct$showbase$SfxPlayer)->md_dict;
    tmp_locals_name_2 = ((PyModuleObject *)module_direct$showbase$SfxPlayer)->md_dict;
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
    tmp_result = IMPORT_MODULE_STAR( module_direct$showbase$SfxPlayer, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = impl_direct$showbase$SfxPlayer$$$class_1_SfxPlayer( NULL );
    assert( tmp_assign_source_5 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_5;

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


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_6 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_6;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_SfxPlayer;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_module->m_frame.f_lineno = 9;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

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
    UPDATE_STRING_DICT0( moduledict_direct$showbase$SfxPlayer, (Nuitka_StringObject *)const_str_plain_SfxPlayer, tmp_assign_source_8 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_direct$showbase$SfxPlayer );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
