#ifndef __included_hpp_nat_api_json
#define __included_hpp_nat_api_json

#include <vapi/vapi.hpp>
#include <vapi/nat.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_identity_mapping_reply>(vapi_msg_nat44_add_del_identity_mapping_reply *msg)
{
  vapi_msg_nat44_add_del_identity_mapping_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_identity_mapping_reply>(vapi_msg_nat44_add_del_identity_mapping_reply *msg)
{
  vapi_msg_nat44_add_del_identity_mapping_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_identity_mapping_reply>()
{
  return ::vapi_msg_id_nat44_add_del_identity_mapping_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_identity_mapping_reply>>()
{
  return ::vapi_msg_id_nat44_add_del_identity_mapping_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_identity_mapping_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_identity_mapping_reply>(vapi_msg_id_nat44_add_del_identity_mapping_reply);
}

template class Msg<vapi_msg_nat44_add_del_identity_mapping_reply>;

using Nat44_add_del_identity_mapping_reply = Msg<vapi_msg_nat44_add_del_identity_mapping_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_identity_mapping_details>(vapi_msg_nat44_identity_mapping_details *msg)
{
  vapi_msg_nat44_identity_mapping_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_identity_mapping_details>(vapi_msg_nat44_identity_mapping_details *msg)
{
  vapi_msg_nat44_identity_mapping_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_identity_mapping_details>()
{
  return ::vapi_msg_id_nat44_identity_mapping_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_identity_mapping_details>>()
{
  return ::vapi_msg_id_nat44_identity_mapping_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_identity_mapping_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_identity_mapping_details>(vapi_msg_id_nat44_identity_mapping_details);
}

template class Msg<vapi_msg_nat44_identity_mapping_details>;

using Nat44_identity_mapping_details = Msg<vapi_msg_nat44_identity_mapping_details>;
template <> inline void vapi_swap_to_be<vapi_msg_dslite_add_del_pool_addr_range>(vapi_msg_dslite_add_del_pool_addr_range *msg)
{
  vapi_msg_dslite_add_del_pool_addr_range_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_add_del_pool_addr_range>(vapi_msg_dslite_add_del_pool_addr_range *msg)
{
  vapi_msg_dslite_add_del_pool_addr_range_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_add_del_pool_addr_range>()
{
  return ::vapi_msg_id_dslite_add_del_pool_addr_range; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_add_del_pool_addr_range>>()
{
  return ::vapi_msg_id_dslite_add_del_pool_addr_range; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_add_del_pool_addr_range()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_add_del_pool_addr_range>(vapi_msg_id_dslite_add_del_pool_addr_range);
}

template <> inline vapi_msg_dslite_add_del_pool_addr_range* vapi_alloc<vapi_msg_dslite_add_del_pool_addr_range>(Connection &con)
{
  vapi_msg_dslite_add_del_pool_addr_range* result = vapi_alloc_dslite_add_del_pool_addr_range(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_dslite_add_del_pool_addr_range>;

template class Request<vapi_msg_dslite_add_del_pool_addr_range, vapi_msg_dslite_add_del_pool_addr_range_reply>;

using Dslite_add_del_pool_addr_range = Request<vapi_msg_dslite_add_del_pool_addr_range, vapi_msg_dslite_add_del_pool_addr_range_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_set_log_level_reply>(vapi_msg_nat_set_log_level_reply *msg)
{
  vapi_msg_nat_set_log_level_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_log_level_reply>(vapi_msg_nat_set_log_level_reply *msg)
{
  vapi_msg_nat_set_log_level_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_log_level_reply>()
{
  return ::vapi_msg_id_nat_set_log_level_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_log_level_reply>>()
{
  return ::vapi_msg_id_nat_set_log_level_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_log_level_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_log_level_reply>(vapi_msg_id_nat_set_log_level_reply);
}

template class Msg<vapi_msg_nat_set_log_level_reply>;

using Nat_set_log_level_reply = Msg<vapi_msg_nat_set_log_level_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_ipfix_enable_disable>(vapi_msg_nat_ipfix_enable_disable *msg)
{
  vapi_msg_nat_ipfix_enable_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ipfix_enable_disable>(vapi_msg_nat_ipfix_enable_disable *msg)
{
  vapi_msg_nat_ipfix_enable_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ipfix_enable_disable>()
{
  return ::vapi_msg_id_nat_ipfix_enable_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ipfix_enable_disable>>()
{
  return ::vapi_msg_id_nat_ipfix_enable_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ipfix_enable_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ipfix_enable_disable>(vapi_msg_id_nat_ipfix_enable_disable);
}

template <> inline vapi_msg_nat_ipfix_enable_disable* vapi_alloc<vapi_msg_nat_ipfix_enable_disable>(Connection &con)
{
  vapi_msg_nat_ipfix_enable_disable* result = vapi_alloc_nat_ipfix_enable_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_ipfix_enable_disable>;

template class Request<vapi_msg_nat_ipfix_enable_disable, vapi_msg_nat_ipfix_enable_disable_reply>;

using Nat_ipfix_enable_disable = Request<vapi_msg_nat_ipfix_enable_disable, vapi_msg_nat_ipfix_enable_disable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_control_ping_reply>(vapi_msg_nat_control_ping_reply *msg)
{
  vapi_msg_nat_control_ping_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_control_ping_reply>(vapi_msg_nat_control_ping_reply *msg)
{
  vapi_msg_nat_control_ping_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_control_ping_reply>()
{
  return ::vapi_msg_id_nat_control_ping_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_control_ping_reply>>()
{
  return ::vapi_msg_id_nat_control_ping_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_control_ping_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_control_ping_reply>(vapi_msg_id_nat_control_ping_reply);
}

template class Msg<vapi_msg_nat_control_ping_reply>;

using Nat_control_ping_reply = Msg<vapi_msg_nat_control_ping_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_set_mss_clamping_reply>(vapi_msg_nat_set_mss_clamping_reply *msg)
{
  vapi_msg_nat_set_mss_clamping_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_mss_clamping_reply>(vapi_msg_nat_set_mss_clamping_reply *msg)
{
  vapi_msg_nat_set_mss_clamping_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_mss_clamping_reply>()
{
  return ::vapi_msg_id_nat_set_mss_clamping_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_mss_clamping_reply>>()
{
  return ::vapi_msg_id_nat_set_mss_clamping_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_mss_clamping_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_mss_clamping_reply>(vapi_msg_id_nat_set_mss_clamping_reply);
}

template class Msg<vapi_msg_nat_set_mss_clamping_reply>;

using Nat_set_mss_clamping_reply = Msg<vapi_msg_nat_set_mss_clamping_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_lb_static_mapping_dump>(vapi_msg_nat44_lb_static_mapping_dump *msg)
{
  vapi_msg_nat44_lb_static_mapping_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_lb_static_mapping_dump>(vapi_msg_nat44_lb_static_mapping_dump *msg)
{
  vapi_msg_nat44_lb_static_mapping_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_lb_static_mapping_dump>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_lb_static_mapping_dump>>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_lb_static_mapping_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_lb_static_mapping_dump>(vapi_msg_id_nat44_lb_static_mapping_dump);
}

template <> inline vapi_msg_nat44_lb_static_mapping_dump* vapi_alloc<vapi_msg_nat44_lb_static_mapping_dump>(Connection &con)
{
  vapi_msg_nat44_lb_static_mapping_dump* result = vapi_alloc_nat44_lb_static_mapping_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_lb_static_mapping_dump>;

template class Dump<vapi_msg_nat44_lb_static_mapping_dump, vapi_msg_nat44_lb_static_mapping_details>;

using Nat44_lb_static_mapping_dump = Dump<vapi_msg_nat44_lb_static_mapping_dump, vapi_msg_nat44_lb_static_mapping_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_pool_addr_dump>(vapi_msg_nat64_pool_addr_dump *msg)
{
  vapi_msg_nat64_pool_addr_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_pool_addr_dump>(vapi_msg_nat64_pool_addr_dump *msg)
{
  vapi_msg_nat64_pool_addr_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_pool_addr_dump>()
{
  return ::vapi_msg_id_nat64_pool_addr_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_pool_addr_dump>>()
{
  return ::vapi_msg_id_nat64_pool_addr_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_pool_addr_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_pool_addr_dump>(vapi_msg_id_nat64_pool_addr_dump);
}

template <> inline vapi_msg_nat64_pool_addr_dump* vapi_alloc<vapi_msg_nat64_pool_addr_dump>(Connection &con)
{
  vapi_msg_nat64_pool_addr_dump* result = vapi_alloc_nat64_pool_addr_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_pool_addr_dump>;

template class Dump<vapi_msg_nat64_pool_addr_dump, vapi_msg_nat64_pool_addr_details>;

using Nat64_pool_addr_dump = Dump<vapi_msg_nat64_pool_addr_dump, vapi_msg_nat64_pool_addr_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_interface_dump>(vapi_msg_nat64_interface_dump *msg)
{
  vapi_msg_nat64_interface_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_interface_dump>(vapi_msg_nat64_interface_dump *msg)
{
  vapi_msg_nat64_interface_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_interface_dump>()
{
  return ::vapi_msg_id_nat64_interface_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_interface_dump>>()
{
  return ::vapi_msg_id_nat64_interface_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_interface_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_interface_dump>(vapi_msg_id_nat64_interface_dump);
}

template <> inline vapi_msg_nat64_interface_dump* vapi_alloc<vapi_msg_nat64_interface_dump>(Connection &con)
{
  vapi_msg_nat64_interface_dump* result = vapi_alloc_nat64_interface_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_interface_dump>;

template class Dump<vapi_msg_nat64_interface_dump, vapi_msg_nat64_interface_details>;

using Nat64_interface_dump = Dump<vapi_msg_nat64_interface_dump, vapi_msg_nat64_interface_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_add_del_map>(vapi_msg_nat_det_add_del_map *msg)
{
  vapi_msg_nat_det_add_del_map_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_add_del_map>(vapi_msg_nat_det_add_del_map *msg)
{
  vapi_msg_nat_det_add_del_map_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_add_del_map>()
{
  return ::vapi_msg_id_nat_det_add_del_map; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_add_del_map>>()
{
  return ::vapi_msg_id_nat_det_add_del_map; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_add_del_map()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_add_del_map>(vapi_msg_id_nat_det_add_del_map);
}

template <> inline vapi_msg_nat_det_add_del_map* vapi_alloc<vapi_msg_nat_det_add_del_map>(Connection &con)
{
  vapi_msg_nat_det_add_del_map* result = vapi_alloc_nat_det_add_del_map(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_det_add_del_map>;

template class Request<vapi_msg_nat_det_add_del_map, vapi_msg_nat_det_add_del_map_reply>;

using Nat_det_add_del_map = Request<vapi_msg_nat_det_add_del_map, vapi_msg_nat_det_add_del_map_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_identity_mapping_dump>(vapi_msg_nat44_identity_mapping_dump *msg)
{
  vapi_msg_nat44_identity_mapping_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_identity_mapping_dump>(vapi_msg_nat44_identity_mapping_dump *msg)
{
  vapi_msg_nat44_identity_mapping_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_identity_mapping_dump>()
{
  return ::vapi_msg_id_nat44_identity_mapping_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_identity_mapping_dump>>()
{
  return ::vapi_msg_id_nat44_identity_mapping_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_identity_mapping_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_identity_mapping_dump>(vapi_msg_id_nat44_identity_mapping_dump);
}

template <> inline vapi_msg_nat44_identity_mapping_dump* vapi_alloc<vapi_msg_nat44_identity_mapping_dump>(Connection &con)
{
  vapi_msg_nat44_identity_mapping_dump* result = vapi_alloc_nat44_identity_mapping_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_identity_mapping_dump>;

template class Dump<vapi_msg_nat44_identity_mapping_dump, vapi_msg_nat44_identity_mapping_details>;

using Nat44_identity_mapping_dump = Dump<vapi_msg_nat44_identity_mapping_dump, vapi_msg_nat44_identity_mapping_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_interface_addr>(vapi_msg_nat64_add_del_interface_addr *msg)
{
  vapi_msg_nat64_add_del_interface_addr_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_interface_addr>(vapi_msg_nat64_add_del_interface_addr *msg)
{
  vapi_msg_nat64_add_del_interface_addr_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_interface_addr>()
{
  return ::vapi_msg_id_nat64_add_del_interface_addr; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_interface_addr>>()
{
  return ::vapi_msg_id_nat64_add_del_interface_addr; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_interface_addr()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_interface_addr>(vapi_msg_id_nat64_add_del_interface_addr);
}

template <> inline vapi_msg_nat64_add_del_interface_addr* vapi_alloc<vapi_msg_nat64_add_del_interface_addr>(Connection &con)
{
  vapi_msg_nat64_add_del_interface_addr* result = vapi_alloc_nat64_add_del_interface_addr(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_add_del_interface_addr>;

template class Request<vapi_msg_nat64_add_del_interface_addr, vapi_msg_nat64_add_del_interface_addr_reply>;

using Nat64_add_del_interface_addr = Request<vapi_msg_nat64_add_del_interface_addr, vapi_msg_nat64_add_del_interface_addr_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_prefix_details>(vapi_msg_nat64_prefix_details *msg)
{
  vapi_msg_nat64_prefix_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_prefix_details>(vapi_msg_nat64_prefix_details *msg)
{
  vapi_msg_nat64_prefix_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_prefix_details>()
{
  return ::vapi_msg_id_nat64_prefix_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_prefix_details>>()
{
  return ::vapi_msg_id_nat64_prefix_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_prefix_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_prefix_details>(vapi_msg_id_nat64_prefix_details);
}

template class Msg<vapi_msg_nat64_prefix_details>;

using Nat64_prefix_details = Msg<vapi_msg_nat64_prefix_details>;
template <> inline void vapi_swap_to_be<vapi_msg_dslite_set_b4_addr_reply>(vapi_msg_dslite_set_b4_addr_reply *msg)
{
  vapi_msg_dslite_set_b4_addr_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_set_b4_addr_reply>(vapi_msg_dslite_set_b4_addr_reply *msg)
{
  vapi_msg_dslite_set_b4_addr_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_set_b4_addr_reply>()
{
  return ::vapi_msg_id_dslite_set_b4_addr_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_set_b4_addr_reply>>()
{
  return ::vapi_msg_id_dslite_set_b4_addr_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_set_b4_addr_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_set_b4_addr_reply>(vapi_msg_id_dslite_set_b4_addr_reply);
}

template class Msg<vapi_msg_dslite_set_b4_addr_reply>;

using Dslite_set_b4_addr_reply = Msg<vapi_msg_dslite_set_b4_addr_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat66_add_del_interface_reply>(vapi_msg_nat66_add_del_interface_reply *msg)
{
  vapi_msg_nat66_add_del_interface_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_add_del_interface_reply>(vapi_msg_nat66_add_del_interface_reply *msg)
{
  vapi_msg_nat66_add_del_interface_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_add_del_interface_reply>()
{
  return ::vapi_msg_id_nat66_add_del_interface_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_add_del_interface_reply>>()
{
  return ::vapi_msg_id_nat66_add_del_interface_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_add_del_interface_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_add_del_interface_reply>(vapi_msg_id_nat66_add_del_interface_reply);
}

template class Msg<vapi_msg_nat66_add_del_interface_reply>;

using Nat66_add_del_interface_reply = Msg<vapi_msg_nat66_add_del_interface_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_det_reverse_reply>(vapi_msg_nat_det_reverse_reply *msg)
{
  vapi_msg_nat_det_reverse_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_reverse_reply>(vapi_msg_nat_det_reverse_reply *msg)
{
  vapi_msg_nat_det_reverse_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_reverse_reply>()
{
  return ::vapi_msg_id_nat_det_reverse_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_reverse_reply>>()
{
  return ::vapi_msg_id_nat_det_reverse_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_reverse_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_reverse_reply>(vapi_msg_id_nat_det_reverse_reply);
}

template class Msg<vapi_msg_nat_det_reverse_reply>;

using Nat_det_reverse_reply = Msg<vapi_msg_nat_det_reverse_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_user_dump>(vapi_msg_nat44_user_dump *msg)
{
  vapi_msg_nat44_user_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_user_dump>(vapi_msg_nat44_user_dump *msg)
{
  vapi_msg_nat44_user_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_user_dump>()
{
  return ::vapi_msg_id_nat44_user_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_user_dump>>()
{
  return ::vapi_msg_id_nat44_user_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_user_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_user_dump>(vapi_msg_id_nat44_user_dump);
}

template <> inline vapi_msg_nat44_user_dump* vapi_alloc<vapi_msg_nat44_user_dump>(Connection &con)
{
  vapi_msg_nat44_user_dump* result = vapi_alloc_nat44_user_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_user_dump>;

template class Dump<vapi_msg_nat44_user_dump, vapi_msg_nat44_user_details>;

using Nat44_user_dump = Dump<vapi_msg_nat44_user_dump, vapi_msg_nat44_user_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_lb_static_mapping_add_del_local>(vapi_msg_nat44_lb_static_mapping_add_del_local *msg)
{
  vapi_msg_nat44_lb_static_mapping_add_del_local_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_lb_static_mapping_add_del_local>(vapi_msg_nat44_lb_static_mapping_add_del_local *msg)
{
  vapi_msg_nat44_lb_static_mapping_add_del_local_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_lb_static_mapping_add_del_local>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_add_del_local; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_lb_static_mapping_add_del_local>>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_add_del_local; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_lb_static_mapping_add_del_local()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_lb_static_mapping_add_del_local>(vapi_msg_id_nat44_lb_static_mapping_add_del_local);
}

template <> inline vapi_msg_nat44_lb_static_mapping_add_del_local* vapi_alloc<vapi_msg_nat44_lb_static_mapping_add_del_local>(Connection &con)
{
  vapi_msg_nat44_lb_static_mapping_add_del_local* result = vapi_alloc_nat44_lb_static_mapping_add_del_local(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_lb_static_mapping_add_del_local>;

template class Request<vapi_msg_nat44_lb_static_mapping_add_del_local, vapi_msg_nat44_lb_static_mapping_add_del_local_reply>;

using Nat44_lb_static_mapping_add_del_local = Request<vapi_msg_nat44_lb_static_mapping_add_del_local, vapi_msg_nat44_lb_static_mapping_add_del_local_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_static_mapping_details>(vapi_msg_nat44_static_mapping_details *msg)
{
  vapi_msg_nat44_static_mapping_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_static_mapping_details>(vapi_msg_nat44_static_mapping_details *msg)
{
  vapi_msg_nat44_static_mapping_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_static_mapping_details>()
{
  return ::vapi_msg_id_nat44_static_mapping_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_static_mapping_details>>()
{
  return ::vapi_msg_id_nat44_static_mapping_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_static_mapping_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_static_mapping_details>(vapi_msg_id_nat44_static_mapping_details);
}

template class Msg<vapi_msg_nat44_static_mapping_details>;

using Nat44_static_mapping_details = Msg<vapi_msg_nat44_static_mapping_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_resync_reply>(vapi_msg_nat_ha_resync_reply *msg)
{
  vapi_msg_nat_ha_resync_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_resync_reply>(vapi_msg_nat_ha_resync_reply *msg)
{
  vapi_msg_nat_ha_resync_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_resync_reply>()
{
  return ::vapi_msg_id_nat_ha_resync_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_resync_reply>>()
{
  return ::vapi_msg_id_nat_ha_resync_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_resync_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_resync_reply>(vapi_msg_id_nat_ha_resync_reply);
}

template class Msg<vapi_msg_nat_ha_resync_reply>;

using Nat_ha_resync_reply = Msg<vapi_msg_nat_ha_resync_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_prefix_reply>(vapi_msg_nat64_add_del_prefix_reply *msg)
{
  vapi_msg_nat64_add_del_prefix_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_prefix_reply>(vapi_msg_nat64_add_del_prefix_reply *msg)
{
  vapi_msg_nat64_add_del_prefix_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_prefix_reply>()
{
  return ::vapi_msg_id_nat64_add_del_prefix_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_prefix_reply>>()
{
  return ::vapi_msg_id_nat64_add_del_prefix_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_prefix_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_prefix_reply>(vapi_msg_id_nat64_add_del_prefix_reply);
}

template class Msg<vapi_msg_nat64_add_del_prefix_reply>;

using Nat64_add_del_prefix_reply = Msg<vapi_msg_nat64_add_del_prefix_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat64_st_details>(vapi_msg_nat64_st_details *msg)
{
  vapi_msg_nat64_st_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_st_details>(vapi_msg_nat64_st_details *msg)
{
  vapi_msg_nat64_st_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_st_details>()
{
  return ::vapi_msg_id_nat64_st_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_st_details>>()
{
  return ::vapi_msg_id_nat64_st_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_st_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_st_details>(vapi_msg_id_nat64_st_details);
}

template class Msg<vapi_msg_nat64_st_details>;

using Nat64_st_details = Msg<vapi_msg_nat64_st_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_flush>(vapi_msg_nat_ha_flush *msg)
{
  vapi_msg_nat_ha_flush_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_flush>(vapi_msg_nat_ha_flush *msg)
{
  vapi_msg_nat_ha_flush_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_flush>()
{
  return ::vapi_msg_id_nat_ha_flush; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_flush>>()
{
  return ::vapi_msg_id_nat_ha_flush; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_flush()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_flush>(vapi_msg_id_nat_ha_flush);
}

template <> inline vapi_msg_nat_ha_flush* vapi_alloc<vapi_msg_nat_ha_flush>(Connection &con)
{
  vapi_msg_nat_ha_flush* result = vapi_alloc_nat_ha_flush(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_ha_flush>;

template class Request<vapi_msg_nat_ha_flush, vapi_msg_nat_ha_flush_reply>;

using Nat_ha_flush = Request<vapi_msg_nat_ha_flush, vapi_msg_nat_ha_flush_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_control_ping>(vapi_msg_nat_control_ping *msg)
{
  vapi_msg_nat_control_ping_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_control_ping>(vapi_msg_nat_control_ping *msg)
{
  vapi_msg_nat_control_ping_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_control_ping>()
{
  return ::vapi_msg_id_nat_control_ping; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_control_ping>>()
{
  return ::vapi_msg_id_nat_control_ping; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_control_ping()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_control_ping>(vapi_msg_id_nat_control_ping);
}

template <> inline vapi_msg_nat_control_ping* vapi_alloc<vapi_msg_nat_control_ping>(Connection &con)
{
  vapi_msg_nat_control_ping* result = vapi_alloc_nat_control_ping(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_control_ping>;

template class Request<vapi_msg_nat_control_ping, vapi_msg_nat_control_ping_reply>;

using Nat_control_ping = Request<vapi_msg_nat_control_ping, vapi_msg_nat_control_ping_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_add_del_output_feature_reply>(vapi_msg_nat44_interface_add_del_output_feature_reply *msg)
{
  vapi_msg_nat44_interface_add_del_output_feature_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_add_del_output_feature_reply>(vapi_msg_nat44_interface_add_del_output_feature_reply *msg)
{
  vapi_msg_nat44_interface_add_del_output_feature_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_add_del_output_feature_reply>()
{
  return ::vapi_msg_id_nat44_interface_add_del_output_feature_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_add_del_output_feature_reply>>()
{
  return ::vapi_msg_id_nat44_interface_add_del_output_feature_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_add_del_output_feature_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_add_del_output_feature_reply>(vapi_msg_id_nat44_interface_add_del_output_feature_reply);
}

template class Msg<vapi_msg_nat44_interface_add_del_output_feature_reply>;

using Nat44_interface_add_del_output_feature_reply = Msg<vapi_msg_nat44_interface_add_del_output_feature_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_interface>(vapi_msg_nat64_add_del_interface *msg)
{
  vapi_msg_nat64_add_del_interface_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_interface>(vapi_msg_nat64_add_del_interface *msg)
{
  vapi_msg_nat64_add_del_interface_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_interface>()
{
  return ::vapi_msg_id_nat64_add_del_interface; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_interface>>()
{
  return ::vapi_msg_id_nat64_add_del_interface; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_interface()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_interface>(vapi_msg_id_nat64_add_del_interface);
}

template <> inline vapi_msg_nat64_add_del_interface* vapi_alloc<vapi_msg_nat64_add_del_interface>(Connection &con)
{
  vapi_msg_nat64_add_del_interface* result = vapi_alloc_nat64_add_del_interface(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_add_del_interface>;

template class Request<vapi_msg_nat64_add_del_interface, vapi_msg_nat64_add_del_interface_reply>;

using Nat64_add_del_interface = Request<vapi_msg_nat64_add_del_interface, vapi_msg_nat64_add_del_interface_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_close_session_in>(vapi_msg_nat_det_close_session_in *msg)
{
  vapi_msg_nat_det_close_session_in_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_close_session_in>(vapi_msg_nat_det_close_session_in *msg)
{
  vapi_msg_nat_det_close_session_in_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_close_session_in>()
{
  return ::vapi_msg_id_nat_det_close_session_in; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_close_session_in>>()
{
  return ::vapi_msg_id_nat_det_close_session_in; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_close_session_in()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_close_session_in>(vapi_msg_id_nat_det_close_session_in);
}

template <> inline vapi_msg_nat_det_close_session_in* vapi_alloc<vapi_msg_nat_det_close_session_in>(Connection &con)
{
  vapi_msg_nat_det_close_session_in* result = vapi_alloc_nat_det_close_session_in(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_det_close_session_in>;

template class Request<vapi_msg_nat_det_close_session_in, vapi_msg_nat_det_close_session_in_reply>;

using Nat_det_close_session_in = Request<vapi_msg_nat_det_close_session_in, vapi_msg_nat_det_close_session_in_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_user_session_dump>(vapi_msg_nat44_user_session_dump *msg)
{
  vapi_msg_nat44_user_session_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_user_session_dump>(vapi_msg_nat44_user_session_dump *msg)
{
  vapi_msg_nat44_user_session_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_user_session_dump>()
{
  return ::vapi_msg_id_nat44_user_session_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_user_session_dump>>()
{
  return ::vapi_msg_id_nat44_user_session_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_user_session_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_user_session_dump>(vapi_msg_id_nat44_user_session_dump);
}

template <> inline vapi_msg_nat44_user_session_dump* vapi_alloc<vapi_msg_nat44_user_session_dump>(Connection &con)
{
  vapi_msg_nat44_user_session_dump* result = vapi_alloc_nat44_user_session_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_user_session_dump>;

template class Dump<vapi_msg_nat44_user_session_dump, vapi_msg_nat44_user_session_details>;

using Nat44_user_session_dump = Dump<vapi_msg_nat44_user_session_dump, vapi_msg_nat44_user_session_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_set_listener>(vapi_msg_nat_ha_set_listener *msg)
{
  vapi_msg_nat_ha_set_listener_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_set_listener>(vapi_msg_nat_ha_set_listener *msg)
{
  vapi_msg_nat_ha_set_listener_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_set_listener>()
{
  return ::vapi_msg_id_nat_ha_set_listener; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_set_listener>>()
{
  return ::vapi_msg_id_nat_ha_set_listener; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_set_listener()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_set_listener>(vapi_msg_id_nat_ha_set_listener);
}

template <> inline vapi_msg_nat_ha_set_listener* vapi_alloc<vapi_msg_nat_ha_set_listener>(Connection &con)
{
  vapi_msg_nat_ha_set_listener* result = vapi_alloc_nat_ha_set_listener(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_ha_set_listener>;

template class Request<vapi_msg_nat_ha_set_listener, vapi_msg_nat_ha_set_listener_reply>;

using Nat_ha_set_listener = Request<vapi_msg_nat_ha_set_listener, vapi_msg_nat_ha_set_listener_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_flush_reply>(vapi_msg_nat_ha_flush_reply *msg)
{
  vapi_msg_nat_ha_flush_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_flush_reply>(vapi_msg_nat_ha_flush_reply *msg)
{
  vapi_msg_nat_ha_flush_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_flush_reply>()
{
  return ::vapi_msg_id_nat_ha_flush_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_flush_reply>>()
{
  return ::vapi_msg_id_nat_ha_flush_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_flush_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_flush_reply>(vapi_msg_id_nat_ha_flush_reply);
}

template class Msg<vapi_msg_nat_ha_flush_reply>;

using Nat_ha_flush_reply = Msg<vapi_msg_nat_ha_flush_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_set_workers>(vapi_msg_nat_set_workers *msg)
{
  vapi_msg_nat_set_workers_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_workers>(vapi_msg_nat_set_workers *msg)
{
  vapi_msg_nat_set_workers_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_workers>()
{
  return ::vapi_msg_id_nat_set_workers; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_workers>>()
{
  return ::vapi_msg_id_nat_set_workers; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_workers()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_workers>(vapi_msg_id_nat_set_workers);
}

template <> inline vapi_msg_nat_set_workers* vapi_alloc<vapi_msg_nat_set_workers>(Connection &con)
{
  vapi_msg_nat_set_workers* result = vapi_alloc_nat_set_workers(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_set_workers>;

template class Request<vapi_msg_nat_set_workers, vapi_msg_nat_set_workers_reply>;

using Nat_set_workers = Request<vapi_msg_nat_set_workers, vapi_msg_nat_set_workers_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_dslite_get_b4_addr>(vapi_msg_dslite_get_b4_addr *msg)
{
  vapi_msg_dslite_get_b4_addr_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_get_b4_addr>(vapi_msg_dslite_get_b4_addr *msg)
{
  vapi_msg_dslite_get_b4_addr_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_get_b4_addr>()
{
  return ::vapi_msg_id_dslite_get_b4_addr; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_get_b4_addr>>()
{
  return ::vapi_msg_id_dslite_get_b4_addr; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_get_b4_addr()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_get_b4_addr>(vapi_msg_id_dslite_get_b4_addr);
}

template <> inline vapi_msg_dslite_get_b4_addr* vapi_alloc<vapi_msg_dslite_get_b4_addr>(Connection &con)
{
  vapi_msg_dslite_get_b4_addr* result = vapi_alloc_dslite_get_b4_addr(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_dslite_get_b4_addr>;

template class Request<vapi_msg_dslite_get_b4_addr, vapi_msg_dslite_get_b4_addr_reply>;

using Dslite_get_b4_addr = Request<vapi_msg_dslite_get_b4_addr, vapi_msg_dslite_get_b4_addr_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_output_feature_dump>(vapi_msg_nat44_interface_output_feature_dump *msg)
{
  vapi_msg_nat44_interface_output_feature_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_output_feature_dump>(vapi_msg_nat44_interface_output_feature_dump *msg)
{
  vapi_msg_nat44_interface_output_feature_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_output_feature_dump>()
{
  return ::vapi_msg_id_nat44_interface_output_feature_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_output_feature_dump>>()
{
  return ::vapi_msg_id_nat44_interface_output_feature_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_output_feature_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_output_feature_dump>(vapi_msg_id_nat44_interface_output_feature_dump);
}

template <> inline vapi_msg_nat44_interface_output_feature_dump* vapi_alloc<vapi_msg_nat44_interface_output_feature_dump>(Connection &con)
{
  vapi_msg_nat44_interface_output_feature_dump* result = vapi_alloc_nat44_interface_output_feature_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_interface_output_feature_dump>;

template class Dump<vapi_msg_nat44_interface_output_feature_dump, vapi_msg_nat44_interface_output_feature_details>;

using Nat44_interface_output_feature_dump = Dump<vapi_msg_nat44_interface_output_feature_dump, vapi_msg_nat44_interface_output_feature_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_get_listener_reply>(vapi_msg_nat_ha_get_listener_reply *msg)
{
  vapi_msg_nat_ha_get_listener_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_get_listener_reply>(vapi_msg_nat_ha_get_listener_reply *msg)
{
  vapi_msg_nat_ha_get_listener_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_get_listener_reply>()
{
  return ::vapi_msg_id_nat_ha_get_listener_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_get_listener_reply>>()
{
  return ::vapi_msg_id_nat_ha_get_listener_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_get_listener_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_get_listener_reply>(vapi_msg_id_nat_ha_get_listener_reply);
}

template class Msg<vapi_msg_nat_ha_get_listener_reply>;

using Nat_ha_get_listener_reply = Msg<vapi_msg_nat_ha_get_listener_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_get_addr_and_port_alloc_alg_reply>(vapi_msg_nat_get_addr_and_port_alloc_alg_reply *msg)
{
  vapi_msg_nat_get_addr_and_port_alloc_alg_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_addr_and_port_alloc_alg_reply>(vapi_msg_nat_get_addr_and_port_alloc_alg_reply *msg)
{
  vapi_msg_nat_get_addr_and_port_alloc_alg_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_addr_and_port_alloc_alg_reply>()
{
  return ::vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_addr_and_port_alloc_alg_reply>>()
{
  return ::vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_addr_and_port_alloc_alg_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_addr_and_port_alloc_alg_reply>(vapi_msg_id_nat_get_addr_and_port_alloc_alg_reply);
}

template class Msg<vapi_msg_nat_get_addr_and_port_alloc_alg_reply>;

using Nat_get_addr_and_port_alloc_alg_reply = Msg<vapi_msg_nat_get_addr_and_port_alloc_alg_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_get_timeouts_reply>(vapi_msg_nat_get_timeouts_reply *msg)
{
  vapi_msg_nat_get_timeouts_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_timeouts_reply>(vapi_msg_nat_get_timeouts_reply *msg)
{
  vapi_msg_nat_get_timeouts_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_timeouts_reply>()
{
  return ::vapi_msg_id_nat_get_timeouts_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_timeouts_reply>>()
{
  return ::vapi_msg_id_nat_get_timeouts_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_timeouts_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_timeouts_reply>(vapi_msg_id_nat_get_timeouts_reply);
}

template class Msg<vapi_msg_nat_get_timeouts_reply>;

using Nat_get_timeouts_reply = Msg<vapi_msg_nat_get_timeouts_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_get_reass>(vapi_msg_nat_get_reass *msg)
{
  vapi_msg_nat_get_reass_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_reass>(vapi_msg_nat_get_reass *msg)
{
  vapi_msg_nat_get_reass_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_reass>()
{
  return ::vapi_msg_id_nat_get_reass; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_reass>>()
{
  return ::vapi_msg_id_nat_get_reass; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_reass()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_reass>(vapi_msg_id_nat_get_reass);
}

template <> inline vapi_msg_nat_get_reass* vapi_alloc<vapi_msg_nat_get_reass>(Connection &con)
{
  vapi_msg_nat_get_reass* result = vapi_alloc_nat_get_reass(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_get_reass>;

template class Request<vapi_msg_nat_get_reass, vapi_msg_nat_get_reass_reply>;

using Nat_get_reass = Request<vapi_msg_nat_get_reass, vapi_msg_nat_get_reass_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_output_feature_details>(vapi_msg_nat44_interface_output_feature_details *msg)
{
  vapi_msg_nat44_interface_output_feature_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_output_feature_details>(vapi_msg_nat44_interface_output_feature_details *msg)
{
  vapi_msg_nat44_interface_output_feature_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_output_feature_details>()
{
  return ::vapi_msg_id_nat44_interface_output_feature_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_output_feature_details>>()
{
  return ::vapi_msg_id_nat44_interface_output_feature_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_output_feature_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_output_feature_details>(vapi_msg_id_nat44_interface_output_feature_details);
}

template class Msg<vapi_msg_nat44_interface_output_feature_details>;

using Nat44_interface_output_feature_details = Msg<vapi_msg_nat44_interface_output_feature_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_get_timeouts>(vapi_msg_nat_get_timeouts *msg)
{
  vapi_msg_nat_get_timeouts_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_timeouts>(vapi_msg_nat_get_timeouts *msg)
{
  vapi_msg_nat_get_timeouts_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_timeouts>()
{
  return ::vapi_msg_id_nat_get_timeouts; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_timeouts>>()
{
  return ::vapi_msg_id_nat_get_timeouts; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_timeouts()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_timeouts>(vapi_msg_id_nat_get_timeouts);
}

template <> inline vapi_msg_nat_get_timeouts* vapi_alloc<vapi_msg_nat_get_timeouts>(Connection &con)
{
  vapi_msg_nat_get_timeouts* result = vapi_alloc_nat_get_timeouts(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_get_timeouts>;

template class Request<vapi_msg_nat_get_timeouts, vapi_msg_nat_get_timeouts_reply>;

using Nat_get_timeouts = Request<vapi_msg_nat_get_timeouts, vapi_msg_nat_get_timeouts_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_get_listener>(vapi_msg_nat_ha_get_listener *msg)
{
  vapi_msg_nat_ha_get_listener_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_get_listener>(vapi_msg_nat_ha_get_listener *msg)
{
  vapi_msg_nat_ha_get_listener_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_get_listener>()
{
  return ::vapi_msg_id_nat_ha_get_listener; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_get_listener>>()
{
  return ::vapi_msg_id_nat_ha_get_listener; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_get_listener()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_get_listener>(vapi_msg_id_nat_ha_get_listener);
}

template <> inline vapi_msg_nat_ha_get_listener* vapi_alloc<vapi_msg_nat_ha_get_listener>(Connection &con)
{
  vapi_msg_nat_ha_get_listener* result = vapi_alloc_nat_ha_get_listener(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_ha_get_listener>;

template class Request<vapi_msg_nat_ha_get_listener, vapi_msg_nat_ha_get_listener_reply>;

using Nat_ha_get_listener = Request<vapi_msg_nat_ha_get_listener, vapi_msg_nat_ha_get_listener_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_session_details>(vapi_msg_nat_det_session_details *msg)
{
  vapi_msg_nat_det_session_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_session_details>(vapi_msg_nat_det_session_details *msg)
{
  vapi_msg_nat_det_session_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_session_details>()
{
  return ::vapi_msg_id_nat_det_session_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_session_details>>()
{
  return ::vapi_msg_id_nat_det_session_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_session_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_session_details>(vapi_msg_id_nat_det_session_details);
}

template class Msg<vapi_msg_nat_det_session_details>;

using Nat_det_session_details = Msg<vapi_msg_nat_det_session_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_add_del_feature_reply>(vapi_msg_nat44_interface_add_del_feature_reply *msg)
{
  vapi_msg_nat44_interface_add_del_feature_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_add_del_feature_reply>(vapi_msg_nat44_interface_add_del_feature_reply *msg)
{
  vapi_msg_nat44_interface_add_del_feature_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_add_del_feature_reply>()
{
  return ::vapi_msg_id_nat44_interface_add_del_feature_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_add_del_feature_reply>>()
{
  return ::vapi_msg_id_nat44_interface_add_del_feature_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_add_del_feature_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_add_del_feature_reply>(vapi_msg_id_nat44_interface_add_del_feature_reply);
}

template class Msg<vapi_msg_nat44_interface_add_del_feature_reply>;

using Nat44_interface_add_del_feature_reply = Msg<vapi_msg_nat44_interface_add_del_feature_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_set_timeouts>(vapi_msg_nat_set_timeouts *msg)
{
  vapi_msg_nat_set_timeouts_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_timeouts>(vapi_msg_nat_set_timeouts *msg)
{
  vapi_msg_nat_set_timeouts_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_timeouts>()
{
  return ::vapi_msg_id_nat_set_timeouts; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_timeouts>>()
{
  return ::vapi_msg_id_nat_set_timeouts; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_timeouts()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_timeouts>(vapi_msg_id_nat_set_timeouts);
}

template <> inline vapi_msg_nat_set_timeouts* vapi_alloc<vapi_msg_nat_set_timeouts>(Connection &con)
{
  vapi_msg_nat_set_timeouts* result = vapi_alloc_nat_set_timeouts(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_set_timeouts>;

template class Request<vapi_msg_nat_set_timeouts, vapi_msg_nat_set_timeouts_reply>;

using Nat_set_timeouts = Request<vapi_msg_nat_set_timeouts, vapi_msg_nat_set_timeouts_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_interface_reply>(vapi_msg_nat64_add_del_interface_reply *msg)
{
  vapi_msg_nat64_add_del_interface_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_interface_reply>(vapi_msg_nat64_add_del_interface_reply *msg)
{
  vapi_msg_nat64_add_del_interface_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_interface_reply>()
{
  return ::vapi_msg_id_nat64_add_del_interface_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_interface_reply>>()
{
  return ::vapi_msg_id_nat64_add_del_interface_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_interface_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_interface_reply>(vapi_msg_id_nat64_add_del_interface_reply);
}

template class Msg<vapi_msg_nat64_add_del_interface_reply>;

using Nat64_add_del_interface_reply = Msg<vapi_msg_nat64_add_del_interface_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_det_forward>(vapi_msg_nat_det_forward *msg)
{
  vapi_msg_nat_det_forward_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_forward>(vapi_msg_nat_det_forward *msg)
{
  vapi_msg_nat_det_forward_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_forward>()
{
  return ::vapi_msg_id_nat_det_forward; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_forward>>()
{
  return ::vapi_msg_id_nat_det_forward; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_forward()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_forward>(vapi_msg_id_nat_det_forward);
}

template <> inline vapi_msg_nat_det_forward* vapi_alloc<vapi_msg_nat_det_forward>(Connection &con)
{
  vapi_msg_nat_det_forward* result = vapi_alloc_nat_det_forward(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_det_forward>;

template class Request<vapi_msg_nat_det_forward, vapi_msg_nat_det_forward_reply>;

using Nat_det_forward = Request<vapi_msg_nat_det_forward, vapi_msg_nat_det_forward_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_worker_dump>(vapi_msg_nat_worker_dump *msg)
{
  vapi_msg_nat_worker_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_worker_dump>(vapi_msg_nat_worker_dump *msg)
{
  vapi_msg_nat_worker_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_worker_dump>()
{
  return ::vapi_msg_id_nat_worker_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_worker_dump>>()
{
  return ::vapi_msg_id_nat_worker_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_worker_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_worker_dump>(vapi_msg_id_nat_worker_dump);
}

template <> inline vapi_msg_nat_worker_dump* vapi_alloc<vapi_msg_nat_worker_dump>(Connection &con)
{
  vapi_msg_nat_worker_dump* result = vapi_alloc_nat_worker_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_worker_dump>;

template class Dump<vapi_msg_nat_worker_dump, vapi_msg_nat_worker_details>;

using Nat_worker_dump = Dump<vapi_msg_nat_worker_dump, vapi_msg_nat_worker_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_forwarding_is_enabled_reply>(vapi_msg_nat44_forwarding_is_enabled_reply *msg)
{
  vapi_msg_nat44_forwarding_is_enabled_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_forwarding_is_enabled_reply>(vapi_msg_nat44_forwarding_is_enabled_reply *msg)
{
  vapi_msg_nat44_forwarding_is_enabled_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_forwarding_is_enabled_reply>()
{
  return ::vapi_msg_id_nat44_forwarding_is_enabled_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_forwarding_is_enabled_reply>>()
{
  return ::vapi_msg_id_nat44_forwarding_is_enabled_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_forwarding_is_enabled_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_forwarding_is_enabled_reply>(vapi_msg_id_nat44_forwarding_is_enabled_reply);
}

template class Msg<vapi_msg_nat44_forwarding_is_enabled_reply>;

using Nat44_forwarding_is_enabled_reply = Msg<vapi_msg_nat44_forwarding_is_enabled_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_static_mapping_dump>(vapi_msg_nat44_static_mapping_dump *msg)
{
  vapi_msg_nat44_static_mapping_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_static_mapping_dump>(vapi_msg_nat44_static_mapping_dump *msg)
{
  vapi_msg_nat44_static_mapping_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_static_mapping_dump>()
{
  return ::vapi_msg_id_nat44_static_mapping_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_static_mapping_dump>>()
{
  return ::vapi_msg_id_nat44_static_mapping_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_static_mapping_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_static_mapping_dump>(vapi_msg_id_nat44_static_mapping_dump);
}

template <> inline vapi_msg_nat44_static_mapping_dump* vapi_alloc<vapi_msg_nat44_static_mapping_dump>(Connection &con)
{
  vapi_msg_nat44_static_mapping_dump* result = vapi_alloc_nat44_static_mapping_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_static_mapping_dump>;

template class Dump<vapi_msg_nat44_static_mapping_dump, vapi_msg_nat44_static_mapping_details>;

using Nat44_static_mapping_dump = Dump<vapi_msg_nat44_static_mapping_dump, vapi_msg_nat44_static_mapping_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_add_del_map_reply>(vapi_msg_nat_det_add_del_map_reply *msg)
{
  vapi_msg_nat_det_add_del_map_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_add_del_map_reply>(vapi_msg_nat_det_add_del_map_reply *msg)
{
  vapi_msg_nat_det_add_del_map_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_add_del_map_reply>()
{
  return ::vapi_msg_id_nat_det_add_del_map_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_add_del_map_reply>>()
{
  return ::vapi_msg_id_nat_det_add_del_map_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_add_del_map_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_add_del_map_reply>(vapi_msg_id_nat_det_add_del_map_reply);
}

template class Msg<vapi_msg_nat_det_add_del_map_reply>;

using Nat_det_add_del_map_reply = Msg<vapi_msg_nat_det_add_del_map_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_addr_dump>(vapi_msg_nat44_interface_addr_dump *msg)
{
  vapi_msg_nat44_interface_addr_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_addr_dump>(vapi_msg_nat44_interface_addr_dump *msg)
{
  vapi_msg_nat44_interface_addr_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_addr_dump>()
{
  return ::vapi_msg_id_nat44_interface_addr_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_addr_dump>>()
{
  return ::vapi_msg_id_nat44_interface_addr_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_addr_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_addr_dump>(vapi_msg_id_nat44_interface_addr_dump);
}

template <> inline vapi_msg_nat44_interface_addr_dump* vapi_alloc<vapi_msg_nat44_interface_addr_dump>(Connection &con)
{
  vapi_msg_nat44_interface_addr_dump* result = vapi_alloc_nat44_interface_addr_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_interface_addr_dump>;

template class Dump<vapi_msg_nat44_interface_addr_dump, vapi_msg_nat44_interface_addr_details>;

using Nat44_interface_addr_dump = Dump<vapi_msg_nat44_interface_addr_dump, vapi_msg_nat44_interface_addr_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_show_config_reply>(vapi_msg_nat_show_config_reply *msg)
{
  vapi_msg_nat_show_config_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_show_config_reply>(vapi_msg_nat_show_config_reply *msg)
{
  vapi_msg_nat_show_config_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_show_config_reply>()
{
  return ::vapi_msg_id_nat_show_config_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_show_config_reply>>()
{
  return ::vapi_msg_id_nat_show_config_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_show_config_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_show_config_reply>(vapi_msg_id_nat_show_config_reply);
}

template class Msg<vapi_msg_nat_show_config_reply>;

using Nat_show_config_reply = Msg<vapi_msg_nat_show_config_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_lb_static_mapping_reply>(vapi_msg_nat44_add_del_lb_static_mapping_reply *msg)
{
  vapi_msg_nat44_add_del_lb_static_mapping_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_lb_static_mapping_reply>(vapi_msg_nat44_add_del_lb_static_mapping_reply *msg)
{
  vapi_msg_nat44_add_del_lb_static_mapping_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_lb_static_mapping_reply>()
{
  return ::vapi_msg_id_nat44_add_del_lb_static_mapping_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_lb_static_mapping_reply>>()
{
  return ::vapi_msg_id_nat44_add_del_lb_static_mapping_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_lb_static_mapping_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_lb_static_mapping_reply>(vapi_msg_id_nat44_add_del_lb_static_mapping_reply);
}

template class Msg<vapi_msg_nat44_add_del_lb_static_mapping_reply>;

using Nat44_add_del_lb_static_mapping_reply = Msg<vapi_msg_nat44_add_del_lb_static_mapping_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_address_range_reply>(vapi_msg_nat44_add_del_address_range_reply *msg)
{
  vapi_msg_nat44_add_del_address_range_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_address_range_reply>(vapi_msg_nat44_add_del_address_range_reply *msg)
{
  vapi_msg_nat44_add_del_address_range_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_address_range_reply>()
{
  return ::vapi_msg_id_nat44_add_del_address_range_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_address_range_reply>>()
{
  return ::vapi_msg_id_nat44_add_del_address_range_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_address_range_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_address_range_reply>(vapi_msg_id_nat44_add_del_address_range_reply);
}

template class Msg<vapi_msg_nat44_add_del_address_range_reply>;

using Nat44_add_del_address_range_reply = Msg<vapi_msg_nat44_add_del_address_range_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_del_session_reply>(vapi_msg_nat44_del_session_reply *msg)
{
  vapi_msg_nat44_del_session_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_del_session_reply>(vapi_msg_nat44_del_session_reply *msg)
{
  vapi_msg_nat44_del_session_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_del_session_reply>()
{
  return ::vapi_msg_id_nat44_del_session_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_del_session_reply>>()
{
  return ::vapi_msg_id_nat44_del_session_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_del_session_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_del_session_reply>(vapi_msg_id_nat44_del_session_reply);
}

template class Msg<vapi_msg_nat44_del_session_reply>;

using Nat44_del_session_reply = Msg<vapi_msg_nat44_del_session_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_get_reass_reply>(vapi_msg_nat_get_reass_reply *msg)
{
  vapi_msg_nat_get_reass_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_reass_reply>(vapi_msg_nat_get_reass_reply *msg)
{
  vapi_msg_nat_get_reass_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_reass_reply>()
{
  return ::vapi_msg_id_nat_get_reass_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_reass_reply>>()
{
  return ::vapi_msg_id_nat_get_reass_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_reass_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_reass_reply>(vapi_msg_id_nat_get_reass_reply);
}

template class Msg<vapi_msg_nat_get_reass_reply>;

using Nat_get_reass_reply = Msg<vapi_msg_nat_get_reass_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_reass_dump>(vapi_msg_nat_reass_dump *msg)
{
  vapi_msg_nat_reass_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_reass_dump>(vapi_msg_nat_reass_dump *msg)
{
  vapi_msg_nat_reass_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_reass_dump>()
{
  return ::vapi_msg_id_nat_reass_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_reass_dump>>()
{
  return ::vapi_msg_id_nat_reass_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_reass_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_reass_dump>(vapi_msg_id_nat_reass_dump);
}

template <> inline vapi_msg_nat_reass_dump* vapi_alloc<vapi_msg_nat_reass_dump>(Connection &con)
{
  vapi_msg_nat_reass_dump* result = vapi_alloc_nat_reass_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_reass_dump>;

template class Dump<vapi_msg_nat_reass_dump, vapi_msg_nat_reass_details>;

using Nat_reass_dump = Dump<vapi_msg_nat_reass_dump, vapi_msg_nat_reass_details>;

template <> inline void vapi_swap_to_be<vapi_msg_dslite_address_details>(vapi_msg_dslite_address_details *msg)
{
  vapi_msg_dslite_address_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_address_details>(vapi_msg_dslite_address_details *msg)
{
  vapi_msg_dslite_address_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_address_details>()
{
  return ::vapi_msg_id_dslite_address_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_address_details>>()
{
  return ::vapi_msg_id_dslite_address_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_address_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_address_details>(vapi_msg_id_dslite_address_details);
}

template class Msg<vapi_msg_dslite_address_details>;

using Dslite_address_details = Msg<vapi_msg_dslite_address_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_user_details>(vapi_msg_nat44_user_details *msg)
{
  vapi_msg_nat44_user_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_user_details>(vapi_msg_nat44_user_details *msg)
{
  vapi_msg_nat44_user_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_user_details>()
{
  return ::vapi_msg_id_nat44_user_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_user_details>>()
{
  return ::vapi_msg_id_nat44_user_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_user_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_user_details>(vapi_msg_id_nat44_user_details);
}

template class Msg<vapi_msg_nat44_user_details>;

using Nat44_user_details = Msg<vapi_msg_nat44_user_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_set_mss_clamping>(vapi_msg_nat_set_mss_clamping *msg)
{
  vapi_msg_nat_set_mss_clamping_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_mss_clamping>(vapi_msg_nat_set_mss_clamping *msg)
{
  vapi_msg_nat_set_mss_clamping_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_mss_clamping>()
{
  return ::vapi_msg_id_nat_set_mss_clamping; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_mss_clamping>>()
{
  return ::vapi_msg_id_nat_set_mss_clamping; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_mss_clamping()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_mss_clamping>(vapi_msg_id_nat_set_mss_clamping);
}

template <> inline vapi_msg_nat_set_mss_clamping* vapi_alloc<vapi_msg_nat_set_mss_clamping>(Connection &con)
{
  vapi_msg_nat_set_mss_clamping* result = vapi_alloc_nat_set_mss_clamping(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_set_mss_clamping>;

template class Request<vapi_msg_nat_set_mss_clamping, vapi_msg_nat_set_mss_clamping_reply>;

using Nat_set_mss_clamping = Request<vapi_msg_nat_set_mss_clamping, vapi_msg_nat_set_mss_clamping_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_static_bib_reply>(vapi_msg_nat64_add_del_static_bib_reply *msg)
{
  vapi_msg_nat64_add_del_static_bib_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_static_bib_reply>(vapi_msg_nat64_add_del_static_bib_reply *msg)
{
  vapi_msg_nat64_add_del_static_bib_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_static_bib_reply>()
{
  return ::vapi_msg_id_nat64_add_del_static_bib_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_static_bib_reply>>()
{
  return ::vapi_msg_id_nat64_add_del_static_bib_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_static_bib_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_static_bib_reply>(vapi_msg_id_nat64_add_del_static_bib_reply);
}

template class Msg<vapi_msg_nat64_add_del_static_bib_reply>;

using Nat64_add_del_static_bib_reply = Msg<vapi_msg_nat64_add_del_static_bib_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_reass_details>(vapi_msg_nat_reass_details *msg)
{
  vapi_msg_nat_reass_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_reass_details>(vapi_msg_nat_reass_details *msg)
{
  vapi_msg_nat_reass_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_reass_details>()
{
  return ::vapi_msg_id_nat_reass_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_reass_details>>()
{
  return ::vapi_msg_id_nat_reass_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_reass_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_reass_details>(vapi_msg_id_nat_reass_details);
}

template class Msg<vapi_msg_nat_reass_details>;

using Nat_reass_details = Msg<vapi_msg_nat_reass_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_address_details>(vapi_msg_nat44_address_details *msg)
{
  vapi_msg_nat44_address_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_address_details>(vapi_msg_nat44_address_details *msg)
{
  vapi_msg_nat44_address_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_address_details>()
{
  return ::vapi_msg_id_nat44_address_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_address_details>>()
{
  return ::vapi_msg_id_nat44_address_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_address_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_address_details>(vapi_msg_id_nat44_address_details);
}

template class Msg<vapi_msg_nat44_address_details>;

using Nat44_address_details = Msg<vapi_msg_nat44_address_details>;
template <> inline void vapi_swap_to_be<vapi_msg_dslite_get_b4_addr_reply>(vapi_msg_dslite_get_b4_addr_reply *msg)
{
  vapi_msg_dslite_get_b4_addr_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_get_b4_addr_reply>(vapi_msg_dslite_get_b4_addr_reply *msg)
{
  vapi_msg_dslite_get_b4_addr_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_get_b4_addr_reply>()
{
  return ::vapi_msg_id_dslite_get_b4_addr_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_get_b4_addr_reply>>()
{
  return ::vapi_msg_id_dslite_get_b4_addr_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_get_b4_addr_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_get_b4_addr_reply>(vapi_msg_id_dslite_get_b4_addr_reply);
}

template class Msg<vapi_msg_dslite_get_b4_addr_reply>;

using Dslite_get_b4_addr_reply = Msg<vapi_msg_dslite_get_b4_addr_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_dslite_get_aftr_addr_reply>(vapi_msg_dslite_get_aftr_addr_reply *msg)
{
  vapi_msg_dslite_get_aftr_addr_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_get_aftr_addr_reply>(vapi_msg_dslite_get_aftr_addr_reply *msg)
{
  vapi_msg_dslite_get_aftr_addr_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_get_aftr_addr_reply>()
{
  return ::vapi_msg_id_dslite_get_aftr_addr_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_get_aftr_addr_reply>>()
{
  return ::vapi_msg_id_dslite_get_aftr_addr_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_get_aftr_addr_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_get_aftr_addr_reply>(vapi_msg_id_dslite_get_aftr_addr_reply);
}

template class Msg<vapi_msg_dslite_get_aftr_addr_reply>;

using Dslite_get_aftr_addr_reply = Msg<vapi_msg_dslite_get_aftr_addr_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_forwarding_enable_disable_reply>(vapi_msg_nat44_forwarding_enable_disable_reply *msg)
{
  vapi_msg_nat44_forwarding_enable_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_forwarding_enable_disable_reply>(vapi_msg_nat44_forwarding_enable_disable_reply *msg)
{
  vapi_msg_nat44_forwarding_enable_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_forwarding_enable_disable_reply>()
{
  return ::vapi_msg_id_nat44_forwarding_enable_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_forwarding_enable_disable_reply>>()
{
  return ::vapi_msg_id_nat44_forwarding_enable_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_forwarding_enable_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_forwarding_enable_disable_reply>(vapi_msg_id_nat44_forwarding_enable_disable_reply);
}

template class Msg<vapi_msg_nat44_forwarding_enable_disable_reply>;

using Nat44_forwarding_enable_disable_reply = Msg<vapi_msg_nat44_forwarding_enable_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_lb_static_mapping>(vapi_msg_nat44_add_del_lb_static_mapping *msg)
{
  vapi_msg_nat44_add_del_lb_static_mapping_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_lb_static_mapping>(vapi_msg_nat44_add_del_lb_static_mapping *msg)
{
  vapi_msg_nat44_add_del_lb_static_mapping_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_lb_static_mapping>()
{
  return ::vapi_msg_id_nat44_add_del_lb_static_mapping; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_lb_static_mapping>>()
{
  return ::vapi_msg_id_nat44_add_del_lb_static_mapping; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_lb_static_mapping()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_lb_static_mapping>(vapi_msg_id_nat44_add_del_lb_static_mapping);
}

template <> inline vapi_msg_nat44_add_del_lb_static_mapping* vapi_alloc<vapi_msg_nat44_add_del_lb_static_mapping, size_t>(Connection &con, size_t _locals_array_size)
{
  vapi_msg_nat44_add_del_lb_static_mapping* result = vapi_alloc_nat44_add_del_lb_static_mapping(con.vapi_ctx, _locals_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_add_del_lb_static_mapping>;

template class Request<vapi_msg_nat44_add_del_lb_static_mapping, vapi_msg_nat44_add_del_lb_static_mapping_reply, size_t>;

using Nat44_add_del_lb_static_mapping = Request<vapi_msg_nat44_add_del_lb_static_mapping, vapi_msg_nat44_add_del_lb_static_mapping_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_nat66_add_del_static_mapping_reply>(vapi_msg_nat66_add_del_static_mapping_reply *msg)
{
  vapi_msg_nat66_add_del_static_mapping_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_add_del_static_mapping_reply>(vapi_msg_nat66_add_del_static_mapping_reply *msg)
{
  vapi_msg_nat66_add_del_static_mapping_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_add_del_static_mapping_reply>()
{
  return ::vapi_msg_id_nat66_add_del_static_mapping_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_add_del_static_mapping_reply>>()
{
  return ::vapi_msg_id_nat66_add_del_static_mapping_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_add_del_static_mapping_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_add_del_static_mapping_reply>(vapi_msg_id_nat66_add_del_static_mapping_reply);
}

template class Msg<vapi_msg_nat66_add_del_static_mapping_reply>;

using Nat66_add_del_static_mapping_reply = Msg<vapi_msg_nat66_add_del_static_mapping_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat66_interface_details>(vapi_msg_nat66_interface_details *msg)
{
  vapi_msg_nat66_interface_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_interface_details>(vapi_msg_nat66_interface_details *msg)
{
  vapi_msg_nat66_interface_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_interface_details>()
{
  return ::vapi_msg_id_nat66_interface_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_interface_details>>()
{
  return ::vapi_msg_id_nat66_interface_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_interface_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_interface_details>(vapi_msg_id_nat66_interface_details);
}

template class Msg<vapi_msg_nat66_interface_details>;

using Nat66_interface_details = Msg<vapi_msg_nat66_interface_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_set_timeouts_reply>(vapi_msg_nat_set_timeouts_reply *msg)
{
  vapi_msg_nat_set_timeouts_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_timeouts_reply>(vapi_msg_nat_set_timeouts_reply *msg)
{
  vapi_msg_nat_set_timeouts_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_timeouts_reply>()
{
  return ::vapi_msg_id_nat_set_timeouts_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_timeouts_reply>>()
{
  return ::vapi_msg_id_nat_set_timeouts_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_timeouts_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_timeouts_reply>(vapi_msg_id_nat_set_timeouts_reply);
}

template class Msg<vapi_msg_nat_set_timeouts_reply>;

using Nat_set_timeouts_reply = Msg<vapi_msg_nat_set_timeouts_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_det_session_dump>(vapi_msg_nat_det_session_dump *msg)
{
  vapi_msg_nat_det_session_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_session_dump>(vapi_msg_nat_det_session_dump *msg)
{
  vapi_msg_nat_det_session_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_session_dump>()
{
  return ::vapi_msg_id_nat_det_session_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_session_dump>>()
{
  return ::vapi_msg_id_nat_det_session_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_session_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_session_dump>(vapi_msg_id_nat_det_session_dump);
}

template <> inline vapi_msg_nat_det_session_dump* vapi_alloc<vapi_msg_nat_det_session_dump>(Connection &con)
{
  vapi_msg_nat_det_session_dump* result = vapi_alloc_nat_det_session_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_det_session_dump>;

template class Dump<vapi_msg_nat_det_session_dump, vapi_msg_nat_det_session_details>;

using Nat_det_session_dump = Dump<vapi_msg_nat_det_session_dump, vapi_msg_nat_det_session_details>;

template <> inline void vapi_swap_to_be<vapi_msg_dslite_address_dump>(vapi_msg_dslite_address_dump *msg)
{
  vapi_msg_dslite_address_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_address_dump>(vapi_msg_dslite_address_dump *msg)
{
  vapi_msg_dslite_address_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_address_dump>()
{
  return ::vapi_msg_id_dslite_address_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_address_dump>>()
{
  return ::vapi_msg_id_dslite_address_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_address_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_address_dump>(vapi_msg_id_dslite_address_dump);
}

template <> inline vapi_msg_dslite_address_dump* vapi_alloc<vapi_msg_dslite_address_dump>(Connection &con)
{
  vapi_msg_dslite_address_dump* result = vapi_alloc_dslite_address_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_dslite_address_dump>;

template class Dump<vapi_msg_dslite_address_dump, vapi_msg_dslite_address_details>;

using Dslite_address_dump = Dump<vapi_msg_dslite_address_dump, vapi_msg_dslite_address_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_resync>(vapi_msg_nat_ha_resync *msg)
{
  vapi_msg_nat_ha_resync_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_resync>(vapi_msg_nat_ha_resync *msg)
{
  vapi_msg_nat_ha_resync_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_resync>()
{
  return ::vapi_msg_id_nat_ha_resync; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_resync>>()
{
  return ::vapi_msg_id_nat_ha_resync; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_resync()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_resync>(vapi_msg_id_nat_ha_resync);
}

template <> inline vapi_msg_nat_ha_resync* vapi_alloc<vapi_msg_nat_ha_resync>(Connection &con)
{
  vapi_msg_nat_ha_resync* result = vapi_alloc_nat_ha_resync(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_ha_resync>;

template class Request<vapi_msg_nat_ha_resync, vapi_msg_nat_ha_resync_reply>;

using Nat_ha_resync = Request<vapi_msg_nat_ha_resync, vapi_msg_nat_ha_resync_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_get_failover_reply>(vapi_msg_nat_ha_get_failover_reply *msg)
{
  vapi_msg_nat_ha_get_failover_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_get_failover_reply>(vapi_msg_nat_ha_get_failover_reply *msg)
{
  vapi_msg_nat_ha_get_failover_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_get_failover_reply>()
{
  return ::vapi_msg_id_nat_ha_get_failover_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_get_failover_reply>>()
{
  return ::vapi_msg_id_nat_ha_get_failover_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_get_failover_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_get_failover_reply>(vapi_msg_id_nat_ha_get_failover_reply);
}

template class Msg<vapi_msg_nat_ha_get_failover_reply>;

using Nat_ha_get_failover_reply = Msg<vapi_msg_nat_ha_get_failover_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_set_listener_reply>(vapi_msg_nat_ha_set_listener_reply *msg)
{
  vapi_msg_nat_ha_set_listener_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_set_listener_reply>(vapi_msg_nat_ha_set_listener_reply *msg)
{
  vapi_msg_nat_ha_set_listener_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_set_listener_reply>()
{
  return ::vapi_msg_id_nat_ha_set_listener_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_set_listener_reply>>()
{
  return ::vapi_msg_id_nat_ha_set_listener_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_set_listener_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_set_listener_reply>(vapi_msg_id_nat_ha_set_listener_reply);
}

template class Msg<vapi_msg_nat_ha_set_listener_reply>;

using Nat_ha_set_listener_reply = Msg<vapi_msg_nat_ha_set_listener_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_add_del_feature>(vapi_msg_nat44_interface_add_del_feature *msg)
{
  vapi_msg_nat44_interface_add_del_feature_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_add_del_feature>(vapi_msg_nat44_interface_add_del_feature *msg)
{
  vapi_msg_nat44_interface_add_del_feature_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_add_del_feature>()
{
  return ::vapi_msg_id_nat44_interface_add_del_feature; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_add_del_feature>>()
{
  return ::vapi_msg_id_nat44_interface_add_del_feature; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_add_del_feature()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_add_del_feature>(vapi_msg_id_nat44_interface_add_del_feature);
}

template <> inline vapi_msg_nat44_interface_add_del_feature* vapi_alloc<vapi_msg_nat44_interface_add_del_feature>(Connection &con)
{
  vapi_msg_nat44_interface_add_del_feature* result = vapi_alloc_nat44_interface_add_del_feature(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_interface_add_del_feature>;

template class Request<vapi_msg_nat44_interface_add_del_feature, vapi_msg_nat44_interface_add_del_feature_reply>;

using Nat44_interface_add_del_feature = Request<vapi_msg_nat44_interface_add_del_feature, vapi_msg_nat44_interface_add_del_feature_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_pool_addr_range_reply>(vapi_msg_nat64_add_del_pool_addr_range_reply *msg)
{
  vapi_msg_nat64_add_del_pool_addr_range_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_pool_addr_range_reply>(vapi_msg_nat64_add_del_pool_addr_range_reply *msg)
{
  vapi_msg_nat64_add_del_pool_addr_range_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_pool_addr_range_reply>()
{
  return ::vapi_msg_id_nat64_add_del_pool_addr_range_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_pool_addr_range_reply>>()
{
  return ::vapi_msg_id_nat64_add_del_pool_addr_range_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_pool_addr_range_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_pool_addr_range_reply>(vapi_msg_id_nat64_add_del_pool_addr_range_reply);
}

template class Msg<vapi_msg_nat64_add_del_pool_addr_range_reply>;

using Nat64_add_del_pool_addr_range_reply = Msg<vapi_msg_nat64_add_del_pool_addr_range_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_user_session_details>(vapi_msg_nat44_user_session_details *msg)
{
  vapi_msg_nat44_user_session_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_user_session_details>(vapi_msg_nat44_user_session_details *msg)
{
  vapi_msg_nat44_user_session_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_user_session_details>()
{
  return ::vapi_msg_id_nat44_user_session_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_user_session_details>>()
{
  return ::vapi_msg_id_nat44_user_session_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_user_session_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_user_session_details>(vapi_msg_id_nat44_user_session_details);
}

template class Msg<vapi_msg_nat44_user_session_details>;

using Nat44_user_session_details = Msg<vapi_msg_nat44_user_session_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_set_reass>(vapi_msg_nat_set_reass *msg)
{
  vapi_msg_nat_set_reass_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_reass>(vapi_msg_nat_set_reass *msg)
{
  vapi_msg_nat_set_reass_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_reass>()
{
  return ::vapi_msg_id_nat_set_reass; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_reass>>()
{
  return ::vapi_msg_id_nat_set_reass; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_reass()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_reass>(vapi_msg_id_nat_set_reass);
}

template <> inline vapi_msg_nat_set_reass* vapi_alloc<vapi_msg_nat_set_reass>(Connection &con)
{
  vapi_msg_nat_set_reass* result = vapi_alloc_nat_set_reass(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_set_reass>;

template class Request<vapi_msg_nat_set_reass, vapi_msg_nat_set_reass_reply>;

using Nat_set_reass = Request<vapi_msg_nat_set_reass, vapi_msg_nat_set_reass_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_set_failover>(vapi_msg_nat_ha_set_failover *msg)
{
  vapi_msg_nat_ha_set_failover_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_set_failover>(vapi_msg_nat_ha_set_failover *msg)
{
  vapi_msg_nat_ha_set_failover_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_set_failover>()
{
  return ::vapi_msg_id_nat_ha_set_failover; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_set_failover>>()
{
  return ::vapi_msg_id_nat_ha_set_failover; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_set_failover()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_set_failover>(vapi_msg_id_nat_ha_set_failover);
}

template <> inline vapi_msg_nat_ha_set_failover* vapi_alloc<vapi_msg_nat_ha_set_failover>(Connection &con)
{
  vapi_msg_nat_ha_set_failover* result = vapi_alloc_nat_ha_set_failover(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_ha_set_failover>;

template class Request<vapi_msg_nat_ha_set_failover, vapi_msg_nat_ha_set_failover_reply>;

using Nat_ha_set_failover = Request<vapi_msg_nat_ha_set_failover, vapi_msg_nat_ha_set_failover_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_get_mss_clamping>(vapi_msg_nat_get_mss_clamping *msg)
{
  vapi_msg_nat_get_mss_clamping_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_mss_clamping>(vapi_msg_nat_get_mss_clamping *msg)
{
  vapi_msg_nat_get_mss_clamping_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_mss_clamping>()
{
  return ::vapi_msg_id_nat_get_mss_clamping; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_mss_clamping>>()
{
  return ::vapi_msg_id_nat_get_mss_clamping; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_mss_clamping()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_mss_clamping>(vapi_msg_id_nat_get_mss_clamping);
}

template <> inline vapi_msg_nat_get_mss_clamping* vapi_alloc<vapi_msg_nat_get_mss_clamping>(Connection &con)
{
  vapi_msg_nat_get_mss_clamping* result = vapi_alloc_nat_get_mss_clamping(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_get_mss_clamping>;

template class Request<vapi_msg_nat_get_mss_clamping, vapi_msg_nat_get_mss_clamping_reply>;

using Nat_get_mss_clamping = Request<vapi_msg_nat_get_mss_clamping, vapi_msg_nat_get_mss_clamping_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_set_addr_and_port_alloc_alg>(vapi_msg_nat_set_addr_and_port_alloc_alg *msg)
{
  vapi_msg_nat_set_addr_and_port_alloc_alg_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_addr_and_port_alloc_alg>(vapi_msg_nat_set_addr_and_port_alloc_alg *msg)
{
  vapi_msg_nat_set_addr_and_port_alloc_alg_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_addr_and_port_alloc_alg>()
{
  return ::vapi_msg_id_nat_set_addr_and_port_alloc_alg; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_addr_and_port_alloc_alg>>()
{
  return ::vapi_msg_id_nat_set_addr_and_port_alloc_alg; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_addr_and_port_alloc_alg()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_addr_and_port_alloc_alg>(vapi_msg_id_nat_set_addr_and_port_alloc_alg);
}

template <> inline vapi_msg_nat_set_addr_and_port_alloc_alg* vapi_alloc<vapi_msg_nat_set_addr_and_port_alloc_alg>(Connection &con)
{
  vapi_msg_nat_set_addr_and_port_alloc_alg* result = vapi_alloc_nat_set_addr_and_port_alloc_alg(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_set_addr_and_port_alloc_alg>;

template class Request<vapi_msg_nat_set_addr_and_port_alloc_alg, vapi_msg_nat_set_addr_and_port_alloc_alg_reply>;

using Nat_set_addr_and_port_alloc_alg = Request<vapi_msg_nat_set_addr_and_port_alloc_alg, vapi_msg_nat_set_addr_and_port_alloc_alg_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_close_session_out_reply>(vapi_msg_nat_det_close_session_out_reply *msg)
{
  vapi_msg_nat_det_close_session_out_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_close_session_out_reply>(vapi_msg_nat_det_close_session_out_reply *msg)
{
  vapi_msg_nat_det_close_session_out_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_close_session_out_reply>()
{
  return ::vapi_msg_id_nat_det_close_session_out_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_close_session_out_reply>>()
{
  return ::vapi_msg_id_nat_det_close_session_out_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_close_session_out_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_close_session_out_reply>(vapi_msg_id_nat_det_close_session_out_reply);
}

template class Msg<vapi_msg_nat_det_close_session_out_reply>;

using Nat_det_close_session_out_reply = Msg<vapi_msg_nat_det_close_session_out_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_show_config>(vapi_msg_nat_show_config *msg)
{
  vapi_msg_nat_show_config_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_show_config>(vapi_msg_nat_show_config *msg)
{
  vapi_msg_nat_show_config_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_show_config>()
{
  return ::vapi_msg_id_nat_show_config; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_show_config>>()
{
  return ::vapi_msg_id_nat_show_config; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_show_config()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_show_config>(vapi_msg_id_nat_show_config);
}

template <> inline vapi_msg_nat_show_config* vapi_alloc<vapi_msg_nat_show_config>(Connection &con)
{
  vapi_msg_nat_show_config* result = vapi_alloc_nat_show_config(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_show_config>;

template class Request<vapi_msg_nat_show_config, vapi_msg_nat_show_config_reply>;

using Nat_show_config = Request<vapi_msg_nat_show_config, vapi_msg_nat_show_config_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_set_log_level>(vapi_msg_nat_set_log_level *msg)
{
  vapi_msg_nat_set_log_level_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_log_level>(vapi_msg_nat_set_log_level *msg)
{
  vapi_msg_nat_set_log_level_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_log_level>()
{
  return ::vapi_msg_id_nat_set_log_level; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_log_level>>()
{
  return ::vapi_msg_id_nat_set_log_level; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_log_level()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_log_level>(vapi_msg_id_nat_set_log_level);
}

template <> inline vapi_msg_nat_set_log_level* vapi_alloc<vapi_msg_nat_set_log_level>(Connection &con)
{
  vapi_msg_nat_set_log_level* result = vapi_alloc_nat_set_log_level(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_set_log_level>;

template class Request<vapi_msg_nat_set_log_level, vapi_msg_nat_set_log_level_reply>;

using Nat_set_log_level = Request<vapi_msg_nat_set_log_level, vapi_msg_nat_set_log_level_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_address_dump>(vapi_msg_nat44_address_dump *msg)
{
  vapi_msg_nat44_address_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_address_dump>(vapi_msg_nat44_address_dump *msg)
{
  vapi_msg_nat44_address_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_address_dump>()
{
  return ::vapi_msg_id_nat44_address_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_address_dump>>()
{
  return ::vapi_msg_id_nat44_address_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_address_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_address_dump>(vapi_msg_id_nat44_address_dump);
}

template <> inline vapi_msg_nat44_address_dump* vapi_alloc<vapi_msg_nat44_address_dump>(Connection &con)
{
  vapi_msg_nat44_address_dump* result = vapi_alloc_nat44_address_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_address_dump>;

template class Dump<vapi_msg_nat44_address_dump, vapi_msg_nat44_address_details>;

using Nat44_address_dump = Dump<vapi_msg_nat44_address_dump, vapi_msg_nat44_address_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_forwarding_is_enabled>(vapi_msg_nat44_forwarding_is_enabled *msg)
{
  vapi_msg_nat44_forwarding_is_enabled_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_forwarding_is_enabled>(vapi_msg_nat44_forwarding_is_enabled *msg)
{
  vapi_msg_nat44_forwarding_is_enabled_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_forwarding_is_enabled>()
{
  return ::vapi_msg_id_nat44_forwarding_is_enabled; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_forwarding_is_enabled>>()
{
  return ::vapi_msg_id_nat44_forwarding_is_enabled; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_forwarding_is_enabled()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_forwarding_is_enabled>(vapi_msg_id_nat44_forwarding_is_enabled);
}

template <> inline vapi_msg_nat44_forwarding_is_enabled* vapi_alloc<vapi_msg_nat44_forwarding_is_enabled>(Connection &con)
{
  vapi_msg_nat44_forwarding_is_enabled* result = vapi_alloc_nat44_forwarding_is_enabled(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_forwarding_is_enabled>;

template class Request<vapi_msg_nat44_forwarding_is_enabled, vapi_msg_nat44_forwarding_is_enabled_reply>;

using Nat44_forwarding_is_enabled = Request<vapi_msg_nat44_forwarding_is_enabled, vapi_msg_nat44_forwarding_is_enabled_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ipfix_enable_disable_reply>(vapi_msg_nat_ipfix_enable_disable_reply *msg)
{
  vapi_msg_nat_ipfix_enable_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ipfix_enable_disable_reply>(vapi_msg_nat_ipfix_enable_disable_reply *msg)
{
  vapi_msg_nat_ipfix_enable_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ipfix_enable_disable_reply>()
{
  return ::vapi_msg_id_nat_ipfix_enable_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ipfix_enable_disable_reply>>()
{
  return ::vapi_msg_id_nat_ipfix_enable_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ipfix_enable_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ipfix_enable_disable_reply>(vapi_msg_id_nat_ipfix_enable_disable_reply);
}

template class Msg<vapi_msg_nat_ipfix_enable_disable_reply>;

using Nat_ipfix_enable_disable_reply = Msg<vapi_msg_nat_ipfix_enable_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_dump>(vapi_msg_nat44_interface_dump *msg)
{
  vapi_msg_nat44_interface_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_dump>(vapi_msg_nat44_interface_dump *msg)
{
  vapi_msg_nat44_interface_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_dump>()
{
  return ::vapi_msg_id_nat44_interface_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_dump>>()
{
  return ::vapi_msg_id_nat44_interface_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_dump>(vapi_msg_id_nat44_interface_dump);
}

template <> inline vapi_msg_nat44_interface_dump* vapi_alloc<vapi_msg_nat44_interface_dump>(Connection &con)
{
  vapi_msg_nat44_interface_dump* result = vapi_alloc_nat44_interface_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_interface_dump>;

template class Dump<vapi_msg_nat44_interface_dump, vapi_msg_nat44_interface_details>;

using Nat44_interface_dump = Dump<vapi_msg_nat44_interface_dump, vapi_msg_nat44_interface_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_interface_details>(vapi_msg_nat64_interface_details *msg)
{
  vapi_msg_nat64_interface_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_interface_details>(vapi_msg_nat64_interface_details *msg)
{
  vapi_msg_nat64_interface_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_interface_details>()
{
  return ::vapi_msg_id_nat64_interface_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_interface_details>>()
{
  return ::vapi_msg_id_nat64_interface_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_interface_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_interface_details>(vapi_msg_id_nat64_interface_details);
}

template class Msg<vapi_msg_nat64_interface_details>;

using Nat64_interface_details = Msg<vapi_msg_nat64_interface_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat64_bib_dump>(vapi_msg_nat64_bib_dump *msg)
{
  vapi_msg_nat64_bib_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_bib_dump>(vapi_msg_nat64_bib_dump *msg)
{
  vapi_msg_nat64_bib_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_bib_dump>()
{
  return ::vapi_msg_id_nat64_bib_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_bib_dump>>()
{
  return ::vapi_msg_id_nat64_bib_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_bib_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_bib_dump>(vapi_msg_id_nat64_bib_dump);
}

template <> inline vapi_msg_nat64_bib_dump* vapi_alloc<vapi_msg_nat64_bib_dump>(Connection &con)
{
  vapi_msg_nat64_bib_dump* result = vapi_alloc_nat64_bib_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_bib_dump>;

template class Dump<vapi_msg_nat64_bib_dump, vapi_msg_nat64_bib_details>;

using Nat64_bib_dump = Dump<vapi_msg_nat64_bib_dump, vapi_msg_nat64_bib_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_pool_addr_range>(vapi_msg_nat64_add_del_pool_addr_range *msg)
{
  vapi_msg_nat64_add_del_pool_addr_range_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_pool_addr_range>(vapi_msg_nat64_add_del_pool_addr_range *msg)
{
  vapi_msg_nat64_add_del_pool_addr_range_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_pool_addr_range>()
{
  return ::vapi_msg_id_nat64_add_del_pool_addr_range; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_pool_addr_range>>()
{
  return ::vapi_msg_id_nat64_add_del_pool_addr_range; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_pool_addr_range()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_pool_addr_range>(vapi_msg_id_nat64_add_del_pool_addr_range);
}

template <> inline vapi_msg_nat64_add_del_pool_addr_range* vapi_alloc<vapi_msg_nat64_add_del_pool_addr_range>(Connection &con)
{
  vapi_msg_nat64_add_del_pool_addr_range* result = vapi_alloc_nat64_add_del_pool_addr_range(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_add_del_pool_addr_range>;

template class Request<vapi_msg_nat64_add_del_pool_addr_range, vapi_msg_nat64_add_del_pool_addr_range_reply>;

using Nat64_add_del_pool_addr_range = Request<vapi_msg_nat64_add_del_pool_addr_range, vapi_msg_nat64_add_del_pool_addr_range_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_bib_details>(vapi_msg_nat64_bib_details *msg)
{
  vapi_msg_nat64_bib_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_bib_details>(vapi_msg_nat64_bib_details *msg)
{
  vapi_msg_nat64_bib_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_bib_details>()
{
  return ::vapi_msg_id_nat64_bib_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_bib_details>>()
{
  return ::vapi_msg_id_nat64_bib_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_bib_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_bib_details>(vapi_msg_id_nat64_bib_details);
}

template class Msg<vapi_msg_nat64_bib_details>;

using Nat64_bib_details = Msg<vapi_msg_nat64_bib_details>;
template <> inline void vapi_swap_to_be<vapi_msg_dslite_add_del_pool_addr_range_reply>(vapi_msg_dslite_add_del_pool_addr_range_reply *msg)
{
  vapi_msg_dslite_add_del_pool_addr_range_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_add_del_pool_addr_range_reply>(vapi_msg_dslite_add_del_pool_addr_range_reply *msg)
{
  vapi_msg_dslite_add_del_pool_addr_range_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_add_del_pool_addr_range_reply>()
{
  return ::vapi_msg_id_dslite_add_del_pool_addr_range_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_add_del_pool_addr_range_reply>>()
{
  return ::vapi_msg_id_dslite_add_del_pool_addr_range_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_add_del_pool_addr_range_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_add_del_pool_addr_range_reply>(vapi_msg_id_dslite_add_del_pool_addr_range_reply);
}

template class Msg<vapi_msg_dslite_add_del_pool_addr_range_reply>;

using Dslite_add_del_pool_addr_range_reply = Msg<vapi_msg_dslite_add_del_pool_addr_range_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_set_failover_reply>(vapi_msg_nat_ha_set_failover_reply *msg)
{
  vapi_msg_nat_ha_set_failover_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_set_failover_reply>(vapi_msg_nat_ha_set_failover_reply *msg)
{
  vapi_msg_nat_ha_set_failover_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_set_failover_reply>()
{
  return ::vapi_msg_id_nat_ha_set_failover_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_set_failover_reply>>()
{
  return ::vapi_msg_id_nat_ha_set_failover_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_set_failover_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_set_failover_reply>(vapi_msg_id_nat_ha_set_failover_reply);
}

template class Msg<vapi_msg_nat_ha_set_failover_reply>;

using Nat_ha_set_failover_reply = Msg<vapi_msg_nat_ha_set_failover_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat64_prefix_dump>(vapi_msg_nat64_prefix_dump *msg)
{
  vapi_msg_nat64_prefix_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_prefix_dump>(vapi_msg_nat64_prefix_dump *msg)
{
  vapi_msg_nat64_prefix_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_prefix_dump>()
{
  return ::vapi_msg_id_nat64_prefix_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_prefix_dump>>()
{
  return ::vapi_msg_id_nat64_prefix_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_prefix_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_prefix_dump>(vapi_msg_id_nat64_prefix_dump);
}

template <> inline vapi_msg_nat64_prefix_dump* vapi_alloc<vapi_msg_nat64_prefix_dump>(Connection &con)
{
  vapi_msg_nat64_prefix_dump* result = vapi_alloc_nat64_prefix_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_prefix_dump>;

template class Dump<vapi_msg_nat64_prefix_dump, vapi_msg_nat64_prefix_details>;

using Nat64_prefix_dump = Dump<vapi_msg_nat64_prefix_dump, vapi_msg_nat64_prefix_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_map_dump>(vapi_msg_nat_det_map_dump *msg)
{
  vapi_msg_nat_det_map_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_map_dump>(vapi_msg_nat_det_map_dump *msg)
{
  vapi_msg_nat_det_map_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_map_dump>()
{
  return ::vapi_msg_id_nat_det_map_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_map_dump>>()
{
  return ::vapi_msg_id_nat_det_map_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_map_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_map_dump>(vapi_msg_id_nat_det_map_dump);
}

template <> inline vapi_msg_nat_det_map_dump* vapi_alloc<vapi_msg_nat_det_map_dump>(Connection &con)
{
  vapi_msg_nat_det_map_dump* result = vapi_alloc_nat_det_map_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_det_map_dump>;

template class Dump<vapi_msg_nat_det_map_dump, vapi_msg_nat_det_map_details>;

using Nat_det_map_dump = Dump<vapi_msg_nat_det_map_dump, vapi_msg_nat_det_map_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_close_session_in_reply>(vapi_msg_nat_det_close_session_in_reply *msg)
{
  vapi_msg_nat_det_close_session_in_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_close_session_in_reply>(vapi_msg_nat_det_close_session_in_reply *msg)
{
  vapi_msg_nat_det_close_session_in_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_close_session_in_reply>()
{
  return ::vapi_msg_id_nat_det_close_session_in_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_close_session_in_reply>>()
{
  return ::vapi_msg_id_nat_det_close_session_in_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_close_session_in_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_close_session_in_reply>(vapi_msg_id_nat_det_close_session_in_reply);
}

template class Msg<vapi_msg_nat_det_close_session_in_reply>;

using Nat_det_close_session_in_reply = Msg<vapi_msg_nat_det_close_session_in_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_resync_completed_event>(vapi_msg_nat_ha_resync_completed_event *msg)
{
  vapi_msg_nat_ha_resync_completed_event_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_resync_completed_event>(vapi_msg_nat_ha_resync_completed_event *msg)
{
  vapi_msg_nat_ha_resync_completed_event_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_resync_completed_event>()
{
  return ::vapi_msg_id_nat_ha_resync_completed_event; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_resync_completed_event>>()
{
  return ::vapi_msg_id_nat_ha_resync_completed_event; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_resync_completed_event()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_resync_completed_event>(vapi_msg_id_nat_ha_resync_completed_event);
}

template class Msg<vapi_msg_nat_ha_resync_completed_event>;

using Nat_ha_resync_completed_event = Msg<vapi_msg_nat_ha_resync_completed_event>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_del_session>(vapi_msg_nat44_del_session *msg)
{
  vapi_msg_nat44_del_session_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_del_session>(vapi_msg_nat44_del_session *msg)
{
  vapi_msg_nat44_del_session_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_del_session>()
{
  return ::vapi_msg_id_nat44_del_session; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_del_session>>()
{
  return ::vapi_msg_id_nat44_del_session; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_del_session()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_del_session>(vapi_msg_id_nat44_del_session);
}

template <> inline vapi_msg_nat44_del_session* vapi_alloc<vapi_msg_nat44_del_session>(Connection &con)
{
  vapi_msg_nat44_del_session* result = vapi_alloc_nat44_del_session(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_del_session>;

template class Request<vapi_msg_nat44_del_session, vapi_msg_nat44_del_session_reply>;

using Nat44_del_session = Request<vapi_msg_nat44_del_session, vapi_msg_nat44_del_session_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_prefix>(vapi_msg_nat64_add_del_prefix *msg)
{
  vapi_msg_nat64_add_del_prefix_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_prefix>(vapi_msg_nat64_add_del_prefix *msg)
{
  vapi_msg_nat64_add_del_prefix_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_prefix>()
{
  return ::vapi_msg_id_nat64_add_del_prefix; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_prefix>>()
{
  return ::vapi_msg_id_nat64_add_del_prefix; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_prefix()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_prefix>(vapi_msg_id_nat64_add_del_prefix);
}

template <> inline vapi_msg_nat64_add_del_prefix* vapi_alloc<vapi_msg_nat64_add_del_prefix>(Connection &con)
{
  vapi_msg_nat64_add_del_prefix* result = vapi_alloc_nat64_add_del_prefix(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_add_del_prefix>;

template class Request<vapi_msg_nat64_add_del_prefix, vapi_msg_nat64_add_del_prefix_reply>;

using Nat64_add_del_prefix = Request<vapi_msg_nat64_add_del_prefix, vapi_msg_nat64_add_del_prefix_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_get_addr_and_port_alloc_alg>(vapi_msg_nat_get_addr_and_port_alloc_alg *msg)
{
  vapi_msg_nat_get_addr_and_port_alloc_alg_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_addr_and_port_alloc_alg>(vapi_msg_nat_get_addr_and_port_alloc_alg *msg)
{
  vapi_msg_nat_get_addr_and_port_alloc_alg_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_addr_and_port_alloc_alg>()
{
  return ::vapi_msg_id_nat_get_addr_and_port_alloc_alg; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_addr_and_port_alloc_alg>>()
{
  return ::vapi_msg_id_nat_get_addr_and_port_alloc_alg; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_addr_and_port_alloc_alg()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_addr_and_port_alloc_alg>(vapi_msg_id_nat_get_addr_and_port_alloc_alg);
}

template <> inline vapi_msg_nat_get_addr_and_port_alloc_alg* vapi_alloc<vapi_msg_nat_get_addr_and_port_alloc_alg>(Connection &con)
{
  vapi_msg_nat_get_addr_and_port_alloc_alg* result = vapi_alloc_nat_get_addr_and_port_alloc_alg(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_get_addr_and_port_alloc_alg>;

template class Request<vapi_msg_nat_get_addr_and_port_alloc_alg, vapi_msg_nat_get_addr_and_port_alloc_alg_reply>;

using Nat_get_addr_and_port_alloc_alg = Request<vapi_msg_nat_get_addr_and_port_alloc_alg, vapi_msg_nat_get_addr_and_port_alloc_alg_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_ha_get_failover>(vapi_msg_nat_ha_get_failover *msg)
{
  vapi_msg_nat_ha_get_failover_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_ha_get_failover>(vapi_msg_nat_ha_get_failover *msg)
{
  vapi_msg_nat_ha_get_failover_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_ha_get_failover>()
{
  return ::vapi_msg_id_nat_ha_get_failover; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_ha_get_failover>>()
{
  return ::vapi_msg_id_nat_ha_get_failover; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_ha_get_failover()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_ha_get_failover>(vapi_msg_id_nat_ha_get_failover);
}

template <> inline vapi_msg_nat_ha_get_failover* vapi_alloc<vapi_msg_nat_ha_get_failover>(Connection &con)
{
  vapi_msg_nat_ha_get_failover* result = vapi_alloc_nat_ha_get_failover(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_ha_get_failover>;

template class Request<vapi_msg_nat_ha_get_failover, vapi_msg_nat_ha_get_failover_reply>;

using Nat_ha_get_failover = Request<vapi_msg_nat_ha_get_failover, vapi_msg_nat_ha_get_failover_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat66_static_mapping_dump>(vapi_msg_nat66_static_mapping_dump *msg)
{
  vapi_msg_nat66_static_mapping_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_static_mapping_dump>(vapi_msg_nat66_static_mapping_dump *msg)
{
  vapi_msg_nat66_static_mapping_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_static_mapping_dump>()
{
  return ::vapi_msg_id_nat66_static_mapping_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_static_mapping_dump>>()
{
  return ::vapi_msg_id_nat66_static_mapping_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_static_mapping_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_static_mapping_dump>(vapi_msg_id_nat66_static_mapping_dump);
}

template <> inline vapi_msg_nat66_static_mapping_dump* vapi_alloc<vapi_msg_nat66_static_mapping_dump>(Connection &con)
{
  vapi_msg_nat66_static_mapping_dump* result = vapi_alloc_nat66_static_mapping_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat66_static_mapping_dump>;

template class Dump<vapi_msg_nat66_static_mapping_dump, vapi_msg_nat66_static_mapping_details>;

using Nat66_static_mapping_dump = Dump<vapi_msg_nat66_static_mapping_dump, vapi_msg_nat66_static_mapping_details>;

template <> inline void vapi_swap_to_be<vapi_msg_dslite_set_b4_addr>(vapi_msg_dslite_set_b4_addr *msg)
{
  vapi_msg_dslite_set_b4_addr_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_set_b4_addr>(vapi_msg_dslite_set_b4_addr *msg)
{
  vapi_msg_dslite_set_b4_addr_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_set_b4_addr>()
{
  return ::vapi_msg_id_dslite_set_b4_addr; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_set_b4_addr>>()
{
  return ::vapi_msg_id_dslite_set_b4_addr; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_set_b4_addr()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_set_b4_addr>(vapi_msg_id_dslite_set_b4_addr);
}

template <> inline vapi_msg_dslite_set_b4_addr* vapi_alloc<vapi_msg_dslite_set_b4_addr>(Connection &con)
{
  vapi_msg_dslite_set_b4_addr* result = vapi_alloc_dslite_set_b4_addr(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_dslite_set_b4_addr>;

template class Request<vapi_msg_dslite_set_b4_addr, vapi_msg_dslite_set_b4_addr_reply>;

using Dslite_set_b4_addr = Request<vapi_msg_dslite_set_b4_addr, vapi_msg_dslite_set_b4_addr_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_close_session_out>(vapi_msg_nat_det_close_session_out *msg)
{
  vapi_msg_nat_det_close_session_out_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_close_session_out>(vapi_msg_nat_det_close_session_out *msg)
{
  vapi_msg_nat_det_close_session_out_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_close_session_out>()
{
  return ::vapi_msg_id_nat_det_close_session_out; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_close_session_out>>()
{
  return ::vapi_msg_id_nat_det_close_session_out; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_close_session_out()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_close_session_out>(vapi_msg_id_nat_det_close_session_out);
}

template <> inline vapi_msg_nat_det_close_session_out* vapi_alloc<vapi_msg_nat_det_close_session_out>(Connection &con)
{
  vapi_msg_nat_det_close_session_out* result = vapi_alloc_nat_det_close_session_out(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_det_close_session_out>;

template class Request<vapi_msg_nat_det_close_session_out, vapi_msg_nat_det_close_session_out_reply>;

using Nat_det_close_session_out = Request<vapi_msg_nat_det_close_session_out, vapi_msg_nat_det_close_session_out_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat66_add_del_interface>(vapi_msg_nat66_add_del_interface *msg)
{
  vapi_msg_nat66_add_del_interface_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_add_del_interface>(vapi_msg_nat66_add_del_interface *msg)
{
  vapi_msg_nat66_add_del_interface_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_add_del_interface>()
{
  return ::vapi_msg_id_nat66_add_del_interface; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_add_del_interface>>()
{
  return ::vapi_msg_id_nat66_add_del_interface; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_add_del_interface()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_add_del_interface>(vapi_msg_id_nat66_add_del_interface);
}

template <> inline vapi_msg_nat66_add_del_interface* vapi_alloc<vapi_msg_nat66_add_del_interface>(Connection &con)
{
  vapi_msg_nat66_add_del_interface* result = vapi_alloc_nat66_add_del_interface(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat66_add_del_interface>;

template class Request<vapi_msg_nat66_add_del_interface, vapi_msg_nat66_add_del_interface_reply>;

using Nat66_add_del_interface = Request<vapi_msg_nat66_add_del_interface, vapi_msg_nat66_add_del_interface_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_static_bib>(vapi_msg_nat64_add_del_static_bib *msg)
{
  vapi_msg_nat64_add_del_static_bib_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_static_bib>(vapi_msg_nat64_add_del_static_bib *msg)
{
  vapi_msg_nat64_add_del_static_bib_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_static_bib>()
{
  return ::vapi_msg_id_nat64_add_del_static_bib; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_static_bib>>()
{
  return ::vapi_msg_id_nat64_add_del_static_bib; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_static_bib()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_static_bib>(vapi_msg_id_nat64_add_del_static_bib);
}

template <> inline vapi_msg_nat64_add_del_static_bib* vapi_alloc<vapi_msg_nat64_add_del_static_bib>(Connection &con)
{
  vapi_msg_nat64_add_del_static_bib* result = vapi_alloc_nat64_add_del_static_bib(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_add_del_static_bib>;

template class Request<vapi_msg_nat64_add_del_static_bib, vapi_msg_nat64_add_del_static_bib_reply>;

using Nat64_add_del_static_bib = Request<vapi_msg_nat64_add_del_static_bib, vapi_msg_nat64_add_del_static_bib_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_pool_addr_details>(vapi_msg_nat64_pool_addr_details *msg)
{
  vapi_msg_nat64_pool_addr_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_pool_addr_details>(vapi_msg_nat64_pool_addr_details *msg)
{
  vapi_msg_nat64_pool_addr_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_pool_addr_details>()
{
  return ::vapi_msg_id_nat64_pool_addr_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_pool_addr_details>>()
{
  return ::vapi_msg_id_nat64_pool_addr_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_pool_addr_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_pool_addr_details>(vapi_msg_id_nat64_pool_addr_details);
}

template class Msg<vapi_msg_nat64_pool_addr_details>;

using Nat64_pool_addr_details = Msg<vapi_msg_nat64_pool_addr_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_worker_details>(vapi_msg_nat_worker_details *msg)
{
  vapi_msg_nat_worker_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_worker_details>(vapi_msg_nat_worker_details *msg)
{
  vapi_msg_nat_worker_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_worker_details>()
{
  return ::vapi_msg_id_nat_worker_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_worker_details>>()
{
  return ::vapi_msg_id_nat_worker_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_worker_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_worker_details>(vapi_msg_id_nat_worker_details);
}

template class Msg<vapi_msg_nat_worker_details>;

using Nat_worker_details = Msg<vapi_msg_nat_worker_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_add_del_output_feature>(vapi_msg_nat44_interface_add_del_output_feature *msg)
{
  vapi_msg_nat44_interface_add_del_output_feature_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_add_del_output_feature>(vapi_msg_nat44_interface_add_del_output_feature *msg)
{
  vapi_msg_nat44_interface_add_del_output_feature_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_add_del_output_feature>()
{
  return ::vapi_msg_id_nat44_interface_add_del_output_feature; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_add_del_output_feature>>()
{
  return ::vapi_msg_id_nat44_interface_add_del_output_feature; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_add_del_output_feature()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_add_del_output_feature>(vapi_msg_id_nat44_interface_add_del_output_feature);
}

template <> inline vapi_msg_nat44_interface_add_del_output_feature* vapi_alloc<vapi_msg_nat44_interface_add_del_output_feature>(Connection &con)
{
  vapi_msg_nat44_interface_add_del_output_feature* result = vapi_alloc_nat44_interface_add_del_output_feature(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_interface_add_del_output_feature>;

template class Request<vapi_msg_nat44_interface_add_del_output_feature, vapi_msg_nat44_interface_add_del_output_feature_reply>;

using Nat44_interface_add_del_output_feature = Request<vapi_msg_nat44_interface_add_del_output_feature, vapi_msg_nat44_interface_add_del_output_feature_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat66_static_mapping_details>(vapi_msg_nat66_static_mapping_details *msg)
{
  vapi_msg_nat66_static_mapping_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_static_mapping_details>(vapi_msg_nat66_static_mapping_details *msg)
{
  vapi_msg_nat66_static_mapping_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_static_mapping_details>()
{
  return ::vapi_msg_id_nat66_static_mapping_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_static_mapping_details>>()
{
  return ::vapi_msg_id_nat66_static_mapping_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_static_mapping_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_static_mapping_details>(vapi_msg_id_nat66_static_mapping_details);
}

template class Msg<vapi_msg_nat66_static_mapping_details>;

using Nat66_static_mapping_details = Msg<vapi_msg_nat66_static_mapping_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_static_mapping_reply>(vapi_msg_nat44_add_del_static_mapping_reply *msg)
{
  vapi_msg_nat44_add_del_static_mapping_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_static_mapping_reply>(vapi_msg_nat44_add_del_static_mapping_reply *msg)
{
  vapi_msg_nat44_add_del_static_mapping_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_static_mapping_reply>()
{
  return ::vapi_msg_id_nat44_add_del_static_mapping_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_static_mapping_reply>>()
{
  return ::vapi_msg_id_nat44_add_del_static_mapping_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_static_mapping_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_static_mapping_reply>(vapi_msg_id_nat44_add_del_static_mapping_reply);
}

template class Msg<vapi_msg_nat44_add_del_static_mapping_reply>;

using Nat44_add_del_static_mapping_reply = Msg<vapi_msg_nat44_add_del_static_mapping_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_interface_addr_reply>(vapi_msg_nat44_add_del_interface_addr_reply *msg)
{
  vapi_msg_nat44_add_del_interface_addr_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_interface_addr_reply>(vapi_msg_nat44_add_del_interface_addr_reply *msg)
{
  vapi_msg_nat44_add_del_interface_addr_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_interface_addr_reply>()
{
  return ::vapi_msg_id_nat44_add_del_interface_addr_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_interface_addr_reply>>()
{
  return ::vapi_msg_id_nat44_add_del_interface_addr_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_interface_addr_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_interface_addr_reply>(vapi_msg_id_nat44_add_del_interface_addr_reply);
}

template class Msg<vapi_msg_nat44_add_del_interface_addr_reply>;

using Nat44_add_del_interface_addr_reply = Msg<vapi_msg_nat44_add_del_interface_addr_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat66_add_del_static_mapping>(vapi_msg_nat66_add_del_static_mapping *msg)
{
  vapi_msg_nat66_add_del_static_mapping_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_add_del_static_mapping>(vapi_msg_nat66_add_del_static_mapping *msg)
{
  vapi_msg_nat66_add_del_static_mapping_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_add_del_static_mapping>()
{
  return ::vapi_msg_id_nat66_add_del_static_mapping; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_add_del_static_mapping>>()
{
  return ::vapi_msg_id_nat66_add_del_static_mapping; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_add_del_static_mapping()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_add_del_static_mapping>(vapi_msg_id_nat66_add_del_static_mapping);
}

template <> inline vapi_msg_nat66_add_del_static_mapping* vapi_alloc<vapi_msg_nat66_add_del_static_mapping>(Connection &con)
{
  vapi_msg_nat66_add_del_static_mapping* result = vapi_alloc_nat66_add_del_static_mapping(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat66_add_del_static_mapping>;

template class Request<vapi_msg_nat66_add_del_static_mapping, vapi_msg_nat66_add_del_static_mapping_reply>;

using Nat66_add_del_static_mapping = Request<vapi_msg_nat66_add_del_static_mapping, vapi_msg_nat66_add_del_static_mapping_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_interface_addr>(vapi_msg_nat44_add_del_interface_addr *msg)
{
  vapi_msg_nat44_add_del_interface_addr_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_interface_addr>(vapi_msg_nat44_add_del_interface_addr *msg)
{
  vapi_msg_nat44_add_del_interface_addr_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_interface_addr>()
{
  return ::vapi_msg_id_nat44_add_del_interface_addr; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_interface_addr>>()
{
  return ::vapi_msg_id_nat44_add_del_interface_addr; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_interface_addr()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_interface_addr>(vapi_msg_id_nat44_add_del_interface_addr);
}

template <> inline vapi_msg_nat44_add_del_interface_addr* vapi_alloc<vapi_msg_nat44_add_del_interface_addr>(Connection &con)
{
  vapi_msg_nat44_add_del_interface_addr* result = vapi_alloc_nat44_add_del_interface_addr(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_add_del_interface_addr>;

template class Request<vapi_msg_nat44_add_del_interface_addr, vapi_msg_nat44_add_del_interface_addr_reply>;

using Nat44_add_del_interface_addr = Request<vapi_msg_nat44_add_del_interface_addr, vapi_msg_nat44_add_del_interface_addr_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat66_interface_dump>(vapi_msg_nat66_interface_dump *msg)
{
  vapi_msg_nat66_interface_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat66_interface_dump>(vapi_msg_nat66_interface_dump *msg)
{
  vapi_msg_nat66_interface_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat66_interface_dump>()
{
  return ::vapi_msg_id_nat66_interface_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat66_interface_dump>>()
{
  return ::vapi_msg_id_nat66_interface_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat66_interface_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat66_interface_dump>(vapi_msg_id_nat66_interface_dump);
}

template <> inline vapi_msg_nat66_interface_dump* vapi_alloc<vapi_msg_nat66_interface_dump>(Connection &con)
{
  vapi_msg_nat66_interface_dump* result = vapi_alloc_nat66_interface_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat66_interface_dump>;

template class Dump<vapi_msg_nat66_interface_dump, vapi_msg_nat66_interface_details>;

using Nat66_interface_dump = Dump<vapi_msg_nat66_interface_dump, vapi_msg_nat66_interface_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_det_map_details>(vapi_msg_nat_det_map_details *msg)
{
  vapi_msg_nat_det_map_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_map_details>(vapi_msg_nat_det_map_details *msg)
{
  vapi_msg_nat_det_map_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_map_details>()
{
  return ::vapi_msg_id_nat_det_map_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_map_details>>()
{
  return ::vapi_msg_id_nat_det_map_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_map_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_map_details>(vapi_msg_id_nat_det_map_details);
}

template class Msg<vapi_msg_nat_det_map_details>;

using Nat_det_map_details = Msg<vapi_msg_nat_det_map_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat64_st_dump>(vapi_msg_nat64_st_dump *msg)
{
  vapi_msg_nat64_st_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_st_dump>(vapi_msg_nat64_st_dump *msg)
{
  vapi_msg_nat64_st_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_st_dump>()
{
  return ::vapi_msg_id_nat64_st_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_st_dump>>()
{
  return ::vapi_msg_id_nat64_st_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_st_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_st_dump>(vapi_msg_id_nat64_st_dump);
}

template <> inline vapi_msg_nat64_st_dump* vapi_alloc<vapi_msg_nat64_st_dump>(Connection &con)
{
  vapi_msg_nat64_st_dump* result = vapi_alloc_nat64_st_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat64_st_dump>;

template class Dump<vapi_msg_nat64_st_dump, vapi_msg_nat64_st_details>;

using Nat64_st_dump = Dump<vapi_msg_nat64_st_dump, vapi_msg_nat64_st_details>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_set_reass_reply>(vapi_msg_nat_set_reass_reply *msg)
{
  vapi_msg_nat_set_reass_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_reass_reply>(vapi_msg_nat_set_reass_reply *msg)
{
  vapi_msg_nat_set_reass_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_reass_reply>()
{
  return ::vapi_msg_id_nat_set_reass_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_reass_reply>>()
{
  return ::vapi_msg_id_nat_set_reass_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_reass_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_reass_reply>(vapi_msg_id_nat_set_reass_reply);
}

template class Msg<vapi_msg_nat_set_reass_reply>;

using Nat_set_reass_reply = Msg<vapi_msg_nat_set_reass_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_lb_static_mapping_details>(vapi_msg_nat44_lb_static_mapping_details *msg)
{
  vapi_msg_nat44_lb_static_mapping_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_lb_static_mapping_details>(vapi_msg_nat44_lb_static_mapping_details *msg)
{
  vapi_msg_nat44_lb_static_mapping_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_lb_static_mapping_details>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_lb_static_mapping_details>>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_lb_static_mapping_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_lb_static_mapping_details>(vapi_msg_id_nat44_lb_static_mapping_details);
}

template class Msg<vapi_msg_nat44_lb_static_mapping_details>;

using Nat44_lb_static_mapping_details = Msg<vapi_msg_nat44_lb_static_mapping_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_identity_mapping>(vapi_msg_nat44_add_del_identity_mapping *msg)
{
  vapi_msg_nat44_add_del_identity_mapping_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_identity_mapping>(vapi_msg_nat44_add_del_identity_mapping *msg)
{
  vapi_msg_nat44_add_del_identity_mapping_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_identity_mapping>()
{
  return ::vapi_msg_id_nat44_add_del_identity_mapping; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_identity_mapping>>()
{
  return ::vapi_msg_id_nat44_add_del_identity_mapping; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_identity_mapping()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_identity_mapping>(vapi_msg_id_nat44_add_del_identity_mapping);
}

template <> inline vapi_msg_nat44_add_del_identity_mapping* vapi_alloc<vapi_msg_nat44_add_del_identity_mapping>(Connection &con)
{
  vapi_msg_nat44_add_del_identity_mapping* result = vapi_alloc_nat44_add_del_identity_mapping(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_add_del_identity_mapping>;

template class Request<vapi_msg_nat44_add_del_identity_mapping, vapi_msg_nat44_add_del_identity_mapping_reply>;

using Nat44_add_del_identity_mapping = Request<vapi_msg_nat44_add_del_identity_mapping, vapi_msg_nat44_add_del_identity_mapping_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_dslite_set_aftr_addr_reply>(vapi_msg_dslite_set_aftr_addr_reply *msg)
{
  vapi_msg_dslite_set_aftr_addr_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_set_aftr_addr_reply>(vapi_msg_dslite_set_aftr_addr_reply *msg)
{
  vapi_msg_dslite_set_aftr_addr_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_set_aftr_addr_reply>()
{
  return ::vapi_msg_id_dslite_set_aftr_addr_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_set_aftr_addr_reply>>()
{
  return ::vapi_msg_id_dslite_set_aftr_addr_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_set_aftr_addr_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_set_aftr_addr_reply>(vapi_msg_id_dslite_set_aftr_addr_reply);
}

template class Msg<vapi_msg_dslite_set_aftr_addr_reply>;

using Dslite_set_aftr_addr_reply = Msg<vapi_msg_dslite_set_aftr_addr_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_set_addr_and_port_alloc_alg_reply>(vapi_msg_nat_set_addr_and_port_alloc_alg_reply *msg)
{
  vapi_msg_nat_set_addr_and_port_alloc_alg_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_addr_and_port_alloc_alg_reply>(vapi_msg_nat_set_addr_and_port_alloc_alg_reply *msg)
{
  vapi_msg_nat_set_addr_and_port_alloc_alg_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_addr_and_port_alloc_alg_reply>()
{
  return ::vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_addr_and_port_alloc_alg_reply>>()
{
  return ::vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_addr_and_port_alloc_alg_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_addr_and_port_alloc_alg_reply>(vapi_msg_id_nat_set_addr_and_port_alloc_alg_reply);
}

template class Msg<vapi_msg_nat_set_addr_and_port_alloc_alg_reply>;

using Nat_set_addr_and_port_alloc_alg_reply = Msg<vapi_msg_nat_set_addr_and_port_alloc_alg_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_dslite_set_aftr_addr>(vapi_msg_dslite_set_aftr_addr *msg)
{
  vapi_msg_dslite_set_aftr_addr_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_set_aftr_addr>(vapi_msg_dslite_set_aftr_addr *msg)
{
  vapi_msg_dslite_set_aftr_addr_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_set_aftr_addr>()
{
  return ::vapi_msg_id_dslite_set_aftr_addr; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_set_aftr_addr>>()
{
  return ::vapi_msg_id_dslite_set_aftr_addr; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_set_aftr_addr()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_set_aftr_addr>(vapi_msg_id_dslite_set_aftr_addr);
}

template <> inline vapi_msg_dslite_set_aftr_addr* vapi_alloc<vapi_msg_dslite_set_aftr_addr>(Connection &con)
{
  vapi_msg_dslite_set_aftr_addr* result = vapi_alloc_dslite_set_aftr_addr(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_dslite_set_aftr_addr>;

template class Request<vapi_msg_dslite_set_aftr_addr, vapi_msg_dslite_set_aftr_addr_reply>;

using Dslite_set_aftr_addr = Request<vapi_msg_dslite_set_aftr_addr, vapi_msg_dslite_set_aftr_addr_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat64_add_del_interface_addr_reply>(vapi_msg_nat64_add_del_interface_addr_reply *msg)
{
  vapi_msg_nat64_add_del_interface_addr_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat64_add_del_interface_addr_reply>(vapi_msg_nat64_add_del_interface_addr_reply *msg)
{
  vapi_msg_nat64_add_del_interface_addr_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat64_add_del_interface_addr_reply>()
{
  return ::vapi_msg_id_nat64_add_del_interface_addr_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat64_add_del_interface_addr_reply>>()
{
  return ::vapi_msg_id_nat64_add_del_interface_addr_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat64_add_del_interface_addr_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat64_add_del_interface_addr_reply>(vapi_msg_id_nat64_add_del_interface_addr_reply);
}

template class Msg<vapi_msg_nat64_add_del_interface_addr_reply>;

using Nat64_add_del_interface_addr_reply = Msg<vapi_msg_nat64_add_del_interface_addr_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_details>(vapi_msg_nat44_interface_details *msg)
{
  vapi_msg_nat44_interface_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_details>(vapi_msg_nat44_interface_details *msg)
{
  vapi_msg_nat44_interface_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_details>()
{
  return ::vapi_msg_id_nat44_interface_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_details>>()
{
  return ::vapi_msg_id_nat44_interface_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_details>(vapi_msg_id_nat44_interface_details);
}

template class Msg<vapi_msg_nat44_interface_details>;

using Nat44_interface_details = Msg<vapi_msg_nat44_interface_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_interface_addr_details>(vapi_msg_nat44_interface_addr_details *msg)
{
  vapi_msg_nat44_interface_addr_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_interface_addr_details>(vapi_msg_nat44_interface_addr_details *msg)
{
  vapi_msg_nat44_interface_addr_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_interface_addr_details>()
{
  return ::vapi_msg_id_nat44_interface_addr_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_interface_addr_details>>()
{
  return ::vapi_msg_id_nat44_interface_addr_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_interface_addr_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_interface_addr_details>(vapi_msg_id_nat44_interface_addr_details);
}

template class Msg<vapi_msg_nat44_interface_addr_details>;

using Nat44_interface_addr_details = Msg<vapi_msg_nat44_interface_addr_details>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_address_range>(vapi_msg_nat44_add_del_address_range *msg)
{
  vapi_msg_nat44_add_del_address_range_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_address_range>(vapi_msg_nat44_add_del_address_range *msg)
{
  vapi_msg_nat44_add_del_address_range_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_address_range>()
{
  return ::vapi_msg_id_nat44_add_del_address_range; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_address_range>>()
{
  return ::vapi_msg_id_nat44_add_del_address_range; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_address_range()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_address_range>(vapi_msg_id_nat44_add_del_address_range);
}

template <> inline vapi_msg_nat44_add_del_address_range* vapi_alloc<vapi_msg_nat44_add_del_address_range>(Connection &con)
{
  vapi_msg_nat44_add_del_address_range* result = vapi_alloc_nat44_add_del_address_range(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_add_del_address_range>;

template class Request<vapi_msg_nat44_add_del_address_range, vapi_msg_nat44_add_del_address_range_reply>;

using Nat44_add_del_address_range = Request<vapi_msg_nat44_add_del_address_range, vapi_msg_nat44_add_del_address_range_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_get_mss_clamping_reply>(vapi_msg_nat_get_mss_clamping_reply *msg)
{
  vapi_msg_nat_get_mss_clamping_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_get_mss_clamping_reply>(vapi_msg_nat_get_mss_clamping_reply *msg)
{
  vapi_msg_nat_get_mss_clamping_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_get_mss_clamping_reply>()
{
  return ::vapi_msg_id_nat_get_mss_clamping_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_get_mss_clamping_reply>>()
{
  return ::vapi_msg_id_nat_get_mss_clamping_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_get_mss_clamping_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_get_mss_clamping_reply>(vapi_msg_id_nat_get_mss_clamping_reply);
}

template class Msg<vapi_msg_nat_get_mss_clamping_reply>;

using Nat_get_mss_clamping_reply = Msg<vapi_msg_nat_get_mss_clamping_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_det_reverse>(vapi_msg_nat_det_reverse *msg)
{
  vapi_msg_nat_det_reverse_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_reverse>(vapi_msg_nat_det_reverse *msg)
{
  vapi_msg_nat_det_reverse_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_reverse>()
{
  return ::vapi_msg_id_nat_det_reverse; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_reverse>>()
{
  return ::vapi_msg_id_nat_det_reverse; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_reverse()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_reverse>(vapi_msg_id_nat_det_reverse);
}

template <> inline vapi_msg_nat_det_reverse* vapi_alloc<vapi_msg_nat_det_reverse>(Connection &con)
{
  vapi_msg_nat_det_reverse* result = vapi_alloc_nat_det_reverse(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat_det_reverse>;

template class Request<vapi_msg_nat_det_reverse, vapi_msg_nat_det_reverse_reply>;

using Nat_det_reverse = Request<vapi_msg_nat_det_reverse, vapi_msg_nat_det_reverse_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat_set_workers_reply>(vapi_msg_nat_set_workers_reply *msg)
{
  vapi_msg_nat_set_workers_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_set_workers_reply>(vapi_msg_nat_set_workers_reply *msg)
{
  vapi_msg_nat_set_workers_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_set_workers_reply>()
{
  return ::vapi_msg_id_nat_set_workers_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_set_workers_reply>>()
{
  return ::vapi_msg_id_nat_set_workers_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_set_workers_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_set_workers_reply>(vapi_msg_id_nat_set_workers_reply);
}

template class Msg<vapi_msg_nat_set_workers_reply>;

using Nat_set_workers_reply = Msg<vapi_msg_nat_set_workers_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat_det_forward_reply>(vapi_msg_nat_det_forward_reply *msg)
{
  vapi_msg_nat_det_forward_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat_det_forward_reply>(vapi_msg_nat_det_forward_reply *msg)
{
  vapi_msg_nat_det_forward_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat_det_forward_reply>()
{
  return ::vapi_msg_id_nat_det_forward_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat_det_forward_reply>>()
{
  return ::vapi_msg_id_nat_det_forward_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat_det_forward_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat_det_forward_reply>(vapi_msg_id_nat_det_forward_reply);
}

template class Msg<vapi_msg_nat_det_forward_reply>;

using Nat_det_forward_reply = Msg<vapi_msg_nat_det_forward_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_lb_static_mapping_add_del_local_reply>(vapi_msg_nat44_lb_static_mapping_add_del_local_reply *msg)
{
  vapi_msg_nat44_lb_static_mapping_add_del_local_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_lb_static_mapping_add_del_local_reply>(vapi_msg_nat44_lb_static_mapping_add_del_local_reply *msg)
{
  vapi_msg_nat44_lb_static_mapping_add_del_local_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_lb_static_mapping_add_del_local_reply>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_lb_static_mapping_add_del_local_reply>>()
{
  return ::vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_lb_static_mapping_add_del_local_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_lb_static_mapping_add_del_local_reply>(vapi_msg_id_nat44_lb_static_mapping_add_del_local_reply);
}

template class Msg<vapi_msg_nat44_lb_static_mapping_add_del_local_reply>;

using Nat44_lb_static_mapping_add_del_local_reply = Msg<vapi_msg_nat44_lb_static_mapping_add_del_local_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_nat44_add_del_static_mapping>(vapi_msg_nat44_add_del_static_mapping *msg)
{
  vapi_msg_nat44_add_del_static_mapping_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_add_del_static_mapping>(vapi_msg_nat44_add_del_static_mapping *msg)
{
  vapi_msg_nat44_add_del_static_mapping_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_add_del_static_mapping>()
{
  return ::vapi_msg_id_nat44_add_del_static_mapping; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_add_del_static_mapping>>()
{
  return ::vapi_msg_id_nat44_add_del_static_mapping; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_add_del_static_mapping()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_add_del_static_mapping>(vapi_msg_id_nat44_add_del_static_mapping);
}

template <> inline vapi_msg_nat44_add_del_static_mapping* vapi_alloc<vapi_msg_nat44_add_del_static_mapping>(Connection &con)
{
  vapi_msg_nat44_add_del_static_mapping* result = vapi_alloc_nat44_add_del_static_mapping(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_add_del_static_mapping>;

template class Request<vapi_msg_nat44_add_del_static_mapping, vapi_msg_nat44_add_del_static_mapping_reply>;

using Nat44_add_del_static_mapping = Request<vapi_msg_nat44_add_del_static_mapping, vapi_msg_nat44_add_del_static_mapping_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_dslite_get_aftr_addr>(vapi_msg_dslite_get_aftr_addr *msg)
{
  vapi_msg_dslite_get_aftr_addr_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_dslite_get_aftr_addr>(vapi_msg_dslite_get_aftr_addr *msg)
{
  vapi_msg_dslite_get_aftr_addr_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_dslite_get_aftr_addr>()
{
  return ::vapi_msg_id_dslite_get_aftr_addr; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_dslite_get_aftr_addr>>()
{
  return ::vapi_msg_id_dslite_get_aftr_addr; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_dslite_get_aftr_addr()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_dslite_get_aftr_addr>(vapi_msg_id_dslite_get_aftr_addr);
}

template <> inline vapi_msg_dslite_get_aftr_addr* vapi_alloc<vapi_msg_dslite_get_aftr_addr>(Connection &con)
{
  vapi_msg_dslite_get_aftr_addr* result = vapi_alloc_dslite_get_aftr_addr(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_dslite_get_aftr_addr>;

template class Request<vapi_msg_dslite_get_aftr_addr, vapi_msg_dslite_get_aftr_addr_reply>;

using Dslite_get_aftr_addr = Request<vapi_msg_dslite_get_aftr_addr, vapi_msg_dslite_get_aftr_addr_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_nat44_forwarding_enable_disable>(vapi_msg_nat44_forwarding_enable_disable *msg)
{
  vapi_msg_nat44_forwarding_enable_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_nat44_forwarding_enable_disable>(vapi_msg_nat44_forwarding_enable_disable *msg)
{
  vapi_msg_nat44_forwarding_enable_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_nat44_forwarding_enable_disable>()
{
  return ::vapi_msg_id_nat44_forwarding_enable_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_nat44_forwarding_enable_disable>>()
{
  return ::vapi_msg_id_nat44_forwarding_enable_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_nat44_forwarding_enable_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_nat44_forwarding_enable_disable>(vapi_msg_id_nat44_forwarding_enable_disable);
}

template <> inline vapi_msg_nat44_forwarding_enable_disable* vapi_alloc<vapi_msg_nat44_forwarding_enable_disable>(Connection &con)
{
  vapi_msg_nat44_forwarding_enable_disable* result = vapi_alloc_nat44_forwarding_enable_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_nat44_forwarding_enable_disable>;

template class Request<vapi_msg_nat44_forwarding_enable_disable, vapi_msg_nat44_forwarding_enable_disable_reply>;

using Nat44_forwarding_enable_disable = Request<vapi_msg_nat44_forwarding_enable_disable, vapi_msg_nat44_forwarding_enable_disable_reply>;

}
#endif
