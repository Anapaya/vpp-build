/*
 * VLIB API definitions 2020-06-13 05:58:30
 * Input file: pppoe.api
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
#warning no content included from pppoe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_PPPOE_ADD_DEL_SESSION, vl_api_pppoe_add_del_session_t_handler)
vl_msg_id(VL_API_PPPOE_ADD_DEL_SESSION_REPLY, vl_api_pppoe_add_del_session_reply_t_handler)
vl_msg_id(VL_API_PPPOE_SESSION_DUMP, vl_api_pppoe_session_dump_t_handler)
vl_msg_id(VL_API_PPPOE_SESSION_DETAILS, vl_api_pppoe_session_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_pppoe_add_del_session_t, 1)
vl_msg_name(vl_api_pppoe_add_del_session_reply_t, 1)
vl_msg_name(vl_api_pppoe_session_dump_t, 1)
vl_msg_name(vl_api_pppoe_session_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_pppoe \
_(VL_API_PPPOE_ADD_DEL_SESSION, pppoe_add_del_session, 766cbfeb) \
_(VL_API_PPPOE_ADD_DEL_SESSION_REPLY, pppoe_add_del_session_reply, fda5941f) \
_(VL_API_PPPOE_SESSION_DUMP, pppoe_session_dump, 529cb13f) \
_(VL_API_PPPOE_SESSION_DETAILS, pppoe_session_details, 358fc7a8) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_pppoe_api
#define included_pppoe_api
#ifndef _vl_api_defined_pppoe_add_del_session
#define _vl_api_defined_pppoe_add_del_session
typedef VL_API_PACKED(struct _vl_api_pppoe_add_del_session {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_ipv6;
    u16 session_id;
    u8 client_ip[16];
    u32 decap_vrf_id;
    u8 client_mac[6];
}) vl_api_pppoe_add_del_session_t;
#endif

#ifndef _vl_api_defined_pppoe_add_del_session_reply
#define _vl_api_defined_pppoe_add_del_session_reply
typedef VL_API_PACKED(struct _vl_api_pppoe_add_del_session_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_pppoe_add_del_session_reply_t;
#endif

#ifndef _vl_api_defined_pppoe_session_dump
#define _vl_api_defined_pppoe_session_dump
typedef VL_API_PACKED(struct _vl_api_pppoe_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_pppoe_session_dump_t;
#endif

#ifndef _vl_api_defined_pppoe_session_details
#define _vl_api_defined_pppoe_session_details
typedef VL_API_PACKED(struct _vl_api_pppoe_session_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
    u16 session_id;
    u8 client_ip[16];
    u32 encap_if_index;
    u32 decap_vrf_id;
    u8 local_mac[6];
    u8 client_mac[6];
}) vl_api_pppoe_session_details_t;
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

#ifndef _vl_api_defined_pppoe_add_del_session_t_print
#define _vl_api_defined_pppoe_add_del_session_t_print
static inline void *vl_api_pppoe_add_del_session_t_print (vl_api_pppoe_add_del_session_t *a,void *handle)
{
    vl_print(handle, "vl_api_pppoe_add_del_session_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "session_id: %u\n", a->session_id);
    vl_print(handle, "decap_vrf_id: %u\n", a->decap_vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_pppoe_add_del_session_reply_t_print
#define _vl_api_defined_pppoe_add_del_session_reply_t_print
static inline void *vl_api_pppoe_add_del_session_reply_t_print (vl_api_pppoe_add_del_session_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pppoe_add_del_session_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_pppoe_session_dump_t_print
#define _vl_api_defined_pppoe_session_dump_t_print
static inline void *vl_api_pppoe_session_dump_t_print (vl_api_pppoe_session_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_pppoe_session_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_pppoe_session_details_t_print
#define _vl_api_defined_pppoe_session_details_t_print
static inline void *vl_api_pppoe_session_details_t_print (vl_api_pppoe_session_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_pppoe_session_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "session_id: %u\n", a->session_id);
    vl_print(handle, "encap_if_index: %u\n", a->encap_if_index);
    vl_print(handle, "decap_vrf_id: %u\n", a->decap_vrf_id);
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

#ifndef _vl_api_defined_pppoe_add_del_session_t_endian
#define _vl_api_defined_pppoe_add_del_session_t_endian
static inline void vl_api_pppoe_add_del_session_t_endian (vl_api_pppoe_add_del_session_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->session_id = clib_net_to_host_u16(a->session_id);
    a->decap_vrf_id = clib_net_to_host_u32(a->decap_vrf_id);
}

#endif

#ifndef _vl_api_defined_pppoe_add_del_session_reply_t_endian
#define _vl_api_defined_pppoe_add_del_session_reply_t_endian
static inline void vl_api_pppoe_add_del_session_reply_t_endian (vl_api_pppoe_add_del_session_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_pppoe_session_dump_t_endian
#define _vl_api_defined_pppoe_session_dump_t_endian
static inline void vl_api_pppoe_session_dump_t_endian (vl_api_pppoe_session_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_pppoe_session_details_t_endian
#define _vl_api_defined_pppoe_session_details_t_endian
static inline void vl_api_pppoe_session_details_t_endian (vl_api_pppoe_session_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->session_id = clib_net_to_host_u16(a->session_id);
    a->encap_if_index = clib_net_to_host_u32(a->encap_if_index);
    a->decap_vrf_id = clib_net_to_host_u32(a->decap_vrf_id);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(pppoe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(pppoe.api, 0x4def67c4)

#endif

