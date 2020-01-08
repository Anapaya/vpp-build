/*
 * VLIB API definitions 2020-01-07 14:20:12
 * Input file: tapv2.api
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
#warning no content included from tapv2.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_TAP_CREATE_V2, vl_api_tap_create_v2_t_handler)
vl_msg_id(VL_API_TAP_CREATE_V2_REPLY, vl_api_tap_create_v2_reply_t_handler)
vl_msg_id(VL_API_TAP_DELETE_V2, vl_api_tap_delete_v2_t_handler)
vl_msg_id(VL_API_TAP_DELETE_V2_REPLY, vl_api_tap_delete_v2_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAP_V2_DUMP, vl_api_sw_interface_tap_v2_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAP_V2_DETAILS, vl_api_sw_interface_tap_v2_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_tap_create_v2_t, 1)
vl_msg_name(vl_api_tap_create_v2_reply_t, 1)
vl_msg_name(vl_api_tap_delete_v2_t, 1)
vl_msg_name(vl_api_tap_delete_v2_reply_t, 1)
vl_msg_name(vl_api_sw_interface_tap_v2_dump_t, 1)
vl_msg_name(vl_api_sw_interface_tap_v2_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_tapv2 \
_(VL_API_TAP_CREATE_V2, tap_create_v2, 8fa99320) \
_(VL_API_TAP_CREATE_V2_REPLY, tap_create_v2_reply, fda5941f) \
_(VL_API_TAP_DELETE_V2, tap_delete_v2, 529cb13f) \
_(VL_API_TAP_DELETE_V2_REPLY, tap_delete_v2_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_TAP_V2_DUMP, sw_interface_tap_v2_dump, 51077d14) \
_(VL_API_SW_INTERFACE_TAP_V2_DETAILS, sw_interface_tap_v2_details, 5ee87a5f) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_tapv2_api
#define included_tapv2_api
#ifndef _vl_api_defined_tap_create_v2
#define _vl_api_defined_tap_create_v2
typedef VL_API_PACKED(struct _vl_api_tap_create_v2 {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 id;
    u8 use_random_mac;
    u8 mac_address[6];
    u16 tx_ring_sz;
    u16 rx_ring_sz;
    u8 host_namespace_set;
    u8 host_namespace[64];
    u8 host_mac_addr_set;
    u8 host_mac_addr[6];
    u8 host_if_name_set;
    u8 host_if_name[64];
    u8 host_bridge_set;
    u8 host_bridge[64];
    u8 host_ip4_addr_set;
    u8 host_ip4_addr[4];
    u8 host_ip4_prefix_len;
    u8 host_ip6_addr_set;
    u8 host_ip6_addr[16];
    u8 host_ip6_prefix_len;
    u8 host_ip4_gw_set;
    u8 host_ip4_gw[4];
    u8 host_ip6_gw_set;
    u8 host_ip6_gw[16];
    u8 host_mtu_set;
    u32 host_mtu_size;
    u8 tag[64];
    u32 tap_flags;
}) vl_api_tap_create_v2_t;
#endif

#ifndef _vl_api_defined_tap_create_v2_reply
#define _vl_api_defined_tap_create_v2_reply
typedef VL_API_PACKED(struct _vl_api_tap_create_v2_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_tap_create_v2_reply_t;
#endif

#ifndef _vl_api_defined_tap_delete_v2
#define _vl_api_defined_tap_delete_v2
typedef VL_API_PACKED(struct _vl_api_tap_delete_v2 {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_tap_delete_v2_t;
#endif

#ifndef _vl_api_defined_tap_delete_v2_reply
#define _vl_api_defined_tap_delete_v2_reply
typedef VL_API_PACKED(struct _vl_api_tap_delete_v2_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_tap_delete_v2_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_tap_v2_dump
#define _vl_api_defined_sw_interface_tap_v2_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_tap_v2_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sw_interface_tap_v2_dump_t;
#endif

#ifndef _vl_api_defined_sw_interface_tap_v2_details
#define _vl_api_defined_sw_interface_tap_v2_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_tap_v2_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 id;
    u8 dev_name[64];
    u16 tx_ring_sz;
    u16 rx_ring_sz;
    u8 host_mac_addr[6];
    u8 host_if_name[64];
    u8 host_namespace[64];
    u8 host_bridge[64];
    u8 host_ip4_addr[4];
    u8 host_ip4_prefix_len;
    u8 host_ip6_addr[16];
    u8 host_ip6_prefix_len;
    u32 host_mtu_size;
    u32 tap_flags;
}) vl_api_sw_interface_tap_v2_details_t;
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

#ifndef _vl_api_defined_tap_create_v2_t_print
#define _vl_api_defined_tap_create_v2_t_print
static inline void *vl_api_tap_create_v2_t_print (vl_api_tap_create_v2_t *a,void *handle)
{
    vl_print(handle, "vl_api_tap_create_v2_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "use_random_mac: %u\n", a->use_random_mac);
    vl_print(handle, "tx_ring_sz: %u\n", a->tx_ring_sz);
    vl_print(handle, "rx_ring_sz: %u\n", a->rx_ring_sz);
    vl_print(handle, "host_namespace_set: %u\n", a->host_namespace_set);
    vl_print(handle, "host_mac_addr_set: %u\n", a->host_mac_addr_set);
    vl_print(handle, "host_if_name_set: %u\n", a->host_if_name_set);
    vl_print(handle, "host_bridge_set: %u\n", a->host_bridge_set);
    vl_print(handle, "host_ip4_addr_set: %u\n", a->host_ip4_addr_set);
    vl_print(handle, "host_ip4_prefix_len: %u\n", a->host_ip4_prefix_len);
    vl_print(handle, "host_ip6_addr_set: %u\n", a->host_ip6_addr_set);
    vl_print(handle, "host_ip6_prefix_len: %u\n", a->host_ip6_prefix_len);
    vl_print(handle, "host_ip4_gw_set: %u\n", a->host_ip4_gw_set);
    vl_print(handle, "host_ip6_gw_set: %u\n", a->host_ip6_gw_set);
    vl_print(handle, "host_mtu_set: %u\n", a->host_mtu_set);
    vl_print(handle, "host_mtu_size: %u\n", a->host_mtu_size);
    vl_print(handle, "tap_flags: %u\n", a->tap_flags);
    return handle;
}

#endif

#ifndef _vl_api_defined_tap_create_v2_reply_t_print
#define _vl_api_defined_tap_create_v2_reply_t_print
static inline void *vl_api_tap_create_v2_reply_t_print (vl_api_tap_create_v2_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_tap_create_v2_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_tap_delete_v2_t_print
#define _vl_api_defined_tap_delete_v2_t_print
static inline void *vl_api_tap_delete_v2_t_print (vl_api_tap_delete_v2_t *a,void *handle)
{
    vl_print(handle, "vl_api_tap_delete_v2_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_tap_delete_v2_reply_t_print
#define _vl_api_defined_tap_delete_v2_reply_t_print
static inline void *vl_api_tap_delete_v2_reply_t_print (vl_api_tap_delete_v2_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_tap_delete_v2_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_tap_v2_dump_t_print
#define _vl_api_defined_sw_interface_tap_v2_dump_t_print
static inline void *vl_api_sw_interface_tap_v2_dump_t_print (vl_api_sw_interface_tap_v2_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_tap_v2_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_tap_v2_details_t_print
#define _vl_api_defined_sw_interface_tap_v2_details_t_print
static inline void *vl_api_sw_interface_tap_v2_details_t_print (vl_api_sw_interface_tap_v2_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_tap_v2_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "tx_ring_sz: %u\n", a->tx_ring_sz);
    vl_print(handle, "rx_ring_sz: %u\n", a->rx_ring_sz);
    vl_print(handle, "host_ip4_prefix_len: %u\n", a->host_ip4_prefix_len);
    vl_print(handle, "host_ip6_prefix_len: %u\n", a->host_ip6_prefix_len);
    vl_print(handle, "host_mtu_size: %u\n", a->host_mtu_size);
    vl_print(handle, "tap_flags: %u\n", a->tap_flags);
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

#ifndef _vl_api_defined_tap_create_v2_t_endian
#define _vl_api_defined_tap_create_v2_t_endian
static inline void vl_api_tap_create_v2_t_endian (vl_api_tap_create_v2_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u32(a->id);
    /* a->use_random_mac = a->use_random_mac (no-op) */
    a->tx_ring_sz = clib_net_to_host_u16(a->tx_ring_sz);
    a->rx_ring_sz = clib_net_to_host_u16(a->rx_ring_sz);
    /* a->host_namespace_set = a->host_namespace_set (no-op) */
    /* a->host_mac_addr_set = a->host_mac_addr_set (no-op) */
    /* a->host_if_name_set = a->host_if_name_set (no-op) */
    /* a->host_bridge_set = a->host_bridge_set (no-op) */
    /* a->host_ip4_addr_set = a->host_ip4_addr_set (no-op) */
    /* a->host_ip4_prefix_len = a->host_ip4_prefix_len (no-op) */
    /* a->host_ip6_addr_set = a->host_ip6_addr_set (no-op) */
    /* a->host_ip6_prefix_len = a->host_ip6_prefix_len (no-op) */
    /* a->host_ip4_gw_set = a->host_ip4_gw_set (no-op) */
    /* a->host_ip6_gw_set = a->host_ip6_gw_set (no-op) */
    /* a->host_mtu_set = a->host_mtu_set (no-op) */
    a->host_mtu_size = clib_net_to_host_u32(a->host_mtu_size);
    a->tap_flags = clib_net_to_host_u32(a->tap_flags);
}

#endif

#ifndef _vl_api_defined_tap_create_v2_reply_t_endian
#define _vl_api_defined_tap_create_v2_reply_t_endian
static inline void vl_api_tap_create_v2_reply_t_endian (vl_api_tap_create_v2_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_tap_delete_v2_t_endian
#define _vl_api_defined_tap_delete_v2_t_endian
static inline void vl_api_tap_delete_v2_t_endian (vl_api_tap_delete_v2_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_tap_delete_v2_reply_t_endian
#define _vl_api_defined_tap_delete_v2_reply_t_endian
static inline void vl_api_tap_delete_v2_reply_t_endian (vl_api_tap_delete_v2_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_tap_v2_dump_t_endian
#define _vl_api_defined_sw_interface_tap_v2_dump_t_endian
static inline void vl_api_sw_interface_tap_v2_dump_t_endian (vl_api_sw_interface_tap_v2_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sw_interface_tap_v2_details_t_endian
#define _vl_api_defined_sw_interface_tap_v2_details_t_endian
static inline void vl_api_sw_interface_tap_v2_details_t_endian (vl_api_sw_interface_tap_v2_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->id = clib_net_to_host_u32(a->id);
    a->tx_ring_sz = clib_net_to_host_u16(a->tx_ring_sz);
    a->rx_ring_sz = clib_net_to_host_u16(a->rx_ring_sz);
    /* a->host_ip4_prefix_len = a->host_ip4_prefix_len (no-op) */
    /* a->host_ip6_prefix_len = a->host_ip6_prefix_len (no-op) */
    a->host_mtu_size = clib_net_to_host_u32(a->host_mtu_size);
    a->tap_flags = clib_net_to_host_u32(a->tap_flags);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(tapv2.api, 2, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(tapv2.api, 0x25beb6c0)

#endif

