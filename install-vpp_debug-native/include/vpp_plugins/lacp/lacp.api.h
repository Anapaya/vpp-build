/*
 * VLIB API definitions 2020-01-07 14:25:43
 * Input file: lacp.api
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
#warning no content included from lacp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SW_INTERFACE_LACP_DUMP, vl_api_sw_interface_lacp_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_LACP_DETAILS, vl_api_sw_interface_lacp_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sw_interface_lacp_dump_t, 1)
vl_msg_name(vl_api_sw_interface_lacp_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lacp \
_(VL_API_SW_INTERFACE_LACP_DUMP, sw_interface_lacp_dump, 51077d14) \
_(VL_API_SW_INTERFACE_LACP_DETAILS, sw_interface_lacp_details, 8a14b95e) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_lacp_api
#define included_lacp_api
#ifndef _vl_api_defined_sw_interface_lacp_dump
#define _vl_api_defined_sw_interface_lacp_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_lacp_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sw_interface_lacp_dump_t;
#endif

#ifndef _vl_api_defined_sw_interface_lacp_details
#define _vl_api_defined_sw_interface_lacp_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_lacp_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 interface_name[64];
    u32 rx_state;
    u32 tx_state;
    u32 mux_state;
    u32 ptx_state;
    u8 bond_interface_name[64];
    u16 actor_system_priority;
    u8 actor_system[6];
    u16 actor_key;
    u16 actor_port_priority;
    u16 actor_port_number;
    u8 actor_state;
    u16 partner_system_priority;
    u8 partner_system[6];
    u16 partner_key;
    u16 partner_port_priority;
    u16 partner_port_number;
    u8 partner_state;
}) vl_api_sw_interface_lacp_details_t;
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

#ifndef _vl_api_defined_sw_interface_lacp_dump_t_print
#define _vl_api_defined_sw_interface_lacp_dump_t_print
static inline void *vl_api_sw_interface_lacp_dump_t_print (vl_api_sw_interface_lacp_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_lacp_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_lacp_details_t_print
#define _vl_api_defined_sw_interface_lacp_details_t_print
static inline void *vl_api_sw_interface_lacp_details_t_print (vl_api_sw_interface_lacp_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_lacp_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "rx_state: %u\n", a->rx_state);
    vl_print(handle, "tx_state: %u\n", a->tx_state);
    vl_print(handle, "mux_state: %u\n", a->mux_state);
    vl_print(handle, "ptx_state: %u\n", a->ptx_state);
    vl_print(handle, "actor_system_priority: %u\n", a->actor_system_priority);
    vl_print(handle, "actor_key: %u\n", a->actor_key);
    vl_print(handle, "actor_port_priority: %u\n", a->actor_port_priority);
    vl_print(handle, "actor_port_number: %u\n", a->actor_port_number);
    vl_print(handle, "actor_state: %u\n", a->actor_state);
    vl_print(handle, "partner_system_priority: %u\n", a->partner_system_priority);
    vl_print(handle, "partner_key: %u\n", a->partner_key);
    vl_print(handle, "partner_port_priority: %u\n", a->partner_port_priority);
    vl_print(handle, "partner_port_number: %u\n", a->partner_port_number);
    vl_print(handle, "partner_state: %u\n", a->partner_state);
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

#ifndef _vl_api_defined_sw_interface_lacp_dump_t_endian
#define _vl_api_defined_sw_interface_lacp_dump_t_endian
static inline void vl_api_sw_interface_lacp_dump_t_endian (vl_api_sw_interface_lacp_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sw_interface_lacp_details_t_endian
#define _vl_api_defined_sw_interface_lacp_details_t_endian
static inline void vl_api_sw_interface_lacp_details_t_endian (vl_api_sw_interface_lacp_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->rx_state = clib_net_to_host_u32(a->rx_state);
    a->tx_state = clib_net_to_host_u32(a->tx_state);
    a->mux_state = clib_net_to_host_u32(a->mux_state);
    a->ptx_state = clib_net_to_host_u32(a->ptx_state);
    a->actor_system_priority = clib_net_to_host_u16(a->actor_system_priority);
    a->actor_key = clib_net_to_host_u16(a->actor_key);
    a->actor_port_priority = clib_net_to_host_u16(a->actor_port_priority);
    a->actor_port_number = clib_net_to_host_u16(a->actor_port_number);
    /* a->actor_state = a->actor_state (no-op) */
    a->partner_system_priority = clib_net_to_host_u16(a->partner_system_priority);
    a->partner_key = clib_net_to_host_u16(a->partner_key);
    a->partner_port_priority = clib_net_to_host_u16(a->partner_port_priority);
    a->partner_port_number = clib_net_to_host_u16(a->partner_port_number);
    /* a->partner_state = a->partner_state (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(lacp.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lacp.api, 0xec776e02)

#endif

