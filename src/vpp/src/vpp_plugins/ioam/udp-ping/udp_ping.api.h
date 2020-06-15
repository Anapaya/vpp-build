/*
 * VLIB API definitions 2020-06-13 06:01:52
 * Input file: udp_ping.api
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
#warning no content included from udp_ping.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_UDP_PING_ADD_DEL, vl_api_udp_ping_add_del_t_handler)
vl_msg_id(VL_API_UDP_PING_ADD_DEL_REPLY, vl_api_udp_ping_add_del_reply_t_handler)
vl_msg_id(VL_API_UDP_PING_EXPORT, vl_api_udp_ping_export_t_handler)
vl_msg_id(VL_API_UDP_PING_EXPORT_REPLY, vl_api_udp_ping_export_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_udp_ping_add_del_t, 1)
vl_msg_name(vl_api_udp_ping_add_del_reply_t, 1)
vl_msg_name(vl_api_udp_ping_export_t, 1)
vl_msg_name(vl_api_udp_ping_export_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_udp_ping \
_(VL_API_UDP_PING_ADD_DEL, udp_ping_add_del, 559fcc01) \
_(VL_API_UDP_PING_ADD_DEL_REPLY, udp_ping_add_del_reply, e8d4e804) \
_(VL_API_UDP_PING_EXPORT, udp_ping_export, b142b369) \
_(VL_API_UDP_PING_EXPORT_REPLY, udp_ping_export_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_udp_ping_api
#define included_udp_ping_api
#ifndef _vl_api_defined_udp_ping_add_del
#define _vl_api_defined_udp_ping_add_del
typedef VL_API_PACKED(struct _vl_api_udp_ping_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 src_ip_address[16];
    u8 dst_ip_address[16];
    u16 start_src_port;
    u16 end_src_port;
    u16 start_dst_port;
    u16 end_dst_port;
    u16 interval;
    u8 is_ipv4;
    u8 dis;
    u8 fault_det;
    u8 reserve[3];
}) vl_api_udp_ping_add_del_t;
#endif

#ifndef _vl_api_defined_udp_ping_add_del_reply
#define _vl_api_defined_udp_ping_add_del_reply
typedef VL_API_PACKED(struct _vl_api_udp_ping_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_udp_ping_add_del_reply_t;
#endif

#ifndef _vl_api_defined_udp_ping_export
#define _vl_api_defined_udp_ping_export
typedef VL_API_PACKED(struct _vl_api_udp_ping_export {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 enable;
}) vl_api_udp_ping_export_t;
#endif

#ifndef _vl_api_defined_udp_ping_export_reply
#define _vl_api_defined_udp_ping_export_reply
typedef VL_API_PACKED(struct _vl_api_udp_ping_export_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_udp_ping_export_reply_t;
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

#ifndef _vl_api_defined_udp_ping_add_del_t_print
#define _vl_api_defined_udp_ping_add_del_t_print
static inline void *vl_api_udp_ping_add_del_t_print (vl_api_udp_ping_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_udp_ping_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "start_src_port: %u\n", a->start_src_port);
    vl_print(handle, "end_src_port: %u\n", a->end_src_port);
    vl_print(handle, "start_dst_port: %u\n", a->start_dst_port);
    vl_print(handle, "end_dst_port: %u\n", a->end_dst_port);
    vl_print(handle, "interval: %u\n", a->interval);
    vl_print(handle, "is_ipv4: %u\n", a->is_ipv4);
    vl_print(handle, "dis: %u\n", a->dis);
    vl_print(handle, "fault_det: %u\n", a->fault_det);
    return handle;
}

#endif

#ifndef _vl_api_defined_udp_ping_add_del_reply_t_print
#define _vl_api_defined_udp_ping_add_del_reply_t_print
static inline void *vl_api_udp_ping_add_del_reply_t_print (vl_api_udp_ping_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_udp_ping_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_udp_ping_export_t_print
#define _vl_api_defined_udp_ping_export_t_print
static inline void *vl_api_udp_ping_export_t_print (vl_api_udp_ping_export_t *a,void *handle)
{
    vl_print(handle, "vl_api_udp_ping_export_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_udp_ping_export_reply_t_print
#define _vl_api_defined_udp_ping_export_reply_t_print
static inline void *vl_api_udp_ping_export_reply_t_print (vl_api_udp_ping_export_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_udp_ping_export_reply_t:\n");
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

#ifndef _vl_api_defined_udp_ping_add_del_t_endian
#define _vl_api_defined_udp_ping_add_del_t_endian
static inline void vl_api_udp_ping_add_del_t_endian (vl_api_udp_ping_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->start_src_port = clib_net_to_host_u16(a->start_src_port);
    a->end_src_port = clib_net_to_host_u16(a->end_src_port);
    a->start_dst_port = clib_net_to_host_u16(a->start_dst_port);
    a->end_dst_port = clib_net_to_host_u16(a->end_dst_port);
    a->interval = clib_net_to_host_u16(a->interval);
    /* a->is_ipv4 = a->is_ipv4 (no-op) */
    /* a->dis = a->dis (no-op) */
    /* a->fault_det = a->fault_det (no-op) */
}

#endif

#ifndef _vl_api_defined_udp_ping_add_del_reply_t_endian
#define _vl_api_defined_udp_ping_add_del_reply_t_endian
static inline void vl_api_udp_ping_add_del_reply_t_endian (vl_api_udp_ping_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_udp_ping_export_t_endian
#define _vl_api_defined_udp_ping_export_t_endian
static inline void vl_api_udp_ping_export_t_endian (vl_api_udp_ping_export_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->enable = clib_net_to_host_u32(a->enable);
}

#endif

#ifndef _vl_api_defined_udp_ping_export_reply_t_endian
#define _vl_api_defined_udp_ping_export_reply_t_endian
static inline void vl_api_udp_ping_export_reply_t_endian (vl_api_udp_ping_export_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(udp_ping.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(udp_ping.api, 0xc8855f73)

#endif

