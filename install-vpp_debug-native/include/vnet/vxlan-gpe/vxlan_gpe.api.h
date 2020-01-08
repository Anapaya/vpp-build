/*
 * VLIB API definitions 2020-01-07 14:25:06
 * Input file: vxlan_gpe.api
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
#warning no content included from vxlan_gpe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VXLAN_GPE_ADD_DEL_TUNNEL, vl_api_vxlan_gpe_add_del_tunnel_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_ADD_DEL_TUNNEL_REPLY, vl_api_vxlan_gpe_add_del_tunnel_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_TUNNEL_DUMP, vl_api_vxlan_gpe_tunnel_dump_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_TUNNEL_DETAILS, vl_api_vxlan_gpe_tunnel_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VXLAN_GPE_BYPASS, vl_api_sw_interface_set_vxlan_gpe_bypass_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VXLAN_GPE_BYPASS_REPLY, vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_vxlan_gpe_add_del_tunnel_t, 1)
vl_msg_name(vl_api_vxlan_gpe_add_del_tunnel_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_tunnel_dump_t, 1)
vl_msg_name(vl_api_vxlan_gpe_tunnel_details_t, 1)
vl_msg_name(vl_api_sw_interface_set_vxlan_gpe_bypass_t, 1)
vl_msg_name(vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vxlan_gpe \
_(VL_API_VXLAN_GPE_ADD_DEL_TUNNEL, vxlan_gpe_add_del_tunnel, d15850ba) \
_(VL_API_VXLAN_GPE_ADD_DEL_TUNNEL_REPLY, vxlan_gpe_add_del_tunnel_reply, fda5941f) \
_(VL_API_VXLAN_GPE_TUNNEL_DUMP, vxlan_gpe_tunnel_dump, 529cb13f) \
_(VL_API_VXLAN_GPE_TUNNEL_DETAILS, vxlan_gpe_tunnel_details, 2673fbfa) \
_(VL_API_SW_INTERFACE_SET_VXLAN_GPE_BYPASS, sw_interface_set_vxlan_gpe_bypass, e74ca095) \
_(VL_API_SW_INTERFACE_SET_VXLAN_GPE_BYPASS_REPLY, sw_interface_set_vxlan_gpe_bypass_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_vxlan_gpe_api
#define included_vxlan_gpe_api
#ifndef _vl_api_defined_vxlan_gpe_add_del_tunnel
#define _vl_api_defined_vxlan_gpe_add_del_tunnel
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_add_del_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ipv6;
    u8 local[16];
    u8 remote[16];
    u32 mcast_sw_if_index;
    u32 encap_vrf_id;
    u32 decap_vrf_id;
    u8 protocol;
    u32 vni;
    u8 is_add;
}) vl_api_vxlan_gpe_add_del_tunnel_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_add_del_tunnel_reply
#define _vl_api_defined_vxlan_gpe_add_del_tunnel_reply
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_add_del_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_vxlan_gpe_add_del_tunnel_reply_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_tunnel_dump
#define _vl_api_defined_vxlan_gpe_tunnel_dump
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_vxlan_gpe_tunnel_dump_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_tunnel_details
#define _vl_api_defined_vxlan_gpe_tunnel_details
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 local[16];
    u8 remote[16];
    u32 vni;
    u8 protocol;
    u32 mcast_sw_if_index;
    u32 encap_vrf_id;
    u32 decap_vrf_id;
    u8 is_ipv6;
}) vl_api_vxlan_gpe_tunnel_details_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_vxlan_gpe_bypass
#define _vl_api_defined_sw_interface_set_vxlan_gpe_bypass
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_vxlan_gpe_bypass {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
    u8 enable;
}) vl_api_sw_interface_set_vxlan_gpe_bypass_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_reply
#define _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_vxlan_gpe_bypass_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t;
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

#ifndef _vl_api_defined_vxlan_gpe_add_del_tunnel_t_print
#define _vl_api_defined_vxlan_gpe_add_del_tunnel_t_print
static inline void *vl_api_vxlan_gpe_add_del_tunnel_t_print (vl_api_vxlan_gpe_add_del_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_add_del_tunnel_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "mcast_sw_if_index: %u\n", a->mcast_sw_if_index);
    vl_print(handle, "encap_vrf_id: %u\n", a->encap_vrf_id);
    vl_print(handle, "decap_vrf_id: %u\n", a->decap_vrf_id);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_add_del_tunnel_reply_t_print
#define _vl_api_defined_vxlan_gpe_add_del_tunnel_reply_t_print
static inline void *vl_api_vxlan_gpe_add_del_tunnel_reply_t_print (vl_api_vxlan_gpe_add_del_tunnel_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_add_del_tunnel_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_tunnel_dump_t_print
#define _vl_api_defined_vxlan_gpe_tunnel_dump_t_print
static inline void *vl_api_vxlan_gpe_tunnel_dump_t_print (vl_api_vxlan_gpe_tunnel_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_tunnel_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_tunnel_details_t_print
#define _vl_api_defined_vxlan_gpe_tunnel_details_t_print
static inline void *vl_api_vxlan_gpe_tunnel_details_t_print (vl_api_vxlan_gpe_tunnel_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_tunnel_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "mcast_sw_if_index: %u\n", a->mcast_sw_if_index);
    vl_print(handle, "encap_vrf_id: %u\n", a->encap_vrf_id);
    vl_print(handle, "decap_vrf_id: %u\n", a->decap_vrf_id);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_t_print
#define _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_t_print
static inline void *vl_api_sw_interface_set_vxlan_gpe_bypass_t_print (vl_api_sw_interface_set_vxlan_gpe_bypass_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_vxlan_gpe_bypass_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_reply_t_print
#define _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_reply_t_print
static inline void *vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t_print (vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t:\n");
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

#ifndef _vl_api_defined_vxlan_gpe_add_del_tunnel_t_endian
#define _vl_api_defined_vxlan_gpe_add_del_tunnel_t_endian
static inline void vl_api_vxlan_gpe_add_del_tunnel_t_endian (vl_api_vxlan_gpe_add_del_tunnel_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->mcast_sw_if_index = clib_net_to_host_u32(a->mcast_sw_if_index);
    a->encap_vrf_id = clib_net_to_host_u32(a->encap_vrf_id);
    a->decap_vrf_id = clib_net_to_host_u32(a->decap_vrf_id);
    /* a->protocol = a->protocol (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_add_del_tunnel_reply_t_endian
#define _vl_api_defined_vxlan_gpe_add_del_tunnel_reply_t_endian
static inline void vl_api_vxlan_gpe_add_del_tunnel_reply_t_endian (vl_api_vxlan_gpe_add_del_tunnel_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_tunnel_dump_t_endian
#define _vl_api_defined_vxlan_gpe_tunnel_dump_t_endian
static inline void vl_api_vxlan_gpe_tunnel_dump_t_endian (vl_api_vxlan_gpe_tunnel_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_tunnel_details_t_endian
#define _vl_api_defined_vxlan_gpe_tunnel_details_t_endian
static inline void vl_api_vxlan_gpe_tunnel_details_t_endian (vl_api_vxlan_gpe_tunnel_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->protocol = a->protocol (no-op) */
    a->mcast_sw_if_index = clib_net_to_host_u32(a->mcast_sw_if_index);
    a->encap_vrf_id = clib_net_to_host_u32(a->encap_vrf_id);
    a->decap_vrf_id = clib_net_to_host_u32(a->decap_vrf_id);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_t_endian
#define _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_t_endian
static inline void vl_api_sw_interface_set_vxlan_gpe_bypass_t_endian (vl_api_sw_interface_set_vxlan_gpe_bypass_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_reply_t_endian
#define _vl_api_defined_sw_interface_set_vxlan_gpe_bypass_reply_t_endian
static inline void vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t_endian (vl_api_sw_interface_set_vxlan_gpe_bypass_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vxlan_gpe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vxlan_gpe.api, 0xa49006ff)

#endif

