#ifndef __included_hpp_ip_api_json
#define __included_hpp_ip_api_json

#include <vapi/vapi.hpp>
#include <vapi/ip.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_ip_container_proxy_dump>(vapi_msg_ip_container_proxy_dump *msg)
{
  vapi_msg_ip_container_proxy_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_container_proxy_dump>(vapi_msg_ip_container_proxy_dump *msg)
{
  vapi_msg_ip_container_proxy_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_container_proxy_dump>()
{
  return ::vapi_msg_id_ip_container_proxy_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_container_proxy_dump>>()
{
  return ::vapi_msg_id_ip_container_proxy_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_container_proxy_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_container_proxy_dump>(vapi_msg_id_ip_container_proxy_dump);
}

template <> inline vapi_msg_ip_container_proxy_dump* vapi_alloc<vapi_msg_ip_container_proxy_dump>(Connection &con)
{
  vapi_msg_ip_container_proxy_dump* result = vapi_alloc_ip_container_proxy_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_container_proxy_dump>;

template class Dump<vapi_msg_ip_container_proxy_dump, vapi_msg_ip_container_proxy_details>;

using Ip_container_proxy_dump = Dump<vapi_msg_ip_container_proxy_dump, vapi_msg_ip_container_proxy_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_route_dump>(vapi_msg_ip_route_dump *msg)
{
  vapi_msg_ip_route_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_route_dump>(vapi_msg_ip_route_dump *msg)
{
  vapi_msg_ip_route_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_route_dump>()
{
  return ::vapi_msg_id_ip_route_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_route_dump>>()
{
  return ::vapi_msg_id_ip_route_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_route_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_route_dump>(vapi_msg_id_ip_route_dump);
}

template <> inline vapi_msg_ip_route_dump* vapi_alloc<vapi_msg_ip_route_dump>(Connection &con)
{
  vapi_msg_ip_route_dump* result = vapi_alloc_ip_route_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_route_dump>;

template class Dump<vapi_msg_ip_route_dump, vapi_msg_ip_route_details>;

using Ip_route_dump = Dump<vapi_msg_ip_route_dump, vapi_msg_ip_route_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_source_and_port_range_check_add_del>(vapi_msg_ip_source_and_port_range_check_add_del *msg)
{
  vapi_msg_ip_source_and_port_range_check_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_source_and_port_range_check_add_del>(vapi_msg_ip_source_and_port_range_check_add_del *msg)
{
  vapi_msg_ip_source_and_port_range_check_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_source_and_port_range_check_add_del>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_source_and_port_range_check_add_del>>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_source_and_port_range_check_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_source_and_port_range_check_add_del>(vapi_msg_id_ip_source_and_port_range_check_add_del);
}

template <> inline vapi_msg_ip_source_and_port_range_check_add_del* vapi_alloc<vapi_msg_ip_source_and_port_range_check_add_del>(Connection &con)
{
  vapi_msg_ip_source_and_port_range_check_add_del* result = vapi_alloc_ip_source_and_port_range_check_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_source_and_port_range_check_add_del>;

template class Request<vapi_msg_ip_source_and_port_range_check_add_del, vapi_msg_ip_source_and_port_range_check_add_del_reply>;

using Ip_source_and_port_range_check_add_del = Request<vapi_msg_ip_source_and_port_range_check_add_del, vapi_msg_ip_source_and_port_range_check_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip6_nd_event>(vapi_msg_ip6_nd_event *msg)
{
  vapi_msg_ip6_nd_event_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6_nd_event>(vapi_msg_ip6_nd_event *msg)
{
  vapi_msg_ip6_nd_event_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6_nd_event>()
{
  return ::vapi_msg_id_ip6_nd_event; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6_nd_event>>()
{
  return ::vapi_msg_id_ip6_nd_event; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6_nd_event()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6_nd_event>(vapi_msg_id_ip6_nd_event);
}

template class Msg<vapi_msg_ip6_nd_event>;

using Ip6_nd_event = Msg<vapi_msg_ip6_nd_event>;
template <> inline void vapi_swap_to_be<vapi_msg_ip4_arp_event>(vapi_msg_ip4_arp_event *msg)
{
  vapi_msg_ip4_arp_event_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip4_arp_event>(vapi_msg_ip4_arp_event *msg)
{
  vapi_msg_ip4_arp_event_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip4_arp_event>()
{
  return ::vapi_msg_id_ip4_arp_event; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip4_arp_event>>()
{
  return ::vapi_msg_id_ip4_arp_event; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip4_arp_event()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip4_arp_event>(vapi_msg_id_ip4_arp_event);
}

template class Msg<vapi_msg_ip4_arp_event>;

using Ip4_arp_event = Msg<vapi_msg_ip4_arp_event>;
template <> inline void vapi_swap_to_be<vapi_msg_ip6nd_proxy_details>(vapi_msg_ip6nd_proxy_details *msg)
{
  vapi_msg_ip6nd_proxy_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6nd_proxy_details>(vapi_msg_ip6nd_proxy_details *msg)
{
  vapi_msg_ip6nd_proxy_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6nd_proxy_details>()
{
  return ::vapi_msg_id_ip6nd_proxy_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6nd_proxy_details>>()
{
  return ::vapi_msg_id_ip6nd_proxy_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6nd_proxy_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6nd_proxy_details>(vapi_msg_id_ip6nd_proxy_details);
}

template class Msg<vapi_msg_ip6nd_proxy_details>;

using Ip6nd_proxy_details = Msg<vapi_msg_ip6nd_proxy_details>;
template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6_set_link_local_address_reply>(vapi_msg_sw_interface_ip6_set_link_local_address_reply *msg)
{
  vapi_msg_sw_interface_ip6_set_link_local_address_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6_set_link_local_address_reply>(vapi_msg_sw_interface_ip6_set_link_local_address_reply *msg)
{
  vapi_msg_sw_interface_ip6_set_link_local_address_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6_set_link_local_address_reply>()
{
  return ::vapi_msg_id_sw_interface_ip6_set_link_local_address_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6_set_link_local_address_reply>>()
{
  return ::vapi_msg_id_sw_interface_ip6_set_link_local_address_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6_set_link_local_address_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6_set_link_local_address_reply>(vapi_msg_id_sw_interface_ip6_set_link_local_address_reply);
}

template class Msg<vapi_msg_sw_interface_ip6_set_link_local_address_reply>;

using Sw_interface_ip6_set_link_local_address_reply = Msg<vapi_msg_sw_interface_ip6_set_link_local_address_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_want_ip4_arp_events_reply>(vapi_msg_want_ip4_arp_events_reply *msg)
{
  vapi_msg_want_ip4_arp_events_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip4_arp_events_reply>(vapi_msg_want_ip4_arp_events_reply *msg)
{
  vapi_msg_want_ip4_arp_events_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip4_arp_events_reply>()
{
  return ::vapi_msg_id_want_ip4_arp_events_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip4_arp_events_reply>>()
{
  return ::vapi_msg_id_want_ip4_arp_events_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip4_arp_events_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip4_arp_events_reply>(vapi_msg_id_want_ip4_arp_events_reply);
}

template class Msg<vapi_msg_want_ip4_arp_events_reply>;

using Want_ip4_arp_events_reply = Msg<vapi_msg_want_ip4_arp_events_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip6nd_send_router_solicitation_reply>(vapi_msg_ip6nd_send_router_solicitation_reply *msg)
{
  vapi_msg_ip6nd_send_router_solicitation_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6nd_send_router_solicitation_reply>(vapi_msg_ip6nd_send_router_solicitation_reply *msg)
{
  vapi_msg_ip6nd_send_router_solicitation_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6nd_send_router_solicitation_reply>()
{
  return ::vapi_msg_id_ip6nd_send_router_solicitation_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6nd_send_router_solicitation_reply>>()
{
  return ::vapi_msg_id_ip6nd_send_router_solicitation_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6nd_send_router_solicitation_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6nd_send_router_solicitation_reply>(vapi_msg_id_ip6nd_send_router_solicitation_reply);
}

template class Msg<vapi_msg_ip6nd_send_router_solicitation_reply>;

using Ip6nd_send_router_solicitation_reply = Msg<vapi_msg_ip6nd_send_router_solicitation_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6_set_link_local_address>(vapi_msg_sw_interface_ip6_set_link_local_address *msg)
{
  vapi_msg_sw_interface_ip6_set_link_local_address_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6_set_link_local_address>(vapi_msg_sw_interface_ip6_set_link_local_address *msg)
{
  vapi_msg_sw_interface_ip6_set_link_local_address_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6_set_link_local_address>()
{
  return ::vapi_msg_id_sw_interface_ip6_set_link_local_address; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6_set_link_local_address>>()
{
  return ::vapi_msg_id_sw_interface_ip6_set_link_local_address; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6_set_link_local_address()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6_set_link_local_address>(vapi_msg_id_sw_interface_ip6_set_link_local_address);
}

template <> inline vapi_msg_sw_interface_ip6_set_link_local_address* vapi_alloc<vapi_msg_sw_interface_ip6_set_link_local_address>(Connection &con)
{
  vapi_msg_sw_interface_ip6_set_link_local_address* result = vapi_alloc_sw_interface_ip6_set_link_local_address(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sw_interface_ip6_set_link_local_address>;

template class Request<vapi_msg_sw_interface_ip6_set_link_local_address, vapi_msg_sw_interface_ip6_set_link_local_address_reply>;

using Sw_interface_ip6_set_link_local_address = Request<vapi_msg_sw_interface_ip6_set_link_local_address, vapi_msg_sw_interface_ip6_set_link_local_address_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6_enable_disable_reply>(vapi_msg_sw_interface_ip6_enable_disable_reply *msg)
{
  vapi_msg_sw_interface_ip6_enable_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6_enable_disable_reply>(vapi_msg_sw_interface_ip6_enable_disable_reply *msg)
{
  vapi_msg_sw_interface_ip6_enable_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6_enable_disable_reply>()
{
  return ::vapi_msg_id_sw_interface_ip6_enable_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6_enable_disable_reply>>()
{
  return ::vapi_msg_id_sw_interface_ip6_enable_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6_enable_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6_enable_disable_reply>(vapi_msg_id_sw_interface_ip6_enable_disable_reply);
}

template class Msg<vapi_msg_sw_interface_ip6_enable_disable_reply>;

using Sw_interface_ip6_enable_disable_reply = Msg<vapi_msg_sw_interface_ip6_enable_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_punt_redirect_dump>(vapi_msg_ip_punt_redirect_dump *msg)
{
  vapi_msg_ip_punt_redirect_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_punt_redirect_dump>(vapi_msg_ip_punt_redirect_dump *msg)
{
  vapi_msg_ip_punt_redirect_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_punt_redirect_dump>()
{
  return ::vapi_msg_id_ip_punt_redirect_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_punt_redirect_dump>>()
{
  return ::vapi_msg_id_ip_punt_redirect_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_punt_redirect_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_punt_redirect_dump>(vapi_msg_id_ip_punt_redirect_dump);
}

template <> inline vapi_msg_ip_punt_redirect_dump* vapi_alloc<vapi_msg_ip_punt_redirect_dump>(Connection &con)
{
  vapi_msg_ip_punt_redirect_dump* result = vapi_alloc_ip_punt_redirect_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_punt_redirect_dump>;

template class Dump<vapi_msg_ip_punt_redirect_dump, vapi_msg_ip_punt_redirect_details>;

using Ip_punt_redirect_dump = Dump<vapi_msg_ip_punt_redirect_dump, vapi_msg_ip_punt_redirect_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_punt_police_reply>(vapi_msg_ip_punt_police_reply *msg)
{
  vapi_msg_ip_punt_police_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_punt_police_reply>(vapi_msg_ip_punt_police_reply *msg)
{
  vapi_msg_ip_punt_police_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_punt_police_reply>()
{
  return ::vapi_msg_id_ip_punt_police_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_punt_police_reply>>()
{
  return ::vapi_msg_id_ip_punt_police_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_punt_police_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_punt_police_reply>(vapi_msg_id_ip_punt_police_reply);
}

template class Msg<vapi_msg_ip_punt_police_reply>;

using Ip_punt_police_reply = Msg<vapi_msg_ip_punt_police_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_intfc_enable_disable>(vapi_msg_proxy_arp_intfc_enable_disable *msg)
{
  vapi_msg_proxy_arp_intfc_enable_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_intfc_enable_disable>(vapi_msg_proxy_arp_intfc_enable_disable *msg)
{
  vapi_msg_proxy_arp_intfc_enable_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_intfc_enable_disable>()
{
  return ::vapi_msg_id_proxy_arp_intfc_enable_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_intfc_enable_disable>>()
{
  return ::vapi_msg_id_proxy_arp_intfc_enable_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_intfc_enable_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_intfc_enable_disable>(vapi_msg_id_proxy_arp_intfc_enable_disable);
}

template <> inline vapi_msg_proxy_arp_intfc_enable_disable* vapi_alloc<vapi_msg_proxy_arp_intfc_enable_disable>(Connection &con)
{
  vapi_msg_proxy_arp_intfc_enable_disable* result = vapi_alloc_proxy_arp_intfc_enable_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_proxy_arp_intfc_enable_disable>;

template class Request<vapi_msg_proxy_arp_intfc_enable_disable, vapi_msg_proxy_arp_intfc_enable_disable_reply>;

using Proxy_arp_intfc_enable_disable = Request<vapi_msg_proxy_arp_intfc_enable_disable, vapi_msg_proxy_arp_intfc_enable_disable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_add_del>(vapi_msg_proxy_arp_add_del *msg)
{
  vapi_msg_proxy_arp_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_add_del>(vapi_msg_proxy_arp_add_del *msg)
{
  vapi_msg_proxy_arp_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_add_del>()
{
  return ::vapi_msg_id_proxy_arp_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_add_del>>()
{
  return ::vapi_msg_id_proxy_arp_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_add_del>(vapi_msg_id_proxy_arp_add_del);
}

template <> inline vapi_msg_proxy_arp_add_del* vapi_alloc<vapi_msg_proxy_arp_add_del>(Connection &con)
{
  vapi_msg_proxy_arp_add_del* result = vapi_alloc_proxy_arp_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_proxy_arp_add_del>;

template class Request<vapi_msg_proxy_arp_add_del, vapi_msg_proxy_arp_add_del_reply>;

using Proxy_arp_add_del = Request<vapi_msg_proxy_arp_add_del, vapi_msg_proxy_arp_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_route_add_del>(vapi_msg_ip_route_add_del *msg)
{
  vapi_msg_ip_route_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_route_add_del>(vapi_msg_ip_route_add_del *msg)
{
  vapi_msg_ip_route_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_route_add_del>()
{
  return ::vapi_msg_id_ip_route_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_route_add_del>>()
{
  return ::vapi_msg_id_ip_route_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_route_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_route_add_del>(vapi_msg_id_ip_route_add_del);
}

template <> inline vapi_msg_ip_route_add_del* vapi_alloc<vapi_msg_ip_route_add_del, size_t>(Connection &con, size_t route_paths_array_size)
{
  vapi_msg_ip_route_add_del* result = vapi_alloc_ip_route_add_del(con.vapi_ctx, route_paths_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_route_add_del>;

template class Request<vapi_msg_ip_route_add_del, vapi_msg_ip_route_add_del_reply, size_t>;

using Ip_route_add_del = Request<vapi_msg_ip_route_add_del, vapi_msg_ip_route_add_del_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_ioam_disable_reply>(vapi_msg_ioam_disable_reply *msg)
{
  vapi_msg_ioam_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ioam_disable_reply>(vapi_msg_ioam_disable_reply *msg)
{
  vapi_msg_ioam_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ioam_disable_reply>()
{
  return ::vapi_msg_id_ioam_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ioam_disable_reply>>()
{
  return ::vapi_msg_id_ioam_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ioam_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ioam_disable_reply>(vapi_msg_id_ioam_disable_reply);
}

template class Msg<vapi_msg_ioam_disable_reply>;

using Ioam_disable_reply = Msg<vapi_msg_ioam_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_details>(vapi_msg_ip_neighbor_details *msg)
{
  vapi_msg_ip_neighbor_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_details>(vapi_msg_ip_neighbor_details *msg)
{
  vapi_msg_ip_neighbor_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_details>()
{
  return ::vapi_msg_id_ip_neighbor_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_details>>()
{
  return ::vapi_msg_id_ip_neighbor_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_details>(vapi_msg_id_ip_neighbor_details);
}

template class Msg<vapi_msg_ip_neighbor_details>;

using Ip_neighbor_details = Msg<vapi_msg_ip_neighbor_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ioam_enable>(vapi_msg_ioam_enable *msg)
{
  vapi_msg_ioam_enable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ioam_enable>(vapi_msg_ioam_enable *msg)
{
  vapi_msg_ioam_enable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ioam_enable>()
{
  return ::vapi_msg_id_ioam_enable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ioam_enable>>()
{
  return ::vapi_msg_id_ioam_enable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ioam_enable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ioam_enable>(vapi_msg_id_ioam_enable);
}

template <> inline vapi_msg_ioam_enable* vapi_alloc<vapi_msg_ioam_enable>(Connection &con)
{
  vapi_msg_ioam_enable* result = vapi_alloc_ioam_enable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ioam_enable>;

template class Request<vapi_msg_ioam_enable, vapi_msg_ioam_enable_reply>;

using Ioam_enable = Request<vapi_msg_ioam_enable, vapi_msg_ioam_enable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip6_ra_event>(vapi_msg_ip6_ra_event *msg)
{
  vapi_msg_ip6_ra_event_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6_ra_event>(vapi_msg_ip6_ra_event *msg)
{
  vapi_msg_ip6_ra_event_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6_ra_event>()
{
  return ::vapi_msg_id_ip6_ra_event; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6_ra_event>>()
{
  return ::vapi_msg_id_ip6_ra_event; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6_ra_event()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6_ra_event>(vapi_msg_id_ip6_ra_event);
}

template class Msg<vapi_msg_ip6_ra_event>;

using Ip6_ra_event = Msg<vapi_msg_ip6_ra_event>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_mroute_add_del>(vapi_msg_ip_mroute_add_del *msg)
{
  vapi_msg_ip_mroute_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_mroute_add_del>(vapi_msg_ip_mroute_add_del *msg)
{
  vapi_msg_ip_mroute_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_mroute_add_del>()
{
  return ::vapi_msg_id_ip_mroute_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_mroute_add_del>>()
{
  return ::vapi_msg_id_ip_mroute_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_mroute_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_mroute_add_del>(vapi_msg_id_ip_mroute_add_del);
}

template <> inline vapi_msg_ip_mroute_add_del* vapi_alloc<vapi_msg_ip_mroute_add_del, size_t>(Connection &con, size_t route_paths_array_size)
{
  vapi_msg_ip_mroute_add_del* result = vapi_alloc_ip_mroute_add_del(con.vapi_ctx, route_paths_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_mroute_add_del>;

template class Request<vapi_msg_ip_mroute_add_del, vapi_msg_ip_mroute_add_del_reply, size_t>;

using Ip_mroute_add_del = Request<vapi_msg_ip_mroute_add_del, vapi_msg_ip_mroute_add_del_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_address_details>(vapi_msg_ip_address_details *msg)
{
  vapi_msg_ip_address_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_address_details>(vapi_msg_ip_address_details *msg)
{
  vapi_msg_ip_address_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_address_details>()
{
  return ::vapi_msg_id_ip_address_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_address_details>>()
{
  return ::vapi_msg_id_ip_address_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_address_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_address_details>(vapi_msg_id_ip_address_details);
}

template class Msg<vapi_msg_ip_address_details>;

using Ip_address_details = Msg<vapi_msg_ip_address_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_source_check_interface_add_del_reply>(vapi_msg_ip_source_check_interface_add_del_reply *msg)
{
  vapi_msg_ip_source_check_interface_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_source_check_interface_add_del_reply>(vapi_msg_ip_source_check_interface_add_del_reply *msg)
{
  vapi_msg_ip_source_check_interface_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_source_check_interface_add_del_reply>()
{
  return ::vapi_msg_id_ip_source_check_interface_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_source_check_interface_add_del_reply>>()
{
  return ::vapi_msg_id_ip_source_check_interface_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_source_check_interface_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_source_check_interface_add_del_reply>(vapi_msg_id_ip_source_check_interface_add_del_reply);
}

template class Msg<vapi_msg_ip_source_check_interface_add_del_reply>;

using Ip_source_check_interface_add_del_reply = Msg<vapi_msg_ip_source_check_interface_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_unnumbered_details>(vapi_msg_ip_unnumbered_details *msg)
{
  vapi_msg_ip_unnumbered_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_unnumbered_details>(vapi_msg_ip_unnumbered_details *msg)
{
  vapi_msg_ip_unnumbered_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_unnumbered_details>()
{
  return ::vapi_msg_id_ip_unnumbered_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_unnumbered_details>>()
{
  return ::vapi_msg_id_ip_unnumbered_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_unnumbered_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_unnumbered_details>(vapi_msg_id_ip_unnumbered_details);
}

template class Msg<vapi_msg_ip_unnumbered_details>;

using Ip_unnumbered_details = Msg<vapi_msg_ip_unnumbered_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_route_details>(vapi_msg_ip_route_details *msg)
{
  vapi_msg_ip_route_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_route_details>(vapi_msg_ip_route_details *msg)
{
  vapi_msg_ip_route_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_route_details>()
{
  return ::vapi_msg_id_ip_route_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_route_details>>()
{
  return ::vapi_msg_id_ip_route_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_route_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_route_details>(vapi_msg_id_ip_route_details);
}

template class Msg<vapi_msg_ip_route_details>;

using Ip_route_details = Msg<vapi_msg_ip_route_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_probe_neighbor_reply>(vapi_msg_ip_probe_neighbor_reply *msg)
{
  vapi_msg_ip_probe_neighbor_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_probe_neighbor_reply>(vapi_msg_ip_probe_neighbor_reply *msg)
{
  vapi_msg_ip_probe_neighbor_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_probe_neighbor_reply>()
{
  return ::vapi_msg_id_ip_probe_neighbor_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_probe_neighbor_reply>>()
{
  return ::vapi_msg_id_ip_probe_neighbor_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_probe_neighbor_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_probe_neighbor_reply>(vapi_msg_id_ip_probe_neighbor_reply);
}

template class Msg<vapi_msg_ip_probe_neighbor_reply>;

using Ip_probe_neighbor_reply = Msg<vapi_msg_ip_probe_neighbor_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_probe_neighbor>(vapi_msg_ip_probe_neighbor *msg)
{
  vapi_msg_ip_probe_neighbor_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_probe_neighbor>(vapi_msg_ip_probe_neighbor *msg)
{
  vapi_msg_ip_probe_neighbor_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_probe_neighbor>()
{
  return ::vapi_msg_id_ip_probe_neighbor; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_probe_neighbor>>()
{
  return ::vapi_msg_id_ip_probe_neighbor; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_probe_neighbor()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_probe_neighbor>(vapi_msg_id_ip_probe_neighbor);
}

template <> inline vapi_msg_ip_probe_neighbor* vapi_alloc<vapi_msg_ip_probe_neighbor>(Connection &con)
{
  vapi_msg_ip_probe_neighbor* result = vapi_alloc_ip_probe_neighbor(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_probe_neighbor>;

template class Request<vapi_msg_ip_probe_neighbor, vapi_msg_ip_probe_neighbor_reply>;

using Ip_probe_neighbor = Request<vapi_msg_ip_probe_neighbor, vapi_msg_ip_probe_neighbor_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_table_details>(vapi_msg_ip_table_details *msg)
{
  vapi_msg_ip_table_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_table_details>(vapi_msg_ip_table_details *msg)
{
  vapi_msg_ip_table_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_table_details>()
{
  return ::vapi_msg_id_ip_table_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_table_details>>()
{
  return ::vapi_msg_id_ip_table_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_table_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_table_details>(vapi_msg_id_ip_table_details);
}

template class Msg<vapi_msg_ip_table_details>;

using Ip_table_details = Msg<vapi_msg_ip_table_details>;
template <> inline void vapi_swap_to_be<vapi_msg_reset_fib_reply>(vapi_msg_reset_fib_reply *msg)
{
  vapi_msg_reset_fib_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_reset_fib_reply>(vapi_msg_reset_fib_reply *msg)
{
  vapi_msg_reset_fib_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_reset_fib_reply>()
{
  return ::vapi_msg_id_reset_fib_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_reset_fib_reply>>()
{
  return ::vapi_msg_id_reset_fib_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_reset_fib_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_reset_fib_reply>(vapi_msg_id_reset_fib_reply);
}

template class Msg<vapi_msg_reset_fib_reply>;

using Reset_fib_reply = Msg<vapi_msg_reset_fib_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_want_ip6_nd_events_reply>(vapi_msg_want_ip6_nd_events_reply *msg)
{
  vapi_msg_want_ip6_nd_events_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip6_nd_events_reply>(vapi_msg_want_ip6_nd_events_reply *msg)
{
  vapi_msg_want_ip6_nd_events_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip6_nd_events_reply>()
{
  return ::vapi_msg_id_want_ip6_nd_events_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip6_nd_events_reply>>()
{
  return ::vapi_msg_id_want_ip6_nd_events_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip6_nd_events_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip6_nd_events_reply>(vapi_msg_id_want_ip6_nd_events_reply);
}

template class Msg<vapi_msg_want_ip6_nd_events_reply>;

using Want_ip6_nd_events_reply = Msg<vapi_msg_want_ip6_nd_events_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip6nd_proxy_add_del>(vapi_msg_ip6nd_proxy_add_del *msg)
{
  vapi_msg_ip6nd_proxy_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6nd_proxy_add_del>(vapi_msg_ip6nd_proxy_add_del *msg)
{
  vapi_msg_ip6nd_proxy_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6nd_proxy_add_del>()
{
  return ::vapi_msg_id_ip6nd_proxy_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6nd_proxy_add_del>>()
{
  return ::vapi_msg_id_ip6nd_proxy_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6nd_proxy_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6nd_proxy_add_del>(vapi_msg_id_ip6nd_proxy_add_del);
}

template <> inline vapi_msg_ip6nd_proxy_add_del* vapi_alloc<vapi_msg_ip6nd_proxy_add_del>(Connection &con)
{
  vapi_msg_ip6nd_proxy_add_del* result = vapi_alloc_ip6nd_proxy_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip6nd_proxy_add_del>;

template class Request<vapi_msg_ip6nd_proxy_add_del, vapi_msg_ip6nd_proxy_add_del_reply>;

using Ip6nd_proxy_add_del = Request<vapi_msg_ip6nd_proxy_add_del, vapi_msg_ip6nd_proxy_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_reassembly_set_reply>(vapi_msg_ip_reassembly_set_reply *msg)
{
  vapi_msg_ip_reassembly_set_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_reassembly_set_reply>(vapi_msg_ip_reassembly_set_reply *msg)
{
  vapi_msg_ip_reassembly_set_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_reassembly_set_reply>()
{
  return ::vapi_msg_id_ip_reassembly_set_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_reassembly_set_reply>>()
{
  return ::vapi_msg_id_ip_reassembly_set_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_reassembly_set_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_reassembly_set_reply>(vapi_msg_id_ip_reassembly_set_reply);
}

template class Msg<vapi_msg_ip_reassembly_set_reply>;

using Ip_reassembly_set_reply = Msg<vapi_msg_ip_reassembly_set_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_container_proxy_add_del_reply>(vapi_msg_ip_container_proxy_add_del_reply *msg)
{
  vapi_msg_ip_container_proxy_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_container_proxy_add_del_reply>(vapi_msg_ip_container_proxy_add_del_reply *msg)
{
  vapi_msg_ip_container_proxy_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_container_proxy_add_del_reply>()
{
  return ::vapi_msg_id_ip_container_proxy_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_container_proxy_add_del_reply>>()
{
  return ::vapi_msg_id_ip_container_proxy_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_container_proxy_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_container_proxy_add_del_reply>(vapi_msg_id_ip_container_proxy_add_del_reply);
}

template class Msg<vapi_msg_ip_container_proxy_add_del_reply>;

using Ip_container_proxy_add_del_reply = Msg<vapi_msg_ip_container_proxy_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_source_check_interface_add_del>(vapi_msg_ip_source_check_interface_add_del *msg)
{
  vapi_msg_ip_source_check_interface_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_source_check_interface_add_del>(vapi_msg_ip_source_check_interface_add_del *msg)
{
  vapi_msg_ip_source_check_interface_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_source_check_interface_add_del>()
{
  return ::vapi_msg_id_ip_source_check_interface_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_source_check_interface_add_del>>()
{
  return ::vapi_msg_id_ip_source_check_interface_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_source_check_interface_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_source_check_interface_add_del>(vapi_msg_id_ip_source_check_interface_add_del);
}

template <> inline vapi_msg_ip_source_check_interface_add_del* vapi_alloc<vapi_msg_ip_source_check_interface_add_del>(Connection &con)
{
  vapi_msg_ip_source_check_interface_add_del* result = vapi_alloc_ip_source_check_interface_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_source_check_interface_add_del>;

template class Request<vapi_msg_ip_source_check_interface_add_del, vapi_msg_ip_source_check_interface_add_del_reply>;

using Ip_source_check_interface_add_del = Request<vapi_msg_ip_source_check_interface_add_del, vapi_msg_ip_source_check_interface_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_route_add_del_reply>(vapi_msg_ip_route_add_del_reply *msg)
{
  vapi_msg_ip_route_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_route_add_del_reply>(vapi_msg_ip_route_add_del_reply *msg)
{
  vapi_msg_ip_route_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_route_add_del_reply>()
{
  return ::vapi_msg_id_ip_route_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_route_add_del_reply>>()
{
  return ::vapi_msg_id_ip_route_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_route_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_route_add_del_reply>(vapi_msg_id_ip_route_add_del_reply);
}

template class Msg<vapi_msg_ip_route_add_del_reply>;

using Ip_route_add_del_reply = Msg<vapi_msg_ip_route_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_mroute_dump>(vapi_msg_ip_mroute_dump *msg)
{
  vapi_msg_ip_mroute_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_mroute_dump>(vapi_msg_ip_mroute_dump *msg)
{
  vapi_msg_ip_mroute_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_mroute_dump>()
{
  return ::vapi_msg_id_ip_mroute_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_mroute_dump>>()
{
  return ::vapi_msg_id_ip_mroute_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_mroute_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_mroute_dump>(vapi_msg_id_ip_mroute_dump);
}

template <> inline vapi_msg_ip_mroute_dump* vapi_alloc<vapi_msg_ip_mroute_dump>(Connection &con)
{
  vapi_msg_ip_mroute_dump* result = vapi_alloc_ip_mroute_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_mroute_dump>;

template class Dump<vapi_msg_ip_mroute_dump, vapi_msg_ip_mroute_details>;

using Ip_mroute_dump = Dump<vapi_msg_ip_mroute_dump, vapi_msg_ip_mroute_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_add_del_reply>(vapi_msg_ip_neighbor_add_del_reply *msg)
{
  vapi_msg_ip_neighbor_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_add_del_reply>(vapi_msg_ip_neighbor_add_del_reply *msg)
{
  vapi_msg_ip_neighbor_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_add_del_reply>()
{
  return ::vapi_msg_id_ip_neighbor_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_add_del_reply>>()
{
  return ::vapi_msg_id_ip_neighbor_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_add_del_reply>(vapi_msg_id_ip_neighbor_add_del_reply);
}

template class Msg<vapi_msg_ip_neighbor_add_del_reply>;

using Ip_neighbor_add_del_reply = Msg<vapi_msg_ip_neighbor_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_source_and_port_range_check_add_del_reply>(vapi_msg_ip_source_and_port_range_check_add_del_reply *msg)
{
  vapi_msg_ip_source_and_port_range_check_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_source_and_port_range_check_add_del_reply>(vapi_msg_ip_source_and_port_range_check_add_del_reply *msg)
{
  vapi_msg_ip_source_and_port_range_check_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_source_and_port_range_check_add_del_reply>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_source_and_port_range_check_add_del_reply>>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_source_and_port_range_check_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_source_and_port_range_check_add_del_reply>(vapi_msg_id_ip_source_and_port_range_check_add_del_reply);
}

template class Msg<vapi_msg_ip_source_and_port_range_check_add_del_reply>;

using Ip_source_and_port_range_check_add_del_reply = Msg<vapi_msg_ip_source_and_port_range_check_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_scan_neighbor_enable_disable_reply>(vapi_msg_ip_scan_neighbor_enable_disable_reply *msg)
{
  vapi_msg_ip_scan_neighbor_enable_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_scan_neighbor_enable_disable_reply>(vapi_msg_ip_scan_neighbor_enable_disable_reply *msg)
{
  vapi_msg_ip_scan_neighbor_enable_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_scan_neighbor_enable_disable_reply>()
{
  return ::vapi_msg_id_ip_scan_neighbor_enable_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_scan_neighbor_enable_disable_reply>>()
{
  return ::vapi_msg_id_ip_scan_neighbor_enable_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_scan_neighbor_enable_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_scan_neighbor_enable_disable_reply>(vapi_msg_id_ip_scan_neighbor_enable_disable_reply);
}

template class Msg<vapi_msg_ip_scan_neighbor_enable_disable_reply>;

using Ip_scan_neighbor_enable_disable_reply = Msg<vapi_msg_ip_scan_neighbor_enable_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_table_add_del_reply>(vapi_msg_ip_table_add_del_reply *msg)
{
  vapi_msg_ip_table_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_table_add_del_reply>(vapi_msg_ip_table_add_del_reply *msg)
{
  vapi_msg_ip_table_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_table_add_del_reply>()
{
  return ::vapi_msg_id_ip_table_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_table_add_del_reply>>()
{
  return ::vapi_msg_id_ip_table_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_table_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_table_add_del_reply>(vapi_msg_id_ip_table_add_del_reply);
}

template class Msg<vapi_msg_ip_table_add_del_reply>;

using Ip_table_add_del_reply = Msg<vapi_msg_ip_table_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6nd_ra_prefix>(vapi_msg_sw_interface_ip6nd_ra_prefix *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_prefix_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6nd_ra_prefix>(vapi_msg_sw_interface_ip6nd_ra_prefix *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_prefix_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6nd_ra_prefix>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_prefix; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6nd_ra_prefix>>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_prefix; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6nd_ra_prefix()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6nd_ra_prefix>(vapi_msg_id_sw_interface_ip6nd_ra_prefix);
}

template <> inline vapi_msg_sw_interface_ip6nd_ra_prefix* vapi_alloc<vapi_msg_sw_interface_ip6nd_ra_prefix>(Connection &con)
{
  vapi_msg_sw_interface_ip6nd_ra_prefix* result = vapi_alloc_sw_interface_ip6nd_ra_prefix(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sw_interface_ip6nd_ra_prefix>;

template class Request<vapi_msg_sw_interface_ip6nd_ra_prefix, vapi_msg_sw_interface_ip6nd_ra_prefix_reply>;

using Sw_interface_ip6nd_ra_prefix = Request<vapi_msg_sw_interface_ip6nd_ra_prefix, vapi_msg_sw_interface_ip6nd_ra_prefix_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_reassembly_set>(vapi_msg_ip_reassembly_set *msg)
{
  vapi_msg_ip_reassembly_set_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_reassembly_set>(vapi_msg_ip_reassembly_set *msg)
{
  vapi_msg_ip_reassembly_set_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_reassembly_set>()
{
  return ::vapi_msg_id_ip_reassembly_set; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_reassembly_set>>()
{
  return ::vapi_msg_id_ip_reassembly_set; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_reassembly_set()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_reassembly_set>(vapi_msg_id_ip_reassembly_set);
}

template <> inline vapi_msg_ip_reassembly_set* vapi_alloc<vapi_msg_ip_reassembly_set>(Connection &con)
{
  vapi_msg_ip_reassembly_set* result = vapi_alloc_ip_reassembly_set(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_reassembly_set>;

template class Request<vapi_msg_ip_reassembly_set, vapi_msg_ip_reassembly_set_reply>;

using Ip_reassembly_set = Request<vapi_msg_ip_reassembly_set, vapi_msg_ip_reassembly_set_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6_enable_disable>(vapi_msg_sw_interface_ip6_enable_disable *msg)
{
  vapi_msg_sw_interface_ip6_enable_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6_enable_disable>(vapi_msg_sw_interface_ip6_enable_disable *msg)
{
  vapi_msg_sw_interface_ip6_enable_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6_enable_disable>()
{
  return ::vapi_msg_id_sw_interface_ip6_enable_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6_enable_disable>>()
{
  return ::vapi_msg_id_sw_interface_ip6_enable_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6_enable_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6_enable_disable>(vapi_msg_id_sw_interface_ip6_enable_disable);
}

template <> inline vapi_msg_sw_interface_ip6_enable_disable* vapi_alloc<vapi_msg_sw_interface_ip6_enable_disable>(Connection &con)
{
  vapi_msg_sw_interface_ip6_enable_disable* result = vapi_alloc_sw_interface_ip6_enable_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sw_interface_ip6_enable_disable>;

template class Request<vapi_msg_sw_interface_ip6_enable_disable, vapi_msg_sw_interface_ip6_enable_disable_reply>;

using Sw_interface_ip6_enable_disable = Request<vapi_msg_sw_interface_ip6_enable_disable, vapi_msg_sw_interface_ip6_enable_disable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_want_ip4_arp_events>(vapi_msg_want_ip4_arp_events *msg)
{
  vapi_msg_want_ip4_arp_events_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip4_arp_events>(vapi_msg_want_ip4_arp_events *msg)
{
  vapi_msg_want_ip4_arp_events_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip4_arp_events>()
{
  return ::vapi_msg_id_want_ip4_arp_events; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip4_arp_events>>()
{
  return ::vapi_msg_id_want_ip4_arp_events; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip4_arp_events()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip4_arp_events>(vapi_msg_id_want_ip4_arp_events);
}

template <> inline vapi_msg_want_ip4_arp_events* vapi_alloc<vapi_msg_want_ip4_arp_events>(Connection &con)
{
  vapi_msg_want_ip4_arp_events* result = vapi_alloc_want_ip4_arp_events(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_want_ip4_arp_events>;

template class Request<vapi_msg_want_ip4_arp_events, vapi_msg_want_ip4_arp_events_reply>;

using Want_ip4_arp_events = Request<vapi_msg_want_ip4_arp_events, vapi_msg_want_ip4_arp_events_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_mtable_dump>(vapi_msg_ip_mtable_dump *msg)
{
  vapi_msg_ip_mtable_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_mtable_dump>(vapi_msg_ip_mtable_dump *msg)
{
  vapi_msg_ip_mtable_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_mtable_dump>()
{
  return ::vapi_msg_id_ip_mtable_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_mtable_dump>>()
{
  return ::vapi_msg_id_ip_mtable_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_mtable_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_mtable_dump>(vapi_msg_id_ip_mtable_dump);
}

template <> inline vapi_msg_ip_mtable_dump* vapi_alloc<vapi_msg_ip_mtable_dump>(Connection &con)
{
  vapi_msg_ip_mtable_dump* result = vapi_alloc_ip_mtable_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_mtable_dump>;

template class Dump<vapi_msg_ip_mtable_dump, vapi_msg_ip_mtable_details>;

using Ip_mtable_dump = Dump<vapi_msg_ip_mtable_dump, vapi_msg_ip_mtable_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>(vapi_msg_ip_source_and_port_range_check_interface_add_del_reply *msg)
{
  vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>(vapi_msg_ip_source_and_port_range_check_interface_add_del_reply *msg)
{
  vapi_msg_ip_source_and_port_range_check_interface_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_source_and_port_range_check_interface_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>(vapi_msg_id_ip_source_and_port_range_check_interface_add_del_reply);
}

template class Msg<vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>;

using Ip_source_and_port_range_check_interface_add_del_reply = Msg<vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_punt_redirect_reply>(vapi_msg_ip_punt_redirect_reply *msg)
{
  vapi_msg_ip_punt_redirect_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_punt_redirect_reply>(vapi_msg_ip_punt_redirect_reply *msg)
{
  vapi_msg_ip_punt_redirect_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_punt_redirect_reply>()
{
  return ::vapi_msg_id_ip_punt_redirect_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_punt_redirect_reply>>()
{
  return ::vapi_msg_id_ip_punt_redirect_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_punt_redirect_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_punt_redirect_reply>(vapi_msg_id_ip_punt_redirect_reply);
}

template class Msg<vapi_msg_ip_punt_redirect_reply>;

using Ip_punt_redirect_reply = Msg<vapi_msg_ip_punt_redirect_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_unnumbered_dump>(vapi_msg_ip_unnumbered_dump *msg)
{
  vapi_msg_ip_unnumbered_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_unnumbered_dump>(vapi_msg_ip_unnumbered_dump *msg)
{
  vapi_msg_ip_unnumbered_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_unnumbered_dump>()
{
  return ::vapi_msg_id_ip_unnumbered_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_unnumbered_dump>>()
{
  return ::vapi_msg_id_ip_unnumbered_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_unnumbered_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_unnumbered_dump>(vapi_msg_id_ip_unnumbered_dump);
}

template <> inline vapi_msg_ip_unnumbered_dump* vapi_alloc<vapi_msg_ip_unnumbered_dump>(Connection &con)
{
  vapi_msg_ip_unnumbered_dump* result = vapi_alloc_ip_unnumbered_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_unnumbered_dump>;

template class Dump<vapi_msg_ip_unnumbered_dump, vapi_msg_ip_unnumbered_details>;

using Ip_unnumbered_dump = Dump<vapi_msg_ip_unnumbered_dump, vapi_msg_ip_unnumbered_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_add_del>(vapi_msg_ip_neighbor_add_del *msg)
{
  vapi_msg_ip_neighbor_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_add_del>(vapi_msg_ip_neighbor_add_del *msg)
{
  vapi_msg_ip_neighbor_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_add_del>()
{
  return ::vapi_msg_id_ip_neighbor_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_add_del>>()
{
  return ::vapi_msg_id_ip_neighbor_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_add_del>(vapi_msg_id_ip_neighbor_add_del);
}

template <> inline vapi_msg_ip_neighbor_add_del* vapi_alloc<vapi_msg_ip_neighbor_add_del>(Connection &con)
{
  vapi_msg_ip_neighbor_add_del* result = vapi_alloc_ip_neighbor_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_neighbor_add_del>;

template class Request<vapi_msg_ip_neighbor_add_del, vapi_msg_ip_neighbor_add_del_reply>;

using Ip_neighbor_add_del = Request<vapi_msg_ip_neighbor_add_del, vapi_msg_ip_neighbor_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_container_proxy_details>(vapi_msg_ip_container_proxy_details *msg)
{
  vapi_msg_ip_container_proxy_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_container_proxy_details>(vapi_msg_ip_container_proxy_details *msg)
{
  vapi_msg_ip_container_proxy_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_container_proxy_details>()
{
  return ::vapi_msg_id_ip_container_proxy_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_container_proxy_details>>()
{
  return ::vapi_msg_id_ip_container_proxy_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_container_proxy_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_container_proxy_details>(vapi_msg_id_ip_container_proxy_details);
}

template class Msg<vapi_msg_ip_container_proxy_details>;

using Ip_container_proxy_details = Msg<vapi_msg_ip_container_proxy_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip6nd_proxy_dump>(vapi_msg_ip6nd_proxy_dump *msg)
{
  vapi_msg_ip6nd_proxy_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6nd_proxy_dump>(vapi_msg_ip6nd_proxy_dump *msg)
{
  vapi_msg_ip6nd_proxy_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6nd_proxy_dump>()
{
  return ::vapi_msg_id_ip6nd_proxy_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6nd_proxy_dump>>()
{
  return ::vapi_msg_id_ip6nd_proxy_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6nd_proxy_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6nd_proxy_dump>(vapi_msg_id_ip6nd_proxy_dump);
}

template <> inline vapi_msg_ip6nd_proxy_dump* vapi_alloc<vapi_msg_ip6nd_proxy_dump>(Connection &con)
{
  vapi_msg_ip6nd_proxy_dump* result = vapi_alloc_ip6nd_proxy_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip6nd_proxy_dump>;

template class Dump<vapi_msg_ip6nd_proxy_dump, vapi_msg_ip6nd_proxy_details>;

using Ip6nd_proxy_dump = Dump<vapi_msg_ip6nd_proxy_dump, vapi_msg_ip6nd_proxy_details>;

template <> inline void vapi_swap_to_be<vapi_msg_want_ip6_ra_events>(vapi_msg_want_ip6_ra_events *msg)
{
  vapi_msg_want_ip6_ra_events_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip6_ra_events>(vapi_msg_want_ip6_ra_events *msg)
{
  vapi_msg_want_ip6_ra_events_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip6_ra_events>()
{
  return ::vapi_msg_id_want_ip6_ra_events; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip6_ra_events>>()
{
  return ::vapi_msg_id_want_ip6_ra_events; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip6_ra_events()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip6_ra_events>(vapi_msg_id_want_ip6_ra_events);
}

template <> inline vapi_msg_want_ip6_ra_events* vapi_alloc<vapi_msg_want_ip6_ra_events>(Connection &con)
{
  vapi_msg_want_ip6_ra_events* result = vapi_alloc_want_ip6_ra_events(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_want_ip6_ra_events>;

template class Request<vapi_msg_want_ip6_ra_events, vapi_msg_want_ip6_ra_events_reply>;

using Want_ip6_ra_events = Request<vapi_msg_want_ip6_ra_events, vapi_msg_want_ip6_ra_events_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_scan_neighbor_enable_disable>(vapi_msg_ip_scan_neighbor_enable_disable *msg)
{
  vapi_msg_ip_scan_neighbor_enable_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_scan_neighbor_enable_disable>(vapi_msg_ip_scan_neighbor_enable_disable *msg)
{
  vapi_msg_ip_scan_neighbor_enable_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_scan_neighbor_enable_disable>()
{
  return ::vapi_msg_id_ip_scan_neighbor_enable_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_scan_neighbor_enable_disable>>()
{
  return ::vapi_msg_id_ip_scan_neighbor_enable_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_scan_neighbor_enable_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_scan_neighbor_enable_disable>(vapi_msg_id_ip_scan_neighbor_enable_disable);
}

template <> inline vapi_msg_ip_scan_neighbor_enable_disable* vapi_alloc<vapi_msg_ip_scan_neighbor_enable_disable>(Connection &con)
{
  vapi_msg_ip_scan_neighbor_enable_disable* result = vapi_alloc_ip_scan_neighbor_enable_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_scan_neighbor_enable_disable>;

template class Request<vapi_msg_ip_scan_neighbor_enable_disable, vapi_msg_ip_scan_neighbor_enable_disable_reply>;

using Ip_scan_neighbor_enable_disable = Request<vapi_msg_ip_scan_neighbor_enable_disable, vapi_msg_ip_scan_neighbor_enable_disable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_reassembly_get>(vapi_msg_ip_reassembly_get *msg)
{
  vapi_msg_ip_reassembly_get_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_reassembly_get>(vapi_msg_ip_reassembly_get *msg)
{
  vapi_msg_ip_reassembly_get_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_reassembly_get>()
{
  return ::vapi_msg_id_ip_reassembly_get; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_reassembly_get>>()
{
  return ::vapi_msg_id_ip_reassembly_get; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_reassembly_get()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_reassembly_get>(vapi_msg_id_ip_reassembly_get);
}

template <> inline vapi_msg_ip_reassembly_get* vapi_alloc<vapi_msg_ip_reassembly_get>(Connection &con)
{
  vapi_msg_ip_reassembly_get* result = vapi_alloc_ip_reassembly_get(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_reassembly_get>;

template class Request<vapi_msg_ip_reassembly_get, vapi_msg_ip_reassembly_get_reply>;

using Ip_reassembly_get = Request<vapi_msg_ip_reassembly_get, vapi_msg_ip_reassembly_get_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ioam_enable_reply>(vapi_msg_ioam_enable_reply *msg)
{
  vapi_msg_ioam_enable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ioam_enable_reply>(vapi_msg_ioam_enable_reply *msg)
{
  vapi_msg_ioam_enable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ioam_enable_reply>()
{
  return ::vapi_msg_id_ioam_enable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ioam_enable_reply>>()
{
  return ::vapi_msg_id_ioam_enable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ioam_enable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ioam_enable_reply>(vapi_msg_id_ioam_enable_reply);
}

template class Msg<vapi_msg_ioam_enable_reply>;

using Ioam_enable_reply = Msg<vapi_msg_ioam_enable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_set_ip_flow_hash_reply>(vapi_msg_set_ip_flow_hash_reply *msg)
{
  vapi_msg_set_ip_flow_hash_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_set_ip_flow_hash_reply>(vapi_msg_set_ip_flow_hash_reply *msg)
{
  vapi_msg_set_ip_flow_hash_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_set_ip_flow_hash_reply>()
{
  return ::vapi_msg_id_set_ip_flow_hash_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_set_ip_flow_hash_reply>>()
{
  return ::vapi_msg_id_set_ip_flow_hash_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_set_ip_flow_hash_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_set_ip_flow_hash_reply>(vapi_msg_id_set_ip_flow_hash_reply);
}

template class Msg<vapi_msg_set_ip_flow_hash_reply>;

using Set_ip_flow_hash_reply = Msg<vapi_msg_set_ip_flow_hash_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_address_dump>(vapi_msg_ip_address_dump *msg)
{
  vapi_msg_ip_address_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_address_dump>(vapi_msg_ip_address_dump *msg)
{
  vapi_msg_ip_address_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_address_dump>()
{
  return ::vapi_msg_id_ip_address_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_address_dump>>()
{
  return ::vapi_msg_id_ip_address_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_address_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_address_dump>(vapi_msg_id_ip_address_dump);
}

template <> inline vapi_msg_ip_address_dump* vapi_alloc<vapi_msg_ip_address_dump>(Connection &con)
{
  vapi_msg_ip_address_dump* result = vapi_alloc_ip_address_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_address_dump>;

template class Dump<vapi_msg_ip_address_dump, vapi_msg_ip_address_details>;

using Ip_address_dump = Dump<vapi_msg_ip_address_dump, vapi_msg_ip_address_details>;

template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_intfc_details>(vapi_msg_proxy_arp_intfc_details *msg)
{
  vapi_msg_proxy_arp_intfc_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_intfc_details>(vapi_msg_proxy_arp_intfc_details *msg)
{
  vapi_msg_proxy_arp_intfc_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_intfc_details>()
{
  return ::vapi_msg_id_proxy_arp_intfc_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_intfc_details>>()
{
  return ::vapi_msg_id_proxy_arp_intfc_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_intfc_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_intfc_details>(vapi_msg_id_proxy_arp_intfc_details);
}

template class Msg<vapi_msg_proxy_arp_intfc_details>;

using Proxy_arp_intfc_details = Msg<vapi_msg_proxy_arp_intfc_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_mroute_add_del_reply>(vapi_msg_ip_mroute_add_del_reply *msg)
{
  vapi_msg_ip_mroute_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_mroute_add_del_reply>(vapi_msg_ip_mroute_add_del_reply *msg)
{
  vapi_msg_ip_mroute_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_mroute_add_del_reply>()
{
  return ::vapi_msg_id_ip_mroute_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_mroute_add_del_reply>>()
{
  return ::vapi_msg_id_ip_mroute_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_mroute_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_mroute_add_del_reply>(vapi_msg_id_ip_mroute_add_del_reply);
}

template class Msg<vapi_msg_ip_mroute_add_del_reply>;

using Ip_mroute_add_del_reply = Msg<vapi_msg_ip_mroute_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_details>(vapi_msg_proxy_arp_details *msg)
{
  vapi_msg_proxy_arp_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_details>(vapi_msg_proxy_arp_details *msg)
{
  vapi_msg_proxy_arp_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_details>()
{
  return ::vapi_msg_id_proxy_arp_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_details>>()
{
  return ::vapi_msg_id_proxy_arp_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_details>(vapi_msg_id_proxy_arp_details);
}

template class Msg<vapi_msg_proxy_arp_details>;

using Proxy_arp_details = Msg<vapi_msg_proxy_arp_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_punt_redirect>(vapi_msg_ip_punt_redirect *msg)
{
  vapi_msg_ip_punt_redirect_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_punt_redirect>(vapi_msg_ip_punt_redirect *msg)
{
  vapi_msg_ip_punt_redirect_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_punt_redirect>()
{
  return ::vapi_msg_id_ip_punt_redirect; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_punt_redirect>>()
{
  return ::vapi_msg_id_ip_punt_redirect; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_punt_redirect()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_punt_redirect>(vapi_msg_id_ip_punt_redirect);
}

template <> inline vapi_msg_ip_punt_redirect* vapi_alloc<vapi_msg_ip_punt_redirect>(Connection &con)
{
  vapi_msg_ip_punt_redirect* result = vapi_alloc_ip_punt_redirect(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_punt_redirect>;

template class Request<vapi_msg_ip_punt_redirect, vapi_msg_ip_punt_redirect_reply>;

using Ip_punt_redirect = Request<vapi_msg_ip_punt_redirect, vapi_msg_ip_punt_redirect_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6nd_ra_prefix_reply>(vapi_msg_sw_interface_ip6nd_ra_prefix_reply *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_prefix_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6nd_ra_prefix_reply>(vapi_msg_sw_interface_ip6nd_ra_prefix_reply *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_prefix_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6nd_ra_prefix_reply>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6nd_ra_prefix_reply>>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6nd_ra_prefix_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6nd_ra_prefix_reply>(vapi_msg_id_sw_interface_ip6nd_ra_prefix_reply);
}

template class Msg<vapi_msg_sw_interface_ip6nd_ra_prefix_reply>;

using Sw_interface_ip6nd_ra_prefix_reply = Msg<vapi_msg_sw_interface_ip6nd_ra_prefix_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_details>(vapi_msg_ip_details *msg)
{
  vapi_msg_ip_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_details>(vapi_msg_ip_details *msg)
{
  vapi_msg_ip_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_details>()
{
  return ::vapi_msg_id_ip_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_details>>()
{
  return ::vapi_msg_id_ip_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_details>(vapi_msg_id_ip_details);
}

template class Msg<vapi_msg_ip_details>;

using Ip_details = Msg<vapi_msg_ip_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_dump>(vapi_msg_ip_neighbor_dump *msg)
{
  vapi_msg_ip_neighbor_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_dump>(vapi_msg_ip_neighbor_dump *msg)
{
  vapi_msg_ip_neighbor_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_dump>()
{
  return ::vapi_msg_id_ip_neighbor_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_dump>>()
{
  return ::vapi_msg_id_ip_neighbor_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_dump>(vapi_msg_id_ip_neighbor_dump);
}

template <> inline vapi_msg_ip_neighbor_dump* vapi_alloc<vapi_msg_ip_neighbor_dump>(Connection &con)
{
  vapi_msg_ip_neighbor_dump* result = vapi_alloc_ip_neighbor_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_neighbor_dump>;

template class Dump<vapi_msg_ip_neighbor_dump, vapi_msg_ip_neighbor_details>;

using Ip_neighbor_dump = Dump<vapi_msg_ip_neighbor_dump, vapi_msg_ip_neighbor_details>;

template <> inline void vapi_swap_to_be<vapi_msg_reset_fib>(vapi_msg_reset_fib *msg)
{
  vapi_msg_reset_fib_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_reset_fib>(vapi_msg_reset_fib *msg)
{
  vapi_msg_reset_fib_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_reset_fib>()
{
  return ::vapi_msg_id_reset_fib; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_reset_fib>>()
{
  return ::vapi_msg_id_reset_fib; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_reset_fib()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_reset_fib>(vapi_msg_id_reset_fib);
}

template <> inline vapi_msg_reset_fib* vapi_alloc<vapi_msg_reset_fib>(Connection &con)
{
  vapi_msg_reset_fib* result = vapi_alloc_reset_fib(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_reset_fib>;

template class Request<vapi_msg_reset_fib, vapi_msg_reset_fib_reply>;

using Reset_fib = Request<vapi_msg_reset_fib, vapi_msg_reset_fib_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6nd_ra_config>(vapi_msg_sw_interface_ip6nd_ra_config *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_config_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6nd_ra_config>(vapi_msg_sw_interface_ip6nd_ra_config *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_config_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6nd_ra_config>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_config; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6nd_ra_config>>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_config; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6nd_ra_config()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6nd_ra_config>(vapi_msg_id_sw_interface_ip6nd_ra_config);
}

template <> inline vapi_msg_sw_interface_ip6nd_ra_config* vapi_alloc<vapi_msg_sw_interface_ip6nd_ra_config>(Connection &con)
{
  vapi_msg_sw_interface_ip6nd_ra_config* result = vapi_alloc_sw_interface_ip6nd_ra_config(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sw_interface_ip6nd_ra_config>;

template class Request<vapi_msg_sw_interface_ip6nd_ra_config, vapi_msg_sw_interface_ip6nd_ra_config_reply>;

using Sw_interface_ip6nd_ra_config = Request<vapi_msg_sw_interface_ip6nd_ra_config, vapi_msg_sw_interface_ip6nd_ra_config_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_mfib_signal_dump>(vapi_msg_mfib_signal_dump *msg)
{
  vapi_msg_mfib_signal_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_mfib_signal_dump>(vapi_msg_mfib_signal_dump *msg)
{
  vapi_msg_mfib_signal_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_mfib_signal_dump>()
{
  return ::vapi_msg_id_mfib_signal_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_mfib_signal_dump>>()
{
  return ::vapi_msg_id_mfib_signal_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_mfib_signal_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_mfib_signal_dump>(vapi_msg_id_mfib_signal_dump);
}

template <> inline vapi_msg_mfib_signal_dump* vapi_alloc<vapi_msg_mfib_signal_dump>(Connection &con)
{
  vapi_msg_mfib_signal_dump* result = vapi_alloc_mfib_signal_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_mfib_signal_dump>;

template class Dump<vapi_msg_mfib_signal_dump, vapi_msg_mfib_signal_details>;

using Mfib_signal_dump = Dump<vapi_msg_mfib_signal_dump, vapi_msg_mfib_signal_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_container_proxy_add_del>(vapi_msg_ip_container_proxy_add_del *msg)
{
  vapi_msg_ip_container_proxy_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_container_proxy_add_del>(vapi_msg_ip_container_proxy_add_del *msg)
{
  vapi_msg_ip_container_proxy_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_container_proxy_add_del>()
{
  return ::vapi_msg_id_ip_container_proxy_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_container_proxy_add_del>>()
{
  return ::vapi_msg_id_ip_container_proxy_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_container_proxy_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_container_proxy_add_del>(vapi_msg_id_ip_container_proxy_add_del);
}

template <> inline vapi_msg_ip_container_proxy_add_del* vapi_alloc<vapi_msg_ip_container_proxy_add_del>(Connection &con)
{
  vapi_msg_ip_container_proxy_add_del* result = vapi_alloc_ip_container_proxy_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_container_proxy_add_del>;

template class Request<vapi_msg_ip_container_proxy_add_del, vapi_msg_ip_container_proxy_add_del_reply>;

using Ip_container_proxy_add_del = Request<vapi_msg_ip_container_proxy_add_del, vapi_msg_ip_container_proxy_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_mtable_details>(vapi_msg_ip_mtable_details *msg)
{
  vapi_msg_ip_mtable_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_mtable_details>(vapi_msg_ip_mtable_details *msg)
{
  vapi_msg_ip_mtable_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_mtable_details>()
{
  return ::vapi_msg_id_ip_mtable_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_mtable_details>>()
{
  return ::vapi_msg_id_ip_mtable_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_mtable_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_mtable_details>(vapi_msg_id_ip_mtable_details);
}

template class Msg<vapi_msg_ip_mtable_details>;

using Ip_mtable_details = Msg<vapi_msg_ip_mtable_details>;
template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_ip6nd_ra_config_reply>(vapi_msg_sw_interface_ip6nd_ra_config_reply *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_config_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_ip6nd_ra_config_reply>(vapi_msg_sw_interface_ip6nd_ra_config_reply *msg)
{
  vapi_msg_sw_interface_ip6nd_ra_config_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_ip6nd_ra_config_reply>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_config_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_ip6nd_ra_config_reply>>()
{
  return ::vapi_msg_id_sw_interface_ip6nd_ra_config_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_ip6nd_ra_config_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_ip6nd_ra_config_reply>(vapi_msg_id_sw_interface_ip6nd_ra_config_reply);
}

template class Msg<vapi_msg_sw_interface_ip6nd_ra_config_reply>;

using Sw_interface_ip6nd_ra_config_reply = Msg<vapi_msg_sw_interface_ip6nd_ra_config_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip6nd_proxy_add_del_reply>(vapi_msg_ip6nd_proxy_add_del_reply *msg)
{
  vapi_msg_ip6nd_proxy_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6nd_proxy_add_del_reply>(vapi_msg_ip6nd_proxy_add_del_reply *msg)
{
  vapi_msg_ip6nd_proxy_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6nd_proxy_add_del_reply>()
{
  return ::vapi_msg_id_ip6nd_proxy_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6nd_proxy_add_del_reply>>()
{
  return ::vapi_msg_id_ip6nd_proxy_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6nd_proxy_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6nd_proxy_add_del_reply>(vapi_msg_id_ip6nd_proxy_add_del_reply);
}

template class Msg<vapi_msg_ip6nd_proxy_add_del_reply>;

using Ip6nd_proxy_add_del_reply = Msg<vapi_msg_ip6nd_proxy_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_intfc_dump>(vapi_msg_proxy_arp_intfc_dump *msg)
{
  vapi_msg_proxy_arp_intfc_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_intfc_dump>(vapi_msg_proxy_arp_intfc_dump *msg)
{
  vapi_msg_proxy_arp_intfc_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_intfc_dump>()
{
  return ::vapi_msg_id_proxy_arp_intfc_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_intfc_dump>>()
{
  return ::vapi_msg_id_proxy_arp_intfc_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_intfc_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_intfc_dump>(vapi_msg_id_proxy_arp_intfc_dump);
}

template <> inline vapi_msg_proxy_arp_intfc_dump* vapi_alloc<vapi_msg_proxy_arp_intfc_dump>(Connection &con)
{
  vapi_msg_proxy_arp_intfc_dump* result = vapi_alloc_proxy_arp_intfc_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_proxy_arp_intfc_dump>;

template class Dump<vapi_msg_proxy_arp_intfc_dump, vapi_msg_proxy_arp_intfc_details>;

using Proxy_arp_intfc_dump = Dump<vapi_msg_proxy_arp_intfc_dump, vapi_msg_proxy_arp_intfc_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ioam_disable>(vapi_msg_ioam_disable *msg)
{
  vapi_msg_ioam_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ioam_disable>(vapi_msg_ioam_disable *msg)
{
  vapi_msg_ioam_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ioam_disable>()
{
  return ::vapi_msg_id_ioam_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ioam_disable>>()
{
  return ::vapi_msg_id_ioam_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ioam_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ioam_disable>(vapi_msg_id_ioam_disable);
}

template <> inline vapi_msg_ioam_disable* vapi_alloc<vapi_msg_ioam_disable>(Connection &con)
{
  vapi_msg_ioam_disable* result = vapi_alloc_ioam_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ioam_disable>;

template class Request<vapi_msg_ioam_disable, vapi_msg_ioam_disable_reply>;

using Ioam_disable = Request<vapi_msg_ioam_disable, vapi_msg_ioam_disable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_add_del_reply>(vapi_msg_proxy_arp_add_del_reply *msg)
{
  vapi_msg_proxy_arp_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_add_del_reply>(vapi_msg_proxy_arp_add_del_reply *msg)
{
  vapi_msg_proxy_arp_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_add_del_reply>()
{
  return ::vapi_msg_id_proxy_arp_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_add_del_reply>>()
{
  return ::vapi_msg_id_proxy_arp_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_add_del_reply>(vapi_msg_id_proxy_arp_add_del_reply);
}

template class Msg<vapi_msg_proxy_arp_add_del_reply>;

using Proxy_arp_add_del_reply = Msg<vapi_msg_proxy_arp_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_reassembly_get_reply>(vapi_msg_ip_reassembly_get_reply *msg)
{
  vapi_msg_ip_reassembly_get_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_reassembly_get_reply>(vapi_msg_ip_reassembly_get_reply *msg)
{
  vapi_msg_ip_reassembly_get_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_reassembly_get_reply>()
{
  return ::vapi_msg_id_ip_reassembly_get_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_reassembly_get_reply>>()
{
  return ::vapi_msg_id_ip_reassembly_get_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_reassembly_get_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_reassembly_get_reply>(vapi_msg_id_ip_reassembly_get_reply);
}

template class Msg<vapi_msg_ip_reassembly_get_reply>;

using Ip_reassembly_get_reply = Msg<vapi_msg_ip_reassembly_get_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_want_ip6_nd_events>(vapi_msg_want_ip6_nd_events *msg)
{
  vapi_msg_want_ip6_nd_events_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip6_nd_events>(vapi_msg_want_ip6_nd_events *msg)
{
  vapi_msg_want_ip6_nd_events_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip6_nd_events>()
{
  return ::vapi_msg_id_want_ip6_nd_events; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip6_nd_events>>()
{
  return ::vapi_msg_id_want_ip6_nd_events; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip6_nd_events()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip6_nd_events>(vapi_msg_id_want_ip6_nd_events);
}

template <> inline vapi_msg_want_ip6_nd_events* vapi_alloc<vapi_msg_want_ip6_nd_events>(Connection &con)
{
  vapi_msg_want_ip6_nd_events* result = vapi_alloc_want_ip6_nd_events(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_want_ip6_nd_events>;

template class Request<vapi_msg_want_ip6_nd_events, vapi_msg_want_ip6_nd_events_reply>;

using Want_ip6_nd_events = Request<vapi_msg_want_ip6_nd_events, vapi_msg_want_ip6_nd_events_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_punt_police>(vapi_msg_ip_punt_police *msg)
{
  vapi_msg_ip_punt_police_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_punt_police>(vapi_msg_ip_punt_police *msg)
{
  vapi_msg_ip_punt_police_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_punt_police>()
{
  return ::vapi_msg_id_ip_punt_police; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_punt_police>>()
{
  return ::vapi_msg_id_ip_punt_police; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_punt_police()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_punt_police>(vapi_msg_id_ip_punt_police);
}

template <> inline vapi_msg_ip_punt_police* vapi_alloc<vapi_msg_ip_punt_police>(Connection &con)
{
  vapi_msg_ip_punt_police* result = vapi_alloc_ip_punt_police(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_punt_police>;

template class Request<vapi_msg_ip_punt_police, vapi_msg_ip_punt_police_reply>;

using Ip_punt_police = Request<vapi_msg_ip_punt_police, vapi_msg_ip_punt_police_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_intfc_enable_disable_reply>(vapi_msg_proxy_arp_intfc_enable_disable_reply *msg)
{
  vapi_msg_proxy_arp_intfc_enable_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_intfc_enable_disable_reply>(vapi_msg_proxy_arp_intfc_enable_disable_reply *msg)
{
  vapi_msg_proxy_arp_intfc_enable_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_intfc_enable_disable_reply>()
{
  return ::vapi_msg_id_proxy_arp_intfc_enable_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_intfc_enable_disable_reply>>()
{
  return ::vapi_msg_id_proxy_arp_intfc_enable_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_intfc_enable_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_intfc_enable_disable_reply>(vapi_msg_id_proxy_arp_intfc_enable_disable_reply);
}

template class Msg<vapi_msg_proxy_arp_intfc_enable_disable_reply>;

using Proxy_arp_intfc_enable_disable_reply = Msg<vapi_msg_proxy_arp_intfc_enable_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_set_arp_neighbor_limit>(vapi_msg_set_arp_neighbor_limit *msg)
{
  vapi_msg_set_arp_neighbor_limit_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_set_arp_neighbor_limit>(vapi_msg_set_arp_neighbor_limit *msg)
{
  vapi_msg_set_arp_neighbor_limit_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_set_arp_neighbor_limit>()
{
  return ::vapi_msg_id_set_arp_neighbor_limit; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_set_arp_neighbor_limit>>()
{
  return ::vapi_msg_id_set_arp_neighbor_limit; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_set_arp_neighbor_limit()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_set_arp_neighbor_limit>(vapi_msg_id_set_arp_neighbor_limit);
}

template <> inline vapi_msg_set_arp_neighbor_limit* vapi_alloc<vapi_msg_set_arp_neighbor_limit>(Connection &con)
{
  vapi_msg_set_arp_neighbor_limit* result = vapi_alloc_set_arp_neighbor_limit(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_set_arp_neighbor_limit>;

template class Request<vapi_msg_set_arp_neighbor_limit, vapi_msg_set_arp_neighbor_limit_reply>;

using Set_arp_neighbor_limit = Request<vapi_msg_set_arp_neighbor_limit, vapi_msg_set_arp_neighbor_limit_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip6nd_send_router_solicitation>(vapi_msg_ip6nd_send_router_solicitation *msg)
{
  vapi_msg_ip6nd_send_router_solicitation_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip6nd_send_router_solicitation>(vapi_msg_ip6nd_send_router_solicitation *msg)
{
  vapi_msg_ip6nd_send_router_solicitation_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip6nd_send_router_solicitation>()
{
  return ::vapi_msg_id_ip6nd_send_router_solicitation; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip6nd_send_router_solicitation>>()
{
  return ::vapi_msg_id_ip6nd_send_router_solicitation; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip6nd_send_router_solicitation()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip6nd_send_router_solicitation>(vapi_msg_id_ip6nd_send_router_solicitation);
}

template <> inline vapi_msg_ip6nd_send_router_solicitation* vapi_alloc<vapi_msg_ip6nd_send_router_solicitation>(Connection &con)
{
  vapi_msg_ip6nd_send_router_solicitation* result = vapi_alloc_ip6nd_send_router_solicitation(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip6nd_send_router_solicitation>;

template class Request<vapi_msg_ip6nd_send_router_solicitation, vapi_msg_ip6nd_send_router_solicitation_reply>;

using Ip6nd_send_router_solicitation = Request<vapi_msg_ip6nd_send_router_solicitation, vapi_msg_ip6nd_send_router_solicitation_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_table_add_del>(vapi_msg_ip_table_add_del *msg)
{
  vapi_msg_ip_table_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_table_add_del>(vapi_msg_ip_table_add_del *msg)
{
  vapi_msg_ip_table_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_table_add_del>()
{
  return ::vapi_msg_id_ip_table_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_table_add_del>>()
{
  return ::vapi_msg_id_ip_table_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_table_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_table_add_del>(vapi_msg_id_ip_table_add_del);
}

template <> inline vapi_msg_ip_table_add_del* vapi_alloc<vapi_msg_ip_table_add_del>(Connection &con)
{
  vapi_msg_ip_table_add_del* result = vapi_alloc_ip_table_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_table_add_del>;

template class Request<vapi_msg_ip_table_add_del, vapi_msg_ip_table_add_del_reply>;

using Ip_table_add_del = Request<vapi_msg_ip_table_add_del, vapi_msg_ip_table_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_table_dump>(vapi_msg_ip_table_dump *msg)
{
  vapi_msg_ip_table_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_table_dump>(vapi_msg_ip_table_dump *msg)
{
  vapi_msg_ip_table_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_table_dump>()
{
  return ::vapi_msg_id_ip_table_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_table_dump>>()
{
  return ::vapi_msg_id_ip_table_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_table_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_table_dump>(vapi_msg_id_ip_table_dump);
}

template <> inline vapi_msg_ip_table_dump* vapi_alloc<vapi_msg_ip_table_dump>(Connection &con)
{
  vapi_msg_ip_table_dump* result = vapi_alloc_ip_table_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_table_dump>;

template class Dump<vapi_msg_ip_table_dump, vapi_msg_ip_table_details>;

using Ip_table_dump = Dump<vapi_msg_ip_table_dump, vapi_msg_ip_table_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_punt_redirect_details>(vapi_msg_ip_punt_redirect_details *msg)
{
  vapi_msg_ip_punt_redirect_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_punt_redirect_details>(vapi_msg_ip_punt_redirect_details *msg)
{
  vapi_msg_ip_punt_redirect_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_punt_redirect_details>()
{
  return ::vapi_msg_id_ip_punt_redirect_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_punt_redirect_details>>()
{
  return ::vapi_msg_id_ip_punt_redirect_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_punt_redirect_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_punt_redirect_details>(vapi_msg_id_ip_punt_redirect_details);
}

template class Msg<vapi_msg_ip_punt_redirect_details>;

using Ip_punt_redirect_details = Msg<vapi_msg_ip_punt_redirect_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_mroute_details>(vapi_msg_ip_mroute_details *msg)
{
  vapi_msg_ip_mroute_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_mroute_details>(vapi_msg_ip_mroute_details *msg)
{
  vapi_msg_ip_mroute_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_mroute_details>()
{
  return ::vapi_msg_id_ip_mroute_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_mroute_details>>()
{
  return ::vapi_msg_id_ip_mroute_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_mroute_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_mroute_details>(vapi_msg_id_ip_mroute_details);
}

template class Msg<vapi_msg_ip_mroute_details>;

using Ip_mroute_details = Msg<vapi_msg_ip_mroute_details>;
template <> inline void vapi_swap_to_be<vapi_msg_proxy_arp_dump>(vapi_msg_proxy_arp_dump *msg)
{
  vapi_msg_proxy_arp_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_proxy_arp_dump>(vapi_msg_proxy_arp_dump *msg)
{
  vapi_msg_proxy_arp_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_proxy_arp_dump>()
{
  return ::vapi_msg_id_proxy_arp_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_proxy_arp_dump>>()
{
  return ::vapi_msg_id_proxy_arp_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_proxy_arp_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_proxy_arp_dump>(vapi_msg_id_proxy_arp_dump);
}

template <> inline vapi_msg_proxy_arp_dump* vapi_alloc<vapi_msg_proxy_arp_dump>(Connection &con)
{
  vapi_msg_proxy_arp_dump* result = vapi_alloc_proxy_arp_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_proxy_arp_dump>;

template class Dump<vapi_msg_proxy_arp_dump, vapi_msg_proxy_arp_details>;

using Proxy_arp_dump = Dump<vapi_msg_proxy_arp_dump, vapi_msg_proxy_arp_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_reassembly_enable_disable>(vapi_msg_ip_reassembly_enable_disable *msg)
{
  vapi_msg_ip_reassembly_enable_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_reassembly_enable_disable>(vapi_msg_ip_reassembly_enable_disable *msg)
{
  vapi_msg_ip_reassembly_enable_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_reassembly_enable_disable>()
{
  return ::vapi_msg_id_ip_reassembly_enable_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_reassembly_enable_disable>>()
{
  return ::vapi_msg_id_ip_reassembly_enable_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_reassembly_enable_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_reassembly_enable_disable>(vapi_msg_id_ip_reassembly_enable_disable);
}

template <> inline vapi_msg_ip_reassembly_enable_disable* vapi_alloc<vapi_msg_ip_reassembly_enable_disable>(Connection &con)
{
  vapi_msg_ip_reassembly_enable_disable* result = vapi_alloc_ip_reassembly_enable_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_reassembly_enable_disable>;

template class Request<vapi_msg_ip_reassembly_enable_disable, vapi_msg_ip_reassembly_enable_disable_reply>;

using Ip_reassembly_enable_disable = Request<vapi_msg_ip_reassembly_enable_disable, vapi_msg_ip_reassembly_enable_disable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_dump>(vapi_msg_ip_dump *msg)
{
  vapi_msg_ip_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_dump>(vapi_msg_ip_dump *msg)
{
  vapi_msg_ip_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_dump>()
{
  return ::vapi_msg_id_ip_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_dump>>()
{
  return ::vapi_msg_id_ip_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_dump>(vapi_msg_id_ip_dump);
}

template <> inline vapi_msg_ip_dump* vapi_alloc<vapi_msg_ip_dump>(Connection &con)
{
  vapi_msg_ip_dump* result = vapi_alloc_ip_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_dump>;

template class Dump<vapi_msg_ip_dump, vapi_msg_ip_details>;

using Ip_dump = Dump<vapi_msg_ip_dump, vapi_msg_ip_details>;

template <> inline void vapi_swap_to_be<vapi_msg_set_arp_neighbor_limit_reply>(vapi_msg_set_arp_neighbor_limit_reply *msg)
{
  vapi_msg_set_arp_neighbor_limit_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_set_arp_neighbor_limit_reply>(vapi_msg_set_arp_neighbor_limit_reply *msg)
{
  vapi_msg_set_arp_neighbor_limit_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_set_arp_neighbor_limit_reply>()
{
  return ::vapi_msg_id_set_arp_neighbor_limit_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_set_arp_neighbor_limit_reply>>()
{
  return ::vapi_msg_id_set_arp_neighbor_limit_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_set_arp_neighbor_limit_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_set_arp_neighbor_limit_reply>(vapi_msg_id_set_arp_neighbor_limit_reply);
}

template class Msg<vapi_msg_set_arp_neighbor_limit_reply>;

using Set_arp_neighbor_limit_reply = Msg<vapi_msg_set_arp_neighbor_limit_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_reassembly_enable_disable_reply>(vapi_msg_ip_reassembly_enable_disable_reply *msg)
{
  vapi_msg_ip_reassembly_enable_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_reassembly_enable_disable_reply>(vapi_msg_ip_reassembly_enable_disable_reply *msg)
{
  vapi_msg_ip_reassembly_enable_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_reassembly_enable_disable_reply>()
{
  return ::vapi_msg_id_ip_reassembly_enable_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_reassembly_enable_disable_reply>>()
{
  return ::vapi_msg_id_ip_reassembly_enable_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_reassembly_enable_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_reassembly_enable_disable_reply>(vapi_msg_id_ip_reassembly_enable_disable_reply);
}

template class Msg<vapi_msg_ip_reassembly_enable_disable_reply>;

using Ip_reassembly_enable_disable_reply = Msg<vapi_msg_ip_reassembly_enable_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_source_and_port_range_check_interface_add_del>(vapi_msg_ip_source_and_port_range_check_interface_add_del *msg)
{
  vapi_msg_ip_source_and_port_range_check_interface_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_source_and_port_range_check_interface_add_del>(vapi_msg_ip_source_and_port_range_check_interface_add_del *msg)
{
  vapi_msg_ip_source_and_port_range_check_interface_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_source_and_port_range_check_interface_add_del>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_interface_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_source_and_port_range_check_interface_add_del>>()
{
  return ::vapi_msg_id_ip_source_and_port_range_check_interface_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_source_and_port_range_check_interface_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_source_and_port_range_check_interface_add_del>(vapi_msg_id_ip_source_and_port_range_check_interface_add_del);
}

template <> inline vapi_msg_ip_source_and_port_range_check_interface_add_del* vapi_alloc<vapi_msg_ip_source_and_port_range_check_interface_add_del>(Connection &con)
{
  vapi_msg_ip_source_and_port_range_check_interface_add_del* result = vapi_alloc_ip_source_and_port_range_check_interface_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_source_and_port_range_check_interface_add_del>;

template class Request<vapi_msg_ip_source_and_port_range_check_interface_add_del, vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>;

using Ip_source_and_port_range_check_interface_add_del = Request<vapi_msg_ip_source_and_port_range_check_interface_add_del, vapi_msg_ip_source_and_port_range_check_interface_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_mfib_signal_details>(vapi_msg_mfib_signal_details *msg)
{
  vapi_msg_mfib_signal_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_mfib_signal_details>(vapi_msg_mfib_signal_details *msg)
{
  vapi_msg_mfib_signal_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_mfib_signal_details>()
{
  return ::vapi_msg_id_mfib_signal_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_mfib_signal_details>>()
{
  return ::vapi_msg_id_mfib_signal_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_mfib_signal_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_mfib_signal_details>(vapi_msg_id_mfib_signal_details);
}

template class Msg<vapi_msg_mfib_signal_details>;

using Mfib_signal_details = Msg<vapi_msg_mfib_signal_details>;
template <> inline void vapi_swap_to_be<vapi_msg_want_ip6_ra_events_reply>(vapi_msg_want_ip6_ra_events_reply *msg)
{
  vapi_msg_want_ip6_ra_events_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip6_ra_events_reply>(vapi_msg_want_ip6_ra_events_reply *msg)
{
  vapi_msg_want_ip6_ra_events_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip6_ra_events_reply>()
{
  return ::vapi_msg_id_want_ip6_ra_events_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip6_ra_events_reply>>()
{
  return ::vapi_msg_id_want_ip6_ra_events_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip6_ra_events_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip6_ra_events_reply>(vapi_msg_id_want_ip6_ra_events_reply);
}

template class Msg<vapi_msg_want_ip6_ra_events_reply>;

using Want_ip6_ra_events_reply = Msg<vapi_msg_want_ip6_ra_events_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_set_ip_flow_hash>(vapi_msg_set_ip_flow_hash *msg)
{
  vapi_msg_set_ip_flow_hash_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_set_ip_flow_hash>(vapi_msg_set_ip_flow_hash *msg)
{
  vapi_msg_set_ip_flow_hash_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_set_ip_flow_hash>()
{
  return ::vapi_msg_id_set_ip_flow_hash; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_set_ip_flow_hash>>()
{
  return ::vapi_msg_id_set_ip_flow_hash; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_set_ip_flow_hash()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_set_ip_flow_hash>(vapi_msg_id_set_ip_flow_hash);
}

template <> inline vapi_msg_set_ip_flow_hash* vapi_alloc<vapi_msg_set_ip_flow_hash>(Connection &con)
{
  vapi_msg_set_ip_flow_hash* result = vapi_alloc_set_ip_flow_hash(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_set_ip_flow_hash>;

template class Request<vapi_msg_set_ip_flow_hash, vapi_msg_set_ip_flow_hash_reply>;

using Set_ip_flow_hash = Request<vapi_msg_set_ip_flow_hash, vapi_msg_set_ip_flow_hash_reply>;

}
#endif
