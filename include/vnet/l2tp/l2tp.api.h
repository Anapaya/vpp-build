/*
 * VLIB API definitions 2020-06-13 05:56:03
 * Input file: l2tp.api
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
#warning no content included from l2tp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_L2TPV3_CREATE_TUNNEL, vl_api_l2tpv3_create_tunnel_t_handler)
vl_msg_id(VL_API_L2TPV3_CREATE_TUNNEL_REPLY, vl_api_l2tpv3_create_tunnel_reply_t_handler)
vl_msg_id(VL_API_L2TPV3_SET_TUNNEL_COOKIES, vl_api_l2tpv3_set_tunnel_cookies_t_handler)
vl_msg_id(VL_API_L2TPV3_SET_TUNNEL_COOKIES_REPLY, vl_api_l2tpv3_set_tunnel_cookies_reply_t_handler)
vl_msg_id(VL_API_SW_IF_L2TPV3_TUNNEL_DETAILS, vl_api_sw_if_l2tpv3_tunnel_details_t_handler)
vl_msg_id(VL_API_SW_IF_L2TPV3_TUNNEL_DUMP, vl_api_sw_if_l2tpv3_tunnel_dump_t_handler)
vl_msg_id(VL_API_L2TPV3_INTERFACE_ENABLE_DISABLE, vl_api_l2tpv3_interface_enable_disable_t_handler)
vl_msg_id(VL_API_L2TPV3_INTERFACE_ENABLE_DISABLE_REPLY, vl_api_l2tpv3_interface_enable_disable_reply_t_handler)
vl_msg_id(VL_API_L2TPV3_SET_LOOKUP_KEY, vl_api_l2tpv3_set_lookup_key_t_handler)
vl_msg_id(VL_API_L2TPV3_SET_LOOKUP_KEY_REPLY, vl_api_l2tpv3_set_lookup_key_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_l2tpv3_create_tunnel_t, 1)
vl_msg_name(vl_api_l2tpv3_create_tunnel_reply_t, 1)
vl_msg_name(vl_api_l2tpv3_set_tunnel_cookies_t, 1)
vl_msg_name(vl_api_l2tpv3_set_tunnel_cookies_reply_t, 1)
vl_msg_name(vl_api_sw_if_l2tpv3_tunnel_details_t, 1)
vl_msg_name(vl_api_sw_if_l2tpv3_tunnel_dump_t, 1)
vl_msg_name(vl_api_l2tpv3_interface_enable_disable_t, 1)
vl_msg_name(vl_api_l2tpv3_interface_enable_disable_reply_t, 1)
vl_msg_name(vl_api_l2tpv3_set_lookup_key_t, 1)
vl_msg_name(vl_api_l2tpv3_set_lookup_key_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_l2tp \
_(VL_API_L2TPV3_CREATE_TUNNEL, l2tpv3_create_tunnel, 11bafa9f) \
_(VL_API_L2TPV3_CREATE_TUNNEL_REPLY, l2tpv3_create_tunnel_reply, fda5941f) \
_(VL_API_L2TPV3_SET_TUNNEL_COOKIES, l2tpv3_set_tunnel_cookies, b0ce1366) \
_(VL_API_L2TPV3_SET_TUNNEL_COOKIES_REPLY, l2tpv3_set_tunnel_cookies_reply, e8d4e804) \
_(VL_API_SW_IF_L2TPV3_TUNNEL_DETAILS, sw_if_l2tpv3_tunnel_details, 7b22bb34) \
_(VL_API_SW_IF_L2TPV3_TUNNEL_DUMP, sw_if_l2tpv3_tunnel_dump, 51077d14) \
_(VL_API_L2TPV3_INTERFACE_ENABLE_DISABLE, l2tpv3_interface_enable_disable, 57298519) \
_(VL_API_L2TPV3_INTERFACE_ENABLE_DISABLE_REPLY, l2tpv3_interface_enable_disable_reply, e8d4e804) \
_(VL_API_L2TPV3_SET_LOOKUP_KEY, l2tpv3_set_lookup_key, d7736d45) \
_(VL_API_L2TPV3_SET_LOOKUP_KEY_REPLY, l2tpv3_set_lookup_key_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_l2tp_api
#define included_l2tp_api
#ifndef _vl_api_defined_l2tpv3_create_tunnel
#define _vl_api_defined_l2tpv3_create_tunnel
typedef VL_API_PACKED(struct _vl_api_l2tpv3_create_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 client_address[16];
    u8 our_address[16];
    u8 is_ipv6;
    u32 local_session_id;
    u32 remote_session_id;
    u64 local_cookie;
    u64 remote_cookie;
    u8 l2_sublayer_present;
    u32 encap_vrf_id;
}) vl_api_l2tpv3_create_tunnel_t;
#endif

#ifndef _vl_api_defined_l2tpv3_create_tunnel_reply
#define _vl_api_defined_l2tpv3_create_tunnel_reply
typedef VL_API_PACKED(struct _vl_api_l2tpv3_create_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_l2tpv3_create_tunnel_reply_t;
#endif

#ifndef _vl_api_defined_l2tpv3_set_tunnel_cookies
#define _vl_api_defined_l2tpv3_set_tunnel_cookies
typedef VL_API_PACKED(struct _vl_api_l2tpv3_set_tunnel_cookies {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u64 new_local_cookie;
    u64 new_remote_cookie;
}) vl_api_l2tpv3_set_tunnel_cookies_t;
#endif

#ifndef _vl_api_defined_l2tpv3_set_tunnel_cookies_reply
#define _vl_api_defined_l2tpv3_set_tunnel_cookies_reply
typedef VL_API_PACKED(struct _vl_api_l2tpv3_set_tunnel_cookies_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2tpv3_set_tunnel_cookies_reply_t;
#endif

#ifndef _vl_api_defined_sw_if_l2tpv3_tunnel_details
#define _vl_api_defined_sw_if_l2tpv3_tunnel_details
typedef VL_API_PACKED(struct _vl_api_sw_if_l2tpv3_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 interface_name[64];
    u8 client_address[16];
    u8 our_address[16];
    u32 local_session_id;
    u32 remote_session_id;
    u64 local_cookie[2];
    u64 remote_cookie;
    u8 l2_sublayer_present;
}) vl_api_sw_if_l2tpv3_tunnel_details_t;
#endif

#ifndef _vl_api_defined_sw_if_l2tpv3_tunnel_dump
#define _vl_api_defined_sw_if_l2tpv3_tunnel_dump
typedef VL_API_PACKED(struct _vl_api_sw_if_l2tpv3_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sw_if_l2tpv3_tunnel_dump_t;
#endif

#ifndef _vl_api_defined_l2tpv3_interface_enable_disable
#define _vl_api_defined_l2tpv3_interface_enable_disable
typedef VL_API_PACKED(struct _vl_api_l2tpv3_interface_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 sw_if_index;
}) vl_api_l2tpv3_interface_enable_disable_t;
#endif

#ifndef _vl_api_defined_l2tpv3_interface_enable_disable_reply
#define _vl_api_defined_l2tpv3_interface_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_l2tpv3_interface_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2tpv3_interface_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_l2tpv3_set_lookup_key
#define _vl_api_defined_l2tpv3_set_lookup_key
typedef VL_API_PACKED(struct _vl_api_l2tpv3_set_lookup_key {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 key;
}) vl_api_l2tpv3_set_lookup_key_t;
#endif

#ifndef _vl_api_defined_l2tpv3_set_lookup_key_reply
#define _vl_api_defined_l2tpv3_set_lookup_key_reply
typedef VL_API_PACKED(struct _vl_api_l2tpv3_set_lookup_key_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2tpv3_set_lookup_key_reply_t;
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

#ifndef _vl_api_defined_l2tpv3_create_tunnel_t_print
#define _vl_api_defined_l2tpv3_create_tunnel_t_print
static inline void *vl_api_l2tpv3_create_tunnel_t_print (vl_api_l2tpv3_create_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_create_tunnel_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "local_session_id: %u\n", a->local_session_id);
    vl_print(handle, "remote_session_id: %u\n", a->remote_session_id);
    vl_print(handle, "local_cookie: %llu\n", a->local_cookie);
    vl_print(handle, "remote_cookie: %llu\n", a->remote_cookie);
    vl_print(handle, "l2_sublayer_present: %u\n", a->l2_sublayer_present);
    vl_print(handle, "encap_vrf_id: %u\n", a->encap_vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2tpv3_create_tunnel_reply_t_print
#define _vl_api_defined_l2tpv3_create_tunnel_reply_t_print
static inline void *vl_api_l2tpv3_create_tunnel_reply_t_print (vl_api_l2tpv3_create_tunnel_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_create_tunnel_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_tunnel_cookies_t_print
#define _vl_api_defined_l2tpv3_set_tunnel_cookies_t_print
static inline void *vl_api_l2tpv3_set_tunnel_cookies_t_print (vl_api_l2tpv3_set_tunnel_cookies_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_set_tunnel_cookies_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "new_local_cookie: %llu\n", a->new_local_cookie);
    vl_print(handle, "new_remote_cookie: %llu\n", a->new_remote_cookie);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_tunnel_cookies_reply_t_print
#define _vl_api_defined_l2tpv3_set_tunnel_cookies_reply_t_print
static inline void *vl_api_l2tpv3_set_tunnel_cookies_reply_t_print (vl_api_l2tpv3_set_tunnel_cookies_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_set_tunnel_cookies_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_if_l2tpv3_tunnel_details_t_print
#define _vl_api_defined_sw_if_l2tpv3_tunnel_details_t_print
static inline void *vl_api_sw_if_l2tpv3_tunnel_details_t_print (vl_api_sw_if_l2tpv3_tunnel_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_if_l2tpv3_tunnel_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "local_session_id: %u\n", a->local_session_id);
    vl_print(handle, "remote_session_id: %u\n", a->remote_session_id);
    vl_print(handle, "remote_cookie: %llu\n", a->remote_cookie);
    vl_print(handle, "l2_sublayer_present: %u\n", a->l2_sublayer_present);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_if_l2tpv3_tunnel_dump_t_print
#define _vl_api_defined_sw_if_l2tpv3_tunnel_dump_t_print
static inline void *vl_api_sw_if_l2tpv3_tunnel_dump_t_print (vl_api_sw_if_l2tpv3_tunnel_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_if_l2tpv3_tunnel_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2tpv3_interface_enable_disable_t_print
#define _vl_api_defined_l2tpv3_interface_enable_disable_t_print
static inline void *vl_api_l2tpv3_interface_enable_disable_t_print (vl_api_l2tpv3_interface_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_interface_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2tpv3_interface_enable_disable_reply_t_print
#define _vl_api_defined_l2tpv3_interface_enable_disable_reply_t_print
static inline void *vl_api_l2tpv3_interface_enable_disable_reply_t_print (vl_api_l2tpv3_interface_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_interface_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_lookup_key_t_print
#define _vl_api_defined_l2tpv3_set_lookup_key_t_print
static inline void *vl_api_l2tpv3_set_lookup_key_t_print (vl_api_l2tpv3_set_lookup_key_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_set_lookup_key_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "key: %u\n", a->key);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_lookup_key_reply_t_print
#define _vl_api_defined_l2tpv3_set_lookup_key_reply_t_print
static inline void *vl_api_l2tpv3_set_lookup_key_reply_t_print (vl_api_l2tpv3_set_lookup_key_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2tpv3_set_lookup_key_reply_t:\n");
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

#ifndef _vl_api_defined_l2tpv3_create_tunnel_t_endian
#define _vl_api_defined_l2tpv3_create_tunnel_t_endian
static inline void vl_api_l2tpv3_create_tunnel_t_endian (vl_api_l2tpv3_create_tunnel_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->local_session_id = clib_net_to_host_u32(a->local_session_id);
    a->remote_session_id = clib_net_to_host_u32(a->remote_session_id);
    a->local_cookie = clib_net_to_host_u64(a->local_cookie);
    a->remote_cookie = clib_net_to_host_u64(a->remote_cookie);
    /* a->l2_sublayer_present = a->l2_sublayer_present (no-op) */
    a->encap_vrf_id = clib_net_to_host_u32(a->encap_vrf_id);
}

#endif

#ifndef _vl_api_defined_l2tpv3_create_tunnel_reply_t_endian
#define _vl_api_defined_l2tpv3_create_tunnel_reply_t_endian
static inline void vl_api_l2tpv3_create_tunnel_reply_t_endian (vl_api_l2tpv3_create_tunnel_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_tunnel_cookies_t_endian
#define _vl_api_defined_l2tpv3_set_tunnel_cookies_t_endian
static inline void vl_api_l2tpv3_set_tunnel_cookies_t_endian (vl_api_l2tpv3_set_tunnel_cookies_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->new_local_cookie = clib_net_to_host_u64(a->new_local_cookie);
    a->new_remote_cookie = clib_net_to_host_u64(a->new_remote_cookie);
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_tunnel_cookies_reply_t_endian
#define _vl_api_defined_l2tpv3_set_tunnel_cookies_reply_t_endian
static inline void vl_api_l2tpv3_set_tunnel_cookies_reply_t_endian (vl_api_l2tpv3_set_tunnel_cookies_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_if_l2tpv3_tunnel_details_t_endian
#define _vl_api_defined_sw_if_l2tpv3_tunnel_details_t_endian
static inline void vl_api_sw_if_l2tpv3_tunnel_details_t_endian (vl_api_sw_if_l2tpv3_tunnel_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->local_session_id = clib_net_to_host_u32(a->local_session_id);
    a->remote_session_id = clib_net_to_host_u32(a->remote_session_id);
    a->remote_cookie = clib_net_to_host_u64(a->remote_cookie);
    /* a->l2_sublayer_present = a->l2_sublayer_present (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_if_l2tpv3_tunnel_dump_t_endian
#define _vl_api_defined_sw_if_l2tpv3_tunnel_dump_t_endian
static inline void vl_api_sw_if_l2tpv3_tunnel_dump_t_endian (vl_api_sw_if_l2tpv3_tunnel_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_l2tpv3_interface_enable_disable_t_endian
#define _vl_api_defined_l2tpv3_interface_enable_disable_t_endian
static inline void vl_api_l2tpv3_interface_enable_disable_t_endian (vl_api_l2tpv3_interface_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_l2tpv3_interface_enable_disable_reply_t_endian
#define _vl_api_defined_l2tpv3_interface_enable_disable_reply_t_endian
static inline void vl_api_l2tpv3_interface_enable_disable_reply_t_endian (vl_api_l2tpv3_interface_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_lookup_key_t_endian
#define _vl_api_defined_l2tpv3_set_lookup_key_t_endian
static inline void vl_api_l2tpv3_set_lookup_key_t_endian (vl_api_l2tpv3_set_lookup_key_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->key = a->key (no-op) */
}

#endif

#ifndef _vl_api_defined_l2tpv3_set_lookup_key_reply_t_endian
#define _vl_api_defined_l2tpv3_set_lookup_key_reply_t_endian
static inline void vl_api_l2tpv3_set_lookup_key_reply_t_endian (vl_api_l2tpv3_set_lookup_key_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(l2tp.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(l2tp.api, 0xbee4b108)

#endif

