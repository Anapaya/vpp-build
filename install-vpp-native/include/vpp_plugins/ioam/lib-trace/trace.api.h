/*
 * VLIB API definitions 2020-01-07 14:22:04
 * Input file: trace.api
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
#warning no content included from trace.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_TRACE_PROFILE_ADD, vl_api_trace_profile_add_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_ADD_REPLY, vl_api_trace_profile_add_reply_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_DEL, vl_api_trace_profile_del_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_DEL_REPLY, vl_api_trace_profile_del_reply_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_SHOW_CONFIG, vl_api_trace_profile_show_config_t_handler)
vl_msg_id(VL_API_TRACE_PROFILE_SHOW_CONFIG_REPLY, vl_api_trace_profile_show_config_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_trace_profile_add_t, 1)
vl_msg_name(vl_api_trace_profile_add_reply_t, 1)
vl_msg_name(vl_api_trace_profile_del_t, 1)
vl_msg_name(vl_api_trace_profile_del_reply_t, 1)
vl_msg_name(vl_api_trace_profile_show_config_t, 1)
vl_msg_name(vl_api_trace_profile_show_config_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_trace \
_(VL_API_TRACE_PROFILE_ADD, trace_profile_add, de08aa6d) \
_(VL_API_TRACE_PROFILE_ADD_REPLY, trace_profile_add_reply, e8d4e804) \
_(VL_API_TRACE_PROFILE_DEL, trace_profile_del, 51077d14) \
_(VL_API_TRACE_PROFILE_DEL_REPLY, trace_profile_del_reply, e8d4e804) \
_(VL_API_TRACE_PROFILE_SHOW_CONFIG, trace_profile_show_config, 51077d14) \
_(VL_API_TRACE_PROFILE_SHOW_CONFIG_REPLY, trace_profile_show_config_reply, 0f1d374c) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_trace_api
#define included_trace_api
#ifndef _vl_api_defined_trace_profile_add
#define _vl_api_defined_trace_profile_add
typedef VL_API_PACKED(struct _vl_api_trace_profile_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 trace_type;
    u8 num_elts;
    u8 trace_tsp;
    u32 node_id;
    u32 app_data;
}) vl_api_trace_profile_add_t;
#endif

#ifndef _vl_api_defined_trace_profile_add_reply
#define _vl_api_defined_trace_profile_add_reply
typedef VL_API_PACKED(struct _vl_api_trace_profile_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_trace_profile_add_reply_t;
#endif

#ifndef _vl_api_defined_trace_profile_del
#define _vl_api_defined_trace_profile_del
typedef VL_API_PACKED(struct _vl_api_trace_profile_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_trace_profile_del_t;
#endif

#ifndef _vl_api_defined_trace_profile_del_reply
#define _vl_api_defined_trace_profile_del_reply
typedef VL_API_PACKED(struct _vl_api_trace_profile_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_trace_profile_del_reply_t;
#endif

#ifndef _vl_api_defined_trace_profile_show_config
#define _vl_api_defined_trace_profile_show_config
typedef VL_API_PACKED(struct _vl_api_trace_profile_show_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_trace_profile_show_config_t;
#endif

#ifndef _vl_api_defined_trace_profile_show_config_reply
#define _vl_api_defined_trace_profile_show_config_reply
typedef VL_API_PACKED(struct _vl_api_trace_profile_show_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 trace_type;
    u8 num_elts;
    u8 trace_tsp;
    u32 node_id;
    u32 app_data;
}) vl_api_trace_profile_show_config_reply_t;
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

#ifndef _vl_api_defined_trace_profile_add_t_print
#define _vl_api_defined_trace_profile_add_t_print
static inline void *vl_api_trace_profile_add_t_print (vl_api_trace_profile_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_trace_profile_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "trace_type: %u\n", a->trace_type);
    vl_print(handle, "num_elts: %u\n", a->num_elts);
    vl_print(handle, "trace_tsp: %u\n", a->trace_tsp);
    vl_print(handle, "node_id: %u\n", a->node_id);
    vl_print(handle, "app_data: %u\n", a->app_data);
    return handle;
}

#endif

#ifndef _vl_api_defined_trace_profile_add_reply_t_print
#define _vl_api_defined_trace_profile_add_reply_t_print
static inline void *vl_api_trace_profile_add_reply_t_print (vl_api_trace_profile_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_trace_profile_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_trace_profile_del_t_print
#define _vl_api_defined_trace_profile_del_t_print
static inline void *vl_api_trace_profile_del_t_print (vl_api_trace_profile_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_trace_profile_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_trace_profile_del_reply_t_print
#define _vl_api_defined_trace_profile_del_reply_t_print
static inline void *vl_api_trace_profile_del_reply_t_print (vl_api_trace_profile_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_trace_profile_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_trace_profile_show_config_t_print
#define _vl_api_defined_trace_profile_show_config_t_print
static inline void *vl_api_trace_profile_show_config_t_print (vl_api_trace_profile_show_config_t *a,void *handle)
{
    vl_print(handle, "vl_api_trace_profile_show_config_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_trace_profile_show_config_reply_t_print
#define _vl_api_defined_trace_profile_show_config_reply_t_print
static inline void *vl_api_trace_profile_show_config_reply_t_print (vl_api_trace_profile_show_config_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_trace_profile_show_config_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "trace_type: %u\n", a->trace_type);
    vl_print(handle, "num_elts: %u\n", a->num_elts);
    vl_print(handle, "trace_tsp: %u\n", a->trace_tsp);
    vl_print(handle, "node_id: %u\n", a->node_id);
    vl_print(handle, "app_data: %u\n", a->app_data);
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

#ifndef _vl_api_defined_trace_profile_add_t_endian
#define _vl_api_defined_trace_profile_add_t_endian
static inline void vl_api_trace_profile_add_t_endian (vl_api_trace_profile_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->trace_type = a->trace_type (no-op) */
    /* a->num_elts = a->num_elts (no-op) */
    /* a->trace_tsp = a->trace_tsp (no-op) */
    a->node_id = clib_net_to_host_u32(a->node_id);
    a->app_data = clib_net_to_host_u32(a->app_data);
}

#endif

#ifndef _vl_api_defined_trace_profile_add_reply_t_endian
#define _vl_api_defined_trace_profile_add_reply_t_endian
static inline void vl_api_trace_profile_add_reply_t_endian (vl_api_trace_profile_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_trace_profile_del_t_endian
#define _vl_api_defined_trace_profile_del_t_endian
static inline void vl_api_trace_profile_del_t_endian (vl_api_trace_profile_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_trace_profile_del_reply_t_endian
#define _vl_api_defined_trace_profile_del_reply_t_endian
static inline void vl_api_trace_profile_del_reply_t_endian (vl_api_trace_profile_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_trace_profile_show_config_t_endian
#define _vl_api_defined_trace_profile_show_config_t_endian
static inline void vl_api_trace_profile_show_config_t_endian (vl_api_trace_profile_show_config_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_trace_profile_show_config_reply_t_endian
#define _vl_api_defined_trace_profile_show_config_reply_t_endian
static inline void vl_api_trace_profile_show_config_reply_t_endian (vl_api_trace_profile_show_config_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->trace_type = a->trace_type (no-op) */
    /* a->num_elts = a->num_elts (no-op) */
    /* a->trace_tsp = a->trace_tsp (no-op) */
    a->node_id = clib_net_to_host_u32(a->node_id);
    a->app_data = clib_net_to_host_u32(a->app_data);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(trace.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(trace.api, 0x3467fbcd)

#endif

