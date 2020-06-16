#ifndef __included_hpp_vxlan_gbp_api_json
#define __included_hpp_vxlan_gbp_api_json

#include <vapi/vapi.hpp>
#include <vapi/vxlan_gbp.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_vxlan_gbp_tunnel_add_del>(vapi_msg_vxlan_gbp_tunnel_add_del *msg)
{
  vapi_msg_vxlan_gbp_tunnel_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_vxlan_gbp_tunnel_add_del>(vapi_msg_vxlan_gbp_tunnel_add_del *msg)
{
  vapi_msg_vxlan_gbp_tunnel_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_vxlan_gbp_tunnel_add_del>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_vxlan_gbp_tunnel_add_del>>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_vxlan_gbp_tunnel_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_vxlan_gbp_tunnel_add_del>(vapi_msg_id_vxlan_gbp_tunnel_add_del);
}

template <> inline vapi_msg_vxlan_gbp_tunnel_add_del* vapi_alloc<vapi_msg_vxlan_gbp_tunnel_add_del>(Connection &con)
{
  vapi_msg_vxlan_gbp_tunnel_add_del* result = vapi_alloc_vxlan_gbp_tunnel_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_vxlan_gbp_tunnel_add_del>;

template class Request<vapi_msg_vxlan_gbp_tunnel_add_del, vapi_msg_vxlan_gbp_tunnel_add_del_reply>;

using Vxlan_gbp_tunnel_add_del = Request<vapi_msg_vxlan_gbp_tunnel_add_del, vapi_msg_vxlan_gbp_tunnel_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_vxlan_gbp_tunnel_dump>(vapi_msg_vxlan_gbp_tunnel_dump *msg)
{
  vapi_msg_vxlan_gbp_tunnel_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_vxlan_gbp_tunnel_dump>(vapi_msg_vxlan_gbp_tunnel_dump *msg)
{
  vapi_msg_vxlan_gbp_tunnel_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_vxlan_gbp_tunnel_dump>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_vxlan_gbp_tunnel_dump>>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_vxlan_gbp_tunnel_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_vxlan_gbp_tunnel_dump>(vapi_msg_id_vxlan_gbp_tunnel_dump);
}

template <> inline vapi_msg_vxlan_gbp_tunnel_dump* vapi_alloc<vapi_msg_vxlan_gbp_tunnel_dump>(Connection &con)
{
  vapi_msg_vxlan_gbp_tunnel_dump* result = vapi_alloc_vxlan_gbp_tunnel_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_vxlan_gbp_tunnel_dump>;

template class Dump<vapi_msg_vxlan_gbp_tunnel_dump, vapi_msg_vxlan_gbp_tunnel_details>;

using Vxlan_gbp_tunnel_dump = Dump<vapi_msg_vxlan_gbp_tunnel_dump, vapi_msg_vxlan_gbp_tunnel_details>;

template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_set_vxlan_gbp_bypass>(vapi_msg_sw_interface_set_vxlan_gbp_bypass *msg)
{
  vapi_msg_sw_interface_set_vxlan_gbp_bypass_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_set_vxlan_gbp_bypass>(vapi_msg_sw_interface_set_vxlan_gbp_bypass *msg)
{
  vapi_msg_sw_interface_set_vxlan_gbp_bypass_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_set_vxlan_gbp_bypass>()
{
  return ::vapi_msg_id_sw_interface_set_vxlan_gbp_bypass; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_set_vxlan_gbp_bypass>>()
{
  return ::vapi_msg_id_sw_interface_set_vxlan_gbp_bypass; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_set_vxlan_gbp_bypass()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_set_vxlan_gbp_bypass>(vapi_msg_id_sw_interface_set_vxlan_gbp_bypass);
}

template <> inline vapi_msg_sw_interface_set_vxlan_gbp_bypass* vapi_alloc<vapi_msg_sw_interface_set_vxlan_gbp_bypass>(Connection &con)
{
  vapi_msg_sw_interface_set_vxlan_gbp_bypass* result = vapi_alloc_sw_interface_set_vxlan_gbp_bypass(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sw_interface_set_vxlan_gbp_bypass>;

template class Request<vapi_msg_sw_interface_set_vxlan_gbp_bypass, vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>;

using Sw_interface_set_vxlan_gbp_bypass = Request<vapi_msg_sw_interface_set_vxlan_gbp_bypass, vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>(vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply *msg)
{
  vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>(vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply *msg)
{
  vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>()
{
  return ::vapi_msg_id_sw_interface_set_vxlan_gbp_bypass_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>>()
{
  return ::vapi_msg_id_sw_interface_set_vxlan_gbp_bypass_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sw_interface_set_vxlan_gbp_bypass_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>(vapi_msg_id_sw_interface_set_vxlan_gbp_bypass_reply);
}

template class Msg<vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>;

using Sw_interface_set_vxlan_gbp_bypass_reply = Msg<vapi_msg_sw_interface_set_vxlan_gbp_bypass_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_vxlan_gbp_tunnel_details>(vapi_msg_vxlan_gbp_tunnel_details *msg)
{
  vapi_msg_vxlan_gbp_tunnel_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_vxlan_gbp_tunnel_details>(vapi_msg_vxlan_gbp_tunnel_details *msg)
{
  vapi_msg_vxlan_gbp_tunnel_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_vxlan_gbp_tunnel_details>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_vxlan_gbp_tunnel_details>>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_vxlan_gbp_tunnel_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_vxlan_gbp_tunnel_details>(vapi_msg_id_vxlan_gbp_tunnel_details);
}

template class Msg<vapi_msg_vxlan_gbp_tunnel_details>;

using Vxlan_gbp_tunnel_details = Msg<vapi_msg_vxlan_gbp_tunnel_details>;
template <> inline void vapi_swap_to_be<vapi_msg_vxlan_gbp_tunnel_add_del_reply>(vapi_msg_vxlan_gbp_tunnel_add_del_reply *msg)
{
  vapi_msg_vxlan_gbp_tunnel_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_vxlan_gbp_tunnel_add_del_reply>(vapi_msg_vxlan_gbp_tunnel_add_del_reply *msg)
{
  vapi_msg_vxlan_gbp_tunnel_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_vxlan_gbp_tunnel_add_del_reply>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_vxlan_gbp_tunnel_add_del_reply>>()
{
  return ::vapi_msg_id_vxlan_gbp_tunnel_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_vxlan_gbp_tunnel_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_vxlan_gbp_tunnel_add_del_reply>(vapi_msg_id_vxlan_gbp_tunnel_add_del_reply);
}

template class Msg<vapi_msg_vxlan_gbp_tunnel_add_del_reply>;

using Vxlan_gbp_tunnel_add_del_reply = Msg<vapi_msg_vxlan_gbp_tunnel_add_del_reply>;
}
#endif
