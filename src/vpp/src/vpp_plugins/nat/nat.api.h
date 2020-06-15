/*
 * VLIB API definitions 2020-06-13 06:02:02
 * Input file: nat.api
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
#warning no content included from nat.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_NAT_CONTROL_PING, vl_api_nat_control_ping_t_handler)
vl_msg_id(VL_API_NAT_CONTROL_PING_REPLY, vl_api_nat_control_ping_reply_t_handler)
vl_msg_id(VL_API_NAT_SHOW_CONFIG, vl_api_nat_show_config_t_handler)
vl_msg_id(VL_API_NAT_SHOW_CONFIG_REPLY, vl_api_nat_show_config_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_LOG_LEVEL, vl_api_nat_set_log_level_t_handler)
vl_msg_id(VL_API_NAT_SET_LOG_LEVEL_REPLY, vl_api_nat_set_log_level_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_WORKERS, vl_api_nat_set_workers_t_handler)
vl_msg_id(VL_API_NAT_SET_WORKERS_REPLY, vl_api_nat_set_workers_reply_t_handler)
vl_msg_id(VL_API_NAT_WORKER_DUMP, vl_api_nat_worker_dump_t_handler)
vl_msg_id(VL_API_NAT_WORKER_DETAILS, vl_api_nat_worker_details_t_handler)
vl_msg_id(VL_API_NAT_IPFIX_ENABLE_DISABLE, vl_api_nat_ipfix_enable_disable_t_handler)
vl_msg_id(VL_API_NAT_IPFIX_ENABLE_DISABLE_REPLY, vl_api_nat_ipfix_enable_disable_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_REASS, vl_api_nat_set_reass_t_handler)
vl_msg_id(VL_API_NAT_SET_REASS_REPLY, vl_api_nat_set_reass_reply_t_handler)
vl_msg_id(VL_API_NAT_GET_REASS, vl_api_nat_get_reass_t_handler)
vl_msg_id(VL_API_NAT_GET_REASS_REPLY, vl_api_nat_get_reass_reply_t_handler)
vl_msg_id(VL_API_NAT_REASS_DUMP, vl_api_nat_reass_dump_t_handler)
vl_msg_id(VL_API_NAT_REASS_DETAILS, vl_api_nat_reass_details_t_handler)
vl_msg_id(VL_API_NAT_SET_TIMEOUTS, vl_api_nat_set_timeouts_t_handler)
vl_msg_id(VL_API_NAT_SET_TIMEOUTS_REPLY, vl_api_nat_set_timeouts_reply_t_handler)
vl_msg_id(VL_API_NAT_GET_TIMEOUTS, vl_api_nat_get_timeouts_t_handler)
vl_msg_id(VL_API_NAT_GET_TIMEOUTS_REPLY, vl_api_nat_get_timeouts_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG, vl_api_nat_set_addr_and_port_alloc_alg_t_handler)
vl_msg_id(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG_REPLY, vl_api_nat_set_addr_and_port_alloc_alg_reply_t_handler)
vl_msg_id(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG, vl_api_nat_get_addr_and_port_alloc_alg_t_handler)
vl_msg_id(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG_REPLY, vl_api_nat_get_addr_and_port_alloc_alg_reply_t_handler)
vl_msg_id(VL_API_NAT_SET_MSS_CLAMPING, vl_api_nat_set_mss_clamping_t_handler)
vl_msg_id(VL_API_NAT_SET_MSS_CLAMPING_REPLY, vl_api_nat_set_mss_clamping_reply_t_handler)
vl_msg_id(VL_API_NAT_GET_MSS_CLAMPING, vl_api_nat_get_mss_clamping_t_handler)
vl_msg_id(VL_API_NAT_GET_MSS_CLAMPING_REPLY, vl_api_nat_get_mss_clamping_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_LISTENER, vl_api_nat_ha_set_listener_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_LISTENER_REPLY, vl_api_nat_ha_set_listener_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_FAILOVER, vl_api_nat_ha_set_failover_t_handler)
vl_msg_id(VL_API_NAT_HA_SET_FAILOVER_REPLY, vl_api_nat_ha_set_failover_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_LISTENER, vl_api_nat_ha_get_listener_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_LISTENER_REPLY, vl_api_nat_ha_get_listener_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_FAILOVER, vl_api_nat_ha_get_failover_t_handler)
vl_msg_id(VL_API_NAT_HA_GET_FAILOVER_REPLY, vl_api_nat_ha_get_failover_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_FLUSH, vl_api_nat_ha_flush_t_handler)
vl_msg_id(VL_API_NAT_HA_FLUSH_REPLY, vl_api_nat_ha_flush_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_RESYNC, vl_api_nat_ha_resync_t_handler)
vl_msg_id(VL_API_NAT_HA_RESYNC_REPLY, vl_api_nat_ha_resync_reply_t_handler)
vl_msg_id(VL_API_NAT_HA_RESYNC_COMPLETED_EVENT, vl_api_nat_ha_resync_completed_event_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE, vl_api_nat44_add_del_address_range_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE_REPLY, vl_api_nat44_add_del_address_range_reply_t_handler)
vl_msg_id(VL_API_NAT44_ADDRESS_DUMP, vl_api_nat44_address_dump_t_handler)
vl_msg_id(VL_API_NAT44_ADDRESS_DETAILS, vl_api_nat44_address_details_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE, vl_api_nat44_interface_add_del_feature_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE_REPLY, vl_api_nat44_interface_add_del_feature_reply_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_DUMP, vl_api_nat44_interface_dump_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_DETAILS, vl_api_nat44_interface_details_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE, vl_api_nat44_interface_add_del_output_feature_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE_REPLY, vl_api_nat44_interface_add_del_output_feature_reply_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DUMP, vl_api_nat44_interface_output_feature_dump_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DETAILS, vl_api_nat44_interface_output_feature_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_STATIC_MAPPING, vl_api_nat44_add_del_static_mapping_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_STATIC_MAPPING_REPLY, vl_api_nat44_add_del_static_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT44_STATIC_MAPPING_DUMP, vl_api_nat44_static_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT44_STATIC_MAPPING_DETAILS, vl_api_nat44_static_mapping_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING, vl_api_nat44_add_del_identity_mapping_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING_REPLY, vl_api_nat44_add_del_identity_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT44_IDENTITY_MAPPING_DUMP, vl_api_nat44_identity_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT44_IDENTITY_MAPPING_DETAILS, vl_api_nat44_identity_mapping_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR, vl_api_nat44_add_del_interface_addr_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR_REPLY, vl_api_nat44_add_del_interface_addr_reply_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADDR_DUMP, vl_api_nat44_interface_addr_dump_t_handler)
vl_msg_id(VL_API_NAT44_INTERFACE_ADDR_DETAILS, vl_api_nat44_interface_addr_details_t_handler)
vl_msg_id(VL_API_NAT44_USER_DUMP, vl_api_nat44_user_dump_t_handler)
vl_msg_id(VL_API_NAT44_USER_DETAILS, vl_api_nat44_user_details_t_handler)
vl_msg_id(VL_API_NAT44_USER_SESSION_DUMP, vl_api_nat44_user_session_dump_t_handler)
vl_msg_id(VL_API_NAT44_USER_SESSION_DETAILS, vl_api_nat44_user_session_details_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING, vl_api_nat44_add_del_lb_static_mapping_t_handler)
vl_msg_id(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING_REPLY, vl_api_nat44_add_del_lb_static_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL, vl_api_nat44_lb_static_mapping_add_del_local_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL_REPLY, vl_api_nat44_lb_static_mapping_add_del_local_reply_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_DUMP, vl_api_nat44_lb_static_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT44_LB_STATIC_MAPPING_DETAILS, vl_api_nat44_lb_static_mapping_details_t_handler)
vl_msg_id(VL_API_NAT44_DEL_SESSION, vl_api_nat44_del_session_t_handler)
vl_msg_id(VL_API_NAT44_DEL_SESSION_REPLY, vl_api_nat44_del_session_reply_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_ENABLE_DISABLE, vl_api_nat44_forwarding_enable_disable_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_ENABLE_DISABLE_REPLY, vl_api_nat44_forwarding_enable_disable_reply_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_IS_ENABLED, vl_api_nat44_forwarding_is_enabled_t_handler)
vl_msg_id(VL_API_NAT44_FORWARDING_IS_ENABLED_REPLY, vl_api_nat44_forwarding_is_enabled_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_ADD_DEL_MAP, vl_api_nat_det_add_del_map_t_handler)
vl_msg_id(VL_API_NAT_DET_ADD_DEL_MAP_REPLY, vl_api_nat_det_add_del_map_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_FORWARD, vl_api_nat_det_forward_t_handler)
vl_msg_id(VL_API_NAT_DET_FORWARD_REPLY, vl_api_nat_det_forward_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_REVERSE, vl_api_nat_det_reverse_t_handler)
vl_msg_id(VL_API_NAT_DET_REVERSE_REPLY, vl_api_nat_det_reverse_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_MAP_DUMP, vl_api_nat_det_map_dump_t_handler)
vl_msg_id(VL_API_NAT_DET_MAP_DETAILS, vl_api_nat_det_map_details_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_OUT, vl_api_nat_det_close_session_out_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_OUT_REPLY, vl_api_nat_det_close_session_out_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_IN, vl_api_nat_det_close_session_in_t_handler)
vl_msg_id(VL_API_NAT_DET_CLOSE_SESSION_IN_REPLY, vl_api_nat_det_close_session_in_reply_t_handler)
vl_msg_id(VL_API_NAT_DET_SESSION_DUMP, vl_api_nat_det_session_dump_t_handler)
vl_msg_id(VL_API_NAT_DET_SESSION_DETAILS, vl_api_nat_det_session_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE, vl_api_nat64_add_del_pool_addr_range_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE_REPLY, vl_api_nat64_add_del_pool_addr_range_reply_t_handler)
vl_msg_id(VL_API_NAT64_POOL_ADDR_DUMP, vl_api_nat64_pool_addr_dump_t_handler)
vl_msg_id(VL_API_NAT64_POOL_ADDR_DETAILS, vl_api_nat64_pool_addr_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE, vl_api_nat64_add_del_interface_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE_REPLY, vl_api_nat64_add_del_interface_reply_t_handler)
vl_msg_id(VL_API_NAT64_INTERFACE_DUMP, vl_api_nat64_interface_dump_t_handler)
vl_msg_id(VL_API_NAT64_INTERFACE_DETAILS, vl_api_nat64_interface_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_STATIC_BIB, vl_api_nat64_add_del_static_bib_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_STATIC_BIB_REPLY, vl_api_nat64_add_del_static_bib_reply_t_handler)
vl_msg_id(VL_API_NAT64_BIB_DUMP, vl_api_nat64_bib_dump_t_handler)
vl_msg_id(VL_API_NAT64_BIB_DETAILS, vl_api_nat64_bib_details_t_handler)
vl_msg_id(VL_API_NAT64_ST_DUMP, vl_api_nat64_st_dump_t_handler)
vl_msg_id(VL_API_NAT64_ST_DETAILS, vl_api_nat64_st_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_PREFIX, vl_api_nat64_add_del_prefix_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_PREFIX_REPLY, vl_api_nat64_add_del_prefix_reply_t_handler)
vl_msg_id(VL_API_NAT64_PREFIX_DUMP, vl_api_nat64_prefix_dump_t_handler)
vl_msg_id(VL_API_NAT64_PREFIX_DETAILS, vl_api_nat64_prefix_details_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR, vl_api_nat64_add_del_interface_addr_t_handler)
vl_msg_id(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR_REPLY, vl_api_nat64_add_del_interface_addr_reply_t_handler)
vl_msg_id(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE, vl_api_dslite_add_del_pool_addr_range_t_handler)
vl_msg_id(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE_REPLY, vl_api_dslite_add_del_pool_addr_range_reply_t_handler)
vl_msg_id(VL_API_DSLITE_ADDRESS_DUMP, vl_api_dslite_address_dump_t_handler)
vl_msg_id(VL_API_DSLITE_ADDRESS_DETAILS, vl_api_dslite_address_details_t_handler)
vl_msg_id(VL_API_DSLITE_SET_AFTR_ADDR, vl_api_dslite_set_aftr_addr_t_handler)
vl_msg_id(VL_API_DSLITE_SET_AFTR_ADDR_REPLY, vl_api_dslite_set_aftr_addr_reply_t_handler)
vl_msg_id(VL_API_DSLITE_GET_AFTR_ADDR, vl_api_dslite_get_aftr_addr_t_handler)
vl_msg_id(VL_API_DSLITE_GET_AFTR_ADDR_REPLY, vl_api_dslite_get_aftr_addr_reply_t_handler)
vl_msg_id(VL_API_DSLITE_SET_B4_ADDR, vl_api_dslite_set_b4_addr_t_handler)
vl_msg_id(VL_API_DSLITE_SET_B4_ADDR_REPLY, vl_api_dslite_set_b4_addr_reply_t_handler)
vl_msg_id(VL_API_DSLITE_GET_B4_ADDR, vl_api_dslite_get_b4_addr_t_handler)
vl_msg_id(VL_API_DSLITE_GET_B4_ADDR_REPLY, vl_api_dslite_get_b4_addr_reply_t_handler)
vl_msg_id(VL_API_NAT66_ADD_DEL_INTERFACE, vl_api_nat66_add_del_interface_t_handler)
vl_msg_id(VL_API_NAT66_ADD_DEL_INTERFACE_REPLY, vl_api_nat66_add_del_interface_reply_t_handler)
vl_msg_id(VL_API_NAT66_INTERFACE_DUMP, vl_api_nat66_interface_dump_t_handler)
vl_msg_id(VL_API_NAT66_INTERFACE_DETAILS, vl_api_nat66_interface_details_t_handler)
vl_msg_id(VL_API_NAT66_ADD_DEL_STATIC_MAPPING, vl_api_nat66_add_del_static_mapping_t_handler)
vl_msg_id(VL_API_NAT66_ADD_DEL_STATIC_MAPPING_REPLY, vl_api_nat66_add_del_static_mapping_reply_t_handler)
vl_msg_id(VL_API_NAT66_STATIC_MAPPING_DUMP, vl_api_nat66_static_mapping_dump_t_handler)
vl_msg_id(VL_API_NAT66_STATIC_MAPPING_DETAILS, vl_api_nat66_static_mapping_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_nat_control_ping_t, 1)
vl_msg_name(vl_api_nat_control_ping_reply_t, 1)
vl_msg_name(vl_api_nat_show_config_t, 1)
vl_msg_name(vl_api_nat_show_config_reply_t, 1)
vl_msg_name(vl_api_nat_set_log_level_t, 1)
vl_msg_name(vl_api_nat_set_log_level_reply_t, 1)
vl_msg_name(vl_api_nat_set_workers_t, 1)
vl_msg_name(vl_api_nat_set_workers_reply_t, 1)
vl_msg_name(vl_api_nat_worker_dump_t, 1)
vl_msg_name(vl_api_nat_worker_details_t, 1)
vl_msg_name(vl_api_nat_ipfix_enable_disable_t, 1)
vl_msg_name(vl_api_nat_ipfix_enable_disable_reply_t, 1)
vl_msg_name(vl_api_nat_set_reass_t, 1)
vl_msg_name(vl_api_nat_set_reass_reply_t, 1)
vl_msg_name(vl_api_nat_get_reass_t, 1)
vl_msg_name(vl_api_nat_get_reass_reply_t, 1)
vl_msg_name(vl_api_nat_reass_dump_t, 1)
vl_msg_name(vl_api_nat_reass_details_t, 1)
vl_msg_name(vl_api_nat_set_timeouts_t, 1)
vl_msg_name(vl_api_nat_set_timeouts_reply_t, 1)
vl_msg_name(vl_api_nat_get_timeouts_t, 1)
vl_msg_name(vl_api_nat_get_timeouts_reply_t, 1)
vl_msg_name(vl_api_nat_set_addr_and_port_alloc_alg_t, 1)
vl_msg_name(vl_api_nat_set_addr_and_port_alloc_alg_reply_t, 1)
vl_msg_name(vl_api_nat_get_addr_and_port_alloc_alg_t, 1)
vl_msg_name(vl_api_nat_get_addr_and_port_alloc_alg_reply_t, 1)
vl_msg_name(vl_api_nat_set_mss_clamping_t, 1)
vl_msg_name(vl_api_nat_set_mss_clamping_reply_t, 1)
vl_msg_name(vl_api_nat_get_mss_clamping_t, 1)
vl_msg_name(vl_api_nat_get_mss_clamping_reply_t, 1)
vl_msg_name(vl_api_nat_ha_set_listener_t, 1)
vl_msg_name(vl_api_nat_ha_set_listener_reply_t, 1)
vl_msg_name(vl_api_nat_ha_set_failover_t, 1)
vl_msg_name(vl_api_nat_ha_set_failover_reply_t, 1)
vl_msg_name(vl_api_nat_ha_get_listener_t, 1)
vl_msg_name(vl_api_nat_ha_get_listener_reply_t, 1)
vl_msg_name(vl_api_nat_ha_get_failover_t, 1)
vl_msg_name(vl_api_nat_ha_get_failover_reply_t, 1)
vl_msg_name(vl_api_nat_ha_flush_t, 1)
vl_msg_name(vl_api_nat_ha_flush_reply_t, 1)
vl_msg_name(vl_api_nat_ha_resync_t, 1)
vl_msg_name(vl_api_nat_ha_resync_reply_t, 1)
vl_msg_name(vl_api_nat_ha_resync_completed_event_t, 1)
vl_msg_name(vl_api_nat44_add_del_address_range_t, 1)
vl_msg_name(vl_api_nat44_add_del_address_range_reply_t, 1)
vl_msg_name(vl_api_nat44_address_dump_t, 1)
vl_msg_name(vl_api_nat44_address_details_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_feature_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_feature_reply_t, 1)
vl_msg_name(vl_api_nat44_interface_dump_t, 1)
vl_msg_name(vl_api_nat44_interface_details_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_output_feature_t, 1)
vl_msg_name(vl_api_nat44_interface_add_del_output_feature_reply_t, 1)
vl_msg_name(vl_api_nat44_interface_output_feature_dump_t, 1)
vl_msg_name(vl_api_nat44_interface_output_feature_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_static_mapping_t, 1)
vl_msg_name(vl_api_nat44_add_del_static_mapping_reply_t, 1)
vl_msg_name(vl_api_nat44_static_mapping_dump_t, 1)
vl_msg_name(vl_api_nat44_static_mapping_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_identity_mapping_t, 1)
vl_msg_name(vl_api_nat44_add_del_identity_mapping_reply_t, 1)
vl_msg_name(vl_api_nat44_identity_mapping_dump_t, 1)
vl_msg_name(vl_api_nat44_identity_mapping_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_interface_addr_t, 1)
vl_msg_name(vl_api_nat44_add_del_interface_addr_reply_t, 1)
vl_msg_name(vl_api_nat44_interface_addr_dump_t, 1)
vl_msg_name(vl_api_nat44_interface_addr_details_t, 1)
vl_msg_name(vl_api_nat44_user_dump_t, 1)
vl_msg_name(vl_api_nat44_user_details_t, 1)
vl_msg_name(vl_api_nat44_user_session_dump_t, 1)
vl_msg_name(vl_api_nat44_user_session_details_t, 1)
vl_msg_name(vl_api_nat44_add_del_lb_static_mapping_t, 1)
vl_msg_name(vl_api_nat44_add_del_lb_static_mapping_reply_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_add_del_local_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_add_del_local_reply_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_dump_t, 1)
vl_msg_name(vl_api_nat44_lb_static_mapping_details_t, 1)
vl_msg_name(vl_api_nat44_del_session_t, 1)
vl_msg_name(vl_api_nat44_del_session_reply_t, 1)
vl_msg_name(vl_api_nat44_forwarding_enable_disable_t, 1)
vl_msg_name(vl_api_nat44_forwarding_enable_disable_reply_t, 1)
vl_msg_name(vl_api_nat44_forwarding_is_enabled_t, 1)
vl_msg_name(vl_api_nat44_forwarding_is_enabled_reply_t, 1)
vl_msg_name(vl_api_nat_det_add_del_map_t, 1)
vl_msg_name(vl_api_nat_det_add_del_map_reply_t, 1)
vl_msg_name(vl_api_nat_det_forward_t, 1)
vl_msg_name(vl_api_nat_det_forward_reply_t, 1)
vl_msg_name(vl_api_nat_det_reverse_t, 1)
vl_msg_name(vl_api_nat_det_reverse_reply_t, 1)
vl_msg_name(vl_api_nat_det_map_dump_t, 1)
vl_msg_name(vl_api_nat_det_map_details_t, 1)
vl_msg_name(vl_api_nat_det_close_session_out_t, 1)
vl_msg_name(vl_api_nat_det_close_session_out_reply_t, 1)
vl_msg_name(vl_api_nat_det_close_session_in_t, 1)
vl_msg_name(vl_api_nat_det_close_session_in_reply_t, 1)
vl_msg_name(vl_api_nat_det_session_dump_t, 1)
vl_msg_name(vl_api_nat_det_session_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_pool_addr_range_t, 1)
vl_msg_name(vl_api_nat64_add_del_pool_addr_range_reply_t, 1)
vl_msg_name(vl_api_nat64_pool_addr_dump_t, 1)
vl_msg_name(vl_api_nat64_pool_addr_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_reply_t, 1)
vl_msg_name(vl_api_nat64_interface_dump_t, 1)
vl_msg_name(vl_api_nat64_interface_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_static_bib_t, 1)
vl_msg_name(vl_api_nat64_add_del_static_bib_reply_t, 1)
vl_msg_name(vl_api_nat64_bib_dump_t, 1)
vl_msg_name(vl_api_nat64_bib_details_t, 1)
vl_msg_name(vl_api_nat64_st_dump_t, 1)
vl_msg_name(vl_api_nat64_st_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_prefix_t, 1)
vl_msg_name(vl_api_nat64_add_del_prefix_reply_t, 1)
vl_msg_name(vl_api_nat64_prefix_dump_t, 1)
vl_msg_name(vl_api_nat64_prefix_details_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_addr_t, 1)
vl_msg_name(vl_api_nat64_add_del_interface_addr_reply_t, 1)
vl_msg_name(vl_api_dslite_add_del_pool_addr_range_t, 1)
vl_msg_name(vl_api_dslite_add_del_pool_addr_range_reply_t, 1)
vl_msg_name(vl_api_dslite_address_dump_t, 1)
vl_msg_name(vl_api_dslite_address_details_t, 1)
vl_msg_name(vl_api_dslite_set_aftr_addr_t, 1)
vl_msg_name(vl_api_dslite_set_aftr_addr_reply_t, 1)
vl_msg_name(vl_api_dslite_get_aftr_addr_t, 1)
vl_msg_name(vl_api_dslite_get_aftr_addr_reply_t, 1)
vl_msg_name(vl_api_dslite_set_b4_addr_t, 1)
vl_msg_name(vl_api_dslite_set_b4_addr_reply_t, 1)
vl_msg_name(vl_api_dslite_get_b4_addr_t, 1)
vl_msg_name(vl_api_dslite_get_b4_addr_reply_t, 1)
vl_msg_name(vl_api_nat66_add_del_interface_t, 1)
vl_msg_name(vl_api_nat66_add_del_interface_reply_t, 1)
vl_msg_name(vl_api_nat66_interface_dump_t, 1)
vl_msg_name(vl_api_nat66_interface_details_t, 1)
vl_msg_name(vl_api_nat66_add_del_static_mapping_t, 1)
vl_msg_name(vl_api_nat66_add_del_static_mapping_reply_t, 1)
vl_msg_name(vl_api_nat66_static_mapping_dump_t, 1)
vl_msg_name(vl_api_nat66_static_mapping_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_nat \
_(VL_API_NAT_CONTROL_PING, nat_control_ping, 51077d14) \
_(VL_API_NAT_CONTROL_PING_REPLY, nat_control_ping_reply, f6b0b8ca) \
_(VL_API_NAT_SHOW_CONFIG, nat_show_config, 51077d14) \
_(VL_API_NAT_SHOW_CONFIG_REPLY, nat_show_config_reply, 006a0786) \
_(VL_API_NAT_SET_LOG_LEVEL, nat_set_log_level, 70076bfe) \
_(VL_API_NAT_SET_LOG_LEVEL_REPLY, nat_set_log_level_reply, e8d4e804) \
_(VL_API_NAT_SET_WORKERS, nat_set_workers, da926638) \
_(VL_API_NAT_SET_WORKERS_REPLY, nat_set_workers_reply, e8d4e804) \
_(VL_API_NAT_WORKER_DUMP, nat_worker_dump, 51077d14) \
_(VL_API_NAT_WORKER_DETAILS, nat_worker_details, 84bf06fc) \
_(VL_API_NAT_IPFIX_ENABLE_DISABLE, nat_ipfix_enable_disable, 9af4a2d2) \
_(VL_API_NAT_IPFIX_ENABLE_DISABLE_REPLY, nat_ipfix_enable_disable_reply, e8d4e804) \
_(VL_API_NAT_SET_REASS, nat_set_reass, 364ce510) \
_(VL_API_NAT_SET_REASS_REPLY, nat_set_reass_reply, e8d4e804) \
_(VL_API_NAT_GET_REASS, nat_get_reass, 51077d14) \
_(VL_API_NAT_GET_REASS_REPLY, nat_get_reass_reply, 8102a0fb) \
_(VL_API_NAT_REASS_DUMP, nat_reass_dump, 51077d14) \
_(VL_API_NAT_REASS_DETAILS, nat_reass_details, dbef31be) \
_(VL_API_NAT_SET_TIMEOUTS, nat_set_timeouts, d4746b16) \
_(VL_API_NAT_SET_TIMEOUTS_REPLY, nat_set_timeouts_reply, e8d4e804) \
_(VL_API_NAT_GET_TIMEOUTS, nat_get_timeouts, 51077d14) \
_(VL_API_NAT_GET_TIMEOUTS_REPLY, nat_get_timeouts_reply, 3c4df4e1) \
_(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG, nat_set_addr_and_port_alloc_alg, deeb746f) \
_(VL_API_NAT_SET_ADDR_AND_PORT_ALLOC_ALG_REPLY, nat_set_addr_and_port_alloc_alg_reply, e8d4e804) \
_(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG, nat_get_addr_and_port_alloc_alg, 51077d14) \
_(VL_API_NAT_GET_ADDR_AND_PORT_ALLOC_ALG_REPLY, nat_get_addr_and_port_alloc_alg_reply, 3607a7d0) \
_(VL_API_NAT_SET_MSS_CLAMPING, nat_set_mss_clamping, 25e90abb) \
_(VL_API_NAT_SET_MSS_CLAMPING_REPLY, nat_set_mss_clamping_reply, e8d4e804) \
_(VL_API_NAT_GET_MSS_CLAMPING, nat_get_mss_clamping, 51077d14) \
_(VL_API_NAT_GET_MSS_CLAMPING_REPLY, nat_get_mss_clamping_reply, 1c0b2a78) \
_(VL_API_NAT_HA_SET_LISTENER, nat_ha_set_listener, e4a8cb4e) \
_(VL_API_NAT_HA_SET_LISTENER_REPLY, nat_ha_set_listener_reply, e8d4e804) \
_(VL_API_NAT_HA_SET_FAILOVER, nat_ha_set_failover, 718246af) \
_(VL_API_NAT_HA_SET_FAILOVER_REPLY, nat_ha_set_failover_reply, e8d4e804) \
_(VL_API_NAT_HA_GET_LISTENER, nat_ha_get_listener, 51077d14) \
_(VL_API_NAT_HA_GET_LISTENER_REPLY, nat_ha_get_listener_reply, 123ea41f) \
_(VL_API_NAT_HA_GET_FAILOVER, nat_ha_get_failover, 51077d14) \
_(VL_API_NAT_HA_GET_FAILOVER_REPLY, nat_ha_get_failover_reply, a67d8752) \
_(VL_API_NAT_HA_FLUSH, nat_ha_flush, 51077d14) \
_(VL_API_NAT_HA_FLUSH_REPLY, nat_ha_flush_reply, e8d4e804) \
_(VL_API_NAT_HA_RESYNC, nat_ha_resync, c8ab9e03) \
_(VL_API_NAT_HA_RESYNC_REPLY, nat_ha_resync_reply, e8d4e804) \
_(VL_API_NAT_HA_RESYNC_COMPLETED_EVENT, nat_ha_resync_completed_event, fdc598fb) \
_(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE, nat44_add_del_address_range, d4c7568c) \
_(VL_API_NAT44_ADD_DEL_ADDRESS_RANGE_REPLY, nat44_add_del_address_range_reply, e8d4e804) \
_(VL_API_NAT44_ADDRESS_DUMP, nat44_address_dump, 51077d14) \
_(VL_API_NAT44_ADDRESS_DETAILS, nat44_address_details, 45410ac4) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE, nat44_interface_add_del_feature, f3699b83) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_FEATURE_REPLY, nat44_interface_add_del_feature_reply, e8d4e804) \
_(VL_API_NAT44_INTERFACE_DUMP, nat44_interface_dump, 51077d14) \
_(VL_API_NAT44_INTERFACE_DETAILS, nat44_interface_details, 5d286289) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE, nat44_interface_add_del_output_feature, f3699b83) \
_(VL_API_NAT44_INTERFACE_ADD_DEL_OUTPUT_FEATURE_REPLY, nat44_interface_add_del_output_feature_reply, e8d4e804) \
_(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DUMP, nat44_interface_output_feature_dump, 51077d14) \
_(VL_API_NAT44_INTERFACE_OUTPUT_FEATURE_DETAILS, nat44_interface_output_feature_details, 5d286289) \
_(VL_API_NAT44_ADD_DEL_STATIC_MAPPING, nat44_add_del_static_mapping, e165e83b) \
_(VL_API_NAT44_ADD_DEL_STATIC_MAPPING_REPLY, nat44_add_del_static_mapping_reply, e8d4e804) \
_(VL_API_NAT44_STATIC_MAPPING_DUMP, nat44_static_mapping_dump, 51077d14) \
_(VL_API_NAT44_STATIC_MAPPING_DETAILS, nat44_static_mapping_details, 1a433ef7) \
_(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING, nat44_add_del_identity_mapping, 8e12743f) \
_(VL_API_NAT44_ADD_DEL_IDENTITY_MAPPING_REPLY, nat44_add_del_identity_mapping_reply, e8d4e804) \
_(VL_API_NAT44_IDENTITY_MAPPING_DUMP, nat44_identity_mapping_dump, 51077d14) \
_(VL_API_NAT44_IDENTITY_MAPPING_DETAILS, nat44_identity_mapping_details, 36d21351) \
_(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR, nat44_add_del_interface_addr, fc835325) \
_(VL_API_NAT44_ADD_DEL_INTERFACE_ADDR_REPLY, nat44_add_del_interface_addr_reply, e8d4e804) \
_(VL_API_NAT44_INTERFACE_ADDR_DUMP, nat44_interface_addr_dump, 51077d14) \
_(VL_API_NAT44_INTERFACE_ADDR_DETAILS, nat44_interface_addr_details, 3e687514) \
_(VL_API_NAT44_USER_DUMP, nat44_user_dump, 51077d14) \
_(VL_API_NAT44_USER_DETAILS, nat44_user_details, 355896c2) \
_(VL_API_NAT44_USER_SESSION_DUMP, nat44_user_session_dump, e1899c98) \
_(VL_API_NAT44_USER_SESSION_DETAILS, nat44_user_session_details, 1965fd69) \
_(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING, nat44_add_del_lb_static_mapping, 53b24611) \
_(VL_API_NAT44_ADD_DEL_LB_STATIC_MAPPING_REPLY, nat44_add_del_lb_static_mapping_reply, e8d4e804) \
_(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL, nat44_lb_static_mapping_add_del_local, 2910a151) \
_(VL_API_NAT44_LB_STATIC_MAPPING_ADD_DEL_LOCAL_REPLY, nat44_lb_static_mapping_add_del_local_reply, e8d4e804) \
_(VL_API_NAT44_LB_STATIC_MAPPING_DUMP, nat44_lb_static_mapping_dump, 51077d14) \
_(VL_API_NAT44_LB_STATIC_MAPPING_DETAILS, nat44_lb_static_mapping_details, 2267b9e8) \
_(VL_API_NAT44_DEL_SESSION, nat44_del_session, 4c49c387) \
_(VL_API_NAT44_DEL_SESSION_REPLY, nat44_del_session_reply, e8d4e804) \
_(VL_API_NAT44_FORWARDING_ENABLE_DISABLE, nat44_forwarding_enable_disable, b3e225d2) \
_(VL_API_NAT44_FORWARDING_ENABLE_DISABLE_REPLY, nat44_forwarding_enable_disable_reply, e8d4e804) \
_(VL_API_NAT44_FORWARDING_IS_ENABLED, nat44_forwarding_is_enabled, 51077d14) \
_(VL_API_NAT44_FORWARDING_IS_ENABLED_REPLY, nat44_forwarding_is_enabled_reply, 46924a06) \
_(VL_API_NAT_DET_ADD_DEL_MAP, nat_det_add_del_map, 112fde05) \
_(VL_API_NAT_DET_ADD_DEL_MAP_REPLY, nat_det_add_del_map_reply, e8d4e804) \
_(VL_API_NAT_DET_FORWARD, nat_det_forward, 7f8a89cd) \
_(VL_API_NAT_DET_FORWARD_REPLY, nat_det_forward_reply, a8ccbdc0) \
_(VL_API_NAT_DET_REVERSE, nat_det_reverse, a7573fe1) \
_(VL_API_NAT_DET_REVERSE_REPLY, nat_det_reverse_reply, 34066d48) \
_(VL_API_NAT_DET_MAP_DUMP, nat_det_map_dump, 51077d14) \
_(VL_API_NAT_DET_MAP_DETAILS, nat_det_map_details, 88000ee1) \
_(VL_API_NAT_DET_CLOSE_SESSION_OUT, nat_det_close_session_out, c1b6cbfb) \
_(VL_API_NAT_DET_CLOSE_SESSION_OUT_REPLY, nat_det_close_session_out_reply, e8d4e804) \
_(VL_API_NAT_DET_CLOSE_SESSION_IN, nat_det_close_session_in, 0a10ef64) \
_(VL_API_NAT_DET_CLOSE_SESSION_IN_REPLY, nat_det_close_session_in_reply, e8d4e804) \
_(VL_API_NAT_DET_SESSION_DUMP, nat_det_session_dump, e45a3af7) \
_(VL_API_NAT_DET_SESSION_DETAILS, nat_det_session_details, 27f3c171) \
_(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE, nat64_add_del_pool_addr_range, 21234ef3) \
_(VL_API_NAT64_ADD_DEL_POOL_ADDR_RANGE_REPLY, nat64_add_del_pool_addr_range_reply, e8d4e804) \
_(VL_API_NAT64_POOL_ADDR_DUMP, nat64_pool_addr_dump, 51077d14) \
_(VL_API_NAT64_POOL_ADDR_DETAILS, nat64_pool_addr_details, 9bb99cdb) \
_(VL_API_NAT64_ADD_DEL_INTERFACE, nat64_add_del_interface, f3699b83) \
_(VL_API_NAT64_ADD_DEL_INTERFACE_REPLY, nat64_add_del_interface_reply, e8d4e804) \
_(VL_API_NAT64_INTERFACE_DUMP, nat64_interface_dump, 51077d14) \
_(VL_API_NAT64_INTERFACE_DETAILS, nat64_interface_details, 5d286289) \
_(VL_API_NAT64_ADD_DEL_STATIC_BIB, nat64_add_del_static_bib, 90fae58a) \
_(VL_API_NAT64_ADD_DEL_STATIC_BIB_REPLY, nat64_add_del_static_bib_reply, e8d4e804) \
_(VL_API_NAT64_BIB_DUMP, nat64_bib_dump, cfcb6b75) \
_(VL_API_NAT64_BIB_DETAILS, nat64_bib_details, 62c8541d) \
_(VL_API_NAT64_ST_DUMP, nat64_st_dump, cfcb6b75) \
_(VL_API_NAT64_ST_DETAILS, nat64_st_details, c770d620) \
_(VL_API_NAT64_ADD_DEL_PREFIX, nat64_add_del_prefix, 727b2f4c) \
_(VL_API_NAT64_ADD_DEL_PREFIX_REPLY, nat64_add_del_prefix_reply, e8d4e804) \
_(VL_API_NAT64_PREFIX_DUMP, nat64_prefix_dump, 51077d14) \
_(VL_API_NAT64_PREFIX_DETAILS, nat64_prefix_details, 20568de3) \
_(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR, nat64_add_del_interface_addr, 47d6e753) \
_(VL_API_NAT64_ADD_DEL_INTERFACE_ADDR_REPLY, nat64_add_del_interface_addr_reply, e8d4e804) \
_(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE, dslite_add_del_pool_addr_range, c448457a) \
_(VL_API_DSLITE_ADD_DEL_POOL_ADDR_RANGE_REPLY, dslite_add_del_pool_addr_range_reply, e8d4e804) \
_(VL_API_DSLITE_ADDRESS_DUMP, dslite_address_dump, 51077d14) \
_(VL_API_DSLITE_ADDRESS_DETAILS, dslite_address_details, ec26d648) \
_(VL_API_DSLITE_SET_AFTR_ADDR, dslite_set_aftr_addr, 1e955f8d) \
_(VL_API_DSLITE_SET_AFTR_ADDR_REPLY, dslite_set_aftr_addr_reply, e8d4e804) \
_(VL_API_DSLITE_GET_AFTR_ADDR, dslite_get_aftr_addr, 51077d14) \
_(VL_API_DSLITE_GET_AFTR_ADDR_REPLY, dslite_get_aftr_addr_reply, 38e30db1) \
_(VL_API_DSLITE_SET_B4_ADDR, dslite_set_b4_addr, 1e955f8d) \
_(VL_API_DSLITE_SET_B4_ADDR_REPLY, dslite_set_b4_addr_reply, e8d4e804) \
_(VL_API_DSLITE_GET_B4_ADDR, dslite_get_b4_addr, 51077d14) \
_(VL_API_DSLITE_GET_B4_ADDR_REPLY, dslite_get_b4_addr_reply, 38e30db1) \
_(VL_API_NAT66_ADD_DEL_INTERFACE, nat66_add_del_interface, f3699b83) \
_(VL_API_NAT66_ADD_DEL_INTERFACE_REPLY, nat66_add_del_interface_reply, e8d4e804) \
_(VL_API_NAT66_INTERFACE_DUMP, nat66_interface_dump, 51077d14) \
_(VL_API_NAT66_INTERFACE_DETAILS, nat66_interface_details, 5d286289) \
_(VL_API_NAT66_ADD_DEL_STATIC_MAPPING, nat66_add_del_static_mapping, fb64e50b) \
_(VL_API_NAT66_ADD_DEL_STATIC_MAPPING_REPLY, nat66_add_del_static_mapping_reply, e8d4e804) \
_(VL_API_NAT66_STATIC_MAPPING_DUMP, nat66_static_mapping_dump, 51077d14) \
_(VL_API_NAT66_STATIC_MAPPING_DETAILS, nat66_static_mapping_details, 5c568448) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_nat_api
#define included_nat_api
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

#ifndef _vl_api_defined_address_with_prefix
#define _vl_api_defined_address_with_prefix
typedef vl_api_prefix_t vl_api_address_with_prefix_t;
#endif

#ifndef _vl_api_defined_ip4_address_with_prefix
#define _vl_api_defined_ip4_address_with_prefix
typedef vl_api_ip4_prefix_t vl_api_ip4_address_with_prefix_t;
#endif

#ifndef _vl_api_defined_ip6_address_with_prefix
#define _vl_api_defined_ip6_address_with_prefix
typedef vl_api_ip6_prefix_t vl_api_ip6_address_with_prefix_t;
#endif

#ifndef _vl_api_defined_prefix_matcher
#define _vl_api_defined_prefix_matcher
typedef VL_API_PACKED(struct _vl_api_prefix_matcher {
    u8 le;
    u8 ge;
}) vl_api_prefix_matcher_t;
#endif

#ifndef _vl_api_defined_interface_index
#define _vl_api_defined_interface_index
typedef u32 vl_api_interface_index_t;
#endif

#ifndef _vl_api_defined_nat_config_flags
#define _vl_api_defined_nat_config_flags
typedef enum __attribute__((__packed__)) {
    NAT_IS_NONE = 0,
    NAT_IS_TWICE_NAT = 1,
    NAT_IS_SELF_TWICE_NAT = 2,
    NAT_IS_OUT2IN_ONLY = 4,
    NAT_IS_ADDR_ONLY = 8,
    NAT_IS_OUTSIDE = 16,
    NAT_IS_INSIDE = 32,
    NAT_IS_STATIC = 64,
    NAT_IS_EXT_HOST_VALID = 128,
} vl_api_nat_config_flags_t;
STATIC_ASSERT(sizeof(vl_api_nat_config_flags_t) == sizeof(u8), "size of API enum nat_config_flags is wrong");
#endif

#ifndef _vl_api_defined_nat_log_level
#define _vl_api_defined_nat_log_level
typedef enum __attribute__((__packed__)) {
    NAT_LOG_NONE = 0,
    NAT_LOG_ERROR = 1,
    NAT_LOG_WARNING = 2,
    NAT_LOG_NOTICE = 3,
    NAT_LOG_INFO = 4,
    NAT_LOG_DEBUG = 5,
} vl_api_nat_log_level_t;
STATIC_ASSERT(sizeof(vl_api_nat_log_level_t) == sizeof(u8), "size of API enum nat_log_level is wrong");
#endif

#ifndef _vl_api_defined_nat44_lb_addr_port
#define _vl_api_defined_nat44_lb_addr_port
typedef VL_API_PACKED(struct _vl_api_nat44_lb_addr_port {
    vl_api_ip4_address_t addr;
    u16 port;
    u8 probability;
    u32 vrf_id;
}) vl_api_nat44_lb_addr_port_t;
#endif

#ifndef _vl_api_defined_nat_control_ping
#define _vl_api_defined_nat_control_ping
typedef VL_API_PACKED(struct _vl_api_nat_control_ping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_control_ping_t;
#endif

#ifndef _vl_api_defined_nat_control_ping_reply
#define _vl_api_defined_nat_control_ping_reply
typedef VL_API_PACKED(struct _vl_api_nat_control_ping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 client_index;
    u32 vpe_pid;
}) vl_api_nat_control_ping_reply_t;
#endif

#ifndef _vl_api_defined_nat_show_config
#define _vl_api_defined_nat_show_config
typedef VL_API_PACKED(struct _vl_api_nat_show_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_show_config_t;
#endif

#ifndef _vl_api_defined_nat_show_config_reply
#define _vl_api_defined_nat_show_config_reply
typedef VL_API_PACKED(struct _vl_api_nat_show_config_reply {
    u16 _vl_msg_id;
    u32 context;
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
}) vl_api_nat_show_config_reply_t;
#endif

#ifndef _vl_api_defined_nat_set_log_level
#define _vl_api_defined_nat_set_log_level
typedef VL_API_PACKED(struct _vl_api_nat_set_log_level {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_nat_log_level_t log_level;
}) vl_api_nat_set_log_level_t;
#endif

#ifndef _vl_api_defined_nat_set_log_level_reply
#define _vl_api_defined_nat_set_log_level_reply
typedef VL_API_PACKED(struct _vl_api_nat_set_log_level_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_set_log_level_reply_t;
#endif

#ifndef _vl_api_defined_nat_set_workers
#define _vl_api_defined_nat_set_workers
typedef VL_API_PACKED(struct _vl_api_nat_set_workers {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 worker_mask;
}) vl_api_nat_set_workers_t;
#endif

#ifndef _vl_api_defined_nat_set_workers_reply
#define _vl_api_defined_nat_set_workers_reply
typedef VL_API_PACKED(struct _vl_api_nat_set_workers_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_set_workers_reply_t;
#endif

#ifndef _vl_api_defined_nat_worker_dump
#define _vl_api_defined_nat_worker_dump
typedef VL_API_PACKED(struct _vl_api_nat_worker_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_worker_dump_t;
#endif

#ifndef _vl_api_defined_nat_worker_details
#define _vl_api_defined_nat_worker_details
typedef VL_API_PACKED(struct _vl_api_nat_worker_details {
    u16 _vl_msg_id;
    u32 context;
    u32 worker_index;
    u32 lcore_id;
    u8 name[64];
}) vl_api_nat_worker_details_t;
#endif

#ifndef _vl_api_defined_nat_ipfix_enable_disable
#define _vl_api_defined_nat_ipfix_enable_disable
typedef VL_API_PACKED(struct _vl_api_nat_ipfix_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 domain_id;
    u16 src_port;
    bool enable;
}) vl_api_nat_ipfix_enable_disable_t;
#endif

#ifndef _vl_api_defined_nat_ipfix_enable_disable_reply
#define _vl_api_defined_nat_ipfix_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_nat_ipfix_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_ipfix_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_nat_set_reass
#define _vl_api_defined_nat_set_reass
typedef VL_API_PACKED(struct _vl_api_nat_set_reass {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 timeout;
    u16 max_reass;
    u8 max_frag;
    u8 drop_frag;
    bool is_ip6;
}) vl_api_nat_set_reass_t;
#endif

#ifndef _vl_api_defined_nat_set_reass_reply
#define _vl_api_defined_nat_set_reass_reply
typedef VL_API_PACKED(struct _vl_api_nat_set_reass_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_set_reass_reply_t;
#endif

#ifndef _vl_api_defined_nat_get_reass
#define _vl_api_defined_nat_get_reass
typedef VL_API_PACKED(struct _vl_api_nat_get_reass {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_get_reass_t;
#endif

#ifndef _vl_api_defined_nat_get_reass_reply
#define _vl_api_defined_nat_get_reass_reply
typedef VL_API_PACKED(struct _vl_api_nat_get_reass_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 ip4_timeout;
    u16 ip4_max_reass;
    u8 ip4_max_frag;
    u8 ip4_drop_frag;
    u32 ip6_timeout;
    u16 ip6_max_reass;
    u8 ip6_max_frag;
    u8 ip6_drop_frag;
}) vl_api_nat_get_reass_reply_t;
#endif

#ifndef _vl_api_defined_nat_reass_dump
#define _vl_api_defined_nat_reass_dump
typedef VL_API_PACKED(struct _vl_api_nat_reass_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_reass_dump_t;
#endif

#ifndef _vl_api_defined_nat_reass_details
#define _vl_api_defined_nat_reass_details
typedef VL_API_PACKED(struct _vl_api_nat_reass_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_address_t src_addr;
    vl_api_address_t dst_addr;
    u32 frag_id;
    u8 proto;
    u8 frag_n;
}) vl_api_nat_reass_details_t;
#endif

#ifndef _vl_api_defined_nat_set_timeouts
#define _vl_api_defined_nat_set_timeouts
typedef VL_API_PACKED(struct _vl_api_nat_set_timeouts {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 udp;
    u32 tcp_established;
    u32 tcp_transitory;
    u32 icmp;
}) vl_api_nat_set_timeouts_t;
#endif

#ifndef _vl_api_defined_nat_set_timeouts_reply
#define _vl_api_defined_nat_set_timeouts_reply
typedef VL_API_PACKED(struct _vl_api_nat_set_timeouts_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_set_timeouts_reply_t;
#endif

#ifndef _vl_api_defined_nat_get_timeouts
#define _vl_api_defined_nat_get_timeouts
typedef VL_API_PACKED(struct _vl_api_nat_get_timeouts {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_get_timeouts_t;
#endif

#ifndef _vl_api_defined_nat_get_timeouts_reply
#define _vl_api_defined_nat_get_timeouts_reply
typedef VL_API_PACKED(struct _vl_api_nat_get_timeouts_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 udp;
    u32 tcp_established;
    u32 tcp_transitory;
    u32 icmp;
}) vl_api_nat_get_timeouts_reply_t;
#endif

#ifndef _vl_api_defined_nat_set_addr_and_port_alloc_alg
#define _vl_api_defined_nat_set_addr_and_port_alloc_alg
typedef VL_API_PACKED(struct _vl_api_nat_set_addr_and_port_alloc_alg {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 alg;
    u8 psid_offset;
    u8 psid_length;
    u16 psid;
    u16 start_port;
    u16 end_port;
}) vl_api_nat_set_addr_and_port_alloc_alg_t;
#endif

#ifndef _vl_api_defined_nat_set_addr_and_port_alloc_alg_reply
#define _vl_api_defined_nat_set_addr_and_port_alloc_alg_reply
typedef VL_API_PACKED(struct _vl_api_nat_set_addr_and_port_alloc_alg_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_set_addr_and_port_alloc_alg_reply_t;
#endif

#ifndef _vl_api_defined_nat_get_addr_and_port_alloc_alg
#define _vl_api_defined_nat_get_addr_and_port_alloc_alg
typedef VL_API_PACKED(struct _vl_api_nat_get_addr_and_port_alloc_alg {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_get_addr_and_port_alloc_alg_t;
#endif

#ifndef _vl_api_defined_nat_get_addr_and_port_alloc_alg_reply
#define _vl_api_defined_nat_get_addr_and_port_alloc_alg_reply
typedef VL_API_PACKED(struct _vl_api_nat_get_addr_and_port_alloc_alg_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 alg;
    u8 psid_offset;
    u8 psid_length;
    u16 psid;
    u16 start_port;
    u16 end_port;
}) vl_api_nat_get_addr_and_port_alloc_alg_reply_t;
#endif

#ifndef _vl_api_defined_nat_set_mss_clamping
#define _vl_api_defined_nat_set_mss_clamping
typedef VL_API_PACKED(struct _vl_api_nat_set_mss_clamping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 mss_value;
    bool enable;
}) vl_api_nat_set_mss_clamping_t;
#endif

#ifndef _vl_api_defined_nat_set_mss_clamping_reply
#define _vl_api_defined_nat_set_mss_clamping_reply
typedef VL_API_PACKED(struct _vl_api_nat_set_mss_clamping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_set_mss_clamping_reply_t;
#endif

#ifndef _vl_api_defined_nat_get_mss_clamping
#define _vl_api_defined_nat_get_mss_clamping
typedef VL_API_PACKED(struct _vl_api_nat_get_mss_clamping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_get_mss_clamping_t;
#endif

#ifndef _vl_api_defined_nat_get_mss_clamping_reply
#define _vl_api_defined_nat_get_mss_clamping_reply
typedef VL_API_PACKED(struct _vl_api_nat_get_mss_clamping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u16 mss_value;
    bool enable;
}) vl_api_nat_get_mss_clamping_reply_t;
#endif

#ifndef _vl_api_defined_nat_ha_set_listener
#define _vl_api_defined_nat_ha_set_listener
typedef VL_API_PACKED(struct _vl_api_nat_ha_set_listener {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 path_mtu;
}) vl_api_nat_ha_set_listener_t;
#endif

#ifndef _vl_api_defined_nat_ha_set_listener_reply
#define _vl_api_defined_nat_ha_set_listener_reply
typedef VL_API_PACKED(struct _vl_api_nat_ha_set_listener_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_ha_set_listener_reply_t;
#endif

#ifndef _vl_api_defined_nat_ha_set_failover
#define _vl_api_defined_nat_ha_set_failover
typedef VL_API_PACKED(struct _vl_api_nat_ha_set_failover {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 session_refresh_interval;
}) vl_api_nat_ha_set_failover_t;
#endif

#ifndef _vl_api_defined_nat_ha_set_failover_reply
#define _vl_api_defined_nat_ha_set_failover_reply
typedef VL_API_PACKED(struct _vl_api_nat_ha_set_failover_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_ha_set_failover_reply_t;
#endif

#ifndef _vl_api_defined_nat_ha_get_listener
#define _vl_api_defined_nat_ha_get_listener
typedef VL_API_PACKED(struct _vl_api_nat_ha_get_listener {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_ha_get_listener_t;
#endif

#ifndef _vl_api_defined_nat_ha_get_listener_reply
#define _vl_api_defined_nat_ha_get_listener_reply
typedef VL_API_PACKED(struct _vl_api_nat_ha_get_listener_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 path_mtu;
}) vl_api_nat_ha_get_listener_reply_t;
#endif

#ifndef _vl_api_defined_nat_ha_get_failover
#define _vl_api_defined_nat_ha_get_failover
typedef VL_API_PACKED(struct _vl_api_nat_ha_get_failover {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_ha_get_failover_t;
#endif

#ifndef _vl_api_defined_nat_ha_get_failover_reply
#define _vl_api_defined_nat_ha_get_failover_reply
typedef VL_API_PACKED(struct _vl_api_nat_ha_get_failover_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip_address;
    u16 port;
    u32 session_refresh_interval;
}) vl_api_nat_ha_get_failover_reply_t;
#endif

#ifndef _vl_api_defined_nat_ha_flush
#define _vl_api_defined_nat_ha_flush
typedef VL_API_PACKED(struct _vl_api_nat_ha_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_ha_flush_t;
#endif

#ifndef _vl_api_defined_nat_ha_flush_reply
#define _vl_api_defined_nat_ha_flush_reply
typedef VL_API_PACKED(struct _vl_api_nat_ha_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_ha_flush_reply_t;
#endif

#ifndef _vl_api_defined_nat_ha_resync
#define _vl_api_defined_nat_ha_resync
typedef VL_API_PACKED(struct _vl_api_nat_ha_resync {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 want_resync_event;
    u32 pid;
}) vl_api_nat_ha_resync_t;
#endif

#ifndef _vl_api_defined_nat_ha_resync_reply
#define _vl_api_defined_nat_ha_resync_reply
typedef VL_API_PACKED(struct _vl_api_nat_ha_resync_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_ha_resync_reply_t;
#endif

#ifndef _vl_api_defined_nat_ha_resync_completed_event
#define _vl_api_defined_nat_ha_resync_completed_event
typedef VL_API_PACKED(struct _vl_api_nat_ha_resync_completed_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 missed_count;
}) vl_api_nat_ha_resync_completed_event_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_address_range
#define _vl_api_defined_nat44_add_del_address_range
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_address_range {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t first_ip_address;
    vl_api_ip4_address_t last_ip_address;
    u32 vrf_id;
    bool is_add;
    vl_api_nat_config_flags_t flags;
}) vl_api_nat44_add_del_address_range_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_address_range_reply
#define _vl_api_defined_nat44_add_del_address_range_reply
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_address_range_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_add_del_address_range_reply_t;
#endif

#ifndef _vl_api_defined_nat44_address_dump
#define _vl_api_defined_nat44_address_dump
typedef VL_API_PACKED(struct _vl_api_nat44_address_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_address_dump_t;
#endif

#ifndef _vl_api_defined_nat44_address_details
#define _vl_api_defined_nat44_address_details
typedef VL_API_PACKED(struct _vl_api_nat44_address_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t ip_address;
    vl_api_nat_config_flags_t flags;
    u32 vrf_id;
}) vl_api_nat44_address_details_t;
#endif

#ifndef _vl_api_defined_nat44_interface_add_del_feature
#define _vl_api_defined_nat44_interface_add_del_feature
typedef VL_API_PACKED(struct _vl_api_nat44_interface_add_del_feature {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat44_interface_add_del_feature_t;
#endif

#ifndef _vl_api_defined_nat44_interface_add_del_feature_reply
#define _vl_api_defined_nat44_interface_add_del_feature_reply
typedef VL_API_PACKED(struct _vl_api_nat44_interface_add_del_feature_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_interface_add_del_feature_reply_t;
#endif

#ifndef _vl_api_defined_nat44_interface_dump
#define _vl_api_defined_nat44_interface_dump
typedef VL_API_PACKED(struct _vl_api_nat44_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_interface_dump_t;
#endif

#ifndef _vl_api_defined_nat44_interface_details
#define _vl_api_defined_nat44_interface_details
typedef VL_API_PACKED(struct _vl_api_nat44_interface_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat44_interface_details_t;
#endif

#ifndef _vl_api_defined_nat44_interface_add_del_output_feature
#define _vl_api_defined_nat44_interface_add_del_output_feature
typedef VL_API_PACKED(struct _vl_api_nat44_interface_add_del_output_feature {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat44_interface_add_del_output_feature_t;
#endif

#ifndef _vl_api_defined_nat44_interface_add_del_output_feature_reply
#define _vl_api_defined_nat44_interface_add_del_output_feature_reply
typedef VL_API_PACKED(struct _vl_api_nat44_interface_add_del_output_feature_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_interface_add_del_output_feature_reply_t;
#endif

#ifndef _vl_api_defined_nat44_interface_output_feature_dump
#define _vl_api_defined_nat44_interface_output_feature_dump
typedef VL_API_PACKED(struct _vl_api_nat44_interface_output_feature_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_interface_output_feature_dump_t;
#endif

#ifndef _vl_api_defined_nat44_interface_output_feature_details
#define _vl_api_defined_nat44_interface_output_feature_details
typedef VL_API_PACKED(struct _vl_api_nat44_interface_output_feature_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat44_interface_output_feature_details_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_static_mapping
#define _vl_api_defined_nat44_add_del_static_mapping
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_static_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t local_ip_address;
    vl_api_ip4_address_t external_ip_address;
    u8 protocol;
    u16 local_port;
    u16 external_port;
    vl_api_interface_index_t external_sw_if_index;
    u32 vrf_id;
    u8 tag[64];
}) vl_api_nat44_add_del_static_mapping_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_static_mapping_reply
#define _vl_api_defined_nat44_add_del_static_mapping_reply
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_static_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_add_del_static_mapping_reply_t;
#endif

#ifndef _vl_api_defined_nat44_static_mapping_dump
#define _vl_api_defined_nat44_static_mapping_dump
typedef VL_API_PACKED(struct _vl_api_nat44_static_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_static_mapping_dump_t;
#endif

#ifndef _vl_api_defined_nat44_static_mapping_details
#define _vl_api_defined_nat44_static_mapping_details
typedef VL_API_PACKED(struct _vl_api_nat44_static_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t local_ip_address;
    vl_api_ip4_address_t external_ip_address;
    u8 protocol;
    u16 local_port;
    u16 external_port;
    vl_api_interface_index_t external_sw_if_index;
    u32 vrf_id;
    u8 tag[64];
}) vl_api_nat44_static_mapping_details_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_identity_mapping
#define _vl_api_defined_nat44_add_del_identity_mapping
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_identity_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t ip_address;
    u8 protocol;
    u16 port;
    vl_api_interface_index_t sw_if_index;
    u32 vrf_id;
    u8 tag[64];
}) vl_api_nat44_add_del_identity_mapping_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_identity_mapping_reply
#define _vl_api_defined_nat44_add_del_identity_mapping_reply
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_identity_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_add_del_identity_mapping_reply_t;
#endif

#ifndef _vl_api_defined_nat44_identity_mapping_dump
#define _vl_api_defined_nat44_identity_mapping_dump
typedef VL_API_PACKED(struct _vl_api_nat44_identity_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_identity_mapping_dump_t;
#endif

#ifndef _vl_api_defined_nat44_identity_mapping_details
#define _vl_api_defined_nat44_identity_mapping_details
typedef VL_API_PACKED(struct _vl_api_nat44_identity_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t ip_address;
    u8 protocol;
    u16 port;
    vl_api_interface_index_t sw_if_index;
    u32 vrf_id;
    u8 tag[64];
}) vl_api_nat44_identity_mapping_details_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_interface_addr
#define _vl_api_defined_nat44_add_del_interface_addr
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_interface_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
    vl_api_nat_config_flags_t flags;
}) vl_api_nat44_add_del_interface_addr_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_interface_addr_reply
#define _vl_api_defined_nat44_add_del_interface_addr_reply
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_interface_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_add_del_interface_addr_reply_t;
#endif

#ifndef _vl_api_defined_nat44_interface_addr_dump
#define _vl_api_defined_nat44_interface_addr_dump
typedef VL_API_PACKED(struct _vl_api_nat44_interface_addr_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_interface_addr_dump_t;
#endif

#ifndef _vl_api_defined_nat44_interface_addr_details
#define _vl_api_defined_nat44_interface_addr_details
typedef VL_API_PACKED(struct _vl_api_nat44_interface_addr_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_interface_index_t sw_if_index;
    vl_api_nat_config_flags_t flags;
}) vl_api_nat44_interface_addr_details_t;
#endif

#ifndef _vl_api_defined_nat44_user_dump
#define _vl_api_defined_nat44_user_dump
typedef VL_API_PACKED(struct _vl_api_nat44_user_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_user_dump_t;
#endif

#ifndef _vl_api_defined_nat44_user_details
#define _vl_api_defined_nat44_user_details
typedef VL_API_PACKED(struct _vl_api_nat44_user_details {
    u16 _vl_msg_id;
    u32 context;
    u32 vrf_id;
    vl_api_ip4_address_t ip_address;
    u32 nsessions;
    u32 nstaticsessions;
}) vl_api_nat44_user_details_t;
#endif

#ifndef _vl_api_defined_nat44_user_session_dump
#define _vl_api_defined_nat44_user_session_dump
typedef VL_API_PACKED(struct _vl_api_nat44_user_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip_address;
    u32 vrf_id;
}) vl_api_nat44_user_session_dump_t;
#endif

#ifndef _vl_api_defined_nat44_user_session_details
#define _vl_api_defined_nat44_user_session_details
typedef VL_API_PACKED(struct _vl_api_nat44_user_session_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t outside_ip_address;
    u16 outside_port;
    vl_api_ip4_address_t inside_ip_address;
    u16 inside_port;
    u16 protocol;
    vl_api_nat_config_flags_t flags;
    u64 last_heard;
    u64 total_bytes;
    u32 total_pkts;
    vl_api_ip4_address_t ext_host_address;
    u16 ext_host_port;
    vl_api_ip4_address_t ext_host_nat_address;
    u16 ext_host_nat_port;
}) vl_api_nat44_user_session_details_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_lb_static_mapping
#define _vl_api_defined_nat44_add_del_lb_static_mapping
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_lb_static_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t external_addr;
    u16 external_port;
    u8 protocol;
    u32 affinity;
    u8 tag[64];
    u32 local_num;
    vl_api_nat44_lb_addr_port_t locals[0];
}) vl_api_nat44_add_del_lb_static_mapping_t;
#endif

#ifndef _vl_api_defined_nat44_add_del_lb_static_mapping_reply
#define _vl_api_defined_nat44_add_del_lb_static_mapping_reply
typedef VL_API_PACKED(struct _vl_api_nat44_add_del_lb_static_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_add_del_lb_static_mapping_reply_t;
#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_add_del_local
#define _vl_api_defined_nat44_lb_static_mapping_add_del_local
typedef VL_API_PACKED(struct _vl_api_nat44_lb_static_mapping_add_del_local {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip4_address_t external_addr;
    u16 external_port;
    u8 protocol;
    vl_api_nat44_lb_addr_port_t local;
}) vl_api_nat44_lb_static_mapping_add_del_local_t;
#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_add_del_local_reply
#define _vl_api_defined_nat44_lb_static_mapping_add_del_local_reply
typedef VL_API_PACKED(struct _vl_api_nat44_lb_static_mapping_add_del_local_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_lb_static_mapping_add_del_local_reply_t;
#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_dump
#define _vl_api_defined_nat44_lb_static_mapping_dump
typedef VL_API_PACKED(struct _vl_api_nat44_lb_static_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_lb_static_mapping_dump_t;
#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_details
#define _vl_api_defined_nat44_lb_static_mapping_details
typedef VL_API_PACKED(struct _vl_api_nat44_lb_static_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t external_addr;
    u16 external_port;
    u8 protocol;
    vl_api_nat_config_flags_t flags;
    u32 affinity;
    u8 tag[64];
    u32 local_num;
    vl_api_nat44_lb_addr_port_t locals[0];
}) vl_api_nat44_lb_static_mapping_details_t;
#endif

#ifndef _vl_api_defined_nat44_del_session
#define _vl_api_defined_nat44_del_session
typedef VL_API_PACKED(struct _vl_api_nat44_del_session {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t address;
    u8 protocol;
    u16 port;
    u32 vrf_id;
    vl_api_nat_config_flags_t flags;
    vl_api_ip4_address_t ext_host_address;
    u16 ext_host_port;
}) vl_api_nat44_del_session_t;
#endif

#ifndef _vl_api_defined_nat44_del_session_reply
#define _vl_api_defined_nat44_del_session_reply
typedef VL_API_PACKED(struct _vl_api_nat44_del_session_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_del_session_reply_t;
#endif

#ifndef _vl_api_defined_nat44_forwarding_enable_disable
#define _vl_api_defined_nat44_forwarding_enable_disable
typedef VL_API_PACKED(struct _vl_api_nat44_forwarding_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable;
}) vl_api_nat44_forwarding_enable_disable_t;
#endif

#ifndef _vl_api_defined_nat44_forwarding_enable_disable_reply
#define _vl_api_defined_nat44_forwarding_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_nat44_forwarding_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat44_forwarding_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_nat44_forwarding_is_enabled
#define _vl_api_defined_nat44_forwarding_is_enabled
typedef VL_API_PACKED(struct _vl_api_nat44_forwarding_is_enabled {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat44_forwarding_is_enabled_t;
#endif

#ifndef _vl_api_defined_nat44_forwarding_is_enabled_reply
#define _vl_api_defined_nat44_forwarding_is_enabled_reply
typedef VL_API_PACKED(struct _vl_api_nat44_forwarding_is_enabled_reply {
    u16 _vl_msg_id;
    u32 context;
    bool enabled;
}) vl_api_nat44_forwarding_is_enabled_reply_t;
#endif

#ifndef _vl_api_defined_nat_det_add_del_map
#define _vl_api_defined_nat_det_add_del_map
typedef VL_API_PACKED(struct _vl_api_nat_det_add_del_map {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip4_address_t in_addr;
    u8 in_plen;
    vl_api_ip4_address_t out_addr;
    u8 out_plen;
}) vl_api_nat_det_add_del_map_t;
#endif

#ifndef _vl_api_defined_nat_det_add_del_map_reply
#define _vl_api_defined_nat_det_add_del_map_reply
typedef VL_API_PACKED(struct _vl_api_nat_det_add_del_map_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_det_add_del_map_reply_t;
#endif

#ifndef _vl_api_defined_nat_det_forward
#define _vl_api_defined_nat_det_forward
typedef VL_API_PACKED(struct _vl_api_nat_det_forward {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t in_addr;
}) vl_api_nat_det_forward_t;
#endif

#ifndef _vl_api_defined_nat_det_forward_reply
#define _vl_api_defined_nat_det_forward_reply
typedef VL_API_PACKED(struct _vl_api_nat_det_forward_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u16 out_port_lo;
    u16 out_port_hi;
    vl_api_ip4_address_t out_addr;
}) vl_api_nat_det_forward_reply_t;
#endif

#ifndef _vl_api_defined_nat_det_reverse
#define _vl_api_defined_nat_det_reverse
typedef VL_API_PACKED(struct _vl_api_nat_det_reverse {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 out_port;
    vl_api_ip4_address_t out_addr;
}) vl_api_nat_det_reverse_t;
#endif

#ifndef _vl_api_defined_nat_det_reverse_reply
#define _vl_api_defined_nat_det_reverse_reply
typedef VL_API_PACKED(struct _vl_api_nat_det_reverse_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t in_addr;
}) vl_api_nat_det_reverse_reply_t;
#endif

#ifndef _vl_api_defined_nat_det_map_dump
#define _vl_api_defined_nat_det_map_dump
typedef VL_API_PACKED(struct _vl_api_nat_det_map_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat_det_map_dump_t;
#endif

#ifndef _vl_api_defined_nat_det_map_details
#define _vl_api_defined_nat_det_map_details
typedef VL_API_PACKED(struct _vl_api_nat_det_map_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t in_addr;
    u8 in_plen;
    vl_api_ip4_address_t out_addr;
    u8 out_plen;
    u32 sharing_ratio;
    u16 ports_per_host;
    u32 ses_num;
}) vl_api_nat_det_map_details_t;
#endif

#ifndef _vl_api_defined_nat_det_close_session_out
#define _vl_api_defined_nat_det_close_session_out
typedef VL_API_PACKED(struct _vl_api_nat_det_close_session_out {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t out_addr;
    u16 out_port;
    vl_api_ip4_address_t ext_addr;
    u16 ext_port;
}) vl_api_nat_det_close_session_out_t;
#endif

#ifndef _vl_api_defined_nat_det_close_session_out_reply
#define _vl_api_defined_nat_det_close_session_out_reply
typedef VL_API_PACKED(struct _vl_api_nat_det_close_session_out_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_det_close_session_out_reply_t;
#endif

#ifndef _vl_api_defined_nat_det_close_session_in
#define _vl_api_defined_nat_det_close_session_in
typedef VL_API_PACKED(struct _vl_api_nat_det_close_session_in {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t in_addr;
    u16 in_port;
    vl_api_ip4_address_t ext_addr;
    u16 ext_port;
}) vl_api_nat_det_close_session_in_t;
#endif

#ifndef _vl_api_defined_nat_det_close_session_in_reply
#define _vl_api_defined_nat_det_close_session_in_reply
typedef VL_API_PACKED(struct _vl_api_nat_det_close_session_in_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat_det_close_session_in_reply_t;
#endif

#ifndef _vl_api_defined_nat_det_session_dump
#define _vl_api_defined_nat_det_session_dump
typedef VL_API_PACKED(struct _vl_api_nat_det_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t user_addr;
}) vl_api_nat_det_session_dump_t;
#endif

#ifndef _vl_api_defined_nat_det_session_details
#define _vl_api_defined_nat_det_session_details
typedef VL_API_PACKED(struct _vl_api_nat_det_session_details {
    u16 _vl_msg_id;
    u32 context;
    u16 in_port;
    vl_api_ip4_address_t ext_addr;
    u16 ext_port;
    u16 out_port;
    u8 state;
    u32 expire;
}) vl_api_nat_det_session_details_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_pool_addr_range
#define _vl_api_defined_nat64_add_del_pool_addr_range
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_pool_addr_range {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t start_addr;
    vl_api_ip4_address_t end_addr;
    u32 vrf_id;
    bool is_add;
}) vl_api_nat64_add_del_pool_addr_range_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_pool_addr_range_reply
#define _vl_api_defined_nat64_add_del_pool_addr_range_reply
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_pool_addr_range_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat64_add_del_pool_addr_range_reply_t;
#endif

#ifndef _vl_api_defined_nat64_pool_addr_dump
#define _vl_api_defined_nat64_pool_addr_dump
typedef VL_API_PACKED(struct _vl_api_nat64_pool_addr_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat64_pool_addr_dump_t;
#endif

#ifndef _vl_api_defined_nat64_pool_addr_details
#define _vl_api_defined_nat64_pool_addr_details
typedef VL_API_PACKED(struct _vl_api_nat64_pool_addr_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t address;
    u32 vrf_id;
}) vl_api_nat64_pool_addr_details_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_interface
#define _vl_api_defined_nat64_add_del_interface
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat64_add_del_interface_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_interface_reply
#define _vl_api_defined_nat64_add_del_interface_reply
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat64_add_del_interface_reply_t;
#endif

#ifndef _vl_api_defined_nat64_interface_dump
#define _vl_api_defined_nat64_interface_dump
typedef VL_API_PACKED(struct _vl_api_nat64_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat64_interface_dump_t;
#endif

#ifndef _vl_api_defined_nat64_interface_details
#define _vl_api_defined_nat64_interface_details
typedef VL_API_PACKED(struct _vl_api_nat64_interface_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat64_interface_details_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_static_bib
#define _vl_api_defined_nat64_add_del_static_bib
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_static_bib {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_address_t i_addr;
    vl_api_ip4_address_t o_addr;
    u16 i_port;
    u16 o_port;
    u32 vrf_id;
    u8 proto;
    bool is_add;
}) vl_api_nat64_add_del_static_bib_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_static_bib_reply
#define _vl_api_defined_nat64_add_del_static_bib_reply
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_static_bib_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat64_add_del_static_bib_reply_t;
#endif

#ifndef _vl_api_defined_nat64_bib_dump
#define _vl_api_defined_nat64_bib_dump
typedef VL_API_PACKED(struct _vl_api_nat64_bib_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 proto;
}) vl_api_nat64_bib_dump_t;
#endif

#ifndef _vl_api_defined_nat64_bib_details
#define _vl_api_defined_nat64_bib_details
typedef VL_API_PACKED(struct _vl_api_nat64_bib_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t i_addr;
    vl_api_ip4_address_t o_addr;
    u16 i_port;
    u16 o_port;
    u32 vrf_id;
    u8 proto;
    vl_api_nat_config_flags_t flags;
    u32 ses_num;
}) vl_api_nat64_bib_details_t;
#endif

#ifndef _vl_api_defined_nat64_st_dump
#define _vl_api_defined_nat64_st_dump
typedef VL_API_PACKED(struct _vl_api_nat64_st_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 proto;
}) vl_api_nat64_st_dump_t;
#endif

#ifndef _vl_api_defined_nat64_st_details
#define _vl_api_defined_nat64_st_details
typedef VL_API_PACKED(struct _vl_api_nat64_st_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t il_addr;
    vl_api_ip4_address_t ol_addr;
    u16 il_port;
    u16 ol_port;
    vl_api_ip6_address_t ir_addr;
    vl_api_ip4_address_t or_addr;
    u16 r_port;
    u32 vrf_id;
    u8 proto;
}) vl_api_nat64_st_details_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_prefix
#define _vl_api_defined_nat64_add_del_prefix
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_prefix {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip6_prefix_t prefix;
    u32 vrf_id;
    bool is_add;
}) vl_api_nat64_add_del_prefix_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_prefix_reply
#define _vl_api_defined_nat64_add_del_prefix_reply
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_prefix_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat64_add_del_prefix_reply_t;
#endif

#ifndef _vl_api_defined_nat64_prefix_dump
#define _vl_api_defined_nat64_prefix_dump
typedef VL_API_PACKED(struct _vl_api_nat64_prefix_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat64_prefix_dump_t;
#endif

#ifndef _vl_api_defined_nat64_prefix_details
#define _vl_api_defined_nat64_prefix_details
typedef VL_API_PACKED(struct _vl_api_nat64_prefix_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_prefix_t prefix;
    u32 vrf_id;
}) vl_api_nat64_prefix_details_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_interface_addr
#define _vl_api_defined_nat64_add_del_interface_addr
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_interface_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat64_add_del_interface_addr_t;
#endif

#ifndef _vl_api_defined_nat64_add_del_interface_addr_reply
#define _vl_api_defined_nat64_add_del_interface_addr_reply
typedef VL_API_PACKED(struct _vl_api_nat64_add_del_interface_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat64_add_del_interface_addr_reply_t;
#endif

#ifndef _vl_api_defined_dslite_add_del_pool_addr_range
#define _vl_api_defined_dslite_add_del_pool_addr_range
typedef VL_API_PACKED(struct _vl_api_dslite_add_del_pool_addr_range {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t start_addr;
    vl_api_ip4_address_t end_addr;
    bool is_add;
}) vl_api_dslite_add_del_pool_addr_range_t;
#endif

#ifndef _vl_api_defined_dslite_add_del_pool_addr_range_reply
#define _vl_api_defined_dslite_add_del_pool_addr_range_reply
typedef VL_API_PACKED(struct _vl_api_dslite_add_del_pool_addr_range_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dslite_add_del_pool_addr_range_reply_t;
#endif

#ifndef _vl_api_defined_dslite_address_dump
#define _vl_api_defined_dslite_address_dump
typedef VL_API_PACKED(struct _vl_api_dslite_address_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_dslite_address_dump_t;
#endif

#ifndef _vl_api_defined_dslite_address_details
#define _vl_api_defined_dslite_address_details
typedef VL_API_PACKED(struct _vl_api_dslite_address_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip4_address_t ip_address;
}) vl_api_dslite_address_details_t;
#endif

#ifndef _vl_api_defined_dslite_set_aftr_addr
#define _vl_api_defined_dslite_set_aftr_addr
typedef VL_API_PACKED(struct _vl_api_dslite_set_aftr_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
}) vl_api_dslite_set_aftr_addr_t;
#endif

#ifndef _vl_api_defined_dslite_set_aftr_addr_reply
#define _vl_api_defined_dslite_set_aftr_addr_reply
typedef VL_API_PACKED(struct _vl_api_dslite_set_aftr_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dslite_set_aftr_addr_reply_t;
#endif

#ifndef _vl_api_defined_dslite_get_aftr_addr
#define _vl_api_defined_dslite_get_aftr_addr
typedef VL_API_PACKED(struct _vl_api_dslite_get_aftr_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_dslite_get_aftr_addr_t;
#endif

#ifndef _vl_api_defined_dslite_get_aftr_addr_reply
#define _vl_api_defined_dslite_get_aftr_addr_reply
typedef VL_API_PACKED(struct _vl_api_dslite_get_aftr_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
}) vl_api_dslite_get_aftr_addr_reply_t;
#endif

#ifndef _vl_api_defined_dslite_set_b4_addr
#define _vl_api_defined_dslite_set_b4_addr
typedef VL_API_PACKED(struct _vl_api_dslite_set_b4_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
}) vl_api_dslite_set_b4_addr_t;
#endif

#ifndef _vl_api_defined_dslite_set_b4_addr_reply
#define _vl_api_defined_dslite_set_b4_addr_reply
typedef VL_API_PACKED(struct _vl_api_dslite_set_b4_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dslite_set_b4_addr_reply_t;
#endif

#ifndef _vl_api_defined_dslite_get_b4_addr
#define _vl_api_defined_dslite_get_b4_addr
typedef VL_API_PACKED(struct _vl_api_dslite_get_b4_addr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_dslite_get_b4_addr_t;
#endif

#ifndef _vl_api_defined_dslite_get_b4_addr_reply
#define _vl_api_defined_dslite_get_b4_addr_reply
typedef VL_API_PACKED(struct _vl_api_dslite_get_b4_addr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_ip4_address_t ip4_addr;
    vl_api_ip6_address_t ip6_addr;
}) vl_api_dslite_get_b4_addr_reply_t;
#endif

#ifndef _vl_api_defined_nat66_add_del_interface
#define _vl_api_defined_nat66_add_del_interface
typedef VL_API_PACKED(struct _vl_api_nat66_add_del_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat66_add_del_interface_t;
#endif

#ifndef _vl_api_defined_nat66_add_del_interface_reply
#define _vl_api_defined_nat66_add_del_interface_reply
typedef VL_API_PACKED(struct _vl_api_nat66_add_del_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat66_add_del_interface_reply_t;
#endif

#ifndef _vl_api_defined_nat66_interface_dump
#define _vl_api_defined_nat66_interface_dump
typedef VL_API_PACKED(struct _vl_api_nat66_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat66_interface_dump_t;
#endif

#ifndef _vl_api_defined_nat66_interface_details
#define _vl_api_defined_nat66_interface_details
typedef VL_API_PACKED(struct _vl_api_nat66_interface_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_nat_config_flags_t flags;
    vl_api_interface_index_t sw_if_index;
}) vl_api_nat66_interface_details_t;
#endif

#ifndef _vl_api_defined_nat66_add_del_static_mapping
#define _vl_api_defined_nat66_add_del_static_mapping
typedef VL_API_PACKED(struct _vl_api_nat66_add_del_static_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool is_add;
    vl_api_ip6_address_t local_ip_address;
    vl_api_ip6_address_t external_ip_address;
    u32 vrf_id;
}) vl_api_nat66_add_del_static_mapping_t;
#endif

#ifndef _vl_api_defined_nat66_add_del_static_mapping_reply
#define _vl_api_defined_nat66_add_del_static_mapping_reply
typedef VL_API_PACKED(struct _vl_api_nat66_add_del_static_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nat66_add_del_static_mapping_reply_t;
#endif

#ifndef _vl_api_defined_nat66_static_mapping_dump
#define _vl_api_defined_nat66_static_mapping_dump
typedef VL_API_PACKED(struct _vl_api_nat66_static_mapping_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_nat66_static_mapping_dump_t;
#endif

#ifndef _vl_api_defined_nat66_static_mapping_details
#define _vl_api_defined_nat66_static_mapping_details
typedef VL_API_PACKED(struct _vl_api_nat66_static_mapping_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip6_address_t local_ip_address;
    vl_api_ip6_address_t external_ip_address;
    u32 vrf_id;
    u64 total_bytes;
    u64 total_pkts;
}) vl_api_nat66_static_mapping_details_t;
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

/***** manual: vl_api_ip4_address_t_print  *****/

/***** manual: vl_api_ip6_address_t_print  *****/

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

/***** manual: vl_api_address_with_prefix_t_print  *****/

/***** manual: vl_api_ip4_address_with_prefix_t_print  *****/

/***** manual: vl_api_ip6_address_with_prefix_t_print  *****/

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

/***** manual: vl_api_interface_index_t_print  *****/

#ifndef _vl_api_defined_nat44_lb_addr_port_t_print
#define _vl_api_defined_nat44_lb_addr_port_t_print
static inline void *vl_api_nat44_lb_addr_port_t_print (vl_api_nat44_lb_addr_port_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_lb_addr_port_t:\n");
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "probability: %u\n", a->probability);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_control_ping_t_print
#define _vl_api_defined_nat_control_ping_t_print
static inline void *vl_api_nat_control_ping_t_print (vl_api_nat_control_ping_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_control_ping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_control_ping_reply_t_print
#define _vl_api_defined_nat_control_ping_reply_t_print
static inline void *vl_api_nat_control_ping_reply_t_print (vl_api_nat_control_ping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_control_ping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "vpe_pid: %u\n", a->vpe_pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_show_config_t_print
#define _vl_api_defined_nat_show_config_t_print
static inline void *vl_api_nat_show_config_t_print (vl_api_nat_show_config_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_show_config_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_show_config_reply_t_print
#define _vl_api_defined_nat_show_config_reply_t_print
static inline void *vl_api_nat_show_config_reply_t_print (vl_api_nat_show_config_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_show_config_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "translation_buckets: %u\n", a->translation_buckets);
    vl_print(handle, "translation_memory_size: %u\n", a->translation_memory_size);
    vl_print(handle, "user_buckets: %u\n", a->user_buckets);
    vl_print(handle, "user_memory_size: %u\n", a->user_memory_size);
    vl_print(handle, "max_translations_per_user: %u\n", a->max_translations_per_user);
    vl_print(handle, "outside_vrf_id: %u\n", a->outside_vrf_id);
    vl_print(handle, "inside_vrf_id: %u\n", a->inside_vrf_id);
    vl_print(handle, "nat64_bib_buckets: %u\n", a->nat64_bib_buckets);
    vl_print(handle, "nat64_bib_memory_size: %u\n", a->nat64_bib_memory_size);
    vl_print(handle, "nat64_st_buckets: %u\n", a->nat64_st_buckets);
    vl_print(handle, "nat64_st_memory_size: %u\n", a->nat64_st_memory_size);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_log_level_t_print
#define _vl_api_defined_nat_set_log_level_t_print
static inline void *vl_api_nat_set_log_level_t_print (vl_api_nat_set_log_level_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_log_level_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_log_level_reply_t_print
#define _vl_api_defined_nat_set_log_level_reply_t_print
static inline void *vl_api_nat_set_log_level_reply_t_print (vl_api_nat_set_log_level_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_log_level_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_workers_t_print
#define _vl_api_defined_nat_set_workers_t_print
static inline void *vl_api_nat_set_workers_t_print (vl_api_nat_set_workers_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_workers_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "worker_mask: %llu\n", a->worker_mask);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_workers_reply_t_print
#define _vl_api_defined_nat_set_workers_reply_t_print
static inline void *vl_api_nat_set_workers_reply_t_print (vl_api_nat_set_workers_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_workers_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_worker_dump_t_print
#define _vl_api_defined_nat_worker_dump_t_print
static inline void *vl_api_nat_worker_dump_t_print (vl_api_nat_worker_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_worker_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_worker_details_t_print
#define _vl_api_defined_nat_worker_details_t_print
static inline void *vl_api_nat_worker_details_t_print (vl_api_nat_worker_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_worker_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "worker_index: %u\n", a->worker_index);
    vl_print(handle, "lcore_id: %u\n", a->lcore_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ipfix_enable_disable_t_print
#define _vl_api_defined_nat_ipfix_enable_disable_t_print
static inline void *vl_api_nat_ipfix_enable_disable_t_print (vl_api_nat_ipfix_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ipfix_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "domain_id: %u\n", a->domain_id);
    vl_print(handle, "src_port: %u\n", a->src_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ipfix_enable_disable_reply_t_print
#define _vl_api_defined_nat_ipfix_enable_disable_reply_t_print
static inline void *vl_api_nat_ipfix_enable_disable_reply_t_print (vl_api_nat_ipfix_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ipfix_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_reass_t_print
#define _vl_api_defined_nat_set_reass_t_print
static inline void *vl_api_nat_set_reass_t_print (vl_api_nat_set_reass_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_reass_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "timeout: %u\n", a->timeout);
    vl_print(handle, "max_reass: %u\n", a->max_reass);
    vl_print(handle, "max_frag: %u\n", a->max_frag);
    vl_print(handle, "drop_frag: %u\n", a->drop_frag);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_reass_reply_t_print
#define _vl_api_defined_nat_set_reass_reply_t_print
static inline void *vl_api_nat_set_reass_reply_t_print (vl_api_nat_set_reass_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_reass_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_reass_t_print
#define _vl_api_defined_nat_get_reass_t_print
static inline void *vl_api_nat_get_reass_t_print (vl_api_nat_get_reass_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_reass_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_reass_reply_t_print
#define _vl_api_defined_nat_get_reass_reply_t_print
static inline void *vl_api_nat_get_reass_reply_t_print (vl_api_nat_get_reass_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_reass_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "ip4_timeout: %u\n", a->ip4_timeout);
    vl_print(handle, "ip4_max_reass: %u\n", a->ip4_max_reass);
    vl_print(handle, "ip4_max_frag: %u\n", a->ip4_max_frag);
    vl_print(handle, "ip4_drop_frag: %u\n", a->ip4_drop_frag);
    vl_print(handle, "ip6_timeout: %u\n", a->ip6_timeout);
    vl_print(handle, "ip6_max_reass: %u\n", a->ip6_max_reass);
    vl_print(handle, "ip6_max_frag: %u\n", a->ip6_max_frag);
    vl_print(handle, "ip6_drop_frag: %u\n", a->ip6_drop_frag);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_reass_dump_t_print
#define _vl_api_defined_nat_reass_dump_t_print
static inline void *vl_api_nat_reass_dump_t_print (vl_api_nat_reass_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_reass_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_reass_details_t_print
#define _vl_api_defined_nat_reass_details_t_print
static inline void *vl_api_nat_reass_details_t_print (vl_api_nat_reass_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_reass_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "frag_id: %u\n", a->frag_id);
    vl_print(handle, "proto: %u\n", a->proto);
    vl_print(handle, "frag_n: %u\n", a->frag_n);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_timeouts_t_print
#define _vl_api_defined_nat_set_timeouts_t_print
static inline void *vl_api_nat_set_timeouts_t_print (vl_api_nat_set_timeouts_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_timeouts_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "udp: %u\n", a->udp);
    vl_print(handle, "tcp_established: %u\n", a->tcp_established);
    vl_print(handle, "tcp_transitory: %u\n", a->tcp_transitory);
    vl_print(handle, "icmp: %u\n", a->icmp);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_timeouts_reply_t_print
#define _vl_api_defined_nat_set_timeouts_reply_t_print
static inline void *vl_api_nat_set_timeouts_reply_t_print (vl_api_nat_set_timeouts_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_timeouts_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_timeouts_t_print
#define _vl_api_defined_nat_get_timeouts_t_print
static inline void *vl_api_nat_get_timeouts_t_print (vl_api_nat_get_timeouts_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_timeouts_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_timeouts_reply_t_print
#define _vl_api_defined_nat_get_timeouts_reply_t_print
static inline void *vl_api_nat_get_timeouts_reply_t_print (vl_api_nat_get_timeouts_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_timeouts_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "udp: %u\n", a->udp);
    vl_print(handle, "tcp_established: %u\n", a->tcp_established);
    vl_print(handle, "tcp_transitory: %u\n", a->tcp_transitory);
    vl_print(handle, "icmp: %u\n", a->icmp);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_addr_and_port_alloc_alg_t_print
#define _vl_api_defined_nat_set_addr_and_port_alloc_alg_t_print
static inline void *vl_api_nat_set_addr_and_port_alloc_alg_t_print (vl_api_nat_set_addr_and_port_alloc_alg_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_addr_and_port_alloc_alg_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "alg: %u\n", a->alg);
    vl_print(handle, "psid_offset: %u\n", a->psid_offset);
    vl_print(handle, "psid_length: %u\n", a->psid_length);
    vl_print(handle, "psid: %u\n", a->psid);
    vl_print(handle, "start_port: %u\n", a->start_port);
    vl_print(handle, "end_port: %u\n", a->end_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_addr_and_port_alloc_alg_reply_t_print
#define _vl_api_defined_nat_set_addr_and_port_alloc_alg_reply_t_print
static inline void *vl_api_nat_set_addr_and_port_alloc_alg_reply_t_print (vl_api_nat_set_addr_and_port_alloc_alg_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_addr_and_port_alloc_alg_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_addr_and_port_alloc_alg_t_print
#define _vl_api_defined_nat_get_addr_and_port_alloc_alg_t_print
static inline void *vl_api_nat_get_addr_and_port_alloc_alg_t_print (vl_api_nat_get_addr_and_port_alloc_alg_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_addr_and_port_alloc_alg_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_addr_and_port_alloc_alg_reply_t_print
#define _vl_api_defined_nat_get_addr_and_port_alloc_alg_reply_t_print
static inline void *vl_api_nat_get_addr_and_port_alloc_alg_reply_t_print (vl_api_nat_get_addr_and_port_alloc_alg_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_addr_and_port_alloc_alg_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "alg: %u\n", a->alg);
    vl_print(handle, "psid_offset: %u\n", a->psid_offset);
    vl_print(handle, "psid_length: %u\n", a->psid_length);
    vl_print(handle, "psid: %u\n", a->psid);
    vl_print(handle, "start_port: %u\n", a->start_port);
    vl_print(handle, "end_port: %u\n", a->end_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_mss_clamping_t_print
#define _vl_api_defined_nat_set_mss_clamping_t_print
static inline void *vl_api_nat_set_mss_clamping_t_print (vl_api_nat_set_mss_clamping_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_mss_clamping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "mss_value: %u\n", a->mss_value);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_set_mss_clamping_reply_t_print
#define _vl_api_defined_nat_set_mss_clamping_reply_t_print
static inline void *vl_api_nat_set_mss_clamping_reply_t_print (vl_api_nat_set_mss_clamping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_set_mss_clamping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_mss_clamping_t_print
#define _vl_api_defined_nat_get_mss_clamping_t_print
static inline void *vl_api_nat_get_mss_clamping_t_print (vl_api_nat_get_mss_clamping_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_mss_clamping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_get_mss_clamping_reply_t_print
#define _vl_api_defined_nat_get_mss_clamping_reply_t_print
static inline void *vl_api_nat_get_mss_clamping_reply_t_print (vl_api_nat_get_mss_clamping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_get_mss_clamping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "mss_value: %u\n", a->mss_value);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_set_listener_t_print
#define _vl_api_defined_nat_ha_set_listener_t_print
static inline void *vl_api_nat_ha_set_listener_t_print (vl_api_nat_ha_set_listener_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_set_listener_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "path_mtu: %u\n", a->path_mtu);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_set_listener_reply_t_print
#define _vl_api_defined_nat_ha_set_listener_reply_t_print
static inline void *vl_api_nat_ha_set_listener_reply_t_print (vl_api_nat_ha_set_listener_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_set_listener_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_set_failover_t_print
#define _vl_api_defined_nat_ha_set_failover_t_print
static inline void *vl_api_nat_ha_set_failover_t_print (vl_api_nat_ha_set_failover_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_set_failover_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "session_refresh_interval: %u\n", a->session_refresh_interval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_set_failover_reply_t_print
#define _vl_api_defined_nat_ha_set_failover_reply_t_print
static inline void *vl_api_nat_ha_set_failover_reply_t_print (vl_api_nat_ha_set_failover_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_set_failover_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_get_listener_t_print
#define _vl_api_defined_nat_ha_get_listener_t_print
static inline void *vl_api_nat_ha_get_listener_t_print (vl_api_nat_ha_get_listener_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_get_listener_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_get_listener_reply_t_print
#define _vl_api_defined_nat_ha_get_listener_reply_t_print
static inline void *vl_api_nat_ha_get_listener_reply_t_print (vl_api_nat_ha_get_listener_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_get_listener_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "path_mtu: %u\n", a->path_mtu);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_get_failover_t_print
#define _vl_api_defined_nat_ha_get_failover_t_print
static inline void *vl_api_nat_ha_get_failover_t_print (vl_api_nat_ha_get_failover_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_get_failover_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_get_failover_reply_t_print
#define _vl_api_defined_nat_ha_get_failover_reply_t_print
static inline void *vl_api_nat_ha_get_failover_reply_t_print (vl_api_nat_ha_get_failover_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_get_failover_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "session_refresh_interval: %u\n", a->session_refresh_interval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_flush_t_print
#define _vl_api_defined_nat_ha_flush_t_print
static inline void *vl_api_nat_ha_flush_t_print (vl_api_nat_ha_flush_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_flush_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_flush_reply_t_print
#define _vl_api_defined_nat_ha_flush_reply_t_print
static inline void *vl_api_nat_ha_flush_reply_t_print (vl_api_nat_ha_flush_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_flush_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_resync_t_print
#define _vl_api_defined_nat_ha_resync_t_print
static inline void *vl_api_nat_ha_resync_t_print (vl_api_nat_ha_resync_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_resync_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "want_resync_event: %u\n", a->want_resync_event);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_resync_reply_t_print
#define _vl_api_defined_nat_ha_resync_reply_t_print
static inline void *vl_api_nat_ha_resync_reply_t_print (vl_api_nat_ha_resync_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_resync_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_ha_resync_completed_event_t_print
#define _vl_api_defined_nat_ha_resync_completed_event_t_print
static inline void *vl_api_nat_ha_resync_completed_event_t_print (vl_api_nat_ha_resync_completed_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_ha_resync_completed_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "missed_count: %u\n", a->missed_count);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_address_range_t_print
#define _vl_api_defined_nat44_add_del_address_range_t_print
static inline void *vl_api_nat44_add_del_address_range_t_print (vl_api_nat44_add_del_address_range_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_address_range_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_address_range_reply_t_print
#define _vl_api_defined_nat44_add_del_address_range_reply_t_print
static inline void *vl_api_nat44_add_del_address_range_reply_t_print (vl_api_nat44_add_del_address_range_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_address_range_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_address_dump_t_print
#define _vl_api_defined_nat44_address_dump_t_print
static inline void *vl_api_nat44_address_dump_t_print (vl_api_nat44_address_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_address_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_address_details_t_print
#define _vl_api_defined_nat44_address_details_t_print
static inline void *vl_api_nat44_address_details_t_print (vl_api_nat44_address_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_address_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_feature_t_print
#define _vl_api_defined_nat44_interface_add_del_feature_t_print
static inline void *vl_api_nat44_interface_add_del_feature_t_print (vl_api_nat44_interface_add_del_feature_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_add_del_feature_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_feature_reply_t_print
#define _vl_api_defined_nat44_interface_add_del_feature_reply_t_print
static inline void *vl_api_nat44_interface_add_del_feature_reply_t_print (vl_api_nat44_interface_add_del_feature_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_add_del_feature_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_dump_t_print
#define _vl_api_defined_nat44_interface_dump_t_print
static inline void *vl_api_nat44_interface_dump_t_print (vl_api_nat44_interface_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_details_t_print
#define _vl_api_defined_nat44_interface_details_t_print
static inline void *vl_api_nat44_interface_details_t_print (vl_api_nat44_interface_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_output_feature_t_print
#define _vl_api_defined_nat44_interface_add_del_output_feature_t_print
static inline void *vl_api_nat44_interface_add_del_output_feature_t_print (vl_api_nat44_interface_add_del_output_feature_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_add_del_output_feature_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_output_feature_reply_t_print
#define _vl_api_defined_nat44_interface_add_del_output_feature_reply_t_print
static inline void *vl_api_nat44_interface_add_del_output_feature_reply_t_print (vl_api_nat44_interface_add_del_output_feature_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_add_del_output_feature_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_output_feature_dump_t_print
#define _vl_api_defined_nat44_interface_output_feature_dump_t_print
static inline void *vl_api_nat44_interface_output_feature_dump_t_print (vl_api_nat44_interface_output_feature_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_output_feature_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_output_feature_details_t_print
#define _vl_api_defined_nat44_interface_output_feature_details_t_print
static inline void *vl_api_nat44_interface_output_feature_details_t_print (vl_api_nat44_interface_output_feature_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_output_feature_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_static_mapping_t_print
#define _vl_api_defined_nat44_add_del_static_mapping_t_print
static inline void *vl_api_nat44_add_del_static_mapping_t_print (vl_api_nat44_add_del_static_mapping_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_static_mapping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "local_port: %u\n", a->local_port);
    vl_print(handle, "external_port: %u\n", a->external_port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_static_mapping_reply_t_print
#define _vl_api_defined_nat44_add_del_static_mapping_reply_t_print
static inline void *vl_api_nat44_add_del_static_mapping_reply_t_print (vl_api_nat44_add_del_static_mapping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_static_mapping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_static_mapping_dump_t_print
#define _vl_api_defined_nat44_static_mapping_dump_t_print
static inline void *vl_api_nat44_static_mapping_dump_t_print (vl_api_nat44_static_mapping_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_static_mapping_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_static_mapping_details_t_print
#define _vl_api_defined_nat44_static_mapping_details_t_print
static inline void *vl_api_nat44_static_mapping_details_t_print (vl_api_nat44_static_mapping_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_static_mapping_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "local_port: %u\n", a->local_port);
    vl_print(handle, "external_port: %u\n", a->external_port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_identity_mapping_t_print
#define _vl_api_defined_nat44_add_del_identity_mapping_t_print
static inline void *vl_api_nat44_add_del_identity_mapping_t_print (vl_api_nat44_add_del_identity_mapping_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_identity_mapping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_identity_mapping_reply_t_print
#define _vl_api_defined_nat44_add_del_identity_mapping_reply_t_print
static inline void *vl_api_nat44_add_del_identity_mapping_reply_t_print (vl_api_nat44_add_del_identity_mapping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_identity_mapping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_identity_mapping_dump_t_print
#define _vl_api_defined_nat44_identity_mapping_dump_t_print
static inline void *vl_api_nat44_identity_mapping_dump_t_print (vl_api_nat44_identity_mapping_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_identity_mapping_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_identity_mapping_details_t_print
#define _vl_api_defined_nat44_identity_mapping_details_t_print
static inline void *vl_api_nat44_identity_mapping_details_t_print (vl_api_nat44_identity_mapping_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_identity_mapping_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_interface_addr_t_print
#define _vl_api_defined_nat44_add_del_interface_addr_t_print
static inline void *vl_api_nat44_add_del_interface_addr_t_print (vl_api_nat44_add_del_interface_addr_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_interface_addr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_interface_addr_reply_t_print
#define _vl_api_defined_nat44_add_del_interface_addr_reply_t_print
static inline void *vl_api_nat44_add_del_interface_addr_reply_t_print (vl_api_nat44_add_del_interface_addr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_interface_addr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_addr_dump_t_print
#define _vl_api_defined_nat44_interface_addr_dump_t_print
static inline void *vl_api_nat44_interface_addr_dump_t_print (vl_api_nat44_interface_addr_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_addr_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_interface_addr_details_t_print
#define _vl_api_defined_nat44_interface_addr_details_t_print
static inline void *vl_api_nat44_interface_addr_details_t_print (vl_api_nat44_interface_addr_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_interface_addr_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_user_dump_t_print
#define _vl_api_defined_nat44_user_dump_t_print
static inline void *vl_api_nat44_user_dump_t_print (vl_api_nat44_user_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_user_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_user_details_t_print
#define _vl_api_defined_nat44_user_details_t_print
static inline void *vl_api_nat44_user_details_t_print (vl_api_nat44_user_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_user_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "nsessions: %u\n", a->nsessions);
    vl_print(handle, "nstaticsessions: %u\n", a->nstaticsessions);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_user_session_dump_t_print
#define _vl_api_defined_nat44_user_session_dump_t_print
static inline void *vl_api_nat44_user_session_dump_t_print (vl_api_nat44_user_session_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_user_session_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_user_session_details_t_print
#define _vl_api_defined_nat44_user_session_details_t_print
static inline void *vl_api_nat44_user_session_details_t_print (vl_api_nat44_user_session_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_user_session_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "outside_port: %u\n", a->outside_port);
    vl_print(handle, "inside_port: %u\n", a->inside_port);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "last_heard: %llu\n", a->last_heard);
    vl_print(handle, "total_bytes: %llu\n", a->total_bytes);
    vl_print(handle, "total_pkts: %u\n", a->total_pkts);
    vl_print(handle, "ext_host_port: %u\n", a->ext_host_port);
    vl_print(handle, "ext_host_nat_port: %u\n", a->ext_host_nat_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_lb_static_mapping_t_print
#define _vl_api_defined_nat44_add_del_lb_static_mapping_t_print
static inline void *vl_api_nat44_add_del_lb_static_mapping_t_print (vl_api_nat44_add_del_lb_static_mapping_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_lb_static_mapping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "external_port: %u\n", a->external_port);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "affinity: %u\n", a->affinity);
    vl_print(handle, "local_num: %u\n", a->local_num);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_add_del_lb_static_mapping_reply_t_print
#define _vl_api_defined_nat44_add_del_lb_static_mapping_reply_t_print
static inline void *vl_api_nat44_add_del_lb_static_mapping_reply_t_print (vl_api_nat44_add_del_lb_static_mapping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_add_del_lb_static_mapping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_add_del_local_t_print
#define _vl_api_defined_nat44_lb_static_mapping_add_del_local_t_print
static inline void *vl_api_nat44_lb_static_mapping_add_del_local_t_print (vl_api_nat44_lb_static_mapping_add_del_local_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_lb_static_mapping_add_del_local_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "external_port: %u\n", a->external_port);
    vl_print(handle, "protocol: %u\n", a->protocol);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_add_del_local_reply_t_print
#define _vl_api_defined_nat44_lb_static_mapping_add_del_local_reply_t_print
static inline void *vl_api_nat44_lb_static_mapping_add_del_local_reply_t_print (vl_api_nat44_lb_static_mapping_add_del_local_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_lb_static_mapping_add_del_local_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_dump_t_print
#define _vl_api_defined_nat44_lb_static_mapping_dump_t_print
static inline void *vl_api_nat44_lb_static_mapping_dump_t_print (vl_api_nat44_lb_static_mapping_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_lb_static_mapping_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_details_t_print
#define _vl_api_defined_nat44_lb_static_mapping_details_t_print
static inline void *vl_api_nat44_lb_static_mapping_details_t_print (vl_api_nat44_lb_static_mapping_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_lb_static_mapping_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "external_port: %u\n", a->external_port);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "affinity: %u\n", a->affinity);
    vl_print(handle, "local_num: %u\n", a->local_num);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_del_session_t_print
#define _vl_api_defined_nat44_del_session_t_print
static inline void *vl_api_nat44_del_session_t_print (vl_api_nat44_del_session_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_del_session_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "ext_host_port: %u\n", a->ext_host_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_del_session_reply_t_print
#define _vl_api_defined_nat44_del_session_reply_t_print
static inline void *vl_api_nat44_del_session_reply_t_print (vl_api_nat44_del_session_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_del_session_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_enable_disable_t_print
#define _vl_api_defined_nat44_forwarding_enable_disable_t_print
static inline void *vl_api_nat44_forwarding_enable_disable_t_print (vl_api_nat44_forwarding_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_forwarding_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_enable_disable_reply_t_print
#define _vl_api_defined_nat44_forwarding_enable_disable_reply_t_print
static inline void *vl_api_nat44_forwarding_enable_disable_reply_t_print (vl_api_nat44_forwarding_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_forwarding_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_is_enabled_t_print
#define _vl_api_defined_nat44_forwarding_is_enabled_t_print
static inline void *vl_api_nat44_forwarding_is_enabled_t_print (vl_api_nat44_forwarding_is_enabled_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_forwarding_is_enabled_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_is_enabled_reply_t_print
#define _vl_api_defined_nat44_forwarding_is_enabled_reply_t_print
static inline void *vl_api_nat44_forwarding_is_enabled_reply_t_print (vl_api_nat44_forwarding_is_enabled_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat44_forwarding_is_enabled_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_add_del_map_t_print
#define _vl_api_defined_nat_det_add_del_map_t_print
static inline void *vl_api_nat_det_add_del_map_t_print (vl_api_nat_det_add_del_map_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_add_del_map_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "in_plen: %u\n", a->in_plen);
    vl_print(handle, "out_plen: %u\n", a->out_plen);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_add_del_map_reply_t_print
#define _vl_api_defined_nat_det_add_del_map_reply_t_print
static inline void *vl_api_nat_det_add_del_map_reply_t_print (vl_api_nat_det_add_del_map_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_add_del_map_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_forward_t_print
#define _vl_api_defined_nat_det_forward_t_print
static inline void *vl_api_nat_det_forward_t_print (vl_api_nat_det_forward_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_forward_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_forward_reply_t_print
#define _vl_api_defined_nat_det_forward_reply_t_print
static inline void *vl_api_nat_det_forward_reply_t_print (vl_api_nat_det_forward_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_forward_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "out_port_lo: %u\n", a->out_port_lo);
    vl_print(handle, "out_port_hi: %u\n", a->out_port_hi);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_reverse_t_print
#define _vl_api_defined_nat_det_reverse_t_print
static inline void *vl_api_nat_det_reverse_t_print (vl_api_nat_det_reverse_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_reverse_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "out_port: %u\n", a->out_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_reverse_reply_t_print
#define _vl_api_defined_nat_det_reverse_reply_t_print
static inline void *vl_api_nat_det_reverse_reply_t_print (vl_api_nat_det_reverse_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_reverse_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_map_dump_t_print
#define _vl_api_defined_nat_det_map_dump_t_print
static inline void *vl_api_nat_det_map_dump_t_print (vl_api_nat_det_map_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_map_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_map_details_t_print
#define _vl_api_defined_nat_det_map_details_t_print
static inline void *vl_api_nat_det_map_details_t_print (vl_api_nat_det_map_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_map_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "in_plen: %u\n", a->in_plen);
    vl_print(handle, "out_plen: %u\n", a->out_plen);
    vl_print(handle, "sharing_ratio: %u\n", a->sharing_ratio);
    vl_print(handle, "ports_per_host: %u\n", a->ports_per_host);
    vl_print(handle, "ses_num: %u\n", a->ses_num);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_out_t_print
#define _vl_api_defined_nat_det_close_session_out_t_print
static inline void *vl_api_nat_det_close_session_out_t_print (vl_api_nat_det_close_session_out_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_close_session_out_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "out_port: %u\n", a->out_port);
    vl_print(handle, "ext_port: %u\n", a->ext_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_out_reply_t_print
#define _vl_api_defined_nat_det_close_session_out_reply_t_print
static inline void *vl_api_nat_det_close_session_out_reply_t_print (vl_api_nat_det_close_session_out_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_close_session_out_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_in_t_print
#define _vl_api_defined_nat_det_close_session_in_t_print
static inline void *vl_api_nat_det_close_session_in_t_print (vl_api_nat_det_close_session_in_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_close_session_in_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "in_port: %u\n", a->in_port);
    vl_print(handle, "ext_port: %u\n", a->ext_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_in_reply_t_print
#define _vl_api_defined_nat_det_close_session_in_reply_t_print
static inline void *vl_api_nat_det_close_session_in_reply_t_print (vl_api_nat_det_close_session_in_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_close_session_in_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_session_dump_t_print
#define _vl_api_defined_nat_det_session_dump_t_print
static inline void *vl_api_nat_det_session_dump_t_print (vl_api_nat_det_session_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_session_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat_det_session_details_t_print
#define _vl_api_defined_nat_det_session_details_t_print
static inline void *vl_api_nat_det_session_details_t_print (vl_api_nat_det_session_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat_det_session_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "in_port: %u\n", a->in_port);
    vl_print(handle, "ext_port: %u\n", a->ext_port);
    vl_print(handle, "out_port: %u\n", a->out_port);
    vl_print(handle, "state: %u\n", a->state);
    vl_print(handle, "expire: %u\n", a->expire);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_pool_addr_range_t_print
#define _vl_api_defined_nat64_add_del_pool_addr_range_t_print
static inline void *vl_api_nat64_add_del_pool_addr_range_t_print (vl_api_nat64_add_del_pool_addr_range_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_pool_addr_range_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_pool_addr_range_reply_t_print
#define _vl_api_defined_nat64_add_del_pool_addr_range_reply_t_print
static inline void *vl_api_nat64_add_del_pool_addr_range_reply_t_print (vl_api_nat64_add_del_pool_addr_range_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_pool_addr_range_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_pool_addr_dump_t_print
#define _vl_api_defined_nat64_pool_addr_dump_t_print
static inline void *vl_api_nat64_pool_addr_dump_t_print (vl_api_nat64_pool_addr_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_pool_addr_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_pool_addr_details_t_print
#define _vl_api_defined_nat64_pool_addr_details_t_print
static inline void *vl_api_nat64_pool_addr_details_t_print (vl_api_nat64_pool_addr_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_pool_addr_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_t_print
#define _vl_api_defined_nat64_add_del_interface_t_print
static inline void *vl_api_nat64_add_del_interface_t_print (vl_api_nat64_add_del_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_reply_t_print
#define _vl_api_defined_nat64_add_del_interface_reply_t_print
static inline void *vl_api_nat64_add_del_interface_reply_t_print (vl_api_nat64_add_del_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_interface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_interface_dump_t_print
#define _vl_api_defined_nat64_interface_dump_t_print
static inline void *vl_api_nat64_interface_dump_t_print (vl_api_nat64_interface_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_interface_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_interface_details_t_print
#define _vl_api_defined_nat64_interface_details_t_print
static inline void *vl_api_nat64_interface_details_t_print (vl_api_nat64_interface_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_interface_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_static_bib_t_print
#define _vl_api_defined_nat64_add_del_static_bib_t_print
static inline void *vl_api_nat64_add_del_static_bib_t_print (vl_api_nat64_add_del_static_bib_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_static_bib_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "i_port: %u\n", a->i_port);
    vl_print(handle, "o_port: %u\n", a->o_port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "proto: %u\n", a->proto);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_static_bib_reply_t_print
#define _vl_api_defined_nat64_add_del_static_bib_reply_t_print
static inline void *vl_api_nat64_add_del_static_bib_reply_t_print (vl_api_nat64_add_del_static_bib_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_static_bib_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_bib_dump_t_print
#define _vl_api_defined_nat64_bib_dump_t_print
static inline void *vl_api_nat64_bib_dump_t_print (vl_api_nat64_bib_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_bib_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "proto: %u\n", a->proto);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_bib_details_t_print
#define _vl_api_defined_nat64_bib_details_t_print
static inline void *vl_api_nat64_bib_details_t_print (vl_api_nat64_bib_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_bib_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "i_port: %u\n", a->i_port);
    vl_print(handle, "o_port: %u\n", a->o_port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "proto: %u\n", a->proto);
    vl_print(handle, "ses_num: %u\n", a->ses_num);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_st_dump_t_print
#define _vl_api_defined_nat64_st_dump_t_print
static inline void *vl_api_nat64_st_dump_t_print (vl_api_nat64_st_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_st_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "proto: %u\n", a->proto);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_st_details_t_print
#define _vl_api_defined_nat64_st_details_t_print
static inline void *vl_api_nat64_st_details_t_print (vl_api_nat64_st_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_st_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "il_port: %u\n", a->il_port);
    vl_print(handle, "ol_port: %u\n", a->ol_port);
    vl_print(handle, "r_port: %u\n", a->r_port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "proto: %u\n", a->proto);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_prefix_t_print
#define _vl_api_defined_nat64_add_del_prefix_t_print
static inline void *vl_api_nat64_add_del_prefix_t_print (vl_api_nat64_add_del_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_prefix_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_prefix_reply_t_print
#define _vl_api_defined_nat64_add_del_prefix_reply_t_print
static inline void *vl_api_nat64_add_del_prefix_reply_t_print (vl_api_nat64_add_del_prefix_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_prefix_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_prefix_dump_t_print
#define _vl_api_defined_nat64_prefix_dump_t_print
static inline void *vl_api_nat64_prefix_dump_t_print (vl_api_nat64_prefix_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_prefix_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_prefix_details_t_print
#define _vl_api_defined_nat64_prefix_details_t_print
static inline void *vl_api_nat64_prefix_details_t_print (vl_api_nat64_prefix_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_prefix_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_addr_t_print
#define _vl_api_defined_nat64_add_del_interface_addr_t_print
static inline void *vl_api_nat64_add_del_interface_addr_t_print (vl_api_nat64_add_del_interface_addr_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_interface_addr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_addr_reply_t_print
#define _vl_api_defined_nat64_add_del_interface_addr_reply_t_print
static inline void *vl_api_nat64_add_del_interface_addr_reply_t_print (vl_api_nat64_add_del_interface_addr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat64_add_del_interface_addr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_add_del_pool_addr_range_t_print
#define _vl_api_defined_dslite_add_del_pool_addr_range_t_print
static inline void *vl_api_dslite_add_del_pool_addr_range_t_print (vl_api_dslite_add_del_pool_addr_range_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_add_del_pool_addr_range_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_add_del_pool_addr_range_reply_t_print
#define _vl_api_defined_dslite_add_del_pool_addr_range_reply_t_print
static inline void *vl_api_dslite_add_del_pool_addr_range_reply_t_print (vl_api_dslite_add_del_pool_addr_range_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_add_del_pool_addr_range_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_address_dump_t_print
#define _vl_api_defined_dslite_address_dump_t_print
static inline void *vl_api_dslite_address_dump_t_print (vl_api_dslite_address_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_address_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_address_details_t_print
#define _vl_api_defined_dslite_address_details_t_print
static inline void *vl_api_dslite_address_details_t_print (vl_api_dslite_address_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_address_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_set_aftr_addr_t_print
#define _vl_api_defined_dslite_set_aftr_addr_t_print
static inline void *vl_api_dslite_set_aftr_addr_t_print (vl_api_dslite_set_aftr_addr_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_set_aftr_addr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_set_aftr_addr_reply_t_print
#define _vl_api_defined_dslite_set_aftr_addr_reply_t_print
static inline void *vl_api_dslite_set_aftr_addr_reply_t_print (vl_api_dslite_set_aftr_addr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_set_aftr_addr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_get_aftr_addr_t_print
#define _vl_api_defined_dslite_get_aftr_addr_t_print
static inline void *vl_api_dslite_get_aftr_addr_t_print (vl_api_dslite_get_aftr_addr_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_get_aftr_addr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_get_aftr_addr_reply_t_print
#define _vl_api_defined_dslite_get_aftr_addr_reply_t_print
static inline void *vl_api_dslite_get_aftr_addr_reply_t_print (vl_api_dslite_get_aftr_addr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_get_aftr_addr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_set_b4_addr_t_print
#define _vl_api_defined_dslite_set_b4_addr_t_print
static inline void *vl_api_dslite_set_b4_addr_t_print (vl_api_dslite_set_b4_addr_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_set_b4_addr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_set_b4_addr_reply_t_print
#define _vl_api_defined_dslite_set_b4_addr_reply_t_print
static inline void *vl_api_dslite_set_b4_addr_reply_t_print (vl_api_dslite_set_b4_addr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_set_b4_addr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_get_b4_addr_t_print
#define _vl_api_defined_dslite_get_b4_addr_t_print
static inline void *vl_api_dslite_get_b4_addr_t_print (vl_api_dslite_get_b4_addr_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_get_b4_addr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dslite_get_b4_addr_reply_t_print
#define _vl_api_defined_dslite_get_b4_addr_reply_t_print
static inline void *vl_api_dslite_get_b4_addr_reply_t_print (vl_api_dslite_get_b4_addr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dslite_get_b4_addr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_add_del_interface_t_print
#define _vl_api_defined_nat66_add_del_interface_t_print
static inline void *vl_api_nat66_add_del_interface_t_print (vl_api_nat66_add_del_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_add_del_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_add_del_interface_reply_t_print
#define _vl_api_defined_nat66_add_del_interface_reply_t_print
static inline void *vl_api_nat66_add_del_interface_reply_t_print (vl_api_nat66_add_del_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_add_del_interface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_interface_dump_t_print
#define _vl_api_defined_nat66_interface_dump_t_print
static inline void *vl_api_nat66_interface_dump_t_print (vl_api_nat66_interface_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_interface_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_interface_details_t_print
#define _vl_api_defined_nat66_interface_details_t_print
static inline void *vl_api_nat66_interface_details_t_print (vl_api_nat66_interface_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_interface_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_add_del_static_mapping_t_print
#define _vl_api_defined_nat66_add_del_static_mapping_t_print
static inline void *vl_api_nat66_add_del_static_mapping_t_print (vl_api_nat66_add_del_static_mapping_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_add_del_static_mapping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_add_del_static_mapping_reply_t_print
#define _vl_api_defined_nat66_add_del_static_mapping_reply_t_print
static inline void *vl_api_nat66_add_del_static_mapping_reply_t_print (vl_api_nat66_add_del_static_mapping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_add_del_static_mapping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_static_mapping_dump_t_print
#define _vl_api_defined_nat66_static_mapping_dump_t_print
static inline void *vl_api_nat66_static_mapping_dump_t_print (vl_api_nat66_static_mapping_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_static_mapping_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_nat66_static_mapping_details_t_print
#define _vl_api_defined_nat66_static_mapping_details_t_print
static inline void *vl_api_nat66_static_mapping_details_t_print (vl_api_nat66_static_mapping_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nat66_static_mapping_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "total_bytes: %llu\n", a->total_bytes);
    vl_print(handle, "total_pkts: %llu\n", a->total_pkts);
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

/***** manual: vl_api_ip4_address_t_endian  *****/

/***** manual: vl_api_ip6_address_t_endian  *****/

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

/***** manual: vl_api_address_with_prefix_t_endian  *****/

/***** manual: vl_api_ip4_address_with_prefix_t_endian  *****/

/***** manual: vl_api_ip6_address_with_prefix_t_endian  *****/

#ifndef _vl_api_defined_prefix_matcher_t_endian
#define _vl_api_defined_prefix_matcher_t_endian
static inline void vl_api_prefix_matcher_t_endian (vl_api_prefix_matcher_t *a)
{
    /* a->le = a->le (no-op) */
    /* a->ge = a->ge (no-op) */
}

#endif

/***** manual: vl_api_interface_index_t_endian  *****/

/***** manual: vl_api_nat44_lb_addr_port_t_endian  *****/

#ifndef _vl_api_defined_nat_control_ping_t_endian
#define _vl_api_defined_nat_control_ping_t_endian
static inline void vl_api_nat_control_ping_t_endian (vl_api_nat_control_ping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_control_ping_reply_t_endian
#define _vl_api_defined_nat_control_ping_reply_t_endian
static inline void vl_api_nat_control_ping_reply_t_endian (vl_api_nat_control_ping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->vpe_pid = clib_net_to_host_u32(a->vpe_pid);
}

#endif

#ifndef _vl_api_defined_nat_show_config_t_endian
#define _vl_api_defined_nat_show_config_t_endian
static inline void vl_api_nat_show_config_t_endian (vl_api_nat_show_config_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_show_config_reply_t_endian
#define _vl_api_defined_nat_show_config_reply_t_endian
static inline void vl_api_nat_show_config_reply_t_endian (vl_api_nat_show_config_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->static_mapping_only = a->static_mapping_only (no-op) */
    /* a->static_mapping_connection_tracking = a->static_mapping_connection_tracking (no-op) */
    /* a->deterministic = a->deterministic (no-op) */
    /* a->endpoint_dependent = a->endpoint_dependent (no-op) */
    /* a->out2in_dpo = a->out2in_dpo (no-op) */
    /* a->dslite_ce = a->dslite_ce (no-op) */
    a->translation_buckets = clib_net_to_host_u32(a->translation_buckets);
    a->translation_memory_size = clib_net_to_host_u32(a->translation_memory_size);
    a->user_buckets = clib_net_to_host_u32(a->user_buckets);
    a->user_memory_size = clib_net_to_host_u32(a->user_memory_size);
    a->max_translations_per_user = clib_net_to_host_u32(a->max_translations_per_user);
    a->outside_vrf_id = clib_net_to_host_u32(a->outside_vrf_id);
    a->inside_vrf_id = clib_net_to_host_u32(a->inside_vrf_id);
    a->nat64_bib_buckets = clib_net_to_host_u32(a->nat64_bib_buckets);
    a->nat64_bib_memory_size = clib_net_to_host_u32(a->nat64_bib_memory_size);
    a->nat64_st_buckets = clib_net_to_host_u32(a->nat64_st_buckets);
    a->nat64_st_memory_size = clib_net_to_host_u32(a->nat64_st_memory_size);
}

#endif

#ifndef _vl_api_defined_nat_set_log_level_t_endian
#define _vl_api_defined_nat_set_log_level_t_endian
static inline void vl_api_nat_set_log_level_t_endian (vl_api_nat_set_log_level_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->log_level = a->log_level (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_set_log_level_reply_t_endian
#define _vl_api_defined_nat_set_log_level_reply_t_endian
static inline void vl_api_nat_set_log_level_reply_t_endian (vl_api_nat_set_log_level_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_set_workers_t_endian
#define _vl_api_defined_nat_set_workers_t_endian
static inline void vl_api_nat_set_workers_t_endian (vl_api_nat_set_workers_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->worker_mask = clib_net_to_host_u64(a->worker_mask);
}

#endif

#ifndef _vl_api_defined_nat_set_workers_reply_t_endian
#define _vl_api_defined_nat_set_workers_reply_t_endian
static inline void vl_api_nat_set_workers_reply_t_endian (vl_api_nat_set_workers_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_worker_dump_t_endian
#define _vl_api_defined_nat_worker_dump_t_endian
static inline void vl_api_nat_worker_dump_t_endian (vl_api_nat_worker_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_worker_details_t_endian
#define _vl_api_defined_nat_worker_details_t_endian
static inline void vl_api_nat_worker_details_t_endian (vl_api_nat_worker_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->worker_index = clib_net_to_host_u32(a->worker_index);
    a->lcore_id = clib_net_to_host_u32(a->lcore_id);
}

#endif

#ifndef _vl_api_defined_nat_ipfix_enable_disable_t_endian
#define _vl_api_defined_nat_ipfix_enable_disable_t_endian
static inline void vl_api_nat_ipfix_enable_disable_t_endian (vl_api_nat_ipfix_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->domain_id = clib_net_to_host_u32(a->domain_id);
    a->src_port = clib_net_to_host_u16(a->src_port);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_ipfix_enable_disable_reply_t_endian
#define _vl_api_defined_nat_ipfix_enable_disable_reply_t_endian
static inline void vl_api_nat_ipfix_enable_disable_reply_t_endian (vl_api_nat_ipfix_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_set_reass_t_endian
#define _vl_api_defined_nat_set_reass_t_endian
static inline void vl_api_nat_set_reass_t_endian (vl_api_nat_set_reass_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->timeout = clib_net_to_host_u32(a->timeout);
    a->max_reass = clib_net_to_host_u16(a->max_reass);
    /* a->max_frag = a->max_frag (no-op) */
    /* a->drop_frag = a->drop_frag (no-op) */
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_set_reass_reply_t_endian
#define _vl_api_defined_nat_set_reass_reply_t_endian
static inline void vl_api_nat_set_reass_reply_t_endian (vl_api_nat_set_reass_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_get_reass_t_endian
#define _vl_api_defined_nat_get_reass_t_endian
static inline void vl_api_nat_get_reass_t_endian (vl_api_nat_get_reass_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_get_reass_reply_t_endian
#define _vl_api_defined_nat_get_reass_reply_t_endian
static inline void vl_api_nat_get_reass_reply_t_endian (vl_api_nat_get_reass_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->ip4_timeout = clib_net_to_host_u32(a->ip4_timeout);
    a->ip4_max_reass = clib_net_to_host_u16(a->ip4_max_reass);
    /* a->ip4_max_frag = a->ip4_max_frag (no-op) */
    /* a->ip4_drop_frag = a->ip4_drop_frag (no-op) */
    a->ip6_timeout = clib_net_to_host_u32(a->ip6_timeout);
    a->ip6_max_reass = clib_net_to_host_u16(a->ip6_max_reass);
    /* a->ip6_max_frag = a->ip6_max_frag (no-op) */
    /* a->ip6_drop_frag = a->ip6_drop_frag (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_reass_dump_t_endian
#define _vl_api_defined_nat_reass_dump_t_endian
static inline void vl_api_nat_reass_dump_t_endian (vl_api_nat_reass_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_reass_details_t_endian
#define _vl_api_defined_nat_reass_details_t_endian
static inline void vl_api_nat_reass_details_t_endian (vl_api_nat_reass_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->src_addr = a->src_addr (no-op) */
    /* a->dst_addr = a->dst_addr (no-op) */
    a->frag_id = clib_net_to_host_u32(a->frag_id);
    /* a->proto = a->proto (no-op) */
    /* a->frag_n = a->frag_n (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_set_timeouts_t_endian
#define _vl_api_defined_nat_set_timeouts_t_endian
static inline void vl_api_nat_set_timeouts_t_endian (vl_api_nat_set_timeouts_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->udp = clib_net_to_host_u32(a->udp);
    a->tcp_established = clib_net_to_host_u32(a->tcp_established);
    a->tcp_transitory = clib_net_to_host_u32(a->tcp_transitory);
    a->icmp = clib_net_to_host_u32(a->icmp);
}

#endif

#ifndef _vl_api_defined_nat_set_timeouts_reply_t_endian
#define _vl_api_defined_nat_set_timeouts_reply_t_endian
static inline void vl_api_nat_set_timeouts_reply_t_endian (vl_api_nat_set_timeouts_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_get_timeouts_t_endian
#define _vl_api_defined_nat_get_timeouts_t_endian
static inline void vl_api_nat_get_timeouts_t_endian (vl_api_nat_get_timeouts_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_get_timeouts_reply_t_endian
#define _vl_api_defined_nat_get_timeouts_reply_t_endian
static inline void vl_api_nat_get_timeouts_reply_t_endian (vl_api_nat_get_timeouts_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->udp = clib_net_to_host_u32(a->udp);
    a->tcp_established = clib_net_to_host_u32(a->tcp_established);
    a->tcp_transitory = clib_net_to_host_u32(a->tcp_transitory);
    a->icmp = clib_net_to_host_u32(a->icmp);
}

#endif

#ifndef _vl_api_defined_nat_set_addr_and_port_alloc_alg_t_endian
#define _vl_api_defined_nat_set_addr_and_port_alloc_alg_t_endian
static inline void vl_api_nat_set_addr_and_port_alloc_alg_t_endian (vl_api_nat_set_addr_and_port_alloc_alg_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->alg = a->alg (no-op) */
    /* a->psid_offset = a->psid_offset (no-op) */
    /* a->psid_length = a->psid_length (no-op) */
    a->psid = clib_net_to_host_u16(a->psid);
    a->start_port = clib_net_to_host_u16(a->start_port);
    a->end_port = clib_net_to_host_u16(a->end_port);
}

#endif

#ifndef _vl_api_defined_nat_set_addr_and_port_alloc_alg_reply_t_endian
#define _vl_api_defined_nat_set_addr_and_port_alloc_alg_reply_t_endian
static inline void vl_api_nat_set_addr_and_port_alloc_alg_reply_t_endian (vl_api_nat_set_addr_and_port_alloc_alg_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_get_addr_and_port_alloc_alg_t_endian
#define _vl_api_defined_nat_get_addr_and_port_alloc_alg_t_endian
static inline void vl_api_nat_get_addr_and_port_alloc_alg_t_endian (vl_api_nat_get_addr_and_port_alloc_alg_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_get_addr_and_port_alloc_alg_reply_t_endian
#define _vl_api_defined_nat_get_addr_and_port_alloc_alg_reply_t_endian
static inline void vl_api_nat_get_addr_and_port_alloc_alg_reply_t_endian (vl_api_nat_get_addr_and_port_alloc_alg_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->alg = a->alg (no-op) */
    /* a->psid_offset = a->psid_offset (no-op) */
    /* a->psid_length = a->psid_length (no-op) */
    a->psid = clib_net_to_host_u16(a->psid);
    a->start_port = clib_net_to_host_u16(a->start_port);
    a->end_port = clib_net_to_host_u16(a->end_port);
}

#endif

#ifndef _vl_api_defined_nat_set_mss_clamping_t_endian
#define _vl_api_defined_nat_set_mss_clamping_t_endian
static inline void vl_api_nat_set_mss_clamping_t_endian (vl_api_nat_set_mss_clamping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->mss_value = clib_net_to_host_u16(a->mss_value);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_set_mss_clamping_reply_t_endian
#define _vl_api_defined_nat_set_mss_clamping_reply_t_endian
static inline void vl_api_nat_set_mss_clamping_reply_t_endian (vl_api_nat_set_mss_clamping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_get_mss_clamping_t_endian
#define _vl_api_defined_nat_get_mss_clamping_t_endian
static inline void vl_api_nat_get_mss_clamping_t_endian (vl_api_nat_get_mss_clamping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_get_mss_clamping_reply_t_endian
#define _vl_api_defined_nat_get_mss_clamping_reply_t_endian
static inline void vl_api_nat_get_mss_clamping_reply_t_endian (vl_api_nat_get_mss_clamping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->mss_value = clib_net_to_host_u16(a->mss_value);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_ha_set_listener_t_endian
#define _vl_api_defined_nat_ha_set_listener_t_endian
static inline void vl_api_nat_ha_set_listener_t_endian (vl_api_nat_ha_set_listener_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip_address = a->ip_address (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
}

#endif

#ifndef _vl_api_defined_nat_ha_set_listener_reply_t_endian
#define _vl_api_defined_nat_ha_set_listener_reply_t_endian
static inline void vl_api_nat_ha_set_listener_reply_t_endian (vl_api_nat_ha_set_listener_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_ha_set_failover_t_endian
#define _vl_api_defined_nat_ha_set_failover_t_endian
static inline void vl_api_nat_ha_set_failover_t_endian (vl_api_nat_ha_set_failover_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip_address = a->ip_address (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    a->session_refresh_interval = clib_net_to_host_u32(a->session_refresh_interval);
}

#endif

#ifndef _vl_api_defined_nat_ha_set_failover_reply_t_endian
#define _vl_api_defined_nat_ha_set_failover_reply_t_endian
static inline void vl_api_nat_ha_set_failover_reply_t_endian (vl_api_nat_ha_set_failover_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_ha_get_listener_t_endian
#define _vl_api_defined_nat_ha_get_listener_t_endian
static inline void vl_api_nat_ha_get_listener_t_endian (vl_api_nat_ha_get_listener_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_ha_get_listener_reply_t_endian
#define _vl_api_defined_nat_ha_get_listener_reply_t_endian
static inline void vl_api_nat_ha_get_listener_reply_t_endian (vl_api_nat_ha_get_listener_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->ip_address = a->ip_address (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
}

#endif

#ifndef _vl_api_defined_nat_ha_get_failover_t_endian
#define _vl_api_defined_nat_ha_get_failover_t_endian
static inline void vl_api_nat_ha_get_failover_t_endian (vl_api_nat_ha_get_failover_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_ha_get_failover_reply_t_endian
#define _vl_api_defined_nat_ha_get_failover_reply_t_endian
static inline void vl_api_nat_ha_get_failover_reply_t_endian (vl_api_nat_ha_get_failover_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->ip_address = a->ip_address (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    a->session_refresh_interval = clib_net_to_host_u32(a->session_refresh_interval);
}

#endif

#ifndef _vl_api_defined_nat_ha_flush_t_endian
#define _vl_api_defined_nat_ha_flush_t_endian
static inline void vl_api_nat_ha_flush_t_endian (vl_api_nat_ha_flush_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_ha_flush_reply_t_endian
#define _vl_api_defined_nat_ha_flush_reply_t_endian
static inline void vl_api_nat_ha_flush_reply_t_endian (vl_api_nat_ha_flush_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_ha_resync_t_endian
#define _vl_api_defined_nat_ha_resync_t_endian
static inline void vl_api_nat_ha_resync_t_endian (vl_api_nat_ha_resync_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->want_resync_event = a->want_resync_event (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

#ifndef _vl_api_defined_nat_ha_resync_reply_t_endian
#define _vl_api_defined_nat_ha_resync_reply_t_endian
static inline void vl_api_nat_ha_resync_reply_t_endian (vl_api_nat_ha_resync_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_ha_resync_completed_event_t_endian
#define _vl_api_defined_nat_ha_resync_completed_event_t_endian
static inline void vl_api_nat_ha_resync_completed_event_t_endian (vl_api_nat_ha_resync_completed_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    a->missed_count = clib_net_to_host_u32(a->missed_count);
}

#endif

#ifndef _vl_api_defined_nat44_add_del_address_range_t_endian
#define _vl_api_defined_nat44_add_del_address_range_t_endian
static inline void vl_api_nat44_add_del_address_range_t_endian (vl_api_nat44_add_del_address_range_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->first_ip_address = a->first_ip_address (no-op) */
    /* a->last_ip_address = a->last_ip_address (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_add = a->is_add (no-op) */
    /* a->flags = a->flags (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_add_del_address_range_reply_t_endian
#define _vl_api_defined_nat44_add_del_address_range_reply_t_endian
static inline void vl_api_nat44_add_del_address_range_reply_t_endian (vl_api_nat44_add_del_address_range_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_address_dump_t_endian
#define _vl_api_defined_nat44_address_dump_t_endian
static inline void vl_api_nat44_address_dump_t_endian (vl_api_nat44_address_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_address_details_t_endian
#define _vl_api_defined_nat44_address_details_t_endian
static inline void vl_api_nat44_address_details_t_endian (vl_api_nat44_address_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip_address = a->ip_address (no-op) */
    /* a->flags = a->flags (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_feature_t_endian
#define _vl_api_defined_nat44_interface_add_del_feature_t_endian
static inline void vl_api_nat44_interface_add_del_feature_t_endian (vl_api_nat44_interface_add_del_feature_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_feature_reply_t_endian
#define _vl_api_defined_nat44_interface_add_del_feature_reply_t_endian
static inline void vl_api_nat44_interface_add_del_feature_reply_t_endian (vl_api_nat44_interface_add_del_feature_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_interface_dump_t_endian
#define _vl_api_defined_nat44_interface_dump_t_endian
static inline void vl_api_nat44_interface_dump_t_endian (vl_api_nat44_interface_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_interface_details_t_endian
#define _vl_api_defined_nat44_interface_details_t_endian
static inline void vl_api_nat44_interface_details_t_endian (vl_api_nat44_interface_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_output_feature_t_endian
#define _vl_api_defined_nat44_interface_add_del_output_feature_t_endian
static inline void vl_api_nat44_interface_add_del_output_feature_t_endian (vl_api_nat44_interface_add_del_output_feature_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_interface_add_del_output_feature_reply_t_endian
#define _vl_api_defined_nat44_interface_add_del_output_feature_reply_t_endian
static inline void vl_api_nat44_interface_add_del_output_feature_reply_t_endian (vl_api_nat44_interface_add_del_output_feature_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_interface_output_feature_dump_t_endian
#define _vl_api_defined_nat44_interface_output_feature_dump_t_endian
static inline void vl_api_nat44_interface_output_feature_dump_t_endian (vl_api_nat44_interface_output_feature_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_interface_output_feature_details_t_endian
#define _vl_api_defined_nat44_interface_output_feature_details_t_endian
static inline void vl_api_nat44_interface_output_feature_details_t_endian (vl_api_nat44_interface_output_feature_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_add_del_static_mapping_t_endian
#define _vl_api_defined_nat44_add_del_static_mapping_t_endian
static inline void vl_api_nat44_add_del_static_mapping_t_endian (vl_api_nat44_add_del_static_mapping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->local_ip_address = a->local_ip_address (no-op) */
    /* a->external_ip_address = a->external_ip_address (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->local_port = clib_net_to_host_u16(a->local_port);
    a->external_port = clib_net_to_host_u16(a->external_port);
    /* a->external_sw_if_index = a->external_sw_if_index (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat44_add_del_static_mapping_reply_t_endian
#define _vl_api_defined_nat44_add_del_static_mapping_reply_t_endian
static inline void vl_api_nat44_add_del_static_mapping_reply_t_endian (vl_api_nat44_add_del_static_mapping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_static_mapping_dump_t_endian
#define _vl_api_defined_nat44_static_mapping_dump_t_endian
static inline void vl_api_nat44_static_mapping_dump_t_endian (vl_api_nat44_static_mapping_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_static_mapping_details_t_endian
#define _vl_api_defined_nat44_static_mapping_details_t_endian
static inline void vl_api_nat44_static_mapping_details_t_endian (vl_api_nat44_static_mapping_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->flags = a->flags (no-op) */
    /* a->local_ip_address = a->local_ip_address (no-op) */
    /* a->external_ip_address = a->external_ip_address (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->local_port = clib_net_to_host_u16(a->local_port);
    a->external_port = clib_net_to_host_u16(a->external_port);
    /* a->external_sw_if_index = a->external_sw_if_index (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat44_add_del_identity_mapping_t_endian
#define _vl_api_defined_nat44_add_del_identity_mapping_t_endian
static inline void vl_api_nat44_add_del_identity_mapping_t_endian (vl_api_nat44_add_del_identity_mapping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->ip_address = a->ip_address (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    /* a->sw_if_index = a->sw_if_index (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat44_add_del_identity_mapping_reply_t_endian
#define _vl_api_defined_nat44_add_del_identity_mapping_reply_t_endian
static inline void vl_api_nat44_add_del_identity_mapping_reply_t_endian (vl_api_nat44_add_del_identity_mapping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_identity_mapping_dump_t_endian
#define _vl_api_defined_nat44_identity_mapping_dump_t_endian
static inline void vl_api_nat44_identity_mapping_dump_t_endian (vl_api_nat44_identity_mapping_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_identity_mapping_details_t_endian
#define _vl_api_defined_nat44_identity_mapping_details_t_endian
static inline void vl_api_nat44_identity_mapping_details_t_endian (vl_api_nat44_identity_mapping_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->flags = a->flags (no-op) */
    /* a->ip_address = a->ip_address (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    /* a->sw_if_index = a->sw_if_index (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat44_add_del_interface_addr_t_endian
#define _vl_api_defined_nat44_add_del_interface_addr_t_endian
static inline void vl_api_nat44_add_del_interface_addr_t_endian (vl_api_nat44_add_del_interface_addr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
    /* a->flags = a->flags (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_add_del_interface_addr_reply_t_endian
#define _vl_api_defined_nat44_add_del_interface_addr_reply_t_endian
static inline void vl_api_nat44_add_del_interface_addr_reply_t_endian (vl_api_nat44_add_del_interface_addr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_interface_addr_dump_t_endian
#define _vl_api_defined_nat44_interface_addr_dump_t_endian
static inline void vl_api_nat44_interface_addr_dump_t_endian (vl_api_nat44_interface_addr_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_interface_addr_details_t_endian
#define _vl_api_defined_nat44_interface_addr_details_t_endian
static inline void vl_api_nat44_interface_addr_details_t_endian (vl_api_nat44_interface_addr_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
    /* a->flags = a->flags (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_user_dump_t_endian
#define _vl_api_defined_nat44_user_dump_t_endian
static inline void vl_api_nat44_user_dump_t_endian (vl_api_nat44_user_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_user_details_t_endian
#define _vl_api_defined_nat44_user_details_t_endian
static inline void vl_api_nat44_user_details_t_endian (vl_api_nat44_user_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->ip_address = a->ip_address (no-op) */
    a->nsessions = clib_net_to_host_u32(a->nsessions);
    a->nstaticsessions = clib_net_to_host_u32(a->nstaticsessions);
}

#endif

#ifndef _vl_api_defined_nat44_user_session_dump_t_endian
#define _vl_api_defined_nat44_user_session_dump_t_endian
static inline void vl_api_nat44_user_session_dump_t_endian (vl_api_nat44_user_session_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip_address = a->ip_address (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat44_user_session_details_t_endian
#define _vl_api_defined_nat44_user_session_details_t_endian
static inline void vl_api_nat44_user_session_details_t_endian (vl_api_nat44_user_session_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->outside_ip_address = a->outside_ip_address (no-op) */
    a->outside_port = clib_net_to_host_u16(a->outside_port);
    /* a->inside_ip_address = a->inside_ip_address (no-op) */
    a->inside_port = clib_net_to_host_u16(a->inside_port);
    a->protocol = clib_net_to_host_u16(a->protocol);
    /* a->flags = a->flags (no-op) */
    a->last_heard = clib_net_to_host_u64(a->last_heard);
    a->total_bytes = clib_net_to_host_u64(a->total_bytes);
    a->total_pkts = clib_net_to_host_u32(a->total_pkts);
    /* a->ext_host_address = a->ext_host_address (no-op) */
    a->ext_host_port = clib_net_to_host_u16(a->ext_host_port);
    /* a->ext_host_nat_address = a->ext_host_nat_address (no-op) */
    a->ext_host_nat_port = clib_net_to_host_u16(a->ext_host_nat_port);
}

#endif

/***** manual: vl_api_nat44_add_del_lb_static_mapping_t_endian  *****/

#ifndef _vl_api_defined_nat44_add_del_lb_static_mapping_reply_t_endian
#define _vl_api_defined_nat44_add_del_lb_static_mapping_reply_t_endian
static inline void vl_api_nat44_add_del_lb_static_mapping_reply_t_endian (vl_api_nat44_add_del_lb_static_mapping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_add_del_local_t_endian
#define _vl_api_defined_nat44_lb_static_mapping_add_del_local_t_endian
static inline void vl_api_nat44_lb_static_mapping_add_del_local_t_endian (vl_api_nat44_lb_static_mapping_add_del_local_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->external_addr = a->external_addr (no-op) */
    a->external_port = clib_net_to_host_u16(a->external_port);
    /* a->protocol = a->protocol (no-op) */
    /* a->local = a->local (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_add_del_local_reply_t_endian
#define _vl_api_defined_nat44_lb_static_mapping_add_del_local_reply_t_endian
static inline void vl_api_nat44_lb_static_mapping_add_del_local_reply_t_endian (vl_api_nat44_lb_static_mapping_add_del_local_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_lb_static_mapping_dump_t_endian
#define _vl_api_defined_nat44_lb_static_mapping_dump_t_endian
static inline void vl_api_nat44_lb_static_mapping_dump_t_endian (vl_api_nat44_lb_static_mapping_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

/***** manual: vl_api_nat44_lb_static_mapping_details_t_endian  *****/

#ifndef _vl_api_defined_nat44_del_session_t_endian
#define _vl_api_defined_nat44_del_session_t_endian
static inline void vl_api_nat44_del_session_t_endian (vl_api_nat44_del_session_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->address = a->address (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->flags = a->flags (no-op) */
    /* a->ext_host_address = a->ext_host_address (no-op) */
    a->ext_host_port = clib_net_to_host_u16(a->ext_host_port);
}

#endif

#ifndef _vl_api_defined_nat44_del_session_reply_t_endian
#define _vl_api_defined_nat44_del_session_reply_t_endian
static inline void vl_api_nat44_del_session_reply_t_endian (vl_api_nat44_del_session_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_enable_disable_t_endian
#define _vl_api_defined_nat44_forwarding_enable_disable_t_endian
static inline void vl_api_nat44_forwarding_enable_disable_t_endian (vl_api_nat44_forwarding_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_enable_disable_reply_t_endian
#define _vl_api_defined_nat44_forwarding_enable_disable_reply_t_endian
static inline void vl_api_nat44_forwarding_enable_disable_reply_t_endian (vl_api_nat44_forwarding_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_is_enabled_t_endian
#define _vl_api_defined_nat44_forwarding_is_enabled_t_endian
static inline void vl_api_nat44_forwarding_is_enabled_t_endian (vl_api_nat44_forwarding_is_enabled_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat44_forwarding_is_enabled_reply_t_endian
#define _vl_api_defined_nat44_forwarding_is_enabled_reply_t_endian
static inline void vl_api_nat44_forwarding_is_enabled_reply_t_endian (vl_api_nat44_forwarding_is_enabled_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enabled = a->enabled (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_det_add_del_map_t_endian
#define _vl_api_defined_nat_det_add_del_map_t_endian
static inline void vl_api_nat_det_add_del_map_t_endian (vl_api_nat_det_add_del_map_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->in_addr = a->in_addr (no-op) */
    /* a->in_plen = a->in_plen (no-op) */
    /* a->out_addr = a->out_addr (no-op) */
    /* a->out_plen = a->out_plen (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_det_add_del_map_reply_t_endian
#define _vl_api_defined_nat_det_add_del_map_reply_t_endian
static inline void vl_api_nat_det_add_del_map_reply_t_endian (vl_api_nat_det_add_del_map_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_det_forward_t_endian
#define _vl_api_defined_nat_det_forward_t_endian
static inline void vl_api_nat_det_forward_t_endian (vl_api_nat_det_forward_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->in_addr = a->in_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_det_forward_reply_t_endian
#define _vl_api_defined_nat_det_forward_reply_t_endian
static inline void vl_api_nat_det_forward_reply_t_endian (vl_api_nat_det_forward_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->out_port_lo = clib_net_to_host_u16(a->out_port_lo);
    a->out_port_hi = clib_net_to_host_u16(a->out_port_hi);
    /* a->out_addr = a->out_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_det_reverse_t_endian
#define _vl_api_defined_nat_det_reverse_t_endian
static inline void vl_api_nat_det_reverse_t_endian (vl_api_nat_det_reverse_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->out_port = clib_net_to_host_u16(a->out_port);
    /* a->out_addr = a->out_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_det_reverse_reply_t_endian
#define _vl_api_defined_nat_det_reverse_reply_t_endian
static inline void vl_api_nat_det_reverse_reply_t_endian (vl_api_nat_det_reverse_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->in_addr = a->in_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_det_map_dump_t_endian
#define _vl_api_defined_nat_det_map_dump_t_endian
static inline void vl_api_nat_det_map_dump_t_endian (vl_api_nat_det_map_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat_det_map_details_t_endian
#define _vl_api_defined_nat_det_map_details_t_endian
static inline void vl_api_nat_det_map_details_t_endian (vl_api_nat_det_map_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->in_addr = a->in_addr (no-op) */
    /* a->in_plen = a->in_plen (no-op) */
    /* a->out_addr = a->out_addr (no-op) */
    /* a->out_plen = a->out_plen (no-op) */
    a->sharing_ratio = clib_net_to_host_u32(a->sharing_ratio);
    a->ports_per_host = clib_net_to_host_u16(a->ports_per_host);
    a->ses_num = clib_net_to_host_u32(a->ses_num);
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_out_t_endian
#define _vl_api_defined_nat_det_close_session_out_t_endian
static inline void vl_api_nat_det_close_session_out_t_endian (vl_api_nat_det_close_session_out_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->out_addr = a->out_addr (no-op) */
    a->out_port = clib_net_to_host_u16(a->out_port);
    /* a->ext_addr = a->ext_addr (no-op) */
    a->ext_port = clib_net_to_host_u16(a->ext_port);
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_out_reply_t_endian
#define _vl_api_defined_nat_det_close_session_out_reply_t_endian
static inline void vl_api_nat_det_close_session_out_reply_t_endian (vl_api_nat_det_close_session_out_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_in_t_endian
#define _vl_api_defined_nat_det_close_session_in_t_endian
static inline void vl_api_nat_det_close_session_in_t_endian (vl_api_nat_det_close_session_in_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->in_addr = a->in_addr (no-op) */
    a->in_port = clib_net_to_host_u16(a->in_port);
    /* a->ext_addr = a->ext_addr (no-op) */
    a->ext_port = clib_net_to_host_u16(a->ext_port);
}

#endif

#ifndef _vl_api_defined_nat_det_close_session_in_reply_t_endian
#define _vl_api_defined_nat_det_close_session_in_reply_t_endian
static inline void vl_api_nat_det_close_session_in_reply_t_endian (vl_api_nat_det_close_session_in_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat_det_session_dump_t_endian
#define _vl_api_defined_nat_det_session_dump_t_endian
static inline void vl_api_nat_det_session_dump_t_endian (vl_api_nat_det_session_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->user_addr = a->user_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_nat_det_session_details_t_endian
#define _vl_api_defined_nat_det_session_details_t_endian
static inline void vl_api_nat_det_session_details_t_endian (vl_api_nat_det_session_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->in_port = clib_net_to_host_u16(a->in_port);
    /* a->ext_addr = a->ext_addr (no-op) */
    a->ext_port = clib_net_to_host_u16(a->ext_port);
    a->out_port = clib_net_to_host_u16(a->out_port);
    /* a->state = a->state (no-op) */
    a->expire = clib_net_to_host_u32(a->expire);
}

#endif

#ifndef _vl_api_defined_nat64_add_del_pool_addr_range_t_endian
#define _vl_api_defined_nat64_add_del_pool_addr_range_t_endian
static inline void vl_api_nat64_add_del_pool_addr_range_t_endian (vl_api_nat64_add_del_pool_addr_range_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->start_addr = a->start_addr (no-op) */
    /* a->end_addr = a->end_addr (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_add_del_pool_addr_range_reply_t_endian
#define _vl_api_defined_nat64_add_del_pool_addr_range_reply_t_endian
static inline void vl_api_nat64_add_del_pool_addr_range_reply_t_endian (vl_api_nat64_add_del_pool_addr_range_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat64_pool_addr_dump_t_endian
#define _vl_api_defined_nat64_pool_addr_dump_t_endian
static inline void vl_api_nat64_pool_addr_dump_t_endian (vl_api_nat64_pool_addr_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat64_pool_addr_details_t_endian
#define _vl_api_defined_nat64_pool_addr_details_t_endian
static inline void vl_api_nat64_pool_addr_details_t_endian (vl_api_nat64_pool_addr_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->address = a->address (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_t_endian
#define _vl_api_defined_nat64_add_del_interface_t_endian
static inline void vl_api_nat64_add_del_interface_t_endian (vl_api_nat64_add_del_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_reply_t_endian
#define _vl_api_defined_nat64_add_del_interface_reply_t_endian
static inline void vl_api_nat64_add_del_interface_reply_t_endian (vl_api_nat64_add_del_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat64_interface_dump_t_endian
#define _vl_api_defined_nat64_interface_dump_t_endian
static inline void vl_api_nat64_interface_dump_t_endian (vl_api_nat64_interface_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat64_interface_details_t_endian
#define _vl_api_defined_nat64_interface_details_t_endian
static inline void vl_api_nat64_interface_details_t_endian (vl_api_nat64_interface_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_add_del_static_bib_t_endian
#define _vl_api_defined_nat64_add_del_static_bib_t_endian
static inline void vl_api_nat64_add_del_static_bib_t_endian (vl_api_nat64_add_del_static_bib_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->i_addr = a->i_addr (no-op) */
    /* a->o_addr = a->o_addr (no-op) */
    a->i_port = clib_net_to_host_u16(a->i_port);
    a->o_port = clib_net_to_host_u16(a->o_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->proto = a->proto (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_add_del_static_bib_reply_t_endian
#define _vl_api_defined_nat64_add_del_static_bib_reply_t_endian
static inline void vl_api_nat64_add_del_static_bib_reply_t_endian (vl_api_nat64_add_del_static_bib_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat64_bib_dump_t_endian
#define _vl_api_defined_nat64_bib_dump_t_endian
static inline void vl_api_nat64_bib_dump_t_endian (vl_api_nat64_bib_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->proto = a->proto (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_bib_details_t_endian
#define _vl_api_defined_nat64_bib_details_t_endian
static inline void vl_api_nat64_bib_details_t_endian (vl_api_nat64_bib_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->i_addr = a->i_addr (no-op) */
    /* a->o_addr = a->o_addr (no-op) */
    a->i_port = clib_net_to_host_u16(a->i_port);
    a->o_port = clib_net_to_host_u16(a->o_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->proto = a->proto (no-op) */
    /* a->flags = a->flags (no-op) */
    a->ses_num = clib_net_to_host_u32(a->ses_num);
}

#endif

#ifndef _vl_api_defined_nat64_st_dump_t_endian
#define _vl_api_defined_nat64_st_dump_t_endian
static inline void vl_api_nat64_st_dump_t_endian (vl_api_nat64_st_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->proto = a->proto (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_st_details_t_endian
#define _vl_api_defined_nat64_st_details_t_endian
static inline void vl_api_nat64_st_details_t_endian (vl_api_nat64_st_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->il_addr = a->il_addr (no-op) */
    /* a->ol_addr = a->ol_addr (no-op) */
    a->il_port = clib_net_to_host_u16(a->il_port);
    a->ol_port = clib_net_to_host_u16(a->ol_port);
    /* a->ir_addr = a->ir_addr (no-op) */
    /* a->or_addr = a->or_addr (no-op) */
    a->r_port = clib_net_to_host_u16(a->r_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->proto = a->proto (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_add_del_prefix_t_endian
#define _vl_api_defined_nat64_add_del_prefix_t_endian
static inline void vl_api_nat64_add_del_prefix_t_endian (vl_api_nat64_add_del_prefix_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->prefix = a->prefix (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_add_del_prefix_reply_t_endian
#define _vl_api_defined_nat64_add_del_prefix_reply_t_endian
static inline void vl_api_nat64_add_del_prefix_reply_t_endian (vl_api_nat64_add_del_prefix_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat64_prefix_dump_t_endian
#define _vl_api_defined_nat64_prefix_dump_t_endian
static inline void vl_api_nat64_prefix_dump_t_endian (vl_api_nat64_prefix_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat64_prefix_details_t_endian
#define _vl_api_defined_nat64_prefix_details_t_endian
static inline void vl_api_nat64_prefix_details_t_endian (vl_api_nat64_prefix_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->prefix = a->prefix (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_addr_t_endian
#define _vl_api_defined_nat64_add_del_interface_addr_t_endian
static inline void vl_api_nat64_add_del_interface_addr_t_endian (vl_api_nat64_add_del_interface_addr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat64_add_del_interface_addr_reply_t_endian
#define _vl_api_defined_nat64_add_del_interface_addr_reply_t_endian
static inline void vl_api_nat64_add_del_interface_addr_reply_t_endian (vl_api_nat64_add_del_interface_addr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dslite_add_del_pool_addr_range_t_endian
#define _vl_api_defined_dslite_add_del_pool_addr_range_t_endian
static inline void vl_api_dslite_add_del_pool_addr_range_t_endian (vl_api_dslite_add_del_pool_addr_range_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->start_addr = a->start_addr (no-op) */
    /* a->end_addr = a->end_addr (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_dslite_add_del_pool_addr_range_reply_t_endian
#define _vl_api_defined_dslite_add_del_pool_addr_range_reply_t_endian
static inline void vl_api_dslite_add_del_pool_addr_range_reply_t_endian (vl_api_dslite_add_del_pool_addr_range_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dslite_address_dump_t_endian
#define _vl_api_defined_dslite_address_dump_t_endian
static inline void vl_api_dslite_address_dump_t_endian (vl_api_dslite_address_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_dslite_address_details_t_endian
#define _vl_api_defined_dslite_address_details_t_endian
static inline void vl_api_dslite_address_details_t_endian (vl_api_dslite_address_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip_address = a->ip_address (no-op) */
}

#endif

#ifndef _vl_api_defined_dslite_set_aftr_addr_t_endian
#define _vl_api_defined_dslite_set_aftr_addr_t_endian
static inline void vl_api_dslite_set_aftr_addr_t_endian (vl_api_dslite_set_aftr_addr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip4_addr = a->ip4_addr (no-op) */
    /* a->ip6_addr = a->ip6_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_dslite_set_aftr_addr_reply_t_endian
#define _vl_api_defined_dslite_set_aftr_addr_reply_t_endian
static inline void vl_api_dslite_set_aftr_addr_reply_t_endian (vl_api_dslite_set_aftr_addr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dslite_get_aftr_addr_t_endian
#define _vl_api_defined_dslite_get_aftr_addr_t_endian
static inline void vl_api_dslite_get_aftr_addr_t_endian (vl_api_dslite_get_aftr_addr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_dslite_get_aftr_addr_reply_t_endian
#define _vl_api_defined_dslite_get_aftr_addr_reply_t_endian
static inline void vl_api_dslite_get_aftr_addr_reply_t_endian (vl_api_dslite_get_aftr_addr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->ip4_addr = a->ip4_addr (no-op) */
    /* a->ip6_addr = a->ip6_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_dslite_set_b4_addr_t_endian
#define _vl_api_defined_dslite_set_b4_addr_t_endian
static inline void vl_api_dslite_set_b4_addr_t_endian (vl_api_dslite_set_b4_addr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip4_addr = a->ip4_addr (no-op) */
    /* a->ip6_addr = a->ip6_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_dslite_set_b4_addr_reply_t_endian
#define _vl_api_defined_dslite_set_b4_addr_reply_t_endian
static inline void vl_api_dslite_set_b4_addr_reply_t_endian (vl_api_dslite_set_b4_addr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dslite_get_b4_addr_t_endian
#define _vl_api_defined_dslite_get_b4_addr_t_endian
static inline void vl_api_dslite_get_b4_addr_t_endian (vl_api_dslite_get_b4_addr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_dslite_get_b4_addr_reply_t_endian
#define _vl_api_defined_dslite_get_b4_addr_reply_t_endian
static inline void vl_api_dslite_get_b4_addr_reply_t_endian (vl_api_dslite_get_b4_addr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->ip4_addr = a->ip4_addr (no-op) */
    /* a->ip6_addr = a->ip6_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_nat66_add_del_interface_t_endian
#define _vl_api_defined_nat66_add_del_interface_t_endian
static inline void vl_api_nat66_add_del_interface_t_endian (vl_api_nat66_add_del_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat66_add_del_interface_reply_t_endian
#define _vl_api_defined_nat66_add_del_interface_reply_t_endian
static inline void vl_api_nat66_add_del_interface_reply_t_endian (vl_api_nat66_add_del_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat66_interface_dump_t_endian
#define _vl_api_defined_nat66_interface_dump_t_endian
static inline void vl_api_nat66_interface_dump_t_endian (vl_api_nat66_interface_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat66_interface_details_t_endian
#define _vl_api_defined_nat66_interface_details_t_endian
static inline void vl_api_nat66_interface_details_t_endian (vl_api_nat66_interface_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->flags = a->flags (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_nat66_add_del_static_mapping_t_endian
#define _vl_api_defined_nat66_add_del_static_mapping_t_endian
static inline void vl_api_nat66_add_del_static_mapping_t_endian (vl_api_nat66_add_del_static_mapping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->local_ip_address = a->local_ip_address (no-op) */
    /* a->external_ip_address = a->external_ip_address (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_nat66_add_del_static_mapping_reply_t_endian
#define _vl_api_defined_nat66_add_del_static_mapping_reply_t_endian
static inline void vl_api_nat66_add_del_static_mapping_reply_t_endian (vl_api_nat66_add_del_static_mapping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nat66_static_mapping_dump_t_endian
#define _vl_api_defined_nat66_static_mapping_dump_t_endian
static inline void vl_api_nat66_static_mapping_dump_t_endian (vl_api_nat66_static_mapping_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_nat66_static_mapping_details_t_endian
#define _vl_api_defined_nat66_static_mapping_details_t_endian
static inline void vl_api_nat66_static_mapping_details_t_endian (vl_api_nat66_static_mapping_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->local_ip_address = a->local_ip_address (no-op) */
    /* a->external_ip_address = a->external_ip_address (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->total_bytes = clib_net_to_host_u64(a->total_bytes);
    a->total_pkts = clib_net_to_host_u64(a->total_pkts);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(nat.api, 5, 2, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(nat.api, 0x950e6e7d)

#endif

