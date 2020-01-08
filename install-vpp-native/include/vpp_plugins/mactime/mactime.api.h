/*
 * VLIB API definitions 2020-01-07 14:20:18
 * Input file: mactime.api
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
#warning no content included from mactime.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_MACTIME_ENABLE_DISABLE, vl_api_mactime_enable_disable_t_handler)
vl_msg_id(VL_API_MACTIME_ENABLE_DISABLE_REPLY, vl_api_mactime_enable_disable_reply_t_handler)
vl_msg_id(VL_API_MACTIME_ADD_DEL_RANGE, vl_api_mactime_add_del_range_t_handler)
vl_msg_id(VL_API_MACTIME_ADD_DEL_RANGE_REPLY, vl_api_mactime_add_del_range_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_mactime_enable_disable_t, 1)
vl_msg_name(vl_api_mactime_enable_disable_reply_t, 1)
vl_msg_name(vl_api_mactime_add_del_range_t, 1)
vl_msg_name(vl_api_mactime_add_del_range_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_mactime \
_(VL_API_MACTIME_ENABLE_DISABLE, mactime_enable_disable, 57298519) \
_(VL_API_MACTIME_ENABLE_DISABLE_REPLY, mactime_enable_disable_reply, e8d4e804) \
_(VL_API_MACTIME_ADD_DEL_RANGE, mactime_add_del_range, eda8702f) \
_(VL_API_MACTIME_ADD_DEL_RANGE_REPLY, mactime_add_del_range_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_mactime_api
#define included_mactime_api
#ifndef _vl_api_defined_time_range
#define _vl_api_defined_time_range
typedef VL_API_PACKED(struct _vl_api_time_range {
    f64 start;
    f64 end;
}) vl_api_time_range_t;
#endif

#ifndef _vl_api_defined_mactime_enable_disable
#define _vl_api_defined_mactime_enable_disable
typedef VL_API_PACKED(struct _vl_api_mactime_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 sw_if_index;
}) vl_api_mactime_enable_disable_t;
#endif

#ifndef _vl_api_defined_mactime_enable_disable_reply
#define _vl_api_defined_mactime_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_mactime_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_mactime_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_mactime_add_del_range
#define _vl_api_defined_mactime_add_del_range
typedef VL_API_PACKED(struct _vl_api_mactime_add_del_range {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 drop;
    u8 allow;
    u8 allow_quota;
    u8 no_udp_10001;
    u64 data_quota;
    u8 mac_address[6];
    u8 device_name[64];
    u32 count;
    vl_api_time_range_t ranges[0];
}) vl_api_mactime_add_del_range_t;
#endif

#ifndef _vl_api_defined_mactime_add_del_range_reply
#define _vl_api_defined_mactime_add_del_range_reply
typedef VL_API_PACKED(struct _vl_api_mactime_add_del_range_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_mactime_add_del_range_reply_t;
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

#ifndef _vl_api_defined_time_range_t_print
#define _vl_api_defined_time_range_t_print
static inline void *vl_api_time_range_t_print (vl_api_time_range_t *a,void *handle)
{
    vl_print(handle, "vl_api_time_range_t:\n");
    vl_print(handle, "start: %.2f\n", a->start);
    vl_print(handle, "end: %.2f\n", a->end);
    return handle;
}

#endif

#ifndef _vl_api_defined_mactime_enable_disable_t_print
#define _vl_api_defined_mactime_enable_disable_t_print
static inline void *vl_api_mactime_enable_disable_t_print (vl_api_mactime_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_mactime_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_mactime_enable_disable_reply_t_print
#define _vl_api_defined_mactime_enable_disable_reply_t_print
static inline void *vl_api_mactime_enable_disable_reply_t_print (vl_api_mactime_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_mactime_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_mactime_add_del_range_t_print
#define _vl_api_defined_mactime_add_del_range_t_print
static inline void *vl_api_mactime_add_del_range_t_print (vl_api_mactime_add_del_range_t *a,void *handle)
{
    vl_print(handle, "vl_api_mactime_add_del_range_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "drop: %u\n", a->drop);
    vl_print(handle, "allow: %u\n", a->allow);
    vl_print(handle, "allow_quota: %u\n", a->allow_quota);
    vl_print(handle, "no_udp_10001: %u\n", a->no_udp_10001);
    vl_print(handle, "data_quota: %llu\n", a->data_quota);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

#ifndef _vl_api_defined_mactime_add_del_range_reply_t_print
#define _vl_api_defined_mactime_add_del_range_reply_t_print
static inline void *vl_api_mactime_add_del_range_reply_t_print (vl_api_mactime_add_del_range_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_mactime_add_del_range_reply_t:\n");
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

#ifndef _vl_api_defined_time_range_t_endian
#define _vl_api_defined_time_range_t_endian
static inline void vl_api_time_range_t_endian (vl_api_time_range_t *a)
{
    a->start = clib_net_to_host_u64(a->start);
    a->end = clib_net_to_host_u64(a->end);
}

#endif

#ifndef _vl_api_defined_mactime_enable_disable_t_endian
#define _vl_api_defined_mactime_enable_disable_t_endian
static inline void vl_api_mactime_enable_disable_t_endian (vl_api_mactime_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_mactime_enable_disable_reply_t_endian
#define _vl_api_defined_mactime_enable_disable_reply_t_endian
static inline void vl_api_mactime_enable_disable_reply_t_endian (vl_api_mactime_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_mactime_add_del_range_t_endian
#define _vl_api_defined_mactime_add_del_range_t_endian
static inline void vl_api_mactime_add_del_range_t_endian (vl_api_mactime_add_del_range_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->drop = a->drop (no-op) */
    /* a->allow = a->allow (no-op) */
    /* a->allow_quota = a->allow_quota (no-op) */
    /* a->no_udp_10001 = a->no_udp_10001 (no-op) */
    a->data_quota = clib_net_to_host_u64(a->data_quota);
    a->count = clib_net_to_host_u32(a->count);
}

#endif

#ifndef _vl_api_defined_mactime_add_del_range_reply_t_endian
#define _vl_api_defined_mactime_add_del_range_reply_t_endian
static inline void vl_api_mactime_add_del_range_reply_t_endian (vl_api_mactime_add_del_range_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(mactime.api, 1, 1, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(mactime.api, 0x4e7c8bc8)

#endif

