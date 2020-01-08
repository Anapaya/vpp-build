#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_nat_nat_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_nat_nat_api_json

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

extern vapi_msg_id_t vapi_msg_id_nat44_add_del_identity_mapping_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_identity_mapping_details;
extern vapi_msg_id_t vapi_msg_id_dslite_add_del_pool_addr_range;
extern vapi_msg_id_t vapi_msg_id_nat_set_log_level_reply;
extern vapi_msg_id_t vapi_msg_id_nat_ipfix_enable_disable;
extern vapi_msg_id_t vapi_msg_id_nat_control_ping_reply;
extern vapi_msg_id_t vapi_msg_id_nat_set_mss_clamping_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_dump;
extern vapi_msg_id_t vapi_msg_id_nat64_pool_addr_dump;
extern vapi_msg_id_t vapi_msg_id_nat64_interface_dump;
extern vapi_msg_id_t vapi_msg_id_nat_det_add_del_map;
extern vapi_msg_id_t vapi_msg_id_nat44_identity_mapping_dump;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_interface_addr;
extern vapi_msg_id_t vapi_msg_id_nat64_prefix_details;
extern vapi_msg_id_t vapi_msg_id_dslite_set_b4_addr_reply;
extern vapi_msg_id_t vapi_msg_id_nat66_add_del_interface_reply;
extern vapi_msg_id_t vapi_msg_id_nat_det_reverse_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_user_dump;
extern vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_add_del_local;
extern vapi_msg_id_t vapi_msg_id_nat44_static_mapping_details;
extern vapi_msg_id_t vapi_msg_id_nat_ha_resync_reply;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_prefix_reply;
extern vapi_msg_id_t vapi_msg_id_nat64_st_details;
extern vapi_msg_id_t vapi_msg_id_nat_ha_flush;
extern vapi_msg_id_t vapi_msg_id_nat_control_ping;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_output_feature_reply;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_interface;
extern vapi_msg_id_t vapi_msg_id_nat_det_close_session_in;
extern vapi_msg_id_t vapi_msg_id_nat44_user_session_dump;
extern vapi_msg_id_t vapi_msg_id_nat_ha_set_listener;
extern vapi_msg_id_t vapi_msg_id_nat_ha_flush_reply;
extern vapi_msg_id_t vapi_msg_id_nat_set_workers;
extern vapi_msg_id_t vapi_msg_id_dslite_get_b4_addr;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_output_feature_dump;
extern vapi_msg_id_t vapi_msg_id_nat_ha_get_listener_reply;
extern vapi_msg_id_t vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply;
extern vapi_msg_id_t vapi_msg_id_nat_get_timeouts_reply;
extern vapi_msg_id_t vapi_msg_id_nat_get_reass;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_output_feature_details;
extern vapi_msg_id_t vapi_msg_id_nat_get_timeouts;
extern vapi_msg_id_t vapi_msg_id_nat_ha_get_listener;
extern vapi_msg_id_t vapi_msg_id_nat_det_session_details;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_feature_reply;
extern vapi_msg_id_t vapi_msg_id_nat_set_timeouts;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_interface_reply;
extern vapi_msg_id_t vapi_msg_id_nat_det_forward;
extern vapi_msg_id_t vapi_msg_id_nat_worker_dump;
extern vapi_msg_id_t vapi_msg_id_nat44_forwarding_is_enabled_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_static_mapping_dump;
extern vapi_msg_id_t vapi_msg_id_nat_det_add_del_map_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_addr_dump;
extern vapi_msg_id_t vapi_msg_id_nat_show_config_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_lb_static_mapping_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_address_range_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_del_session_reply;
extern vapi_msg_id_t vapi_msg_id_nat_get_reass_reply;
extern vapi_msg_id_t vapi_msg_id_nat_reass_dump;
extern vapi_msg_id_t vapi_msg_id_dslite_address_details;
extern vapi_msg_id_t vapi_msg_id_nat44_user_details;
extern vapi_msg_id_t vapi_msg_id_nat_set_mss_clamping;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_static_bib_reply;
extern vapi_msg_id_t vapi_msg_id_nat_reass_details;
extern vapi_msg_id_t vapi_msg_id_nat44_address_details;
extern vapi_msg_id_t vapi_msg_id_dslite_get_b4_addr_reply;
extern vapi_msg_id_t vapi_msg_id_dslite_get_aftr_addr_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_forwarding_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_lb_static_mapping;
extern vapi_msg_id_t vapi_msg_id_nat66_add_del_static_mapping_reply;
extern vapi_msg_id_t vapi_msg_id_nat66_interface_details;
extern vapi_msg_id_t vapi_msg_id_nat_set_timeouts_reply;
extern vapi_msg_id_t vapi_msg_id_nat_det_session_dump;
extern vapi_msg_id_t vapi_msg_id_dslite_address_dump;
extern vapi_msg_id_t vapi_msg_id_nat_ha_resync;
extern vapi_msg_id_t vapi_msg_id_nat_ha_get_failover_reply;
extern vapi_msg_id_t vapi_msg_id_nat_ha_set_listener_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_feature;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_pool_addr_range_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_user_session_details;
extern vapi_msg_id_t vapi_msg_id_nat_set_reass;
extern vapi_msg_id_t vapi_msg_id_nat_ha_set_failover;
extern vapi_msg_id_t vapi_msg_id_nat_get_mss_clamping;
extern vapi_msg_id_t vapi_msg_id_nat_set_addr_and_port_alloc_alg;
extern vapi_msg_id_t vapi_msg_id_nat_det_close_session_out_reply;
extern vapi_msg_id_t vapi_msg_id_nat_show_config;
extern vapi_msg_id_t vapi_msg_id_nat_set_log_level;
extern vapi_msg_id_t vapi_msg_id_nat44_address_dump;
extern vapi_msg_id_t vapi_msg_id_nat44_forwarding_is_enabled;
extern vapi_msg_id_t vapi_msg_id_nat_ipfix_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_dump;
extern vapi_msg_id_t vapi_msg_id_nat64_interface_details;
extern vapi_msg_id_t vapi_msg_id_nat64_bib_dump;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_pool_addr_range;
extern vapi_msg_id_t vapi_msg_id_nat64_bib_details;
extern vapi_msg_id_t vapi_msg_id_dslite_add_del_pool_addr_range_reply;
extern vapi_msg_id_t vapi_msg_id_nat_ha_set_failover_reply;
extern vapi_msg_id_t vapi_msg_id_nat64_prefix_dump;
extern vapi_msg_id_t vapi_msg_id_nat_det_map_dump;
extern vapi_msg_id_t vapi_msg_id_nat_det_close_session_in_reply;
extern vapi_msg_id_t vapi_msg_id_nat_ha_resync_completed_event;
extern vapi_msg_id_t vapi_msg_id_nat44_del_session;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_prefix;
extern vapi_msg_id_t vapi_msg_id_nat_get_addr_and_port_alloc_alg;
extern vapi_msg_id_t vapi_msg_id_nat_ha_get_failover;
extern vapi_msg_id_t vapi_msg_id_nat66_static_mapping_dump;
extern vapi_msg_id_t vapi_msg_id_dslite_set_b4_addr;
extern vapi_msg_id_t vapi_msg_id_nat_det_close_session_out;
extern vapi_msg_id_t vapi_msg_id_nat66_add_del_interface;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_static_bib;
extern vapi_msg_id_t vapi_msg_id_nat64_pool_addr_details;
extern vapi_msg_id_t vapi_msg_id_nat_worker_details;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_output_feature;
extern vapi_msg_id_t vapi_msg_id_nat66_static_mapping_details;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_static_mapping_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_interface_addr_reply;
extern vapi_msg_id_t vapi_msg_id_nat66_add_del_static_mapping;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_interface_addr;
extern vapi_msg_id_t vapi_msg_id_nat66_interface_dump;
extern vapi_msg_id_t vapi_msg_id_nat_det_map_details;
extern vapi_msg_id_t vapi_msg_id_nat64_st_dump;
extern vapi_msg_id_t vapi_msg_id_nat_set_reass_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_details;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_identity_mapping;
extern vapi_msg_id_t vapi_msg_id_dslite_set_aftr_addr_reply;
extern vapi_msg_id_t vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply;
extern vapi_msg_id_t vapi_msg_id_dslite_set_aftr_addr;
extern vapi_msg_id_t vapi_msg_id_nat64_add_del_interface_addr_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_details;
extern vapi_msg_id_t vapi_msg_id_nat44_interface_addr_details;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_address_range;
extern vapi_msg_id_t vapi_msg_id_nat_get_mss_clamping_reply;
extern vapi_msg_id_t vapi_msg_id_nat_det_reverse;
extern vapi_msg_id_t vapi_msg_id_nat_set_workers_reply;
extern vapi_msg_id_t vapi_msg_id_nat_det_forward_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply;
extern vapi_msg_id_t vapi_msg_id_nat44_add_del_static_mapping;
extern vapi_msg_id_t vapi_msg_id_dslite_get_aftr_addr;
extern vapi_msg_id_t vapi_msg_id_nat44_forwarding_enable_disable;

#define DEFINE_VAPI_MSG_IDS_NAT_API_JSON\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_identity_mapping_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_identity_mapping_details;\
  vapi_msg_id_t vapi_msg_id_dslite_add_del_pool_addr_range;\
  vapi_msg_id_t vapi_msg_id_nat_set_log_level_reply;\
  vapi_msg_id_t vapi_msg_id_nat_ipfix_enable_disable;\
  vapi_msg_id_t vapi_msg_id_nat_control_ping_reply;\
  vapi_msg_id_t vapi_msg_id_nat_set_mss_clamping_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_dump;\
  vapi_msg_id_t vapi_msg_id_nat64_pool_addr_dump;\
  vapi_msg_id_t vapi_msg_id_nat64_interface_dump;\
  vapi_msg_id_t vapi_msg_id_nat_det_add_del_map;\
  vapi_msg_id_t vapi_msg_id_nat44_identity_mapping_dump;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_interface_addr;\
  vapi_msg_id_t vapi_msg_id_nat64_prefix_details;\
  vapi_msg_id_t vapi_msg_id_dslite_set_b4_addr_reply;\
  vapi_msg_id_t vapi_msg_id_nat66_add_del_interface_reply;\
  vapi_msg_id_t vapi_msg_id_nat_det_reverse_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_user_dump;\
  vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_add_del_local;\
  vapi_msg_id_t vapi_msg_id_nat44_static_mapping_details;\
  vapi_msg_id_t vapi_msg_id_nat_ha_resync_reply;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_prefix_reply;\
  vapi_msg_id_t vapi_msg_id_nat64_st_details;\
  vapi_msg_id_t vapi_msg_id_nat_ha_flush;\
  vapi_msg_id_t vapi_msg_id_nat_control_ping;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_output_feature_reply;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_interface;\
  vapi_msg_id_t vapi_msg_id_nat_det_close_session_in;\
  vapi_msg_id_t vapi_msg_id_nat44_user_session_dump;\
  vapi_msg_id_t vapi_msg_id_nat_ha_set_listener;\
  vapi_msg_id_t vapi_msg_id_nat_ha_flush_reply;\
  vapi_msg_id_t vapi_msg_id_nat_set_workers;\
  vapi_msg_id_t vapi_msg_id_dslite_get_b4_addr;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_output_feature_dump;\
  vapi_msg_id_t vapi_msg_id_nat_ha_get_listener_reply;\
  vapi_msg_id_t vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply;\
  vapi_msg_id_t vapi_msg_id_nat_get_timeouts_reply;\
  vapi_msg_id_t vapi_msg_id_nat_get_reass;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_output_feature_details;\
  vapi_msg_id_t vapi_msg_id_nat_get_timeouts;\
  vapi_msg_id_t vapi_msg_id_nat_ha_get_listener;\
  vapi_msg_id_t vapi_msg_id_nat_det_session_details;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_feature_reply;\
  vapi_msg_id_t vapi_msg_id_nat_set_timeouts;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_interface_reply;\
  vapi_msg_id_t vapi_msg_id_nat_det_forward;\
  vapi_msg_id_t vapi_msg_id_nat_worker_dump;\
  vapi_msg_id_t vapi_msg_id_nat44_forwarding_is_enabled_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_static_mapping_dump;\
  vapi_msg_id_t vapi_msg_id_nat_det_add_del_map_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_addr_dump;\
  vapi_msg_id_t vapi_msg_id_nat_show_config_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_lb_static_mapping_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_address_range_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_del_session_reply;\
  vapi_msg_id_t vapi_msg_id_nat_get_reass_reply;\
  vapi_msg_id_t vapi_msg_id_nat_reass_dump;\
  vapi_msg_id_t vapi_msg_id_dslite_address_details;\
  vapi_msg_id_t vapi_msg_id_nat44_user_details;\
  vapi_msg_id_t vapi_msg_id_nat_set_mss_clamping;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_static_bib_reply;\
  vapi_msg_id_t vapi_msg_id_nat_reass_details;\
  vapi_msg_id_t vapi_msg_id_nat44_address_details;\
  vapi_msg_id_t vapi_msg_id_dslite_get_b4_addr_reply;\
  vapi_msg_id_t vapi_msg_id_dslite_get_aftr_addr_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_forwarding_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_lb_static_mapping;\
  vapi_msg_id_t vapi_msg_id_nat66_add_del_static_mapping_reply;\
  vapi_msg_id_t vapi_msg_id_nat66_interface_details;\
  vapi_msg_id_t vapi_msg_id_nat_set_timeouts_reply;\
  vapi_msg_id_t vapi_msg_id_nat_det_session_dump;\
  vapi_msg_id_t vapi_msg_id_dslite_address_dump;\
  vapi_msg_id_t vapi_msg_id_nat_ha_resync;\
  vapi_msg_id_t vapi_msg_id_nat_ha_get_failover_reply;\
  vapi_msg_id_t vapi_msg_id_nat_ha_set_listener_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_feature;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_pool_addr_range_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_user_session_details;\
  vapi_msg_id_t vapi_msg_id_nat_set_reass;\
  vapi_msg_id_t vapi_msg_id_nat_ha_set_failover;\
  vapi_msg_id_t vapi_msg_id_nat_get_mss_clamping;\
  vapi_msg_id_t vapi_msg_id_nat_set_addr_and_port_alloc_alg;\
  vapi_msg_id_t vapi_msg_id_nat_det_close_session_out_reply;\
  vapi_msg_id_t vapi_msg_id_nat_show_config;\
  vapi_msg_id_t vapi_msg_id_nat_set_log_level;\
  vapi_msg_id_t vapi_msg_id_nat44_address_dump;\
  vapi_msg_id_t vapi_msg_id_nat44_forwarding_is_enabled;\
  vapi_msg_id_t vapi_msg_id_nat_ipfix_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_dump;\
  vapi_msg_id_t vapi_msg_id_nat64_interface_details;\
  vapi_msg_id_t vapi_msg_id_nat64_bib_dump;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_pool_addr_range;\
  vapi_msg_id_t vapi_msg_id_nat64_bib_details;\
  vapi_msg_id_t vapi_msg_id_dslite_add_del_pool_addr_range_reply;\
  vapi_msg_id_t vapi_msg_id_nat_ha_set_failover_reply;\
  vapi_msg_id_t vapi_msg_id_nat64_prefix_dump;\
  vapi_msg_id_t vapi_msg_id_nat_det_map_dump;\
  vapi_msg_id_t vapi_msg_id_nat_det_close_session_in_reply;\
  vapi_msg_id_t vapi_msg_id_nat_ha_resync_completed_event;\
  vapi_msg_id_t vapi_msg_id_nat44_del_session;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_prefix;\
  vapi_msg_id_t vapi_msg_id_nat_get_addr_and_port_alloc_alg;\
  vapi_msg_id_t vapi_msg_id_nat_ha_get_failover;\
  vapi_msg_id_t vapi_msg_id_nat66_static_mapping_dump;\
  vapi_msg_id_t vapi_msg_id_dslite_set_b4_addr;\
  vapi_msg_id_t vapi_msg_id_nat_det_close_session_out;\
  vapi_msg_id_t vapi_msg_id_nat66_add_del_interface;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_static_bib;\
  vapi_msg_id_t vapi_msg_id_nat64_pool_addr_details;\
  vapi_msg_id_t vapi_msg_id_nat_worker_details;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_add_del_output_feature;\
  vapi_msg_id_t vapi_msg_id_nat66_static_mapping_details;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_static_mapping_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_interface_addr_reply;\
  vapi_msg_id_t vapi_msg_id_nat66_add_del_static_mapping;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_interface_addr;\
  vapi_msg_id_t vapi_msg_id_nat66_interface_dump;\
  vapi_msg_id_t vapi_msg_id_nat_det_map_details;\
  vapi_msg_id_t vapi_msg_id_nat64_st_dump;\
  vapi_msg_id_t vapi_msg_id_nat_set_reass_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_details;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_identity_mapping;\
  vapi_msg_id_t vapi_msg_id_dslite_set_aftr_addr_reply;\
  vapi_msg_id_t vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply;\
  vapi_msg_id_t vapi_msg_id_dslite_set_aftr_addr;\
  vapi_msg_id_t vapi_msg_id_nat64_add_del_interface_addr_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_details;\
  vapi_msg_id_t vapi_msg_id_nat44_interface_addr_details;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_address_range;\
  vapi_msg_id_t vapi_msg_id_nat_get_mss_clamping_reply;\
  vapi_msg_id_t vapi_msg_id_nat_det_reverse;\
  vapi_msg_id_t vapi_msg_id_nat_set_workers_reply;\
  vapi_msg_id_t vapi_msg_id_nat_det_forward_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply;\
  vapi_msg_id_t vapi_msg_id_nat44_add_del_static_mapping;\
  vapi_msg_id_t vapi_msg_id_dslite_get_aftr_addr;\
  vapi_msg_id_t vapi_msg_id_nat44_forwarding_enable_disable;


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

#ifndef defined_vapi_enum_nat_config_flags
#define defined_vapi_enum_nat_config_flags
typedef enum {
  NAT_IS_NONE = 0,
  NAT_IS_TWICE_NAT = 1,
  NAT_IS_SELF_TWICE_NAT = 2,
  NAT_IS_OUT2IN_ONLY = 4,
  NAT_IS_ADDR_ONLY = 8,
  NAT_IS_OUTSIDE = 16,
  NAT_IS_INSIDE = 32,
  NAT_IS_STATIC = 64,
  NAT_IS_EXT_HOST_VALID = 128,
} vapi_enum_nat_config_flags;

#endif

#ifndef defined_vapi_enum_nat_log_level
#define defined_vapi_enum_nat_log_level
typedef enum {
  NAT_LOG_NONE = 0,
  NAT_LOG_ERROR = 1,
  NAT_LOG_WARNING = 2,
  NAT_LOG_NOTICE = 3,
  NAT_LOG_INFO = 4,
  NAT_LOG_DEBUG = 5,
} vapi_enum_nat_log_level;

#endif

#ifndef defined_vapi_type_ip6_address
#define defined_vapi_type_ip6_address
typedef u8 vapi_type_ip6_address[16];

#endif

#ifndef defined_vapi_type_ip4_address
#define defined_vapi_type_ip4_address
typedef u8 vapi_type_ip4_address[4];

#endif

#ifndef defined_vapi_type_interface_index
#define defined_vapi_type_interface_index
typedef u32 vapi_type_interface_index;

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

#ifndef defined_vapi_type_nat44_lb_addr_port
#define defined_vapi_type_nat44_lb_addr_port
typedef struct __attribute__((__packed__)) {
  vapi_type_ip4_address addr;
  u16 port;
  u8 probability;
  u32 vrf_id;
} vapi_type_nat44_lb_addr_port;

static inline void vapi_type_nat44_lb_addr_port_hton(vapi_type_nat44_lb_addr_port *msg)
{
  msg->port = htobe16(msg->port);
  msg->vrf_id = htobe32(msg->vrf_id);
}

static inline void vapi_type_nat44_lb_addr_port_ntoh(vapi_type_nat44_lb_addr_port *msg)
{
  msg->port = be16toh(msg->port);
  msg->vrf_id = be32toh(msg->vrf_id);
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

#ifndef defined_vapi_msg_nat44_add_del_identity_mapping_reply
#define defined_vapi_msg_nat44_add_del_identity_mapping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_add_del_identity_mapping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_add_del_identity_mapping_reply payload;
} vapi_msg_nat44_add_del_identity_mapping_reply;

static inline void vapi_msg_nat44_add_del_identity_mapping_reply_payload_hton(vapi_payload_nat44_add_del_identity_mapping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_add_del_identity_mapping_reply_payload_ntoh(vapi_payload_nat44_add_del_identity_mapping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_add_del_identity_mapping_reply_hton(vapi_msg_nat44_add_del_identity_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_identity_mapping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_add_del_identity_mapping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_identity_mapping_reply_ntoh(vapi_msg_nat44_add_del_identity_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_identity_mapping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_identity_mapping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_identity_mapping_reply_msg_size(vapi_msg_nat44_add_del_identity_mapping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_identity_mapping_reply()
{
  static const char name[] = "nat44_add_del_identity_mapping_reply";
  static const char name_with_crc[] = "nat44_add_del_identity_mapping_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_identity_mapping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_add_del_identity_mapping_reply, payload),
    sizeof(vapi_msg_nat44_add_del_identity_mapping_reply),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_identity_mapping_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_identity_mapping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_identity_mapping_reply = vapi_register_msg(&__vapi_metadata_nat44_add_del_identity_mapping_reply);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_identity_mapping_reply", vapi_msg_id_nat44_add_del_identity_mapping_reply);
}

static inline void vapi_set_vapi_msg_nat44_add_del_identity_mapping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_add_del_identity_mapping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_add_del_identity_mapping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_identity_mapping_details
#define defined_vapi_msg_nat44_identity_mapping_details
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_nat_config_flags flags;
  vapi_type_ip4_address ip_address;
  u8 protocol;
  u16 port;
  vapi_type_interface_index sw_if_index;
  u32 vrf_id;
  vl_api_string_t tag; 
} vapi_payload_nat44_identity_mapping_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_identity_mapping_details payload;
} vapi_msg_nat44_identity_mapping_details;

static inline void vapi_msg_nat44_identity_mapping_details_payload_hton(vapi_payload_nat44_identity_mapping_details *payload)
{
  payload->port = htobe16(payload->port);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat44_identity_mapping_details_payload_ntoh(vapi_payload_nat44_identity_mapping_details *payload)
{
  payload->port = be16toh(payload->port);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat44_identity_mapping_details_hton(vapi_msg_nat44_identity_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_identity_mapping_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_identity_mapping_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_identity_mapping_details_ntoh(vapi_msg_nat44_identity_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_identity_mapping_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_identity_mapping_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_identity_mapping_details_msg_size(vapi_msg_nat44_identity_mapping_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_identity_mapping_details()
{
  static const char name[] = "nat44_identity_mapping_details";
  static const char name_with_crc[] = "nat44_identity_mapping_details_ede3c486";
  static vapi_message_desc_t __vapi_metadata_nat44_identity_mapping_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_identity_mapping_details, payload),
    sizeof(vapi_msg_nat44_identity_mapping_details),
    (generic_swap_fn_t)vapi_msg_nat44_identity_mapping_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_identity_mapping_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_identity_mapping_details = vapi_register_msg(&__vapi_metadata_nat44_identity_mapping_details);
  VAPI_DBG("Assigned msg id %d to nat44_identity_mapping_details", vapi_msg_id_nat44_identity_mapping_details);
}

static inline void vapi_set_vapi_msg_nat44_identity_mapping_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_identity_mapping_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_identity_mapping_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_dslite_add_del_pool_addr_range_reply
#define defined_vapi_msg_dslite_add_del_pool_addr_range_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_dslite_add_del_pool_addr_range_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_dslite_add_del_pool_addr_range_reply payload;
} vapi_msg_dslite_add_del_pool_addr_range_reply;

static inline void vapi_msg_dslite_add_del_pool_addr_range_reply_payload_hton(vapi_payload_dslite_add_del_pool_addr_range_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_dslite_add_del_pool_addr_range_reply_payload_ntoh(vapi_payload_dslite_add_del_pool_addr_range_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_dslite_add_del_pool_addr_range_reply_hton(vapi_msg_dslite_add_del_pool_addr_range_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_add_del_pool_addr_range_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_dslite_add_del_pool_addr_range_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_add_del_pool_addr_range_reply_ntoh(vapi_msg_dslite_add_del_pool_addr_range_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_add_del_pool_addr_range_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_dslite_add_del_pool_addr_range_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_add_del_pool_addr_range_reply_msg_size(vapi_msg_dslite_add_del_pool_addr_range_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_dslite_add_del_pool_addr_range_reply()
{
  static const char name[] = "dslite_add_del_pool_addr_range_reply";
  static const char name_with_crc[] = "dslite_add_del_pool_addr_range_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_dslite_add_del_pool_addr_range_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_dslite_add_del_pool_addr_range_reply, payload),
    sizeof(vapi_msg_dslite_add_del_pool_addr_range_reply),
    (generic_swap_fn_t)vapi_msg_dslite_add_del_pool_addr_range_reply_hton,
    (generic_swap_fn_t)vapi_msg_dslite_add_del_pool_addr_range_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_add_del_pool_addr_range_reply = vapi_register_msg(&__vapi_metadata_dslite_add_del_pool_addr_range_reply);
  VAPI_DBG("Assigned msg id %d to dslite_add_del_pool_addr_range_reply", vapi_msg_id_dslite_add_del_pool_addr_range_reply);
}

static inline void vapi_set_vapi_msg_dslite_add_del_pool_addr_range_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_dslite_add_del_pool_addr_range_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_dslite_add_del_pool_addr_range_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_dslite_add_del_pool_addr_range
#define defined_vapi_msg_dslite_add_del_pool_addr_range
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address start_addr;
  vapi_type_ip4_address end_addr;
  bool is_add; 
} vapi_payload_dslite_add_del_pool_addr_range;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_dslite_add_del_pool_addr_range payload;
} vapi_msg_dslite_add_del_pool_addr_range;

static inline void vapi_msg_dslite_add_del_pool_addr_range_payload_hton(vapi_payload_dslite_add_del_pool_addr_range *payload)
{

}

static inline void vapi_msg_dslite_add_del_pool_addr_range_payload_ntoh(vapi_payload_dslite_add_del_pool_addr_range *payload)
{

}

static inline void vapi_msg_dslite_add_del_pool_addr_range_hton(vapi_msg_dslite_add_del_pool_addr_range *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_add_del_pool_addr_range'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_dslite_add_del_pool_addr_range_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_add_del_pool_addr_range_ntoh(vapi_msg_dslite_add_del_pool_addr_range *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_add_del_pool_addr_range'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_dslite_add_del_pool_addr_range_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_add_del_pool_addr_range_msg_size(vapi_msg_dslite_add_del_pool_addr_range *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_dslite_add_del_pool_addr_range* vapi_alloc_dslite_add_del_pool_addr_range(struct vapi_ctx_s *ctx)
{
  vapi_msg_dslite_add_del_pool_addr_range *msg = NULL;
  const size_t size = sizeof(vapi_msg_dslite_add_del_pool_addr_range);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_dslite_add_del_pool_addr_range*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_dslite_add_del_pool_addr_range);

  return msg;
}

static inline vapi_error_e vapi_dslite_add_del_pool_addr_range(struct vapi_ctx_s *ctx,
  vapi_msg_dslite_add_del_pool_addr_range *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_dslite_add_del_pool_addr_range_reply *reply),
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
  vapi_msg_dslite_add_del_pool_addr_range_hton(msg);
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
    vapi_msg_dslite_add_del_pool_addr_range_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_dslite_add_del_pool_addr_range()
{
  static const char name[] = "dslite_add_del_pool_addr_range";
  static const char name_with_crc[] = "dslite_add_del_pool_addr_range_b3e85e4d";
  static vapi_message_desc_t __vapi_metadata_dslite_add_del_pool_addr_range = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_dslite_add_del_pool_addr_range, payload),
    sizeof(vapi_msg_dslite_add_del_pool_addr_range),
    (generic_swap_fn_t)vapi_msg_dslite_add_del_pool_addr_range_hton,
    (generic_swap_fn_t)vapi_msg_dslite_add_del_pool_addr_range_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_add_del_pool_addr_range = vapi_register_msg(&__vapi_metadata_dslite_add_del_pool_addr_range);
  VAPI_DBG("Assigned msg id %d to dslite_add_del_pool_addr_range", vapi_msg_id_dslite_add_del_pool_addr_range);
}
#endif

#ifndef defined_vapi_msg_nat_set_log_level_reply
#define defined_vapi_msg_nat_set_log_level_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_set_log_level_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_set_log_level_reply payload;
} vapi_msg_nat_set_log_level_reply;

static inline void vapi_msg_nat_set_log_level_reply_payload_hton(vapi_payload_nat_set_log_level_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_set_log_level_reply_payload_ntoh(vapi_payload_nat_set_log_level_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_set_log_level_reply_hton(vapi_msg_nat_set_log_level_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_log_level_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_set_log_level_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_log_level_reply_ntoh(vapi_msg_nat_set_log_level_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_log_level_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_set_log_level_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_log_level_reply_msg_size(vapi_msg_nat_set_log_level_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_set_log_level_reply()
{
  static const char name[] = "nat_set_log_level_reply";
  static const char name_with_crc[] = "nat_set_log_level_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_set_log_level_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_set_log_level_reply, payload),
    sizeof(vapi_msg_nat_set_log_level_reply),
    (generic_swap_fn_t)vapi_msg_nat_set_log_level_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_log_level_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_log_level_reply = vapi_register_msg(&__vapi_metadata_nat_set_log_level_reply);
  VAPI_DBG("Assigned msg id %d to nat_set_log_level_reply", vapi_msg_id_nat_set_log_level_reply);
}

static inline void vapi_set_vapi_msg_nat_set_log_level_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_set_log_level_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_set_log_level_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_ipfix_enable_disable_reply
#define defined_vapi_msg_nat_ipfix_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_ipfix_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_ipfix_enable_disable_reply payload;
} vapi_msg_nat_ipfix_enable_disable_reply;

static inline void vapi_msg_nat_ipfix_enable_disable_reply_payload_hton(vapi_payload_nat_ipfix_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_ipfix_enable_disable_reply_payload_ntoh(vapi_payload_nat_ipfix_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_ipfix_enable_disable_reply_hton(vapi_msg_nat_ipfix_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ipfix_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_ipfix_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ipfix_enable_disable_reply_ntoh(vapi_msg_nat_ipfix_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ipfix_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_ipfix_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ipfix_enable_disable_reply_msg_size(vapi_msg_nat_ipfix_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ipfix_enable_disable_reply()
{
  static const char name[] = "nat_ipfix_enable_disable_reply";
  static const char name_with_crc[] = "nat_ipfix_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_ipfix_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_ipfix_enable_disable_reply, payload),
    sizeof(vapi_msg_nat_ipfix_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_nat_ipfix_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_ipfix_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ipfix_enable_disable_reply = vapi_register_msg(&__vapi_metadata_nat_ipfix_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to nat_ipfix_enable_disable_reply", vapi_msg_id_nat_ipfix_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_nat_ipfix_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ipfix_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ipfix_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_ipfix_enable_disable
#define defined_vapi_msg_nat_ipfix_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u32 domain_id;
  u16 src_port;
  bool enable; 
} vapi_payload_nat_ipfix_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_ipfix_enable_disable payload;
} vapi_msg_nat_ipfix_enable_disable;

static inline void vapi_msg_nat_ipfix_enable_disable_payload_hton(vapi_payload_nat_ipfix_enable_disable *payload)
{
  payload->domain_id = htobe32(payload->domain_id);
  payload->src_port = htobe16(payload->src_port);
}

static inline void vapi_msg_nat_ipfix_enable_disable_payload_ntoh(vapi_payload_nat_ipfix_enable_disable *payload)
{
  payload->domain_id = be32toh(payload->domain_id);
  payload->src_port = be16toh(payload->src_port);
}

static inline void vapi_msg_nat_ipfix_enable_disable_hton(vapi_msg_nat_ipfix_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ipfix_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_ipfix_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ipfix_enable_disable_ntoh(vapi_msg_nat_ipfix_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ipfix_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_ipfix_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ipfix_enable_disable_msg_size(vapi_msg_nat_ipfix_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_ipfix_enable_disable* vapi_alloc_nat_ipfix_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_ipfix_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_ipfix_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_ipfix_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_ipfix_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_nat_ipfix_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_nat_ipfix_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_ipfix_enable_disable_reply *reply),
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
  vapi_msg_nat_ipfix_enable_disable_hton(msg);
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
    vapi_msg_nat_ipfix_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_ipfix_enable_disable()
{
  static const char name[] = "nat_ipfix_enable_disable";
  static const char name_with_crc[] = "nat_ipfix_enable_disable_9af4a2d2";
  static vapi_message_desc_t __vapi_metadata_nat_ipfix_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_ipfix_enable_disable, payload),
    sizeof(vapi_msg_nat_ipfix_enable_disable),
    (generic_swap_fn_t)vapi_msg_nat_ipfix_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_nat_ipfix_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ipfix_enable_disable = vapi_register_msg(&__vapi_metadata_nat_ipfix_enable_disable);
  VAPI_DBG("Assigned msg id %d to nat_ipfix_enable_disable", vapi_msg_id_nat_ipfix_enable_disable);
}
#endif

#ifndef defined_vapi_msg_nat_control_ping_reply
#define defined_vapi_msg_nat_control_ping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 client_index;
  u32 vpe_pid; 
} vapi_payload_nat_control_ping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_control_ping_reply payload;
} vapi_msg_nat_control_ping_reply;

static inline void vapi_msg_nat_control_ping_reply_payload_hton(vapi_payload_nat_control_ping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->client_index = htobe32(payload->client_index);
  payload->vpe_pid = htobe32(payload->vpe_pid);
}

static inline void vapi_msg_nat_control_ping_reply_payload_ntoh(vapi_payload_nat_control_ping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->client_index = be32toh(payload->client_index);
  payload->vpe_pid = be32toh(payload->vpe_pid);
}

static inline void vapi_msg_nat_control_ping_reply_hton(vapi_msg_nat_control_ping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_control_ping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_control_ping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_control_ping_reply_ntoh(vapi_msg_nat_control_ping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_control_ping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_control_ping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_control_ping_reply_msg_size(vapi_msg_nat_control_ping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_control_ping_reply()
{
  static const char name[] = "nat_control_ping_reply";
  static const char name_with_crc[] = "nat_control_ping_reply_f6b0b8ca";
  static vapi_message_desc_t __vapi_metadata_nat_control_ping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_control_ping_reply, payload),
    sizeof(vapi_msg_nat_control_ping_reply),
    (generic_swap_fn_t)vapi_msg_nat_control_ping_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_control_ping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_control_ping_reply = vapi_register_msg(&__vapi_metadata_nat_control_ping_reply);
  VAPI_DBG("Assigned msg id %d to nat_control_ping_reply", vapi_msg_id_nat_control_ping_reply);
}

static inline void vapi_set_vapi_msg_nat_control_ping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_control_ping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_control_ping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_mss_clamping_reply
#define defined_vapi_msg_nat_set_mss_clamping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_set_mss_clamping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_set_mss_clamping_reply payload;
} vapi_msg_nat_set_mss_clamping_reply;

static inline void vapi_msg_nat_set_mss_clamping_reply_payload_hton(vapi_payload_nat_set_mss_clamping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_set_mss_clamping_reply_payload_ntoh(vapi_payload_nat_set_mss_clamping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_set_mss_clamping_reply_hton(vapi_msg_nat_set_mss_clamping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_mss_clamping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_set_mss_clamping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_mss_clamping_reply_ntoh(vapi_msg_nat_set_mss_clamping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_mss_clamping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_set_mss_clamping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_mss_clamping_reply_msg_size(vapi_msg_nat_set_mss_clamping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_set_mss_clamping_reply()
{
  static const char name[] = "nat_set_mss_clamping_reply";
  static const char name_with_crc[] = "nat_set_mss_clamping_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_set_mss_clamping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_set_mss_clamping_reply, payload),
    sizeof(vapi_msg_nat_set_mss_clamping_reply),
    (generic_swap_fn_t)vapi_msg_nat_set_mss_clamping_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_mss_clamping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_mss_clamping_reply = vapi_register_msg(&__vapi_metadata_nat_set_mss_clamping_reply);
  VAPI_DBG("Assigned msg id %d to nat_set_mss_clamping_reply", vapi_msg_id_nat_set_mss_clamping_reply);
}

static inline void vapi_set_vapi_msg_nat_set_mss_clamping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_set_mss_clamping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_set_mss_clamping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_lb_static_mapping_details
#define defined_vapi_msg_nat44_lb_static_mapping_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address external_addr;
  u16 external_port;
  u8 protocol;
  vapi_enum_nat_config_flags flags;
  u32 affinity;
  u32 local_num;
  vapi_type_nat44_lb_addr_port locals[0];
  vl_api_string_t tag; 
} vapi_payload_nat44_lb_static_mapping_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_lb_static_mapping_details payload;
} vapi_msg_nat44_lb_static_mapping_details;

static inline void vapi_msg_nat44_lb_static_mapping_details_payload_hton(vapi_payload_nat44_lb_static_mapping_details *payload)
{
  payload->external_port = htobe16(payload->external_port);
  payload->affinity = htobe32(payload->affinity);
  payload->local_num = htobe32(payload->local_num);
  do { unsigned i; for (i = 0; i < be32toh(payload->local_num); ++i) { vapi_type_nat44_lb_addr_port_hton(&payload->locals[i]); } } while(0);
}

static inline void vapi_msg_nat44_lb_static_mapping_details_payload_ntoh(vapi_payload_nat44_lb_static_mapping_details *payload)
{
  payload->external_port = be16toh(payload->external_port);
  payload->affinity = be32toh(payload->affinity);
  payload->local_num = be32toh(payload->local_num);
  do { unsigned i; for (i = 0; i < payload->local_num; ++i) { vapi_type_nat44_lb_addr_port_ntoh(&payload->locals[i]); } } while(0);
}

static inline void vapi_msg_nat44_lb_static_mapping_details_hton(vapi_msg_nat44_lb_static_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_lb_static_mapping_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_lb_static_mapping_details_ntoh(vapi_msg_nat44_lb_static_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_lb_static_mapping_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_lb_static_mapping_details_msg_size(vapi_msg_nat44_lb_static_mapping_details *msg)
{
  return sizeof(*msg)+ msg->payload.local_num * sizeof(msg->payload.locals[0]);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_lb_static_mapping_details()
{
  static const char name[] = "nat44_lb_static_mapping_details";
  static const char name_with_crc[] = "nat44_lb_static_mapping_details_561d7343";
  static vapi_message_desc_t __vapi_metadata_nat44_lb_static_mapping_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_lb_static_mapping_details, payload),
    sizeof(vapi_msg_nat44_lb_static_mapping_details),
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_lb_static_mapping_details = vapi_register_msg(&__vapi_metadata_nat44_lb_static_mapping_details);
  VAPI_DBG("Assigned msg id %d to nat44_lb_static_mapping_details", vapi_msg_id_nat44_lb_static_mapping_details);
}

static inline void vapi_set_vapi_msg_nat44_lb_static_mapping_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_lb_static_mapping_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_lb_static_mapping_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_lb_static_mapping_dump
#define defined_vapi_msg_nat44_lb_static_mapping_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_lb_static_mapping_dump;

static inline void vapi_msg_nat44_lb_static_mapping_dump_hton(vapi_msg_nat44_lb_static_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_lb_static_mapping_dump_ntoh(vapi_msg_nat44_lb_static_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_lb_static_mapping_dump_msg_size(vapi_msg_nat44_lb_static_mapping_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_lb_static_mapping_dump* vapi_alloc_nat44_lb_static_mapping_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_lb_static_mapping_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_lb_static_mapping_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_lb_static_mapping_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_lb_static_mapping_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_lb_static_mapping_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_lb_static_mapping_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_lb_static_mapping_details *reply),
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
  vapi_msg_nat44_lb_static_mapping_dump_hton(msg);
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
    vapi_msg_nat44_lb_static_mapping_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_lb_static_mapping_dump()
{
  static const char name[] = "nat44_lb_static_mapping_dump";
  static const char name_with_crc[] = "nat44_lb_static_mapping_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_lb_static_mapping_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_lb_static_mapping_dump),
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_lb_static_mapping_dump = vapi_register_msg(&__vapi_metadata_nat44_lb_static_mapping_dump);
  VAPI_DBG("Assigned msg id %d to nat44_lb_static_mapping_dump", vapi_msg_id_nat44_lb_static_mapping_dump);
}
#endif

#ifndef defined_vapi_msg_nat64_pool_addr_details
#define defined_vapi_msg_nat64_pool_addr_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address address;
  u32 vrf_id; 
} vapi_payload_nat64_pool_addr_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_pool_addr_details payload;
} vapi_msg_nat64_pool_addr_details;

static inline void vapi_msg_nat64_pool_addr_details_payload_hton(vapi_payload_nat64_pool_addr_details *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat64_pool_addr_details_payload_ntoh(vapi_payload_nat64_pool_addr_details *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat64_pool_addr_details_hton(vapi_msg_nat64_pool_addr_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_pool_addr_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_pool_addr_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_pool_addr_details_ntoh(vapi_msg_nat64_pool_addr_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_pool_addr_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_pool_addr_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_pool_addr_details_msg_size(vapi_msg_nat64_pool_addr_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_pool_addr_details()
{
  static const char name[] = "nat64_pool_addr_details";
  static const char name_with_crc[] = "nat64_pool_addr_details_36f4365b";
  static vapi_message_desc_t __vapi_metadata_nat64_pool_addr_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_pool_addr_details, payload),
    sizeof(vapi_msg_nat64_pool_addr_details),
    (generic_swap_fn_t)vapi_msg_nat64_pool_addr_details_hton,
    (generic_swap_fn_t)vapi_msg_nat64_pool_addr_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_pool_addr_details = vapi_register_msg(&__vapi_metadata_nat64_pool_addr_details);
  VAPI_DBG("Assigned msg id %d to nat64_pool_addr_details", vapi_msg_id_nat64_pool_addr_details);
}

static inline void vapi_set_vapi_msg_nat64_pool_addr_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_pool_addr_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_pool_addr_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_pool_addr_dump
#define defined_vapi_msg_nat64_pool_addr_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat64_pool_addr_dump;

static inline void vapi_msg_nat64_pool_addr_dump_hton(vapi_msg_nat64_pool_addr_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_pool_addr_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat64_pool_addr_dump_ntoh(vapi_msg_nat64_pool_addr_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_pool_addr_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat64_pool_addr_dump_msg_size(vapi_msg_nat64_pool_addr_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_pool_addr_dump* vapi_alloc_nat64_pool_addr_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_pool_addr_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_pool_addr_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_pool_addr_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_pool_addr_dump);

  return msg;
}

static inline vapi_error_e vapi_nat64_pool_addr_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_pool_addr_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_pool_addr_details *reply),
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
  vapi_msg_nat64_pool_addr_dump_hton(msg);
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
    vapi_msg_nat64_pool_addr_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_pool_addr_dump()
{
  static const char name[] = "nat64_pool_addr_dump";
  static const char name_with_crc[] = "nat64_pool_addr_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat64_pool_addr_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat64_pool_addr_dump),
    (generic_swap_fn_t)vapi_msg_nat64_pool_addr_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat64_pool_addr_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_pool_addr_dump = vapi_register_msg(&__vapi_metadata_nat64_pool_addr_dump);
  VAPI_DBG("Assigned msg id %d to nat64_pool_addr_dump", vapi_msg_id_nat64_pool_addr_dump);
}
#endif

#ifndef defined_vapi_msg_nat64_interface_details
#define defined_vapi_msg_nat64_interface_details
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat64_interface_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_interface_details payload;
} vapi_msg_nat64_interface_details;

static inline void vapi_msg_nat64_interface_details_payload_hton(vapi_payload_nat64_interface_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat64_interface_details_payload_ntoh(vapi_payload_nat64_interface_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat64_interface_details_hton(vapi_msg_nat64_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_interface_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_interface_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_interface_details_ntoh(vapi_msg_nat64_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_interface_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_interface_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_interface_details_msg_size(vapi_msg_nat64_interface_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_interface_details()
{
  static const char name[] = "nat64_interface_details";
  static const char name_with_crc[] = "nat64_interface_details_c363a3de";
  static vapi_message_desc_t __vapi_metadata_nat64_interface_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_interface_details, payload),
    sizeof(vapi_msg_nat64_interface_details),
    (generic_swap_fn_t)vapi_msg_nat64_interface_details_hton,
    (generic_swap_fn_t)vapi_msg_nat64_interface_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_interface_details = vapi_register_msg(&__vapi_metadata_nat64_interface_details);
  VAPI_DBG("Assigned msg id %d to nat64_interface_details", vapi_msg_id_nat64_interface_details);
}

static inline void vapi_set_vapi_msg_nat64_interface_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_interface_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_interface_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_interface_dump
#define defined_vapi_msg_nat64_interface_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat64_interface_dump;

static inline void vapi_msg_nat64_interface_dump_hton(vapi_msg_nat64_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_interface_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat64_interface_dump_ntoh(vapi_msg_nat64_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_interface_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat64_interface_dump_msg_size(vapi_msg_nat64_interface_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_interface_dump* vapi_alloc_nat64_interface_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_interface_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_interface_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_interface_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_interface_dump);

  return msg;
}

static inline vapi_error_e vapi_nat64_interface_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_interface_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_interface_details *reply),
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
  vapi_msg_nat64_interface_dump_hton(msg);
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
    vapi_msg_nat64_interface_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_interface_dump()
{
  static const char name[] = "nat64_interface_dump";
  static const char name_with_crc[] = "nat64_interface_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat64_interface_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat64_interface_dump),
    (generic_swap_fn_t)vapi_msg_nat64_interface_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat64_interface_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_interface_dump = vapi_register_msg(&__vapi_metadata_nat64_interface_dump);
  VAPI_DBG("Assigned msg id %d to nat64_interface_dump", vapi_msg_id_nat64_interface_dump);
}
#endif

#ifndef defined_vapi_msg_nat_det_add_del_map_reply
#define defined_vapi_msg_nat_det_add_del_map_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_det_add_del_map_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_det_add_del_map_reply payload;
} vapi_msg_nat_det_add_del_map_reply;

static inline void vapi_msg_nat_det_add_del_map_reply_payload_hton(vapi_payload_nat_det_add_del_map_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_det_add_del_map_reply_payload_ntoh(vapi_payload_nat_det_add_del_map_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_det_add_del_map_reply_hton(vapi_msg_nat_det_add_del_map_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_add_del_map_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_det_add_del_map_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_add_del_map_reply_ntoh(vapi_msg_nat_det_add_del_map_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_add_del_map_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_det_add_del_map_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_add_del_map_reply_msg_size(vapi_msg_nat_det_add_del_map_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_det_add_del_map_reply()
{
  static const char name[] = "nat_det_add_del_map_reply";
  static const char name_with_crc[] = "nat_det_add_del_map_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_det_add_del_map_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_det_add_del_map_reply, payload),
    sizeof(vapi_msg_nat_det_add_del_map_reply),
    (generic_swap_fn_t)vapi_msg_nat_det_add_del_map_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_add_del_map_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_add_del_map_reply = vapi_register_msg(&__vapi_metadata_nat_det_add_del_map_reply);
  VAPI_DBG("Assigned msg id %d to nat_det_add_del_map_reply", vapi_msg_id_nat_det_add_del_map_reply);
}

static inline void vapi_set_vapi_msg_nat_det_add_del_map_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_det_add_del_map_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_det_add_del_map_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_det_add_del_map
#define defined_vapi_msg_nat_det_add_del_map
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_ip4_address in_addr;
  u8 in_plen;
  vapi_type_ip4_address out_addr;
  u8 out_plen; 
} vapi_payload_nat_det_add_del_map;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_det_add_del_map payload;
} vapi_msg_nat_det_add_del_map;

static inline void vapi_msg_nat_det_add_del_map_payload_hton(vapi_payload_nat_det_add_del_map *payload)
{

}

static inline void vapi_msg_nat_det_add_del_map_payload_ntoh(vapi_payload_nat_det_add_del_map *payload)
{

}

static inline void vapi_msg_nat_det_add_del_map_hton(vapi_msg_nat_det_add_del_map *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_add_del_map'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_det_add_del_map_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_add_del_map_ntoh(vapi_msg_nat_det_add_del_map *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_add_del_map'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_det_add_del_map_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_add_del_map_msg_size(vapi_msg_nat_det_add_del_map *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_det_add_del_map* vapi_alloc_nat_det_add_del_map(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_det_add_del_map *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_det_add_del_map);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_det_add_del_map*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_det_add_del_map);

  return msg;
}

static inline vapi_error_e vapi_nat_det_add_del_map(struct vapi_ctx_s *ctx,
  vapi_msg_nat_det_add_del_map *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_det_add_del_map_reply *reply),
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
  vapi_msg_nat_det_add_del_map_hton(msg);
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
    vapi_msg_nat_det_add_del_map_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_det_add_del_map()
{
  static const char name[] = "nat_det_add_del_map";
  static const char name_with_crc[] = "nat_det_add_del_map_04b76549";
  static vapi_message_desc_t __vapi_metadata_nat_det_add_del_map = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_det_add_del_map, payload),
    sizeof(vapi_msg_nat_det_add_del_map),
    (generic_swap_fn_t)vapi_msg_nat_det_add_del_map_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_add_del_map_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_add_del_map = vapi_register_msg(&__vapi_metadata_nat_det_add_del_map);
  VAPI_DBG("Assigned msg id %d to nat_det_add_del_map", vapi_msg_id_nat_det_add_del_map);
}
#endif

#ifndef defined_vapi_msg_nat44_identity_mapping_dump
#define defined_vapi_msg_nat44_identity_mapping_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_identity_mapping_dump;

static inline void vapi_msg_nat44_identity_mapping_dump_hton(vapi_msg_nat44_identity_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_identity_mapping_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_identity_mapping_dump_ntoh(vapi_msg_nat44_identity_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_identity_mapping_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_identity_mapping_dump_msg_size(vapi_msg_nat44_identity_mapping_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_identity_mapping_dump* vapi_alloc_nat44_identity_mapping_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_identity_mapping_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_identity_mapping_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_identity_mapping_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_identity_mapping_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_identity_mapping_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_identity_mapping_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_identity_mapping_details *reply),
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
  vapi_msg_nat44_identity_mapping_dump_hton(msg);
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
    vapi_msg_nat44_identity_mapping_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_identity_mapping_dump()
{
  static const char name[] = "nat44_identity_mapping_dump";
  static const char name_with_crc[] = "nat44_identity_mapping_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_identity_mapping_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_identity_mapping_dump),
    (generic_swap_fn_t)vapi_msg_nat44_identity_mapping_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_identity_mapping_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_identity_mapping_dump = vapi_register_msg(&__vapi_metadata_nat44_identity_mapping_dump);
  VAPI_DBG("Assigned msg id %d to nat44_identity_mapping_dump", vapi_msg_id_nat44_identity_mapping_dump);
}
#endif

#ifndef defined_vapi_msg_nat64_add_del_interface_addr_reply
#define defined_vapi_msg_nat64_add_del_interface_addr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat64_add_del_interface_addr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_add_del_interface_addr_reply payload;
} vapi_msg_nat64_add_del_interface_addr_reply;

static inline void vapi_msg_nat64_add_del_interface_addr_reply_payload_hton(vapi_payload_nat64_add_del_interface_addr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat64_add_del_interface_addr_reply_payload_ntoh(vapi_payload_nat64_add_del_interface_addr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat64_add_del_interface_addr_reply_hton(vapi_msg_nat64_add_del_interface_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface_addr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_add_del_interface_addr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_interface_addr_reply_ntoh(vapi_msg_nat64_add_del_interface_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface_addr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_interface_addr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_interface_addr_reply_msg_size(vapi_msg_nat64_add_del_interface_addr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_interface_addr_reply()
{
  static const char name[] = "nat64_add_del_interface_addr_reply";
  static const char name_with_crc[] = "nat64_add_del_interface_addr_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_interface_addr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_add_del_interface_addr_reply, payload),
    sizeof(vapi_msg_nat64_add_del_interface_addr_reply),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_addr_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_addr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_interface_addr_reply = vapi_register_msg(&__vapi_metadata_nat64_add_del_interface_addr_reply);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_interface_addr_reply", vapi_msg_id_nat64_add_del_interface_addr_reply);
}

static inline void vapi_set_vapi_msg_nat64_add_del_interface_addr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_add_del_interface_addr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_add_del_interface_addr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_add_del_interface_addr
#define defined_vapi_msg_nat64_add_del_interface_addr
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat64_add_del_interface_addr;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat64_add_del_interface_addr payload;
} vapi_msg_nat64_add_del_interface_addr;

static inline void vapi_msg_nat64_add_del_interface_addr_payload_hton(vapi_payload_nat64_add_del_interface_addr *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat64_add_del_interface_addr_payload_ntoh(vapi_payload_nat64_add_del_interface_addr *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat64_add_del_interface_addr_hton(vapi_msg_nat64_add_del_interface_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface_addr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat64_add_del_interface_addr_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_interface_addr_ntoh(vapi_msg_nat64_add_del_interface_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface_addr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_interface_addr_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_interface_addr_msg_size(vapi_msg_nat64_add_del_interface_addr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_add_del_interface_addr* vapi_alloc_nat64_add_del_interface_addr(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_add_del_interface_addr *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_add_del_interface_addr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_add_del_interface_addr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_add_del_interface_addr);

  return msg;
}

static inline vapi_error_e vapi_nat64_add_del_interface_addr(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_add_del_interface_addr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_add_del_interface_addr_reply *reply),
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
  vapi_msg_nat64_add_del_interface_addr_hton(msg);
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
    vapi_msg_nat64_add_del_interface_addr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_interface_addr()
{
  static const char name[] = "nat64_add_del_interface_addr";
  static const char name_with_crc[] = "nat64_add_del_interface_addr_2667112d";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_interface_addr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat64_add_del_interface_addr, payload),
    sizeof(vapi_msg_nat64_add_del_interface_addr),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_addr_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_addr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_interface_addr = vapi_register_msg(&__vapi_metadata_nat64_add_del_interface_addr);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_interface_addr", vapi_msg_id_nat64_add_del_interface_addr);
}
#endif

#ifndef defined_vapi_msg_nat64_prefix_details
#define defined_vapi_msg_nat64_prefix_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip6_prefix prefix;
  u32 vrf_id; 
} vapi_payload_nat64_prefix_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_prefix_details payload;
} vapi_msg_nat64_prefix_details;

static inline void vapi_msg_nat64_prefix_details_payload_hton(vapi_payload_nat64_prefix_details *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat64_prefix_details_payload_ntoh(vapi_payload_nat64_prefix_details *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat64_prefix_details_hton(vapi_msg_nat64_prefix_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_prefix_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_prefix_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_prefix_details_ntoh(vapi_msg_nat64_prefix_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_prefix_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_prefix_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_prefix_details_msg_size(vapi_msg_nat64_prefix_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_prefix_details()
{
  static const char name[] = "nat64_prefix_details";
  static const char name_with_crc[] = "nat64_prefix_details_6e0088d7";
  static vapi_message_desc_t __vapi_metadata_nat64_prefix_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_prefix_details, payload),
    sizeof(vapi_msg_nat64_prefix_details),
    (generic_swap_fn_t)vapi_msg_nat64_prefix_details_hton,
    (generic_swap_fn_t)vapi_msg_nat64_prefix_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_prefix_details = vapi_register_msg(&__vapi_metadata_nat64_prefix_details);
  VAPI_DBG("Assigned msg id %d to nat64_prefix_details", vapi_msg_id_nat64_prefix_details);
}

static inline void vapi_set_vapi_msg_nat64_prefix_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_prefix_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_prefix_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_dslite_set_b4_addr_reply
#define defined_vapi_msg_dslite_set_b4_addr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_dslite_set_b4_addr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_dslite_set_b4_addr_reply payload;
} vapi_msg_dslite_set_b4_addr_reply;

static inline void vapi_msg_dslite_set_b4_addr_reply_payload_hton(vapi_payload_dslite_set_b4_addr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_dslite_set_b4_addr_reply_payload_ntoh(vapi_payload_dslite_set_b4_addr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_dslite_set_b4_addr_reply_hton(vapi_msg_dslite_set_b4_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_b4_addr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_dslite_set_b4_addr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_set_b4_addr_reply_ntoh(vapi_msg_dslite_set_b4_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_b4_addr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_dslite_set_b4_addr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_set_b4_addr_reply_msg_size(vapi_msg_dslite_set_b4_addr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_dslite_set_b4_addr_reply()
{
  static const char name[] = "dslite_set_b4_addr_reply";
  static const char name_with_crc[] = "dslite_set_b4_addr_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_dslite_set_b4_addr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_dslite_set_b4_addr_reply, payload),
    sizeof(vapi_msg_dslite_set_b4_addr_reply),
    (generic_swap_fn_t)vapi_msg_dslite_set_b4_addr_reply_hton,
    (generic_swap_fn_t)vapi_msg_dslite_set_b4_addr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_set_b4_addr_reply = vapi_register_msg(&__vapi_metadata_dslite_set_b4_addr_reply);
  VAPI_DBG("Assigned msg id %d to dslite_set_b4_addr_reply", vapi_msg_id_dslite_set_b4_addr_reply);
}

static inline void vapi_set_vapi_msg_dslite_set_b4_addr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_dslite_set_b4_addr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_dslite_set_b4_addr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat66_add_del_interface_reply
#define defined_vapi_msg_nat66_add_del_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat66_add_del_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat66_add_del_interface_reply payload;
} vapi_msg_nat66_add_del_interface_reply;

static inline void vapi_msg_nat66_add_del_interface_reply_payload_hton(vapi_payload_nat66_add_del_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat66_add_del_interface_reply_payload_ntoh(vapi_payload_nat66_add_del_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat66_add_del_interface_reply_hton(vapi_msg_nat66_add_del_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat66_add_del_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat66_add_del_interface_reply_ntoh(vapi_msg_nat66_add_del_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat66_add_del_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat66_add_del_interface_reply_msg_size(vapi_msg_nat66_add_del_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat66_add_del_interface_reply()
{
  static const char name[] = "nat66_add_del_interface_reply";
  static const char name_with_crc[] = "nat66_add_del_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat66_add_del_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat66_add_del_interface_reply, payload),
    sizeof(vapi_msg_nat66_add_del_interface_reply),
    (generic_swap_fn_t)vapi_msg_nat66_add_del_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat66_add_del_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_add_del_interface_reply = vapi_register_msg(&__vapi_metadata_nat66_add_del_interface_reply);
  VAPI_DBG("Assigned msg id %d to nat66_add_del_interface_reply", vapi_msg_id_nat66_add_del_interface_reply);
}

static inline void vapi_set_vapi_msg_nat66_add_del_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat66_add_del_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat66_add_del_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_det_reverse_reply
#define defined_vapi_msg_nat_det_reverse_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_ip4_address in_addr; 
} vapi_payload_nat_det_reverse_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_det_reverse_reply payload;
} vapi_msg_nat_det_reverse_reply;

static inline void vapi_msg_nat_det_reverse_reply_payload_hton(vapi_payload_nat_det_reverse_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_det_reverse_reply_payload_ntoh(vapi_payload_nat_det_reverse_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_det_reverse_reply_hton(vapi_msg_nat_det_reverse_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_reverse_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_det_reverse_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_reverse_reply_ntoh(vapi_msg_nat_det_reverse_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_reverse_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_det_reverse_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_reverse_reply_msg_size(vapi_msg_nat_det_reverse_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_det_reverse_reply()
{
  static const char name[] = "nat_det_reverse_reply";
  static const char name_with_crc[] = "nat_det_reverse_reply_0ce4aee6";
  static vapi_message_desc_t __vapi_metadata_nat_det_reverse_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_det_reverse_reply, payload),
    sizeof(vapi_msg_nat_det_reverse_reply),
    (generic_swap_fn_t)vapi_msg_nat_det_reverse_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_reverse_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_reverse_reply = vapi_register_msg(&__vapi_metadata_nat_det_reverse_reply);
  VAPI_DBG("Assigned msg id %d to nat_det_reverse_reply", vapi_msg_id_nat_det_reverse_reply);
}

static inline void vapi_set_vapi_msg_nat_det_reverse_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_det_reverse_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_det_reverse_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_user_details
#define defined_vapi_msg_nat44_user_details
typedef struct __attribute__ ((__packed__)) {
  u32 vrf_id;
  vapi_type_ip4_address ip_address;
  u32 nsessions;
  u32 nstaticsessions; 
} vapi_payload_nat44_user_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_user_details payload;
} vapi_msg_nat44_user_details;

static inline void vapi_msg_nat44_user_details_payload_hton(vapi_payload_nat44_user_details *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->nsessions = htobe32(payload->nsessions);
  payload->nstaticsessions = htobe32(payload->nstaticsessions);
}

static inline void vapi_msg_nat44_user_details_payload_ntoh(vapi_payload_nat44_user_details *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->nsessions = be32toh(payload->nsessions);
  payload->nstaticsessions = be32toh(payload->nstaticsessions);
}

static inline void vapi_msg_nat44_user_details_hton(vapi_msg_nat44_user_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_user_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_user_details_ntoh(vapi_msg_nat44_user_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_user_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_user_details_msg_size(vapi_msg_nat44_user_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_user_details()
{
  static const char name[] = "nat44_user_details";
  static const char name_with_crc[] = "nat44_user_details_e35837b4";
  static vapi_message_desc_t __vapi_metadata_nat44_user_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_user_details, payload),
    sizeof(vapi_msg_nat44_user_details),
    (generic_swap_fn_t)vapi_msg_nat44_user_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_user_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_user_details = vapi_register_msg(&__vapi_metadata_nat44_user_details);
  VAPI_DBG("Assigned msg id %d to nat44_user_details", vapi_msg_id_nat44_user_details);
}

static inline void vapi_set_vapi_msg_nat44_user_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_user_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_user_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_user_dump
#define defined_vapi_msg_nat44_user_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_user_dump;

static inline void vapi_msg_nat44_user_dump_hton(vapi_msg_nat44_user_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_user_dump_ntoh(vapi_msg_nat44_user_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_user_dump_msg_size(vapi_msg_nat44_user_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_user_dump* vapi_alloc_nat44_user_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_user_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_user_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_user_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_user_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_user_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_user_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_user_details *reply),
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
  vapi_msg_nat44_user_dump_hton(msg);
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
    vapi_msg_nat44_user_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_user_dump()
{
  static const char name[] = "nat44_user_dump";
  static const char name_with_crc[] = "nat44_user_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_user_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_user_dump),
    (generic_swap_fn_t)vapi_msg_nat44_user_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_user_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_user_dump = vapi_register_msg(&__vapi_metadata_nat44_user_dump);
  VAPI_DBG("Assigned msg id %d to nat44_user_dump", vapi_msg_id_nat44_user_dump);
}
#endif

#ifndef defined_vapi_msg_nat44_lb_static_mapping_add_del_local_reply
#define defined_vapi_msg_nat44_lb_static_mapping_add_del_local_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_lb_static_mapping_add_del_local_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_lb_static_mapping_add_del_local_reply payload;
} vapi_msg_nat44_lb_static_mapping_add_del_local_reply;

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_reply_payload_hton(vapi_payload_nat44_lb_static_mapping_add_del_local_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_reply_payload_ntoh(vapi_payload_nat44_lb_static_mapping_add_del_local_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_reply_hton(vapi_msg_nat44_lb_static_mapping_add_del_local_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_add_del_local_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_lb_static_mapping_add_del_local_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_reply_ntoh(vapi_msg_nat44_lb_static_mapping_add_del_local_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_add_del_local_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_lb_static_mapping_add_del_local_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_lb_static_mapping_add_del_local_reply_msg_size(vapi_msg_nat44_lb_static_mapping_add_del_local_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_lb_static_mapping_add_del_local_reply()
{
  static const char name[] = "nat44_lb_static_mapping_add_del_local_reply";
  static const char name_with_crc[] = "nat44_lb_static_mapping_add_del_local_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_lb_static_mapping_add_del_local_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_lb_static_mapping_add_del_local_reply, payload),
    sizeof(vapi_msg_nat44_lb_static_mapping_add_del_local_reply),
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_add_del_local_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_add_del_local_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply = vapi_register_msg(&__vapi_metadata_nat44_lb_static_mapping_add_del_local_reply);
  VAPI_DBG("Assigned msg id %d to nat44_lb_static_mapping_add_del_local_reply", vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply);
}

static inline void vapi_set_vapi_msg_nat44_lb_static_mapping_add_del_local_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_lb_static_mapping_add_del_local_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_lb_static_mapping_add_del_local
#define defined_vapi_msg_nat44_lb_static_mapping_add_del_local
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_ip4_address external_addr;
  u16 external_port;
  u8 protocol;
  vapi_type_nat44_lb_addr_port local; 
} vapi_payload_nat44_lb_static_mapping_add_del_local;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_lb_static_mapping_add_del_local payload;
} vapi_msg_nat44_lb_static_mapping_add_del_local;

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_payload_hton(vapi_payload_nat44_lb_static_mapping_add_del_local *payload)
{
  payload->external_port = htobe16(payload->external_port);
  vapi_type_nat44_lb_addr_port_hton(&payload->local);
}

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_payload_ntoh(vapi_payload_nat44_lb_static_mapping_add_del_local *payload)
{
  payload->external_port = be16toh(payload->external_port);
  vapi_type_nat44_lb_addr_port_ntoh(&payload->local);
}

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_hton(vapi_msg_nat44_lb_static_mapping_add_del_local *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_add_del_local'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_lb_static_mapping_add_del_local_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_lb_static_mapping_add_del_local_ntoh(vapi_msg_nat44_lb_static_mapping_add_del_local *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_lb_static_mapping_add_del_local'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_lb_static_mapping_add_del_local_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_lb_static_mapping_add_del_local_msg_size(vapi_msg_nat44_lb_static_mapping_add_del_local *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_lb_static_mapping_add_del_local* vapi_alloc_nat44_lb_static_mapping_add_del_local(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_lb_static_mapping_add_del_local *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_lb_static_mapping_add_del_local);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_lb_static_mapping_add_del_local*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_lb_static_mapping_add_del_local);

  return msg;
}

static inline vapi_error_e vapi_nat44_lb_static_mapping_add_del_local(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_lb_static_mapping_add_del_local *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_lb_static_mapping_add_del_local_reply *reply),
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
  vapi_msg_nat44_lb_static_mapping_add_del_local_hton(msg);
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
    vapi_msg_nat44_lb_static_mapping_add_del_local_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_lb_static_mapping_add_del_local()
{
  static const char name[] = "nat44_lb_static_mapping_add_del_local";
  static const char name_with_crc[] = "nat44_lb_static_mapping_add_del_local_5d9011ee";
  static vapi_message_desc_t __vapi_metadata_nat44_lb_static_mapping_add_del_local = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_lb_static_mapping_add_del_local, payload),
    sizeof(vapi_msg_nat44_lb_static_mapping_add_del_local),
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_add_del_local_hton,
    (generic_swap_fn_t)vapi_msg_nat44_lb_static_mapping_add_del_local_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_lb_static_mapping_add_del_local = vapi_register_msg(&__vapi_metadata_nat44_lb_static_mapping_add_del_local);
  VAPI_DBG("Assigned msg id %d to nat44_lb_static_mapping_add_del_local", vapi_msg_id_nat44_lb_static_mapping_add_del_local);
}
#endif

#ifndef defined_vapi_msg_nat44_static_mapping_details
#define defined_vapi_msg_nat44_static_mapping_details
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_nat_config_flags flags;
  vapi_type_ip4_address local_ip_address;
  vapi_type_ip4_address external_ip_address;
  u8 protocol;
  u16 local_port;
  u16 external_port;
  vapi_type_interface_index external_sw_if_index;
  u32 vrf_id;
  vl_api_string_t tag; 
} vapi_payload_nat44_static_mapping_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_static_mapping_details payload;
} vapi_msg_nat44_static_mapping_details;

static inline void vapi_msg_nat44_static_mapping_details_payload_hton(vapi_payload_nat44_static_mapping_details *payload)
{
  payload->local_port = htobe16(payload->local_port);
  payload->external_port = htobe16(payload->external_port);
  payload->external_sw_if_index = htobe32(payload->external_sw_if_index);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat44_static_mapping_details_payload_ntoh(vapi_payload_nat44_static_mapping_details *payload)
{
  payload->local_port = be16toh(payload->local_port);
  payload->external_port = be16toh(payload->external_port);
  payload->external_sw_if_index = be32toh(payload->external_sw_if_index);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat44_static_mapping_details_hton(vapi_msg_nat44_static_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_static_mapping_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_static_mapping_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_static_mapping_details_ntoh(vapi_msg_nat44_static_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_static_mapping_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_static_mapping_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_static_mapping_details_msg_size(vapi_msg_nat44_static_mapping_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_static_mapping_details()
{
  static const char name[] = "nat44_static_mapping_details";
  static const char name_with_crc[] = "nat44_static_mapping_details_68e5b3cc";
  static vapi_message_desc_t __vapi_metadata_nat44_static_mapping_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_static_mapping_details, payload),
    sizeof(vapi_msg_nat44_static_mapping_details),
    (generic_swap_fn_t)vapi_msg_nat44_static_mapping_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_static_mapping_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_static_mapping_details = vapi_register_msg(&__vapi_metadata_nat44_static_mapping_details);
  VAPI_DBG("Assigned msg id %d to nat44_static_mapping_details", vapi_msg_id_nat44_static_mapping_details);
}

static inline void vapi_set_vapi_msg_nat44_static_mapping_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_static_mapping_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_static_mapping_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_ha_resync_reply
#define defined_vapi_msg_nat_ha_resync_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_ha_resync_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_ha_resync_reply payload;
} vapi_msg_nat_ha_resync_reply;

static inline void vapi_msg_nat_ha_resync_reply_payload_hton(vapi_payload_nat_ha_resync_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_ha_resync_reply_payload_ntoh(vapi_payload_nat_ha_resync_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_ha_resync_reply_hton(vapi_msg_nat_ha_resync_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_resync_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_ha_resync_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_resync_reply_ntoh(vapi_msg_nat_ha_resync_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_resync_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_ha_resync_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_resync_reply_msg_size(vapi_msg_nat_ha_resync_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ha_resync_reply()
{
  static const char name[] = "nat_ha_resync_reply";
  static const char name_with_crc[] = "nat_ha_resync_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_ha_resync_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_ha_resync_reply, payload),
    sizeof(vapi_msg_nat_ha_resync_reply),
    (generic_swap_fn_t)vapi_msg_nat_ha_resync_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_resync_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_resync_reply = vapi_register_msg(&__vapi_metadata_nat_ha_resync_reply);
  VAPI_DBG("Assigned msg id %d to nat_ha_resync_reply", vapi_msg_id_nat_ha_resync_reply);
}

static inline void vapi_set_vapi_msg_nat_ha_resync_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ha_resync_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ha_resync_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_add_del_prefix_reply
#define defined_vapi_msg_nat64_add_del_prefix_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat64_add_del_prefix_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_add_del_prefix_reply payload;
} vapi_msg_nat64_add_del_prefix_reply;

static inline void vapi_msg_nat64_add_del_prefix_reply_payload_hton(vapi_payload_nat64_add_del_prefix_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat64_add_del_prefix_reply_payload_ntoh(vapi_payload_nat64_add_del_prefix_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat64_add_del_prefix_reply_hton(vapi_msg_nat64_add_del_prefix_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_prefix_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_add_del_prefix_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_prefix_reply_ntoh(vapi_msg_nat64_add_del_prefix_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_prefix_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_prefix_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_prefix_reply_msg_size(vapi_msg_nat64_add_del_prefix_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_prefix_reply()
{
  static const char name[] = "nat64_add_del_prefix_reply";
  static const char name_with_crc[] = "nat64_add_del_prefix_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_prefix_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_add_del_prefix_reply, payload),
    sizeof(vapi_msg_nat64_add_del_prefix_reply),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_prefix_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_prefix_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_prefix_reply = vapi_register_msg(&__vapi_metadata_nat64_add_del_prefix_reply);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_prefix_reply", vapi_msg_id_nat64_add_del_prefix_reply);
}

static inline void vapi_set_vapi_msg_nat64_add_del_prefix_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_add_del_prefix_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_add_del_prefix_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_st_details
#define defined_vapi_msg_nat64_st_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip6_address il_addr;
  vapi_type_ip4_address ol_addr;
  u16 il_port;
  u16 ol_port;
  vapi_type_ip6_address ir_addr;
  vapi_type_ip4_address or_addr;
  u16 r_port;
  u32 vrf_id;
  u8 proto; 
} vapi_payload_nat64_st_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_st_details payload;
} vapi_msg_nat64_st_details;

static inline void vapi_msg_nat64_st_details_payload_hton(vapi_payload_nat64_st_details *payload)
{
  payload->il_port = htobe16(payload->il_port);
  payload->ol_port = htobe16(payload->ol_port);
  payload->r_port = htobe16(payload->r_port);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat64_st_details_payload_ntoh(vapi_payload_nat64_st_details *payload)
{
  payload->il_port = be16toh(payload->il_port);
  payload->ol_port = be16toh(payload->ol_port);
  payload->r_port = be16toh(payload->r_port);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat64_st_details_hton(vapi_msg_nat64_st_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_st_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_st_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_st_details_ntoh(vapi_msg_nat64_st_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_st_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_st_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_st_details_msg_size(vapi_msg_nat64_st_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_st_details()
{
  static const char name[] = "nat64_st_details";
  static const char name_with_crc[] = "nat64_st_details_7c5125d0";
  static vapi_message_desc_t __vapi_metadata_nat64_st_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_st_details, payload),
    sizeof(vapi_msg_nat64_st_details),
    (generic_swap_fn_t)vapi_msg_nat64_st_details_hton,
    (generic_swap_fn_t)vapi_msg_nat64_st_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_st_details = vapi_register_msg(&__vapi_metadata_nat64_st_details);
  VAPI_DBG("Assigned msg id %d to nat64_st_details", vapi_msg_id_nat64_st_details);
}

static inline void vapi_set_vapi_msg_nat64_st_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_st_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_st_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_ha_flush_reply
#define defined_vapi_msg_nat_ha_flush_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_ha_flush_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_ha_flush_reply payload;
} vapi_msg_nat_ha_flush_reply;

static inline void vapi_msg_nat_ha_flush_reply_payload_hton(vapi_payload_nat_ha_flush_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_ha_flush_reply_payload_ntoh(vapi_payload_nat_ha_flush_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_ha_flush_reply_hton(vapi_msg_nat_ha_flush_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_flush_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_ha_flush_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_flush_reply_ntoh(vapi_msg_nat_ha_flush_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_flush_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_ha_flush_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_flush_reply_msg_size(vapi_msg_nat_ha_flush_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ha_flush_reply()
{
  static const char name[] = "nat_ha_flush_reply";
  static const char name_with_crc[] = "nat_ha_flush_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_ha_flush_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_ha_flush_reply, payload),
    sizeof(vapi_msg_nat_ha_flush_reply),
    (generic_swap_fn_t)vapi_msg_nat_ha_flush_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_flush_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_flush_reply = vapi_register_msg(&__vapi_metadata_nat_ha_flush_reply);
  VAPI_DBG("Assigned msg id %d to nat_ha_flush_reply", vapi_msg_id_nat_ha_flush_reply);
}

static inline void vapi_set_vapi_msg_nat_ha_flush_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ha_flush_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ha_flush_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_ha_flush
#define defined_vapi_msg_nat_ha_flush
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_ha_flush;

static inline void vapi_msg_nat_ha_flush_hton(vapi_msg_nat_ha_flush *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_flush'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_ha_flush_ntoh(vapi_msg_nat_ha_flush *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_flush'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_ha_flush_msg_size(vapi_msg_nat_ha_flush *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_ha_flush* vapi_alloc_nat_ha_flush(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_ha_flush *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_ha_flush);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_ha_flush*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_ha_flush);

  return msg;
}

static inline vapi_error_e vapi_nat_ha_flush(struct vapi_ctx_s *ctx,
  vapi_msg_nat_ha_flush *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_ha_flush_reply *reply),
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
  vapi_msg_nat_ha_flush_hton(msg);
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
    vapi_msg_nat_ha_flush_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_ha_flush()
{
  static const char name[] = "nat_ha_flush";
  static const char name_with_crc[] = "nat_ha_flush_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_ha_flush = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_ha_flush),
    (generic_swap_fn_t)vapi_msg_nat_ha_flush_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_flush_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_flush = vapi_register_msg(&__vapi_metadata_nat_ha_flush);
  VAPI_DBG("Assigned msg id %d to nat_ha_flush", vapi_msg_id_nat_ha_flush);
}
#endif

#ifndef defined_vapi_msg_nat_control_ping
#define defined_vapi_msg_nat_control_ping
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_control_ping;

static inline void vapi_msg_nat_control_ping_hton(vapi_msg_nat_control_ping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_control_ping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_control_ping_ntoh(vapi_msg_nat_control_ping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_control_ping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_control_ping_msg_size(vapi_msg_nat_control_ping *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_control_ping* vapi_alloc_nat_control_ping(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_control_ping *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_control_ping);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_control_ping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_control_ping);

  return msg;
}

static inline vapi_error_e vapi_nat_control_ping(struct vapi_ctx_s *ctx,
  vapi_msg_nat_control_ping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_control_ping_reply *reply),
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
  vapi_msg_nat_control_ping_hton(msg);
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
    vapi_msg_nat_control_ping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_control_ping()
{
  static const char name[] = "nat_control_ping";
  static const char name_with_crc[] = "nat_control_ping_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_control_ping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_control_ping),
    (generic_swap_fn_t)vapi_msg_nat_control_ping_hton,
    (generic_swap_fn_t)vapi_msg_nat_control_ping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_control_ping = vapi_register_msg(&__vapi_metadata_nat_control_ping);
  VAPI_DBG("Assigned msg id %d to nat_control_ping", vapi_msg_id_nat_control_ping);
}
#endif

#ifndef defined_vapi_msg_nat44_interface_add_del_output_feature_reply
#define defined_vapi_msg_nat44_interface_add_del_output_feature_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_interface_add_del_output_feature_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_interface_add_del_output_feature_reply payload;
} vapi_msg_nat44_interface_add_del_output_feature_reply;

static inline void vapi_msg_nat44_interface_add_del_output_feature_reply_payload_hton(vapi_payload_nat44_interface_add_del_output_feature_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_interface_add_del_output_feature_reply_payload_ntoh(vapi_payload_nat44_interface_add_del_output_feature_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_interface_add_del_output_feature_reply_hton(vapi_msg_nat44_interface_add_del_output_feature_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_output_feature_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_interface_add_del_output_feature_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_interface_add_del_output_feature_reply_ntoh(vapi_msg_nat44_interface_add_del_output_feature_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_output_feature_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_interface_add_del_output_feature_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_interface_add_del_output_feature_reply_msg_size(vapi_msg_nat44_interface_add_del_output_feature_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_interface_add_del_output_feature_reply()
{
  static const char name[] = "nat44_interface_add_del_output_feature_reply";
  static const char name_with_crc[] = "nat44_interface_add_del_output_feature_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_add_del_output_feature_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_interface_add_del_output_feature_reply, payload),
    sizeof(vapi_msg_nat44_interface_add_del_output_feature_reply),
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_output_feature_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_output_feature_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_add_del_output_feature_reply = vapi_register_msg(&__vapi_metadata_nat44_interface_add_del_output_feature_reply);
  VAPI_DBG("Assigned msg id %d to nat44_interface_add_del_output_feature_reply", vapi_msg_id_nat44_interface_add_del_output_feature_reply);
}

static inline void vapi_set_vapi_msg_nat44_interface_add_del_output_feature_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_interface_add_del_output_feature_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_interface_add_del_output_feature_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_add_del_interface_reply
#define defined_vapi_msg_nat64_add_del_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat64_add_del_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_add_del_interface_reply payload;
} vapi_msg_nat64_add_del_interface_reply;

static inline void vapi_msg_nat64_add_del_interface_reply_payload_hton(vapi_payload_nat64_add_del_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat64_add_del_interface_reply_payload_ntoh(vapi_payload_nat64_add_del_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat64_add_del_interface_reply_hton(vapi_msg_nat64_add_del_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_add_del_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_interface_reply_ntoh(vapi_msg_nat64_add_del_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_interface_reply_msg_size(vapi_msg_nat64_add_del_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_interface_reply()
{
  static const char name[] = "nat64_add_del_interface_reply";
  static const char name_with_crc[] = "nat64_add_del_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_add_del_interface_reply, payload),
    sizeof(vapi_msg_nat64_add_del_interface_reply),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_interface_reply = vapi_register_msg(&__vapi_metadata_nat64_add_del_interface_reply);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_interface_reply", vapi_msg_id_nat64_add_del_interface_reply);
}

static inline void vapi_set_vapi_msg_nat64_add_del_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_add_del_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_add_del_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_add_del_interface
#define defined_vapi_msg_nat64_add_del_interface
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat64_add_del_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat64_add_del_interface payload;
} vapi_msg_nat64_add_del_interface;

static inline void vapi_msg_nat64_add_del_interface_payload_hton(vapi_payload_nat64_add_del_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat64_add_del_interface_payload_ntoh(vapi_payload_nat64_add_del_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat64_add_del_interface_hton(vapi_msg_nat64_add_del_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat64_add_del_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_interface_ntoh(vapi_msg_nat64_add_del_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_interface_msg_size(vapi_msg_nat64_add_del_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_add_del_interface* vapi_alloc_nat64_add_del_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_add_del_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_add_del_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_add_del_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_add_del_interface);

  return msg;
}

static inline vapi_error_e vapi_nat64_add_del_interface(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_add_del_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_add_del_interface_reply *reply),
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
  vapi_msg_nat64_add_del_interface_hton(msg);
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
    vapi_msg_nat64_add_del_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_interface()
{
  static const char name[] = "nat64_add_del_interface";
  static const char name_with_crc[] = "nat64_add_del_interface_ef3edad1";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat64_add_del_interface, payload),
    sizeof(vapi_msg_nat64_add_del_interface),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_interface = vapi_register_msg(&__vapi_metadata_nat64_add_del_interface);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_interface", vapi_msg_id_nat64_add_del_interface);
}
#endif

#ifndef defined_vapi_msg_nat_det_close_session_in_reply
#define defined_vapi_msg_nat_det_close_session_in_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_det_close_session_in_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_det_close_session_in_reply payload;
} vapi_msg_nat_det_close_session_in_reply;

static inline void vapi_msg_nat_det_close_session_in_reply_payload_hton(vapi_payload_nat_det_close_session_in_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_det_close_session_in_reply_payload_ntoh(vapi_payload_nat_det_close_session_in_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_det_close_session_in_reply_hton(vapi_msg_nat_det_close_session_in_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_in_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_det_close_session_in_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_close_session_in_reply_ntoh(vapi_msg_nat_det_close_session_in_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_in_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_det_close_session_in_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_close_session_in_reply_msg_size(vapi_msg_nat_det_close_session_in_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_det_close_session_in_reply()
{
  static const char name[] = "nat_det_close_session_in_reply";
  static const char name_with_crc[] = "nat_det_close_session_in_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_det_close_session_in_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_det_close_session_in_reply, payload),
    sizeof(vapi_msg_nat_det_close_session_in_reply),
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_in_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_in_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_close_session_in_reply = vapi_register_msg(&__vapi_metadata_nat_det_close_session_in_reply);
  VAPI_DBG("Assigned msg id %d to nat_det_close_session_in_reply", vapi_msg_id_nat_det_close_session_in_reply);
}

static inline void vapi_set_vapi_msg_nat_det_close_session_in_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_det_close_session_in_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_det_close_session_in_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_det_close_session_in
#define defined_vapi_msg_nat_det_close_session_in
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address in_addr;
  u16 in_port;
  vapi_type_ip4_address ext_addr;
  u16 ext_port; 
} vapi_payload_nat_det_close_session_in;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_det_close_session_in payload;
} vapi_msg_nat_det_close_session_in;

static inline void vapi_msg_nat_det_close_session_in_payload_hton(vapi_payload_nat_det_close_session_in *payload)
{
  payload->in_port = htobe16(payload->in_port);
  payload->ext_port = htobe16(payload->ext_port);
}

static inline void vapi_msg_nat_det_close_session_in_payload_ntoh(vapi_payload_nat_det_close_session_in *payload)
{
  payload->in_port = be16toh(payload->in_port);
  payload->ext_port = be16toh(payload->ext_port);
}

static inline void vapi_msg_nat_det_close_session_in_hton(vapi_msg_nat_det_close_session_in *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_in'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_det_close_session_in_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_close_session_in_ntoh(vapi_msg_nat_det_close_session_in *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_in'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_det_close_session_in_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_close_session_in_msg_size(vapi_msg_nat_det_close_session_in *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_det_close_session_in* vapi_alloc_nat_det_close_session_in(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_det_close_session_in *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_det_close_session_in);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_det_close_session_in*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_det_close_session_in);

  return msg;
}

static inline vapi_error_e vapi_nat_det_close_session_in(struct vapi_ctx_s *ctx,
  vapi_msg_nat_det_close_session_in *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_det_close_session_in_reply *reply),
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
  vapi_msg_nat_det_close_session_in_hton(msg);
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
    vapi_msg_nat_det_close_session_in_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_det_close_session_in()
{
  static const char name[] = "nat_det_close_session_in";
  static const char name_with_crc[] = "nat_det_close_session_in_fedaebae";
  static vapi_message_desc_t __vapi_metadata_nat_det_close_session_in = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_det_close_session_in, payload),
    sizeof(vapi_msg_nat_det_close_session_in),
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_in_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_in_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_close_session_in = vapi_register_msg(&__vapi_metadata_nat_det_close_session_in);
  VAPI_DBG("Assigned msg id %d to nat_det_close_session_in", vapi_msg_id_nat_det_close_session_in);
}
#endif

#ifndef defined_vapi_msg_nat44_user_session_details
#define defined_vapi_msg_nat44_user_session_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address outside_ip_address;
  u16 outside_port;
  vapi_type_ip4_address inside_ip_address;
  u16 inside_port;
  u16 protocol;
  vapi_enum_nat_config_flags flags;
  u64 last_heard;
  u64 total_bytes;
  u32 total_pkts;
  vapi_type_ip4_address ext_host_address;
  u16 ext_host_port;
  vapi_type_ip4_address ext_host_nat_address;
  u16 ext_host_nat_port; 
} vapi_payload_nat44_user_session_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_user_session_details payload;
} vapi_msg_nat44_user_session_details;

static inline void vapi_msg_nat44_user_session_details_payload_hton(vapi_payload_nat44_user_session_details *payload)
{
  payload->outside_port = htobe16(payload->outside_port);
  payload->inside_port = htobe16(payload->inside_port);
  payload->protocol = htobe16(payload->protocol);
  payload->last_heard = htobe64(payload->last_heard);
  payload->total_bytes = htobe64(payload->total_bytes);
  payload->total_pkts = htobe32(payload->total_pkts);
  payload->ext_host_port = htobe16(payload->ext_host_port);
  payload->ext_host_nat_port = htobe16(payload->ext_host_nat_port);
}

static inline void vapi_msg_nat44_user_session_details_payload_ntoh(vapi_payload_nat44_user_session_details *payload)
{
  payload->outside_port = be16toh(payload->outside_port);
  payload->inside_port = be16toh(payload->inside_port);
  payload->protocol = be16toh(payload->protocol);
  payload->last_heard = be64toh(payload->last_heard);
  payload->total_bytes = be64toh(payload->total_bytes);
  payload->total_pkts = be32toh(payload->total_pkts);
  payload->ext_host_port = be16toh(payload->ext_host_port);
  payload->ext_host_nat_port = be16toh(payload->ext_host_nat_port);
}

static inline void vapi_msg_nat44_user_session_details_hton(vapi_msg_nat44_user_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_session_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_user_session_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_user_session_details_ntoh(vapi_msg_nat44_user_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_session_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_user_session_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_user_session_details_msg_size(vapi_msg_nat44_user_session_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_user_session_details()
{
  static const char name[] = "nat44_user_session_details";
  static const char name_with_crc[] = "nat44_user_session_details_1d185082";
  static vapi_message_desc_t __vapi_metadata_nat44_user_session_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_user_session_details, payload),
    sizeof(vapi_msg_nat44_user_session_details),
    (generic_swap_fn_t)vapi_msg_nat44_user_session_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_user_session_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_user_session_details = vapi_register_msg(&__vapi_metadata_nat44_user_session_details);
  VAPI_DBG("Assigned msg id %d to nat44_user_session_details", vapi_msg_id_nat44_user_session_details);
}

static inline void vapi_set_vapi_msg_nat44_user_session_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_user_session_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_user_session_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_user_session_dump
#define defined_vapi_msg_nat44_user_session_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address ip_address;
  u32 vrf_id; 
} vapi_payload_nat44_user_session_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_user_session_dump payload;
} vapi_msg_nat44_user_session_dump;

static inline void vapi_msg_nat44_user_session_dump_payload_hton(vapi_payload_nat44_user_session_dump *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat44_user_session_dump_payload_ntoh(vapi_payload_nat44_user_session_dump *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat44_user_session_dump_hton(vapi_msg_nat44_user_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_session_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_user_session_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_user_session_dump_ntoh(vapi_msg_nat44_user_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_user_session_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_user_session_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_user_session_dump_msg_size(vapi_msg_nat44_user_session_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_user_session_dump* vapi_alloc_nat44_user_session_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_user_session_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_user_session_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_user_session_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_user_session_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_user_session_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_user_session_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_user_session_details *reply),
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
  vapi_msg_nat44_user_session_dump_hton(msg);
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
    vapi_msg_nat44_user_session_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_user_session_dump()
{
  static const char name[] = "nat44_user_session_dump";
  static const char name_with_crc[] = "nat44_user_session_dump_69c0a6a5";
  static vapi_message_desc_t __vapi_metadata_nat44_user_session_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_user_session_dump, payload),
    sizeof(vapi_msg_nat44_user_session_dump),
    (generic_swap_fn_t)vapi_msg_nat44_user_session_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_user_session_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_user_session_dump = vapi_register_msg(&__vapi_metadata_nat44_user_session_dump);
  VAPI_DBG("Assigned msg id %d to nat44_user_session_dump", vapi_msg_id_nat44_user_session_dump);
}
#endif

#ifndef defined_vapi_msg_nat_ha_set_listener_reply
#define defined_vapi_msg_nat_ha_set_listener_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_ha_set_listener_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_ha_set_listener_reply payload;
} vapi_msg_nat_ha_set_listener_reply;

static inline void vapi_msg_nat_ha_set_listener_reply_payload_hton(vapi_payload_nat_ha_set_listener_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_ha_set_listener_reply_payload_ntoh(vapi_payload_nat_ha_set_listener_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_ha_set_listener_reply_hton(vapi_msg_nat_ha_set_listener_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_listener_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_ha_set_listener_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_set_listener_reply_ntoh(vapi_msg_nat_ha_set_listener_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_listener_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_ha_set_listener_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_set_listener_reply_msg_size(vapi_msg_nat_ha_set_listener_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ha_set_listener_reply()
{
  static const char name[] = "nat_ha_set_listener_reply";
  static const char name_with_crc[] = "nat_ha_set_listener_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_ha_set_listener_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_ha_set_listener_reply, payload),
    sizeof(vapi_msg_nat_ha_set_listener_reply),
    (generic_swap_fn_t)vapi_msg_nat_ha_set_listener_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_set_listener_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_set_listener_reply = vapi_register_msg(&__vapi_metadata_nat_ha_set_listener_reply);
  VAPI_DBG("Assigned msg id %d to nat_ha_set_listener_reply", vapi_msg_id_nat_ha_set_listener_reply);
}

static inline void vapi_set_vapi_msg_nat_ha_set_listener_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ha_set_listener_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ha_set_listener_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_ha_set_listener
#define defined_vapi_msg_nat_ha_set_listener
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address ip_address;
  u16 port;
  u32 path_mtu; 
} vapi_payload_nat_ha_set_listener;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_ha_set_listener payload;
} vapi_msg_nat_ha_set_listener;

static inline void vapi_msg_nat_ha_set_listener_payload_hton(vapi_payload_nat_ha_set_listener *payload)
{
  payload->port = htobe16(payload->port);
  payload->path_mtu = htobe32(payload->path_mtu);
}

static inline void vapi_msg_nat_ha_set_listener_payload_ntoh(vapi_payload_nat_ha_set_listener *payload)
{
  payload->port = be16toh(payload->port);
  payload->path_mtu = be32toh(payload->path_mtu);
}

static inline void vapi_msg_nat_ha_set_listener_hton(vapi_msg_nat_ha_set_listener *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_listener'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_ha_set_listener_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_set_listener_ntoh(vapi_msg_nat_ha_set_listener *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_listener'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_ha_set_listener_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_set_listener_msg_size(vapi_msg_nat_ha_set_listener *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_ha_set_listener* vapi_alloc_nat_ha_set_listener(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_ha_set_listener *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_ha_set_listener);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_ha_set_listener*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_ha_set_listener);

  return msg;
}

static inline vapi_error_e vapi_nat_ha_set_listener(struct vapi_ctx_s *ctx,
  vapi_msg_nat_ha_set_listener *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_ha_set_listener_reply *reply),
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
  vapi_msg_nat_ha_set_listener_hton(msg);
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
    vapi_msg_nat_ha_set_listener_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_ha_set_listener()
{
  static const char name[] = "nat_ha_set_listener";
  static const char name_with_crc[] = "nat_ha_set_listener_ddf1d491";
  static vapi_message_desc_t __vapi_metadata_nat_ha_set_listener = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_ha_set_listener, payload),
    sizeof(vapi_msg_nat_ha_set_listener),
    (generic_swap_fn_t)vapi_msg_nat_ha_set_listener_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_set_listener_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_set_listener = vapi_register_msg(&__vapi_metadata_nat_ha_set_listener);
  VAPI_DBG("Assigned msg id %d to nat_ha_set_listener", vapi_msg_id_nat_ha_set_listener);
}
#endif

#ifndef defined_vapi_msg_nat_set_workers_reply
#define defined_vapi_msg_nat_set_workers_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_set_workers_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_set_workers_reply payload;
} vapi_msg_nat_set_workers_reply;

static inline void vapi_msg_nat_set_workers_reply_payload_hton(vapi_payload_nat_set_workers_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_set_workers_reply_payload_ntoh(vapi_payload_nat_set_workers_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_set_workers_reply_hton(vapi_msg_nat_set_workers_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_workers_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_set_workers_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_workers_reply_ntoh(vapi_msg_nat_set_workers_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_workers_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_set_workers_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_workers_reply_msg_size(vapi_msg_nat_set_workers_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_set_workers_reply()
{
  static const char name[] = "nat_set_workers_reply";
  static const char name_with_crc[] = "nat_set_workers_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_set_workers_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_set_workers_reply, payload),
    sizeof(vapi_msg_nat_set_workers_reply),
    (generic_swap_fn_t)vapi_msg_nat_set_workers_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_workers_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_workers_reply = vapi_register_msg(&__vapi_metadata_nat_set_workers_reply);
  VAPI_DBG("Assigned msg id %d to nat_set_workers_reply", vapi_msg_id_nat_set_workers_reply);
}

static inline void vapi_set_vapi_msg_nat_set_workers_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_set_workers_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_set_workers_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_workers
#define defined_vapi_msg_nat_set_workers
typedef struct __attribute__ ((__packed__)) {
  u64 worker_mask; 
} vapi_payload_nat_set_workers;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_set_workers payload;
} vapi_msg_nat_set_workers;

static inline void vapi_msg_nat_set_workers_payload_hton(vapi_payload_nat_set_workers *payload)
{
  payload->worker_mask = htobe64(payload->worker_mask);
}

static inline void vapi_msg_nat_set_workers_payload_ntoh(vapi_payload_nat_set_workers *payload)
{
  payload->worker_mask = be64toh(payload->worker_mask);
}

static inline void vapi_msg_nat_set_workers_hton(vapi_msg_nat_set_workers *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_workers'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_set_workers_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_workers_ntoh(vapi_msg_nat_set_workers *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_workers'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_set_workers_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_workers_msg_size(vapi_msg_nat_set_workers *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_set_workers* vapi_alloc_nat_set_workers(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_set_workers *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_set_workers);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_set_workers*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_set_workers);

  return msg;
}

static inline vapi_error_e vapi_nat_set_workers(struct vapi_ctx_s *ctx,
  vapi_msg_nat_set_workers *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_set_workers_reply *reply),
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
  vapi_msg_nat_set_workers_hton(msg);
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
    vapi_msg_nat_set_workers_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_set_workers()
{
  static const char name[] = "nat_set_workers";
  static const char name_with_crc[] = "nat_set_workers_da926638";
  static vapi_message_desc_t __vapi_metadata_nat_set_workers = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_set_workers, payload),
    sizeof(vapi_msg_nat_set_workers),
    (generic_swap_fn_t)vapi_msg_nat_set_workers_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_workers_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_workers = vapi_register_msg(&__vapi_metadata_nat_set_workers);
  VAPI_DBG("Assigned msg id %d to nat_set_workers", vapi_msg_id_nat_set_workers);
}
#endif

#ifndef defined_vapi_msg_dslite_get_b4_addr_reply
#define defined_vapi_msg_dslite_get_b4_addr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_ip4_address ip4_addr;
  vapi_type_ip6_address ip6_addr; 
} vapi_payload_dslite_get_b4_addr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_dslite_get_b4_addr_reply payload;
} vapi_msg_dslite_get_b4_addr_reply;

static inline void vapi_msg_dslite_get_b4_addr_reply_payload_hton(vapi_payload_dslite_get_b4_addr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_dslite_get_b4_addr_reply_payload_ntoh(vapi_payload_dslite_get_b4_addr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_dslite_get_b4_addr_reply_hton(vapi_msg_dslite_get_b4_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_b4_addr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_dslite_get_b4_addr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_get_b4_addr_reply_ntoh(vapi_msg_dslite_get_b4_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_b4_addr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_dslite_get_b4_addr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_get_b4_addr_reply_msg_size(vapi_msg_dslite_get_b4_addr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_dslite_get_b4_addr_reply()
{
  static const char name[] = "dslite_get_b4_addr_reply";
  static const char name_with_crc[] = "dslite_get_b4_addr_reply_c4b65514";
  static vapi_message_desc_t __vapi_metadata_dslite_get_b4_addr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_dslite_get_b4_addr_reply, payload),
    sizeof(vapi_msg_dslite_get_b4_addr_reply),
    (generic_swap_fn_t)vapi_msg_dslite_get_b4_addr_reply_hton,
    (generic_swap_fn_t)vapi_msg_dslite_get_b4_addr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_get_b4_addr_reply = vapi_register_msg(&__vapi_metadata_dslite_get_b4_addr_reply);
  VAPI_DBG("Assigned msg id %d to dslite_get_b4_addr_reply", vapi_msg_id_dslite_get_b4_addr_reply);
}

static inline void vapi_set_vapi_msg_dslite_get_b4_addr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_dslite_get_b4_addr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_dslite_get_b4_addr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_dslite_get_b4_addr
#define defined_vapi_msg_dslite_get_b4_addr
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_dslite_get_b4_addr;

static inline void vapi_msg_dslite_get_b4_addr_hton(vapi_msg_dslite_get_b4_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_b4_addr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_dslite_get_b4_addr_ntoh(vapi_msg_dslite_get_b4_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_b4_addr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_dslite_get_b4_addr_msg_size(vapi_msg_dslite_get_b4_addr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_dslite_get_b4_addr* vapi_alloc_dslite_get_b4_addr(struct vapi_ctx_s *ctx)
{
  vapi_msg_dslite_get_b4_addr *msg = NULL;
  const size_t size = sizeof(vapi_msg_dslite_get_b4_addr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_dslite_get_b4_addr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_dslite_get_b4_addr);

  return msg;
}

static inline vapi_error_e vapi_dslite_get_b4_addr(struct vapi_ctx_s *ctx,
  vapi_msg_dslite_get_b4_addr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_dslite_get_b4_addr_reply *reply),
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
  vapi_msg_dslite_get_b4_addr_hton(msg);
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
    vapi_msg_dslite_get_b4_addr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_dslite_get_b4_addr()
{
  static const char name[] = "dslite_get_b4_addr";
  static const char name_with_crc[] = "dslite_get_b4_addr_51077d14";
  static vapi_message_desc_t __vapi_metadata_dslite_get_b4_addr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_dslite_get_b4_addr),
    (generic_swap_fn_t)vapi_msg_dslite_get_b4_addr_hton,
    (generic_swap_fn_t)vapi_msg_dslite_get_b4_addr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_get_b4_addr = vapi_register_msg(&__vapi_metadata_dslite_get_b4_addr);
  VAPI_DBG("Assigned msg id %d to dslite_get_b4_addr", vapi_msg_id_dslite_get_b4_addr);
}
#endif

#ifndef defined_vapi_msg_nat44_interface_output_feature_details
#define defined_vapi_msg_nat44_interface_output_feature_details
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat44_interface_output_feature_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_interface_output_feature_details payload;
} vapi_msg_nat44_interface_output_feature_details;

static inline void vapi_msg_nat44_interface_output_feature_details_payload_hton(vapi_payload_nat44_interface_output_feature_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_output_feature_details_payload_ntoh(vapi_payload_nat44_interface_output_feature_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_output_feature_details_hton(vapi_msg_nat44_interface_output_feature_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_output_feature_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_interface_output_feature_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_interface_output_feature_details_ntoh(vapi_msg_nat44_interface_output_feature_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_output_feature_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_interface_output_feature_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_interface_output_feature_details_msg_size(vapi_msg_nat44_interface_output_feature_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_interface_output_feature_details()
{
  static const char name[] = "nat44_interface_output_feature_details";
  static const char name_with_crc[] = "nat44_interface_output_feature_details_c363a3de";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_output_feature_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_interface_output_feature_details, payload),
    sizeof(vapi_msg_nat44_interface_output_feature_details),
    (generic_swap_fn_t)vapi_msg_nat44_interface_output_feature_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_output_feature_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_output_feature_details = vapi_register_msg(&__vapi_metadata_nat44_interface_output_feature_details);
  VAPI_DBG("Assigned msg id %d to nat44_interface_output_feature_details", vapi_msg_id_nat44_interface_output_feature_details);
}

static inline void vapi_set_vapi_msg_nat44_interface_output_feature_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_interface_output_feature_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_interface_output_feature_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_interface_output_feature_dump
#define defined_vapi_msg_nat44_interface_output_feature_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_interface_output_feature_dump;

static inline void vapi_msg_nat44_interface_output_feature_dump_hton(vapi_msg_nat44_interface_output_feature_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_output_feature_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_interface_output_feature_dump_ntoh(vapi_msg_nat44_interface_output_feature_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_output_feature_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_interface_output_feature_dump_msg_size(vapi_msg_nat44_interface_output_feature_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_interface_output_feature_dump* vapi_alloc_nat44_interface_output_feature_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_interface_output_feature_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_interface_output_feature_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_interface_output_feature_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_interface_output_feature_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_interface_output_feature_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_interface_output_feature_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_interface_output_feature_details *reply),
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
  vapi_msg_nat44_interface_output_feature_dump_hton(msg);
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
    vapi_msg_nat44_interface_output_feature_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_interface_output_feature_dump()
{
  static const char name[] = "nat44_interface_output_feature_dump";
  static const char name_with_crc[] = "nat44_interface_output_feature_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_output_feature_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_interface_output_feature_dump),
    (generic_swap_fn_t)vapi_msg_nat44_interface_output_feature_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_output_feature_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_output_feature_dump = vapi_register_msg(&__vapi_metadata_nat44_interface_output_feature_dump);
  VAPI_DBG("Assigned msg id %d to nat44_interface_output_feature_dump", vapi_msg_id_nat44_interface_output_feature_dump);
}
#endif

#ifndef defined_vapi_msg_nat_ha_get_listener_reply
#define defined_vapi_msg_nat_ha_get_listener_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_ip4_address ip_address;
  u16 port;
  u32 path_mtu; 
} vapi_payload_nat_ha_get_listener_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_ha_get_listener_reply payload;
} vapi_msg_nat_ha_get_listener_reply;

static inline void vapi_msg_nat_ha_get_listener_reply_payload_hton(vapi_payload_nat_ha_get_listener_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->port = htobe16(payload->port);
  payload->path_mtu = htobe32(payload->path_mtu);
}

static inline void vapi_msg_nat_ha_get_listener_reply_payload_ntoh(vapi_payload_nat_ha_get_listener_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->port = be16toh(payload->port);
  payload->path_mtu = be32toh(payload->path_mtu);
}

static inline void vapi_msg_nat_ha_get_listener_reply_hton(vapi_msg_nat_ha_get_listener_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_listener_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_ha_get_listener_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_get_listener_reply_ntoh(vapi_msg_nat_ha_get_listener_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_listener_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_ha_get_listener_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_get_listener_reply_msg_size(vapi_msg_nat_ha_get_listener_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ha_get_listener_reply()
{
  static const char name[] = "nat_ha_get_listener_reply";
  static const char name_with_crc[] = "nat_ha_get_listener_reply_fb8786ad";
  static vapi_message_desc_t __vapi_metadata_nat_ha_get_listener_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_ha_get_listener_reply, payload),
    sizeof(vapi_msg_nat_ha_get_listener_reply),
    (generic_swap_fn_t)vapi_msg_nat_ha_get_listener_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_get_listener_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_get_listener_reply = vapi_register_msg(&__vapi_metadata_nat_ha_get_listener_reply);
  VAPI_DBG("Assigned msg id %d to nat_ha_get_listener_reply", vapi_msg_id_nat_ha_get_listener_reply);
}

static inline void vapi_set_vapi_msg_nat_ha_get_listener_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ha_get_listener_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ha_get_listener_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_get_addr_and_port_alloc_alg_reply
#define defined_vapi_msg_nat_get_addr_and_port_alloc_alg_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 alg;
  u8 psid_offset;
  u8 psid_length;
  u16 psid;
  u16 start_port;
  u16 end_port; 
} vapi_payload_nat_get_addr_and_port_alloc_alg_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_get_addr_and_port_alloc_alg_reply payload;
} vapi_msg_nat_get_addr_and_port_alloc_alg_reply;

static inline void vapi_msg_nat_get_addr_and_port_alloc_alg_reply_payload_hton(vapi_payload_nat_get_addr_and_port_alloc_alg_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->psid = htobe16(payload->psid);
  payload->start_port = htobe16(payload->start_port);
  payload->end_port = htobe16(payload->end_port);
}

static inline void vapi_msg_nat_get_addr_and_port_alloc_alg_reply_payload_ntoh(vapi_payload_nat_get_addr_and_port_alloc_alg_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->psid = be16toh(payload->psid);
  payload->start_port = be16toh(payload->start_port);
  payload->end_port = be16toh(payload->end_port);
}

static inline void vapi_msg_nat_get_addr_and_port_alloc_alg_reply_hton(vapi_msg_nat_get_addr_and_port_alloc_alg_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_addr_and_port_alloc_alg_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_get_addr_and_port_alloc_alg_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_get_addr_and_port_alloc_alg_reply_ntoh(vapi_msg_nat_get_addr_and_port_alloc_alg_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_addr_and_port_alloc_alg_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_get_addr_and_port_alloc_alg_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_get_addr_and_port_alloc_alg_reply_msg_size(vapi_msg_nat_get_addr_and_port_alloc_alg_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_get_addr_and_port_alloc_alg_reply()
{
  static const char name[] = "nat_get_addr_and_port_alloc_alg_reply";
  static const char name_with_crc[] = "nat_get_addr_and_port_alloc_alg_reply_3607a7d0";
  static vapi_message_desc_t __vapi_metadata_nat_get_addr_and_port_alloc_alg_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_get_addr_and_port_alloc_alg_reply, payload),
    sizeof(vapi_msg_nat_get_addr_and_port_alloc_alg_reply),
    (generic_swap_fn_t)vapi_msg_nat_get_addr_and_port_alloc_alg_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_addr_and_port_alloc_alg_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply = vapi_register_msg(&__vapi_metadata_nat_get_addr_and_port_alloc_alg_reply);
  VAPI_DBG("Assigned msg id %d to nat_get_addr_and_port_alloc_alg_reply", vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply);
}

static inline void vapi_set_vapi_msg_nat_get_addr_and_port_alloc_alg_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_get_addr_and_port_alloc_alg_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_get_timeouts_reply
#define defined_vapi_msg_nat_get_timeouts_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 udp;
  u32 tcp_established;
  u32 tcp_transitory;
  u32 icmp; 
} vapi_payload_nat_get_timeouts_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_get_timeouts_reply payload;
} vapi_msg_nat_get_timeouts_reply;

static inline void vapi_msg_nat_get_timeouts_reply_payload_hton(vapi_payload_nat_get_timeouts_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->udp = htobe32(payload->udp);
  payload->tcp_established = htobe32(payload->tcp_established);
  payload->tcp_transitory = htobe32(payload->tcp_transitory);
  payload->icmp = htobe32(payload->icmp);
}

static inline void vapi_msg_nat_get_timeouts_reply_payload_ntoh(vapi_payload_nat_get_timeouts_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->udp = be32toh(payload->udp);
  payload->tcp_established = be32toh(payload->tcp_established);
  payload->tcp_transitory = be32toh(payload->tcp_transitory);
  payload->icmp = be32toh(payload->icmp);
}

static inline void vapi_msg_nat_get_timeouts_reply_hton(vapi_msg_nat_get_timeouts_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_timeouts_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_get_timeouts_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_get_timeouts_reply_ntoh(vapi_msg_nat_get_timeouts_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_timeouts_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_get_timeouts_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_get_timeouts_reply_msg_size(vapi_msg_nat_get_timeouts_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_get_timeouts_reply()
{
  static const char name[] = "nat_get_timeouts_reply";
  static const char name_with_crc[] = "nat_get_timeouts_reply_3c4df4e1";
  static vapi_message_desc_t __vapi_metadata_nat_get_timeouts_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_get_timeouts_reply, payload),
    sizeof(vapi_msg_nat_get_timeouts_reply),
    (generic_swap_fn_t)vapi_msg_nat_get_timeouts_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_timeouts_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_timeouts_reply = vapi_register_msg(&__vapi_metadata_nat_get_timeouts_reply);
  VAPI_DBG("Assigned msg id %d to nat_get_timeouts_reply", vapi_msg_id_nat_get_timeouts_reply);
}

static inline void vapi_set_vapi_msg_nat_get_timeouts_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_get_timeouts_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_get_timeouts_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_get_reass_reply
#define defined_vapi_msg_nat_get_reass_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 ip4_timeout;
  u16 ip4_max_reass;
  u8 ip4_max_frag;
  u8 ip4_drop_frag;
  u32 ip6_timeout;
  u16 ip6_max_reass;
  u8 ip6_max_frag;
  u8 ip6_drop_frag; 
} vapi_payload_nat_get_reass_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_get_reass_reply payload;
} vapi_msg_nat_get_reass_reply;

static inline void vapi_msg_nat_get_reass_reply_payload_hton(vapi_payload_nat_get_reass_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->ip4_timeout = htobe32(payload->ip4_timeout);
  payload->ip4_max_reass = htobe16(payload->ip4_max_reass);
  payload->ip6_timeout = htobe32(payload->ip6_timeout);
  payload->ip6_max_reass = htobe16(payload->ip6_max_reass);
}

static inline void vapi_msg_nat_get_reass_reply_payload_ntoh(vapi_payload_nat_get_reass_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->ip4_timeout = be32toh(payload->ip4_timeout);
  payload->ip4_max_reass = be16toh(payload->ip4_max_reass);
  payload->ip6_timeout = be32toh(payload->ip6_timeout);
  payload->ip6_max_reass = be16toh(payload->ip6_max_reass);
}

static inline void vapi_msg_nat_get_reass_reply_hton(vapi_msg_nat_get_reass_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_reass_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_get_reass_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_get_reass_reply_ntoh(vapi_msg_nat_get_reass_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_reass_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_get_reass_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_get_reass_reply_msg_size(vapi_msg_nat_get_reass_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_get_reass_reply()
{
  static const char name[] = "nat_get_reass_reply";
  static const char name_with_crc[] = "nat_get_reass_reply_8102a0fb";
  static vapi_message_desc_t __vapi_metadata_nat_get_reass_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_get_reass_reply, payload),
    sizeof(vapi_msg_nat_get_reass_reply),
    (generic_swap_fn_t)vapi_msg_nat_get_reass_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_reass_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_reass_reply = vapi_register_msg(&__vapi_metadata_nat_get_reass_reply);
  VAPI_DBG("Assigned msg id %d to nat_get_reass_reply", vapi_msg_id_nat_get_reass_reply);
}

static inline void vapi_set_vapi_msg_nat_get_reass_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_get_reass_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_get_reass_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_get_reass
#define defined_vapi_msg_nat_get_reass
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_get_reass;

static inline void vapi_msg_nat_get_reass_hton(vapi_msg_nat_get_reass *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_reass'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_get_reass_ntoh(vapi_msg_nat_get_reass *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_reass'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_get_reass_msg_size(vapi_msg_nat_get_reass *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_get_reass* vapi_alloc_nat_get_reass(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_get_reass *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_get_reass);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_get_reass*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_get_reass);

  return msg;
}

static inline vapi_error_e vapi_nat_get_reass(struct vapi_ctx_s *ctx,
  vapi_msg_nat_get_reass *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_get_reass_reply *reply),
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
  vapi_msg_nat_get_reass_hton(msg);
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
    vapi_msg_nat_get_reass_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_get_reass()
{
  static const char name[] = "nat_get_reass";
  static const char name_with_crc[] = "nat_get_reass_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_get_reass = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_get_reass),
    (generic_swap_fn_t)vapi_msg_nat_get_reass_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_reass_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_reass = vapi_register_msg(&__vapi_metadata_nat_get_reass);
  VAPI_DBG("Assigned msg id %d to nat_get_reass", vapi_msg_id_nat_get_reass);
}
#endif

#ifndef defined_vapi_msg_nat_get_timeouts
#define defined_vapi_msg_nat_get_timeouts
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_get_timeouts;

static inline void vapi_msg_nat_get_timeouts_hton(vapi_msg_nat_get_timeouts *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_timeouts'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_get_timeouts_ntoh(vapi_msg_nat_get_timeouts *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_timeouts'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_get_timeouts_msg_size(vapi_msg_nat_get_timeouts *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_get_timeouts* vapi_alloc_nat_get_timeouts(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_get_timeouts *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_get_timeouts);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_get_timeouts*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_get_timeouts);

  return msg;
}

static inline vapi_error_e vapi_nat_get_timeouts(struct vapi_ctx_s *ctx,
  vapi_msg_nat_get_timeouts *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_get_timeouts_reply *reply),
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
  vapi_msg_nat_get_timeouts_hton(msg);
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
    vapi_msg_nat_get_timeouts_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_get_timeouts()
{
  static const char name[] = "nat_get_timeouts";
  static const char name_with_crc[] = "nat_get_timeouts_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_get_timeouts = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_get_timeouts),
    (generic_swap_fn_t)vapi_msg_nat_get_timeouts_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_timeouts_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_timeouts = vapi_register_msg(&__vapi_metadata_nat_get_timeouts);
  VAPI_DBG("Assigned msg id %d to nat_get_timeouts", vapi_msg_id_nat_get_timeouts);
}
#endif

#ifndef defined_vapi_msg_nat_ha_get_listener
#define defined_vapi_msg_nat_ha_get_listener
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_ha_get_listener;

static inline void vapi_msg_nat_ha_get_listener_hton(vapi_msg_nat_ha_get_listener *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_listener'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_ha_get_listener_ntoh(vapi_msg_nat_ha_get_listener *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_listener'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_ha_get_listener_msg_size(vapi_msg_nat_ha_get_listener *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_ha_get_listener* vapi_alloc_nat_ha_get_listener(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_ha_get_listener *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_ha_get_listener);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_ha_get_listener*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_ha_get_listener);

  return msg;
}

static inline vapi_error_e vapi_nat_ha_get_listener(struct vapi_ctx_s *ctx,
  vapi_msg_nat_ha_get_listener *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_ha_get_listener_reply *reply),
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
  vapi_msg_nat_ha_get_listener_hton(msg);
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
    vapi_msg_nat_ha_get_listener_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_ha_get_listener()
{
  static const char name[] = "nat_ha_get_listener";
  static const char name_with_crc[] = "nat_ha_get_listener_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_ha_get_listener = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_ha_get_listener),
    (generic_swap_fn_t)vapi_msg_nat_ha_get_listener_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_get_listener_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_get_listener = vapi_register_msg(&__vapi_metadata_nat_ha_get_listener);
  VAPI_DBG("Assigned msg id %d to nat_ha_get_listener", vapi_msg_id_nat_ha_get_listener);
}
#endif

#ifndef defined_vapi_msg_nat_det_session_details
#define defined_vapi_msg_nat_det_session_details
typedef struct __attribute__ ((__packed__)) {
  u16 in_port;
  vapi_type_ip4_address ext_addr;
  u16 ext_port;
  u16 out_port;
  u8 state;
  u32 expire; 
} vapi_payload_nat_det_session_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_det_session_details payload;
} vapi_msg_nat_det_session_details;

static inline void vapi_msg_nat_det_session_details_payload_hton(vapi_payload_nat_det_session_details *payload)
{
  payload->in_port = htobe16(payload->in_port);
  payload->ext_port = htobe16(payload->ext_port);
  payload->out_port = htobe16(payload->out_port);
  payload->expire = htobe32(payload->expire);
}

static inline void vapi_msg_nat_det_session_details_payload_ntoh(vapi_payload_nat_det_session_details *payload)
{
  payload->in_port = be16toh(payload->in_port);
  payload->ext_port = be16toh(payload->ext_port);
  payload->out_port = be16toh(payload->out_port);
  payload->expire = be32toh(payload->expire);
}

static inline void vapi_msg_nat_det_session_details_hton(vapi_msg_nat_det_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_session_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_det_session_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_session_details_ntoh(vapi_msg_nat_det_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_session_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_det_session_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_session_details_msg_size(vapi_msg_nat_det_session_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_det_session_details()
{
  static const char name[] = "nat_det_session_details";
  static const char name_with_crc[] = "nat_det_session_details_31da0ce5";
  static vapi_message_desc_t __vapi_metadata_nat_det_session_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_det_session_details, payload),
    sizeof(vapi_msg_nat_det_session_details),
    (generic_swap_fn_t)vapi_msg_nat_det_session_details_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_session_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_session_details = vapi_register_msg(&__vapi_metadata_nat_det_session_details);
  VAPI_DBG("Assigned msg id %d to nat_det_session_details", vapi_msg_id_nat_det_session_details);
}

static inline void vapi_set_vapi_msg_nat_det_session_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_det_session_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_det_session_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_interface_add_del_feature_reply
#define defined_vapi_msg_nat44_interface_add_del_feature_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_interface_add_del_feature_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_interface_add_del_feature_reply payload;
} vapi_msg_nat44_interface_add_del_feature_reply;

static inline void vapi_msg_nat44_interface_add_del_feature_reply_payload_hton(vapi_payload_nat44_interface_add_del_feature_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_interface_add_del_feature_reply_payload_ntoh(vapi_payload_nat44_interface_add_del_feature_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_interface_add_del_feature_reply_hton(vapi_msg_nat44_interface_add_del_feature_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_feature_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_interface_add_del_feature_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_interface_add_del_feature_reply_ntoh(vapi_msg_nat44_interface_add_del_feature_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_feature_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_interface_add_del_feature_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_interface_add_del_feature_reply_msg_size(vapi_msg_nat44_interface_add_del_feature_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_interface_add_del_feature_reply()
{
  static const char name[] = "nat44_interface_add_del_feature_reply";
  static const char name_with_crc[] = "nat44_interface_add_del_feature_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_add_del_feature_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_interface_add_del_feature_reply, payload),
    sizeof(vapi_msg_nat44_interface_add_del_feature_reply),
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_feature_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_feature_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_add_del_feature_reply = vapi_register_msg(&__vapi_metadata_nat44_interface_add_del_feature_reply);
  VAPI_DBG("Assigned msg id %d to nat44_interface_add_del_feature_reply", vapi_msg_id_nat44_interface_add_del_feature_reply);
}

static inline void vapi_set_vapi_msg_nat44_interface_add_del_feature_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_interface_add_del_feature_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_interface_add_del_feature_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_timeouts_reply
#define defined_vapi_msg_nat_set_timeouts_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_set_timeouts_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_set_timeouts_reply payload;
} vapi_msg_nat_set_timeouts_reply;

static inline void vapi_msg_nat_set_timeouts_reply_payload_hton(vapi_payload_nat_set_timeouts_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_set_timeouts_reply_payload_ntoh(vapi_payload_nat_set_timeouts_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_set_timeouts_reply_hton(vapi_msg_nat_set_timeouts_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_timeouts_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_set_timeouts_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_timeouts_reply_ntoh(vapi_msg_nat_set_timeouts_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_timeouts_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_set_timeouts_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_timeouts_reply_msg_size(vapi_msg_nat_set_timeouts_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_set_timeouts_reply()
{
  static const char name[] = "nat_set_timeouts_reply";
  static const char name_with_crc[] = "nat_set_timeouts_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_set_timeouts_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_set_timeouts_reply, payload),
    sizeof(vapi_msg_nat_set_timeouts_reply),
    (generic_swap_fn_t)vapi_msg_nat_set_timeouts_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_timeouts_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_timeouts_reply = vapi_register_msg(&__vapi_metadata_nat_set_timeouts_reply);
  VAPI_DBG("Assigned msg id %d to nat_set_timeouts_reply", vapi_msg_id_nat_set_timeouts_reply);
}

static inline void vapi_set_vapi_msg_nat_set_timeouts_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_set_timeouts_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_set_timeouts_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_timeouts
#define defined_vapi_msg_nat_set_timeouts
typedef struct __attribute__ ((__packed__)) {
  u32 udp;
  u32 tcp_established;
  u32 tcp_transitory;
  u32 icmp; 
} vapi_payload_nat_set_timeouts;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_set_timeouts payload;
} vapi_msg_nat_set_timeouts;

static inline void vapi_msg_nat_set_timeouts_payload_hton(vapi_payload_nat_set_timeouts *payload)
{
  payload->udp = htobe32(payload->udp);
  payload->tcp_established = htobe32(payload->tcp_established);
  payload->tcp_transitory = htobe32(payload->tcp_transitory);
  payload->icmp = htobe32(payload->icmp);
}

static inline void vapi_msg_nat_set_timeouts_payload_ntoh(vapi_payload_nat_set_timeouts *payload)
{
  payload->udp = be32toh(payload->udp);
  payload->tcp_established = be32toh(payload->tcp_established);
  payload->tcp_transitory = be32toh(payload->tcp_transitory);
  payload->icmp = be32toh(payload->icmp);
}

static inline void vapi_msg_nat_set_timeouts_hton(vapi_msg_nat_set_timeouts *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_timeouts'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_set_timeouts_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_timeouts_ntoh(vapi_msg_nat_set_timeouts *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_timeouts'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_set_timeouts_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_timeouts_msg_size(vapi_msg_nat_set_timeouts *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_set_timeouts* vapi_alloc_nat_set_timeouts(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_set_timeouts *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_set_timeouts);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_set_timeouts*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_set_timeouts);

  return msg;
}

static inline vapi_error_e vapi_nat_set_timeouts(struct vapi_ctx_s *ctx,
  vapi_msg_nat_set_timeouts *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_set_timeouts_reply *reply),
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
  vapi_msg_nat_set_timeouts_hton(msg);
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
    vapi_msg_nat_set_timeouts_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_set_timeouts()
{
  static const char name[] = "nat_set_timeouts";
  static const char name_with_crc[] = "nat_set_timeouts_d4746b16";
  static vapi_message_desc_t __vapi_metadata_nat_set_timeouts = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_set_timeouts, payload),
    sizeof(vapi_msg_nat_set_timeouts),
    (generic_swap_fn_t)vapi_msg_nat_set_timeouts_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_timeouts_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_timeouts = vapi_register_msg(&__vapi_metadata_nat_set_timeouts);
  VAPI_DBG("Assigned msg id %d to nat_set_timeouts", vapi_msg_id_nat_set_timeouts);
}
#endif

#ifndef defined_vapi_msg_nat_det_forward_reply
#define defined_vapi_msg_nat_det_forward_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u16 out_port_lo;
  u16 out_port_hi;
  vapi_type_ip4_address out_addr; 
} vapi_payload_nat_det_forward_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_det_forward_reply payload;
} vapi_msg_nat_det_forward_reply;

static inline void vapi_msg_nat_det_forward_reply_payload_hton(vapi_payload_nat_det_forward_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->out_port_lo = htobe16(payload->out_port_lo);
  payload->out_port_hi = htobe16(payload->out_port_hi);
}

static inline void vapi_msg_nat_det_forward_reply_payload_ntoh(vapi_payload_nat_det_forward_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->out_port_lo = be16toh(payload->out_port_lo);
  payload->out_port_hi = be16toh(payload->out_port_hi);
}

static inline void vapi_msg_nat_det_forward_reply_hton(vapi_msg_nat_det_forward_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_forward_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_det_forward_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_forward_reply_ntoh(vapi_msg_nat_det_forward_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_forward_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_det_forward_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_forward_reply_msg_size(vapi_msg_nat_det_forward_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_det_forward_reply()
{
  static const char name[] = "nat_det_forward_reply";
  static const char name_with_crc[] = "nat_det_forward_reply_d64bcb1b";
  static vapi_message_desc_t __vapi_metadata_nat_det_forward_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_det_forward_reply, payload),
    sizeof(vapi_msg_nat_det_forward_reply),
    (generic_swap_fn_t)vapi_msg_nat_det_forward_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_forward_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_forward_reply = vapi_register_msg(&__vapi_metadata_nat_det_forward_reply);
  VAPI_DBG("Assigned msg id %d to nat_det_forward_reply", vapi_msg_id_nat_det_forward_reply);
}

static inline void vapi_set_vapi_msg_nat_det_forward_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_det_forward_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_det_forward_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_det_forward
#define defined_vapi_msg_nat_det_forward
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address in_addr; 
} vapi_payload_nat_det_forward;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_det_forward payload;
} vapi_msg_nat_det_forward;

static inline void vapi_msg_nat_det_forward_payload_hton(vapi_payload_nat_det_forward *payload)
{

}

static inline void vapi_msg_nat_det_forward_payload_ntoh(vapi_payload_nat_det_forward *payload)
{

}

static inline void vapi_msg_nat_det_forward_hton(vapi_msg_nat_det_forward *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_forward'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_det_forward_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_forward_ntoh(vapi_msg_nat_det_forward *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_forward'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_det_forward_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_forward_msg_size(vapi_msg_nat_det_forward *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_det_forward* vapi_alloc_nat_det_forward(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_det_forward *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_det_forward);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_det_forward*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_det_forward);

  return msg;
}

static inline vapi_error_e vapi_nat_det_forward(struct vapi_ctx_s *ctx,
  vapi_msg_nat_det_forward *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_det_forward_reply *reply),
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
  vapi_msg_nat_det_forward_hton(msg);
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
    vapi_msg_nat_det_forward_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_det_forward()
{
  static const char name[] = "nat_det_forward";
  static const char name_with_crc[] = "nat_det_forward_347c6d3e";
  static vapi_message_desc_t __vapi_metadata_nat_det_forward = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_det_forward, payload),
    sizeof(vapi_msg_nat_det_forward),
    (generic_swap_fn_t)vapi_msg_nat_det_forward_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_forward_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_forward = vapi_register_msg(&__vapi_metadata_nat_det_forward);
  VAPI_DBG("Assigned msg id %d to nat_det_forward", vapi_msg_id_nat_det_forward);
}
#endif

#ifndef defined_vapi_msg_nat_worker_details
#define defined_vapi_msg_nat_worker_details
typedef struct __attribute__ ((__packed__)) {
  u32 worker_index;
  u32 lcore_id;
  vl_api_string_t name; 
} vapi_payload_nat_worker_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_worker_details payload;
} vapi_msg_nat_worker_details;

static inline void vapi_msg_nat_worker_details_payload_hton(vapi_payload_nat_worker_details *payload)
{
  payload->worker_index = htobe32(payload->worker_index);
  payload->lcore_id = htobe32(payload->lcore_id);
}

static inline void vapi_msg_nat_worker_details_payload_ntoh(vapi_payload_nat_worker_details *payload)
{
  payload->worker_index = be32toh(payload->worker_index);
  payload->lcore_id = be32toh(payload->lcore_id);
}

static inline void vapi_msg_nat_worker_details_hton(vapi_msg_nat_worker_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_worker_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_worker_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_worker_details_ntoh(vapi_msg_nat_worker_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_worker_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_worker_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_worker_details_msg_size(vapi_msg_nat_worker_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_worker_details()
{
  static const char name[] = "nat_worker_details";
  static const char name_with_crc[] = "nat_worker_details_9922dabd";
  static vapi_message_desc_t __vapi_metadata_nat_worker_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_worker_details, payload),
    sizeof(vapi_msg_nat_worker_details),
    (generic_swap_fn_t)vapi_msg_nat_worker_details_hton,
    (generic_swap_fn_t)vapi_msg_nat_worker_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_worker_details = vapi_register_msg(&__vapi_metadata_nat_worker_details);
  VAPI_DBG("Assigned msg id %d to nat_worker_details", vapi_msg_id_nat_worker_details);
}

static inline void vapi_set_vapi_msg_nat_worker_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_worker_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_worker_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_worker_dump
#define defined_vapi_msg_nat_worker_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_worker_dump;

static inline void vapi_msg_nat_worker_dump_hton(vapi_msg_nat_worker_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_worker_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_worker_dump_ntoh(vapi_msg_nat_worker_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_worker_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_worker_dump_msg_size(vapi_msg_nat_worker_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_worker_dump* vapi_alloc_nat_worker_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_worker_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_worker_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_worker_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_worker_dump);

  return msg;
}

static inline vapi_error_e vapi_nat_worker_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat_worker_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_worker_details *reply),
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
  vapi_msg_nat_worker_dump_hton(msg);
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
    vapi_msg_nat_worker_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_worker_dump()
{
  static const char name[] = "nat_worker_dump";
  static const char name_with_crc[] = "nat_worker_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_worker_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_worker_dump),
    (generic_swap_fn_t)vapi_msg_nat_worker_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat_worker_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_worker_dump = vapi_register_msg(&__vapi_metadata_nat_worker_dump);
  VAPI_DBG("Assigned msg id %d to nat_worker_dump", vapi_msg_id_nat_worker_dump);
}
#endif

#ifndef defined_vapi_msg_nat44_forwarding_is_enabled_reply
#define defined_vapi_msg_nat44_forwarding_is_enabled_reply
typedef struct __attribute__ ((__packed__)) {
  bool enabled; 
} vapi_payload_nat44_forwarding_is_enabled_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_forwarding_is_enabled_reply payload;
} vapi_msg_nat44_forwarding_is_enabled_reply;

static inline void vapi_msg_nat44_forwarding_is_enabled_reply_payload_hton(vapi_payload_nat44_forwarding_is_enabled_reply *payload)
{

}

static inline void vapi_msg_nat44_forwarding_is_enabled_reply_payload_ntoh(vapi_payload_nat44_forwarding_is_enabled_reply *payload)
{

}

static inline void vapi_msg_nat44_forwarding_is_enabled_reply_hton(vapi_msg_nat44_forwarding_is_enabled_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_is_enabled_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_forwarding_is_enabled_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_forwarding_is_enabled_reply_ntoh(vapi_msg_nat44_forwarding_is_enabled_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_is_enabled_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_forwarding_is_enabled_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_forwarding_is_enabled_reply_msg_size(vapi_msg_nat44_forwarding_is_enabled_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_forwarding_is_enabled_reply()
{
  static const char name[] = "nat44_forwarding_is_enabled_reply";
  static const char name_with_crc[] = "nat44_forwarding_is_enabled_reply_46924a06";
  static vapi_message_desc_t __vapi_metadata_nat44_forwarding_is_enabled_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_forwarding_is_enabled_reply, payload),
    sizeof(vapi_msg_nat44_forwarding_is_enabled_reply),
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_is_enabled_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_is_enabled_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_forwarding_is_enabled_reply = vapi_register_msg(&__vapi_metadata_nat44_forwarding_is_enabled_reply);
  VAPI_DBG("Assigned msg id %d to nat44_forwarding_is_enabled_reply", vapi_msg_id_nat44_forwarding_is_enabled_reply);
}

static inline void vapi_set_vapi_msg_nat44_forwarding_is_enabled_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_forwarding_is_enabled_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_forwarding_is_enabled_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_static_mapping_dump
#define defined_vapi_msg_nat44_static_mapping_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_static_mapping_dump;

static inline void vapi_msg_nat44_static_mapping_dump_hton(vapi_msg_nat44_static_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_static_mapping_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_static_mapping_dump_ntoh(vapi_msg_nat44_static_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_static_mapping_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_static_mapping_dump_msg_size(vapi_msg_nat44_static_mapping_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_static_mapping_dump* vapi_alloc_nat44_static_mapping_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_static_mapping_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_static_mapping_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_static_mapping_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_static_mapping_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_static_mapping_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_static_mapping_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_static_mapping_details *reply),
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
  vapi_msg_nat44_static_mapping_dump_hton(msg);
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
    vapi_msg_nat44_static_mapping_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_static_mapping_dump()
{
  static const char name[] = "nat44_static_mapping_dump";
  static const char name_with_crc[] = "nat44_static_mapping_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_static_mapping_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_static_mapping_dump),
    (generic_swap_fn_t)vapi_msg_nat44_static_mapping_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_static_mapping_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_static_mapping_dump = vapi_register_msg(&__vapi_metadata_nat44_static_mapping_dump);
  VAPI_DBG("Assigned msg id %d to nat44_static_mapping_dump", vapi_msg_id_nat44_static_mapping_dump);
}
#endif

#ifndef defined_vapi_msg_nat44_interface_addr_details
#define defined_vapi_msg_nat44_interface_addr_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  vapi_enum_nat_config_flags flags; 
} vapi_payload_nat44_interface_addr_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_interface_addr_details payload;
} vapi_msg_nat44_interface_addr_details;

static inline void vapi_msg_nat44_interface_addr_details_payload_hton(vapi_payload_nat44_interface_addr_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_addr_details_payload_ntoh(vapi_payload_nat44_interface_addr_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_addr_details_hton(vapi_msg_nat44_interface_addr_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_addr_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_interface_addr_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_interface_addr_details_ntoh(vapi_msg_nat44_interface_addr_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_addr_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_interface_addr_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_interface_addr_details_msg_size(vapi_msg_nat44_interface_addr_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_interface_addr_details()
{
  static const char name[] = "nat44_interface_addr_details";
  static const char name_with_crc[] = "nat44_interface_addr_details_053725cb";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_addr_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_interface_addr_details, payload),
    sizeof(vapi_msg_nat44_interface_addr_details),
    (generic_swap_fn_t)vapi_msg_nat44_interface_addr_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_addr_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_addr_details = vapi_register_msg(&__vapi_metadata_nat44_interface_addr_details);
  VAPI_DBG("Assigned msg id %d to nat44_interface_addr_details", vapi_msg_id_nat44_interface_addr_details);
}

static inline void vapi_set_vapi_msg_nat44_interface_addr_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_interface_addr_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_interface_addr_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_interface_addr_dump
#define defined_vapi_msg_nat44_interface_addr_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_interface_addr_dump;

static inline void vapi_msg_nat44_interface_addr_dump_hton(vapi_msg_nat44_interface_addr_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_addr_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_interface_addr_dump_ntoh(vapi_msg_nat44_interface_addr_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_addr_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_interface_addr_dump_msg_size(vapi_msg_nat44_interface_addr_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_interface_addr_dump* vapi_alloc_nat44_interface_addr_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_interface_addr_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_interface_addr_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_interface_addr_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_interface_addr_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_interface_addr_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_interface_addr_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_interface_addr_details *reply),
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
  vapi_msg_nat44_interface_addr_dump_hton(msg);
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
    vapi_msg_nat44_interface_addr_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_interface_addr_dump()
{
  static const char name[] = "nat44_interface_addr_dump";
  static const char name_with_crc[] = "nat44_interface_addr_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_addr_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_interface_addr_dump),
    (generic_swap_fn_t)vapi_msg_nat44_interface_addr_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_addr_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_addr_dump = vapi_register_msg(&__vapi_metadata_nat44_interface_addr_dump);
  VAPI_DBG("Assigned msg id %d to nat44_interface_addr_dump", vapi_msg_id_nat44_interface_addr_dump);
}
#endif

#ifndef defined_vapi_msg_nat_show_config_reply
#define defined_vapi_msg_nat_show_config_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  bool static_mapping_only;
  bool static_mapping_connection_tracking;
  bool deterministic;
  bool endpoint_dependent;
  bool out2in_dpo;
  bool dslite_ce;
  u32 translation_buckets;
  u32 translation_memory_size;
  u32 user_buckets;
  u32 user_memory_size;
  u32 max_translations_per_user;
  u32 outside_vrf_id;
  u32 inside_vrf_id;
  u32 nat64_bib_buckets;
  u32 nat64_bib_memory_size;
  u32 nat64_st_buckets;
  u32 nat64_st_memory_size; 
} vapi_payload_nat_show_config_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_show_config_reply payload;
} vapi_msg_nat_show_config_reply;

static inline void vapi_msg_nat_show_config_reply_payload_hton(vapi_payload_nat_show_config_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->translation_buckets = htobe32(payload->translation_buckets);
  payload->translation_memory_size = htobe32(payload->translation_memory_size);
  payload->user_buckets = htobe32(payload->user_buckets);
  payload->user_memory_size = htobe32(payload->user_memory_size);
  payload->max_translations_per_user = htobe32(payload->max_translations_per_user);
  payload->outside_vrf_id = htobe32(payload->outside_vrf_id);
  payload->inside_vrf_id = htobe32(payload->inside_vrf_id);
  payload->nat64_bib_buckets = htobe32(payload->nat64_bib_buckets);
  payload->nat64_bib_memory_size = htobe32(payload->nat64_bib_memory_size);
  payload->nat64_st_buckets = htobe32(payload->nat64_st_buckets);
  payload->nat64_st_memory_size = htobe32(payload->nat64_st_memory_size);
}

static inline void vapi_msg_nat_show_config_reply_payload_ntoh(vapi_payload_nat_show_config_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->translation_buckets = be32toh(payload->translation_buckets);
  payload->translation_memory_size = be32toh(payload->translation_memory_size);
  payload->user_buckets = be32toh(payload->user_buckets);
  payload->user_memory_size = be32toh(payload->user_memory_size);
  payload->max_translations_per_user = be32toh(payload->max_translations_per_user);
  payload->outside_vrf_id = be32toh(payload->outside_vrf_id);
  payload->inside_vrf_id = be32toh(payload->inside_vrf_id);
  payload->nat64_bib_buckets = be32toh(payload->nat64_bib_buckets);
  payload->nat64_bib_memory_size = be32toh(payload->nat64_bib_memory_size);
  payload->nat64_st_buckets = be32toh(payload->nat64_st_buckets);
  payload->nat64_st_memory_size = be32toh(payload->nat64_st_memory_size);
}

static inline void vapi_msg_nat_show_config_reply_hton(vapi_msg_nat_show_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_show_config_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_show_config_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_show_config_reply_ntoh(vapi_msg_nat_show_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_show_config_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_show_config_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_show_config_reply_msg_size(vapi_msg_nat_show_config_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_show_config_reply()
{
  static const char name[] = "nat_show_config_reply";
  static const char name_with_crc[] = "nat_show_config_reply_006a0786";
  static vapi_message_desc_t __vapi_metadata_nat_show_config_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_show_config_reply, payload),
    sizeof(vapi_msg_nat_show_config_reply),
    (generic_swap_fn_t)vapi_msg_nat_show_config_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_show_config_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_show_config_reply = vapi_register_msg(&__vapi_metadata_nat_show_config_reply);
  VAPI_DBG("Assigned msg id %d to nat_show_config_reply", vapi_msg_id_nat_show_config_reply);
}

static inline void vapi_set_vapi_msg_nat_show_config_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_show_config_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_show_config_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_add_del_lb_static_mapping_reply
#define defined_vapi_msg_nat44_add_del_lb_static_mapping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_add_del_lb_static_mapping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_add_del_lb_static_mapping_reply payload;
} vapi_msg_nat44_add_del_lb_static_mapping_reply;

static inline void vapi_msg_nat44_add_del_lb_static_mapping_reply_payload_hton(vapi_payload_nat44_add_del_lb_static_mapping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_add_del_lb_static_mapping_reply_payload_ntoh(vapi_payload_nat44_add_del_lb_static_mapping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_add_del_lb_static_mapping_reply_hton(vapi_msg_nat44_add_del_lb_static_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_lb_static_mapping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_add_del_lb_static_mapping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_lb_static_mapping_reply_ntoh(vapi_msg_nat44_add_del_lb_static_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_lb_static_mapping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_lb_static_mapping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_lb_static_mapping_reply_msg_size(vapi_msg_nat44_add_del_lb_static_mapping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_lb_static_mapping_reply()
{
  static const char name[] = "nat44_add_del_lb_static_mapping_reply";
  static const char name_with_crc[] = "nat44_add_del_lb_static_mapping_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_lb_static_mapping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_add_del_lb_static_mapping_reply, payload),
    sizeof(vapi_msg_nat44_add_del_lb_static_mapping_reply),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_lb_static_mapping_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_lb_static_mapping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_lb_static_mapping_reply = vapi_register_msg(&__vapi_metadata_nat44_add_del_lb_static_mapping_reply);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_lb_static_mapping_reply", vapi_msg_id_nat44_add_del_lb_static_mapping_reply);
}

static inline void vapi_set_vapi_msg_nat44_add_del_lb_static_mapping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_add_del_lb_static_mapping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_add_del_lb_static_mapping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_add_del_address_range_reply
#define defined_vapi_msg_nat44_add_del_address_range_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_add_del_address_range_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_add_del_address_range_reply payload;
} vapi_msg_nat44_add_del_address_range_reply;

static inline void vapi_msg_nat44_add_del_address_range_reply_payload_hton(vapi_payload_nat44_add_del_address_range_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_add_del_address_range_reply_payload_ntoh(vapi_payload_nat44_add_del_address_range_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_add_del_address_range_reply_hton(vapi_msg_nat44_add_del_address_range_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_address_range_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_add_del_address_range_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_address_range_reply_ntoh(vapi_msg_nat44_add_del_address_range_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_address_range_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_address_range_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_address_range_reply_msg_size(vapi_msg_nat44_add_del_address_range_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_address_range_reply()
{
  static const char name[] = "nat44_add_del_address_range_reply";
  static const char name_with_crc[] = "nat44_add_del_address_range_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_address_range_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_add_del_address_range_reply, payload),
    sizeof(vapi_msg_nat44_add_del_address_range_reply),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_address_range_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_address_range_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_address_range_reply = vapi_register_msg(&__vapi_metadata_nat44_add_del_address_range_reply);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_address_range_reply", vapi_msg_id_nat44_add_del_address_range_reply);
}

static inline void vapi_set_vapi_msg_nat44_add_del_address_range_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_add_del_address_range_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_add_del_address_range_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_del_session_reply
#define defined_vapi_msg_nat44_del_session_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_del_session_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_del_session_reply payload;
} vapi_msg_nat44_del_session_reply;

static inline void vapi_msg_nat44_del_session_reply_payload_hton(vapi_payload_nat44_del_session_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_del_session_reply_payload_ntoh(vapi_payload_nat44_del_session_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_del_session_reply_hton(vapi_msg_nat44_del_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_del_session_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_del_session_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_del_session_reply_ntoh(vapi_msg_nat44_del_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_del_session_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_del_session_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_del_session_reply_msg_size(vapi_msg_nat44_del_session_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_del_session_reply()
{
  static const char name[] = "nat44_del_session_reply";
  static const char name_with_crc[] = "nat44_del_session_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_del_session_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_del_session_reply, payload),
    sizeof(vapi_msg_nat44_del_session_reply),
    (generic_swap_fn_t)vapi_msg_nat44_del_session_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_del_session_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_del_session_reply = vapi_register_msg(&__vapi_metadata_nat44_del_session_reply);
  VAPI_DBG("Assigned msg id %d to nat44_del_session_reply", vapi_msg_id_nat44_del_session_reply);
}

static inline void vapi_set_vapi_msg_nat44_del_session_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_del_session_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_del_session_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_reass_details
#define defined_vapi_msg_nat_reass_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_address src_addr;
  vapi_type_address dst_addr;
  u32 frag_id;
  u8 proto;
  u8 frag_n; 
} vapi_payload_nat_reass_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_reass_details payload;
} vapi_msg_nat_reass_details;

static inline void vapi_msg_nat_reass_details_payload_hton(vapi_payload_nat_reass_details *payload)
{
  vapi_type_address_hton(&payload->src_addr);
  vapi_type_address_hton(&payload->dst_addr);
  payload->frag_id = htobe32(payload->frag_id);
}

static inline void vapi_msg_nat_reass_details_payload_ntoh(vapi_payload_nat_reass_details *payload)
{
  vapi_type_address_ntoh(&payload->src_addr);
  vapi_type_address_ntoh(&payload->dst_addr);
  payload->frag_id = be32toh(payload->frag_id);
}

static inline void vapi_msg_nat_reass_details_hton(vapi_msg_nat_reass_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_reass_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_reass_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_reass_details_ntoh(vapi_msg_nat_reass_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_reass_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_reass_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_reass_details_msg_size(vapi_msg_nat_reass_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_reass_details()
{
  static const char name[] = "nat_reass_details";
  static const char name_with_crc[] = "nat_reass_details_43dc3cc2";
  static vapi_message_desc_t __vapi_metadata_nat_reass_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_reass_details, payload),
    sizeof(vapi_msg_nat_reass_details),
    (generic_swap_fn_t)vapi_msg_nat_reass_details_hton,
    (generic_swap_fn_t)vapi_msg_nat_reass_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_reass_details = vapi_register_msg(&__vapi_metadata_nat_reass_details);
  VAPI_DBG("Assigned msg id %d to nat_reass_details", vapi_msg_id_nat_reass_details);
}

static inline void vapi_set_vapi_msg_nat_reass_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_reass_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_reass_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_reass_dump
#define defined_vapi_msg_nat_reass_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_reass_dump;

static inline void vapi_msg_nat_reass_dump_hton(vapi_msg_nat_reass_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_reass_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_reass_dump_ntoh(vapi_msg_nat_reass_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_reass_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_reass_dump_msg_size(vapi_msg_nat_reass_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_reass_dump* vapi_alloc_nat_reass_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_reass_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_reass_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_reass_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_reass_dump);

  return msg;
}

static inline vapi_error_e vapi_nat_reass_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat_reass_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_reass_details *reply),
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
  vapi_msg_nat_reass_dump_hton(msg);
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
    vapi_msg_nat_reass_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_reass_dump()
{
  static const char name[] = "nat_reass_dump";
  static const char name_with_crc[] = "nat_reass_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_reass_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_reass_dump),
    (generic_swap_fn_t)vapi_msg_nat_reass_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat_reass_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_reass_dump = vapi_register_msg(&__vapi_metadata_nat_reass_dump);
  VAPI_DBG("Assigned msg id %d to nat_reass_dump", vapi_msg_id_nat_reass_dump);
}
#endif

#ifndef defined_vapi_msg_dslite_address_details
#define defined_vapi_msg_dslite_address_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address ip_address; 
} vapi_payload_dslite_address_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_dslite_address_details payload;
} vapi_msg_dslite_address_details;

static inline void vapi_msg_dslite_address_details_payload_hton(vapi_payload_dslite_address_details *payload)
{

}

static inline void vapi_msg_dslite_address_details_payload_ntoh(vapi_payload_dslite_address_details *payload)
{

}

static inline void vapi_msg_dslite_address_details_hton(vapi_msg_dslite_address_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_address_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_dslite_address_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_address_details_ntoh(vapi_msg_dslite_address_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_address_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_dslite_address_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_address_details_msg_size(vapi_msg_dslite_address_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_dslite_address_details()
{
  static const char name[] = "dslite_address_details";
  static const char name_with_crc[] = "dslite_address_details_9ed18b19";
  static vapi_message_desc_t __vapi_metadata_dslite_address_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_dslite_address_details, payload),
    sizeof(vapi_msg_dslite_address_details),
    (generic_swap_fn_t)vapi_msg_dslite_address_details_hton,
    (generic_swap_fn_t)vapi_msg_dslite_address_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_address_details = vapi_register_msg(&__vapi_metadata_dslite_address_details);
  VAPI_DBG("Assigned msg id %d to dslite_address_details", vapi_msg_id_dslite_address_details);
}

static inline void vapi_set_vapi_msg_dslite_address_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_dslite_address_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_dslite_address_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_mss_clamping
#define defined_vapi_msg_nat_set_mss_clamping
typedef struct __attribute__ ((__packed__)) {
  u16 mss_value;
  bool enable; 
} vapi_payload_nat_set_mss_clamping;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_set_mss_clamping payload;
} vapi_msg_nat_set_mss_clamping;

static inline void vapi_msg_nat_set_mss_clamping_payload_hton(vapi_payload_nat_set_mss_clamping *payload)
{
  payload->mss_value = htobe16(payload->mss_value);
}

static inline void vapi_msg_nat_set_mss_clamping_payload_ntoh(vapi_payload_nat_set_mss_clamping *payload)
{
  payload->mss_value = be16toh(payload->mss_value);
}

static inline void vapi_msg_nat_set_mss_clamping_hton(vapi_msg_nat_set_mss_clamping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_mss_clamping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_set_mss_clamping_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_mss_clamping_ntoh(vapi_msg_nat_set_mss_clamping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_mss_clamping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_set_mss_clamping_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_mss_clamping_msg_size(vapi_msg_nat_set_mss_clamping *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_set_mss_clamping* vapi_alloc_nat_set_mss_clamping(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_set_mss_clamping *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_set_mss_clamping);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_set_mss_clamping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_set_mss_clamping);

  return msg;
}

static inline vapi_error_e vapi_nat_set_mss_clamping(struct vapi_ctx_s *ctx,
  vapi_msg_nat_set_mss_clamping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_set_mss_clamping_reply *reply),
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
  vapi_msg_nat_set_mss_clamping_hton(msg);
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
    vapi_msg_nat_set_mss_clamping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_set_mss_clamping()
{
  static const char name[] = "nat_set_mss_clamping";
  static const char name_with_crc[] = "nat_set_mss_clamping_25e90abb";
  static vapi_message_desc_t __vapi_metadata_nat_set_mss_clamping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_set_mss_clamping, payload),
    sizeof(vapi_msg_nat_set_mss_clamping),
    (generic_swap_fn_t)vapi_msg_nat_set_mss_clamping_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_mss_clamping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_mss_clamping = vapi_register_msg(&__vapi_metadata_nat_set_mss_clamping);
  VAPI_DBG("Assigned msg id %d to nat_set_mss_clamping", vapi_msg_id_nat_set_mss_clamping);
}
#endif

#ifndef defined_vapi_msg_nat64_add_del_static_bib_reply
#define defined_vapi_msg_nat64_add_del_static_bib_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat64_add_del_static_bib_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_add_del_static_bib_reply payload;
} vapi_msg_nat64_add_del_static_bib_reply;

static inline void vapi_msg_nat64_add_del_static_bib_reply_payload_hton(vapi_payload_nat64_add_del_static_bib_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat64_add_del_static_bib_reply_payload_ntoh(vapi_payload_nat64_add_del_static_bib_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat64_add_del_static_bib_reply_hton(vapi_msg_nat64_add_del_static_bib_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_static_bib_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_add_del_static_bib_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_static_bib_reply_ntoh(vapi_msg_nat64_add_del_static_bib_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_static_bib_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_static_bib_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_static_bib_reply_msg_size(vapi_msg_nat64_add_del_static_bib_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_static_bib_reply()
{
  static const char name[] = "nat64_add_del_static_bib_reply";
  static const char name_with_crc[] = "nat64_add_del_static_bib_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_static_bib_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_add_del_static_bib_reply, payload),
    sizeof(vapi_msg_nat64_add_del_static_bib_reply),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_static_bib_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_static_bib_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_static_bib_reply = vapi_register_msg(&__vapi_metadata_nat64_add_del_static_bib_reply);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_static_bib_reply", vapi_msg_id_nat64_add_del_static_bib_reply);
}

static inline void vapi_set_vapi_msg_nat64_add_del_static_bib_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_add_del_static_bib_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_add_del_static_bib_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_address_details
#define defined_vapi_msg_nat44_address_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address ip_address;
  vapi_enum_nat_config_flags flags;
  u32 vrf_id; 
} vapi_payload_nat44_address_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_address_details payload;
} vapi_msg_nat44_address_details;

static inline void vapi_msg_nat44_address_details_payload_hton(vapi_payload_nat44_address_details *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat44_address_details_payload_ntoh(vapi_payload_nat44_address_details *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat44_address_details_hton(vapi_msg_nat44_address_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_address_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_address_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_address_details_ntoh(vapi_msg_nat44_address_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_address_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_address_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_address_details_msg_size(vapi_msg_nat44_address_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_address_details()
{
  static const char name[] = "nat44_address_details";
  static const char name_with_crc[] = "nat44_address_details_5839c1a8";
  static vapi_message_desc_t __vapi_metadata_nat44_address_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_address_details, payload),
    sizeof(vapi_msg_nat44_address_details),
    (generic_swap_fn_t)vapi_msg_nat44_address_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_address_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_address_details = vapi_register_msg(&__vapi_metadata_nat44_address_details);
  VAPI_DBG("Assigned msg id %d to nat44_address_details", vapi_msg_id_nat44_address_details);
}

static inline void vapi_set_vapi_msg_nat44_address_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_address_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_address_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_dslite_get_aftr_addr_reply
#define defined_vapi_msg_dslite_get_aftr_addr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_ip4_address ip4_addr;
  vapi_type_ip6_address ip6_addr; 
} vapi_payload_dslite_get_aftr_addr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_dslite_get_aftr_addr_reply payload;
} vapi_msg_dslite_get_aftr_addr_reply;

static inline void vapi_msg_dslite_get_aftr_addr_reply_payload_hton(vapi_payload_dslite_get_aftr_addr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_dslite_get_aftr_addr_reply_payload_ntoh(vapi_payload_dslite_get_aftr_addr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_dslite_get_aftr_addr_reply_hton(vapi_msg_dslite_get_aftr_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_aftr_addr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_dslite_get_aftr_addr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_get_aftr_addr_reply_ntoh(vapi_msg_dslite_get_aftr_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_aftr_addr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_dslite_get_aftr_addr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_get_aftr_addr_reply_msg_size(vapi_msg_dslite_get_aftr_addr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_dslite_get_aftr_addr_reply()
{
  static const char name[] = "dslite_get_aftr_addr_reply";
  static const char name_with_crc[] = "dslite_get_aftr_addr_reply_c4b65514";
  static vapi_message_desc_t __vapi_metadata_dslite_get_aftr_addr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_dslite_get_aftr_addr_reply, payload),
    sizeof(vapi_msg_dslite_get_aftr_addr_reply),
    (generic_swap_fn_t)vapi_msg_dslite_get_aftr_addr_reply_hton,
    (generic_swap_fn_t)vapi_msg_dslite_get_aftr_addr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_get_aftr_addr_reply = vapi_register_msg(&__vapi_metadata_dslite_get_aftr_addr_reply);
  VAPI_DBG("Assigned msg id %d to dslite_get_aftr_addr_reply", vapi_msg_id_dslite_get_aftr_addr_reply);
}

static inline void vapi_set_vapi_msg_dslite_get_aftr_addr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_dslite_get_aftr_addr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_dslite_get_aftr_addr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_forwarding_enable_disable_reply
#define defined_vapi_msg_nat44_forwarding_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_forwarding_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_forwarding_enable_disable_reply payload;
} vapi_msg_nat44_forwarding_enable_disable_reply;

static inline void vapi_msg_nat44_forwarding_enable_disable_reply_payload_hton(vapi_payload_nat44_forwarding_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_forwarding_enable_disable_reply_payload_ntoh(vapi_payload_nat44_forwarding_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_forwarding_enable_disable_reply_hton(vapi_msg_nat44_forwarding_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_forwarding_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_forwarding_enable_disable_reply_ntoh(vapi_msg_nat44_forwarding_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_forwarding_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_forwarding_enable_disable_reply_msg_size(vapi_msg_nat44_forwarding_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_forwarding_enable_disable_reply()
{
  static const char name[] = "nat44_forwarding_enable_disable_reply";
  static const char name_with_crc[] = "nat44_forwarding_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_forwarding_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_forwarding_enable_disable_reply, payload),
    sizeof(vapi_msg_nat44_forwarding_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_forwarding_enable_disable_reply = vapi_register_msg(&__vapi_metadata_nat44_forwarding_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to nat44_forwarding_enable_disable_reply", vapi_msg_id_nat44_forwarding_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_nat44_forwarding_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_forwarding_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_forwarding_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_add_del_lb_static_mapping
#define defined_vapi_msg_nat44_add_del_lb_static_mapping
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_nat_config_flags flags;
  vapi_type_ip4_address external_addr;
  u16 external_port;
  u8 protocol;
  u32 affinity;
  u32 local_num;
  vapi_type_nat44_lb_addr_port locals[0];
  vl_api_string_t tag; 
} vapi_payload_nat44_add_del_lb_static_mapping;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_add_del_lb_static_mapping payload;
} vapi_msg_nat44_add_del_lb_static_mapping;

static inline void vapi_msg_nat44_add_del_lb_static_mapping_payload_hton(vapi_payload_nat44_add_del_lb_static_mapping *payload)
{
  payload->external_port = htobe16(payload->external_port);
  payload->affinity = htobe32(payload->affinity);
  payload->local_num = htobe32(payload->local_num);
  do { unsigned i; for (i = 0; i < be32toh(payload->local_num); ++i) { vapi_type_nat44_lb_addr_port_hton(&payload->locals[i]); } } while(0);
}

static inline void vapi_msg_nat44_add_del_lb_static_mapping_payload_ntoh(vapi_payload_nat44_add_del_lb_static_mapping *payload)
{
  payload->external_port = be16toh(payload->external_port);
  payload->affinity = be32toh(payload->affinity);
  payload->local_num = be32toh(payload->local_num);
  do { unsigned i; for (i = 0; i < payload->local_num; ++i) { vapi_type_nat44_lb_addr_port_ntoh(&payload->locals[i]); } } while(0);
}

static inline void vapi_msg_nat44_add_del_lb_static_mapping_hton(vapi_msg_nat44_add_del_lb_static_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_lb_static_mapping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_add_del_lb_static_mapping_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_lb_static_mapping_ntoh(vapi_msg_nat44_add_del_lb_static_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_lb_static_mapping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_lb_static_mapping_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_lb_static_mapping_msg_size(vapi_msg_nat44_add_del_lb_static_mapping *msg)
{
  return sizeof(*msg)+ msg->payload.local_num * sizeof(msg->payload.locals[0]);
}

static inline vapi_msg_nat44_add_del_lb_static_mapping* vapi_alloc_nat44_add_del_lb_static_mapping(struct vapi_ctx_s *ctx, size_t _locals_array_size)
{
  vapi_msg_nat44_add_del_lb_static_mapping *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_add_del_lb_static_mapping) + sizeof(msg->payload.locals[0]) * _locals_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_add_del_lb_static_mapping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_add_del_lb_static_mapping);
  msg->payload.local_num = _locals_array_size;

  return msg;
}

static inline vapi_error_e vapi_nat44_add_del_lb_static_mapping(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_add_del_lb_static_mapping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_add_del_lb_static_mapping_reply *reply),
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
  vapi_msg_nat44_add_del_lb_static_mapping_hton(msg);
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
    vapi_msg_nat44_add_del_lb_static_mapping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_lb_static_mapping()
{
  static const char name[] = "nat44_add_del_lb_static_mapping";
  static const char name_with_crc[] = "nat44_add_del_lb_static_mapping_fdbafb24";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_lb_static_mapping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_add_del_lb_static_mapping, payload),
    sizeof(vapi_msg_nat44_add_del_lb_static_mapping),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_lb_static_mapping_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_lb_static_mapping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_lb_static_mapping = vapi_register_msg(&__vapi_metadata_nat44_add_del_lb_static_mapping);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_lb_static_mapping", vapi_msg_id_nat44_add_del_lb_static_mapping);
}
#endif

#ifndef defined_vapi_msg_nat66_add_del_static_mapping_reply
#define defined_vapi_msg_nat66_add_del_static_mapping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat66_add_del_static_mapping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat66_add_del_static_mapping_reply payload;
} vapi_msg_nat66_add_del_static_mapping_reply;

static inline void vapi_msg_nat66_add_del_static_mapping_reply_payload_hton(vapi_payload_nat66_add_del_static_mapping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat66_add_del_static_mapping_reply_payload_ntoh(vapi_payload_nat66_add_del_static_mapping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat66_add_del_static_mapping_reply_hton(vapi_msg_nat66_add_del_static_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_static_mapping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat66_add_del_static_mapping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat66_add_del_static_mapping_reply_ntoh(vapi_msg_nat66_add_del_static_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_static_mapping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat66_add_del_static_mapping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat66_add_del_static_mapping_reply_msg_size(vapi_msg_nat66_add_del_static_mapping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat66_add_del_static_mapping_reply()
{
  static const char name[] = "nat66_add_del_static_mapping_reply";
  static const char name_with_crc[] = "nat66_add_del_static_mapping_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat66_add_del_static_mapping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat66_add_del_static_mapping_reply, payload),
    sizeof(vapi_msg_nat66_add_del_static_mapping_reply),
    (generic_swap_fn_t)vapi_msg_nat66_add_del_static_mapping_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat66_add_del_static_mapping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_add_del_static_mapping_reply = vapi_register_msg(&__vapi_metadata_nat66_add_del_static_mapping_reply);
  VAPI_DBG("Assigned msg id %d to nat66_add_del_static_mapping_reply", vapi_msg_id_nat66_add_del_static_mapping_reply);
}

static inline void vapi_set_vapi_msg_nat66_add_del_static_mapping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat66_add_del_static_mapping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat66_add_del_static_mapping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat66_interface_details
#define defined_vapi_msg_nat66_interface_details
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat66_interface_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat66_interface_details payload;
} vapi_msg_nat66_interface_details;

static inline void vapi_msg_nat66_interface_details_payload_hton(vapi_payload_nat66_interface_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat66_interface_details_payload_ntoh(vapi_payload_nat66_interface_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat66_interface_details_hton(vapi_msg_nat66_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_interface_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat66_interface_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat66_interface_details_ntoh(vapi_msg_nat66_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_interface_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat66_interface_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat66_interface_details_msg_size(vapi_msg_nat66_interface_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat66_interface_details()
{
  static const char name[] = "nat66_interface_details";
  static const char name_with_crc[] = "nat66_interface_details_c363a3de";
  static vapi_message_desc_t __vapi_metadata_nat66_interface_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat66_interface_details, payload),
    sizeof(vapi_msg_nat66_interface_details),
    (generic_swap_fn_t)vapi_msg_nat66_interface_details_hton,
    (generic_swap_fn_t)vapi_msg_nat66_interface_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_interface_details = vapi_register_msg(&__vapi_metadata_nat66_interface_details);
  VAPI_DBG("Assigned msg id %d to nat66_interface_details", vapi_msg_id_nat66_interface_details);
}

static inline void vapi_set_vapi_msg_nat66_interface_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat66_interface_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat66_interface_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_det_session_dump
#define defined_vapi_msg_nat_det_session_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address user_addr; 
} vapi_payload_nat_det_session_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_det_session_dump payload;
} vapi_msg_nat_det_session_dump;

static inline void vapi_msg_nat_det_session_dump_payload_hton(vapi_payload_nat_det_session_dump *payload)
{

}

static inline void vapi_msg_nat_det_session_dump_payload_ntoh(vapi_payload_nat_det_session_dump *payload)
{

}

static inline void vapi_msg_nat_det_session_dump_hton(vapi_msg_nat_det_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_session_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_det_session_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_session_dump_ntoh(vapi_msg_nat_det_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_session_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_det_session_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_session_dump_msg_size(vapi_msg_nat_det_session_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_det_session_dump* vapi_alloc_nat_det_session_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_det_session_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_det_session_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_det_session_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_det_session_dump);

  return msg;
}

static inline vapi_error_e vapi_nat_det_session_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat_det_session_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_det_session_details *reply),
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
  vapi_msg_nat_det_session_dump_hton(msg);
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
    vapi_msg_nat_det_session_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_det_session_dump()
{
  static const char name[] = "nat_det_session_dump";
  static const char name_with_crc[] = "nat_det_session_dump_4e489ac2";
  static vapi_message_desc_t __vapi_metadata_nat_det_session_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_det_session_dump, payload),
    sizeof(vapi_msg_nat_det_session_dump),
    (generic_swap_fn_t)vapi_msg_nat_det_session_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_session_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_session_dump = vapi_register_msg(&__vapi_metadata_nat_det_session_dump);
  VAPI_DBG("Assigned msg id %d to nat_det_session_dump", vapi_msg_id_nat_det_session_dump);
}
#endif

#ifndef defined_vapi_msg_dslite_address_dump
#define defined_vapi_msg_dslite_address_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_dslite_address_dump;

static inline void vapi_msg_dslite_address_dump_hton(vapi_msg_dslite_address_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_address_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_dslite_address_dump_ntoh(vapi_msg_dslite_address_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_address_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_dslite_address_dump_msg_size(vapi_msg_dslite_address_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_dslite_address_dump* vapi_alloc_dslite_address_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_dslite_address_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_dslite_address_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_dslite_address_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_dslite_address_dump);

  return msg;
}

static inline vapi_error_e vapi_dslite_address_dump(struct vapi_ctx_s *ctx,
  vapi_msg_dslite_address_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_dslite_address_details *reply),
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
  vapi_msg_dslite_address_dump_hton(msg);
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
    vapi_msg_dslite_address_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_dslite_address_dump()
{
  static const char name[] = "dslite_address_dump";
  static const char name_with_crc[] = "dslite_address_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_dslite_address_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_dslite_address_dump),
    (generic_swap_fn_t)vapi_msg_dslite_address_dump_hton,
    (generic_swap_fn_t)vapi_msg_dslite_address_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_address_dump = vapi_register_msg(&__vapi_metadata_dslite_address_dump);
  VAPI_DBG("Assigned msg id %d to dslite_address_dump", vapi_msg_id_dslite_address_dump);
}
#endif

#ifndef defined_vapi_msg_nat_ha_resync
#define defined_vapi_msg_nat_ha_resync
typedef struct __attribute__ ((__packed__)) {
  u8 want_resync_event;
  u32 pid; 
} vapi_payload_nat_ha_resync;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_ha_resync payload;
} vapi_msg_nat_ha_resync;

static inline void vapi_msg_nat_ha_resync_payload_hton(vapi_payload_nat_ha_resync *payload)
{
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_nat_ha_resync_payload_ntoh(vapi_payload_nat_ha_resync *payload)
{
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_nat_ha_resync_hton(vapi_msg_nat_ha_resync *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_resync'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_ha_resync_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_resync_ntoh(vapi_msg_nat_ha_resync *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_resync'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_ha_resync_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_resync_msg_size(vapi_msg_nat_ha_resync *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_ha_resync* vapi_alloc_nat_ha_resync(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_ha_resync *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_ha_resync);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_ha_resync*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_ha_resync);

  return msg;
}

static inline vapi_error_e vapi_nat_ha_resync(struct vapi_ctx_s *ctx,
  vapi_msg_nat_ha_resync *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_ha_resync_reply *reply),
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
  vapi_msg_nat_ha_resync_hton(msg);
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
    vapi_msg_nat_ha_resync_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_ha_resync()
{
  static const char name[] = "nat_ha_resync";
  static const char name_with_crc[] = "nat_ha_resync_c8ab9e03";
  static vapi_message_desc_t __vapi_metadata_nat_ha_resync = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_ha_resync, payload),
    sizeof(vapi_msg_nat_ha_resync),
    (generic_swap_fn_t)vapi_msg_nat_ha_resync_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_resync_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_resync = vapi_register_msg(&__vapi_metadata_nat_ha_resync);
  VAPI_DBG("Assigned msg id %d to nat_ha_resync", vapi_msg_id_nat_ha_resync);
}
#endif

#ifndef defined_vapi_msg_nat_ha_get_failover_reply
#define defined_vapi_msg_nat_ha_get_failover_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_ip4_address ip_address;
  u16 port;
  u32 session_refresh_interval; 
} vapi_payload_nat_ha_get_failover_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_ha_get_failover_reply payload;
} vapi_msg_nat_ha_get_failover_reply;

static inline void vapi_msg_nat_ha_get_failover_reply_payload_hton(vapi_payload_nat_ha_get_failover_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->port = htobe16(payload->port);
  payload->session_refresh_interval = htobe32(payload->session_refresh_interval);
}

static inline void vapi_msg_nat_ha_get_failover_reply_payload_ntoh(vapi_payload_nat_ha_get_failover_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->port = be16toh(payload->port);
  payload->session_refresh_interval = be32toh(payload->session_refresh_interval);
}

static inline void vapi_msg_nat_ha_get_failover_reply_hton(vapi_msg_nat_ha_get_failover_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_failover_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_ha_get_failover_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_get_failover_reply_ntoh(vapi_msg_nat_ha_get_failover_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_failover_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_ha_get_failover_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_get_failover_reply_msg_size(vapi_msg_nat_ha_get_failover_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ha_get_failover_reply()
{
  static const char name[] = "nat_ha_get_failover_reply";
  static const char name_with_crc[] = "nat_ha_get_failover_reply_d4cb310a";
  static vapi_message_desc_t __vapi_metadata_nat_ha_get_failover_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_ha_get_failover_reply, payload),
    sizeof(vapi_msg_nat_ha_get_failover_reply),
    (generic_swap_fn_t)vapi_msg_nat_ha_get_failover_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_get_failover_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_get_failover_reply = vapi_register_msg(&__vapi_metadata_nat_ha_get_failover_reply);
  VAPI_DBG("Assigned msg id %d to nat_ha_get_failover_reply", vapi_msg_id_nat_ha_get_failover_reply);
}

static inline void vapi_set_vapi_msg_nat_ha_get_failover_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ha_get_failover_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ha_get_failover_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_interface_add_del_feature
#define defined_vapi_msg_nat44_interface_add_del_feature
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat44_interface_add_del_feature;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_interface_add_del_feature payload;
} vapi_msg_nat44_interface_add_del_feature;

static inline void vapi_msg_nat44_interface_add_del_feature_payload_hton(vapi_payload_nat44_interface_add_del_feature *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_add_del_feature_payload_ntoh(vapi_payload_nat44_interface_add_del_feature *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_add_del_feature_hton(vapi_msg_nat44_interface_add_del_feature *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_feature'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_interface_add_del_feature_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_interface_add_del_feature_ntoh(vapi_msg_nat44_interface_add_del_feature *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_feature'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_interface_add_del_feature_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_interface_add_del_feature_msg_size(vapi_msg_nat44_interface_add_del_feature *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_interface_add_del_feature* vapi_alloc_nat44_interface_add_del_feature(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_interface_add_del_feature *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_interface_add_del_feature);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_interface_add_del_feature*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_interface_add_del_feature);

  return msg;
}

static inline vapi_error_e vapi_nat44_interface_add_del_feature(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_interface_add_del_feature *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_interface_add_del_feature_reply *reply),
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
  vapi_msg_nat44_interface_add_del_feature_hton(msg);
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
    vapi_msg_nat44_interface_add_del_feature_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_interface_add_del_feature()
{
  static const char name[] = "nat44_interface_add_del_feature";
  static const char name_with_crc[] = "nat44_interface_add_del_feature_ef3edad1";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_add_del_feature = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_interface_add_del_feature, payload),
    sizeof(vapi_msg_nat44_interface_add_del_feature),
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_feature_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_feature_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_add_del_feature = vapi_register_msg(&__vapi_metadata_nat44_interface_add_del_feature);
  VAPI_DBG("Assigned msg id %d to nat44_interface_add_del_feature", vapi_msg_id_nat44_interface_add_del_feature);
}
#endif

#ifndef defined_vapi_msg_nat64_add_del_pool_addr_range_reply
#define defined_vapi_msg_nat64_add_del_pool_addr_range_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat64_add_del_pool_addr_range_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_add_del_pool_addr_range_reply payload;
} vapi_msg_nat64_add_del_pool_addr_range_reply;

static inline void vapi_msg_nat64_add_del_pool_addr_range_reply_payload_hton(vapi_payload_nat64_add_del_pool_addr_range_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat64_add_del_pool_addr_range_reply_payload_ntoh(vapi_payload_nat64_add_del_pool_addr_range_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat64_add_del_pool_addr_range_reply_hton(vapi_msg_nat64_add_del_pool_addr_range_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_pool_addr_range_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_add_del_pool_addr_range_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_pool_addr_range_reply_ntoh(vapi_msg_nat64_add_del_pool_addr_range_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_pool_addr_range_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_pool_addr_range_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_pool_addr_range_reply_msg_size(vapi_msg_nat64_add_del_pool_addr_range_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_pool_addr_range_reply()
{
  static const char name[] = "nat64_add_del_pool_addr_range_reply";
  static const char name_with_crc[] = "nat64_add_del_pool_addr_range_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_pool_addr_range_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_add_del_pool_addr_range_reply, payload),
    sizeof(vapi_msg_nat64_add_del_pool_addr_range_reply),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_pool_addr_range_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_pool_addr_range_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_pool_addr_range_reply = vapi_register_msg(&__vapi_metadata_nat64_add_del_pool_addr_range_reply);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_pool_addr_range_reply", vapi_msg_id_nat64_add_del_pool_addr_range_reply);
}

static inline void vapi_set_vapi_msg_nat64_add_del_pool_addr_range_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_add_del_pool_addr_range_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_add_del_pool_addr_range_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_reass_reply
#define defined_vapi_msg_nat_set_reass_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_set_reass_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_set_reass_reply payload;
} vapi_msg_nat_set_reass_reply;

static inline void vapi_msg_nat_set_reass_reply_payload_hton(vapi_payload_nat_set_reass_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_set_reass_reply_payload_ntoh(vapi_payload_nat_set_reass_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_set_reass_reply_hton(vapi_msg_nat_set_reass_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_reass_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_set_reass_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_reass_reply_ntoh(vapi_msg_nat_set_reass_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_reass_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_set_reass_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_reass_reply_msg_size(vapi_msg_nat_set_reass_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_set_reass_reply()
{
  static const char name[] = "nat_set_reass_reply";
  static const char name_with_crc[] = "nat_set_reass_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_set_reass_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_set_reass_reply, payload),
    sizeof(vapi_msg_nat_set_reass_reply),
    (generic_swap_fn_t)vapi_msg_nat_set_reass_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_reass_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_reass_reply = vapi_register_msg(&__vapi_metadata_nat_set_reass_reply);
  VAPI_DBG("Assigned msg id %d to nat_set_reass_reply", vapi_msg_id_nat_set_reass_reply);
}

static inline void vapi_set_vapi_msg_nat_set_reass_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_set_reass_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_set_reass_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_reass
#define defined_vapi_msg_nat_set_reass
typedef struct __attribute__ ((__packed__)) {
  u32 timeout;
  u16 max_reass;
  u8 max_frag;
  u8 drop_frag;
  bool is_ip6; 
} vapi_payload_nat_set_reass;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_set_reass payload;
} vapi_msg_nat_set_reass;

static inline void vapi_msg_nat_set_reass_payload_hton(vapi_payload_nat_set_reass *payload)
{
  payload->timeout = htobe32(payload->timeout);
  payload->max_reass = htobe16(payload->max_reass);
}

static inline void vapi_msg_nat_set_reass_payload_ntoh(vapi_payload_nat_set_reass *payload)
{
  payload->timeout = be32toh(payload->timeout);
  payload->max_reass = be16toh(payload->max_reass);
}

static inline void vapi_msg_nat_set_reass_hton(vapi_msg_nat_set_reass *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_reass'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_set_reass_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_reass_ntoh(vapi_msg_nat_set_reass *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_reass'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_set_reass_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_reass_msg_size(vapi_msg_nat_set_reass *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_set_reass* vapi_alloc_nat_set_reass(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_set_reass *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_set_reass);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_set_reass*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_set_reass);

  return msg;
}

static inline vapi_error_e vapi_nat_set_reass(struct vapi_ctx_s *ctx,
  vapi_msg_nat_set_reass *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_set_reass_reply *reply),
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
  vapi_msg_nat_set_reass_hton(msg);
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
    vapi_msg_nat_set_reass_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_set_reass()
{
  static const char name[] = "nat_set_reass";
  static const char name_with_crc[] = "nat_set_reass_364ce510";
  static vapi_message_desc_t __vapi_metadata_nat_set_reass = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_set_reass, payload),
    sizeof(vapi_msg_nat_set_reass),
    (generic_swap_fn_t)vapi_msg_nat_set_reass_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_reass_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_reass = vapi_register_msg(&__vapi_metadata_nat_set_reass);
  VAPI_DBG("Assigned msg id %d to nat_set_reass", vapi_msg_id_nat_set_reass);
}
#endif

#ifndef defined_vapi_msg_nat_ha_set_failover_reply
#define defined_vapi_msg_nat_ha_set_failover_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_ha_set_failover_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_ha_set_failover_reply payload;
} vapi_msg_nat_ha_set_failover_reply;

static inline void vapi_msg_nat_ha_set_failover_reply_payload_hton(vapi_payload_nat_ha_set_failover_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_ha_set_failover_reply_payload_ntoh(vapi_payload_nat_ha_set_failover_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_ha_set_failover_reply_hton(vapi_msg_nat_ha_set_failover_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_failover_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_ha_set_failover_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_set_failover_reply_ntoh(vapi_msg_nat_ha_set_failover_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_failover_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_ha_set_failover_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_set_failover_reply_msg_size(vapi_msg_nat_ha_set_failover_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ha_set_failover_reply()
{
  static const char name[] = "nat_ha_set_failover_reply";
  static const char name_with_crc[] = "nat_ha_set_failover_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_ha_set_failover_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_ha_set_failover_reply, payload),
    sizeof(vapi_msg_nat_ha_set_failover_reply),
    (generic_swap_fn_t)vapi_msg_nat_ha_set_failover_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_set_failover_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_set_failover_reply = vapi_register_msg(&__vapi_metadata_nat_ha_set_failover_reply);
  VAPI_DBG("Assigned msg id %d to nat_ha_set_failover_reply", vapi_msg_id_nat_ha_set_failover_reply);
}

static inline void vapi_set_vapi_msg_nat_ha_set_failover_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ha_set_failover_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ha_set_failover_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_ha_set_failover
#define defined_vapi_msg_nat_ha_set_failover
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address ip_address;
  u16 port;
  u32 session_refresh_interval; 
} vapi_payload_nat_ha_set_failover;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_ha_set_failover payload;
} vapi_msg_nat_ha_set_failover;

static inline void vapi_msg_nat_ha_set_failover_payload_hton(vapi_payload_nat_ha_set_failover *payload)
{
  payload->port = htobe16(payload->port);
  payload->session_refresh_interval = htobe32(payload->session_refresh_interval);
}

static inline void vapi_msg_nat_ha_set_failover_payload_ntoh(vapi_payload_nat_ha_set_failover *payload)
{
  payload->port = be16toh(payload->port);
  payload->session_refresh_interval = be32toh(payload->session_refresh_interval);
}

static inline void vapi_msg_nat_ha_set_failover_hton(vapi_msg_nat_ha_set_failover *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_failover'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_ha_set_failover_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_set_failover_ntoh(vapi_msg_nat_ha_set_failover *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_set_failover'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_ha_set_failover_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_set_failover_msg_size(vapi_msg_nat_ha_set_failover *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_ha_set_failover* vapi_alloc_nat_ha_set_failover(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_ha_set_failover *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_ha_set_failover);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_ha_set_failover*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_ha_set_failover);

  return msg;
}

static inline vapi_error_e vapi_nat_ha_set_failover(struct vapi_ctx_s *ctx,
  vapi_msg_nat_ha_set_failover *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_ha_set_failover_reply *reply),
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
  vapi_msg_nat_ha_set_failover_hton(msg);
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
    vapi_msg_nat_ha_set_failover_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_ha_set_failover()
{
  static const char name[] = "nat_ha_set_failover";
  static const char name_with_crc[] = "nat_ha_set_failover_a5d89e59";
  static vapi_message_desc_t __vapi_metadata_nat_ha_set_failover = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_ha_set_failover, payload),
    sizeof(vapi_msg_nat_ha_set_failover),
    (generic_swap_fn_t)vapi_msg_nat_ha_set_failover_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_set_failover_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_set_failover = vapi_register_msg(&__vapi_metadata_nat_ha_set_failover);
  VAPI_DBG("Assigned msg id %d to nat_ha_set_failover", vapi_msg_id_nat_ha_set_failover);
}
#endif

#ifndef defined_vapi_msg_nat_get_mss_clamping_reply
#define defined_vapi_msg_nat_get_mss_clamping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u16 mss_value;
  bool enable; 
} vapi_payload_nat_get_mss_clamping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_get_mss_clamping_reply payload;
} vapi_msg_nat_get_mss_clamping_reply;

static inline void vapi_msg_nat_get_mss_clamping_reply_payload_hton(vapi_payload_nat_get_mss_clamping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->mss_value = htobe16(payload->mss_value);
}

static inline void vapi_msg_nat_get_mss_clamping_reply_payload_ntoh(vapi_payload_nat_get_mss_clamping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->mss_value = be16toh(payload->mss_value);
}

static inline void vapi_msg_nat_get_mss_clamping_reply_hton(vapi_msg_nat_get_mss_clamping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_mss_clamping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_get_mss_clamping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_get_mss_clamping_reply_ntoh(vapi_msg_nat_get_mss_clamping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_mss_clamping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_get_mss_clamping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_get_mss_clamping_reply_msg_size(vapi_msg_nat_get_mss_clamping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_get_mss_clamping_reply()
{
  static const char name[] = "nat_get_mss_clamping_reply";
  static const char name_with_crc[] = "nat_get_mss_clamping_reply_1c0b2a78";
  static vapi_message_desc_t __vapi_metadata_nat_get_mss_clamping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_get_mss_clamping_reply, payload),
    sizeof(vapi_msg_nat_get_mss_clamping_reply),
    (generic_swap_fn_t)vapi_msg_nat_get_mss_clamping_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_mss_clamping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_mss_clamping_reply = vapi_register_msg(&__vapi_metadata_nat_get_mss_clamping_reply);
  VAPI_DBG("Assigned msg id %d to nat_get_mss_clamping_reply", vapi_msg_id_nat_get_mss_clamping_reply);
}

static inline void vapi_set_vapi_msg_nat_get_mss_clamping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_get_mss_clamping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_get_mss_clamping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_get_mss_clamping
#define defined_vapi_msg_nat_get_mss_clamping
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_get_mss_clamping;

static inline void vapi_msg_nat_get_mss_clamping_hton(vapi_msg_nat_get_mss_clamping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_mss_clamping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_get_mss_clamping_ntoh(vapi_msg_nat_get_mss_clamping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_mss_clamping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_get_mss_clamping_msg_size(vapi_msg_nat_get_mss_clamping *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_get_mss_clamping* vapi_alloc_nat_get_mss_clamping(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_get_mss_clamping *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_get_mss_clamping);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_get_mss_clamping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_get_mss_clamping);

  return msg;
}

static inline vapi_error_e vapi_nat_get_mss_clamping(struct vapi_ctx_s *ctx,
  vapi_msg_nat_get_mss_clamping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_get_mss_clamping_reply *reply),
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
  vapi_msg_nat_get_mss_clamping_hton(msg);
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
    vapi_msg_nat_get_mss_clamping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_get_mss_clamping()
{
  static const char name[] = "nat_get_mss_clamping";
  static const char name_with_crc[] = "nat_get_mss_clamping_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_get_mss_clamping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_get_mss_clamping),
    (generic_swap_fn_t)vapi_msg_nat_get_mss_clamping_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_mss_clamping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_mss_clamping = vapi_register_msg(&__vapi_metadata_nat_get_mss_clamping);
  VAPI_DBG("Assigned msg id %d to nat_get_mss_clamping", vapi_msg_id_nat_get_mss_clamping);
}
#endif

#ifndef defined_vapi_msg_nat_set_addr_and_port_alloc_alg_reply
#define defined_vapi_msg_nat_set_addr_and_port_alloc_alg_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_set_addr_and_port_alloc_alg_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_set_addr_and_port_alloc_alg_reply payload;
} vapi_msg_nat_set_addr_and_port_alloc_alg_reply;

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_reply_payload_hton(vapi_payload_nat_set_addr_and_port_alloc_alg_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_reply_payload_ntoh(vapi_payload_nat_set_addr_and_port_alloc_alg_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_reply_hton(vapi_msg_nat_set_addr_and_port_alloc_alg_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_addr_and_port_alloc_alg_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_set_addr_and_port_alloc_alg_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_reply_ntoh(vapi_msg_nat_set_addr_and_port_alloc_alg_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_addr_and_port_alloc_alg_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_set_addr_and_port_alloc_alg_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_addr_and_port_alloc_alg_reply_msg_size(vapi_msg_nat_set_addr_and_port_alloc_alg_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_set_addr_and_port_alloc_alg_reply()
{
  static const char name[] = "nat_set_addr_and_port_alloc_alg_reply";
  static const char name_with_crc[] = "nat_set_addr_and_port_alloc_alg_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_set_addr_and_port_alloc_alg_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_set_addr_and_port_alloc_alg_reply, payload),
    sizeof(vapi_msg_nat_set_addr_and_port_alloc_alg_reply),
    (generic_swap_fn_t)vapi_msg_nat_set_addr_and_port_alloc_alg_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_addr_and_port_alloc_alg_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply = vapi_register_msg(&__vapi_metadata_nat_set_addr_and_port_alloc_alg_reply);
  VAPI_DBG("Assigned msg id %d to nat_set_addr_and_port_alloc_alg_reply", vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply);
}

static inline void vapi_set_vapi_msg_nat_set_addr_and_port_alloc_alg_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_set_addr_and_port_alloc_alg_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_set_addr_and_port_alloc_alg
#define defined_vapi_msg_nat_set_addr_and_port_alloc_alg
typedef struct __attribute__ ((__packed__)) {
  u8 alg;
  u8 psid_offset;
  u8 psid_length;
  u16 psid;
  u16 start_port;
  u16 end_port; 
} vapi_payload_nat_set_addr_and_port_alloc_alg;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_set_addr_and_port_alloc_alg payload;
} vapi_msg_nat_set_addr_and_port_alloc_alg;

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_payload_hton(vapi_payload_nat_set_addr_and_port_alloc_alg *payload)
{
  payload->psid = htobe16(payload->psid);
  payload->start_port = htobe16(payload->start_port);
  payload->end_port = htobe16(payload->end_port);
}

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_payload_ntoh(vapi_payload_nat_set_addr_and_port_alloc_alg *payload)
{
  payload->psid = be16toh(payload->psid);
  payload->start_port = be16toh(payload->start_port);
  payload->end_port = be16toh(payload->end_port);
}

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_hton(vapi_msg_nat_set_addr_and_port_alloc_alg *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_addr_and_port_alloc_alg'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_set_addr_and_port_alloc_alg_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_addr_and_port_alloc_alg_ntoh(vapi_msg_nat_set_addr_and_port_alloc_alg *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_addr_and_port_alloc_alg'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_set_addr_and_port_alloc_alg_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_addr_and_port_alloc_alg_msg_size(vapi_msg_nat_set_addr_and_port_alloc_alg *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_set_addr_and_port_alloc_alg* vapi_alloc_nat_set_addr_and_port_alloc_alg(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_set_addr_and_port_alloc_alg *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_set_addr_and_port_alloc_alg);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_set_addr_and_port_alloc_alg*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_set_addr_and_port_alloc_alg);

  return msg;
}

static inline vapi_error_e vapi_nat_set_addr_and_port_alloc_alg(struct vapi_ctx_s *ctx,
  vapi_msg_nat_set_addr_and_port_alloc_alg *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_set_addr_and_port_alloc_alg_reply *reply),
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
  vapi_msg_nat_set_addr_and_port_alloc_alg_hton(msg);
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
    vapi_msg_nat_set_addr_and_port_alloc_alg_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_set_addr_and_port_alloc_alg()
{
  static const char name[] = "nat_set_addr_and_port_alloc_alg";
  static const char name_with_crc[] = "nat_set_addr_and_port_alloc_alg_deeb746f";
  static vapi_message_desc_t __vapi_metadata_nat_set_addr_and_port_alloc_alg = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_set_addr_and_port_alloc_alg, payload),
    sizeof(vapi_msg_nat_set_addr_and_port_alloc_alg),
    (generic_swap_fn_t)vapi_msg_nat_set_addr_and_port_alloc_alg_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_addr_and_port_alloc_alg_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_addr_and_port_alloc_alg = vapi_register_msg(&__vapi_metadata_nat_set_addr_and_port_alloc_alg);
  VAPI_DBG("Assigned msg id %d to nat_set_addr_and_port_alloc_alg", vapi_msg_id_nat_set_addr_and_port_alloc_alg);
}
#endif

#ifndef defined_vapi_msg_nat_det_close_session_out_reply
#define defined_vapi_msg_nat_det_close_session_out_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat_det_close_session_out_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_det_close_session_out_reply payload;
} vapi_msg_nat_det_close_session_out_reply;

static inline void vapi_msg_nat_det_close_session_out_reply_payload_hton(vapi_payload_nat_det_close_session_out_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat_det_close_session_out_reply_payload_ntoh(vapi_payload_nat_det_close_session_out_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat_det_close_session_out_reply_hton(vapi_msg_nat_det_close_session_out_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_out_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_det_close_session_out_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_close_session_out_reply_ntoh(vapi_msg_nat_det_close_session_out_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_out_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_det_close_session_out_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_close_session_out_reply_msg_size(vapi_msg_nat_det_close_session_out_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_det_close_session_out_reply()
{
  static const char name[] = "nat_det_close_session_out_reply";
  static const char name_with_crc[] = "nat_det_close_session_out_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat_det_close_session_out_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_det_close_session_out_reply, payload),
    sizeof(vapi_msg_nat_det_close_session_out_reply),
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_out_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_out_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_close_session_out_reply = vapi_register_msg(&__vapi_metadata_nat_det_close_session_out_reply);
  VAPI_DBG("Assigned msg id %d to nat_det_close_session_out_reply", vapi_msg_id_nat_det_close_session_out_reply);
}

static inline void vapi_set_vapi_msg_nat_det_close_session_out_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_det_close_session_out_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_det_close_session_out_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_show_config
#define defined_vapi_msg_nat_show_config
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_show_config;

static inline void vapi_msg_nat_show_config_hton(vapi_msg_nat_show_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_show_config'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_show_config_ntoh(vapi_msg_nat_show_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_show_config'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_show_config_msg_size(vapi_msg_nat_show_config *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_show_config* vapi_alloc_nat_show_config(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_show_config *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_show_config);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_show_config*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_show_config);

  return msg;
}

static inline vapi_error_e vapi_nat_show_config(struct vapi_ctx_s *ctx,
  vapi_msg_nat_show_config *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_show_config_reply *reply),
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
  vapi_msg_nat_show_config_hton(msg);
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
    vapi_msg_nat_show_config_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_show_config()
{
  static const char name[] = "nat_show_config";
  static const char name_with_crc[] = "nat_show_config_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_show_config = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_show_config),
    (generic_swap_fn_t)vapi_msg_nat_show_config_hton,
    (generic_swap_fn_t)vapi_msg_nat_show_config_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_show_config = vapi_register_msg(&__vapi_metadata_nat_show_config);
  VAPI_DBG("Assigned msg id %d to nat_show_config", vapi_msg_id_nat_show_config);
}
#endif

#ifndef defined_vapi_msg_nat_set_log_level
#define defined_vapi_msg_nat_set_log_level
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_nat_log_level log_level; 
} vapi_payload_nat_set_log_level;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_set_log_level payload;
} vapi_msg_nat_set_log_level;

static inline void vapi_msg_nat_set_log_level_payload_hton(vapi_payload_nat_set_log_level *payload)
{

}

static inline void vapi_msg_nat_set_log_level_payload_ntoh(vapi_payload_nat_set_log_level *payload)
{

}

static inline void vapi_msg_nat_set_log_level_hton(vapi_msg_nat_set_log_level *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_log_level'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_set_log_level_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_set_log_level_ntoh(vapi_msg_nat_set_log_level *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_set_log_level'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_set_log_level_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_set_log_level_msg_size(vapi_msg_nat_set_log_level *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_set_log_level* vapi_alloc_nat_set_log_level(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_set_log_level *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_set_log_level);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_set_log_level*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_set_log_level);

  return msg;
}

static inline vapi_error_e vapi_nat_set_log_level(struct vapi_ctx_s *ctx,
  vapi_msg_nat_set_log_level *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_set_log_level_reply *reply),
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
  vapi_msg_nat_set_log_level_hton(msg);
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
    vapi_msg_nat_set_log_level_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_set_log_level()
{
  static const char name[] = "nat_set_log_level";
  static const char name_with_crc[] = "nat_set_log_level_70076bfe";
  static vapi_message_desc_t __vapi_metadata_nat_set_log_level = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_set_log_level, payload),
    sizeof(vapi_msg_nat_set_log_level),
    (generic_swap_fn_t)vapi_msg_nat_set_log_level_hton,
    (generic_swap_fn_t)vapi_msg_nat_set_log_level_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_set_log_level = vapi_register_msg(&__vapi_metadata_nat_set_log_level);
  VAPI_DBG("Assigned msg id %d to nat_set_log_level", vapi_msg_id_nat_set_log_level);
}
#endif

#ifndef defined_vapi_msg_nat44_address_dump
#define defined_vapi_msg_nat44_address_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_address_dump;

static inline void vapi_msg_nat44_address_dump_hton(vapi_msg_nat44_address_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_address_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_address_dump_ntoh(vapi_msg_nat44_address_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_address_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_address_dump_msg_size(vapi_msg_nat44_address_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_address_dump* vapi_alloc_nat44_address_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_address_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_address_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_address_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_address_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_address_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_address_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_address_details *reply),
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
  vapi_msg_nat44_address_dump_hton(msg);
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
    vapi_msg_nat44_address_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_address_dump()
{
  static const char name[] = "nat44_address_dump";
  static const char name_with_crc[] = "nat44_address_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_address_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_address_dump),
    (generic_swap_fn_t)vapi_msg_nat44_address_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_address_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_address_dump = vapi_register_msg(&__vapi_metadata_nat44_address_dump);
  VAPI_DBG("Assigned msg id %d to nat44_address_dump", vapi_msg_id_nat44_address_dump);
}
#endif

#ifndef defined_vapi_msg_nat44_forwarding_is_enabled
#define defined_vapi_msg_nat44_forwarding_is_enabled
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_forwarding_is_enabled;

static inline void vapi_msg_nat44_forwarding_is_enabled_hton(vapi_msg_nat44_forwarding_is_enabled *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_is_enabled'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_forwarding_is_enabled_ntoh(vapi_msg_nat44_forwarding_is_enabled *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_is_enabled'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_forwarding_is_enabled_msg_size(vapi_msg_nat44_forwarding_is_enabled *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_forwarding_is_enabled* vapi_alloc_nat44_forwarding_is_enabled(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_forwarding_is_enabled *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_forwarding_is_enabled);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_forwarding_is_enabled*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_forwarding_is_enabled);

  return msg;
}

static inline vapi_error_e vapi_nat44_forwarding_is_enabled(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_forwarding_is_enabled *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_forwarding_is_enabled_reply *reply),
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
  vapi_msg_nat44_forwarding_is_enabled_hton(msg);
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
    vapi_msg_nat44_forwarding_is_enabled_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_forwarding_is_enabled()
{
  static const char name[] = "nat44_forwarding_is_enabled";
  static const char name_with_crc[] = "nat44_forwarding_is_enabled_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_forwarding_is_enabled = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_forwarding_is_enabled),
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_is_enabled_hton,
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_is_enabled_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_forwarding_is_enabled = vapi_register_msg(&__vapi_metadata_nat44_forwarding_is_enabled);
  VAPI_DBG("Assigned msg id %d to nat44_forwarding_is_enabled", vapi_msg_id_nat44_forwarding_is_enabled);
}
#endif

#ifndef defined_vapi_msg_nat44_interface_details
#define defined_vapi_msg_nat44_interface_details
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat44_interface_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_interface_details payload;
} vapi_msg_nat44_interface_details;

static inline void vapi_msg_nat44_interface_details_payload_hton(vapi_payload_nat44_interface_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_details_payload_ntoh(vapi_payload_nat44_interface_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_details_hton(vapi_msg_nat44_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_interface_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_interface_details_ntoh(vapi_msg_nat44_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_interface_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_interface_details_msg_size(vapi_msg_nat44_interface_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_interface_details()
{
  static const char name[] = "nat44_interface_details";
  static const char name_with_crc[] = "nat44_interface_details_c363a3de";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_interface_details, payload),
    sizeof(vapi_msg_nat44_interface_details),
    (generic_swap_fn_t)vapi_msg_nat44_interface_details_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_details = vapi_register_msg(&__vapi_metadata_nat44_interface_details);
  VAPI_DBG("Assigned msg id %d to nat44_interface_details", vapi_msg_id_nat44_interface_details);
}

static inline void vapi_set_vapi_msg_nat44_interface_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_interface_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_interface_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_interface_dump
#define defined_vapi_msg_nat44_interface_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat44_interface_dump;

static inline void vapi_msg_nat44_interface_dump_hton(vapi_msg_nat44_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat44_interface_dump_ntoh(vapi_msg_nat44_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat44_interface_dump_msg_size(vapi_msg_nat44_interface_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_interface_dump* vapi_alloc_nat44_interface_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_interface_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_interface_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_interface_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_interface_dump);

  return msg;
}

static inline vapi_error_e vapi_nat44_interface_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_interface_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_interface_details *reply),
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
  vapi_msg_nat44_interface_dump_hton(msg);
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
    vapi_msg_nat44_interface_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_interface_dump()
{
  static const char name[] = "nat44_interface_dump";
  static const char name_with_crc[] = "nat44_interface_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat44_interface_dump),
    (generic_swap_fn_t)vapi_msg_nat44_interface_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_dump = vapi_register_msg(&__vapi_metadata_nat44_interface_dump);
  VAPI_DBG("Assigned msg id %d to nat44_interface_dump", vapi_msg_id_nat44_interface_dump);
}
#endif

#ifndef defined_vapi_msg_nat64_bib_details
#define defined_vapi_msg_nat64_bib_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip6_address i_addr;
  vapi_type_ip4_address o_addr;
  u16 i_port;
  u16 o_port;
  u32 vrf_id;
  u8 proto;
  vapi_enum_nat_config_flags flags;
  u32 ses_num; 
} vapi_payload_nat64_bib_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat64_bib_details payload;
} vapi_msg_nat64_bib_details;

static inline void vapi_msg_nat64_bib_details_payload_hton(vapi_payload_nat64_bib_details *payload)
{
  payload->i_port = htobe16(payload->i_port);
  payload->o_port = htobe16(payload->o_port);
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->ses_num = htobe32(payload->ses_num);
}

static inline void vapi_msg_nat64_bib_details_payload_ntoh(vapi_payload_nat64_bib_details *payload)
{
  payload->i_port = be16toh(payload->i_port);
  payload->o_port = be16toh(payload->o_port);
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->ses_num = be32toh(payload->ses_num);
}

static inline void vapi_msg_nat64_bib_details_hton(vapi_msg_nat64_bib_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_bib_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat64_bib_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_bib_details_ntoh(vapi_msg_nat64_bib_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_bib_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat64_bib_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_bib_details_msg_size(vapi_msg_nat64_bib_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat64_bib_details()
{
  static const char name[] = "nat64_bib_details";
  static const char name_with_crc[] = "nat64_bib_details_776fd58a";
  static vapi_message_desc_t __vapi_metadata_nat64_bib_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat64_bib_details, payload),
    sizeof(vapi_msg_nat64_bib_details),
    (generic_swap_fn_t)vapi_msg_nat64_bib_details_hton,
    (generic_swap_fn_t)vapi_msg_nat64_bib_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_bib_details = vapi_register_msg(&__vapi_metadata_nat64_bib_details);
  VAPI_DBG("Assigned msg id %d to nat64_bib_details", vapi_msg_id_nat64_bib_details);
}

static inline void vapi_set_vapi_msg_nat64_bib_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat64_bib_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat64_bib_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat64_bib_dump
#define defined_vapi_msg_nat64_bib_dump
typedef struct __attribute__ ((__packed__)) {
  u8 proto; 
} vapi_payload_nat64_bib_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat64_bib_dump payload;
} vapi_msg_nat64_bib_dump;

static inline void vapi_msg_nat64_bib_dump_payload_hton(vapi_payload_nat64_bib_dump *payload)
{

}

static inline void vapi_msg_nat64_bib_dump_payload_ntoh(vapi_payload_nat64_bib_dump *payload)
{

}

static inline void vapi_msg_nat64_bib_dump_hton(vapi_msg_nat64_bib_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_bib_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat64_bib_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_bib_dump_ntoh(vapi_msg_nat64_bib_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_bib_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat64_bib_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_bib_dump_msg_size(vapi_msg_nat64_bib_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_bib_dump* vapi_alloc_nat64_bib_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_bib_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_bib_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_bib_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_bib_dump);

  return msg;
}

static inline vapi_error_e vapi_nat64_bib_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_bib_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_bib_details *reply),
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
  vapi_msg_nat64_bib_dump_hton(msg);
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
    vapi_msg_nat64_bib_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_bib_dump()
{
  static const char name[] = "nat64_bib_dump";
  static const char name_with_crc[] = "nat64_bib_dump_cfcb6b75";
  static vapi_message_desc_t __vapi_metadata_nat64_bib_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat64_bib_dump, payload),
    sizeof(vapi_msg_nat64_bib_dump),
    (generic_swap_fn_t)vapi_msg_nat64_bib_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat64_bib_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_bib_dump = vapi_register_msg(&__vapi_metadata_nat64_bib_dump);
  VAPI_DBG("Assigned msg id %d to nat64_bib_dump", vapi_msg_id_nat64_bib_dump);
}
#endif

#ifndef defined_vapi_msg_nat64_add_del_pool_addr_range
#define defined_vapi_msg_nat64_add_del_pool_addr_range
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address start_addr;
  vapi_type_ip4_address end_addr;
  u32 vrf_id;
  bool is_add; 
} vapi_payload_nat64_add_del_pool_addr_range;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat64_add_del_pool_addr_range payload;
} vapi_msg_nat64_add_del_pool_addr_range;

static inline void vapi_msg_nat64_add_del_pool_addr_range_payload_hton(vapi_payload_nat64_add_del_pool_addr_range *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat64_add_del_pool_addr_range_payload_ntoh(vapi_payload_nat64_add_del_pool_addr_range *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat64_add_del_pool_addr_range_hton(vapi_msg_nat64_add_del_pool_addr_range *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_pool_addr_range'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat64_add_del_pool_addr_range_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_pool_addr_range_ntoh(vapi_msg_nat64_add_del_pool_addr_range *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_pool_addr_range'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_pool_addr_range_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_pool_addr_range_msg_size(vapi_msg_nat64_add_del_pool_addr_range *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_add_del_pool_addr_range* vapi_alloc_nat64_add_del_pool_addr_range(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_add_del_pool_addr_range *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_add_del_pool_addr_range);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_add_del_pool_addr_range*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_add_del_pool_addr_range);

  return msg;
}

static inline vapi_error_e vapi_nat64_add_del_pool_addr_range(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_add_del_pool_addr_range *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_add_del_pool_addr_range_reply *reply),
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
  vapi_msg_nat64_add_del_pool_addr_range_hton(msg);
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
    vapi_msg_nat64_add_del_pool_addr_range_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_pool_addr_range()
{
  static const char name[] = "nat64_add_del_pool_addr_range";
  static const char name_with_crc[] = "nat64_add_del_pool_addr_range_0d7c833f";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_pool_addr_range = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat64_add_del_pool_addr_range, payload),
    sizeof(vapi_msg_nat64_add_del_pool_addr_range),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_pool_addr_range_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_pool_addr_range_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_pool_addr_range = vapi_register_msg(&__vapi_metadata_nat64_add_del_pool_addr_range);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_pool_addr_range", vapi_msg_id_nat64_add_del_pool_addr_range);
}
#endif

#ifndef defined_vapi_msg_nat64_prefix_dump
#define defined_vapi_msg_nat64_prefix_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat64_prefix_dump;

static inline void vapi_msg_nat64_prefix_dump_hton(vapi_msg_nat64_prefix_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_prefix_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat64_prefix_dump_ntoh(vapi_msg_nat64_prefix_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_prefix_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat64_prefix_dump_msg_size(vapi_msg_nat64_prefix_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_prefix_dump* vapi_alloc_nat64_prefix_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_prefix_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_prefix_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_prefix_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_prefix_dump);

  return msg;
}

static inline vapi_error_e vapi_nat64_prefix_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_prefix_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_prefix_details *reply),
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
  vapi_msg_nat64_prefix_dump_hton(msg);
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
    vapi_msg_nat64_prefix_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_prefix_dump()
{
  static const char name[] = "nat64_prefix_dump";
  static const char name_with_crc[] = "nat64_prefix_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat64_prefix_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat64_prefix_dump),
    (generic_swap_fn_t)vapi_msg_nat64_prefix_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat64_prefix_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_prefix_dump = vapi_register_msg(&__vapi_metadata_nat64_prefix_dump);
  VAPI_DBG("Assigned msg id %d to nat64_prefix_dump", vapi_msg_id_nat64_prefix_dump);
}
#endif

#ifndef defined_vapi_msg_nat_det_map_details
#define defined_vapi_msg_nat_det_map_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address in_addr;
  u8 in_plen;
  vapi_type_ip4_address out_addr;
  u8 out_plen;
  u32 sharing_ratio;
  u16 ports_per_host;
  u32 ses_num; 
} vapi_payload_nat_det_map_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat_det_map_details payload;
} vapi_msg_nat_det_map_details;

static inline void vapi_msg_nat_det_map_details_payload_hton(vapi_payload_nat_det_map_details *payload)
{
  payload->sharing_ratio = htobe32(payload->sharing_ratio);
  payload->ports_per_host = htobe16(payload->ports_per_host);
  payload->ses_num = htobe32(payload->ses_num);
}

static inline void vapi_msg_nat_det_map_details_payload_ntoh(vapi_payload_nat_det_map_details *payload)
{
  payload->sharing_ratio = be32toh(payload->sharing_ratio);
  payload->ports_per_host = be16toh(payload->ports_per_host);
  payload->ses_num = be32toh(payload->ses_num);
}

static inline void vapi_msg_nat_det_map_details_hton(vapi_msg_nat_det_map_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_map_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat_det_map_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_map_details_ntoh(vapi_msg_nat_det_map_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_map_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat_det_map_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_map_details_msg_size(vapi_msg_nat_det_map_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_det_map_details()
{
  static const char name[] = "nat_det_map_details";
  static const char name_with_crc[] = "nat_det_map_details_5cd9ca79";
  static vapi_message_desc_t __vapi_metadata_nat_det_map_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat_det_map_details, payload),
    sizeof(vapi_msg_nat_det_map_details),
    (generic_swap_fn_t)vapi_msg_nat_det_map_details_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_map_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_map_details = vapi_register_msg(&__vapi_metadata_nat_det_map_details);
  VAPI_DBG("Assigned msg id %d to nat_det_map_details", vapi_msg_id_nat_det_map_details);
}

static inline void vapi_set_vapi_msg_nat_det_map_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_det_map_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_det_map_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat_det_map_dump
#define defined_vapi_msg_nat_det_map_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_det_map_dump;

static inline void vapi_msg_nat_det_map_dump_hton(vapi_msg_nat_det_map_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_map_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_det_map_dump_ntoh(vapi_msg_nat_det_map_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_map_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_det_map_dump_msg_size(vapi_msg_nat_det_map_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_det_map_dump* vapi_alloc_nat_det_map_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_det_map_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_det_map_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_det_map_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_det_map_dump);

  return msg;
}

static inline vapi_error_e vapi_nat_det_map_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat_det_map_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_det_map_details *reply),
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
  vapi_msg_nat_det_map_dump_hton(msg);
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
    vapi_msg_nat_det_map_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_det_map_dump()
{
  static const char name[] = "nat_det_map_dump";
  static const char name_with_crc[] = "nat_det_map_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_det_map_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_det_map_dump),
    (generic_swap_fn_t)vapi_msg_nat_det_map_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_map_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_map_dump = vapi_register_msg(&__vapi_metadata_nat_det_map_dump);
  VAPI_DBG("Assigned msg id %d to nat_det_map_dump", vapi_msg_id_nat_det_map_dump);
}
#endif

#ifndef defined_vapi_msg_nat_ha_resync_completed_event
#define defined_vapi_msg_nat_ha_resync_completed_event
typedef struct __attribute__ ((__packed__)) {
  u16 _vl_msg_id;
  u32 client_index;
  u32 pid;
  u32 missed_count; 
} vapi_payload_nat_ha_resync_completed_event;

typedef struct __attribute__ ((__packed__)) {

  vapi_payload_nat_ha_resync_completed_event payload;
} vapi_msg_nat_ha_resync_completed_event;

static inline void vapi_msg_nat_ha_resync_completed_event_payload_hton(vapi_payload_nat_ha_resync_completed_event *payload)
{
  payload->_vl_msg_id = htobe16(payload->_vl_msg_id);
  payload->client_index = htobe32(payload->client_index);
  payload->pid = htobe32(payload->pid);
  payload->missed_count = htobe32(payload->missed_count);
}

static inline void vapi_msg_nat_ha_resync_completed_event_payload_ntoh(vapi_payload_nat_ha_resync_completed_event *payload)
{
  payload->_vl_msg_id = be16toh(payload->_vl_msg_id);
  payload->client_index = be32toh(payload->client_index);
  payload->pid = be32toh(payload->pid);
  payload->missed_count = be32toh(payload->missed_count);
}

static inline void vapi_msg_nat_ha_resync_completed_event_hton(vapi_msg_nat_ha_resync_completed_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_resync_completed_event'@%p to big endian", msg);

  vapi_msg_nat_ha_resync_completed_event_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_ha_resync_completed_event_ntoh(vapi_msg_nat_ha_resync_completed_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_resync_completed_event'@%p to host byte order", msg);

  vapi_msg_nat_ha_resync_completed_event_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_ha_resync_completed_event_msg_size(vapi_msg_nat_ha_resync_completed_event *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat_ha_resync_completed_event()
{
  static const char name[] = "nat_ha_resync_completed_event";
  static const char name_with_crc[] = "nat_ha_resync_completed_event_fdc598fb";
  static vapi_message_desc_t __vapi_metadata_nat_ha_resync_completed_event = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    false,
    0,
    offsetof(vapi_msg_nat_ha_resync_completed_event, payload),
    sizeof(vapi_msg_nat_ha_resync_completed_event),
    (generic_swap_fn_t)vapi_msg_nat_ha_resync_completed_event_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_resync_completed_event_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_resync_completed_event = vapi_register_msg(&__vapi_metadata_nat_ha_resync_completed_event);
  VAPI_DBG("Assigned msg id %d to nat_ha_resync_completed_event", vapi_msg_id_nat_ha_resync_completed_event);
}

static inline void vapi_set_vapi_msg_nat_ha_resync_completed_event_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat_ha_resync_completed_event *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat_ha_resync_completed_event, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_del_session
#define defined_vapi_msg_nat44_del_session
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address address;
  u8 protocol;
  u16 port;
  u32 vrf_id;
  vapi_enum_nat_config_flags flags;
  vapi_type_ip4_address ext_host_address;
  u16 ext_host_port; 
} vapi_payload_nat44_del_session;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_del_session payload;
} vapi_msg_nat44_del_session;

static inline void vapi_msg_nat44_del_session_payload_hton(vapi_payload_nat44_del_session *payload)
{
  payload->port = htobe16(payload->port);
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->ext_host_port = htobe16(payload->ext_host_port);
}

static inline void vapi_msg_nat44_del_session_payload_ntoh(vapi_payload_nat44_del_session *payload)
{
  payload->port = be16toh(payload->port);
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->ext_host_port = be16toh(payload->ext_host_port);
}

static inline void vapi_msg_nat44_del_session_hton(vapi_msg_nat44_del_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_del_session'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_del_session_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_del_session_ntoh(vapi_msg_nat44_del_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_del_session'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_del_session_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_del_session_msg_size(vapi_msg_nat44_del_session *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_del_session* vapi_alloc_nat44_del_session(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_del_session *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_del_session);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_del_session*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_del_session);

  return msg;
}

static inline vapi_error_e vapi_nat44_del_session(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_del_session *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_del_session_reply *reply),
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
  vapi_msg_nat44_del_session_hton(msg);
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
    vapi_msg_nat44_del_session_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_del_session()
{
  static const char name[] = "nat44_del_session";
  static const char name_with_crc[] = "nat44_del_session_138f3174";
  static vapi_message_desc_t __vapi_metadata_nat44_del_session = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_del_session, payload),
    sizeof(vapi_msg_nat44_del_session),
    (generic_swap_fn_t)vapi_msg_nat44_del_session_hton,
    (generic_swap_fn_t)vapi_msg_nat44_del_session_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_del_session = vapi_register_msg(&__vapi_metadata_nat44_del_session);
  VAPI_DBG("Assigned msg id %d to nat44_del_session", vapi_msg_id_nat44_del_session);
}
#endif

#ifndef defined_vapi_msg_nat64_add_del_prefix
#define defined_vapi_msg_nat64_add_del_prefix
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip6_prefix prefix;
  u32 vrf_id;
  bool is_add; 
} vapi_payload_nat64_add_del_prefix;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat64_add_del_prefix payload;
} vapi_msg_nat64_add_del_prefix;

static inline void vapi_msg_nat64_add_del_prefix_payload_hton(vapi_payload_nat64_add_del_prefix *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat64_add_del_prefix_payload_ntoh(vapi_payload_nat64_add_del_prefix *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat64_add_del_prefix_hton(vapi_msg_nat64_add_del_prefix *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_prefix'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat64_add_del_prefix_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_prefix_ntoh(vapi_msg_nat64_add_del_prefix *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_prefix'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_prefix_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_prefix_msg_size(vapi_msg_nat64_add_del_prefix *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_add_del_prefix* vapi_alloc_nat64_add_del_prefix(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_add_del_prefix *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_add_del_prefix);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_add_del_prefix*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_add_del_prefix);

  return msg;
}

static inline vapi_error_e vapi_nat64_add_del_prefix(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_add_del_prefix *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_add_del_prefix_reply *reply),
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
  vapi_msg_nat64_add_del_prefix_hton(msg);
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
    vapi_msg_nat64_add_del_prefix_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_prefix()
{
  static const char name[] = "nat64_add_del_prefix";
  static const char name_with_crc[] = "nat64_add_del_prefix_f1c54efa";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_prefix = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat64_add_del_prefix, payload),
    sizeof(vapi_msg_nat64_add_del_prefix),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_prefix_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_prefix_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_prefix = vapi_register_msg(&__vapi_metadata_nat64_add_del_prefix);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_prefix", vapi_msg_id_nat64_add_del_prefix);
}
#endif

#ifndef defined_vapi_msg_nat_get_addr_and_port_alloc_alg
#define defined_vapi_msg_nat_get_addr_and_port_alloc_alg
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_get_addr_and_port_alloc_alg;

static inline void vapi_msg_nat_get_addr_and_port_alloc_alg_hton(vapi_msg_nat_get_addr_and_port_alloc_alg *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_addr_and_port_alloc_alg'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_get_addr_and_port_alloc_alg_ntoh(vapi_msg_nat_get_addr_and_port_alloc_alg *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_get_addr_and_port_alloc_alg'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_get_addr_and_port_alloc_alg_msg_size(vapi_msg_nat_get_addr_and_port_alloc_alg *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_get_addr_and_port_alloc_alg* vapi_alloc_nat_get_addr_and_port_alloc_alg(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_get_addr_and_port_alloc_alg *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_get_addr_and_port_alloc_alg);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_get_addr_and_port_alloc_alg*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_get_addr_and_port_alloc_alg);

  return msg;
}

static inline vapi_error_e vapi_nat_get_addr_and_port_alloc_alg(struct vapi_ctx_s *ctx,
  vapi_msg_nat_get_addr_and_port_alloc_alg *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_get_addr_and_port_alloc_alg_reply *reply),
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
  vapi_msg_nat_get_addr_and_port_alloc_alg_hton(msg);
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
    vapi_msg_nat_get_addr_and_port_alloc_alg_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_get_addr_and_port_alloc_alg()
{
  static const char name[] = "nat_get_addr_and_port_alloc_alg";
  static const char name_with_crc[] = "nat_get_addr_and_port_alloc_alg_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_get_addr_and_port_alloc_alg = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_get_addr_and_port_alloc_alg),
    (generic_swap_fn_t)vapi_msg_nat_get_addr_and_port_alloc_alg_hton,
    (generic_swap_fn_t)vapi_msg_nat_get_addr_and_port_alloc_alg_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_get_addr_and_port_alloc_alg = vapi_register_msg(&__vapi_metadata_nat_get_addr_and_port_alloc_alg);
  VAPI_DBG("Assigned msg id %d to nat_get_addr_and_port_alloc_alg", vapi_msg_id_nat_get_addr_and_port_alloc_alg);
}
#endif

#ifndef defined_vapi_msg_nat_ha_get_failover
#define defined_vapi_msg_nat_ha_get_failover
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat_ha_get_failover;

static inline void vapi_msg_nat_ha_get_failover_hton(vapi_msg_nat_ha_get_failover *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_failover'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat_ha_get_failover_ntoh(vapi_msg_nat_ha_get_failover *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_ha_get_failover'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat_ha_get_failover_msg_size(vapi_msg_nat_ha_get_failover *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_ha_get_failover* vapi_alloc_nat_ha_get_failover(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_ha_get_failover *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_ha_get_failover);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_ha_get_failover*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_ha_get_failover);

  return msg;
}

static inline vapi_error_e vapi_nat_ha_get_failover(struct vapi_ctx_s *ctx,
  vapi_msg_nat_ha_get_failover *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_ha_get_failover_reply *reply),
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
  vapi_msg_nat_ha_get_failover_hton(msg);
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
    vapi_msg_nat_ha_get_failover_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_ha_get_failover()
{
  static const char name[] = "nat_ha_get_failover";
  static const char name_with_crc[] = "nat_ha_get_failover_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat_ha_get_failover = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat_ha_get_failover),
    (generic_swap_fn_t)vapi_msg_nat_ha_get_failover_hton,
    (generic_swap_fn_t)vapi_msg_nat_ha_get_failover_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_ha_get_failover = vapi_register_msg(&__vapi_metadata_nat_ha_get_failover);
  VAPI_DBG("Assigned msg id %d to nat_ha_get_failover", vapi_msg_id_nat_ha_get_failover);
}
#endif

#ifndef defined_vapi_msg_nat66_static_mapping_details
#define defined_vapi_msg_nat66_static_mapping_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip6_address local_ip_address;
  vapi_type_ip6_address external_ip_address;
  u32 vrf_id;
  u64 total_bytes;
  u64 total_pkts; 
} vapi_payload_nat66_static_mapping_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat66_static_mapping_details payload;
} vapi_msg_nat66_static_mapping_details;

static inline void vapi_msg_nat66_static_mapping_details_payload_hton(vapi_payload_nat66_static_mapping_details *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->total_bytes = htobe64(payload->total_bytes);
  payload->total_pkts = htobe64(payload->total_pkts);
}

static inline void vapi_msg_nat66_static_mapping_details_payload_ntoh(vapi_payload_nat66_static_mapping_details *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->total_bytes = be64toh(payload->total_bytes);
  payload->total_pkts = be64toh(payload->total_pkts);
}

static inline void vapi_msg_nat66_static_mapping_details_hton(vapi_msg_nat66_static_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_static_mapping_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat66_static_mapping_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat66_static_mapping_details_ntoh(vapi_msg_nat66_static_mapping_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_static_mapping_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat66_static_mapping_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat66_static_mapping_details_msg_size(vapi_msg_nat66_static_mapping_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat66_static_mapping_details()
{
  static const char name[] = "nat66_static_mapping_details";
  static const char name_with_crc[] = "nat66_static_mapping_details_5e1189f9";
  static vapi_message_desc_t __vapi_metadata_nat66_static_mapping_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat66_static_mapping_details, payload),
    sizeof(vapi_msg_nat66_static_mapping_details),
    (generic_swap_fn_t)vapi_msg_nat66_static_mapping_details_hton,
    (generic_swap_fn_t)vapi_msg_nat66_static_mapping_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_static_mapping_details = vapi_register_msg(&__vapi_metadata_nat66_static_mapping_details);
  VAPI_DBG("Assigned msg id %d to nat66_static_mapping_details", vapi_msg_id_nat66_static_mapping_details);
}

static inline void vapi_set_vapi_msg_nat66_static_mapping_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat66_static_mapping_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat66_static_mapping_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat66_static_mapping_dump
#define defined_vapi_msg_nat66_static_mapping_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat66_static_mapping_dump;

static inline void vapi_msg_nat66_static_mapping_dump_hton(vapi_msg_nat66_static_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_static_mapping_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat66_static_mapping_dump_ntoh(vapi_msg_nat66_static_mapping_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_static_mapping_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat66_static_mapping_dump_msg_size(vapi_msg_nat66_static_mapping_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat66_static_mapping_dump* vapi_alloc_nat66_static_mapping_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat66_static_mapping_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat66_static_mapping_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat66_static_mapping_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat66_static_mapping_dump);

  return msg;
}

static inline vapi_error_e vapi_nat66_static_mapping_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat66_static_mapping_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat66_static_mapping_details *reply),
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
  vapi_msg_nat66_static_mapping_dump_hton(msg);
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
    vapi_msg_nat66_static_mapping_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat66_static_mapping_dump()
{
  static const char name[] = "nat66_static_mapping_dump";
  static const char name_with_crc[] = "nat66_static_mapping_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat66_static_mapping_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat66_static_mapping_dump),
    (generic_swap_fn_t)vapi_msg_nat66_static_mapping_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat66_static_mapping_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_static_mapping_dump = vapi_register_msg(&__vapi_metadata_nat66_static_mapping_dump);
  VAPI_DBG("Assigned msg id %d to nat66_static_mapping_dump", vapi_msg_id_nat66_static_mapping_dump);
}
#endif

#ifndef defined_vapi_msg_dslite_set_b4_addr
#define defined_vapi_msg_dslite_set_b4_addr
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address ip4_addr;
  vapi_type_ip6_address ip6_addr; 
} vapi_payload_dslite_set_b4_addr;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_dslite_set_b4_addr payload;
} vapi_msg_dslite_set_b4_addr;

static inline void vapi_msg_dslite_set_b4_addr_payload_hton(vapi_payload_dslite_set_b4_addr *payload)
{

}

static inline void vapi_msg_dslite_set_b4_addr_payload_ntoh(vapi_payload_dslite_set_b4_addr *payload)
{

}

static inline void vapi_msg_dslite_set_b4_addr_hton(vapi_msg_dslite_set_b4_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_b4_addr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_dslite_set_b4_addr_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_set_b4_addr_ntoh(vapi_msg_dslite_set_b4_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_b4_addr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_dslite_set_b4_addr_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_set_b4_addr_msg_size(vapi_msg_dslite_set_b4_addr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_dslite_set_b4_addr* vapi_alloc_dslite_set_b4_addr(struct vapi_ctx_s *ctx)
{
  vapi_msg_dslite_set_b4_addr *msg = NULL;
  const size_t size = sizeof(vapi_msg_dslite_set_b4_addr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_dslite_set_b4_addr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_dslite_set_b4_addr);

  return msg;
}

static inline vapi_error_e vapi_dslite_set_b4_addr(struct vapi_ctx_s *ctx,
  vapi_msg_dslite_set_b4_addr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_dslite_set_b4_addr_reply *reply),
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
  vapi_msg_dslite_set_b4_addr_hton(msg);
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
    vapi_msg_dslite_set_b4_addr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_dslite_set_b4_addr()
{
  static const char name[] = "dslite_set_b4_addr";
  static const char name_with_crc[] = "dslite_set_b4_addr_ac3d29bd";
  static vapi_message_desc_t __vapi_metadata_dslite_set_b4_addr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_dslite_set_b4_addr, payload),
    sizeof(vapi_msg_dslite_set_b4_addr),
    (generic_swap_fn_t)vapi_msg_dslite_set_b4_addr_hton,
    (generic_swap_fn_t)vapi_msg_dslite_set_b4_addr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_set_b4_addr = vapi_register_msg(&__vapi_metadata_dslite_set_b4_addr);
  VAPI_DBG("Assigned msg id %d to dslite_set_b4_addr", vapi_msg_id_dslite_set_b4_addr);
}
#endif

#ifndef defined_vapi_msg_nat_det_close_session_out
#define defined_vapi_msg_nat_det_close_session_out
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address out_addr;
  u16 out_port;
  vapi_type_ip4_address ext_addr;
  u16 ext_port; 
} vapi_payload_nat_det_close_session_out;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_det_close_session_out payload;
} vapi_msg_nat_det_close_session_out;

static inline void vapi_msg_nat_det_close_session_out_payload_hton(vapi_payload_nat_det_close_session_out *payload)
{
  payload->out_port = htobe16(payload->out_port);
  payload->ext_port = htobe16(payload->ext_port);
}

static inline void vapi_msg_nat_det_close_session_out_payload_ntoh(vapi_payload_nat_det_close_session_out *payload)
{
  payload->out_port = be16toh(payload->out_port);
  payload->ext_port = be16toh(payload->ext_port);
}

static inline void vapi_msg_nat_det_close_session_out_hton(vapi_msg_nat_det_close_session_out *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_out'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_det_close_session_out_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_close_session_out_ntoh(vapi_msg_nat_det_close_session_out *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_close_session_out'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_det_close_session_out_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_close_session_out_msg_size(vapi_msg_nat_det_close_session_out *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_det_close_session_out* vapi_alloc_nat_det_close_session_out(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_det_close_session_out *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_det_close_session_out);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_det_close_session_out*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_det_close_session_out);

  return msg;
}

static inline vapi_error_e vapi_nat_det_close_session_out(struct vapi_ctx_s *ctx,
  vapi_msg_nat_det_close_session_out *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_det_close_session_out_reply *reply),
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
  vapi_msg_nat_det_close_session_out_hton(msg);
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
    vapi_msg_nat_det_close_session_out_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_det_close_session_out()
{
  static const char name[] = "nat_det_close_session_out";
  static const char name_with_crc[] = "nat_det_close_session_out_be61efd5";
  static vapi_message_desc_t __vapi_metadata_nat_det_close_session_out = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_det_close_session_out, payload),
    sizeof(vapi_msg_nat_det_close_session_out),
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_out_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_close_session_out_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_close_session_out = vapi_register_msg(&__vapi_metadata_nat_det_close_session_out);
  VAPI_DBG("Assigned msg id %d to nat_det_close_session_out", vapi_msg_id_nat_det_close_session_out);
}
#endif

#ifndef defined_vapi_msg_nat66_add_del_interface
#define defined_vapi_msg_nat66_add_del_interface
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat66_add_del_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat66_add_del_interface payload;
} vapi_msg_nat66_add_del_interface;

static inline void vapi_msg_nat66_add_del_interface_payload_hton(vapi_payload_nat66_add_del_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat66_add_del_interface_payload_ntoh(vapi_payload_nat66_add_del_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat66_add_del_interface_hton(vapi_msg_nat66_add_del_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat66_add_del_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat66_add_del_interface_ntoh(vapi_msg_nat66_add_del_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat66_add_del_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat66_add_del_interface_msg_size(vapi_msg_nat66_add_del_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat66_add_del_interface* vapi_alloc_nat66_add_del_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat66_add_del_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat66_add_del_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat66_add_del_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat66_add_del_interface);

  return msg;
}

static inline vapi_error_e vapi_nat66_add_del_interface(struct vapi_ctx_s *ctx,
  vapi_msg_nat66_add_del_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat66_add_del_interface_reply *reply),
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
  vapi_msg_nat66_add_del_interface_hton(msg);
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
    vapi_msg_nat66_add_del_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat66_add_del_interface()
{
  static const char name[] = "nat66_add_del_interface";
  static const char name_with_crc[] = "nat66_add_del_interface_ef3edad1";
  static vapi_message_desc_t __vapi_metadata_nat66_add_del_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat66_add_del_interface, payload),
    sizeof(vapi_msg_nat66_add_del_interface),
    (generic_swap_fn_t)vapi_msg_nat66_add_del_interface_hton,
    (generic_swap_fn_t)vapi_msg_nat66_add_del_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_add_del_interface = vapi_register_msg(&__vapi_metadata_nat66_add_del_interface);
  VAPI_DBG("Assigned msg id %d to nat66_add_del_interface", vapi_msg_id_nat66_add_del_interface);
}
#endif

#ifndef defined_vapi_msg_nat64_add_del_static_bib
#define defined_vapi_msg_nat64_add_del_static_bib
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip6_address i_addr;
  vapi_type_ip4_address o_addr;
  u16 i_port;
  u16 o_port;
  u32 vrf_id;
  u8 proto;
  bool is_add; 
} vapi_payload_nat64_add_del_static_bib;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat64_add_del_static_bib payload;
} vapi_msg_nat64_add_del_static_bib;

static inline void vapi_msg_nat64_add_del_static_bib_payload_hton(vapi_payload_nat64_add_del_static_bib *payload)
{
  payload->i_port = htobe16(payload->i_port);
  payload->o_port = htobe16(payload->o_port);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat64_add_del_static_bib_payload_ntoh(vapi_payload_nat64_add_del_static_bib *payload)
{
  payload->i_port = be16toh(payload->i_port);
  payload->o_port = be16toh(payload->o_port);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat64_add_del_static_bib_hton(vapi_msg_nat64_add_del_static_bib *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_static_bib'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat64_add_del_static_bib_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_add_del_static_bib_ntoh(vapi_msg_nat64_add_del_static_bib *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_add_del_static_bib'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat64_add_del_static_bib_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_add_del_static_bib_msg_size(vapi_msg_nat64_add_del_static_bib *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_add_del_static_bib* vapi_alloc_nat64_add_del_static_bib(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_add_del_static_bib *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_add_del_static_bib);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_add_del_static_bib*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_add_del_static_bib);

  return msg;
}

static inline vapi_error_e vapi_nat64_add_del_static_bib(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_add_del_static_bib *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_add_del_static_bib_reply *reply),
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
  vapi_msg_nat64_add_del_static_bib_hton(msg);
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
    vapi_msg_nat64_add_del_static_bib_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_add_del_static_bib()
{
  static const char name[] = "nat64_add_del_static_bib";
  static const char name_with_crc[] = "nat64_add_del_static_bib_42a44519";
  static vapi_message_desc_t __vapi_metadata_nat64_add_del_static_bib = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat64_add_del_static_bib, payload),
    sizeof(vapi_msg_nat64_add_del_static_bib),
    (generic_swap_fn_t)vapi_msg_nat64_add_del_static_bib_hton,
    (generic_swap_fn_t)vapi_msg_nat64_add_del_static_bib_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_add_del_static_bib = vapi_register_msg(&__vapi_metadata_nat64_add_del_static_bib);
  VAPI_DBG("Assigned msg id %d to nat64_add_del_static_bib", vapi_msg_id_nat64_add_del_static_bib);
}
#endif

#ifndef defined_vapi_msg_nat44_interface_add_del_output_feature
#define defined_vapi_msg_nat44_interface_add_del_output_feature
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_nat_config_flags flags;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_nat44_interface_add_del_output_feature;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_interface_add_del_output_feature payload;
} vapi_msg_nat44_interface_add_del_output_feature;

static inline void vapi_msg_nat44_interface_add_del_output_feature_payload_hton(vapi_payload_nat44_interface_add_del_output_feature *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_add_del_output_feature_payload_ntoh(vapi_payload_nat44_interface_add_del_output_feature *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat44_interface_add_del_output_feature_hton(vapi_msg_nat44_interface_add_del_output_feature *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_output_feature'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_interface_add_del_output_feature_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_interface_add_del_output_feature_ntoh(vapi_msg_nat44_interface_add_del_output_feature *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_interface_add_del_output_feature'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_interface_add_del_output_feature_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_interface_add_del_output_feature_msg_size(vapi_msg_nat44_interface_add_del_output_feature *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_interface_add_del_output_feature* vapi_alloc_nat44_interface_add_del_output_feature(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_interface_add_del_output_feature *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_interface_add_del_output_feature);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_interface_add_del_output_feature*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_interface_add_del_output_feature);

  return msg;
}

static inline vapi_error_e vapi_nat44_interface_add_del_output_feature(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_interface_add_del_output_feature *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_interface_add_del_output_feature_reply *reply),
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
  vapi_msg_nat44_interface_add_del_output_feature_hton(msg);
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
    vapi_msg_nat44_interface_add_del_output_feature_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_interface_add_del_output_feature()
{
  static const char name[] = "nat44_interface_add_del_output_feature";
  static const char name_with_crc[] = "nat44_interface_add_del_output_feature_ef3edad1";
  static vapi_message_desc_t __vapi_metadata_nat44_interface_add_del_output_feature = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_interface_add_del_output_feature, payload),
    sizeof(vapi_msg_nat44_interface_add_del_output_feature),
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_output_feature_hton,
    (generic_swap_fn_t)vapi_msg_nat44_interface_add_del_output_feature_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_interface_add_del_output_feature = vapi_register_msg(&__vapi_metadata_nat44_interface_add_del_output_feature);
  VAPI_DBG("Assigned msg id %d to nat44_interface_add_del_output_feature", vapi_msg_id_nat44_interface_add_del_output_feature);
}
#endif

#ifndef defined_vapi_msg_nat44_add_del_static_mapping_reply
#define defined_vapi_msg_nat44_add_del_static_mapping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_add_del_static_mapping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_add_del_static_mapping_reply payload;
} vapi_msg_nat44_add_del_static_mapping_reply;

static inline void vapi_msg_nat44_add_del_static_mapping_reply_payload_hton(vapi_payload_nat44_add_del_static_mapping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_add_del_static_mapping_reply_payload_ntoh(vapi_payload_nat44_add_del_static_mapping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_add_del_static_mapping_reply_hton(vapi_msg_nat44_add_del_static_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_static_mapping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_add_del_static_mapping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_static_mapping_reply_ntoh(vapi_msg_nat44_add_del_static_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_static_mapping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_static_mapping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_static_mapping_reply_msg_size(vapi_msg_nat44_add_del_static_mapping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_static_mapping_reply()
{
  static const char name[] = "nat44_add_del_static_mapping_reply";
  static const char name_with_crc[] = "nat44_add_del_static_mapping_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_static_mapping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_add_del_static_mapping_reply, payload),
    sizeof(vapi_msg_nat44_add_del_static_mapping_reply),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_static_mapping_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_static_mapping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_static_mapping_reply = vapi_register_msg(&__vapi_metadata_nat44_add_del_static_mapping_reply);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_static_mapping_reply", vapi_msg_id_nat44_add_del_static_mapping_reply);
}

static inline void vapi_set_vapi_msg_nat44_add_del_static_mapping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_add_del_static_mapping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_add_del_static_mapping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat44_add_del_interface_addr_reply
#define defined_vapi_msg_nat44_add_del_interface_addr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_nat44_add_del_interface_addr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_nat44_add_del_interface_addr_reply payload;
} vapi_msg_nat44_add_del_interface_addr_reply;

static inline void vapi_msg_nat44_add_del_interface_addr_reply_payload_hton(vapi_payload_nat44_add_del_interface_addr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_nat44_add_del_interface_addr_reply_payload_ntoh(vapi_payload_nat44_add_del_interface_addr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_nat44_add_del_interface_addr_reply_hton(vapi_msg_nat44_add_del_interface_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_interface_addr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_nat44_add_del_interface_addr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_interface_addr_reply_ntoh(vapi_msg_nat44_add_del_interface_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_interface_addr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_interface_addr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_interface_addr_reply_msg_size(vapi_msg_nat44_add_del_interface_addr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_interface_addr_reply()
{
  static const char name[] = "nat44_add_del_interface_addr_reply";
  static const char name_with_crc[] = "nat44_add_del_interface_addr_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_interface_addr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_nat44_add_del_interface_addr_reply, payload),
    sizeof(vapi_msg_nat44_add_del_interface_addr_reply),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_interface_addr_reply_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_interface_addr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_interface_addr_reply = vapi_register_msg(&__vapi_metadata_nat44_add_del_interface_addr_reply);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_interface_addr_reply", vapi_msg_id_nat44_add_del_interface_addr_reply);
}

static inline void vapi_set_vapi_msg_nat44_add_del_interface_addr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_nat44_add_del_interface_addr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_nat44_add_del_interface_addr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_nat66_add_del_static_mapping
#define defined_vapi_msg_nat66_add_del_static_mapping
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_ip6_address local_ip_address;
  vapi_type_ip6_address external_ip_address;
  u32 vrf_id; 
} vapi_payload_nat66_add_del_static_mapping;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat66_add_del_static_mapping payload;
} vapi_msg_nat66_add_del_static_mapping;

static inline void vapi_msg_nat66_add_del_static_mapping_payload_hton(vapi_payload_nat66_add_del_static_mapping *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat66_add_del_static_mapping_payload_ntoh(vapi_payload_nat66_add_del_static_mapping *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat66_add_del_static_mapping_hton(vapi_msg_nat66_add_del_static_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_static_mapping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat66_add_del_static_mapping_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat66_add_del_static_mapping_ntoh(vapi_msg_nat66_add_del_static_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_add_del_static_mapping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat66_add_del_static_mapping_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat66_add_del_static_mapping_msg_size(vapi_msg_nat66_add_del_static_mapping *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat66_add_del_static_mapping* vapi_alloc_nat66_add_del_static_mapping(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat66_add_del_static_mapping *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat66_add_del_static_mapping);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat66_add_del_static_mapping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat66_add_del_static_mapping);

  return msg;
}

static inline vapi_error_e vapi_nat66_add_del_static_mapping(struct vapi_ctx_s *ctx,
  vapi_msg_nat66_add_del_static_mapping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat66_add_del_static_mapping_reply *reply),
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
  vapi_msg_nat66_add_del_static_mapping_hton(msg);
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
    vapi_msg_nat66_add_del_static_mapping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat66_add_del_static_mapping()
{
  static const char name[] = "nat66_add_del_static_mapping";
  static const char name_with_crc[] = "nat66_add_del_static_mapping_1c15424e";
  static vapi_message_desc_t __vapi_metadata_nat66_add_del_static_mapping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat66_add_del_static_mapping, payload),
    sizeof(vapi_msg_nat66_add_del_static_mapping),
    (generic_swap_fn_t)vapi_msg_nat66_add_del_static_mapping_hton,
    (generic_swap_fn_t)vapi_msg_nat66_add_del_static_mapping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_add_del_static_mapping = vapi_register_msg(&__vapi_metadata_nat66_add_del_static_mapping);
  VAPI_DBG("Assigned msg id %d to nat66_add_del_static_mapping", vapi_msg_id_nat66_add_del_static_mapping);
}
#endif

#ifndef defined_vapi_msg_nat44_add_del_interface_addr
#define defined_vapi_msg_nat44_add_del_interface_addr
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_interface_index sw_if_index;
  vapi_enum_nat_config_flags flags; 
} vapi_payload_nat44_add_del_interface_addr;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_add_del_interface_addr payload;
} vapi_msg_nat44_add_del_interface_addr;

static inline void vapi_msg_nat44_add_del_interface_addr_payload_hton(vapi_payload_nat44_add_del_interface_addr *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_nat44_add_del_interface_addr_payload_ntoh(vapi_payload_nat44_add_del_interface_addr *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_nat44_add_del_interface_addr_hton(vapi_msg_nat44_add_del_interface_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_interface_addr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_add_del_interface_addr_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_interface_addr_ntoh(vapi_msg_nat44_add_del_interface_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_interface_addr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_interface_addr_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_interface_addr_msg_size(vapi_msg_nat44_add_del_interface_addr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_add_del_interface_addr* vapi_alloc_nat44_add_del_interface_addr(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_add_del_interface_addr *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_add_del_interface_addr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_add_del_interface_addr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_add_del_interface_addr);

  return msg;
}

static inline vapi_error_e vapi_nat44_add_del_interface_addr(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_add_del_interface_addr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_add_del_interface_addr_reply *reply),
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
  vapi_msg_nat44_add_del_interface_addr_hton(msg);
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
    vapi_msg_nat44_add_del_interface_addr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_interface_addr()
{
  static const char name[] = "nat44_add_del_interface_addr";
  static const char name_with_crc[] = "nat44_add_del_interface_addr_296a5cc4";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_interface_addr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_add_del_interface_addr, payload),
    sizeof(vapi_msg_nat44_add_del_interface_addr),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_interface_addr_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_interface_addr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_interface_addr = vapi_register_msg(&__vapi_metadata_nat44_add_del_interface_addr);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_interface_addr", vapi_msg_id_nat44_add_del_interface_addr);
}
#endif

#ifndef defined_vapi_msg_nat66_interface_dump
#define defined_vapi_msg_nat66_interface_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_nat66_interface_dump;

static inline void vapi_msg_nat66_interface_dump_hton(vapi_msg_nat66_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_interface_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_nat66_interface_dump_ntoh(vapi_msg_nat66_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat66_interface_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_nat66_interface_dump_msg_size(vapi_msg_nat66_interface_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat66_interface_dump* vapi_alloc_nat66_interface_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat66_interface_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat66_interface_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat66_interface_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat66_interface_dump);

  return msg;
}

static inline vapi_error_e vapi_nat66_interface_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat66_interface_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat66_interface_details *reply),
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
  vapi_msg_nat66_interface_dump_hton(msg);
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
    vapi_msg_nat66_interface_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat66_interface_dump()
{
  static const char name[] = "nat66_interface_dump";
  static const char name_with_crc[] = "nat66_interface_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_nat66_interface_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_nat66_interface_dump),
    (generic_swap_fn_t)vapi_msg_nat66_interface_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat66_interface_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat66_interface_dump = vapi_register_msg(&__vapi_metadata_nat66_interface_dump);
  VAPI_DBG("Assigned msg id %d to nat66_interface_dump", vapi_msg_id_nat66_interface_dump);
}
#endif

#ifndef defined_vapi_msg_nat64_st_dump
#define defined_vapi_msg_nat64_st_dump
typedef struct __attribute__ ((__packed__)) {
  u8 proto; 
} vapi_payload_nat64_st_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat64_st_dump payload;
} vapi_msg_nat64_st_dump;

static inline void vapi_msg_nat64_st_dump_payload_hton(vapi_payload_nat64_st_dump *payload)
{

}

static inline void vapi_msg_nat64_st_dump_payload_ntoh(vapi_payload_nat64_st_dump *payload)
{

}

static inline void vapi_msg_nat64_st_dump_hton(vapi_msg_nat64_st_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_st_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat64_st_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat64_st_dump_ntoh(vapi_msg_nat64_st_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat64_st_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat64_st_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat64_st_dump_msg_size(vapi_msg_nat64_st_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat64_st_dump* vapi_alloc_nat64_st_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat64_st_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat64_st_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat64_st_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat64_st_dump);

  return msg;
}

static inline vapi_error_e vapi_nat64_st_dump(struct vapi_ctx_s *ctx,
  vapi_msg_nat64_st_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat64_st_details *reply),
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
  vapi_msg_nat64_st_dump_hton(msg);
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
    vapi_msg_nat64_st_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat64_st_dump()
{
  static const char name[] = "nat64_st_dump";
  static const char name_with_crc[] = "nat64_st_dump_cfcb6b75";
  static vapi_message_desc_t __vapi_metadata_nat64_st_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat64_st_dump, payload),
    sizeof(vapi_msg_nat64_st_dump),
    (generic_swap_fn_t)vapi_msg_nat64_st_dump_hton,
    (generic_swap_fn_t)vapi_msg_nat64_st_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat64_st_dump = vapi_register_msg(&__vapi_metadata_nat64_st_dump);
  VAPI_DBG("Assigned msg id %d to nat64_st_dump", vapi_msg_id_nat64_st_dump);
}
#endif

#ifndef defined_vapi_msg_nat44_add_del_identity_mapping
#define defined_vapi_msg_nat44_add_del_identity_mapping
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_nat_config_flags flags;
  vapi_type_ip4_address ip_address;
  u8 protocol;
  u16 port;
  vapi_type_interface_index sw_if_index;
  u32 vrf_id;
  vl_api_string_t tag; 
} vapi_payload_nat44_add_del_identity_mapping;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_add_del_identity_mapping payload;
} vapi_msg_nat44_add_del_identity_mapping;

static inline void vapi_msg_nat44_add_del_identity_mapping_payload_hton(vapi_payload_nat44_add_del_identity_mapping *payload)
{
  payload->port = htobe16(payload->port);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat44_add_del_identity_mapping_payload_ntoh(vapi_payload_nat44_add_del_identity_mapping *payload)
{
  payload->port = be16toh(payload->port);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat44_add_del_identity_mapping_hton(vapi_msg_nat44_add_del_identity_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_identity_mapping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_add_del_identity_mapping_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_identity_mapping_ntoh(vapi_msg_nat44_add_del_identity_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_identity_mapping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_identity_mapping_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_identity_mapping_msg_size(vapi_msg_nat44_add_del_identity_mapping *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_add_del_identity_mapping* vapi_alloc_nat44_add_del_identity_mapping(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_add_del_identity_mapping *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_add_del_identity_mapping);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_add_del_identity_mapping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_add_del_identity_mapping);

  return msg;
}

static inline vapi_error_e vapi_nat44_add_del_identity_mapping(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_add_del_identity_mapping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_add_del_identity_mapping_reply *reply),
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
  vapi_msg_nat44_add_del_identity_mapping_hton(msg);
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
    vapi_msg_nat44_add_del_identity_mapping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_identity_mapping()
{
  static const char name[] = "nat44_add_del_identity_mapping";
  static const char name_with_crc[] = "nat44_add_del_identity_mapping_27cfdf6a";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_identity_mapping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_add_del_identity_mapping, payload),
    sizeof(vapi_msg_nat44_add_del_identity_mapping),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_identity_mapping_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_identity_mapping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_identity_mapping = vapi_register_msg(&__vapi_metadata_nat44_add_del_identity_mapping);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_identity_mapping", vapi_msg_id_nat44_add_del_identity_mapping);
}
#endif

#ifndef defined_vapi_msg_dslite_set_aftr_addr_reply
#define defined_vapi_msg_dslite_set_aftr_addr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_dslite_set_aftr_addr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_dslite_set_aftr_addr_reply payload;
} vapi_msg_dslite_set_aftr_addr_reply;

static inline void vapi_msg_dslite_set_aftr_addr_reply_payload_hton(vapi_payload_dslite_set_aftr_addr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_dslite_set_aftr_addr_reply_payload_ntoh(vapi_payload_dslite_set_aftr_addr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_dslite_set_aftr_addr_reply_hton(vapi_msg_dslite_set_aftr_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_aftr_addr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_dslite_set_aftr_addr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_set_aftr_addr_reply_ntoh(vapi_msg_dslite_set_aftr_addr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_aftr_addr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_dslite_set_aftr_addr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_set_aftr_addr_reply_msg_size(vapi_msg_dslite_set_aftr_addr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_dslite_set_aftr_addr_reply()
{
  static const char name[] = "dslite_set_aftr_addr_reply";
  static const char name_with_crc[] = "dslite_set_aftr_addr_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_dslite_set_aftr_addr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_dslite_set_aftr_addr_reply, payload),
    sizeof(vapi_msg_dslite_set_aftr_addr_reply),
    (generic_swap_fn_t)vapi_msg_dslite_set_aftr_addr_reply_hton,
    (generic_swap_fn_t)vapi_msg_dslite_set_aftr_addr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_set_aftr_addr_reply = vapi_register_msg(&__vapi_metadata_dslite_set_aftr_addr_reply);
  VAPI_DBG("Assigned msg id %d to dslite_set_aftr_addr_reply", vapi_msg_id_dslite_set_aftr_addr_reply);
}

static inline void vapi_set_vapi_msg_dslite_set_aftr_addr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_dslite_set_aftr_addr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_dslite_set_aftr_addr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_dslite_set_aftr_addr
#define defined_vapi_msg_dslite_set_aftr_addr
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address ip4_addr;
  vapi_type_ip6_address ip6_addr; 
} vapi_payload_dslite_set_aftr_addr;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_dslite_set_aftr_addr payload;
} vapi_msg_dslite_set_aftr_addr;

static inline void vapi_msg_dslite_set_aftr_addr_payload_hton(vapi_payload_dslite_set_aftr_addr *payload)
{

}

static inline void vapi_msg_dslite_set_aftr_addr_payload_ntoh(vapi_payload_dslite_set_aftr_addr *payload)
{

}

static inline void vapi_msg_dslite_set_aftr_addr_hton(vapi_msg_dslite_set_aftr_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_aftr_addr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_dslite_set_aftr_addr_payload_hton(&msg->payload);
}

static inline void vapi_msg_dslite_set_aftr_addr_ntoh(vapi_msg_dslite_set_aftr_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_set_aftr_addr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_dslite_set_aftr_addr_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_dslite_set_aftr_addr_msg_size(vapi_msg_dslite_set_aftr_addr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_dslite_set_aftr_addr* vapi_alloc_dslite_set_aftr_addr(struct vapi_ctx_s *ctx)
{
  vapi_msg_dslite_set_aftr_addr *msg = NULL;
  const size_t size = sizeof(vapi_msg_dslite_set_aftr_addr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_dslite_set_aftr_addr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_dslite_set_aftr_addr);

  return msg;
}

static inline vapi_error_e vapi_dslite_set_aftr_addr(struct vapi_ctx_s *ctx,
  vapi_msg_dslite_set_aftr_addr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_dslite_set_aftr_addr_reply *reply),
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
  vapi_msg_dslite_set_aftr_addr_hton(msg);
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
    vapi_msg_dslite_set_aftr_addr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_dslite_set_aftr_addr()
{
  static const char name[] = "dslite_set_aftr_addr";
  static const char name_with_crc[] = "dslite_set_aftr_addr_ac3d29bd";
  static vapi_message_desc_t __vapi_metadata_dslite_set_aftr_addr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_dslite_set_aftr_addr, payload),
    sizeof(vapi_msg_dslite_set_aftr_addr),
    (generic_swap_fn_t)vapi_msg_dslite_set_aftr_addr_hton,
    (generic_swap_fn_t)vapi_msg_dslite_set_aftr_addr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_set_aftr_addr = vapi_register_msg(&__vapi_metadata_dslite_set_aftr_addr);
  VAPI_DBG("Assigned msg id %d to dslite_set_aftr_addr", vapi_msg_id_dslite_set_aftr_addr);
}
#endif

#ifndef defined_vapi_msg_nat44_add_del_address_range
#define defined_vapi_msg_nat44_add_del_address_range
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ip4_address first_ip_address;
  vapi_type_ip4_address last_ip_address;
  u32 vrf_id;
  bool is_add;
  vapi_enum_nat_config_flags flags; 
} vapi_payload_nat44_add_del_address_range;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_add_del_address_range payload;
} vapi_msg_nat44_add_del_address_range;

static inline void vapi_msg_nat44_add_del_address_range_payload_hton(vapi_payload_nat44_add_del_address_range *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat44_add_del_address_range_payload_ntoh(vapi_payload_nat44_add_del_address_range *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat44_add_del_address_range_hton(vapi_msg_nat44_add_del_address_range *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_address_range'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_add_del_address_range_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_address_range_ntoh(vapi_msg_nat44_add_del_address_range *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_address_range'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_address_range_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_address_range_msg_size(vapi_msg_nat44_add_del_address_range *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_add_del_address_range* vapi_alloc_nat44_add_del_address_range(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_add_del_address_range *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_add_del_address_range);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_add_del_address_range*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_add_del_address_range);

  return msg;
}

static inline vapi_error_e vapi_nat44_add_del_address_range(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_add_del_address_range *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_add_del_address_range_reply *reply),
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
  vapi_msg_nat44_add_del_address_range_hton(msg);
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
    vapi_msg_nat44_add_del_address_range_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_address_range()
{
  static const char name[] = "nat44_add_del_address_range";
  static const char name_with_crc[] = "nat44_add_del_address_range_b9406f1f";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_address_range = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_add_del_address_range, payload),
    sizeof(vapi_msg_nat44_add_del_address_range),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_address_range_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_address_range_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_address_range = vapi_register_msg(&__vapi_metadata_nat44_add_del_address_range);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_address_range", vapi_msg_id_nat44_add_del_address_range);
}
#endif

#ifndef defined_vapi_msg_nat_det_reverse
#define defined_vapi_msg_nat_det_reverse
typedef struct __attribute__ ((__packed__)) {
  u16 out_port;
  vapi_type_ip4_address out_addr; 
} vapi_payload_nat_det_reverse;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat_det_reverse payload;
} vapi_msg_nat_det_reverse;

static inline void vapi_msg_nat_det_reverse_payload_hton(vapi_payload_nat_det_reverse *payload)
{
  payload->out_port = htobe16(payload->out_port);
}

static inline void vapi_msg_nat_det_reverse_payload_ntoh(vapi_payload_nat_det_reverse *payload)
{
  payload->out_port = be16toh(payload->out_port);
}

static inline void vapi_msg_nat_det_reverse_hton(vapi_msg_nat_det_reverse *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_reverse'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat_det_reverse_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat_det_reverse_ntoh(vapi_msg_nat_det_reverse *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat_det_reverse'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat_det_reverse_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat_det_reverse_msg_size(vapi_msg_nat_det_reverse *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat_det_reverse* vapi_alloc_nat_det_reverse(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat_det_reverse *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat_det_reverse);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat_det_reverse*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat_det_reverse);

  return msg;
}

static inline vapi_error_e vapi_nat_det_reverse(struct vapi_ctx_s *ctx,
  vapi_msg_nat_det_reverse *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat_det_reverse_reply *reply),
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
  vapi_msg_nat_det_reverse_hton(msg);
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
    vapi_msg_nat_det_reverse_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat_det_reverse()
{
  static const char name[] = "nat_det_reverse";
  static const char name_with_crc[] = "nat_det_reverse_c99c32db";
  static vapi_message_desc_t __vapi_metadata_nat_det_reverse = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat_det_reverse, payload),
    sizeof(vapi_msg_nat_det_reverse),
    (generic_swap_fn_t)vapi_msg_nat_det_reverse_hton,
    (generic_swap_fn_t)vapi_msg_nat_det_reverse_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat_det_reverse = vapi_register_msg(&__vapi_metadata_nat_det_reverse);
  VAPI_DBG("Assigned msg id %d to nat_det_reverse", vapi_msg_id_nat_det_reverse);
}
#endif

#ifndef defined_vapi_msg_nat44_add_del_static_mapping
#define defined_vapi_msg_nat44_add_del_static_mapping
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_nat_config_flags flags;
  vapi_type_ip4_address local_ip_address;
  vapi_type_ip4_address external_ip_address;
  u8 protocol;
  u16 local_port;
  u16 external_port;
  vapi_type_interface_index external_sw_if_index;
  u32 vrf_id;
  vl_api_string_t tag; 
} vapi_payload_nat44_add_del_static_mapping;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_add_del_static_mapping payload;
} vapi_msg_nat44_add_del_static_mapping;

static inline void vapi_msg_nat44_add_del_static_mapping_payload_hton(vapi_payload_nat44_add_del_static_mapping *payload)
{
  payload->local_port = htobe16(payload->local_port);
  payload->external_port = htobe16(payload->external_port);
  payload->external_sw_if_index = htobe32(payload->external_sw_if_index);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_nat44_add_del_static_mapping_payload_ntoh(vapi_payload_nat44_add_del_static_mapping *payload)
{
  payload->local_port = be16toh(payload->local_port);
  payload->external_port = be16toh(payload->external_port);
  payload->external_sw_if_index = be32toh(payload->external_sw_if_index);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_nat44_add_del_static_mapping_hton(vapi_msg_nat44_add_del_static_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_static_mapping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_add_del_static_mapping_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_add_del_static_mapping_ntoh(vapi_msg_nat44_add_del_static_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_add_del_static_mapping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_add_del_static_mapping_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_add_del_static_mapping_msg_size(vapi_msg_nat44_add_del_static_mapping *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_add_del_static_mapping* vapi_alloc_nat44_add_del_static_mapping(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_add_del_static_mapping *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_add_del_static_mapping);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_add_del_static_mapping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_add_del_static_mapping);

  return msg;
}

static inline vapi_error_e vapi_nat44_add_del_static_mapping(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_add_del_static_mapping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_add_del_static_mapping_reply *reply),
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
  vapi_msg_nat44_add_del_static_mapping_hton(msg);
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
    vapi_msg_nat44_add_del_static_mapping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_add_del_static_mapping()
{
  static const char name[] = "nat44_add_del_static_mapping";
  static const char name_with_crc[] = "nat44_add_del_static_mapping_e26e4d05";
  static vapi_message_desc_t __vapi_metadata_nat44_add_del_static_mapping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_add_del_static_mapping, payload),
    sizeof(vapi_msg_nat44_add_del_static_mapping),
    (generic_swap_fn_t)vapi_msg_nat44_add_del_static_mapping_hton,
    (generic_swap_fn_t)vapi_msg_nat44_add_del_static_mapping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_add_del_static_mapping = vapi_register_msg(&__vapi_metadata_nat44_add_del_static_mapping);
  VAPI_DBG("Assigned msg id %d to nat44_add_del_static_mapping", vapi_msg_id_nat44_add_del_static_mapping);
}
#endif

#ifndef defined_vapi_msg_dslite_get_aftr_addr
#define defined_vapi_msg_dslite_get_aftr_addr
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_dslite_get_aftr_addr;

static inline void vapi_msg_dslite_get_aftr_addr_hton(vapi_msg_dslite_get_aftr_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_aftr_addr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_dslite_get_aftr_addr_ntoh(vapi_msg_dslite_get_aftr_addr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_dslite_get_aftr_addr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_dslite_get_aftr_addr_msg_size(vapi_msg_dslite_get_aftr_addr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_dslite_get_aftr_addr* vapi_alloc_dslite_get_aftr_addr(struct vapi_ctx_s *ctx)
{
  vapi_msg_dslite_get_aftr_addr *msg = NULL;
  const size_t size = sizeof(vapi_msg_dslite_get_aftr_addr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_dslite_get_aftr_addr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_dslite_get_aftr_addr);

  return msg;
}

static inline vapi_error_e vapi_dslite_get_aftr_addr(struct vapi_ctx_s *ctx,
  vapi_msg_dslite_get_aftr_addr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_dslite_get_aftr_addr_reply *reply),
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
  vapi_msg_dslite_get_aftr_addr_hton(msg);
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
    vapi_msg_dslite_get_aftr_addr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_dslite_get_aftr_addr()
{
  static const char name[] = "dslite_get_aftr_addr";
  static const char name_with_crc[] = "dslite_get_aftr_addr_51077d14";
  static vapi_message_desc_t __vapi_metadata_dslite_get_aftr_addr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_dslite_get_aftr_addr),
    (generic_swap_fn_t)vapi_msg_dslite_get_aftr_addr_hton,
    (generic_swap_fn_t)vapi_msg_dslite_get_aftr_addr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_dslite_get_aftr_addr = vapi_register_msg(&__vapi_metadata_dslite_get_aftr_addr);
  VAPI_DBG("Assigned msg id %d to dslite_get_aftr_addr", vapi_msg_id_dslite_get_aftr_addr);
}
#endif

#ifndef defined_vapi_msg_nat44_forwarding_enable_disable
#define defined_vapi_msg_nat44_forwarding_enable_disable
typedef struct __attribute__ ((__packed__)) {
  bool enable; 
} vapi_payload_nat44_forwarding_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_nat44_forwarding_enable_disable payload;
} vapi_msg_nat44_forwarding_enable_disable;

static inline void vapi_msg_nat44_forwarding_enable_disable_payload_hton(vapi_payload_nat44_forwarding_enable_disable *payload)
{

}

static inline void vapi_msg_nat44_forwarding_enable_disable_payload_ntoh(vapi_payload_nat44_forwarding_enable_disable *payload)
{

}

static inline void vapi_msg_nat44_forwarding_enable_disable_hton(vapi_msg_nat44_forwarding_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_nat44_forwarding_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_nat44_forwarding_enable_disable_ntoh(vapi_msg_nat44_forwarding_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_nat44_forwarding_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_nat44_forwarding_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_nat44_forwarding_enable_disable_msg_size(vapi_msg_nat44_forwarding_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_nat44_forwarding_enable_disable* vapi_alloc_nat44_forwarding_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_nat44_forwarding_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_nat44_forwarding_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_nat44_forwarding_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_nat44_forwarding_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_nat44_forwarding_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_nat44_forwarding_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_nat44_forwarding_enable_disable_reply *reply),
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
  vapi_msg_nat44_forwarding_enable_disable_hton(msg);
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
    vapi_msg_nat44_forwarding_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_nat44_forwarding_enable_disable()
{
  static const char name[] = "nat44_forwarding_enable_disable";
  static const char name_with_crc[] = "nat44_forwarding_enable_disable_b3e225d2";
  static vapi_message_desc_t __vapi_metadata_nat44_forwarding_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_nat44_forwarding_enable_disable, payload),
    sizeof(vapi_msg_nat44_forwarding_enable_disable),
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_nat44_forwarding_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_nat44_forwarding_enable_disable = vapi_register_msg(&__vapi_metadata_nat44_forwarding_enable_disable);
  VAPI_DBG("Assigned msg id %d to nat44_forwarding_enable_disable", vapi_msg_id_nat44_forwarding_enable_disable);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
