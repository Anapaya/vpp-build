/*
 * VLIB API definitions 2020-01-07 14:25:46
 * Input file: gbp.api
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
#warning no content included from gbp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_ADD, vl_api_gbp_bridge_domain_add_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_ADD_REPLY, vl_api_gbp_bridge_domain_add_reply_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DEL, vl_api_gbp_bridge_domain_del_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DEL_REPLY, vl_api_gbp_bridge_domain_del_reply_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DUMP, vl_api_gbp_bridge_domain_dump_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DUMP_REPLY, vl_api_gbp_bridge_domain_dump_reply_t_handler)
vl_msg_id(VL_API_GBP_BRIDGE_DOMAIN_DETAILS, vl_api_gbp_bridge_domain_details_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_ADD, vl_api_gbp_route_domain_add_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_ADD_REPLY, vl_api_gbp_route_domain_add_reply_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DEL, vl_api_gbp_route_domain_del_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DEL_REPLY, vl_api_gbp_route_domain_del_reply_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DUMP, vl_api_gbp_route_domain_dump_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DUMP_REPLY, vl_api_gbp_route_domain_dump_reply_t_handler)
vl_msg_id(VL_API_GBP_ROUTE_DOMAIN_DETAILS, vl_api_gbp_route_domain_details_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_ADD, vl_api_gbp_endpoint_add_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_ADD_REPLY, vl_api_gbp_endpoint_add_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DEL, vl_api_gbp_endpoint_del_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DEL_REPLY, vl_api_gbp_endpoint_del_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DUMP, vl_api_gbp_endpoint_dump_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_DETAILS, vl_api_gbp_endpoint_details_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_ADD, vl_api_gbp_endpoint_group_add_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_ADD_REPLY, vl_api_gbp_endpoint_group_add_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DEL, vl_api_gbp_endpoint_group_del_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DEL_REPLY, vl_api_gbp_endpoint_group_del_reply_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DUMP, vl_api_gbp_endpoint_group_dump_t_handler)
vl_msg_id(VL_API_GBP_ENDPOINT_GROUP_DETAILS, vl_api_gbp_endpoint_group_details_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_ADD_DEL, vl_api_gbp_recirc_add_del_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_ADD_DEL_REPLY, vl_api_gbp_recirc_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_DUMP, vl_api_gbp_recirc_dump_t_handler)
vl_msg_id(VL_API_GBP_RECIRC_DETAILS, vl_api_gbp_recirc_details_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_ADD_DEL, vl_api_gbp_subnet_add_del_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_ADD_DEL_REPLY, vl_api_gbp_subnet_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_DUMP, vl_api_gbp_subnet_dump_t_handler)
vl_msg_id(VL_API_GBP_SUBNET_DETAILS, vl_api_gbp_subnet_details_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_ADD_DEL, vl_api_gbp_contract_add_del_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_ADD_DEL_REPLY, vl_api_gbp_contract_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_DUMP, vl_api_gbp_contract_dump_t_handler)
vl_msg_id(VL_API_GBP_CONTRACT_DETAILS, vl_api_gbp_contract_details_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_ADD, vl_api_gbp_vxlan_tunnel_add_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_ADD_REPLY, vl_api_gbp_vxlan_tunnel_add_reply_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DEL, vl_api_gbp_vxlan_tunnel_del_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DEL_REPLY, vl_api_gbp_vxlan_tunnel_del_reply_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DUMP, vl_api_gbp_vxlan_tunnel_dump_t_handler)
vl_msg_id(VL_API_GBP_VXLAN_TUNNEL_DETAILS, vl_api_gbp_vxlan_tunnel_details_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_ADD_DEL, vl_api_gbp_ext_itf_add_del_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_ADD_DEL_REPLY, vl_api_gbp_ext_itf_add_del_reply_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_DUMP, vl_api_gbp_ext_itf_dump_t_handler)
vl_msg_id(VL_API_GBP_EXT_ITF_DETAILS, vl_api_gbp_ext_itf_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_gbp_bridge_domain_add_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_add_reply_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_del_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_del_reply_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_dump_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_dump_reply_t, 1)
vl_msg_name(vl_api_gbp_bridge_domain_details_t, 1)
vl_msg_name(vl_api_gbp_route_domain_add_t, 1)
vl_msg_name(vl_api_gbp_route_domain_add_reply_t, 1)
vl_msg_name(vl_api_gbp_route_domain_del_t, 1)
vl_msg_name(vl_api_gbp_route_domain_del_reply_t, 1)
vl_msg_name(vl_api_gbp_route_domain_dump_t, 1)
vl_msg_name(vl_api_gbp_route_domain_dump_reply_t, 1)
vl_msg_name(vl_api_gbp_route_domain_details_t, 1)
vl_msg_name(vl_api_gbp_endpoint_add_t, 1)
vl_msg_name(vl_api_gbp_endpoint_add_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_del_t, 1)
vl_msg_name(vl_api_gbp_endpoint_del_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_dump_t, 1)
vl_msg_name(vl_api_gbp_endpoint_details_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_add_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_add_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_del_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_del_reply_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_dump_t, 1)
vl_msg_name(vl_api_gbp_endpoint_group_details_t, 1)
vl_msg_name(vl_api_gbp_recirc_add_del_t, 1)
vl_msg_name(vl_api_gbp_recirc_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_recirc_dump_t, 1)
vl_msg_name(vl_api_gbp_recirc_details_t, 1)
vl_msg_name(vl_api_gbp_subnet_add_del_t, 1)
vl_msg_name(vl_api_gbp_subnet_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_subnet_dump_t, 1)
vl_msg_name(vl_api_gbp_subnet_details_t, 1)
vl_msg_name(vl_api_gbp_contract_add_del_t, 1)
vl_msg_name(vl_api_gbp_contract_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_contract_dump_t, 1)
vl_msg_name(vl_api_gbp_contract_details_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_add_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_add_reply_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_del_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_del_reply_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_dump_t, 1)
vl_msg_name(vl_api_gbp_vxlan_tunnel_details_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_add_del_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_add_del_reply_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_dump_t, 1)
vl_msg_name(vl_api_gbp_ext_itf_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_gbp \
_(VL_API_GBP_BRIDGE_DOMAIN_ADD, gbp_bridge_domain_add, 70f1069c) \
_(VL_API_GBP_BRIDGE_DOMAIN_ADD_REPLY, gbp_bridge_domain_add_reply, e8d4e804) \
_(VL_API_GBP_BRIDGE_DOMAIN_DEL, gbp_bridge_domain_del, c25fdce6) \
_(VL_API_GBP_BRIDGE_DOMAIN_DEL_REPLY, gbp_bridge_domain_del_reply, e8d4e804) \
_(VL_API_GBP_BRIDGE_DOMAIN_DUMP, gbp_bridge_domain_dump, 51077d14) \
_(VL_API_GBP_BRIDGE_DOMAIN_DUMP_REPLY, gbp_bridge_domain_dump_reply, e8d4e804) \
_(VL_API_GBP_BRIDGE_DOMAIN_DETAILS, gbp_bridge_domain_details, db8b025a) \
_(VL_API_GBP_ROUTE_DOMAIN_ADD, gbp_route_domain_add, 355b67c0) \
_(VL_API_GBP_ROUTE_DOMAIN_ADD_REPLY, gbp_route_domain_add_reply, e8d4e804) \
_(VL_API_GBP_ROUTE_DOMAIN_DEL, gbp_route_domain_del, bee4edcd) \
_(VL_API_GBP_ROUTE_DOMAIN_DEL_REPLY, gbp_route_domain_del_reply, e8d4e804) \
_(VL_API_GBP_ROUTE_DOMAIN_DUMP, gbp_route_domain_dump, 51077d14) \
_(VL_API_GBP_ROUTE_DOMAIN_DUMP_REPLY, gbp_route_domain_dump_reply, e8d4e804) \
_(VL_API_GBP_ROUTE_DOMAIN_DETAILS, gbp_route_domain_details, 3493453f) \
_(VL_API_GBP_ENDPOINT_ADD, gbp_endpoint_add, 6003c704) \
_(VL_API_GBP_ENDPOINT_ADD_REPLY, gbp_endpoint_add_reply, 1dd3ff3e) \
_(VL_API_GBP_ENDPOINT_DEL, gbp_endpoint_del, b93cd566) \
_(VL_API_GBP_ENDPOINT_DEL_REPLY, gbp_endpoint_del_reply, e8d4e804) \
_(VL_API_GBP_ENDPOINT_DUMP, gbp_endpoint_dump, 51077d14) \
_(VL_API_GBP_ENDPOINT_DETAILS, gbp_endpoint_details, 3fa63c09) \
_(VL_API_GBP_ENDPOINT_GROUP_ADD, gbp_endpoint_group_add, 1031b376) \
_(VL_API_GBP_ENDPOINT_GROUP_ADD_REPLY, gbp_endpoint_group_add_reply, e8d4e804) \
_(VL_API_GBP_ENDPOINT_GROUP_DEL, gbp_endpoint_group_del, 3436b8b7) \
_(VL_API_GBP_ENDPOINT_GROUP_DEL_REPLY, gbp_endpoint_group_del_reply, e8d4e804) \
_(VL_API_GBP_ENDPOINT_GROUP_DUMP, gbp_endpoint_group_dump, 51077d14) \
_(VL_API_GBP_ENDPOINT_GROUP_DETAILS, gbp_endpoint_group_details, 4bf0705b) \
_(VL_API_GBP_RECIRC_ADD_DEL, gbp_recirc_add_del, aaba42d5) \
_(VL_API_GBP_RECIRC_ADD_DEL_REPLY, gbp_recirc_add_del_reply, e8d4e804) \
_(VL_API_GBP_RECIRC_DUMP, gbp_recirc_dump, 51077d14) \
_(VL_API_GBP_RECIRC_DETAILS, gbp_recirc_details, 3b048478) \
_(VL_API_GBP_SUBNET_ADD_DEL, gbp_subnet_add_del, 4be859ed) \
_(VL_API_GBP_SUBNET_ADD_DEL_REPLY, gbp_subnet_add_del_reply, e8d4e804) \
_(VL_API_GBP_SUBNET_DUMP, gbp_subnet_dump, 51077d14) \
_(VL_API_GBP_SUBNET_DETAILS, gbp_subnet_details, 24fdca24) \
_(VL_API_GBP_CONTRACT_ADD_DEL, gbp_contract_add_del, c64310d2) \
_(VL_API_GBP_CONTRACT_ADD_DEL_REPLY, gbp_contract_add_del_reply, 1992deab) \
_(VL_API_GBP_CONTRACT_DUMP, gbp_contract_dump, 51077d14) \
_(VL_API_GBP_CONTRACT_DETAILS, gbp_contract_details, 9a1cf8f2) \
_(VL_API_GBP_VXLAN_TUNNEL_ADD, gbp_vxlan_tunnel_add, 1fcf26a7) \
_(VL_API_GBP_VXLAN_TUNNEL_ADD_REPLY, gbp_vxlan_tunnel_add_reply, fda5941f) \
_(VL_API_GBP_VXLAN_TUNNEL_DEL, gbp_vxlan_tunnel_del, 8d1f2fe9) \
_(VL_API_GBP_VXLAN_TUNNEL_DEL_REPLY, gbp_vxlan_tunnel_del_reply, e8d4e804) \
_(VL_API_GBP_VXLAN_TUNNEL_DUMP, gbp_vxlan_tunnel_dump, 51077d14) \
_(VL_API_GBP_VXLAN_TUNNEL_DETAILS, gbp_vxlan_tunnel_details, a87cf774) \
_(VL_API_GBP_EXT_ITF_ADD_DEL, gbp_ext_itf_add_del, 6995e85f) \
_(VL_API_GBP_EXT_ITF_ADD_DEL_REPLY, gbp_ext_itf_add_del_reply, e8d4e804) \
_(VL_API_GBP_EXT_ITF_DUMP, gbp_ext_itf_dump, 51077d14) \
_(VL_API_GBP_EXT_ITF_DETAILS, gbp_ext_itf_details, 89c19ec5) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_gbp_api
#define included_gbp_api
#ifndef _vl_api_defined_gbp_scope
#define _vl_api_defined_gbp_scope
typedef u16 vl_api_gbp_scope_t;
#endif

#ifndef _vl_api_defined_ip4_address
#define _vl_api_defined_ip4_address
typedef u8 vl_api_ip4_address_t[4];
#endif

#ifndef _vl_api_defined_ip6_address
#define _vl_api_defined_ip6_address
typedef u8 vl_api_ip6_address_t[16];
#endif

#ifndef _vl_api_defined_mac_address
#define _vl_api_defined_mac_address
typedef u8 vl_api_mac_address_t[6];
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

#ifndef _vl_api_defined_gbp_bridge_domain_flags
#define _vl_api_defined_gbp_bridge_domain_flags
typedef enum {
    GBP_BD_API_FLAG_NONE = 0,
    GBP_BD_API_FLAG_DO_NOT_LEARN = 1,
    GBP_BD_API_FLAG_UU_FWD_DROP = 2,
    GBP_BD_API_FLAG_MCAST_DROP = 4,
    GBP_BD_API_FLAG_UCAST_ARP = 8,
} vl_api_gbp_bridge_domain_flags_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain
#define _vl_api_defined_gbp_bridge_domain
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain {
    u32 bd_id;
    u32 rd_id;
    vl_api_gbp_bridge_domain_flags_t flags;
    u32 bvi_sw_if_index;
    u32 uu_fwd_sw_if_index;
    u32 bm_flood_sw_if_index;
}) vl_api_gbp_bridge_domain_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain
#define _vl_api_defined_gbp_route_domain
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain {
    u32 rd_id;
    u32 ip4_table_id;
    u32 ip6_table_id;
    u32 ip4_uu_sw_if_index;
    u32 ip6_uu_sw_if_index;
    vl_api_gbp_scope_t scope;
}) vl_api_gbp_route_domain_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_flags
#define _vl_api_defined_gbp_endpoint_flags
typedef enum {
    GBP_API_ENDPOINT_FLAG_NONE = 0,
    GBP_API_ENDPOINT_FLAG_BOUNCE = 1,
    GBP_API_ENDPOINT_FLAG_REMOTE = 2,
    GBP_API_ENDPOINT_FLAG_LEARNT = 4,
    GBP_API_ENDPOINT_FLAG_EXTERNAL = 8,
} vl_api_gbp_endpoint_flags_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_tun
#define _vl_api_defined_gbp_endpoint_tun
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_tun {
    vl_api_address_t src;
    vl_api_address_t dst;
}) vl_api_gbp_endpoint_tun_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint
#define _vl_api_defined_gbp_endpoint
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint {
    u32 sw_if_index;
    u16 sclass;
    vl_api_gbp_endpoint_flags_t flags;
    vl_api_mac_address_t mac;
    vl_api_gbp_endpoint_tun_t tun;
    u8 n_ips;
    vl_api_address_t ips[0];
}) vl_api_gbp_endpoint_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_retention
#define _vl_api_defined_gbp_endpoint_retention
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_retention {
    u32 remote_ep_timeout;
}) vl_api_gbp_endpoint_retention_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_group
#define _vl_api_defined_gbp_endpoint_group
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_group {
    u32 vnid;
    u16 sclass;
    u32 bd_id;
    u32 rd_id;
    u32 uplink_sw_if_index;
    vl_api_gbp_endpoint_retention_t retention;
}) vl_api_gbp_endpoint_group_t;
#endif

#ifndef _vl_api_defined_gbp_recirc
#define _vl_api_defined_gbp_recirc
typedef VL_API_PACKED(struct _vl_api_gbp_recirc {
    u32 sw_if_index;
    u16 sclass;
    u8 is_ext;
}) vl_api_gbp_recirc_t;
#endif

#ifndef _vl_api_defined_gbp_subnet_type
#define _vl_api_defined_gbp_subnet_type
typedef enum {
    GBP_API_SUBNET_TRANSPORT = 1,
    GBP_API_SUBNET_STITCHED_INTERNAL = 2,
    GBP_API_SUBNET_STITCHED_EXTERNAL = 3,
    GBP_API_SUBNET_L3_OUT = 4,
    GBP_API_SUBNET_ANON_L3_OUT = 5,
} vl_api_gbp_subnet_type_t;
#endif

#ifndef _vl_api_defined_gbp_subnet
#define _vl_api_defined_gbp_subnet
typedef VL_API_PACKED(struct _vl_api_gbp_subnet {
    u32 rd_id;
    u32 sw_if_index;
    u16 sclass;
    vl_api_gbp_subnet_type_t type;
    vl_api_prefix_t prefix;
}) vl_api_gbp_subnet_t;
#endif

#ifndef _vl_api_defined_gbp_next_hop
#define _vl_api_defined_gbp_next_hop
typedef VL_API_PACKED(struct _vl_api_gbp_next_hop {
    vl_api_address_t ip;
    vl_api_mac_address_t mac;
    u32 bd_id;
    u32 rd_id;
}) vl_api_gbp_next_hop_t;
#endif

#ifndef _vl_api_defined_gbp_hash_mode
#define _vl_api_defined_gbp_hash_mode
typedef enum {
    GBP_API_HASH_MODE_SRC_IP = 1,
    GBP_API_HASH_MODE_DST_IP = 2,
    GBP_API_HASH_MODE_SYMMETRIC = 3,
} vl_api_gbp_hash_mode_t;
#endif

#ifndef _vl_api_defined_gbp_next_hop_set
#define _vl_api_defined_gbp_next_hop_set
typedef VL_API_PACKED(struct _vl_api_gbp_next_hop_set {
    vl_api_gbp_hash_mode_t hash_mode;
    u8 n_nhs;
    vl_api_gbp_next_hop_t nhs[8];
}) vl_api_gbp_next_hop_set_t;
#endif

#ifndef _vl_api_defined_gbp_rule_action
#define _vl_api_defined_gbp_rule_action
typedef enum {
    GBP_API_RULE_PERMIT = 1,
    GBP_API_RULE_DENY = 2,
    GBP_API_RULE_REDIRECT = 3,
} vl_api_gbp_rule_action_t;
#endif

#ifndef _vl_api_defined_gbp_rule
#define _vl_api_defined_gbp_rule
typedef VL_API_PACKED(struct _vl_api_gbp_rule {
    vl_api_gbp_rule_action_t action;
    vl_api_gbp_next_hop_set_t nh_set;
}) vl_api_gbp_rule_t;
#endif

#ifndef _vl_api_defined_gbp_contract
#define _vl_api_defined_gbp_contract
typedef VL_API_PACKED(struct _vl_api_gbp_contract {
    vl_api_gbp_scope_t scope;
    u16 sclass;
    u16 dclass;
    u32 acl_index;
    u8 n_ether_types;
    u16 allowed_ethertypes[16];
    u8 n_rules;
    vl_api_gbp_rule_t rules[0];
}) vl_api_gbp_contract_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_mode
#define _vl_api_defined_gbp_vxlan_tunnel_mode
typedef enum {
    GBP_VXLAN_TUNNEL_MODE_L2 = 1,
    GBP_VXLAN_TUNNEL_MODE_L3 = 2,
} vl_api_gbp_vxlan_tunnel_mode_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel
#define _vl_api_defined_gbp_vxlan_tunnel
typedef VL_API_PACKED(struct _vl_api_gbp_vxlan_tunnel {
    u32 vni;
    vl_api_gbp_vxlan_tunnel_mode_t mode;
    u32 bd_rd_id;
    vl_api_ip4_address_t src;
}) vl_api_gbp_vxlan_tunnel_t;
#endif

#ifndef _vl_api_defined_gbp_ext_itf_flags
#define _vl_api_defined_gbp_ext_itf_flags
typedef enum {
    GBP_API_EXT_ITF_F_NONE = 0,
    GBP_API_EXT_ITF_F_ANON = 1,
} vl_api_gbp_ext_itf_flags_t;
#endif

#ifndef _vl_api_defined_gbp_ext_itf
#define _vl_api_defined_gbp_ext_itf
typedef VL_API_PACKED(struct _vl_api_gbp_ext_itf {
    u32 sw_if_index;
    u32 bd_id;
    u32 rd_id;
    vl_api_gbp_ext_itf_flags_t flags;
}) vl_api_gbp_ext_itf_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain_add
#define _vl_api_defined_gbp_bridge_domain_add
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_bridge_domain_t bd;
}) vl_api_gbp_bridge_domain_add_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain_add_reply
#define _vl_api_defined_gbp_bridge_domain_add_reply
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_bridge_domain_add_reply_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain_del
#define _vl_api_defined_gbp_bridge_domain_del
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd_id;
}) vl_api_gbp_bridge_domain_del_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain_del_reply
#define _vl_api_defined_gbp_bridge_domain_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_bridge_domain_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain_dump
#define _vl_api_defined_gbp_bridge_domain_dump
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_bridge_domain_dump_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain_dump_reply
#define _vl_api_defined_gbp_bridge_domain_dump_reply
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain_dump_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_bridge_domain_dump_reply_t;
#endif

#ifndef _vl_api_defined_gbp_bridge_domain_details
#define _vl_api_defined_gbp_bridge_domain_details
typedef VL_API_PACKED(struct _vl_api_gbp_bridge_domain_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_bridge_domain_t bd;
}) vl_api_gbp_bridge_domain_details_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain_add
#define _vl_api_defined_gbp_route_domain_add
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_route_domain_t rd;
}) vl_api_gbp_route_domain_add_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain_add_reply
#define _vl_api_defined_gbp_route_domain_add_reply
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_route_domain_add_reply_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain_del
#define _vl_api_defined_gbp_route_domain_del
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 rd_id;
}) vl_api_gbp_route_domain_del_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain_del_reply
#define _vl_api_defined_gbp_route_domain_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_route_domain_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain_dump
#define _vl_api_defined_gbp_route_domain_dump
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_route_domain_dump_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain_dump_reply
#define _vl_api_defined_gbp_route_domain_dump_reply
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain_dump_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_route_domain_dump_reply_t;
#endif

#ifndef _vl_api_defined_gbp_route_domain_details
#define _vl_api_defined_gbp_route_domain_details
typedef VL_API_PACKED(struct _vl_api_gbp_route_domain_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_route_domain_t rd;
}) vl_api_gbp_route_domain_details_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_add
#define _vl_api_defined_gbp_endpoint_add
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_endpoint_t endpoint;
}) vl_api_gbp_endpoint_add_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_add_reply
#define _vl_api_defined_gbp_endpoint_add_reply
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 handle;
}) vl_api_gbp_endpoint_add_reply_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_del
#define _vl_api_defined_gbp_endpoint_del
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 handle;
}) vl_api_gbp_endpoint_del_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_del_reply
#define _vl_api_defined_gbp_endpoint_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_endpoint_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_dump
#define _vl_api_defined_gbp_endpoint_dump
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_endpoint_dump_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_details
#define _vl_api_defined_gbp_endpoint_details
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_details {
    u16 _vl_msg_id;
    u32 context;
    f64 age;
    u32 handle;
    vl_api_gbp_endpoint_t endpoint;
}) vl_api_gbp_endpoint_details_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_group_add
#define _vl_api_defined_gbp_endpoint_group_add
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_group_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_endpoint_group_t epg;
}) vl_api_gbp_endpoint_group_add_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_group_add_reply
#define _vl_api_defined_gbp_endpoint_group_add_reply
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_group_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_endpoint_group_add_reply_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_group_del
#define _vl_api_defined_gbp_endpoint_group_del
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_group_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 sclass;
}) vl_api_gbp_endpoint_group_del_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_group_del_reply
#define _vl_api_defined_gbp_endpoint_group_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_group_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_endpoint_group_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_group_dump
#define _vl_api_defined_gbp_endpoint_group_dump
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_group_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_endpoint_group_dump_t;
#endif

#ifndef _vl_api_defined_gbp_endpoint_group_details
#define _vl_api_defined_gbp_endpoint_group_details
typedef VL_API_PACKED(struct _vl_api_gbp_endpoint_group_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_endpoint_group_t epg;
}) vl_api_gbp_endpoint_group_details_t;
#endif

#ifndef _vl_api_defined_gbp_recirc_add_del
#define _vl_api_defined_gbp_recirc_add_del
typedef VL_API_PACKED(struct _vl_api_gbp_recirc_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_gbp_recirc_t recirc;
}) vl_api_gbp_recirc_add_del_t;
#endif

#ifndef _vl_api_defined_gbp_recirc_add_del_reply
#define _vl_api_defined_gbp_recirc_add_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_recirc_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_recirc_add_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_recirc_dump
#define _vl_api_defined_gbp_recirc_dump
typedef VL_API_PACKED(struct _vl_api_gbp_recirc_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_recirc_dump_t;
#endif

#ifndef _vl_api_defined_gbp_recirc_details
#define _vl_api_defined_gbp_recirc_details
typedef VL_API_PACKED(struct _vl_api_gbp_recirc_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_recirc_t recirc;
}) vl_api_gbp_recirc_details_t;
#endif

#ifndef _vl_api_defined_gbp_subnet_add_del
#define _vl_api_defined_gbp_subnet_add_del
typedef VL_API_PACKED(struct _vl_api_gbp_subnet_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_gbp_subnet_t subnet;
}) vl_api_gbp_subnet_add_del_t;
#endif

#ifndef _vl_api_defined_gbp_subnet_add_del_reply
#define _vl_api_defined_gbp_subnet_add_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_subnet_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_subnet_add_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_subnet_dump
#define _vl_api_defined_gbp_subnet_dump
typedef VL_API_PACKED(struct _vl_api_gbp_subnet_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_subnet_dump_t;
#endif

#ifndef _vl_api_defined_gbp_subnet_details
#define _vl_api_defined_gbp_subnet_details
typedef VL_API_PACKED(struct _vl_api_gbp_subnet_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_subnet_t subnet;
}) vl_api_gbp_subnet_details_t;
#endif

#ifndef _vl_api_defined_gbp_contract_add_del
#define _vl_api_defined_gbp_contract_add_del
typedef VL_API_PACKED(struct _vl_api_gbp_contract_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_gbp_contract_t contract;
}) vl_api_gbp_contract_add_del_t;
#endif

#ifndef _vl_api_defined_gbp_contract_add_del_reply
#define _vl_api_defined_gbp_contract_add_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_contract_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
}) vl_api_gbp_contract_add_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_contract_dump
#define _vl_api_defined_gbp_contract_dump
typedef VL_API_PACKED(struct _vl_api_gbp_contract_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_contract_dump_t;
#endif

#ifndef _vl_api_defined_gbp_contract_details
#define _vl_api_defined_gbp_contract_details
typedef VL_API_PACKED(struct _vl_api_gbp_contract_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_contract_t contract;
}) vl_api_gbp_contract_details_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_add
#define _vl_api_defined_gbp_vxlan_tunnel_add
typedef VL_API_PACKED(struct _vl_api_gbp_vxlan_tunnel_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_gbp_vxlan_tunnel_t tunnel;
}) vl_api_gbp_vxlan_tunnel_add_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_add_reply
#define _vl_api_defined_gbp_vxlan_tunnel_add_reply
typedef VL_API_PACKED(struct _vl_api_gbp_vxlan_tunnel_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_gbp_vxlan_tunnel_add_reply_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_del
#define _vl_api_defined_gbp_vxlan_tunnel_del
typedef VL_API_PACKED(struct _vl_api_gbp_vxlan_tunnel_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vni;
}) vl_api_gbp_vxlan_tunnel_del_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_del_reply
#define _vl_api_defined_gbp_vxlan_tunnel_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_vxlan_tunnel_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_vxlan_tunnel_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_dump
#define _vl_api_defined_gbp_vxlan_tunnel_dump
typedef VL_API_PACKED(struct _vl_api_gbp_vxlan_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_vxlan_tunnel_dump_t;
#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_details
#define _vl_api_defined_gbp_vxlan_tunnel_details
typedef VL_API_PACKED(struct _vl_api_gbp_vxlan_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_vxlan_tunnel_t tunnel;
}) vl_api_gbp_vxlan_tunnel_details_t;
#endif

#ifndef _vl_api_defined_gbp_ext_itf_add_del
#define _vl_api_defined_gbp_ext_itf_add_del
typedef VL_API_PACKED(struct _vl_api_gbp_ext_itf_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_gbp_ext_itf_t ext_itf;
}) vl_api_gbp_ext_itf_add_del_t;
#endif

#ifndef _vl_api_defined_gbp_ext_itf_add_del_reply
#define _vl_api_defined_gbp_ext_itf_add_del_reply
typedef VL_API_PACKED(struct _vl_api_gbp_ext_itf_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gbp_ext_itf_add_del_reply_t;
#endif

#ifndef _vl_api_defined_gbp_ext_itf_dump
#define _vl_api_defined_gbp_ext_itf_dump
typedef VL_API_PACKED(struct _vl_api_gbp_ext_itf_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gbp_ext_itf_dump_t;
#endif

#ifndef _vl_api_defined_gbp_ext_itf_details
#define _vl_api_defined_gbp_ext_itf_details
typedef VL_API_PACKED(struct _vl_api_gbp_ext_itf_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gbp_ext_itf_t ext_itf;
}) vl_api_gbp_ext_itf_details_t;
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

#ifndef _vl_api_defined_gbp_bridge_domain_t_print
#define _vl_api_defined_gbp_bridge_domain_t_print
static inline void *vl_api_gbp_bridge_domain_t_print (vl_api_gbp_bridge_domain_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_bridge_domain_t:\n");
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "rd_id: %u\n", a->rd_id);
    vl_print(handle, "bvi_sw_if_index: %u\n", a->bvi_sw_if_index);
    vl_print(handle, "uu_fwd_sw_if_index: %u\n", a->uu_fwd_sw_if_index);
    vl_print(handle, "bm_flood_sw_if_index: %u\n", a->bm_flood_sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_t_print
#define _vl_api_defined_gbp_route_domain_t_print
static inline void *vl_api_gbp_route_domain_t_print (vl_api_gbp_route_domain_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_route_domain_t:\n");
    vl_print(handle, "rd_id: %u\n", a->rd_id);
    vl_print(handle, "ip4_table_id: %u\n", a->ip4_table_id);
    vl_print(handle, "ip6_table_id: %u\n", a->ip6_table_id);
    vl_print(handle, "ip4_uu_sw_if_index: %u\n", a->ip4_uu_sw_if_index);
    vl_print(handle, "ip6_uu_sw_if_index: %u\n", a->ip6_uu_sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_tun_t_print
#define _vl_api_defined_gbp_endpoint_tun_t_print
static inline void *vl_api_gbp_endpoint_tun_t_print (vl_api_gbp_endpoint_tun_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_tun_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_t_print
#define _vl_api_defined_gbp_endpoint_t_print
static inline void *vl_api_gbp_endpoint_t_print (vl_api_gbp_endpoint_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "sclass: %u\n", a->sclass);
    vl_print(handle, "n_ips: %u\n", a->n_ips);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_retention_t_print
#define _vl_api_defined_gbp_endpoint_retention_t_print
static inline void *vl_api_gbp_endpoint_retention_t_print (vl_api_gbp_endpoint_retention_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_retention_t:\n");
    vl_print(handle, "remote_ep_timeout: %u\n", a->remote_ep_timeout);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_t_print
#define _vl_api_defined_gbp_endpoint_group_t_print
static inline void *vl_api_gbp_endpoint_group_t_print (vl_api_gbp_endpoint_group_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_group_t:\n");
    vl_print(handle, "vnid: %u\n", a->vnid);
    vl_print(handle, "sclass: %u\n", a->sclass);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "rd_id: %u\n", a->rd_id);
    vl_print(handle, "uplink_sw_if_index: %u\n", a->uplink_sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_recirc_t_print
#define _vl_api_defined_gbp_recirc_t_print
static inline void *vl_api_gbp_recirc_t_print (vl_api_gbp_recirc_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_recirc_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "sclass: %u\n", a->sclass);
    vl_print(handle, "is_ext: %u\n", a->is_ext);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_subnet_t_print
#define _vl_api_defined_gbp_subnet_t_print
static inline void *vl_api_gbp_subnet_t_print (vl_api_gbp_subnet_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_subnet_t:\n");
    vl_print(handle, "rd_id: %u\n", a->rd_id);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "sclass: %u\n", a->sclass);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_next_hop_t_print
#define _vl_api_defined_gbp_next_hop_t_print
static inline void *vl_api_gbp_next_hop_t_print (vl_api_gbp_next_hop_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_next_hop_t:\n");
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "rd_id: %u\n", a->rd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_next_hop_set_t_print
#define _vl_api_defined_gbp_next_hop_set_t_print
static inline void *vl_api_gbp_next_hop_set_t_print (vl_api_gbp_next_hop_set_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_next_hop_set_t:\n");
    vl_print(handle, "n_nhs: %u\n", a->n_nhs);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_rule_t_print
#define _vl_api_defined_gbp_rule_t_print
static inline void *vl_api_gbp_rule_t_print (vl_api_gbp_rule_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_rule_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_contract_t_print
#define _vl_api_defined_gbp_contract_t_print
static inline void *vl_api_gbp_contract_t_print (vl_api_gbp_contract_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_contract_t:\n");
    vl_print(handle, "sclass: %u\n", a->sclass);
    vl_print(handle, "dclass: %u\n", a->dclass);
    vl_print(handle, "acl_index: %u\n", a->acl_index);
    vl_print(handle, "n_ether_types: %u\n", a->n_ether_types);
    vl_print(handle, "n_rules: %u\n", a->n_rules);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_t_print
#define _vl_api_defined_gbp_vxlan_tunnel_t_print
static inline void *vl_api_gbp_vxlan_tunnel_t_print (vl_api_gbp_vxlan_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_vxlan_tunnel_t:\n");
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "bd_rd_id: %u\n", a->bd_rd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_t_print
#define _vl_api_defined_gbp_ext_itf_t_print
static inline void *vl_api_gbp_ext_itf_t_print (vl_api_gbp_ext_itf_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_ext_itf_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "bd_id: %u\n", a->bd_id);
    vl_print(handle, "rd_id: %u\n", a->rd_id);
    return handle;
}

#endif

/***** manual: vl_api_gbp_bridge_domain_add_t_print  *****/

#ifndef _vl_api_defined_gbp_bridge_domain_add_reply_t_print
#define _vl_api_defined_gbp_bridge_domain_add_reply_t_print
static inline void *vl_api_gbp_bridge_domain_add_reply_t_print (vl_api_gbp_bridge_domain_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_bridge_domain_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_gbp_bridge_domain_del_t_print  *****/

#ifndef _vl_api_defined_gbp_bridge_domain_del_reply_t_print
#define _vl_api_defined_gbp_bridge_domain_del_reply_t_print
static inline void *vl_api_gbp_bridge_domain_del_reply_t_print (vl_api_gbp_bridge_domain_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_bridge_domain_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_dump_t_print
#define _vl_api_defined_gbp_bridge_domain_dump_t_print
static inline void *vl_api_gbp_bridge_domain_dump_t_print (vl_api_gbp_bridge_domain_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_bridge_domain_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_dump_reply_t_print
#define _vl_api_defined_gbp_bridge_domain_dump_reply_t_print
static inline void *vl_api_gbp_bridge_domain_dump_reply_t_print (vl_api_gbp_bridge_domain_dump_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_bridge_domain_dump_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_details_t_print
#define _vl_api_defined_gbp_bridge_domain_details_t_print
static inline void *vl_api_gbp_bridge_domain_details_t_print (vl_api_gbp_bridge_domain_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_bridge_domain_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gbp_route_domain_add_t_print  *****/

#ifndef _vl_api_defined_gbp_route_domain_add_reply_t_print
#define _vl_api_defined_gbp_route_domain_add_reply_t_print
static inline void *vl_api_gbp_route_domain_add_reply_t_print (vl_api_gbp_route_domain_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_route_domain_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_gbp_route_domain_del_t_print  *****/

#ifndef _vl_api_defined_gbp_route_domain_del_reply_t_print
#define _vl_api_defined_gbp_route_domain_del_reply_t_print
static inline void *vl_api_gbp_route_domain_del_reply_t_print (vl_api_gbp_route_domain_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_route_domain_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_dump_t_print
#define _vl_api_defined_gbp_route_domain_dump_t_print
static inline void *vl_api_gbp_route_domain_dump_t_print (vl_api_gbp_route_domain_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_route_domain_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_dump_reply_t_print
#define _vl_api_defined_gbp_route_domain_dump_reply_t_print
static inline void *vl_api_gbp_route_domain_dump_reply_t_print (vl_api_gbp_route_domain_dump_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_route_domain_dump_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_details_t_print
#define _vl_api_defined_gbp_route_domain_details_t_print
static inline void *vl_api_gbp_route_domain_details_t_print (vl_api_gbp_route_domain_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_route_domain_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gbp_endpoint_add_t_print  *****/

#ifndef _vl_api_defined_gbp_endpoint_add_reply_t_print
#define _vl_api_defined_gbp_endpoint_add_reply_t_print
static inline void *vl_api_gbp_endpoint_add_reply_t_print (vl_api_gbp_endpoint_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "handle: %u\n", a->handle);
    return handle;
}

#endif

/***** manual: vl_api_gbp_endpoint_del_t_print  *****/

#ifndef _vl_api_defined_gbp_endpoint_del_reply_t_print
#define _vl_api_defined_gbp_endpoint_del_reply_t_print
static inline void *vl_api_gbp_endpoint_del_reply_t_print (vl_api_gbp_endpoint_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_dump_t_print
#define _vl_api_defined_gbp_endpoint_dump_t_print
static inline void *vl_api_gbp_endpoint_dump_t_print (vl_api_gbp_endpoint_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_details_t_print
#define _vl_api_defined_gbp_endpoint_details_t_print
static inline void *vl_api_gbp_endpoint_details_t_print (vl_api_gbp_endpoint_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "age: %.2f\n", a->age);
    vl_print(handle, "handle: %u\n", a->handle);
    return handle;
}

#endif

/***** manual: vl_api_gbp_endpoint_group_add_t_print  *****/

#ifndef _vl_api_defined_gbp_endpoint_group_add_reply_t_print
#define _vl_api_defined_gbp_endpoint_group_add_reply_t_print
static inline void *vl_api_gbp_endpoint_group_add_reply_t_print (vl_api_gbp_endpoint_group_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_group_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_gbp_endpoint_group_del_t_print  *****/

#ifndef _vl_api_defined_gbp_endpoint_group_del_reply_t_print
#define _vl_api_defined_gbp_endpoint_group_del_reply_t_print
static inline void *vl_api_gbp_endpoint_group_del_reply_t_print (vl_api_gbp_endpoint_group_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_group_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_dump_t_print
#define _vl_api_defined_gbp_endpoint_group_dump_t_print
static inline void *vl_api_gbp_endpoint_group_dump_t_print (vl_api_gbp_endpoint_group_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_group_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_details_t_print
#define _vl_api_defined_gbp_endpoint_group_details_t_print
static inline void *vl_api_gbp_endpoint_group_details_t_print (vl_api_gbp_endpoint_group_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_endpoint_group_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gbp_recirc_add_del_t_print  *****/

#ifndef _vl_api_defined_gbp_recirc_add_del_reply_t_print
#define _vl_api_defined_gbp_recirc_add_del_reply_t_print
static inline void *vl_api_gbp_recirc_add_del_reply_t_print (vl_api_gbp_recirc_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_recirc_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_recirc_dump_t_print
#define _vl_api_defined_gbp_recirc_dump_t_print
static inline void *vl_api_gbp_recirc_dump_t_print (vl_api_gbp_recirc_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_recirc_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_recirc_details_t_print
#define _vl_api_defined_gbp_recirc_details_t_print
static inline void *vl_api_gbp_recirc_details_t_print (vl_api_gbp_recirc_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_recirc_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gbp_subnet_add_del_t_print  *****/

#ifndef _vl_api_defined_gbp_subnet_add_del_reply_t_print
#define _vl_api_defined_gbp_subnet_add_del_reply_t_print
static inline void *vl_api_gbp_subnet_add_del_reply_t_print (vl_api_gbp_subnet_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_subnet_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_subnet_dump_t_print
#define _vl_api_defined_gbp_subnet_dump_t_print
static inline void *vl_api_gbp_subnet_dump_t_print (vl_api_gbp_subnet_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_subnet_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_subnet_details_t_print
#define _vl_api_defined_gbp_subnet_details_t_print
static inline void *vl_api_gbp_subnet_details_t_print (vl_api_gbp_subnet_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_subnet_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gbp_contract_add_del_t_print  *****/

#ifndef _vl_api_defined_gbp_contract_add_del_reply_t_print
#define _vl_api_defined_gbp_contract_add_del_reply_t_print
static inline void *vl_api_gbp_contract_add_del_reply_t_print (vl_api_gbp_contract_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_contract_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "stats_index: %u\n", a->stats_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_contract_dump_t_print
#define _vl_api_defined_gbp_contract_dump_t_print
static inline void *vl_api_gbp_contract_dump_t_print (vl_api_gbp_contract_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_contract_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_contract_details_t_print
#define _vl_api_defined_gbp_contract_details_t_print
static inline void *vl_api_gbp_contract_details_t_print (vl_api_gbp_contract_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_contract_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gbp_vxlan_tunnel_add_t_print  *****/

#ifndef _vl_api_defined_gbp_vxlan_tunnel_add_reply_t_print
#define _vl_api_defined_gbp_vxlan_tunnel_add_reply_t_print
static inline void *vl_api_gbp_vxlan_tunnel_add_reply_t_print (vl_api_gbp_vxlan_tunnel_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_vxlan_tunnel_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

/***** manual: vl_api_gbp_vxlan_tunnel_del_t_print  *****/

#ifndef _vl_api_defined_gbp_vxlan_tunnel_del_reply_t_print
#define _vl_api_defined_gbp_vxlan_tunnel_del_reply_t_print
static inline void *vl_api_gbp_vxlan_tunnel_del_reply_t_print (vl_api_gbp_vxlan_tunnel_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_vxlan_tunnel_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_dump_t_print
#define _vl_api_defined_gbp_vxlan_tunnel_dump_t_print
static inline void *vl_api_gbp_vxlan_tunnel_dump_t_print (vl_api_gbp_vxlan_tunnel_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_vxlan_tunnel_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_details_t_print
#define _vl_api_defined_gbp_vxlan_tunnel_details_t_print
static inline void *vl_api_gbp_vxlan_tunnel_details_t_print (vl_api_gbp_vxlan_tunnel_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_vxlan_tunnel_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gbp_ext_itf_add_del_t_print  *****/

#ifndef _vl_api_defined_gbp_ext_itf_add_del_reply_t_print
#define _vl_api_defined_gbp_ext_itf_add_del_reply_t_print
static inline void *vl_api_gbp_ext_itf_add_del_reply_t_print (vl_api_gbp_ext_itf_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_ext_itf_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_dump_t_print
#define _vl_api_defined_gbp_ext_itf_dump_t_print
static inline void *vl_api_gbp_ext_itf_dump_t_print (vl_api_gbp_ext_itf_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_ext_itf_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_details_t_print
#define _vl_api_defined_gbp_ext_itf_details_t_print
static inline void *vl_api_gbp_ext_itf_details_t_print (vl_api_gbp_ext_itf_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_gbp_ext_itf_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
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

#ifndef _vl_api_defined_gbp_bridge_domain_t_endian
#define _vl_api_defined_gbp_bridge_domain_t_endian
static inline void vl_api_gbp_bridge_domain_t_endian (vl_api_gbp_bridge_domain_t *a)
{
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    /* a->flags = a->flags (no-op) */
    a->bvi_sw_if_index = clib_net_to_host_u32(a->bvi_sw_if_index);
    a->uu_fwd_sw_if_index = clib_net_to_host_u32(a->uu_fwd_sw_if_index);
    a->bm_flood_sw_if_index = clib_net_to_host_u32(a->bm_flood_sw_if_index);
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_t_endian
#define _vl_api_defined_gbp_route_domain_t_endian
static inline void vl_api_gbp_route_domain_t_endian (vl_api_gbp_route_domain_t *a)
{
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    a->ip4_table_id = clib_net_to_host_u32(a->ip4_table_id);
    a->ip6_table_id = clib_net_to_host_u32(a->ip6_table_id);
    a->ip4_uu_sw_if_index = clib_net_to_host_u32(a->ip4_uu_sw_if_index);
    a->ip6_uu_sw_if_index = clib_net_to_host_u32(a->ip6_uu_sw_if_index);
    /* a->scope = a->scope (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_tun_t_endian
#define _vl_api_defined_gbp_endpoint_tun_t_endian
static inline void vl_api_gbp_endpoint_tun_t_endian (vl_api_gbp_endpoint_tun_t *a)
{
    /* a->src = a->src (no-op) */
    /* a->dst = a->dst (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_t_endian
#define _vl_api_defined_gbp_endpoint_t_endian
static inline void vl_api_gbp_endpoint_t_endian (vl_api_gbp_endpoint_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->sclass = clib_net_to_host_u16(a->sclass);
    /* a->flags = a->flags (no-op) */
    /* a->mac = a->mac (no-op) */
    /* a->tun = a->tun (no-op) */
    /* a->n_ips = a->n_ips (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_retention_t_endian
#define _vl_api_defined_gbp_endpoint_retention_t_endian
static inline void vl_api_gbp_endpoint_retention_t_endian (vl_api_gbp_endpoint_retention_t *a)
{
    a->remote_ep_timeout = clib_net_to_host_u32(a->remote_ep_timeout);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_t_endian
#define _vl_api_defined_gbp_endpoint_group_t_endian
static inline void vl_api_gbp_endpoint_group_t_endian (vl_api_gbp_endpoint_group_t *a)
{
    a->vnid = clib_net_to_host_u32(a->vnid);
    a->sclass = clib_net_to_host_u16(a->sclass);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    a->uplink_sw_if_index = clib_net_to_host_u32(a->uplink_sw_if_index);
    /* a->retention = a->retention (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_recirc_t_endian
#define _vl_api_defined_gbp_recirc_t_endian
static inline void vl_api_gbp_recirc_t_endian (vl_api_gbp_recirc_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->sclass = clib_net_to_host_u16(a->sclass);
    /* a->is_ext = a->is_ext (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_subnet_t_endian
#define _vl_api_defined_gbp_subnet_t_endian
static inline void vl_api_gbp_subnet_t_endian (vl_api_gbp_subnet_t *a)
{
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->sclass = clib_net_to_host_u16(a->sclass);
    /* a->type = a->type (no-op) */
    /* a->prefix = a->prefix (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_next_hop_t_endian
#define _vl_api_defined_gbp_next_hop_t_endian
static inline void vl_api_gbp_next_hop_t_endian (vl_api_gbp_next_hop_t *a)
{
    /* a->ip = a->ip (no-op) */
    /* a->mac = a->mac (no-op) */
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
}

#endif

#ifndef _vl_api_defined_gbp_next_hop_set_t_endian
#define _vl_api_defined_gbp_next_hop_set_t_endian
static inline void vl_api_gbp_next_hop_set_t_endian (vl_api_gbp_next_hop_set_t *a)
{
    /* a->hash_mode = a->hash_mode (no-op) */
    /* a->n_nhs = a->n_nhs (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_rule_t_endian
#define _vl_api_defined_gbp_rule_t_endian
static inline void vl_api_gbp_rule_t_endian (vl_api_gbp_rule_t *a)
{
    /* a->action = a->action (no-op) */
    /* a->nh_set = a->nh_set (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_contract_t_endian
#define _vl_api_defined_gbp_contract_t_endian
static inline void vl_api_gbp_contract_t_endian (vl_api_gbp_contract_t *a)
{
    /* a->scope = a->scope (no-op) */
    a->sclass = clib_net_to_host_u16(a->sclass);
    a->dclass = clib_net_to_host_u16(a->dclass);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    /* a->n_ether_types = a->n_ether_types (no-op) */
    /* a->n_rules = a->n_rules (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_t_endian
#define _vl_api_defined_gbp_vxlan_tunnel_t_endian
static inline void vl_api_gbp_vxlan_tunnel_t_endian (vl_api_gbp_vxlan_tunnel_t *a)
{
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->mode = a->mode (no-op) */
    a->bd_rd_id = clib_net_to_host_u32(a->bd_rd_id);
    /* a->src = a->src (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_t_endian
#define _vl_api_defined_gbp_ext_itf_t_endian
static inline void vl_api_gbp_ext_itf_t_endian (vl_api_gbp_ext_itf_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
    /* a->flags = a->flags (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_add_t_endian
#define _vl_api_defined_gbp_bridge_domain_add_t_endian
static inline void vl_api_gbp_bridge_domain_add_t_endian (vl_api_gbp_bridge_domain_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->bd = a->bd (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_add_reply_t_endian
#define _vl_api_defined_gbp_bridge_domain_add_reply_t_endian
static inline void vl_api_gbp_bridge_domain_add_reply_t_endian (vl_api_gbp_bridge_domain_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_del_t_endian
#define _vl_api_defined_gbp_bridge_domain_del_t_endian
static inline void vl_api_gbp_bridge_domain_del_t_endian (vl_api_gbp_bridge_domain_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd_id = clib_net_to_host_u32(a->bd_id);
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_del_reply_t_endian
#define _vl_api_defined_gbp_bridge_domain_del_reply_t_endian
static inline void vl_api_gbp_bridge_domain_del_reply_t_endian (vl_api_gbp_bridge_domain_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_dump_t_endian
#define _vl_api_defined_gbp_bridge_domain_dump_t_endian
static inline void vl_api_gbp_bridge_domain_dump_t_endian (vl_api_gbp_bridge_domain_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_dump_reply_t_endian
#define _vl_api_defined_gbp_bridge_domain_dump_reply_t_endian
static inline void vl_api_gbp_bridge_domain_dump_reply_t_endian (vl_api_gbp_bridge_domain_dump_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_bridge_domain_details_t_endian
#define _vl_api_defined_gbp_bridge_domain_details_t_endian
static inline void vl_api_gbp_bridge_domain_details_t_endian (vl_api_gbp_bridge_domain_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->bd = a->bd (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_add_t_endian
#define _vl_api_defined_gbp_route_domain_add_t_endian
static inline void vl_api_gbp_route_domain_add_t_endian (vl_api_gbp_route_domain_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->rd = a->rd (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_add_reply_t_endian
#define _vl_api_defined_gbp_route_domain_add_reply_t_endian
static inline void vl_api_gbp_route_domain_add_reply_t_endian (vl_api_gbp_route_domain_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_del_t_endian
#define _vl_api_defined_gbp_route_domain_del_t_endian
static inline void vl_api_gbp_route_domain_del_t_endian (vl_api_gbp_route_domain_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->rd_id = clib_net_to_host_u32(a->rd_id);
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_del_reply_t_endian
#define _vl_api_defined_gbp_route_domain_del_reply_t_endian
static inline void vl_api_gbp_route_domain_del_reply_t_endian (vl_api_gbp_route_domain_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_dump_t_endian
#define _vl_api_defined_gbp_route_domain_dump_t_endian
static inline void vl_api_gbp_route_domain_dump_t_endian (vl_api_gbp_route_domain_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_dump_reply_t_endian
#define _vl_api_defined_gbp_route_domain_dump_reply_t_endian
static inline void vl_api_gbp_route_domain_dump_reply_t_endian (vl_api_gbp_route_domain_dump_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_route_domain_details_t_endian
#define _vl_api_defined_gbp_route_domain_details_t_endian
static inline void vl_api_gbp_route_domain_details_t_endian (vl_api_gbp_route_domain_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->rd = a->rd (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_add_t_endian
#define _vl_api_defined_gbp_endpoint_add_t_endian
static inline void vl_api_gbp_endpoint_add_t_endian (vl_api_gbp_endpoint_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->endpoint = a->endpoint (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_add_reply_t_endian
#define _vl_api_defined_gbp_endpoint_add_reply_t_endian
static inline void vl_api_gbp_endpoint_add_reply_t_endian (vl_api_gbp_endpoint_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->handle = clib_net_to_host_u32(a->handle);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_del_t_endian
#define _vl_api_defined_gbp_endpoint_del_t_endian
static inline void vl_api_gbp_endpoint_del_t_endian (vl_api_gbp_endpoint_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->handle = clib_net_to_host_u32(a->handle);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_del_reply_t_endian
#define _vl_api_defined_gbp_endpoint_del_reply_t_endian
static inline void vl_api_gbp_endpoint_del_reply_t_endian (vl_api_gbp_endpoint_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_dump_t_endian
#define _vl_api_defined_gbp_endpoint_dump_t_endian
static inline void vl_api_gbp_endpoint_dump_t_endian (vl_api_gbp_endpoint_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_details_t_endian
#define _vl_api_defined_gbp_endpoint_details_t_endian
static inline void vl_api_gbp_endpoint_details_t_endian (vl_api_gbp_endpoint_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->age = clib_net_to_host_u64(a->age);
    a->handle = clib_net_to_host_u32(a->handle);
    /* a->endpoint = a->endpoint (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_add_t_endian
#define _vl_api_defined_gbp_endpoint_group_add_t_endian
static inline void vl_api_gbp_endpoint_group_add_t_endian (vl_api_gbp_endpoint_group_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->epg = a->epg (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_add_reply_t_endian
#define _vl_api_defined_gbp_endpoint_group_add_reply_t_endian
static inline void vl_api_gbp_endpoint_group_add_reply_t_endian (vl_api_gbp_endpoint_group_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_del_t_endian
#define _vl_api_defined_gbp_endpoint_group_del_t_endian
static inline void vl_api_gbp_endpoint_group_del_t_endian (vl_api_gbp_endpoint_group_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sclass = clib_net_to_host_u16(a->sclass);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_del_reply_t_endian
#define _vl_api_defined_gbp_endpoint_group_del_reply_t_endian
static inline void vl_api_gbp_endpoint_group_del_reply_t_endian (vl_api_gbp_endpoint_group_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_dump_t_endian
#define _vl_api_defined_gbp_endpoint_group_dump_t_endian
static inline void vl_api_gbp_endpoint_group_dump_t_endian (vl_api_gbp_endpoint_group_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_endpoint_group_details_t_endian
#define _vl_api_defined_gbp_endpoint_group_details_t_endian
static inline void vl_api_gbp_endpoint_group_details_t_endian (vl_api_gbp_endpoint_group_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->epg = a->epg (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_recirc_add_del_t_endian
#define _vl_api_defined_gbp_recirc_add_del_t_endian
static inline void vl_api_gbp_recirc_add_del_t_endian (vl_api_gbp_recirc_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->recirc = a->recirc (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_recirc_add_del_reply_t_endian
#define _vl_api_defined_gbp_recirc_add_del_reply_t_endian
static inline void vl_api_gbp_recirc_add_del_reply_t_endian (vl_api_gbp_recirc_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_recirc_dump_t_endian
#define _vl_api_defined_gbp_recirc_dump_t_endian
static inline void vl_api_gbp_recirc_dump_t_endian (vl_api_gbp_recirc_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_recirc_details_t_endian
#define _vl_api_defined_gbp_recirc_details_t_endian
static inline void vl_api_gbp_recirc_details_t_endian (vl_api_gbp_recirc_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->recirc = a->recirc (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_subnet_add_del_t_endian
#define _vl_api_defined_gbp_subnet_add_del_t_endian
static inline void vl_api_gbp_subnet_add_del_t_endian (vl_api_gbp_subnet_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->subnet = a->subnet (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_subnet_add_del_reply_t_endian
#define _vl_api_defined_gbp_subnet_add_del_reply_t_endian
static inline void vl_api_gbp_subnet_add_del_reply_t_endian (vl_api_gbp_subnet_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_subnet_dump_t_endian
#define _vl_api_defined_gbp_subnet_dump_t_endian
static inline void vl_api_gbp_subnet_dump_t_endian (vl_api_gbp_subnet_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_subnet_details_t_endian
#define _vl_api_defined_gbp_subnet_details_t_endian
static inline void vl_api_gbp_subnet_details_t_endian (vl_api_gbp_subnet_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->subnet = a->subnet (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_contract_add_del_t_endian
#define _vl_api_defined_gbp_contract_add_del_t_endian
static inline void vl_api_gbp_contract_add_del_t_endian (vl_api_gbp_contract_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->contract = a->contract (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_contract_add_del_reply_t_endian
#define _vl_api_defined_gbp_contract_add_del_reply_t_endian
static inline void vl_api_gbp_contract_add_del_reply_t_endian (vl_api_gbp_contract_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

#endif

#ifndef _vl_api_defined_gbp_contract_dump_t_endian
#define _vl_api_defined_gbp_contract_dump_t_endian
static inline void vl_api_gbp_contract_dump_t_endian (vl_api_gbp_contract_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_contract_details_t_endian
#define _vl_api_defined_gbp_contract_details_t_endian
static inline void vl_api_gbp_contract_details_t_endian (vl_api_gbp_contract_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->contract = a->contract (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_add_t_endian
#define _vl_api_defined_gbp_vxlan_tunnel_add_t_endian
static inline void vl_api_gbp_vxlan_tunnel_add_t_endian (vl_api_gbp_vxlan_tunnel_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->tunnel = a->tunnel (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_add_reply_t_endian
#define _vl_api_defined_gbp_vxlan_tunnel_add_reply_t_endian
static inline void vl_api_gbp_vxlan_tunnel_add_reply_t_endian (vl_api_gbp_vxlan_tunnel_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_del_t_endian
#define _vl_api_defined_gbp_vxlan_tunnel_del_t_endian
static inline void vl_api_gbp_vxlan_tunnel_del_t_endian (vl_api_gbp_vxlan_tunnel_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_del_reply_t_endian
#define _vl_api_defined_gbp_vxlan_tunnel_del_reply_t_endian
static inline void vl_api_gbp_vxlan_tunnel_del_reply_t_endian (vl_api_gbp_vxlan_tunnel_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_dump_t_endian
#define _vl_api_defined_gbp_vxlan_tunnel_dump_t_endian
static inline void vl_api_gbp_vxlan_tunnel_dump_t_endian (vl_api_gbp_vxlan_tunnel_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_vxlan_tunnel_details_t_endian
#define _vl_api_defined_gbp_vxlan_tunnel_details_t_endian
static inline void vl_api_gbp_vxlan_tunnel_details_t_endian (vl_api_gbp_vxlan_tunnel_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->tunnel = a->tunnel (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_add_del_t_endian
#define _vl_api_defined_gbp_ext_itf_add_del_t_endian
static inline void vl_api_gbp_ext_itf_add_del_t_endian (vl_api_gbp_ext_itf_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->ext_itf = a->ext_itf (no-op) */
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_add_del_reply_t_endian
#define _vl_api_defined_gbp_ext_itf_add_del_reply_t_endian
static inline void vl_api_gbp_ext_itf_add_del_reply_t_endian (vl_api_gbp_ext_itf_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_dump_t_endian
#define _vl_api_defined_gbp_ext_itf_dump_t_endian
static inline void vl_api_gbp_ext_itf_dump_t_endian (vl_api_gbp_ext_itf_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gbp_ext_itf_details_t_endian
#define _vl_api_defined_gbp_ext_itf_details_t_endian
static inline void vl_api_gbp_ext_itf_details_t_endian (vl_api_gbp_ext_itf_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ext_itf = a->ext_itf (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(gbp.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(gbp.api, 0x11019e53)

#endif

