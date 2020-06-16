/*
 * VLIB API definitions 2020-06-13 05:56:04
 * Input file: p2p_ethernet.api
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
#warning no content included from p2p_ethernet.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_P2P_ETHERNET_ADD, vl_api_p2p_ethernet_add_t_handler)
vl_msg_id(VL_API_P2P_ETHERNET_ADD_REPLY, vl_api_p2p_ethernet_add_reply_t_handler)
vl_msg_id(VL_API_P2P_ETHERNET_DEL, vl_api_p2p_ethernet_del_t_handler)
vl_msg_id(VL_API_P2P_ETHERNET_DEL_REPLY, vl_api_p2p_ethernet_del_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_p2p_ethernet_add_t, 1)
vl_msg_name(vl_api_p2p_ethernet_add_reply_t, 1)
vl_msg_name(vl_api_p2p_ethernet_del_t, 1)
vl_msg_name(vl_api_p2p_ethernet_del_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_p2p_ethernet \
_(VL_API_P2P_ETHERNET_ADD, p2p_ethernet_add, eeb8e717) \
_(VL_API_P2P_ETHERNET_ADD_REPLY, p2p_ethernet_add_reply, 5383d31f) \
_(VL_API_P2P_ETHERNET_DEL, p2p_ethernet_del, 0b62c386) \
_(VL_API_P2P_ETHERNET_DEL_REPLY, p2p_ethernet_del_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_p2p_ethernet_api
#define included_p2p_ethernet_api
#ifndef _vl_api_defined_interface_index
#define _vl_api_defined_interface_index
typedef u32 vl_api_interface_index_t;
#endif

#ifndef _vl_api_defined_mac_address
#define _vl_api_defined_mac_address
typedef u8 vl_api_mac_address_t[6];
#endif

#ifndef _vl_api_defined_p2p_ethernet_add
#define _vl_api_defined_p2p_ethernet_add
typedef VL_API_PACKED(struct _vl_api_p2p_ethernet_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t parent_if_index;
    u32 subif_id;
    vl_api_mac_address_t remote_mac;
}) vl_api_p2p_ethernet_add_t;
#endif

#ifndef _vl_api_defined_p2p_ethernet_add_reply
#define _vl_api_defined_p2p_ethernet_add_reply
typedef VL_API_PACKED(struct _vl_api_p2p_ethernet_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
}) vl_api_p2p_ethernet_add_reply_t;
#endif

#ifndef _vl_api_defined_p2p_ethernet_del
#define _vl_api_defined_p2p_ethernet_del
typedef VL_API_PACKED(struct _vl_api_p2p_ethernet_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t parent_if_index;
    vl_api_mac_address_t remote_mac;
}) vl_api_p2p_ethernet_del_t;
#endif

#ifndef _vl_api_defined_p2p_ethernet_del_reply
#define _vl_api_defined_p2p_ethernet_del_reply
typedef VL_API_PACKED(struct _vl_api_p2p_ethernet_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_p2p_ethernet_del_reply_t;
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

/***** manual: vl_api_interface_index_t_print  *****/

/***** manual: vl_api_mac_address_t_print  *****/

#ifndef _vl_api_defined_p2p_ethernet_add_t_print
#define _vl_api_defined_p2p_ethernet_add_t_print
static inline void *vl_api_p2p_ethernet_add_t_print (vl_api_p2p_ethernet_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_p2p_ethernet_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "subif_id: %u\n", a->subif_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_p2p_ethernet_add_reply_t_print
#define _vl_api_defined_p2p_ethernet_add_reply_t_print
static inline void *vl_api_p2p_ethernet_add_reply_t_print (vl_api_p2p_ethernet_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_p2p_ethernet_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_p2p_ethernet_del_t_print
#define _vl_api_defined_p2p_ethernet_del_t_print
static inline void *vl_api_p2p_ethernet_del_t_print (vl_api_p2p_ethernet_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_p2p_ethernet_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_p2p_ethernet_del_reply_t_print
#define _vl_api_defined_p2p_ethernet_del_reply_t_print
static inline void *vl_api_p2p_ethernet_del_reply_t_print (vl_api_p2p_ethernet_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_p2p_ethernet_del_reply_t:\n");
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

/***** manual: vl_api_interface_index_t_endian  *****/

/***** manual: vl_api_mac_address_t_endian  *****/

#ifndef _vl_api_defined_p2p_ethernet_add_t_endian
#define _vl_api_defined_p2p_ethernet_add_t_endian
static inline void vl_api_p2p_ethernet_add_t_endian (vl_api_p2p_ethernet_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->parent_if_index = a->parent_if_index (no-op) */
    a->subif_id = clib_net_to_host_u32(a->subif_id);
    /* a->remote_mac = a->remote_mac (no-op) */
}

#endif

#ifndef _vl_api_defined_p2p_ethernet_add_reply_t_endian
#define _vl_api_defined_p2p_ethernet_add_reply_t_endian
static inline void vl_api_p2p_ethernet_add_reply_t_endian (vl_api_p2p_ethernet_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_p2p_ethernet_del_t_endian
#define _vl_api_defined_p2p_ethernet_del_t_endian
static inline void vl_api_p2p_ethernet_del_t_endian (vl_api_p2p_ethernet_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->parent_if_index = a->parent_if_index (no-op) */
    /* a->remote_mac = a->remote_mac (no-op) */
}

#endif

#ifndef _vl_api_defined_p2p_ethernet_del_reply_t_endian
#define _vl_api_defined_p2p_ethernet_del_reply_t_endian
static inline void vl_api_p2p_ethernet_del_reply_t_endian (vl_api_p2p_ethernet_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(p2p_ethernet.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(p2p_ethernet.api, 0x12e9dc04)

#endif

