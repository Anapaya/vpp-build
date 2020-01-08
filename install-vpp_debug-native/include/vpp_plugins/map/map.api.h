/*
 * VLIB API definitions 2020-01-07 14:25:34
 * Input file: map.api
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
#warning no content included from map.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_MAP_ADD_DOMAIN, vl_api_map_add_domain_t_handler)
vl_msg_id(VL_API_MAP_ADD_DOMAIN_REPLY, vl_api_map_add_domain_reply_t_handler)
vl_msg_id(VL_API_MAP_DEL_DOMAIN, vl_api_map_del_domain_t_handler)
vl_msg_id(VL_API_MAP_DEL_DOMAIN_REPLY, vl_api_map_del_domain_reply_t_handler)
vl_msg_id(VL_API_MAP_ADD_DEL_RULE, vl_api_map_add_del_rule_t_handler)
vl_msg_id(VL_API_MAP_ADD_DEL_RULE_REPLY, vl_api_map_add_del_rule_reply_t_handler)
vl_msg_id(VL_API_MAP_DOMAIN_DUMP, vl_api_map_domain_dump_t_handler)
vl_msg_id(VL_API_MAP_DOMAIN_DETAILS, vl_api_map_domain_details_t_handler)
vl_msg_id(VL_API_MAP_RULE_DUMP, vl_api_map_rule_dump_t_handler)
vl_msg_id(VL_API_MAP_RULE_DETAILS, vl_api_map_rule_details_t_handler)
vl_msg_id(VL_API_MAP_IF_ENABLE_DISABLE, vl_api_map_if_enable_disable_t_handler)
vl_msg_id(VL_API_MAP_IF_ENABLE_DISABLE_REPLY, vl_api_map_if_enable_disable_reply_t_handler)
vl_msg_id(VL_API_MAP_SUMMARY_STATS, vl_api_map_summary_stats_t_handler)
vl_msg_id(VL_API_MAP_SUMMARY_STATS_REPLY, vl_api_map_summary_stats_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_FRAGMENTATION, vl_api_map_param_set_fragmentation_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_FRAGMENTATION_REPLY, vl_api_map_param_set_fragmentation_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_ICMP, vl_api_map_param_set_icmp_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_ICMP_REPLY, vl_api_map_param_set_icmp_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_ICMP6, vl_api_map_param_set_icmp6_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_ICMP6_REPLY, vl_api_map_param_set_icmp6_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_ADD_DEL_PRE_RESOLVE, vl_api_map_param_add_del_pre_resolve_t_handler)
vl_msg_id(VL_API_MAP_PARAM_ADD_DEL_PRE_RESOLVE_REPLY, vl_api_map_param_add_del_pre_resolve_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_REASSEMBLY, vl_api_map_param_set_reassembly_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_REASSEMBLY_REPLY, vl_api_map_param_set_reassembly_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_SECURITY_CHECK, vl_api_map_param_set_security_check_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_SECURITY_CHECK_REPLY, vl_api_map_param_set_security_check_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_TRAFFIC_CLASS, vl_api_map_param_set_traffic_class_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_TRAFFIC_CLASS_REPLY, vl_api_map_param_set_traffic_class_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_TCP, vl_api_map_param_set_tcp_t_handler)
vl_msg_id(VL_API_MAP_PARAM_SET_TCP_REPLY, vl_api_map_param_set_tcp_reply_t_handler)
vl_msg_id(VL_API_MAP_PARAM_GET, vl_api_map_param_get_t_handler)
vl_msg_id(VL_API_MAP_PARAM_GET_REPLY, vl_api_map_param_get_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_map_add_domain_t, 1)
vl_msg_name(vl_api_map_add_domain_reply_t, 1)
vl_msg_name(vl_api_map_del_domain_t, 1)
vl_msg_name(vl_api_map_del_domain_reply_t, 1)
vl_msg_name(vl_api_map_add_del_rule_t, 1)
vl_msg_name(vl_api_map_add_del_rule_reply_t, 1)
vl_msg_name(vl_api_map_domain_dump_t, 1)
vl_msg_name(vl_api_map_domain_details_t, 1)
vl_msg_name(vl_api_map_rule_dump_t, 1)
vl_msg_name(vl_api_map_rule_details_t, 1)
vl_msg_name(vl_api_map_if_enable_disable_t, 1)
vl_msg_name(vl_api_map_if_enable_disable_reply_t, 1)
vl_msg_name(vl_api_map_summary_stats_t, 1)
vl_msg_name(vl_api_map_summary_stats_reply_t, 1)
vl_msg_name(vl_api_map_param_set_fragmentation_t, 1)
vl_msg_name(vl_api_map_param_set_fragmentation_reply_t, 1)
vl_msg_name(vl_api_map_param_set_icmp_t, 1)
vl_msg_name(vl_api_map_param_set_icmp_reply_t, 1)
vl_msg_name(vl_api_map_param_set_icmp6_t, 1)
vl_msg_name(vl_api_map_param_set_icmp6_reply_t, 1)
vl_msg_name(vl_api_map_param_add_del_pre_resolve_t, 1)
vl_msg_name(vl_api_map_param_add_del_pre_resolve_reply_t, 1)
vl_msg_name(vl_api_map_param_set_reassembly_t, 1)
vl_msg_name(vl_api_map_param_set_reassembly_reply_t, 1)
vl_msg_name(vl_api_map_param_set_security_check_t, 1)
vl_msg_name(vl_api_map_param_set_security_check_reply_t, 1)
vl_msg_name(vl_api_map_param_set_traffic_class_t, 1)
vl_msg_name(vl_api_map_param_set_traffic_class_reply_t, 1)
vl_msg_name(vl_api_map_param_set_tcp_t, 1)
vl_msg_name(vl_api_map_param_set_tcp_reply_t, 1)
vl_msg_name(vl_api_map_param_get_t, 1)
vl_msg_name(vl_api_map_param_get_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_map \
_(VL_API_MAP_ADD_DOMAIN, map_add_domain, 18755ddb) \
_(VL_API_MAP_ADD_DOMAIN_REPLY, map_add_domain_reply, 3e6d4e2c) \
_(VL_API_MAP_DEL_DOMAIN, map_del_domain, 8ac76db6) \
_(VL_API_MAP_DEL_DOMAIN_REPLY, map_del_domain_reply, e8d4e804) \
_(VL_API_MAP_ADD_DEL_RULE, map_add_del_rule, e6132040) \
_(VL_API_MAP_ADD_DEL_RULE_REPLY, map_add_del_rule_reply, e8d4e804) \
_(VL_API_MAP_DOMAIN_DUMP, map_domain_dump, 51077d14) \
_(VL_API_MAP_DOMAIN_DETAILS, map_domain_details, c36cec17) \
_(VL_API_MAP_RULE_DUMP, map_rule_dump, e43e6ff6) \
_(VL_API_MAP_RULE_DETAILS, map_rule_details, 4f932665) \
_(VL_API_MAP_IF_ENABLE_DISABLE, map_if_enable_disable, 61a30cd9) \
_(VL_API_MAP_IF_ENABLE_DISABLE_REPLY, map_if_enable_disable_reply, e8d4e804) \
_(VL_API_MAP_SUMMARY_STATS, map_summary_stats, 51077d14) \
_(VL_API_MAP_SUMMARY_STATS_REPLY, map_summary_stats_reply, 0e4ace0e) \
_(VL_API_MAP_PARAM_SET_FRAGMENTATION, map_param_set_fragmentation, 9ff54d90) \
_(VL_API_MAP_PARAM_SET_FRAGMENTATION_REPLY, map_param_set_fragmentation_reply, e8d4e804) \
_(VL_API_MAP_PARAM_SET_ICMP, map_param_set_icmp, 4c0a4fd2) \
_(VL_API_MAP_PARAM_SET_ICMP_REPLY, map_param_set_icmp_reply, e8d4e804) \
_(VL_API_MAP_PARAM_SET_ICMP6, map_param_set_icmp6, 5d01f8c1) \
_(VL_API_MAP_PARAM_SET_ICMP6_REPLY, map_param_set_icmp6_reply, e8d4e804) \
_(VL_API_MAP_PARAM_ADD_DEL_PRE_RESOLVE, map_param_add_del_pre_resolve, ea9a9a4a) \
_(VL_API_MAP_PARAM_ADD_DEL_PRE_RESOLVE_REPLY, map_param_add_del_pre_resolve_reply, e8d4e804) \
_(VL_API_MAP_PARAM_SET_REASSEMBLY, map_param_set_reassembly, 54172b10) \
_(VL_API_MAP_PARAM_SET_REASSEMBLY_REPLY, map_param_set_reassembly_reply, e8d4e804) \
_(VL_API_MAP_PARAM_SET_SECURITY_CHECK, map_param_set_security_check, 6abe9836) \
_(VL_API_MAP_PARAM_SET_SECURITY_CHECK_REPLY, map_param_set_security_check_reply, e8d4e804) \
_(VL_API_MAP_PARAM_SET_TRAFFIC_CLASS, map_param_set_traffic_class, 007ee563) \
_(VL_API_MAP_PARAM_SET_TRAFFIC_CLASS_REPLY, map_param_set_traffic_class_reply, e8d4e804) \
_(VL_API_MAP_PARAM_SET_TCP, map_param_set_tcp, 87a825d9) \
_(VL_API_MAP_PARAM_SET_TCP_REPLY, map_param_set_tcp_reply, e8d4e804) \
_(VL_API_MAP_PARAM_GET, map_param_get, 51077d14) \
_(VL_API_MAP_PARAM_GET_REPLY, map_param_get_reply, b40e9226) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_map_api
#define included_map_api
#ifndef _vl_api_defined_ip4_address
#define _vl_api_defined_ip4_address
typedef u8 vl_api_ip4_address_t[4];
#endif

#ifndef _vl_api_defined_ip6_address
#define _vl_api_defined_ip6_address
typedef u8 vl_api_ip6_address_t[16];
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

#ifndef _vl_api_defined_map_add_domain
#define _vl_api_defined_map_add_domain
typedef VL_API_PACKED(struct _vl_api_map_add_domain {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_prefix_t ip6_prefix;
    vl_api_ip4_prefix_t ip4_prefix;
    vl_api_ip6_prefix_t ip6_src;
    u8 ea_bits_len;
    u8 psid_offset;
    u8 psid_length;
    u16 mtu;
    vl_api_string_t tag;
}) vl_api_map_add_domain_t;
#endif

#ifndef _vl_api_defined_map_add_domain_reply
#define _vl_api_defined_map_add_domain_reply
typedef VL_API_PACKED(struct _vl_api_map_add_domain_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 index;
    i32 retval;
}) vl_api_map_add_domain_reply_t;
#endif

#ifndef _vl_api_defined_map_del_domain
#define _vl_api_defined_map_del_domain
typedef VL_API_PACKED(struct _vl_api_map_del_domain {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 index;
}) vl_api_map_del_domain_t;
#endif

#ifndef _vl_api_defined_map_del_domain_reply
#define _vl_api_defined_map_del_domain_reply
typedef VL_API_PACKED(struct _vl_api_map_del_domain_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_del_domain_reply_t;
#endif

#ifndef _vl_api_defined_map_add_del_rule
#define _vl_api_defined_map_add_del_rule
typedef VL_API_PACKED(struct _vl_api_map_add_del_rule {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 index;
    bool is_add;
    vl_api_ip6_address_t ip6_dst;
    u16 psid;
}) vl_api_map_add_del_rule_t;
#endif

#ifndef _vl_api_defined_map_add_del_rule_reply
#define _vl_api_defined_map_add_del_rule_reply
typedef VL_API_PACKED(struct _vl_api_map_add_del_rule_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_add_del_rule_reply_t;
#endif

#ifndef _vl_api_defined_map_domain_dump
#define _vl_api_defined_map_domain_dump
typedef VL_API_PACKED(struct _vl_api_map_domain_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_map_domain_dump_t;
#endif

#ifndef _vl_api_defined_map_domain_details
#define _vl_api_defined_map_domain_details
typedef VL_API_PACKED(struct _vl_api_map_domain_details {
    u16 _vl_msg_id;
    u32 context;
    u32 domain_index;
    vl_api_ip6_prefix_t ip6_prefix;
    vl_api_ip4_prefix_t ip4_prefix;
    vl_api_ip6_prefix_t ip6_src;
    u8 ea_bits_len;
    u8 psid_offset;
    u8 psid_length;
    u8 flags;
    u16 mtu;
    vl_api_string_t tag;
}) vl_api_map_domain_details_t;
#endif

#ifndef _vl_api_defined_map_rule_dump
#define _vl_api_defined_map_rule_dump
typedef VL_API_PACKED(struct _vl_api_map_rule_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 domain_index;
}) vl_api_map_rule_dump_t;
#endif

#ifndef _vl_api_defined_map_rule_details
#define _vl_api_defined_map_rule_details
typedef VL_API_PACKED(struct _vl_api_map_rule_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t ip6_dst;
    u16 psid;
}) vl_api_map_rule_details_t;
#endif

#ifndef _vl_api_defined_map_if_enable_disable
#define _vl_api_defined_map_if_enable_disable
typedef VL_API_PACKED(struct _vl_api_map_if_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    bool is_enable;
    bool is_translation;
}) vl_api_map_if_enable_disable_t;
#endif

#ifndef _vl_api_defined_map_if_enable_disable_reply
#define _vl_api_defined_map_if_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_map_if_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_if_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_map_summary_stats
#define _vl_api_defined_map_summary_stats
typedef VL_API_PACKED(struct _vl_api_map_summary_stats {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_map_summary_stats_t;
#endif

#ifndef _vl_api_defined_map_summary_stats_reply
#define _vl_api_defined_map_summary_stats_reply
typedef VL_API_PACKED(struct _vl_api_map_summary_stats_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 total_bindings;
    u64 total_pkts[2];
    u64 total_bytes[2];
    u64 total_ip4_fragments;
    u64 total_security_check[2];
}) vl_api_map_summary_stats_reply_t;
#endif

#ifndef _vl_api_defined_map_param_set_fragmentation
#define _vl_api_defined_map_param_set_fragmentation
typedef VL_API_PACKED(struct _vl_api_map_param_set_fragmentation {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool inner;
    bool ignore_df;
}) vl_api_map_param_set_fragmentation_t;
#endif

#ifndef _vl_api_defined_map_param_set_fragmentation_reply
#define _vl_api_defined_map_param_set_fragmentation_reply
typedef VL_API_PACKED(struct _vl_api_map_param_set_fragmentation_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_set_fragmentation_reply_t;
#endif

#ifndef _vl_api_defined_map_param_set_icmp
#define _vl_api_defined_map_param_set_icmp
typedef VL_API_PACKED(struct _vl_api_map_param_set_icmp {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip4_err_relay_src;
}) vl_api_map_param_set_icmp_t;
#endif

#ifndef _vl_api_defined_map_param_set_icmp_reply
#define _vl_api_defined_map_param_set_icmp_reply
typedef VL_API_PACKED(struct _vl_api_map_param_set_icmp_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_set_icmp_reply_t;
#endif

#ifndef _vl_api_defined_map_param_set_icmp6
#define _vl_api_defined_map_param_set_icmp6
typedef VL_API_PACKED(struct _vl_api_map_param_set_icmp6 {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable_unreachable;
}) vl_api_map_param_set_icmp6_t;
#endif

#ifndef _vl_api_defined_map_param_set_icmp6_reply
#define _vl_api_defined_map_param_set_icmp6_reply
typedef VL_API_PACKED(struct _vl_api_map_param_set_icmp6_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_set_icmp6_reply_t;
#endif

#ifndef _vl_api_defined_map_param_add_del_pre_resolve
#define _vl_api_defined_map_param_add_del_pre_resolve
typedef VL_API_PACKED(struct _vl_api_map_param_add_del_pre_resolve {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip4_address_t ip4_nh_address;
    vl_api_ip6_address_t ip6_nh_address;
}) vl_api_map_param_add_del_pre_resolve_t;
#endif

#ifndef _vl_api_defined_map_param_add_del_pre_resolve_reply
#define _vl_api_defined_map_param_add_del_pre_resolve_reply
typedef VL_API_PACKED(struct _vl_api_map_param_add_del_pre_resolve_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_add_del_pre_resolve_reply_t;
#endif

#ifndef _vl_api_defined_map_param_set_reassembly
#define _vl_api_defined_map_param_set_reassembly
typedef VL_API_PACKED(struct _vl_api_map_param_set_reassembly {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_ip6;
    u16 lifetime_ms;
    u16 pool_size;
    u32 buffers;
    f64 ht_ratio;
}) vl_api_map_param_set_reassembly_t;
#endif

#ifndef _vl_api_defined_map_param_set_reassembly_reply
#define _vl_api_defined_map_param_set_reassembly_reply
typedef VL_API_PACKED(struct _vl_api_map_param_set_reassembly_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_set_reassembly_reply_t;
#endif

#ifndef _vl_api_defined_map_param_set_security_check
#define _vl_api_defined_map_param_set_security_check
typedef VL_API_PACKED(struct _vl_api_map_param_set_security_check {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable;
    bool fragments;
}) vl_api_map_param_set_security_check_t;
#endif

#ifndef _vl_api_defined_map_param_set_security_check_reply
#define _vl_api_defined_map_param_set_security_check_reply
typedef VL_API_PACKED(struct _vl_api_map_param_set_security_check_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_set_security_check_reply_t;
#endif

#ifndef _vl_api_defined_map_param_set_traffic_class
#define _vl_api_defined_map_param_set_traffic_class
typedef VL_API_PACKED(struct _vl_api_map_param_set_traffic_class {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool copy;
    u8 class;
}) vl_api_map_param_set_traffic_class_t;
#endif

#ifndef _vl_api_defined_map_param_set_traffic_class_reply
#define _vl_api_defined_map_param_set_traffic_class_reply
typedef VL_API_PACKED(struct _vl_api_map_param_set_traffic_class_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_set_traffic_class_reply_t;
#endif

#ifndef _vl_api_defined_map_param_set_tcp
#define _vl_api_defined_map_param_set_tcp
typedef VL_API_PACKED(struct _vl_api_map_param_set_tcp {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 tcp_mss;
}) vl_api_map_param_set_tcp_t;
#endif

#ifndef _vl_api_defined_map_param_set_tcp_reply
#define _vl_api_defined_map_param_set_tcp_reply
typedef VL_API_PACKED(struct _vl_api_map_param_set_tcp_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_param_set_tcp_reply_t;
#endif

#ifndef _vl_api_defined_map_param_get
#define _vl_api_defined_map_param_get
typedef VL_API_PACKED(struct _vl_api_map_param_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_map_param_get_t;
#endif

#ifndef _vl_api_defined_map_param_get_reply
#define _vl_api_defined_map_param_get_reply
typedef VL_API_PACKED(struct _vl_api_map_param_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 frag_inner;
    u8 frag_ignore_df;
    vl_api_ip4_address_t icmp_ip4_err_relay_src;
    bool icmp6_enable_unreachable;
    vl_api_ip4_address_t ip4_nh_address;
    vl_api_ip6_address_t ip6_nh_address;
    u16 ip4_lifetime_ms;
    u16 ip4_pool_size;
    u32 ip4_buffers;
    f64 ip4_ht_ratio;
    u16 ip6_lifetime_ms;
    u16 ip6_pool_size;
    u32 ip6_buffers;
    f64 ip6_ht_ratio;
    bool sec_check_enable;
    bool sec_check_fragments;
    bool tc_copy;
    u8 tc_class;
}) vl_api_map_param_get_reply_t;
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

#ifndef _vl_api_defined_map_add_domain_t_print
#define _vl_api_defined_map_add_domain_t_print
static inline void *vl_api_map_add_domain_t_print (vl_api_map_add_domain_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_add_domain_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ea_bits_len: %u\n", a->ea_bits_len);
    vl_print(handle, "psid_offset: %u\n", a->psid_offset);
    vl_print(handle, "psid_length: %u\n", a->psid_length);
    vl_print(handle, "mtu: %u\n", a->mtu);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_add_domain_reply_t_print
#define _vl_api_defined_map_add_domain_reply_t_print
static inline void *vl_api_map_add_domain_reply_t_print (vl_api_map_add_domain_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_add_domain_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "index: %u\n", a->index);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_del_domain_t_print
#define _vl_api_defined_map_del_domain_t_print
static inline void *vl_api_map_del_domain_t_print (vl_api_map_del_domain_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_del_domain_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "index: %u\n", a->index);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_del_domain_reply_t_print
#define _vl_api_defined_map_del_domain_reply_t_print
static inline void *vl_api_map_del_domain_reply_t_print (vl_api_map_del_domain_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_del_domain_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_add_del_rule_t_print
#define _vl_api_defined_map_add_del_rule_t_print
static inline void *vl_api_map_add_del_rule_t_print (vl_api_map_add_del_rule_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_add_del_rule_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "index: %u\n", a->index);
    vl_print(handle, "psid: %u\n", a->psid);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_add_del_rule_reply_t_print
#define _vl_api_defined_map_add_del_rule_reply_t_print
static inline void *vl_api_map_add_del_rule_reply_t_print (vl_api_map_add_del_rule_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_add_del_rule_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_domain_dump_t_print
#define _vl_api_defined_map_domain_dump_t_print
static inline void *vl_api_map_domain_dump_t_print (vl_api_map_domain_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_domain_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_domain_details_t_print
#define _vl_api_defined_map_domain_details_t_print
static inline void *vl_api_map_domain_details_t_print (vl_api_map_domain_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_domain_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "domain_index: %u\n", a->domain_index);
    vl_print(handle, "ea_bits_len: %u\n", a->ea_bits_len);
    vl_print(handle, "psid_offset: %u\n", a->psid_offset);
    vl_print(handle, "psid_length: %u\n", a->psid_length);
    vl_print(handle, "flags: %u\n", a->flags);
    vl_print(handle, "mtu: %u\n", a->mtu);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_rule_dump_t_print
#define _vl_api_defined_map_rule_dump_t_print
static inline void *vl_api_map_rule_dump_t_print (vl_api_map_rule_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_rule_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "domain_index: %u\n", a->domain_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_rule_details_t_print
#define _vl_api_defined_map_rule_details_t_print
static inline void *vl_api_map_rule_details_t_print (vl_api_map_rule_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_rule_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "psid: %u\n", a->psid);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_if_enable_disable_t_print
#define _vl_api_defined_map_if_enable_disable_t_print
static inline void *vl_api_map_if_enable_disable_t_print (vl_api_map_if_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_if_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_if_enable_disable_reply_t_print
#define _vl_api_defined_map_if_enable_disable_reply_t_print
static inline void *vl_api_map_if_enable_disable_reply_t_print (vl_api_map_if_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_if_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_summary_stats_t_print
#define _vl_api_defined_map_summary_stats_t_print
static inline void *vl_api_map_summary_stats_t_print (vl_api_map_summary_stats_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_summary_stats_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_summary_stats_reply_t_print
#define _vl_api_defined_map_summary_stats_reply_t_print
static inline void *vl_api_map_summary_stats_reply_t_print (vl_api_map_summary_stats_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_summary_stats_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "total_bindings: %llu\n", a->total_bindings);
    vl_print(handle, "total_ip4_fragments: %llu\n", a->total_ip4_fragments);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_fragmentation_t_print
#define _vl_api_defined_map_param_set_fragmentation_t_print
static inline void *vl_api_map_param_set_fragmentation_t_print (vl_api_map_param_set_fragmentation_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_fragmentation_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_fragmentation_reply_t_print
#define _vl_api_defined_map_param_set_fragmentation_reply_t_print
static inline void *vl_api_map_param_set_fragmentation_reply_t_print (vl_api_map_param_set_fragmentation_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_fragmentation_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp_t_print
#define _vl_api_defined_map_param_set_icmp_t_print
static inline void *vl_api_map_param_set_icmp_t_print (vl_api_map_param_set_icmp_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_icmp_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp_reply_t_print
#define _vl_api_defined_map_param_set_icmp_reply_t_print
static inline void *vl_api_map_param_set_icmp_reply_t_print (vl_api_map_param_set_icmp_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_icmp_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp6_t_print
#define _vl_api_defined_map_param_set_icmp6_t_print
static inline void *vl_api_map_param_set_icmp6_t_print (vl_api_map_param_set_icmp6_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_icmp6_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp6_reply_t_print
#define _vl_api_defined_map_param_set_icmp6_reply_t_print
static inline void *vl_api_map_param_set_icmp6_reply_t_print (vl_api_map_param_set_icmp6_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_icmp6_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_add_del_pre_resolve_t_print
#define _vl_api_defined_map_param_add_del_pre_resolve_t_print
static inline void *vl_api_map_param_add_del_pre_resolve_t_print (vl_api_map_param_add_del_pre_resolve_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_add_del_pre_resolve_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_add_del_pre_resolve_reply_t_print
#define _vl_api_defined_map_param_add_del_pre_resolve_reply_t_print
static inline void *vl_api_map_param_add_del_pre_resolve_reply_t_print (vl_api_map_param_add_del_pre_resolve_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_add_del_pre_resolve_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_reassembly_t_print
#define _vl_api_defined_map_param_set_reassembly_t_print
static inline void *vl_api_map_param_set_reassembly_t_print (vl_api_map_param_set_reassembly_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_reassembly_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "lifetime_ms: %u\n", a->lifetime_ms);
    vl_print(handle, "pool_size: %u\n", a->pool_size);
    vl_print(handle, "buffers: %u\n", a->buffers);
    vl_print(handle, "ht_ratio: %.2f\n", a->ht_ratio);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_reassembly_reply_t_print
#define _vl_api_defined_map_param_set_reassembly_reply_t_print
static inline void *vl_api_map_param_set_reassembly_reply_t_print (vl_api_map_param_set_reassembly_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_reassembly_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_security_check_t_print
#define _vl_api_defined_map_param_set_security_check_t_print
static inline void *vl_api_map_param_set_security_check_t_print (vl_api_map_param_set_security_check_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_security_check_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_security_check_reply_t_print
#define _vl_api_defined_map_param_set_security_check_reply_t_print
static inline void *vl_api_map_param_set_security_check_reply_t_print (vl_api_map_param_set_security_check_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_security_check_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_traffic_class_t_print
#define _vl_api_defined_map_param_set_traffic_class_t_print
static inline void *vl_api_map_param_set_traffic_class_t_print (vl_api_map_param_set_traffic_class_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_traffic_class_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "class: %u\n", a->class);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_traffic_class_reply_t_print
#define _vl_api_defined_map_param_set_traffic_class_reply_t_print
static inline void *vl_api_map_param_set_traffic_class_reply_t_print (vl_api_map_param_set_traffic_class_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_traffic_class_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_tcp_t_print
#define _vl_api_defined_map_param_set_tcp_t_print
static inline void *vl_api_map_param_set_tcp_t_print (vl_api_map_param_set_tcp_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_tcp_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "tcp_mss: %u\n", a->tcp_mss);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_set_tcp_reply_t_print
#define _vl_api_defined_map_param_set_tcp_reply_t_print
static inline void *vl_api_map_param_set_tcp_reply_t_print (vl_api_map_param_set_tcp_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_set_tcp_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_get_t_print
#define _vl_api_defined_map_param_get_t_print
static inline void *vl_api_map_param_get_t_print (vl_api_map_param_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_param_get_reply_t_print
#define _vl_api_defined_map_param_get_reply_t_print
static inline void *vl_api_map_param_get_reply_t_print (vl_api_map_param_get_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_param_get_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "frag_inner: %u\n", a->frag_inner);
    vl_print(handle, "frag_ignore_df: %u\n", a->frag_ignore_df);
    vl_print(handle, "ip4_lifetime_ms: %u\n", a->ip4_lifetime_ms);
    vl_print(handle, "ip4_pool_size: %u\n", a->ip4_pool_size);
    vl_print(handle, "ip4_buffers: %u\n", a->ip4_buffers);
    vl_print(handle, "ip4_ht_ratio: %.2f\n", a->ip4_ht_ratio);
    vl_print(handle, "ip6_lifetime_ms: %u\n", a->ip6_lifetime_ms);
    vl_print(handle, "ip6_pool_size: %u\n", a->ip6_pool_size);
    vl_print(handle, "ip6_buffers: %u\n", a->ip6_buffers);
    vl_print(handle, "ip6_ht_ratio: %.2f\n", a->ip6_ht_ratio);
    vl_print(handle, "tc_class: %u\n", a->tc_class);
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

#ifndef _vl_api_defined_map_add_domain_t_endian
#define _vl_api_defined_map_add_domain_t_endian
static inline void vl_api_map_add_domain_t_endian (vl_api_map_add_domain_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip6_prefix = a->ip6_prefix (no-op) */
    /* a->ip4_prefix = a->ip4_prefix (no-op) */
    /* a->ip6_src = a->ip6_src (no-op) */
    /* a->ea_bits_len = a->ea_bits_len (no-op) */
    /* a->psid_offset = a->psid_offset (no-op) */
    /* a->psid_length = a->psid_length (no-op) */
    a->mtu = clib_net_to_host_u16(a->mtu);
    /* a->tag = a->tag (no-op) */
}

#endif

#ifndef _vl_api_defined_map_add_domain_reply_t_endian
#define _vl_api_defined_map_add_domain_reply_t_endian
static inline void vl_api_map_add_domain_reply_t_endian (vl_api_map_add_domain_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->index = clib_net_to_host_u32(a->index);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_del_domain_t_endian
#define _vl_api_defined_map_del_domain_t_endian
static inline void vl_api_map_del_domain_t_endian (vl_api_map_del_domain_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->index = clib_net_to_host_u32(a->index);
}

#endif

#ifndef _vl_api_defined_map_del_domain_reply_t_endian
#define _vl_api_defined_map_del_domain_reply_t_endian
static inline void vl_api_map_del_domain_reply_t_endian (vl_api_map_del_domain_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_add_del_rule_t_endian
#define _vl_api_defined_map_add_del_rule_t_endian
static inline void vl_api_map_add_del_rule_t_endian (vl_api_map_add_del_rule_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->index = clib_net_to_host_u32(a->index);
    /* a->is_add = a->is_add (no-op) */
    /* a->ip6_dst = a->ip6_dst (no-op) */
    a->psid = clib_net_to_host_u16(a->psid);
}

#endif

#ifndef _vl_api_defined_map_add_del_rule_reply_t_endian
#define _vl_api_defined_map_add_del_rule_reply_t_endian
static inline void vl_api_map_add_del_rule_reply_t_endian (vl_api_map_add_del_rule_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_domain_dump_t_endian
#define _vl_api_defined_map_domain_dump_t_endian
static inline void vl_api_map_domain_dump_t_endian (vl_api_map_domain_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_map_domain_details_t_endian
#define _vl_api_defined_map_domain_details_t_endian
static inline void vl_api_map_domain_details_t_endian (vl_api_map_domain_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->domain_index = clib_net_to_host_u32(a->domain_index);
    /* a->ip6_prefix = a->ip6_prefix (no-op) */
    /* a->ip4_prefix = a->ip4_prefix (no-op) */
    /* a->ip6_src = a->ip6_src (no-op) */
    /* a->ea_bits_len = a->ea_bits_len (no-op) */
    /* a->psid_offset = a->psid_offset (no-op) */
    /* a->psid_length = a->psid_length (no-op) */
    /* a->flags = a->flags (no-op) */
    a->mtu = clib_net_to_host_u16(a->mtu);
    /* a->tag = a->tag (no-op) */
}

#endif

#ifndef _vl_api_defined_map_rule_dump_t_endian
#define _vl_api_defined_map_rule_dump_t_endian
static inline void vl_api_map_rule_dump_t_endian (vl_api_map_rule_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->domain_index = clib_net_to_host_u32(a->domain_index);
}

#endif

#ifndef _vl_api_defined_map_rule_details_t_endian
#define _vl_api_defined_map_rule_details_t_endian
static inline void vl_api_map_rule_details_t_endian (vl_api_map_rule_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip6_dst = a->ip6_dst (no-op) */
    a->psid = clib_net_to_host_u16(a->psid);
}

#endif

#ifndef _vl_api_defined_map_if_enable_disable_t_endian
#define _vl_api_defined_map_if_enable_disable_t_endian
static inline void vl_api_map_if_enable_disable_t_endian (vl_api_map_if_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_enable = a->is_enable (no-op) */
    /* a->is_translation = a->is_translation (no-op) */
}

#endif

#ifndef _vl_api_defined_map_if_enable_disable_reply_t_endian
#define _vl_api_defined_map_if_enable_disable_reply_t_endian
static inline void vl_api_map_if_enable_disable_reply_t_endian (vl_api_map_if_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_summary_stats_t_endian
#define _vl_api_defined_map_summary_stats_t_endian
static inline void vl_api_map_summary_stats_t_endian (vl_api_map_summary_stats_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_map_summary_stats_reply_t_endian
#define _vl_api_defined_map_summary_stats_reply_t_endian
static inline void vl_api_map_summary_stats_reply_t_endian (vl_api_map_summary_stats_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->total_bindings = clib_net_to_host_u64(a->total_bindings);
    a->total_ip4_fragments = clib_net_to_host_u64(a->total_ip4_fragments);
}

#endif

#ifndef _vl_api_defined_map_param_set_fragmentation_t_endian
#define _vl_api_defined_map_param_set_fragmentation_t_endian
static inline void vl_api_map_param_set_fragmentation_t_endian (vl_api_map_param_set_fragmentation_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->inner = a->inner (no-op) */
    /* a->ignore_df = a->ignore_df (no-op) */
}

#endif

#ifndef _vl_api_defined_map_param_set_fragmentation_reply_t_endian
#define _vl_api_defined_map_param_set_fragmentation_reply_t_endian
static inline void vl_api_map_param_set_fragmentation_reply_t_endian (vl_api_map_param_set_fragmentation_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp_t_endian
#define _vl_api_defined_map_param_set_icmp_t_endian
static inline void vl_api_map_param_set_icmp_t_endian (vl_api_map_param_set_icmp_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip4_err_relay_src = a->ip4_err_relay_src (no-op) */
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp_reply_t_endian
#define _vl_api_defined_map_param_set_icmp_reply_t_endian
static inline void vl_api_map_param_set_icmp_reply_t_endian (vl_api_map_param_set_icmp_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp6_t_endian
#define _vl_api_defined_map_param_set_icmp6_t_endian
static inline void vl_api_map_param_set_icmp6_t_endian (vl_api_map_param_set_icmp6_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_unreachable = a->enable_unreachable (no-op) */
}

#endif

#ifndef _vl_api_defined_map_param_set_icmp6_reply_t_endian
#define _vl_api_defined_map_param_set_icmp6_reply_t_endian
static inline void vl_api_map_param_set_icmp6_reply_t_endian (vl_api_map_param_set_icmp6_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_add_del_pre_resolve_t_endian
#define _vl_api_defined_map_param_add_del_pre_resolve_t_endian
static inline void vl_api_map_param_add_del_pre_resolve_t_endian (vl_api_map_param_add_del_pre_resolve_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->ip4_nh_address = a->ip4_nh_address (no-op) */
    /* a->ip6_nh_address = a->ip6_nh_address (no-op) */
}

#endif

#ifndef _vl_api_defined_map_param_add_del_pre_resolve_reply_t_endian
#define _vl_api_defined_map_param_add_del_pre_resolve_reply_t_endian
static inline void vl_api_map_param_add_del_pre_resolve_reply_t_endian (vl_api_map_param_add_del_pre_resolve_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_set_reassembly_t_endian
#define _vl_api_defined_map_param_set_reassembly_t_endian
static inline void vl_api_map_param_set_reassembly_t_endian (vl_api_map_param_set_reassembly_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    a->lifetime_ms = clib_net_to_host_u16(a->lifetime_ms);
    a->pool_size = clib_net_to_host_u16(a->pool_size);
    a->buffers = clib_net_to_host_u32(a->buffers);
    a->ht_ratio = clib_net_to_host_u64(a->ht_ratio);
}

#endif

#ifndef _vl_api_defined_map_param_set_reassembly_reply_t_endian
#define _vl_api_defined_map_param_set_reassembly_reply_t_endian
static inline void vl_api_map_param_set_reassembly_reply_t_endian (vl_api_map_param_set_reassembly_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_set_security_check_t_endian
#define _vl_api_defined_map_param_set_security_check_t_endian
static inline void vl_api_map_param_set_security_check_t_endian (vl_api_map_param_set_security_check_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    /* a->fragments = a->fragments (no-op) */
}

#endif

#ifndef _vl_api_defined_map_param_set_security_check_reply_t_endian
#define _vl_api_defined_map_param_set_security_check_reply_t_endian
static inline void vl_api_map_param_set_security_check_reply_t_endian (vl_api_map_param_set_security_check_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_set_traffic_class_t_endian
#define _vl_api_defined_map_param_set_traffic_class_t_endian
static inline void vl_api_map_param_set_traffic_class_t_endian (vl_api_map_param_set_traffic_class_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->copy = a->copy (no-op) */
    /* a->class = a->class (no-op) */
}

#endif

#ifndef _vl_api_defined_map_param_set_traffic_class_reply_t_endian
#define _vl_api_defined_map_param_set_traffic_class_reply_t_endian
static inline void vl_api_map_param_set_traffic_class_reply_t_endian (vl_api_map_param_set_traffic_class_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_set_tcp_t_endian
#define _vl_api_defined_map_param_set_tcp_t_endian
static inline void vl_api_map_param_set_tcp_t_endian (vl_api_map_param_set_tcp_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->tcp_mss = clib_net_to_host_u16(a->tcp_mss);
}

#endif

#ifndef _vl_api_defined_map_param_set_tcp_reply_t_endian
#define _vl_api_defined_map_param_set_tcp_reply_t_endian
static inline void vl_api_map_param_set_tcp_reply_t_endian (vl_api_map_param_set_tcp_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_param_get_t_endian
#define _vl_api_defined_map_param_get_t_endian
static inline void vl_api_map_param_get_t_endian (vl_api_map_param_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_map_param_get_reply_t_endian
#define _vl_api_defined_map_param_get_reply_t_endian
static inline void vl_api_map_param_get_reply_t_endian (vl_api_map_param_get_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->frag_inner = a->frag_inner (no-op) */
    /* a->frag_ignore_df = a->frag_ignore_df (no-op) */
    /* a->icmp_ip4_err_relay_src = a->icmp_ip4_err_relay_src (no-op) */
    /* a->icmp6_enable_unreachable = a->icmp6_enable_unreachable (no-op) */
    /* a->ip4_nh_address = a->ip4_nh_address (no-op) */
    /* a->ip6_nh_address = a->ip6_nh_address (no-op) */
    a->ip4_lifetime_ms = clib_net_to_host_u16(a->ip4_lifetime_ms);
    a->ip4_pool_size = clib_net_to_host_u16(a->ip4_pool_size);
    a->ip4_buffers = clib_net_to_host_u32(a->ip4_buffers);
    a->ip4_ht_ratio = clib_net_to_host_u64(a->ip4_ht_ratio);
    a->ip6_lifetime_ms = clib_net_to_host_u16(a->ip6_lifetime_ms);
    a->ip6_pool_size = clib_net_to_host_u16(a->ip6_pool_size);
    a->ip6_buffers = clib_net_to_host_u32(a->ip6_buffers);
    a->ip6_ht_ratio = clib_net_to_host_u64(a->ip6_ht_ratio);
    /* a->sec_check_enable = a->sec_check_enable (no-op) */
    /* a->sec_check_fragments = a->sec_check_fragments (no-op) */
    /* a->tc_copy = a->tc_copy (no-op) */
    /* a->tc_class = a->tc_class (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(map.api, 3, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(map.api, 0x590943b2)

#endif

