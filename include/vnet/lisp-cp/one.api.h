/*
 * VLIB API definitions 2020-06-13 05:56:03
 * Input file: one.api
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
#warning no content included from one.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR_SET, vl_api_one_add_del_locator_set_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR_SET_REPLY, vl_api_one_add_del_locator_set_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR, vl_api_one_add_del_locator_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCATOR_REPLY, vl_api_one_add_del_locator_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCAL_EID, vl_api_one_add_del_local_eid_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_LOCAL_EID_REPLY, vl_api_one_add_del_local_eid_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_SET_TTL, vl_api_one_map_register_set_ttl_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_SET_TTL_REPLY, vl_api_one_map_register_set_ttl_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_TTL, vl_api_show_one_map_register_ttl_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_TTL_REPLY, vl_api_show_one_map_register_ttl_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_SERVER, vl_api_one_add_del_map_server_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_SERVER_REPLY, vl_api_one_add_del_map_server_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_RESOLVER, vl_api_one_add_del_map_resolver_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_RESOLVER_REPLY, vl_api_one_add_del_map_resolver_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE, vl_api_one_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_REPLY, vl_api_one_enable_disable_reply_t_handler)
vl_msg_id(VL_API_ONE_NSH_SET_LOCATOR_SET, vl_api_one_nsh_set_locator_set_t_handler)
vl_msg_id(VL_API_ONE_NSH_SET_LOCATOR_SET_REPLY, vl_api_one_nsh_set_locator_set_reply_t_handler)
vl_msg_id(VL_API_ONE_PITR_SET_LOCATOR_SET, vl_api_one_pitr_set_locator_set_t_handler)
vl_msg_id(VL_API_ONE_PITR_SET_LOCATOR_SET_REPLY, vl_api_one_pitr_set_locator_set_reply_t_handler)
vl_msg_id(VL_API_ONE_USE_PETR, vl_api_one_use_petr_t_handler)
vl_msg_id(VL_API_ONE_USE_PETR_REPLY, vl_api_one_use_petr_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_USE_PETR, vl_api_show_one_use_petr_t_handler)
vl_msg_id(VL_API_SHOW_ONE_USE_PETR_REPLY, vl_api_show_one_use_petr_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_RLOC_PROBE_STATE, vl_api_show_one_rloc_probe_state_t_handler)
vl_msg_id(VL_API_SHOW_ONE_RLOC_PROBE_STATE_REPLY, vl_api_show_one_rloc_probe_state_reply_t_handler)
vl_msg_id(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE, vl_api_one_rloc_probe_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE_REPLY, vl_api_one_rloc_probe_enable_disable_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE, vl_api_one_map_register_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE_REPLY, vl_api_one_map_register_enable_disable_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_STATE, vl_api_show_one_map_register_state_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_STATE_REPLY, vl_api_show_one_map_register_state_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REQUEST_MODE, vl_api_one_map_request_mode_t_handler)
vl_msg_id(VL_API_ONE_MAP_REQUEST_MODE_REPLY, vl_api_one_map_request_mode_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REQUEST_MODE, vl_api_show_one_map_request_mode_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REQUEST_MODE_REPLY, vl_api_show_one_map_request_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_REMOTE_MAPPING, vl_api_one_add_del_remote_mapping_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_REMOTE_MAPPING_REPLY, vl_api_one_add_del_remote_mapping_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY, vl_api_one_add_del_l2_arp_entry_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY_REPLY, vl_api_one_add_del_l2_arp_entry_reply_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_ENTRIES_GET, vl_api_one_l2_arp_entries_get_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_ENTRIES_GET_REPLY, vl_api_one_l2_arp_entries_get_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_NDP_ENTRY, vl_api_one_add_del_ndp_entry_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_NDP_ENTRY_REPLY, vl_api_one_add_del_ndp_entry_reply_t_handler)
vl_msg_id(VL_API_ONE_NDP_ENTRIES_GET, vl_api_one_ndp_entries_get_t_handler)
vl_msg_id(VL_API_ONE_NDP_ENTRIES_GET_REPLY, vl_api_one_ndp_entries_get_reply_t_handler)
vl_msg_id(VL_API_ONE_SET_TRANSPORT_PROTOCOL, vl_api_one_set_transport_protocol_t_handler)
vl_msg_id(VL_API_ONE_SET_TRANSPORT_PROTOCOL_REPLY, vl_api_one_set_transport_protocol_reply_t_handler)
vl_msg_id(VL_API_ONE_GET_TRANSPORT_PROTOCOL, vl_api_one_get_transport_protocol_t_handler)
vl_msg_id(VL_API_ONE_GET_TRANSPORT_PROTOCOL_REPLY, vl_api_one_get_transport_protocol_reply_t_handler)
vl_msg_id(VL_API_ONE_NDP_BD_GET, vl_api_one_ndp_bd_get_t_handler)
vl_msg_id(VL_API_ONE_NDP_BD_GET_REPLY, vl_api_one_ndp_bd_get_reply_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_BD_GET, vl_api_one_l2_arp_bd_get_t_handler)
vl_msg_id(VL_API_ONE_L2_ARP_BD_GET_REPLY, vl_api_one_l2_arp_bd_get_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_ADJACENCY, vl_api_one_add_del_adjacency_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_ADJACENCY_REPLY, vl_api_one_add_del_adjacency_reply_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS, vl_api_one_add_del_map_request_itr_rlocs_t_handler)
vl_msg_id(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS_REPLY, vl_api_one_add_del_map_request_itr_rlocs_reply_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_ADD_DEL_MAP, vl_api_one_eid_table_add_del_map_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_ADD_DEL_MAP_REPLY, vl_api_one_eid_table_add_del_map_reply_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_DUMP, vl_api_one_locator_dump_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_DETAILS, vl_api_one_locator_details_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_SET_DETAILS, vl_api_one_locator_set_details_t_handler)
vl_msg_id(VL_API_ONE_LOCATOR_SET_DUMP, vl_api_one_locator_set_dump_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_DETAILS, vl_api_one_eid_table_details_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_DUMP, vl_api_one_eid_table_dump_t_handler)
vl_msg_id(VL_API_ONE_ADJACENCIES_GET_REPLY, vl_api_one_adjacencies_get_reply_t_handler)
vl_msg_id(VL_API_ONE_ADJACENCIES_GET, vl_api_one_adjacencies_get_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_MAP_DETAILS, vl_api_one_eid_table_map_details_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_MAP_DUMP, vl_api_one_eid_table_map_dump_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_VNI_DUMP, vl_api_one_eid_table_vni_dump_t_handler)
vl_msg_id(VL_API_ONE_EID_TABLE_VNI_DETAILS, vl_api_one_eid_table_vni_details_t_handler)
vl_msg_id(VL_API_ONE_MAP_RESOLVER_DETAILS, vl_api_one_map_resolver_details_t_handler)
vl_msg_id(VL_API_ONE_MAP_RESOLVER_DUMP, vl_api_one_map_resolver_dump_t_handler)
vl_msg_id(VL_API_ONE_MAP_SERVER_DETAILS, vl_api_one_map_server_details_t_handler)
vl_msg_id(VL_API_ONE_MAP_SERVER_DUMP, vl_api_one_map_server_dump_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATUS, vl_api_show_one_status_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATUS_REPLY, vl_api_show_one_status_reply_t_handler)
vl_msg_id(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS, vl_api_one_get_map_request_itr_rlocs_t_handler)
vl_msg_id(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS_REPLY, vl_api_one_get_map_request_itr_rlocs_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_NSH_MAPPING, vl_api_show_one_nsh_mapping_t_handler)
vl_msg_id(VL_API_SHOW_ONE_NSH_MAPPING_REPLY, vl_api_show_one_nsh_mapping_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_PITR, vl_api_show_one_pitr_t_handler)
vl_msg_id(VL_API_SHOW_ONE_PITR_REPLY, vl_api_show_one_pitr_reply_t_handler)
vl_msg_id(VL_API_ONE_STATS_DUMP, vl_api_one_stats_dump_t_handler)
vl_msg_id(VL_API_ONE_STATS_DETAILS, vl_api_one_stats_details_t_handler)
vl_msg_id(VL_API_ONE_STATS_FLUSH, vl_api_one_stats_flush_t_handler)
vl_msg_id(VL_API_ONE_STATS_FLUSH_REPLY, vl_api_one_stats_flush_reply_t_handler)
vl_msg_id(VL_API_ONE_STATS_ENABLE_DISABLE, vl_api_one_stats_enable_disable_t_handler)
vl_msg_id(VL_API_ONE_STATS_ENABLE_DISABLE_REPLY, vl_api_one_stats_enable_disable_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE, vl_api_show_one_stats_enable_disable_t_handler)
vl_msg_id(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE_REPLY, vl_api_show_one_stats_enable_disable_reply_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, vl_api_one_map_register_fallback_threshold_t_handler)
vl_msg_id(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, vl_api_one_map_register_fallback_threshold_reply_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, vl_api_show_one_map_register_fallback_threshold_t_handler)
vl_msg_id(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, vl_api_show_one_map_register_fallback_threshold_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_XTR_MODE, vl_api_one_enable_disable_xtr_mode_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_XTR_MODE_REPLY, vl_api_one_enable_disable_xtr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_SHOW_XTR_MODE, vl_api_one_show_xtr_mode_t_handler)
vl_msg_id(VL_API_ONE_SHOW_XTR_MODE_REPLY, vl_api_one_show_xtr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PETR_MODE, vl_api_one_enable_disable_petr_mode_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PETR_MODE_REPLY, vl_api_one_enable_disable_petr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PETR_MODE, vl_api_one_show_petr_mode_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PETR_MODE_REPLY, vl_api_one_show_petr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PITR_MODE, vl_api_one_enable_disable_pitr_mode_t_handler)
vl_msg_id(VL_API_ONE_ENABLE_DISABLE_PITR_MODE_REPLY, vl_api_one_enable_disable_pitr_mode_reply_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PITR_MODE, vl_api_one_show_pitr_mode_t_handler)
vl_msg_id(VL_API_ONE_SHOW_PITR_MODE_REPLY, vl_api_one_show_pitr_mode_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_one_add_del_locator_set_t, 1)
vl_msg_name(vl_api_one_add_del_locator_set_reply_t, 1)
vl_msg_name(vl_api_one_add_del_locator_t, 1)
vl_msg_name(vl_api_one_add_del_locator_reply_t, 1)
vl_msg_name(vl_api_one_add_del_local_eid_t, 1)
vl_msg_name(vl_api_one_add_del_local_eid_reply_t, 1)
vl_msg_name(vl_api_one_map_register_set_ttl_t, 1)
vl_msg_name(vl_api_one_map_register_set_ttl_reply_t, 1)
vl_msg_name(vl_api_show_one_map_register_ttl_t, 1)
vl_msg_name(vl_api_show_one_map_register_ttl_reply_t, 1)
vl_msg_name(vl_api_one_add_del_map_server_t, 1)
vl_msg_name(vl_api_one_add_del_map_server_reply_t, 1)
vl_msg_name(vl_api_one_add_del_map_resolver_t, 1)
vl_msg_name(vl_api_one_add_del_map_resolver_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_t, 1)
vl_msg_name(vl_api_one_enable_disable_reply_t, 1)
vl_msg_name(vl_api_one_nsh_set_locator_set_t, 1)
vl_msg_name(vl_api_one_nsh_set_locator_set_reply_t, 1)
vl_msg_name(vl_api_one_pitr_set_locator_set_t, 1)
vl_msg_name(vl_api_one_pitr_set_locator_set_reply_t, 1)
vl_msg_name(vl_api_one_use_petr_t, 1)
vl_msg_name(vl_api_one_use_petr_reply_t, 1)
vl_msg_name(vl_api_show_one_use_petr_t, 1)
vl_msg_name(vl_api_show_one_use_petr_reply_t, 1)
vl_msg_name(vl_api_show_one_rloc_probe_state_t, 1)
vl_msg_name(vl_api_show_one_rloc_probe_state_reply_t, 1)
vl_msg_name(vl_api_one_rloc_probe_enable_disable_t, 1)
vl_msg_name(vl_api_one_rloc_probe_enable_disable_reply_t, 1)
vl_msg_name(vl_api_one_map_register_enable_disable_t, 1)
vl_msg_name(vl_api_one_map_register_enable_disable_reply_t, 1)
vl_msg_name(vl_api_show_one_map_register_state_t, 1)
vl_msg_name(vl_api_show_one_map_register_state_reply_t, 1)
vl_msg_name(vl_api_one_map_request_mode_t, 1)
vl_msg_name(vl_api_one_map_request_mode_reply_t, 1)
vl_msg_name(vl_api_show_one_map_request_mode_t, 1)
vl_msg_name(vl_api_show_one_map_request_mode_reply_t, 1)
vl_msg_name(vl_api_one_add_del_remote_mapping_t, 1)
vl_msg_name(vl_api_one_add_del_remote_mapping_reply_t, 1)
vl_msg_name(vl_api_one_add_del_l2_arp_entry_t, 1)
vl_msg_name(vl_api_one_add_del_l2_arp_entry_reply_t, 1)
vl_msg_name(vl_api_one_l2_arp_entries_get_t, 1)
vl_msg_name(vl_api_one_l2_arp_entries_get_reply_t, 1)
vl_msg_name(vl_api_one_add_del_ndp_entry_t, 1)
vl_msg_name(vl_api_one_add_del_ndp_entry_reply_t, 1)
vl_msg_name(vl_api_one_ndp_entries_get_t, 1)
vl_msg_name(vl_api_one_ndp_entries_get_reply_t, 1)
vl_msg_name(vl_api_one_set_transport_protocol_t, 1)
vl_msg_name(vl_api_one_set_transport_protocol_reply_t, 1)
vl_msg_name(vl_api_one_get_transport_protocol_t, 1)
vl_msg_name(vl_api_one_get_transport_protocol_reply_t, 1)
vl_msg_name(vl_api_one_ndp_bd_get_t, 1)
vl_msg_name(vl_api_one_ndp_bd_get_reply_t, 1)
vl_msg_name(vl_api_one_l2_arp_bd_get_t, 1)
vl_msg_name(vl_api_one_l2_arp_bd_get_reply_t, 1)
vl_msg_name(vl_api_one_add_del_adjacency_t, 1)
vl_msg_name(vl_api_one_add_del_adjacency_reply_t, 1)
vl_msg_name(vl_api_one_add_del_map_request_itr_rlocs_t, 1)
vl_msg_name(vl_api_one_add_del_map_request_itr_rlocs_reply_t, 1)
vl_msg_name(vl_api_one_eid_table_add_del_map_t, 1)
vl_msg_name(vl_api_one_eid_table_add_del_map_reply_t, 1)
vl_msg_name(vl_api_one_locator_dump_t, 1)
vl_msg_name(vl_api_one_locator_details_t, 1)
vl_msg_name(vl_api_one_locator_set_details_t, 1)
vl_msg_name(vl_api_one_locator_set_dump_t, 1)
vl_msg_name(vl_api_one_eid_table_details_t, 1)
vl_msg_name(vl_api_one_eid_table_dump_t, 1)
vl_msg_name(vl_api_one_adjacencies_get_reply_t, 1)
vl_msg_name(vl_api_one_adjacencies_get_t, 1)
vl_msg_name(vl_api_one_eid_table_map_details_t, 1)
vl_msg_name(vl_api_one_eid_table_map_dump_t, 1)
vl_msg_name(vl_api_one_eid_table_vni_dump_t, 1)
vl_msg_name(vl_api_one_eid_table_vni_details_t, 1)
vl_msg_name(vl_api_one_map_resolver_details_t, 1)
vl_msg_name(vl_api_one_map_resolver_dump_t, 1)
vl_msg_name(vl_api_one_map_server_details_t, 1)
vl_msg_name(vl_api_one_map_server_dump_t, 1)
vl_msg_name(vl_api_show_one_status_t, 1)
vl_msg_name(vl_api_show_one_status_reply_t, 1)
vl_msg_name(vl_api_one_get_map_request_itr_rlocs_t, 1)
vl_msg_name(vl_api_one_get_map_request_itr_rlocs_reply_t, 1)
vl_msg_name(vl_api_show_one_nsh_mapping_t, 1)
vl_msg_name(vl_api_show_one_nsh_mapping_reply_t, 1)
vl_msg_name(vl_api_show_one_pitr_t, 1)
vl_msg_name(vl_api_show_one_pitr_reply_t, 1)
vl_msg_name(vl_api_one_stats_dump_t, 1)
vl_msg_name(vl_api_one_stats_details_t, 1)
vl_msg_name(vl_api_one_stats_flush_t, 1)
vl_msg_name(vl_api_one_stats_flush_reply_t, 1)
vl_msg_name(vl_api_one_stats_enable_disable_t, 1)
vl_msg_name(vl_api_one_stats_enable_disable_reply_t, 1)
vl_msg_name(vl_api_show_one_stats_enable_disable_t, 1)
vl_msg_name(vl_api_show_one_stats_enable_disable_reply_t, 1)
vl_msg_name(vl_api_one_map_register_fallback_threshold_t, 1)
vl_msg_name(vl_api_one_map_register_fallback_threshold_reply_t, 1)
vl_msg_name(vl_api_show_one_map_register_fallback_threshold_t, 1)
vl_msg_name(vl_api_show_one_map_register_fallback_threshold_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_xtr_mode_t, 1)
vl_msg_name(vl_api_one_enable_disable_xtr_mode_reply_t, 1)
vl_msg_name(vl_api_one_show_xtr_mode_t, 1)
vl_msg_name(vl_api_one_show_xtr_mode_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_petr_mode_t, 1)
vl_msg_name(vl_api_one_enable_disable_petr_mode_reply_t, 1)
vl_msg_name(vl_api_one_show_petr_mode_t, 1)
vl_msg_name(vl_api_one_show_petr_mode_reply_t, 1)
vl_msg_name(vl_api_one_enable_disable_pitr_mode_t, 1)
vl_msg_name(vl_api_one_enable_disable_pitr_mode_reply_t, 1)
vl_msg_name(vl_api_one_show_pitr_mode_t, 1)
vl_msg_name(vl_api_one_show_pitr_mode_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_one \
_(VL_API_ONE_ADD_DEL_LOCATOR_SET, one_add_del_locator_set, 2e73b050) \
_(VL_API_ONE_ADD_DEL_LOCATOR_SET_REPLY, one_add_del_locator_set_reply, b6666db4) \
_(VL_API_ONE_ADD_DEL_LOCATOR, one_add_del_locator, 006a4240) \
_(VL_API_ONE_ADD_DEL_LOCATOR_REPLY, one_add_del_locator_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_LOCAL_EID, one_add_del_local_eid, e6d00717) \
_(VL_API_ONE_ADD_DEL_LOCAL_EID_REPLY, one_add_del_local_eid_reply, e8d4e804) \
_(VL_API_ONE_MAP_REGISTER_SET_TTL, one_map_register_set_ttl, dd59f1f3) \
_(VL_API_ONE_MAP_REGISTER_SET_TTL_REPLY, one_map_register_set_ttl_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REGISTER_TTL, show_one_map_register_ttl, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REGISTER_TTL_REPLY, show_one_map_register_ttl_reply, fa83dd66) \
_(VL_API_ONE_ADD_DEL_MAP_SERVER, one_add_del_map_server, 0ebcd37d) \
_(VL_API_ONE_ADD_DEL_MAP_SERVER_REPLY, one_add_del_map_server_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_MAP_RESOLVER, one_add_del_map_resolver, 0ebcd37d) \
_(VL_API_ONE_ADD_DEL_MAP_RESOLVER_REPLY, one_add_del_map_resolver_reply, e8d4e804) \
_(VL_API_ONE_ENABLE_DISABLE, one_enable_disable, eb0e943b) \
_(VL_API_ONE_ENABLE_DISABLE_REPLY, one_enable_disable_reply, e8d4e804) \
_(VL_API_ONE_NSH_SET_LOCATOR_SET, one_nsh_set_locator_set, 7aa022dd) \
_(VL_API_ONE_NSH_SET_LOCATOR_SET_REPLY, one_nsh_set_locator_set_reply, e8d4e804) \
_(VL_API_ONE_PITR_SET_LOCATOR_SET, one_pitr_set_locator_set, 7aa022dd) \
_(VL_API_ONE_PITR_SET_LOCATOR_SET_REPLY, one_pitr_set_locator_set_reply, e8d4e804) \
_(VL_API_ONE_USE_PETR, one_use_petr, 6910787d) \
_(VL_API_ONE_USE_PETR_REPLY, one_use_petr_reply, e8d4e804) \
_(VL_API_SHOW_ONE_USE_PETR, show_one_use_petr, 51077d14) \
_(VL_API_SHOW_ONE_USE_PETR_REPLY, show_one_use_petr_reply, 1eb21916) \
_(VL_API_SHOW_ONE_RLOC_PROBE_STATE, show_one_rloc_probe_state, 51077d14) \
_(VL_API_SHOW_ONE_RLOC_PROBE_STATE_REPLY, show_one_rloc_probe_state_reply, 14304fbc) \
_(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE, one_rloc_probe_enable_disable, 294103d1) \
_(VL_API_ONE_RLOC_PROBE_ENABLE_DISABLE_REPLY, one_rloc_probe_enable_disable_reply, e8d4e804) \
_(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE, one_map_register_enable_disable, 294103d1) \
_(VL_API_ONE_MAP_REGISTER_ENABLE_DISABLE_REPLY, one_map_register_enable_disable_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REGISTER_STATE, show_one_map_register_state, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REGISTER_STATE_REPLY, show_one_map_register_state_reply, 14304fbc) \
_(VL_API_ONE_MAP_REQUEST_MODE, one_map_request_mode, f3f93ce9) \
_(VL_API_ONE_MAP_REQUEST_MODE_REPLY, one_map_request_mode_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REQUEST_MODE, show_one_map_request_mode, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REQUEST_MODE_REPLY, show_one_map_request_mode_reply, d423107c) \
_(VL_API_ONE_ADD_DEL_REMOTE_MAPPING, one_add_del_remote_mapping, 0b2010ec) \
_(VL_API_ONE_ADD_DEL_REMOTE_MAPPING_REPLY, one_add_del_remote_mapping_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY, one_add_del_l2_arp_entry, a95cc2d7) \
_(VL_API_ONE_ADD_DEL_L2_ARP_ENTRY_REPLY, one_add_del_l2_arp_entry_reply, e8d4e804) \
_(VL_API_ONE_L2_ARP_ENTRIES_GET, one_l2_arp_entries_get, 4d418cf4) \
_(VL_API_ONE_L2_ARP_ENTRIES_GET_REPLY, one_l2_arp_entries_get_reply, 88e54ded) \
_(VL_API_ONE_ADD_DEL_NDP_ENTRY, one_add_del_ndp_entry, e9468fe3) \
_(VL_API_ONE_ADD_DEL_NDP_ENTRY_REPLY, one_add_del_ndp_entry_reply, e8d4e804) \
_(VL_API_ONE_NDP_ENTRIES_GET, one_ndp_entries_get, 4d418cf4) \
_(VL_API_ONE_NDP_ENTRIES_GET_REPLY, one_ndp_entries_get_reply, d0822f37) \
_(VL_API_ONE_SET_TRANSPORT_PROTOCOL, one_set_transport_protocol, 07b6b85f) \
_(VL_API_ONE_SET_TRANSPORT_PROTOCOL_REPLY, one_set_transport_protocol_reply, e8d4e804) \
_(VL_API_ONE_GET_TRANSPORT_PROTOCOL, one_get_transport_protocol, 51077d14) \
_(VL_API_ONE_GET_TRANSPORT_PROTOCOL_REPLY, one_get_transport_protocol_reply, 62a28eb3) \
_(VL_API_ONE_NDP_BD_GET, one_ndp_bd_get, 51077d14) \
_(VL_API_ONE_NDP_BD_GET_REPLY, one_ndp_bd_get_reply, 221ac888) \
_(VL_API_ONE_L2_ARP_BD_GET, one_l2_arp_bd_get, 51077d14) \
_(VL_API_ONE_L2_ARP_BD_GET_REPLY, one_l2_arp_bd_get_reply, 221ac888) \
_(VL_API_ONE_ADD_DEL_ADJACENCY, one_add_del_adjacency, f047390d) \
_(VL_API_ONE_ADD_DEL_ADJACENCY_REPLY, one_add_del_adjacency_reply, e8d4e804) \
_(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS, one_add_del_map_request_itr_rlocs, c7c6cb2f) \
_(VL_API_ONE_ADD_DEL_MAP_REQUEST_ITR_RLOCS_REPLY, one_add_del_map_request_itr_rlocs_reply, e8d4e804) \
_(VL_API_ONE_EID_TABLE_ADD_DEL_MAP, one_eid_table_add_del_map, 59e9975e) \
_(VL_API_ONE_EID_TABLE_ADD_DEL_MAP_REPLY, one_eid_table_add_del_map_reply, e8d4e804) \
_(VL_API_ONE_LOCATOR_DUMP, one_locator_dump, f27d5050) \
_(VL_API_ONE_LOCATOR_DETAILS, one_locator_details, b3988a30) \
_(VL_API_ONE_LOCATOR_SET_DETAILS, one_locator_set_details, 6b846882) \
_(VL_API_ONE_LOCATOR_SET_DUMP, one_locator_set_dump, c79e8ab0) \
_(VL_API_ONE_EID_TABLE_DETAILS, one_eid_table_details, dcd9f414) \
_(VL_API_ONE_EID_TABLE_DUMP, one_eid_table_dump, e0df64da) \
_(VL_API_ONE_ADJACENCIES_GET_REPLY, one_adjacencies_get_reply, 60a3c592) \
_(VL_API_ONE_ADJACENCIES_GET, one_adjacencies_get, 8d1f2fe9) \
_(VL_API_ONE_EID_TABLE_MAP_DETAILS, one_eid_table_map_details, 0b6859e2) \
_(VL_API_ONE_EID_TABLE_MAP_DUMP, one_eid_table_map_dump, 67c54650) \
_(VL_API_ONE_EID_TABLE_VNI_DUMP, one_eid_table_vni_dump, 51077d14) \
_(VL_API_ONE_EID_TABLE_VNI_DETAILS, one_eid_table_vni_details, 64abc01e) \
_(VL_API_ONE_MAP_RESOLVER_DETAILS, one_map_resolver_details, 60a5f5ca) \
_(VL_API_ONE_MAP_RESOLVER_DUMP, one_map_resolver_dump, 51077d14) \
_(VL_API_ONE_MAP_SERVER_DETAILS, one_map_server_details, 60a5f5ca) \
_(VL_API_ONE_MAP_SERVER_DUMP, one_map_server_dump, 51077d14) \
_(VL_API_SHOW_ONE_STATUS, show_one_status, 51077d14) \
_(VL_API_SHOW_ONE_STATUS_REPLY, show_one_status_reply, ddcf48ef) \
_(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS, one_get_map_request_itr_rlocs, 51077d14) \
_(VL_API_ONE_GET_MAP_REQUEST_ITR_RLOCS_REPLY, one_get_map_request_itr_rlocs_reply, 9f56f6f7) \
_(VL_API_SHOW_ONE_NSH_MAPPING, show_one_nsh_mapping, 51077d14) \
_(VL_API_SHOW_ONE_NSH_MAPPING_REPLY, show_one_nsh_mapping_reply, f2ff364e) \
_(VL_API_SHOW_ONE_PITR, show_one_pitr, 51077d14) \
_(VL_API_SHOW_ONE_PITR_REPLY, show_one_pitr_reply, dca512cc) \
_(VL_API_ONE_STATS_DUMP, one_stats_dump, 51077d14) \
_(VL_API_ONE_STATS_DETAILS, one_stats_details, e1a34a05) \
_(VL_API_ONE_STATS_FLUSH, one_stats_flush, 51077d14) \
_(VL_API_ONE_STATS_FLUSH_REPLY, one_stats_flush_reply, e8d4e804) \
_(VL_API_ONE_STATS_ENABLE_DISABLE, one_stats_enable_disable, eb0e943b) \
_(VL_API_ONE_STATS_ENABLE_DISABLE_REPLY, one_stats_enable_disable_reply, e8d4e804) \
_(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE, show_one_stats_enable_disable, 51077d14) \
_(VL_API_SHOW_ONE_STATS_ENABLE_DISABLE_REPLY, show_one_stats_enable_disable_reply, 6b4c29dc) \
_(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, one_map_register_fallback_threshold, f7d4a475) \
_(VL_API_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, one_map_register_fallback_threshold_reply, e8d4e804) \
_(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD, show_one_map_register_fallback_threshold, 51077d14) \
_(VL_API_SHOW_ONE_MAP_REGISTER_FALLBACK_THRESHOLD_REPLY, show_one_map_register_fallback_threshold_reply, c93a9113) \
_(VL_API_ONE_ENABLE_DISABLE_XTR_MODE, one_enable_disable_xtr_mode, eb0e943b) \
_(VL_API_ONE_ENABLE_DISABLE_XTR_MODE_REPLY, one_enable_disable_xtr_mode_reply, e8d4e804) \
_(VL_API_ONE_SHOW_XTR_MODE, one_show_xtr_mode, 51077d14) \
_(VL_API_ONE_SHOW_XTR_MODE_REPLY, one_show_xtr_mode_reply, 6b4c29dc) \
_(VL_API_ONE_ENABLE_DISABLE_PETR_MODE, one_enable_disable_petr_mode, eb0e943b) \
_(VL_API_ONE_ENABLE_DISABLE_PETR_MODE_REPLY, one_enable_disable_petr_mode_reply, e8d4e804) \
_(VL_API_ONE_SHOW_PETR_MODE, one_show_petr_mode, 51077d14) \
_(VL_API_ONE_SHOW_PETR_MODE_REPLY, one_show_petr_mode_reply, 6b4c29dc) \
_(VL_API_ONE_ENABLE_DISABLE_PITR_MODE, one_enable_disable_pitr_mode, eb0e943b) \
_(VL_API_ONE_ENABLE_DISABLE_PITR_MODE_REPLY, one_enable_disable_pitr_mode_reply, e8d4e804) \
_(VL_API_ONE_SHOW_PITR_MODE, one_show_pitr_mode, 51077d14) \
_(VL_API_ONE_SHOW_PITR_MODE_REPLY, one_show_pitr_mode_reply, 6b4c29dc) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_one_api
#define included_one_api
#ifndef _vl_api_defined_one_local_locator
#define _vl_api_defined_one_local_locator
typedef VL_API_PACKED(struct _vl_api_one_local_locator {
    u32 sw_if_index;
    u8 priority;
    u8 weight;
}) vl_api_one_local_locator_t;
#endif

#ifndef _vl_api_defined_one_remote_locator
#define _vl_api_defined_one_remote_locator
typedef VL_API_PACKED(struct _vl_api_one_remote_locator {
    u8 is_ip4;
    u8 priority;
    u8 weight;
    u8 addr[16];
}) vl_api_one_remote_locator_t;
#endif

#ifndef _vl_api_defined_one_l2_arp_entry
#define _vl_api_defined_one_l2_arp_entry
typedef VL_API_PACKED(struct _vl_api_one_l2_arp_entry {
    u8 mac[6];
    u32 ip4;
}) vl_api_one_l2_arp_entry_t;
#endif

#ifndef _vl_api_defined_one_ndp_entry
#define _vl_api_defined_one_ndp_entry
typedef VL_API_PACKED(struct _vl_api_one_ndp_entry {
    u8 mac[6];
    u8 ip6[16];
}) vl_api_one_ndp_entry_t;
#endif

#ifndef _vl_api_defined_one_adjacency
#define _vl_api_defined_one_adjacency
typedef VL_API_PACKED(struct _vl_api_one_adjacency {
    u8 eid_type;
    u8 reid[16];
    u8 leid[16];
    u8 reid_prefix_len;
    u8 leid_prefix_len;
}) vl_api_one_adjacency_t;
#endif

#ifndef _vl_api_defined_one_add_del_locator_set
#define _vl_api_defined_one_add_del_locator_set
typedef VL_API_PACKED(struct _vl_api_one_add_del_locator_set {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 locator_set_name[64];
    u32 locator_num;
    vl_api_one_local_locator_t locators[0];
}) vl_api_one_add_del_locator_set_t;
#endif

#ifndef _vl_api_defined_one_add_del_locator_set_reply
#define _vl_api_defined_one_add_del_locator_set_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_locator_set_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 ls_index;
}) vl_api_one_add_del_locator_set_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_locator
#define _vl_api_defined_one_add_del_locator
typedef VL_API_PACKED(struct _vl_api_one_add_del_locator {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 locator_set_name[64];
    u32 sw_if_index;
    u8 priority;
    u8 weight;
}) vl_api_one_add_del_locator_t;
#endif

#ifndef _vl_api_defined_one_add_del_locator_reply
#define _vl_api_defined_one_add_del_locator_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_locator_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_locator_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_local_eid
#define _vl_api_defined_one_add_del_local_eid
typedef VL_API_PACKED(struct _vl_api_one_add_del_local_eid {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 eid_type;
    u8 eid[16];
    u8 prefix_len;
    u8 locator_set_name[64];
    u32 vni;
    u16 key_id;
    u8 key[64];
}) vl_api_one_add_del_local_eid_t;
#endif

#ifndef _vl_api_defined_one_add_del_local_eid_reply
#define _vl_api_defined_one_add_del_local_eid_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_local_eid_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_local_eid_reply_t;
#endif

#ifndef _vl_api_defined_one_map_register_set_ttl
#define _vl_api_defined_one_map_register_set_ttl
typedef VL_API_PACKED(struct _vl_api_one_map_register_set_ttl {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 ttl;
}) vl_api_one_map_register_set_ttl_t;
#endif

#ifndef _vl_api_defined_one_map_register_set_ttl_reply
#define _vl_api_defined_one_map_register_set_ttl_reply
typedef VL_API_PACKED(struct _vl_api_one_map_register_set_ttl_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_map_register_set_ttl_reply_t;
#endif

#ifndef _vl_api_defined_show_one_map_register_ttl
#define _vl_api_defined_show_one_map_register_ttl
typedef VL_API_PACKED(struct _vl_api_show_one_map_register_ttl {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_map_register_ttl_t;
#endif

#ifndef _vl_api_defined_show_one_map_register_ttl_reply
#define _vl_api_defined_show_one_map_register_ttl_reply
typedef VL_API_PACKED(struct _vl_api_show_one_map_register_ttl_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 ttl;
}) vl_api_show_one_map_register_ttl_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_map_server
#define _vl_api_defined_one_add_del_map_server
typedef VL_API_PACKED(struct _vl_api_one_add_del_map_server {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_ipv6;
    u8 ip_address[16];
}) vl_api_one_add_del_map_server_t;
#endif

#ifndef _vl_api_defined_one_add_del_map_server_reply
#define _vl_api_defined_one_add_del_map_server_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_map_server_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_map_server_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_map_resolver
#define _vl_api_defined_one_add_del_map_resolver
typedef VL_API_PACKED(struct _vl_api_one_add_del_map_resolver {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_ipv6;
    u8 ip_address[16];
}) vl_api_one_add_del_map_resolver_t;
#endif

#ifndef _vl_api_defined_one_add_del_map_resolver_reply
#define _vl_api_defined_one_add_del_map_resolver_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_map_resolver_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_map_resolver_reply_t;
#endif

#ifndef _vl_api_defined_one_enable_disable
#define _vl_api_defined_one_enable_disable
typedef VL_API_PACKED(struct _vl_api_one_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_en;
}) vl_api_one_enable_disable_t;
#endif

#ifndef _vl_api_defined_one_enable_disable_reply
#define _vl_api_defined_one_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_one_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_one_nsh_set_locator_set
#define _vl_api_defined_one_nsh_set_locator_set
typedef VL_API_PACKED(struct _vl_api_one_nsh_set_locator_set {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 ls_name[64];
}) vl_api_one_nsh_set_locator_set_t;
#endif

#ifndef _vl_api_defined_one_nsh_set_locator_set_reply
#define _vl_api_defined_one_nsh_set_locator_set_reply
typedef VL_API_PACKED(struct _vl_api_one_nsh_set_locator_set_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_nsh_set_locator_set_reply_t;
#endif

#ifndef _vl_api_defined_one_pitr_set_locator_set
#define _vl_api_defined_one_pitr_set_locator_set
typedef VL_API_PACKED(struct _vl_api_one_pitr_set_locator_set {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 ls_name[64];
}) vl_api_one_pitr_set_locator_set_t;
#endif

#ifndef _vl_api_defined_one_pitr_set_locator_set_reply
#define _vl_api_defined_one_pitr_set_locator_set_reply
typedef VL_API_PACKED(struct _vl_api_one_pitr_set_locator_set_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_pitr_set_locator_set_reply_t;
#endif

#ifndef _vl_api_defined_one_use_petr
#define _vl_api_defined_one_use_petr
typedef VL_API_PACKED(struct _vl_api_one_use_petr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ip4;
    u8 address[16];
    u8 is_add;
}) vl_api_one_use_petr_t;
#endif

#ifndef _vl_api_defined_one_use_petr_reply
#define _vl_api_defined_one_use_petr_reply
typedef VL_API_PACKED(struct _vl_api_one_use_petr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_use_petr_reply_t;
#endif

#ifndef _vl_api_defined_show_one_use_petr
#define _vl_api_defined_show_one_use_petr
typedef VL_API_PACKED(struct _vl_api_show_one_use_petr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_use_petr_t;
#endif

#ifndef _vl_api_defined_show_one_use_petr_reply
#define _vl_api_defined_show_one_use_petr_reply
typedef VL_API_PACKED(struct _vl_api_show_one_use_petr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 status;
    u8 is_ip4;
    u8 address[16];
}) vl_api_show_one_use_petr_reply_t;
#endif

#ifndef _vl_api_defined_show_one_rloc_probe_state
#define _vl_api_defined_show_one_rloc_probe_state
typedef VL_API_PACKED(struct _vl_api_show_one_rloc_probe_state {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_rloc_probe_state_t;
#endif

#ifndef _vl_api_defined_show_one_rloc_probe_state_reply
#define _vl_api_defined_show_one_rloc_probe_state_reply
typedef VL_API_PACKED(struct _vl_api_show_one_rloc_probe_state_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 is_enabled;
}) vl_api_show_one_rloc_probe_state_reply_t;
#endif

#ifndef _vl_api_defined_one_rloc_probe_enable_disable
#define _vl_api_defined_one_rloc_probe_enable_disable
typedef VL_API_PACKED(struct _vl_api_one_rloc_probe_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_enabled;
}) vl_api_one_rloc_probe_enable_disable_t;
#endif

#ifndef _vl_api_defined_one_rloc_probe_enable_disable_reply
#define _vl_api_defined_one_rloc_probe_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_one_rloc_probe_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_rloc_probe_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_one_map_register_enable_disable
#define _vl_api_defined_one_map_register_enable_disable
typedef VL_API_PACKED(struct _vl_api_one_map_register_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_enabled;
}) vl_api_one_map_register_enable_disable_t;
#endif

#ifndef _vl_api_defined_one_map_register_enable_disable_reply
#define _vl_api_defined_one_map_register_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_one_map_register_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_map_register_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_show_one_map_register_state
#define _vl_api_defined_show_one_map_register_state
typedef VL_API_PACKED(struct _vl_api_show_one_map_register_state {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_map_register_state_t;
#endif

#ifndef _vl_api_defined_show_one_map_register_state_reply
#define _vl_api_defined_show_one_map_register_state_reply
typedef VL_API_PACKED(struct _vl_api_show_one_map_register_state_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 is_enabled;
}) vl_api_show_one_map_register_state_reply_t;
#endif

#ifndef _vl_api_defined_one_map_request_mode
#define _vl_api_defined_one_map_request_mode
typedef VL_API_PACKED(struct _vl_api_one_map_request_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 mode;
}) vl_api_one_map_request_mode_t;
#endif

#ifndef _vl_api_defined_one_map_request_mode_reply
#define _vl_api_defined_one_map_request_mode_reply
typedef VL_API_PACKED(struct _vl_api_one_map_request_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_map_request_mode_reply_t;
#endif

#ifndef _vl_api_defined_show_one_map_request_mode
#define _vl_api_defined_show_one_map_request_mode
typedef VL_API_PACKED(struct _vl_api_show_one_map_request_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_map_request_mode_t;
#endif

#ifndef _vl_api_defined_show_one_map_request_mode_reply
#define _vl_api_defined_show_one_map_request_mode_reply
typedef VL_API_PACKED(struct _vl_api_show_one_map_request_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 mode;
}) vl_api_show_one_map_request_mode_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_remote_mapping
#define _vl_api_defined_one_add_del_remote_mapping
typedef VL_API_PACKED(struct _vl_api_one_add_del_remote_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_src_dst;
    u8 del_all;
    u32 vni;
    u8 action;
    u8 eid_type;
    u8 eid[16];
    u8 eid_len;
    u8 seid[16];
    u8 seid_len;
    u32 rloc_num;
    vl_api_one_remote_locator_t rlocs[0];
}) vl_api_one_add_del_remote_mapping_t;
#endif

#ifndef _vl_api_defined_one_add_del_remote_mapping_reply
#define _vl_api_defined_one_add_del_remote_mapping_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_remote_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_remote_mapping_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_l2_arp_entry
#define _vl_api_defined_one_add_del_l2_arp_entry
typedef VL_API_PACKED(struct _vl_api_one_add_del_l2_arp_entry {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 mac[6];
    u32 bd;
    u32 ip4;
}) vl_api_one_add_del_l2_arp_entry_t;
#endif

#ifndef _vl_api_defined_one_add_del_l2_arp_entry_reply
#define _vl_api_defined_one_add_del_l2_arp_entry_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_l2_arp_entry_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_l2_arp_entry_reply_t;
#endif

#ifndef _vl_api_defined_one_l2_arp_entries_get
#define _vl_api_defined_one_l2_arp_entries_get
typedef VL_API_PACKED(struct _vl_api_one_l2_arp_entries_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd;
}) vl_api_one_l2_arp_entries_get_t;
#endif

#ifndef _vl_api_defined_one_l2_arp_entries_get_reply
#define _vl_api_defined_one_l2_arp_entries_get_reply
typedef VL_API_PACKED(struct _vl_api_one_l2_arp_entries_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_one_l2_arp_entry_t entries[0];
}) vl_api_one_l2_arp_entries_get_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_ndp_entry
#define _vl_api_defined_one_add_del_ndp_entry
typedef VL_API_PACKED(struct _vl_api_one_add_del_ndp_entry {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 mac[6];
    u32 bd;
    u8 ip6[16];
}) vl_api_one_add_del_ndp_entry_t;
#endif

#ifndef _vl_api_defined_one_add_del_ndp_entry_reply
#define _vl_api_defined_one_add_del_ndp_entry_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_ndp_entry_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_ndp_entry_reply_t;
#endif

#ifndef _vl_api_defined_one_ndp_entries_get
#define _vl_api_defined_one_ndp_entries_get
typedef VL_API_PACKED(struct _vl_api_one_ndp_entries_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bd;
}) vl_api_one_ndp_entries_get_t;
#endif

#ifndef _vl_api_defined_one_ndp_entries_get_reply
#define _vl_api_defined_one_ndp_entries_get_reply
typedef VL_API_PACKED(struct _vl_api_one_ndp_entries_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_one_ndp_entry_t entries[0];
}) vl_api_one_ndp_entries_get_reply_t;
#endif

#ifndef _vl_api_defined_one_set_transport_protocol
#define _vl_api_defined_one_set_transport_protocol
typedef VL_API_PACKED(struct _vl_api_one_set_transport_protocol {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 protocol;
}) vl_api_one_set_transport_protocol_t;
#endif

#ifndef _vl_api_defined_one_set_transport_protocol_reply
#define _vl_api_defined_one_set_transport_protocol_reply
typedef VL_API_PACKED(struct _vl_api_one_set_transport_protocol_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_set_transport_protocol_reply_t;
#endif

#ifndef _vl_api_defined_one_get_transport_protocol
#define _vl_api_defined_one_get_transport_protocol
typedef VL_API_PACKED(struct _vl_api_one_get_transport_protocol {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_get_transport_protocol_t;
#endif

#ifndef _vl_api_defined_one_get_transport_protocol_reply
#define _vl_api_defined_one_get_transport_protocol_reply
typedef VL_API_PACKED(struct _vl_api_one_get_transport_protocol_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 protocol;
}) vl_api_one_get_transport_protocol_reply_t;
#endif

#ifndef _vl_api_defined_one_ndp_bd_get
#define _vl_api_defined_one_ndp_bd_get
typedef VL_API_PACKED(struct _vl_api_one_ndp_bd_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_ndp_bd_get_t;
#endif

#ifndef _vl_api_defined_one_ndp_bd_get_reply
#define _vl_api_defined_one_ndp_bd_get_reply
typedef VL_API_PACKED(struct _vl_api_one_ndp_bd_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    u32 bridge_domains[0];
}) vl_api_one_ndp_bd_get_reply_t;
#endif

#ifndef _vl_api_defined_one_l2_arp_bd_get
#define _vl_api_defined_one_l2_arp_bd_get
typedef VL_API_PACKED(struct _vl_api_one_l2_arp_bd_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_l2_arp_bd_get_t;
#endif

#ifndef _vl_api_defined_one_l2_arp_bd_get_reply
#define _vl_api_defined_one_l2_arp_bd_get_reply
typedef VL_API_PACKED(struct _vl_api_one_l2_arp_bd_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    u32 bridge_domains[0];
}) vl_api_one_l2_arp_bd_get_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_adjacency
#define _vl_api_defined_one_add_del_adjacency
typedef VL_API_PACKED(struct _vl_api_one_add_del_adjacency {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 vni;
    u8 eid_type;
    u8 reid[16];
    u8 leid[16];
    u8 reid_len;
    u8 leid_len;
}) vl_api_one_add_del_adjacency_t;
#endif

#ifndef _vl_api_defined_one_add_del_adjacency_reply
#define _vl_api_defined_one_add_del_adjacency_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_adjacency_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_adjacency_reply_t;
#endif

#ifndef _vl_api_defined_one_add_del_map_request_itr_rlocs
#define _vl_api_defined_one_add_del_map_request_itr_rlocs
typedef VL_API_PACKED(struct _vl_api_one_add_del_map_request_itr_rlocs {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 locator_set_name[64];
}) vl_api_one_add_del_map_request_itr_rlocs_t;
#endif

#ifndef _vl_api_defined_one_add_del_map_request_itr_rlocs_reply
#define _vl_api_defined_one_add_del_map_request_itr_rlocs_reply
typedef VL_API_PACKED(struct _vl_api_one_add_del_map_request_itr_rlocs_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_add_del_map_request_itr_rlocs_reply_t;
#endif

#ifndef _vl_api_defined_one_eid_table_add_del_map
#define _vl_api_defined_one_eid_table_add_del_map
typedef VL_API_PACKED(struct _vl_api_one_eid_table_add_del_map {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 vni;
    u32 dp_table;
    u8 is_l2;
}) vl_api_one_eid_table_add_del_map_t;
#endif

#ifndef _vl_api_defined_one_eid_table_add_del_map_reply
#define _vl_api_defined_one_eid_table_add_del_map_reply
typedef VL_API_PACKED(struct _vl_api_one_eid_table_add_del_map_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_eid_table_add_del_map_reply_t;
#endif

#ifndef _vl_api_defined_one_locator_dump
#define _vl_api_defined_one_locator_dump
typedef VL_API_PACKED(struct _vl_api_one_locator_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 ls_index;
    u8 ls_name[64];
    u8 is_index_set;
}) vl_api_one_locator_dump_t;
#endif

#ifndef _vl_api_defined_one_locator_details
#define _vl_api_defined_one_locator_details
typedef VL_API_PACKED(struct _vl_api_one_locator_details {
    u16 _vl_msg_id;
    u32 context;
    u8 local;
    u32 sw_if_index;
    u8 is_ipv6;
    u8 ip_address[16];
    u8 priority;
    u8 weight;
}) vl_api_one_locator_details_t;
#endif

#ifndef _vl_api_defined_one_locator_set_details
#define _vl_api_defined_one_locator_set_details
typedef VL_API_PACKED(struct _vl_api_one_locator_set_details {
    u16 _vl_msg_id;
    u32 context;
    u32 ls_index;
    u8 ls_name[64];
}) vl_api_one_locator_set_details_t;
#endif

#ifndef _vl_api_defined_one_locator_set_dump
#define _vl_api_defined_one_locator_set_dump
typedef VL_API_PACKED(struct _vl_api_one_locator_set_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 filter;
}) vl_api_one_locator_set_dump_t;
#endif

#ifndef _vl_api_defined_one_eid_table_details
#define _vl_api_defined_one_eid_table_details
typedef VL_API_PACKED(struct _vl_api_one_eid_table_details {
    u16 _vl_msg_id;
    u32 context;
    u32 locator_set_index;
    u8 action;
    u8 is_local;
    u8 eid_type;
    u8 is_src_dst;
    u32 vni;
    u8 eid[16];
    u8 eid_prefix_len;
    u8 seid[16];
    u8 seid_prefix_len;
    u32 ttl;
    u8 authoritative;
    u16 key_id;
    u8 key[64];
}) vl_api_one_eid_table_details_t;
#endif

#ifndef _vl_api_defined_one_eid_table_dump
#define _vl_api_defined_one_eid_table_dump
typedef VL_API_PACKED(struct _vl_api_one_eid_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 eid_set;
    u8 prefix_length;
    u32 vni;
    u8 eid_type;
    u8 eid[16];
    u8 filter;
}) vl_api_one_eid_table_dump_t;
#endif

#ifndef _vl_api_defined_one_adjacencies_get_reply
#define _vl_api_defined_one_adjacencies_get_reply
typedef VL_API_PACKED(struct _vl_api_one_adjacencies_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_one_adjacency_t adjacencies[0];
}) vl_api_one_adjacencies_get_reply_t;
#endif

#ifndef _vl_api_defined_one_adjacencies_get
#define _vl_api_defined_one_adjacencies_get
typedef VL_API_PACKED(struct _vl_api_one_adjacencies_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vni;
}) vl_api_one_adjacencies_get_t;
#endif

#ifndef _vl_api_defined_one_eid_table_map_details
#define _vl_api_defined_one_eid_table_map_details
typedef VL_API_PACKED(struct _vl_api_one_eid_table_map_details {
    u16 _vl_msg_id;
    u32 context;
    u32 vni;
    u32 dp_table;
}) vl_api_one_eid_table_map_details_t;
#endif

#ifndef _vl_api_defined_one_eid_table_map_dump
#define _vl_api_defined_one_eid_table_map_dump
typedef VL_API_PACKED(struct _vl_api_one_eid_table_map_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_l2;
}) vl_api_one_eid_table_map_dump_t;
#endif

#ifndef _vl_api_defined_one_eid_table_vni_dump
#define _vl_api_defined_one_eid_table_vni_dump
typedef VL_API_PACKED(struct _vl_api_one_eid_table_vni_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_eid_table_vni_dump_t;
#endif

#ifndef _vl_api_defined_one_eid_table_vni_details
#define _vl_api_defined_one_eid_table_vni_details
typedef VL_API_PACKED(struct _vl_api_one_eid_table_vni_details {
    u16 _vl_msg_id;
    u32 context;
    u32 vni;
}) vl_api_one_eid_table_vni_details_t;
#endif

#ifndef _vl_api_defined_one_map_resolver_details
#define _vl_api_defined_one_map_resolver_details
typedef VL_API_PACKED(struct _vl_api_one_map_resolver_details {
    u16 _vl_msg_id;
    u32 context;
    u8 is_ipv6;
    u8 ip_address[16];
}) vl_api_one_map_resolver_details_t;
#endif

#ifndef _vl_api_defined_one_map_resolver_dump
#define _vl_api_defined_one_map_resolver_dump
typedef VL_API_PACKED(struct _vl_api_one_map_resolver_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_map_resolver_dump_t;
#endif

#ifndef _vl_api_defined_one_map_server_details
#define _vl_api_defined_one_map_server_details
typedef VL_API_PACKED(struct _vl_api_one_map_server_details {
    u16 _vl_msg_id;
    u32 context;
    u8 is_ipv6;
    u8 ip_address[16];
}) vl_api_one_map_server_details_t;
#endif

#ifndef _vl_api_defined_one_map_server_dump
#define _vl_api_defined_one_map_server_dump
typedef VL_API_PACKED(struct _vl_api_one_map_server_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_map_server_dump_t;
#endif

#ifndef _vl_api_defined_show_one_status
#define _vl_api_defined_show_one_status
typedef VL_API_PACKED(struct _vl_api_show_one_status {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_status_t;
#endif

#ifndef _vl_api_defined_show_one_status_reply
#define _vl_api_defined_show_one_status_reply
typedef VL_API_PACKED(struct _vl_api_show_one_status_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 feature_status;
    u8 gpe_status;
}) vl_api_show_one_status_reply_t;
#endif

#ifndef _vl_api_defined_one_get_map_request_itr_rlocs
#define _vl_api_defined_one_get_map_request_itr_rlocs
typedef VL_API_PACKED(struct _vl_api_one_get_map_request_itr_rlocs {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_get_map_request_itr_rlocs_t;
#endif

#ifndef _vl_api_defined_one_get_map_request_itr_rlocs_reply
#define _vl_api_defined_one_get_map_request_itr_rlocs_reply
typedef VL_API_PACKED(struct _vl_api_one_get_map_request_itr_rlocs_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 locator_set_name[64];
}) vl_api_one_get_map_request_itr_rlocs_reply_t;
#endif

#ifndef _vl_api_defined_show_one_nsh_mapping
#define _vl_api_defined_show_one_nsh_mapping
typedef VL_API_PACKED(struct _vl_api_show_one_nsh_mapping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_nsh_mapping_t;
#endif

#ifndef _vl_api_defined_show_one_nsh_mapping_reply
#define _vl_api_defined_show_one_nsh_mapping_reply
typedef VL_API_PACKED(struct _vl_api_show_one_nsh_mapping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 is_set;
    u8 locator_set_name[64];
}) vl_api_show_one_nsh_mapping_reply_t;
#endif

#ifndef _vl_api_defined_show_one_pitr
#define _vl_api_defined_show_one_pitr
typedef VL_API_PACKED(struct _vl_api_show_one_pitr {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_pitr_t;
#endif

#ifndef _vl_api_defined_show_one_pitr_reply
#define _vl_api_defined_show_one_pitr_reply
typedef VL_API_PACKED(struct _vl_api_show_one_pitr_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 status;
    u8 locator_set_name[64];
}) vl_api_show_one_pitr_reply_t;
#endif

#ifndef _vl_api_defined_one_stats_dump
#define _vl_api_defined_one_stats_dump
typedef VL_API_PACKED(struct _vl_api_one_stats_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_stats_dump_t;
#endif

#ifndef _vl_api_defined_one_stats_details
#define _vl_api_defined_one_stats_details
typedef VL_API_PACKED(struct _vl_api_one_stats_details {
    u16 _vl_msg_id;
    u32 context;
    u32 vni;
    u8 eid_type;
    u8 deid[16];
    u8 seid[16];
    u8 deid_pref_len;
    u8 seid_pref_len;
    u8 is_ip4;
    u8 rloc[16];
    u8 lloc[16];
    u32 pkt_count;
    u32 bytes;
}) vl_api_one_stats_details_t;
#endif

#ifndef _vl_api_defined_one_stats_flush
#define _vl_api_defined_one_stats_flush
typedef VL_API_PACKED(struct _vl_api_one_stats_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_stats_flush_t;
#endif

#ifndef _vl_api_defined_one_stats_flush_reply
#define _vl_api_defined_one_stats_flush_reply
typedef VL_API_PACKED(struct _vl_api_one_stats_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_stats_flush_reply_t;
#endif

#ifndef _vl_api_defined_one_stats_enable_disable
#define _vl_api_defined_one_stats_enable_disable
typedef VL_API_PACKED(struct _vl_api_one_stats_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_en;
}) vl_api_one_stats_enable_disable_t;
#endif

#ifndef _vl_api_defined_one_stats_enable_disable_reply
#define _vl_api_defined_one_stats_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_one_stats_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_stats_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_show_one_stats_enable_disable
#define _vl_api_defined_show_one_stats_enable_disable
typedef VL_API_PACKED(struct _vl_api_show_one_stats_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_stats_enable_disable_t;
#endif

#ifndef _vl_api_defined_show_one_stats_enable_disable_reply
#define _vl_api_defined_show_one_stats_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_show_one_stats_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 is_en;
}) vl_api_show_one_stats_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_one_map_register_fallback_threshold
#define _vl_api_defined_one_map_register_fallback_threshold
typedef VL_API_PACKED(struct _vl_api_one_map_register_fallback_threshold {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 value;
}) vl_api_one_map_register_fallback_threshold_t;
#endif

#ifndef _vl_api_defined_one_map_register_fallback_threshold_reply
#define _vl_api_defined_one_map_register_fallback_threshold_reply
typedef VL_API_PACKED(struct _vl_api_one_map_register_fallback_threshold_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_map_register_fallback_threshold_reply_t;
#endif

#ifndef _vl_api_defined_show_one_map_register_fallback_threshold
#define _vl_api_defined_show_one_map_register_fallback_threshold
typedef VL_API_PACKED(struct _vl_api_show_one_map_register_fallback_threshold {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_show_one_map_register_fallback_threshold_t;
#endif

#ifndef _vl_api_defined_show_one_map_register_fallback_threshold_reply
#define _vl_api_defined_show_one_map_register_fallback_threshold_reply
typedef VL_API_PACKED(struct _vl_api_show_one_map_register_fallback_threshold_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 value;
}) vl_api_show_one_map_register_fallback_threshold_reply_t;
#endif

#ifndef _vl_api_defined_one_enable_disable_xtr_mode
#define _vl_api_defined_one_enable_disable_xtr_mode
typedef VL_API_PACKED(struct _vl_api_one_enable_disable_xtr_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_en;
}) vl_api_one_enable_disable_xtr_mode_t;
#endif

#ifndef _vl_api_defined_one_enable_disable_xtr_mode_reply
#define _vl_api_defined_one_enable_disable_xtr_mode_reply
typedef VL_API_PACKED(struct _vl_api_one_enable_disable_xtr_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_enable_disable_xtr_mode_reply_t;
#endif

#ifndef _vl_api_defined_one_show_xtr_mode
#define _vl_api_defined_one_show_xtr_mode
typedef VL_API_PACKED(struct _vl_api_one_show_xtr_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_show_xtr_mode_t;
#endif

#ifndef _vl_api_defined_one_show_xtr_mode_reply
#define _vl_api_defined_one_show_xtr_mode_reply
typedef VL_API_PACKED(struct _vl_api_one_show_xtr_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 is_en;
}) vl_api_one_show_xtr_mode_reply_t;
#endif

#ifndef _vl_api_defined_one_enable_disable_petr_mode
#define _vl_api_defined_one_enable_disable_petr_mode
typedef VL_API_PACKED(struct _vl_api_one_enable_disable_petr_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_en;
}) vl_api_one_enable_disable_petr_mode_t;
#endif

#ifndef _vl_api_defined_one_enable_disable_petr_mode_reply
#define _vl_api_defined_one_enable_disable_petr_mode_reply
typedef VL_API_PACKED(struct _vl_api_one_enable_disable_petr_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_enable_disable_petr_mode_reply_t;
#endif

#ifndef _vl_api_defined_one_show_petr_mode
#define _vl_api_defined_one_show_petr_mode
typedef VL_API_PACKED(struct _vl_api_one_show_petr_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_show_petr_mode_t;
#endif

#ifndef _vl_api_defined_one_show_petr_mode_reply
#define _vl_api_defined_one_show_petr_mode_reply
typedef VL_API_PACKED(struct _vl_api_one_show_petr_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 is_en;
}) vl_api_one_show_petr_mode_reply_t;
#endif

#ifndef _vl_api_defined_one_enable_disable_pitr_mode
#define _vl_api_defined_one_enable_disable_pitr_mode
typedef VL_API_PACKED(struct _vl_api_one_enable_disable_pitr_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_en;
}) vl_api_one_enable_disable_pitr_mode_t;
#endif

#ifndef _vl_api_defined_one_enable_disable_pitr_mode_reply
#define _vl_api_defined_one_enable_disable_pitr_mode_reply
typedef VL_API_PACKED(struct _vl_api_one_enable_disable_pitr_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_one_enable_disable_pitr_mode_reply_t;
#endif

#ifndef _vl_api_defined_one_show_pitr_mode
#define _vl_api_defined_one_show_pitr_mode
typedef VL_API_PACKED(struct _vl_api_one_show_pitr_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_one_show_pitr_mode_t;
#endif

#ifndef _vl_api_defined_one_show_pitr_mode_reply
#define _vl_api_defined_one_show_pitr_mode_reply
typedef VL_API_PACKED(struct _vl_api_one_show_pitr_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 is_en;
}) vl_api_one_show_pitr_mode_reply_t;
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

/***** manual: vl_api_one_local_locator_t_print  *****/

/***** manual: vl_api_one_remote_locator_t_print  *****/

/***** manual: vl_api_one_l2_arp_entry_t_print  *****/

/***** manual: vl_api_one_ndp_entry_t_print  *****/

/***** manual: vl_api_one_adjacency_t_print  *****/

/***** manual: vl_api_one_add_del_locator_set_t_print  *****/

#ifndef _vl_api_defined_one_add_del_locator_set_reply_t_print
#define _vl_api_defined_one_add_del_locator_set_reply_t_print
static inline void *vl_api_one_add_del_locator_set_reply_t_print (vl_api_one_add_del_locator_set_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_locator_set_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "ls_index: %u\n", a->ls_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_locator_t_print
#define _vl_api_defined_one_add_del_locator_t_print
static inline void *vl_api_one_add_del_locator_t_print (vl_api_one_add_del_locator_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_locator_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "priority: %u\n", a->priority);
    vl_print(handle, "weight: %u\n", a->weight);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_locator_reply_t_print
#define _vl_api_defined_one_add_del_locator_reply_t_print
static inline void *vl_api_one_add_del_locator_reply_t_print (vl_api_one_add_del_locator_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_locator_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_local_eid_t_print
#define _vl_api_defined_one_add_del_local_eid_t_print
static inline void *vl_api_one_add_del_local_eid_t_print (vl_api_one_add_del_local_eid_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_local_eid_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "eid_type: %u\n", a->eid_type);
    vl_print(handle, "prefix_len: %u\n", a->prefix_len);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "key_id: %u\n", a->key_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_local_eid_reply_t_print
#define _vl_api_defined_one_add_del_local_eid_reply_t_print
static inline void *vl_api_one_add_del_local_eid_reply_t_print (vl_api_one_add_del_local_eid_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_local_eid_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_register_set_ttl_t_print
#define _vl_api_defined_one_map_register_set_ttl_t_print
static inline void *vl_api_one_map_register_set_ttl_t_print (vl_api_one_map_register_set_ttl_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_register_set_ttl_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ttl: %u\n", a->ttl);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_register_set_ttl_reply_t_print
#define _vl_api_defined_one_map_register_set_ttl_reply_t_print
static inline void *vl_api_one_map_register_set_ttl_reply_t_print (vl_api_one_map_register_set_ttl_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_register_set_ttl_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_register_ttl_t_print
#define _vl_api_defined_show_one_map_register_ttl_t_print
static inline void *vl_api_show_one_map_register_ttl_t_print (vl_api_show_one_map_register_ttl_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_register_ttl_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_register_ttl_reply_t_print
#define _vl_api_defined_show_one_map_register_ttl_reply_t_print
static inline void *vl_api_show_one_map_register_ttl_reply_t_print (vl_api_show_one_map_register_ttl_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_register_ttl_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "ttl: %u\n", a->ttl);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_map_server_t_print
#define _vl_api_defined_one_add_del_map_server_t_print
static inline void *vl_api_one_add_del_map_server_t_print (vl_api_one_add_del_map_server_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_map_server_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_map_server_reply_t_print
#define _vl_api_defined_one_add_del_map_server_reply_t_print
static inline void *vl_api_one_add_del_map_server_reply_t_print (vl_api_one_add_del_map_server_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_map_server_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_map_resolver_t_print
#define _vl_api_defined_one_add_del_map_resolver_t_print
static inline void *vl_api_one_add_del_map_resolver_t_print (vl_api_one_add_del_map_resolver_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_map_resolver_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_map_resolver_reply_t_print
#define _vl_api_defined_one_add_del_map_resolver_reply_t_print
static inline void *vl_api_one_add_del_map_resolver_reply_t_print (vl_api_one_add_del_map_resolver_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_map_resolver_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_t_print
#define _vl_api_defined_one_enable_disable_t_print
static inline void *vl_api_one_enable_disable_t_print (vl_api_one_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_reply_t_print
#define _vl_api_defined_one_enable_disable_reply_t_print
static inline void *vl_api_one_enable_disable_reply_t_print (vl_api_one_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_nsh_set_locator_set_t_print
#define _vl_api_defined_one_nsh_set_locator_set_t_print
static inline void *vl_api_one_nsh_set_locator_set_t_print (vl_api_one_nsh_set_locator_set_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_nsh_set_locator_set_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_nsh_set_locator_set_reply_t_print
#define _vl_api_defined_one_nsh_set_locator_set_reply_t_print
static inline void *vl_api_one_nsh_set_locator_set_reply_t_print (vl_api_one_nsh_set_locator_set_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_nsh_set_locator_set_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_pitr_set_locator_set_t_print
#define _vl_api_defined_one_pitr_set_locator_set_t_print
static inline void *vl_api_one_pitr_set_locator_set_t_print (vl_api_one_pitr_set_locator_set_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_pitr_set_locator_set_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_pitr_set_locator_set_reply_t_print
#define _vl_api_defined_one_pitr_set_locator_set_reply_t_print
static inline void *vl_api_one_pitr_set_locator_set_reply_t_print (vl_api_one_pitr_set_locator_set_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_pitr_set_locator_set_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_use_petr_t_print
#define _vl_api_defined_one_use_petr_t_print
static inline void *vl_api_one_use_petr_t_print (vl_api_one_use_petr_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_use_petr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_use_petr_reply_t_print
#define _vl_api_defined_one_use_petr_reply_t_print
static inline void *vl_api_one_use_petr_reply_t_print (vl_api_one_use_petr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_use_petr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_use_petr_t_print
#define _vl_api_defined_show_one_use_petr_t_print
static inline void *vl_api_show_one_use_petr_t_print (vl_api_show_one_use_petr_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_use_petr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_use_petr_reply_t_print
#define _vl_api_defined_show_one_use_petr_reply_t_print
static inline void *vl_api_show_one_use_petr_reply_t_print (vl_api_show_one_use_petr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_use_petr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "status: %u\n", a->status);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_rloc_probe_state_t_print
#define _vl_api_defined_show_one_rloc_probe_state_t_print
static inline void *vl_api_show_one_rloc_probe_state_t_print (vl_api_show_one_rloc_probe_state_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_rloc_probe_state_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_rloc_probe_state_reply_t_print
#define _vl_api_defined_show_one_rloc_probe_state_reply_t_print
static inline void *vl_api_show_one_rloc_probe_state_reply_t_print (vl_api_show_one_rloc_probe_state_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_rloc_probe_state_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "is_enabled: %u\n", a->is_enabled);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_rloc_probe_enable_disable_t_print
#define _vl_api_defined_one_rloc_probe_enable_disable_t_print
static inline void *vl_api_one_rloc_probe_enable_disable_t_print (vl_api_one_rloc_probe_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_rloc_probe_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_enabled: %u\n", a->is_enabled);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_rloc_probe_enable_disable_reply_t_print
#define _vl_api_defined_one_rloc_probe_enable_disable_reply_t_print
static inline void *vl_api_one_rloc_probe_enable_disable_reply_t_print (vl_api_one_rloc_probe_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_rloc_probe_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_register_enable_disable_t_print
#define _vl_api_defined_one_map_register_enable_disable_t_print
static inline void *vl_api_one_map_register_enable_disable_t_print (vl_api_one_map_register_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_register_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_enabled: %u\n", a->is_enabled);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_register_enable_disable_reply_t_print
#define _vl_api_defined_one_map_register_enable_disable_reply_t_print
static inline void *vl_api_one_map_register_enable_disable_reply_t_print (vl_api_one_map_register_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_register_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_register_state_t_print
#define _vl_api_defined_show_one_map_register_state_t_print
static inline void *vl_api_show_one_map_register_state_t_print (vl_api_show_one_map_register_state_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_register_state_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_register_state_reply_t_print
#define _vl_api_defined_show_one_map_register_state_reply_t_print
static inline void *vl_api_show_one_map_register_state_reply_t_print (vl_api_show_one_map_register_state_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_register_state_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "is_enabled: %u\n", a->is_enabled);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_request_mode_t_print
#define _vl_api_defined_one_map_request_mode_t_print
static inline void *vl_api_one_map_request_mode_t_print (vl_api_one_map_request_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_request_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "mode: %u\n", a->mode);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_request_mode_reply_t_print
#define _vl_api_defined_one_map_request_mode_reply_t_print
static inline void *vl_api_one_map_request_mode_reply_t_print (vl_api_one_map_request_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_request_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_request_mode_t_print
#define _vl_api_defined_show_one_map_request_mode_t_print
static inline void *vl_api_show_one_map_request_mode_t_print (vl_api_show_one_map_request_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_request_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_request_mode_reply_t_print
#define _vl_api_defined_show_one_map_request_mode_reply_t_print
static inline void *vl_api_show_one_map_request_mode_reply_t_print (vl_api_show_one_map_request_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_request_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "mode: %u\n", a->mode);
    return handle;
}

#endif

/***** manual: vl_api_one_add_del_remote_mapping_t_print  *****/

#ifndef _vl_api_defined_one_add_del_remote_mapping_reply_t_print
#define _vl_api_defined_one_add_del_remote_mapping_reply_t_print
static inline void *vl_api_one_add_del_remote_mapping_reply_t_print (vl_api_one_add_del_remote_mapping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_remote_mapping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_l2_arp_entry_t_print
#define _vl_api_defined_one_add_del_l2_arp_entry_t_print
static inline void *vl_api_one_add_del_l2_arp_entry_t_print (vl_api_one_add_del_l2_arp_entry_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_l2_arp_entry_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "bd: %u\n", a->bd);
    vl_print(handle, "ip4: %u\n", a->ip4);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_l2_arp_entry_reply_t_print
#define _vl_api_defined_one_add_del_l2_arp_entry_reply_t_print
static inline void *vl_api_one_add_del_l2_arp_entry_reply_t_print (vl_api_one_add_del_l2_arp_entry_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_l2_arp_entry_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_l2_arp_entries_get_t_print
#define _vl_api_defined_one_l2_arp_entries_get_t_print
static inline void *vl_api_one_l2_arp_entries_get_t_print (vl_api_one_l2_arp_entries_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_l2_arp_entries_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd: %u\n", a->bd);
    return handle;
}

#endif

/***** manual: vl_api_one_l2_arp_entries_get_reply_t_print  *****/

#ifndef _vl_api_defined_one_add_del_ndp_entry_t_print
#define _vl_api_defined_one_add_del_ndp_entry_t_print
static inline void *vl_api_one_add_del_ndp_entry_t_print (vl_api_one_add_del_ndp_entry_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_ndp_entry_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "bd: %u\n", a->bd);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_ndp_entry_reply_t_print
#define _vl_api_defined_one_add_del_ndp_entry_reply_t_print
static inline void *vl_api_one_add_del_ndp_entry_reply_t_print (vl_api_one_add_del_ndp_entry_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_ndp_entry_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_ndp_entries_get_t_print
#define _vl_api_defined_one_ndp_entries_get_t_print
static inline void *vl_api_one_ndp_entries_get_t_print (vl_api_one_ndp_entries_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_ndp_entries_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bd: %u\n", a->bd);
    return handle;
}

#endif

/***** manual: vl_api_one_ndp_entries_get_reply_t_print  *****/

#ifndef _vl_api_defined_one_set_transport_protocol_t_print
#define _vl_api_defined_one_set_transport_protocol_t_print
static inline void *vl_api_one_set_transport_protocol_t_print (vl_api_one_set_transport_protocol_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_set_transport_protocol_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_set_transport_protocol_reply_t_print
#define _vl_api_defined_one_set_transport_protocol_reply_t_print
static inline void *vl_api_one_set_transport_protocol_reply_t_print (vl_api_one_set_transport_protocol_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_set_transport_protocol_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_get_transport_protocol_t_print
#define _vl_api_defined_one_get_transport_protocol_t_print
static inline void *vl_api_one_get_transport_protocol_t_print (vl_api_one_get_transport_protocol_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_get_transport_protocol_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_get_transport_protocol_reply_t_print
#define _vl_api_defined_one_get_transport_protocol_reply_t_print
static inline void *vl_api_one_get_transport_protocol_reply_t_print (vl_api_one_get_transport_protocol_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_get_transport_protocol_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "protocol: %u\n", a->protocol);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_ndp_bd_get_t_print
#define _vl_api_defined_one_ndp_bd_get_t_print
static inline void *vl_api_one_ndp_bd_get_t_print (vl_api_one_ndp_bd_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_ndp_bd_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_one_ndp_bd_get_reply_t_print  *****/

#ifndef _vl_api_defined_one_l2_arp_bd_get_t_print
#define _vl_api_defined_one_l2_arp_bd_get_t_print
static inline void *vl_api_one_l2_arp_bd_get_t_print (vl_api_one_l2_arp_bd_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_l2_arp_bd_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_one_l2_arp_bd_get_reply_t_print  *****/

#ifndef _vl_api_defined_one_add_del_adjacency_t_print
#define _vl_api_defined_one_add_del_adjacency_t_print
static inline void *vl_api_one_add_del_adjacency_t_print (vl_api_one_add_del_adjacency_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_adjacency_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "eid_type: %u\n", a->eid_type);
    vl_print(handle, "reid_len: %u\n", a->reid_len);
    vl_print(handle, "leid_len: %u\n", a->leid_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_adjacency_reply_t_print
#define _vl_api_defined_one_add_del_adjacency_reply_t_print
static inline void *vl_api_one_add_del_adjacency_reply_t_print (vl_api_one_add_del_adjacency_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_adjacency_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_map_request_itr_rlocs_t_print
#define _vl_api_defined_one_add_del_map_request_itr_rlocs_t_print
static inline void *vl_api_one_add_del_map_request_itr_rlocs_t_print (vl_api_one_add_del_map_request_itr_rlocs_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_map_request_itr_rlocs_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_add_del_map_request_itr_rlocs_reply_t_print
#define _vl_api_defined_one_add_del_map_request_itr_rlocs_reply_t_print
static inline void *vl_api_one_add_del_map_request_itr_rlocs_reply_t_print (vl_api_one_add_del_map_request_itr_rlocs_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_add_del_map_request_itr_rlocs_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_add_del_map_t_print
#define _vl_api_defined_one_eid_table_add_del_map_t_print
static inline void *vl_api_one_eid_table_add_del_map_t_print (vl_api_one_eid_table_add_del_map_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_add_del_map_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "dp_table: %u\n", a->dp_table);
    vl_print(handle, "is_l2: %u\n", a->is_l2);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_add_del_map_reply_t_print
#define _vl_api_defined_one_eid_table_add_del_map_reply_t_print
static inline void *vl_api_one_eid_table_add_del_map_reply_t_print (vl_api_one_eid_table_add_del_map_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_add_del_map_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_locator_dump_t_print
#define _vl_api_defined_one_locator_dump_t_print
static inline void *vl_api_one_locator_dump_t_print (vl_api_one_locator_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_locator_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ls_index: %u\n", a->ls_index);
    vl_print(handle, "is_index_set: %u\n", a->is_index_set);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_locator_details_t_print
#define _vl_api_defined_one_locator_details_t_print
static inline void *vl_api_one_locator_details_t_print (vl_api_one_locator_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_locator_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "local: %u\n", a->local);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "priority: %u\n", a->priority);
    vl_print(handle, "weight: %u\n", a->weight);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_locator_set_details_t_print
#define _vl_api_defined_one_locator_set_details_t_print
static inline void *vl_api_one_locator_set_details_t_print (vl_api_one_locator_set_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_locator_set_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ls_index: %u\n", a->ls_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_locator_set_dump_t_print
#define _vl_api_defined_one_locator_set_dump_t_print
static inline void *vl_api_one_locator_set_dump_t_print (vl_api_one_locator_set_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_locator_set_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "filter: %u\n", a->filter);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_details_t_print
#define _vl_api_defined_one_eid_table_details_t_print
static inline void *vl_api_one_eid_table_details_t_print (vl_api_one_eid_table_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "locator_set_index: %u\n", a->locator_set_index);
    vl_print(handle, "action: %u\n", a->action);
    vl_print(handle, "is_local: %u\n", a->is_local);
    vl_print(handle, "eid_type: %u\n", a->eid_type);
    vl_print(handle, "is_src_dst: %u\n", a->is_src_dst);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "eid_prefix_len: %u\n", a->eid_prefix_len);
    vl_print(handle, "seid_prefix_len: %u\n", a->seid_prefix_len);
    vl_print(handle, "ttl: %u\n", a->ttl);
    vl_print(handle, "authoritative: %u\n", a->authoritative);
    vl_print(handle, "key_id: %u\n", a->key_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_dump_t_print
#define _vl_api_defined_one_eid_table_dump_t_print
static inline void *vl_api_one_eid_table_dump_t_print (vl_api_one_eid_table_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "eid_set: %u\n", a->eid_set);
    vl_print(handle, "prefix_length: %u\n", a->prefix_length);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "eid_type: %u\n", a->eid_type);
    vl_print(handle, "filter: %u\n", a->filter);
    return handle;
}

#endif

/***** manual: vl_api_one_adjacencies_get_reply_t_print  *****/

#ifndef _vl_api_defined_one_adjacencies_get_t_print
#define _vl_api_defined_one_adjacencies_get_t_print
static inline void *vl_api_one_adjacencies_get_t_print (vl_api_one_adjacencies_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_adjacencies_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vni: %u\n", a->vni);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_map_details_t_print
#define _vl_api_defined_one_eid_table_map_details_t_print
static inline void *vl_api_one_eid_table_map_details_t_print (vl_api_one_eid_table_map_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_map_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "dp_table: %u\n", a->dp_table);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_map_dump_t_print
#define _vl_api_defined_one_eid_table_map_dump_t_print
static inline void *vl_api_one_eid_table_map_dump_t_print (vl_api_one_eid_table_map_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_map_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_l2: %u\n", a->is_l2);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_vni_dump_t_print
#define _vl_api_defined_one_eid_table_vni_dump_t_print
static inline void *vl_api_one_eid_table_vni_dump_t_print (vl_api_one_eid_table_vni_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_vni_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_eid_table_vni_details_t_print
#define _vl_api_defined_one_eid_table_vni_details_t_print
static inline void *vl_api_one_eid_table_vni_details_t_print (vl_api_one_eid_table_vni_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_eid_table_vni_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vni: %u\n", a->vni);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_resolver_details_t_print
#define _vl_api_defined_one_map_resolver_details_t_print
static inline void *vl_api_one_map_resolver_details_t_print (vl_api_one_map_resolver_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_resolver_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_resolver_dump_t_print
#define _vl_api_defined_one_map_resolver_dump_t_print
static inline void *vl_api_one_map_resolver_dump_t_print (vl_api_one_map_resolver_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_resolver_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_server_details_t_print
#define _vl_api_defined_one_map_server_details_t_print
static inline void *vl_api_one_map_server_details_t_print (vl_api_one_map_server_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_server_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_server_dump_t_print
#define _vl_api_defined_one_map_server_dump_t_print
static inline void *vl_api_one_map_server_dump_t_print (vl_api_one_map_server_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_server_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_status_t_print
#define _vl_api_defined_show_one_status_t_print
static inline void *vl_api_show_one_status_t_print (vl_api_show_one_status_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_status_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_status_reply_t_print
#define _vl_api_defined_show_one_status_reply_t_print
static inline void *vl_api_show_one_status_reply_t_print (vl_api_show_one_status_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_status_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "feature_status: %u\n", a->feature_status);
    vl_print(handle, "gpe_status: %u\n", a->gpe_status);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_get_map_request_itr_rlocs_t_print
#define _vl_api_defined_one_get_map_request_itr_rlocs_t_print
static inline void *vl_api_one_get_map_request_itr_rlocs_t_print (vl_api_one_get_map_request_itr_rlocs_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_get_map_request_itr_rlocs_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_get_map_request_itr_rlocs_reply_t_print
#define _vl_api_defined_one_get_map_request_itr_rlocs_reply_t_print
static inline void *vl_api_one_get_map_request_itr_rlocs_reply_t_print (vl_api_one_get_map_request_itr_rlocs_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_get_map_request_itr_rlocs_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_nsh_mapping_t_print
#define _vl_api_defined_show_one_nsh_mapping_t_print
static inline void *vl_api_show_one_nsh_mapping_t_print (vl_api_show_one_nsh_mapping_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_nsh_mapping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_nsh_mapping_reply_t_print
#define _vl_api_defined_show_one_nsh_mapping_reply_t_print
static inline void *vl_api_show_one_nsh_mapping_reply_t_print (vl_api_show_one_nsh_mapping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_nsh_mapping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "is_set: %u\n", a->is_set);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_pitr_t_print
#define _vl_api_defined_show_one_pitr_t_print
static inline void *vl_api_show_one_pitr_t_print (vl_api_show_one_pitr_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_pitr_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_pitr_reply_t_print
#define _vl_api_defined_show_one_pitr_reply_t_print
static inline void *vl_api_show_one_pitr_reply_t_print (vl_api_show_one_pitr_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_pitr_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "status: %u\n", a->status);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_stats_dump_t_print
#define _vl_api_defined_one_stats_dump_t_print
static inline void *vl_api_one_stats_dump_t_print (vl_api_one_stats_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_stats_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_stats_details_t_print
#define _vl_api_defined_one_stats_details_t_print
static inline void *vl_api_one_stats_details_t_print (vl_api_one_stats_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_stats_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "eid_type: %u\n", a->eid_type);
    vl_print(handle, "deid_pref_len: %u\n", a->deid_pref_len);
    vl_print(handle, "seid_pref_len: %u\n", a->seid_pref_len);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    vl_print(handle, "pkt_count: %u\n", a->pkt_count);
    vl_print(handle, "bytes: %u\n", a->bytes);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_stats_flush_t_print
#define _vl_api_defined_one_stats_flush_t_print
static inline void *vl_api_one_stats_flush_t_print (vl_api_one_stats_flush_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_stats_flush_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_stats_flush_reply_t_print
#define _vl_api_defined_one_stats_flush_reply_t_print
static inline void *vl_api_one_stats_flush_reply_t_print (vl_api_one_stats_flush_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_stats_flush_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_stats_enable_disable_t_print
#define _vl_api_defined_one_stats_enable_disable_t_print
static inline void *vl_api_one_stats_enable_disable_t_print (vl_api_one_stats_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_stats_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_stats_enable_disable_reply_t_print
#define _vl_api_defined_one_stats_enable_disable_reply_t_print
static inline void *vl_api_one_stats_enable_disable_reply_t_print (vl_api_one_stats_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_stats_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_stats_enable_disable_t_print
#define _vl_api_defined_show_one_stats_enable_disable_t_print
static inline void *vl_api_show_one_stats_enable_disable_t_print (vl_api_show_one_stats_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_stats_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_stats_enable_disable_reply_t_print
#define _vl_api_defined_show_one_stats_enable_disable_reply_t_print
static inline void *vl_api_show_one_stats_enable_disable_reply_t_print (vl_api_show_one_stats_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_stats_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_register_fallback_threshold_t_print
#define _vl_api_defined_one_map_register_fallback_threshold_t_print
static inline void *vl_api_one_map_register_fallback_threshold_t_print (vl_api_one_map_register_fallback_threshold_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_register_fallback_threshold_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "value: %u\n", a->value);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_map_register_fallback_threshold_reply_t_print
#define _vl_api_defined_one_map_register_fallback_threshold_reply_t_print
static inline void *vl_api_one_map_register_fallback_threshold_reply_t_print (vl_api_one_map_register_fallback_threshold_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_map_register_fallback_threshold_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_register_fallback_threshold_t_print
#define _vl_api_defined_show_one_map_register_fallback_threshold_t_print
static inline void *vl_api_show_one_map_register_fallback_threshold_t_print (vl_api_show_one_map_register_fallback_threshold_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_register_fallback_threshold_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_show_one_map_register_fallback_threshold_reply_t_print
#define _vl_api_defined_show_one_map_register_fallback_threshold_reply_t_print
static inline void *vl_api_show_one_map_register_fallback_threshold_reply_t_print (vl_api_show_one_map_register_fallback_threshold_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_show_one_map_register_fallback_threshold_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "value: %u\n", a->value);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_xtr_mode_t_print
#define _vl_api_defined_one_enable_disable_xtr_mode_t_print
static inline void *vl_api_one_enable_disable_xtr_mode_t_print (vl_api_one_enable_disable_xtr_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_xtr_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_xtr_mode_reply_t_print
#define _vl_api_defined_one_enable_disable_xtr_mode_reply_t_print
static inline void *vl_api_one_enable_disable_xtr_mode_reply_t_print (vl_api_one_enable_disable_xtr_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_xtr_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_show_xtr_mode_t_print
#define _vl_api_defined_one_show_xtr_mode_t_print
static inline void *vl_api_one_show_xtr_mode_t_print (vl_api_one_show_xtr_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_show_xtr_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_show_xtr_mode_reply_t_print
#define _vl_api_defined_one_show_xtr_mode_reply_t_print
static inline void *vl_api_one_show_xtr_mode_reply_t_print (vl_api_one_show_xtr_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_show_xtr_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_petr_mode_t_print
#define _vl_api_defined_one_enable_disable_petr_mode_t_print
static inline void *vl_api_one_enable_disable_petr_mode_t_print (vl_api_one_enable_disable_petr_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_petr_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_petr_mode_reply_t_print
#define _vl_api_defined_one_enable_disable_petr_mode_reply_t_print
static inline void *vl_api_one_enable_disable_petr_mode_reply_t_print (vl_api_one_enable_disable_petr_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_petr_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_show_petr_mode_t_print
#define _vl_api_defined_one_show_petr_mode_t_print
static inline void *vl_api_one_show_petr_mode_t_print (vl_api_one_show_petr_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_show_petr_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_show_petr_mode_reply_t_print
#define _vl_api_defined_one_show_petr_mode_reply_t_print
static inline void *vl_api_one_show_petr_mode_reply_t_print (vl_api_one_show_petr_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_show_petr_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_pitr_mode_t_print
#define _vl_api_defined_one_enable_disable_pitr_mode_t_print
static inline void *vl_api_one_enable_disable_pitr_mode_t_print (vl_api_one_enable_disable_pitr_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_pitr_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_enable_disable_pitr_mode_reply_t_print
#define _vl_api_defined_one_enable_disable_pitr_mode_reply_t_print
static inline void *vl_api_one_enable_disable_pitr_mode_reply_t_print (vl_api_one_enable_disable_pitr_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_enable_disable_pitr_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_show_pitr_mode_t_print
#define _vl_api_defined_one_show_pitr_mode_t_print
static inline void *vl_api_one_show_pitr_mode_t_print (vl_api_one_show_pitr_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_show_pitr_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_one_show_pitr_mode_reply_t_print
#define _vl_api_defined_one_show_pitr_mode_reply_t_print
static inline void *vl_api_one_show_pitr_mode_reply_t_print (vl_api_one_show_pitr_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_one_show_pitr_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "is_en: %u\n", a->is_en);
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

/***** manual: vl_api_one_local_locator_t_endian  *****/

/***** manual: vl_api_one_remote_locator_t_endian  *****/

/***** manual: vl_api_one_l2_arp_entry_t_endian  *****/

/***** manual: vl_api_one_ndp_entry_t_endian  *****/

/***** manual: vl_api_one_adjacency_t_endian  *****/

/***** manual: vl_api_one_add_del_locator_set_t_endian  *****/

#ifndef _vl_api_defined_one_add_del_locator_set_reply_t_endian
#define _vl_api_defined_one_add_del_locator_set_reply_t_endian
static inline void vl_api_one_add_del_locator_set_reply_t_endian (vl_api_one_add_del_locator_set_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
}

#endif

#ifndef _vl_api_defined_one_add_del_locator_t_endian
#define _vl_api_defined_one_add_del_locator_t_endian
static inline void vl_api_one_add_del_locator_t_endian (vl_api_one_add_del_locator_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->priority = a->priority (no-op) */
    /* a->weight = a->weight (no-op) */
}

#endif

#ifndef _vl_api_defined_one_add_del_locator_reply_t_endian
#define _vl_api_defined_one_add_del_locator_reply_t_endian
static inline void vl_api_one_add_del_locator_reply_t_endian (vl_api_one_add_del_locator_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_add_del_local_eid_t_endian
#define _vl_api_defined_one_add_del_local_eid_t_endian
static inline void vl_api_one_add_del_local_eid_t_endian (vl_api_one_add_del_local_eid_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->eid_type = a->eid_type (no-op) */
    /* a->prefix_len = a->prefix_len (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    a->key_id = clib_net_to_host_u16(a->key_id);
}

#endif

#ifndef _vl_api_defined_one_add_del_local_eid_reply_t_endian
#define _vl_api_defined_one_add_del_local_eid_reply_t_endian
static inline void vl_api_one_add_del_local_eid_reply_t_endian (vl_api_one_add_del_local_eid_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_map_register_set_ttl_t_endian
#define _vl_api_defined_one_map_register_set_ttl_t_endian
static inline void vl_api_one_map_register_set_ttl_t_endian (vl_api_one_map_register_set_ttl_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->ttl = clib_net_to_host_u32(a->ttl);
}

#endif

#ifndef _vl_api_defined_one_map_register_set_ttl_reply_t_endian
#define _vl_api_defined_one_map_register_set_ttl_reply_t_endian
static inline void vl_api_one_map_register_set_ttl_reply_t_endian (vl_api_one_map_register_set_ttl_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_one_map_register_ttl_t_endian
#define _vl_api_defined_show_one_map_register_ttl_t_endian
static inline void vl_api_show_one_map_register_ttl_t_endian (vl_api_show_one_map_register_ttl_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_map_register_ttl_reply_t_endian
#define _vl_api_defined_show_one_map_register_ttl_reply_t_endian
static inline void vl_api_show_one_map_register_ttl_reply_t_endian (vl_api_show_one_map_register_ttl_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->ttl = clib_net_to_host_u32(a->ttl);
}

#endif

#ifndef _vl_api_defined_one_add_del_map_server_t_endian
#define _vl_api_defined_one_add_del_map_server_t_endian
static inline void vl_api_one_add_del_map_server_t_endian (vl_api_one_add_del_map_server_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_one_add_del_map_server_reply_t_endian
#define _vl_api_defined_one_add_del_map_server_reply_t_endian
static inline void vl_api_one_add_del_map_server_reply_t_endian (vl_api_one_add_del_map_server_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_add_del_map_resolver_t_endian
#define _vl_api_defined_one_add_del_map_resolver_t_endian
static inline void vl_api_one_add_del_map_resolver_t_endian (vl_api_one_add_del_map_resolver_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_one_add_del_map_resolver_reply_t_endian
#define _vl_api_defined_one_add_del_map_resolver_reply_t_endian
static inline void vl_api_one_add_del_map_resolver_reply_t_endian (vl_api_one_add_del_map_resolver_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_enable_disable_t_endian
#define _vl_api_defined_one_enable_disable_t_endian
static inline void vl_api_one_enable_disable_t_endian (vl_api_one_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_enable_disable_reply_t_endian
#define _vl_api_defined_one_enable_disable_reply_t_endian
static inline void vl_api_one_enable_disable_reply_t_endian (vl_api_one_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_nsh_set_locator_set_t_endian
#define _vl_api_defined_one_nsh_set_locator_set_t_endian
static inline void vl_api_one_nsh_set_locator_set_t_endian (vl_api_one_nsh_set_locator_set_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_one_nsh_set_locator_set_reply_t_endian
#define _vl_api_defined_one_nsh_set_locator_set_reply_t_endian
static inline void vl_api_one_nsh_set_locator_set_reply_t_endian (vl_api_one_nsh_set_locator_set_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_pitr_set_locator_set_t_endian
#define _vl_api_defined_one_pitr_set_locator_set_t_endian
static inline void vl_api_one_pitr_set_locator_set_t_endian (vl_api_one_pitr_set_locator_set_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_one_pitr_set_locator_set_reply_t_endian
#define _vl_api_defined_one_pitr_set_locator_set_reply_t_endian
static inline void vl_api_one_pitr_set_locator_set_reply_t_endian (vl_api_one_pitr_set_locator_set_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_use_petr_t_endian
#define _vl_api_defined_one_use_petr_t_endian
static inline void vl_api_one_use_petr_t_endian (vl_api_one_use_petr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip4 = a->is_ip4 (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_one_use_petr_reply_t_endian
#define _vl_api_defined_one_use_petr_reply_t_endian
static inline void vl_api_one_use_petr_reply_t_endian (vl_api_one_use_petr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_one_use_petr_t_endian
#define _vl_api_defined_show_one_use_petr_t_endian
static inline void vl_api_show_one_use_petr_t_endian (vl_api_show_one_use_petr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_use_petr_reply_t_endian
#define _vl_api_defined_show_one_use_petr_reply_t_endian
static inline void vl_api_show_one_use_petr_reply_t_endian (vl_api_show_one_use_petr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->status = a->status (no-op) */
    /* a->is_ip4 = a->is_ip4 (no-op) */
}

#endif

#ifndef _vl_api_defined_show_one_rloc_probe_state_t_endian
#define _vl_api_defined_show_one_rloc_probe_state_t_endian
static inline void vl_api_show_one_rloc_probe_state_t_endian (vl_api_show_one_rloc_probe_state_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_rloc_probe_state_reply_t_endian
#define _vl_api_defined_show_one_rloc_probe_state_reply_t_endian
static inline void vl_api_show_one_rloc_probe_state_reply_t_endian (vl_api_show_one_rloc_probe_state_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->is_enabled = a->is_enabled (no-op) */
}

#endif

#ifndef _vl_api_defined_one_rloc_probe_enable_disable_t_endian
#define _vl_api_defined_one_rloc_probe_enable_disable_t_endian
static inline void vl_api_one_rloc_probe_enable_disable_t_endian (vl_api_one_rloc_probe_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enabled = a->is_enabled (no-op) */
}

#endif

#ifndef _vl_api_defined_one_rloc_probe_enable_disable_reply_t_endian
#define _vl_api_defined_one_rloc_probe_enable_disable_reply_t_endian
static inline void vl_api_one_rloc_probe_enable_disable_reply_t_endian (vl_api_one_rloc_probe_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_map_register_enable_disable_t_endian
#define _vl_api_defined_one_map_register_enable_disable_t_endian
static inline void vl_api_one_map_register_enable_disable_t_endian (vl_api_one_map_register_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enabled = a->is_enabled (no-op) */
}

#endif

#ifndef _vl_api_defined_one_map_register_enable_disable_reply_t_endian
#define _vl_api_defined_one_map_register_enable_disable_reply_t_endian
static inline void vl_api_one_map_register_enable_disable_reply_t_endian (vl_api_one_map_register_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_one_map_register_state_t_endian
#define _vl_api_defined_show_one_map_register_state_t_endian
static inline void vl_api_show_one_map_register_state_t_endian (vl_api_show_one_map_register_state_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_map_register_state_reply_t_endian
#define _vl_api_defined_show_one_map_register_state_reply_t_endian
static inline void vl_api_show_one_map_register_state_reply_t_endian (vl_api_show_one_map_register_state_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->is_enabled = a->is_enabled (no-op) */
}

#endif

#ifndef _vl_api_defined_one_map_request_mode_t_endian
#define _vl_api_defined_one_map_request_mode_t_endian
static inline void vl_api_one_map_request_mode_t_endian (vl_api_one_map_request_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->mode = a->mode (no-op) */
}

#endif

#ifndef _vl_api_defined_one_map_request_mode_reply_t_endian
#define _vl_api_defined_one_map_request_mode_reply_t_endian
static inline void vl_api_one_map_request_mode_reply_t_endian (vl_api_one_map_request_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_one_map_request_mode_t_endian
#define _vl_api_defined_show_one_map_request_mode_t_endian
static inline void vl_api_show_one_map_request_mode_t_endian (vl_api_show_one_map_request_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_map_request_mode_reply_t_endian
#define _vl_api_defined_show_one_map_request_mode_reply_t_endian
static inline void vl_api_show_one_map_request_mode_reply_t_endian (vl_api_show_one_map_request_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->mode = a->mode (no-op) */
}

#endif

/***** manual: vl_api_one_add_del_remote_mapping_t_endian  *****/

#ifndef _vl_api_defined_one_add_del_remote_mapping_reply_t_endian
#define _vl_api_defined_one_add_del_remote_mapping_reply_t_endian
static inline void vl_api_one_add_del_remote_mapping_reply_t_endian (vl_api_one_add_del_remote_mapping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_add_del_l2_arp_entry_t_endian
#define _vl_api_defined_one_add_del_l2_arp_entry_t_endian
static inline void vl_api_one_add_del_l2_arp_entry_t_endian (vl_api_one_add_del_l2_arp_entry_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->bd = clib_net_to_host_u32(a->bd);
    a->ip4 = clib_net_to_host_u32(a->ip4);
}

#endif

#ifndef _vl_api_defined_one_add_del_l2_arp_entry_reply_t_endian
#define _vl_api_defined_one_add_del_l2_arp_entry_reply_t_endian
static inline void vl_api_one_add_del_l2_arp_entry_reply_t_endian (vl_api_one_add_del_l2_arp_entry_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_l2_arp_entries_get_t_endian
#define _vl_api_defined_one_l2_arp_entries_get_t_endian
static inline void vl_api_one_l2_arp_entries_get_t_endian (vl_api_one_l2_arp_entries_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd = clib_net_to_host_u32(a->bd);
}

#endif

/***** manual: vl_api_one_l2_arp_entries_get_reply_t_endian  *****/

#ifndef _vl_api_defined_one_add_del_ndp_entry_t_endian
#define _vl_api_defined_one_add_del_ndp_entry_t_endian
static inline void vl_api_one_add_del_ndp_entry_t_endian (vl_api_one_add_del_ndp_entry_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->bd = clib_net_to_host_u32(a->bd);
}

#endif

#ifndef _vl_api_defined_one_add_del_ndp_entry_reply_t_endian
#define _vl_api_defined_one_add_del_ndp_entry_reply_t_endian
static inline void vl_api_one_add_del_ndp_entry_reply_t_endian (vl_api_one_add_del_ndp_entry_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_ndp_entries_get_t_endian
#define _vl_api_defined_one_ndp_entries_get_t_endian
static inline void vl_api_one_ndp_entries_get_t_endian (vl_api_one_ndp_entries_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bd = clib_net_to_host_u32(a->bd);
}

#endif

/***** manual: vl_api_one_ndp_entries_get_reply_t_endian  *****/

#ifndef _vl_api_defined_one_set_transport_protocol_t_endian
#define _vl_api_defined_one_set_transport_protocol_t_endian
static inline void vl_api_one_set_transport_protocol_t_endian (vl_api_one_set_transport_protocol_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->protocol = a->protocol (no-op) */
}

#endif

#ifndef _vl_api_defined_one_set_transport_protocol_reply_t_endian
#define _vl_api_defined_one_set_transport_protocol_reply_t_endian
static inline void vl_api_one_set_transport_protocol_reply_t_endian (vl_api_one_set_transport_protocol_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_get_transport_protocol_t_endian
#define _vl_api_defined_one_get_transport_protocol_t_endian
static inline void vl_api_one_get_transport_protocol_t_endian (vl_api_one_get_transport_protocol_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_get_transport_protocol_reply_t_endian
#define _vl_api_defined_one_get_transport_protocol_reply_t_endian
static inline void vl_api_one_get_transport_protocol_reply_t_endian (vl_api_one_get_transport_protocol_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->protocol = a->protocol (no-op) */
}

#endif

#ifndef _vl_api_defined_one_ndp_bd_get_t_endian
#define _vl_api_defined_one_ndp_bd_get_t_endian
static inline void vl_api_one_ndp_bd_get_t_endian (vl_api_one_ndp_bd_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

/***** manual: vl_api_one_ndp_bd_get_reply_t_endian  *****/

#ifndef _vl_api_defined_one_l2_arp_bd_get_t_endian
#define _vl_api_defined_one_l2_arp_bd_get_t_endian
static inline void vl_api_one_l2_arp_bd_get_t_endian (vl_api_one_l2_arp_bd_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

/***** manual: vl_api_one_l2_arp_bd_get_reply_t_endian  *****/

#ifndef _vl_api_defined_one_add_del_adjacency_t_endian
#define _vl_api_defined_one_add_del_adjacency_t_endian
static inline void vl_api_one_add_del_adjacency_t_endian (vl_api_one_add_del_adjacency_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->eid_type = a->eid_type (no-op) */
    /* a->reid_len = a->reid_len (no-op) */
    /* a->leid_len = a->leid_len (no-op) */
}

#endif

#ifndef _vl_api_defined_one_add_del_adjacency_reply_t_endian
#define _vl_api_defined_one_add_del_adjacency_reply_t_endian
static inline void vl_api_one_add_del_adjacency_reply_t_endian (vl_api_one_add_del_adjacency_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_add_del_map_request_itr_rlocs_t_endian
#define _vl_api_defined_one_add_del_map_request_itr_rlocs_t_endian
static inline void vl_api_one_add_del_map_request_itr_rlocs_t_endian (vl_api_one_add_del_map_request_itr_rlocs_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_one_add_del_map_request_itr_rlocs_reply_t_endian
#define _vl_api_defined_one_add_del_map_request_itr_rlocs_reply_t_endian
static inline void vl_api_one_add_del_map_request_itr_rlocs_reply_t_endian (vl_api_one_add_del_map_request_itr_rlocs_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_eid_table_add_del_map_t_endian
#define _vl_api_defined_one_eid_table_add_del_map_t_endian
static inline void vl_api_one_eid_table_add_del_map_t_endian (vl_api_one_eid_table_add_del_map_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    a->dp_table = clib_net_to_host_u32(a->dp_table);
    /* a->is_l2 = a->is_l2 (no-op) */
}

#endif

#ifndef _vl_api_defined_one_eid_table_add_del_map_reply_t_endian
#define _vl_api_defined_one_eid_table_add_del_map_reply_t_endian
static inline void vl_api_one_eid_table_add_del_map_reply_t_endian (vl_api_one_eid_table_add_del_map_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_locator_dump_t_endian
#define _vl_api_defined_one_locator_dump_t_endian
static inline void vl_api_one_locator_dump_t_endian (vl_api_one_locator_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
    /* a->is_index_set = a->is_index_set (no-op) */
}

#endif

#ifndef _vl_api_defined_one_locator_details_t_endian
#define _vl_api_defined_one_locator_details_t_endian
static inline void vl_api_one_locator_details_t_endian (vl_api_one_locator_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->local = a->local (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->priority = a->priority (no-op) */
    /* a->weight = a->weight (no-op) */
}

#endif

#ifndef _vl_api_defined_one_locator_set_details_t_endian
#define _vl_api_defined_one_locator_set_details_t_endian
static inline void vl_api_one_locator_set_details_t_endian (vl_api_one_locator_set_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->ls_index = clib_net_to_host_u32(a->ls_index);
}

#endif

#ifndef _vl_api_defined_one_locator_set_dump_t_endian
#define _vl_api_defined_one_locator_set_dump_t_endian
static inline void vl_api_one_locator_set_dump_t_endian (vl_api_one_locator_set_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->filter = a->filter (no-op) */
}

#endif

#ifndef _vl_api_defined_one_eid_table_details_t_endian
#define _vl_api_defined_one_eid_table_details_t_endian
static inline void vl_api_one_eid_table_details_t_endian (vl_api_one_eid_table_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->locator_set_index = clib_net_to_host_u32(a->locator_set_index);
    /* a->action = a->action (no-op) */
    /* a->is_local = a->is_local (no-op) */
    /* a->eid_type = a->eid_type (no-op) */
    /* a->is_src_dst = a->is_src_dst (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->eid_prefix_len = a->eid_prefix_len (no-op) */
    /* a->seid_prefix_len = a->seid_prefix_len (no-op) */
    a->ttl = clib_net_to_host_u32(a->ttl);
    /* a->authoritative = a->authoritative (no-op) */
    a->key_id = clib_net_to_host_u16(a->key_id);
}

#endif

#ifndef _vl_api_defined_one_eid_table_dump_t_endian
#define _vl_api_defined_one_eid_table_dump_t_endian
static inline void vl_api_one_eid_table_dump_t_endian (vl_api_one_eid_table_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->eid_set = a->eid_set (no-op) */
    /* a->prefix_length = a->prefix_length (no-op) */
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->eid_type = a->eid_type (no-op) */
    /* a->filter = a->filter (no-op) */
}

#endif

/***** manual: vl_api_one_adjacencies_get_reply_t_endian  *****/

#ifndef _vl_api_defined_one_adjacencies_get_t_endian
#define _vl_api_defined_one_adjacencies_get_t_endian
static inline void vl_api_one_adjacencies_get_t_endian (vl_api_one_adjacencies_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

#endif

#ifndef _vl_api_defined_one_eid_table_map_details_t_endian
#define _vl_api_defined_one_eid_table_map_details_t_endian
static inline void vl_api_one_eid_table_map_details_t_endian (vl_api_one_eid_table_map_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    a->dp_table = clib_net_to_host_u32(a->dp_table);
}

#endif

#ifndef _vl_api_defined_one_eid_table_map_dump_t_endian
#define _vl_api_defined_one_eid_table_map_dump_t_endian
static inline void vl_api_one_eid_table_map_dump_t_endian (vl_api_one_eid_table_map_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_l2 = a->is_l2 (no-op) */
}

#endif

#ifndef _vl_api_defined_one_eid_table_vni_dump_t_endian
#define _vl_api_defined_one_eid_table_vni_dump_t_endian
static inline void vl_api_one_eid_table_vni_dump_t_endian (vl_api_one_eid_table_vni_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_eid_table_vni_details_t_endian
#define _vl_api_defined_one_eid_table_vni_details_t_endian
static inline void vl_api_one_eid_table_vni_details_t_endian (vl_api_one_eid_table_vni_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

#endif

#ifndef _vl_api_defined_one_map_resolver_details_t_endian
#define _vl_api_defined_one_map_resolver_details_t_endian
static inline void vl_api_one_map_resolver_details_t_endian (vl_api_one_map_resolver_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_one_map_resolver_dump_t_endian
#define _vl_api_defined_one_map_resolver_dump_t_endian
static inline void vl_api_one_map_resolver_dump_t_endian (vl_api_one_map_resolver_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_map_server_details_t_endian
#define _vl_api_defined_one_map_server_details_t_endian
static inline void vl_api_one_map_server_details_t_endian (vl_api_one_map_server_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_one_map_server_dump_t_endian
#define _vl_api_defined_one_map_server_dump_t_endian
static inline void vl_api_one_map_server_dump_t_endian (vl_api_one_map_server_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_status_t_endian
#define _vl_api_defined_show_one_status_t_endian
static inline void vl_api_show_one_status_t_endian (vl_api_show_one_status_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_status_reply_t_endian
#define _vl_api_defined_show_one_status_reply_t_endian
static inline void vl_api_show_one_status_reply_t_endian (vl_api_show_one_status_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->feature_status = a->feature_status (no-op) */
    /* a->gpe_status = a->gpe_status (no-op) */
}

#endif

#ifndef _vl_api_defined_one_get_map_request_itr_rlocs_t_endian
#define _vl_api_defined_one_get_map_request_itr_rlocs_t_endian
static inline void vl_api_one_get_map_request_itr_rlocs_t_endian (vl_api_one_get_map_request_itr_rlocs_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_get_map_request_itr_rlocs_reply_t_endian
#define _vl_api_defined_one_get_map_request_itr_rlocs_reply_t_endian
static inline void vl_api_one_get_map_request_itr_rlocs_reply_t_endian (vl_api_one_get_map_request_itr_rlocs_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_one_nsh_mapping_t_endian
#define _vl_api_defined_show_one_nsh_mapping_t_endian
static inline void vl_api_show_one_nsh_mapping_t_endian (vl_api_show_one_nsh_mapping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_nsh_mapping_reply_t_endian
#define _vl_api_defined_show_one_nsh_mapping_reply_t_endian
static inline void vl_api_show_one_nsh_mapping_reply_t_endian (vl_api_show_one_nsh_mapping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->is_set = a->is_set (no-op) */
}

#endif

#ifndef _vl_api_defined_show_one_pitr_t_endian
#define _vl_api_defined_show_one_pitr_t_endian
static inline void vl_api_show_one_pitr_t_endian (vl_api_show_one_pitr_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_pitr_reply_t_endian
#define _vl_api_defined_show_one_pitr_reply_t_endian
static inline void vl_api_show_one_pitr_reply_t_endian (vl_api_show_one_pitr_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->status = a->status (no-op) */
}

#endif

#ifndef _vl_api_defined_one_stats_dump_t_endian
#define _vl_api_defined_one_stats_dump_t_endian
static inline void vl_api_one_stats_dump_t_endian (vl_api_one_stats_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_stats_details_t_endian
#define _vl_api_defined_one_stats_details_t_endian
static inline void vl_api_one_stats_details_t_endian (vl_api_one_stats_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->eid_type = a->eid_type (no-op) */
    /* a->deid_pref_len = a->deid_pref_len (no-op) */
    /* a->seid_pref_len = a->seid_pref_len (no-op) */
    /* a->is_ip4 = a->is_ip4 (no-op) */
    a->pkt_count = clib_net_to_host_u32(a->pkt_count);
    a->bytes = clib_net_to_host_u32(a->bytes);
}

#endif

#ifndef _vl_api_defined_one_stats_flush_t_endian
#define _vl_api_defined_one_stats_flush_t_endian
static inline void vl_api_one_stats_flush_t_endian (vl_api_one_stats_flush_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_stats_flush_reply_t_endian
#define _vl_api_defined_one_stats_flush_reply_t_endian
static inline void vl_api_one_stats_flush_reply_t_endian (vl_api_one_stats_flush_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_stats_enable_disable_t_endian
#define _vl_api_defined_one_stats_enable_disable_t_endian
static inline void vl_api_one_stats_enable_disable_t_endian (vl_api_one_stats_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_stats_enable_disable_reply_t_endian
#define _vl_api_defined_one_stats_enable_disable_reply_t_endian
static inline void vl_api_one_stats_enable_disable_reply_t_endian (vl_api_one_stats_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_one_stats_enable_disable_t_endian
#define _vl_api_defined_show_one_stats_enable_disable_t_endian
static inline void vl_api_show_one_stats_enable_disable_t_endian (vl_api_show_one_stats_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_stats_enable_disable_reply_t_endian
#define _vl_api_defined_show_one_stats_enable_disable_reply_t_endian
static inline void vl_api_show_one_stats_enable_disable_reply_t_endian (vl_api_show_one_stats_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_map_register_fallback_threshold_t_endian
#define _vl_api_defined_one_map_register_fallback_threshold_t_endian
static inline void vl_api_one_map_register_fallback_threshold_t_endian (vl_api_one_map_register_fallback_threshold_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->value = clib_net_to_host_u32(a->value);
}

#endif

#ifndef _vl_api_defined_one_map_register_fallback_threshold_reply_t_endian
#define _vl_api_defined_one_map_register_fallback_threshold_reply_t_endian
static inline void vl_api_one_map_register_fallback_threshold_reply_t_endian (vl_api_one_map_register_fallback_threshold_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_show_one_map_register_fallback_threshold_t_endian
#define _vl_api_defined_show_one_map_register_fallback_threshold_t_endian
static inline void vl_api_show_one_map_register_fallback_threshold_t_endian (vl_api_show_one_map_register_fallback_threshold_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_show_one_map_register_fallback_threshold_reply_t_endian
#define _vl_api_defined_show_one_map_register_fallback_threshold_reply_t_endian
static inline void vl_api_show_one_map_register_fallback_threshold_reply_t_endian (vl_api_show_one_map_register_fallback_threshold_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->value = clib_net_to_host_u32(a->value);
}

#endif

#ifndef _vl_api_defined_one_enable_disable_xtr_mode_t_endian
#define _vl_api_defined_one_enable_disable_xtr_mode_t_endian
static inline void vl_api_one_enable_disable_xtr_mode_t_endian (vl_api_one_enable_disable_xtr_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_enable_disable_xtr_mode_reply_t_endian
#define _vl_api_defined_one_enable_disable_xtr_mode_reply_t_endian
static inline void vl_api_one_enable_disable_xtr_mode_reply_t_endian (vl_api_one_enable_disable_xtr_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_show_xtr_mode_t_endian
#define _vl_api_defined_one_show_xtr_mode_t_endian
static inline void vl_api_one_show_xtr_mode_t_endian (vl_api_one_show_xtr_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_show_xtr_mode_reply_t_endian
#define _vl_api_defined_one_show_xtr_mode_reply_t_endian
static inline void vl_api_one_show_xtr_mode_reply_t_endian (vl_api_one_show_xtr_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_enable_disable_petr_mode_t_endian
#define _vl_api_defined_one_enable_disable_petr_mode_t_endian
static inline void vl_api_one_enable_disable_petr_mode_t_endian (vl_api_one_enable_disable_petr_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_enable_disable_petr_mode_reply_t_endian
#define _vl_api_defined_one_enable_disable_petr_mode_reply_t_endian
static inline void vl_api_one_enable_disable_petr_mode_reply_t_endian (vl_api_one_enable_disable_petr_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_show_petr_mode_t_endian
#define _vl_api_defined_one_show_petr_mode_t_endian
static inline void vl_api_one_show_petr_mode_t_endian (vl_api_one_show_petr_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_show_petr_mode_reply_t_endian
#define _vl_api_defined_one_show_petr_mode_reply_t_endian
static inline void vl_api_one_show_petr_mode_reply_t_endian (vl_api_one_show_petr_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_enable_disable_pitr_mode_t_endian
#define _vl_api_defined_one_enable_disable_pitr_mode_t_endian
static inline void vl_api_one_enable_disable_pitr_mode_t_endian (vl_api_one_enable_disable_pitr_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_one_enable_disable_pitr_mode_reply_t_endian
#define _vl_api_defined_one_enable_disable_pitr_mode_reply_t_endian
static inline void vl_api_one_enable_disable_pitr_mode_reply_t_endian (vl_api_one_enable_disable_pitr_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_one_show_pitr_mode_t_endian
#define _vl_api_defined_one_show_pitr_mode_t_endian
static inline void vl_api_one_show_pitr_mode_t_endian (vl_api_one_show_pitr_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_one_show_pitr_mode_reply_t_endian
#define _vl_api_defined_one_show_pitr_mode_reply_t_endian
static inline void vl_api_one_show_pitr_mode_reply_t_endian (vl_api_one_show_pitr_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->is_en = a->is_en (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(one.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(one.api, 0x867a75e8)

#endif

