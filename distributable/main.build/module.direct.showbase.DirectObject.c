/* Generated code for Python source for module 'direct.showbase.DirectObject'
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

/* The _module_direct$showbase$DirectObject is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$showbase$DirectObject;
PyDictObject *moduledict_direct$showbase$DirectObject;

/* The module constants used, if any. */
extern PyObject *const_str_plain_taskOrName;
extern PyObject *const_str_plain_isIgnoring;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_addTask;
extern PyObject *const_tuple_str_plain_self_str_plain_task_tuple;
extern PyObject *const_str_plain_event;
static PyObject *const_str_plain_detectLeaks;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_tstr;
static PyObject *const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
extern PyObject *const_str_plain_do_method_later;
extern PyObject *const_str_plain_tasks;
extern PyObject *const_str_digest_485ce81cec1a1f31081339bcf501b5fc;
extern PyObject *const_str_plain_getAllAccepting;
static PyObject *const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_remove;
static PyObject *const_str_plain_remove_task;
extern PyObject *const_str_plain_get_all_accepting;
static PyObject *const_str_plain_andStr;
static PyObject *const_str_plain_LeakDetect;
extern PyObject *const_str_plain_ignore_all;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain__addTask;
extern PyObject *const_str_plain_is_ignoring;
extern PyObject *const_str_plain___dev__;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain__clearTask;
extern PyObject *const_str_plain_ignoreAll;
extern PyObject *const_str_plain_DirectObject;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_directNotify;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_choice;
extern PyObject *const_str_plain_accept;
static PyObject *const_str_plain_add_task;
extern PyObject *const_str_plain_extraArgs;
extern PyObject *const_str_plain_messenger;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_aae07e27a0adb23faada58ce0068b808;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_removeTask;
static PyObject *const_str_digest_db683dad7b18c9e49f5e5618ee077837;
static PyObject *const_tuple_str_plain_LeakDetect_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_accept_once;
static PyObject *const_str_digest_5ea40a22704341352005e794569e8850;
static PyObject *const_tuple_0b4fcfd44f62acf5f869fabdb5c89d2c_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_warning;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_doMethodLater;
static PyObject *const_str_plain_events;
extern PyObject *const_str_plain_task;
static PyObject *const_str_plain_estr;
extern PyObject *const_str_plain_owner;
extern PyObject *const_str_digest_3d04e07393c6560e489a0567631d62c2;
extern PyObject *const_str_plain_values;
static PyObject *const_str_plain__taskList;
extern PyObject *const_str_plain_id;
extern PyObject *const_str_plain_isAccepting;
static PyObject *const_str_plain_remove_all_tasks;
static PyObject *const_str_digest_cd4c52bea9828c31a5d87e572d81616d;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple;
static PyObject *const_str_digest_084cd813534d1dc8ea459c043eb40c2e;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_getRepository;
static PyObject *const_str_plain_taskListValues;
extern PyObject *const_str_plain_notify;
static PyObject *const_str_digest_978c8b33a0b0b723a9e95f8625057443;
static PyObject *const_str_plain__crashOnProactiveLeakDetect;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_taskMgr;
static PyObject *const_list_str_plain_DirectObject_list;
extern PyObject *const_str_plain_newCategory;
static PyObject *const_str_plain_acceptOnce;
static PyObject *const_str_plain_detect_leaks;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_self_str_plain_event_tuple;
extern PyObject *const_tuple_str_plain_directNotify_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_removeAllTasks;
extern PyObject *const_str_plain_MessengerGlobal;
extern PyObject *const_tuple_str_plain_messenger_tuple;
extern PyObject *const_str_plain_is_accepting;
static PyObject *const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_detectLeaks = UNSTREAM_STRING( &constant_bin[ 109763 ], 11, 1 );
    const_str_plain_tstr = UNSTREAM_STRING( &constant_bin[ 109774 ], 4, 1 );
    const_str_digest_7f0aead4232d288d8dfdff349b11a1b5 = UNSTREAM_STRING( &constant_bin[ 3202 ], 5, 0 );
    const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple, 1, const_str_plain_event ); Py_INCREF( const_str_plain_event );
    PyTuple_SET_ITEM( const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple, 2, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple, 3, const_str_plain_extraArgs ); Py_INCREF( const_str_plain_extraArgs );
    const_str_plain_remove_task = UNSTREAM_STRING( &constant_bin[ 109778 ], 11, 1 );
    const_str_plain_andStr = UNSTREAM_STRING( &constant_bin[ 109789 ], 6, 1 );
    const_str_plain_LeakDetect = UNSTREAM_STRING( &constant_bin[ 109795 ], 10, 1 );
    const_str_plain_add_task = UNSTREAM_STRING( &constant_bin[ 109805 ], 8, 1 );
    const_str_digest_aae07e27a0adb23faada58ce0068b808 = UNSTREAM_STRING( &constant_bin[ 109813 ], 35, 0 );
    const_str_digest_db683dad7b18c9e49f5e5618ee077837 = UNSTREAM_STRING( &constant_bin[ 109848 ], 19, 0 );
    const_tuple_str_plain_LeakDetect_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LeakDetect_tuple, 0, const_str_plain_LeakDetect ); Py_INCREF( const_str_plain_LeakDetect );
    const_str_plain_accept_once = UNSTREAM_STRING( &constant_bin[ 109867 ], 11, 1 );
    const_str_digest_5ea40a22704341352005e794569e8850 = UNSTREAM_STRING( &constant_bin[ 109878 ], 119, 0 );
    const_tuple_0b4fcfd44f62acf5f869fabdb5c89d2c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0b4fcfd44f62acf5f869fabdb5c89d2c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0b4fcfd44f62acf5f869fabdb5c89d2c_tuple, 1, const_str_plain_taskOrName ); Py_INCREF( const_str_plain_taskOrName );
    const_str_plain_taskListValues = UNSTREAM_STRING( &constant_bin[ 109997 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_0b4fcfd44f62acf5f869fabdb5c89d2c_tuple, 2, const_str_plain_taskListValues ); Py_INCREF( const_str_plain_taskListValues );
    PyTuple_SET_ITEM( const_tuple_0b4fcfd44f62acf5f869fabdb5c89d2c_tuple, 3, const_str_plain_task ); Py_INCREF( const_str_plain_task );
    const_str_plain_events = UNSTREAM_STRING( &constant_bin[ 71399 ], 6, 1 );
    const_str_plain_estr = UNSTREAM_STRING( &constant_bin[ 681 ], 4, 1 );
    const_str_plain__taskList = UNSTREAM_STRING( &constant_bin[ 110011 ], 9, 1 );
    const_str_plain_remove_all_tasks = UNSTREAM_STRING( &constant_bin[ 110020 ], 16, 1 );
    const_str_digest_cd4c52bea9828c31a5d87e572d81616d = UNSTREAM_STRING( &constant_bin[ 110036 ], 75, 0 );
    const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple, 3, const_str_plain_task ); Py_INCREF( const_str_plain_task );
    const_str_digest_084cd813534d1dc8ea459c043eb40c2e = UNSTREAM_STRING( &constant_bin[ 110111 ], 23, 0 );
    const_str_digest_978c8b33a0b0b723a9e95f8625057443 = UNSTREAM_STRING( &constant_bin[ 110134 ], 31, 0 );
    const_str_plain__crashOnProactiveLeakDetect = UNSTREAM_STRING( &constant_bin[ 110165 ], 27, 1 );
    const_list_str_plain_DirectObject_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_DirectObject_list, 0, const_str_plain_DirectObject ); Py_INCREF( const_str_plain_DirectObject );
    const_str_plain_acceptOnce = UNSTREAM_STRING( &constant_bin[ 110192 ], 10, 1 );
    const_str_plain_detect_leaks = UNSTREAM_STRING( &constant_bin[ 110202 ], 12, 1 );
    const_str_plain_removeAllTasks = UNSTREAM_STRING( &constant_bin[ 110214 ], 14, 1 );
    const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 1, const_str_plain_events ); Py_INCREF( const_str_plain_events );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 2, const_str_plain_tasks ); Py_INCREF( const_str_plain_tasks );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 3, const_str_plain_task ); Py_INCREF( const_str_plain_task );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 4, const_str_plain_estr ); Py_INCREF( const_str_plain_estr );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 5, const_str_plain_andStr ); Py_INCREF( const_str_plain_andStr );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 6, const_str_plain_tstr ); Py_INCREF( const_str_plain_tstr );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 7, const_str_plain_notify ); Py_INCREF( const_str_plain_notify );
    PyTuple_SET_ITEM( const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 8, const_str_plain_func ); Py_INCREF( const_str_plain_func );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$showbase$DirectObject( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ffed603cdf00bbbb08eae31f7f3b0efd;
static PyCodeObject *codeobj_80b0f8332880a86779066ec038a45f16;
static PyCodeObject *codeobj_dda82ed64bfe765a19e9fcd1f438dd88;
static PyCodeObject *codeobj_dd826921769f2b7285b7d3c00c563e08;
static PyCodeObject *codeobj_d0504a974ba82fe8ae4bb1bf531e8bfa;
static PyCodeObject *codeobj_e67187f9de2f0b38042d65664847ef17;
static PyCodeObject *codeobj_8c0ec43cfbc159da55386900ae83671c;
static PyCodeObject *codeobj_81f7cdad147f99a9c5bdd0d4d0a73c0a;
static PyCodeObject *codeobj_4d95925002e127e98f489863a6459068;
static PyCodeObject *codeobj_d276a778eace749f5d07f75313ef4e43;
static PyCodeObject *codeobj_55d1923d66a45684bd73c7d63d9a7254;
static PyCodeObject *codeobj_4ae8ba00ee43bb9bf7d232bcd4419d94;
static PyCodeObject *codeobj_fc1a8ebba718861a614d06916963dffe;
static PyCodeObject *codeobj_20884edf02bf3f418beb1708082d1778;
static PyCodeObject *codeobj_5c2f7478b441b509da7b5995f115030f;
static PyCodeObject *codeobj_723b5dc87ab5698e8a92974980eca8c7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_978c8b33a0b0b723a9e95f8625057443 );
    codeobj_ffed603cdf00bbbb08eae31f7f3b0efd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DirectObject, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_80b0f8332880a86779066ec038a45f16 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 14, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dda82ed64bfe765a19e9fcd1f438dd88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__addTask, 76, const_tuple_str_plain_self_str_plain_task_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd826921769f2b7285b7d3c00c563e08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__clearTask, 79, const_tuple_str_plain_self_str_plain_task_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0504a974ba82fe8ae4bb1bf531e8bfa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_accept, 24, const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e67187f9de2f0b38042d65664847ef17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_acceptOnce, 27, const_tuple_fa6872b7bdf021d99659eaaed0b014d5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8c0ec43cfbc159da55386900ae83671c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_addTask, 46, const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_81f7cdad147f99a9c5bdd0d4d0a73c0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_detectLeaks, 82, const_tuple_5d9359ee1b122f4f9e5d803b30c57efa_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d95925002e127e98f489863a6459068 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_doMethodLater, 53, const_tuple_98939eeeb37d1b4ad2ae052bb0589bfc_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d276a778eace749f5d07f75313ef4e43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getAllAccepting, 39, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55d1923d66a45684bd73c7d63d9a7254 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ignore, 30, const_tuple_str_plain_self_str_plain_event_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ae8ba00ee43bb9bf7d232bcd4419d94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ignoreAll, 33, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fc1a8ebba718861a614d06916963dffe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isAccepting, 36, const_tuple_str_plain_self_str_plain_event_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20884edf02bf3f418beb1708082d1778 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isIgnoring, 42, const_tuple_str_plain_self_str_plain_event_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c2f7478b441b509da7b5995f115030f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_removeAllTasks, 71, const_tuple_str_plain_self_str_plain_task_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_723b5dc87ab5698e8a92974980eca8c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_removeTask, 60, const_tuple_0b4fcfd44f62acf5f869fabdb5c89d2c_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_10_doMethodLater(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_11_removeTask(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_12_removeAllTasks(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_13__addTask(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_14__clearTask(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_2_accept( PyObject *defaults );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_3_acceptOnce( PyObject *defaults );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_4_ignore(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_5_ignoreAll(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_6_isAccepting(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_7_getAllAccepting(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_8_isIgnoring(  );


static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_9_addTask(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_accept = NULL;
    PyObject *var_acceptOnce = NULL;
    PyObject *var_ignore = NULL;
    PyObject *var_ignoreAll = NULL;
    PyObject *var_isAccepting = NULL;
    PyObject *var_getAllAccepting = NULL;
    PyObject *var_isIgnoring = NULL;
    PyObject *var_addTask = NULL;
    PyObject *var_doMethodLater = NULL;
    PyObject *var_removeTask = NULL;
    PyObject *var_removeAllTasks = NULL;
    PyObject *var__addTask = NULL;
    PyObject *var__clearTask = NULL;
    PyObject *var_detectLeaks = NULL;
    PyObject *var_add_task = NULL;
    PyObject *var_do_method_later = NULL;
    PyObject *var_detect_leaks = NULL;
    PyObject *var_accept_once = NULL;
    PyObject *var_ignore_all = NULL;
    PyObject *var_get_all_accepting = NULL;
    PyObject *var_is_ignoring = NULL;
    PyObject *var_remove_all_tasks = NULL;
    PyObject *var_remove_task = NULL;
    PyObject *var_is_accepting = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_3d04e07393c6560e489a0567631d62c2;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_cd4c52bea9828c31a5d87e572d81616d;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_1___init__(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_4 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_2_accept( tmp_defaults_1 );
    assert( var_accept == NULL );
    var_accept = tmp_assign_source_4;

    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_5 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_3_acceptOnce( tmp_defaults_2 );
    assert( var_acceptOnce == NULL );
    var_acceptOnce = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_4_ignore(  );
    assert( var_ignore == NULL );
    var_ignore = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_5_ignoreAll(  );
    assert( var_ignoreAll == NULL );
    var_ignoreAll = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_6_isAccepting(  );
    assert( var_isAccepting == NULL );
    var_isAccepting = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_7_getAllAccepting(  );
    assert( var_getAllAccepting == NULL );
    var_getAllAccepting = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_8_isIgnoring(  );
    assert( var_isIgnoring == NULL );
    var_isIgnoring = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_9_addTask(  );
    assert( var_addTask == NULL );
    var_addTask = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_10_doMethodLater(  );
    assert( var_doMethodLater == NULL );
    var_doMethodLater = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_11_removeTask(  );
    assert( var_removeTask == NULL );
    var_removeTask = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_12_removeAllTasks(  );
    assert( var_removeAllTasks == NULL );
    var_removeAllTasks = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_13__addTask(  );
    assert( var__addTask == NULL );
    var__addTask = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_14__clearTask(  );
    assert( var__clearTask == NULL );
    var__clearTask = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks(  );
    assert( var_detectLeaks == NULL );
    var_detectLeaks = tmp_assign_source_17;

    tmp_assign_source_18 = var_addTask;

    CHECK_OBJECT( tmp_assign_source_18 );
    assert( var_add_task == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_add_task = tmp_assign_source_18;

    tmp_assign_source_19 = var_doMethodLater;

    CHECK_OBJECT( tmp_assign_source_19 );
    assert( var_do_method_later == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_do_method_later = tmp_assign_source_19;

    tmp_assign_source_20 = var_detectLeaks;

    CHECK_OBJECT( tmp_assign_source_20 );
    assert( var_detect_leaks == NULL );
    Py_INCREF( tmp_assign_source_20 );
    var_detect_leaks = tmp_assign_source_20;

    tmp_assign_source_21 = var_acceptOnce;

    CHECK_OBJECT( tmp_assign_source_21 );
    assert( var_accept_once == NULL );
    Py_INCREF( tmp_assign_source_21 );
    var_accept_once = tmp_assign_source_21;

    tmp_assign_source_22 = var_ignoreAll;

    CHECK_OBJECT( tmp_assign_source_22 );
    assert( var_ignore_all == NULL );
    Py_INCREF( tmp_assign_source_22 );
    var_ignore_all = tmp_assign_source_22;

    tmp_assign_source_23 = var_getAllAccepting;

    CHECK_OBJECT( tmp_assign_source_23 );
    assert( var_get_all_accepting == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var_get_all_accepting = tmp_assign_source_23;

    tmp_assign_source_24 = var_isIgnoring;

    CHECK_OBJECT( tmp_assign_source_24 );
    assert( var_is_ignoring == NULL );
    Py_INCREF( tmp_assign_source_24 );
    var_is_ignoring = tmp_assign_source_24;

    tmp_assign_source_25 = var_removeAllTasks;

    CHECK_OBJECT( tmp_assign_source_25 );
    assert( var_remove_all_tasks == NULL );
    Py_INCREF( tmp_assign_source_25 );
    var_remove_all_tasks = tmp_assign_source_25;

    tmp_assign_source_26 = var_removeTask;

    CHECK_OBJECT( tmp_assign_source_26 );
    assert( var_remove_task == NULL );
    Py_INCREF( tmp_assign_source_26 );
    var_remove_task = tmp_assign_source_26;

    tmp_assign_source_27 = var_isAccepting;

    CHECK_OBJECT( tmp_assign_source_27 );
    assert( var_is_accepting == NULL );
    Py_INCREF( tmp_assign_source_27 );
    var_is_accepting = tmp_assign_source_27;

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

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var_accept )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_accept,
            var_accept
        );

        assert( res == 0 );
    }

    if ( var_acceptOnce )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_acceptOnce,
            var_acceptOnce
        );

        assert( res == 0 );
    }

    if ( var_ignore )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_ignore,
            var_ignore
        );

        assert( res == 0 );
    }

    if ( var_ignoreAll )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_ignoreAll,
            var_ignoreAll
        );

        assert( res == 0 );
    }

    if ( var_isAccepting )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_isAccepting,
            var_isAccepting
        );

        assert( res == 0 );
    }

    if ( var_getAllAccepting )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getAllAccepting,
            var_getAllAccepting
        );

        assert( res == 0 );
    }

    if ( var_isIgnoring )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_isIgnoring,
            var_isIgnoring
        );

        assert( res == 0 );
    }

    if ( var_addTask )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_addTask,
            var_addTask
        );

        assert( res == 0 );
    }

    if ( var_doMethodLater )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_doMethodLater,
            var_doMethodLater
        );

        assert( res == 0 );
    }

    if ( var_removeTask )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_removeTask,
            var_removeTask
        );

        assert( res == 0 );
    }

    if ( var_removeAllTasks )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_removeAllTasks,
            var_removeAllTasks
        );

        assert( res == 0 );
    }

    if ( var__addTask )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__addTask,
            var__addTask
        );

        assert( res == 0 );
    }

    if ( var__clearTask )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__clearTask,
            var__clearTask
        );

        assert( res == 0 );
    }

    if ( var_detectLeaks )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_detectLeaks,
            var_detectLeaks
        );

        assert( res == 0 );
    }

    if ( var_add_task )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_add_task,
            var_add_task
        );

        assert( res == 0 );
    }

    if ( var_do_method_later )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_do_method_later,
            var_do_method_later
        );

        assert( res == 0 );
    }

    if ( var_detect_leaks )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_detect_leaks,
            var_detect_leaks
        );

        assert( res == 0 );
    }

    if ( var_accept_once )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_accept_once,
            var_accept_once
        );

        assert( res == 0 );
    }

    if ( var_ignore_all )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_ignore_all,
            var_ignore_all
        );

        assert( res == 0 );
    }

    if ( var_get_all_accepting )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_all_accepting,
            var_get_all_accepting
        );

        assert( res == 0 );
    }

    if ( var_is_ignoring )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_is_ignoring,
            var_is_ignoring
        );

        assert( res == 0 );
    }

    if ( var_remove_all_tasks )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_remove_all_tasks,
            var_remove_all_tasks
        );

        assert( res == 0 );
    }

    if ( var_remove_task )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_remove_task,
            var_remove_task
        );

        assert( res == 0 );
    }

    if ( var_is_accepting )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_is_accepting,
            var_is_accepting
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_accept );
    Py_DECREF( var_accept );
    var_accept = NULL;

    CHECK_OBJECT( (PyObject *)var_acceptOnce );
    Py_DECREF( var_acceptOnce );
    var_acceptOnce = NULL;

    CHECK_OBJECT( (PyObject *)var_ignore );
    Py_DECREF( var_ignore );
    var_ignore = NULL;

    CHECK_OBJECT( (PyObject *)var_ignoreAll );
    Py_DECREF( var_ignoreAll );
    var_ignoreAll = NULL;

    CHECK_OBJECT( (PyObject *)var_isAccepting );
    Py_DECREF( var_isAccepting );
    var_isAccepting = NULL;

    CHECK_OBJECT( (PyObject *)var_getAllAccepting );
    Py_DECREF( var_getAllAccepting );
    var_getAllAccepting = NULL;

    CHECK_OBJECT( (PyObject *)var_isIgnoring );
    Py_DECREF( var_isIgnoring );
    var_isIgnoring = NULL;

    CHECK_OBJECT( (PyObject *)var_addTask );
    Py_DECREF( var_addTask );
    var_addTask = NULL;

    CHECK_OBJECT( (PyObject *)var_doMethodLater );
    Py_DECREF( var_doMethodLater );
    var_doMethodLater = NULL;

    CHECK_OBJECT( (PyObject *)var_removeTask );
    Py_DECREF( var_removeTask );
    var_removeTask = NULL;

    CHECK_OBJECT( (PyObject *)var_removeAllTasks );
    Py_DECREF( var_removeAllTasks );
    var_removeAllTasks = NULL;

    CHECK_OBJECT( (PyObject *)var__addTask );
    Py_DECREF( var__addTask );
    var__addTask = NULL;

    CHECK_OBJECT( (PyObject *)var__clearTask );
    Py_DECREF( var__clearTask );
    var__clearTask = NULL;

    CHECK_OBJECT( (PyObject *)var_detectLeaks );
    Py_DECREF( var_detectLeaks );
    var_detectLeaks = NULL;

    CHECK_OBJECT( (PyObject *)var_add_task );
    Py_DECREF( var_add_task );
    var_add_task = NULL;

    CHECK_OBJECT( (PyObject *)var_do_method_later );
    Py_DECREF( var_do_method_later );
    var_do_method_later = NULL;

    CHECK_OBJECT( (PyObject *)var_detect_leaks );
    Py_DECREF( var_detect_leaks );
    var_detect_leaks = NULL;

    CHECK_OBJECT( (PyObject *)var_accept_once );
    Py_DECREF( var_accept_once );
    var_accept_once = NULL;

    CHECK_OBJECT( (PyObject *)var_ignore_all );
    Py_DECREF( var_ignore_all );
    var_ignore_all = NULL;

    CHECK_OBJECT( (PyObject *)var_get_all_accepting );
    Py_DECREF( var_get_all_accepting );
    var_get_all_accepting = NULL;

    CHECK_OBJECT( (PyObject *)var_is_ignoring );
    Py_DECREF( var_is_ignoring );
    var_is_ignoring = NULL;

    CHECK_OBJECT( (PyObject *)var_remove_all_tasks );
    Py_DECREF( var_remove_all_tasks );
    var_remove_all_tasks = NULL;

    CHECK_OBJECT( (PyObject *)var_remove_task );
    Py_DECREF( var_remove_task );
    var_remove_task = NULL;

    CHECK_OBJECT( (PyObject *)var_is_accepting );
    Py_DECREF( var_is_accepting );
    var_is_accepting = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_1___init__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_2_accept( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_event = python_pars[ 1 ];
    PyObject *par_method = python_pars[ 2 ];
    PyObject *par_extraArgs = python_pars[ 3 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d0504a974ba82fe8ae4bb1bf531e8bfa, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 25;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_event;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_method;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_extraArgs;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = const_int_pos_1;
    frame_function->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_METHOD_WITH_ARGS5( tmp_called_instance_1, const_str_plain_accept, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description = "oooo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_event, par_method, par_extraArgs );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_2_accept );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_extraArgs );
    Py_DECREF( par_extraArgs );
    par_extraArgs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_extraArgs );
    Py_DECREF( par_extraArgs );
    par_extraArgs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_2_accept );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_3_acceptOnce( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_event = python_pars[ 1 ];
    PyObject *par_method = python_pars[ 2 ];
    PyObject *par_extraArgs = python_pars[ 3 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e67187f9de2f0b38042d65664847ef17, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_event;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_method;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_extraArgs;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = const_int_0;
    frame_function->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_METHOD_WITH_ARGS5( tmp_called_instance_1, const_str_plain_accept, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description = "oooo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_event, par_method, par_extraArgs );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_3_acceptOnce );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_extraArgs );
    Py_DECREF( par_extraArgs );
    par_extraArgs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_extraArgs );
    Py_DECREF( par_extraArgs );
    par_extraArgs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_3_acceptOnce );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_4_ignore( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_event = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_55d1923d66a45684bd73c7d63d9a7254, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_event;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_ignore, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description = "oo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_event );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_4_ignore );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

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

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_4_ignore );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_5_ignoreAll( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4ae8ba00ee43bb9bf7d232bcd4419d94, module_direct$showbase$DirectObject, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 34;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ignoreAll, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_5_ignoreAll );
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_5_ignoreAll );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_6_isAccepting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_event = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fc1a8ebba718861a614d06916963dffe, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 37;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_event;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_isAccepting, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description = "oo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_event );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_6_isAccepting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

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

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_6_isAccepting );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_7_getAllAccepting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d276a778eace749f5d07f75313ef4e43, module_direct$showbase$DirectObject, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 40;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getAllAccepting, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_7_getAllAccepting );
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_7_getAllAccepting );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_8_isIgnoring( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_event = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_20884edf02bf3f418beb1708082d1778, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_event;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_isIgnoring, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description = "oo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_event );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_8_isIgnoring );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

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

    CHECK_OBJECT( (PyObject *)par_event );
    Py_DECREF( par_event );
    par_event = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_8_isIgnoring );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_9_addTask( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_task = NULL;
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8c0ec43cfbc159da55386900ae83671c, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_source_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain__taskList;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__taskList, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_ass_subvalue_1 = par_self;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = par_kwargs;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_str_plain_owner;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_taskMgr );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_taskMgr );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "taskMgr" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_1 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_task == NULL );
    var_task = tmp_assign_source_1;


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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_args, par_kwargs, var_task );

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

    tmp_return_value = var_task;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_9_addTask );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_task );
    Py_DECREF( var_task );
    var_task = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_9_addTask );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_10_doMethodLater( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_task = NULL;
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4d95925002e127e98f489863a6459068, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_source_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain__taskList;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__taskList, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 55;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_ass_subvalue_1 = par_self;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = par_kwargs;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_str_plain_owner;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_taskMgr );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_taskMgr );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "taskMgr" );
        exception_tb = NULL;

        exception_lineno = 57;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_doMethodLater );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_1 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_task == NULL );
    var_task = tmp_assign_source_1;


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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_args, par_kwargs, var_task );

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

    tmp_return_value = var_task;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_10_doMethodLater );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_task );
    Py_DECREF( var_task );
    var_task = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_10_doMethodLater );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_11_removeTask( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_taskOrName = python_pars[ 1 ];
    PyObject *var_taskListValues = NULL;
    PyObject *var_task = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_723b5dc87ab5698e8a92974980eca8c7, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_arg_1 = par_taskOrName;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_1 != NULL );
    tmp_compare_right_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_compare_right_1 != NULL );
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 61;
        type_description = "oooo";
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
    tmp_hasattr_source_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain__taskList;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__taskList );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 64;
    tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_taskListValues == NULL );
    var_taskListValues = tmp_assign_source_1;

    tmp_iter_arg_1 = var_taskListValues;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oooo";
            frame_function->m_frame.f_lineno = 65;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_task;
        var_task = tmp_assign_source_4;
        Py_INCREF( var_task );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_task;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description = "oooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_2 = par_taskOrName;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 66;
        type_description = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_2 = var_task;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 67;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_remove );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_3 = par_taskOrName;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_function->m_frame.f_lineno = 69;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_remove );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "oooo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_taskOrName, var_taskListValues, var_task );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_11_removeTask );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_taskOrName );
    Py_DECREF( par_taskOrName );
    par_taskOrName = NULL;

    Py_XDECREF( var_taskListValues );
    var_taskListValues = NULL;

    Py_XDECREF( var_task );
    var_task = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_taskOrName );
    Py_DECREF( par_taskOrName );
    par_taskOrName = NULL;

    Py_XDECREF( var_taskListValues );
    var_taskListValues = NULL;

    Py_XDECREF( var_task );
    var_task = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_11_removeTask );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_12_removeAllTasks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_task = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5c2f7478b441b509da7b5995f115030f, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_source_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain__taskList;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
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
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__taskList );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 73;
    tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "oo";
            frame_function->m_frame.f_lineno = 73;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_task;
        var_task = tmp_assign_source_3;
        Py_INCREF( var_task );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_task;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 74;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_remove );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, var_task );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_12_removeAllTasks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_task );
    var_task = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_task );
    var_task = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_12_removeAllTasks );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_13__addTask( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_task = python_pars[ 1 ];
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
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dda82ed64bfe765a19e9fcd1f438dd88, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_ass_subvalue_1 = par_task;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__taskList );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_task;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_id );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subscribed_1 );

        exception_lineno = 77;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_task );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_13__addTask );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_task );
    Py_DECREF( par_task );
    par_task = NULL;

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

    CHECK_OBJECT( (PyObject *)par_task );
    Py_DECREF( par_task );
    par_task = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_13__addTask );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_14__clearTask( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_task = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dd826921769f2b7285b7d3c00c563e08, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__taskList );
    if ( tmp_delsubscr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_task;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_id );
    if ( tmp_delsubscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_delsubscr_target_1 );

        exception_lineno = 80;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    Py_DECREF( tmp_delsubscr_target_1 );
    Py_DECREF( tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_task );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_14__clearTask );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_task );
    Py_DECREF( par_task );
    par_task = NULL;

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

    CHECK_OBJECT( (PyObject *)par_task );
    Py_DECREF( par_task );
    par_task = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_14__clearTask );
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


static PyObject *impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_events = NULL;
    PyObject *var_tasks = NULL;
    PyObject *var_task = NULL;
    PyObject *var_estr = NULL;
    PyObject *var_andStr = NULL;
    PyObject *var_tstr = NULL;
    PyObject *var_notify = NULL;
    PyObject *var_func = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_81f7cdad147f99a9c5bdd0d4d0a73c0a, module_direct$showbase$DirectObject, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain___dev__ );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___dev__ );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__dev__" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getAllAccepting, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_events == NULL );
    var_events = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_tasks == NULL );
    var_tasks = tmp_assign_source_2;

    tmp_hasattr_source_1 = par_self;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain__taskList;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__taskList );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    ((struct Nuitka_FrameObject *)PyThreadState_GET()->frame)->m_frame.f_lineno = 95;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_values );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_4;

    tmp_assign_source_5 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_5;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooooooooo";
            ((struct Nuitka_FrameObject *)PyThreadState_GET()->frame)->m_frame.f_lineno = 95;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_task;
        var_task = tmp_assign_source_7;
        Py_INCREF( var_task );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_source_name_2 = var_task;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks );
    return NULL;
    outline_result_1:;
    tmp_assign_source_3 = tmp_outline_return_value_1;
    {
        PyObject *old = var_tasks;
        assert( old != NULL );
        var_tasks = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_len_arg_1 = var_events;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_or_left_value_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 96;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_len_arg_2 = var_tasks;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_or_right_value_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 96;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_choice );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_choice );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "choice" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_3 = var_events;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_args_element_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_084cd813534d1dc8ea459c043eb40c2e;
    tmp_right_name_1 = var_events;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 97;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_empty;
    frame_function->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_estr == NULL );
    var_estr = tmp_assign_source_8;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_choice );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_choice );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "choice" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_4 = var_events;

    CHECK_OBJECT( tmp_len_arg_4 );
    tmp_and_left_value_1 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 98;
        type_description = "ooooooooo";
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_len_arg_5 = var_tasks;

    CHECK_OBJECT( tmp_len_arg_5 );
    tmp_and_right_value_1 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_args_element_name_5 = tmp_and_left_value_1;
    and_end_1:;
    tmp_args_element_name_6 = const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
    tmp_args_element_name_7 = const_str_empty;
    frame_function->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_andStr == NULL );
    var_andStr = tmp_assign_source_9;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_choice );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_choice );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "choice" );
        exception_tb = NULL;

        exception_lineno = 99;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_6 = var_tasks;

    CHECK_OBJECT( tmp_len_arg_6 );
    tmp_args_element_name_8 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_str_digest_db683dad7b18c9e49f5e5618ee077837;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_andStr;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_tasks;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 99;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = const_str_empty;
    frame_function->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tstr == NULL );
    var_tstr = tmp_assign_source_10;

    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_directNotify );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_directNotify );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "directNotify" );
        exception_tb = NULL;

        exception_lineno = 100;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 100;
    tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_newCategory, &PyTuple_GET_ITEM( const_tuple_str_plain_LeakDetect_tuple, 0 ) );

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_notify == NULL );
    var_notify = tmp_assign_source_11;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_choice );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_choice );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "choice" );
        exception_tb = NULL;

        exception_lineno = 101;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_getRepository );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getRepository );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getRepository" );
        exception_tb = NULL;

        exception_lineno = 101;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 101;
    tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__crashOnProactiveLeakDetect );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_notify );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 102;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_error );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 102;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_notify );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 102;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_warning );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 102;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_func == NULL );
    var_func = tmp_assign_source_12;

    tmp_called_name_6 = var_func;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_left_name_3 = const_str_digest_aae07e27a0adb23faada58ce0068b808;
    tmp_right_name_3 = PyTuple_New( 3 );
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_source_name_8 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_9 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 103;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 103;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_estr;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_tstr;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 2, tmp_tuple_element_2 );
    tmp_args_element_name_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, var_events, var_tasks, var_task, var_estr, var_andStr, var_tstr, var_notify, var_func );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_events );
    var_events = NULL;

    Py_XDECREF( var_tasks );
    var_tasks = NULL;

    Py_XDECREF( var_task );
    var_task = NULL;

    Py_XDECREF( var_estr );
    var_estr = NULL;

    Py_XDECREF( var_andStr );
    var_andStr = NULL;

    Py_XDECREF( var_tstr );
    var_tstr = NULL;

    Py_XDECREF( var_notify );
    var_notify = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_events );
    var_events = NULL;

    Py_XDECREF( var_tasks );
    var_tasks = NULL;

    Py_XDECREF( var_task );
    var_task = NULL;

    Py_XDECREF( var_estr );
    var_estr = NULL;

    Py_XDECREF( var_andStr );
    var_andStr = NULL;

    Py_XDECREF( var_tstr );
    var_tstr = NULL;

    Py_XDECREF( var_notify );
    var_notify = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks );
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



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_10_doMethodLater(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_10_doMethodLater,
        const_str_plain_doMethodLater,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d95925002e127e98f489863a6459068,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_11_removeTask(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_11_removeTask,
        const_str_plain_removeTask,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_723b5dc87ab5698e8a92974980eca8c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_12_removeAllTasks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_12_removeAllTasks,
        const_str_plain_removeAllTasks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5c2f7478b441b509da7b5995f115030f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_13__addTask(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_13__addTask,
        const_str_plain__addTask,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dda82ed64bfe765a19e9fcd1f438dd88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_14__clearTask(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_14__clearTask,
        const_str_plain__clearTask,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd826921769f2b7285b7d3c00c563e08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_15_detectLeaks,
        const_str_plain_detectLeaks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_81f7cdad147f99a9c5bdd0d4d0a73c0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_80b0f8332880a86779066ec038a45f16,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_2_accept( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_2_accept,
        const_str_plain_accept,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d0504a974ba82fe8ae4bb1bf531e8bfa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_3_acceptOnce( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_3_acceptOnce,
        const_str_plain_acceptOnce,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e67187f9de2f0b38042d65664847ef17,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_4_ignore(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_4_ignore,
        const_str_plain_ignore,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_55d1923d66a45684bd73c7d63d9a7254,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_5_ignoreAll(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_5_ignoreAll,
        const_str_plain_ignoreAll,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4ae8ba00ee43bb9bf7d232bcd4419d94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_6_isAccepting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_6_isAccepting,
        const_str_plain_isAccepting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc1a8ebba718861a614d06916963dffe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_7_getAllAccepting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_7_getAllAccepting,
        const_str_plain_getAllAccepting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d276a778eace749f5d07f75313ef4e43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_8_isIgnoring(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_8_isIgnoring,
        const_str_plain_isIgnoring,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_20884edf02bf3f418beb1708082d1778,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_9_addTask(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$DirectObject$$$class_1_DirectObject$$$function_9_addTask,
        const_str_plain_addTask,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8c0ec43cfbc159da55386900ae83671c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$DirectObject,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$showbase$DirectObject =
{
    PyModuleDef_HEAD_INIT,
    "direct.showbase.DirectObject",   /* m_name */
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

MOD_INIT_DECL( direct$showbase$DirectObject )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$showbase$DirectObject );
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
    puts("direct.showbase.DirectObject: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.showbase.DirectObject: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$showbase$DirectObject" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$showbase$DirectObject = Py_InitModule4(
        "direct.showbase.DirectObject",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$showbase$DirectObject = PyModule_Create( &mdef_direct$showbase$DirectObject );
#endif

    moduledict_direct$showbase$DirectObject = (PyDictObject *)((PyModuleObject *)module_direct$showbase$DirectObject)->md_dict;

    CHECK_OBJECT( module_direct$showbase$DirectObject );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3d04e07393c6560e489a0567631d62c2, module_direct$showbase$DirectObject );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$showbase$DirectObject );

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
    PyObject *tmp_assign_source_9;
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
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_5ea40a22704341352005e794569e8850;
    UPDATE_STRING_DICT0( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_DirectObject_list );
    UPDATE_STRING_DICT1( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_ffed603cdf00bbbb08eae31f7f3b0efd, module_direct$showbase$DirectObject );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_485ce81cec1a1f31081339bcf501b5fc;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$showbase$DirectObject)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_directNotify_tuple;
    frame_module->m_frame.f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_directNotify );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_directNotify, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_MessengerGlobal;
    tmp_globals_name_2 = ((PyModuleObject *)module_direct$showbase$DirectObject)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_messenger_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_module->m_frame.f_lineno = 8;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_messenger );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_messenger, tmp_assign_source_5 );
    tmp_assign_source_6 = impl_direct$showbase$DirectObject$$$class_1_DirectObject( NULL );
    assert( tmp_assign_source_6 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_6;

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
    tmp_assign_source_7 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_7 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_DirectObject;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_module->m_frame.f_lineno = 10;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_8;

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
    tmp_assign_source_9 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_9 );
    UPDATE_STRING_DICT0( moduledict_direct$showbase$DirectObject, (Nuitka_StringObject *)const_str_plain_DirectObject, tmp_assign_source_9 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_direct$showbase$DirectObject );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
