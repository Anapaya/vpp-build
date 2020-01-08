/*
 * VLIB API definitions 2020-01-07 14:20:10
 * Input file: interface.api
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
#warning no content included from interface.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SW_INTERFACE_SET_FLAGS, vl_api_sw_interface_set_flags_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_FLAGS_REPLY, vl_api_sw_interface_set_flags_reply_t_handler)
vl_msg_id(VL_API_HW_INTERFACE_SET_MTU, vl_api_hw_interface_set_mtu_t_handler)
vl_msg_id(VL_API_HW_INTERFACE_SET_MTU_REPLY, vl_api_hw_interface_set_mtu_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MTU, vl_api_sw_interface_set_mtu_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MTU_REPLY, vl_api_sw_interface_set_mtu_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST, vl_api_sw_interface_set_ip_directed_broadcast_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST_REPLY, vl_api_sw_interface_set_ip_directed_broadcast_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_EVENT, vl_api_sw_interface_event_t_handler)
vl_msg_id(VL_API_WANT_INTERFACE_EVENTS, vl_api_want_interface_events_t_handler)
vl_msg_id(VL_API_WANT_INTERFACE_EVENTS_REPLY, vl_api_want_interface_events_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_DETAILS, vl_api_sw_interface_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_DUMP, vl_api_sw_interface_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS, vl_api_sw_interface_add_del_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS_REPLY, vl_api_sw_interface_add_del_address_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_TABLE, vl_api_sw_interface_set_table_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_TABLE_REPLY, vl_api_sw_interface_set_table_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_TABLE, vl_api_sw_interface_get_table_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_TABLE_REPLY, vl_api_sw_interface_get_table_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_UNNUMBERED, vl_api_sw_interface_set_unnumbered_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_UNNUMBERED_REPLY, vl_api_sw_interface_set_unnumbered_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_CLEAR_STATS, vl_api_sw_interface_clear_stats_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_CLEAR_STATS_REPLY, vl_api_sw_interface_clear_stats_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAG_ADD_DEL, vl_api_sw_interface_tag_add_del_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_TAG_ADD_DEL_REPLY, vl_api_sw_interface_tag_add_del_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MAC_ADDRESS, vl_api_sw_interface_set_mac_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_MAC_ADDRESS_REPLY, vl_api_sw_interface_set_mac_address_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_MAC_ADDRESS, vl_api_sw_interface_get_mac_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_GET_MAC_ADDRESS_REPLY, vl_api_sw_interface_get_mac_address_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_MODE, vl_api_sw_interface_set_rx_mode_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_MODE_REPLY, vl_api_sw_interface_set_rx_mode_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_PLACEMENT, vl_api_sw_interface_set_rx_placement_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_RX_PLACEMENT_REPLY, vl_api_sw_interface_set_rx_placement_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_RX_PLACEMENT_DUMP, vl_api_sw_interface_rx_placement_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_RX_PLACEMENT_DETAILS, vl_api_sw_interface_rx_placement_details_t_handler)
vl_msg_id(VL_API_INTERFACE_NAME_RENUMBER, vl_api_interface_name_renumber_t_handler)
vl_msg_id(VL_API_INTERFACE_NAME_RENUMBER_REPLY, vl_api_interface_name_renumber_reply_t_handler)
vl_msg_id(VL_API_CREATE_SUBIF, vl_api_create_subif_t_handler)
vl_msg_id(VL_API_CREATE_SUBIF_REPLY, vl_api_create_subif_reply_t_handler)
vl_msg_id(VL_API_CREATE_VLAN_SUBIF, vl_api_create_vlan_subif_t_handler)
vl_msg_id(VL_API_CREATE_VLAN_SUBIF_REPLY, vl_api_create_vlan_subif_reply_t_handler)
vl_msg_id(VL_API_DELETE_SUBIF, vl_api_delete_subif_t_handler)
vl_msg_id(VL_API_DELETE_SUBIF_REPLY, vl_api_delete_subif_reply_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK, vl_api_create_loopback_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK_REPLY, vl_api_create_loopback_reply_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK_INSTANCE, vl_api_create_loopback_instance_t_handler)
vl_msg_id(VL_API_CREATE_LOOPBACK_INSTANCE_REPLY, vl_api_create_loopback_instance_reply_t_handler)
vl_msg_id(VL_API_DELETE_LOOPBACK, vl_api_delete_loopback_t_handler)
vl_msg_id(VL_API_DELETE_LOOPBACK_REPLY, vl_api_delete_loopback_reply_t_handler)
vl_msg_id(VL_API_COLLECT_DETAILED_INTERFACE_STATS, vl_api_collect_detailed_interface_stats_t_handler)
vl_msg_id(VL_API_COLLECT_DETAILED_INTERFACE_STATS_REPLY, vl_api_collect_detailed_interface_stats_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sw_interface_set_flags_t, 1)
vl_msg_name(vl_api_sw_interface_set_flags_reply_t, 1)
vl_msg_name(vl_api_hw_interface_set_mtu_t, 1)
vl_msg_name(vl_api_hw_interface_set_mtu_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_mtu_t, 1)
vl_msg_name(vl_api_sw_interface_set_mtu_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_ip_directed_broadcast_t, 1)
vl_msg_name(vl_api_sw_interface_set_ip_directed_broadcast_reply_t, 1)
vl_msg_name(vl_api_sw_interface_event_t, 1)
vl_msg_name(vl_api_want_interface_events_t, 1)
vl_msg_name(vl_api_want_interface_events_reply_t, 1)
vl_msg_name(vl_api_sw_interface_details_t, 1)
vl_msg_name(vl_api_sw_interface_dump_t, 1)
vl_msg_name(vl_api_sw_interface_add_del_address_t, 1)
vl_msg_name(vl_api_sw_interface_add_del_address_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_table_t, 1)
vl_msg_name(vl_api_sw_interface_set_table_reply_t, 1)
vl_msg_name(vl_api_sw_interface_get_table_t, 1)
vl_msg_name(vl_api_sw_interface_get_table_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_unnumbered_t, 1)
vl_msg_name(vl_api_sw_interface_set_unnumbered_reply_t, 1)
vl_msg_name(vl_api_sw_interface_clear_stats_t, 1)
vl_msg_name(vl_api_sw_interface_clear_stats_reply_t, 1)
vl_msg_name(vl_api_sw_interface_tag_add_del_t, 1)
vl_msg_name(vl_api_sw_interface_tag_add_del_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_mac_address_t, 1)
vl_msg_name(vl_api_sw_interface_set_mac_address_reply_t, 1)
vl_msg_name(vl_api_sw_interface_get_mac_address_t, 1)
vl_msg_name(vl_api_sw_interface_get_mac_address_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_mode_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_mode_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_placement_t, 1)
vl_msg_name(vl_api_sw_interface_set_rx_placement_reply_t, 1)
vl_msg_name(vl_api_sw_interface_rx_placement_dump_t, 1)
vl_msg_name(vl_api_sw_interface_rx_placement_details_t, 1)
vl_msg_name(vl_api_interface_name_renumber_t, 1)
vl_msg_name(vl_api_interface_name_renumber_reply_t, 1)
vl_msg_name(vl_api_create_subif_t, 1)
vl_msg_name(vl_api_create_subif_reply_t, 1)
vl_msg_name(vl_api_create_vlan_subif_t, 1)
vl_msg_name(vl_api_create_vlan_subif_reply_t, 1)
vl_msg_name(vl_api_delete_subif_t, 1)
vl_msg_name(vl_api_delete_subif_reply_t, 1)
vl_msg_name(vl_api_create_loopback_t, 1)
vl_msg_name(vl_api_create_loopback_reply_t, 1)
vl_msg_name(vl_api_create_loopback_instance_t, 1)
vl_msg_name(vl_api_create_loopback_instance_reply_t, 1)
vl_msg_name(vl_api_delete_loopback_t, 1)
vl_msg_name(vl_api_delete_loopback_reply_t, 1)
vl_msg_name(vl_api_collect_detailed_interface_stats_t, 1)
vl_msg_name(vl_api_collect_detailed_interface_stats_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_interface \
_(VL_API_SW_INTERFACE_SET_FLAGS, sw_interface_set_flags, 555485f5) \
_(VL_API_SW_INTERFACE_SET_FLAGS_REPLY, sw_interface_set_flags_reply, e8d4e804) \
_(VL_API_HW_INTERFACE_SET_MTU, hw_interface_set_mtu, 132da1e7) \
_(VL_API_HW_INTERFACE_SET_MTU_REPLY, hw_interface_set_mtu_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_MTU, sw_interface_set_mtu, d0008db8) \
_(VL_API_SW_INTERFACE_SET_MTU_REPLY, sw_interface_set_mtu_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST, sw_interface_set_ip_directed_broadcast, a36fadc0) \
_(VL_API_SW_INTERFACE_SET_IP_DIRECTED_BROADCAST_REPLY, sw_interface_set_ip_directed_broadcast_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_EVENT, sw_interface_event, bf9938e4) \
_(VL_API_WANT_INTERFACE_EVENTS, want_interface_events, 476f5a08) \
_(VL_API_WANT_INTERFACE_EVENTS_REPLY, want_interface_events_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_DETAILS, sw_interface_details, e4ee7eb6) \
_(VL_API_SW_INTERFACE_DUMP, sw_interface_dump, 052753c5) \
_(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS, sw_interface_add_del_address, 7b583179) \
_(VL_API_SW_INTERFACE_ADD_DEL_ADDRESS_REPLY, sw_interface_add_del_address_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_TABLE, sw_interface_set_table, acb25d89) \
_(VL_API_SW_INTERFACE_SET_TABLE_REPLY, sw_interface_set_table_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_GET_TABLE, sw_interface_get_table, 6b7bcd0a) \
_(VL_API_SW_INTERFACE_GET_TABLE_REPLY, sw_interface_get_table_reply, a6eb0109) \
_(VL_API_SW_INTERFACE_SET_UNNUMBERED, sw_interface_set_unnumbered, a2c1bbda) \
_(VL_API_SW_INTERFACE_SET_UNNUMBERED_REPLY, sw_interface_set_unnumbered_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_CLEAR_STATS, sw_interface_clear_stats, 529cb13f) \
_(VL_API_SW_INTERFACE_CLEAR_STATS_REPLY, sw_interface_clear_stats_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_TAG_ADD_DEL, sw_interface_tag_add_del, 14cc636c) \
_(VL_API_SW_INTERFACE_TAG_ADD_DEL_REPLY, sw_interface_tag_add_del_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_MAC_ADDRESS, sw_interface_set_mac_address, eed5dfca) \
_(VL_API_SW_INTERFACE_SET_MAC_ADDRESS_REPLY, sw_interface_set_mac_address_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_GET_MAC_ADDRESS, sw_interface_get_mac_address, 529cb13f) \
_(VL_API_SW_INTERFACE_GET_MAC_ADDRESS_REPLY, sw_interface_get_mac_address_reply, 8ea538d3) \
_(VL_API_SW_INTERFACE_SET_RX_MODE, sw_interface_set_rx_mode, 2a1cc58c) \
_(VL_API_SW_INTERFACE_SET_RX_MODE_REPLY, sw_interface_set_rx_mode_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_RX_PLACEMENT, sw_interface_set_rx_placement, 4ef4377d) \
_(VL_API_SW_INTERFACE_SET_RX_PLACEMENT_REPLY, sw_interface_set_rx_placement_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_RX_PLACEMENT_DUMP, sw_interface_rx_placement_dump, 529cb13f) \
_(VL_API_SW_INTERFACE_RX_PLACEMENT_DETAILS, sw_interface_rx_placement_details, 0e9e33f4) \
_(VL_API_INTERFACE_NAME_RENUMBER, interface_name_renumber, 39194269) \
_(VL_API_INTERFACE_NAME_RENUMBER_REPLY, interface_name_renumber_reply, e8d4e804) \
_(VL_API_CREATE_SUBIF, create_subif, 86cfe408) \
_(VL_API_CREATE_SUBIF_REPLY, create_subif_reply, fda5941f) \
_(VL_API_CREATE_VLAN_SUBIF, create_vlan_subif, 70cadeda) \
_(VL_API_CREATE_VLAN_SUBIF_REPLY, create_vlan_subif_reply, fda5941f) \
_(VL_API_DELETE_SUBIF, delete_subif, 529cb13f) \
_(VL_API_DELETE_SUBIF_REPLY, delete_subif_reply, e8d4e804) \
_(VL_API_CREATE_LOOPBACK, create_loopback, 3b54129c) \
_(VL_API_CREATE_LOOPBACK_REPLY, create_loopback_reply, fda5941f) \
_(VL_API_CREATE_LOOPBACK_INSTANCE, create_loopback_instance, 7bbd53b6) \
_(VL_API_CREATE_LOOPBACK_INSTANCE_REPLY, create_loopback_instance_reply, fda5941f) \
_(VL_API_DELETE_LOOPBACK, delete_loopback, 529cb13f) \
_(VL_API_DELETE_LOOPBACK_REPLY, delete_loopback_reply, e8d4e804) \
_(VL_API_COLLECT_DETAILED_INTERFACE_STATS, collect_detailed_interface_stats, 69d24598) \
_(VL_API_COLLECT_DETAILED_INTERFACE_STATS_REPLY, collect_detailed_interface_stats_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_interface_api
#define included_interface_api
#ifndef _vl_api_defined_interface_index
#define _vl_api_defined_interface_index
typedef u32 vl_api_interface_index_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_flags
#define _vl_api_defined_sw_interface_set_flags
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 admin_up_down;
}) vl_api_sw_interface_set_flags_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_flags_reply
#define _vl_api_defined_sw_interface_set_flags_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_flags_reply_t;
#endif

#ifndef _vl_api_defined_hw_interface_set_mtu
#define _vl_api_defined_hw_interface_set_mtu
typedef VL_API_PACKED(struct _vl_api_hw_interface_set_mtu {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u16 mtu;
}) vl_api_hw_interface_set_mtu_t;
#endif

#ifndef _vl_api_defined_hw_interface_set_mtu_reply
#define _vl_api_defined_hw_interface_set_mtu_reply
typedef VL_API_PACKED(struct _vl_api_hw_interface_set_mtu_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_hw_interface_set_mtu_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_mtu
#define _vl_api_defined_sw_interface_set_mtu
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_mtu {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 mtu[4];
}) vl_api_sw_interface_set_mtu_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_mtu_reply
#define _vl_api_defined_sw_interface_set_mtu_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_mtu_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_mtu_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_ip_directed_broadcast
#define _vl_api_defined_sw_interface_set_ip_directed_broadcast
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_ip_directed_broadcast {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable;
}) vl_api_sw_interface_set_ip_directed_broadcast_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_ip_directed_broadcast_reply
#define _vl_api_defined_sw_interface_set_ip_directed_broadcast_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_ip_directed_broadcast_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_ip_directed_broadcast_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_event
#define _vl_api_defined_sw_interface_event
typedef VL_API_PACKED(struct _vl_api_sw_interface_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 sw_if_index;
    u8 admin_up_down;
    u8 link_up_down;
    u8 deleted;
}) vl_api_sw_interface_event_t;
#endif

#ifndef _vl_api_defined_want_interface_events
#define _vl_api_defined_want_interface_events
typedef VL_API_PACKED(struct _vl_api_want_interface_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 enable_disable;
    u32 pid;
}) vl_api_want_interface_events_t;
#endif

#ifndef _vl_api_defined_want_interface_events_reply
#define _vl_api_defined_want_interface_events_reply
typedef VL_API_PACKED(struct _vl_api_want_interface_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_interface_events_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_details
#define _vl_api_defined_sw_interface_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 sup_sw_if_index;
    u32 l2_address_length;
    u8 l2_address[8];
    u8 interface_name[64];
    u8 admin_up_down;
    u8 link_up_down;
    u8 link_duplex;
    u32 link_speed;
    u16 link_mtu;
    u32 mtu[4];
    u32 sub_id;
    u8 sub_dot1ad;
    u8 sub_dot1ah;
    u8 sub_number_of_tags;
    u16 sub_outer_vlan_id;
    u16 sub_inner_vlan_id;
    u8 sub_exact_match;
    u8 sub_default;
    u8 sub_outer_vlan_id_any;
    u8 sub_inner_vlan_id_any;
    u32 vtr_op;
    u32 vtr_push_dot1q;
    u32 vtr_tag1;
    u32 vtr_tag2;
    u8 tag[64];
    u16 outer_tag;
    u8 b_dmac[6];
    u8 b_smac[6];
    u16 b_vlanid;
    u32 i_sid;
}) vl_api_sw_interface_details_t;
#endif

#ifndef _vl_api_defined_sw_interface_dump
#define _vl_api_defined_sw_interface_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    u8 name_filter_valid;
    u8 name_filter[49];
}) vl_api_sw_interface_dump_t;
#endif

#ifndef _vl_api_defined_sw_interface_add_del_address
#define _vl_api_defined_sw_interface_add_del_address
typedef VL_API_PACKED(struct _vl_api_sw_interface_add_del_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_add;
    u8 is_ipv6;
    u8 del_all;
    u8 address_length;
    u8 address[16];
}) vl_api_sw_interface_add_del_address_t;
#endif

#ifndef _vl_api_defined_sw_interface_add_del_address_reply
#define _vl_api_defined_sw_interface_add_del_address_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_add_del_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_add_del_address_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_table
#define _vl_api_defined_sw_interface_set_table
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
    u32 vrf_id;
}) vl_api_sw_interface_set_table_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_table_reply
#define _vl_api_defined_sw_interface_set_table_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_table_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_get_table
#define _vl_api_defined_sw_interface_get_table
typedef VL_API_PACKED(struct _vl_api_sw_interface_get_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
}) vl_api_sw_interface_get_table_t;
#endif

#ifndef _vl_api_defined_sw_interface_get_table_reply
#define _vl_api_defined_sw_interface_get_table_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_get_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 vrf_id;
}) vl_api_sw_interface_get_table_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_unnumbered
#define _vl_api_defined_sw_interface_set_unnumbered
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_unnumbered {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 unnumbered_sw_if_index;
    u8 is_add;
}) vl_api_sw_interface_set_unnumbered_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_unnumbered_reply
#define _vl_api_defined_sw_interface_set_unnumbered_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_unnumbered_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_unnumbered_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_clear_stats
#define _vl_api_defined_sw_interface_clear_stats
typedef VL_API_PACKED(struct _vl_api_sw_interface_clear_stats {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_sw_interface_clear_stats_t;
#endif

#ifndef _vl_api_defined_sw_interface_clear_stats_reply
#define _vl_api_defined_sw_interface_clear_stats_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_clear_stats_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_clear_stats_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_tag_add_del
#define _vl_api_defined_sw_interface_tag_add_del
typedef VL_API_PACKED(struct _vl_api_sw_interface_tag_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 sw_if_index;
    u8 tag[64];
}) vl_api_sw_interface_tag_add_del_t;
#endif

#ifndef _vl_api_defined_sw_interface_tag_add_del_reply
#define _vl_api_defined_sw_interface_tag_add_del_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_tag_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_tag_add_del_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_mac_address
#define _vl_api_defined_sw_interface_set_mac_address
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_mac_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 mac_address[6];
}) vl_api_sw_interface_set_mac_address_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_mac_address_reply
#define _vl_api_defined_sw_interface_set_mac_address_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_mac_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_mac_address_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_get_mac_address
#define _vl_api_defined_sw_interface_get_mac_address
typedef VL_API_PACKED(struct _vl_api_sw_interface_get_mac_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_sw_interface_get_mac_address_t;
#endif

#ifndef _vl_api_defined_sw_interface_get_mac_address_reply
#define _vl_api_defined_sw_interface_get_mac_address_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_get_mac_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 mac_address[6];
}) vl_api_sw_interface_get_mac_address_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_rx_mode
#define _vl_api_defined_sw_interface_set_rx_mode
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_rx_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 queue_id_valid;
    u32 queue_id;
    u8 mode;
}) vl_api_sw_interface_set_rx_mode_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_rx_mode_reply
#define _vl_api_defined_sw_interface_set_rx_mode_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_rx_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_rx_mode_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_rx_placement
#define _vl_api_defined_sw_interface_set_rx_placement
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_rx_placement {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 queue_id;
    u32 worker_id;
    u8 is_main;
}) vl_api_sw_interface_set_rx_placement_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_rx_placement_reply
#define _vl_api_defined_sw_interface_set_rx_placement_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_rx_placement_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_rx_placement_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_rx_placement_dump
#define _vl_api_defined_sw_interface_rx_placement_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_rx_placement_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_sw_interface_rx_placement_dump_t;
#endif

#ifndef _vl_api_defined_sw_interface_rx_placement_details
#define _vl_api_defined_sw_interface_rx_placement_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_rx_placement_details {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 queue_id;
    u32 worker_id;
    u8 mode;
}) vl_api_sw_interface_rx_placement_details_t;
#endif

#ifndef _vl_api_defined_interface_name_renumber
#define _vl_api_defined_interface_name_renumber
typedef VL_API_PACKED(struct _vl_api_interface_name_renumber {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 new_show_dev_instance;
}) vl_api_interface_name_renumber_t;
#endif

#ifndef _vl_api_defined_interface_name_renumber_reply
#define _vl_api_defined_interface_name_renumber_reply
typedef VL_API_PACKED(struct _vl_api_interface_name_renumber_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_interface_name_renumber_reply_t;
#endif

#ifndef _vl_api_defined_create_subif
#define _vl_api_defined_create_subif
typedef VL_API_PACKED(struct _vl_api_create_subif {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 sub_id;
    u8 no_tags;
    u8 one_tag;
    u8 two_tags;
    u8 dot1ad;
    u8 exact_match;
    u8 default_sub;
    u8 outer_vlan_id_any;
    u8 inner_vlan_id_any;
    u16 outer_vlan_id;
    u16 inner_vlan_id;
}) vl_api_create_subif_t;
#endif

#ifndef _vl_api_defined_create_subif_reply
#define _vl_api_defined_create_subif_reply
typedef VL_API_PACKED(struct _vl_api_create_subif_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_create_subif_reply_t;
#endif

#ifndef _vl_api_defined_create_vlan_subif
#define _vl_api_defined_create_vlan_subif
typedef VL_API_PACKED(struct _vl_api_create_vlan_subif {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 vlan_id;
}) vl_api_create_vlan_subif_t;
#endif

#ifndef _vl_api_defined_create_vlan_subif_reply
#define _vl_api_defined_create_vlan_subif_reply
typedef VL_API_PACKED(struct _vl_api_create_vlan_subif_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_create_vlan_subif_reply_t;
#endif

#ifndef _vl_api_defined_delete_subif
#define _vl_api_defined_delete_subif
typedef VL_API_PACKED(struct _vl_api_delete_subif {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_delete_subif_t;
#endif

#ifndef _vl_api_defined_delete_subif_reply
#define _vl_api_defined_delete_subif_reply
typedef VL_API_PACKED(struct _vl_api_delete_subif_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_delete_subif_reply_t;
#endif

#ifndef _vl_api_defined_create_loopback
#define _vl_api_defined_create_loopback
typedef VL_API_PACKED(struct _vl_api_create_loopback {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 mac_address[6];
}) vl_api_create_loopback_t;
#endif

#ifndef _vl_api_defined_create_loopback_reply
#define _vl_api_defined_create_loopback_reply
typedef VL_API_PACKED(struct _vl_api_create_loopback_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_create_loopback_reply_t;
#endif

#ifndef _vl_api_defined_create_loopback_instance
#define _vl_api_defined_create_loopback_instance
typedef VL_API_PACKED(struct _vl_api_create_loopback_instance {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 mac_address[6];
    u8 is_specified;
    u32 user_instance;
}) vl_api_create_loopback_instance_t;
#endif

#ifndef _vl_api_defined_create_loopback_instance_reply
#define _vl_api_defined_create_loopback_instance_reply
typedef VL_API_PACKED(struct _vl_api_create_loopback_instance_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_create_loopback_instance_reply_t;
#endif

#ifndef _vl_api_defined_delete_loopback
#define _vl_api_defined_delete_loopback
typedef VL_API_PACKED(struct _vl_api_delete_loopback {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_delete_loopback_t;
#endif

#ifndef _vl_api_defined_delete_loopback_reply
#define _vl_api_defined_delete_loopback_reply
typedef VL_API_PACKED(struct _vl_api_delete_loopback_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_delete_loopback_reply_t;
#endif

#ifndef _vl_api_defined_collect_detailed_interface_stats
#define _vl_api_defined_collect_detailed_interface_stats
typedef VL_API_PACKED(struct _vl_api_collect_detailed_interface_stats {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable_disable;
}) vl_api_collect_detailed_interface_stats_t;
#endif

#ifndef _vl_api_defined_collect_detailed_interface_stats_reply
#define _vl_api_defined_collect_detailed_interface_stats_reply
typedef VL_API_PACKED(struct _vl_api_collect_detailed_interface_stats_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_collect_detailed_interface_stats_reply_t;
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

#ifndef _vl_api_defined_sw_interface_set_flags_t_print
#define _vl_api_defined_sw_interface_set_flags_t_print
static inline void *vl_api_sw_interface_set_flags_t_print (vl_api_sw_interface_set_flags_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_flags_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "admin_up_down: %u\n", a->admin_up_down);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_flags_reply_t_print
#define _vl_api_defined_sw_interface_set_flags_reply_t_print
static inline void *vl_api_sw_interface_set_flags_reply_t_print (vl_api_sw_interface_set_flags_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_flags_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_hw_interface_set_mtu_t_print
#define _vl_api_defined_hw_interface_set_mtu_t_print
static inline void *vl_api_hw_interface_set_mtu_t_print (vl_api_hw_interface_set_mtu_t *a,void *handle)
{
    vl_print(handle, "vl_api_hw_interface_set_mtu_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "mtu: %u\n", a->mtu);
    return handle;
}

#endif

#ifndef _vl_api_defined_hw_interface_set_mtu_reply_t_print
#define _vl_api_defined_hw_interface_set_mtu_reply_t_print
static inline void *vl_api_hw_interface_set_mtu_reply_t_print (vl_api_hw_interface_set_mtu_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_hw_interface_set_mtu_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mtu_t_print
#define _vl_api_defined_sw_interface_set_mtu_t_print
static inline void *vl_api_sw_interface_set_mtu_t_print (vl_api_sw_interface_set_mtu_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_mtu_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mtu_reply_t_print
#define _vl_api_defined_sw_interface_set_mtu_reply_t_print
static inline void *vl_api_sw_interface_set_mtu_reply_t_print (vl_api_sw_interface_set_mtu_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_mtu_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_ip_directed_broadcast_t_print
#define _vl_api_defined_sw_interface_set_ip_directed_broadcast_t_print
static inline void *vl_api_sw_interface_set_ip_directed_broadcast_t_print (vl_api_sw_interface_set_ip_directed_broadcast_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_ip_directed_broadcast_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_ip_directed_broadcast_reply_t_print
#define _vl_api_defined_sw_interface_set_ip_directed_broadcast_reply_t_print
static inline void *vl_api_sw_interface_set_ip_directed_broadcast_reply_t_print (vl_api_sw_interface_set_ip_directed_broadcast_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_ip_directed_broadcast_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_event_t_print
#define _vl_api_defined_sw_interface_event_t_print
static inline void *vl_api_sw_interface_event_t_print (vl_api_sw_interface_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "admin_up_down: %u\n", a->admin_up_down);
    vl_print(handle, "link_up_down: %u\n", a->link_up_down);
    vl_print(handle, "deleted: %u\n", a->deleted);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_interface_events_t_print
#define _vl_api_defined_want_interface_events_t_print
static inline void *vl_api_want_interface_events_t_print (vl_api_want_interface_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_interface_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_interface_events_reply_t_print
#define _vl_api_defined_want_interface_events_reply_t_print
static inline void *vl_api_want_interface_events_reply_t_print (vl_api_want_interface_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_interface_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_details_t_print
#define _vl_api_defined_sw_interface_details_t_print
static inline void *vl_api_sw_interface_details_t_print (vl_api_sw_interface_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "sup_sw_if_index: %u\n", a->sup_sw_if_index);
    vl_print(handle, "l2_address_length: %u\n", a->l2_address_length);
    vl_print(handle, "admin_up_down: %u\n", a->admin_up_down);
    vl_print(handle, "link_up_down: %u\n", a->link_up_down);
    vl_print(handle, "link_duplex: %u\n", a->link_duplex);
    vl_print(handle, "link_speed: %u\n", a->link_speed);
    vl_print(handle, "link_mtu: %u\n", a->link_mtu);
    vl_print(handle, "sub_id: %u\n", a->sub_id);
    vl_print(handle, "sub_dot1ad: %u\n", a->sub_dot1ad);
    vl_print(handle, "sub_dot1ah: %u\n", a->sub_dot1ah);
    vl_print(handle, "sub_number_of_tags: %u\n", a->sub_number_of_tags);
    vl_print(handle, "sub_outer_vlan_id: %u\n", a->sub_outer_vlan_id);
    vl_print(handle, "sub_inner_vlan_id: %u\n", a->sub_inner_vlan_id);
    vl_print(handle, "sub_exact_match: %u\n", a->sub_exact_match);
    vl_print(handle, "sub_default: %u\n", a->sub_default);
    vl_print(handle, "sub_outer_vlan_id_any: %u\n", a->sub_outer_vlan_id_any);
    vl_print(handle, "sub_inner_vlan_id_any: %u\n", a->sub_inner_vlan_id_any);
    vl_print(handle, "vtr_op: %u\n", a->vtr_op);
    vl_print(handle, "vtr_push_dot1q: %u\n", a->vtr_push_dot1q);
    vl_print(handle, "vtr_tag1: %u\n", a->vtr_tag1);
    vl_print(handle, "vtr_tag2: %u\n", a->vtr_tag2);
    vl_print(handle, "outer_tag: %u\n", a->outer_tag);
    vl_print(handle, "b_vlanid: %u\n", a->b_vlanid);
    vl_print(handle, "i_sid: %u\n", a->i_sid);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_dump_t_print
#define _vl_api_defined_sw_interface_dump_t_print
static inline void *vl_api_sw_interface_dump_t_print (vl_api_sw_interface_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "name_filter_valid: %u\n", a->name_filter_valid);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_add_del_address_t_print
#define _vl_api_defined_sw_interface_add_del_address_t_print
static inline void *vl_api_sw_interface_add_del_address_t_print (vl_api_sw_interface_add_del_address_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_add_del_address_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "del_all: %u\n", a->del_all);
    vl_print(handle, "address_length: %u\n", a->address_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_add_del_address_reply_t_print
#define _vl_api_defined_sw_interface_add_del_address_reply_t_print
static inline void *vl_api_sw_interface_add_del_address_reply_t_print (vl_api_sw_interface_add_del_address_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_add_del_address_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_table_t_print
#define _vl_api_defined_sw_interface_set_table_t_print
static inline void *vl_api_sw_interface_set_table_t_print (vl_api_sw_interface_set_table_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_table_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_table_reply_t_print
#define _vl_api_defined_sw_interface_set_table_reply_t_print
static inline void *vl_api_sw_interface_set_table_reply_t_print (vl_api_sw_interface_set_table_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_table_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_get_table_t_print
#define _vl_api_defined_sw_interface_get_table_t_print
static inline void *vl_api_sw_interface_get_table_t_print (vl_api_sw_interface_get_table_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_get_table_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_get_table_reply_t_print
#define _vl_api_defined_sw_interface_get_table_reply_t_print
static inline void *vl_api_sw_interface_get_table_reply_t_print (vl_api_sw_interface_get_table_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_get_table_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_unnumbered_t_print
#define _vl_api_defined_sw_interface_set_unnumbered_t_print
static inline void *vl_api_sw_interface_set_unnumbered_t_print (vl_api_sw_interface_set_unnumbered_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_unnumbered_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "unnumbered_sw_if_index: %u\n", a->unnumbered_sw_if_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_unnumbered_reply_t_print
#define _vl_api_defined_sw_interface_set_unnumbered_reply_t_print
static inline void *vl_api_sw_interface_set_unnumbered_reply_t_print (vl_api_sw_interface_set_unnumbered_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_unnumbered_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_clear_stats_t_print
#define _vl_api_defined_sw_interface_clear_stats_t_print
static inline void *vl_api_sw_interface_clear_stats_t_print (vl_api_sw_interface_clear_stats_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_clear_stats_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_clear_stats_reply_t_print
#define _vl_api_defined_sw_interface_clear_stats_reply_t_print
static inline void *vl_api_sw_interface_clear_stats_reply_t_print (vl_api_sw_interface_clear_stats_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_clear_stats_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_tag_add_del_t_print
#define _vl_api_defined_sw_interface_tag_add_del_t_print
static inline void *vl_api_sw_interface_tag_add_del_t_print (vl_api_sw_interface_tag_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_tag_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_tag_add_del_reply_t_print
#define _vl_api_defined_sw_interface_tag_add_del_reply_t_print
static inline void *vl_api_sw_interface_tag_add_del_reply_t_print (vl_api_sw_interface_tag_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_tag_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mac_address_t_print
#define _vl_api_defined_sw_interface_set_mac_address_t_print
static inline void *vl_api_sw_interface_set_mac_address_t_print (vl_api_sw_interface_set_mac_address_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_mac_address_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mac_address_reply_t_print
#define _vl_api_defined_sw_interface_set_mac_address_reply_t_print
static inline void *vl_api_sw_interface_set_mac_address_reply_t_print (vl_api_sw_interface_set_mac_address_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_mac_address_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_get_mac_address_t_print
#define _vl_api_defined_sw_interface_get_mac_address_t_print
static inline void *vl_api_sw_interface_get_mac_address_t_print (vl_api_sw_interface_get_mac_address_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_get_mac_address_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_get_mac_address_reply_t_print
#define _vl_api_defined_sw_interface_get_mac_address_reply_t_print
static inline void *vl_api_sw_interface_get_mac_address_reply_t_print (vl_api_sw_interface_get_mac_address_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_get_mac_address_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_mode_t_print
#define _vl_api_defined_sw_interface_set_rx_mode_t_print
static inline void *vl_api_sw_interface_set_rx_mode_t_print (vl_api_sw_interface_set_rx_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_rx_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "queue_id_valid: %u\n", a->queue_id_valid);
    vl_print(handle, "queue_id: %u\n", a->queue_id);
    vl_print(handle, "mode: %u\n", a->mode);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_mode_reply_t_print
#define _vl_api_defined_sw_interface_set_rx_mode_reply_t_print
static inline void *vl_api_sw_interface_set_rx_mode_reply_t_print (vl_api_sw_interface_set_rx_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_rx_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_placement_t_print
#define _vl_api_defined_sw_interface_set_rx_placement_t_print
static inline void *vl_api_sw_interface_set_rx_placement_t_print (vl_api_sw_interface_set_rx_placement_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_rx_placement_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "queue_id: %u\n", a->queue_id);
    vl_print(handle, "worker_id: %u\n", a->worker_id);
    vl_print(handle, "is_main: %u\n", a->is_main);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_placement_reply_t_print
#define _vl_api_defined_sw_interface_set_rx_placement_reply_t_print
static inline void *vl_api_sw_interface_set_rx_placement_reply_t_print (vl_api_sw_interface_set_rx_placement_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_rx_placement_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_rx_placement_dump_t_print
#define _vl_api_defined_sw_interface_rx_placement_dump_t_print
static inline void *vl_api_sw_interface_rx_placement_dump_t_print (vl_api_sw_interface_rx_placement_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_rx_placement_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_rx_placement_details_t_print
#define _vl_api_defined_sw_interface_rx_placement_details_t_print
static inline void *vl_api_sw_interface_rx_placement_details_t_print (vl_api_sw_interface_rx_placement_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_rx_placement_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "queue_id: %u\n", a->queue_id);
    vl_print(handle, "worker_id: %u\n", a->worker_id);
    vl_print(handle, "mode: %u\n", a->mode);
    return handle;
}

#endif

#ifndef _vl_api_defined_interface_name_renumber_t_print
#define _vl_api_defined_interface_name_renumber_t_print
static inline void *vl_api_interface_name_renumber_t_print (vl_api_interface_name_renumber_t *a,void *handle)
{
    vl_print(handle, "vl_api_interface_name_renumber_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "new_show_dev_instance: %u\n", a->new_show_dev_instance);
    return handle;
}

#endif

#ifndef _vl_api_defined_interface_name_renumber_reply_t_print
#define _vl_api_defined_interface_name_renumber_reply_t_print
static inline void *vl_api_interface_name_renumber_reply_t_print (vl_api_interface_name_renumber_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_interface_name_renumber_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_subif_t_print
#define _vl_api_defined_create_subif_t_print
static inline void *vl_api_create_subif_t_print (vl_api_create_subif_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_subif_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "sub_id: %u\n", a->sub_id);
    vl_print(handle, "no_tags: %u\n", a->no_tags);
    vl_print(handle, "one_tag: %u\n", a->one_tag);
    vl_print(handle, "two_tags: %u\n", a->two_tags);
    vl_print(handle, "dot1ad: %u\n", a->dot1ad);
    vl_print(handle, "exact_match: %u\n", a->exact_match);
    vl_print(handle, "default_sub: %u\n", a->default_sub);
    vl_print(handle, "outer_vlan_id_any: %u\n", a->outer_vlan_id_any);
    vl_print(handle, "inner_vlan_id_any: %u\n", a->inner_vlan_id_any);
    vl_print(handle, "outer_vlan_id: %u\n", a->outer_vlan_id);
    vl_print(handle, "inner_vlan_id: %u\n", a->inner_vlan_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_subif_reply_t_print
#define _vl_api_defined_create_subif_reply_t_print
static inline void *vl_api_create_subif_reply_t_print (vl_api_create_subif_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_subif_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_vlan_subif_t_print
#define _vl_api_defined_create_vlan_subif_t_print
static inline void *vl_api_create_vlan_subif_t_print (vl_api_create_vlan_subif_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_vlan_subif_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "vlan_id: %u\n", a->vlan_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_vlan_subif_reply_t_print
#define _vl_api_defined_create_vlan_subif_reply_t_print
static inline void *vl_api_create_vlan_subif_reply_t_print (vl_api_create_vlan_subif_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_vlan_subif_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_delete_subif_t_print
#define _vl_api_defined_delete_subif_t_print
static inline void *vl_api_delete_subif_t_print (vl_api_delete_subif_t *a,void *handle)
{
    vl_print(handle, "vl_api_delete_subif_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_delete_subif_reply_t_print
#define _vl_api_defined_delete_subif_reply_t_print
static inline void *vl_api_delete_subif_reply_t_print (vl_api_delete_subif_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_delete_subif_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_loopback_t_print
#define _vl_api_defined_create_loopback_t_print
static inline void *vl_api_create_loopback_t_print (vl_api_create_loopback_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_loopback_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_loopback_reply_t_print
#define _vl_api_defined_create_loopback_reply_t_print
static inline void *vl_api_create_loopback_reply_t_print (vl_api_create_loopback_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_loopback_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_loopback_instance_t_print
#define _vl_api_defined_create_loopback_instance_t_print
static inline void *vl_api_create_loopback_instance_t_print (vl_api_create_loopback_instance_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_loopback_instance_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_specified: %u\n", a->is_specified);
    vl_print(handle, "user_instance: %u\n", a->user_instance);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_loopback_instance_reply_t_print
#define _vl_api_defined_create_loopback_instance_reply_t_print
static inline void *vl_api_create_loopback_instance_reply_t_print (vl_api_create_loopback_instance_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_loopback_instance_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_delete_loopback_t_print
#define _vl_api_defined_delete_loopback_t_print
static inline void *vl_api_delete_loopback_t_print (vl_api_delete_loopback_t *a,void *handle)
{
    vl_print(handle, "vl_api_delete_loopback_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_delete_loopback_reply_t_print
#define _vl_api_defined_delete_loopback_reply_t_print
static inline void *vl_api_delete_loopback_reply_t_print (vl_api_delete_loopback_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_delete_loopback_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_collect_detailed_interface_stats_t_print
#define _vl_api_defined_collect_detailed_interface_stats_t_print
static inline void *vl_api_collect_detailed_interface_stats_t_print (vl_api_collect_detailed_interface_stats_t *a,void *handle)
{
    vl_print(handle, "vl_api_collect_detailed_interface_stats_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    return handle;
}

#endif

#ifndef _vl_api_defined_collect_detailed_interface_stats_reply_t_print
#define _vl_api_defined_collect_detailed_interface_stats_reply_t_print
static inline void *vl_api_collect_detailed_interface_stats_reply_t_print (vl_api_collect_detailed_interface_stats_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_collect_detailed_interface_stats_reply_t:\n");
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

#ifndef _vl_api_defined_sw_interface_set_flags_t_endian
#define _vl_api_defined_sw_interface_set_flags_t_endian
static inline void vl_api_sw_interface_set_flags_t_endian (vl_api_sw_interface_set_flags_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->admin_up_down = a->admin_up_down (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_flags_reply_t_endian
#define _vl_api_defined_sw_interface_set_flags_reply_t_endian
static inline void vl_api_sw_interface_set_flags_reply_t_endian (vl_api_sw_interface_set_flags_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_hw_interface_set_mtu_t_endian
#define _vl_api_defined_hw_interface_set_mtu_t_endian
static inline void vl_api_hw_interface_set_mtu_t_endian (vl_api_hw_interface_set_mtu_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->mtu = clib_net_to_host_u16(a->mtu);
}

#endif

#ifndef _vl_api_defined_hw_interface_set_mtu_reply_t_endian
#define _vl_api_defined_hw_interface_set_mtu_reply_t_endian
static inline void vl_api_hw_interface_set_mtu_reply_t_endian (vl_api_hw_interface_set_mtu_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mtu_t_endian
#define _vl_api_defined_sw_interface_set_mtu_t_endian
static inline void vl_api_sw_interface_set_mtu_t_endian (vl_api_sw_interface_set_mtu_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mtu_reply_t_endian
#define _vl_api_defined_sw_interface_set_mtu_reply_t_endian
static inline void vl_api_sw_interface_set_mtu_reply_t_endian (vl_api_sw_interface_set_mtu_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_ip_directed_broadcast_t_endian
#define _vl_api_defined_sw_interface_set_ip_directed_broadcast_t_endian
static inline void vl_api_sw_interface_set_ip_directed_broadcast_t_endian (vl_api_sw_interface_set_ip_directed_broadcast_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_ip_directed_broadcast_reply_t_endian
#define _vl_api_defined_sw_interface_set_ip_directed_broadcast_reply_t_endian
static inline void vl_api_sw_interface_set_ip_directed_broadcast_reply_t_endian (vl_api_sw_interface_set_ip_directed_broadcast_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_event_t_endian
#define _vl_api_defined_sw_interface_event_t_endian
static inline void vl_api_sw_interface_event_t_endian (vl_api_sw_interface_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->admin_up_down = a->admin_up_down (no-op) */
    /* a->link_up_down = a->link_up_down (no-op) */
    /* a->deleted = a->deleted (no-op) */
}

#endif

#ifndef _vl_api_defined_want_interface_events_t_endian
#define _vl_api_defined_want_interface_events_t_endian
static inline void vl_api_want_interface_events_t_endian (vl_api_want_interface_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->enable_disable = clib_net_to_host_u32(a->enable_disable);
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

#ifndef _vl_api_defined_want_interface_events_reply_t_endian
#define _vl_api_defined_want_interface_events_reply_t_endian
static inline void vl_api_want_interface_events_reply_t_endian (vl_api_want_interface_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_details_t_endian
#define _vl_api_defined_sw_interface_details_t_endian
static inline void vl_api_sw_interface_details_t_endian (vl_api_sw_interface_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->sup_sw_if_index = clib_net_to_host_u32(a->sup_sw_if_index);
    a->l2_address_length = clib_net_to_host_u32(a->l2_address_length);
    /* a->admin_up_down = a->admin_up_down (no-op) */
    /* a->link_up_down = a->link_up_down (no-op) */
    /* a->link_duplex = a->link_duplex (no-op) */
    a->link_speed = clib_net_to_host_u32(a->link_speed);
    a->link_mtu = clib_net_to_host_u16(a->link_mtu);
    a->sub_id = clib_net_to_host_u32(a->sub_id);
    /* a->sub_dot1ad = a->sub_dot1ad (no-op) */
    /* a->sub_dot1ah = a->sub_dot1ah (no-op) */
    /* a->sub_number_of_tags = a->sub_number_of_tags (no-op) */
    a->sub_outer_vlan_id = clib_net_to_host_u16(a->sub_outer_vlan_id);
    a->sub_inner_vlan_id = clib_net_to_host_u16(a->sub_inner_vlan_id);
    /* a->sub_exact_match = a->sub_exact_match (no-op) */
    /* a->sub_default = a->sub_default (no-op) */
    /* a->sub_outer_vlan_id_any = a->sub_outer_vlan_id_any (no-op) */
    /* a->sub_inner_vlan_id_any = a->sub_inner_vlan_id_any (no-op) */
    a->vtr_op = clib_net_to_host_u32(a->vtr_op);
    a->vtr_push_dot1q = clib_net_to_host_u32(a->vtr_push_dot1q);
    a->vtr_tag1 = clib_net_to_host_u32(a->vtr_tag1);
    a->vtr_tag2 = clib_net_to_host_u32(a->vtr_tag2);
    a->outer_tag = clib_net_to_host_u16(a->outer_tag);
    a->b_vlanid = clib_net_to_host_u16(a->b_vlanid);
    a->i_sid = clib_net_to_host_u32(a->i_sid);
}

#endif

#ifndef _vl_api_defined_sw_interface_dump_t_endian
#define _vl_api_defined_sw_interface_dump_t_endian
static inline void vl_api_sw_interface_dump_t_endian (vl_api_sw_interface_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
    /* a->name_filter_valid = a->name_filter_valid (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_add_del_address_t_endian
#define _vl_api_defined_sw_interface_add_del_address_t_endian
static inline void vl_api_sw_interface_add_del_address_t_endian (vl_api_sw_interface_add_del_address_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->del_all = a->del_all (no-op) */
    /* a->address_length = a->address_length (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_add_del_address_reply_t_endian
#define _vl_api_defined_sw_interface_add_del_address_reply_t_endian
static inline void vl_api_sw_interface_add_del_address_reply_t_endian (vl_api_sw_interface_add_del_address_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_table_t_endian
#define _vl_api_defined_sw_interface_set_table_t_endian
static inline void vl_api_sw_interface_set_table_t_endian (vl_api_sw_interface_set_table_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_table_reply_t_endian
#define _vl_api_defined_sw_interface_set_table_reply_t_endian
static inline void vl_api_sw_interface_set_table_reply_t_endian (vl_api_sw_interface_set_table_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_get_table_t_endian
#define _vl_api_defined_sw_interface_get_table_t_endian
static inline void vl_api_sw_interface_get_table_t_endian (vl_api_sw_interface_get_table_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_get_table_reply_t_endian
#define _vl_api_defined_sw_interface_get_table_reply_t_endian
static inline void vl_api_sw_interface_get_table_reply_t_endian (vl_api_sw_interface_get_table_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_unnumbered_t_endian
#define _vl_api_defined_sw_interface_set_unnumbered_t_endian
static inline void vl_api_sw_interface_set_unnumbered_t_endian (vl_api_sw_interface_set_unnumbered_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->unnumbered_sw_if_index = clib_net_to_host_u32(a->unnumbered_sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_unnumbered_reply_t_endian
#define _vl_api_defined_sw_interface_set_unnumbered_reply_t_endian
static inline void vl_api_sw_interface_set_unnumbered_reply_t_endian (vl_api_sw_interface_set_unnumbered_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_clear_stats_t_endian
#define _vl_api_defined_sw_interface_clear_stats_t_endian
static inline void vl_api_sw_interface_clear_stats_t_endian (vl_api_sw_interface_clear_stats_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_clear_stats_reply_t_endian
#define _vl_api_defined_sw_interface_clear_stats_reply_t_endian
static inline void vl_api_sw_interface_clear_stats_reply_t_endian (vl_api_sw_interface_clear_stats_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_tag_add_del_t_endian
#define _vl_api_defined_sw_interface_tag_add_del_t_endian
static inline void vl_api_sw_interface_tag_add_del_t_endian (vl_api_sw_interface_tag_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_tag_add_del_reply_t_endian
#define _vl_api_defined_sw_interface_tag_add_del_reply_t_endian
static inline void vl_api_sw_interface_tag_add_del_reply_t_endian (vl_api_sw_interface_tag_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mac_address_t_endian
#define _vl_api_defined_sw_interface_set_mac_address_t_endian
static inline void vl_api_sw_interface_set_mac_address_t_endian (vl_api_sw_interface_set_mac_address_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_mac_address_reply_t_endian
#define _vl_api_defined_sw_interface_set_mac_address_reply_t_endian
static inline void vl_api_sw_interface_set_mac_address_reply_t_endian (vl_api_sw_interface_set_mac_address_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_get_mac_address_t_endian
#define _vl_api_defined_sw_interface_get_mac_address_t_endian
static inline void vl_api_sw_interface_get_mac_address_t_endian (vl_api_sw_interface_get_mac_address_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_get_mac_address_reply_t_endian
#define _vl_api_defined_sw_interface_get_mac_address_reply_t_endian
static inline void vl_api_sw_interface_get_mac_address_reply_t_endian (vl_api_sw_interface_get_mac_address_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_mode_t_endian
#define _vl_api_defined_sw_interface_set_rx_mode_t_endian
static inline void vl_api_sw_interface_set_rx_mode_t_endian (vl_api_sw_interface_set_rx_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->queue_id_valid = a->queue_id_valid (no-op) */
    a->queue_id = clib_net_to_host_u32(a->queue_id);
    /* a->mode = a->mode (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_mode_reply_t_endian
#define _vl_api_defined_sw_interface_set_rx_mode_reply_t_endian
static inline void vl_api_sw_interface_set_rx_mode_reply_t_endian (vl_api_sw_interface_set_rx_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_placement_t_endian
#define _vl_api_defined_sw_interface_set_rx_placement_t_endian
static inline void vl_api_sw_interface_set_rx_placement_t_endian (vl_api_sw_interface_set_rx_placement_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->queue_id = clib_net_to_host_u32(a->queue_id);
    a->worker_id = clib_net_to_host_u32(a->worker_id);
    /* a->is_main = a->is_main (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_rx_placement_reply_t_endian
#define _vl_api_defined_sw_interface_set_rx_placement_reply_t_endian
static inline void vl_api_sw_interface_set_rx_placement_reply_t_endian (vl_api_sw_interface_set_rx_placement_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_rx_placement_dump_t_endian
#define _vl_api_defined_sw_interface_rx_placement_dump_t_endian
static inline void vl_api_sw_interface_rx_placement_dump_t_endian (vl_api_sw_interface_rx_placement_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_rx_placement_details_t_endian
#define _vl_api_defined_sw_interface_rx_placement_details_t_endian
static inline void vl_api_sw_interface_rx_placement_details_t_endian (vl_api_sw_interface_rx_placement_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->queue_id = clib_net_to_host_u32(a->queue_id);
    a->worker_id = clib_net_to_host_u32(a->worker_id);
    /* a->mode = a->mode (no-op) */
}

#endif

#ifndef _vl_api_defined_interface_name_renumber_t_endian
#define _vl_api_defined_interface_name_renumber_t_endian
static inline void vl_api_interface_name_renumber_t_endian (vl_api_interface_name_renumber_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->new_show_dev_instance = clib_net_to_host_u32(a->new_show_dev_instance);
}

#endif

#ifndef _vl_api_defined_interface_name_renumber_reply_t_endian
#define _vl_api_defined_interface_name_renumber_reply_t_endian
static inline void vl_api_interface_name_renumber_reply_t_endian (vl_api_interface_name_renumber_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_create_subif_t_endian
#define _vl_api_defined_create_subif_t_endian
static inline void vl_api_create_subif_t_endian (vl_api_create_subif_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->sub_id = clib_net_to_host_u32(a->sub_id);
    /* a->no_tags = a->no_tags (no-op) */
    /* a->one_tag = a->one_tag (no-op) */
    /* a->two_tags = a->two_tags (no-op) */
    /* a->dot1ad = a->dot1ad (no-op) */
    /* a->exact_match = a->exact_match (no-op) */
    /* a->default_sub = a->default_sub (no-op) */
    /* a->outer_vlan_id_any = a->outer_vlan_id_any (no-op) */
    /* a->inner_vlan_id_any = a->inner_vlan_id_any (no-op) */
    a->outer_vlan_id = clib_net_to_host_u16(a->outer_vlan_id);
    a->inner_vlan_id = clib_net_to_host_u16(a->inner_vlan_id);
}

#endif

#ifndef _vl_api_defined_create_subif_reply_t_endian
#define _vl_api_defined_create_subif_reply_t_endian
static inline void vl_api_create_subif_reply_t_endian (vl_api_create_subif_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_create_vlan_subif_t_endian
#define _vl_api_defined_create_vlan_subif_t_endian
static inline void vl_api_create_vlan_subif_t_endian (vl_api_create_vlan_subif_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->vlan_id = clib_net_to_host_u32(a->vlan_id);
}

#endif

#ifndef _vl_api_defined_create_vlan_subif_reply_t_endian
#define _vl_api_defined_create_vlan_subif_reply_t_endian
static inline void vl_api_create_vlan_subif_reply_t_endian (vl_api_create_vlan_subif_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_delete_subif_t_endian
#define _vl_api_defined_delete_subif_t_endian
static inline void vl_api_delete_subif_t_endian (vl_api_delete_subif_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_delete_subif_reply_t_endian
#define _vl_api_defined_delete_subif_reply_t_endian
static inline void vl_api_delete_subif_reply_t_endian (vl_api_delete_subif_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_create_loopback_t_endian
#define _vl_api_defined_create_loopback_t_endian
static inline void vl_api_create_loopback_t_endian (vl_api_create_loopback_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_create_loopback_reply_t_endian
#define _vl_api_defined_create_loopback_reply_t_endian
static inline void vl_api_create_loopback_reply_t_endian (vl_api_create_loopback_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_create_loopback_instance_t_endian
#define _vl_api_defined_create_loopback_instance_t_endian
static inline void vl_api_create_loopback_instance_t_endian (vl_api_create_loopback_instance_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_specified = a->is_specified (no-op) */
    a->user_instance = clib_net_to_host_u32(a->user_instance);
}

#endif

#ifndef _vl_api_defined_create_loopback_instance_reply_t_endian
#define _vl_api_defined_create_loopback_instance_reply_t_endian
static inline void vl_api_create_loopback_instance_reply_t_endian (vl_api_create_loopback_instance_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_delete_loopback_t_endian
#define _vl_api_defined_delete_loopback_t_endian
static inline void vl_api_delete_loopback_t_endian (vl_api_delete_loopback_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_delete_loopback_reply_t_endian
#define _vl_api_defined_delete_loopback_reply_t_endian
static inline void vl_api_delete_loopback_reply_t_endian (vl_api_delete_loopback_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_collect_detailed_interface_stats_t_endian
#define _vl_api_defined_collect_detailed_interface_stats_t_endian
static inline void vl_api_collect_detailed_interface_stats_t_endian (vl_api_collect_detailed_interface_stats_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable_disable = a->enable_disable (no-op) */
}

#endif

#ifndef _vl_api_defined_collect_detailed_interface_stats_reply_t_endian
#define _vl_api_defined_collect_detailed_interface_stats_reply_t_endian
static inline void vl_api_collect_detailed_interface_stats_reply_t_endian (vl_api_collect_detailed_interface_stats_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(interface.api, 2, 3, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(interface.api, 0x6aab37be)

#endif

