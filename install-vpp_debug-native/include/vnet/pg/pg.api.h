/*
 * VLIB API definitions 2020-01-07 14:25:06
 * Input file: pg.api
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
#warning no content included from pg.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_PG_CREATE_INTERFACE, vl_api_pg_create_interface_t_handler)
vl_msg_id(VL_API_PG_CREATE_INTERFACE_REPLY, vl_api_pg_create_interface_reply_t_handler)
vl_msg_id(VL_API_PG_CAPTURE, vl_api_pg_capture_t_handler)
vl_msg_id(VL_API_PG_CAPTURE_REPLY, vl_api_pg_capture_reply_t_handler)
vl_msg_id(VL_API_PG_ENABLE_DISABLE, vl_api_pg_enable_disable_t_handler)
vl_msg_id(VL_API_PG_ENABLE_DISABLE_REPLY, vl_api_pg_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_pg_create_interface_t, 1)
vl_msg_name(vl_api_pg_create_interface_reply_t, 1)
vl_msg_name(vl_api_pg_capture_t, 1)
vl_msg_name(vl_api_pg_capture_reply_t, 1)
vl_msg_name(vl_api_pg_enable_disable_t, 1)
vl_msg_name(vl_api_pg_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_pg \
_(VL_API_PG_CREATE_INTERFACE, pg_create_interface, b1ecff05) \
_(VL_API_PG_CREATE_INTERFACE_REPLY, pg_create_interface_reply, fda5941f) \
_(VL_API_PG_CAPTURE, pg_capture, 453da78d) \
_(VL_API_PG_CAPTURE_REPLY, pg_capture_reply, e8d4e804) \
_(VL_API_PG_ENABLE_DISABLE, pg_enable_disable, 0cb71d10) \
_(VL_API_PG_ENABLE_DISABLE_REPLY, pg_enable_disable_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_pg_api
#define included_pg_api
#ifndef _vl_api_defined_pg_create_interface
#define _vl_api_defined_pg_create_interface
typedef VL_API_PACKED(struct _vl_api_pg_create_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 interface_id;
    u8 gso_enabled;
    u32 gso_size;
}) vl_api_pg_create_interface_t;
#endif

#ifndef _vl_api_defined_pg_create_interface_reply
#define _vl_api_defined_pg_create_interface_reply
typedef VL_API_PACKED(struct _vl_api_pg_create_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_pg_create_interface_reply_t;
#endif

#ifndef _vl_api_defined_pg_capture
#define _vl_api_defined_pg_capture
typedef VL_API_PACKED(struct _vl_api_pg_capture {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 interface_id;
    u8 is_enabled;
    u32 count;
    u32 pcap_name_length;
    u8 pcap_file_name[0];
}) vl_api_pg_capture_t;
#endif

#ifndef _vl_api_defined_pg_capture_reply
#define _vl_api_defined_pg_capture_reply
typedef VL_API_PACKED(struct _vl_api_pg_capture_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_pg_capture_reply_t;
#endif

#ifndef _vl_api_defined_pg_enable_disable
#define _vl_api_defined_pg_enable_disable
typedef VL_API_PACKED(struct _vl_api_pg_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_enabled;
    u32 stream_name_length;
    u8 stream_name[0];
}) vl_api_pg_enable_disable_t;
#endif

#ifndef _vl_api_defined_pg_enable_disable_reply
#define _vl_api_defined_pg_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_pg_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_pg_enable_disable_reply_t;
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

#ifndef _vl_api_defined_pg_create_interface_t_print
#define _vl_api_defined_pg_create_interface_t_print
static inline void *vl_api_pg_create_interface_t_print (vl_api_pg_create_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_pg_create_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "interface_id: %u\n", a->interface_id);
    vl_print(handle, "gso_enabled: %u\n", a->gso_enabled);
    vl_print(handle, "gso_size: %u\n", a->gso_size);
    return handle;
}

#endif

#ifndef _vl_api_defined_pg_create_interface_reply_t_print
#define _vl_api_defined_pg_create_interface_reply_t_print
static inline void *vl_api_pg_create_interface_reply_t_print (vl_api_pg_create_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pg_create_interface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_pg_capture_t_print
#define _vl_api_defined_pg_capture_t_print
static inline void *vl_api_pg_capture_t_print (vl_api_pg_capture_t *a,void *handle)
{
    vl_print(handle, "vl_api_pg_capture_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "interface_id: %u\n", a->interface_id);
    vl_print(handle, "is_enabled: %u\n", a->is_enabled);
    vl_print(handle, "count: %u\n", a->count);
    vl_print(handle, "pcap_name_length: %u\n", a->pcap_name_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_pg_capture_reply_t_print
#define _vl_api_defined_pg_capture_reply_t_print
static inline void *vl_api_pg_capture_reply_t_print (vl_api_pg_capture_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pg_capture_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_pg_enable_disable_t_print
#define _vl_api_defined_pg_enable_disable_t_print
static inline void *vl_api_pg_enable_disable_t_print (vl_api_pg_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_pg_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_enabled: %u\n", a->is_enabled);
    vl_print(handle, "stream_name_length: %u\n", a->stream_name_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_pg_enable_disable_reply_t_print
#define _vl_api_defined_pg_enable_disable_reply_t_print
static inline void *vl_api_pg_enable_disable_reply_t_print (vl_api_pg_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pg_enable_disable_reply_t:\n");
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

#ifndef _vl_api_defined_pg_create_interface_t_endian
#define _vl_api_defined_pg_create_interface_t_endian
static inline void vl_api_pg_create_interface_t_endian (vl_api_pg_create_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->interface_id = clib_net_to_host_u32(a->interface_id);
    /* a->gso_enabled = a->gso_enabled (no-op) */
    a->gso_size = clib_net_to_host_u32(a->gso_size);
}

#endif

#ifndef _vl_api_defined_pg_create_interface_reply_t_endian
#define _vl_api_defined_pg_create_interface_reply_t_endian
static inline void vl_api_pg_create_interface_reply_t_endian (vl_api_pg_create_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_pg_capture_t_endian
#define _vl_api_defined_pg_capture_t_endian
static inline void vl_api_pg_capture_t_endian (vl_api_pg_capture_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->interface_id = clib_net_to_host_u32(a->interface_id);
    /* a->is_enabled = a->is_enabled (no-op) */
    a->count = clib_net_to_host_u32(a->count);
    a->pcap_name_length = clib_net_to_host_u32(a->pcap_name_length);
}

#endif

#ifndef _vl_api_defined_pg_capture_reply_t_endian
#define _vl_api_defined_pg_capture_reply_t_endian
static inline void vl_api_pg_capture_reply_t_endian (vl_api_pg_capture_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_pg_enable_disable_t_endian
#define _vl_api_defined_pg_enable_disable_t_endian
static inline void vl_api_pg_enable_disable_t_endian (vl_api_pg_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enabled = a->is_enabled (no-op) */
    a->stream_name_length = clib_net_to_host_u32(a->stream_name_length);
}

#endif

#ifndef _vl_api_defined_pg_enable_disable_reply_t_endian
#define _vl_api_defined_pg_enable_disable_reply_t_endian
static inline void vl_api_pg_enable_disable_reply_t_endian (vl_api_pg_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(pg.api, 1, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(pg.api, 0x953cbbb2)

#endif

