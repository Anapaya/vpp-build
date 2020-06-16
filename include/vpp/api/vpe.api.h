/*
 * VLIB API definitions 2020-06-13 05:56:05
 * Input file: vpe.api
 * Automatically generated: please edit the input file NOT this file!
 */

#include <stdbool.h>
#if defined(vl_msg_id)||defined(vl_union_id) \
    || defined(vl_printfun) ||defined(vl_endianfun) \
    || defined(vl_api_version)||defined(vl_typedefs) \
    || defined(vl_msg_name)||defined(vl_msg_name_crc_list) \
    || defined(vl_api_version_tuple)
/* ok, something was selected */
#else
#warning no content included from vpe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_CONTROL_PING, vl_api_control_ping_t_handler)
vl_msg_id(VL_API_CONTROL_PING_REPLY, vl_api_control_ping_reply_t_handler)
vl_msg_id(VL_API_CLI, vl_api_cli_t_handler)
vl_msg_id(VL_API_CLI_INBAND, vl_api_cli_inband_t_handler)
vl_msg_id(VL_API_CLI_REPLY, vl_api_cli_reply_t_handler)
vl_msg_id(VL_API_CLI_INBAND_REPLY, vl_api_cli_inband_reply_t_handler)
vl_msg_id(VL_API_GET_NODE_INDEX, vl_api_get_node_index_t_handler)
vl_msg_id(VL_API_GET_NODE_INDEX_REPLY, vl_api_get_node_index_reply_t_handler)
vl_msg_id(VL_API_ADD_NODE_NEXT, vl_api_add_node_next_t_handler)
vl_msg_id(VL_API_ADD_NODE_NEXT_REPLY, vl_api_add_node_next_reply_t_handler)
vl_msg_id(VL_API_SHOW_VERSION, vl_api_show_version_t_handler)
vl_msg_id(VL_API_SHOW_VERSION_REPLY, vl_api_show_version_reply_t_handler)
vl_msg_id(VL_API_SHOW_THREADS, vl_api_show_threads_t_handler)
vl_msg_id(VL_API_SHOW_THREADS_REPLY, vl_api_show_threads_reply_t_handler)
vl_msg_id(VL_API_GET_NODE_GRAPH, vl_api_get_node_graph_t_handler)
vl_msg_id(VL_API_GET_NODE_GRAPH_REPLY, vl_api_get_node_graph_reply_t_handler)
vl_msg_id(VL_API_GET_NEXT_INDEX, vl_api_get_next_index_t_handler)
vl_msg_id(VL_API_GET_NEXT_INDEX_REPLY, vl_api_get_next_index_reply_t_handler)
vl_msg_id(VL_API_LOG_DUMP, vl_api_log_dump_t_handler)
vl_msg_id(VL_API_LOG_DETAILS, vl_api_log_details_t_handler)
vl_msg_id(VL_API_SHOW_VPE_SYSTEM_TIME, vl_api_show_vpe_system_time_t_handler)
vl_msg_id(VL_API_SHOW_VPE_SYSTEM_TIME_REPLY, vl_api_show_vpe_system_time_reply_t_handler)
vl_msg_id(VL_API_GET_F64_ENDIAN_VALUE, vl_api_get_f64_endian_value_t_handler)
vl_msg_id(VL_API_GET_F64_ENDIAN_VALUE_REPLY, vl_api_get_f64_endian_value_reply_t_handler)
vl_msg_id(VL_API_GET_F64_INCREMENT_BY_ONE, vl_api_get_f64_increment_by_one_t_handler)
vl_msg_id(VL_API_GET_F64_INCREMENT_BY_ONE_REPLY, vl_api_get_f64_increment_by_one_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_control_ping_t, 1)
vl_msg_name(vl_api_control_ping_reply_t, 1)
vl_msg_name(vl_api_cli_t, 1)
vl_msg_name(vl_api_cli_inband_t, 1)
vl_msg_name(vl_api_cli_reply_t, 1)
vl_msg_name(vl_api_cli_inband_reply_t, 1)
vl_msg_name(vl_api_get_node_index_t, 1)
vl_msg_name(vl_api_get_node_index_reply_t, 1)
vl_msg_name(vl_api_add_node_next_t, 1)
vl_msg_name(vl_api_add_node_next_reply_t, 1)
vl_msg_name(vl_api_show_version_t, 1)
vl_msg_name(vl_api_show_version_reply_t, 1)
vl_msg_name(vl_api_show_threads_t, 1)
vl_msg_name(vl_api_show_threads_reply_t, 1)
vl_msg_name(vl_api_get_node_graph_t, 1)
vl_msg_name(vl_api_get_node_graph_reply_t, 1)
vl_msg_name(vl_api_get_next_index_t, 1)
vl_msg_name(vl_api_get_next_index_reply_t, 1)
vl_msg_name(vl_api_log_dump_t, 1)
vl_msg_name(vl_api_log_details_t, 1)
vl_msg_name(vl_api_show_vpe_system_time_t, 1)
vl_msg_name(vl_api_show_vpe_system_time_reply_t, 1)
vl_msg_name(vl_api_get_f64_endian_value_t, 1)
vl_msg_name(vl_api_get_f64_endian_value_reply_t, 1)
vl_msg_name(vl_api_get_f64_increment_by_one_t, 1)
vl_msg_name(vl_api_get_f64_increment_by_one_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vpe \
_(VL_API_CONTROL_PING, control_ping, 51077d14) \
_(VL_API_CONTROL_PING_REPLY, control_ping_reply, f6b0b8ca) \
_(VL_API_CLI, cli, 23bfbfff) \
_(VL_API_CLI_INBAND, cli_inband, f8377302) \
_(VL_API_CLI_REPLY, cli_reply, 06d68297) \
_(VL_API_CLI_INBAND_REPLY, cli_inband_reply, 05879051) \
_(VL_API_GET_NODE_INDEX, get_node_index, 6c9a495d) \
_(VL_API_GET_NODE_INDEX_REPLY, get_node_index_reply, a8600b89) \
_(VL_API_ADD_NODE_NEXT, add_node_next, 9ab92f7a) \
_(VL_API_ADD_NODE_NEXT_REPLY, add_node_next_reply, 2ed75f32) \
_(VL_API_SHOW_VERSION, show_version, 51077d14) \
_(VL_API_SHOW_VERSION_REPLY, show_version_reply, c919bde1) \
_(VL_API_SHOW_THREADS, show_threads, 51077d14) \
_(VL_API_SHOW_THREADS_REPLY, show_threads_reply, f5e0b66f) \
_(VL_API_GET_NODE_GRAPH, get_node_graph, 51077d14) \
_(VL_API_GET_NODE_GRAPH_REPLY, get_node_graph_reply, 06d68297) \
_(VL_API_GET_NEXT_INDEX, get_next_index, 9ab92f7a) \
_(VL_API_GET_NEXT_INDEX_REPLY, get_next_index_reply, 2ed75f32) \
_(VL_API_LOG_DUMP, log_dump, 6ab31753) \
_(VL_API_LOG_DETAILS, log_details, 255827a1) \
_(VL_API_SHOW_VPE_SYSTEM_TIME, show_vpe_system_time, 51077d14) \
_(VL_API_SHOW_VPE_SYSTEM_TIME_REPLY, show_vpe_system_time_reply, 7ffd8193) \
_(VL_API_GET_F64_ENDIAN_VALUE, get_f64_endian_value, 809fcd44) \
_(VL_API_GET_F64_ENDIAN_VALUE_REPLY, get_f64_endian_value_reply, 7e02e404) \
_(VL_API_GET_F64_INCREMENT_BY_ONE, get_f64_increment_by_one, b64f027e) \
_(VL_API_GET_F64_INCREMENT_BY_ONE_REPLY, get_f64_increment_by_one_reply, d25dbaa3) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_vpe_api
#define included_vpe_api
#ifndef _vl_api_defined_version
#define _vl_api_defined_version
typedef VL_API_PACKED(struct _vl_api_version {
    u32 major;
    u32 minor;
    u32 patch;
    u8 pre_release[17];
    u8 build_metadata[17];
}) vl_api_version_t;
#endif

#ifndef _vl_api_defined_timestamp
#define _vl_api_defined_timestamp
typedef f64 vl_api_timestamp_t;
#endif

#ifndef _vl_api_defined_timedelta
#define _vl_api_defined_timedelta
typedef f64 vl_api_timedelta_t;
#endif

#ifndef _vl_api_defined_log_level
#define _vl_api_defined_log_level
typedef enum {
    VPE_API_LOG_LEVEL_EMERG = 0,
    VPE_API_LOG_LEVEL_ALERT = 1,
    VPE_API_LOG_LEVEL_CRIT = 2,
    VPE_API_LOG_LEVEL_ERR = 3,
    VPE_API_LOG_LEVEL_WARNING = 4,
    VPE_API_LOG_LEVEL_NOTICE = 5,
    VPE_API_LOG_LEVEL_INFO = 6,
    VPE_API_LOG_LEVEL_DEBUG = 7,
    VPE_API_LOG_LEVEL_DISABLED = 8,
} vl_api_log_level_t;
#endif

#ifndef _vl_api_defined_thread_data
#define _vl_api_defined_thread_data
typedef VL_API_PACKED(struct _vl_api_thread_data {
    u32 id;
    u8 name[64];
    u8 type[64];
    u32 pid;
    u32 cpu_id;
    u32 core;
    u32 cpu_socket;
}) vl_api_thread_data_t;
#endif

#ifndef _vl_api_defined_control_ping
#define _vl_api_defined_control_ping
typedef VL_API_PACKED(struct _vl_api_control_ping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_control_ping_t;
#endif

#ifndef _vl_api_defined_control_ping_reply
#define _vl_api_defined_control_ping_reply
typedef VL_API_PACKED(struct _vl_api_control_ping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 client_index;
    u32 vpe_pid;
}) vl_api_control_ping_reply_t;
#endif

#ifndef _vl_api_defined_cli
#define _vl_api_defined_cli
typedef VL_API_PACKED(struct _vl_api_cli {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 cmd_in_shmem;
}) vl_api_cli_t;
#endif

#ifndef _vl_api_defined_cli_inband
#define _vl_api_defined_cli_inband
typedef VL_API_PACKED(struct _vl_api_cli_inband {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_string_t cmd;
}) vl_api_cli_inband_t;
#endif

#ifndef _vl_api_defined_cli_reply
#define _vl_api_defined_cli_reply
typedef VL_API_PACKED(struct _vl_api_cli_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 reply_in_shmem;
}) vl_api_cli_reply_t;
#endif

#ifndef _vl_api_defined_cli_inband_reply
#define _vl_api_defined_cli_inband_reply
typedef VL_API_PACKED(struct _vl_api_cli_inband_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_string_t reply;
}) vl_api_cli_inband_reply_t;
#endif

#ifndef _vl_api_defined_get_node_index
#define _vl_api_defined_get_node_index
typedef VL_API_PACKED(struct _vl_api_get_node_index {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 node_name[64];
}) vl_api_get_node_index_t;
#endif

#ifndef _vl_api_defined_get_node_index_reply
#define _vl_api_defined_get_node_index_reply
typedef VL_API_PACKED(struct _vl_api_get_node_index_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 node_index;
}) vl_api_get_node_index_reply_t;
#endif

#ifndef _vl_api_defined_add_node_next
#define _vl_api_defined_add_node_next
typedef VL_API_PACKED(struct _vl_api_add_node_next {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 node_name[64];
    u8 next_name[64];
}) vl_api_add_node_next_t;
#endif

#ifndef _vl_api_defined_add_node_next_reply
#define _vl_api_defined_add_node_next_reply
typedef VL_API_PACKED(struct _vl_api_add_node_next_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 next_index;
}) vl_api_add_node_next_reply_t;
#endif

#ifndef _vl_api_defined_show_version
#define _vl_api_defined_show_version
typedef VL_API_PACKED(struct _vl_api_show_version {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_version_t;
#endif

#ifndef _vl_api_defined_show_version_reply
#define _vl_api_defined_show_version_reply
typedef VL_API_PACKED(struct _vl_api_show_version_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 program[32];
    u8 version[32];
    u8 build_date[32];
    u8 build_directory[256];
}) vl_api_show_version_reply_t;
#endif

#ifndef _vl_api_defined_show_threads
#define _vl_api_defined_show_threads
typedef VL_API_PACKED(struct _vl_api_show_threads {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_threads_t;
#endif

#ifndef _vl_api_defined_show_threads_reply
#define _vl_api_defined_show_threads_reply
typedef VL_API_PACKED(struct _vl_api_show_threads_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_thread_data_t thread_data[0];
}) vl_api_show_threads_reply_t;
#endif

#ifndef _vl_api_defined_get_node_graph
#define _vl_api_defined_get_node_graph
typedef VL_API_PACKED(struct _vl_api_get_node_graph {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_get_node_graph_t;
#endif

#ifndef _vl_api_defined_get_node_graph_reply
#define _vl_api_defined_get_node_graph_reply
typedef VL_API_PACKED(struct _vl_api_get_node_graph_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 reply_in_shmem;
}) vl_api_get_node_graph_reply_t;
#endif

#ifndef _vl_api_defined_get_next_index
#define _vl_api_defined_get_next_index
typedef VL_API_PACKED(struct _vl_api_get_next_index {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 node_name[64];
    u8 next_name[64];
}) vl_api_get_next_index_t;
#endif

#ifndef _vl_api_defined_get_next_index_reply
#define _vl_api_defined_get_next_index_reply
typedef VL_API_PACKED(struct _vl_api_get_next_index_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 next_index;
}) vl_api_get_next_index_reply_t;
#endif

#ifndef _vl_api_defined_log_dump
#define _vl_api_defined_log_dump
typedef VL_API_PACKED(struct _vl_api_log_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_timestamp_t start_timestamp;
}) vl_api_log_dump_t;
#endif

#ifndef _vl_api_defined_log_details
#define _vl_api_defined_log_details
typedef VL_API_PACKED(struct _vl_api_log_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_timestamp_t timestamp;
    vl_api_log_level_t level;
    u8 msg_class[32];
    u8 message[256];
}) vl_api_log_details_t;
#endif

#ifndef _vl_api_defined_show_vpe_system_time
#define _vl_api_defined_show_vpe_system_time
typedef VL_API_PACKED(struct _vl_api_show_vpe_system_time {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_vpe_system_time_t;
#endif

#ifndef _vl_api_defined_show_vpe_system_time_reply
#define _vl_api_defined_show_vpe_system_time_reply
typedef VL_API_PACKED(struct _vl_api_show_vpe_system_time_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_timestamp_t vpe_system_time;
}) vl_api_show_vpe_system_time_reply_t;
#endif

#ifndef _vl_api_defined_get_f64_endian_value
#define _vl_api_defined_get_f64_endian_value
typedef VL_API_PACKED(struct _vl_api_get_f64_endian_value {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    f64 f64_one;
}) vl_api_get_f64_endian_value_t;
#endif

#ifndef _vl_api_defined_get_f64_endian_value_reply
#define _vl_api_defined_get_f64_endian_value_reply
typedef VL_API_PACKED(struct _vl_api_get_f64_endian_value_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 retval;
    f64 f64_one_result;
}) vl_api_get_f64_endian_value_reply_t;
#endif

#ifndef _vl_api_defined_get_f64_increment_by_one
#define _vl_api_defined_get_f64_increment_by_one
typedef VL_API_PACKED(struct _vl_api_get_f64_increment_by_one {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    f64 f64_value;
}) vl_api_get_f64_increment_by_one_t;
#endif

#ifndef _vl_api_defined_get_f64_increment_by_one_reply
#define _vl_api_defined_get_f64_increment_by_one_reply
typedef VL_API_PACKED(struct _vl_api_get_f64_increment_by_one_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 retval;
    f64 f64_value;
}) vl_api_get_f64_increment_by_one_reply_t;
#endif


#endif
#endif

/****** Print functions *****/
#ifdef vl_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

#ifndef _vl_api_defined_version_t_print
#define _vl_api_defined_version_t_print
static inline void *vl_api_version_t_print (vl_api_version_t *a,void *handle)
{
    vl_print(handle, "vl_api_version_t:\n");
    vl_print(handle, "major: %u\n", a->major);
    vl_print(handle, "minor: %u\n", a->minor);
    vl_print(handle, "patch: %u\n", a->patch);
    return handle;
}

#endif

/***** manual: vl_api_timestamp_t_print  *****/

/***** manual: vl_api_timedelta_t_print  *****/

#ifndef _vl_api_defined_thread_data_t_print
#define _vl_api_defined_thread_data_t_print
static inline void *vl_api_thread_data_t_print (vl_api_thread_data_t *a,void *handle)
{
    vl_print(handle, "vl_api_thread_data_t:\n");
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "cpu_id: %u\n", a->cpu_id);
    vl_print(handle, "core: %u\n", a->core);
    vl_print(handle, "cpu_socket: %u\n", a->cpu_socket);
    return handle;
}

#endif

#ifndef _vl_api_defined_control_ping_t_print
#define _vl_api_defined_control_ping_t_print
static inline void *vl_api_control_ping_t_print (vl_api_control_ping_t *a,void *handle)
{
    vl_print(handle, "vl_api_control_ping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_control_ping_reply_t_print
#define _vl_api_defined_control_ping_reply_t_print
static inline void *vl_api_control_ping_reply_t_print (vl_api_control_ping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_control_ping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "vpe_pid: %u\n", a->vpe_pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_cli_t_print
#define _vl_api_defined_cli_t_print
static inline void *vl_api_cli_t_print (vl_api_cli_t *a,void *handle)
{
    vl_print(handle, "vl_api_cli_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "cmd_in_shmem: %llu\n", a->cmd_in_shmem);
    return handle;
}

#endif

#ifndef _vl_api_defined_cli_inband_t_print
#define _vl_api_defined_cli_inband_t_print
static inline void *vl_api_cli_inband_t_print (vl_api_cli_inband_t *a,void *handle)
{
    vl_print(handle, "vl_api_cli_inband_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_cli_reply_t_print
#define _vl_api_defined_cli_reply_t_print
static inline void *vl_api_cli_reply_t_print (vl_api_cli_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_cli_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "reply_in_shmem: %llu\n", a->reply_in_shmem);
    return handle;
}

#endif

#ifndef _vl_api_defined_cli_inband_reply_t_print
#define _vl_api_defined_cli_inband_reply_t_print
static inline void *vl_api_cli_inband_reply_t_print (vl_api_cli_inband_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_cli_inband_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_node_index_t_print
#define _vl_api_defined_get_node_index_t_print
static inline void *vl_api_get_node_index_t_print (vl_api_get_node_index_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_node_index_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_node_index_reply_t_print
#define _vl_api_defined_get_node_index_reply_t_print
static inline void *vl_api_get_node_index_reply_t_print (vl_api_get_node_index_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_node_index_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "node_index: %u\n", a->node_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_add_node_next_t_print
#define _vl_api_defined_add_node_next_t_print
static inline void *vl_api_add_node_next_t_print (vl_api_add_node_next_t *a,void *handle)
{
    vl_print(handle, "vl_api_add_node_next_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_add_node_next_reply_t_print
#define _vl_api_defined_add_node_next_reply_t_print
static inline void *vl_api_add_node_next_reply_t_print (vl_api_add_node_next_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_add_node_next_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "next_index: %u\n", a->next_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_version_t_print
#define _vl_api_defined_show_version_t_print
static inline void *vl_api_show_version_t_print (vl_api_show_version_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_version_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_version_reply_t_print
#define _vl_api_defined_show_version_reply_t_print
static inline void *vl_api_show_version_reply_t_print (vl_api_show_version_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_version_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_threads_t_print
#define _vl_api_defined_show_threads_t_print
static inline void *vl_api_show_threads_t_print (vl_api_show_threads_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_threads_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_threads_reply_t_print
#define _vl_api_defined_show_threads_reply_t_print
static inline void *vl_api_show_threads_reply_t_print (vl_api_show_threads_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_threads_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_node_graph_t_print
#define _vl_api_defined_get_node_graph_t_print
static inline void *vl_api_get_node_graph_t_print (vl_api_get_node_graph_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_node_graph_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_node_graph_reply_t_print
#define _vl_api_defined_get_node_graph_reply_t_print
static inline void *vl_api_get_node_graph_reply_t_print (vl_api_get_node_graph_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_node_graph_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "reply_in_shmem: %llu\n", a->reply_in_shmem);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_next_index_t_print
#define _vl_api_defined_get_next_index_t_print
static inline void *vl_api_get_next_index_t_print (vl_api_get_next_index_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_next_index_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_next_index_reply_t_print
#define _vl_api_defined_get_next_index_reply_t_print
static inline void *vl_api_get_next_index_reply_t_print (vl_api_get_next_index_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_next_index_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "next_index: %u\n", a->next_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_log_dump_t_print
#define _vl_api_defined_log_dump_t_print
static inline void *vl_api_log_dump_t_print (vl_api_log_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_log_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_log_details_t_print
#define _vl_api_defined_log_details_t_print
static inline void *vl_api_log_details_t_print (vl_api_log_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_log_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_vpe_system_time_t_print
#define _vl_api_defined_show_vpe_system_time_t_print
static inline void *vl_api_show_vpe_system_time_t_print (vl_api_show_vpe_system_time_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_vpe_system_time_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_vpe_system_time_reply_t_print
#define _vl_api_defined_show_vpe_system_time_reply_t_print
static inline void *vl_api_show_vpe_system_time_reply_t_print (vl_api_show_vpe_system_time_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_vpe_system_time_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_f64_endian_value_t_print
#define _vl_api_defined_get_f64_endian_value_t_print
static inline void *vl_api_get_f64_endian_value_t_print (vl_api_get_f64_endian_value_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_f64_endian_value_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "f64_one: %.2f\n", a->f64_one);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_f64_endian_value_reply_t_print
#define _vl_api_defined_get_f64_endian_value_reply_t_print
static inline void *vl_api_get_f64_endian_value_reply_t_print (vl_api_get_f64_endian_value_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_f64_endian_value_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %u\n", a->retval);
    vl_print(handle, "f64_one_result: %.2f\n", a->f64_one_result);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_f64_increment_by_one_t_print
#define _vl_api_defined_get_f64_increment_by_one_t_print
static inline void *vl_api_get_f64_increment_by_one_t_print (vl_api_get_f64_increment_by_one_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_f64_increment_by_one_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "f64_value: %.2f\n", a->f64_value);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_f64_increment_by_one_reply_t_print
#define _vl_api_defined_get_f64_increment_by_one_reply_t_print
static inline void *vl_api_get_f64_increment_by_one_reply_t_print (vl_api_get_f64_increment_by_one_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_f64_increment_by_one_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %u\n", a->retval);
    vl_print(handle, "f64_value: %.2f\n", a->f64_value);
    return handle;
}

#endif


#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

#ifndef _vl_api_defined_version_t_endian
#define _vl_api_defined_version_t_endian
static inline void vl_api_version_t_endian (vl_api_version_t *a)
{
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
    a->patch = clib_net_to_host_u32(a->patch);
}

#endif

/***** manual: vl_api_timestamp_t_endian  *****/

/***** manual: vl_api_timedelta_t_endian  *****/

#ifndef _vl_api_defined_thread_data_t_endian
#define _vl_api_defined_thread_data_t_endian
static inline void vl_api_thread_data_t_endian (vl_api_thread_data_t *a)
{
    a->id = clib_net_to_host_u32(a->id);
    a->pid = clib_net_to_host_u32(a->pid);
    a->cpu_id = clib_net_to_host_u32(a->cpu_id);
    a->core = clib_net_to_host_u32(a->core);
    a->cpu_socket = clib_net_to_host_u32(a->cpu_socket);
}

#endif

#ifndef _vl_api_defined_control_ping_t_endian
#define _vl_api_defined_control_ping_t_endian
static inline void vl_api_control_ping_t_endian (vl_api_control_ping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_control_ping_reply_t_endian
#define _vl_api_defined_control_ping_reply_t_endian
static inline void vl_api_control_ping_reply_t_endian (vl_api_control_ping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->vpe_pid = clib_net_to_host_u32(a->vpe_pid);
}

#endif

#ifndef _vl_api_defined_cli_t_endian
#define _vl_api_defined_cli_t_endian
static inline void vl_api_cli_t_endian (vl_api_cli_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->cmd_in_shmem = clib_net_to_host_u64(a->cmd_in_shmem);
}

#endif

#ifndef _vl_api_defined_cli_inband_t_endian
#define _vl_api_defined_cli_inband_t_endian
static inline void vl_api_cli_inband_t_endian (vl_api_cli_inband_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_cli_reply_t_endian
#define _vl_api_defined_cli_reply_t_endian
static inline void vl_api_cli_reply_t_endian (vl_api_cli_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->reply_in_shmem = clib_net_to_host_u64(a->reply_in_shmem);
}

#endif

#ifndef _vl_api_defined_cli_inband_reply_t_endian
#define _vl_api_defined_cli_inband_reply_t_endian
static inline void vl_api_cli_inband_reply_t_endian (vl_api_cli_inband_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_get_node_index_t_endian
#define _vl_api_defined_get_node_index_t_endian
static inline void vl_api_get_node_index_t_endian (vl_api_get_node_index_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_get_node_index_reply_t_endian
#define _vl_api_defined_get_node_index_reply_t_endian
static inline void vl_api_get_node_index_reply_t_endian (vl_api_get_node_index_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->node_index = clib_net_to_host_u32(a->node_index);
}

#endif

#ifndef _vl_api_defined_add_node_next_t_endian
#define _vl_api_defined_add_node_next_t_endian
static inline void vl_api_add_node_next_t_endian (vl_api_add_node_next_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_add_node_next_reply_t_endian
#define _vl_api_defined_add_node_next_reply_t_endian
static inline void vl_api_add_node_next_reply_t_endian (vl_api_add_node_next_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->next_index = clib_net_to_host_u32(a->next_index);
}

#endif

#ifndef _vl_api_defined_show_version_t_endian
#define _vl_api_defined_show_version_t_endian
static inline void vl_api_show_version_t_endian (vl_api_show_version_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_version_reply_t_endian
#define _vl_api_defined_show_version_reply_t_endian
static inline void vl_api_show_version_reply_t_endian (vl_api_show_version_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_threads_t_endian
#define _vl_api_defined_show_threads_t_endian
static inline void vl_api_show_threads_t_endian (vl_api_show_threads_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_threads_reply_t_endian
#define _vl_api_defined_show_threads_reply_t_endian
static inline void vl_api_show_threads_reply_t_endian (vl_api_show_threads_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->count = clib_net_to_host_u32(a->count);
}

#endif

#ifndef _vl_api_defined_get_node_graph_t_endian
#define _vl_api_defined_get_node_graph_t_endian
static inline void vl_api_get_node_graph_t_endian (vl_api_get_node_graph_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_get_node_graph_reply_t_endian
#define _vl_api_defined_get_node_graph_reply_t_endian
static inline void vl_api_get_node_graph_reply_t_endian (vl_api_get_node_graph_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->reply_in_shmem = clib_net_to_host_u64(a->reply_in_shmem);
}

#endif

#ifndef _vl_api_defined_get_next_index_t_endian
#define _vl_api_defined_get_next_index_t_endian
static inline void vl_api_get_next_index_t_endian (vl_api_get_next_index_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_get_next_index_reply_t_endian
#define _vl_api_defined_get_next_index_reply_t_endian
static inline void vl_api_get_next_index_reply_t_endian (vl_api_get_next_index_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->next_index = clib_net_to_host_u32(a->next_index);
}

#endif

#ifndef _vl_api_defined_log_dump_t_endian
#define _vl_api_defined_log_dump_t_endian
static inline void vl_api_log_dump_t_endian (vl_api_log_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->start_timestamp = a->start_timestamp (no-op) */
}

#endif

#ifndef _vl_api_defined_log_details_t_endian
#define _vl_api_defined_log_details_t_endian
static inline void vl_api_log_details_t_endian (vl_api_log_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->timestamp = a->timestamp (no-op) */
    /* a->level = a->level (no-op) */
}

#endif

#ifndef _vl_api_defined_show_vpe_system_time_t_endian
#define _vl_api_defined_show_vpe_system_time_t_endian
static inline void vl_api_show_vpe_system_time_t_endian (vl_api_show_vpe_system_time_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_vpe_system_time_reply_t_endian
#define _vl_api_defined_show_vpe_system_time_reply_t_endian
static inline void vl_api_show_vpe_system_time_reply_t_endian (vl_api_show_vpe_system_time_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->vpe_system_time = a->vpe_system_time (no-op) */
}

#endif

#ifndef _vl_api_defined_get_f64_endian_value_t_endian
#define _vl_api_defined_get_f64_endian_value_t_endian
static inline void vl_api_get_f64_endian_value_t_endian (vl_api_get_f64_endian_value_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->f64_one = clib_net_to_host_u64(a->f64_one);
}

#endif

#ifndef _vl_api_defined_get_f64_endian_value_reply_t_endian
#define _vl_api_defined_get_f64_endian_value_reply_t_endian
static inline void vl_api_get_f64_endian_value_reply_t_endian (vl_api_get_f64_endian_value_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->f64_one_result = clib_net_to_host_u64(a->f64_one_result);
}

#endif

#ifndef _vl_api_defined_get_f64_increment_by_one_t_endian
#define _vl_api_defined_get_f64_increment_by_one_t_endian
static inline void vl_api_get_f64_increment_by_one_t_endian (vl_api_get_f64_increment_by_one_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->f64_value = clib_net_to_host_u64(a->f64_value);
}

#endif

#ifndef _vl_api_defined_get_f64_increment_by_one_reply_t_endian
#define _vl_api_defined_get_f64_increment_by_one_reply_t_endian
static inline void vl_api_get_f64_increment_by_one_reply_t_endian (vl_api_get_f64_increment_by_one_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->f64_value = clib_net_to_host_u64(a->f64_value);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vpe.api, 1, 6, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vpe.api, 0x1bf55581)

#endif

