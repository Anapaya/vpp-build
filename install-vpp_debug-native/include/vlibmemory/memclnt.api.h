/*
 * VLIB API definitions 2020-01-07 14:24:58
 * Input file: memclnt.api
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
#warning no content included from memclnt.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_MEMCLNT_CREATE, vl_api_memclnt_create_t_handler)
vl_msg_id(VL_API_MEMCLNT_CREATE_REPLY, vl_api_memclnt_create_reply_t_handler)
vl_msg_id(VL_API_MEMCLNT_DELETE, vl_api_memclnt_delete_t_handler)
vl_msg_id(VL_API_MEMCLNT_DELETE_REPLY, vl_api_memclnt_delete_reply_t_handler)
vl_msg_id(VL_API_RX_THREAD_EXIT, vl_api_rx_thread_exit_t_handler)
vl_msg_id(VL_API_MEMCLNT_RX_THREAD_SUSPEND, vl_api_memclnt_rx_thread_suspend_t_handler)
vl_msg_id(VL_API_MEMCLNT_READ_TIMEOUT, vl_api_memclnt_read_timeout_t_handler)
vl_msg_id(VL_API_RPC_CALL, vl_api_rpc_call_t_handler)
vl_msg_id(VL_API_RPC_CALL_REPLY, vl_api_rpc_call_reply_t_handler)
vl_msg_id(VL_API_GET_FIRST_MSG_ID, vl_api_get_first_msg_id_t_handler)
vl_msg_id(VL_API_GET_FIRST_MSG_ID_REPLY, vl_api_get_first_msg_id_reply_t_handler)
vl_msg_id(VL_API_API_VERSIONS, vl_api_api_versions_t_handler)
vl_msg_id(VL_API_API_VERSIONS_REPLY, vl_api_api_versions_reply_t_handler)
vl_msg_id(VL_API_TRACE_PLUGIN_MSG_IDS, vl_api_trace_plugin_msg_ids_t_handler)
vl_msg_id(VL_API_SOCKCLNT_CREATE, vl_api_sockclnt_create_t_handler)
vl_msg_id(VL_API_SOCKCLNT_CREATE_REPLY, vl_api_sockclnt_create_reply_t_handler)
vl_msg_id(VL_API_SOCKCLNT_DELETE, vl_api_sockclnt_delete_t_handler)
vl_msg_id(VL_API_SOCKCLNT_DELETE_REPLY, vl_api_sockclnt_delete_reply_t_handler)
vl_msg_id(VL_API_SOCK_INIT_SHM, vl_api_sock_init_shm_t_handler)
vl_msg_id(VL_API_SOCK_INIT_SHM_REPLY, vl_api_sock_init_shm_reply_t_handler)
vl_msg_id(VL_API_MEMCLNT_KEEPALIVE, vl_api_memclnt_keepalive_t_handler)
vl_msg_id(VL_API_MEMCLNT_KEEPALIVE_REPLY, vl_api_memclnt_keepalive_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_memclnt_create_t, 1)
vl_msg_name(vl_api_memclnt_create_reply_t, 1)
vl_msg_name(vl_api_memclnt_delete_t, 1)
vl_msg_name(vl_api_memclnt_delete_reply_t, 1)
vl_msg_name(vl_api_rx_thread_exit_t, 1)
vl_msg_name(vl_api_memclnt_rx_thread_suspend_t, 1)
vl_msg_name(vl_api_memclnt_read_timeout_t, 1)
vl_msg_name(vl_api_rpc_call_t, 1)
vl_msg_name(vl_api_rpc_call_reply_t, 1)
vl_msg_name(vl_api_get_first_msg_id_t, 1)
vl_msg_name(vl_api_get_first_msg_id_reply_t, 1)
vl_msg_name(vl_api_api_versions_t, 1)
vl_msg_name(vl_api_api_versions_reply_t, 1)
vl_msg_name(vl_api_trace_plugin_msg_ids_t, 1)
vl_msg_name(vl_api_sockclnt_create_t, 1)
vl_msg_name(vl_api_sockclnt_create_reply_t, 1)
vl_msg_name(vl_api_sockclnt_delete_t, 1)
vl_msg_name(vl_api_sockclnt_delete_reply_t, 1)
vl_msg_name(vl_api_sock_init_shm_t, 1)
vl_msg_name(vl_api_sock_init_shm_reply_t, 1)
vl_msg_name(vl_api_memclnt_keepalive_t, 1)
vl_msg_name(vl_api_memclnt_keepalive_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_memclnt \
_(VL_API_MEMCLNT_CREATE, memclnt_create, 6d33c5ea) \
_(VL_API_MEMCLNT_CREATE_REPLY, memclnt_create_reply, 42ec4560) \
_(VL_API_MEMCLNT_DELETE, memclnt_delete, 4dd351e9) \
_(VL_API_MEMCLNT_DELETE_REPLY, memclnt_delete_reply, 3d3b6312) \
_(VL_API_RX_THREAD_EXIT, rx_thread_exit, c3a3a452) \
_(VL_API_MEMCLNT_RX_THREAD_SUSPEND, memclnt_rx_thread_suspend, c3a3a452) \
_(VL_API_MEMCLNT_READ_TIMEOUT, memclnt_read_timeout, c3a3a452) \
_(VL_API_RPC_CALL, rpc_call, 7e8a2c95) \
_(VL_API_RPC_CALL_REPLY, rpc_call_reply, e8d4e804) \
_(VL_API_GET_FIRST_MSG_ID, get_first_msg_id, 0cb71b0e) \
_(VL_API_GET_FIRST_MSG_ID_REPLY, get_first_msg_id_reply, 7d337472) \
_(VL_API_API_VERSIONS, api_versions, 51077d14) \
_(VL_API_API_VERSIONS_REPLY, api_versions_reply, 76f45113) \
_(VL_API_TRACE_PLUGIN_MSG_IDS, trace_plugin_msg_ids, 64af79f9) \
_(VL_API_SOCKCLNT_CREATE, sockclnt_create, df2cf94d) \
_(VL_API_SOCKCLNT_CREATE_REPLY, sockclnt_create_reply, 21795657) \
_(VL_API_SOCKCLNT_DELETE, sockclnt_delete, 8ac76db6) \
_(VL_API_SOCKCLNT_DELETE_REPLY, sockclnt_delete_reply, 8f38b1ee) \
_(VL_API_SOCK_INIT_SHM, sock_init_shm, 51646d92) \
_(VL_API_SOCK_INIT_SHM_REPLY, sock_init_shm_reply, e8d4e804) \
_(VL_API_MEMCLNT_KEEPALIVE, memclnt_keepalive, 51077d14) \
_(VL_API_MEMCLNT_KEEPALIVE_REPLY, memclnt_keepalive_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_memclnt_api
#define included_memclnt_api
#ifndef _vl_api_defined_module_version
#define _vl_api_defined_module_version
typedef VL_API_PACKED(struct _vl_api_module_version {
    u32 major;
    u32 minor;
    u32 patch;
    u8 name[64];
}) vl_api_module_version_t;
#endif

#ifndef _vl_api_defined_message_table_entry
#define _vl_api_defined_message_table_entry
typedef VL_API_PACKED(struct _vl_api_message_table_entry {
    u16 index;
    u8 name[64];
}) vl_api_message_table_entry_t;
#endif

#ifndef _vl_api_defined_memclnt_create
#define _vl_api_defined_memclnt_create
typedef VL_API_PACKED(struct _vl_api_memclnt_create {
    u16 _vl_msg_id;
    u32 context;
    i32 ctx_quota;
    u64 input_queue;
    u8 name[64];
    u32 api_versions[8];
}) vl_api_memclnt_create_t;
#endif

#ifndef _vl_api_defined_memclnt_create_reply
#define _vl_api_defined_memclnt_create_reply
typedef VL_API_PACKED(struct _vl_api_memclnt_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 response;
    u64 handle;
    u32 index;
    u64 message_table;
}) vl_api_memclnt_create_reply_t;
#endif

#ifndef _vl_api_defined_memclnt_delete
#define _vl_api_defined_memclnt_delete
typedef VL_API_PACKED(struct _vl_api_memclnt_delete {
    u16 _vl_msg_id;
    u32 index;
    u64 handle;
    u8 do_cleanup;
}) vl_api_memclnt_delete_t;
#endif

#ifndef _vl_api_defined_memclnt_delete_reply
#define _vl_api_defined_memclnt_delete_reply
typedef VL_API_PACKED(struct _vl_api_memclnt_delete_reply {
    u16 _vl_msg_id;
    i32 response;
    u64 handle;
}) vl_api_memclnt_delete_reply_t;
#endif

#ifndef _vl_api_defined_rx_thread_exit
#define _vl_api_defined_rx_thread_exit
typedef VL_API_PACKED(struct _vl_api_rx_thread_exit {
    u16 _vl_msg_id;
    u8 dummy;
}) vl_api_rx_thread_exit_t;
#endif

#ifndef _vl_api_defined_memclnt_rx_thread_suspend
#define _vl_api_defined_memclnt_rx_thread_suspend
typedef VL_API_PACKED(struct _vl_api_memclnt_rx_thread_suspend {
    u16 _vl_msg_id;
    u8 dummy;
}) vl_api_memclnt_rx_thread_suspend_t;
#endif

#ifndef _vl_api_defined_memclnt_read_timeout
#define _vl_api_defined_memclnt_read_timeout
typedef VL_API_PACKED(struct _vl_api_memclnt_read_timeout {
    u16 _vl_msg_id;
    u8 dummy;
}) vl_api_memclnt_read_timeout_t;
#endif

#ifndef _vl_api_defined_rpc_call
#define _vl_api_defined_rpc_call
typedef VL_API_PACKED(struct _vl_api_rpc_call {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 function;
    u8 multicast;
    u8 need_barrier_sync;
    u8 send_reply;
    u32 data_len;
    u8 data[0];
}) vl_api_rpc_call_t;
#endif

#ifndef _vl_api_defined_rpc_call_reply
#define _vl_api_defined_rpc_call_reply
typedef VL_API_PACKED(struct _vl_api_rpc_call_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_rpc_call_reply_t;
#endif

#ifndef _vl_api_defined_get_first_msg_id
#define _vl_api_defined_get_first_msg_id
typedef VL_API_PACKED(struct _vl_api_get_first_msg_id {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
}) vl_api_get_first_msg_id_t;
#endif

#ifndef _vl_api_defined_get_first_msg_id_reply
#define _vl_api_defined_get_first_msg_id_reply
typedef VL_API_PACKED(struct _vl_api_get_first_msg_id_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u16 first_msg_id;
}) vl_api_get_first_msg_id_reply_t;
#endif

#ifndef _vl_api_defined_api_versions
#define _vl_api_defined_api_versions
typedef VL_API_PACKED(struct _vl_api_api_versions {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_api_versions_t;
#endif

#ifndef _vl_api_defined_api_versions_reply
#define _vl_api_defined_api_versions_reply
typedef VL_API_PACKED(struct _vl_api_api_versions_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_module_version_t api_versions[0];
}) vl_api_api_versions_reply_t;
#endif

#ifndef _vl_api_defined_trace_plugin_msg_ids
#define _vl_api_defined_trace_plugin_msg_ids
typedef VL_API_PACKED(struct _vl_api_trace_plugin_msg_ids {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 plugin_name[128];
    u16 first_msg_id;
    u16 last_msg_id;
}) vl_api_trace_plugin_msg_ids_t;
#endif

#ifndef _vl_api_defined_sockclnt_create
#define _vl_api_defined_sockclnt_create
typedef VL_API_PACKED(struct _vl_api_sockclnt_create {
    u16 _vl_msg_id;
    u32 context;
    u8 name[64];
}) vl_api_sockclnt_create_t;
#endif

#ifndef _vl_api_defined_sockclnt_create_reply
#define _vl_api_defined_sockclnt_create_reply
typedef VL_API_PACKED(struct _vl_api_sockclnt_create_reply {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    i32 response;
    u32 index;
    u16 count;
    vl_api_message_table_entry_t message_table[0];
}) vl_api_sockclnt_create_reply_t;
#endif

#ifndef _vl_api_defined_sockclnt_delete
#define _vl_api_defined_sockclnt_delete
typedef VL_API_PACKED(struct _vl_api_sockclnt_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 index;
}) vl_api_sockclnt_delete_t;
#endif

#ifndef _vl_api_defined_sockclnt_delete_reply
#define _vl_api_defined_sockclnt_delete_reply
typedef VL_API_PACKED(struct _vl_api_sockclnt_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 response;
}) vl_api_sockclnt_delete_reply_t;
#endif

#ifndef _vl_api_defined_sock_init_shm
#define _vl_api_defined_sock_init_shm
typedef VL_API_PACKED(struct _vl_api_sock_init_shm {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 requested_size;
    u8 nitems;
    u64 configs[0];
}) vl_api_sock_init_shm_t;
#endif

#ifndef _vl_api_defined_sock_init_shm_reply
#define _vl_api_defined_sock_init_shm_reply
typedef VL_API_PACKED(struct _vl_api_sock_init_shm_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sock_init_shm_reply_t;
#endif

#ifndef _vl_api_defined_memclnt_keepalive
#define _vl_api_defined_memclnt_keepalive
typedef VL_API_PACKED(struct _vl_api_memclnt_keepalive {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_memclnt_keepalive_t;
#endif

#ifndef _vl_api_defined_memclnt_keepalive_reply
#define _vl_api_defined_memclnt_keepalive_reply
typedef VL_API_PACKED(struct _vl_api_memclnt_keepalive_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_memclnt_keepalive_reply_t;
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

#ifndef _vl_api_defined_module_version_t_print
#define _vl_api_defined_module_version_t_print
static inline void *vl_api_module_version_t_print (vl_api_module_version_t *a,void *handle)
{
    vl_print(handle, "vl_api_module_version_t:\n");
    vl_print(handle, "major: %u\n", a->major);
    vl_print(handle, "minor: %u\n", a->minor);
    vl_print(handle, "patch: %u\n", a->patch);
    return handle;
}

#endif

#ifndef _vl_api_defined_message_table_entry_t_print
#define _vl_api_defined_message_table_entry_t_print
static inline void *vl_api_message_table_entry_t_print (vl_api_message_table_entry_t *a,void *handle)
{
    vl_print(handle, "vl_api_message_table_entry_t:\n");
    vl_print(handle, "index: %u\n", a->index);
    return handle;
}

#endif

/***** manual: vl_api_memclnt_create_t_print  *****/

#ifndef _vl_api_defined_memclnt_create_reply_t_print
#define _vl_api_defined_memclnt_create_reply_t_print
static inline void *vl_api_memclnt_create_reply_t_print (vl_api_memclnt_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_memclnt_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "response: %ld\n", a->response);
    vl_print(handle, "handle: %llu\n", a->handle);
    vl_print(handle, "index: %u\n", a->index);
    vl_print(handle, "message_table: %llu\n", a->message_table);
    return handle;
}

#endif

/***** manual: vl_api_memclnt_delete_t_print  *****/

#ifndef _vl_api_defined_memclnt_delete_reply_t_print
#define _vl_api_defined_memclnt_delete_reply_t_print
static inline void *vl_api_memclnt_delete_reply_t_print (vl_api_memclnt_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_memclnt_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "response: %ld\n", a->response);
    vl_print(handle, "handle: %llu\n", a->handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_rx_thread_exit_t_print
#define _vl_api_defined_rx_thread_exit_t_print
static inline void *vl_api_rx_thread_exit_t_print (vl_api_rx_thread_exit_t *a,void *handle)
{
    vl_print(handle, "vl_api_rx_thread_exit_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "dummy: %u\n", a->dummy);
    return handle;
}

#endif

#ifndef _vl_api_defined_memclnt_rx_thread_suspend_t_print
#define _vl_api_defined_memclnt_rx_thread_suspend_t_print
static inline void *vl_api_memclnt_rx_thread_suspend_t_print (vl_api_memclnt_rx_thread_suspend_t *a,void *handle)
{
    vl_print(handle, "vl_api_memclnt_rx_thread_suspend_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "dummy: %u\n", a->dummy);
    return handle;
}

#endif

#ifndef _vl_api_defined_memclnt_read_timeout_t_print
#define _vl_api_defined_memclnt_read_timeout_t_print
static inline void *vl_api_memclnt_read_timeout_t_print (vl_api_memclnt_read_timeout_t *a,void *handle)
{
    vl_print(handle, "vl_api_memclnt_read_timeout_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "dummy: %u\n", a->dummy);
    return handle;
}

#endif

#ifndef _vl_api_defined_rpc_call_t_print
#define _vl_api_defined_rpc_call_t_print
static inline void *vl_api_rpc_call_t_print (vl_api_rpc_call_t *a,void *handle)
{
    vl_print(handle, "vl_api_rpc_call_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "function: %llu\n", a->function);
    vl_print(handle, "multicast: %u\n", a->multicast);
    vl_print(handle, "need_barrier_sync: %u\n", a->need_barrier_sync);
    vl_print(handle, "send_reply: %u\n", a->send_reply);
    vl_print(handle, "data_len: %u\n", a->data_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_rpc_call_reply_t_print
#define _vl_api_defined_rpc_call_reply_t_print
static inline void *vl_api_rpc_call_reply_t_print (vl_api_rpc_call_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_rpc_call_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_first_msg_id_t_print
#define _vl_api_defined_get_first_msg_id_t_print
static inline void *vl_api_get_first_msg_id_t_print (vl_api_get_first_msg_id_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_first_msg_id_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_get_first_msg_id_reply_t_print
#define _vl_api_defined_get_first_msg_id_reply_t_print
static inline void *vl_api_get_first_msg_id_reply_t_print (vl_api_get_first_msg_id_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_get_first_msg_id_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "first_msg_id: %u\n", a->first_msg_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_api_versions_t_print
#define _vl_api_defined_api_versions_t_print
static inline void *vl_api_api_versions_t_print (vl_api_api_versions_t *a,void *handle)
{
    vl_print(handle, "vl_api_api_versions_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_api_versions_reply_t_print
#define _vl_api_defined_api_versions_reply_t_print
static inline void *vl_api_api_versions_reply_t_print (vl_api_api_versions_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_api_versions_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

/***** manual: vl_api_trace_plugin_msg_ids_t_print  *****/

#ifndef _vl_api_defined_sockclnt_create_t_print
#define _vl_api_defined_sockclnt_create_t_print
static inline void *vl_api_sockclnt_create_t_print (vl_api_sockclnt_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_sockclnt_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sockclnt_create_reply_t_print
#define _vl_api_defined_sockclnt_create_reply_t_print
static inline void *vl_api_sockclnt_create_reply_t_print (vl_api_sockclnt_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sockclnt_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "response: %ld\n", a->response);
    vl_print(handle, "index: %u\n", a->index);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

#ifndef _vl_api_defined_sockclnt_delete_t_print
#define _vl_api_defined_sockclnt_delete_t_print
static inline void *vl_api_sockclnt_delete_t_print (vl_api_sockclnt_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_sockclnt_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "index: %u\n", a->index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sockclnt_delete_reply_t_print
#define _vl_api_defined_sockclnt_delete_reply_t_print
static inline void *vl_api_sockclnt_delete_reply_t_print (vl_api_sockclnt_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sockclnt_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "response: %ld\n", a->response);
    return handle;
}

#endif

#ifndef _vl_api_defined_sock_init_shm_t_print
#define _vl_api_defined_sock_init_shm_t_print
static inline void *vl_api_sock_init_shm_t_print (vl_api_sock_init_shm_t *a,void *handle)
{
    vl_print(handle, "vl_api_sock_init_shm_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "requested_size: %u\n", a->requested_size);
    vl_print(handle, "nitems: %u\n", a->nitems);
    return handle;
}

#endif

#ifndef _vl_api_defined_sock_init_shm_reply_t_print
#define _vl_api_defined_sock_init_shm_reply_t_print
static inline void *vl_api_sock_init_shm_reply_t_print (vl_api_sock_init_shm_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sock_init_shm_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_memclnt_keepalive_t_print
#define _vl_api_defined_memclnt_keepalive_t_print
static inline void *vl_api_memclnt_keepalive_t_print (vl_api_memclnt_keepalive_t *a,void *handle)
{
    vl_print(handle, "vl_api_memclnt_keepalive_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_memclnt_keepalive_reply_t_print
#define _vl_api_defined_memclnt_keepalive_reply_t_print
static inline void *vl_api_memclnt_keepalive_reply_t_print (vl_api_memclnt_keepalive_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_memclnt_keepalive_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
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

#ifndef _vl_api_defined_module_version_t_endian
#define _vl_api_defined_module_version_t_endian
static inline void vl_api_module_version_t_endian (vl_api_module_version_t *a)
{
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
    a->patch = clib_net_to_host_u32(a->patch);
}

#endif

#ifndef _vl_api_defined_message_table_entry_t_endian
#define _vl_api_defined_message_table_entry_t_endian
static inline void vl_api_message_table_entry_t_endian (vl_api_message_table_entry_t *a)
{
    a->index = clib_net_to_host_u16(a->index);
}

#endif

#ifndef _vl_api_defined_memclnt_create_t_endian
#define _vl_api_defined_memclnt_create_t_endian
static inline void vl_api_memclnt_create_t_endian (vl_api_memclnt_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->ctx_quota = clib_net_to_host_u32(a->ctx_quota);
    a->input_queue = clib_net_to_host_u64(a->input_queue);
}

#endif

#ifndef _vl_api_defined_memclnt_create_reply_t_endian
#define _vl_api_defined_memclnt_create_reply_t_endian
static inline void vl_api_memclnt_create_reply_t_endian (vl_api_memclnt_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->response = clib_net_to_host_u32(a->response);
    a->handle = clib_net_to_host_u64(a->handle);
    a->index = clib_net_to_host_u32(a->index);
    a->message_table = clib_net_to_host_u64(a->message_table);
}

#endif

#ifndef _vl_api_defined_memclnt_delete_t_endian
#define _vl_api_defined_memclnt_delete_t_endian
static inline void vl_api_memclnt_delete_t_endian (vl_api_memclnt_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->index = clib_net_to_host_u32(a->index);
    a->handle = clib_net_to_host_u64(a->handle);
    /* a->do_cleanup = a->do_cleanup (no-op) */
}

#endif

#ifndef _vl_api_defined_memclnt_delete_reply_t_endian
#define _vl_api_defined_memclnt_delete_reply_t_endian
static inline void vl_api_memclnt_delete_reply_t_endian (vl_api_memclnt_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->response = clib_net_to_host_u32(a->response);
    a->handle = clib_net_to_host_u64(a->handle);
}

#endif

#ifndef _vl_api_defined_rx_thread_exit_t_endian
#define _vl_api_defined_rx_thread_exit_t_endian
static inline void vl_api_rx_thread_exit_t_endian (vl_api_rx_thread_exit_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->dummy = a->dummy (no-op) */
}

#endif

#ifndef _vl_api_defined_memclnt_rx_thread_suspend_t_endian
#define _vl_api_defined_memclnt_rx_thread_suspend_t_endian
static inline void vl_api_memclnt_rx_thread_suspend_t_endian (vl_api_memclnt_rx_thread_suspend_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->dummy = a->dummy (no-op) */
}

#endif

#ifndef _vl_api_defined_memclnt_read_timeout_t_endian
#define _vl_api_defined_memclnt_read_timeout_t_endian
static inline void vl_api_memclnt_read_timeout_t_endian (vl_api_memclnt_read_timeout_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    /* a->dummy = a->dummy (no-op) */
}

#endif

#ifndef _vl_api_defined_rpc_call_t_endian
#define _vl_api_defined_rpc_call_t_endian
static inline void vl_api_rpc_call_t_endian (vl_api_rpc_call_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->function = clib_net_to_host_u64(a->function);
    /* a->multicast = a->multicast (no-op) */
    /* a->need_barrier_sync = a->need_barrier_sync (no-op) */
    /* a->send_reply = a->send_reply (no-op) */
    a->data_len = clib_net_to_host_u32(a->data_len);
}

#endif

#ifndef _vl_api_defined_rpc_call_reply_t_endian
#define _vl_api_defined_rpc_call_reply_t_endian
static inline void vl_api_rpc_call_reply_t_endian (vl_api_rpc_call_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_get_first_msg_id_t_endian
#define _vl_api_defined_get_first_msg_id_t_endian
static inline void vl_api_get_first_msg_id_t_endian (vl_api_get_first_msg_id_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_get_first_msg_id_reply_t_endian
#define _vl_api_defined_get_first_msg_id_reply_t_endian
static inline void vl_api_get_first_msg_id_reply_t_endian (vl_api_get_first_msg_id_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->first_msg_id = clib_net_to_host_u16(a->first_msg_id);
}

#endif

#ifndef _vl_api_defined_api_versions_t_endian
#define _vl_api_defined_api_versions_t_endian
static inline void vl_api_api_versions_t_endian (vl_api_api_versions_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_api_versions_reply_t_endian
#define _vl_api_defined_api_versions_reply_t_endian
static inline void vl_api_api_versions_reply_t_endian (vl_api_api_versions_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->count = clib_net_to_host_u32(a->count);
}

#endif

#ifndef _vl_api_defined_trace_plugin_msg_ids_t_endian
#define _vl_api_defined_trace_plugin_msg_ids_t_endian
static inline void vl_api_trace_plugin_msg_ids_t_endian (vl_api_trace_plugin_msg_ids_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->first_msg_id = clib_net_to_host_u16(a->first_msg_id);
    a->last_msg_id = clib_net_to_host_u16(a->last_msg_id);
}

#endif

#ifndef _vl_api_defined_sockclnt_create_t_endian
#define _vl_api_defined_sockclnt_create_t_endian
static inline void vl_api_sockclnt_create_t_endian (vl_api_sockclnt_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sockclnt_create_reply_t_endian
#define _vl_api_defined_sockclnt_create_reply_t_endian
static inline void vl_api_sockclnt_create_reply_t_endian (vl_api_sockclnt_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->response = clib_net_to_host_u32(a->response);
    a->index = clib_net_to_host_u32(a->index);
    a->count = clib_net_to_host_u16(a->count);
}

#endif

#ifndef _vl_api_defined_sockclnt_delete_t_endian
#define _vl_api_defined_sockclnt_delete_t_endian
static inline void vl_api_sockclnt_delete_t_endian (vl_api_sockclnt_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->index = clib_net_to_host_u32(a->index);
}

#endif

#ifndef _vl_api_defined_sockclnt_delete_reply_t_endian
#define _vl_api_defined_sockclnt_delete_reply_t_endian
static inline void vl_api_sockclnt_delete_reply_t_endian (vl_api_sockclnt_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->response = clib_net_to_host_u32(a->response);
}

#endif

#ifndef _vl_api_defined_sock_init_shm_t_endian
#define _vl_api_defined_sock_init_shm_t_endian
static inline void vl_api_sock_init_shm_t_endian (vl_api_sock_init_shm_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->requested_size = clib_net_to_host_u32(a->requested_size);
    /* a->nitems = a->nitems (no-op) */
}

#endif

#ifndef _vl_api_defined_sock_init_shm_reply_t_endian
#define _vl_api_defined_sock_init_shm_reply_t_endian
static inline void vl_api_sock_init_shm_reply_t_endian (vl_api_sock_init_shm_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_memclnt_keepalive_t_endian
#define _vl_api_defined_memclnt_keepalive_t_endian
static inline void vl_api_memclnt_keepalive_t_endian (vl_api_memclnt_keepalive_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_memclnt_keepalive_reply_t_endian
#define _vl_api_defined_memclnt_keepalive_reply_t_endian
static inline void vl_api_memclnt_keepalive_reply_t_endian (vl_api_memclnt_keepalive_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(memclnt.api, 2, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(memclnt.api, 0x949f3cb1)

#endif

