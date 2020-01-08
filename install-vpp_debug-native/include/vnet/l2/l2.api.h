/*
 * VLIB API definitions 2020-01-07 14:25:06
 * Input file: l2.api
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
#warning no content included from l2.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_L2_XCONNECT_DETAILS, vl_api_l2_xconnect_details_t_handler)
vl_msg_id(VL_API_L2_XCONNECT_DUMP, vl_api_l2_xconnect_dump_t_handler)
vl_msg_id(VL_API_L2_FIB_TABLE_DETAILS, vl_api_l2_fib_table_details_t_handler)
vl_msg_id(VL_API_L2_FIB_TABLE_DUMP, vl_api_l2_fib_table_dump_t_handler)
vl_msg_id(VL_API_L2_FIB_CLEAR_TABLE, vl_api_l2_fib_clear_table_t_handler)
vl_msg_id(VL_API_L2_FIB_CLEAR_TABLE_REPLY, vl_api_l2_fib_clear_table_reply_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_ALL, vl_api_l2fib_flush_all_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_ALL_REPLY, vl_api_l2fib_flush_all_reply_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_BD, vl_api_l2fib_flush_bd_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_BD_REPLY, vl_api_l2fib_flush_bd_reply_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_INT, vl_api_l2fib_flush_int_t_handler)
vl_msg_id(VL_API_L2FIB_FLUSH_INT_REPLY, vl_api_l2fib_flush_int_reply_t_handler)
vl_msg_id(VL_API_L2FIB_ADD_DEL, vl_api_l2fib_add_del_t_handler)
vl_msg_id(VL_API_L2FIB_ADD_DEL_REPLY, vl_api_l2fib_add_del_reply_t_handler)
vl_msg_id(VL_API_WANT_L2_MACS_EVENTS, vl_api_want_l2_macs_events_t_handler)
vl_msg_id(VL_API_WANT_L2_MACS_EVENTS_REPLY, vl_api_want_l2_macs_events_reply_t_handler)
vl_msg_id(VL_API_L2_MACS_EVENT, vl_api_l2_macs_event_t_handler)
vl_msg_id(VL_API_L2_FLAGS, vl_api_l2_flags_t_handler)
vl_msg_id(VL_API_L2_FLAGS_REPLY, vl_api_l2_flags_reply_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE, vl_api_bridge_domain_set_mac_age_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE_REPLY, vl_api_bridge_domain_set_mac_age_reply_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_ADD_DEL, vl_api_bridge_domain_add_del_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_ADD_DEL_REPLY, vl_api_bridge_domain_add_del_reply_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_DUMP, vl_api_bridge_domain_dump_t_handler)
vl_msg_id(VL_API_BRIDGE_DOMAIN_DETAILS, vl_api_bridge_domain_details_t_handler)
vl_msg_id(VL_API_BRIDGE_FLAGS, vl_api_bridge_flags_t_handler)
vl_msg_id(VL_API_BRIDGE_FLAGS_REPLY, vl_api_bridge_flags_reply_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE, vl_api_l2_interface_vlan_tag_rewrite_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE_REPLY, vl_api_l2_interface_vlan_tag_rewrite_reply_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_PBB_TAG_REWRITE, vl_api_l2_interface_pbb_tag_rewrite_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_PBB_TAG_REWRITE_REPLY, vl_api_l2_interface_pbb_tag_rewrite_reply_t_handler)
vl_msg_id(VL_API_L2_PATCH_ADD_DEL, vl_api_l2_patch_add_del_t_handler)
vl_msg_id(VL_API_L2_PATCH_ADD_DEL_REPLY, vl_api_l2_patch_add_del_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_XCONNECT, vl_api_sw_interface_set_l2_xconnect_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_XCONNECT_REPLY, vl_api_sw_interface_set_l2_xconnect_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_BRIDGE, vl_api_sw_interface_set_l2_bridge_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_L2_BRIDGE_REPLY, vl_api_sw_interface_set_l2_bridge_reply_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_ADD_DEL, vl_api_bd_ip_mac_add_del_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_ADD_DEL_REPLY, vl_api_bd_ip_mac_add_del_reply_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_FLUSH, vl_api_bd_ip_mac_flush_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_FLUSH_REPLY, vl_api_bd_ip_mac_flush_reply_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_DETAILS, vl_api_bd_ip_mac_details_t_handler)
vl_msg_id(VL_API_BD_IP_MAC_DUMP, vl_api_bd_ip_mac_dump_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_EFP_FILTER, vl_api_l2_interface_efp_filter_t_handler)
vl_msg_id(VL_API_L2_INTERFACE_EFP_FILTER_REPLY, vl_api_l2_interface_efp_filter_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VPATH, vl_api_sw_interface_set_vpath_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SET_VPATH_REPLY, vl_api_sw_interface_set_vpath_reply_t_handler)
vl_msg_id(VL_API_BVI_CREATE, vl_api_bvi_create_t_handler)
vl_msg_id(VL_API_BVI_CREATE_REPLY, vl_api_bvi_create_reply_t_handler)
vl_msg_id(VL_API_BVI_DELETE, vl_api_bvi_delete_t_handler)
vl_msg_id(VL_API_BVI_DELETE_REPLY, vl_api_bvi_delete_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_l2_xconnect_details_t, 1)
vl_msg_name(vl_api_l2_xconnect_dump_t, 1)
vl_msg_name(vl_api_l2_fib_table_details_t, 1)
vl_msg_name(vl_api_l2_fib_table_dump_t, 1)
vl_msg_name(vl_api_l2_fib_clear_table_t, 1)
vl_msg_name(vl_api_l2_fib_clear_table_reply_t, 1)
vl_msg_name(vl_api_l2fib_flush_all_t, 1)
vl_msg_name(vl_api_l2fib_flush_all_reply_t, 1)
vl_msg_name(vl_api_l2fib_flush_bd_t, 1)
vl_msg_name(vl_api_l2fib_flush_bd_reply_t, 1)
vl_msg_name(vl_api_l2fib_flush_int_t, 1)
vl_msg_name(vl_api_l2fib_flush_int_reply_t, 1)
vl_msg_name(vl_api_l2fib_add_del_t, 1)
vl_msg_name(vl_api_l2fib_add_del_reply_t, 1)
vl_msg_name(vl_api_want_l2_macs_events_t, 1)
vl_msg_name(vl_api_want_l2_macs_events_reply_t, 1)
vl_msg_name(vl_api_l2_macs_event_t, 1)
vl_msg_name(vl_api_l2_flags_t, 1)
vl_msg_name(vl_api_l2_flags_reply_t, 1)
vl_msg_name(vl_api_bridge_domain_set_mac_age_t, 1)
vl_msg_name(vl_api_bridge_domain_set_mac_age_reply_t, 1)
vl_msg_name(vl_api_bridge_domain_add_del_t, 1)
vl_msg_name(vl_api_bridge_domain_add_del_reply_t, 1)
vl_msg_name(vl_api_bridge_domain_dump_t, 1)
vl_msg_name(vl_api_bridge_domain_details_t, 1)
vl_msg_name(vl_api_bridge_flags_t, 1)
vl_msg_name(vl_api_bridge_flags_reply_t, 1)
vl_msg_name(vl_api_l2_interface_vlan_tag_rewrite_t, 1)
vl_msg_name(vl_api_l2_interface_vlan_tag_rewrite_reply_t, 1)
vl_msg_name(vl_api_l2_interface_pbb_tag_rewrite_t, 1)
vl_msg_name(vl_api_l2_interface_pbb_tag_rewrite_reply_t, 1)
vl_msg_name(vl_api_l2_patch_add_del_t, 1)
vl_msg_name(vl_api_l2_patch_add_del_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_xconnect_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_xconnect_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_bridge_t, 1)
vl_msg_name(vl_api_sw_interface_set_l2_bridge_reply_t, 1)
vl_msg_name(vl_api_bd_ip_mac_add_del_t, 1)
vl_msg_name(vl_api_bd_ip_mac_add_del_reply_t, 1)
vl_msg_name(vl_api_bd_ip_mac_flush_t, 1)
vl_msg_name(vl_api_bd_ip_mac_flush_reply_t, 1)
vl_msg_name(vl_api_bd_ip_mac_details_t, 1)
vl_msg_name(vl_api_bd_ip_mac_dump_t, 1)
vl_msg_name(vl_api_l2_interface_efp_filter_t, 1)
vl_msg_name(vl_api_l2_interface_efp_filter_reply_t, 1)
vl_msg_name(vl_api_sw_interface_set_vpath_t, 1)
vl_msg_name(vl_api_sw_interface_set_vpath_reply_t, 1)
vl_msg_name(vl_api_bvi_create_t, 1)
vl_msg_name(vl_api_bvi_create_reply_t, 1)
vl_msg_name(vl_api_bvi_delete_t, 1)
vl_msg_name(vl_api_bvi_delete_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_l2 \
_(VL_API_L2_XCONNECT_DETAILS, l2_xconnect_details, 722e2378) \
_(VL_API_L2_XCONNECT_DUMP, l2_xconnect_dump, 51077d14) \
_(VL_API_L2_FIB_TABLE_DETAILS, l2_fib_table_details, c7392706) \
_(VL_API_L2_FIB_TABLE_DUMP, l2_fib_table_dump, c25fdce6) \
_(VL_API_L2_FIB_CLEAR_TABLE, l2_fib_clear_table, 51077d14) \
_(VL_API_L2_FIB_CLEAR_TABLE_REPLY, l2_fib_clear_table_reply, e8d4e804) \
_(VL_API_L2FIB_FLUSH_ALL, l2fib_flush_all, 51077d14) \
_(VL_API_L2FIB_FLUSH_ALL_REPLY, l2fib_flush_all_reply, e8d4e804) \
_(VL_API_L2FIB_FLUSH_BD, l2fib_flush_bd, c25fdce6) \
_(VL_API_L2FIB_FLUSH_BD_REPLY, l2fib_flush_bd_reply, e8d4e804) \
_(VL_API_L2FIB_FLUSH_INT, l2fib_flush_int, 529cb13f) \
_(VL_API_L2FIB_FLUSH_INT_REPLY, l2fib_flush_int_reply, e8d4e804) \
_(VL_API_L2FIB_ADD_DEL, l2fib_add_del, 34ced3eb) \
_(VL_API_L2FIB_ADD_DEL_REPLY, l2fib_add_del_reply, e8d4e804) \
_(VL_API_WANT_L2_MACS_EVENTS, want_l2_macs_events, 94e63394) \
_(VL_API_WANT_L2_MACS_EVENTS_REPLY, want_l2_macs_events_reply, e8d4e804) \
_(VL_API_L2_MACS_EVENT, l2_macs_event, afc74a60) \
_(VL_API_L2_FLAGS, l2_flags, 0e889fb9) \
_(VL_API_L2_FLAGS_REPLY, l2_flags_reply, 29b2a2b3) \
_(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE, bridge_domain_set_mac_age, b537ad7b) \
_(VL_API_BRIDGE_DOMAIN_SET_MAC_AGE_REPLY, bridge_domain_set_mac_age_reply, e8d4e804) \
_(VL_API_BRIDGE_DOMAIN_ADD_DEL, bridge_domain_add_del, c6360720) \
_(VL_API_BRIDGE_DOMAIN_ADD_DEL_REPLY, bridge_domain_add_del_reply, e8d4e804) \
_(VL_API_BRIDGE_DOMAIN_DUMP, bridge_domain_dump, c25fdce6) \
_(VL_API_BRIDGE_DOMAIN_DETAILS, bridge_domain_details, 748c854a) \
_(VL_API_BRIDGE_FLAGS, bridge_flags, 2eb9b76c) \
_(VL_API_BRIDGE_FLAGS_REPLY, bridge_flags_reply, 29b2a2b3) \
_(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE, l2_interface_vlan_tag_rewrite, b90be6b4) \
_(VL_API_L2_INTERFACE_VLAN_TAG_REWRITE_REPLY, l2_interface_vlan_tag_rewrite_reply, e8d4e804) \
_(VL_API_L2_INTERFACE_PBB_TAG_REWRITE, l2_interface_pbb_tag_rewrite, 6cf815f9) \
_(VL_API_L2_INTERFACE_PBB_TAG_REWRITE_REPLY, l2_interface_pbb_tag_rewrite_reply, e8d4e804) \
_(VL_API_L2_PATCH_ADD_DEL, l2_patch_add_del, 62506e63) \
_(VL_API_L2_PATCH_ADD_DEL_REPLY, l2_patch_add_del_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_L2_XCONNECT, sw_interface_set_l2_xconnect, 95de3988) \
_(VL_API_SW_INTERFACE_SET_L2_XCONNECT_REPLY, sw_interface_set_l2_xconnect_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_L2_BRIDGE, sw_interface_set_l2_bridge, 5579f809) \
_(VL_API_SW_INTERFACE_SET_L2_BRIDGE_REPLY, sw_interface_set_l2_bridge_reply, e8d4e804) \
_(VL_API_BD_IP_MAC_ADD_DEL, bd_ip_mac_add_del, 97367ad1) \
_(VL_API_BD_IP_MAC_ADD_DEL_REPLY, bd_ip_mac_add_del_reply, e8d4e804) \
_(VL_API_BD_IP_MAC_FLUSH, bd_ip_mac_flush, c25fdce6) \
_(VL_API_BD_IP_MAC_FLUSH_REPLY, bd_ip_mac_flush_reply, e8d4e804) \
_(VL_API_BD_IP_MAC_DETAILS, bd_ip_mac_details, 3f1eb886) \
_(VL_API_BD_IP_MAC_DUMP, bd_ip_mac_dump, c25fdce6) \
_(VL_API_L2_INTERFACE_EFP_FILTER, l2_interface_efp_filter, 69d24598) \
_(VL_API_L2_INTERFACE_EFP_FILTER_REPLY, l2_interface_efp_filter_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_SET_VPATH, sw_interface_set_vpath, a36fadc0) \
_(VL_API_SW_INTERFACE_SET_VPATH_REPLY, sw_interface_set_vpath_reply, e8d4e804) \
_(VL_API_BVI_CREATE, bvi_create, 27a79e9e) \
_(VL_API_BVI_CREATE_REPLY, bvi_create_reply, fda5941f) \
_(VL_API_BVI_DELETE, bvi_delete, 529cb13f) \
_(VL_API_BVI_DELETE_REPLY, bvi_delete_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_l2_api
#define included_l2_api
#ifndef _vl_api_defined_ip6_address
#define _vl_api_defined_ip6_address
typedef u8 vl_api_ip6_address_t[16];
#endif

#ifndef _vl_api_defined_mac_address
#define _vl_api_defined_mac_address
typedef u8 vl_api_mac_address_t[6];
#endif

#ifndef _vl_api_defined_ip4_address
#define _vl_api_defined_ip4_address
typedef u8 vl_api_ip4_address_t[4];
#endif

#ifndef _vl_api_defined_address_family
#define _vl_api_defined_address_family
typedef enum {
    ADDRESS_IP4 = 0,
    ADDRESS_IP6 = 1,
} vl_api_address_family_t;
#endif

#ifndef _vl_api_defined_ip_ecn
#define _vl_api_defined_ip_ecn
typedef enum __attribute__((__packed__)) {
    IP_API_ECN_NONE = 0,
    IP_API_ECN_ECT0 = 1,
    IP_API_ECN_ECT1 = 2,
    IP_API_ECN_CE = 3,
} vl_api_ip_ecn_t;
STATIC_ASSERT(sizeof(vl_api_ip_ecn_t) == sizeof(u8), "size of API enum ip_ecn is wrong");
#endif

#ifndef _vl_api_defined_ip_dscp
#define _vl_api_defined_ip_dscp
typedef enum __attribute__((__packed__)) {
    IP_API_DSCP_CS0 = 0,
    IP_API_DSCP_CS1 = 8,
    IP_API_DSCP_AF11 = 10,
    IP_API_DSCP_AF12 = 12,
    IP_API_DSCP_AF13 = 14,
    IP_API_DSCP_CS2 = 16,
    IP_API_DSCP_AF21 = 18,
    IP_API_DSCP_AF22 = 20,
    IP_API_DSCP_AF23 = 22,
    IP_API_DSCP_CS3 = 24,
    IP_API_DSCP_AF31 = 26,
    IP_API_DSCP_AF32 = 28,
    IP_API_DSCP_AF33 = 30,
    IP_API_DSCP_CS4 = 32,
    IP_API_DSCP_AF41 = 34,
    IP_API_DSCP_AF42 = 36,
    IP_API_DSCP_AF43 = 38,
    IP_API_DSCP_CS5 = 40,
    IP_API_DSCP_EF = 46,
    IP_API_DSCP_CS6 = 48,
    IP_API_DSCP_CS7 = 50,
} vl_api_ip_dscp_t;
STATIC_ASSERT(sizeof(vl_api_ip_dscp_t) == sizeof(u8), "size of API enum ip_dscp is wrong");
#endif

#ifndef _vl_api_defined_ip_proto
#define _vl_api_defined_ip_proto
typedef enum {
    IP_API_PROTO_HOPOPT = 0,
    IP_API_PROTO_ICMP = 1,
    IP_API_PROTO_IGMP = 2,
    IP_API_PROTO_TCP = 6,
    IP_API_PROTO_UDP = 17,
    IP_API_PROTO_GRE = 47,
    IP_API_PROTO_AH = 50,
    IP_API_PROTO_ESP = 51,
    IP_API_PROTO_EIGRP = 88,
    IP_API_PROTO_OSPF = 89,
    IP_API_PROTO_SCTP = 132,
    IP_API_PROTO_RESERVED = 255,
} vl_api_ip_proto_t;
#endif

#ifndef _vl_api_defined_address_union
#define _vl_api_defined_address_union
typedef VL_API_PACKED(union _vl_api_address_union {
    vl_api_ip4_address_t ip4;
    vl_api_ip6_address_t ip6;
}) vl_api_address_union_t;
#endif

#ifndef _vl_api_defined_address
#define _vl_api_defined_address
typedef VL_API_PACKED(struct _vl_api_address {
    vl_api_address_family_t af;
    vl_api_address_union_t un;
}) vl_api_address_t;
#endif

#ifndef _vl_api_defined_prefix
#define _vl_api_defined_prefix
typedef VL_API_PACKED(struct _vl_api_prefix {
    vl_api_address_t address;
    u8 len;
}) vl_api_prefix_t;
#endif

#ifndef _vl_api_defined_mprefix
#define _vl_api_defined_mprefix
typedef VL_API_PACKED(struct _vl_api_mprefix {
    vl_api_address_family_t af;
    u16 grp_address_length;
    vl_api_address_union_t grp_address;
    vl_api_address_union_t src_address;
}) vl_api_mprefix_t;
#endif

#ifndef _vl_api_defined_ip6_prefix
#define _vl_api_defined_ip6_prefix
typedef VL_API_PACKED(struct _vl_api_ip6_prefix {
    vl_api_ip6_address_t address;
    u8 len;
}) vl_api_ip6_prefix_t;
#endif

#ifndef _vl_api_defined_ip4_prefix
#define _vl_api_defined_ip4_prefix
typedef VL_API_PACKED(struct _vl_api_ip4_prefix {
    vl_api_ip4_address_t address;
    u8 len;
}) vl_api_ip4_prefix_t;
#endif

#ifndef _vl_api_defined_prefix_matcher
#define _vl_api_defined_prefix_matcher
typedef VL_API_PACKED(struct _vl_api_prefix_matcher {
    u8 le;
    u8 ge;
}) vl_api_prefix_matcher_t;
#endif

#ifndef _vl_api_defined_mac_entry
#define _vl_api_defined_mac_entry
typedef VL_API_PACKED(struct _vl_api_mac_entry {
    u32 sw_if_index;
    u8 mac_addr[6];
    u8 action;
    u8 flags;
}) vl_api_mac_entry_t;
#endif

#ifndef _vl_api_defined_bridge_domain_sw_if
#define _vl_api_defined_bridge_domain_sw_if
typedef VL_API_PACKED(struct _vl_api_bridge_domain_sw_if {
    u32 context;
    u32 sw_if_index;
    u8 shg;
}) vl_api_bridge_domain_sw_if_t;
#endif

#ifndef _vl_api_defined_bd_flags
#define _vl_api_defined_bd_flags
typedef enum {
    BRIDGE_API_FLAG_NONE = 0,
    BRIDGE_API_FLAG_LEARN = 1,
    BRIDGE_API_FLAG_FWD = 2,
    BRIDGE_API_FLAG_FLOOD = 4,
    BRIDGE_API_FLAG_UU_FLOOD = 8,
    BRIDGE_API_FLAG_ARP_TERM = 16,
    BRIDGE_API_FLAG_ARP_UFWD = 32,
} vl_api_bd_flags_t;
#endif

#ifndef _vl_api_defined_l2_port_type
#define _vl_api_defined_l2_port_type
typedef enum {
    L2_API_PORT_TYPE_NORMAL = 0,
    L2_API_PORT_TYPE_BVI = 1,
    L2_API_PORT_TYPE_UU_FWD = 2,
} vl_api_l2_port_type_t;
#endif

#ifndef _vl_api_defined_bd_ip_mac
#define _vl_api_defined_bd_ip_mac
typedef VL_API_PACKED(struct _vl_api_bd_ip_mac {
    u32 bd_id;
    vl_api_address_t ip;
    vl_api_mac_address_t mac;
}) vl_api_bd_ip_mac_t;
#endif

#ifndef _vl_api_defined_l2_xconnect_details
#define _vl_api_defined_l2_xconnect_details
typedef VL_API_PACKED(struct _vl_api_l2_xconnect_details {
    u16 _vl_msg_id;
    u32 context;
    u32 rx_sw_if_index;
    u32 tx_sw_if_index;
}) vl_api_l2_xconnect_details_t;
#endif

#ifndef _vl_api_defined_l2_xconnect_dump
#define _vl_api_defined_l2_xconnect_dump
typedef VL_API_PACKED(struct _vl_api_l2_xconnect_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_l2_xconnect_dump_t;
#endif

#ifndef _vl_api_defined_l2_fib_table_details
#define _vl_api_defined_l2_fib_table_details
typedef VL_API_PACKED(struct _vl_api_l2_fib_table_details {
    u16 _vl_msg_id;
    u32 context;
    u32 bd_id;
    u8 mac[6];
    u32 sw_if_index;
    u8 static_mac;
    u8 filter_mac;
    u8 bvi_mac;
}) vl_api_l2_fib_table_details_t;
#endif

#ifndef _vl_api_defined_l2_fib_table_dump
#define _vl_api_defined_l2_fib_table_dump
typedef VL_API_PACKED(struct _vl_api_l2_fib_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
}) vl_api_l2_fib_table_dump_t;
#endif

#ifndef _vl_api_defined_l2_fib_clear_table
#define _vl_api_defined_l2_fib_clear_table
typedef VL_API_PACKED(struct _vl_api_l2_fib_clear_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_l2_fib_clear_table_t;
#endif

#ifndef _vl_api_defined_l2_fib_clear_table_reply
#define _vl_api_defined_l2_fib_clear_table_reply
typedef VL_API_PACKED(struct _vl_api_l2_fib_clear_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2_fib_clear_table_reply_t;
#endif

#ifndef _vl_api_defined_l2fib_flush_all
#define _vl_api_defined_l2fib_flush_all
typedef VL_API_PACKED(struct _vl_api_l2fib_flush_all {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_l2fib_flush_all_t;
#endif

#ifndef _vl_api_defined_l2fib_flush_all_reply
#define _vl_api_defined_l2fib_flush_all_reply
typedef VL_API_PACKED(struct _vl_api_l2fib_flush_all_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2fib_flush_all_reply_t;
#endif

#ifndef _vl_api_defined_l2fib_flush_bd
#define _vl_api_defined_l2fib_flush_bd
typedef VL_API_PACKED(struct _vl_api_l2fib_flush_bd {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
}) vl_api_l2fib_flush_bd_t;
#endif

#ifndef _vl_api_defined_l2fib_flush_bd_reply
#define _vl_api_defined_l2fib_flush_bd_reply
typedef VL_API_PACKED(struct _vl_api_l2fib_flush_bd_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2fib_flush_bd_reply_t;
#endif

#ifndef _vl_api_defined_l2fib_flush_int
#define _vl_api_defined_l2fib_flush_int
typedef VL_API_PACKED(struct _vl_api_l2fib_flush_int {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_l2fib_flush_int_t;
#endif

#ifndef _vl_api_defined_l2fib_flush_int_reply
#define _vl_api_defined_l2fib_flush_int_reply
typedef VL_API_PACKED(struct _vl_api_l2fib_flush_int_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2fib_flush_int_reply_t;
#endif

#ifndef _vl_api_defined_l2fib_add_del
#define _vl_api_defined_l2fib_add_del
typedef VL_API_PACKED(struct _vl_api_l2fib_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 mac[6];
    u32 bd_id;
    u32 sw_if_index;
    u8 is_add;
    u8 static_mac;
    u8 filter_mac;
    u8 bvi_mac;
}) vl_api_l2fib_add_del_t;
#endif

#ifndef _vl_api_defined_l2fib_add_del_reply
#define _vl_api_defined_l2fib_add_del_reply
typedef VL_API_PACKED(struct _vl_api_l2fib_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2fib_add_del_reply_t;
#endif

#ifndef _vl_api_defined_want_l2_macs_events
#define _vl_api_defined_want_l2_macs_events
typedef VL_API_PACKED(struct _vl_api_want_l2_macs_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 learn_limit;
    u8 scan_delay;
    u8 max_macs_in_event;
    u8 enable_disable;
    u32 pid;
}) vl_api_want_l2_macs_events_t;
#endif

#ifndef _vl_api_defined_want_l2_macs_events_reply
#define _vl_api_defined_want_l2_macs_events_reply
typedef VL_API_PACKED(struct _vl_api_want_l2_macs_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_l2_macs_events_reply_t;
#endif

#ifndef _vl_api_defined_l2_macs_event
#define _vl_api_defined_l2_macs_event
typedef VL_API_PACKED(struct _vl_api_l2_macs_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 n_macs;
    vl_api_mac_entry_t mac[0];
}) vl_api_l2_macs_event_t;
#endif

#ifndef _vl_api_defined_l2_flags
#define _vl_api_defined_l2_flags
typedef VL_API_PACKED(struct _vl_api_l2_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_set;
    u32 feature_bitmap;
}) vl_api_l2_flags_t;
#endif

#ifndef _vl_api_defined_l2_flags_reply
#define _vl_api_defined_l2_flags_reply
typedef VL_API_PACKED(struct _vl_api_l2_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 resulting_feature_bitmap;
}) vl_api_l2_flags_reply_t;
#endif

#ifndef _vl_api_defined_bridge_domain_set_mac_age
#define _vl_api_defined_bridge_domain_set_mac_age
typedef VL_API_PACKED(struct _vl_api_bridge_domain_set_mac_age {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
    u8 mac_age;
}) vl_api_bridge_domain_set_mac_age_t;
#endif

#ifndef _vl_api_defined_bridge_domain_set_mac_age_reply
#define _vl_api_defined_bridge_domain_set_mac_age_reply
typedef VL_API_PACKED(struct _vl_api_bridge_domain_set_mac_age_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bridge_domain_set_mac_age_reply_t;
#endif

#ifndef _vl_api_defined_bridge_domain_add_del
#define _vl_api_defined_bridge_domain_add_del
typedef VL_API_PACKED(struct _vl_api_bridge_domain_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
    u8 flood;
    u8 uu_flood;
    u8 forward;
    u8 learn;
    u8 arp_term;
    u8 arp_ufwd;
    u8 mac_age;
    u8 bd_tag[64];
    u8 is_add;
}) vl_api_bridge_domain_add_del_t;
#endif

#ifndef _vl_api_defined_bridge_domain_add_del_reply
#define _vl_api_defined_bridge_domain_add_del_reply
typedef VL_API_PACKED(struct _vl_api_bridge_domain_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bridge_domain_add_del_reply_t;
#endif

#ifndef _vl_api_defined_bridge_domain_dump
#define _vl_api_defined_bridge_domain_dump
typedef VL_API_PACKED(struct _vl_api_bridge_domain_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
}) vl_api_bridge_domain_dump_t;
#endif

#ifndef _vl_api_defined_bridge_domain_details
#define _vl_api_defined_bridge_domain_details
typedef VL_API_PACKED(struct _vl_api_bridge_domain_details {
    u16 _vl_msg_id;
    u32 context;
    u32 bd_id;
    u8 flood;
    u8 uu_flood;
    u8 forward;
    u8 learn;
    u8 arp_term;
    u8 arp_ufwd;
    u8 mac_age;
    u8 bd_tag[64];
    u32 bvi_sw_if_index;
    u32 uu_fwd_sw_if_index;
    u32 n_sw_ifs;
    vl_api_bridge_domain_sw_if_t sw_if_details[0];
}) vl_api_bridge_domain_details_t;
#endif

#ifndef _vl_api_defined_bridge_flags
#define _vl_api_defined_bridge_flags
typedef VL_API_PACKED(struct _vl_api_bridge_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
    u8 is_set;
    vl_api_bd_flags_t flags;
}) vl_api_bridge_flags_t;
#endif

#ifndef _vl_api_defined_bridge_flags_reply
#define _vl_api_defined_bridge_flags_reply
typedef VL_API_PACKED(struct _vl_api_bridge_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 resulting_feature_bitmap;
}) vl_api_bridge_flags_reply_t;
#endif

#ifndef _vl_api_defined_l2_interface_vlan_tag_rewrite
#define _vl_api_defined_l2_interface_vlan_tag_rewrite
typedef VL_API_PACKED(struct _vl_api_l2_interface_vlan_tag_rewrite {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 vtr_op;
    u32 push_dot1q;
    u32 tag1;
    u32 tag2;
}) vl_api_l2_interface_vlan_tag_rewrite_t;
#endif

#ifndef _vl_api_defined_l2_interface_vlan_tag_rewrite_reply
#define _vl_api_defined_l2_interface_vlan_tag_rewrite_reply
typedef VL_API_PACKED(struct _vl_api_l2_interface_vlan_tag_rewrite_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2_interface_vlan_tag_rewrite_reply_t;
#endif

#ifndef _vl_api_defined_l2_interface_pbb_tag_rewrite
#define _vl_api_defined_l2_interface_pbb_tag_rewrite
typedef VL_API_PACKED(struct _vl_api_l2_interface_pbb_tag_rewrite {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 vtr_op;
    u16 outer_tag;
    u8 b_dmac[6];
    u8 b_smac[6];
    u16 b_vlanid;
    u32 i_sid;
}) vl_api_l2_interface_pbb_tag_rewrite_t;
#endif

#ifndef _vl_api_defined_l2_interface_pbb_tag_rewrite_reply
#define _vl_api_defined_l2_interface_pbb_tag_rewrite_reply
typedef VL_API_PACKED(struct _vl_api_l2_interface_pbb_tag_rewrite_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2_interface_pbb_tag_rewrite_reply_t;
#endif

#ifndef _vl_api_defined_l2_patch_add_del
#define _vl_api_defined_l2_patch_add_del
typedef VL_API_PACKED(struct _vl_api_l2_patch_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 rx_sw_if_index;
    u32 tx_sw_if_index;
    u8 is_add;
}) vl_api_l2_patch_add_del_t;
#endif

#ifndef _vl_api_defined_l2_patch_add_del_reply
#define _vl_api_defined_l2_patch_add_del_reply
typedef VL_API_PACKED(struct _vl_api_l2_patch_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2_patch_add_del_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_l2_xconnect
#define _vl_api_defined_sw_interface_set_l2_xconnect
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_l2_xconnect {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 rx_sw_if_index;
    u32 tx_sw_if_index;
    u8 enable;
}) vl_api_sw_interface_set_l2_xconnect_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_l2_xconnect_reply
#define _vl_api_defined_sw_interface_set_l2_xconnect_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_l2_xconnect_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_l2_xconnect_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_l2_bridge
#define _vl_api_defined_sw_interface_set_l2_bridge
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_l2_bridge {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 rx_sw_if_index;
    u32 bd_id;
    vl_api_l2_port_type_t port_type;
    u8 shg;
    u8 enable;
}) vl_api_sw_interface_set_l2_bridge_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_l2_bridge_reply
#define _vl_api_defined_sw_interface_set_l2_bridge_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_l2_bridge_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_l2_bridge_reply_t;
#endif

#ifndef _vl_api_defined_bd_ip_mac_add_del
#define _vl_api_defined_bd_ip_mac_add_del
typedef VL_API_PACKED(struct _vl_api_bd_ip_mac_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_bd_ip_mac_t entry;
}) vl_api_bd_ip_mac_add_del_t;
#endif

#ifndef _vl_api_defined_bd_ip_mac_add_del_reply
#define _vl_api_defined_bd_ip_mac_add_del_reply
typedef VL_API_PACKED(struct _vl_api_bd_ip_mac_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bd_ip_mac_add_del_reply_t;
#endif

#ifndef _vl_api_defined_bd_ip_mac_flush
#define _vl_api_defined_bd_ip_mac_flush
typedef VL_API_PACKED(struct _vl_api_bd_ip_mac_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
}) vl_api_bd_ip_mac_flush_t;
#endif

#ifndef _vl_api_defined_bd_ip_mac_flush_reply
#define _vl_api_defined_bd_ip_mac_flush_reply
typedef VL_API_PACKED(struct _vl_api_bd_ip_mac_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bd_ip_mac_flush_reply_t;
#endif

#ifndef _vl_api_defined_bd_ip_mac_details
#define _vl_api_defined_bd_ip_mac_details
typedef VL_API_PACKED(struct _vl_api_bd_ip_mac_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_bd_ip_mac_t entry;
}) vl_api_bd_ip_mac_details_t;
#endif

#ifndef _vl_api_defined_bd_ip_mac_dump
#define _vl_api_defined_bd_ip_mac_dump
typedef VL_API_PACKED(struct _vl_api_bd_ip_mac_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
}) vl_api_bd_ip_mac_dump_t;
#endif

#ifndef _vl_api_defined_l2_interface_efp_filter
#define _vl_api_defined_l2_interface_efp_filter
typedef VL_API_PACKED(struct _vl_api_l2_interface_efp_filter {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable_disable;
}) vl_api_l2_interface_efp_filter_t;
#endif

#ifndef _vl_api_defined_l2_interface_efp_filter_reply
#define _vl_api_defined_l2_interface_efp_filter_reply
typedef VL_API_PACKED(struct _vl_api_l2_interface_efp_filter_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_l2_interface_efp_filter_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_vpath
#define _vl_api_defined_sw_interface_set_vpath
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_vpath {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable;
}) vl_api_sw_interface_set_vpath_t;
#endif

#ifndef _vl_api_defined_sw_interface_set_vpath_reply
#define _vl_api_defined_sw_interface_set_vpath_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_set_vpath_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_set_vpath_reply_t;
#endif

#ifndef _vl_api_defined_bvi_create
#define _vl_api_defined_bvi_create
typedef VL_API_PACKED(struct _vl_api_bvi_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_mac_address_t mac;
    u32 user_instance;
}) vl_api_bvi_create_t;
#endif

#ifndef _vl_api_defined_bvi_create_reply
#define _vl_api_defined_bvi_create_reply
typedef VL_API_PACKED(struct _vl_api_bvi_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_bvi_create_reply_t;
#endif

#ifndef _vl_api_defined_bvi_delete
#define _vl_api_defined_bvi_delete
typedef VL_API_PACKED(struct _vl_api_bvi_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_bvi_delete_t;
#endif

#ifndef _vl_api_defined_bvi_delete_reply
#define _vl_api_defined_bvi_delete_reply
typedef VL_API_PACKED(struct _vl_api_bvi_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bvi_delete_reply_t;
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

#ifndef _vl_api_defined_address_union_t_print
#define _vl_api_defined_address_union_t_print
static inline void *vl_api_address_union_t_print (vl_api_address_union_t *a,void *handle)
{
    vl_print(handle, "vl_api_address_union_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_address_t_print
#define _vl_api_defined_address_t_print
static inline void *vl_api_address_t_print (vl_api_address_t *a,void *handle)
{
    vl_print(handle, "vl_api_address_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_prefix_t_print
#define _vl_api_defined_prefix_t_print
static inline void *vl_api_prefix_t_print (vl_api_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_prefix_t:\n");
    vl_print(handle, "len: %u\n", a->len);
    return handle;
}

#endif

#ifndef _vl_api_defined_mprefix_t_print
#define _vl_api_defined_mprefix_t_print
static inline void *vl_api_mprefix_t_print (vl_api_mprefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_mprefix_t:\n");
    vl_print(handle, "grp_address_length: %u\n", a->grp_address_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6_prefix_t_print
#define _vl_api_defined_ip6_prefix_t_print
static inline void *vl_api_ip6_prefix_t_print (vl_api_ip6_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6_prefix_t:\n");
    vl_print(handle, "len: %u\n", a->len);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip4_prefix_t_print
#define _vl_api_defined_ip4_prefix_t_print
static inline void *vl_api_ip4_prefix_t_print (vl_api_ip4_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip4_prefix_t:\n");
    vl_print(handle, "len: %u\n", a->len);
    return handle;
}

#endif

#ifndef _vl_api_defined_prefix_matcher_t_print
#define _vl_api_defined_prefix_matcher_t_print
static inline void *vl_api_prefix_matcher_t_print (vl_api_prefix_matcher_t *a,void *handle)
{
    vl_print(handle, "vl_api_prefix_matcher_t:\n");
    vl_print(handle, "le: %u\n", a->le);
    vl_print(handle, "ge: %u\n", a->ge);
    return handle;
}

#endif

#ifndef _vl_api_defined_mac_entry_t_print
#define _vl_api_defined_mac_entry_t_print
static inline void *vl_api_mac_entry_t_print (vl_api_mac_entry_t *a,void *handle)
{
    vl_print(handle, "vl_api_mac_entry_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "action: %u\n", a->action);
    vl_print(handle, "flags: %u\n", a->flags);
    return handle;
}

#endif

/***** manual: vl_api_bridge_domain_sw_if_t_print  *****/

#ifndef _vl_api_defined_bd_ip_mac_t_print
#define _vl_api_defined_bd_ip_mac_t_print
static inline void *vl_api_bd_ip_mac_t_print (vl_api_bd_ip_mac_t *a,void *handle)
{
    vl_print(handle, "vl_api_bd_ip_mac_t:\n");
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_xconnect_details_t_print
#define _vl_api_defined_l2_xconnect_details_t_print
static inline void *vl_api_l2_xconnect_details_t_print (vl_api_l2_xconnect_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_xconnect_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "rx_sw_if_index: %u\n", a->rx_sw_if_index);
    vl_print(handle, "tx_sw_if_index: %u\n", a->tx_sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_xconnect_dump_t_print
#define _vl_api_defined_l2_xconnect_dump_t_print
static inline void *vl_api_l2_xconnect_dump_t_print (vl_api_l2_xconnect_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_xconnect_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_fib_table_details_t_print
#define _vl_api_defined_l2_fib_table_details_t_print
static inline void *vl_api_l2_fib_table_details_t_print (vl_api_l2_fib_table_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_fib_table_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "static_mac: %u\n", a->static_mac);
    vl_print(handle, "filter_mac: %u\n", a->filter_mac);
    vl_print(handle, "bvi_mac: %u\n", a->bvi_mac);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_fib_table_dump_t_print
#define _vl_api_defined_l2_fib_table_dump_t_print
static inline void *vl_api_l2_fib_table_dump_t_print (vl_api_l2_fib_table_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_fib_table_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_fib_clear_table_t_print
#define _vl_api_defined_l2_fib_clear_table_t_print
static inline void *vl_api_l2_fib_clear_table_t_print (vl_api_l2_fib_clear_table_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_fib_clear_table_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_fib_clear_table_reply_t_print
#define _vl_api_defined_l2_fib_clear_table_reply_t_print
static inline void *vl_api_l2_fib_clear_table_reply_t_print (vl_api_l2_fib_clear_table_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_fib_clear_table_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_flush_all_t_print
#define _vl_api_defined_l2fib_flush_all_t_print
static inline void *vl_api_l2fib_flush_all_t_print (vl_api_l2fib_flush_all_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_flush_all_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_flush_all_reply_t_print
#define _vl_api_defined_l2fib_flush_all_reply_t_print
static inline void *vl_api_l2fib_flush_all_reply_t_print (vl_api_l2fib_flush_all_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_flush_all_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_flush_bd_t_print
#define _vl_api_defined_l2fib_flush_bd_t_print
static inline void *vl_api_l2fib_flush_bd_t_print (vl_api_l2fib_flush_bd_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_flush_bd_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_flush_bd_reply_t_print
#define _vl_api_defined_l2fib_flush_bd_reply_t_print
static inline void *vl_api_l2fib_flush_bd_reply_t_print (vl_api_l2fib_flush_bd_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_flush_bd_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_flush_int_t_print
#define _vl_api_defined_l2fib_flush_int_t_print
static inline void *vl_api_l2fib_flush_int_t_print (vl_api_l2fib_flush_int_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_flush_int_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_flush_int_reply_t_print
#define _vl_api_defined_l2fib_flush_int_reply_t_print
static inline void *vl_api_l2fib_flush_int_reply_t_print (vl_api_l2fib_flush_int_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_flush_int_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_add_del_t_print
#define _vl_api_defined_l2fib_add_del_t_print
static inline void *vl_api_l2fib_add_del_t_print (vl_api_l2fib_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "static_mac: %u\n", a->static_mac);
    vl_print(handle, "filter_mac: %u\n", a->filter_mac);
    vl_print(handle, "bvi_mac: %u\n", a->bvi_mac);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2fib_add_del_reply_t_print
#define _vl_api_defined_l2fib_add_del_reply_t_print
static inline void *vl_api_l2fib_add_del_reply_t_print (vl_api_l2fib_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2fib_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_l2_macs_events_t_print
#define _vl_api_defined_want_l2_macs_events_t_print
static inline void *vl_api_want_l2_macs_events_t_print (vl_api_want_l2_macs_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_l2_macs_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "learn_limit: %u\n", a->learn_limit);
    vl_print(handle, "scan_delay: %u\n", a->scan_delay);
    vl_print(handle, "max_macs_in_event: %u\n", a->max_macs_in_event);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_l2_macs_events_reply_t_print
#define _vl_api_defined_want_l2_macs_events_reply_t_print
static inline void *vl_api_want_l2_macs_events_reply_t_print (vl_api_want_l2_macs_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_l2_macs_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_macs_event_t_print
#define _vl_api_defined_l2_macs_event_t_print
static inline void *vl_api_l2_macs_event_t_print (vl_api_l2_macs_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_macs_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "n_macs: %u\n", a->n_macs);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_flags_t_print
#define _vl_api_defined_l2_flags_t_print
static inline void *vl_api_l2_flags_t_print (vl_api_l2_flags_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_flags_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_set: %u\n", a->is_set);
    vl_print(handle, "feature_bitmap: %u\n", a->feature_bitmap);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_flags_reply_t_print
#define _vl_api_defined_l2_flags_reply_t_print
static inline void *vl_api_l2_flags_reply_t_print (vl_api_l2_flags_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_flags_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "resulting_feature_bitmap: %u\n", a->resulting_feature_bitmap);
    return handle;
}

#endif

#ifndef _vl_api_defined_bridge_domain_set_mac_age_t_print
#define _vl_api_defined_bridge_domain_set_mac_age_t_print
static inline void *vl_api_bridge_domain_set_mac_age_t_print (vl_api_bridge_domain_set_mac_age_t *a,void *handle)
{
    vl_print(handle, "vl_api_bridge_domain_set_mac_age_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "mac_age: %u\n", a->mac_age);
    return handle;
}

#endif

#ifndef _vl_api_defined_bridge_domain_set_mac_age_reply_t_print
#define _vl_api_defined_bridge_domain_set_mac_age_reply_t_print
static inline void *vl_api_bridge_domain_set_mac_age_reply_t_print (vl_api_bridge_domain_set_mac_age_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bridge_domain_set_mac_age_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bridge_domain_add_del_t_print
#define _vl_api_defined_bridge_domain_add_del_t_print
static inline void *vl_api_bridge_domain_add_del_t_print (vl_api_bridge_domain_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bridge_domain_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "flood: %u\n", a->flood);
    vl_print(handle, "uu_flood: %u\n", a->uu_flood);
    vl_print(handle, "forward: %u\n", a->forward);
    vl_print(handle, "learn: %u\n", a->learn);
    vl_print(handle, "arp_term: %u\n", a->arp_term);
    vl_print(handle, "arp_ufwd: %u\n", a->arp_ufwd);
    vl_print(handle, "mac_age: %u\n", a->mac_age);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_bridge_domain_add_del_reply_t_print
#define _vl_api_defined_bridge_domain_add_del_reply_t_print
static inline void *vl_api_bridge_domain_add_del_reply_t_print (vl_api_bridge_domain_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bridge_domain_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bridge_domain_dump_t_print
#define _vl_api_defined_bridge_domain_dump_t_print
static inline void *vl_api_bridge_domain_dump_t_print (vl_api_bridge_domain_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bridge_domain_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    return handle;
}

#endif

/***** manual: vl_api_bridge_domain_details_t_print  *****/

#ifndef _vl_api_defined_bridge_flags_t_print
#define _vl_api_defined_bridge_flags_t_print
static inline void *vl_api_bridge_flags_t_print (vl_api_bridge_flags_t *a,void *handle)
{
    vl_print(handle, "vl_api_bridge_flags_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "is_set: %u\n", a->is_set);
    return handle;
}

#endif

#ifndef _vl_api_defined_bridge_flags_reply_t_print
#define _vl_api_defined_bridge_flags_reply_t_print
static inline void *vl_api_bridge_flags_reply_t_print (vl_api_bridge_flags_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bridge_flags_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "resulting_feature_bitmap: %u\n", a->resulting_feature_bitmap);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_interface_vlan_tag_rewrite_t_print
#define _vl_api_defined_l2_interface_vlan_tag_rewrite_t_print
static inline void *vl_api_l2_interface_vlan_tag_rewrite_t_print (vl_api_l2_interface_vlan_tag_rewrite_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_interface_vlan_tag_rewrite_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "vtr_op: %u\n", a->vtr_op);
    vl_print(handle, "push_dot1q: %u\n", a->push_dot1q);
    vl_print(handle, "tag1: %u\n", a->tag1);
    vl_print(handle, "tag2: %u\n", a->tag2);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_interface_vlan_tag_rewrite_reply_t_print
#define _vl_api_defined_l2_interface_vlan_tag_rewrite_reply_t_print
static inline void *vl_api_l2_interface_vlan_tag_rewrite_reply_t_print (vl_api_l2_interface_vlan_tag_rewrite_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_interface_vlan_tag_rewrite_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_interface_pbb_tag_rewrite_t_print
#define _vl_api_defined_l2_interface_pbb_tag_rewrite_t_print
static inline void *vl_api_l2_interface_pbb_tag_rewrite_t_print (vl_api_l2_interface_pbb_tag_rewrite_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_interface_pbb_tag_rewrite_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "vtr_op: %u\n", a->vtr_op);
    vl_print(handle, "outer_tag: %u\n", a->outer_tag);
    vl_print(handle, "b_vlanid: %u\n", a->b_vlanid);
    vl_print(handle, "i_sid: %u\n", a->i_sid);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_interface_pbb_tag_rewrite_reply_t_print
#define _vl_api_defined_l2_interface_pbb_tag_rewrite_reply_t_print
static inline void *vl_api_l2_interface_pbb_tag_rewrite_reply_t_print (vl_api_l2_interface_pbb_tag_rewrite_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_interface_pbb_tag_rewrite_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_patch_add_del_t_print
#define _vl_api_defined_l2_patch_add_del_t_print
static inline void *vl_api_l2_patch_add_del_t_print (vl_api_l2_patch_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_patch_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "rx_sw_if_index: %u\n", a->rx_sw_if_index);
    vl_print(handle, "tx_sw_if_index: %u\n", a->tx_sw_if_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_patch_add_del_reply_t_print
#define _vl_api_defined_l2_patch_add_del_reply_t_print
static inline void *vl_api_l2_patch_add_del_reply_t_print (vl_api_l2_patch_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_patch_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_xconnect_t_print
#define _vl_api_defined_sw_interface_set_l2_xconnect_t_print
static inline void *vl_api_sw_interface_set_l2_xconnect_t_print (vl_api_sw_interface_set_l2_xconnect_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_l2_xconnect_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "rx_sw_if_index: %u\n", a->rx_sw_if_index);
    vl_print(handle, "tx_sw_if_index: %u\n", a->tx_sw_if_index);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_xconnect_reply_t_print
#define _vl_api_defined_sw_interface_set_l2_xconnect_reply_t_print
static inline void *vl_api_sw_interface_set_l2_xconnect_reply_t_print (vl_api_sw_interface_set_l2_xconnect_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_l2_xconnect_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_bridge_t_print
#define _vl_api_defined_sw_interface_set_l2_bridge_t_print
static inline void *vl_api_sw_interface_set_l2_bridge_t_print (vl_api_sw_interface_set_l2_bridge_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_l2_bridge_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "rx_sw_if_index: %u\n", a->rx_sw_if_index);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "shg: %u\n", a->shg);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_bridge_reply_t_print
#define _vl_api_defined_sw_interface_set_l2_bridge_reply_t_print
static inline void *vl_api_sw_interface_set_l2_bridge_reply_t_print (vl_api_sw_interface_set_l2_bridge_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_l2_bridge_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_add_del_t_print
#define _vl_api_defined_bd_ip_mac_add_del_t_print
static inline void *vl_api_bd_ip_mac_add_del_t_print (vl_api_bd_ip_mac_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bd_ip_mac_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_add_del_reply_t_print
#define _vl_api_defined_bd_ip_mac_add_del_reply_t_print
static inline void *vl_api_bd_ip_mac_add_del_reply_t_print (vl_api_bd_ip_mac_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bd_ip_mac_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_flush_t_print
#define _vl_api_defined_bd_ip_mac_flush_t_print
static inline void *vl_api_bd_ip_mac_flush_t_print (vl_api_bd_ip_mac_flush_t *a,void *handle)
{
    vl_print(handle, "vl_api_bd_ip_mac_flush_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_flush_reply_t_print
#define _vl_api_defined_bd_ip_mac_flush_reply_t_print
static inline void *vl_api_bd_ip_mac_flush_reply_t_print (vl_api_bd_ip_mac_flush_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bd_ip_mac_flush_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_details_t_print
#define _vl_api_defined_bd_ip_mac_details_t_print
static inline void *vl_api_bd_ip_mac_details_t_print (vl_api_bd_ip_mac_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bd_ip_mac_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_dump_t_print
#define _vl_api_defined_bd_ip_mac_dump_t_print
static inline void *vl_api_bd_ip_mac_dump_t_print (vl_api_bd_ip_mac_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bd_ip_mac_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_interface_efp_filter_t_print
#define _vl_api_defined_l2_interface_efp_filter_t_print
static inline void *vl_api_l2_interface_efp_filter_t_print (vl_api_l2_interface_efp_filter_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_interface_efp_filter_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    return handle;
}

#endif

#ifndef _vl_api_defined_l2_interface_efp_filter_reply_t_print
#define _vl_api_defined_l2_interface_efp_filter_reply_t_print
static inline void *vl_api_l2_interface_efp_filter_reply_t_print (vl_api_l2_interface_efp_filter_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_l2_interface_efp_filter_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vpath_t_print
#define _vl_api_defined_sw_interface_set_vpath_t_print
static inline void *vl_api_sw_interface_set_vpath_t_print (vl_api_sw_interface_set_vpath_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_vpath_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vpath_reply_t_print
#define _vl_api_defined_sw_interface_set_vpath_reply_t_print
static inline void *vl_api_sw_interface_set_vpath_reply_t_print (vl_api_sw_interface_set_vpath_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_set_vpath_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bvi_create_t_print
#define _vl_api_defined_bvi_create_t_print
static inline void *vl_api_bvi_create_t_print (vl_api_bvi_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_bvi_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "user_instance: %u\n", a->user_instance);
    return handle;
}

#endif

#ifndef _vl_api_defined_bvi_create_reply_t_print
#define _vl_api_defined_bvi_create_reply_t_print
static inline void *vl_api_bvi_create_reply_t_print (vl_api_bvi_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bvi_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bvi_delete_t_print
#define _vl_api_defined_bvi_delete_t_print
static inline void *vl_api_bvi_delete_t_print (vl_api_bvi_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_bvi_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bvi_delete_reply_t_print
#define _vl_api_defined_bvi_delete_reply_t_print
static inline void *vl_api_bvi_delete_reply_t_print (vl_api_bvi_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bvi_delete_reply_t:\n");
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

#ifndef _vl_api_defined_address_union_t_endian
#define _vl_api_defined_address_union_t_endian
static inline void vl_api_address_union_t_endian (vl_api_address_union_t *a)
{
    /* a->ip4 = a->ip4 (no-op) */
    /* a->ip6 = a->ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_address_t_endian
#define _vl_api_defined_address_t_endian
static inline void vl_api_address_t_endian (vl_api_address_t *a)
{
    /* a->af = a->af (no-op) */
    /* a->un = a->un (no-op) */
}

#endif

#ifndef _vl_api_defined_prefix_t_endian
#define _vl_api_defined_prefix_t_endian
static inline void vl_api_prefix_t_endian (vl_api_prefix_t *a)
{
    /* a->address = a->address (no-op) */
    /* a->len = a->len (no-op) */
}

#endif

#ifndef _vl_api_defined_mprefix_t_endian
#define _vl_api_defined_mprefix_t_endian
static inline void vl_api_mprefix_t_endian (vl_api_mprefix_t *a)
{
    /* a->af = a->af (no-op) */
    a->grp_address_length = clib_net_to_host_u16(a->grp_address_length);
    /* a->grp_address = a->grp_address (no-op) */
    /* a->src_address = a->src_address (no-op) */
}

#endif

#ifndef _vl_api_defined_ip6_prefix_t_endian
#define _vl_api_defined_ip6_prefix_t_endian
static inline void vl_api_ip6_prefix_t_endian (vl_api_ip6_prefix_t *a)
{
    /* a->address = a->address (no-op) */
    /* a->len = a->len (no-op) */
}

#endif

#ifndef _vl_api_defined_ip4_prefix_t_endian
#define _vl_api_defined_ip4_prefix_t_endian
static inline void vl_api_ip4_prefix_t_endian (vl_api_ip4_prefix_t *a)
{
    /* a->address = a->address (no-op) */
    /* a->len = a->len (no-op) */
}

#endif

#ifndef _vl_api_defined_prefix_matcher_t_endian
#define _vl_api_defined_prefix_matcher_t_endian
static inline void vl_api_prefix_matcher_t_endian (vl_api_prefix_matcher_t *a)
{
    /* a->le = a->le (no-op) */
    /* a->ge = a->ge (no-op) */
}

#endif

#ifndef _vl_api_defined_mac_entry_t_endian
#define _vl_api_defined_mac_entry_t_endian
static inline void vl_api_mac_entry_t_endian (vl_api_mac_entry_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->action = a->action (no-op) */
    /* a->flags = a->flags (no-op) */
}

#endif

/***** manual: vl_api_bridge_domain_sw_if_t_endian  *****/

#ifndef _vl_api_defined_bd_ip_mac_t_endian
#define _vl_api_defined_bd_ip_mac_t_endian
static inline void vl_api_bd_ip_mac_t_endian (vl_api_bd_ip_mac_t *a)
{
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->ip = a->ip (no-op) */
    /* a->mac = a->mac (no-op) */
}

#endif

#ifndef _vl_api_defined_l2_xconnect_details_t_endian
#define _vl_api_defined_l2_xconnect_details_t_endian
static inline void vl_api_l2_xconnect_details_t_endian (vl_api_l2_xconnect_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->rx_sw_if_index = clib_net_to_host_u32(a->rx_sw_if_index);
    a->tx_sw_if_index = clib_net_to_host_u32(a->tx_sw_if_index);
}

#endif

#ifndef _vl_api_defined_l2_xconnect_dump_t_endian
#define _vl_api_defined_l2_xconnect_dump_t_endian
static inline void vl_api_l2_xconnect_dump_t_endian (vl_api_l2_xconnect_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_l2_fib_table_details_t_endian
#define _vl_api_defined_l2_fib_table_details_t_endian
static inline void vl_api_l2_fib_table_details_t_endian (vl_api_l2_fib_table_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->static_mac = a->static_mac (no-op) */
    /* a->filter_mac = a->filter_mac (no-op) */
    /* a->bvi_mac = a->bvi_mac (no-op) */
}

#endif

#ifndef _vl_api_defined_l2_fib_table_dump_t_endian
#define _vl_api_defined_l2_fib_table_dump_t_endian
static inline void vl_api_l2_fib_table_dump_t_endian (vl_api_l2_fib_table_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

#endif

#ifndef _vl_api_defined_l2_fib_clear_table_t_endian
#define _vl_api_defined_l2_fib_clear_table_t_endian
static inline void vl_api_l2_fib_clear_table_t_endian (vl_api_l2_fib_clear_table_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_l2_fib_clear_table_reply_t_endian
#define _vl_api_defined_l2_fib_clear_table_reply_t_endian
static inline void vl_api_l2_fib_clear_table_reply_t_endian (vl_api_l2_fib_clear_table_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2fib_flush_all_t_endian
#define _vl_api_defined_l2fib_flush_all_t_endian
static inline void vl_api_l2fib_flush_all_t_endian (vl_api_l2fib_flush_all_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_l2fib_flush_all_reply_t_endian
#define _vl_api_defined_l2fib_flush_all_reply_t_endian
static inline void vl_api_l2fib_flush_all_reply_t_endian (vl_api_l2fib_flush_all_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2fib_flush_bd_t_endian
#define _vl_api_defined_l2fib_flush_bd_t_endian
static inline void vl_api_l2fib_flush_bd_t_endian (vl_api_l2fib_flush_bd_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

#endif

#ifndef _vl_api_defined_l2fib_flush_bd_reply_t_endian
#define _vl_api_defined_l2fib_flush_bd_reply_t_endian
static inline void vl_api_l2fib_flush_bd_reply_t_endian (vl_api_l2fib_flush_bd_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2fib_flush_int_t_endian
#define _vl_api_defined_l2fib_flush_int_t_endian
static inline void vl_api_l2fib_flush_int_t_endian (vl_api_l2fib_flush_int_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_l2fib_flush_int_reply_t_endian
#define _vl_api_defined_l2fib_flush_int_reply_t_endian
static inline void vl_api_l2fib_flush_int_reply_t_endian (vl_api_l2fib_flush_int_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2fib_add_del_t_endian
#define _vl_api_defined_l2fib_add_del_t_endian
static inline void vl_api_l2fib_add_del_t_endian (vl_api_l2fib_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
    /* a->static_mac = a->static_mac (no-op) */
    /* a->filter_mac = a->filter_mac (no-op) */
    /* a->bvi_mac = a->bvi_mac (no-op) */
}

#endif

#ifndef _vl_api_defined_l2fib_add_del_reply_t_endian
#define _vl_api_defined_l2fib_add_del_reply_t_endian
static inline void vl_api_l2fib_add_del_reply_t_endian (vl_api_l2fib_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_want_l2_macs_events_t_endian
#define _vl_api_defined_want_l2_macs_events_t_endian
static inline void vl_api_want_l2_macs_events_t_endian (vl_api_want_l2_macs_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->learn_limit = clib_net_to_host_u32(a->learn_limit);
    /* a->scan_delay = a->scan_delay (no-op) */
    /* a->max_macs_in_event = a->max_macs_in_event (no-op) */
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

#ifndef _vl_api_defined_want_l2_macs_events_reply_t_endian
#define _vl_api_defined_want_l2_macs_events_reply_t_endian
static inline void vl_api_want_l2_macs_events_reply_t_endian (vl_api_want_l2_macs_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2_macs_event_t_endian
#define _vl_api_defined_l2_macs_event_t_endian
static inline void vl_api_l2_macs_event_t_endian (vl_api_l2_macs_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    a->n_macs = clib_net_to_host_u32(a->n_macs);
}

#endif

#ifndef _vl_api_defined_l2_flags_t_endian
#define _vl_api_defined_l2_flags_t_endian
static inline void vl_api_l2_flags_t_endian (vl_api_l2_flags_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_set = a->is_set (no-op) */
    a->feature_bitmap = clib_net_to_host_u32(a->feature_bitmap);
}

#endif

#ifndef _vl_api_defined_l2_flags_reply_t_endian
#define _vl_api_defined_l2_flags_reply_t_endian
static inline void vl_api_l2_flags_reply_t_endian (vl_api_l2_flags_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->resulting_feature_bitmap = clib_net_to_host_u32(a->resulting_feature_bitmap);
}

#endif

#ifndef _vl_api_defined_bridge_domain_set_mac_age_t_endian
#define _vl_api_defined_bridge_domain_set_mac_age_t_endian
static inline void vl_api_bridge_domain_set_mac_age_t_endian (vl_api_bridge_domain_set_mac_age_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->mac_age = a->mac_age (no-op) */
}

#endif

#ifndef _vl_api_defined_bridge_domain_set_mac_age_reply_t_endian
#define _vl_api_defined_bridge_domain_set_mac_age_reply_t_endian
static inline void vl_api_bridge_domain_set_mac_age_reply_t_endian (vl_api_bridge_domain_set_mac_age_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bridge_domain_add_del_t_endian
#define _vl_api_defined_bridge_domain_add_del_t_endian
static inline void vl_api_bridge_domain_add_del_t_endian (vl_api_bridge_domain_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->flood = a->flood (no-op) */
    /* a->uu_flood = a->uu_flood (no-op) */
    /* a->forward = a->forward (no-op) */
    /* a->learn = a->learn (no-op) */
    /* a->arp_term = a->arp_term (no-op) */
    /* a->arp_ufwd = a->arp_ufwd (no-op) */
    /* a->mac_age = a->mac_age (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_bridge_domain_add_del_reply_t_endian
#define _vl_api_defined_bridge_domain_add_del_reply_t_endian
static inline void vl_api_bridge_domain_add_del_reply_t_endian (vl_api_bridge_domain_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bridge_domain_dump_t_endian
#define _vl_api_defined_bridge_domain_dump_t_endian
static inline void vl_api_bridge_domain_dump_t_endian (vl_api_bridge_domain_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

#endif

/***** manual: vl_api_bridge_domain_details_t_endian  *****/

#ifndef _vl_api_defined_bridge_flags_t_endian
#define _vl_api_defined_bridge_flags_t_endian
static inline void vl_api_bridge_flags_t_endian (vl_api_bridge_flags_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->is_set = a->is_set (no-op) */
    /* a->flags = a->flags (no-op) */
}

#endif

#ifndef _vl_api_defined_bridge_flags_reply_t_endian
#define _vl_api_defined_bridge_flags_reply_t_endian
static inline void vl_api_bridge_flags_reply_t_endian (vl_api_bridge_flags_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->resulting_feature_bitmap = clib_net_to_host_u32(a->resulting_feature_bitmap);
}

#endif

#ifndef _vl_api_defined_l2_interface_vlan_tag_rewrite_t_endian
#define _vl_api_defined_l2_interface_vlan_tag_rewrite_t_endian
static inline void vl_api_l2_interface_vlan_tag_rewrite_t_endian (vl_api_l2_interface_vlan_tag_rewrite_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->vtr_op = clib_net_to_host_u32(a->vtr_op);
    a->push_dot1q = clib_net_to_host_u32(a->push_dot1q);
    a->tag1 = clib_net_to_host_u32(a->tag1);
    a->tag2 = clib_net_to_host_u32(a->tag2);
}

#endif

#ifndef _vl_api_defined_l2_interface_vlan_tag_rewrite_reply_t_endian
#define _vl_api_defined_l2_interface_vlan_tag_rewrite_reply_t_endian
static inline void vl_api_l2_interface_vlan_tag_rewrite_reply_t_endian (vl_api_l2_interface_vlan_tag_rewrite_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2_interface_pbb_tag_rewrite_t_endian
#define _vl_api_defined_l2_interface_pbb_tag_rewrite_t_endian
static inline void vl_api_l2_interface_pbb_tag_rewrite_t_endian (vl_api_l2_interface_pbb_tag_rewrite_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->vtr_op = clib_net_to_host_u32(a->vtr_op);
    a->outer_tag = clib_net_to_host_u16(a->outer_tag);
    a->b_vlanid = clib_net_to_host_u16(a->b_vlanid);
    a->i_sid = clib_net_to_host_u32(a->i_sid);
}

#endif

#ifndef _vl_api_defined_l2_interface_pbb_tag_rewrite_reply_t_endian
#define _vl_api_defined_l2_interface_pbb_tag_rewrite_reply_t_endian
static inline void vl_api_l2_interface_pbb_tag_rewrite_reply_t_endian (vl_api_l2_interface_pbb_tag_rewrite_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_l2_patch_add_del_t_endian
#define _vl_api_defined_l2_patch_add_del_t_endian
static inline void vl_api_l2_patch_add_del_t_endian (vl_api_l2_patch_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->rx_sw_if_index = clib_net_to_host_u32(a->rx_sw_if_index);
    a->tx_sw_if_index = clib_net_to_host_u32(a->tx_sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_l2_patch_add_del_reply_t_endian
#define _vl_api_defined_l2_patch_add_del_reply_t_endian
static inline void vl_api_l2_patch_add_del_reply_t_endian (vl_api_l2_patch_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_xconnect_t_endian
#define _vl_api_defined_sw_interface_set_l2_xconnect_t_endian
static inline void vl_api_sw_interface_set_l2_xconnect_t_endian (vl_api_sw_interface_set_l2_xconnect_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->rx_sw_if_index = clib_net_to_host_u32(a->rx_sw_if_index);
    a->tx_sw_if_index = clib_net_to_host_u32(a->tx_sw_if_index);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_xconnect_reply_t_endian
#define _vl_api_defined_sw_interface_set_l2_xconnect_reply_t_endian
static inline void vl_api_sw_interface_set_l2_xconnect_reply_t_endian (vl_api_sw_interface_set_l2_xconnect_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_bridge_t_endian
#define _vl_api_defined_sw_interface_set_l2_bridge_t_endian
static inline void vl_api_sw_interface_set_l2_bridge_t_endian (vl_api_sw_interface_set_l2_bridge_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->rx_sw_if_index = clib_net_to_host_u32(a->rx_sw_if_index);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    /* a->port_type = a->port_type (no-op) */
    /* a->shg = a->shg (no-op) */
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_l2_bridge_reply_t_endian
#define _vl_api_defined_sw_interface_set_l2_bridge_reply_t_endian
static inline void vl_api_sw_interface_set_l2_bridge_reply_t_endian (vl_api_sw_interface_set_l2_bridge_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_add_del_t_endian
#define _vl_api_defined_bd_ip_mac_add_del_t_endian
static inline void vl_api_bd_ip_mac_add_del_t_endian (vl_api_bd_ip_mac_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->entry = a->entry (no-op) */
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_add_del_reply_t_endian
#define _vl_api_defined_bd_ip_mac_add_del_reply_t_endian
static inline void vl_api_bd_ip_mac_add_del_reply_t_endian (vl_api_bd_ip_mac_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_flush_t_endian
#define _vl_api_defined_bd_ip_mac_flush_t_endian
static inline void vl_api_bd_ip_mac_flush_t_endian (vl_api_bd_ip_mac_flush_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_flush_reply_t_endian
#define _vl_api_defined_bd_ip_mac_flush_reply_t_endian
static inline void vl_api_bd_ip_mac_flush_reply_t_endian (vl_api_bd_ip_mac_flush_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_details_t_endian
#define _vl_api_defined_bd_ip_mac_details_t_endian
static inline void vl_api_bd_ip_mac_details_t_endian (vl_api_bd_ip_mac_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->entry = a->entry (no-op) */
}

#endif

#ifndef _vl_api_defined_bd_ip_mac_dump_t_endian
#define _vl_api_defined_bd_ip_mac_dump_t_endian
static inline void vl_api_bd_ip_mac_dump_t_endian (vl_api_bd_ip_mac_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

#endif

#ifndef _vl_api_defined_l2_interface_efp_filter_t_endian
#define _vl_api_defined_l2_interface_efp_filter_t_endian
static inline void vl_api_l2_interface_efp_filter_t_endian (vl_api_l2_interface_efp_filter_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable_disable = a->enable_disable (no-op) */
}

#endif

#ifndef _vl_api_defined_l2_interface_efp_filter_reply_t_endian
#define _vl_api_defined_l2_interface_efp_filter_reply_t_endian
static inline void vl_api_l2_interface_efp_filter_reply_t_endian (vl_api_l2_interface_efp_filter_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vpath_t_endian
#define _vl_api_defined_sw_interface_set_vpath_t_endian
static inline void vl_api_sw_interface_set_vpath_t_endian (vl_api_sw_interface_set_vpath_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_set_vpath_reply_t_endian
#define _vl_api_defined_sw_interface_set_vpath_reply_t_endian
static inline void vl_api_sw_interface_set_vpath_reply_t_endian (vl_api_sw_interface_set_vpath_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bvi_create_t_endian
#define _vl_api_defined_bvi_create_t_endian
static inline void vl_api_bvi_create_t_endian (vl_api_bvi_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->mac = a->mac (no-op) */
    a->user_instance = clib_net_to_host_u32(a->user_instance);
}

#endif

#ifndef _vl_api_defined_bvi_create_reply_t_endian
#define _vl_api_defined_bvi_create_reply_t_endian
static inline void vl_api_bvi_create_reply_t_endian (vl_api_bvi_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_bvi_delete_t_endian
#define _vl_api_defined_bvi_delete_t_endian
static inline void vl_api_bvi_delete_t_endian (vl_api_bvi_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_bvi_delete_reply_t_endian
#define _vl_api_defined_bvi_delete_reply_t_endian
static inline void vl_api_bvi_delete_reply_t_endian (vl_api_bvi_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(l2.api, 2, 2, 2)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(l2.api, 0x532950d2)

#endif

