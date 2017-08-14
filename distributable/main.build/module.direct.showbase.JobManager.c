/* Generated code for Python source for module 'direct.showbase.JobManager'
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

/* The _module_direct$showbase$JobManager is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_direct$showbase$JobManager;
PyDictObject *moduledict_direct$showbase$JobManager;

/* The module constants used, if any. */
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain__cleanupGenerator;
extern PyObject *const_str_plain_gen;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_Sleep;
static PyObject *const_tuple_str_plain_self_str_plain_priorities_tuple;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_digest_485ce81cec1a1f31081339bcf501b5fc;
static PyObject *const_str_digest_412f9952f61a49e412a09c66140d3339;
static PyObject *const_tuple_str_plain_self_str_plain_timeslice_tuple;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_start;
static PyObject *const_str_plain__getSortedPriorities;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_5162d184bc6cc54e340dc2a603496e6b;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_remove;
static PyObject *const_str_plain__timeslice;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_digest_d8fbdf96ce46f90014d5c54662c5e77b;
extern PyObject *const_str_plain_staticmethod;
static PyObject *const_tuple_810940fa2a4ee720e94188211866c770_tuple;
static PyObject *const_str_plain__jobId2overflowTime;
extern PyObject *const_str_plain_Priorities;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain__highestPriority;
extern PyObject *const_str_plain_countFunc;
static PyObject *const_str_plain_getTimeslice;
extern PyObject *const_tuple_str_plain_Job_tuple;
static PyObject *const_str_plain_overflowTime;
extern PyObject *const_str_plain_JobManager;
extern PyObject *const_str_plain_destroy;
extern PyObject *const_str_plain_debugCall;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_e11a24d4b4477f7ca2b80d30ffd62182;
extern PyObject *const_str_plain_directNotify;
static PyObject *const_tuple_str_digest_9dab52a4983e48b38ad3decf9004638e_float_0_5_tuple;
extern PyObject *const_str_plain_max;
static PyObject *const_tuple_str_plain_self_str_plain_job_str_plain_pri_str_plain_jobId_tuple;
extern PyObject *const_float_0_5;
static PyObject *const_str_plain__jobIdGenerator;
static PyObject *const_str_plain_jobId2job;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_timeslice;
extern PyObject *const_str_plain_messenger;
extern PyObject *const_str_plain_flywheel;
static PyObject *const_str_plain__pri2jobIds;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_priorities;
static PyObject *const_str_digest_96f38ded341904390253e185ecc634dd;
static PyObject *const_str_plain_setTimeslice;
extern PyObject *const_str_plain__getGenerator;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_digest_d8fbdf96ce46f90014d5c54662c5e77b_int_pos_1_tuple;
static PyObject *const_str_plain__jobId2pri;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_warning;
static PyObject *const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple;
extern PyObject *const_str_plain_getJobName;
extern PyObject *const_str_plain_resume;
extern PyObject *const_str_plain_taskMgr;
extern PyObject *const_str_digest_aa252e8b6414e4cedc7e11c31a0b3ba8;
extern PyObject *const_str_plain_task;
extern PyObject *const_int_pos_1;
extern PyObject *const_float_1000_0;
extern PyObject *const_str_plain_Job;
extern PyObject *const_str_plain_getBase;
static PyObject *const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple;
extern PyObject *const_str_plain_endT;
extern PyObject *const_str_plain_pop;
extern PyObject *const_float_0_0;
extern PyObject *const_str_digest_c577954440b0777629c688a927ae363d;
extern PyObject *const_float_0_9;
static PyObject *const_str_plain_job;
extern PyObject *const_str_plain_config;
extern PyObject *const_str_plain_Normal;
extern PyObject *const_str_plain__getJobId;
static PyObject *const_str_plain_TaskName;
static PyObject *const_str_plain__jobId2timeslices;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_getRealTime;
extern PyObject *const_str_plain_reverse;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_notify;
static PyObject *const_str_digest_2c7733a3375f015110a4e27d9330e472;
static PyObject *const_str_plain_pri;
extern PyObject *const_str_plain_getPriority;
static PyObject *const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple;
static PyObject *const_str_plain_timeLeft;
extern PyObject *const_str_plain__setFinished;
extern PyObject *const_str_plain_GetBool;
extern PyObject *const_str_digest_1ec94dde2d7bfdc5166ada89a737ba93;
extern PyObject *const_str_plain_cont;
static PyObject *const_tuple_str_plain_getBase_tuple;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_jobManager;
static PyObject *const_str_plain_pris;
extern PyObject *const_tuple_str_plain_taskMgr_tuple;
extern PyObject *const_str_plain_finish;
static PyObject *const_str_plain__useOverflowTime;
extern PyObject *const_str_plain__pstats;
static PyObject *const_str_digest_e1295e852898ae6323c5e44ab44156e9;
static PyObject *const_str_plain__process;
static PyObject *const_str_plain_jobId;
static PyObject *const_tuple_str_plain_jobId_str_plain_self_tuple;
static PyObject *const_str_digest_9dab52a4983e48b38ad3decf9004638e;
extern PyObject *const_str_plain_newCategory;
extern PyObject *const_str_plain_setdefault;
static PyObject *const_str_digest_96c1d85f4342c1d9773f01f7b99b2948;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
static PyObject *const_str_digest_2c9c4cb941397e8d3c0bb4cd01e9f285;
static PyObject *const_str_plain_getDefaultTimeslice;
extern PyObject *const_tuple_str_plain_JobManager_tuple;
extern PyObject *const_str_plain_getFinishedEvent;
extern PyObject *const_tuple_str_plain_directNotify_tuple;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_plain_GetFloat;
extern PyObject *const_str_plain_keys;
static PyObject *const_str_plain__pri2jobId2job;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_newline;
static PyObject *const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple;
static PyObject *const_str_digest_17e86f0cc0561a6c6953afc362c26053;
extern PyObject *const_str_plain_globalClock;
extern PyObject *const_str_plain_Done;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_suspend;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_priorities_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_priorities_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_priorities = UNSTREAM_STRING( &constant_bin[ 115640 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_priorities_tuple, 1, const_str_plain_priorities ); Py_INCREF( const_str_plain_priorities );
    const_str_digest_412f9952f61a49e412a09c66140d3339 = UNSTREAM_STRING( &constant_bin[ 115650 ], 19, 0 );
    const_tuple_str_plain_self_str_plain_timeslice_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeslice_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_timeslice = UNSTREAM_STRING( &constant_bin[ 115669 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeslice_tuple, 1, const_str_plain_timeslice ); Py_INCREF( const_str_plain_timeslice );
    const_str_plain__getSortedPriorities = UNSTREAM_STRING( &constant_bin[ 115678 ], 20, 1 );
    const_str_digest_5162d184bc6cc54e340dc2a603496e6b = UNSTREAM_STRING( &constant_bin[ 115698 ], 13, 0 );
    const_str_plain__timeslice = UNSTREAM_STRING( &constant_bin[ 115711 ], 10, 1 );
    const_str_digest_d8fbdf96ce46f90014d5c54662c5e77b = UNSTREAM_STRING( &constant_bin[ 115721 ], 21, 0 );
    const_tuple_810940fa2a4ee720e94188211866c770_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_810940fa2a4ee720e94188211866c770_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_job = UNSTREAM_STRING( &constant_bin[ 115293 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_810940fa2a4ee720e94188211866c770_tuple, 1, const_str_plain_job ); Py_INCREF( const_str_plain_job );
    const_str_plain_jobId = UNSTREAM_STRING( &constant_bin[ 115660 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_810940fa2a4ee720e94188211866c770_tuple, 2, const_str_plain_jobId ); Py_INCREF( const_str_plain_jobId );
    const_str_plain_pri = UNSTREAM_STRING( &constant_bin[ 115 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_810940fa2a4ee720e94188211866c770_tuple, 3, const_str_plain_pri ); Py_INCREF( const_str_plain_pri );
    PyTuple_SET_ITEM( const_tuple_810940fa2a4ee720e94188211866c770_tuple, 4, const_str_plain_priorities ); Py_INCREF( const_str_plain_priorities );
    const_str_plain__jobId2overflowTime = UNSTREAM_STRING( &constant_bin[ 115742 ], 19, 1 );
    const_str_plain__highestPriority = UNSTREAM_STRING( &constant_bin[ 115761 ], 16, 1 );
    const_str_plain_getTimeslice = UNSTREAM_STRING( &constant_bin[ 115777 ], 12, 1 );
    const_str_plain_overflowTime = UNSTREAM_STRING( &constant_bin[ 115749 ], 12, 1 );
    const_str_digest_e11a24d4b4477f7ca2b80d30ffd62182 = UNSTREAM_STRING( &constant_bin[ 115789 ], 187, 0 );
    const_tuple_str_digest_9dab52a4983e48b38ad3decf9004638e_float_0_5_tuple = PyTuple_New( 2 );
    const_str_digest_9dab52a4983e48b38ad3decf9004638e = UNSTREAM_STRING( &constant_bin[ 115976 ], 24, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9dab52a4983e48b38ad3decf9004638e_float_0_5_tuple, 0, const_str_digest_9dab52a4983e48b38ad3decf9004638e ); Py_INCREF( const_str_digest_9dab52a4983e48b38ad3decf9004638e );
    PyTuple_SET_ITEM( const_tuple_str_digest_9dab52a4983e48b38ad3decf9004638e_float_0_5_tuple, 1, const_float_0_5 ); Py_INCREF( const_float_0_5 );
    const_tuple_str_plain_self_str_plain_job_str_plain_pri_str_plain_jobId_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_job_str_plain_pri_str_plain_jobId_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_job_str_plain_pri_str_plain_jobId_tuple, 1, const_str_plain_job ); Py_INCREF( const_str_plain_job );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_job_str_plain_pri_str_plain_jobId_tuple, 2, const_str_plain_pri ); Py_INCREF( const_str_plain_pri );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_job_str_plain_pri_str_plain_jobId_tuple, 3, const_str_plain_jobId ); Py_INCREF( const_str_plain_jobId );
    const_str_plain__jobIdGenerator = UNSTREAM_STRING( &constant_bin[ 116000 ], 15, 1 );
    const_str_plain_jobId2job = UNSTREAM_STRING( &constant_bin[ 116015 ], 9, 1 );
    const_str_plain__pri2jobIds = UNSTREAM_STRING( &constant_bin[ 116024 ], 11, 1 );
    const_str_digest_96f38ded341904390253e185ecc634dd = UNSTREAM_STRING( &constant_bin[ 116035 ], 26, 0 );
    const_str_plain_setTimeslice = UNSTREAM_STRING( &constant_bin[ 116061 ], 12, 1 );
    const_tuple_str_digest_d8fbdf96ce46f90014d5c54662c5e77b_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d8fbdf96ce46f90014d5c54662c5e77b_int_pos_1_tuple, 0, const_str_digest_d8fbdf96ce46f90014d5c54662c5e77b ); Py_INCREF( const_str_digest_d8fbdf96ce46f90014d5c54662c5e77b );
    PyTuple_SET_ITEM( const_tuple_str_digest_d8fbdf96ce46f90014d5c54662c5e77b_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain__jobId2pri = UNSTREAM_STRING( &constant_bin[ 116073 ], 10, 1 );
    const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 2, const_str_plain_notify ); Py_INCREF( const_str_plain_notify );
    const_str_plain_TaskName = UNSTREAM_STRING( &constant_bin[ 116083 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 3, const_str_plain_TaskName ); Py_INCREF( const_str_plain_TaskName );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 5, const_str_plain_destroy ); Py_INCREF( const_str_plain_destroy );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 6, const_str_plain_add ); Py_INCREF( const_str_plain_add );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 7, const_str_plain_remove ); Py_INCREF( const_str_plain_remove );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 8, const_str_plain_finish ); Py_INCREF( const_str_plain_finish );
    const_str_plain_getDefaultTimeslice = UNSTREAM_STRING( &constant_bin[ 116091 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 9, const_str_plain_getDefaultTimeslice ); Py_INCREF( const_str_plain_getDefaultTimeslice );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 10, const_str_plain_getTimeslice ); Py_INCREF( const_str_plain_getTimeslice );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 11, const_str_plain_setTimeslice ); Py_INCREF( const_str_plain_setTimeslice );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 12, const_str_plain__getSortedPriorities ); Py_INCREF( const_str_plain__getSortedPriorities );
    const_str_plain__process = UNSTREAM_STRING( &constant_bin[ 116110 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 13, const_str_plain__process ); Py_INCREF( const_str_plain__process );
    PyTuple_SET_ITEM( const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 14, const_str_plain___repr__ ); Py_INCREF( const_str_plain___repr__ );
    const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 1, const_str_plain_task ); Py_INCREF( const_str_plain_task );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 2, const_str_plain_endT ); Py_INCREF( const_str_plain_endT );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 3, const_str_plain_jobId ); Py_INCREF( const_str_plain_jobId );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 4, const_str_plain_pri ); Py_INCREF( const_str_plain_pri );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 5, const_str_plain_overflowTime ); Py_INCREF( const_str_plain_overflowTime );
    const_str_plain_timeLeft = UNSTREAM_STRING( &constant_bin[ 116118 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 6, const_str_plain_timeLeft ); Py_INCREF( const_str_plain_timeLeft );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 7, const_str_plain_job ); Py_INCREF( const_str_plain_job );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 8, const_str_plain_gen ); Py_INCREF( const_str_plain_gen );
    PyTuple_SET_ITEM( const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain__jobId2timeslices = UNSTREAM_STRING( &constant_bin[ 116126 ], 17, 1 );
    const_str_digest_2c7733a3375f015110a4e27d9330e472 = UNSTREAM_STRING( &constant_bin[ 116143 ], 29, 0 );
    const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_pris = UNSTREAM_STRING( &constant_bin[ 116172 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 2, const_str_plain_pris ); Py_INCREF( const_str_plain_pris );
    PyTuple_SET_ITEM( const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 3, const_str_plain_pri ); Py_INCREF( const_str_plain_pri );
    PyTuple_SET_ITEM( const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 4, const_str_plain_jobId2job ); Py_INCREF( const_str_plain_jobId2job );
    PyTuple_SET_ITEM( const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 5, const_str_plain_jobId ); Py_INCREF( const_str_plain_jobId );
    PyTuple_SET_ITEM( const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 6, const_str_plain_job ); Py_INCREF( const_str_plain_job );
    const_tuple_str_plain_getBase_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getBase_tuple, 0, const_str_plain_getBase ); Py_INCREF( const_str_plain_getBase );
    const_str_plain_jobManager = UNSTREAM_STRING( &constant_bin[ 115427 ], 10, 1 );
    const_str_plain__useOverflowTime = UNSTREAM_STRING( &constant_bin[ 116176 ], 16, 1 );
    const_str_digest_e1295e852898ae6323c5e44ab44156e9 = UNSTREAM_STRING( &constant_bin[ 116192 ], 29, 0 );
    const_tuple_str_plain_jobId_str_plain_self_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_jobId_str_plain_self_tuple, 0, const_str_plain_jobId ); Py_INCREF( const_str_plain_jobId );
    PyTuple_SET_ITEM( const_tuple_str_plain_jobId_str_plain_self_tuple, 1, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_digest_96c1d85f4342c1d9773f01f7b99b2948 = UNSTREAM_STRING( &constant_bin[ 116221 ], 186, 0 );
    const_str_digest_2c9c4cb941397e8d3c0bb4cd01e9f285 = UNSTREAM_STRING( &constant_bin[ 116407 ], 15, 0 );
    const_str_plain__pri2jobId2job = UNSTREAM_STRING( &constant_bin[ 116422 ], 14, 1 );
    const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple, 1, const_str_plain_job ); Py_INCREF( const_str_plain_job );
    PyTuple_SET_ITEM( const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple, 2, const_str_plain_jobId ); Py_INCREF( const_str_plain_jobId );
    PyTuple_SET_ITEM( const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple, 3, const_str_plain_pri ); Py_INCREF( const_str_plain_pri );
    PyTuple_SET_ITEM( const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple, 4, const_str_plain_gen ); Py_INCREF( const_str_plain_gen );
    PyTuple_SET_ITEM( const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple, 5, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_17e86f0cc0561a6c6953afc362c26053 = UNSTREAM_STRING( &constant_bin[ 115789 ], 167, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_direct$showbase$JobManager( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4252e59449a996e52ff4dc8c77754989;
static PyCodeObject *codeobj_d963a5d6ad96bb6a09371630608f66ef;
static PyCodeObject *codeobj_6299bb08979bd37c7ccbc142cfee54ef;
static PyCodeObject *codeobj_06ee23bad33b97892de5d2cec5a65fb3;
static PyCodeObject *codeobj_5e33cfbe034e76f69a993beab4ae122e;
static PyCodeObject *codeobj_a415da7afc4a1c1f366f0fb71d3d4cec;
static PyCodeObject *codeobj_1783fe5b5c3b5579d2802eed1a6aa884;
static PyCodeObject *codeobj_4a47f982fc0d3843508bae4911f6221d;
static PyCodeObject *codeobj_940d26701e01cdbaa557ef570d442de1;
static PyCodeObject *codeobj_992a109027941cf267d017231223561f;
static PyCodeObject *codeobj_fdc3bb956343cf809e6c7dd5c3f8657c;
static PyCodeObject *codeobj_3f00ee1b783d931985ae10d34a27c1f1;
static PyCodeObject *codeobj_36a2829958b56402e12e911ee23ba956;
static PyCodeObject *codeobj_e29f4caaa606aecbb691b6d02e7b7334;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_2c7733a3375f015110a4e27d9330e472 );
    codeobj_4252e59449a996e52ff4dc8c77754989 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 156, const_tuple_str_plain_jobId_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_d963a5d6ad96bb6a09371630608f66ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_JobManager, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_6299bb08979bd37c7ccbc142cfee54ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_JobManager, 6, const_tuple_9bd893a6a89f0a22285139ff6852072f_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_06ee23bad33b97892de5d2cec5a65fb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 17, const_tuple_str_plain_self_str_plain_timeslice_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5e33cfbe034e76f69a993beab4ae122e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 222, const_tuple_0a45b45bbab22ee604d9358d6878627f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a415da7afc4a1c1f366f0fb71d3d4cec = MAKE_CODEOBJ( module_filename_obj, const_str_plain__getSortedPriorities, 138, const_tuple_str_plain_self_str_plain_priorities_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1783fe5b5c3b5579d2802eed1a6aa884 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__process, 144, const_tuple_868c2d9d9a2d7f7165e254919f935e69_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a47f982fc0d3843508bae4911f6221d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add, 44, const_tuple_str_plain_self_str_plain_job_str_plain_pri_str_plain_jobId_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_940d26701e01cdbaa557ef570d442de1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_destroy, 40, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_992a109027941cf267d017231223561f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finish, 95, const_tuple_b02ca13fd7150659aaf8def5926abdd0_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fdc3bb956343cf809e6c7dd5c3f8657c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getDefaultTimeslice, 126, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f00ee1b783d931985ae10d34a27c1f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getTimeslice, 131, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36a2829958b56402e12e911ee23ba956 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove, 68, const_tuple_810940fa2a4ee720e94188211866c770_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e29f4caaa606aecbb691b6d02e7b7334 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setTimeslice, 135, const_tuple_str_plain_self_str_plain_timeslice_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process( PyObject *defaults );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process$$$function_1_lambda( struct Nuitka_CellObject *closure_self );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_11___repr__(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_2_destroy(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_3_add(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_4_remove(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_6_getDefaultTimeslice(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_7_getTimeslice(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_8_setTimeslice(  );


static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_9__getSortedPriorities(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_notify = NULL;
    PyObject *var_TaskName = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_destroy = NULL;
    PyObject *var_add = NULL;
    PyObject *var_remove = NULL;
    PyObject *var_finish = NULL;
    PyObject *var_getDefaultTimeslice = NULL;
    PyObject *var_getTimeslice = NULL;
    PyObject *var_setTimeslice = NULL;
    PyObject *var__getSortedPriorities = NULL;
    PyObject *var__process = NULL;
    PyObject *var___repr__ = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_96f38ded341904390253e185ecc634dd;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_96c1d85f4342c1d9773f01f7b99b2948;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6299bb08979bd37c7ccbc142cfee54ef, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_directNotify );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_directNotify );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "directNotify" );
        exception_tb = NULL;

        exception_lineno = 12;
        type_description = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 12;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_newCategory, &PyTuple_GET_ITEM( const_tuple_str_plain_JobManager_tuple, 0 ) );

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_notify == NULL );
    var_notify = tmp_assign_source_3;

    tmp_assign_source_4 = const_str_plain_jobManager;
    assert( var_TaskName == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_TaskName = tmp_assign_source_4;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_5 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_1___init__( tmp_defaults_1 );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_2_destroy(  );
    assert( var_destroy == NULL );
    var_destroy = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_3_add(  );
    assert( var_add == NULL );
    var_add = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_4_remove(  );
    assert( var_remove == NULL );
    var_remove = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish(  );
    assert( var_finish == NULL );
    var_finish = tmp_assign_source_9;

    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_6_getDefaultTimeslice(  );
    frame_function->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_getDefaultTimeslice == NULL );
    var_getDefaultTimeslice = tmp_assign_source_10;


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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,var___module__, var___doc__, var_notify, var_TaskName, var___init__, var_destroy, var_add, var_remove, var_finish, var_getDefaultTimeslice, var_getTimeslice, var_setTimeslice, var__getSortedPriorities, var__process, var___repr__ );

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

    tmp_assign_source_11 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_7_getTimeslice(  );
    assert( var_getTimeslice == NULL );
    var_getTimeslice = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_8_setTimeslice(  );
    assert( var_setTimeslice == NULL );
    var_setTimeslice = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_9__getSortedPriorities(  );
    assert( var__getSortedPriorities == NULL );
    var__getSortedPriorities = tmp_assign_source_13;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_14 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process( tmp_defaults_2 );
    assert( var__process == NULL );
    var__process = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_11___repr__(  );
    assert( var___repr__ == NULL );
    var___repr__ = tmp_assign_source_15;

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

    if ( var_notify )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_notify,
            var_notify
        );

        assert( res == 0 );
    }

    if ( var_TaskName )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_TaskName,
            var_TaskName
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

    if ( var_destroy )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_destroy,
            var_destroy
        );

        assert( res == 0 );
    }

    if ( var_add )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_add,
            var_add
        );

        assert( res == 0 );
    }

    if ( var_remove )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_remove,
            var_remove
        );

        assert( res == 0 );
    }

    if ( var_finish )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_finish,
            var_finish
        );

        assert( res == 0 );
    }

    if ( var_getDefaultTimeslice )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getDefaultTimeslice,
            var_getDefaultTimeslice
        );

        assert( res == 0 );
    }

    if ( var_getTimeslice )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getTimeslice,
            var_getTimeslice
        );

        assert( res == 0 );
    }

    if ( var_setTimeslice )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setTimeslice,
            var_setTimeslice
        );

        assert( res == 0 );
    }

    if ( var__getSortedPriorities )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__getSortedPriorities,
            var__getSortedPriorities
        );

        assert( res == 0 );
    }

    if ( var__process )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__process,
            var__process
        );

        assert( res == 0 );
    }

    if ( var___repr__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___repr__,
            var___repr__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_notify );
    Py_DECREF( var_notify );
    var_notify = NULL;

    CHECK_OBJECT( (PyObject *)var_TaskName );
    Py_DECREF( var_TaskName );
    var_TaskName = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_destroy );
    Py_DECREF( var_destroy );
    var_destroy = NULL;

    CHECK_OBJECT( (PyObject *)var_add );
    Py_DECREF( var_add );
    var_add = NULL;

    CHECK_OBJECT( (PyObject *)var_remove );
    Py_DECREF( var_remove );
    var_remove = NULL;

    CHECK_OBJECT( (PyObject *)var_finish );
    Py_DECREF( var_finish );
    var_finish = NULL;

    CHECK_OBJECT( (PyObject *)var_getDefaultTimeslice );
    Py_DECREF( var_getDefaultTimeslice );
    var_getDefaultTimeslice = NULL;

    CHECK_OBJECT( (PyObject *)var_getTimeslice );
    Py_DECREF( var_getTimeslice );
    var_getTimeslice = NULL;

    CHECK_OBJECT( (PyObject *)var_setTimeslice );
    Py_DECREF( var_setTimeslice );
    var_setTimeslice = NULL;

    CHECK_OBJECT( (PyObject *)var__getSortedPriorities );
    Py_DECREF( var__getSortedPriorities );
    var__getSortedPriorities = NULL;

    CHECK_OBJECT( (PyObject *)var__process );
    Py_DECREF( var__process );
    var__process = NULL;

    CHECK_OBJECT( (PyObject *)var___repr__ );
    Py_DECREF( var___repr__ );
    var___repr__ = NULL;

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

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var_notify );
    var_notify = NULL;

    Py_XDECREF( var_TaskName );
    var_TaskName = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_destroy );
    var_destroy = NULL;

    Py_XDECREF( var_add );
    var_add = NULL;

    Py_XDECREF( var_remove );
    var_remove = NULL;

    Py_XDECREF( var_finish );
    var_finish = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timeslice = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_06ee23bad33b97892de5d2cec5a65fb3, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_timeslice;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__timeslice, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = PyDict_New();
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__pri2jobId2job, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 22;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = PyDict_New();
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__pri2jobIds, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 24;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_assattr_name_4 = PyDict_New();
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__jobId2pri, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 26;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assattr_name_5 = PyDict_New();
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__jobId2timeslices, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 29;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = PyDict_New();
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__jobId2overflowTime, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 32;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__useOverflowTime, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__jobIdGenerator, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_Job );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Job );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Job" );
        exception_tb = NULL;

        exception_lineno = 38;
        type_description = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Priorities );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Normal );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__highestPriority, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 38;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_timeslice );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_timeslice );
    Py_DECREF( par_timeslice );
    par_timeslice = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeslice );
    Py_DECREF( par_timeslice );
    par_timeslice = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_1___init__ );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_2_destroy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_attrdel_target_1;
    PyObject *tmp_called_name_1;
    int tmp_res;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_940d26701e01cdbaa557ef570d442de1, module_direct$showbase$JobManager, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_taskMgr );

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

        exception_lineno = 41;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_remove );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_JobManager );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JobManager );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "JobManager" );
        exception_tb = NULL;

        exception_lineno = 41;
        type_description = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_TaskName );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 41;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 41;
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


        exception_lineno = 41;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_attrdel_target_1 = par_self;

    CHECK_OBJECT( tmp_attrdel_target_1 );
    tmp_res = PyObject_DelAttr( tmp_attrdel_target_1, const_str_plain__pri2jobId2job );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description = "o";
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_2_destroy );
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_2_destroy );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_3_add( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_job = python_pars[ 1 ];
    PyObject *var_pri = NULL;
    PyObject *var_jobId = NULL;
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
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4a47f982fc0d3843508bae4911f6221d, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_job;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 45;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getPriority );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_pri == NULL );
    var_pri = tmp_assign_source_1;

    tmp_called_instance_2 = par_job;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 46;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__getJobId );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_jobId == NULL );
    var_jobId = tmp_assign_source_2;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pri2jobId2job );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_pri;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = PyDict_New();
    frame_function->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_setdefault, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = par_job;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__pri2jobId2job );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = var_jobId;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = var_pri;

    CHECK_OBJECT( tmp_ass_subvalue_2 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__jobId2pri );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = var_jobId;

    CHECK_OBJECT( tmp_ass_subscript_2 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pri2jobIds );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_pri;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = PyList_New( 0 );
    frame_function->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_setdefault, call_args );
    }

    Py_DECREF( tmp_called_instance_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__pri2jobIds );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_jobId;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_function->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_append, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_3 = var_pri;

    CHECK_OBJECT( tmp_ass_subvalue_3 );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__jobId2timeslices );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = var_jobId;

    CHECK_OBJECT( tmp_ass_subscript_3 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_4 = const_float_0_0;
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__jobId2overflowTime );
    if ( tmp_ass_subscribed_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_4 = var_jobId;

    CHECK_OBJECT( tmp_ass_subscript_4 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscribed_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__jobIdGenerator, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__jobId2pri );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_taskMgr );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_taskMgr );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "taskMgr" );
        exception_tb = NULL;

        exception_lineno = 62;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_add );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__process );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 62;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_JobManager );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JobManager );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "JobManager" );
        exception_tb = NULL;

        exception_lineno = 62;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_TaskName );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 62;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = var_pri;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__highestPriority, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_pri;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_source_name_12 = par_self;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__highestPriority );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 64;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_3 = var_pri;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__highestPriority, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_notify );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_debug );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_5162d184bc6cc54e340dc2a603496e6b;
    tmp_called_instance_6 = par_job;

    CHECK_OBJECT( tmp_called_instance_6 );
    frame_function->m_frame.f_lineno = 66;
    tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getJobName );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 66;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 66;
        type_description = "oooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_job, var_pri, var_jobId );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_3_add );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_job );
    Py_DECREF( par_job );
    par_job = NULL;

    CHECK_OBJECT( (PyObject *)var_pri );
    Py_DECREF( var_pri );
    var_pri = NULL;

    CHECK_OBJECT( (PyObject *)var_jobId );
    Py_DECREF( var_jobId );
    var_jobId = NULL;

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

    CHECK_OBJECT( (PyObject *)par_job );
    Py_DECREF( par_job );
    par_job = NULL;

    Py_XDECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_jobId );
    var_jobId = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_3_add );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_4_remove( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_job = python_pars[ 1 ];
    PyObject *var_jobId = NULL;
    PyObject *var_pri = NULL;
    PyObject *var_priorities = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_subscript_2;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_delsubscr_target_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_36a2829958b56402e12e911ee23ba956, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_job;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 69;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__getJobId );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jobId == NULL );
    var_jobId = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__jobId2pri );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_jobId;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pri == NULL );
    var_pri = tmp_assign_source_2;

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__pri2jobIds );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_jobId;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_remove, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__pri2jobId2job );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_delsubscr_target_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_delsubscr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_delsubscr_subscript_1 = var_jobId;

    CHECK_OBJECT( tmp_delsubscr_subscript_1 );
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    Py_DECREF( tmp_delsubscr_target_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = par_job;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_function->m_frame.f_lineno = 77;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain__cleanupGenerator );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__jobId2timeslices );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_jobId;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_function->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_pop, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__jobId2overflowTime );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_jobId;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_function->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_pop, call_args );
    }

    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__pri2jobId2job );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_len_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 82;
        type_description = "ooooo";
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
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_delsubscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__pri2jobId2job );
    if ( tmp_delsubscr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_delsubscr_subscript_2 = var_pri;

    CHECK_OBJECT( tmp_delsubscr_subscript_2 );
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_2, tmp_delsubscr_subscript_2 );
    Py_DECREF( tmp_delsubscr_target_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = var_pri;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__highestPriority );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 84;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__jobId2pri );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 85;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_7 = par_self;

    CHECK_OBJECT( tmp_called_instance_7 );
    frame_function->m_frame.f_lineno = 88;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain__getSortedPriorities );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_priorities == NULL );
    var_priorities = tmp_assign_source_3;

    tmp_subscribed_name_4 = var_priorities;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_neg_1;
    tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__highestPriority, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 89;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_taskMgr );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_taskMgr );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "taskMgr" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_remove );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_JobManager );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JobManager );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "JobManager" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_TaskName );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 91;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__highestPriority, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_no_2:;
    branch_no_1:;
    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_notify );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_debug );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_2c9c4cb941397e8d3c0bb4cd01e9f285;
    tmp_called_instance_8 = par_job;

    CHECK_OBJECT( tmp_called_instance_8 );
    frame_function->m_frame.f_lineno = 93;
    tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_getJobName );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 93;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 93;
        type_description = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description = "ooooo";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_job, var_jobId, var_pri, var_priorities );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_4_remove );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_job );
    Py_DECREF( par_job );
    par_job = NULL;

    CHECK_OBJECT( (PyObject *)var_jobId );
    Py_DECREF( var_jobId );
    var_jobId = NULL;

    CHECK_OBJECT( (PyObject *)var_pri );
    Py_DECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_priorities );
    var_priorities = NULL;

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

    CHECK_OBJECT( (PyObject *)par_job );
    Py_DECREF( par_job );
    par_job = NULL;

    Py_XDECREF( var_jobId );
    var_jobId = NULL;

    Py_XDECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_priorities );
    var_priorities = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_4_remove );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_job = python_pars[ 1 ];
    PyObject *var_jobId = NULL;
    PyObject *var_pri = NULL;
    PyObject *var_gen = NULL;
    PyObject *var_result = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_992a109027941cf267d017231223561f, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_notify );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 97;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_debugCall );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 97;
        type_description = "oooooo";
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
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 97;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = par_job;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 98;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__getJobId );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jobId == NULL );
    var_jobId = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__jobId2pri );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = var_jobId;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pri == NULL );
    var_pri = tmp_assign_source_2;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__pri2jobId2job );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_subscribed_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = var_jobId;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_job;
        assert( old != NULL );
        par_job = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_called_instance_3 = par_job;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_function->m_frame.f_lineno = 103;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__getGenerator );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_gen == NULL );
    var_gen = tmp_assign_source_4;

    tmp_source_name_4 = par_job;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pstats );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 105;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_start );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_5 = par_job;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_function->m_frame.f_lineno = 106;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_resume );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = var_gen;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description = "oooooo";
        exception_lineno = 109;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_result;
        var_result = tmp_assign_source_5;
        Py_XDECREF( old );
    }

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_notify );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_warning );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_e1295e852898ae6323c5e44ab44156e9;
    tmp_right_name_1 = par_job;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 113;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 113;
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


        exception_lineno = 113;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_Job );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Job );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Job" );
        exception_tb = NULL;

        exception_lineno = 114;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Done );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_result;
        var_result = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_function->m_frame) frame_function->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "oooooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = var_result;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_Job );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Job );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Job" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Done );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_6 = par_job;

    CHECK_OBJECT( tmp_called_instance_6 );
    frame_function->m_frame.f_lineno = 116;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_suspend );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_7 = par_self;

    CHECK_OBJECT( tmp_called_instance_7 );
    tmp_args_element_name_2 = par_job;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_function->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_remove, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_8 = par_job;

    CHECK_OBJECT( tmp_called_instance_8 );
    frame_function->m_frame.f_lineno = 118;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain__setFinished );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_send );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_9 = par_job;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_function->m_frame.f_lineno = 119;
    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_getFinishedEvent );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 119;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_1;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_source_name_10 = par_job;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_instance_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__pstats );
    if ( tmp_called_instance_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 123;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_stop );
    Py_DECREF( tmp_called_instance_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_job, var_jobId, var_pri, var_gen, var_result );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_job );
    Py_DECREF( par_job );
    par_job = NULL;

    CHECK_OBJECT( (PyObject *)var_jobId );
    Py_DECREF( var_jobId );
    var_jobId = NULL;

    CHECK_OBJECT( (PyObject *)var_pri );
    Py_DECREF( var_pri );
    var_pri = NULL;

    CHECK_OBJECT( (PyObject *)var_gen );
    Py_DECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_job );
    Py_DECREF( par_job );
    par_job = NULL;

    Py_XDECREF( var_jobId );
    var_jobId = NULL;

    Py_XDECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_6_getDefaultTimeslice( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fdc3bb956343cf809e6c7dd5c3f8657c, module_direct$showbase$JobManager, 0 );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_getBase );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getBase );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getBase" );
        exception_tb = NULL;

        exception_lineno = 130;

        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 130;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_config );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 130;
    tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_GetFloat, &PyTuple_GET_ITEM( const_tuple_str_digest_9dab52a4983e48b38ad3decf9004638e_float_0_5_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_float_1000_0;
    tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

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

    goto function_return_exit;

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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, ""  );

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
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_6_getDefaultTimeslice );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_7_getTimeslice( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3f00ee1b783d931985ae10d34a27c1f1, module_direct$showbase$JobManager, sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__timeslice );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 132;
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
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__timeslice );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 134;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getDefaultTimeslice );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_7_getTimeslice );
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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_7_getTimeslice );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_8_setTimeslice( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timeslice = python_pars[ 1 ];
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e29f4caaa606aecbb691b6d02e7b7334, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_timeslice;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__timeslice, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_timeslice );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_8_setTimeslice );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_timeslice );
    Py_DECREF( par_timeslice );
    par_timeslice = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeslice );
    Py_DECREF( par_timeslice );
    par_timeslice = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_8_setTimeslice );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_9__getSortedPriorities( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_priorities = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a415da7afc4a1c1f366f0fb71d3d4cec, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pri2jobId2job );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 140;
    tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_priorities == NULL );
    var_priorities = tmp_assign_source_1;

    tmp_called_instance_2 = var_priorities;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 141;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_sort );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, var_priorities );

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

    tmp_return_value = var_priorities;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_9__getSortedPriorities );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_priorities );
    Py_DECREF( var_priorities );
    var_priorities = NULL;

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

    Py_XDECREF( var_priorities );
    var_priorities = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_9__getSortedPriorities );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_task = python_pars[ 1 ];
    PyObject *var_endT = NULL;
    PyObject *var_jobId = NULL;
    PyObject *var_pri = NULL;
    PyObject *var_overflowTime = NULL;
    PyObject *var_timeLeft = NULL;
    PyObject *var_job = NULL;
    PyObject *var_gen = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_while_loop_1__break_indicator = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_called_instance_14;
    PyObject *tmp_called_instance_15;
    PyObject *tmp_called_instance_16;
    PyObject *tmp_called_instance_17;
    PyObject *tmp_called_instance_18;
    PyObject *tmp_called_instance_19;
    PyObject *tmp_called_instance_20;
    PyObject *tmp_called_instance_21;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_Lt_1;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    bool tmp_is_6;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1783fe5b5c3b5579d2802eed1a6aa884, module_direct$showbase$JobManager, sizeof(struct Nuitka_CellObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    if ( par_self == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 145;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__useOverflowTime );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_config );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_config );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "config" );
        exception_tb = NULL;

        exception_lineno = 146;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 146;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_GetBool, &PyTuple_GET_ITEM( const_tuple_str_digest_d8fbdf96ce46f90014d5c54662c5e77b_int_pos_1_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        tmp_assattr_target_1 = NULL;
    }
    else
    {
        tmp_assattr_target_1 = PyCell_GET( par_self );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 146;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__useOverflowTime, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 146;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    if ( par_self == NULL )
    {
        tmp_source_name_2 = NULL;
    }
    else
    {
        tmp_source_name_2 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 147;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__pri2jobId2job );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 147;
        type_description = "cooooooooo";
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
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_globalClock );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_globalClock );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "globalClock" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 150;
    tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getRealTime );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        tmp_called_instance_3 = NULL;
    }
    else
    {
        tmp_called_instance_3 = PyCell_GET( par_self );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 150;
    tmp_left_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getTimeslice );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 150;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_float_0_9;
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 150;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_endT == NULL );
    var_endT = tmp_assign_source_1;

    loop_start_1:;
    if ( par_self == NULL )
    {
        tmp_source_name_3 = NULL;
    }
    else
    {
        tmp_source_name_3 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 152;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__jobIdGenerator );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_flywheel );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_flywheel );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "flywheel" );
        exception_tb = NULL;

        exception_lineno = 154;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    if ( par_self == NULL )
    {
        tmp_source_name_4 = NULL;
    }
    else
    {
        tmp_source_name_4 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 155;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__jobId2timeslices );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 155;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 155;
    tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_keys );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 155;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 155;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process$$$function_1_lambda( par_self );
    tmp_dict_key_1 = const_str_plain_countFunc;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->m_frame.f_lineno = 154;
    tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        tmp_assattr_target_2 = NULL;
    }
    else
    {
        tmp_assattr_target_2 = PyCell_GET( par_self );
    }

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 154;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__jobIdGenerator, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 154;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_3:;
    // Tried code:
    if ( par_self == NULL )
    {
        tmp_source_name_5 = NULL;
    }
    else
    {
        tmp_source_name_5 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 159;
        type_description = "cooooooooo";
        goto try_except_handler_2;
    }

    tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__jobIdGenerator );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description = "cooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description = "cooooooooo";
        exception_lineno = 159;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_jobId;
        var_jobId = tmp_assign_source_2;
        Py_XDECREF( old );
    }

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_3 = Py_None;
    if ( par_self == NULL )
    {
        tmp_assattr_target_3 = NULL;
    }
    else
    {
        tmp_assattr_target_3 = PyCell_GET( par_self );
    }

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 161;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__jobIdGenerator, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_function->m_frame) frame_function->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "cooooooooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    // End of try:
    try_end_1:;
    if ( par_self == NULL )
    {
        tmp_source_name_6 = NULL;
    }
    else
    {
        tmp_source_name_6 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__jobId2pri );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_jobId;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_function->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_get, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_pri;
        var_pri = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_compare_left_4 = var_pri;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_is_3 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_3 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_start_1;
    branch_no_5:;
    if ( par_self == NULL )
    {
        tmp_source_name_7 = NULL;
    }
    else
    {
        tmp_source_name_7 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 169;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__useOverflowTime );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 169;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    if ( par_self == NULL )
    {
        tmp_source_name_8 = NULL;
    }
    else
    {
        tmp_source_name_8 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 170;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__jobId2overflowTime );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = var_jobId;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_overflowTime;
        var_overflowTime = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_endT;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_globalClock );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_globalClock );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "globalClock" );
        exception_tb = NULL;

        exception_lineno = 171;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    frame_function->m_frame.f_lineno = 171;
    tmp_right_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getRealTime );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_timeLeft;
        var_timeLeft = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_compare_left_5 = var_overflowTime;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = var_timeLeft;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = const_float_0_0;
    tmp_left_name_4 = var_overflowTime;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = var_timeLeft;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_args_element_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    if ( par_self == NULL )
    {
        tmp_source_name_9 = NULL;
    }
    else
    {
        tmp_source_name_9 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__jobId2overflowTime );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 173;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = var_jobId;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_end_1;
    branch_no_7:;
    branch_no_6:;
    if ( par_self == NULL )
    {
        tmp_source_name_10 = NULL;
    }
    else
    {
        tmp_source_name_10 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 177;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__pri2jobId2job );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_subscribed_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = var_jobId;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_job;
        var_job = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_7 = var_job;

    CHECK_OBJECT( tmp_called_instance_7 );
    frame_function->m_frame.f_lineno = 178;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain__getGenerator );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_gen;
        var_gen = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_11 = var_job;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__pstats );
    if ( tmp_called_instance_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    frame_function->m_frame.f_lineno = 180;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_start );
    Py_DECREF( tmp_called_instance_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_9 = var_job;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_function->m_frame.f_lineno = 181;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_resume );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_8 = Py_False;
    {
        PyObject *old = tmp_while_loop_1__break_indicator;
        tmp_while_loop_1__break_indicator = tmp_assign_source_8;
        Py_INCREF( tmp_while_loop_1__break_indicator );
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_globalClock );

    if (unlikely( tmp_called_instance_10 == NULL ))
    {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_globalClock );
    }

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "globalClock" );
        exception_tb = NULL;

        exception_lineno = 182;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    frame_function->m_frame.f_lineno = 182;
    tmp_compare_left_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_getRealTime );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_compare_right_6 = var_endT;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 182;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_assign_source_9 = Py_True;
    {
        PyObject *old = tmp_while_loop_1__break_indicator;
        assert( old != NULL );
        tmp_while_loop_1__break_indicator = tmp_assign_source_9;
        Py_INCREF( tmp_while_loop_1__break_indicator );
        Py_DECREF( old );
    }

    goto loop_end_2;
    branch_no_8:;
    // Tried code:
    tmp_value_name_2 = var_gen;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description = "cooooooooo";
        exception_lineno = 184;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_result;
        var_result = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_function, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_7 = PyThreadState_GET()->exc_type;
    tmp_compare_right_7 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    if ( par_self == NULL )
    {
        tmp_source_name_13 = NULL;
    }
    else
    {
        tmp_source_name_13 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 188;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_notify );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_warning );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_left_name_5 = const_str_digest_e1295e852898ae6323c5e44ab44156e9;
    tmp_right_name_5 = var_job;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 188;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    frame_function->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_Job );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Job );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Job" );
        exception_tb = NULL;

        exception_lineno = 189;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Done );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_result;
        var_result = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == &frame_function->m_frame) frame_function->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description = "cooooooooo";
    goto try_except_handler_3;
    branch_end_9:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_compare_left_8 = var_result;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;

        exception_lineno = 191;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_Job );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Job );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Job" );
        exception_tb = NULL;

        exception_lineno = 191;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_Sleep );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_is_4 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_is_4 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_instance_11 = var_job;

    CHECK_OBJECT( tmp_called_instance_11 );
    frame_function->m_frame.f_lineno = 192;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_suspend );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = var_job;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_instance_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__pstats );
    if ( tmp_called_instance_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    frame_function->m_frame.f_lineno = 194;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_stop );
    Py_DECREF( tmp_called_instance_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_2;
    goto branch_end_10;
    branch_no_10:;
    tmp_compare_left_9 = var_result;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;

        exception_lineno = 197;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_Job );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Job );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Job" );
        exception_tb = NULL;

        exception_lineno = 197;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_Done );
    if ( tmp_compare_right_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_is_5 = ( tmp_compare_left_9 == tmp_compare_right_9 );
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_is_5 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_instance_13 = var_job;

    CHECK_OBJECT( tmp_called_instance_13 );
    frame_function->m_frame.f_lineno = 198;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_suspend );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( par_self == NULL )
    {
        tmp_called_instance_14 = NULL;
    }
    else
    {
        tmp_called_instance_14 = PyCell_GET( par_self );
    }

    if ( tmp_called_instance_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 199;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_5 = var_job;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_function->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_remove, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_15 = var_job;

    CHECK_OBJECT( tmp_called_instance_15 );
    frame_function->m_frame.f_lineno = 200;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_15, const_str_plain__setFinished );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = var_job;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_instance_16 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__pstats );
    if ( tmp_called_instance_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    frame_function->m_frame.f_lineno = 202;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_16, const_str_plain_stop );
    Py_DECREF( tmp_called_instance_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_messenger );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_messenger );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "messenger" );
        exception_tb = NULL;

        exception_lineno = 203;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_send );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_called_instance_17 = var_job;

    CHECK_OBJECT( tmp_called_instance_17 );
    frame_function->m_frame.f_lineno = 203;
    tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_17, const_str_plain_getFinishedEvent );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 203;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    frame_function->m_frame.f_lineno = 203;
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


        exception_lineno = 203;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_2;
    branch_no_11:;
    branch_end_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_compare_left_10 = tmp_while_loop_1__break_indicator;

    CHECK_OBJECT( tmp_compare_left_10 );
    tmp_compare_right_10 = Py_True;
    tmp_is_6 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if ( tmp_is_6 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_instance_18 = var_job;

    CHECK_OBJECT( tmp_called_instance_18 );
    frame_function->m_frame.f_lineno = 209;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_18, const_str_plain_suspend );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_19 = GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_globalClock );

    if (unlikely( tmp_called_instance_19 == NULL ))
    {
        tmp_called_instance_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_globalClock );
    }

    if ( tmp_called_instance_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "globalClock" );
        exception_tb = NULL;

        exception_lineno = 210;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    frame_function->m_frame.f_lineno = 210;
    tmp_left_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_19, const_str_plain_getRealTime );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_right_name_6 = var_endT;

    CHECK_OBJECT( tmp_right_name_6 );
    tmp_assign_source_12 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_overflowTime;
        var_overflowTime = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_compare_left_11 = var_overflowTime;

    CHECK_OBJECT( tmp_compare_left_11 );
    if ( par_self == NULL )
    {
        tmp_called_instance_20 = NULL;
    }
    else
    {
        tmp_called_instance_20 = PyCell_GET( par_self );
    }

    if ( tmp_called_instance_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 211;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    frame_function->m_frame.f_lineno = 211;
    tmp_compare_right_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_20, const_str_plain_getTimeslice );
    if ( tmp_compare_right_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_11 );

        exception_lineno = 211;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_11 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    if ( par_self == NULL )
    {
        tmp_source_name_20 = NULL;
    }
    else
    {
        tmp_source_name_20 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 212;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__jobId2overflowTime );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_inplace_assign_subscr_1__target == NULL );
    tmp_inplace_assign_subscr_1__target = tmp_assign_source_13;

    tmp_assign_source_14 = var_jobId;

    CHECK_OBJECT( tmp_assign_source_14 );
    assert( tmp_inplace_assign_subscr_1__subscript == NULL );
    Py_INCREF( tmp_assign_source_14 );
    tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_14;

    // Tried code:
    tmp_subscribed_name_4 = tmp_inplace_assign_subscr_1__target;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = tmp_inplace_assign_subscr_1__subscript;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description = "cooooooooo";
        goto try_except_handler_5;
    }
    tmp_right_name_7 = var_overflowTime;

    CHECK_OBJECT( tmp_right_name_7 );
    tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description = "cooooooooo";
        goto try_except_handler_5;
    }
    tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_1__target;

    CHECK_OBJECT( tmp_ass_subscribed_2 );
    tmp_ass_subscript_2 = tmp_inplace_assign_subscr_1__subscript;

    CHECK_OBJECT( tmp_ass_subscript_2 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description = "cooooooooo";
        goto try_except_handler_5;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    branch_no_13:;
    tmp_source_name_21 = var_job;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_instance_21 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__pstats );
    if ( tmp_called_instance_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    frame_function->m_frame.f_lineno = 214;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_21, const_str_plain_stop );
    Py_DECREF( tmp_called_instance_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description = "cooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto try_break_handler_3;
    branch_no_12:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_while_loop_1__break_indicator );
    tmp_while_loop_1__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_while_loop_1__break_indicator );
    Py_DECREF( tmp_while_loop_1__break_indicator );
    tmp_while_loop_1__break_indicator = NULL;

    goto loop_end_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_while_loop_1__break_indicator );
    Py_DECREF( tmp_while_loop_1__break_indicator );
    tmp_while_loop_1__break_indicator = NULL;

    if ( par_self == NULL )
    {
        tmp_source_name_22 = NULL;
    }
    else
    {
        tmp_source_name_22 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 217;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__pri2jobId2job );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_12 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_12 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        exception_lineno = 217;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_12 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    goto loop_end_1;
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    branch_no_2:;
    tmp_source_name_23 = par_task;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_cont );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description = "cooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, par_task, var_endT, var_jobId, var_pri, var_overflowTime, var_timeLeft, var_job, var_gen, var_result );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_task );
    Py_DECREF( par_task );
    par_task = NULL;

    Py_XDECREF( var_endT );
    var_endT = NULL;

    Py_XDECREF( var_jobId );
    var_jobId = NULL;

    Py_XDECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_overflowTime );
    var_overflowTime = NULL;

    Py_XDECREF( var_timeLeft );
    var_timeLeft = NULL;

    Py_XDECREF( var_job );
    var_job = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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

    Py_XDECREF( var_endT );
    var_endT = NULL;

    Py_XDECREF( var_jobId );
    var_jobId = NULL;

    Py_XDECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_overflowTime );
    var_overflowTime = NULL;

    Py_XDECREF( var_timeLeft );
    var_timeLeft = NULL;

    Py_XDECREF( var_job );
    var_job = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jobId = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4252e59449a996e52ff4dc8c77754989, module_direct$showbase$JobManager, sizeof(struct Nuitka_CellObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 156;
        type_description = "oc";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__jobId2timeslices );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description = "oc";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_jobId;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description = "oc";
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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_jobId, self->m_closure[0] );

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
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_jobId );
    Py_DECREF( par_jobId );
    par_jobId = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jobId );
    Py_DECREF( par_jobId );
    par_jobId = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process$$$function_1_lambda );
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


static PyObject *impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_11___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_s = NULL;
    PyObject *var_pris = NULL;
    PyObject *var_pri = NULL;
    PyObject *var_jobId2job = NULL;
    PyObject *var_jobId = NULL;
    PyObject *var_job = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_function = NULL;

    struct Nuitka_FrameObject *frame_function;

    char const *type_description;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_17e86f0cc0561a6c6953afc362c26053;
    assert( var_s == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_s = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5e33cfbe034e76f69a993beab4ae122e, module_direct$showbase$JobManager, sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *)+sizeof(PyObject *) );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_function->m_frame.f_lineno = 226;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__getSortedPriorities );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pris == NULL );
    var_pris = tmp_assign_source_2;

    tmp_len_arg_1 = var_pris;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 227;
        type_description = "ooooooo";
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
    tmp_assign_source_3 = const_str_digest_e11a24d4b4477f7ca2b80d30ffd62182;
    {
        PyObject *old = var_s;
        assert( old != NULL );
        var_s = tmp_assign_source_3;
        Py_INCREF( var_s );
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = var_pris;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_function->m_frame.f_lineno = 230;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reverse );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = var_pris;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooooooo";
            frame_function->m_frame.f_lineno = 231;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_pri;
        var_pri = tmp_assign_source_6;
        Py_INCREF( var_pri );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pri2jobId2job );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description = "ooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_jobId2job;
        var_jobId2job = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__pri2jobIds );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_2 = var_pri;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description = "ooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description = "ooooooo";
            frame_function->m_frame.f_lineno = 234;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_jobId;
        var_jobId = tmp_assign_source_10;
        Py_INCREF( var_jobId );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_3 = var_jobId2job;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = var_jobId;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description = "ooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_job;
        var_job = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_s;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;

        exception_lineno = 236;
        type_description = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_left_name_2 = const_str_digest_412f9952f61a49e412a09c66140d3339;
    tmp_right_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_pri;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_called_instance_3 = var_job;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_function->m_frame.f_lineno = 236;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getJobName );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 236;
        type_description = "ooooooo";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_jobId;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_1 );
    tmp_right_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description = "ooooooo";
        goto try_except_handler_3;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_12 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description = "ooooooo";
        goto try_except_handler_3;
    }
    var_s = tmp_assign_source_12;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_end_1:;
    tmp_left_name_3 = var_s;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;

        exception_lineno = 237;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_str_newline;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_13 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_s = tmp_assign_source_13;


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

    Nuitka_Frame_AttachLocals( (struct Nuitka_FrameObject *)frame_function, type_description ,par_self, var_s, var_pris, var_pri, var_jobId2job, var_jobId, var_job );

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

    tmp_return_value = var_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_11___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_pris );
    Py_DECREF( var_pris );
    var_pris = NULL;

    Py_XDECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_jobId2job );
    var_jobId2job = NULL;

    Py_XDECREF( var_jobId );
    var_jobId = NULL;

    Py_XDECREF( var_job );
    var_job = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_pris );
    var_pris = NULL;

    Py_XDECREF( var_pri );
    var_pri = NULL;

    Py_XDECREF( var_jobId2job );
    var_jobId2job = NULL;

    Py_XDECREF( var_jobId );
    var_jobId = NULL;

    Py_XDECREF( var_job );
    var_job = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( direct$showbase$JobManager$$$class_1_JobManager$$$function_11___repr__ );
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



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process,
        const_str_plain__process,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1783fe5b5c3b5579d2802eed1a6aa884,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process$$$function_1_lambda( struct Nuitka_CellObject *closure_self )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_10__process$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4252e59449a996e52ff4dc8c77754989,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        1
    );

result->m_closure[0] = closure_self;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_11___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_11___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e33cfbe034e76f69a993beab4ae122e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_06ee23bad33b97892de5d2cec5a65fb3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_2_destroy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_2_destroy,
        const_str_plain_destroy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_940d26701e01cdbaa557ef570d442de1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_3_add(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_3_add,
        const_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4a47f982fc0d3843508bae4911f6221d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_4_remove(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_4_remove,
        const_str_plain_remove,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_36a2829958b56402e12e911ee23ba956,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_5_finish,
        const_str_plain_finish,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_992a109027941cf267d017231223561f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_6_getDefaultTimeslice(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_6_getDefaultTimeslice,
        const_str_plain_getDefaultTimeslice,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fdc3bb956343cf809e6c7dd5c3f8657c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_7_getTimeslice(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_7_getTimeslice,
        const_str_plain_getTimeslice,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3f00ee1b783d931985ae10d34a27c1f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_8_setTimeslice(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_8_setTimeslice,
        const_str_plain_setTimeslice,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e29f4caaa606aecbb691b6d02e7b7334,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_direct$showbase$JobManager$$$class_1_JobManager$$$function_9__getSortedPriorities(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_direct$showbase$JobManager$$$class_1_JobManager$$$function_9__getSortedPriorities,
        const_str_plain__getSortedPriorities,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a415da7afc4a1c1f366f0fb71d3d4cec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_direct$showbase$JobManager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_direct$showbase$JobManager =
{
    PyModuleDef_HEAD_INIT,
    "direct.showbase.JobManager",   /* m_name */
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

MOD_INIT_DECL( direct$showbase$JobManager )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_direct$showbase$JobManager );
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
    puts("direct.showbase.JobManager: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("direct.showbase.JobManager: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdirect$showbase$JobManager" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_direct$showbase$JobManager = Py_InitModule4(
        "direct.showbase.JobManager",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_direct$showbase$JobManager = PyModule_Create( &mdef_direct$showbase$JobManager );
#endif

    moduledict_direct$showbase$JobManager = (PyDictObject *)((PyModuleObject *)module_direct$showbase$JobManager)->md_dict;

    CHECK_OBJECT( module_direct$showbase$JobManager );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_96f38ded341904390253e185ecc634dd, module_direct$showbase$JobManager );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_direct$showbase$JobManager );

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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    struct Nuitka_FrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_d963a5d6ad96bb6a09371630608f66ef, module_direct$showbase$JobManager );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_485ce81cec1a1f31081339bcf501b5fc;
    tmp_globals_name_1 = ((PyModuleObject *)module_direct$showbase$JobManager)->md_dict;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_directNotify_tuple;
    frame_module->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_directNotify );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_directNotify, tmp_assign_source_3 );
    tmp_name_name_2 = const_str_digest_c577954440b0777629c688a927ae363d;
    tmp_globals_name_2 = ((PyModuleObject *)module_direct$showbase$JobManager)->md_dict;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_taskMgr_tuple;
    frame_module->m_frame.f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_taskMgr );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_taskMgr, tmp_assign_source_4 );
    tmp_name_name_3 = const_str_digest_aa252e8b6414e4cedc7e11c31a0b3ba8;
    tmp_globals_name_3 = ((PyModuleObject *)module_direct$showbase$JobManager)->md_dict;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_Job_tuple;
    frame_module->m_frame.f_lineno = 3;
    tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Job );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_Job, tmp_assign_source_5 );
    tmp_name_name_4 = const_str_digest_1ec94dde2d7bfdc5166ada89a737ba93;
    tmp_globals_name_4 = ((PyModuleObject *)module_direct$showbase$JobManager)->md_dict;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_getBase_tuple;
    frame_module->m_frame.f_lineno = 4;
    tmp_import_name_from_4 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_getBase );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_getBase, tmp_assign_source_6 );
    // Tried code:
    tmp_assign_source_7 = impl_direct$showbase$JobManager$$$class_1_JobManager( NULL );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_7;

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
    tmp_assign_source_8 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_8 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_8;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_JobManager;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_module->m_frame.f_lineno = 6;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_9;

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
    tmp_assign_source_10 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_10 );
    UPDATE_STRING_DICT0( moduledict_direct$showbase$JobManager, (Nuitka_StringObject *)const_str_plain_JobManager, tmp_assign_source_10 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_direct$showbase$JobManager );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
