/*
 * VLIB API definitions 2020-01-07 14:25:06
 * Input file: dhcp.api
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
#warning no content included from dhcp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_DHCP_PROXY_CONFIG, vl_api_dhcp_proxy_config_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_CONFIG_REPLY, vl_api_dhcp_proxy_config_reply_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_SET_VSS, vl_api_dhcp_proxy_set_vss_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_SET_VSS_REPLY, vl_api_dhcp_proxy_set_vss_reply_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_CONFIG, vl_api_dhcp_client_config_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_CONFIG_REPLY, vl_api_dhcp_client_config_reply_t_handler)
vl_msg_id(VL_API_DHCP_COMPL_EVENT, vl_api_dhcp_compl_event_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_DUMP, vl_api_dhcp_client_dump_t_handler)
vl_msg_id(VL_API_DHCP_CLIENT_DETAILS, vl_api_dhcp_client_details_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_DUMP, vl_api_dhcp_proxy_dump_t_handler)
vl_msg_id(VL_API_DHCP_PROXY_DETAILS, vl_api_dhcp_proxy_details_t_handler)
vl_msg_id(VL_API_DHCP6_DUID_LL_SET, vl_api_dhcp6_duid_ll_set_t_handler)
vl_msg_id(VL_API_DHCP6_DUID_LL_SET_REPLY, vl_api_dhcp6_duid_ll_set_reply_t_handler)
vl_msg_id(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE, vl_api_dhcp6_clients_enable_disable_t_handler)
vl_msg_id(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE_REPLY, vl_api_dhcp6_clients_enable_disable_reply_t_handler)
vl_msg_id(VL_API_DHCP6_SEND_CLIENT_MESSAGE, vl_api_dhcp6_send_client_message_t_handler)
vl_msg_id(VL_API_DHCP6_SEND_CLIENT_MESSAGE_REPLY, vl_api_dhcp6_send_client_message_reply_t_handler)
vl_msg_id(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE, vl_api_dhcp6_pd_send_client_message_t_handler)
vl_msg_id(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE_REPLY, vl_api_dhcp6_pd_send_client_message_reply_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_REPLY_EVENTS, vl_api_want_dhcp6_reply_events_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_REPLY_EVENTS_REPLY, vl_api_want_dhcp6_reply_events_reply_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_PD_REPLY_EVENTS, vl_api_want_dhcp6_pd_reply_events_t_handler)
vl_msg_id(VL_API_WANT_DHCP6_PD_REPLY_EVENTS_REPLY, vl_api_want_dhcp6_pd_reply_events_reply_t_handler)
vl_msg_id(VL_API_DHCP6_REPLY_EVENT, vl_api_dhcp6_reply_event_t_handler)
vl_msg_id(VL_API_DHCP6_PD_REPLY_EVENT, vl_api_dhcp6_pd_reply_event_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_dhcp_proxy_config_t, 1)
vl_msg_name(vl_api_dhcp_proxy_config_reply_t, 1)
vl_msg_name(vl_api_dhcp_proxy_set_vss_t, 1)
vl_msg_name(vl_api_dhcp_proxy_set_vss_reply_t, 1)
vl_msg_name(vl_api_dhcp_client_config_t, 1)
vl_msg_name(vl_api_dhcp_client_config_reply_t, 1)
vl_msg_name(vl_api_dhcp_compl_event_t, 1)
vl_msg_name(vl_api_dhcp_client_dump_t, 1)
vl_msg_name(vl_api_dhcp_client_details_t, 1)
vl_msg_name(vl_api_dhcp_proxy_dump_t, 1)
vl_msg_name(vl_api_dhcp_proxy_details_t, 1)
vl_msg_name(vl_api_dhcp6_duid_ll_set_t, 1)
vl_msg_name(vl_api_dhcp6_duid_ll_set_reply_t, 1)
vl_msg_name(vl_api_dhcp6_clients_enable_disable_t, 1)
vl_msg_name(vl_api_dhcp6_clients_enable_disable_reply_t, 1)
vl_msg_name(vl_api_dhcp6_send_client_message_t, 1)
vl_msg_name(vl_api_dhcp6_send_client_message_reply_t, 1)
vl_msg_name(vl_api_dhcp6_pd_send_client_message_t, 1)
vl_msg_name(vl_api_dhcp6_pd_send_client_message_reply_t, 1)
vl_msg_name(vl_api_want_dhcp6_reply_events_t, 1)
vl_msg_name(vl_api_want_dhcp6_reply_events_reply_t, 1)
vl_msg_name(vl_api_want_dhcp6_pd_reply_events_t, 1)
vl_msg_name(vl_api_want_dhcp6_pd_reply_events_reply_t, 1)
vl_msg_name(vl_api_dhcp6_reply_event_t, 1)
vl_msg_name(vl_api_dhcp6_pd_reply_event_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_dhcp \
_(VL_API_DHCP_PROXY_CONFIG, dhcp_proxy_config, 6af4b645) \
_(VL_API_DHCP_PROXY_CONFIG_REPLY, dhcp_proxy_config_reply, e8d4e804) \
_(VL_API_DHCP_PROXY_SET_VSS, dhcp_proxy_set_vss, 606535aa) \
_(VL_API_DHCP_PROXY_SET_VSS_REPLY, dhcp_proxy_set_vss_reply, e8d4e804) \
_(VL_API_DHCP_CLIENT_CONFIG, dhcp_client_config, 87a429e7) \
_(VL_API_DHCP_CLIENT_CONFIG_REPLY, dhcp_client_config_reply, e8d4e804) \
_(VL_API_DHCP_COMPL_EVENT, dhcp_compl_event, ed1e53d7) \
_(VL_API_DHCP_CLIENT_DUMP, dhcp_client_dump, 51077d14) \
_(VL_API_DHCP_CLIENT_DETAILS, dhcp_client_details, 4a95a2ad) \
_(VL_API_DHCP_PROXY_DUMP, dhcp_proxy_dump, 6fe91190) \
_(VL_API_DHCP_PROXY_DETAILS, dhcp_proxy_details, e6c45917) \
_(VL_API_DHCP6_DUID_LL_SET, dhcp6_duid_ll_set, 0f6ca323) \
_(VL_API_DHCP6_DUID_LL_SET_REPLY, dhcp6_duid_ll_set_reply, e8d4e804) \
_(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE, dhcp6_clients_enable_disable, 8050327d) \
_(VL_API_DHCP6_CLIENTS_ENABLE_DISABLE_REPLY, dhcp6_clients_enable_disable_reply, e8d4e804) \
_(VL_API_DHCP6_SEND_CLIENT_MESSAGE, dhcp6_send_client_message, 993f872f) \
_(VL_API_DHCP6_SEND_CLIENT_MESSAGE_REPLY, dhcp6_send_client_message_reply, e8d4e804) \
_(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE, dhcp6_pd_send_client_message, dadbfe97) \
_(VL_API_DHCP6_PD_SEND_CLIENT_MESSAGE_REPLY, dhcp6_pd_send_client_message_reply, e8d4e804) \
_(VL_API_WANT_DHCP6_REPLY_EVENTS, want_dhcp6_reply_events, 05b454b5) \
_(VL_API_WANT_DHCP6_REPLY_EVENTS_REPLY, want_dhcp6_reply_events_reply, e8d4e804) \
_(VL_API_WANT_DHCP6_PD_REPLY_EVENTS, want_dhcp6_pd_reply_events, 05b454b5) \
_(VL_API_WANT_DHCP6_PD_REPLY_EVENTS_REPLY, want_dhcp6_pd_reply_events_reply, e8d4e804) \
_(VL_API_DHCP6_REPLY_EVENT, dhcp6_reply_event, 8a34e0f5) \
_(VL_API_DHCP6_PD_REPLY_EVENT, dhcp6_pd_reply_event, 0e53217a) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_dhcp_api
#define included_dhcp_api
#ifndef _vl_api_defined_ip6_address
#define _vl_api_defined_ip6_address
typedef u8 vl_api_ip6_address_t[16];
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

#ifndef _vl_api_defined_dhcp_client
#define _vl_api_defined_dhcp_client
typedef VL_API_PACKED(struct _vl_api_dhcp_client {
    u32 sw_if_index;
    u8 hostname[64];
    u8 id[64];
    u8 want_dhcp_event;
    u8 set_broadcast_flag;
    vl_api_ip_dscp_t dscp;
    u32 pid;
}) vl_api_dhcp_client_t;
#endif

#ifndef _vl_api_defined_domain_server
#define _vl_api_defined_domain_server
typedef VL_API_PACKED(struct _vl_api_domain_server {
    u8 address[16];
}) vl_api_domain_server_t;
#endif

#ifndef _vl_api_defined_dhcp_lease
#define _vl_api_defined_dhcp_lease
typedef VL_API_PACKED(struct _vl_api_dhcp_lease {
    u32 sw_if_index;
    u8 state;
    u8 hostname[64];
    u8 is_ipv6;
    u8 mask_width;
    u8 host_address[16];
    u8 router_address[16];
    u8 host_mac[6];
    u8 count;
    vl_api_domain_server_t domain_server[0];
}) vl_api_dhcp_lease_t;
#endif

#ifndef _vl_api_defined_dhcp_server
#define _vl_api_defined_dhcp_server
typedef VL_API_PACKED(struct _vl_api_dhcp_server {
    u32 server_vrf_id;
    u8 dhcp_server[16];
}) vl_api_dhcp_server_t;
#endif

#ifndef _vl_api_defined_dhcp6_address_info
#define _vl_api_defined_dhcp6_address_info
typedef VL_API_PACKED(struct _vl_api_dhcp6_address_info {
    u8 address[16];
    u32 valid_time;
    u32 preferred_time;
}) vl_api_dhcp6_address_info_t;
#endif

#ifndef _vl_api_defined_dhcp6_pd_prefix_info
#define _vl_api_defined_dhcp6_pd_prefix_info
typedef VL_API_PACKED(struct _vl_api_dhcp6_pd_prefix_info {
    u8 prefix[16];
    u8 prefix_length;
    u32 valid_time;
    u32 preferred_time;
}) vl_api_dhcp6_pd_prefix_info_t;
#endif

#ifndef _vl_api_defined_dhcp_proxy_config
#define _vl_api_defined_dhcp_proxy_config
typedef VL_API_PACKED(struct _vl_api_dhcp_proxy_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 rx_vrf_id;
    u32 server_vrf_id;
    u8 is_ipv6;
    u8 is_add;
    u8 dhcp_server[16];
    u8 dhcp_src_address[16];
}) vl_api_dhcp_proxy_config_t;
#endif

#ifndef _vl_api_defined_dhcp_proxy_config_reply
#define _vl_api_defined_dhcp_proxy_config_reply
typedef VL_API_PACKED(struct _vl_api_dhcp_proxy_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dhcp_proxy_config_reply_t;
#endif

#ifndef _vl_api_defined_dhcp_proxy_set_vss
#define _vl_api_defined_dhcp_proxy_set_vss
typedef VL_API_PACKED(struct _vl_api_dhcp_proxy_set_vss {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 tbl_id;
    u8 vss_type;
    u8 vpn_ascii_id[129];
    u32 oui;
    u32 vpn_index;
    u8 is_ipv6;
    u8 is_add;
}) vl_api_dhcp_proxy_set_vss_t;
#endif

#ifndef _vl_api_defined_dhcp_proxy_set_vss_reply
#define _vl_api_defined_dhcp_proxy_set_vss_reply
typedef VL_API_PACKED(struct _vl_api_dhcp_proxy_set_vss_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dhcp_proxy_set_vss_reply_t;
#endif

#ifndef _vl_api_defined_dhcp_client_config
#define _vl_api_defined_dhcp_client_config
typedef VL_API_PACKED(struct _vl_api_dhcp_client_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_dhcp_client_t client;
}) vl_api_dhcp_client_config_t;
#endif

#ifndef _vl_api_defined_dhcp_client_config_reply
#define _vl_api_defined_dhcp_client_config_reply
typedef VL_API_PACKED(struct _vl_api_dhcp_client_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dhcp_client_config_reply_t;
#endif

#ifndef _vl_api_defined_dhcp_compl_event
#define _vl_api_defined_dhcp_compl_event
typedef VL_API_PACKED(struct _vl_api_dhcp_compl_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    vl_api_dhcp_lease_t lease;
}) vl_api_dhcp_compl_event_t;
#endif

#ifndef _vl_api_defined_dhcp_client_dump
#define _vl_api_defined_dhcp_client_dump
typedef VL_API_PACKED(struct _vl_api_dhcp_client_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_dhcp_client_dump_t;
#endif

#ifndef _vl_api_defined_dhcp_client_details
#define _vl_api_defined_dhcp_client_details
typedef VL_API_PACKED(struct _vl_api_dhcp_client_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_dhcp_client_t client;
    vl_api_dhcp_lease_t lease;
}) vl_api_dhcp_client_details_t;
#endif

#ifndef _vl_api_defined_dhcp_proxy_dump
#define _vl_api_defined_dhcp_proxy_dump
typedef VL_API_PACKED(struct _vl_api_dhcp_proxy_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ip6;
}) vl_api_dhcp_proxy_dump_t;
#endif

#ifndef _vl_api_defined_dhcp_proxy_details
#define _vl_api_defined_dhcp_proxy_details
typedef VL_API_PACKED(struct _vl_api_dhcp_proxy_details {
    u16 _vl_msg_id;
    u32 context;
    u32 rx_vrf_id;
    u32 vss_oui;
    u32 vss_fib_id;
    u8 vss_type;
    u8 vss_vpn_ascii_id[129];
    u8 is_ipv6;
    u8 dhcp_src_address[16];
    u8 count;
    vl_api_dhcp_server_t servers[0];
}) vl_api_dhcp_proxy_details_t;
#endif

#ifndef _vl_api_defined_dhcp6_duid_ll_set
#define _vl_api_defined_dhcp6_duid_ll_set
typedef VL_API_PACKED(struct _vl_api_dhcp6_duid_ll_set {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 duid_ll[10];
}) vl_api_dhcp6_duid_ll_set_t;
#endif

#ifndef _vl_api_defined_dhcp6_duid_ll_set_reply
#define _vl_api_defined_dhcp6_duid_ll_set_reply
typedef VL_API_PACKED(struct _vl_api_dhcp6_duid_ll_set_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dhcp6_duid_ll_set_reply_t;
#endif

#ifndef _vl_api_defined_dhcp6_clients_enable_disable
#define _vl_api_defined_dhcp6_clients_enable_disable
typedef VL_API_PACKED(struct _vl_api_dhcp6_clients_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable;
}) vl_api_dhcp6_clients_enable_disable_t;
#endif

#ifndef _vl_api_defined_dhcp6_clients_enable_disable_reply
#define _vl_api_defined_dhcp6_clients_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_dhcp6_clients_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dhcp6_clients_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_dhcp6_send_client_message
#define _vl_api_defined_dhcp6_send_client_message
typedef VL_API_PACKED(struct _vl_api_dhcp6_send_client_message {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 server_index;
    u32 irt;
    u32 mrt;
    u32 mrc;
    u32 mrd;
    u8 stop;
    u8 msg_type;
    u32 T1;
    u32 T2;
    u32 n_addresses;
    vl_api_dhcp6_address_info_t addresses[0];
}) vl_api_dhcp6_send_client_message_t;
#endif

#ifndef _vl_api_defined_dhcp6_send_client_message_reply
#define _vl_api_defined_dhcp6_send_client_message_reply
typedef VL_API_PACKED(struct _vl_api_dhcp6_send_client_message_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dhcp6_send_client_message_reply_t;
#endif

#ifndef _vl_api_defined_dhcp6_pd_send_client_message
#define _vl_api_defined_dhcp6_pd_send_client_message
typedef VL_API_PACKED(struct _vl_api_dhcp6_pd_send_client_message {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 server_index;
    u32 irt;
    u32 mrt;
    u32 mrc;
    u32 mrd;
    u8 stop;
    u8 msg_type;
    u32 T1;
    u32 T2;
    u32 n_prefixes;
    vl_api_dhcp6_pd_prefix_info_t prefixes[0];
}) vl_api_dhcp6_pd_send_client_message_t;
#endif

#ifndef _vl_api_defined_dhcp6_pd_send_client_message_reply
#define _vl_api_defined_dhcp6_pd_send_client_message_reply
typedef VL_API_PACKED(struct _vl_api_dhcp6_pd_send_client_message_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dhcp6_pd_send_client_message_reply_t;
#endif

#ifndef _vl_api_defined_want_dhcp6_reply_events
#define _vl_api_defined_want_dhcp6_reply_events
typedef VL_API_PACKED(struct _vl_api_want_dhcp6_reply_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 pid;
}) vl_api_want_dhcp6_reply_events_t;
#endif

#ifndef _vl_api_defined_want_dhcp6_reply_events_reply
#define _vl_api_defined_want_dhcp6_reply_events_reply
typedef VL_API_PACKED(struct _vl_api_want_dhcp6_reply_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_dhcp6_reply_events_reply_t;
#endif

#ifndef _vl_api_defined_want_dhcp6_pd_reply_events
#define _vl_api_defined_want_dhcp6_pd_reply_events
typedef VL_API_PACKED(struct _vl_api_want_dhcp6_pd_reply_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 pid;
}) vl_api_want_dhcp6_pd_reply_events_t;
#endif

#ifndef _vl_api_defined_want_dhcp6_pd_reply_events_reply
#define _vl_api_defined_want_dhcp6_pd_reply_events_reply
typedef VL_API_PACKED(struct _vl_api_want_dhcp6_pd_reply_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_dhcp6_pd_reply_events_reply_t;
#endif

#ifndef _vl_api_defined_dhcp6_reply_event
#define _vl_api_defined_dhcp6_reply_event
typedef VL_API_PACKED(struct _vl_api_dhcp6_reply_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 sw_if_index;
    u32 server_index;
    u8 msg_type;
    u32 T1;
    u32 T2;
    u16 inner_status_code;
    u16 status_code;
    u8 preference;
    u32 n_addresses;
    vl_api_dhcp6_address_info_t addresses[0];
}) vl_api_dhcp6_reply_event_t;
#endif

#ifndef _vl_api_defined_dhcp6_pd_reply_event
#define _vl_api_defined_dhcp6_pd_reply_event
typedef VL_API_PACKED(struct _vl_api_dhcp6_pd_reply_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 sw_if_index;
    u32 server_index;
    u8 msg_type;
    u32 T1;
    u32 T2;
    u16 inner_status_code;
    u16 status_code;
    u8 preference;
    u32 n_prefixes;
    vl_api_dhcp6_pd_prefix_info_t prefixes[0];
}) vl_api_dhcp6_pd_reply_event_t;
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

#ifndef _vl_api_defined_dhcp_client_t_print
#define _vl_api_defined_dhcp_client_t_print
static inline void *vl_api_dhcp_client_t_print (vl_api_dhcp_client_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_client_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "want_dhcp_event: %u\n", a->want_dhcp_event);
    vl_print(handle, "set_broadcast_flag: %u\n", a->set_broadcast_flag);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

/***** manual: vl_api_domain_server_t_print  *****/

#ifndef _vl_api_defined_dhcp_lease_t_print
#define _vl_api_defined_dhcp_lease_t_print
static inline void *vl_api_dhcp_lease_t_print (vl_api_dhcp_lease_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_lease_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "state: %u\n", a->state);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "mask_width: %u\n", a->mask_width);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

/***** manual: vl_api_dhcp_server_t_print  *****/

#ifndef _vl_api_defined_dhcp6_address_info_t_print
#define _vl_api_defined_dhcp6_address_info_t_print
static inline void *vl_api_dhcp6_address_info_t_print (vl_api_dhcp6_address_info_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_address_info_t:\n");
    vl_print(handle, "valid_time: %u\n", a->valid_time);
    vl_print(handle, "preferred_time: %u\n", a->preferred_time);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_prefix_info_t_print
#define _vl_api_defined_dhcp6_pd_prefix_info_t_print
static inline void *vl_api_dhcp6_pd_prefix_info_t_print (vl_api_dhcp6_pd_prefix_info_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_pd_prefix_info_t:\n");
    vl_print(handle, "prefix_length: %u\n", a->prefix_length);
    vl_print(handle, "valid_time: %u\n", a->valid_time);
    vl_print(handle, "preferred_time: %u\n", a->preferred_time);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_config_t_print
#define _vl_api_defined_dhcp_proxy_config_t_print
static inline void *vl_api_dhcp_proxy_config_t_print (vl_api_dhcp_proxy_config_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_proxy_config_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "rx_vrf_id: %u\n", a->rx_vrf_id);
    vl_print(handle, "server_vrf_id: %u\n", a->server_vrf_id);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_config_reply_t_print
#define _vl_api_defined_dhcp_proxy_config_reply_t_print
static inline void *vl_api_dhcp_proxy_config_reply_t_print (vl_api_dhcp_proxy_config_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_proxy_config_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_set_vss_t_print
#define _vl_api_defined_dhcp_proxy_set_vss_t_print
static inline void *vl_api_dhcp_proxy_set_vss_t_print (vl_api_dhcp_proxy_set_vss_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_proxy_set_vss_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "tbl_id: %u\n", a->tbl_id);
    vl_print(handle, "vss_type: %u\n", a->vss_type);
    vl_print(handle, "oui: %u\n", a->oui);
    vl_print(handle, "vpn_index: %u\n", a->vpn_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_set_vss_reply_t_print
#define _vl_api_defined_dhcp_proxy_set_vss_reply_t_print
static inline void *vl_api_dhcp_proxy_set_vss_reply_t_print (vl_api_dhcp_proxy_set_vss_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_proxy_set_vss_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_client_config_t_print
#define _vl_api_defined_dhcp_client_config_t_print
static inline void *vl_api_dhcp_client_config_t_print (vl_api_dhcp_client_config_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_client_config_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_client_config_reply_t_print
#define _vl_api_defined_dhcp_client_config_reply_t_print
static inline void *vl_api_dhcp_client_config_reply_t_print (vl_api_dhcp_client_config_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_client_config_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_compl_event_t_print
#define _vl_api_defined_dhcp_compl_event_t_print
static inline void *vl_api_dhcp_compl_event_t_print (vl_api_dhcp_compl_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_compl_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_client_dump_t_print
#define _vl_api_defined_dhcp_client_dump_t_print
static inline void *vl_api_dhcp_client_dump_t_print (vl_api_dhcp_client_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_client_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_client_details_t_print
#define _vl_api_defined_dhcp_client_details_t_print
static inline void *vl_api_dhcp_client_details_t_print (vl_api_dhcp_client_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_client_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_dump_t_print
#define _vl_api_defined_dhcp_proxy_dump_t_print
static inline void *vl_api_dhcp_proxy_dump_t_print (vl_api_dhcp_proxy_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp_proxy_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    return handle;
}

#endif

/***** manual: vl_api_dhcp_proxy_details_t_print  *****/

#ifndef _vl_api_defined_dhcp6_duid_ll_set_t_print
#define _vl_api_defined_dhcp6_duid_ll_set_t_print
static inline void *vl_api_dhcp6_duid_ll_set_t_print (vl_api_dhcp6_duid_ll_set_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_duid_ll_set_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_duid_ll_set_reply_t_print
#define _vl_api_defined_dhcp6_duid_ll_set_reply_t_print
static inline void *vl_api_dhcp6_duid_ll_set_reply_t_print (vl_api_dhcp6_duid_ll_set_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_duid_ll_set_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_clients_enable_disable_t_print
#define _vl_api_defined_dhcp6_clients_enable_disable_t_print
static inline void *vl_api_dhcp6_clients_enable_disable_t_print (vl_api_dhcp6_clients_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_clients_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_clients_enable_disable_reply_t_print
#define _vl_api_defined_dhcp6_clients_enable_disable_reply_t_print
static inline void *vl_api_dhcp6_clients_enable_disable_reply_t_print (vl_api_dhcp6_clients_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_clients_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_send_client_message_t_print
#define _vl_api_defined_dhcp6_send_client_message_t_print
static inline void *vl_api_dhcp6_send_client_message_t_print (vl_api_dhcp6_send_client_message_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_send_client_message_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "server_index: %u\n", a->server_index);
    vl_print(handle, "irt: %u\n", a->irt);
    vl_print(handle, "mrt: %u\n", a->mrt);
    vl_print(handle, "mrc: %u\n", a->mrc);
    vl_print(handle, "mrd: %u\n", a->mrd);
    vl_print(handle, "stop: %u\n", a->stop);
    vl_print(handle, "msg_type: %u\n", a->msg_type);
    vl_print(handle, "T1: %u\n", a->T1);
    vl_print(handle, "T2: %u\n", a->T2);
    vl_print(handle, "n_addresses: %u\n", a->n_addresses);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_send_client_message_reply_t_print
#define _vl_api_defined_dhcp6_send_client_message_reply_t_print
static inline void *vl_api_dhcp6_send_client_message_reply_t_print (vl_api_dhcp6_send_client_message_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_send_client_message_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_send_client_message_t_print
#define _vl_api_defined_dhcp6_pd_send_client_message_t_print
static inline void *vl_api_dhcp6_pd_send_client_message_t_print (vl_api_dhcp6_pd_send_client_message_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_pd_send_client_message_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "server_index: %u\n", a->server_index);
    vl_print(handle, "irt: %u\n", a->irt);
    vl_print(handle, "mrt: %u\n", a->mrt);
    vl_print(handle, "mrc: %u\n", a->mrc);
    vl_print(handle, "mrd: %u\n", a->mrd);
    vl_print(handle, "stop: %u\n", a->stop);
    vl_print(handle, "msg_type: %u\n", a->msg_type);
    vl_print(handle, "T1: %u\n", a->T1);
    vl_print(handle, "T2: %u\n", a->T2);
    vl_print(handle, "n_prefixes: %u\n", a->n_prefixes);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_send_client_message_reply_t_print
#define _vl_api_defined_dhcp6_pd_send_client_message_reply_t_print
static inline void *vl_api_dhcp6_pd_send_client_message_reply_t_print (vl_api_dhcp6_pd_send_client_message_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_pd_send_client_message_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_dhcp6_reply_events_t_print
#define _vl_api_defined_want_dhcp6_reply_events_t_print
static inline void *vl_api_want_dhcp6_reply_events_t_print (vl_api_want_dhcp6_reply_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_dhcp6_reply_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_dhcp6_reply_events_reply_t_print
#define _vl_api_defined_want_dhcp6_reply_events_reply_t_print
static inline void *vl_api_want_dhcp6_reply_events_reply_t_print (vl_api_want_dhcp6_reply_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_dhcp6_reply_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_dhcp6_pd_reply_events_t_print
#define _vl_api_defined_want_dhcp6_pd_reply_events_t_print
static inline void *vl_api_want_dhcp6_pd_reply_events_t_print (vl_api_want_dhcp6_pd_reply_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_dhcp6_pd_reply_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_dhcp6_pd_reply_events_reply_t_print
#define _vl_api_defined_want_dhcp6_pd_reply_events_reply_t_print
static inline void *vl_api_want_dhcp6_pd_reply_events_reply_t_print (vl_api_want_dhcp6_pd_reply_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_dhcp6_pd_reply_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_reply_event_t_print
#define _vl_api_defined_dhcp6_reply_event_t_print
static inline void *vl_api_dhcp6_reply_event_t_print (vl_api_dhcp6_reply_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_reply_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "server_index: %u\n", a->server_index);
    vl_print(handle, "msg_type: %u\n", a->msg_type);
    vl_print(handle, "T1: %u\n", a->T1);
    vl_print(handle, "T2: %u\n", a->T2);
    vl_print(handle, "inner_status_code: %u\n", a->inner_status_code);
    vl_print(handle, "status_code: %u\n", a->status_code);
    vl_print(handle, "preference: %u\n", a->preference);
    vl_print(handle, "n_addresses: %u\n", a->n_addresses);
    return handle;
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_reply_event_t_print
#define _vl_api_defined_dhcp6_pd_reply_event_t_print
static inline void *vl_api_dhcp6_pd_reply_event_t_print (vl_api_dhcp6_pd_reply_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_dhcp6_pd_reply_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "server_index: %u\n", a->server_index);
    vl_print(handle, "msg_type: %u\n", a->msg_type);
    vl_print(handle, "T1: %u\n", a->T1);
    vl_print(handle, "T2: %u\n", a->T2);
    vl_print(handle, "inner_status_code: %u\n", a->inner_status_code);
    vl_print(handle, "status_code: %u\n", a->status_code);
    vl_print(handle, "preference: %u\n", a->preference);
    vl_print(handle, "n_prefixes: %u\n", a->n_prefixes);
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

#ifndef _vl_api_defined_dhcp_client_t_endian
#define _vl_api_defined_dhcp_client_t_endian
static inline void vl_api_dhcp_client_t_endian (vl_api_dhcp_client_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->want_dhcp_event = a->want_dhcp_event (no-op) */
    /* a->set_broadcast_flag = a->set_broadcast_flag (no-op) */
    /* a->dscp = a->dscp (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

/***** manual: vl_api_domain_server_t_endian  *****/

#ifndef _vl_api_defined_dhcp_lease_t_endian
#define _vl_api_defined_dhcp_lease_t_endian
static inline void vl_api_dhcp_lease_t_endian (vl_api_dhcp_lease_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->state = a->state (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->mask_width = a->mask_width (no-op) */
    /* a->count = a->count (no-op) */
}

#endif

/***** manual: vl_api_dhcp_server_t_endian  *****/

#ifndef _vl_api_defined_dhcp6_address_info_t_endian
#define _vl_api_defined_dhcp6_address_info_t_endian
static inline void vl_api_dhcp6_address_info_t_endian (vl_api_dhcp6_address_info_t *a)
{
    a->valid_time = clib_net_to_host_u32(a->valid_time);
    a->preferred_time = clib_net_to_host_u32(a->preferred_time);
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_prefix_info_t_endian
#define _vl_api_defined_dhcp6_pd_prefix_info_t_endian
static inline void vl_api_dhcp6_pd_prefix_info_t_endian (vl_api_dhcp6_pd_prefix_info_t *a)
{
    /* a->prefix_length = a->prefix_length (no-op) */
    a->valid_time = clib_net_to_host_u32(a->valid_time);
    a->preferred_time = clib_net_to_host_u32(a->preferred_time);
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_config_t_endian
#define _vl_api_defined_dhcp_proxy_config_t_endian
static inline void vl_api_dhcp_proxy_config_t_endian (vl_api_dhcp_proxy_config_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->rx_vrf_id = clib_net_to_host_u32(a->rx_vrf_id);
    a->server_vrf_id = clib_net_to_host_u32(a->server_vrf_id);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_config_reply_t_endian
#define _vl_api_defined_dhcp_proxy_config_reply_t_endian
static inline void vl_api_dhcp_proxy_config_reply_t_endian (vl_api_dhcp_proxy_config_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_set_vss_t_endian
#define _vl_api_defined_dhcp_proxy_set_vss_t_endian
static inline void vl_api_dhcp_proxy_set_vss_t_endian (vl_api_dhcp_proxy_set_vss_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->tbl_id = clib_net_to_host_u32(a->tbl_id);
    /* a->vss_type = a->vss_type (no-op) */
    a->oui = clib_net_to_host_u32(a->oui);
    a->vpn_index = clib_net_to_host_u32(a->vpn_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_set_vss_reply_t_endian
#define _vl_api_defined_dhcp_proxy_set_vss_reply_t_endian
static inline void vl_api_dhcp_proxy_set_vss_reply_t_endian (vl_api_dhcp_proxy_set_vss_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dhcp_client_config_t_endian
#define _vl_api_defined_dhcp_client_config_t_endian
static inline void vl_api_dhcp_client_config_t_endian (vl_api_dhcp_client_config_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->client = a->client (no-op) */
}

#endif

#ifndef _vl_api_defined_dhcp_client_config_reply_t_endian
#define _vl_api_defined_dhcp_client_config_reply_t_endian
static inline void vl_api_dhcp_client_config_reply_t_endian (vl_api_dhcp_client_config_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dhcp_compl_event_t_endian
#define _vl_api_defined_dhcp_compl_event_t_endian
static inline void vl_api_dhcp_compl_event_t_endian (vl_api_dhcp_compl_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    /* a->lease = a->lease (no-op) */
}

#endif

#ifndef _vl_api_defined_dhcp_client_dump_t_endian
#define _vl_api_defined_dhcp_client_dump_t_endian
static inline void vl_api_dhcp_client_dump_t_endian (vl_api_dhcp_client_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_dhcp_client_details_t_endian
#define _vl_api_defined_dhcp_client_details_t_endian
static inline void vl_api_dhcp_client_details_t_endian (vl_api_dhcp_client_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->client = a->client (no-op) */
    /* a->lease = a->lease (no-op) */
}

#endif

#ifndef _vl_api_defined_dhcp_proxy_dump_t_endian
#define _vl_api_defined_dhcp_proxy_dump_t_endian
static inline void vl_api_dhcp_proxy_dump_t_endian (vl_api_dhcp_proxy_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

/***** manual: vl_api_dhcp_proxy_details_t_endian  *****/

#ifndef _vl_api_defined_dhcp6_duid_ll_set_t_endian
#define _vl_api_defined_dhcp6_duid_ll_set_t_endian
static inline void vl_api_dhcp6_duid_ll_set_t_endian (vl_api_dhcp6_duid_ll_set_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_dhcp6_duid_ll_set_reply_t_endian
#define _vl_api_defined_dhcp6_duid_ll_set_reply_t_endian
static inline void vl_api_dhcp6_duid_ll_set_reply_t_endian (vl_api_dhcp6_duid_ll_set_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dhcp6_clients_enable_disable_t_endian
#define _vl_api_defined_dhcp6_clients_enable_disable_t_endian
static inline void vl_api_dhcp6_clients_enable_disable_t_endian (vl_api_dhcp6_clients_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_dhcp6_clients_enable_disable_reply_t_endian
#define _vl_api_defined_dhcp6_clients_enable_disable_reply_t_endian
static inline void vl_api_dhcp6_clients_enable_disable_reply_t_endian (vl_api_dhcp6_clients_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dhcp6_send_client_message_t_endian
#define _vl_api_defined_dhcp6_send_client_message_t_endian
static inline void vl_api_dhcp6_send_client_message_t_endian (vl_api_dhcp6_send_client_message_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    a->irt = clib_net_to_host_u32(a->irt);
    a->mrt = clib_net_to_host_u32(a->mrt);
    a->mrc = clib_net_to_host_u32(a->mrc);
    a->mrd = clib_net_to_host_u32(a->mrd);
    /* a->stop = a->stop (no-op) */
    /* a->msg_type = a->msg_type (no-op) */
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->n_addresses = clib_net_to_host_u32(a->n_addresses);
}

#endif

#ifndef _vl_api_defined_dhcp6_send_client_message_reply_t_endian
#define _vl_api_defined_dhcp6_send_client_message_reply_t_endian
static inline void vl_api_dhcp6_send_client_message_reply_t_endian (vl_api_dhcp6_send_client_message_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_send_client_message_t_endian
#define _vl_api_defined_dhcp6_pd_send_client_message_t_endian
static inline void vl_api_dhcp6_pd_send_client_message_t_endian (vl_api_dhcp6_pd_send_client_message_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    a->irt = clib_net_to_host_u32(a->irt);
    a->mrt = clib_net_to_host_u32(a->mrt);
    a->mrc = clib_net_to_host_u32(a->mrc);
    a->mrd = clib_net_to_host_u32(a->mrd);
    /* a->stop = a->stop (no-op) */
    /* a->msg_type = a->msg_type (no-op) */
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->n_prefixes = clib_net_to_host_u32(a->n_prefixes);
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_send_client_message_reply_t_endian
#define _vl_api_defined_dhcp6_pd_send_client_message_reply_t_endian
static inline void vl_api_dhcp6_pd_send_client_message_reply_t_endian (vl_api_dhcp6_pd_send_client_message_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_want_dhcp6_reply_events_t_endian
#define _vl_api_defined_want_dhcp6_reply_events_t_endian
static inline void vl_api_want_dhcp6_reply_events_t_endian (vl_api_want_dhcp6_reply_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

#ifndef _vl_api_defined_want_dhcp6_reply_events_reply_t_endian
#define _vl_api_defined_want_dhcp6_reply_events_reply_t_endian
static inline void vl_api_want_dhcp6_reply_events_reply_t_endian (vl_api_want_dhcp6_reply_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_want_dhcp6_pd_reply_events_t_endian
#define _vl_api_defined_want_dhcp6_pd_reply_events_t_endian
static inline void vl_api_want_dhcp6_pd_reply_events_t_endian (vl_api_want_dhcp6_pd_reply_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

#ifndef _vl_api_defined_want_dhcp6_pd_reply_events_reply_t_endian
#define _vl_api_defined_want_dhcp6_pd_reply_events_reply_t_endian
static inline void vl_api_want_dhcp6_pd_reply_events_reply_t_endian (vl_api_want_dhcp6_pd_reply_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dhcp6_reply_event_t_endian
#define _vl_api_defined_dhcp6_reply_event_t_endian
static inline void vl_api_dhcp6_reply_event_t_endian (vl_api_dhcp6_reply_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    /* a->msg_type = a->msg_type (no-op) */
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->inner_status_code = clib_net_to_host_u16(a->inner_status_code);
    a->status_code = clib_net_to_host_u16(a->status_code);
    /* a->preference = a->preference (no-op) */
    a->n_addresses = clib_net_to_host_u32(a->n_addresses);
}

#endif

#ifndef _vl_api_defined_dhcp6_pd_reply_event_t_endian
#define _vl_api_defined_dhcp6_pd_reply_event_t_endian
static inline void vl_api_dhcp6_pd_reply_event_t_endian (vl_api_dhcp6_pd_reply_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->server_index = clib_net_to_host_u32(a->server_index);
    /* a->msg_type = a->msg_type (no-op) */
    a->T1 = clib_net_to_host_u32(a->T1);
    a->T2 = clib_net_to_host_u32(a->T2);
    a->inner_status_code = clib_net_to_host_u16(a->inner_status_code);
    a->status_code = clib_net_to_host_u16(a->status_code);
    /* a->preference = a->preference (no-op) */
    a->n_prefixes = clib_net_to_host_u32(a->n_prefixes);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(dhcp.api, 2, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(dhcp.api, 0xbc570632)

#endif

