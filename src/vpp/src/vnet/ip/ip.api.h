/*
 * VLIB API definitions 2020-06-13 06:00:58
 * Input file: ip.api
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
#warning no content included from ip.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IP_TABLE_ADD_DEL, vl_api_ip_table_add_del_t_handler)
vl_msg_id(VL_API_IP_TABLE_ADD_DEL_REPLY, vl_api_ip_table_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_TABLE_DUMP, vl_api_ip_table_dump_t_handler)
vl_msg_id(VL_API_IP_TABLE_DETAILS, vl_api_ip_table_details_t_handler)
vl_msg_id(VL_API_IP_ROUTE_ADD_DEL, vl_api_ip_route_add_del_t_handler)
vl_msg_id(VL_API_IP_ROUTE_ADD_DEL_REPLY, vl_api_ip_route_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_ROUTE_DUMP, vl_api_ip_route_dump_t_handler)
vl_msg_id(VL_API_IP_ROUTE_DETAILS, vl_api_ip_route_details_t_handler)
vl_msg_id(VL_API_IP_NEIGHBOR_ADD_DEL, vl_api_ip_neighbor_add_del_t_handler)
vl_msg_id(VL_API_IP_NEIGHBOR_ADD_DEL_REPLY, vl_api_ip_neighbor_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_NEIGHBOR_DUMP, vl_api_ip_neighbor_dump_t_handler)
vl_msg_id(VL_API_IP_NEIGHBOR_DETAILS, vl_api_ip_neighbor_details_t_handler)
vl_msg_id(VL_API_SET_IP_FLOW_HASH, vl_api_set_ip_flow_hash_t_handler)
vl_msg_id(VL_API_SET_IP_FLOW_HASH_REPLY, vl_api_set_ip_flow_hash_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG, vl_api_sw_interface_ip6nd_ra_config_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG_REPLY, vl_api_sw_interface_ip6nd_ra_config_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX, vl_api_sw_interface_ip6nd_ra_prefix_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX_REPLY, vl_api_sw_interface_ip6nd_ra_prefix_reply_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_ADD_DEL, vl_api_ip6nd_proxy_add_del_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_ADD_DEL_REPLY, vl_api_ip6nd_proxy_add_del_reply_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_DETAILS, vl_api_ip6nd_proxy_details_t_handler)
vl_msg_id(VL_API_IP6ND_PROXY_DUMP, vl_api_ip6nd_proxy_dump_t_handler)
vl_msg_id(VL_API_IP6ND_SEND_ROUTER_SOLICITATION, vl_api_ip6nd_send_router_solicitation_t_handler)
vl_msg_id(VL_API_IP6ND_SEND_ROUTER_SOLICITATION_REPLY, vl_api_ip6nd_send_router_solicitation_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE, vl_api_sw_interface_ip6_enable_disable_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE_REPLY, vl_api_sw_interface_ip6_enable_disable_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS, vl_api_sw_interface_ip6_set_link_local_address_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS_REPLY, vl_api_sw_interface_ip6_set_link_local_address_reply_t_handler)
vl_msg_id(VL_API_IP_MTABLE_DUMP, vl_api_ip_mtable_dump_t_handler)
vl_msg_id(VL_API_IP_MTABLE_DETAILS, vl_api_ip_mtable_details_t_handler)
vl_msg_id(VL_API_IP_MROUTE_ADD_DEL, vl_api_ip_mroute_add_del_t_handler)
vl_msg_id(VL_API_IP_MROUTE_ADD_DEL_REPLY, vl_api_ip_mroute_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_MROUTE_DUMP, vl_api_ip_mroute_dump_t_handler)
vl_msg_id(VL_API_IP_MROUTE_DETAILS, vl_api_ip_mroute_details_t_handler)
vl_msg_id(VL_API_IP_ADDRESS_DETAILS, vl_api_ip_address_details_t_handler)
vl_msg_id(VL_API_IP_ADDRESS_DUMP, vl_api_ip_address_dump_t_handler)
vl_msg_id(VL_API_IP_UNNUMBERED_DETAILS, vl_api_ip_unnumbered_details_t_handler)
vl_msg_id(VL_API_IP_UNNUMBERED_DUMP, vl_api_ip_unnumbered_dump_t_handler)
vl_msg_id(VL_API_IP_DETAILS, vl_api_ip_details_t_handler)
vl_msg_id(VL_API_IP_DUMP, vl_api_ip_dump_t_handler)
vl_msg_id(VL_API_MFIB_SIGNAL_DUMP, vl_api_mfib_signal_dump_t_handler)
vl_msg_id(VL_API_MFIB_SIGNAL_DETAILS, vl_api_mfib_signal_details_t_handler)
vl_msg_id(VL_API_IP_PUNT_POLICE, vl_api_ip_punt_police_t_handler)
vl_msg_id(VL_API_IP_PUNT_POLICE_REPLY, vl_api_ip_punt_police_reply_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT, vl_api_ip_punt_redirect_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT_REPLY, vl_api_ip_punt_redirect_reply_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT_DUMP, vl_api_ip_punt_redirect_dump_t_handler)
vl_msg_id(VL_API_IP_PUNT_REDIRECT_DETAILS, vl_api_ip_punt_redirect_details_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_ADD_DEL, vl_api_ip_container_proxy_add_del_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_ADD_DEL_REPLY, vl_api_ip_container_proxy_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_DUMP, vl_api_ip_container_proxy_dump_t_handler)
vl_msg_id(VL_API_IP_CONTAINER_PROXY_DETAILS, vl_api_ip_container_proxy_details_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL, vl_api_ip_source_and_port_range_check_add_del_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL_REPLY, vl_api_ip_source_and_port_range_check_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL, vl_api_ip_source_and_port_range_check_interface_add_del_t_handler)
vl_msg_id(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL_REPLY, vl_api_ip_source_and_port_range_check_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_SOURCE_CHECK_INTERFACE_ADD_DEL, vl_api_ip_source_check_interface_add_del_t_handler)
vl_msg_id(VL_API_IP_SOURCE_CHECK_INTERFACE_ADD_DEL_REPLY, vl_api_ip_source_check_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_IP_SCAN_NEIGHBOR_ENABLE_DISABLE, vl_api_ip_scan_neighbor_enable_disable_t_handler)
vl_msg_id(VL_API_IP_SCAN_NEIGHBOR_ENABLE_DISABLE_REPLY, vl_api_ip_scan_neighbor_enable_disable_reply_t_handler)
vl_msg_id(VL_API_IP_PROBE_NEIGHBOR, vl_api_ip_probe_neighbor_t_handler)
vl_msg_id(VL_API_IP_PROBE_NEIGHBOR_REPLY, vl_api_ip_probe_neighbor_reply_t_handler)
vl_msg_id(VL_API_WANT_IP4_ARP_EVENTS, vl_api_want_ip4_arp_events_t_handler)
vl_msg_id(VL_API_WANT_IP4_ARP_EVENTS_REPLY, vl_api_want_ip4_arp_events_reply_t_handler)
vl_msg_id(VL_API_IP4_ARP_EVENT, vl_api_ip4_arp_event_t_handler)
vl_msg_id(VL_API_WANT_IP6_ND_EVENTS, vl_api_want_ip6_nd_events_t_handler)
vl_msg_id(VL_API_WANT_IP6_ND_EVENTS_REPLY, vl_api_want_ip6_nd_events_reply_t_handler)
vl_msg_id(VL_API_IP6_ND_EVENT, vl_api_ip6_nd_event_t_handler)
vl_msg_id(VL_API_WANT_IP6_RA_EVENTS, vl_api_want_ip6_ra_events_t_handler)
vl_msg_id(VL_API_WANT_IP6_RA_EVENTS_REPLY, vl_api_want_ip6_ra_events_reply_t_handler)
vl_msg_id(VL_API_IP6_RA_EVENT, vl_api_ip6_ra_event_t_handler)
vl_msg_id(VL_API_PROXY_ARP_ADD_DEL, vl_api_proxy_arp_add_del_t_handler)
vl_msg_id(VL_API_PROXY_ARP_ADD_DEL_REPLY, vl_api_proxy_arp_add_del_reply_t_handler)
vl_msg_id(VL_API_PROXY_ARP_DUMP, vl_api_proxy_arp_dump_t_handler)
vl_msg_id(VL_API_PROXY_ARP_DETAILS, vl_api_proxy_arp_details_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE, vl_api_proxy_arp_intfc_enable_disable_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE_REPLY, vl_api_proxy_arp_intfc_enable_disable_reply_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_DUMP, vl_api_proxy_arp_intfc_dump_t_handler)
vl_msg_id(VL_API_PROXY_ARP_INTFC_DETAILS, vl_api_proxy_arp_intfc_details_t_handler)
vl_msg_id(VL_API_RESET_FIB, vl_api_reset_fib_t_handler)
vl_msg_id(VL_API_RESET_FIB_REPLY, vl_api_reset_fib_reply_t_handler)
vl_msg_id(VL_API_SET_ARP_NEIGHBOR_LIMIT, vl_api_set_arp_neighbor_limit_t_handler)
vl_msg_id(VL_API_SET_ARP_NEIGHBOR_LIMIT_REPLY, vl_api_set_arp_neighbor_limit_reply_t_handler)
vl_msg_id(VL_API_IOAM_ENABLE, vl_api_ioam_enable_t_handler)
vl_msg_id(VL_API_IOAM_ENABLE_REPLY, vl_api_ioam_enable_reply_t_handler)
vl_msg_id(VL_API_IOAM_DISABLE, vl_api_ioam_disable_t_handler)
vl_msg_id(VL_API_IOAM_DISABLE_REPLY, vl_api_ioam_disable_reply_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_SET, vl_api_ip_reassembly_set_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_SET_REPLY, vl_api_ip_reassembly_set_reply_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_GET, vl_api_ip_reassembly_get_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_GET_REPLY, vl_api_ip_reassembly_get_reply_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_ENABLE_DISABLE, vl_api_ip_reassembly_enable_disable_t_handler)
vl_msg_id(VL_API_IP_REASSEMBLY_ENABLE_DISABLE_REPLY, vl_api_ip_reassembly_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ip_table_add_del_t, 1)
vl_msg_name(vl_api_ip_table_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_table_dump_t, 1)
vl_msg_name(vl_api_ip_table_details_t, 1)
vl_msg_name(vl_api_ip_route_add_del_t, 1)
vl_msg_name(vl_api_ip_route_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_route_dump_t, 1)
vl_msg_name(vl_api_ip_route_details_t, 1)
vl_msg_name(vl_api_ip_neighbor_add_del_t, 1)
vl_msg_name(vl_api_ip_neighbor_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_neighbor_dump_t, 1)
vl_msg_name(vl_api_ip_neighbor_details_t, 1)
vl_msg_name(vl_api_set_ip_flow_hash_t, 1)
vl_msg_name(vl_api_set_ip_flow_hash_reply_t, 1)
vl_msg_name(vl_api_sw_interface_ip6nd_ra_config_t, 1)
vl_msg_name(vl_api_sw_interface_ip6nd_ra_config_reply_t, 1)
vl_msg_name(vl_api_sw_interface_ip6nd_ra_prefix_t, 1)
vl_msg_name(vl_api_sw_interface_ip6nd_ra_prefix_reply_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_add_del_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_add_del_reply_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_details_t, 1)
vl_msg_name(vl_api_ip6nd_proxy_dump_t, 1)
vl_msg_name(vl_api_ip6nd_send_router_solicitation_t, 1)
vl_msg_name(vl_api_ip6nd_send_router_solicitation_reply_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_enable_disable_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_enable_disable_reply_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_set_link_local_address_t, 1)
vl_msg_name(vl_api_sw_interface_ip6_set_link_local_address_reply_t, 1)
vl_msg_name(vl_api_ip_mtable_dump_t, 1)
vl_msg_name(vl_api_ip_mtable_details_t, 1)
vl_msg_name(vl_api_ip_mroute_add_del_t, 1)
vl_msg_name(vl_api_ip_mroute_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_mroute_dump_t, 1)
vl_msg_name(vl_api_ip_mroute_details_t, 1)
vl_msg_name(vl_api_ip_address_details_t, 1)
vl_msg_name(vl_api_ip_address_dump_t, 1)
vl_msg_name(vl_api_ip_unnumbered_details_t, 1)
vl_msg_name(vl_api_ip_unnumbered_dump_t, 1)
vl_msg_name(vl_api_ip_details_t, 1)
vl_msg_name(vl_api_ip_dump_t, 1)
vl_msg_name(vl_api_mfib_signal_dump_t, 1)
vl_msg_name(vl_api_mfib_signal_details_t, 1)
vl_msg_name(vl_api_ip_punt_police_t, 1)
vl_msg_name(vl_api_ip_punt_police_reply_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_reply_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_dump_t, 1)
vl_msg_name(vl_api_ip_punt_redirect_details_t, 1)
vl_msg_name(vl_api_ip_container_proxy_add_del_t, 1)
vl_msg_name(vl_api_ip_container_proxy_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_container_proxy_dump_t, 1)
vl_msg_name(vl_api_ip_container_proxy_details_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_add_del_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_interface_add_del_t, 1)
vl_msg_name(vl_api_ip_source_and_port_range_check_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_source_check_interface_add_del_t, 1)
vl_msg_name(vl_api_ip_source_check_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_ip_scan_neighbor_enable_disable_t, 1)
vl_msg_name(vl_api_ip_scan_neighbor_enable_disable_reply_t, 1)
vl_msg_name(vl_api_ip_probe_neighbor_t, 1)
vl_msg_name(vl_api_ip_probe_neighbor_reply_t, 1)
vl_msg_name(vl_api_want_ip4_arp_events_t, 1)
vl_msg_name(vl_api_want_ip4_arp_events_reply_t, 1)
vl_msg_name(vl_api_ip4_arp_event_t, 1)
vl_msg_name(vl_api_want_ip6_nd_events_t, 1)
vl_msg_name(vl_api_want_ip6_nd_events_reply_t, 1)
vl_msg_name(vl_api_ip6_nd_event_t, 1)
vl_msg_name(vl_api_want_ip6_ra_events_t, 1)
vl_msg_name(vl_api_want_ip6_ra_events_reply_t, 1)
vl_msg_name(vl_api_ip6_ra_event_t, 1)
vl_msg_name(vl_api_proxy_arp_add_del_t, 1)
vl_msg_name(vl_api_proxy_arp_add_del_reply_t, 1)
vl_msg_name(vl_api_proxy_arp_dump_t, 1)
vl_msg_name(vl_api_proxy_arp_details_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_enable_disable_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_enable_disable_reply_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_dump_t, 1)
vl_msg_name(vl_api_proxy_arp_intfc_details_t, 1)
vl_msg_name(vl_api_reset_fib_t, 1)
vl_msg_name(vl_api_reset_fib_reply_t, 1)
vl_msg_name(vl_api_set_arp_neighbor_limit_t, 1)
vl_msg_name(vl_api_set_arp_neighbor_limit_reply_t, 1)
vl_msg_name(vl_api_ioam_enable_t, 1)
vl_msg_name(vl_api_ioam_enable_reply_t, 1)
vl_msg_name(vl_api_ioam_disable_t, 1)
vl_msg_name(vl_api_ioam_disable_reply_t, 1)
vl_msg_name(vl_api_ip_reassembly_set_t, 1)
vl_msg_name(vl_api_ip_reassembly_set_reply_t, 1)
vl_msg_name(vl_api_ip_reassembly_get_t, 1)
vl_msg_name(vl_api_ip_reassembly_get_reply_t, 1)
vl_msg_name(vl_api_ip_reassembly_enable_disable_t, 1)
vl_msg_name(vl_api_ip_reassembly_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ip \
_(VL_API_IP_TABLE_ADD_DEL, ip_table_add_del, e5d378f2) \
_(VL_API_IP_TABLE_ADD_DEL_REPLY, ip_table_add_del_reply, e8d4e804) \
_(VL_API_IP_TABLE_DUMP, ip_table_dump, 51077d14) \
_(VL_API_IP_TABLE_DETAILS, ip_table_details, 4d251961) \
_(VL_API_IP_ROUTE_ADD_DEL, ip_route_add_del, 5ceee41c) \
_(VL_API_IP_ROUTE_ADD_DEL_REPLY, ip_route_add_del_reply, 1992deab) \
_(VL_API_IP_ROUTE_DUMP, ip_route_dump, f5ad78e8) \
_(VL_API_IP_ROUTE_DETAILS, ip_route_details, d1ffaae1) \
_(VL_API_IP_NEIGHBOR_ADD_DEL, ip_neighbor_add_del, 029dad44) \
_(VL_API_IP_NEIGHBOR_ADD_DEL_REPLY, ip_neighbor_add_del_reply, 1992deab) \
_(VL_API_IP_NEIGHBOR_DUMP, ip_neighbor_dump, 6b7bcd0a) \
_(VL_API_IP_NEIGHBOR_DETAILS, ip_neighbor_details, c1a190ed) \
_(VL_API_SET_IP_FLOW_HASH, set_ip_flow_hash, a9084bfb) \
_(VL_API_SET_IP_FLOW_HASH_REPLY, set_ip_flow_hash_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG, sw_interface_ip6nd_ra_config, c3f02daa) \
_(VL_API_SW_INTERFACE_IP6ND_RA_CONFIG_REPLY, sw_interface_ip6nd_ra_config_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX, sw_interface_ip6nd_ra_prefix, 6449c040) \
_(VL_API_SW_INTERFACE_IP6ND_RA_PREFIX_REPLY, sw_interface_ip6nd_ra_prefix_reply, e8d4e804) \
_(VL_API_IP6ND_PROXY_ADD_DEL, ip6nd_proxy_add_del, b431d174) \
_(VL_API_IP6ND_PROXY_ADD_DEL_REPLY, ip6nd_proxy_add_del_reply, e8d4e804) \
_(VL_API_IP6ND_PROXY_DETAILS, ip6nd_proxy_details, 46bfb684) \
_(VL_API_IP6ND_PROXY_DUMP, ip6nd_proxy_dump, 51077d14) \
_(VL_API_IP6ND_SEND_ROUTER_SOLICITATION, ip6nd_send_router_solicitation, bd968917) \
_(VL_API_IP6ND_SEND_ROUTER_SOLICITATION_REPLY, ip6nd_send_router_solicitation_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE, sw_interface_ip6_enable_disable, a36fadc0) \
_(VL_API_SW_INTERFACE_IP6_ENABLE_DISABLE_REPLY, sw_interface_ip6_enable_disable_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS, sw_interface_ip6_set_link_local_address, d73bf1ab) \
_(VL_API_SW_INTERFACE_IP6_SET_LINK_LOCAL_ADDRESS_REPLY, sw_interface_ip6_set_link_local_address_reply, e8d4e804) \
_(VL_API_IP_MTABLE_DUMP, ip_mtable_dump, 51077d14) \
_(VL_API_IP_MTABLE_DETAILS, ip_mtable_details, f5ad78e8) \
_(VL_API_IP_MROUTE_ADD_DEL, ip_mroute_add_del, edbca49e) \
_(VL_API_IP_MROUTE_ADD_DEL_REPLY, ip_mroute_add_del_reply, 1992deab) \
_(VL_API_IP_MROUTE_DUMP, ip_mroute_dump, f5ad78e8) \
_(VL_API_IP_MROUTE_DETAILS, ip_mroute_details, c1cb4b44) \
_(VL_API_IP_ADDRESS_DETAILS, ip_address_details, 7002eee7) \
_(VL_API_IP_ADDRESS_DUMP, ip_address_dump, 6b7bcd0a) \
_(VL_API_IP_UNNUMBERED_DETAILS, ip_unnumbered_details, ae694cf4) \
_(VL_API_IP_UNNUMBERED_DUMP, ip_unnumbered_dump, 529cb13f) \
_(VL_API_IP_DETAILS, ip_details, 8bb37ec4) \
_(VL_API_IP_DUMP, ip_dump, de883da4) \
_(VL_API_MFIB_SIGNAL_DUMP, mfib_signal_dump, 51077d14) \
_(VL_API_MFIB_SIGNAL_DETAILS, mfib_signal_details, 697ab6b4) \
_(VL_API_IP_PUNT_POLICE, ip_punt_police, 38691592) \
_(VL_API_IP_PUNT_POLICE_REPLY, ip_punt_police_reply, e8d4e804) \
_(VL_API_IP_PUNT_REDIRECT, ip_punt_redirect, f9ea79a8) \
_(VL_API_IP_PUNT_REDIRECT_REPLY, ip_punt_redirect_reply, e8d4e804) \
_(VL_API_IP_PUNT_REDIRECT_DUMP, ip_punt_redirect_dump, 6b7bcd0a) \
_(VL_API_IP_PUNT_REDIRECT_DETAILS, ip_punt_redirect_details, d6441360) \
_(VL_API_IP_CONTAINER_PROXY_ADD_DEL, ip_container_proxy_add_del, 630352c5) \
_(VL_API_IP_CONTAINER_PROXY_ADD_DEL_REPLY, ip_container_proxy_add_del_reply, e8d4e804) \
_(VL_API_IP_CONTAINER_PROXY_DUMP, ip_container_proxy_dump, 51077d14) \
_(VL_API_IP_CONTAINER_PROXY_DETAILS, ip_container_proxy_details, 550a6c28) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL, ip_source_and_port_range_check_add_del, 97e10a78) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_ADD_DEL_REPLY, ip_source_and_port_range_check_add_del_reply, e8d4e804) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL, ip_source_and_port_range_check_interface_add_del, 6966bc44) \
_(VL_API_IP_SOURCE_AND_PORT_RANGE_CHECK_INTERFACE_ADD_DEL_REPLY, ip_source_and_port_range_check_interface_add_del_reply, e8d4e804) \
_(VL_API_IP_SOURCE_CHECK_INTERFACE_ADD_DEL, ip_source_check_interface_add_del, 0a60152a) \
_(VL_API_IP_SOURCE_CHECK_INTERFACE_ADD_DEL_REPLY, ip_source_check_interface_add_del_reply, e8d4e804) \
_(VL_API_IP_SCAN_NEIGHBOR_ENABLE_DISABLE, ip_scan_neighbor_enable_disable, 0a6bf57a) \
_(VL_API_IP_SCAN_NEIGHBOR_ENABLE_DISABLE_REPLY, ip_scan_neighbor_enable_disable_reply, e8d4e804) \
_(VL_API_IP_PROBE_NEIGHBOR, ip_probe_neighbor, 37bc128d) \
_(VL_API_IP_PROBE_NEIGHBOR_REPLY, ip_probe_neighbor_reply, e8d4e804) \
_(VL_API_WANT_IP4_ARP_EVENTS, want_ip4_arp_events, 2678f421) \
_(VL_API_WANT_IP4_ARP_EVENTS_REPLY, want_ip4_arp_events_reply, e8d4e804) \
_(VL_API_IP4_ARP_EVENT, ip4_arp_event, efad00cd) \
_(VL_API_WANT_IP6_ND_EVENTS, want_ip6_nd_events, 08283da1) \
_(VL_API_WANT_IP6_ND_EVENTS_REPLY, want_ip6_nd_events_reply, e8d4e804) \
_(VL_API_IP6_ND_EVENT, ip6_nd_event, d676f6ca) \
_(VL_API_WANT_IP6_RA_EVENTS, want_ip6_ra_events, 05b454b5) \
_(VL_API_WANT_IP6_RA_EVENTS_REPLY, want_ip6_ra_events_reply, e8d4e804) \
_(VL_API_IP6_RA_EVENT, ip6_ra_event, 170493ab) \
_(VL_API_PROXY_ARP_ADD_DEL, proxy_arp_add_del, 320b4c54) \
_(VL_API_PROXY_ARP_ADD_DEL_REPLY, proxy_arp_add_del_reply, e8d4e804) \
_(VL_API_PROXY_ARP_DUMP, proxy_arp_dump, 51077d14) \
_(VL_API_PROXY_ARP_DETAILS, proxy_arp_details, 9228c150) \
_(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE, proxy_arp_intfc_enable_disable, 69d24598) \
_(VL_API_PROXY_ARP_INTFC_ENABLE_DISABLE_REPLY, proxy_arp_intfc_enable_disable_reply, e8d4e804) \
_(VL_API_PROXY_ARP_INTFC_DUMP, proxy_arp_intfc_dump, 51077d14) \
_(VL_API_PROXY_ARP_INTFC_DETAILS, proxy_arp_intfc_details, f6458e5f) \
_(VL_API_RESET_FIB, reset_fib, 8553ebd9) \
_(VL_API_RESET_FIB_REPLY, reset_fib_reply, e8d4e804) \
_(VL_API_SET_ARP_NEIGHBOR_LIMIT, set_arp_neighbor_limit, 97d01fd6) \
_(VL_API_SET_ARP_NEIGHBOR_LIMIT_REPLY, set_arp_neighbor_limit_reply, e8d4e804) \
_(VL_API_IOAM_ENABLE, ioam_enable, 9392e032) \
_(VL_API_IOAM_ENABLE_REPLY, ioam_enable_reply, e8d4e804) \
_(VL_API_IOAM_DISABLE, ioam_disable, 6b16a45e) \
_(VL_API_IOAM_DISABLE_REPLY, ioam_disable_reply, e8d4e804) \
_(VL_API_IP_REASSEMBLY_SET, ip_reassembly_set, 403051cd) \
_(VL_API_IP_REASSEMBLY_SET_REPLY, ip_reassembly_set_reply, e8d4e804) \
_(VL_API_IP_REASSEMBLY_GET, ip_reassembly_get, 6fe91190) \
_(VL_API_IP_REASSEMBLY_GET_REPLY, ip_reassembly_get_reply, c96e518d) \
_(VL_API_IP_REASSEMBLY_ENABLE_DISABLE, ip_reassembly_enable_disable, bb8dc5d0) \
_(VL_API_IP_REASSEMBLY_ENABLE_DISABLE_REPLY, ip_reassembly_enable_disable_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_ip_api
#define included_ip_api
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

#ifndef _vl_api_defined_fib_mpls_label
#define _vl_api_defined_fib_mpls_label
typedef VL_API_PACKED(struct _vl_api_fib_mpls_label {
    u8 is_uniform;
    u32 label;
    u8 ttl;
    u8 exp;
}) vl_api_fib_mpls_label_t;
#endif

#ifndef _vl_api_defined_fib_path_nh_proto
#define _vl_api_defined_fib_path_nh_proto
typedef enum {
    FIB_API_PATH_NH_PROTO_IP4 = 0,
    FIB_API_PATH_NH_PROTO_IP6 = 1,
    FIB_API_PATH_NH_PROTO_MPLS = 2,
    FIB_API_PATH_NH_PROTO_ETHERNET = 3,
    FIB_API_PATH_NH_PROTO_BIER = 4,
} vl_api_fib_path_nh_proto_t;
#endif

#ifndef _vl_api_defined_fib_path_flags
#define _vl_api_defined_fib_path_flags
typedef enum {
    FIB_API_PATH_FLAG_NONE = 0,
    FIB_API_PATH_FLAG_RESOLVE_VIA_ATTACHED = 1,
    FIB_API_PATH_FLAG_RESOLVE_VIA_HOST = 2,
    FIB_API_PATH_FLAG_POP_PW_CW = 4,
} vl_api_fib_path_flags_t;
#endif

#ifndef _vl_api_defined_fib_path_nh
#define _vl_api_defined_fib_path_nh
typedef VL_API_PACKED(struct _vl_api_fib_path_nh {
    vl_api_address_union_t address;
    u32 via_label;
    u32 obj_id;
    u32 classify_table_index;
}) vl_api_fib_path_nh_t;
#endif

#ifndef _vl_api_defined_fib_path_type
#define _vl_api_defined_fib_path_type
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
} vl_api_fib_path_type_t;
#endif

#ifndef _vl_api_defined_fib_path
#define _vl_api_defined_fib_path
typedef VL_API_PACKED(struct _vl_api_fib_path {
    u32 sw_if_index;
    u32 table_id;
    u32 rpf_id;
    u8 weight;
    u8 preference;
    vl_api_fib_path_type_t type;
    vl_api_fib_path_flags_t flags;
    vl_api_fib_path_nh_proto_t proto;
    vl_api_fib_path_nh_t nh;
    u8 n_labels;
    vl_api_fib_mpls_label_t label_stack[16];
}) vl_api_fib_path_t;
#endif

#ifndef _vl_api_defined_mac_address
#define _vl_api_defined_mac_address
typedef u8 vl_api_mac_address_t[6];
#endif

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

#ifndef _vl_api_defined_fib_mpls_label
#define _vl_api_defined_fib_mpls_label
typedef VL_API_PACKED(struct _vl_api_fib_mpls_label {
    u8 is_uniform;
    u32 label;
    u8 ttl;
    u8 exp;
}) vl_api_fib_mpls_label_t;
#endif

#ifndef _vl_api_defined_fib_path_nh_proto
#define _vl_api_defined_fib_path_nh_proto
typedef enum {
    FIB_API_PATH_NH_PROTO_IP4 = 0,
    FIB_API_PATH_NH_PROTO_IP6 = 1,
    FIB_API_PATH_NH_PROTO_MPLS = 2,
    FIB_API_PATH_NH_PROTO_ETHERNET = 3,
    FIB_API_PATH_NH_PROTO_BIER = 4,
} vl_api_fib_path_nh_proto_t;
#endif

#ifndef _vl_api_defined_fib_path_flags
#define _vl_api_defined_fib_path_flags
typedef enum {
    FIB_API_PATH_FLAG_NONE = 0,
    FIB_API_PATH_FLAG_RESOLVE_VIA_ATTACHED = 1,
    FIB_API_PATH_FLAG_RESOLVE_VIA_HOST = 2,
    FIB_API_PATH_FLAG_POP_PW_CW = 4,
} vl_api_fib_path_flags_t;
#endif

#ifndef _vl_api_defined_fib_path_nh
#define _vl_api_defined_fib_path_nh
typedef VL_API_PACKED(struct _vl_api_fib_path_nh {
    vl_api_address_union_t address;
    u32 via_label;
    u32 obj_id;
    u32 classify_table_index;
}) vl_api_fib_path_nh_t;
#endif

#ifndef _vl_api_defined_fib_path_type
#define _vl_api_defined_fib_path_type
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
} vl_api_fib_path_type_t;
#endif

#ifndef _vl_api_defined_fib_path
#define _vl_api_defined_fib_path
typedef VL_API_PACKED(struct _vl_api_fib_path {
    u32 sw_if_index;
    u32 table_id;
    u32 rpf_id;
    u8 weight;
    u8 preference;
    vl_api_fib_path_type_t type;
    vl_api_fib_path_flags_t flags;
    vl_api_fib_path_nh_proto_t proto;
    vl_api_fib_path_nh_t nh;
    u8 n_labels;
    vl_api_fib_mpls_label_t label_stack[16];
}) vl_api_fib_path_t;
#endif

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

#ifndef _vl_api_defined_mfib_itf_flags
#define _vl_api_defined_mfib_itf_flags
typedef enum {
    MFIB_API_ITF_FLAG_NONE = 0,
    MFIB_API_ITF_FLAG_NEGATE_SIGNAL = 1,
    MFIB_API_ITF_FLAG_ACCEPT = 2,
    MFIB_API_ITF_FLAG_FORWARD = 4,
    MFIB_API_ITF_FLAG_SIGNAL_PRESENT = 8,
    MFIB_API_ITF_FLAG_DONT_PRESERVE = 16,
} vl_api_mfib_itf_flags_t;
#endif

#ifndef _vl_api_defined_mfib_path
#define _vl_api_defined_mfib_path
typedef VL_API_PACKED(struct _vl_api_mfib_path {
    vl_api_mfib_itf_flags_t itf_flags;
    vl_api_fib_path_t path;
}) vl_api_mfib_path_t;
#endif

#ifndef _vl_api_defined_ip_table
#define _vl_api_defined_ip_table
typedef VL_API_PACKED(struct _vl_api_ip_table {
    u32 table_id;
    u8 is_ip6;
    u8 name[64];
}) vl_api_ip_table_t;
#endif

#ifndef _vl_api_defined_ip_route
#define _vl_api_defined_ip_route
typedef VL_API_PACKED(struct _vl_api_ip_route {
    u32 table_id;
    u32 stats_index;
    vl_api_prefix_t prefix;
    u8 n_paths;
    vl_api_fib_path_t paths[0];
}) vl_api_ip_route_t;
#endif

#ifndef _vl_api_defined_ip_neighbor_flags
#define _vl_api_defined_ip_neighbor_flags
typedef enum {
    IP_API_NEIGHBOR_FLAG_NONE = 0,
    IP_API_NEIGHBOR_FLAG_STATIC = 1,
    IP_API_NEIGHBOR_FLAG_NO_FIB_ENTRY = 2,
} vl_api_ip_neighbor_flags_t;
#endif

#ifndef _vl_api_defined_ip_neighbor
#define _vl_api_defined_ip_neighbor
typedef VL_API_PACKED(struct _vl_api_ip_neighbor {
    u32 sw_if_index;
    vl_api_ip_neighbor_flags_t flags;
    vl_api_mac_address_t mac_address;
    vl_api_address_t ip_address;
}) vl_api_ip_neighbor_t;
#endif

#ifndef _vl_api_defined_ip_mroute
#define _vl_api_defined_ip_mroute
typedef VL_API_PACKED(struct _vl_api_ip_mroute {
    u32 table_id;
    u32 entry_flags;
    u32 rpf_id;
    vl_api_mprefix_t prefix;
    u8 n_paths;
    vl_api_mfib_path_t paths[0];
}) vl_api_ip_mroute_t;
#endif

#ifndef _vl_api_defined_punt_redirect
#define _vl_api_defined_punt_redirect
typedef VL_API_PACKED(struct _vl_api_punt_redirect {
    u32 rx_sw_if_index;
    u32 tx_sw_if_index;
    vl_api_address_t nh;
}) vl_api_punt_redirect_t;
#endif

#ifndef _vl_api_defined_ip6_ra_prefix_info
#define _vl_api_defined_ip6_ra_prefix_info
typedef VL_API_PACKED(struct _vl_api_ip6_ra_prefix_info {
    vl_api_prefix_t prefix;
    u8 flags;
    u32 valid_time;
    u32 preferred_time;
}) vl_api_ip6_ra_prefix_info_t;
#endif

#ifndef _vl_api_defined_proxy_arp
#define _vl_api_defined_proxy_arp
typedef VL_API_PACKED(struct _vl_api_proxy_arp {
    u32 table_id;
    vl_api_ip4_address_t low;
    vl_api_ip4_address_t hi;
}) vl_api_proxy_arp_t;
#endif

#ifndef _vl_api_defined_ip_table_add_del
#define _vl_api_defined_ip_table_add_del
typedef VL_API_PACKED(struct _vl_api_ip_table_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_ip_table_t table;
}) vl_api_ip_table_add_del_t;
#endif

#ifndef _vl_api_defined_ip_table_add_del_reply
#define _vl_api_defined_ip_table_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_table_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_table_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_table_dump
#define _vl_api_defined_ip_table_dump
typedef VL_API_PACKED(struct _vl_api_ip_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ip_table_dump_t;
#endif

#ifndef _vl_api_defined_ip_table_details
#define _vl_api_defined_ip_table_details
typedef VL_API_PACKED(struct _vl_api_ip_table_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip_table_t table;
}) vl_api_ip_table_details_t;
#endif

#ifndef _vl_api_defined_ip_route_add_del
#define _vl_api_defined_ip_route_add_del
typedef VL_API_PACKED(struct _vl_api_ip_route_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_multipath;
    vl_api_ip_route_t route;
}) vl_api_ip_route_add_del_t;
#endif

#ifndef _vl_api_defined_ip_route_add_del_reply
#define _vl_api_defined_ip_route_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_route_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
}) vl_api_ip_route_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_route_dump
#define _vl_api_defined_ip_route_dump
typedef VL_API_PACKED(struct _vl_api_ip_route_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
}) vl_api_ip_route_dump_t;
#endif

#ifndef _vl_api_defined_ip_route_details
#define _vl_api_defined_ip_route_details
typedef VL_API_PACKED(struct _vl_api_ip_route_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip_route_t route;
}) vl_api_ip_route_details_t;
#endif

#ifndef _vl_api_defined_ip_neighbor_add_del
#define _vl_api_defined_ip_neighbor_add_del
typedef VL_API_PACKED(struct _vl_api_ip_neighbor_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_ip_neighbor_t neighbor;
}) vl_api_ip_neighbor_add_del_t;
#endif

#ifndef _vl_api_defined_ip_neighbor_add_del_reply
#define _vl_api_defined_ip_neighbor_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_neighbor_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
}) vl_api_ip_neighbor_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_neighbor_dump
#define _vl_api_defined_ip_neighbor_dump
typedef VL_API_PACKED(struct _vl_api_ip_neighbor_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
}) vl_api_ip_neighbor_dump_t;
#endif

#ifndef _vl_api_defined_ip_neighbor_details
#define _vl_api_defined_ip_neighbor_details
typedef VL_API_PACKED(struct _vl_api_ip_neighbor_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip_neighbor_t neighbor;
}) vl_api_ip_neighbor_details_t;
#endif

#ifndef _vl_api_defined_set_ip_flow_hash
#define _vl_api_defined_set_ip_flow_hash
typedef VL_API_PACKED(struct _vl_api_set_ip_flow_hash {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vrf_id;
    u8 is_ipv6;
    u8 src;
    u8 dst;
    u8 sport;
    u8 dport;
    u8 proto;
    u8 reverse;
    u8 symmetric;
}) vl_api_set_ip_flow_hash_t;
#endif

#ifndef _vl_api_defined_set_ip_flow_hash_reply
#define _vl_api_defined_set_ip_flow_hash_reply
typedef VL_API_PACKED(struct _vl_api_set_ip_flow_hash_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_set_ip_flow_hash_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_config
#define _vl_api_defined_sw_interface_ip6nd_ra_config
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6nd_ra_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
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
}) vl_api_sw_interface_ip6nd_ra_config_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_config_reply
#define _vl_api_defined_sw_interface_ip6nd_ra_config_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6nd_ra_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_ip6nd_ra_config_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_prefix
#define _vl_api_defined_sw_interface_ip6nd_ra_prefix
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6nd_ra_prefix {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    vl_api_prefix_t prefix;
    u8 use_default;
    u8 no_advertise;
    u8 off_link;
    u8 no_autoconfig;
    u8 no_onlink;
    u8 is_no;
    u32 val_lifetime;
    u32 pref_lifetime;
}) vl_api_sw_interface_ip6nd_ra_prefix_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_prefix_reply
#define _vl_api_defined_sw_interface_ip6nd_ra_prefix_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6nd_ra_prefix_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_ip6nd_ra_prefix_reply_t;
#endif

#ifndef _vl_api_defined_ip6nd_proxy_add_del
#define _vl_api_defined_ip6nd_proxy_add_del
typedef VL_API_PACKED(struct _vl_api_ip6nd_proxy_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_del;
    vl_api_ip6_address_t ip;
}) vl_api_ip6nd_proxy_add_del_t;
#endif

#ifndef _vl_api_defined_ip6nd_proxy_add_del_reply
#define _vl_api_defined_ip6nd_proxy_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip6nd_proxy_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip6nd_proxy_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip6nd_proxy_details
#define _vl_api_defined_ip6nd_proxy_details
typedef VL_API_PACKED(struct _vl_api_ip6nd_proxy_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    vl_api_ip6_address_t ip;
}) vl_api_ip6nd_proxy_details_t;
#endif

#ifndef _vl_api_defined_ip6nd_proxy_dump
#define _vl_api_defined_ip6nd_proxy_dump
typedef VL_API_PACKED(struct _vl_api_ip6nd_proxy_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ip6nd_proxy_dump_t;
#endif

#ifndef _vl_api_defined_ip6nd_send_router_solicitation
#define _vl_api_defined_ip6nd_send_router_solicitation
typedef VL_API_PACKED(struct _vl_api_ip6nd_send_router_solicitation {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 irt;
    u32 mrt;
    u32 mrc;
    u32 mrd;
    u32 sw_if_index;
    u8 stop;
}) vl_api_ip6nd_send_router_solicitation_t;
#endif

#ifndef _vl_api_defined_ip6nd_send_router_solicitation_reply
#define _vl_api_defined_ip6nd_send_router_solicitation_reply
typedef VL_API_PACKED(struct _vl_api_ip6nd_send_router_solicitation_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip6nd_send_router_solicitation_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6_enable_disable
#define _vl_api_defined_sw_interface_ip6_enable_disable
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable;
}) vl_api_sw_interface_ip6_enable_disable_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6_enable_disable_reply
#define _vl_api_defined_sw_interface_ip6_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_ip6_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6_set_link_local_address
#define _vl_api_defined_sw_interface_ip6_set_link_local_address
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6_set_link_local_address {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 address[16];
}) vl_api_sw_interface_ip6_set_link_local_address_t;
#endif

#ifndef _vl_api_defined_sw_interface_ip6_set_link_local_address_reply
#define _vl_api_defined_sw_interface_ip6_set_link_local_address_reply
typedef VL_API_PACKED(struct _vl_api_sw_interface_ip6_set_link_local_address_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sw_interface_ip6_set_link_local_address_reply_t;
#endif

#ifndef _vl_api_defined_ip_mtable_dump
#define _vl_api_defined_ip_mtable_dump
typedef VL_API_PACKED(struct _vl_api_ip_mtable_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ip_mtable_dump_t;
#endif

#ifndef _vl_api_defined_ip_mtable_details
#define _vl_api_defined_ip_mtable_details
typedef VL_API_PACKED(struct _vl_api_ip_mtable_details {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
}) vl_api_ip_mtable_details_t;
#endif

#ifndef _vl_api_defined_ip_mroute_add_del
#define _vl_api_defined_ip_mroute_add_del
typedef VL_API_PACKED(struct _vl_api_ip_mroute_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_multipath;
    vl_api_ip_mroute_t route;
}) vl_api_ip_mroute_add_del_t;
#endif

#ifndef _vl_api_defined_ip_mroute_add_del_reply
#define _vl_api_defined_ip_mroute_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_mroute_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stats_index;
}) vl_api_ip_mroute_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_mroute_dump
#define _vl_api_defined_ip_mroute_dump
typedef VL_API_PACKED(struct _vl_api_ip_mroute_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip_table_t table;
}) vl_api_ip_mroute_dump_t;
#endif

#ifndef _vl_api_defined_ip_mroute_details
#define _vl_api_defined_ip_mroute_details
typedef VL_API_PACKED(struct _vl_api_ip_mroute_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ip_mroute_t route;
}) vl_api_ip_mroute_details_t;
#endif

#ifndef _vl_api_defined_ip_address_details
#define _vl_api_defined_ip_address_details
typedef VL_API_PACKED(struct _vl_api_ip_address_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    vl_api_address_with_prefix_t prefix;
}) vl_api_ip_address_details_t;
#endif

#ifndef _vl_api_defined_ip_address_dump
#define _vl_api_defined_ip_address_dump
typedef VL_API_PACKED(struct _vl_api_ip_address_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
}) vl_api_ip_address_dump_t;
#endif

#ifndef _vl_api_defined_ip_unnumbered_details
#define _vl_api_defined_ip_unnumbered_details
typedef VL_API_PACKED(struct _vl_api_ip_unnumbered_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 ip_sw_if_index;
}) vl_api_ip_unnumbered_details_t;
#endif

#ifndef _vl_api_defined_ip_unnumbered_dump
#define _vl_api_defined_ip_unnumbered_dump
typedef VL_API_PACKED(struct _vl_api_ip_unnumbered_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_ip_unnumbered_dump_t;
#endif

#ifndef _vl_api_defined_ip_details
#define _vl_api_defined_ip_details
typedef VL_API_PACKED(struct _vl_api_ip_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
}) vl_api_ip_details_t;
#endif

#ifndef _vl_api_defined_ip_dump
#define _vl_api_defined_ip_dump
typedef VL_API_PACKED(struct _vl_api_ip_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ipv6;
}) vl_api_ip_dump_t;
#endif

#ifndef _vl_api_defined_mfib_signal_dump
#define _vl_api_defined_mfib_signal_dump
typedef VL_API_PACKED(struct _vl_api_mfib_signal_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_mfib_signal_dump_t;
#endif

#ifndef _vl_api_defined_mfib_signal_details
#define _vl_api_defined_mfib_signal_details
typedef VL_API_PACKED(struct _vl_api_mfib_signal_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 table_id;
    vl_api_mprefix_t prefix;
    u16 ip_packet_len;
    u8 ip_packet_data[256];
}) vl_api_mfib_signal_details_t;
#endif

#ifndef _vl_api_defined_ip_punt_police
#define _vl_api_defined_ip_punt_police
typedef VL_API_PACKED(struct _vl_api_ip_punt_police {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 policer_index;
    u8 is_add;
    u8 is_ip6;
}) vl_api_ip_punt_police_t;
#endif

#ifndef _vl_api_defined_ip_punt_police_reply
#define _vl_api_defined_ip_punt_police_reply
typedef VL_API_PACKED(struct _vl_api_ip_punt_police_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_punt_police_reply_t;
#endif

#ifndef _vl_api_defined_ip_punt_redirect
#define _vl_api_defined_ip_punt_redirect
typedef VL_API_PACKED(struct _vl_api_ip_punt_redirect {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_redirect_t punt;
    u8 is_add;
}) vl_api_ip_punt_redirect_t;
#endif

#ifndef _vl_api_defined_ip_punt_redirect_reply
#define _vl_api_defined_ip_punt_redirect_reply
typedef VL_API_PACKED(struct _vl_api_ip_punt_redirect_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_punt_redirect_reply_t;
#endif

#ifndef _vl_api_defined_ip_punt_redirect_dump
#define _vl_api_defined_ip_punt_redirect_dump
typedef VL_API_PACKED(struct _vl_api_ip_punt_redirect_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_ipv6;
}) vl_api_ip_punt_redirect_dump_t;
#endif

#ifndef _vl_api_defined_ip_punt_redirect_details
#define _vl_api_defined_ip_punt_redirect_details
typedef VL_API_PACKED(struct _vl_api_ip_punt_redirect_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_punt_redirect_t punt;
}) vl_api_ip_punt_redirect_details_t;
#endif

#ifndef _vl_api_defined_ip_container_proxy_add_del
#define _vl_api_defined_ip_container_proxy_add_del
typedef VL_API_PACKED(struct _vl_api_ip_container_proxy_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_prefix_t pfx;
    u32 sw_if_index;
    u8 is_add;
}) vl_api_ip_container_proxy_add_del_t;
#endif

#ifndef _vl_api_defined_ip_container_proxy_add_del_reply
#define _vl_api_defined_ip_container_proxy_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_container_proxy_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_container_proxy_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_container_proxy_dump
#define _vl_api_defined_ip_container_proxy_dump
typedef VL_API_PACKED(struct _vl_api_ip_container_proxy_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ip_container_proxy_dump_t;
#endif

#ifndef _vl_api_defined_ip_container_proxy_details
#define _vl_api_defined_ip_container_proxy_details
typedef VL_API_PACKED(struct _vl_api_ip_container_proxy_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    vl_api_prefix_t prefix;
}) vl_api_ip_container_proxy_details_t;
#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_add_del
#define _vl_api_defined_ip_source_and_port_range_check_add_del
typedef VL_API_PACKED(struct _vl_api_ip_source_and_port_range_check_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_prefix_t prefix;
    u8 number_of_ranges;
    u16 low_ports[32];
    u16 high_ports[32];
    u32 vrf_id;
}) vl_api_ip_source_and_port_range_check_add_del_t;
#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_add_del_reply
#define _vl_api_defined_ip_source_and_port_range_check_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_source_and_port_range_check_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_source_and_port_range_check_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_interface_add_del
#define _vl_api_defined_ip_source_and_port_range_check_interface_add_del
typedef VL_API_PACKED(struct _vl_api_ip_source_and_port_range_check_interface_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 sw_if_index;
    u32 tcp_in_vrf_id;
    u32 tcp_out_vrf_id;
    u32 udp_in_vrf_id;
    u32 udp_out_vrf_id;
}) vl_api_ip_source_and_port_range_check_interface_add_del_t;
#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_interface_add_del_reply
#define _vl_api_defined_ip_source_and_port_range_check_interface_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_source_and_port_range_check_interface_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_source_and_port_range_check_interface_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_source_check_interface_add_del
#define _vl_api_defined_ip_source_check_interface_add_del
typedef VL_API_PACKED(struct _vl_api_ip_source_check_interface_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 loose;
    u32 sw_if_index;
}) vl_api_ip_source_check_interface_add_del_t;
#endif

#ifndef _vl_api_defined_ip_source_check_interface_add_del_reply
#define _vl_api_defined_ip_source_check_interface_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ip_source_check_interface_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_source_check_interface_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ip_scan_neighbor_enable_disable
#define _vl_api_defined_ip_scan_neighbor_enable_disable
typedef VL_API_PACKED(struct _vl_api_ip_scan_neighbor_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 mode;
    u8 scan_interval;
    u8 max_proc_time;
    u8 max_update;
    u8 scan_int_delay;
    u8 stale_threshold;
}) vl_api_ip_scan_neighbor_enable_disable_t;
#endif

#ifndef _vl_api_defined_ip_scan_neighbor_enable_disable_reply
#define _vl_api_defined_ip_scan_neighbor_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_ip_scan_neighbor_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_scan_neighbor_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_ip_probe_neighbor
#define _vl_api_defined_ip_probe_neighbor
typedef VL_API_PACKED(struct _vl_api_ip_probe_neighbor {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    vl_api_address_t dst;
}) vl_api_ip_probe_neighbor_t;
#endif

#ifndef _vl_api_defined_ip_probe_neighbor_reply
#define _vl_api_defined_ip_probe_neighbor_reply
typedef VL_API_PACKED(struct _vl_api_ip_probe_neighbor_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_probe_neighbor_reply_t;
#endif

#ifndef _vl_api_defined_want_ip4_arp_events
#define _vl_api_defined_want_ip4_arp_events
typedef VL_API_PACKED(struct _vl_api_want_ip4_arp_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 pid;
    vl_api_ip4_address_t ip;
}) vl_api_want_ip4_arp_events_t;
#endif

#ifndef _vl_api_defined_want_ip4_arp_events_reply
#define _vl_api_defined_want_ip4_arp_events_reply
typedef VL_API_PACKED(struct _vl_api_want_ip4_arp_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_ip4_arp_events_reply_t;
#endif

#ifndef _vl_api_defined_ip4_arp_event
#define _vl_api_defined_ip4_arp_event
typedef VL_API_PACKED(struct _vl_api_ip4_arp_event {
    u16 _vl_msg_id;
    u32 client_index;
    vl_api_ip4_address_t ip;
    u32 pid;
    u32 sw_if_index;
    vl_api_mac_address_t mac;
    u8 mac_ip;
}) vl_api_ip4_arp_event_t;
#endif

#ifndef _vl_api_defined_want_ip6_nd_events
#define _vl_api_defined_want_ip6_nd_events
typedef VL_API_PACKED(struct _vl_api_want_ip6_nd_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 pid;
    vl_api_ip6_address_t ip;
}) vl_api_want_ip6_nd_events_t;
#endif

#ifndef _vl_api_defined_want_ip6_nd_events_reply
#define _vl_api_defined_want_ip6_nd_events_reply
typedef VL_API_PACKED(struct _vl_api_want_ip6_nd_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_ip6_nd_events_reply_t;
#endif

#ifndef _vl_api_defined_ip6_nd_event
#define _vl_api_defined_ip6_nd_event
typedef VL_API_PACKED(struct _vl_api_ip6_nd_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 sw_if_index;
    vl_api_ip6_address_t ip;
    vl_api_mac_address_t mac;
    u8 mac_ip;
}) vl_api_ip6_nd_event_t;
#endif

#ifndef _vl_api_defined_want_ip6_ra_events
#define _vl_api_defined_want_ip6_ra_events
typedef VL_API_PACKED(struct _vl_api_want_ip6_ra_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 pid;
}) vl_api_want_ip6_ra_events_t;
#endif

#ifndef _vl_api_defined_want_ip6_ra_events_reply
#define _vl_api_defined_want_ip6_ra_events_reply
typedef VL_API_PACKED(struct _vl_api_want_ip6_ra_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_ip6_ra_events_reply_t;
#endif

#ifndef _vl_api_defined_ip6_ra_event
#define _vl_api_defined_ip6_ra_event
typedef VL_API_PACKED(struct _vl_api_ip6_ra_event {
    u16 _vl_msg_id;
    u32 client_index;
    u32 pid;
    u32 sw_if_index;
    vl_api_ip6_address_t router_addr;
    u8 current_hop_limit;
    u8 flags;
    u16 router_lifetime_in_sec;
    u32 neighbor_reachable_time_in_msec;
    u32 time_in_msec_between_retransmitted_neighbor_solicitations;
    u32 n_prefixes;
    vl_api_ip6_ra_prefix_info_t prefixes[0];
}) vl_api_ip6_ra_event_t;
#endif

#ifndef _vl_api_defined_proxy_arp_add_del
#define _vl_api_defined_proxy_arp_add_del
typedef VL_API_PACKED(struct _vl_api_proxy_arp_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_proxy_arp_t proxy;
}) vl_api_proxy_arp_add_del_t;
#endif

#ifndef _vl_api_defined_proxy_arp_add_del_reply
#define _vl_api_defined_proxy_arp_add_del_reply
typedef VL_API_PACKED(struct _vl_api_proxy_arp_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_proxy_arp_add_del_reply_t;
#endif

#ifndef _vl_api_defined_proxy_arp_dump
#define _vl_api_defined_proxy_arp_dump
typedef VL_API_PACKED(struct _vl_api_proxy_arp_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_proxy_arp_dump_t;
#endif

#ifndef _vl_api_defined_proxy_arp_details
#define _vl_api_defined_proxy_arp_details
typedef VL_API_PACKED(struct _vl_api_proxy_arp_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_proxy_arp_t proxy;
}) vl_api_proxy_arp_details_t;
#endif

#ifndef _vl_api_defined_proxy_arp_intfc_enable_disable
#define _vl_api_defined_proxy_arp_intfc_enable_disable
typedef VL_API_PACKED(struct _vl_api_proxy_arp_intfc_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable_disable;
}) vl_api_proxy_arp_intfc_enable_disable_t;
#endif

#ifndef _vl_api_defined_proxy_arp_intfc_enable_disable_reply
#define _vl_api_defined_proxy_arp_intfc_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_proxy_arp_intfc_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_proxy_arp_intfc_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_proxy_arp_intfc_dump
#define _vl_api_defined_proxy_arp_intfc_dump
typedef VL_API_PACKED(struct _vl_api_proxy_arp_intfc_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_proxy_arp_intfc_dump_t;
#endif

#ifndef _vl_api_defined_proxy_arp_intfc_details
#define _vl_api_defined_proxy_arp_intfc_details
typedef VL_API_PACKED(struct _vl_api_proxy_arp_intfc_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
}) vl_api_proxy_arp_intfc_details_t;
#endif

#ifndef _vl_api_defined_reset_fib
#define _vl_api_defined_reset_fib
typedef VL_API_PACKED(struct _vl_api_reset_fib {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vrf_id;
    u8 is_ipv6;
}) vl_api_reset_fib_t;
#endif

#ifndef _vl_api_defined_reset_fib_reply
#define _vl_api_defined_reset_fib_reply
typedef VL_API_PACKED(struct _vl_api_reset_fib_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_reset_fib_reply_t;
#endif

#ifndef _vl_api_defined_set_arp_neighbor_limit
#define _vl_api_defined_set_arp_neighbor_limit
typedef VL_API_PACKED(struct _vl_api_set_arp_neighbor_limit {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ipv6;
    u32 arp_neighbor_limit;
}) vl_api_set_arp_neighbor_limit_t;
#endif

#ifndef _vl_api_defined_set_arp_neighbor_limit_reply
#define _vl_api_defined_set_arp_neighbor_limit_reply
typedef VL_API_PACKED(struct _vl_api_set_arp_neighbor_limit_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_set_arp_neighbor_limit_reply_t;
#endif

#ifndef _vl_api_defined_ioam_enable
#define _vl_api_defined_ioam_enable
typedef VL_API_PACKED(struct _vl_api_ioam_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 id;
    u8 seqno;
    u8 analyse;
    u8 pot_enable;
    u8 trace_enable;
    u32 node_id;
}) vl_api_ioam_enable_t;
#endif

#ifndef _vl_api_defined_ioam_enable_reply
#define _vl_api_defined_ioam_enable_reply
typedef VL_API_PACKED(struct _vl_api_ioam_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ioam_enable_reply_t;
#endif

#ifndef _vl_api_defined_ioam_disable
#define _vl_api_defined_ioam_disable
typedef VL_API_PACKED(struct _vl_api_ioam_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 id;
}) vl_api_ioam_disable_t;
#endif

#ifndef _vl_api_defined_ioam_disable_reply
#define _vl_api_defined_ioam_disable_reply
typedef VL_API_PACKED(struct _vl_api_ioam_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ioam_disable_reply_t;
#endif

#ifndef _vl_api_defined_ip_reassembly_set
#define _vl_api_defined_ip_reassembly_set
typedef VL_API_PACKED(struct _vl_api_ip_reassembly_set {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 timeout_ms;
    u32 max_reassemblies;
    u32 max_reassembly_length;
    u32 expire_walk_interval_ms;
    u8 is_ip6;
}) vl_api_ip_reassembly_set_t;
#endif

#ifndef _vl_api_defined_ip_reassembly_set_reply
#define _vl_api_defined_ip_reassembly_set_reply
typedef VL_API_PACKED(struct _vl_api_ip_reassembly_set_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_reassembly_set_reply_t;
#endif

#ifndef _vl_api_defined_ip_reassembly_get
#define _vl_api_defined_ip_reassembly_get
typedef VL_API_PACKED(struct _vl_api_ip_reassembly_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ip6;
}) vl_api_ip_reassembly_get_t;
#endif

#ifndef _vl_api_defined_ip_reassembly_get_reply
#define _vl_api_defined_ip_reassembly_get_reply
typedef VL_API_PACKED(struct _vl_api_ip_reassembly_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 timeout_ms;
    u32 max_reassemblies;
    u32 max_reassembly_length;
    u32 expire_walk_interval_ms;
    u8 is_ip6;
}) vl_api_ip_reassembly_get_reply_t;
#endif

#ifndef _vl_api_defined_ip_reassembly_enable_disable
#define _vl_api_defined_ip_reassembly_enable_disable
typedef VL_API_PACKED(struct _vl_api_ip_reassembly_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable_ip4;
    u8 enable_ip6;
}) vl_api_ip_reassembly_enable_disable_t;
#endif

#ifndef _vl_api_defined_ip_reassembly_enable_disable_reply
#define _vl_api_defined_ip_reassembly_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_ip_reassembly_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ip_reassembly_enable_disable_reply_t;
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

#ifndef _vl_api_defined_fib_mpls_label_t_print
#define _vl_api_defined_fib_mpls_label_t_print
static inline void *vl_api_fib_mpls_label_t_print (vl_api_fib_mpls_label_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_mpls_label_t:\n");
    vl_print(handle, "is_uniform: %u\n", a->is_uniform);
    vl_print(handle, "label: %u\n", a->label);
    vl_print(handle, "ttl: %u\n", a->ttl);
    vl_print(handle, "exp: %u\n", a->exp);
    return handle;
}

#endif

#ifndef _vl_api_defined_fib_path_nh_t_print
#define _vl_api_defined_fib_path_nh_t_print
static inline void *vl_api_fib_path_nh_t_print (vl_api_fib_path_nh_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_path_nh_t:\n");
    vl_print(handle, "via_label: %u\n", a->via_label);
    vl_print(handle, "obj_id: %u\n", a->obj_id);
    vl_print(handle, "classify_table_index: %u\n", a->classify_table_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_fib_path_t_print
#define _vl_api_defined_fib_path_t_print
static inline void *vl_api_fib_path_t_print (vl_api_fib_path_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_path_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "rpf_id: %u\n", a->rpf_id);
    vl_print(handle, "weight: %u\n", a->weight);
    vl_print(handle, "preference: %u\n", a->preference);
    vl_print(handle, "n_labels: %u\n", a->n_labels);
    return handle;
}

#endif

/***** manual: vl_api_mac_address_t_print  *****/

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

#ifndef _vl_api_defined_fib_mpls_label_t_print
#define _vl_api_defined_fib_mpls_label_t_print
static inline void *vl_api_fib_mpls_label_t_print (vl_api_fib_mpls_label_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_mpls_label_t:\n");
    vl_print(handle, "is_uniform: %u\n", a->is_uniform);
    vl_print(handle, "label: %u\n", a->label);
    vl_print(handle, "ttl: %u\n", a->ttl);
    vl_print(handle, "exp: %u\n", a->exp);
    return handle;
}

#endif

#ifndef _vl_api_defined_fib_path_nh_t_print
#define _vl_api_defined_fib_path_nh_t_print
static inline void *vl_api_fib_path_nh_t_print (vl_api_fib_path_nh_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_path_nh_t:\n");
    vl_print(handle, "via_label: %u\n", a->via_label);
    vl_print(handle, "obj_id: %u\n", a->obj_id);
    vl_print(handle, "classify_table_index: %u\n", a->classify_table_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_fib_path_t_print
#define _vl_api_defined_fib_path_t_print
static inline void *vl_api_fib_path_t_print (vl_api_fib_path_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_path_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "rpf_id: %u\n", a->rpf_id);
    vl_print(handle, "weight: %u\n", a->weight);
    vl_print(handle, "preference: %u\n", a->preference);
    vl_print(handle, "n_labels: %u\n", a->n_labels);
    return handle;
}

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

#ifndef _vl_api_defined_mfib_path_t_print
#define _vl_api_defined_mfib_path_t_print
static inline void *vl_api_mfib_path_t_print (vl_api_mfib_path_t *a,void *handle)
{
    vl_print(handle, "vl_api_mfib_path_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_table_t_print
#define _vl_api_defined_ip_table_t_print
static inline void *vl_api_ip_table_t_print (vl_api_ip_table_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_table_t:\n");
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_route_t_print
#define _vl_api_defined_ip_route_t_print
static inline void *vl_api_ip_route_t_print (vl_api_ip_route_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_route_t:\n");
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "stats_index: %u\n", a->stats_index);
    vl_print(handle, "n_paths: %u\n", a->n_paths);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_neighbor_t_print
#define _vl_api_defined_ip_neighbor_t_print
static inline void *vl_api_ip_neighbor_t_print (vl_api_ip_neighbor_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_neighbor_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_mroute_t_print
#define _vl_api_defined_ip_mroute_t_print
static inline void *vl_api_ip_mroute_t_print (vl_api_ip_mroute_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_mroute_t:\n");
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "entry_flags: %u\n", a->entry_flags);
    vl_print(handle, "rpf_id: %u\n", a->rpf_id);
    vl_print(handle, "n_paths: %u\n", a->n_paths);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_redirect_t_print
#define _vl_api_defined_punt_redirect_t_print
static inline void *vl_api_punt_redirect_t_print (vl_api_punt_redirect_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_redirect_t:\n");
    vl_print(handle, "rx_sw_if_index: %u\n", a->rx_sw_if_index);
    vl_print(handle, "tx_sw_if_index: %u\n", a->tx_sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6_ra_prefix_info_t_print
#define _vl_api_defined_ip6_ra_prefix_info_t_print
static inline void *vl_api_ip6_ra_prefix_info_t_print (vl_api_ip6_ra_prefix_info_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6_ra_prefix_info_t:\n");
    vl_print(handle, "flags: %u\n", a->flags);
    vl_print(handle, "valid_time: %u\n", a->valid_time);
    vl_print(handle, "preferred_time: %u\n", a->preferred_time);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_t_print
#define _vl_api_defined_proxy_arp_t_print
static inline void *vl_api_proxy_arp_t_print (vl_api_proxy_arp_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_t:\n");
    vl_print(handle, "table_id: %u\n", a->table_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_table_add_del_t_print
#define _vl_api_defined_ip_table_add_del_t_print
static inline void *vl_api_ip_table_add_del_t_print (vl_api_ip_table_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_table_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_table_add_del_reply_t_print
#define _vl_api_defined_ip_table_add_del_reply_t_print
static inline void *vl_api_ip_table_add_del_reply_t_print (vl_api_ip_table_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_table_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_table_dump_t_print
#define _vl_api_defined_ip_table_dump_t_print
static inline void *vl_api_ip_table_dump_t_print (vl_api_ip_table_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_table_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_ip_table_details_t_print  *****/

#ifndef _vl_api_defined_ip_route_add_del_t_print
#define _vl_api_defined_ip_route_add_del_t_print
static inline void *vl_api_ip_route_add_del_t_print (vl_api_ip_route_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_route_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_multipath: %u\n", a->is_multipath);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_route_add_del_reply_t_print
#define _vl_api_defined_ip_route_add_del_reply_t_print
static inline void *vl_api_ip_route_add_del_reply_t_print (vl_api_ip_route_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_route_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "stats_index: %u\n", a->stats_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_route_dump_t_print
#define _vl_api_defined_ip_route_dump_t_print
static inline void *vl_api_ip_route_dump_t_print (vl_api_ip_route_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_route_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_ip_route_details_t_print  *****/

#ifndef _vl_api_defined_ip_neighbor_add_del_t_print
#define _vl_api_defined_ip_neighbor_add_del_t_print
static inline void *vl_api_ip_neighbor_add_del_t_print (vl_api_ip_neighbor_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_neighbor_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_neighbor_add_del_reply_t_print
#define _vl_api_defined_ip_neighbor_add_del_reply_t_print
static inline void *vl_api_ip_neighbor_add_del_reply_t_print (vl_api_ip_neighbor_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_neighbor_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "stats_index: %u\n", a->stats_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_neighbor_dump_t_print
#define _vl_api_defined_ip_neighbor_dump_t_print
static inline void *vl_api_ip_neighbor_dump_t_print (vl_api_ip_neighbor_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_neighbor_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_neighbor_details_t_print
#define _vl_api_defined_ip_neighbor_details_t_print
static inline void *vl_api_ip_neighbor_details_t_print (vl_api_ip_neighbor_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_neighbor_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_ip_flow_hash_t_print
#define _vl_api_defined_set_ip_flow_hash_t_print
static inline void *vl_api_set_ip_flow_hash_t_print (vl_api_set_ip_flow_hash_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_ip_flow_hash_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "src: %u\n", a->src);
    vl_print(handle, "dst: %u\n", a->dst);
    vl_print(handle, "sport: %u\n", a->sport);
    vl_print(handle, "dport: %u\n", a->dport);
    vl_print(handle, "proto: %u\n", a->proto);
    vl_print(handle, "reverse: %u\n", a->reverse);
    vl_print(handle, "symmetric: %u\n", a->symmetric);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_ip_flow_hash_reply_t_print
#define _vl_api_defined_set_ip_flow_hash_reply_t_print
static inline void *vl_api_set_ip_flow_hash_reply_t_print (vl_api_set_ip_flow_hash_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_ip_flow_hash_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_config_t_print
#define _vl_api_defined_sw_interface_ip6nd_ra_config_t_print
static inline void *vl_api_sw_interface_ip6nd_ra_config_t_print (vl_api_sw_interface_ip6nd_ra_config_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6nd_ra_config_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "suppress: %u\n", a->suppress);
    vl_print(handle, "managed: %u\n", a->managed);
    vl_print(handle, "other: %u\n", a->other);
    vl_print(handle, "ll_option: %u\n", a->ll_option);
    vl_print(handle, "send_unicast: %u\n", a->send_unicast);
    vl_print(handle, "cease: %u\n", a->cease);
    vl_print(handle, "is_no: %u\n", a->is_no);
    vl_print(handle, "default_router: %u\n", a->default_router);
    vl_print(handle, "max_interval: %u\n", a->max_interval);
    vl_print(handle, "min_interval: %u\n", a->min_interval);
    vl_print(handle, "lifetime: %u\n", a->lifetime);
    vl_print(handle, "initial_count: %u\n", a->initial_count);
    vl_print(handle, "initial_interval: %u\n", a->initial_interval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_config_reply_t_print
#define _vl_api_defined_sw_interface_ip6nd_ra_config_reply_t_print
static inline void *vl_api_sw_interface_ip6nd_ra_config_reply_t_print (vl_api_sw_interface_ip6nd_ra_config_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6nd_ra_config_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_prefix_t_print
#define _vl_api_defined_sw_interface_ip6nd_ra_prefix_t_print
static inline void *vl_api_sw_interface_ip6nd_ra_prefix_t_print (vl_api_sw_interface_ip6nd_ra_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6nd_ra_prefix_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "use_default: %u\n", a->use_default);
    vl_print(handle, "no_advertise: %u\n", a->no_advertise);
    vl_print(handle, "off_link: %u\n", a->off_link);
    vl_print(handle, "no_autoconfig: %u\n", a->no_autoconfig);
    vl_print(handle, "no_onlink: %u\n", a->no_onlink);
    vl_print(handle, "is_no: %u\n", a->is_no);
    vl_print(handle, "val_lifetime: %u\n", a->val_lifetime);
    vl_print(handle, "pref_lifetime: %u\n", a->pref_lifetime);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_prefix_reply_t_print
#define _vl_api_defined_sw_interface_ip6nd_ra_prefix_reply_t_print
static inline void *vl_api_sw_interface_ip6nd_ra_prefix_reply_t_print (vl_api_sw_interface_ip6nd_ra_prefix_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6nd_ra_prefix_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_add_del_t_print
#define _vl_api_defined_ip6nd_proxy_add_del_t_print
static inline void *vl_api_ip6nd_proxy_add_del_t_print (vl_api_ip6nd_proxy_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6nd_proxy_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_del: %u\n", a->is_del);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_add_del_reply_t_print
#define _vl_api_defined_ip6nd_proxy_add_del_reply_t_print
static inline void *vl_api_ip6nd_proxy_add_del_reply_t_print (vl_api_ip6nd_proxy_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6nd_proxy_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_details_t_print
#define _vl_api_defined_ip6nd_proxy_details_t_print
static inline void *vl_api_ip6nd_proxy_details_t_print (vl_api_ip6nd_proxy_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6nd_proxy_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_dump_t_print
#define _vl_api_defined_ip6nd_proxy_dump_t_print
static inline void *vl_api_ip6nd_proxy_dump_t_print (vl_api_ip6nd_proxy_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6nd_proxy_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6nd_send_router_solicitation_t_print
#define _vl_api_defined_ip6nd_send_router_solicitation_t_print
static inline void *vl_api_ip6nd_send_router_solicitation_t_print (vl_api_ip6nd_send_router_solicitation_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6nd_send_router_solicitation_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "irt: %u\n", a->irt);
    vl_print(handle, "mrt: %u\n", a->mrt);
    vl_print(handle, "mrc: %u\n", a->mrc);
    vl_print(handle, "mrd: %u\n", a->mrd);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "stop: %u\n", a->stop);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6nd_send_router_solicitation_reply_t_print
#define _vl_api_defined_ip6nd_send_router_solicitation_reply_t_print
static inline void *vl_api_ip6nd_send_router_solicitation_reply_t_print (vl_api_ip6nd_send_router_solicitation_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6nd_send_router_solicitation_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_enable_disable_t_print
#define _vl_api_defined_sw_interface_ip6_enable_disable_t_print
static inline void *vl_api_sw_interface_ip6_enable_disable_t_print (vl_api_sw_interface_ip6_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_enable_disable_reply_t_print
#define _vl_api_defined_sw_interface_ip6_enable_disable_reply_t_print
static inline void *vl_api_sw_interface_ip6_enable_disable_reply_t_print (vl_api_sw_interface_ip6_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_set_link_local_address_t_print
#define _vl_api_defined_sw_interface_ip6_set_link_local_address_t_print
static inline void *vl_api_sw_interface_ip6_set_link_local_address_t_print (vl_api_sw_interface_ip6_set_link_local_address_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6_set_link_local_address_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_set_link_local_address_reply_t_print
#define _vl_api_defined_sw_interface_ip6_set_link_local_address_reply_t_print
static inline void *vl_api_sw_interface_ip6_set_link_local_address_reply_t_print (vl_api_sw_interface_ip6_set_link_local_address_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_ip6_set_link_local_address_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_mtable_dump_t_print
#define _vl_api_defined_ip_mtable_dump_t_print
static inline void *vl_api_ip_mtable_dump_t_print (vl_api_ip_mtable_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_mtable_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_mtable_details_t_print
#define _vl_api_defined_ip_mtable_details_t_print
static inline void *vl_api_ip_mtable_details_t_print (vl_api_ip_mtable_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_mtable_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_mroute_add_del_t_print
#define _vl_api_defined_ip_mroute_add_del_t_print
static inline void *vl_api_ip_mroute_add_del_t_print (vl_api_ip_mroute_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_mroute_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_multipath: %u\n", a->is_multipath);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_mroute_add_del_reply_t_print
#define _vl_api_defined_ip_mroute_add_del_reply_t_print
static inline void *vl_api_ip_mroute_add_del_reply_t_print (vl_api_ip_mroute_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_mroute_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "stats_index: %u\n", a->stats_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_mroute_dump_t_print
#define _vl_api_defined_ip_mroute_dump_t_print
static inline void *vl_api_ip_mroute_dump_t_print (vl_api_ip_mroute_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_mroute_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_ip_mroute_details_t_print  *****/

#ifndef _vl_api_defined_ip_address_details_t_print
#define _vl_api_defined_ip_address_details_t_print
static inline void *vl_api_ip_address_details_t_print (vl_api_ip_address_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_address_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_address_dump_t_print
#define _vl_api_defined_ip_address_dump_t_print
static inline void *vl_api_ip_address_dump_t_print (vl_api_ip_address_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_address_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_unnumbered_details_t_print
#define _vl_api_defined_ip_unnumbered_details_t_print
static inline void *vl_api_ip_unnumbered_details_t_print (vl_api_ip_unnumbered_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_unnumbered_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "ip_sw_if_index: %u\n", a->ip_sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_unnumbered_dump_t_print
#define _vl_api_defined_ip_unnumbered_dump_t_print
static inline void *vl_api_ip_unnumbered_dump_t_print (vl_api_ip_unnumbered_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_unnumbered_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_details_t_print
#define _vl_api_defined_ip_details_t_print
static inline void *vl_api_ip_details_t_print (vl_api_ip_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_dump_t_print
#define _vl_api_defined_ip_dump_t_print
static inline void *vl_api_ip_dump_t_print (vl_api_ip_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_mfib_signal_dump_t_print
#define _vl_api_defined_mfib_signal_dump_t_print
static inline void *vl_api_mfib_signal_dump_t_print (vl_api_mfib_signal_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_mfib_signal_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_mfib_signal_details_t_print
#define _vl_api_defined_mfib_signal_details_t_print
static inline void *vl_api_mfib_signal_details_t_print (vl_api_mfib_signal_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_mfib_signal_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "ip_packet_len: %u\n", a->ip_packet_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_punt_police_t_print
#define _vl_api_defined_ip_punt_police_t_print
static inline void *vl_api_ip_punt_police_t_print (vl_api_ip_punt_police_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_punt_police_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "policer_index: %u\n", a->policer_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_punt_police_reply_t_print
#define _vl_api_defined_ip_punt_police_reply_t_print
static inline void *vl_api_ip_punt_police_reply_t_print (vl_api_ip_punt_police_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_punt_police_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_t_print
#define _vl_api_defined_ip_punt_redirect_t_print
static inline void *vl_api_ip_punt_redirect_t_print (vl_api_ip_punt_redirect_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_punt_redirect_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_reply_t_print
#define _vl_api_defined_ip_punt_redirect_reply_t_print
static inline void *vl_api_ip_punt_redirect_reply_t_print (vl_api_ip_punt_redirect_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_punt_redirect_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_dump_t_print
#define _vl_api_defined_ip_punt_redirect_dump_t_print
static inline void *vl_api_ip_punt_redirect_dump_t_print (vl_api_ip_punt_redirect_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_punt_redirect_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_details_t_print
#define _vl_api_defined_ip_punt_redirect_details_t_print
static inline void *vl_api_ip_punt_redirect_details_t_print (vl_api_ip_punt_redirect_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_punt_redirect_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_add_del_t_print
#define _vl_api_defined_ip_container_proxy_add_del_t_print
static inline void *vl_api_ip_container_proxy_add_del_t_print (vl_api_ip_container_proxy_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_container_proxy_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_add_del_reply_t_print
#define _vl_api_defined_ip_container_proxy_add_del_reply_t_print
static inline void *vl_api_ip_container_proxy_add_del_reply_t_print (vl_api_ip_container_proxy_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_container_proxy_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_dump_t_print
#define _vl_api_defined_ip_container_proxy_dump_t_print
static inline void *vl_api_ip_container_proxy_dump_t_print (vl_api_ip_container_proxy_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_container_proxy_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_details_t_print
#define _vl_api_defined_ip_container_proxy_details_t_print
static inline void *vl_api_ip_container_proxy_details_t_print (vl_api_ip_container_proxy_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_container_proxy_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_add_del_t_print
#define _vl_api_defined_ip_source_and_port_range_check_add_del_t_print
static inline void *vl_api_ip_source_and_port_range_check_add_del_t_print (vl_api_ip_source_and_port_range_check_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_source_and_port_range_check_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "number_of_ranges: %u\n", a->number_of_ranges);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_add_del_reply_t_print
#define _vl_api_defined_ip_source_and_port_range_check_add_del_reply_t_print
static inline void *vl_api_ip_source_and_port_range_check_add_del_reply_t_print (vl_api_ip_source_and_port_range_check_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_source_and_port_range_check_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_interface_add_del_t_print
#define _vl_api_defined_ip_source_and_port_range_check_interface_add_del_t_print
static inline void *vl_api_ip_source_and_port_range_check_interface_add_del_t_print (vl_api_ip_source_and_port_range_check_interface_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_source_and_port_range_check_interface_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "tcp_in_vrf_id: %u\n", a->tcp_in_vrf_id);
    vl_print(handle, "tcp_out_vrf_id: %u\n", a->tcp_out_vrf_id);
    vl_print(handle, "udp_in_vrf_id: %u\n", a->udp_in_vrf_id);
    vl_print(handle, "udp_out_vrf_id: %u\n", a->udp_out_vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_interface_add_del_reply_t_print
#define _vl_api_defined_ip_source_and_port_range_check_interface_add_del_reply_t_print
static inline void *vl_api_ip_source_and_port_range_check_interface_add_del_reply_t_print (vl_api_ip_source_and_port_range_check_interface_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_source_and_port_range_check_interface_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_source_check_interface_add_del_t_print
#define _vl_api_defined_ip_source_check_interface_add_del_t_print
static inline void *vl_api_ip_source_check_interface_add_del_t_print (vl_api_ip_source_check_interface_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_source_check_interface_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "loose: %u\n", a->loose);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_source_check_interface_add_del_reply_t_print
#define _vl_api_defined_ip_source_check_interface_add_del_reply_t_print
static inline void *vl_api_ip_source_check_interface_add_del_reply_t_print (vl_api_ip_source_check_interface_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_source_check_interface_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_scan_neighbor_enable_disable_t_print
#define _vl_api_defined_ip_scan_neighbor_enable_disable_t_print
static inline void *vl_api_ip_scan_neighbor_enable_disable_t_print (vl_api_ip_scan_neighbor_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_scan_neighbor_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "mode: %u\n", a->mode);
    vl_print(handle, "scan_interval: %u\n", a->scan_interval);
    vl_print(handle, "max_proc_time: %u\n", a->max_proc_time);
    vl_print(handle, "max_update: %u\n", a->max_update);
    vl_print(handle, "scan_int_delay: %u\n", a->scan_int_delay);
    vl_print(handle, "stale_threshold: %u\n", a->stale_threshold);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_scan_neighbor_enable_disable_reply_t_print
#define _vl_api_defined_ip_scan_neighbor_enable_disable_reply_t_print
static inline void *vl_api_ip_scan_neighbor_enable_disable_reply_t_print (vl_api_ip_scan_neighbor_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_scan_neighbor_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_probe_neighbor_t_print
#define _vl_api_defined_ip_probe_neighbor_t_print
static inline void *vl_api_ip_probe_neighbor_t_print (vl_api_ip_probe_neighbor_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_probe_neighbor_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_probe_neighbor_reply_t_print
#define _vl_api_defined_ip_probe_neighbor_reply_t_print
static inline void *vl_api_ip_probe_neighbor_reply_t_print (vl_api_ip_probe_neighbor_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_probe_neighbor_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_ip4_arp_events_t_print
#define _vl_api_defined_want_ip4_arp_events_t_print
static inline void *vl_api_want_ip4_arp_events_t_print (vl_api_want_ip4_arp_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_ip4_arp_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_ip4_arp_events_reply_t_print
#define _vl_api_defined_want_ip4_arp_events_reply_t_print
static inline void *vl_api_want_ip4_arp_events_reply_t_print (vl_api_want_ip4_arp_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_ip4_arp_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip4_arp_event_t_print
#define _vl_api_defined_ip4_arp_event_t_print
static inline void *vl_api_ip4_arp_event_t_print (vl_api_ip4_arp_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip4_arp_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "mac_ip: %u\n", a->mac_ip);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_ip6_nd_events_t_print
#define _vl_api_defined_want_ip6_nd_events_t_print
static inline void *vl_api_want_ip6_nd_events_t_print (vl_api_want_ip6_nd_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_ip6_nd_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_ip6_nd_events_reply_t_print
#define _vl_api_defined_want_ip6_nd_events_reply_t_print
static inline void *vl_api_want_ip6_nd_events_reply_t_print (vl_api_want_ip6_nd_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_ip6_nd_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6_nd_event_t_print
#define _vl_api_defined_ip6_nd_event_t_print
static inline void *vl_api_ip6_nd_event_t_print (vl_api_ip6_nd_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6_nd_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "mac_ip: %u\n", a->mac_ip);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_ip6_ra_events_t_print
#define _vl_api_defined_want_ip6_ra_events_t_print
static inline void *vl_api_want_ip6_ra_events_t_print (vl_api_want_ip6_ra_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_ip6_ra_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_ip6_ra_events_reply_t_print
#define _vl_api_defined_want_ip6_ra_events_reply_t_print
static inline void *vl_api_want_ip6_ra_events_reply_t_print (vl_api_want_ip6_ra_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_ip6_ra_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6_ra_event_t_print
#define _vl_api_defined_ip6_ra_event_t_print
static inline void *vl_api_ip6_ra_event_t_print (vl_api_ip6_ra_event_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6_ra_event_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "pid: %u\n", a->pid);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "current_hop_limit: %u\n", a->current_hop_limit);
    vl_print(handle, "flags: %u\n", a->flags);
    vl_print(handle, "router_lifetime_in_sec: %u\n", a->router_lifetime_in_sec);
    vl_print(handle, "neighbor_reachable_time_in_msec: %u\n", a->neighbor_reachable_time_in_msec);
    vl_print(handle, "time_in_msec_between_retransmitted_neighbor_solicitations: %u\n", a->time_in_msec_between_retransmitted_neighbor_solicitations);
    vl_print(handle, "n_prefixes: %u\n", a->n_prefixes);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_add_del_t_print
#define _vl_api_defined_proxy_arp_add_del_t_print
static inline void *vl_api_proxy_arp_add_del_t_print (vl_api_proxy_arp_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_add_del_reply_t_print
#define _vl_api_defined_proxy_arp_add_del_reply_t_print
static inline void *vl_api_proxy_arp_add_del_reply_t_print (vl_api_proxy_arp_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_dump_t_print
#define _vl_api_defined_proxy_arp_dump_t_print
static inline void *vl_api_proxy_arp_dump_t_print (vl_api_proxy_arp_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_details_t_print
#define _vl_api_defined_proxy_arp_details_t_print
static inline void *vl_api_proxy_arp_details_t_print (vl_api_proxy_arp_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_enable_disable_t_print
#define _vl_api_defined_proxy_arp_intfc_enable_disable_t_print
static inline void *vl_api_proxy_arp_intfc_enable_disable_t_print (vl_api_proxy_arp_intfc_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_intfc_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_enable_disable_reply_t_print
#define _vl_api_defined_proxy_arp_intfc_enable_disable_reply_t_print
static inline void *vl_api_proxy_arp_intfc_enable_disable_reply_t_print (vl_api_proxy_arp_intfc_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_intfc_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_dump_t_print
#define _vl_api_defined_proxy_arp_intfc_dump_t_print
static inline void *vl_api_proxy_arp_intfc_dump_t_print (vl_api_proxy_arp_intfc_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_intfc_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_details_t_print
#define _vl_api_defined_proxy_arp_intfc_details_t_print
static inline void *vl_api_proxy_arp_intfc_details_t_print (vl_api_proxy_arp_intfc_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_proxy_arp_intfc_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_reset_fib_t_print
#define _vl_api_defined_reset_fib_t_print
static inline void *vl_api_reset_fib_t_print (vl_api_reset_fib_t *a,void *handle)
{
    vl_print(handle, "vl_api_reset_fib_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_reset_fib_reply_t_print
#define _vl_api_defined_reset_fib_reply_t_print
static inline void *vl_api_reset_fib_reply_t_print (vl_api_reset_fib_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_reset_fib_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_arp_neighbor_limit_t_print
#define _vl_api_defined_set_arp_neighbor_limit_t_print
static inline void *vl_api_set_arp_neighbor_limit_t_print (vl_api_set_arp_neighbor_limit_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_arp_neighbor_limit_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "arp_neighbor_limit: %u\n", a->arp_neighbor_limit);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_arp_neighbor_limit_reply_t_print
#define _vl_api_defined_set_arp_neighbor_limit_reply_t_print
static inline void *vl_api_set_arp_neighbor_limit_reply_t_print (vl_api_set_arp_neighbor_limit_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_arp_neighbor_limit_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ioam_enable_t_print
#define _vl_api_defined_ioam_enable_t_print
static inline void *vl_api_ioam_enable_t_print (vl_api_ioam_enable_t *a,void *handle)
{
    vl_print(handle, "vl_api_ioam_enable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "seqno: %u\n", a->seqno);
    vl_print(handle, "analyse: %u\n", a->analyse);
    vl_print(handle, "pot_enable: %u\n", a->pot_enable);
    vl_print(handle, "trace_enable: %u\n", a->trace_enable);
    vl_print(handle, "node_id: %u\n", a->node_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ioam_enable_reply_t_print
#define _vl_api_defined_ioam_enable_reply_t_print
static inline void *vl_api_ioam_enable_reply_t_print (vl_api_ioam_enable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ioam_enable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ioam_disable_t_print
#define _vl_api_defined_ioam_disable_t_print
static inline void *vl_api_ioam_disable_t_print (vl_api_ioam_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_ioam_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ioam_disable_reply_t_print
#define _vl_api_defined_ioam_disable_reply_t_print
static inline void *vl_api_ioam_disable_reply_t_print (vl_api_ioam_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ioam_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_reassembly_set_t_print
#define _vl_api_defined_ip_reassembly_set_t_print
static inline void *vl_api_ip_reassembly_set_t_print (vl_api_ip_reassembly_set_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_reassembly_set_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "timeout_ms: %u\n", a->timeout_ms);
    vl_print(handle, "max_reassemblies: %u\n", a->max_reassemblies);
    vl_print(handle, "max_reassembly_length: %u\n", a->max_reassembly_length);
    vl_print(handle, "expire_walk_interval_ms: %u\n", a->expire_walk_interval_ms);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_reassembly_set_reply_t_print
#define _vl_api_defined_ip_reassembly_set_reply_t_print
static inline void *vl_api_ip_reassembly_set_reply_t_print (vl_api_ip_reassembly_set_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_reassembly_set_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_reassembly_get_t_print
#define _vl_api_defined_ip_reassembly_get_t_print
static inline void *vl_api_ip_reassembly_get_t_print (vl_api_ip_reassembly_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_reassembly_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_reassembly_get_reply_t_print
#define _vl_api_defined_ip_reassembly_get_reply_t_print
static inline void *vl_api_ip_reassembly_get_reply_t_print (vl_api_ip_reassembly_get_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_reassembly_get_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "timeout_ms: %u\n", a->timeout_ms);
    vl_print(handle, "max_reassemblies: %u\n", a->max_reassemblies);
    vl_print(handle, "max_reassembly_length: %u\n", a->max_reassembly_length);
    vl_print(handle, "expire_walk_interval_ms: %u\n", a->expire_walk_interval_ms);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_reassembly_enable_disable_t_print
#define _vl_api_defined_ip_reassembly_enable_disable_t_print
static inline void *vl_api_ip_reassembly_enable_disable_t_print (vl_api_ip_reassembly_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_reassembly_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable_ip4: %u\n", a->enable_ip4);
    vl_print(handle, "enable_ip6: %u\n", a->enable_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip_reassembly_enable_disable_reply_t_print
#define _vl_api_defined_ip_reassembly_enable_disable_reply_t_print
static inline void *vl_api_ip_reassembly_enable_disable_reply_t_print (vl_api_ip_reassembly_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip_reassembly_enable_disable_reply_t:\n");
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

#ifndef _vl_api_defined_fib_mpls_label_t_endian
#define _vl_api_defined_fib_mpls_label_t_endian
static inline void vl_api_fib_mpls_label_t_endian (vl_api_fib_mpls_label_t *a)
{
    /* a->is_uniform = a->is_uniform (no-op) */
    a->label = clib_net_to_host_u32(a->label);
    /* a->ttl = a->ttl (no-op) */
    /* a->exp = a->exp (no-op) */
}

#endif

#ifndef _vl_api_defined_fib_path_nh_t_endian
#define _vl_api_defined_fib_path_nh_t_endian
static inline void vl_api_fib_path_nh_t_endian (vl_api_fib_path_nh_t *a)
{
    /* a->address = a->address (no-op) */
    a->via_label = clib_net_to_host_u32(a->via_label);
    a->obj_id = clib_net_to_host_u32(a->obj_id);
    a->classify_table_index = clib_net_to_host_u32(a->classify_table_index);
}

#endif

#ifndef _vl_api_defined_fib_path_t_endian
#define _vl_api_defined_fib_path_t_endian
static inline void vl_api_fib_path_t_endian (vl_api_fib_path_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->rpf_id = clib_net_to_host_u32(a->rpf_id);
    /* a->weight = a->weight (no-op) */
    /* a->preference = a->preference (no-op) */
    /* a->type = a->type (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->proto = a->proto (no-op) */
    /* a->nh = a->nh (no-op) */
    /* a->n_labels = a->n_labels (no-op) */
}

#endif

/***** manual: vl_api_mac_address_t_endian  *****/

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

#ifndef _vl_api_defined_fib_mpls_label_t_endian
#define _vl_api_defined_fib_mpls_label_t_endian
static inline void vl_api_fib_mpls_label_t_endian (vl_api_fib_mpls_label_t *a)
{
    /* a->is_uniform = a->is_uniform (no-op) */
    a->label = clib_net_to_host_u32(a->label);
    /* a->ttl = a->ttl (no-op) */
    /* a->exp = a->exp (no-op) */
}

#endif

#ifndef _vl_api_defined_fib_path_nh_t_endian
#define _vl_api_defined_fib_path_nh_t_endian
static inline void vl_api_fib_path_nh_t_endian (vl_api_fib_path_nh_t *a)
{
    /* a->address = a->address (no-op) */
    a->via_label = clib_net_to_host_u32(a->via_label);
    a->obj_id = clib_net_to_host_u32(a->obj_id);
    a->classify_table_index = clib_net_to_host_u32(a->classify_table_index);
}

#endif

#ifndef _vl_api_defined_fib_path_t_endian
#define _vl_api_defined_fib_path_t_endian
static inline void vl_api_fib_path_t_endian (vl_api_fib_path_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->rpf_id = clib_net_to_host_u32(a->rpf_id);
    /* a->weight = a->weight (no-op) */
    /* a->preference = a->preference (no-op) */
    /* a->type = a->type (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->proto = a->proto (no-op) */
    /* a->nh = a->nh (no-op) */
    /* a->n_labels = a->n_labels (no-op) */
}

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

#ifndef _vl_api_defined_mfib_path_t_endian
#define _vl_api_defined_mfib_path_t_endian
static inline void vl_api_mfib_path_t_endian (vl_api_mfib_path_t *a)
{
    /* a->itf_flags = a->itf_flags (no-op) */
    /* a->path = a->path (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_table_t_endian
#define _vl_api_defined_ip_table_t_endian
static inline void vl_api_ip_table_t_endian (vl_api_ip_table_t *a)
{
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_route_t_endian
#define _vl_api_defined_ip_route_t_endian
static inline void vl_api_ip_route_t_endian (vl_api_ip_route_t *a)
{
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
    /* a->prefix = a->prefix (no-op) */
    /* a->n_paths = a->n_paths (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_neighbor_t_endian
#define _vl_api_defined_ip_neighbor_t_endian
static inline void vl_api_ip_neighbor_t_endian (vl_api_ip_neighbor_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->flags = a->flags (no-op) */
    /* a->mac_address = a->mac_address (no-op) */
    /* a->ip_address = a->ip_address (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_mroute_t_endian
#define _vl_api_defined_ip_mroute_t_endian
static inline void vl_api_ip_mroute_t_endian (vl_api_ip_mroute_t *a)
{
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->entry_flags = clib_net_to_host_u32(a->entry_flags);
    a->rpf_id = clib_net_to_host_u32(a->rpf_id);
    /* a->prefix = a->prefix (no-op) */
    /* a->n_paths = a->n_paths (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_redirect_t_endian
#define _vl_api_defined_punt_redirect_t_endian
static inline void vl_api_punt_redirect_t_endian (vl_api_punt_redirect_t *a)
{
    a->rx_sw_if_index = clib_net_to_host_u32(a->rx_sw_if_index);
    a->tx_sw_if_index = clib_net_to_host_u32(a->tx_sw_if_index);
    /* a->nh = a->nh (no-op) */
}

#endif

#ifndef _vl_api_defined_ip6_ra_prefix_info_t_endian
#define _vl_api_defined_ip6_ra_prefix_info_t_endian
static inline void vl_api_ip6_ra_prefix_info_t_endian (vl_api_ip6_ra_prefix_info_t *a)
{
    /* a->prefix = a->prefix (no-op) */
    /* a->flags = a->flags (no-op) */
    a->valid_time = clib_net_to_host_u32(a->valid_time);
    a->preferred_time = clib_net_to_host_u32(a->preferred_time);
}

#endif

#ifndef _vl_api_defined_proxy_arp_t_endian
#define _vl_api_defined_proxy_arp_t_endian
static inline void vl_api_proxy_arp_t_endian (vl_api_proxy_arp_t *a)
{
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->low = a->low (no-op) */
    /* a->hi = a->hi (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_table_add_del_t_endian
#define _vl_api_defined_ip_table_add_del_t_endian
static inline void vl_api_ip_table_add_del_t_endian (vl_api_ip_table_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->table = a->table (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_table_add_del_reply_t_endian
#define _vl_api_defined_ip_table_add_del_reply_t_endian
static inline void vl_api_ip_table_add_del_reply_t_endian (vl_api_ip_table_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_table_dump_t_endian
#define _vl_api_defined_ip_table_dump_t_endian
static inline void vl_api_ip_table_dump_t_endian (vl_api_ip_table_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

/***** manual: vl_api_ip_table_details_t_endian  *****/

#ifndef _vl_api_defined_ip_route_add_del_t_endian
#define _vl_api_defined_ip_route_add_del_t_endian
static inline void vl_api_ip_route_add_del_t_endian (vl_api_ip_route_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_multipath = a->is_multipath (no-op) */
    /* a->route = a->route (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_route_add_del_reply_t_endian
#define _vl_api_defined_ip_route_add_del_reply_t_endian
static inline void vl_api_ip_route_add_del_reply_t_endian (vl_api_ip_route_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

#endif

#ifndef _vl_api_defined_ip_route_dump_t_endian
#define _vl_api_defined_ip_route_dump_t_endian
static inline void vl_api_ip_route_dump_t_endian (vl_api_ip_route_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->table = a->table (no-op) */
}

#endif

/***** manual: vl_api_ip_route_details_t_endian  *****/

#ifndef _vl_api_defined_ip_neighbor_add_del_t_endian
#define _vl_api_defined_ip_neighbor_add_del_t_endian
static inline void vl_api_ip_neighbor_add_del_t_endian (vl_api_ip_neighbor_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->neighbor = a->neighbor (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_neighbor_add_del_reply_t_endian
#define _vl_api_defined_ip_neighbor_add_del_reply_t_endian
static inline void vl_api_ip_neighbor_add_del_reply_t_endian (vl_api_ip_neighbor_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

#endif

#ifndef _vl_api_defined_ip_neighbor_dump_t_endian
#define _vl_api_defined_ip_neighbor_dump_t_endian
static inline void vl_api_ip_neighbor_dump_t_endian (vl_api_ip_neighbor_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_neighbor_details_t_endian
#define _vl_api_defined_ip_neighbor_details_t_endian
static inline void vl_api_ip_neighbor_details_t_endian (vl_api_ip_neighbor_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->neighbor = a->neighbor (no-op) */
}

#endif

#ifndef _vl_api_defined_set_ip_flow_hash_t_endian
#define _vl_api_defined_set_ip_flow_hash_t_endian
static inline void vl_api_set_ip_flow_hash_t_endian (vl_api_set_ip_flow_hash_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->src = a->src (no-op) */
    /* a->dst = a->dst (no-op) */
    /* a->sport = a->sport (no-op) */
    /* a->dport = a->dport (no-op) */
    /* a->proto = a->proto (no-op) */
    /* a->reverse = a->reverse (no-op) */
    /* a->symmetric = a->symmetric (no-op) */
}

#endif

#ifndef _vl_api_defined_set_ip_flow_hash_reply_t_endian
#define _vl_api_defined_set_ip_flow_hash_reply_t_endian
static inline void vl_api_set_ip_flow_hash_reply_t_endian (vl_api_set_ip_flow_hash_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_config_t_endian
#define _vl_api_defined_sw_interface_ip6nd_ra_config_t_endian
static inline void vl_api_sw_interface_ip6nd_ra_config_t_endian (vl_api_sw_interface_ip6nd_ra_config_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->suppress = a->suppress (no-op) */
    /* a->managed = a->managed (no-op) */
    /* a->other = a->other (no-op) */
    /* a->ll_option = a->ll_option (no-op) */
    /* a->send_unicast = a->send_unicast (no-op) */
    /* a->cease = a->cease (no-op) */
    /* a->is_no = a->is_no (no-op) */
    /* a->default_router = a->default_router (no-op) */
    a->max_interval = clib_net_to_host_u32(a->max_interval);
    a->min_interval = clib_net_to_host_u32(a->min_interval);
    a->lifetime = clib_net_to_host_u32(a->lifetime);
    a->initial_count = clib_net_to_host_u32(a->initial_count);
    a->initial_interval = clib_net_to_host_u32(a->initial_interval);
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_config_reply_t_endian
#define _vl_api_defined_sw_interface_ip6nd_ra_config_reply_t_endian
static inline void vl_api_sw_interface_ip6nd_ra_config_reply_t_endian (vl_api_sw_interface_ip6nd_ra_config_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_prefix_t_endian
#define _vl_api_defined_sw_interface_ip6nd_ra_prefix_t_endian
static inline void vl_api_sw_interface_ip6nd_ra_prefix_t_endian (vl_api_sw_interface_ip6nd_ra_prefix_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->prefix = a->prefix (no-op) */
    /* a->use_default = a->use_default (no-op) */
    /* a->no_advertise = a->no_advertise (no-op) */
    /* a->off_link = a->off_link (no-op) */
    /* a->no_autoconfig = a->no_autoconfig (no-op) */
    /* a->no_onlink = a->no_onlink (no-op) */
    /* a->is_no = a->is_no (no-op) */
    a->val_lifetime = clib_net_to_host_u32(a->val_lifetime);
    a->pref_lifetime = clib_net_to_host_u32(a->pref_lifetime);
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6nd_ra_prefix_reply_t_endian
#define _vl_api_defined_sw_interface_ip6nd_ra_prefix_reply_t_endian
static inline void vl_api_sw_interface_ip6nd_ra_prefix_reply_t_endian (vl_api_sw_interface_ip6nd_ra_prefix_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_add_del_t_endian
#define _vl_api_defined_ip6nd_proxy_add_del_t_endian
static inline void vl_api_ip6nd_proxy_add_del_t_endian (vl_api_ip6nd_proxy_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_del = a->is_del (no-op) */
    /* a->ip = a->ip (no-op) */
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_add_del_reply_t_endian
#define _vl_api_defined_ip6nd_proxy_add_del_reply_t_endian
static inline void vl_api_ip6nd_proxy_add_del_reply_t_endian (vl_api_ip6nd_proxy_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_details_t_endian
#define _vl_api_defined_ip6nd_proxy_details_t_endian
static inline void vl_api_ip6nd_proxy_details_t_endian (vl_api_ip6nd_proxy_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->ip = a->ip (no-op) */
}

#endif

#ifndef _vl_api_defined_ip6nd_proxy_dump_t_endian
#define _vl_api_defined_ip6nd_proxy_dump_t_endian
static inline void vl_api_ip6nd_proxy_dump_t_endian (vl_api_ip6nd_proxy_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ip6nd_send_router_solicitation_t_endian
#define _vl_api_defined_ip6nd_send_router_solicitation_t_endian
static inline void vl_api_ip6nd_send_router_solicitation_t_endian (vl_api_ip6nd_send_router_solicitation_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->irt = clib_net_to_host_u32(a->irt);
    a->mrt = clib_net_to_host_u32(a->mrt);
    a->mrc = clib_net_to_host_u32(a->mrc);
    a->mrd = clib_net_to_host_u32(a->mrd);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->stop = a->stop (no-op) */
}

#endif

#ifndef _vl_api_defined_ip6nd_send_router_solicitation_reply_t_endian
#define _vl_api_defined_ip6nd_send_router_solicitation_reply_t_endian
static inline void vl_api_ip6nd_send_router_solicitation_reply_t_endian (vl_api_ip6nd_send_router_solicitation_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_enable_disable_t_endian
#define _vl_api_defined_sw_interface_ip6_enable_disable_t_endian
static inline void vl_api_sw_interface_ip6_enable_disable_t_endian (vl_api_sw_interface_ip6_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_enable_disable_reply_t_endian
#define _vl_api_defined_sw_interface_ip6_enable_disable_reply_t_endian
static inline void vl_api_sw_interface_ip6_enable_disable_reply_t_endian (vl_api_sw_interface_ip6_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_set_link_local_address_t_endian
#define _vl_api_defined_sw_interface_ip6_set_link_local_address_t_endian
static inline void vl_api_sw_interface_ip6_set_link_local_address_t_endian (vl_api_sw_interface_ip6_set_link_local_address_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_ip6_set_link_local_address_reply_t_endian
#define _vl_api_defined_sw_interface_ip6_set_link_local_address_reply_t_endian
static inline void vl_api_sw_interface_ip6_set_link_local_address_reply_t_endian (vl_api_sw_interface_ip6_set_link_local_address_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_mtable_dump_t_endian
#define _vl_api_defined_ip_mtable_dump_t_endian
static inline void vl_api_ip_mtable_dump_t_endian (vl_api_ip_mtable_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ip_mtable_details_t_endian
#define _vl_api_defined_ip_mtable_details_t_endian
static inline void vl_api_ip_mtable_details_t_endian (vl_api_ip_mtable_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->table = a->table (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_mroute_add_del_t_endian
#define _vl_api_defined_ip_mroute_add_del_t_endian
static inline void vl_api_ip_mroute_add_del_t_endian (vl_api_ip_mroute_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_multipath = a->is_multipath (no-op) */
    /* a->route = a->route (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_mroute_add_del_reply_t_endian
#define _vl_api_defined_ip_mroute_add_del_reply_t_endian
static inline void vl_api_ip_mroute_add_del_reply_t_endian (vl_api_ip_mroute_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->stats_index = clib_net_to_host_u32(a->stats_index);
}

#endif

#ifndef _vl_api_defined_ip_mroute_dump_t_endian
#define _vl_api_defined_ip_mroute_dump_t_endian
static inline void vl_api_ip_mroute_dump_t_endian (vl_api_ip_mroute_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->table = a->table (no-op) */
}

#endif

/***** manual: vl_api_ip_mroute_details_t_endian  *****/

#ifndef _vl_api_defined_ip_address_details_t_endian
#define _vl_api_defined_ip_address_details_t_endian
static inline void vl_api_ip_address_details_t_endian (vl_api_ip_address_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->prefix = a->prefix (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_address_dump_t_endian
#define _vl_api_defined_ip_address_dump_t_endian
static inline void vl_api_ip_address_dump_t_endian (vl_api_ip_address_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_unnumbered_details_t_endian
#define _vl_api_defined_ip_unnumbered_details_t_endian
static inline void vl_api_ip_unnumbered_details_t_endian (vl_api_ip_unnumbered_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->ip_sw_if_index = clib_net_to_host_u32(a->ip_sw_if_index);
}

#endif

#ifndef _vl_api_defined_ip_unnumbered_dump_t_endian
#define _vl_api_defined_ip_unnumbered_dump_t_endian
static inline void vl_api_ip_unnumbered_dump_t_endian (vl_api_ip_unnumbered_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_ip_details_t_endian
#define _vl_api_defined_ip_details_t_endian
static inline void vl_api_ip_details_t_endian (vl_api_ip_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_dump_t_endian
#define _vl_api_defined_ip_dump_t_endian
static inline void vl_api_ip_dump_t_endian (vl_api_ip_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_mfib_signal_dump_t_endian
#define _vl_api_defined_mfib_signal_dump_t_endian
static inline void vl_api_mfib_signal_dump_t_endian (vl_api_mfib_signal_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_mfib_signal_details_t_endian
#define _vl_api_defined_mfib_signal_details_t_endian
static inline void vl_api_mfib_signal_details_t_endian (vl_api_mfib_signal_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->prefix = a->prefix (no-op) */
    a->ip_packet_len = clib_net_to_host_u16(a->ip_packet_len);
}

#endif

#ifndef _vl_api_defined_ip_punt_police_t_endian
#define _vl_api_defined_ip_punt_police_t_endian
static inline void vl_api_ip_punt_police_t_endian (vl_api_ip_punt_police_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->policer_index = clib_net_to_host_u32(a->policer_index);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_punt_police_reply_t_endian
#define _vl_api_defined_ip_punt_police_reply_t_endian
static inline void vl_api_ip_punt_police_reply_t_endian (vl_api_ip_punt_police_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_t_endian
#define _vl_api_defined_ip_punt_redirect_t_endian
static inline void vl_api_ip_punt_redirect_t_endian (vl_api_ip_punt_redirect_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->punt = a->punt (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_reply_t_endian
#define _vl_api_defined_ip_punt_redirect_reply_t_endian
static inline void vl_api_ip_punt_redirect_reply_t_endian (vl_api_ip_punt_redirect_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_dump_t_endian
#define _vl_api_defined_ip_punt_redirect_dump_t_endian
static inline void vl_api_ip_punt_redirect_dump_t_endian (vl_api_ip_punt_redirect_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_punt_redirect_details_t_endian
#define _vl_api_defined_ip_punt_redirect_details_t_endian
static inline void vl_api_ip_punt_redirect_details_t_endian (vl_api_ip_punt_redirect_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->punt = a->punt (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_add_del_t_endian
#define _vl_api_defined_ip_container_proxy_add_del_t_endian
static inline void vl_api_ip_container_proxy_add_del_t_endian (vl_api_ip_container_proxy_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->pfx = a->pfx (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_add_del_reply_t_endian
#define _vl_api_defined_ip_container_proxy_add_del_reply_t_endian
static inline void vl_api_ip_container_proxy_add_del_reply_t_endian (vl_api_ip_container_proxy_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_dump_t_endian
#define _vl_api_defined_ip_container_proxy_dump_t_endian
static inline void vl_api_ip_container_proxy_dump_t_endian (vl_api_ip_container_proxy_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ip_container_proxy_details_t_endian
#define _vl_api_defined_ip_container_proxy_details_t_endian
static inline void vl_api_ip_container_proxy_details_t_endian (vl_api_ip_container_proxy_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->prefix = a->prefix (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_add_del_t_endian
#define _vl_api_defined_ip_source_and_port_range_check_add_del_t_endian
static inline void vl_api_ip_source_and_port_range_check_add_del_t_endian (vl_api_ip_source_and_port_range_check_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->prefix = a->prefix (no-op) */
    /* a->number_of_ranges = a->number_of_ranges (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_add_del_reply_t_endian
#define _vl_api_defined_ip_source_and_port_range_check_add_del_reply_t_endian
static inline void vl_api_ip_source_and_port_range_check_add_del_reply_t_endian (vl_api_ip_source_and_port_range_check_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_interface_add_del_t_endian
#define _vl_api_defined_ip_source_and_port_range_check_interface_add_del_t_endian
static inline void vl_api_ip_source_and_port_range_check_interface_add_del_t_endian (vl_api_ip_source_and_port_range_check_interface_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->tcp_in_vrf_id = clib_net_to_host_u32(a->tcp_in_vrf_id);
    a->tcp_out_vrf_id = clib_net_to_host_u32(a->tcp_out_vrf_id);
    a->udp_in_vrf_id = clib_net_to_host_u32(a->udp_in_vrf_id);
    a->udp_out_vrf_id = clib_net_to_host_u32(a->udp_out_vrf_id);
}

#endif

#ifndef _vl_api_defined_ip_source_and_port_range_check_interface_add_del_reply_t_endian
#define _vl_api_defined_ip_source_and_port_range_check_interface_add_del_reply_t_endian
static inline void vl_api_ip_source_and_port_range_check_interface_add_del_reply_t_endian (vl_api_ip_source_and_port_range_check_interface_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_source_check_interface_add_del_t_endian
#define _vl_api_defined_ip_source_check_interface_add_del_t_endian
static inline void vl_api_ip_source_check_interface_add_del_t_endian (vl_api_ip_source_check_interface_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->loose = a->loose (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_ip_source_check_interface_add_del_reply_t_endian
#define _vl_api_defined_ip_source_check_interface_add_del_reply_t_endian
static inline void vl_api_ip_source_check_interface_add_del_reply_t_endian (vl_api_ip_source_check_interface_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_scan_neighbor_enable_disable_t_endian
#define _vl_api_defined_ip_scan_neighbor_enable_disable_t_endian
static inline void vl_api_ip_scan_neighbor_enable_disable_t_endian (vl_api_ip_scan_neighbor_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->mode = a->mode (no-op) */
    /* a->scan_interval = a->scan_interval (no-op) */
    /* a->max_proc_time = a->max_proc_time (no-op) */
    /* a->max_update = a->max_update (no-op) */
    /* a->scan_int_delay = a->scan_int_delay (no-op) */
    /* a->stale_threshold = a->stale_threshold (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_scan_neighbor_enable_disable_reply_t_endian
#define _vl_api_defined_ip_scan_neighbor_enable_disable_reply_t_endian
static inline void vl_api_ip_scan_neighbor_enable_disable_reply_t_endian (vl_api_ip_scan_neighbor_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_probe_neighbor_t_endian
#define _vl_api_defined_ip_probe_neighbor_t_endian
static inline void vl_api_ip_probe_neighbor_t_endian (vl_api_ip_probe_neighbor_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->dst = a->dst (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_probe_neighbor_reply_t_endian
#define _vl_api_defined_ip_probe_neighbor_reply_t_endian
static inline void vl_api_ip_probe_neighbor_reply_t_endian (vl_api_ip_probe_neighbor_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_want_ip4_arp_events_t_endian
#define _vl_api_defined_want_ip4_arp_events_t_endian
static inline void vl_api_want_ip4_arp_events_t_endian (vl_api_want_ip4_arp_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    /* a->ip = a->ip (no-op) */
}

#endif

#ifndef _vl_api_defined_want_ip4_arp_events_reply_t_endian
#define _vl_api_defined_want_ip4_arp_events_reply_t_endian
static inline void vl_api_want_ip4_arp_events_reply_t_endian (vl_api_want_ip4_arp_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip4_arp_event_t_endian
#define _vl_api_defined_ip4_arp_event_t_endian
static inline void vl_api_ip4_arp_event_t_endian (vl_api_ip4_arp_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    /* a->ip = a->ip (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->mac = a->mac (no-op) */
    /* a->mac_ip = a->mac_ip (no-op) */
}

#endif

#ifndef _vl_api_defined_want_ip6_nd_events_t_endian
#define _vl_api_defined_want_ip6_nd_events_t_endian
static inline void vl_api_want_ip6_nd_events_t_endian (vl_api_want_ip6_nd_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
    /* a->ip = a->ip (no-op) */
}

#endif

#ifndef _vl_api_defined_want_ip6_nd_events_reply_t_endian
#define _vl_api_defined_want_ip6_nd_events_reply_t_endian
static inline void vl_api_want_ip6_nd_events_reply_t_endian (vl_api_want_ip6_nd_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip6_nd_event_t_endian
#define _vl_api_defined_ip6_nd_event_t_endian
static inline void vl_api_ip6_nd_event_t_endian (vl_api_ip6_nd_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->ip = a->ip (no-op) */
    /* a->mac = a->mac (no-op) */
    /* a->mac_ip = a->mac_ip (no-op) */
}

#endif

#ifndef _vl_api_defined_want_ip6_ra_events_t_endian
#define _vl_api_defined_want_ip6_ra_events_t_endian
static inline void vl_api_want_ip6_ra_events_t_endian (vl_api_want_ip6_ra_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

#ifndef _vl_api_defined_want_ip6_ra_events_reply_t_endian
#define _vl_api_defined_want_ip6_ra_events_reply_t_endian
static inline void vl_api_want_ip6_ra_events_reply_t_endian (vl_api_want_ip6_ra_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip6_ra_event_t_endian
#define _vl_api_defined_ip6_ra_event_t_endian
static inline void vl_api_ip6_ra_event_t_endian (vl_api_ip6_ra_event_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->pid = clib_net_to_host_u32(a->pid);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->router_addr = a->router_addr (no-op) */
    /* a->current_hop_limit = a->current_hop_limit (no-op) */
    /* a->flags = a->flags (no-op) */
    a->router_lifetime_in_sec = clib_net_to_host_u16(a->router_lifetime_in_sec);
    a->neighbor_reachable_time_in_msec = clib_net_to_host_u32(a->neighbor_reachable_time_in_msec);
    a->time_in_msec_between_retransmitted_neighbor_solicitations = clib_net_to_host_u32(a->time_in_msec_between_retransmitted_neighbor_solicitations);
    a->n_prefixes = clib_net_to_host_u32(a->n_prefixes);
}

#endif

#ifndef _vl_api_defined_proxy_arp_add_del_t_endian
#define _vl_api_defined_proxy_arp_add_del_t_endian
static inline void vl_api_proxy_arp_add_del_t_endian (vl_api_proxy_arp_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->proxy = a->proxy (no-op) */
}

#endif

#ifndef _vl_api_defined_proxy_arp_add_del_reply_t_endian
#define _vl_api_defined_proxy_arp_add_del_reply_t_endian
static inline void vl_api_proxy_arp_add_del_reply_t_endian (vl_api_proxy_arp_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_proxy_arp_dump_t_endian
#define _vl_api_defined_proxy_arp_dump_t_endian
static inline void vl_api_proxy_arp_dump_t_endian (vl_api_proxy_arp_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_proxy_arp_details_t_endian
#define _vl_api_defined_proxy_arp_details_t_endian
static inline void vl_api_proxy_arp_details_t_endian (vl_api_proxy_arp_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->proxy = a->proxy (no-op) */
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_enable_disable_t_endian
#define _vl_api_defined_proxy_arp_intfc_enable_disable_t_endian
static inline void vl_api_proxy_arp_intfc_enable_disable_t_endian (vl_api_proxy_arp_intfc_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable_disable = a->enable_disable (no-op) */
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_enable_disable_reply_t_endian
#define _vl_api_defined_proxy_arp_intfc_enable_disable_reply_t_endian
static inline void vl_api_proxy_arp_intfc_enable_disable_reply_t_endian (vl_api_proxy_arp_intfc_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_dump_t_endian
#define _vl_api_defined_proxy_arp_intfc_dump_t_endian
static inline void vl_api_proxy_arp_intfc_dump_t_endian (vl_api_proxy_arp_intfc_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_proxy_arp_intfc_details_t_endian
#define _vl_api_defined_proxy_arp_intfc_details_t_endian
static inline void vl_api_proxy_arp_intfc_details_t_endian (vl_api_proxy_arp_intfc_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_reset_fib_t_endian
#define _vl_api_defined_reset_fib_t_endian
static inline void vl_api_reset_fib_t_endian (vl_api_reset_fib_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_reset_fib_reply_t_endian
#define _vl_api_defined_reset_fib_reply_t_endian
static inline void vl_api_reset_fib_reply_t_endian (vl_api_reset_fib_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_set_arp_neighbor_limit_t_endian
#define _vl_api_defined_set_arp_neighbor_limit_t_endian
static inline void vl_api_set_arp_neighbor_limit_t_endian (vl_api_set_arp_neighbor_limit_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->arp_neighbor_limit = clib_net_to_host_u32(a->arp_neighbor_limit);
}

#endif

#ifndef _vl_api_defined_set_arp_neighbor_limit_reply_t_endian
#define _vl_api_defined_set_arp_neighbor_limit_reply_t_endian
static inline void vl_api_set_arp_neighbor_limit_reply_t_endian (vl_api_set_arp_neighbor_limit_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ioam_enable_t_endian
#define _vl_api_defined_ioam_enable_t_endian
static inline void vl_api_ioam_enable_t_endian (vl_api_ioam_enable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
    /* a->seqno = a->seqno (no-op) */
    /* a->analyse = a->analyse (no-op) */
    /* a->pot_enable = a->pot_enable (no-op) */
    /* a->trace_enable = a->trace_enable (no-op) */
    a->node_id = clib_net_to_host_u32(a->node_id);
}

#endif

#ifndef _vl_api_defined_ioam_enable_reply_t_endian
#define _vl_api_defined_ioam_enable_reply_t_endian
static inline void vl_api_ioam_enable_reply_t_endian (vl_api_ioam_enable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ioam_disable_t_endian
#define _vl_api_defined_ioam_disable_t_endian
static inline void vl_api_ioam_disable_t_endian (vl_api_ioam_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
}

#endif

#ifndef _vl_api_defined_ioam_disable_reply_t_endian
#define _vl_api_defined_ioam_disable_reply_t_endian
static inline void vl_api_ioam_disable_reply_t_endian (vl_api_ioam_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_reassembly_set_t_endian
#define _vl_api_defined_ip_reassembly_set_t_endian
static inline void vl_api_ip_reassembly_set_t_endian (vl_api_ip_reassembly_set_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->timeout_ms = clib_net_to_host_u32(a->timeout_ms);
    a->max_reassemblies = clib_net_to_host_u32(a->max_reassemblies);
    a->max_reassembly_length = clib_net_to_host_u32(a->max_reassembly_length);
    a->expire_walk_interval_ms = clib_net_to_host_u32(a->expire_walk_interval_ms);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_reassembly_set_reply_t_endian
#define _vl_api_defined_ip_reassembly_set_reply_t_endian
static inline void vl_api_ip_reassembly_set_reply_t_endian (vl_api_ip_reassembly_set_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ip_reassembly_get_t_endian
#define _vl_api_defined_ip_reassembly_get_t_endian
static inline void vl_api_ip_reassembly_get_t_endian (vl_api_ip_reassembly_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_reassembly_get_reply_t_endian
#define _vl_api_defined_ip_reassembly_get_reply_t_endian
static inline void vl_api_ip_reassembly_get_reply_t_endian (vl_api_ip_reassembly_get_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->timeout_ms = clib_net_to_host_u32(a->timeout_ms);
    a->max_reassemblies = clib_net_to_host_u32(a->max_reassemblies);
    a->max_reassembly_length = clib_net_to_host_u32(a->max_reassembly_length);
    a->expire_walk_interval_ms = clib_net_to_host_u32(a->expire_walk_interval_ms);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_reassembly_enable_disable_t_endian
#define _vl_api_defined_ip_reassembly_enable_disable_t_endian
static inline void vl_api_ip_reassembly_enable_disable_t_endian (vl_api_ip_reassembly_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable_ip4 = a->enable_ip4 (no-op) */
    /* a->enable_ip6 = a->enable_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_ip_reassembly_enable_disable_reply_t_endian
#define _vl_api_defined_ip_reassembly_enable_disable_reply_t_endian
static inline void vl_api_ip_reassembly_enable_disable_reply_t_endian (vl_api_ip_reassembly_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ip.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ip.api, 0x251fc559)

#endif

