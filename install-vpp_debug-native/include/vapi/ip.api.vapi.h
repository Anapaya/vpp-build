#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ip_ip_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ip_ip_api_json

#include <stdlib.h>
#include <stddef.h>
#include <arpa/inet.h>
#include <vapi/vapi_internal.h>
#include <vapi/vapi.h>
#include <vapi/vapi_dbg.h>

#ifdef __cplusplus
extern "C" {
#endif
#include <vapi/vpe.api.vapi.h>

extern vapi_msg_id_t vapi_msg_id_ip_container_proxy_dump;
extern vapi_msg_id_t vapi_msg_id_ip_route_dump;
extern vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_add_del;
extern vapi_msg_id_t vapi_msg_id_ip6_nd_event;
extern vapi_msg_id_t vapi_msg_id_ip4_arp_event;
extern vapi_msg_id_t vapi_msg_id_ip6nd_proxy_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6_set_link_local_address_reply;
extern vapi_msg_id_t vapi_msg_id_want_ip4_arp_events_reply;
extern vapi_msg_id_t vapi_msg_id_ip6nd_send_router_solicitation_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6_set_link_local_address;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_ip_punt_redirect_dump;
extern vapi_msg_id_t vapi_msg_id_ip_punt_police_reply;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_enable_disable;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_add_del;
extern vapi_msg_id_t vapi_msg_id_ip_route_add_del;
extern vapi_msg_id_t vapi_msg_id_ioam_disable_reply;
extern vapi_msg_id_t vapi_msg_id_ip_neighbor_details;
extern vapi_msg_id_t vapi_msg_id_ioam_enable;
extern vapi_msg_id_t vapi_msg_id_ip6_ra_event;
extern vapi_msg_id_t vapi_msg_id_ip_mroute_add_del;
extern vapi_msg_id_t vapi_msg_id_ip_address_details;
extern vapi_msg_id_t vapi_msg_id_ip_source_check_interface_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ip_unnumbered_details;
extern vapi_msg_id_t vapi_msg_id_ip_route_details;
extern vapi_msg_id_t vapi_msg_id_ip_probe_neighbor_reply;
extern vapi_msg_id_t vapi_msg_id_ip_probe_neighbor;
extern vapi_msg_id_t vapi_msg_id_ip_table_details;
extern vapi_msg_id_t vapi_msg_id_reset_fib_reply;
extern vapi_msg_id_t vapi_msg_id_want_ip6_nd_events_reply;
extern vapi_msg_id_t vapi_msg_id_ip6nd_proxy_add_del;
extern vapi_msg_id_t vapi_msg_id_ip_reassembly_set_reply;
extern vapi_msg_id_t vapi_msg_id_ip_container_proxy_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ip_source_check_interface_add_del;
extern vapi_msg_id_t vapi_msg_id_ip_route_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ip_mroute_dump;
extern vapi_msg_id_t vapi_msg_id_ip_neighbor_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ip_scan_neighbor_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_ip_table_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_prefix;
extern vapi_msg_id_t vapi_msg_id_ip_reassembly_set;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6_enable_disable;
extern vapi_msg_id_t vapi_msg_id_want_ip4_arp_events;
extern vapi_msg_id_t vapi_msg_id_ip_mtable_dump;
extern vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ip_punt_redirect_reply;
extern vapi_msg_id_t vapi_msg_id_ip_unnumbered_dump;
extern vapi_msg_id_t vapi_msg_id_ip_neighbor_add_del;
extern vapi_msg_id_t vapi_msg_id_ip_container_proxy_details;
extern vapi_msg_id_t vapi_msg_id_ip6nd_proxy_dump;
extern vapi_msg_id_t vapi_msg_id_want_ip6_ra_events;
extern vapi_msg_id_t vapi_msg_id_ip_scan_neighbor_enable_disable;
extern vapi_msg_id_t vapi_msg_id_ip_reassembly_get;
extern vapi_msg_id_t vapi_msg_id_ioam_enable_reply;
extern vapi_msg_id_t vapi_msg_id_set_ip_flow_hash_reply;
extern vapi_msg_id_t vapi_msg_id_ip_address_dump;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_details;
extern vapi_msg_id_t vapi_msg_id_ip_mroute_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_details;
extern vapi_msg_id_t vapi_msg_id_ip_punt_redirect;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply;
extern vapi_msg_id_t vapi_msg_id_ip_details;
extern vapi_msg_id_t vapi_msg_id_ip_neighbor_dump;
extern vapi_msg_id_t vapi_msg_id_reset_fib;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_config;
extern vapi_msg_id_t vapi_msg_id_mfib_signal_dump;
extern vapi_msg_id_t vapi_msg_id_ip_container_proxy_add_del;
extern vapi_msg_id_t vapi_msg_id_ip_mtable_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_config_reply;
extern vapi_msg_id_t vapi_msg_id_ip6nd_proxy_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_dump;
extern vapi_msg_id_t vapi_msg_id_ioam_disable;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ip_reassembly_get_reply;
extern vapi_msg_id_t vapi_msg_id_want_ip6_nd_events;
extern vapi_msg_id_t vapi_msg_id_ip_punt_police;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_set_arp_neighbor_limit;
extern vapi_msg_id_t vapi_msg_id_ip6nd_send_router_solicitation;
extern vapi_msg_id_t vapi_msg_id_ip_table_add_del;
extern vapi_msg_id_t vapi_msg_id_ip_table_dump;
extern vapi_msg_id_t vapi_msg_id_ip_punt_redirect_details;
extern vapi_msg_id_t vapi_msg_id_ip_mroute_details;
extern vapi_msg_id_t vapi_msg_id_proxy_arp_dump;
extern vapi_msg_id_t vapi_msg_id_ip_reassembly_enable_disable;
extern vapi_msg_id_t vapi_msg_id_ip_dump;
extern vapi_msg_id_t vapi_msg_id_set_arp_neighbor_limit_reply;
extern vapi_msg_id_t vapi_msg_id_ip_reassembly_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_interface_add_del;
extern vapi_msg_id_t vapi_msg_id_mfib_signal_details;
extern vapi_msg_id_t vapi_msg_id_want_ip6_ra_events_reply;
extern vapi_msg_id_t vapi_msg_id_set_ip_flow_hash;

#define DEFINE_VAPI_MSG_IDS_IP_API_JSON\
  vapi_msg_id_t vapi_msg_id_ip_container_proxy_dump;\
  vapi_msg_id_t vapi_msg_id_ip_route_dump;\
  vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_add_del;\
  vapi_msg_id_t vapi_msg_id_ip6_nd_event;\
  vapi_msg_id_t vapi_msg_id_ip4_arp_event;\
  vapi_msg_id_t vapi_msg_id_ip6nd_proxy_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6_set_link_local_address_reply;\
  vapi_msg_id_t vapi_msg_id_want_ip4_arp_events_reply;\
  vapi_msg_id_t vapi_msg_id_ip6nd_send_router_solicitation_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6_set_link_local_address;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_ip_punt_redirect_dump;\
  vapi_msg_id_t vapi_msg_id_ip_punt_police_reply;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_enable_disable;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_add_del;\
  vapi_msg_id_t vapi_msg_id_ip_route_add_del;\
  vapi_msg_id_t vapi_msg_id_ioam_disable_reply;\
  vapi_msg_id_t vapi_msg_id_ip_neighbor_details;\
  vapi_msg_id_t vapi_msg_id_ioam_enable;\
  vapi_msg_id_t vapi_msg_id_ip6_ra_event;\
  vapi_msg_id_t vapi_msg_id_ip_mroute_add_del;\
  vapi_msg_id_t vapi_msg_id_ip_address_details;\
  vapi_msg_id_t vapi_msg_id_ip_source_check_interface_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ip_unnumbered_details;\
  vapi_msg_id_t vapi_msg_id_ip_route_details;\
  vapi_msg_id_t vapi_msg_id_ip_probe_neighbor_reply;\
  vapi_msg_id_t vapi_msg_id_ip_probe_neighbor;\
  vapi_msg_id_t vapi_msg_id_ip_table_details;\
  vapi_msg_id_t vapi_msg_id_reset_fib_reply;\
  vapi_msg_id_t vapi_msg_id_want_ip6_nd_events_reply;\
  vapi_msg_id_t vapi_msg_id_ip6nd_proxy_add_del;\
  vapi_msg_id_t vapi_msg_id_ip_reassembly_set_reply;\
  vapi_msg_id_t vapi_msg_id_ip_container_proxy_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ip_source_check_interface_add_del;\
  vapi_msg_id_t vapi_msg_id_ip_route_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ip_mroute_dump;\
  vapi_msg_id_t vapi_msg_id_ip_neighbor_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ip_scan_neighbor_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_ip_table_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_prefix;\
  vapi_msg_id_t vapi_msg_id_ip_reassembly_set;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6_enable_disable;\
  vapi_msg_id_t vapi_msg_id_want_ip4_arp_events;\
  vapi_msg_id_t vapi_msg_id_ip_mtable_dump;\
  vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ip_punt_redirect_reply;\
  vapi_msg_id_t vapi_msg_id_ip_unnumbered_dump;\
  vapi_msg_id_t vapi_msg_id_ip_neighbor_add_del;\
  vapi_msg_id_t vapi_msg_id_ip_container_proxy_details;\
  vapi_msg_id_t vapi_msg_id_ip6nd_proxy_dump;\
  vapi_msg_id_t vapi_msg_id_want_ip6_ra_events;\
  vapi_msg_id_t vapi_msg_id_ip_scan_neighbor_enable_disable;\
  vapi_msg_id_t vapi_msg_id_ip_reassembly_get;\
  vapi_msg_id_t vapi_msg_id_ioam_enable_reply;\
  vapi_msg_id_t vapi_msg_id_set_ip_flow_hash_reply;\
  vapi_msg_id_t vapi_msg_id_ip_address_dump;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_details;\
  vapi_msg_id_t vapi_msg_id_ip_mroute_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_details;\
  vapi_msg_id_t vapi_msg_id_ip_punt_redirect;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply;\
  vapi_msg_id_t vapi_msg_id_ip_details;\
  vapi_msg_id_t vapi_msg_id_ip_neighbor_dump;\
  vapi_msg_id_t vapi_msg_id_reset_fib;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_config;\
  vapi_msg_id_t vapi_msg_id_mfib_signal_dump;\
  vapi_msg_id_t vapi_msg_id_ip_container_proxy_add_del;\
  vapi_msg_id_t vapi_msg_id_ip_mtable_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_ip6nd_ra_config_reply;\
  vapi_msg_id_t vapi_msg_id_ip6nd_proxy_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_dump;\
  vapi_msg_id_t vapi_msg_id_ioam_disable;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ip_reassembly_get_reply;\
  vapi_msg_id_t vapi_msg_id_want_ip6_nd_events;\
  vapi_msg_id_t vapi_msg_id_ip_punt_police;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_intfc_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_set_arp_neighbor_limit;\
  vapi_msg_id_t vapi_msg_id_ip6nd_send_router_solicitation;\
  vapi_msg_id_t vapi_msg_id_ip_table_add_del;\
  vapi_msg_id_t vapi_msg_id_ip_table_dump;\
  vapi_msg_id_t vapi_msg_id_ip_punt_redirect_details;\
  vapi_msg_id_t vapi_msg_id_ip_mroute_details;\
  vapi_msg_id_t vapi_msg_id_proxy_arp_dump;\
  vapi_msg_id_t vapi_msg_id_ip_reassembly_enable_disable;\
  vapi_msg_id_t vapi_msg_id_ip_dump;\
  vapi_msg_id_t vapi_msg_id_set_arp_neighbor_limit_reply;\
  vapi_msg_id_t vapi_msg_id_ip_reassembly_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_ip_source_and_port_range_check_interface_add_del;\
  vapi_msg_id_t vapi_msg_id_mfib_signal_details;\
  vapi_msg_id_t vapi_msg_id_want_ip6_ra_events_reply;\
  vapi_msg_id_t vapi_msg_id_set_ip_flow_hash;


#ifndef defined_vapi_enum_address_family
#define defined_vapi_enum_address_family
typedef enum {
  ADDRESS_IP4 = 0,
  ADDRESS_IP6 = 1,
} vapi_enum_address_family;

#endif

#ifndef defined_vapi_enum_ip_ecn
#define defined_vapi_enum_ip_ecn
typedef enum {
  IP_API_ECN_NONE = 0,
  IP_API_ECN_ECT0 = 1,
  IP_API_ECN_ECT1 = 2,
  IP_API_ECN_CE = 3,
} vapi_enum_ip_ecn;

#endif

#ifndef defined_vapi_enum_ip_dscp
#define defined_vapi_enum_ip_dscp
typedef enum {
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
} vapi_enum_ip_dscp;

#endif

#ifndef defined_vapi_enum_ip_proto
#define defined_vapi_enum_ip_proto
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
} vapi_enum_ip_proto;

#endif

#ifndef defined_vapi_enum_fib_path_nh_proto
#define defined_vapi_enum_fib_path_nh_proto
typedef enum {
  FIB_API_PATH_NH_PROTO_IP4 = 0,
  FIB_API_PATH_NH_PROTO_IP6 = 1,
  FIB_API_PATH_NH_PROTO_MPLS = 2,
  FIB_API_PATH_NH_PROTO_ETHERNET = 3,
  FIB_API_PATH_NH_PROTO_BIER = 4,
} vapi_enum_fib_path_nh_proto;

#endif

#ifndef defined_vapi_enum_fib_path_flags
#define defined_vapi_enum_fib_path_flags
typedef enum {
  FIB_API_PATH_FLAG_NONE = 0,
  FIB_API_PATH_FLAG_RESOLVE_VIA_ATTACHED = 1,
  FIB_API_PATH_FLAG_RESOLVE_VIA_HOST = 2,
  FIB_API_PATH_FLAG_POP_PW_CW = 4,
} vapi_enum_fib_path_flags;

#endif

#ifndef defined_vapi_enum_fib_path_type
#define defined_vapi_enum_fib_path_type
typedef enum {
  FIB_API_PATH_TYPE_NORMAL = 0,
  FIB_API_PATH_TYPE_LOCAL = 1,
  FIB_API_PATH_TYPE_DROP = 2,
  FIB_API_PATH_TYPE_UDP_ENCAP = 3,
  FIB_API_PATH_TYPE_BIER_IMP = 4,
  FIB_API_PATH_TYPE_ICMP_UNREACH = 5,
  FIB_API_PATH_TYPE_ICMP_PROHIBIT = 6,
  FIB_API_PATH_TYPE_SOURCE_LOOKUP = 7,
  FIB_API_PATH_TYPE_DVR = 8,
  FIB_API_PATH_TYPE_INTERFACE_RX = 9,
  FIB_API_PATH_TYPE_CLASSIFY = 10,
} vapi_enum_fib_path_type;

#endif

#ifndef defined_vapi_enum_address_family
#define defined_vapi_enum_address_family
typedef enum {
  ADDRESS_IP4 = 0,
  ADDRESS_IP6 = 1,
} vapi_enum_address_family;

#endif

#ifndef defined_vapi_enum_ip_ecn
#define defined_vapi_enum_ip_ecn
typedef enum {
  IP_API_ECN_NONE = 0,
  IP_API_ECN_ECT0 = 1,
  IP_API_ECN_ECT1 = 2,
  IP_API_ECN_CE = 3,
} vapi_enum_ip_ecn;

#endif

#ifndef defined_vapi_enum_ip_dscp
#define defined_vapi_enum_ip_dscp
typedef enum {
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
} vapi_enum_ip_dscp;

#endif

#ifndef defined_vapi_enum_ip_proto
#define defined_vapi_enum_ip_proto
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
} vapi_enum_ip_proto;

#endif

#ifndef defined_vapi_enum_fib_path_nh_proto
#define defined_vapi_enum_fib_path_nh_proto
typedef enum {
  FIB_API_PATH_NH_PROTO_IP4 = 0,
  FIB_API_PATH_NH_PROTO_IP6 = 1,
  FIB_API_PATH_NH_PROTO_MPLS = 2,
  FIB_API_PATH_NH_PROTO_ETHERNET = 3,
  FIB_API_PATH_NH_PROTO_BIER = 4,
} vapi_enum_fib_path_nh_proto;

#endif

#ifndef defined_vapi_enum_fib_path_flags
#define defined_vapi_enum_fib_path_flags
typedef enum {
  FIB_API_PATH_FLAG_NONE = 0,
  FIB_API_PATH_FLAG_RESOLVE_VIA_ATTACHED = 1,
  FIB_API_PATH_FLAG_RESOLVE_VIA_HOST = 2,
  FIB_API_PATH_FLAG_POP_PW_CW = 4,
} vapi_enum_fib_path_flags;

#endif

#ifndef defined_vapi_enum_fib_path_type
#define defined_vapi_enum_fib_path_type
typedef enum {
  FIB_API_PATH_TYPE_NORMAL = 0,
  FIB_API_PATH_TYPE_LOCAL = 1,
  FIB_API_PATH_TYPE_DROP = 2,
  FIB_API_PATH_TYPE_UDP_ENCAP = 3,
  FIB_API_PATH_TYPE_BIER_IMP = 4,
  FIB_API_PATH_TYPE_ICMP_UNREACH = 5,
  FIB_API_PATH_TYPE_ICMP_PROHIBIT = 6,
  FIB_API_PATH_TYPE_SOURCE_LOOKUP = 7,
  FIB_API_PATH_TYPE_DVR = 8,
  FIB_API_PATH_TYPE_INTERFACE_RX = 9,
  FIB_API_PATH_TYPE_CLASSIFY = 10,
} vapi_enum_fib_path_type;

#endif

#ifndef defined_vapi_enum_address_family
#define defined_vapi_enum_address_family
typedef enum {
  ADDRESS_IP4 = 0,
  ADDRESS_IP6 = 1,
} vapi_enum_address_family;

#endif

#ifndef defined_vapi_enum_ip_ecn
#define defined_vapi_enum_ip_ecn
typedef enum {
  IP_API_ECN_NONE = 0,
  IP_API_ECN_ECT0 = 1,
  IP_API_ECN_ECT1 = 2,
  IP_API_ECN_CE = 3,
} vapi_enum_ip_ecn;

#endif

#ifndef defined_vapi_enum_ip_dscp
#define defined_vapi_enum_ip_dscp
typedef enum {
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
} vapi_enum_ip_dscp;

#endif

#ifndef defined_vapi_enum_ip_proto
#define defined_vapi_enum_ip_proto
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
} vapi_enum_ip_proto;

#endif

#ifndef defined_vapi_enum_mfib_itf_flags
#define defined_vapi_enum_mfib_itf_flags
typedef enum {
  MFIB_API_ITF_FLAG_NONE = 0,
  MFIB_API_ITF_FLAG_NEGATE_SIGNAL = 1,
  MFIB_API_ITF_FLAG_ACCEPT = 2,
  MFIB_API_ITF_FLAG_FORWARD = 4,
  MFIB_API_ITF_FLAG_SIGNAL_PRESENT = 8,
  MFIB_API_ITF_FLAG_DONT_PRESERVE = 16,
} vapi_enum_mfib_itf_flags;

#endif

#ifndef defined_vapi_enum_ip_neighbor_flags
#define defined_vapi_enum_ip_neighbor_flags
typedef enum {
  IP_API_NEIGHBOR_FLAG_NONE = 0,
  IP_API_NEIGHBOR_FLAG_STATIC = 1,
  IP_API_NEIGHBOR_FLAG_NO_FIB_ENTRY = 2,
} vapi_enum_ip_neighbor_flags;

#endif

#ifndef defined_vapi_type_ip6_address
#define defined_vapi_type_ip6_address
typedef u8 vapi_type_ip6_address[16];

#endif

#ifndef defined_vapi_type_ip4_address
#define defined_vapi_type_ip4_address
typedef u8 vapi_type_ip4_address[4];

#endif

#ifndef defined_vapi_type_mac_address
#define defined_vapi_type_mac_address
typedef u8 vapi_type_mac_address[6];

#endif

#ifndef defined_vapi_union_address_union
#define defined_vapi_union_address_union
typedef union {
  vapi_type_ip4_address ip4;
  vapi_type_ip6_address ip6;
} vapi_union_address_union;

#endif

#ifndef defined_vapi_type_ip6_prefix
#define defined_vapi_type_ip6_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_ip6_address address;
  u8 len;
} vapi_type_ip6_prefix;

static inline void vapi_type_ip6_prefix_hton(vapi_type_ip6_prefix *msg)
{

}

static inline void vapi_type_ip6_prefix_ntoh(vapi_type_ip6_prefix *msg)
{

}
#endif

#ifndef defined_vapi_type_ip4_prefix
#define defined_vapi_type_ip4_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_ip4_address address;
  u8 len;
} vapi_type_ip4_prefix;

static inline void vapi_type_ip4_prefix_hton(vapi_type_ip4_prefix *msg)
{

}

static inline void vapi_type_ip4_prefix_ntoh(vapi_type_ip4_prefix *msg)
{

}
#endif

#ifndef defined_vapi_type_prefix_matcher
#define defined_vapi_type_prefix_matcher
typedef struct __attribute__((__packed__)) {
  u8 le;
  u8 ge;
} vapi_type_prefix_matcher;

static inline void vapi_type_prefix_matcher_hton(vapi_type_prefix_matcher *msg)
{

}

static inline void vapi_type_prefix_matcher_ntoh(vapi_type_prefix_matcher *msg)
{

}
#endif

#ifndef defined_vapi_type_fib_mpls_label
#define defined_vapi_type_fib_mpls_label
typedef struct __attribute__((__packed__)) {
  u8 is_uniform;
  u32 label;
  u8 ttl;
  u8 exp;
} vapi_type_fib_mpls_label;

static inline void vapi_type_fib_mpls_label_hton(vapi_type_fib_mpls_label *msg)
{
  msg->label = htobe32(msg->label);
}

static inline void vapi_type_fib_mpls_label_ntoh(vapi_type_fib_mpls_label *msg)
{
  msg->label = be32toh(msg->label);
}
#endif

#ifndef defined_vapi_type_ip_table
#define defined_vapi_type_ip_table
typedef struct __attribute__((__packed__)) {
  u32 table_id;
  u8 is_ip6;
  u8 name[64];
} vapi_type_ip_table;

static inline void vapi_type_ip_table_hton(vapi_type_ip_table *msg)
{
  msg->table_id = htobe32(msg->table_id);
}

static inline void vapi_type_ip_table_ntoh(vapi_type_ip_table *msg)
{
  msg->table_id = be32toh(msg->table_id);
}
#endif

#ifndef defined_vapi_type_proxy_arp
#define defined_vapi_type_proxy_arp
typedef struct __attribute__((__packed__)) {
  u32 table_id;
  vapi_type_ip4_address low;
  vapi_type_ip4_address hi;
} vapi_type_proxy_arp;

static inline void vapi_type_proxy_arp_hton(vapi_type_proxy_arp *msg)
{
  msg->table_id = htobe32(msg->table_id);
}

static inline void vapi_type_proxy_arp_ntoh(vapi_type_proxy_arp *msg)
{
  msg->table_id = be32toh(msg->table_id);
}
#endif

#ifndef defined_vapi_type_address
#define defined_vapi_type_address
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  vapi_union_address_union un;
} vapi_type_address;

static inline void vapi_type_address_hton(vapi_type_address *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
}

static inline void vapi_type_address_ntoh(vapi_type_address *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
}
#endif

#ifndef defined_vapi_type_prefix
#define defined_vapi_type_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_address address;
  u8 len;
} vapi_type_prefix;

static inline void vapi_type_prefix_hton(vapi_type_prefix *msg)
{
  vapi_type_address_hton(&msg->address);
}

static inline void vapi_type_prefix_ntoh(vapi_type_prefix *msg)
{
  vapi_type_address_ntoh(&msg->address);
}
#endif

#ifndef defined_vapi_type_mprefix
#define defined_vapi_type_mprefix
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  u16 grp_address_length;
  vapi_union_address_union grp_address;
  vapi_union_address_union src_address;
} vapi_type_mprefix;

static inline void vapi_type_mprefix_hton(vapi_type_mprefix *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
  msg->grp_address_length = htobe16(msg->grp_address_length);
}

static inline void vapi_type_mprefix_ntoh(vapi_type_mprefix *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
  msg->grp_address_length = be16toh(msg->grp_address_length);
}
#endif

#ifndef defined_vapi_type_fib_path_nh
#define defined_vapi_type_fib_path_nh
typedef struct __attribute__((__packed__)) {
  vapi_union_address_union address;
  u32 via_label;
  u32 obj_id;
  u32 classify_table_index;
} vapi_type_fib_path_nh;

static inline void vapi_type_fib_path_nh_hton(vapi_type_fib_path_nh *msg)
{
  msg->via_label = htobe32(msg->via_label);
  msg->obj_id = htobe32(msg->obj_id);
  msg->classify_table_index = htobe32(msg->classify_table_index);
}

static inline void vapi_type_fib_path_nh_ntoh(vapi_type_fib_path_nh *msg)
{
  msg->via_label = be32toh(msg->via_label);
  msg->obj_id = be32toh(msg->obj_id);
  msg->classify_table_index = be32toh(msg->classify_table_index);
}
#endif

#ifndef defined_vapi_type_fib_path
#define defined_vapi_type_fib_path
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  u32 table_id;
  u32 rpf_id;
  u8 weight;
  u8 preference;
  vapi_enum_fib_path_type type;
  vapi_enum_fib_path_flags flags;
  vapi_enum_fib_path_nh_proto proto;
  vapi_type_fib_path_nh nh;
  u8 n_labels;
  vapi_type_fib_mpls_label label_stack[16];
} vapi_type_fib_path;

static inline void vapi_type_fib_path_hton(vapi_type_fib_path *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->table_id = htobe32(msg->table_id);
  msg->rpf_id = htobe32(msg->rpf_id);
  msg->type = (vapi_enum_fib_path_type)htobe32(msg->type);
  msg->flags = (vapi_enum_fib_path_flags)htobe32(msg->flags);
  msg->proto = (vapi_enum_fib_path_nh_proto)htobe32(msg->proto);
  vapi_type_fib_path_nh_hton(&msg->nh);
  do { unsigned i; for (i = 0; i < 16; ++i) { vapi_type_fib_mpls_label_hton(&msg->label_stack[i]); } } while(0);
}

static inline void vapi_type_fib_path_ntoh(vapi_type_fib_path *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->table_id = be32toh(msg->table_id);
  msg->rpf_id = be32toh(msg->rpf_id);
  msg->type = (vapi_enum_fib_path_type)be32toh(msg->type);
  msg->flags = (vapi_enum_fib_path_flags)be32toh(msg->flags);
  msg->proto = (vapi_enum_fib_path_nh_proto)be32toh(msg->proto);
  vapi_type_fib_path_nh_ntoh(&msg->nh);
  do { unsigned i; for (i = 0; i < 16; ++i) { vapi_type_fib_mpls_label_ntoh(&msg->label_stack[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_mfib_path
#define defined_vapi_type_mfib_path
typedef struct __attribute__((__packed__)) {
  vapi_enum_mfib_itf_flags itf_flags;
  vapi_type_fib_path path;
} vapi_type_mfib_path;

static inline void vapi_type_mfib_path_hton(vapi_type_mfib_path *msg)
{
  msg->itf_flags = (vapi_enum_mfib_itf_flags)htobe32(msg->itf_flags);
  vapi_type_fib_path_hton(&msg->path);
}

static inline void vapi_type_mfib_path_ntoh(vapi_type_mfib_path *msg)
{
  msg->itf_flags = (vapi_enum_mfib_itf_flags)be32toh(msg->itf_flags);
  vapi_type_fib_path_ntoh(&msg->path);
}
#endif

#ifndef defined_vapi_type_ip_route
#define defined_vapi_type_ip_route
typedef struct __attribute__((__packed__)) {
  u32 table_id;
  u32 stats_index;
  vapi_type_prefix prefix;
  u8 n_paths;
  vapi_type_fib_path paths[0];
} vapi_type_ip_route;

static inline void vapi_type_ip_route_hton(vapi_type_ip_route *msg)
{
  msg->table_id = htobe32(msg->table_id);
  msg->stats_index = htobe32(msg->stats_index);
  vapi_type_prefix_hton(&msg->prefix);
  do { unsigned i; for (i = 0; i < msg->n_paths; ++i) { vapi_type_fib_path_hton(&msg->paths[i]); } } while(0);
}

static inline void vapi_type_ip_route_ntoh(vapi_type_ip_route *msg)
{
  msg->table_id = be32toh(msg->table_id);
  msg->stats_index = be32toh(msg->stats_index);
  vapi_type_prefix_ntoh(&msg->prefix);
  do { unsigned i; for (i = 0; i < msg->n_paths; ++i) { vapi_type_fib_path_ntoh(&msg->paths[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_ip_neighbor
#define defined_vapi_type_ip_neighbor
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  vapi_enum_ip_neighbor_flags flags;
  vapi_type_mac_address mac_address;
  vapi_type_address ip_address;
} vapi_type_ip_neighbor;

static inline void vapi_type_ip_neighbor_hton(vapi_type_ip_neighbor *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->flags = (vapi_enum_ip_neighbor_flags)htobe32(msg->flags);
  vapi_type_address_hton(&msg->ip_address);
}

static inline void vapi_type_ip_neighbor_ntoh(vapi_type_ip_neighbor *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->flags = (vapi_enum_ip_neighbor_flags)be32toh(msg->flags);
  vapi_type_address_ntoh(&msg->ip_address);
}
#endif

#ifndef defined_vapi_type_ip_mroute
#define defined_vapi_type_ip_mroute
typedef struct __attribute__((__packed__)) {
  u32 table_id;
  u32 entry_flags;
  u32 rpf_id;
  vapi_type_mprefix prefix;
  u8 n_paths;
  vapi_type_mfib_path paths[0];
} vapi_type_ip_mroute;

static inline void vapi_type_ip_mroute_hton(vapi_type_ip_mroute *msg)
{
  msg->table_id = htobe32(msg->table_id);
  msg->entry_flags = htobe32(msg->entry_flags);
  msg->rpf_id = htobe32(msg->rpf_id);
  vapi_type_mprefix_hton(&msg->prefix);
  do { unsigned i; for (i = 0; i < msg->n_paths; ++i) { vapi_type_mfib_path_hton(&msg->paths[i]); } } while(0);
}

static inline void vapi_type_ip_mroute_ntoh(vapi_type_ip_mroute *msg)
{
  msg->table_id = be32toh(msg->table_id);
  msg->entry_flags = be32toh(msg->entry_flags);
  msg->rpf_id = be32toh(msg->rpf_id);
  vapi_type_mprefix_ntoh(&msg->prefix);
  do { unsigned i; for (i = 0; i < msg->n_paths; ++i) { vapi_type_mfib_path_ntoh(&msg->paths[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_punt_redirect
#define defined_vapi_type_punt_redirect
typedef struct __attribute__((__packed__)) {
  u32 rx_sw_if_index;
  u32 tx_sw_if_index;
  vapi_type_address nh;
} vapi_type_punt_redirect;

static inline void vapi_type_punt_redirect_hton(vapi_type_punt_redirect *msg)
{
  msg->rx_sw_if_index = htobe32(msg->rx_sw_if_index);
  msg->tx_sw_if_index = htobe32(msg->tx_sw_if_index);
  vapi_type_address_hton(&msg->nh);
}

static inline void vapi_type_punt_redirect_ntoh(vapi_type_punt_redirect *msg)
{
  msg->rx_sw_if_index = be32toh(msg->rx_sw_if_index);
  msg->tx_sw_if_index = be32toh(msg->tx_sw_if_index);
  vapi_type_address_ntoh(&msg->nh);
}
#endif

#ifndef defined_vapi_type_ip6_ra_prefix_info
#define defined_vapi_type_ip6_ra_prefix_info
typedef struct __attribute__((__packed__)) {
  vapi_type_prefix prefix;
  u8 flags;
  u32 valid_time;
  u32 preferred_time;
} vapi_type_ip6_ra_prefix_info;

static inline void vapi_type_ip6_ra_prefix_info_hton(vapi_type_ip6_ra_prefix_info *msg)
{
  vapi_type_prefix_hton(&msg->prefix);
  msg->valid_time = htobe32(msg->valid_time);
  msg->preferred_time = htobe32(msg->preferred_time);
}

static inline void vapi_type_ip6_ra_prefix_info_ntoh(vapi_type_ip6_ra_prefix_info *msg)
{
  vapi_type_prefix_ntoh(&msg->prefix);
  msg->valid_time = be32toh(msg->valid_time);
  msg->preferred_time = be32toh(msg->preferred_time);
}
#endif

#ifndef defined_vapi_msg_ip_container_proxy_details
#define defined_vapi_msg_ip_container_proxy_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  vapi_type_prefix prefix; 
} vapi_payload_ip_container_proxy_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_container_proxy_details payload;
} vapi_msg_ip_container_proxy_details;

static inline void vapi_msg_ip_container_proxy_details_payload_hton(vapi_payload_ip_container_proxy_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  vapi_type_prefix_hton(&payload->prefix);
}

static inline void vapi_msg_ip_container_proxy_details_payload_ntoh(vapi_payload_ip_container_proxy_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  vapi_type_prefix_ntoh(&payload->prefix);
}

static inline void vapi_msg_ip_container_proxy_details_hton(vapi_msg_ip_container_proxy_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_container_proxy_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_container_proxy_details_ntoh(vapi_msg_ip_container_proxy_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_container_proxy_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_container_proxy_details_msg_size(vapi_msg_ip_container_proxy_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_container_proxy_details()
{
  static const char name[] = "ip_container_proxy_details";
  static const char name_with_crc[] = "ip_container_proxy_details_2f1dbc7d";
  static vapi_message_desc_t __vapi_metadata_ip_container_proxy_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_container_proxy_details, payload),
    sizeof(vapi_msg_ip_container_proxy_details),
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_container_proxy_details = vapi_register_msg(&__vapi_metadata_ip_container_proxy_details);
  VAPI_DBG("Assigned msg id %d to ip_container_proxy_details", vapi_msg_id_ip_container_proxy_details);
}

static inline void vapi_set_vapi_msg_ip_container_proxy_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_container_proxy_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_container_proxy_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_container_proxy_dump
#define defined_vapi_msg_ip_container_proxy_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ip_container_proxy_dump;

static inline void vapi_msg_ip_container_proxy_dump_hton(vapi_msg_ip_container_proxy_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ip_container_proxy_dump_ntoh(vapi_msg_ip_container_proxy_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ip_container_proxy_dump_msg_size(vapi_msg_ip_container_proxy_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_container_proxy_dump* vapi_alloc_ip_container_proxy_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_container_proxy_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_container_proxy_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_container_proxy_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_container_proxy_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_container_proxy_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_container_proxy_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_container_proxy_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_container_proxy_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_container_proxy_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_container_proxy_dump()
{
  static const char name[] = "ip_container_proxy_dump";
  static const char name_with_crc[] = "ip_container_proxy_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ip_container_proxy_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ip_container_proxy_dump),
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_container_proxy_dump = vapi_register_msg(&__vapi_metadata_ip_container_proxy_dump);
  VAPI_DBG("Assigned msg id %d to ip_container_proxy_dump", vapi_msg_id_ip_container_proxy_dump);
}
#endif

#ifndef defined_vapi_msg_ip_route_details
#define defined_vapi_msg_ip_route_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip_route route; 
} vapi_payload_ip_route_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_route_details payload;
} vapi_msg_ip_route_details;

static inline void vapi_msg_ip_route_details_payload_hton(vapi_payload_ip_route_details *payload)
{
  vapi_type_ip_route_hton(&payload->route);
}

static inline void vapi_msg_ip_route_details_payload_ntoh(vapi_payload_ip_route_details *payload)
{
  vapi_type_ip_route_ntoh(&payload->route);
}

static inline void vapi_msg_ip_route_details_hton(vapi_msg_ip_route_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_route_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_route_details_ntoh(vapi_msg_ip_route_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_route_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_route_details_msg_size(vapi_msg_ip_route_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_route_details()
{
  static const char name[] = "ip_route_details";
  static const char name_with_crc[] = "ip_route_details_acdee858";
  static vapi_message_desc_t __vapi_metadata_ip_route_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_route_details, payload),
    sizeof(vapi_msg_ip_route_details),
    (generic_swap_fn_t)vapi_msg_ip_route_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_route_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_route_details = vapi_register_msg(&__vapi_metadata_ip_route_details);
  VAPI_DBG("Assigned msg id %d to ip_route_details", vapi_msg_id_ip_route_details);
}

static inline void vapi_set_vapi_msg_ip_route_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_route_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_route_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_route_dump
#define defined_vapi_msg_ip_route_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip_table table; 
} vapi_payload_ip_route_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_route_dump payload;
} vapi_msg_ip_route_dump;

static inline void vapi_msg_ip_route_dump_payload_hton(vapi_payload_ip_route_dump *payload)
{
  vapi_type_ip_table_hton(&payload->table);
}

static inline void vapi_msg_ip_route_dump_payload_ntoh(vapi_payload_ip_route_dump *payload)
{
  vapi_type_ip_table_ntoh(&payload->table);
}

static inline void vapi_msg_ip_route_dump_hton(vapi_msg_ip_route_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_route_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_route_dump_ntoh(vapi_msg_ip_route_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_route_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_route_dump_msg_size(vapi_msg_ip_route_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_route_dump* vapi_alloc_ip_route_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_route_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_route_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_route_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_route_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_route_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_route_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_route_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_route_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_route_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_route_dump()
{
  static const char name[] = "ip_route_dump";
  static const char name_with_crc[] = "ip_route_dump_f5ad78e8";
  static vapi_message_desc_t __vapi_metadata_ip_route_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_route_dump, payload),
    sizeof(vapi_msg_ip_route_dump),
    (generic_swap_fn_t)vapi_msg_ip_route_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_route_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_route_dump = vapi_register_msg(&__vapi_metadata_ip_route_dump);
  VAPI_DBG("Assigned msg id %d to ip_route_dump", vapi_msg_id_ip_route_dump);
}
#endif

#ifndef defined_vapi_msg_ip_source_and_port_range_check_add_del_reply
#define defined_vapi_msg_ip_source_and_port_range_check_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_source_and_port_range_check_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_source_and_port_range_check_add_del_reply payload;
} vapi_msg_ip_source_and_port_range_check_add_del_reply;

static inline void vapi_msg_ip_source_and_port_range_check_add_del_reply_payload_hton(vapi_payload_ip_source_and_port_range_check_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_source_and_port_range_check_add_del_reply_payload_ntoh(vapi_payload_ip_source_and_port_range_check_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_source_and_port_range_check_add_del_reply_hton(vapi_msg_ip_source_and_port_range_check_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_source_and_port_range_check_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_source_and_port_range_check_add_del_reply_ntoh(vapi_msg_ip_source_and_port_range_check_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_source_and_port_range_check_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_source_and_port_range_check_add_del_reply_msg_size(vapi_msg_ip_source_and_port_range_check_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_source_and_port_range_check_add_del_reply()
{
  static const char name[] = "ip_source_and_port_range_check_add_del_reply";
  static const char name_with_crc[] = "ip_source_and_port_range_check_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_source_and_port_range_check_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_source_and_port_range_check_add_del_reply, payload),
    sizeof(vapi_msg_ip_source_and_port_range_check_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_source_and_port_range_check_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_source_and_port_range_check_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_source_and_port_range_check_add_del_reply", vapi_msg_id_ip_source_and_port_range_check_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_source_and_port_range_check_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_source_and_port_range_check_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_source_and_port_range_check_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_source_and_port_range_check_add_del
#define defined_vapi_msg_ip_source_and_port_range_check_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_prefix prefix;
  u8 number_of_ranges;
  u16 low_ports[32];
  u16 high_ports[32];
  u32 vrf_id; 
} vapi_payload_ip_source_and_port_range_check_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_source_and_port_range_check_add_del payload;
} vapi_msg_ip_source_and_port_range_check_add_del;

static inline void vapi_msg_ip_source_and_port_range_check_add_del_payload_hton(vapi_payload_ip_source_and_port_range_check_add_del *payload)
{
  vapi_type_prefix_hton(&payload->prefix);
  do { unsigned i; for (i = 0; i < 32; ++i) { payload->low_ports[i] = htobe16(payload->low_ports[i]); } } while(0);
  do { unsigned i; for (i = 0; i < 32; ++i) { payload->high_ports[i] = htobe16(payload->high_ports[i]); } } while(0);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_ip_source_and_port_range_check_add_del_payload_ntoh(vapi_payload_ip_source_and_port_range_check_add_del *payload)
{
  vapi_type_prefix_ntoh(&payload->prefix);
  do { unsigned i; for (i = 0; i < 32; ++i) { payload->low_ports[i] = be16toh(payload->low_ports[i]); } } while(0);
  do { unsigned i; for (i = 0; i < 32; ++i) { payload->high_ports[i] = be16toh(payload->high_ports[i]); } } while(0);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_ip_source_and_port_range_check_add_del_hton(vapi_msg_ip_source_and_port_range_check_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_source_and_port_range_check_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_source_and_port_range_check_add_del_ntoh(vapi_msg_ip_source_and_port_range_check_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_source_and_port_range_check_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_source_and_port_range_check_add_del_msg_size(vapi_msg_ip_source_and_port_range_check_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_source_and_port_range_check_add_del* vapi_alloc_ip_source_and_port_range_check_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_source_and_port_range_check_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_source_and_port_range_check_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_source_and_port_range_check_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_source_and_port_range_check_add_del);

  return msg;
}

static inline vapi_error_e vapi_ip_source_and_port_range_check_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_source_and_port_range_check_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_source_and_port_range_check_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_source_and_port_range_check_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_source_and_port_range_check_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_source_and_port_range_check_add_del()
{
  static const char name[] = "ip_source_and_port_range_check_add_del";
  static const char name_with_crc[] = "ip_source_and_port_range_check_add_del_b50ed159";
  static vapi_message_desc_t __vapi_metadata_ip_source_and_port_range_check_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_source_and_port_range_check_add_del, payload),
    sizeof(vapi_msg_ip_source_and_port_range_check_add_del),
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_source_and_port_range_check_add_del = vapi_register_msg(&__vapi_metadata_ip_source_and_port_range_check_add_del);
  VAPI_DBG("Assigned msg id %d to ip_source_and_port_range_check_add_del", vapi_msg_id_ip_source_and_port_range_check_add_del);
}
#endif

#ifndef defined_vapi_msg_ip6_nd_event
#define defined_vapi_msg_ip6_nd_event
typedef struct __attribute__ ((__packed__)) {
  u16 _vl_msg_id;
  u32 client_index;
  u32 pid;
  u32 sw_if_index;
  vapi_type_ip6_address ip;
  vapi_type_mac_address mac;
  u8 mac_ip; 
} vapi_payload_ip6_nd_event;

typedef struct __attribute__ ((__packed__)) {

  vapi_payload_ip6_nd_event payload;
} vapi_msg_ip6_nd_event;

static inline void vapi_msg_ip6_nd_event_payload_hton(vapi_payload_ip6_nd_event *payload)
{
  payload->_vl_msg_id = htobe16(payload->_vl_msg_id);
  payload->client_index = htobe32(payload->client_index);
  payload->pid = htobe32(payload->pid);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip6_nd_event_payload_ntoh(vapi_payload_ip6_nd_event *payload)
{
  payload->_vl_msg_id = be16toh(payload->_vl_msg_id);
  payload->client_index = be32toh(payload->client_index);
  payload->pid = be32toh(payload->pid);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip6_nd_event_hton(vapi_msg_ip6_nd_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6_nd_event'@%p to big endian", msg);

  vapi_msg_ip6_nd_event_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip6_nd_event_ntoh(vapi_msg_ip6_nd_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6_nd_event'@%p to host byte order", msg);

  vapi_msg_ip6_nd_event_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip6_nd_event_msg_size(vapi_msg_ip6_nd_event *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip6_nd_event()
{
  static const char name[] = "ip6_nd_event";
  static const char name_with_crc[] = "ip6_nd_event_3a23e7d4";
  static vapi_message_desc_t __vapi_metadata_ip6_nd_event = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    false,
    0,
    offsetof(vapi_msg_ip6_nd_event, payload),
    sizeof(vapi_msg_ip6_nd_event),
    (generic_swap_fn_t)vapi_msg_ip6_nd_event_hton,
    (generic_swap_fn_t)vapi_msg_ip6_nd_event_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6_nd_event = vapi_register_msg(&__vapi_metadata_ip6_nd_event);
  VAPI_DBG("Assigned msg id %d to ip6_nd_event", vapi_msg_id_ip6_nd_event);
}

static inline void vapi_set_vapi_msg_ip6_nd_event_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip6_nd_event *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip6_nd_event, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip4_arp_event
#define defined_vapi_msg_ip4_arp_event
typedef struct __attribute__ ((__packed__)) {
  u16 _vl_msg_id;
  u32 client_index;
  vapi_type_ip4_address ip;
  u32 pid;
  u32 sw_if_index;
  vapi_type_mac_address mac;
  u8 mac_ip; 
} vapi_payload_ip4_arp_event;

typedef struct __attribute__ ((__packed__)) {

  vapi_payload_ip4_arp_event payload;
} vapi_msg_ip4_arp_event;

static inline void vapi_msg_ip4_arp_event_payload_hton(vapi_payload_ip4_arp_event *payload)
{
  payload->_vl_msg_id = htobe16(payload->_vl_msg_id);
  payload->client_index = htobe32(payload->client_index);
  payload->pid = htobe32(payload->pid);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip4_arp_event_payload_ntoh(vapi_payload_ip4_arp_event *payload)
{
  payload->_vl_msg_id = be16toh(payload->_vl_msg_id);
  payload->client_index = be32toh(payload->client_index);
  payload->pid = be32toh(payload->pid);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip4_arp_event_hton(vapi_msg_ip4_arp_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip4_arp_event'@%p to big endian", msg);

  vapi_msg_ip4_arp_event_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip4_arp_event_ntoh(vapi_msg_ip4_arp_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip4_arp_event'@%p to host byte order", msg);

  vapi_msg_ip4_arp_event_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip4_arp_event_msg_size(vapi_msg_ip4_arp_event *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip4_arp_event()
{
  static const char name[] = "ip4_arp_event";
  static const char name_with_crc[] = "ip4_arp_event_72cdde7c";
  static vapi_message_desc_t __vapi_metadata_ip4_arp_event = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    false,
    0,
    offsetof(vapi_msg_ip4_arp_event, payload),
    sizeof(vapi_msg_ip4_arp_event),
    (generic_swap_fn_t)vapi_msg_ip4_arp_event_hton,
    (generic_swap_fn_t)vapi_msg_ip4_arp_event_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip4_arp_event = vapi_register_msg(&__vapi_metadata_ip4_arp_event);
  VAPI_DBG("Assigned msg id %d to ip4_arp_event", vapi_msg_id_ip4_arp_event);
}

static inline void vapi_set_vapi_msg_ip4_arp_event_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip4_arp_event *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip4_arp_event, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip6nd_proxy_details
#define defined_vapi_msg_ip6nd_proxy_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  vapi_type_ip6_address ip; 
} vapi_payload_ip6nd_proxy_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip6nd_proxy_details payload;
} vapi_msg_ip6nd_proxy_details;

static inline void vapi_msg_ip6nd_proxy_details_payload_hton(vapi_payload_ip6nd_proxy_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip6nd_proxy_details_payload_ntoh(vapi_payload_ip6nd_proxy_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip6nd_proxy_details_hton(vapi_msg_ip6nd_proxy_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip6nd_proxy_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip6nd_proxy_details_ntoh(vapi_msg_ip6nd_proxy_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip6nd_proxy_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip6nd_proxy_details_msg_size(vapi_msg_ip6nd_proxy_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip6nd_proxy_details()
{
  static const char name[] = "ip6nd_proxy_details";
  static const char name_with_crc[] = "ip6nd_proxy_details_bbbd7894";
  static vapi_message_desc_t __vapi_metadata_ip6nd_proxy_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip6nd_proxy_details, payload),
    sizeof(vapi_msg_ip6nd_proxy_details),
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_details_hton,
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6nd_proxy_details = vapi_register_msg(&__vapi_metadata_ip6nd_proxy_details);
  VAPI_DBG("Assigned msg id %d to ip6nd_proxy_details", vapi_msg_id_ip6nd_proxy_details);
}

static inline void vapi_set_vapi_msg_ip6nd_proxy_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip6nd_proxy_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip6nd_proxy_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_ip6_set_link_local_address_reply
#define defined_vapi_msg_sw_interface_ip6_set_link_local_address_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_ip6_set_link_local_address_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_ip6_set_link_local_address_reply payload;
} vapi_msg_sw_interface_ip6_set_link_local_address_reply;

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_reply_payload_hton(vapi_payload_sw_interface_ip6_set_link_local_address_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_reply_payload_ntoh(vapi_payload_sw_interface_ip6_set_link_local_address_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_reply_hton(vapi_msg_sw_interface_ip6_set_link_local_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_set_link_local_address_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6_set_link_local_address_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_reply_ntoh(vapi_msg_sw_interface_ip6_set_link_local_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_set_link_local_address_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6_set_link_local_address_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6_set_link_local_address_reply_msg_size(vapi_msg_sw_interface_ip6_set_link_local_address_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6_set_link_local_address_reply()
{
  static const char name[] = "sw_interface_ip6_set_link_local_address_reply";
  static const char name_with_crc[] = "sw_interface_ip6_set_link_local_address_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6_set_link_local_address_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_ip6_set_link_local_address_reply, payload),
    sizeof(vapi_msg_sw_interface_ip6_set_link_local_address_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_set_link_local_address_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_set_link_local_address_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6_set_link_local_address_reply = vapi_register_msg(&__vapi_metadata_sw_interface_ip6_set_link_local_address_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6_set_link_local_address_reply", vapi_msg_id_sw_interface_ip6_set_link_local_address_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_ip6_set_link_local_address_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_ip6_set_link_local_address_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_ip6_set_link_local_address_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_ip4_arp_events_reply
#define defined_vapi_msg_want_ip4_arp_events_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_want_ip4_arp_events_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_want_ip4_arp_events_reply payload;
} vapi_msg_want_ip4_arp_events_reply;

static inline void vapi_msg_want_ip4_arp_events_reply_payload_hton(vapi_payload_want_ip4_arp_events_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_want_ip4_arp_events_reply_payload_ntoh(vapi_payload_want_ip4_arp_events_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_want_ip4_arp_events_reply_hton(vapi_msg_want_ip4_arp_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip4_arp_events_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_want_ip4_arp_events_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_ip4_arp_events_reply_ntoh(vapi_msg_want_ip4_arp_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip4_arp_events_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_want_ip4_arp_events_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_ip4_arp_events_reply_msg_size(vapi_msg_want_ip4_arp_events_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_want_ip4_arp_events_reply()
{
  static const char name[] = "want_ip4_arp_events_reply";
  static const char name_with_crc[] = "want_ip4_arp_events_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_want_ip4_arp_events_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_want_ip4_arp_events_reply, payload),
    sizeof(vapi_msg_want_ip4_arp_events_reply),
    (generic_swap_fn_t)vapi_msg_want_ip4_arp_events_reply_hton,
    (generic_swap_fn_t)vapi_msg_want_ip4_arp_events_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_ip4_arp_events_reply = vapi_register_msg(&__vapi_metadata_want_ip4_arp_events_reply);
  VAPI_DBG("Assigned msg id %d to want_ip4_arp_events_reply", vapi_msg_id_want_ip4_arp_events_reply);
}

static inline void vapi_set_vapi_msg_want_ip4_arp_events_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_want_ip4_arp_events_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_want_ip4_arp_events_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip6nd_send_router_solicitation_reply
#define defined_vapi_msg_ip6nd_send_router_solicitation_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip6nd_send_router_solicitation_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip6nd_send_router_solicitation_reply payload;
} vapi_msg_ip6nd_send_router_solicitation_reply;

static inline void vapi_msg_ip6nd_send_router_solicitation_reply_payload_hton(vapi_payload_ip6nd_send_router_solicitation_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip6nd_send_router_solicitation_reply_payload_ntoh(vapi_payload_ip6nd_send_router_solicitation_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip6nd_send_router_solicitation_reply_hton(vapi_msg_ip6nd_send_router_solicitation_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_send_router_solicitation_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip6nd_send_router_solicitation_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip6nd_send_router_solicitation_reply_ntoh(vapi_msg_ip6nd_send_router_solicitation_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_send_router_solicitation_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip6nd_send_router_solicitation_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip6nd_send_router_solicitation_reply_msg_size(vapi_msg_ip6nd_send_router_solicitation_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip6nd_send_router_solicitation_reply()
{
  static const char name[] = "ip6nd_send_router_solicitation_reply";
  static const char name_with_crc[] = "ip6nd_send_router_solicitation_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip6nd_send_router_solicitation_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip6nd_send_router_solicitation_reply, payload),
    sizeof(vapi_msg_ip6nd_send_router_solicitation_reply),
    (generic_swap_fn_t)vapi_msg_ip6nd_send_router_solicitation_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip6nd_send_router_solicitation_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6nd_send_router_solicitation_reply = vapi_register_msg(&__vapi_metadata_ip6nd_send_router_solicitation_reply);
  VAPI_DBG("Assigned msg id %d to ip6nd_send_router_solicitation_reply", vapi_msg_id_ip6nd_send_router_solicitation_reply);
}

static inline void vapi_set_vapi_msg_ip6nd_send_router_solicitation_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip6nd_send_router_solicitation_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip6nd_send_router_solicitation_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_ip6_set_link_local_address
#define defined_vapi_msg_sw_interface_ip6_set_link_local_address
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 address[16]; 
} vapi_payload_sw_interface_ip6_set_link_local_address;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_ip6_set_link_local_address payload;
} vapi_msg_sw_interface_ip6_set_link_local_address;

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_payload_hton(vapi_payload_sw_interface_ip6_set_link_local_address *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_payload_ntoh(vapi_payload_sw_interface_ip6_set_link_local_address *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_hton(vapi_msg_sw_interface_ip6_set_link_local_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_set_link_local_address'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6_set_link_local_address_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6_set_link_local_address_ntoh(vapi_msg_sw_interface_ip6_set_link_local_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_set_link_local_address'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6_set_link_local_address_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6_set_link_local_address_msg_size(vapi_msg_sw_interface_ip6_set_link_local_address *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_ip6_set_link_local_address* vapi_alloc_sw_interface_ip6_set_link_local_address(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_ip6_set_link_local_address *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_ip6_set_link_local_address);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_ip6_set_link_local_address*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_ip6_set_link_local_address);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_ip6_set_link_local_address(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_ip6_set_link_local_address *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_ip6_set_link_local_address_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sw_interface_ip6_set_link_local_address_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sw_interface_ip6_set_link_local_address_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6_set_link_local_address()
{
  static const char name[] = "sw_interface_ip6_set_link_local_address";
  static const char name_with_crc[] = "sw_interface_ip6_set_link_local_address_d73bf1ab";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6_set_link_local_address = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_ip6_set_link_local_address, payload),
    sizeof(vapi_msg_sw_interface_ip6_set_link_local_address),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_set_link_local_address_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_set_link_local_address_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6_set_link_local_address = vapi_register_msg(&__vapi_metadata_sw_interface_ip6_set_link_local_address);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6_set_link_local_address", vapi_msg_id_sw_interface_ip6_set_link_local_address);
}
#endif

#ifndef defined_vapi_msg_sw_interface_ip6_enable_disable_reply
#define defined_vapi_msg_sw_interface_ip6_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_ip6_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_ip6_enable_disable_reply payload;
} vapi_msg_sw_interface_ip6_enable_disable_reply;

static inline void vapi_msg_sw_interface_ip6_enable_disable_reply_payload_hton(vapi_payload_sw_interface_ip6_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6_enable_disable_reply_payload_ntoh(vapi_payload_sw_interface_ip6_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6_enable_disable_reply_hton(vapi_msg_sw_interface_ip6_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6_enable_disable_reply_ntoh(vapi_msg_sw_interface_ip6_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6_enable_disable_reply_msg_size(vapi_msg_sw_interface_ip6_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6_enable_disable_reply()
{
  static const char name[] = "sw_interface_ip6_enable_disable_reply";
  static const char name_with_crc[] = "sw_interface_ip6_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_ip6_enable_disable_reply, payload),
    sizeof(vapi_msg_sw_interface_ip6_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6_enable_disable_reply = vapi_register_msg(&__vapi_metadata_sw_interface_ip6_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6_enable_disable_reply", vapi_msg_id_sw_interface_ip6_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_ip6_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_ip6_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_ip6_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_punt_redirect_details
#define defined_vapi_msg_ip_punt_redirect_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_punt_redirect punt; 
} vapi_payload_ip_punt_redirect_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_punt_redirect_details payload;
} vapi_msg_ip_punt_redirect_details;

static inline void vapi_msg_ip_punt_redirect_details_payload_hton(vapi_payload_ip_punt_redirect_details *payload)
{
  vapi_type_punt_redirect_hton(&payload->punt);
}

static inline void vapi_msg_ip_punt_redirect_details_payload_ntoh(vapi_payload_ip_punt_redirect_details *payload)
{
  vapi_type_punt_redirect_ntoh(&payload->punt);
}

static inline void vapi_msg_ip_punt_redirect_details_hton(vapi_msg_ip_punt_redirect_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_punt_redirect_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_punt_redirect_details_ntoh(vapi_msg_ip_punt_redirect_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_punt_redirect_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_punt_redirect_details_msg_size(vapi_msg_ip_punt_redirect_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_punt_redirect_details()
{
  static const char name[] = "ip_punt_redirect_details";
  static const char name_with_crc[] = "ip_punt_redirect_details_07e504f8";
  static vapi_message_desc_t __vapi_metadata_ip_punt_redirect_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_punt_redirect_details, payload),
    sizeof(vapi_msg_ip_punt_redirect_details),
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_punt_redirect_details = vapi_register_msg(&__vapi_metadata_ip_punt_redirect_details);
  VAPI_DBG("Assigned msg id %d to ip_punt_redirect_details", vapi_msg_id_ip_punt_redirect_details);
}

static inline void vapi_set_vapi_msg_ip_punt_redirect_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_punt_redirect_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_punt_redirect_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_punt_redirect_dump
#define defined_vapi_msg_ip_punt_redirect_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_ipv6; 
} vapi_payload_ip_punt_redirect_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_punt_redirect_dump payload;
} vapi_msg_ip_punt_redirect_dump;

static inline void vapi_msg_ip_punt_redirect_dump_payload_hton(vapi_payload_ip_punt_redirect_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_punt_redirect_dump_payload_ntoh(vapi_payload_ip_punt_redirect_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_punt_redirect_dump_hton(vapi_msg_ip_punt_redirect_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_punt_redirect_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_punt_redirect_dump_ntoh(vapi_msg_ip_punt_redirect_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_punt_redirect_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_punt_redirect_dump_msg_size(vapi_msg_ip_punt_redirect_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_punt_redirect_dump* vapi_alloc_ip_punt_redirect_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_punt_redirect_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_punt_redirect_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_punt_redirect_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_punt_redirect_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_punt_redirect_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_punt_redirect_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_punt_redirect_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_punt_redirect_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_punt_redirect_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_punt_redirect_dump()
{
  static const char name[] = "ip_punt_redirect_dump";
  static const char name_with_crc[] = "ip_punt_redirect_dump_6b7bcd0a";
  static vapi_message_desc_t __vapi_metadata_ip_punt_redirect_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_punt_redirect_dump, payload),
    sizeof(vapi_msg_ip_punt_redirect_dump),
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_punt_redirect_dump = vapi_register_msg(&__vapi_metadata_ip_punt_redirect_dump);
  VAPI_DBG("Assigned msg id %d to ip_punt_redirect_dump", vapi_msg_id_ip_punt_redirect_dump);
}
#endif

#ifndef defined_vapi_msg_ip_punt_police_reply
#define defined_vapi_msg_ip_punt_police_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_punt_police_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_punt_police_reply payload;
} vapi_msg_ip_punt_police_reply;

static inline void vapi_msg_ip_punt_police_reply_payload_hton(vapi_payload_ip_punt_police_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_punt_police_reply_payload_ntoh(vapi_payload_ip_punt_police_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_punt_police_reply_hton(vapi_msg_ip_punt_police_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_police_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_punt_police_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_punt_police_reply_ntoh(vapi_msg_ip_punt_police_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_police_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_punt_police_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_punt_police_reply_msg_size(vapi_msg_ip_punt_police_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_punt_police_reply()
{
  static const char name[] = "ip_punt_police_reply";
  static const char name_with_crc[] = "ip_punt_police_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_punt_police_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_punt_police_reply, payload),
    sizeof(vapi_msg_ip_punt_police_reply),
    (generic_swap_fn_t)vapi_msg_ip_punt_police_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_punt_police_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_punt_police_reply = vapi_register_msg(&__vapi_metadata_ip_punt_police_reply);
  VAPI_DBG("Assigned msg id %d to ip_punt_police_reply", vapi_msg_id_ip_punt_police_reply);
}

static inline void vapi_set_vapi_msg_ip_punt_police_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_punt_police_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_punt_police_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_proxy_arp_intfc_enable_disable_reply
#define defined_vapi_msg_proxy_arp_intfc_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_proxy_arp_intfc_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_proxy_arp_intfc_enable_disable_reply payload;
} vapi_msg_proxy_arp_intfc_enable_disable_reply;

static inline void vapi_msg_proxy_arp_intfc_enable_disable_reply_payload_hton(vapi_payload_proxy_arp_intfc_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_proxy_arp_intfc_enable_disable_reply_payload_ntoh(vapi_payload_proxy_arp_intfc_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_proxy_arp_intfc_enable_disable_reply_hton(vapi_msg_proxy_arp_intfc_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_proxy_arp_intfc_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_proxy_arp_intfc_enable_disable_reply_ntoh(vapi_msg_proxy_arp_intfc_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_proxy_arp_intfc_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_proxy_arp_intfc_enable_disable_reply_msg_size(vapi_msg_proxy_arp_intfc_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_proxy_arp_intfc_enable_disable_reply()
{
  static const char name[] = "proxy_arp_intfc_enable_disable_reply";
  static const char name_with_crc[] = "proxy_arp_intfc_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_intfc_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_proxy_arp_intfc_enable_disable_reply, payload),
    sizeof(vapi_msg_proxy_arp_intfc_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_intfc_enable_disable_reply = vapi_register_msg(&__vapi_metadata_proxy_arp_intfc_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to proxy_arp_intfc_enable_disable_reply", vapi_msg_id_proxy_arp_intfc_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_proxy_arp_intfc_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_proxy_arp_intfc_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_proxy_arp_intfc_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_proxy_arp_intfc_enable_disable
#define defined_vapi_msg_proxy_arp_intfc_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 enable_disable; 
} vapi_payload_proxy_arp_intfc_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_proxy_arp_intfc_enable_disable payload;
} vapi_msg_proxy_arp_intfc_enable_disable;

static inline void vapi_msg_proxy_arp_intfc_enable_disable_payload_hton(vapi_payload_proxy_arp_intfc_enable_disable *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_proxy_arp_intfc_enable_disable_payload_ntoh(vapi_payload_proxy_arp_intfc_enable_disable *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_proxy_arp_intfc_enable_disable_hton(vapi_msg_proxy_arp_intfc_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_proxy_arp_intfc_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_proxy_arp_intfc_enable_disable_ntoh(vapi_msg_proxy_arp_intfc_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_proxy_arp_intfc_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_proxy_arp_intfc_enable_disable_msg_size(vapi_msg_proxy_arp_intfc_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_proxy_arp_intfc_enable_disable* vapi_alloc_proxy_arp_intfc_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_proxy_arp_intfc_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_proxy_arp_intfc_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_proxy_arp_intfc_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_proxy_arp_intfc_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_proxy_arp_intfc_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_proxy_arp_intfc_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_proxy_arp_intfc_enable_disable_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_proxy_arp_intfc_enable_disable_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_proxy_arp_intfc_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_proxy_arp_intfc_enable_disable()
{
  static const char name[] = "proxy_arp_intfc_enable_disable";
  static const char name_with_crc[] = "proxy_arp_intfc_enable_disable_69d24598";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_intfc_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_proxy_arp_intfc_enable_disable, payload),
    sizeof(vapi_msg_proxy_arp_intfc_enable_disable),
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_intfc_enable_disable = vapi_register_msg(&__vapi_metadata_proxy_arp_intfc_enable_disable);
  VAPI_DBG("Assigned msg id %d to proxy_arp_intfc_enable_disable", vapi_msg_id_proxy_arp_intfc_enable_disable);
}
#endif

#ifndef defined_vapi_msg_proxy_arp_add_del_reply
#define defined_vapi_msg_proxy_arp_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_proxy_arp_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_proxy_arp_add_del_reply payload;
} vapi_msg_proxy_arp_add_del_reply;

static inline void vapi_msg_proxy_arp_add_del_reply_payload_hton(vapi_payload_proxy_arp_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_proxy_arp_add_del_reply_payload_ntoh(vapi_payload_proxy_arp_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_proxy_arp_add_del_reply_hton(vapi_msg_proxy_arp_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_proxy_arp_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_proxy_arp_add_del_reply_ntoh(vapi_msg_proxy_arp_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_proxy_arp_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_proxy_arp_add_del_reply_msg_size(vapi_msg_proxy_arp_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_proxy_arp_add_del_reply()
{
  static const char name[] = "proxy_arp_add_del_reply";
  static const char name_with_crc[] = "proxy_arp_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_proxy_arp_add_del_reply, payload),
    sizeof(vapi_msg_proxy_arp_add_del_reply),
    (generic_swap_fn_t)vapi_msg_proxy_arp_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_add_del_reply = vapi_register_msg(&__vapi_metadata_proxy_arp_add_del_reply);
  VAPI_DBG("Assigned msg id %d to proxy_arp_add_del_reply", vapi_msg_id_proxy_arp_add_del_reply);
}

static inline void vapi_set_vapi_msg_proxy_arp_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_proxy_arp_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_proxy_arp_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_proxy_arp_add_del
#define defined_vapi_msg_proxy_arp_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_proxy_arp proxy; 
} vapi_payload_proxy_arp_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_proxy_arp_add_del payload;
} vapi_msg_proxy_arp_add_del;

static inline void vapi_msg_proxy_arp_add_del_payload_hton(vapi_payload_proxy_arp_add_del *payload)
{
  vapi_type_proxy_arp_hton(&payload->proxy);
}

static inline void vapi_msg_proxy_arp_add_del_payload_ntoh(vapi_payload_proxy_arp_add_del *payload)
{
  vapi_type_proxy_arp_ntoh(&payload->proxy);
}

static inline void vapi_msg_proxy_arp_add_del_hton(vapi_msg_proxy_arp_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_proxy_arp_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_proxy_arp_add_del_ntoh(vapi_msg_proxy_arp_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_proxy_arp_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_proxy_arp_add_del_msg_size(vapi_msg_proxy_arp_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_proxy_arp_add_del* vapi_alloc_proxy_arp_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_proxy_arp_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_proxy_arp_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_proxy_arp_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_proxy_arp_add_del);

  return msg;
}

static inline vapi_error_e vapi_proxy_arp_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_proxy_arp_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_proxy_arp_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_proxy_arp_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_proxy_arp_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_proxy_arp_add_del()
{
  static const char name[] = "proxy_arp_add_del";
  static const char name_with_crc[] = "proxy_arp_add_del_93a0e853";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_proxy_arp_add_del, payload),
    sizeof(vapi_msg_proxy_arp_add_del),
    (generic_swap_fn_t)vapi_msg_proxy_arp_add_del_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_add_del = vapi_register_msg(&__vapi_metadata_proxy_arp_add_del);
  VAPI_DBG("Assigned msg id %d to proxy_arp_add_del", vapi_msg_id_proxy_arp_add_del);
}
#endif

#ifndef defined_vapi_msg_ip_route_add_del_reply
#define defined_vapi_msg_ip_route_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 stats_index; 
} vapi_payload_ip_route_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_route_add_del_reply payload;
} vapi_msg_ip_route_add_del_reply;

static inline void vapi_msg_ip_route_add_del_reply_payload_hton(vapi_payload_ip_route_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->stats_index = htobe32(payload->stats_index);
}

static inline void vapi_msg_ip_route_add_del_reply_payload_ntoh(vapi_payload_ip_route_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->stats_index = be32toh(payload->stats_index);
}

static inline void vapi_msg_ip_route_add_del_reply_hton(vapi_msg_ip_route_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_route_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_route_add_del_reply_ntoh(vapi_msg_ip_route_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_route_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_route_add_del_reply_msg_size(vapi_msg_ip_route_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_route_add_del_reply()
{
  static const char name[] = "ip_route_add_del_reply";
  static const char name_with_crc[] = "ip_route_add_del_reply_1992deab";
  static vapi_message_desc_t __vapi_metadata_ip_route_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_route_add_del_reply, payload),
    sizeof(vapi_msg_ip_route_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_route_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_route_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_route_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_route_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_route_add_del_reply", vapi_msg_id_ip_route_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_route_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_route_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_route_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_route_add_del
#define defined_vapi_msg_ip_route_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_multipath;
  vapi_type_ip_route route; 
} vapi_payload_ip_route_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_route_add_del payload;
} vapi_msg_ip_route_add_del;

static inline void vapi_msg_ip_route_add_del_payload_hton(vapi_payload_ip_route_add_del *payload)
{
  vapi_type_ip_route_hton(&payload->route);
}

static inline void vapi_msg_ip_route_add_del_payload_ntoh(vapi_payload_ip_route_add_del *payload)
{
  vapi_type_ip_route_ntoh(&payload->route);
}

static inline void vapi_msg_ip_route_add_del_hton(vapi_msg_ip_route_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_route_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_route_add_del_ntoh(vapi_msg_ip_route_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_route_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_route_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_route_add_del_msg_size(vapi_msg_ip_route_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_route_add_del* vapi_alloc_ip_route_add_del(struct vapi_ctx_s *ctx, size_t route_paths_array_size)
{
  vapi_msg_ip_route_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_route_add_del) + sizeof(msg->payload.route.paths[0]) * route_paths_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_route_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_route_add_del);
  msg->payload.route.n_paths = route_paths_array_size;

  return msg;
}

static inline vapi_error_e vapi_ip_route_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_route_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_route_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_route_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_route_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_route_add_del()
{
  static const char name[] = "ip_route_add_del";
  static const char name_with_crc[] = "ip_route_add_del_83e086ce";
  static vapi_message_desc_t __vapi_metadata_ip_route_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_route_add_del, payload),
    sizeof(vapi_msg_ip_route_add_del),
    (generic_swap_fn_t)vapi_msg_ip_route_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_route_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_route_add_del = vapi_register_msg(&__vapi_metadata_ip_route_add_del);
  VAPI_DBG("Assigned msg id %d to ip_route_add_del", vapi_msg_id_ip_route_add_del);
}
#endif

#ifndef defined_vapi_msg_ioam_disable_reply
#define defined_vapi_msg_ioam_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ioam_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ioam_disable_reply payload;
} vapi_msg_ioam_disable_reply;

static inline void vapi_msg_ioam_disable_reply_payload_hton(vapi_payload_ioam_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ioam_disable_reply_payload_ntoh(vapi_payload_ioam_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ioam_disable_reply_hton(vapi_msg_ioam_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ioam_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ioam_disable_reply_ntoh(vapi_msg_ioam_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ioam_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ioam_disable_reply_msg_size(vapi_msg_ioam_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ioam_disable_reply()
{
  static const char name[] = "ioam_disable_reply";
  static const char name_with_crc[] = "ioam_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ioam_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ioam_disable_reply, payload),
    sizeof(vapi_msg_ioam_disable_reply),
    (generic_swap_fn_t)vapi_msg_ioam_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_ioam_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ioam_disable_reply = vapi_register_msg(&__vapi_metadata_ioam_disable_reply);
  VAPI_DBG("Assigned msg id %d to ioam_disable_reply", vapi_msg_id_ioam_disable_reply);
}

static inline void vapi_set_vapi_msg_ioam_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ioam_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ioam_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_neighbor_details
#define defined_vapi_msg_ip_neighbor_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip_neighbor neighbor; 
} vapi_payload_ip_neighbor_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_neighbor_details payload;
} vapi_msg_ip_neighbor_details;

static inline void vapi_msg_ip_neighbor_details_payload_hton(vapi_payload_ip_neighbor_details *payload)
{
  vapi_type_ip_neighbor_hton(&payload->neighbor);
}

static inline void vapi_msg_ip_neighbor_details_payload_ntoh(vapi_payload_ip_neighbor_details *payload)
{
  vapi_type_ip_neighbor_ntoh(&payload->neighbor);
}

static inline void vapi_msg_ip_neighbor_details_hton(vapi_msg_ip_neighbor_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_neighbor_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_neighbor_details_ntoh(vapi_msg_ip_neighbor_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_neighbor_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_neighbor_details_msg_size(vapi_msg_ip_neighbor_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_neighbor_details()
{
  static const char name[] = "ip_neighbor_details";
  static const char name_with_crc[] = "ip_neighbor_details_4a05f212";
  static vapi_message_desc_t __vapi_metadata_ip_neighbor_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_neighbor_details, payload),
    sizeof(vapi_msg_ip_neighbor_details),
    (generic_swap_fn_t)vapi_msg_ip_neighbor_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_neighbor_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_neighbor_details = vapi_register_msg(&__vapi_metadata_ip_neighbor_details);
  VAPI_DBG("Assigned msg id %d to ip_neighbor_details", vapi_msg_id_ip_neighbor_details);
}

static inline void vapi_set_vapi_msg_ip_neighbor_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_neighbor_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_neighbor_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ioam_enable_reply
#define defined_vapi_msg_ioam_enable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ioam_enable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ioam_enable_reply payload;
} vapi_msg_ioam_enable_reply;

static inline void vapi_msg_ioam_enable_reply_payload_hton(vapi_payload_ioam_enable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ioam_enable_reply_payload_ntoh(vapi_payload_ioam_enable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ioam_enable_reply_hton(vapi_msg_ioam_enable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_enable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ioam_enable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ioam_enable_reply_ntoh(vapi_msg_ioam_enable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_enable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ioam_enable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ioam_enable_reply_msg_size(vapi_msg_ioam_enable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ioam_enable_reply()
{
  static const char name[] = "ioam_enable_reply";
  static const char name_with_crc[] = "ioam_enable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ioam_enable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ioam_enable_reply, payload),
    sizeof(vapi_msg_ioam_enable_reply),
    (generic_swap_fn_t)vapi_msg_ioam_enable_reply_hton,
    (generic_swap_fn_t)vapi_msg_ioam_enable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ioam_enable_reply = vapi_register_msg(&__vapi_metadata_ioam_enable_reply);
  VAPI_DBG("Assigned msg id %d to ioam_enable_reply", vapi_msg_id_ioam_enable_reply);
}

static inline void vapi_set_vapi_msg_ioam_enable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ioam_enable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ioam_enable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ioam_enable
#define defined_vapi_msg_ioam_enable
typedef struct __attribute__ ((__packed__)) {
  u16 id;
  u8 seqno;
  u8 analyse;
  u8 pot_enable;
  u8 trace_enable;
  u32 node_id; 
} vapi_payload_ioam_enable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ioam_enable payload;
} vapi_msg_ioam_enable;

static inline void vapi_msg_ioam_enable_payload_hton(vapi_payload_ioam_enable *payload)
{
  payload->id = htobe16(payload->id);
  payload->node_id = htobe32(payload->node_id);
}

static inline void vapi_msg_ioam_enable_payload_ntoh(vapi_payload_ioam_enable *payload)
{
  payload->id = be16toh(payload->id);
  payload->node_id = be32toh(payload->node_id);
}

static inline void vapi_msg_ioam_enable_hton(vapi_msg_ioam_enable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_enable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ioam_enable_payload_hton(&msg->payload);
}

static inline void vapi_msg_ioam_enable_ntoh(vapi_msg_ioam_enable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_enable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ioam_enable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ioam_enable_msg_size(vapi_msg_ioam_enable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ioam_enable* vapi_alloc_ioam_enable(struct vapi_ctx_s *ctx)
{
  vapi_msg_ioam_enable *msg = NULL;
  const size_t size = sizeof(vapi_msg_ioam_enable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ioam_enable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ioam_enable);

  return msg;
}

static inline vapi_error_e vapi_ioam_enable(struct vapi_ctx_s *ctx,
  vapi_msg_ioam_enable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ioam_enable_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ioam_enable_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ioam_enable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ioam_enable()
{
  static const char name[] = "ioam_enable";
  static const char name_with_crc[] = "ioam_enable_9392e032";
  static vapi_message_desc_t __vapi_metadata_ioam_enable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ioam_enable, payload),
    sizeof(vapi_msg_ioam_enable),
    (generic_swap_fn_t)vapi_msg_ioam_enable_hton,
    (generic_swap_fn_t)vapi_msg_ioam_enable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ioam_enable = vapi_register_msg(&__vapi_metadata_ioam_enable);
  VAPI_DBG("Assigned msg id %d to ioam_enable", vapi_msg_id_ioam_enable);
}
#endif

#ifndef defined_vapi_msg_ip6_ra_event
#define defined_vapi_msg_ip6_ra_event
typedef struct __attribute__ ((__packed__)) {
  u16 _vl_msg_id;
  u32 client_index;
  u32 pid;
  u32 sw_if_index;
  vapi_type_ip6_address router_addr;
  u8 current_hop_limit;
  u8 flags;
  u16 router_lifetime_in_sec;
  u32 neighbor_reachable_time_in_msec;
  u32 time_in_msec_between_retransmitted_neighbor_solicitations;
  u32 n_prefixes;
  vapi_type_ip6_ra_prefix_info prefixes[0]; 
} vapi_payload_ip6_ra_event;

typedef struct __attribute__ ((__packed__)) {

  vapi_payload_ip6_ra_event payload;
} vapi_msg_ip6_ra_event;

static inline void vapi_msg_ip6_ra_event_payload_hton(vapi_payload_ip6_ra_event *payload)
{
  payload->_vl_msg_id = htobe16(payload->_vl_msg_id);
  payload->client_index = htobe32(payload->client_index);
  payload->pid = htobe32(payload->pid);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->router_lifetime_in_sec = htobe16(payload->router_lifetime_in_sec);
  payload->neighbor_reachable_time_in_msec = htobe32(payload->neighbor_reachable_time_in_msec);
  payload->time_in_msec_between_retransmitted_neighbor_solicitations = htobe32(payload->time_in_msec_between_retransmitted_neighbor_solicitations);
  payload->n_prefixes = htobe32(payload->n_prefixes);
  do { unsigned i; for (i = 0; i < be32toh(payload->n_prefixes); ++i) { vapi_type_ip6_ra_prefix_info_hton(&payload->prefixes[i]); } } while(0);
}

static inline void vapi_msg_ip6_ra_event_payload_ntoh(vapi_payload_ip6_ra_event *payload)
{
  payload->_vl_msg_id = be16toh(payload->_vl_msg_id);
  payload->client_index = be32toh(payload->client_index);
  payload->pid = be32toh(payload->pid);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->router_lifetime_in_sec = be16toh(payload->router_lifetime_in_sec);
  payload->neighbor_reachable_time_in_msec = be32toh(payload->neighbor_reachable_time_in_msec);
  payload->time_in_msec_between_retransmitted_neighbor_solicitations = be32toh(payload->time_in_msec_between_retransmitted_neighbor_solicitations);
  payload->n_prefixes = be32toh(payload->n_prefixes);
  do { unsigned i; for (i = 0; i < payload->n_prefixes; ++i) { vapi_type_ip6_ra_prefix_info_ntoh(&payload->prefixes[i]); } } while(0);
}

static inline void vapi_msg_ip6_ra_event_hton(vapi_msg_ip6_ra_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6_ra_event'@%p to big endian", msg);

  vapi_msg_ip6_ra_event_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip6_ra_event_ntoh(vapi_msg_ip6_ra_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6_ra_event'@%p to host byte order", msg);

  vapi_msg_ip6_ra_event_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip6_ra_event_msg_size(vapi_msg_ip6_ra_event *msg)
{
  return sizeof(*msg)+ msg->payload.n_prefixes * sizeof(msg->payload.prefixes[0]);
}

static void __attribute__((constructor)) __vapi_constructor_ip6_ra_event()
{
  static const char name[] = "ip6_ra_event";
  static const char name_with_crc[] = "ip6_ra_event_34c9ddac";
  static vapi_message_desc_t __vapi_metadata_ip6_ra_event = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    false,
    0,
    offsetof(vapi_msg_ip6_ra_event, payload),
    sizeof(vapi_msg_ip6_ra_event),
    (generic_swap_fn_t)vapi_msg_ip6_ra_event_hton,
    (generic_swap_fn_t)vapi_msg_ip6_ra_event_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6_ra_event = vapi_register_msg(&__vapi_metadata_ip6_ra_event);
  VAPI_DBG("Assigned msg id %d to ip6_ra_event", vapi_msg_id_ip6_ra_event);
}

static inline void vapi_set_vapi_msg_ip6_ra_event_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip6_ra_event *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip6_ra_event, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_mroute_add_del_reply
#define defined_vapi_msg_ip_mroute_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 stats_index; 
} vapi_payload_ip_mroute_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_mroute_add_del_reply payload;
} vapi_msg_ip_mroute_add_del_reply;

static inline void vapi_msg_ip_mroute_add_del_reply_payload_hton(vapi_payload_ip_mroute_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->stats_index = htobe32(payload->stats_index);
}

static inline void vapi_msg_ip_mroute_add_del_reply_payload_ntoh(vapi_payload_ip_mroute_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->stats_index = be32toh(payload->stats_index);
}

static inline void vapi_msg_ip_mroute_add_del_reply_hton(vapi_msg_ip_mroute_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_mroute_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_mroute_add_del_reply_ntoh(vapi_msg_ip_mroute_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_mroute_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_mroute_add_del_reply_msg_size(vapi_msg_ip_mroute_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_mroute_add_del_reply()
{
  static const char name[] = "ip_mroute_add_del_reply";
  static const char name_with_crc[] = "ip_mroute_add_del_reply_1992deab";
  static vapi_message_desc_t __vapi_metadata_ip_mroute_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_mroute_add_del_reply, payload),
    sizeof(vapi_msg_ip_mroute_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_mroute_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_mroute_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_mroute_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_mroute_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_mroute_add_del_reply", vapi_msg_id_ip_mroute_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_mroute_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_mroute_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_mroute_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_mroute_add_del
#define defined_vapi_msg_ip_mroute_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_multipath;
  vapi_type_ip_mroute route; 
} vapi_payload_ip_mroute_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_mroute_add_del payload;
} vapi_msg_ip_mroute_add_del;

static inline void vapi_msg_ip_mroute_add_del_payload_hton(vapi_payload_ip_mroute_add_del *payload)
{
  vapi_type_ip_mroute_hton(&payload->route);
}

static inline void vapi_msg_ip_mroute_add_del_payload_ntoh(vapi_payload_ip_mroute_add_del *payload)
{
  vapi_type_ip_mroute_ntoh(&payload->route);
}

static inline void vapi_msg_ip_mroute_add_del_hton(vapi_msg_ip_mroute_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_mroute_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_mroute_add_del_ntoh(vapi_msg_ip_mroute_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_mroute_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_mroute_add_del_msg_size(vapi_msg_ip_mroute_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_mroute_add_del* vapi_alloc_ip_mroute_add_del(struct vapi_ctx_s *ctx, size_t route_paths_array_size)
{
  vapi_msg_ip_mroute_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_mroute_add_del) + sizeof(msg->payload.route.paths[0]) * route_paths_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_mroute_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_mroute_add_del);
  msg->payload.route.n_paths = route_paths_array_size;

  return msg;
}

static inline vapi_error_e vapi_ip_mroute_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_mroute_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_mroute_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_mroute_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_mroute_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_mroute_add_del()
{
  static const char name[] = "ip_mroute_add_del";
  static const char name_with_crc[] = "ip_mroute_add_del_997baab2";
  static vapi_message_desc_t __vapi_metadata_ip_mroute_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_mroute_add_del, payload),
    sizeof(vapi_msg_ip_mroute_add_del),
    (generic_swap_fn_t)vapi_msg_ip_mroute_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_mroute_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_mroute_add_del = vapi_register_msg(&__vapi_metadata_ip_mroute_add_del);
  VAPI_DBG("Assigned msg id %d to ip_mroute_add_del", vapi_msg_id_ip_mroute_add_del);
}
#endif

#ifndef defined_vapi_msg_ip_address_details
#define defined_vapi_msg_ip_address_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  vapi_type_prefix prefix; 
} vapi_payload_ip_address_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_address_details payload;
} vapi_msg_ip_address_details;

static inline void vapi_msg_ip_address_details_payload_hton(vapi_payload_ip_address_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  vapi_type_prefix_hton(&payload->prefix);
}

static inline void vapi_msg_ip_address_details_payload_ntoh(vapi_payload_ip_address_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  vapi_type_prefix_ntoh(&payload->prefix);
}

static inline void vapi_msg_ip_address_details_hton(vapi_msg_ip_address_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_address_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_address_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_address_details_ntoh(vapi_msg_ip_address_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_address_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_address_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_address_details_msg_size(vapi_msg_ip_address_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_address_details()
{
  static const char name[] = "ip_address_details";
  static const char name_with_crc[] = "ip_address_details_2f1dbc7d";
  static vapi_message_desc_t __vapi_metadata_ip_address_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_address_details, payload),
    sizeof(vapi_msg_ip_address_details),
    (generic_swap_fn_t)vapi_msg_ip_address_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_address_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_address_details = vapi_register_msg(&__vapi_metadata_ip_address_details);
  VAPI_DBG("Assigned msg id %d to ip_address_details", vapi_msg_id_ip_address_details);
}

static inline void vapi_set_vapi_msg_ip_address_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_address_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_address_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_source_check_interface_add_del_reply
#define defined_vapi_msg_ip_source_check_interface_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_source_check_interface_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_source_check_interface_add_del_reply payload;
} vapi_msg_ip_source_check_interface_add_del_reply;

static inline void vapi_msg_ip_source_check_interface_add_del_reply_payload_hton(vapi_payload_ip_source_check_interface_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_source_check_interface_add_del_reply_payload_ntoh(vapi_payload_ip_source_check_interface_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_source_check_interface_add_del_reply_hton(vapi_msg_ip_source_check_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_check_interface_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_source_check_interface_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_source_check_interface_add_del_reply_ntoh(vapi_msg_ip_source_check_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_check_interface_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_source_check_interface_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_source_check_interface_add_del_reply_msg_size(vapi_msg_ip_source_check_interface_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_source_check_interface_add_del_reply()
{
  static const char name[] = "ip_source_check_interface_add_del_reply";
  static const char name_with_crc[] = "ip_source_check_interface_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_source_check_interface_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_source_check_interface_add_del_reply, payload),
    sizeof(vapi_msg_ip_source_check_interface_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_source_check_interface_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_source_check_interface_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_source_check_interface_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_source_check_interface_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_source_check_interface_add_del_reply", vapi_msg_id_ip_source_check_interface_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_source_check_interface_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_source_check_interface_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_source_check_interface_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_unnumbered_details
#define defined_vapi_msg_ip_unnumbered_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 ip_sw_if_index; 
} vapi_payload_ip_unnumbered_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_unnumbered_details payload;
} vapi_msg_ip_unnumbered_details;

static inline void vapi_msg_ip_unnumbered_details_payload_hton(vapi_payload_ip_unnumbered_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->ip_sw_if_index = htobe32(payload->ip_sw_if_index);
}

static inline void vapi_msg_ip_unnumbered_details_payload_ntoh(vapi_payload_ip_unnumbered_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->ip_sw_if_index = be32toh(payload->ip_sw_if_index);
}

static inline void vapi_msg_ip_unnumbered_details_hton(vapi_msg_ip_unnumbered_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_unnumbered_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_unnumbered_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_unnumbered_details_ntoh(vapi_msg_ip_unnumbered_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_unnumbered_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_unnumbered_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_unnumbered_details_msg_size(vapi_msg_ip_unnumbered_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_unnumbered_details()
{
  static const char name[] = "ip_unnumbered_details";
  static const char name_with_crc[] = "ip_unnumbered_details_ae694cf4";
  static vapi_message_desc_t __vapi_metadata_ip_unnumbered_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_unnumbered_details, payload),
    sizeof(vapi_msg_ip_unnumbered_details),
    (generic_swap_fn_t)vapi_msg_ip_unnumbered_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_unnumbered_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_unnumbered_details = vapi_register_msg(&__vapi_metadata_ip_unnumbered_details);
  VAPI_DBG("Assigned msg id %d to ip_unnumbered_details", vapi_msg_id_ip_unnumbered_details);
}

static inline void vapi_set_vapi_msg_ip_unnumbered_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_unnumbered_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_unnumbered_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_probe_neighbor_reply
#define defined_vapi_msg_ip_probe_neighbor_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_probe_neighbor_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_probe_neighbor_reply payload;
} vapi_msg_ip_probe_neighbor_reply;

static inline void vapi_msg_ip_probe_neighbor_reply_payload_hton(vapi_payload_ip_probe_neighbor_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_probe_neighbor_reply_payload_ntoh(vapi_payload_ip_probe_neighbor_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_probe_neighbor_reply_hton(vapi_msg_ip_probe_neighbor_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_probe_neighbor_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_probe_neighbor_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_probe_neighbor_reply_ntoh(vapi_msg_ip_probe_neighbor_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_probe_neighbor_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_probe_neighbor_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_probe_neighbor_reply_msg_size(vapi_msg_ip_probe_neighbor_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_probe_neighbor_reply()
{
  static const char name[] = "ip_probe_neighbor_reply";
  static const char name_with_crc[] = "ip_probe_neighbor_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_probe_neighbor_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_probe_neighbor_reply, payload),
    sizeof(vapi_msg_ip_probe_neighbor_reply),
    (generic_swap_fn_t)vapi_msg_ip_probe_neighbor_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_probe_neighbor_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_probe_neighbor_reply = vapi_register_msg(&__vapi_metadata_ip_probe_neighbor_reply);
  VAPI_DBG("Assigned msg id %d to ip_probe_neighbor_reply", vapi_msg_id_ip_probe_neighbor_reply);
}

static inline void vapi_set_vapi_msg_ip_probe_neighbor_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_probe_neighbor_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_probe_neighbor_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_probe_neighbor
#define defined_vapi_msg_ip_probe_neighbor
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  vapi_type_address dst; 
} vapi_payload_ip_probe_neighbor;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_probe_neighbor payload;
} vapi_msg_ip_probe_neighbor;

static inline void vapi_msg_ip_probe_neighbor_payload_hton(vapi_payload_ip_probe_neighbor *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  vapi_type_address_hton(&payload->dst);
}

static inline void vapi_msg_ip_probe_neighbor_payload_ntoh(vapi_payload_ip_probe_neighbor *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  vapi_type_address_ntoh(&payload->dst);
}

static inline void vapi_msg_ip_probe_neighbor_hton(vapi_msg_ip_probe_neighbor *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_probe_neighbor'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_probe_neighbor_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_probe_neighbor_ntoh(vapi_msg_ip_probe_neighbor *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_probe_neighbor'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_probe_neighbor_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_probe_neighbor_msg_size(vapi_msg_ip_probe_neighbor *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_probe_neighbor* vapi_alloc_ip_probe_neighbor(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_probe_neighbor *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_probe_neighbor);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_probe_neighbor*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_probe_neighbor);

  return msg;
}

static inline vapi_error_e vapi_ip_probe_neighbor(struct vapi_ctx_s *ctx,
  vapi_msg_ip_probe_neighbor *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_probe_neighbor_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_probe_neighbor_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_probe_neighbor_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_probe_neighbor()
{
  static const char name[] = "ip_probe_neighbor";
  static const char name_with_crc[] = "ip_probe_neighbor_2736142d";
  static vapi_message_desc_t __vapi_metadata_ip_probe_neighbor = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_probe_neighbor, payload),
    sizeof(vapi_msg_ip_probe_neighbor),
    (generic_swap_fn_t)vapi_msg_ip_probe_neighbor_hton,
    (generic_swap_fn_t)vapi_msg_ip_probe_neighbor_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_probe_neighbor = vapi_register_msg(&__vapi_metadata_ip_probe_neighbor);
  VAPI_DBG("Assigned msg id %d to ip_probe_neighbor", vapi_msg_id_ip_probe_neighbor);
}
#endif

#ifndef defined_vapi_msg_ip_table_details
#define defined_vapi_msg_ip_table_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip_table table; 
} vapi_payload_ip_table_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_table_details payload;
} vapi_msg_ip_table_details;

static inline void vapi_msg_ip_table_details_payload_hton(vapi_payload_ip_table_details *payload)
{
  vapi_type_ip_table_hton(&payload->table);
}

static inline void vapi_msg_ip_table_details_payload_ntoh(vapi_payload_ip_table_details *payload)
{
  vapi_type_ip_table_ntoh(&payload->table);
}

static inline void vapi_msg_ip_table_details_hton(vapi_msg_ip_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_table_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_table_details_ntoh(vapi_msg_ip_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_table_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_table_details_msg_size(vapi_msg_ip_table_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_table_details()
{
  static const char name[] = "ip_table_details";
  static const char name_with_crc[] = "ip_table_details_4d251961";
  static vapi_message_desc_t __vapi_metadata_ip_table_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_table_details, payload),
    sizeof(vapi_msg_ip_table_details),
    (generic_swap_fn_t)vapi_msg_ip_table_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_table_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_table_details = vapi_register_msg(&__vapi_metadata_ip_table_details);
  VAPI_DBG("Assigned msg id %d to ip_table_details", vapi_msg_id_ip_table_details);
}

static inline void vapi_set_vapi_msg_ip_table_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_table_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_table_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_reset_fib_reply
#define defined_vapi_msg_reset_fib_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_reset_fib_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_reset_fib_reply payload;
} vapi_msg_reset_fib_reply;

static inline void vapi_msg_reset_fib_reply_payload_hton(vapi_payload_reset_fib_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_reset_fib_reply_payload_ntoh(vapi_payload_reset_fib_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_reset_fib_reply_hton(vapi_msg_reset_fib_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_reset_fib_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_reset_fib_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_reset_fib_reply_ntoh(vapi_msg_reset_fib_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_reset_fib_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_reset_fib_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_reset_fib_reply_msg_size(vapi_msg_reset_fib_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_reset_fib_reply()
{
  static const char name[] = "reset_fib_reply";
  static const char name_with_crc[] = "reset_fib_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_reset_fib_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_reset_fib_reply, payload),
    sizeof(vapi_msg_reset_fib_reply),
    (generic_swap_fn_t)vapi_msg_reset_fib_reply_hton,
    (generic_swap_fn_t)vapi_msg_reset_fib_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_reset_fib_reply = vapi_register_msg(&__vapi_metadata_reset_fib_reply);
  VAPI_DBG("Assigned msg id %d to reset_fib_reply", vapi_msg_id_reset_fib_reply);
}

static inline void vapi_set_vapi_msg_reset_fib_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_reset_fib_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_reset_fib_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_ip6_nd_events_reply
#define defined_vapi_msg_want_ip6_nd_events_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_want_ip6_nd_events_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_want_ip6_nd_events_reply payload;
} vapi_msg_want_ip6_nd_events_reply;

static inline void vapi_msg_want_ip6_nd_events_reply_payload_hton(vapi_payload_want_ip6_nd_events_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_want_ip6_nd_events_reply_payload_ntoh(vapi_payload_want_ip6_nd_events_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_want_ip6_nd_events_reply_hton(vapi_msg_want_ip6_nd_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_nd_events_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_want_ip6_nd_events_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_ip6_nd_events_reply_ntoh(vapi_msg_want_ip6_nd_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_nd_events_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_want_ip6_nd_events_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_ip6_nd_events_reply_msg_size(vapi_msg_want_ip6_nd_events_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_want_ip6_nd_events_reply()
{
  static const char name[] = "want_ip6_nd_events_reply";
  static const char name_with_crc[] = "want_ip6_nd_events_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_want_ip6_nd_events_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_want_ip6_nd_events_reply, payload),
    sizeof(vapi_msg_want_ip6_nd_events_reply),
    (generic_swap_fn_t)vapi_msg_want_ip6_nd_events_reply_hton,
    (generic_swap_fn_t)vapi_msg_want_ip6_nd_events_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_ip6_nd_events_reply = vapi_register_msg(&__vapi_metadata_want_ip6_nd_events_reply);
  VAPI_DBG("Assigned msg id %d to want_ip6_nd_events_reply", vapi_msg_id_want_ip6_nd_events_reply);
}

static inline void vapi_set_vapi_msg_want_ip6_nd_events_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_want_ip6_nd_events_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_want_ip6_nd_events_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip6nd_proxy_add_del_reply
#define defined_vapi_msg_ip6nd_proxy_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip6nd_proxy_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip6nd_proxy_add_del_reply payload;
} vapi_msg_ip6nd_proxy_add_del_reply;

static inline void vapi_msg_ip6nd_proxy_add_del_reply_payload_hton(vapi_payload_ip6nd_proxy_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip6nd_proxy_add_del_reply_payload_ntoh(vapi_payload_ip6nd_proxy_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip6nd_proxy_add_del_reply_hton(vapi_msg_ip6nd_proxy_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip6nd_proxy_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip6nd_proxy_add_del_reply_ntoh(vapi_msg_ip6nd_proxy_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip6nd_proxy_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip6nd_proxy_add_del_reply_msg_size(vapi_msg_ip6nd_proxy_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip6nd_proxy_add_del_reply()
{
  static const char name[] = "ip6nd_proxy_add_del_reply";
  static const char name_with_crc[] = "ip6nd_proxy_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip6nd_proxy_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip6nd_proxy_add_del_reply, payload),
    sizeof(vapi_msg_ip6nd_proxy_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6nd_proxy_add_del_reply = vapi_register_msg(&__vapi_metadata_ip6nd_proxy_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip6nd_proxy_add_del_reply", vapi_msg_id_ip6nd_proxy_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip6nd_proxy_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip6nd_proxy_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip6nd_proxy_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip6nd_proxy_add_del
#define defined_vapi_msg_ip6nd_proxy_add_del
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_del;
  vapi_type_ip6_address ip; 
} vapi_payload_ip6nd_proxy_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip6nd_proxy_add_del payload;
} vapi_msg_ip6nd_proxy_add_del;

static inline void vapi_msg_ip6nd_proxy_add_del_payload_hton(vapi_payload_ip6nd_proxy_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip6nd_proxy_add_del_payload_ntoh(vapi_payload_ip6nd_proxy_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip6nd_proxy_add_del_hton(vapi_msg_ip6nd_proxy_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip6nd_proxy_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip6nd_proxy_add_del_ntoh(vapi_msg_ip6nd_proxy_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip6nd_proxy_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip6nd_proxy_add_del_msg_size(vapi_msg_ip6nd_proxy_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip6nd_proxy_add_del* vapi_alloc_ip6nd_proxy_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip6nd_proxy_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip6nd_proxy_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip6nd_proxy_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip6nd_proxy_add_del);

  return msg;
}

static inline vapi_error_e vapi_ip6nd_proxy_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip6nd_proxy_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip6nd_proxy_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip6nd_proxy_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip6nd_proxy_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip6nd_proxy_add_del()
{
  static const char name[] = "ip6nd_proxy_add_del";
  static const char name_with_crc[] = "ip6nd_proxy_add_del_bff10d55";
  static vapi_message_desc_t __vapi_metadata_ip6nd_proxy_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip6nd_proxy_add_del, payload),
    sizeof(vapi_msg_ip6nd_proxy_add_del),
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6nd_proxy_add_del = vapi_register_msg(&__vapi_metadata_ip6nd_proxy_add_del);
  VAPI_DBG("Assigned msg id %d to ip6nd_proxy_add_del", vapi_msg_id_ip6nd_proxy_add_del);
}
#endif

#ifndef defined_vapi_msg_ip_reassembly_set_reply
#define defined_vapi_msg_ip_reassembly_set_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_reassembly_set_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_reassembly_set_reply payload;
} vapi_msg_ip_reassembly_set_reply;

static inline void vapi_msg_ip_reassembly_set_reply_payload_hton(vapi_payload_ip_reassembly_set_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_reassembly_set_reply_payload_ntoh(vapi_payload_ip_reassembly_set_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_reassembly_set_reply_hton(vapi_msg_ip_reassembly_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_set_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_reassembly_set_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_reassembly_set_reply_ntoh(vapi_msg_ip_reassembly_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_set_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_reassembly_set_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_reassembly_set_reply_msg_size(vapi_msg_ip_reassembly_set_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_reassembly_set_reply()
{
  static const char name[] = "ip_reassembly_set_reply";
  static const char name_with_crc[] = "ip_reassembly_set_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_reassembly_set_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_reassembly_set_reply, payload),
    sizeof(vapi_msg_ip_reassembly_set_reply),
    (generic_swap_fn_t)vapi_msg_ip_reassembly_set_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_reassembly_set_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_reassembly_set_reply = vapi_register_msg(&__vapi_metadata_ip_reassembly_set_reply);
  VAPI_DBG("Assigned msg id %d to ip_reassembly_set_reply", vapi_msg_id_ip_reassembly_set_reply);
}

static inline void vapi_set_vapi_msg_ip_reassembly_set_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_reassembly_set_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_reassembly_set_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_container_proxy_add_del_reply
#define defined_vapi_msg_ip_container_proxy_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_container_proxy_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_container_proxy_add_del_reply payload;
} vapi_msg_ip_container_proxy_add_del_reply;

static inline void vapi_msg_ip_container_proxy_add_del_reply_payload_hton(vapi_payload_ip_container_proxy_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_container_proxy_add_del_reply_payload_ntoh(vapi_payload_ip_container_proxy_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_container_proxy_add_del_reply_hton(vapi_msg_ip_container_proxy_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_container_proxy_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_container_proxy_add_del_reply_ntoh(vapi_msg_ip_container_proxy_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_container_proxy_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_container_proxy_add_del_reply_msg_size(vapi_msg_ip_container_proxy_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_container_proxy_add_del_reply()
{
  static const char name[] = "ip_container_proxy_add_del_reply";
  static const char name_with_crc[] = "ip_container_proxy_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_container_proxy_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_container_proxy_add_del_reply, payload),
    sizeof(vapi_msg_ip_container_proxy_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_container_proxy_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_container_proxy_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_container_proxy_add_del_reply", vapi_msg_id_ip_container_proxy_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_container_proxy_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_container_proxy_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_container_proxy_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_source_check_interface_add_del
#define defined_vapi_msg_ip_source_check_interface_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 loose;
  u32 sw_if_index; 
} vapi_payload_ip_source_check_interface_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_source_check_interface_add_del payload;
} vapi_msg_ip_source_check_interface_add_del;

static inline void vapi_msg_ip_source_check_interface_add_del_payload_hton(vapi_payload_ip_source_check_interface_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_source_check_interface_add_del_payload_ntoh(vapi_payload_ip_source_check_interface_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_source_check_interface_add_del_hton(vapi_msg_ip_source_check_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_check_interface_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_source_check_interface_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_source_check_interface_add_del_ntoh(vapi_msg_ip_source_check_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_check_interface_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_source_check_interface_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_source_check_interface_add_del_msg_size(vapi_msg_ip_source_check_interface_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_source_check_interface_add_del* vapi_alloc_ip_source_check_interface_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_source_check_interface_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_source_check_interface_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_source_check_interface_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_source_check_interface_add_del);

  return msg;
}

static inline vapi_error_e vapi_ip_source_check_interface_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_source_check_interface_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_source_check_interface_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_source_check_interface_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_source_check_interface_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_source_check_interface_add_del()
{
  static const char name[] = "ip_source_check_interface_add_del";
  static const char name_with_crc[] = "ip_source_check_interface_add_del_0a60152a";
  static vapi_message_desc_t __vapi_metadata_ip_source_check_interface_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_source_check_interface_add_del, payload),
    sizeof(vapi_msg_ip_source_check_interface_add_del),
    (generic_swap_fn_t)vapi_msg_ip_source_check_interface_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_source_check_interface_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_source_check_interface_add_del = vapi_register_msg(&__vapi_metadata_ip_source_check_interface_add_del);
  VAPI_DBG("Assigned msg id %d to ip_source_check_interface_add_del", vapi_msg_id_ip_source_check_interface_add_del);
}
#endif

#ifndef defined_vapi_msg_ip_mroute_details
#define defined_vapi_msg_ip_mroute_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip_mroute route; 
} vapi_payload_ip_mroute_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_mroute_details payload;
} vapi_msg_ip_mroute_details;

static inline void vapi_msg_ip_mroute_details_payload_hton(vapi_payload_ip_mroute_details *payload)
{
  vapi_type_ip_mroute_hton(&payload->route);
}

static inline void vapi_msg_ip_mroute_details_payload_ntoh(vapi_payload_ip_mroute_details *payload)
{
  vapi_type_ip_mroute_ntoh(&payload->route);
}

static inline void vapi_msg_ip_mroute_details_hton(vapi_msg_ip_mroute_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_mroute_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_mroute_details_ntoh(vapi_msg_ip_mroute_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_mroute_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_mroute_details_msg_size(vapi_msg_ip_mroute_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_mroute_details()
{
  static const char name[] = "ip_mroute_details";
  static const char name_with_crc[] = "ip_mroute_details_39405e5a";
  static vapi_message_desc_t __vapi_metadata_ip_mroute_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_mroute_details, payload),
    sizeof(vapi_msg_ip_mroute_details),
    (generic_swap_fn_t)vapi_msg_ip_mroute_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_mroute_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_mroute_details = vapi_register_msg(&__vapi_metadata_ip_mroute_details);
  VAPI_DBG("Assigned msg id %d to ip_mroute_details", vapi_msg_id_ip_mroute_details);
}

static inline void vapi_set_vapi_msg_ip_mroute_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_mroute_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_mroute_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_mroute_dump
#define defined_vapi_msg_ip_mroute_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip_table table; 
} vapi_payload_ip_mroute_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_mroute_dump payload;
} vapi_msg_ip_mroute_dump;

static inline void vapi_msg_ip_mroute_dump_payload_hton(vapi_payload_ip_mroute_dump *payload)
{
  vapi_type_ip_table_hton(&payload->table);
}

static inline void vapi_msg_ip_mroute_dump_payload_ntoh(vapi_payload_ip_mroute_dump *payload)
{
  vapi_type_ip_table_ntoh(&payload->table);
}

static inline void vapi_msg_ip_mroute_dump_hton(vapi_msg_ip_mroute_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_mroute_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_mroute_dump_ntoh(vapi_msg_ip_mroute_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mroute_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_mroute_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_mroute_dump_msg_size(vapi_msg_ip_mroute_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_mroute_dump* vapi_alloc_ip_mroute_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_mroute_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_mroute_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_mroute_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_mroute_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_mroute_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_mroute_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_mroute_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_mroute_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_mroute_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_mroute_dump()
{
  static const char name[] = "ip_mroute_dump";
  static const char name_with_crc[] = "ip_mroute_dump_f5ad78e8";
  static vapi_message_desc_t __vapi_metadata_ip_mroute_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_mroute_dump, payload),
    sizeof(vapi_msg_ip_mroute_dump),
    (generic_swap_fn_t)vapi_msg_ip_mroute_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_mroute_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_mroute_dump = vapi_register_msg(&__vapi_metadata_ip_mroute_dump);
  VAPI_DBG("Assigned msg id %d to ip_mroute_dump", vapi_msg_id_ip_mroute_dump);
}
#endif

#ifndef defined_vapi_msg_ip_neighbor_add_del_reply
#define defined_vapi_msg_ip_neighbor_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 stats_index; 
} vapi_payload_ip_neighbor_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_neighbor_add_del_reply payload;
} vapi_msg_ip_neighbor_add_del_reply;

static inline void vapi_msg_ip_neighbor_add_del_reply_payload_hton(vapi_payload_ip_neighbor_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->stats_index = htobe32(payload->stats_index);
}

static inline void vapi_msg_ip_neighbor_add_del_reply_payload_ntoh(vapi_payload_ip_neighbor_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->stats_index = be32toh(payload->stats_index);
}

static inline void vapi_msg_ip_neighbor_add_del_reply_hton(vapi_msg_ip_neighbor_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_neighbor_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_neighbor_add_del_reply_ntoh(vapi_msg_ip_neighbor_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_neighbor_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_neighbor_add_del_reply_msg_size(vapi_msg_ip_neighbor_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_neighbor_add_del_reply()
{
  static const char name[] = "ip_neighbor_add_del_reply";
  static const char name_with_crc[] = "ip_neighbor_add_del_reply_1992deab";
  static vapi_message_desc_t __vapi_metadata_ip_neighbor_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_neighbor_add_del_reply, payload),
    sizeof(vapi_msg_ip_neighbor_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_neighbor_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_neighbor_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_neighbor_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_neighbor_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_neighbor_add_del_reply", vapi_msg_id_ip_neighbor_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_neighbor_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_neighbor_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_neighbor_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_scan_neighbor_enable_disable_reply
#define defined_vapi_msg_ip_scan_neighbor_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_scan_neighbor_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_scan_neighbor_enable_disable_reply payload;
} vapi_msg_ip_scan_neighbor_enable_disable_reply;

static inline void vapi_msg_ip_scan_neighbor_enable_disable_reply_payload_hton(vapi_payload_ip_scan_neighbor_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_scan_neighbor_enable_disable_reply_payload_ntoh(vapi_payload_ip_scan_neighbor_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_scan_neighbor_enable_disable_reply_hton(vapi_msg_ip_scan_neighbor_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_scan_neighbor_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_scan_neighbor_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_scan_neighbor_enable_disable_reply_ntoh(vapi_msg_ip_scan_neighbor_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_scan_neighbor_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_scan_neighbor_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_scan_neighbor_enable_disable_reply_msg_size(vapi_msg_ip_scan_neighbor_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_scan_neighbor_enable_disable_reply()
{
  static const char name[] = "ip_scan_neighbor_enable_disable_reply";
  static const char name_with_crc[] = "ip_scan_neighbor_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_scan_neighbor_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_scan_neighbor_enable_disable_reply, payload),
    sizeof(vapi_msg_ip_scan_neighbor_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_ip_scan_neighbor_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_scan_neighbor_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_scan_neighbor_enable_disable_reply = vapi_register_msg(&__vapi_metadata_ip_scan_neighbor_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to ip_scan_neighbor_enable_disable_reply", vapi_msg_id_ip_scan_neighbor_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_ip_scan_neighbor_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_scan_neighbor_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_scan_neighbor_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_table_add_del_reply
#define defined_vapi_msg_ip_table_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_table_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_table_add_del_reply payload;
} vapi_msg_ip_table_add_del_reply;

static inline void vapi_msg_ip_table_add_del_reply_payload_hton(vapi_payload_ip_table_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_table_add_del_reply_payload_ntoh(vapi_payload_ip_table_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_table_add_del_reply_hton(vapi_msg_ip_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_table_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_table_add_del_reply_ntoh(vapi_msg_ip_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_table_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_table_add_del_reply_msg_size(vapi_msg_ip_table_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_table_add_del_reply()
{
  static const char name[] = "ip_table_add_del_reply";
  static const char name_with_crc[] = "ip_table_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_table_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_table_add_del_reply, payload),
    sizeof(vapi_msg_ip_table_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_table_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_table_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_table_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_table_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_table_add_del_reply", vapi_msg_id_ip_table_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_table_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_table_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_table_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_ip6nd_ra_prefix_reply
#define defined_vapi_msg_sw_interface_ip6nd_ra_prefix_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_ip6nd_ra_prefix_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_ip6nd_ra_prefix_reply payload;
} vapi_msg_sw_interface_ip6nd_ra_prefix_reply;

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_reply_payload_hton(vapi_payload_sw_interface_ip6nd_ra_prefix_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_reply_payload_ntoh(vapi_payload_sw_interface_ip6nd_ra_prefix_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_reply_hton(vapi_msg_sw_interface_ip6nd_ra_prefix_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_prefix_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_prefix_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_reply_ntoh(vapi_msg_sw_interface_ip6nd_ra_prefix_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_prefix_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_prefix_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6nd_ra_prefix_reply_msg_size(vapi_msg_sw_interface_ip6nd_ra_prefix_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6nd_ra_prefix_reply()
{
  static const char name[] = "sw_interface_ip6nd_ra_prefix_reply";
  static const char name_with_crc[] = "sw_interface_ip6nd_ra_prefix_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6nd_ra_prefix_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_ip6nd_ra_prefix_reply, payload),
    sizeof(vapi_msg_sw_interface_ip6nd_ra_prefix_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_prefix_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_prefix_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply = vapi_register_msg(&__vapi_metadata_sw_interface_ip6nd_ra_prefix_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6nd_ra_prefix_reply", vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_ip6nd_ra_prefix_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_ip6nd_ra_prefix_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_ip6nd_ra_prefix
#define defined_vapi_msg_sw_interface_ip6nd_ra_prefix
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  vapi_type_prefix prefix;
  u8 use_default;
  u8 no_advertise;
  u8 off_link;
  u8 no_autoconfig;
  u8 no_onlink;
  u8 is_no;
  u32 val_lifetime;
  u32 pref_lifetime; 
} vapi_payload_sw_interface_ip6nd_ra_prefix;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_ip6nd_ra_prefix payload;
} vapi_msg_sw_interface_ip6nd_ra_prefix;

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_payload_hton(vapi_payload_sw_interface_ip6nd_ra_prefix *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  vapi_type_prefix_hton(&payload->prefix);
  payload->val_lifetime = htobe32(payload->val_lifetime);
  payload->pref_lifetime = htobe32(payload->pref_lifetime);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_payload_ntoh(vapi_payload_sw_interface_ip6nd_ra_prefix *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  vapi_type_prefix_ntoh(&payload->prefix);
  payload->val_lifetime = be32toh(payload->val_lifetime);
  payload->pref_lifetime = be32toh(payload->pref_lifetime);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_hton(vapi_msg_sw_interface_ip6nd_ra_prefix *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_prefix'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_prefix_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_prefix_ntoh(vapi_msg_sw_interface_ip6nd_ra_prefix *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_prefix'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_prefix_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6nd_ra_prefix_msg_size(vapi_msg_sw_interface_ip6nd_ra_prefix *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_ip6nd_ra_prefix* vapi_alloc_sw_interface_ip6nd_ra_prefix(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_ip6nd_ra_prefix *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_ip6nd_ra_prefix);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_ip6nd_ra_prefix*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_ip6nd_ra_prefix);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_ip6nd_ra_prefix(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_ip6nd_ra_prefix *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_ip6nd_ra_prefix_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sw_interface_ip6nd_ra_prefix_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sw_interface_ip6nd_ra_prefix_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6nd_ra_prefix()
{
  static const char name[] = "sw_interface_ip6nd_ra_prefix";
  static const char name_with_crc[] = "sw_interface_ip6nd_ra_prefix_0f759f82";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6nd_ra_prefix = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_ip6nd_ra_prefix, payload),
    sizeof(vapi_msg_sw_interface_ip6nd_ra_prefix),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_prefix_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_prefix_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6nd_ra_prefix = vapi_register_msg(&__vapi_metadata_sw_interface_ip6nd_ra_prefix);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6nd_ra_prefix", vapi_msg_id_sw_interface_ip6nd_ra_prefix);
}
#endif

#ifndef defined_vapi_msg_ip_reassembly_set
#define defined_vapi_msg_ip_reassembly_set
typedef struct __attribute__ ((__packed__)) {
  u32 timeout_ms;
  u32 max_reassemblies;
  u32 max_reassembly_length;
  u32 expire_walk_interval_ms;
  u8 is_ip6; 
} vapi_payload_ip_reassembly_set;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_reassembly_set payload;
} vapi_msg_ip_reassembly_set;

static inline void vapi_msg_ip_reassembly_set_payload_hton(vapi_payload_ip_reassembly_set *payload)
{
  payload->timeout_ms = htobe32(payload->timeout_ms);
  payload->max_reassemblies = htobe32(payload->max_reassemblies);
  payload->max_reassembly_length = htobe32(payload->max_reassembly_length);
  payload->expire_walk_interval_ms = htobe32(payload->expire_walk_interval_ms);
}

static inline void vapi_msg_ip_reassembly_set_payload_ntoh(vapi_payload_ip_reassembly_set *payload)
{
  payload->timeout_ms = be32toh(payload->timeout_ms);
  payload->max_reassemblies = be32toh(payload->max_reassemblies);
  payload->max_reassembly_length = be32toh(payload->max_reassembly_length);
  payload->expire_walk_interval_ms = be32toh(payload->expire_walk_interval_ms);
}

static inline void vapi_msg_ip_reassembly_set_hton(vapi_msg_ip_reassembly_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_set'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_reassembly_set_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_reassembly_set_ntoh(vapi_msg_ip_reassembly_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_set'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_reassembly_set_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_reassembly_set_msg_size(vapi_msg_ip_reassembly_set *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_reassembly_set* vapi_alloc_ip_reassembly_set(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_reassembly_set *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_reassembly_set);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_reassembly_set*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_reassembly_set);

  return msg;
}

static inline vapi_error_e vapi_ip_reassembly_set(struct vapi_ctx_s *ctx,
  vapi_msg_ip_reassembly_set *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_reassembly_set_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_reassembly_set_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_reassembly_set_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_reassembly_set()
{
  static const char name[] = "ip_reassembly_set";
  static const char name_with_crc[] = "ip_reassembly_set_403051cd";
  static vapi_message_desc_t __vapi_metadata_ip_reassembly_set = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_reassembly_set, payload),
    sizeof(vapi_msg_ip_reassembly_set),
    (generic_swap_fn_t)vapi_msg_ip_reassembly_set_hton,
    (generic_swap_fn_t)vapi_msg_ip_reassembly_set_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_reassembly_set = vapi_register_msg(&__vapi_metadata_ip_reassembly_set);
  VAPI_DBG("Assigned msg id %d to ip_reassembly_set", vapi_msg_id_ip_reassembly_set);
}
#endif

#ifndef defined_vapi_msg_sw_interface_ip6_enable_disable
#define defined_vapi_msg_sw_interface_ip6_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 enable; 
} vapi_payload_sw_interface_ip6_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_ip6_enable_disable payload;
} vapi_msg_sw_interface_ip6_enable_disable;

static inline void vapi_msg_sw_interface_ip6_enable_disable_payload_hton(vapi_payload_sw_interface_ip6_enable_disable *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_ip6_enable_disable_payload_ntoh(vapi_payload_sw_interface_ip6_enable_disable *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_ip6_enable_disable_hton(vapi_msg_sw_interface_ip6_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6_enable_disable_ntoh(vapi_msg_sw_interface_ip6_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6_enable_disable_msg_size(vapi_msg_sw_interface_ip6_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_ip6_enable_disable* vapi_alloc_sw_interface_ip6_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_ip6_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_ip6_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_ip6_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_ip6_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_ip6_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_ip6_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_ip6_enable_disable_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sw_interface_ip6_enable_disable_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sw_interface_ip6_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6_enable_disable()
{
  static const char name[] = "sw_interface_ip6_enable_disable";
  static const char name_with_crc[] = "sw_interface_ip6_enable_disable_a36fadc0";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_ip6_enable_disable, payload),
    sizeof(vapi_msg_sw_interface_ip6_enable_disable),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6_enable_disable = vapi_register_msg(&__vapi_metadata_sw_interface_ip6_enable_disable);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6_enable_disable", vapi_msg_id_sw_interface_ip6_enable_disable);
}
#endif

#ifndef defined_vapi_msg_want_ip4_arp_events
#define defined_vapi_msg_want_ip4_arp_events
typedef struct __attribute__ ((__packed__)) {
  u8 enable_disable;
  u32 pid;
  vapi_type_ip4_address ip; 
} vapi_payload_want_ip4_arp_events;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_want_ip4_arp_events payload;
} vapi_msg_want_ip4_arp_events;

static inline void vapi_msg_want_ip4_arp_events_payload_hton(vapi_payload_want_ip4_arp_events *payload)
{
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_want_ip4_arp_events_payload_ntoh(vapi_payload_want_ip4_arp_events *payload)
{
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_want_ip4_arp_events_hton(vapi_msg_want_ip4_arp_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip4_arp_events'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_want_ip4_arp_events_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_ip4_arp_events_ntoh(vapi_msg_want_ip4_arp_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip4_arp_events'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_want_ip4_arp_events_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_ip4_arp_events_msg_size(vapi_msg_want_ip4_arp_events *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_want_ip4_arp_events* vapi_alloc_want_ip4_arp_events(struct vapi_ctx_s *ctx)
{
  vapi_msg_want_ip4_arp_events *msg = NULL;
  const size_t size = sizeof(vapi_msg_want_ip4_arp_events);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_want_ip4_arp_events*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_want_ip4_arp_events);

  return msg;
}

static inline vapi_error_e vapi_want_ip4_arp_events(struct vapi_ctx_s *ctx,
  vapi_msg_want_ip4_arp_events *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_want_ip4_arp_events_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_want_ip4_arp_events_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_want_ip4_arp_events_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_want_ip4_arp_events()
{
  static const char name[] = "want_ip4_arp_events";
  static const char name_with_crc[] = "want_ip4_arp_events_70fd7195";
  static vapi_message_desc_t __vapi_metadata_want_ip4_arp_events = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_want_ip4_arp_events, payload),
    sizeof(vapi_msg_want_ip4_arp_events),
    (generic_swap_fn_t)vapi_msg_want_ip4_arp_events_hton,
    (generic_swap_fn_t)vapi_msg_want_ip4_arp_events_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_ip4_arp_events = vapi_register_msg(&__vapi_metadata_want_ip4_arp_events);
  VAPI_DBG("Assigned msg id %d to want_ip4_arp_events", vapi_msg_id_want_ip4_arp_events);
}
#endif

#ifndef defined_vapi_msg_ip_mtable_details
#define defined_vapi_msg_ip_mtable_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip_table table; 
} vapi_payload_ip_mtable_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_mtable_details payload;
} vapi_msg_ip_mtable_details;

static inline void vapi_msg_ip_mtable_details_payload_hton(vapi_payload_ip_mtable_details *payload)
{
  vapi_type_ip_table_hton(&payload->table);
}

static inline void vapi_msg_ip_mtable_details_payload_ntoh(vapi_payload_ip_mtable_details *payload)
{
  vapi_type_ip_table_ntoh(&payload->table);
}

static inline void vapi_msg_ip_mtable_details_hton(vapi_msg_ip_mtable_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mtable_details'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_mtable_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_mtable_details_ntoh(vapi_msg_ip_mtable_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mtable_details'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_mtable_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_mtable_details_msg_size(vapi_msg_ip_mtable_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_mtable_details()
{
  static const char name[] = "ip_mtable_details";
  static const char name_with_crc[] = "ip_mtable_details_f5ad78e8";
  static vapi_message_desc_t __vapi_metadata_ip_mtable_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_mtable_details, payload),
    sizeof(vapi_msg_ip_mtable_details),
    (generic_swap_fn_t)vapi_msg_ip_mtable_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_mtable_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_mtable_details = vapi_register_msg(&__vapi_metadata_ip_mtable_details);
  VAPI_DBG("Assigned msg id %d to ip_mtable_details", vapi_msg_id_ip_mtable_details);
}

static inline void vapi_set_vapi_msg_ip_mtable_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_mtable_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_mtable_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_mtable_dump
#define defined_vapi_msg_ip_mtable_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ip_mtable_dump;

static inline void vapi_msg_ip_mtable_dump_hton(vapi_msg_ip_mtable_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mtable_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ip_mtable_dump_ntoh(vapi_msg_ip_mtable_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_mtable_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ip_mtable_dump_msg_size(vapi_msg_ip_mtable_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_mtable_dump* vapi_alloc_ip_mtable_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_mtable_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_mtable_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_mtable_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_mtable_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_mtable_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_mtable_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_mtable_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_mtable_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_mtable_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_mtable_dump()
{
  static const char name[] = "ip_mtable_dump";
  static const char name_with_crc[] = "ip_mtable_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ip_mtable_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ip_mtable_dump),
    (generic_swap_fn_t)vapi_msg_ip_mtable_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_mtable_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_mtable_dump = vapi_register_msg(&__vapi_metadata_ip_mtable_dump);
  VAPI_DBG("Assigned msg id %d to ip_mtable_dump", vapi_msg_id_ip_mtable_dump);
}
#endif

#ifndef defined_vapi_msg_ip_source_and_port_range_check_interface_add_del_reply
#define defined_vapi_msg_ip_source_and_port_range_check_interface_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_source_and_port_range_check_interface_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_source_and_port_range_check_interface_add_del_reply payload;
} vapi_msg_ip_source_and_port_range_check_interface_add_del_reply;

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_payload_hton(vapi_payload_ip_source_and_port_range_check_interface_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_payload_ntoh(vapi_payload_ip_source_and_port_range_check_interface_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_hton(vapi_msg_ip_source_and_port_range_check_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_interface_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_ntoh(vapi_msg_ip_source_and_port_range_check_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_interface_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_source_and_port_range_check_interface_add_del_reply_msg_size(vapi_msg_ip_source_and_port_range_check_interface_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_source_and_port_range_check_interface_add_del_reply()
{
  static const char name[] = "ip_source_and_port_range_check_interface_add_del_reply";
  static const char name_with_crc[] = "ip_source_and_port_range_check_interface_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_source_and_port_range_check_interface_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_source_and_port_range_check_interface_add_del_reply, payload),
    sizeof(vapi_msg_ip_source_and_port_range_check_interface_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply = vapi_register_msg(&__vapi_metadata_ip_source_and_port_range_check_interface_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ip_source_and_port_range_check_interface_add_del_reply", vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply);
}

static inline void vapi_set_vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_source_and_port_range_check_interface_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_punt_redirect_reply
#define defined_vapi_msg_ip_punt_redirect_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_punt_redirect_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_punt_redirect_reply payload;
} vapi_msg_ip_punt_redirect_reply;

static inline void vapi_msg_ip_punt_redirect_reply_payload_hton(vapi_payload_ip_punt_redirect_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_punt_redirect_reply_payload_ntoh(vapi_payload_ip_punt_redirect_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_punt_redirect_reply_hton(vapi_msg_ip_punt_redirect_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_punt_redirect_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_punt_redirect_reply_ntoh(vapi_msg_ip_punt_redirect_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_punt_redirect_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_punt_redirect_reply_msg_size(vapi_msg_ip_punt_redirect_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_punt_redirect_reply()
{
  static const char name[] = "ip_punt_redirect_reply";
  static const char name_with_crc[] = "ip_punt_redirect_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_punt_redirect_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_punt_redirect_reply, payload),
    sizeof(vapi_msg_ip_punt_redirect_reply),
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_punt_redirect_reply = vapi_register_msg(&__vapi_metadata_ip_punt_redirect_reply);
  VAPI_DBG("Assigned msg id %d to ip_punt_redirect_reply", vapi_msg_id_ip_punt_redirect_reply);
}

static inline void vapi_set_vapi_msg_ip_punt_redirect_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_punt_redirect_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_punt_redirect_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_unnumbered_dump
#define defined_vapi_msg_ip_unnumbered_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_ip_unnumbered_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_unnumbered_dump payload;
} vapi_msg_ip_unnumbered_dump;

static inline void vapi_msg_ip_unnumbered_dump_payload_hton(vapi_payload_ip_unnumbered_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_unnumbered_dump_payload_ntoh(vapi_payload_ip_unnumbered_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_unnumbered_dump_hton(vapi_msg_ip_unnumbered_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_unnumbered_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_unnumbered_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_unnumbered_dump_ntoh(vapi_msg_ip_unnumbered_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_unnumbered_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_unnumbered_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_unnumbered_dump_msg_size(vapi_msg_ip_unnumbered_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_unnumbered_dump* vapi_alloc_ip_unnumbered_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_unnumbered_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_unnumbered_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_unnumbered_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_unnumbered_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_unnumbered_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_unnumbered_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_unnumbered_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_unnumbered_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_unnumbered_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_unnumbered_dump()
{
  static const char name[] = "ip_unnumbered_dump";
  static const char name_with_crc[] = "ip_unnumbered_dump_529cb13f";
  static vapi_message_desc_t __vapi_metadata_ip_unnumbered_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_unnumbered_dump, payload),
    sizeof(vapi_msg_ip_unnumbered_dump),
    (generic_swap_fn_t)vapi_msg_ip_unnumbered_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_unnumbered_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_unnumbered_dump = vapi_register_msg(&__vapi_metadata_ip_unnumbered_dump);
  VAPI_DBG("Assigned msg id %d to ip_unnumbered_dump", vapi_msg_id_ip_unnumbered_dump);
}
#endif

#ifndef defined_vapi_msg_ip_neighbor_add_del
#define defined_vapi_msg_ip_neighbor_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_ip_neighbor neighbor; 
} vapi_payload_ip_neighbor_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_neighbor_add_del payload;
} vapi_msg_ip_neighbor_add_del;

static inline void vapi_msg_ip_neighbor_add_del_payload_hton(vapi_payload_ip_neighbor_add_del *payload)
{
  vapi_type_ip_neighbor_hton(&payload->neighbor);
}

static inline void vapi_msg_ip_neighbor_add_del_payload_ntoh(vapi_payload_ip_neighbor_add_del *payload)
{
  vapi_type_ip_neighbor_ntoh(&payload->neighbor);
}

static inline void vapi_msg_ip_neighbor_add_del_hton(vapi_msg_ip_neighbor_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_neighbor_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_neighbor_add_del_ntoh(vapi_msg_ip_neighbor_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_neighbor_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_neighbor_add_del_msg_size(vapi_msg_ip_neighbor_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_neighbor_add_del* vapi_alloc_ip_neighbor_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_neighbor_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_neighbor_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_neighbor_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_neighbor_add_del);

  return msg;
}

static inline vapi_error_e vapi_ip_neighbor_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_neighbor_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_neighbor_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_neighbor_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_neighbor_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_neighbor_add_del()
{
  static const char name[] = "ip_neighbor_add_del";
  static const char name_with_crc[] = "ip_neighbor_add_del_7a68a3c4";
  static vapi_message_desc_t __vapi_metadata_ip_neighbor_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_neighbor_add_del, payload),
    sizeof(vapi_msg_ip_neighbor_add_del),
    (generic_swap_fn_t)vapi_msg_ip_neighbor_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_neighbor_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_neighbor_add_del = vapi_register_msg(&__vapi_metadata_ip_neighbor_add_del);
  VAPI_DBG("Assigned msg id %d to ip_neighbor_add_del", vapi_msg_id_ip_neighbor_add_del);
}
#endif

#ifndef defined_vapi_msg_ip6nd_proxy_dump
#define defined_vapi_msg_ip6nd_proxy_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ip6nd_proxy_dump;

static inline void vapi_msg_ip6nd_proxy_dump_hton(vapi_msg_ip6nd_proxy_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ip6nd_proxy_dump_ntoh(vapi_msg_ip6nd_proxy_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_proxy_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ip6nd_proxy_dump_msg_size(vapi_msg_ip6nd_proxy_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip6nd_proxy_dump* vapi_alloc_ip6nd_proxy_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip6nd_proxy_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip6nd_proxy_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip6nd_proxy_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip6nd_proxy_dump);

  return msg;
}

static inline vapi_error_e vapi_ip6nd_proxy_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip6nd_proxy_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip6nd_proxy_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip6nd_proxy_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip6nd_proxy_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip6nd_proxy_dump()
{
  static const char name[] = "ip6nd_proxy_dump";
  static const char name_with_crc[] = "ip6nd_proxy_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ip6nd_proxy_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ip6nd_proxy_dump),
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip6nd_proxy_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6nd_proxy_dump = vapi_register_msg(&__vapi_metadata_ip6nd_proxy_dump);
  VAPI_DBG("Assigned msg id %d to ip6nd_proxy_dump", vapi_msg_id_ip6nd_proxy_dump);
}
#endif

#ifndef defined_vapi_msg_want_ip6_ra_events_reply
#define defined_vapi_msg_want_ip6_ra_events_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_want_ip6_ra_events_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_want_ip6_ra_events_reply payload;
} vapi_msg_want_ip6_ra_events_reply;

static inline void vapi_msg_want_ip6_ra_events_reply_payload_hton(vapi_payload_want_ip6_ra_events_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_want_ip6_ra_events_reply_payload_ntoh(vapi_payload_want_ip6_ra_events_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_want_ip6_ra_events_reply_hton(vapi_msg_want_ip6_ra_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_ra_events_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_want_ip6_ra_events_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_ip6_ra_events_reply_ntoh(vapi_msg_want_ip6_ra_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_ra_events_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_want_ip6_ra_events_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_ip6_ra_events_reply_msg_size(vapi_msg_want_ip6_ra_events_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_want_ip6_ra_events_reply()
{
  static const char name[] = "want_ip6_ra_events_reply";
  static const char name_with_crc[] = "want_ip6_ra_events_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_want_ip6_ra_events_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_want_ip6_ra_events_reply, payload),
    sizeof(vapi_msg_want_ip6_ra_events_reply),
    (generic_swap_fn_t)vapi_msg_want_ip6_ra_events_reply_hton,
    (generic_swap_fn_t)vapi_msg_want_ip6_ra_events_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_ip6_ra_events_reply = vapi_register_msg(&__vapi_metadata_want_ip6_ra_events_reply);
  VAPI_DBG("Assigned msg id %d to want_ip6_ra_events_reply", vapi_msg_id_want_ip6_ra_events_reply);
}

static inline void vapi_set_vapi_msg_want_ip6_ra_events_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_want_ip6_ra_events_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_want_ip6_ra_events_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_ip6_ra_events
#define defined_vapi_msg_want_ip6_ra_events
typedef struct __attribute__ ((__packed__)) {
  u8 enable_disable;
  u32 pid; 
} vapi_payload_want_ip6_ra_events;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_want_ip6_ra_events payload;
} vapi_msg_want_ip6_ra_events;

static inline void vapi_msg_want_ip6_ra_events_payload_hton(vapi_payload_want_ip6_ra_events *payload)
{
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_want_ip6_ra_events_payload_ntoh(vapi_payload_want_ip6_ra_events *payload)
{
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_want_ip6_ra_events_hton(vapi_msg_want_ip6_ra_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_ra_events'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_want_ip6_ra_events_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_ip6_ra_events_ntoh(vapi_msg_want_ip6_ra_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_ra_events'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_want_ip6_ra_events_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_ip6_ra_events_msg_size(vapi_msg_want_ip6_ra_events *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_want_ip6_ra_events* vapi_alloc_want_ip6_ra_events(struct vapi_ctx_s *ctx)
{
  vapi_msg_want_ip6_ra_events *msg = NULL;
  const size_t size = sizeof(vapi_msg_want_ip6_ra_events);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_want_ip6_ra_events*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_want_ip6_ra_events);

  return msg;
}

static inline vapi_error_e vapi_want_ip6_ra_events(struct vapi_ctx_s *ctx,
  vapi_msg_want_ip6_ra_events *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_want_ip6_ra_events_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_want_ip6_ra_events_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_want_ip6_ra_events_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_want_ip6_ra_events()
{
  static const char name[] = "want_ip6_ra_events";
  static const char name_with_crc[] = "want_ip6_ra_events_05b454b5";
  static vapi_message_desc_t __vapi_metadata_want_ip6_ra_events = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_want_ip6_ra_events, payload),
    sizeof(vapi_msg_want_ip6_ra_events),
    (generic_swap_fn_t)vapi_msg_want_ip6_ra_events_hton,
    (generic_swap_fn_t)vapi_msg_want_ip6_ra_events_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_ip6_ra_events = vapi_register_msg(&__vapi_metadata_want_ip6_ra_events);
  VAPI_DBG("Assigned msg id %d to want_ip6_ra_events", vapi_msg_id_want_ip6_ra_events);
}
#endif

#ifndef defined_vapi_msg_ip_scan_neighbor_enable_disable
#define defined_vapi_msg_ip_scan_neighbor_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 mode;
  u8 scan_interval;
  u8 max_proc_time;
  u8 max_update;
  u8 scan_int_delay;
  u8 stale_threshold; 
} vapi_payload_ip_scan_neighbor_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_scan_neighbor_enable_disable payload;
} vapi_msg_ip_scan_neighbor_enable_disable;

static inline void vapi_msg_ip_scan_neighbor_enable_disable_payload_hton(vapi_payload_ip_scan_neighbor_enable_disable *payload)
{

}

static inline void vapi_msg_ip_scan_neighbor_enable_disable_payload_ntoh(vapi_payload_ip_scan_neighbor_enable_disable *payload)
{

}

static inline void vapi_msg_ip_scan_neighbor_enable_disable_hton(vapi_msg_ip_scan_neighbor_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_scan_neighbor_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_scan_neighbor_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_scan_neighbor_enable_disable_ntoh(vapi_msg_ip_scan_neighbor_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_scan_neighbor_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_scan_neighbor_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_scan_neighbor_enable_disable_msg_size(vapi_msg_ip_scan_neighbor_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_scan_neighbor_enable_disable* vapi_alloc_ip_scan_neighbor_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_scan_neighbor_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_scan_neighbor_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_scan_neighbor_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_scan_neighbor_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_ip_scan_neighbor_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_ip_scan_neighbor_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_scan_neighbor_enable_disable_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_scan_neighbor_enable_disable_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_scan_neighbor_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_scan_neighbor_enable_disable()
{
  static const char name[] = "ip_scan_neighbor_enable_disable";
  static const char name_with_crc[] = "ip_scan_neighbor_enable_disable_0a6bf57a";
  static vapi_message_desc_t __vapi_metadata_ip_scan_neighbor_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_scan_neighbor_enable_disable, payload),
    sizeof(vapi_msg_ip_scan_neighbor_enable_disable),
    (generic_swap_fn_t)vapi_msg_ip_scan_neighbor_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_ip_scan_neighbor_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_scan_neighbor_enable_disable = vapi_register_msg(&__vapi_metadata_ip_scan_neighbor_enable_disable);
  VAPI_DBG("Assigned msg id %d to ip_scan_neighbor_enable_disable", vapi_msg_id_ip_scan_neighbor_enable_disable);
}
#endif

#ifndef defined_vapi_msg_ip_reassembly_get_reply
#define defined_vapi_msg_ip_reassembly_get_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 timeout_ms;
  u32 max_reassemblies;
  u32 max_reassembly_length;
  u32 expire_walk_interval_ms;
  u8 is_ip6; 
} vapi_payload_ip_reassembly_get_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_reassembly_get_reply payload;
} vapi_msg_ip_reassembly_get_reply;

static inline void vapi_msg_ip_reassembly_get_reply_payload_hton(vapi_payload_ip_reassembly_get_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->timeout_ms = htobe32(payload->timeout_ms);
  payload->max_reassemblies = htobe32(payload->max_reassemblies);
  payload->max_reassembly_length = htobe32(payload->max_reassembly_length);
  payload->expire_walk_interval_ms = htobe32(payload->expire_walk_interval_ms);
}

static inline void vapi_msg_ip_reassembly_get_reply_payload_ntoh(vapi_payload_ip_reassembly_get_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->timeout_ms = be32toh(payload->timeout_ms);
  payload->max_reassemblies = be32toh(payload->max_reassemblies);
  payload->max_reassembly_length = be32toh(payload->max_reassembly_length);
  payload->expire_walk_interval_ms = be32toh(payload->expire_walk_interval_ms);
}

static inline void vapi_msg_ip_reassembly_get_reply_hton(vapi_msg_ip_reassembly_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_get_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_reassembly_get_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_reassembly_get_reply_ntoh(vapi_msg_ip_reassembly_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_get_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_reassembly_get_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_reassembly_get_reply_msg_size(vapi_msg_ip_reassembly_get_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_reassembly_get_reply()
{
  static const char name[] = "ip_reassembly_get_reply";
  static const char name_with_crc[] = "ip_reassembly_get_reply_c96e518d";
  static vapi_message_desc_t __vapi_metadata_ip_reassembly_get_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_reassembly_get_reply, payload),
    sizeof(vapi_msg_ip_reassembly_get_reply),
    (generic_swap_fn_t)vapi_msg_ip_reassembly_get_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_reassembly_get_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_reassembly_get_reply = vapi_register_msg(&__vapi_metadata_ip_reassembly_get_reply);
  VAPI_DBG("Assigned msg id %d to ip_reassembly_get_reply", vapi_msg_id_ip_reassembly_get_reply);
}

static inline void vapi_set_vapi_msg_ip_reassembly_get_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_reassembly_get_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_reassembly_get_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_reassembly_get
#define defined_vapi_msg_ip_reassembly_get
typedef struct __attribute__ ((__packed__)) {
  u8 is_ip6; 
} vapi_payload_ip_reassembly_get;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_reassembly_get payload;
} vapi_msg_ip_reassembly_get;

static inline void vapi_msg_ip_reassembly_get_payload_hton(vapi_payload_ip_reassembly_get *payload)
{

}

static inline void vapi_msg_ip_reassembly_get_payload_ntoh(vapi_payload_ip_reassembly_get *payload)
{

}

static inline void vapi_msg_ip_reassembly_get_hton(vapi_msg_ip_reassembly_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_get'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_reassembly_get_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_reassembly_get_ntoh(vapi_msg_ip_reassembly_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_get'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_reassembly_get_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_reassembly_get_msg_size(vapi_msg_ip_reassembly_get *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_reassembly_get* vapi_alloc_ip_reassembly_get(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_reassembly_get *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_reassembly_get);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_reassembly_get*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_reassembly_get);

  return msg;
}

static inline vapi_error_e vapi_ip_reassembly_get(struct vapi_ctx_s *ctx,
  vapi_msg_ip_reassembly_get *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_reassembly_get_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_reassembly_get_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_reassembly_get_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_reassembly_get()
{
  static const char name[] = "ip_reassembly_get";
  static const char name_with_crc[] = "ip_reassembly_get_6fe91190";
  static vapi_message_desc_t __vapi_metadata_ip_reassembly_get = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_reassembly_get, payload),
    sizeof(vapi_msg_ip_reassembly_get),
    (generic_swap_fn_t)vapi_msg_ip_reassembly_get_hton,
    (generic_swap_fn_t)vapi_msg_ip_reassembly_get_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_reassembly_get = vapi_register_msg(&__vapi_metadata_ip_reassembly_get);
  VAPI_DBG("Assigned msg id %d to ip_reassembly_get", vapi_msg_id_ip_reassembly_get);
}
#endif

#ifndef defined_vapi_msg_set_ip_flow_hash_reply
#define defined_vapi_msg_set_ip_flow_hash_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_set_ip_flow_hash_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_set_ip_flow_hash_reply payload;
} vapi_msg_set_ip_flow_hash_reply;

static inline void vapi_msg_set_ip_flow_hash_reply_payload_hton(vapi_payload_set_ip_flow_hash_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_set_ip_flow_hash_reply_payload_ntoh(vapi_payload_set_ip_flow_hash_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_set_ip_flow_hash_reply_hton(vapi_msg_set_ip_flow_hash_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ip_flow_hash_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_set_ip_flow_hash_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_ip_flow_hash_reply_ntoh(vapi_msg_set_ip_flow_hash_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ip_flow_hash_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_set_ip_flow_hash_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_ip_flow_hash_reply_msg_size(vapi_msg_set_ip_flow_hash_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_set_ip_flow_hash_reply()
{
  static const char name[] = "set_ip_flow_hash_reply";
  static const char name_with_crc[] = "set_ip_flow_hash_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_set_ip_flow_hash_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_set_ip_flow_hash_reply, payload),
    sizeof(vapi_msg_set_ip_flow_hash_reply),
    (generic_swap_fn_t)vapi_msg_set_ip_flow_hash_reply_hton,
    (generic_swap_fn_t)vapi_msg_set_ip_flow_hash_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_ip_flow_hash_reply = vapi_register_msg(&__vapi_metadata_set_ip_flow_hash_reply);
  VAPI_DBG("Assigned msg id %d to set_ip_flow_hash_reply", vapi_msg_id_set_ip_flow_hash_reply);
}

static inline void vapi_set_vapi_msg_set_ip_flow_hash_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_set_ip_flow_hash_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_set_ip_flow_hash_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_address_dump
#define defined_vapi_msg_ip_address_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_ipv6; 
} vapi_payload_ip_address_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_address_dump payload;
} vapi_msg_ip_address_dump;

static inline void vapi_msg_ip_address_dump_payload_hton(vapi_payload_ip_address_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_address_dump_payload_ntoh(vapi_payload_ip_address_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_address_dump_hton(vapi_msg_ip_address_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_address_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_address_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_address_dump_ntoh(vapi_msg_ip_address_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_address_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_address_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_address_dump_msg_size(vapi_msg_ip_address_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_address_dump* vapi_alloc_ip_address_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_address_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_address_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_address_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_address_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_address_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_address_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_address_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_address_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_address_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_address_dump()
{
  static const char name[] = "ip_address_dump";
  static const char name_with_crc[] = "ip_address_dump_6b7bcd0a";
  static vapi_message_desc_t __vapi_metadata_ip_address_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_address_dump, payload),
    sizeof(vapi_msg_ip_address_dump),
    (generic_swap_fn_t)vapi_msg_ip_address_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_address_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_address_dump = vapi_register_msg(&__vapi_metadata_ip_address_dump);
  VAPI_DBG("Assigned msg id %d to ip_address_dump", vapi_msg_id_ip_address_dump);
}
#endif

#ifndef defined_vapi_msg_proxy_arp_intfc_details
#define defined_vapi_msg_proxy_arp_intfc_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_proxy_arp_intfc_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_proxy_arp_intfc_details payload;
} vapi_msg_proxy_arp_intfc_details;

static inline void vapi_msg_proxy_arp_intfc_details_payload_hton(vapi_payload_proxy_arp_intfc_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_proxy_arp_intfc_details_payload_ntoh(vapi_payload_proxy_arp_intfc_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_proxy_arp_intfc_details_hton(vapi_msg_proxy_arp_intfc_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_proxy_arp_intfc_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_proxy_arp_intfc_details_ntoh(vapi_msg_proxy_arp_intfc_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_proxy_arp_intfc_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_proxy_arp_intfc_details_msg_size(vapi_msg_proxy_arp_intfc_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_proxy_arp_intfc_details()
{
  static const char name[] = "proxy_arp_intfc_details";
  static const char name_with_crc[] = "proxy_arp_intfc_details_f6458e5f";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_intfc_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_proxy_arp_intfc_details, payload),
    sizeof(vapi_msg_proxy_arp_intfc_details),
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_details_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_intfc_details = vapi_register_msg(&__vapi_metadata_proxy_arp_intfc_details);
  VAPI_DBG("Assigned msg id %d to proxy_arp_intfc_details", vapi_msg_id_proxy_arp_intfc_details);
}

static inline void vapi_set_vapi_msg_proxy_arp_intfc_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_proxy_arp_intfc_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_proxy_arp_intfc_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_proxy_arp_details
#define defined_vapi_msg_proxy_arp_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_proxy_arp proxy; 
} vapi_payload_proxy_arp_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_proxy_arp_details payload;
} vapi_msg_proxy_arp_details;

static inline void vapi_msg_proxy_arp_details_payload_hton(vapi_payload_proxy_arp_details *payload)
{
  vapi_type_proxy_arp_hton(&payload->proxy);
}

static inline void vapi_msg_proxy_arp_details_payload_ntoh(vapi_payload_proxy_arp_details *payload)
{
  vapi_type_proxy_arp_ntoh(&payload->proxy);
}

static inline void vapi_msg_proxy_arp_details_hton(vapi_msg_proxy_arp_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_proxy_arp_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_proxy_arp_details_ntoh(vapi_msg_proxy_arp_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_proxy_arp_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_proxy_arp_details_msg_size(vapi_msg_proxy_arp_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_proxy_arp_details()
{
  static const char name[] = "proxy_arp_details";
  static const char name_with_crc[] = "proxy_arp_details_2515902a";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_proxy_arp_details, payload),
    sizeof(vapi_msg_proxy_arp_details),
    (generic_swap_fn_t)vapi_msg_proxy_arp_details_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_details = vapi_register_msg(&__vapi_metadata_proxy_arp_details);
  VAPI_DBG("Assigned msg id %d to proxy_arp_details", vapi_msg_id_proxy_arp_details);
}

static inline void vapi_set_vapi_msg_proxy_arp_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_proxy_arp_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_proxy_arp_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_punt_redirect
#define defined_vapi_msg_ip_punt_redirect
typedef struct __attribute__ ((__packed__)) {
  vapi_type_punt_redirect punt;
  u8 is_add; 
} vapi_payload_ip_punt_redirect;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_punt_redirect payload;
} vapi_msg_ip_punt_redirect;

static inline void vapi_msg_ip_punt_redirect_payload_hton(vapi_payload_ip_punt_redirect *payload)
{
  vapi_type_punt_redirect_hton(&payload->punt);
}

static inline void vapi_msg_ip_punt_redirect_payload_ntoh(vapi_payload_ip_punt_redirect *payload)
{
  vapi_type_punt_redirect_ntoh(&payload->punt);
}

static inline void vapi_msg_ip_punt_redirect_hton(vapi_msg_ip_punt_redirect *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_punt_redirect_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_punt_redirect_ntoh(vapi_msg_ip_punt_redirect *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_redirect'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_punt_redirect_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_punt_redirect_msg_size(vapi_msg_ip_punt_redirect *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_punt_redirect* vapi_alloc_ip_punt_redirect(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_punt_redirect *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_punt_redirect);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_punt_redirect*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_punt_redirect);

  return msg;
}

static inline vapi_error_e vapi_ip_punt_redirect(struct vapi_ctx_s *ctx,
  vapi_msg_ip_punt_redirect *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_punt_redirect_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_punt_redirect_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_punt_redirect_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_punt_redirect()
{
  static const char name[] = "ip_punt_redirect";
  static const char name_with_crc[] = "ip_punt_redirect_70b793c6";
  static vapi_message_desc_t __vapi_metadata_ip_punt_redirect = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_punt_redirect, payload),
    sizeof(vapi_msg_ip_punt_redirect),
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_hton,
    (generic_swap_fn_t)vapi_msg_ip_punt_redirect_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_punt_redirect = vapi_register_msg(&__vapi_metadata_ip_punt_redirect);
  VAPI_DBG("Assigned msg id %d to ip_punt_redirect", vapi_msg_id_ip_punt_redirect);
}
#endif

#ifndef defined_vapi_msg_ip_details
#define defined_vapi_msg_ip_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_ipv6; 
} vapi_payload_ip_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_details payload;
} vapi_msg_ip_details;

static inline void vapi_msg_ip_details_payload_hton(vapi_payload_ip_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_details_payload_ntoh(vapi_payload_ip_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_details_hton(vapi_msg_ip_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_details_ntoh(vapi_msg_ip_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_details_msg_size(vapi_msg_ip_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_details()
{
  static const char name[] = "ip_details";
  static const char name_with_crc[] = "ip_details_8bb37ec4";
  static vapi_message_desc_t __vapi_metadata_ip_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_details, payload),
    sizeof(vapi_msg_ip_details),
    (generic_swap_fn_t)vapi_msg_ip_details_hton,
    (generic_swap_fn_t)vapi_msg_ip_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_details = vapi_register_msg(&__vapi_metadata_ip_details);
  VAPI_DBG("Assigned msg id %d to ip_details", vapi_msg_id_ip_details);
}

static inline void vapi_set_vapi_msg_ip_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_neighbor_dump
#define defined_vapi_msg_ip_neighbor_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_ipv6; 
} vapi_payload_ip_neighbor_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_neighbor_dump payload;
} vapi_msg_ip_neighbor_dump;

static inline void vapi_msg_ip_neighbor_dump_payload_hton(vapi_payload_ip_neighbor_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_neighbor_dump_payload_ntoh(vapi_payload_ip_neighbor_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_neighbor_dump_hton(vapi_msg_ip_neighbor_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_neighbor_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_neighbor_dump_ntoh(vapi_msg_ip_neighbor_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_neighbor_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_neighbor_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_neighbor_dump_msg_size(vapi_msg_ip_neighbor_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_neighbor_dump* vapi_alloc_ip_neighbor_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_neighbor_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_neighbor_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_neighbor_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_neighbor_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_neighbor_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_neighbor_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_neighbor_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_neighbor_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_neighbor_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_neighbor_dump()
{
  static const char name[] = "ip_neighbor_dump";
  static const char name_with_crc[] = "ip_neighbor_dump_6b7bcd0a";
  static vapi_message_desc_t __vapi_metadata_ip_neighbor_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_neighbor_dump, payload),
    sizeof(vapi_msg_ip_neighbor_dump),
    (generic_swap_fn_t)vapi_msg_ip_neighbor_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_neighbor_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_neighbor_dump = vapi_register_msg(&__vapi_metadata_ip_neighbor_dump);
  VAPI_DBG("Assigned msg id %d to ip_neighbor_dump", vapi_msg_id_ip_neighbor_dump);
}
#endif

#ifndef defined_vapi_msg_reset_fib
#define defined_vapi_msg_reset_fib
typedef struct __attribute__ ((__packed__)) {
  u32 vrf_id;
  u8 is_ipv6; 
} vapi_payload_reset_fib;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_reset_fib payload;
} vapi_msg_reset_fib;

static inline void vapi_msg_reset_fib_payload_hton(vapi_payload_reset_fib *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_reset_fib_payload_ntoh(vapi_payload_reset_fib *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_reset_fib_hton(vapi_msg_reset_fib *msg)
{
  VAPI_DBG("Swapping `vapi_msg_reset_fib'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_reset_fib_payload_hton(&msg->payload);
}

static inline void vapi_msg_reset_fib_ntoh(vapi_msg_reset_fib *msg)
{
  VAPI_DBG("Swapping `vapi_msg_reset_fib'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_reset_fib_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_reset_fib_msg_size(vapi_msg_reset_fib *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_reset_fib* vapi_alloc_reset_fib(struct vapi_ctx_s *ctx)
{
  vapi_msg_reset_fib *msg = NULL;
  const size_t size = sizeof(vapi_msg_reset_fib);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_reset_fib*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_reset_fib);

  return msg;
}

static inline vapi_error_e vapi_reset_fib(struct vapi_ctx_s *ctx,
  vapi_msg_reset_fib *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_reset_fib_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_reset_fib_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_reset_fib_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_reset_fib()
{
  static const char name[] = "reset_fib";
  static const char name_with_crc[] = "reset_fib_8553ebd9";
  static vapi_message_desc_t __vapi_metadata_reset_fib = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_reset_fib, payload),
    sizeof(vapi_msg_reset_fib),
    (generic_swap_fn_t)vapi_msg_reset_fib_hton,
    (generic_swap_fn_t)vapi_msg_reset_fib_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_reset_fib = vapi_register_msg(&__vapi_metadata_reset_fib);
  VAPI_DBG("Assigned msg id %d to reset_fib", vapi_msg_id_reset_fib);
}
#endif

#ifndef defined_vapi_msg_sw_interface_ip6nd_ra_config_reply
#define defined_vapi_msg_sw_interface_ip6nd_ra_config_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_ip6nd_ra_config_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_ip6nd_ra_config_reply payload;
} vapi_msg_sw_interface_ip6nd_ra_config_reply;

static inline void vapi_msg_sw_interface_ip6nd_ra_config_reply_payload_hton(vapi_payload_sw_interface_ip6nd_ra_config_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_config_reply_payload_ntoh(vapi_payload_sw_interface_ip6nd_ra_config_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_config_reply_hton(vapi_msg_sw_interface_ip6nd_ra_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_config_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_config_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_config_reply_ntoh(vapi_msg_sw_interface_ip6nd_ra_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_config_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_config_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6nd_ra_config_reply_msg_size(vapi_msg_sw_interface_ip6nd_ra_config_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6nd_ra_config_reply()
{
  static const char name[] = "sw_interface_ip6nd_ra_config_reply";
  static const char name_with_crc[] = "sw_interface_ip6nd_ra_config_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6nd_ra_config_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_ip6nd_ra_config_reply, payload),
    sizeof(vapi_msg_sw_interface_ip6nd_ra_config_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_config_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_config_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6nd_ra_config_reply = vapi_register_msg(&__vapi_metadata_sw_interface_ip6nd_ra_config_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6nd_ra_config_reply", vapi_msg_id_sw_interface_ip6nd_ra_config_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_ip6nd_ra_config_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_ip6nd_ra_config_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_ip6nd_ra_config_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_ip6nd_ra_config
#define defined_vapi_msg_sw_interface_ip6nd_ra_config
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 suppress;
  u8 managed;
  u8 other;
  u8 ll_option;
  u8 send_unicast;
  u8 cease;
  u8 is_no;
  u8 default_router;
  u32 max_interval;
  u32 min_interval;
  u32 lifetime;
  u32 initial_count;
  u32 initial_interval; 
} vapi_payload_sw_interface_ip6nd_ra_config;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_ip6nd_ra_config payload;
} vapi_msg_sw_interface_ip6nd_ra_config;

static inline void vapi_msg_sw_interface_ip6nd_ra_config_payload_hton(vapi_payload_sw_interface_ip6nd_ra_config *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->max_interval = htobe32(payload->max_interval);
  payload->min_interval = htobe32(payload->min_interval);
  payload->lifetime = htobe32(payload->lifetime);
  payload->initial_count = htobe32(payload->initial_count);
  payload->initial_interval = htobe32(payload->initial_interval);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_config_payload_ntoh(vapi_payload_sw_interface_ip6nd_ra_config *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->max_interval = be32toh(payload->max_interval);
  payload->min_interval = be32toh(payload->min_interval);
  payload->lifetime = be32toh(payload->lifetime);
  payload->initial_count = be32toh(payload->initial_count);
  payload->initial_interval = be32toh(payload->initial_interval);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_config_hton(vapi_msg_sw_interface_ip6nd_ra_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_config'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_config_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_ip6nd_ra_config_ntoh(vapi_msg_sw_interface_ip6nd_ra_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_ip6nd_ra_config'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_ip6nd_ra_config_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_ip6nd_ra_config_msg_size(vapi_msg_sw_interface_ip6nd_ra_config *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_ip6nd_ra_config* vapi_alloc_sw_interface_ip6nd_ra_config(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_ip6nd_ra_config *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_ip6nd_ra_config);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_ip6nd_ra_config*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_ip6nd_ra_config);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_ip6nd_ra_config(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_ip6nd_ra_config *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_ip6nd_ra_config_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sw_interface_ip6nd_ra_config_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sw_interface_ip6nd_ra_config_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_ip6nd_ra_config()
{
  static const char name[] = "sw_interface_ip6nd_ra_config";
  static const char name_with_crc[] = "sw_interface_ip6nd_ra_config_c3f02daa";
  static vapi_message_desc_t __vapi_metadata_sw_interface_ip6nd_ra_config = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_ip6nd_ra_config, payload),
    sizeof(vapi_msg_sw_interface_ip6nd_ra_config),
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_config_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_ip6nd_ra_config_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_ip6nd_ra_config = vapi_register_msg(&__vapi_metadata_sw_interface_ip6nd_ra_config);
  VAPI_DBG("Assigned msg id %d to sw_interface_ip6nd_ra_config", vapi_msg_id_sw_interface_ip6nd_ra_config);
}
#endif

#ifndef defined_vapi_msg_mfib_signal_details
#define defined_vapi_msg_mfib_signal_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 table_id;
  vapi_type_mprefix prefix;
  u16 ip_packet_len;
  u8 ip_packet_data[256]; 
} vapi_payload_mfib_signal_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mfib_signal_details payload;
} vapi_msg_mfib_signal_details;

static inline void vapi_msg_mfib_signal_details_payload_hton(vapi_payload_mfib_signal_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->table_id = htobe32(payload->table_id);
  vapi_type_mprefix_hton(&payload->prefix);
  payload->ip_packet_len = htobe16(payload->ip_packet_len);
}

static inline void vapi_msg_mfib_signal_details_payload_ntoh(vapi_payload_mfib_signal_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->table_id = be32toh(payload->table_id);
  vapi_type_mprefix_ntoh(&payload->prefix);
  payload->ip_packet_len = be16toh(payload->ip_packet_len);
}

static inline void vapi_msg_mfib_signal_details_hton(vapi_msg_mfib_signal_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mfib_signal_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mfib_signal_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_mfib_signal_details_ntoh(vapi_msg_mfib_signal_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mfib_signal_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mfib_signal_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mfib_signal_details_msg_size(vapi_msg_mfib_signal_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mfib_signal_details()
{
  static const char name[] = "mfib_signal_details";
  static const char name_with_crc[] = "mfib_signal_details_cd461bfa";
  static vapi_message_desc_t __vapi_metadata_mfib_signal_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mfib_signal_details, payload),
    sizeof(vapi_msg_mfib_signal_details),
    (generic_swap_fn_t)vapi_msg_mfib_signal_details_hton,
    (generic_swap_fn_t)vapi_msg_mfib_signal_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mfib_signal_details = vapi_register_msg(&__vapi_metadata_mfib_signal_details);
  VAPI_DBG("Assigned msg id %d to mfib_signal_details", vapi_msg_id_mfib_signal_details);
}

static inline void vapi_set_vapi_msg_mfib_signal_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mfib_signal_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mfib_signal_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mfib_signal_dump
#define defined_vapi_msg_mfib_signal_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_mfib_signal_dump;

static inline void vapi_msg_mfib_signal_dump_hton(vapi_msg_mfib_signal_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mfib_signal_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_mfib_signal_dump_ntoh(vapi_msg_mfib_signal_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mfib_signal_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_mfib_signal_dump_msg_size(vapi_msg_mfib_signal_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mfib_signal_dump* vapi_alloc_mfib_signal_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_mfib_signal_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_mfib_signal_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mfib_signal_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mfib_signal_dump);

  return msg;
}

static inline vapi_error_e vapi_mfib_signal_dump(struct vapi_ctx_s *ctx,
  vapi_msg_mfib_signal_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mfib_signal_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_mfib_signal_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_mfib_signal_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mfib_signal_dump()
{
  static const char name[] = "mfib_signal_dump";
  static const char name_with_crc[] = "mfib_signal_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_mfib_signal_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_mfib_signal_dump),
    (generic_swap_fn_t)vapi_msg_mfib_signal_dump_hton,
    (generic_swap_fn_t)vapi_msg_mfib_signal_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mfib_signal_dump = vapi_register_msg(&__vapi_metadata_mfib_signal_dump);
  VAPI_DBG("Assigned msg id %d to mfib_signal_dump", vapi_msg_id_mfib_signal_dump);
}
#endif

#ifndef defined_vapi_msg_ip_container_proxy_add_del
#define defined_vapi_msg_ip_container_proxy_add_del
typedef struct __attribute__ ((__packed__)) {
  vapi_type_prefix pfx;
  u32 sw_if_index;
  u8 is_add; 
} vapi_payload_ip_container_proxy_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_container_proxy_add_del payload;
} vapi_msg_ip_container_proxy_add_del;

static inline void vapi_msg_ip_container_proxy_add_del_payload_hton(vapi_payload_ip_container_proxy_add_del *payload)
{
  vapi_type_prefix_hton(&payload->pfx);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_container_proxy_add_del_payload_ntoh(vapi_payload_ip_container_proxy_add_del *payload)
{
  vapi_type_prefix_ntoh(&payload->pfx);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_container_proxy_add_del_hton(vapi_msg_ip_container_proxy_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_container_proxy_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_container_proxy_add_del_ntoh(vapi_msg_ip_container_proxy_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_container_proxy_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_container_proxy_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_container_proxy_add_del_msg_size(vapi_msg_ip_container_proxy_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_container_proxy_add_del* vapi_alloc_ip_container_proxy_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_container_proxy_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_container_proxy_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_container_proxy_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_container_proxy_add_del);

  return msg;
}

static inline vapi_error_e vapi_ip_container_proxy_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_container_proxy_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_container_proxy_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_container_proxy_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_container_proxy_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_container_proxy_add_del()
{
  static const char name[] = "ip_container_proxy_add_del";
  static const char name_with_crc[] = "ip_container_proxy_add_del_5ba831f3";
  static vapi_message_desc_t __vapi_metadata_ip_container_proxy_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_container_proxy_add_del, payload),
    sizeof(vapi_msg_ip_container_proxy_add_del),
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_container_proxy_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_container_proxy_add_del = vapi_register_msg(&__vapi_metadata_ip_container_proxy_add_del);
  VAPI_DBG("Assigned msg id %d to ip_container_proxy_add_del", vapi_msg_id_ip_container_proxy_add_del);
}
#endif

#ifndef defined_vapi_msg_proxy_arp_intfc_dump
#define defined_vapi_msg_proxy_arp_intfc_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_proxy_arp_intfc_dump;

static inline void vapi_msg_proxy_arp_intfc_dump_hton(vapi_msg_proxy_arp_intfc_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_proxy_arp_intfc_dump_ntoh(vapi_msg_proxy_arp_intfc_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_intfc_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_proxy_arp_intfc_dump_msg_size(vapi_msg_proxy_arp_intfc_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_proxy_arp_intfc_dump* vapi_alloc_proxy_arp_intfc_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_proxy_arp_intfc_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_proxy_arp_intfc_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_proxy_arp_intfc_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_proxy_arp_intfc_dump);

  return msg;
}

static inline vapi_error_e vapi_proxy_arp_intfc_dump(struct vapi_ctx_s *ctx,
  vapi_msg_proxy_arp_intfc_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_proxy_arp_intfc_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_proxy_arp_intfc_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_proxy_arp_intfc_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_proxy_arp_intfc_dump()
{
  static const char name[] = "proxy_arp_intfc_dump";
  static const char name_with_crc[] = "proxy_arp_intfc_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_intfc_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_proxy_arp_intfc_dump),
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_dump_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_intfc_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_intfc_dump = vapi_register_msg(&__vapi_metadata_proxy_arp_intfc_dump);
  VAPI_DBG("Assigned msg id %d to proxy_arp_intfc_dump", vapi_msg_id_proxy_arp_intfc_dump);
}
#endif

#ifndef defined_vapi_msg_ioam_disable
#define defined_vapi_msg_ioam_disable
typedef struct __attribute__ ((__packed__)) {
  u16 id; 
} vapi_payload_ioam_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ioam_disable payload;
} vapi_msg_ioam_disable;

static inline void vapi_msg_ioam_disable_payload_hton(vapi_payload_ioam_disable *payload)
{
  payload->id = htobe16(payload->id);
}

static inline void vapi_msg_ioam_disable_payload_ntoh(vapi_payload_ioam_disable *payload)
{
  payload->id = be16toh(payload->id);
}

static inline void vapi_msg_ioam_disable_hton(vapi_msg_ioam_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ioam_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_ioam_disable_ntoh(vapi_msg_ioam_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ioam_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ioam_disable_msg_size(vapi_msg_ioam_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ioam_disable* vapi_alloc_ioam_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_ioam_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_ioam_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ioam_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ioam_disable);

  return msg;
}

static inline vapi_error_e vapi_ioam_disable(struct vapi_ctx_s *ctx,
  vapi_msg_ioam_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ioam_disable_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ioam_disable_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ioam_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ioam_disable()
{
  static const char name[] = "ioam_disable";
  static const char name_with_crc[] = "ioam_disable_6b16a45e";
  static vapi_message_desc_t __vapi_metadata_ioam_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ioam_disable, payload),
    sizeof(vapi_msg_ioam_disable),
    (generic_swap_fn_t)vapi_msg_ioam_disable_hton,
    (generic_swap_fn_t)vapi_msg_ioam_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ioam_disable = vapi_register_msg(&__vapi_metadata_ioam_disable);
  VAPI_DBG("Assigned msg id %d to ioam_disable", vapi_msg_id_ioam_disable);
}
#endif

#ifndef defined_vapi_msg_want_ip6_nd_events
#define defined_vapi_msg_want_ip6_nd_events
typedef struct __attribute__ ((__packed__)) {
  u8 enable_disable;
  u32 pid;
  vapi_type_ip6_address ip; 
} vapi_payload_want_ip6_nd_events;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_want_ip6_nd_events payload;
} vapi_msg_want_ip6_nd_events;

static inline void vapi_msg_want_ip6_nd_events_payload_hton(vapi_payload_want_ip6_nd_events *payload)
{
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_want_ip6_nd_events_payload_ntoh(vapi_payload_want_ip6_nd_events *payload)
{
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_want_ip6_nd_events_hton(vapi_msg_want_ip6_nd_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_nd_events'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_want_ip6_nd_events_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_ip6_nd_events_ntoh(vapi_msg_want_ip6_nd_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_ip6_nd_events'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_want_ip6_nd_events_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_ip6_nd_events_msg_size(vapi_msg_want_ip6_nd_events *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_want_ip6_nd_events* vapi_alloc_want_ip6_nd_events(struct vapi_ctx_s *ctx)
{
  vapi_msg_want_ip6_nd_events *msg = NULL;
  const size_t size = sizeof(vapi_msg_want_ip6_nd_events);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_want_ip6_nd_events*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_want_ip6_nd_events);

  return msg;
}

static inline vapi_error_e vapi_want_ip6_nd_events(struct vapi_ctx_s *ctx,
  vapi_msg_want_ip6_nd_events *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_want_ip6_nd_events_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_want_ip6_nd_events_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_want_ip6_nd_events_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_want_ip6_nd_events()
{
  static const char name[] = "want_ip6_nd_events";
  static const char name_with_crc[] = "want_ip6_nd_events_ba330719";
  static vapi_message_desc_t __vapi_metadata_want_ip6_nd_events = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_want_ip6_nd_events, payload),
    sizeof(vapi_msg_want_ip6_nd_events),
    (generic_swap_fn_t)vapi_msg_want_ip6_nd_events_hton,
    (generic_swap_fn_t)vapi_msg_want_ip6_nd_events_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_ip6_nd_events = vapi_register_msg(&__vapi_metadata_want_ip6_nd_events);
  VAPI_DBG("Assigned msg id %d to want_ip6_nd_events", vapi_msg_id_want_ip6_nd_events);
}
#endif

#ifndef defined_vapi_msg_ip_punt_police
#define defined_vapi_msg_ip_punt_police
typedef struct __attribute__ ((__packed__)) {
  u32 policer_index;
  u8 is_add;
  u8 is_ip6; 
} vapi_payload_ip_punt_police;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_punt_police payload;
} vapi_msg_ip_punt_police;

static inline void vapi_msg_ip_punt_police_payload_hton(vapi_payload_ip_punt_police *payload)
{
  payload->policer_index = htobe32(payload->policer_index);
}

static inline void vapi_msg_ip_punt_police_payload_ntoh(vapi_payload_ip_punt_police *payload)
{
  payload->policer_index = be32toh(payload->policer_index);
}

static inline void vapi_msg_ip_punt_police_hton(vapi_msg_ip_punt_police *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_police'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_punt_police_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_punt_police_ntoh(vapi_msg_ip_punt_police *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_punt_police'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_punt_police_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_punt_police_msg_size(vapi_msg_ip_punt_police *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_punt_police* vapi_alloc_ip_punt_police(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_punt_police *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_punt_police);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_punt_police*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_punt_police);

  return msg;
}

static inline vapi_error_e vapi_ip_punt_police(struct vapi_ctx_s *ctx,
  vapi_msg_ip_punt_police *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_punt_police_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_punt_police_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_punt_police_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_punt_police()
{
  static const char name[] = "ip_punt_police";
  static const char name_with_crc[] = "ip_punt_police_38691592";
  static vapi_message_desc_t __vapi_metadata_ip_punt_police = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_punt_police, payload),
    sizeof(vapi_msg_ip_punt_police),
    (generic_swap_fn_t)vapi_msg_ip_punt_police_hton,
    (generic_swap_fn_t)vapi_msg_ip_punt_police_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_punt_police = vapi_register_msg(&__vapi_metadata_ip_punt_police);
  VAPI_DBG("Assigned msg id %d to ip_punt_police", vapi_msg_id_ip_punt_police);
}
#endif

#ifndef defined_vapi_msg_set_arp_neighbor_limit_reply
#define defined_vapi_msg_set_arp_neighbor_limit_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_set_arp_neighbor_limit_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_set_arp_neighbor_limit_reply payload;
} vapi_msg_set_arp_neighbor_limit_reply;

static inline void vapi_msg_set_arp_neighbor_limit_reply_payload_hton(vapi_payload_set_arp_neighbor_limit_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_set_arp_neighbor_limit_reply_payload_ntoh(vapi_payload_set_arp_neighbor_limit_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_set_arp_neighbor_limit_reply_hton(vapi_msg_set_arp_neighbor_limit_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_arp_neighbor_limit_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_set_arp_neighbor_limit_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_arp_neighbor_limit_reply_ntoh(vapi_msg_set_arp_neighbor_limit_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_arp_neighbor_limit_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_set_arp_neighbor_limit_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_arp_neighbor_limit_reply_msg_size(vapi_msg_set_arp_neighbor_limit_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_set_arp_neighbor_limit_reply()
{
  static const char name[] = "set_arp_neighbor_limit_reply";
  static const char name_with_crc[] = "set_arp_neighbor_limit_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_set_arp_neighbor_limit_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_set_arp_neighbor_limit_reply, payload),
    sizeof(vapi_msg_set_arp_neighbor_limit_reply),
    (generic_swap_fn_t)vapi_msg_set_arp_neighbor_limit_reply_hton,
    (generic_swap_fn_t)vapi_msg_set_arp_neighbor_limit_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_arp_neighbor_limit_reply = vapi_register_msg(&__vapi_metadata_set_arp_neighbor_limit_reply);
  VAPI_DBG("Assigned msg id %d to set_arp_neighbor_limit_reply", vapi_msg_id_set_arp_neighbor_limit_reply);
}

static inline void vapi_set_vapi_msg_set_arp_neighbor_limit_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_set_arp_neighbor_limit_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_set_arp_neighbor_limit_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_set_arp_neighbor_limit
#define defined_vapi_msg_set_arp_neighbor_limit
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6;
  u32 arp_neighbor_limit; 
} vapi_payload_set_arp_neighbor_limit;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_set_arp_neighbor_limit payload;
} vapi_msg_set_arp_neighbor_limit;

static inline void vapi_msg_set_arp_neighbor_limit_payload_hton(vapi_payload_set_arp_neighbor_limit *payload)
{
  payload->arp_neighbor_limit = htobe32(payload->arp_neighbor_limit);
}

static inline void vapi_msg_set_arp_neighbor_limit_payload_ntoh(vapi_payload_set_arp_neighbor_limit *payload)
{
  payload->arp_neighbor_limit = be32toh(payload->arp_neighbor_limit);
}

static inline void vapi_msg_set_arp_neighbor_limit_hton(vapi_msg_set_arp_neighbor_limit *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_arp_neighbor_limit'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_set_arp_neighbor_limit_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_arp_neighbor_limit_ntoh(vapi_msg_set_arp_neighbor_limit *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_arp_neighbor_limit'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_set_arp_neighbor_limit_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_arp_neighbor_limit_msg_size(vapi_msg_set_arp_neighbor_limit *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_set_arp_neighbor_limit* vapi_alloc_set_arp_neighbor_limit(struct vapi_ctx_s *ctx)
{
  vapi_msg_set_arp_neighbor_limit *msg = NULL;
  const size_t size = sizeof(vapi_msg_set_arp_neighbor_limit);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_set_arp_neighbor_limit*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_set_arp_neighbor_limit);

  return msg;
}

static inline vapi_error_e vapi_set_arp_neighbor_limit(struct vapi_ctx_s *ctx,
  vapi_msg_set_arp_neighbor_limit *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_set_arp_neighbor_limit_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_set_arp_neighbor_limit_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_set_arp_neighbor_limit_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_set_arp_neighbor_limit()
{
  static const char name[] = "set_arp_neighbor_limit";
  static const char name_with_crc[] = "set_arp_neighbor_limit_97d01fd6";
  static vapi_message_desc_t __vapi_metadata_set_arp_neighbor_limit = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_set_arp_neighbor_limit, payload),
    sizeof(vapi_msg_set_arp_neighbor_limit),
    (generic_swap_fn_t)vapi_msg_set_arp_neighbor_limit_hton,
    (generic_swap_fn_t)vapi_msg_set_arp_neighbor_limit_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_arp_neighbor_limit = vapi_register_msg(&__vapi_metadata_set_arp_neighbor_limit);
  VAPI_DBG("Assigned msg id %d to set_arp_neighbor_limit", vapi_msg_id_set_arp_neighbor_limit);
}
#endif

#ifndef defined_vapi_msg_ip6nd_send_router_solicitation
#define defined_vapi_msg_ip6nd_send_router_solicitation
typedef struct __attribute__ ((__packed__)) {
  u32 irt;
  u32 mrt;
  u32 mrc;
  u32 mrd;
  u32 sw_if_index;
  u8 stop; 
} vapi_payload_ip6nd_send_router_solicitation;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip6nd_send_router_solicitation payload;
} vapi_msg_ip6nd_send_router_solicitation;

static inline void vapi_msg_ip6nd_send_router_solicitation_payload_hton(vapi_payload_ip6nd_send_router_solicitation *payload)
{
  payload->irt = htobe32(payload->irt);
  payload->mrt = htobe32(payload->mrt);
  payload->mrc = htobe32(payload->mrc);
  payload->mrd = htobe32(payload->mrd);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip6nd_send_router_solicitation_payload_ntoh(vapi_payload_ip6nd_send_router_solicitation *payload)
{
  payload->irt = be32toh(payload->irt);
  payload->mrt = be32toh(payload->mrt);
  payload->mrc = be32toh(payload->mrc);
  payload->mrd = be32toh(payload->mrd);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip6nd_send_router_solicitation_hton(vapi_msg_ip6nd_send_router_solicitation *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_send_router_solicitation'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip6nd_send_router_solicitation_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip6nd_send_router_solicitation_ntoh(vapi_msg_ip6nd_send_router_solicitation *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip6nd_send_router_solicitation'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip6nd_send_router_solicitation_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip6nd_send_router_solicitation_msg_size(vapi_msg_ip6nd_send_router_solicitation *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip6nd_send_router_solicitation* vapi_alloc_ip6nd_send_router_solicitation(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip6nd_send_router_solicitation *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip6nd_send_router_solicitation);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip6nd_send_router_solicitation*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip6nd_send_router_solicitation);

  return msg;
}

static inline vapi_error_e vapi_ip6nd_send_router_solicitation(struct vapi_ctx_s *ctx,
  vapi_msg_ip6nd_send_router_solicitation *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip6nd_send_router_solicitation_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip6nd_send_router_solicitation_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip6nd_send_router_solicitation_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip6nd_send_router_solicitation()
{
  static const char name[] = "ip6nd_send_router_solicitation";
  static const char name_with_crc[] = "ip6nd_send_router_solicitation_bd968917";
  static vapi_message_desc_t __vapi_metadata_ip6nd_send_router_solicitation = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip6nd_send_router_solicitation, payload),
    sizeof(vapi_msg_ip6nd_send_router_solicitation),
    (generic_swap_fn_t)vapi_msg_ip6nd_send_router_solicitation_hton,
    (generic_swap_fn_t)vapi_msg_ip6nd_send_router_solicitation_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip6nd_send_router_solicitation = vapi_register_msg(&__vapi_metadata_ip6nd_send_router_solicitation);
  VAPI_DBG("Assigned msg id %d to ip6nd_send_router_solicitation", vapi_msg_id_ip6nd_send_router_solicitation);
}
#endif

#ifndef defined_vapi_msg_ip_table_add_del
#define defined_vapi_msg_ip_table_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_ip_table table; 
} vapi_payload_ip_table_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_table_add_del payload;
} vapi_msg_ip_table_add_del;

static inline void vapi_msg_ip_table_add_del_payload_hton(vapi_payload_ip_table_add_del *payload)
{
  vapi_type_ip_table_hton(&payload->table);
}

static inline void vapi_msg_ip_table_add_del_payload_ntoh(vapi_payload_ip_table_add_del *payload)
{
  vapi_type_ip_table_ntoh(&payload->table);
}

static inline void vapi_msg_ip_table_add_del_hton(vapi_msg_ip_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_table_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_table_add_del_ntoh(vapi_msg_ip_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_table_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_table_add_del_msg_size(vapi_msg_ip_table_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_table_add_del* vapi_alloc_ip_table_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_table_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_table_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_table_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_table_add_del);

  return msg;
}

static inline vapi_error_e vapi_ip_table_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_table_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_table_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_table_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_table_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_table_add_del()
{
  static const char name[] = "ip_table_add_del";
  static const char name_with_crc[] = "ip_table_add_del_e5d378f2";
  static vapi_message_desc_t __vapi_metadata_ip_table_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_table_add_del, payload),
    sizeof(vapi_msg_ip_table_add_del),
    (generic_swap_fn_t)vapi_msg_ip_table_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_table_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_table_add_del = vapi_register_msg(&__vapi_metadata_ip_table_add_del);
  VAPI_DBG("Assigned msg id %d to ip_table_add_del", vapi_msg_id_ip_table_add_del);
}
#endif

#ifndef defined_vapi_msg_ip_table_dump
#define defined_vapi_msg_ip_table_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ip_table_dump;

static inline void vapi_msg_ip_table_dump_hton(vapi_msg_ip_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ip_table_dump_ntoh(vapi_msg_ip_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_table_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ip_table_dump_msg_size(vapi_msg_ip_table_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_table_dump* vapi_alloc_ip_table_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_table_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_table_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_table_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_table_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_table_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_table_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_table_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_table_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_table_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_table_dump()
{
  static const char name[] = "ip_table_dump";
  static const char name_with_crc[] = "ip_table_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ip_table_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ip_table_dump),
    (generic_swap_fn_t)vapi_msg_ip_table_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_table_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_table_dump = vapi_register_msg(&__vapi_metadata_ip_table_dump);
  VAPI_DBG("Assigned msg id %d to ip_table_dump", vapi_msg_id_ip_table_dump);
}
#endif

#ifndef defined_vapi_msg_proxy_arp_dump
#define defined_vapi_msg_proxy_arp_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_proxy_arp_dump;

static inline void vapi_msg_proxy_arp_dump_hton(vapi_msg_proxy_arp_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_proxy_arp_dump_ntoh(vapi_msg_proxy_arp_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_proxy_arp_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_proxy_arp_dump_msg_size(vapi_msg_proxy_arp_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_proxy_arp_dump* vapi_alloc_proxy_arp_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_proxy_arp_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_proxy_arp_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_proxy_arp_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_proxy_arp_dump);

  return msg;
}

static inline vapi_error_e vapi_proxy_arp_dump(struct vapi_ctx_s *ctx,
  vapi_msg_proxy_arp_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_proxy_arp_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_proxy_arp_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_proxy_arp_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_proxy_arp_dump()
{
  static const char name[] = "proxy_arp_dump";
  static const char name_with_crc[] = "proxy_arp_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_proxy_arp_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_proxy_arp_dump),
    (generic_swap_fn_t)vapi_msg_proxy_arp_dump_hton,
    (generic_swap_fn_t)vapi_msg_proxy_arp_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_proxy_arp_dump = vapi_register_msg(&__vapi_metadata_proxy_arp_dump);
  VAPI_DBG("Assigned msg id %d to proxy_arp_dump", vapi_msg_id_proxy_arp_dump);
}
#endif

#ifndef defined_vapi_msg_ip_reassembly_enable_disable_reply
#define defined_vapi_msg_ip_reassembly_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ip_reassembly_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ip_reassembly_enable_disable_reply payload;
} vapi_msg_ip_reassembly_enable_disable_reply;

static inline void vapi_msg_ip_reassembly_enable_disable_reply_payload_hton(vapi_payload_ip_reassembly_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ip_reassembly_enable_disable_reply_payload_ntoh(vapi_payload_ip_reassembly_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ip_reassembly_enable_disable_reply_hton(vapi_msg_ip_reassembly_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ip_reassembly_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_reassembly_enable_disable_reply_ntoh(vapi_msg_ip_reassembly_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ip_reassembly_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_reassembly_enable_disable_reply_msg_size(vapi_msg_ip_reassembly_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ip_reassembly_enable_disable_reply()
{
  static const char name[] = "ip_reassembly_enable_disable_reply";
  static const char name_with_crc[] = "ip_reassembly_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ip_reassembly_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ip_reassembly_enable_disable_reply, payload),
    sizeof(vapi_msg_ip_reassembly_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_ip_reassembly_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_ip_reassembly_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_reassembly_enable_disable_reply = vapi_register_msg(&__vapi_metadata_ip_reassembly_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to ip_reassembly_enable_disable_reply", vapi_msg_id_ip_reassembly_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_ip_reassembly_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ip_reassembly_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ip_reassembly_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ip_reassembly_enable_disable
#define defined_vapi_msg_ip_reassembly_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 enable_ip4;
  u8 enable_ip6; 
} vapi_payload_ip_reassembly_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_reassembly_enable_disable payload;
} vapi_msg_ip_reassembly_enable_disable;

static inline void vapi_msg_ip_reassembly_enable_disable_payload_hton(vapi_payload_ip_reassembly_enable_disable *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ip_reassembly_enable_disable_payload_ntoh(vapi_payload_ip_reassembly_enable_disable *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ip_reassembly_enable_disable_hton(vapi_msg_ip_reassembly_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_reassembly_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_reassembly_enable_disable_ntoh(vapi_msg_ip_reassembly_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_reassembly_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_reassembly_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_reassembly_enable_disable_msg_size(vapi_msg_ip_reassembly_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_reassembly_enable_disable* vapi_alloc_ip_reassembly_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_reassembly_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_reassembly_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_reassembly_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_reassembly_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_ip_reassembly_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_ip_reassembly_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_reassembly_enable_disable_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_reassembly_enable_disable_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_reassembly_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_reassembly_enable_disable()
{
  static const char name[] = "ip_reassembly_enable_disable";
  static const char name_with_crc[] = "ip_reassembly_enable_disable_bb8dc5d0";
  static vapi_message_desc_t __vapi_metadata_ip_reassembly_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_reassembly_enable_disable, payload),
    sizeof(vapi_msg_ip_reassembly_enable_disable),
    (generic_swap_fn_t)vapi_msg_ip_reassembly_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_ip_reassembly_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_reassembly_enable_disable = vapi_register_msg(&__vapi_metadata_ip_reassembly_enable_disable);
  VAPI_DBG("Assigned msg id %d to ip_reassembly_enable_disable", vapi_msg_id_ip_reassembly_enable_disable);
}
#endif

#ifndef defined_vapi_msg_ip_dump
#define defined_vapi_msg_ip_dump
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6; 
} vapi_payload_ip_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_dump payload;
} vapi_msg_ip_dump;

static inline void vapi_msg_ip_dump_payload_hton(vapi_payload_ip_dump *payload)
{

}

static inline void vapi_msg_ip_dump_payload_ntoh(vapi_payload_ip_dump *payload)
{

}

static inline void vapi_msg_ip_dump_hton(vapi_msg_ip_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_dump_ntoh(vapi_msg_ip_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_dump_msg_size(vapi_msg_ip_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_dump* vapi_alloc_ip_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_dump);

  return msg;
}

static inline vapi_error_e vapi_ip_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ip_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_dump()
{
  static const char name[] = "ip_dump";
  static const char name_with_crc[] = "ip_dump_de883da4";
  static vapi_message_desc_t __vapi_metadata_ip_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_dump, payload),
    sizeof(vapi_msg_ip_dump),
    (generic_swap_fn_t)vapi_msg_ip_dump_hton,
    (generic_swap_fn_t)vapi_msg_ip_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_dump = vapi_register_msg(&__vapi_metadata_ip_dump);
  VAPI_DBG("Assigned msg id %d to ip_dump", vapi_msg_id_ip_dump);
}
#endif

#ifndef defined_vapi_msg_ip_source_and_port_range_check_interface_add_del
#define defined_vapi_msg_ip_source_and_port_range_check_interface_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u32 sw_if_index;
  u32 tcp_in_vrf_id;
  u32 tcp_out_vrf_id;
  u32 udp_in_vrf_id;
  u32 udp_out_vrf_id; 
} vapi_payload_ip_source_and_port_range_check_interface_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ip_source_and_port_range_check_interface_add_del payload;
} vapi_msg_ip_source_and_port_range_check_interface_add_del;

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_payload_hton(vapi_payload_ip_source_and_port_range_check_interface_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->tcp_in_vrf_id = htobe32(payload->tcp_in_vrf_id);
  payload->tcp_out_vrf_id = htobe32(payload->tcp_out_vrf_id);
  payload->udp_in_vrf_id = htobe32(payload->udp_in_vrf_id);
  payload->udp_out_vrf_id = htobe32(payload->udp_out_vrf_id);
}

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_payload_ntoh(vapi_payload_ip_source_and_port_range_check_interface_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->tcp_in_vrf_id = be32toh(payload->tcp_in_vrf_id);
  payload->tcp_out_vrf_id = be32toh(payload->tcp_out_vrf_id);
  payload->udp_in_vrf_id = be32toh(payload->udp_in_vrf_id);
  payload->udp_out_vrf_id = be32toh(payload->udp_out_vrf_id);
}

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_hton(vapi_msg_ip_source_and_port_range_check_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_interface_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ip_source_and_port_range_check_interface_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ip_source_and_port_range_check_interface_add_del_ntoh(vapi_msg_ip_source_and_port_range_check_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ip_source_and_port_range_check_interface_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ip_source_and_port_range_check_interface_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ip_source_and_port_range_check_interface_add_del_msg_size(vapi_msg_ip_source_and_port_range_check_interface_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ip_source_and_port_range_check_interface_add_del* vapi_alloc_ip_source_and_port_range_check_interface_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ip_source_and_port_range_check_interface_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ip_source_and_port_range_check_interface_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ip_source_and_port_range_check_interface_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ip_source_and_port_range_check_interface_add_del);

  return msg;
}

static inline vapi_error_e vapi_ip_source_and_port_range_check_interface_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ip_source_and_port_range_check_interface_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ip_source_and_port_range_check_interface_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_ip_source_and_port_range_check_interface_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_ip_source_and_port_range_check_interface_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ip_source_and_port_range_check_interface_add_del()
{
  static const char name[] = "ip_source_and_port_range_check_interface_add_del";
  static const char name_with_crc[] = "ip_source_and_port_range_check_interface_add_del_6966bc44";
  static vapi_message_desc_t __vapi_metadata_ip_source_and_port_range_check_interface_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ip_source_and_port_range_check_interface_add_del, payload),
    sizeof(vapi_msg_ip_source_and_port_range_check_interface_add_del),
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_interface_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ip_source_and_port_range_check_interface_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ip_source_and_port_range_check_interface_add_del = vapi_register_msg(&__vapi_metadata_ip_source_and_port_range_check_interface_add_del);
  VAPI_DBG("Assigned msg id %d to ip_source_and_port_range_check_interface_add_del", vapi_msg_id_ip_source_and_port_range_check_interface_add_del);
}
#endif

#ifndef defined_vapi_msg_set_ip_flow_hash
#define defined_vapi_msg_set_ip_flow_hash
typedef struct __attribute__ ((__packed__)) {
  u32 vrf_id;
  u8 is_ipv6;
  u8 src;
  u8 dst;
  u8 sport;
  u8 dport;
  u8 proto;
  u8 reverse;
  u8 symmetric; 
} vapi_payload_set_ip_flow_hash;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_set_ip_flow_hash payload;
} vapi_msg_set_ip_flow_hash;

static inline void vapi_msg_set_ip_flow_hash_payload_hton(vapi_payload_set_ip_flow_hash *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_set_ip_flow_hash_payload_ntoh(vapi_payload_set_ip_flow_hash *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_set_ip_flow_hash_hton(vapi_msg_set_ip_flow_hash *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ip_flow_hash'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_set_ip_flow_hash_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_ip_flow_hash_ntoh(vapi_msg_set_ip_flow_hash *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ip_flow_hash'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_set_ip_flow_hash_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_ip_flow_hash_msg_size(vapi_msg_set_ip_flow_hash *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_set_ip_flow_hash* vapi_alloc_set_ip_flow_hash(struct vapi_ctx_s *ctx)
{
  vapi_msg_set_ip_flow_hash *msg = NULL;
  const size_t size = sizeof(vapi_msg_set_ip_flow_hash);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_set_ip_flow_hash*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_set_ip_flow_hash);

  return msg;
}

static inline vapi_error_e vapi_set_ip_flow_hash(struct vapi_ctx_s *ctx,
  vapi_msg_set_ip_flow_hash *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_set_ip_flow_hash_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_set_ip_flow_hash_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_set_ip_flow_hash_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_set_ip_flow_hash()
{
  static const char name[] = "set_ip_flow_hash";
  static const char name_with_crc[] = "set_ip_flow_hash_a9084bfb";
  static vapi_message_desc_t __vapi_metadata_set_ip_flow_hash = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_set_ip_flow_hash, payload),
    sizeof(vapi_msg_set_ip_flow_hash),
    (generic_swap_fn_t)vapi_msg_set_ip_flow_hash_hton,
    (generic_swap_fn_t)vapi_msg_set_ip_flow_hash_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_ip_flow_hash = vapi_register_msg(&__vapi_metadata_set_ip_flow_hash);
  VAPI_DBG("Assigned msg id %d to set_ip_flow_hash", vapi_msg_id_set_ip_flow_hash);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
