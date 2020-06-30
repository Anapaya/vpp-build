#ifndef __included_hpp_gbp_api_json
#define __included_hpp_gbp_api_json

#include <vapi/vapi.hpp>
#include <vapi/gbp.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_gbp_bridge_domain_add>(vapi_msg_gbp_bridge_domain_add *msg)
{
  vapi_msg_gbp_bridge_domain_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_bridge_domain_add>(vapi_msg_gbp_bridge_domain_add *msg)
{
  vapi_msg_gbp_bridge_domain_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_bridge_domain_add>()
{
  return ::vapi_msg_id_gbp_bridge_domain_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_bridge_domain_add>>()
{
  return ::vapi_msg_id_gbp_bridge_domain_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_bridge_domain_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_bridge_domain_add>(vapi_msg_id_gbp_bridge_domain_add);
}

template <> inline vapi_msg_gbp_bridge_domain_add* vapi_alloc<vapi_msg_gbp_bridge_domain_add>(Connection &con)
{
  vapi_msg_gbp_bridge_domain_add* result = vapi_alloc_gbp_bridge_domain_add(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_bridge_domain_add>;

template class Request<vapi_msg_gbp_bridge_domain_add, vapi_msg_gbp_bridge_domain_add_reply>;

using Gbp_bridge_domain_add = Request<vapi_msg_gbp_bridge_domain_add, vapi_msg_gbp_bridge_domain_add_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_bridge_domain_add_reply>(vapi_msg_gbp_bridge_domain_add_reply *msg)
{
  vapi_msg_gbp_bridge_domain_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_bridge_domain_add_reply>(vapi_msg_gbp_bridge_domain_add_reply *msg)
{
  vapi_msg_gbp_bridge_domain_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_bridge_domain_add_reply>()
{
  return ::vapi_msg_id_gbp_bridge_domain_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_bridge_domain_add_reply>>()
{
  return ::vapi_msg_id_gbp_bridge_domain_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_bridge_domain_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_bridge_domain_add_reply>(vapi_msg_id_gbp_bridge_domain_add_reply);
}

template class Msg<vapi_msg_gbp_bridge_domain_add_reply>;

using Gbp_bridge_domain_add_reply = Msg<vapi_msg_gbp_bridge_domain_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_bridge_domain_del>(vapi_msg_gbp_bridge_domain_del *msg)
{
  vapi_msg_gbp_bridge_domain_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_bridge_domain_del>(vapi_msg_gbp_bridge_domain_del *msg)
{
  vapi_msg_gbp_bridge_domain_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_bridge_domain_del>()
{
  return ::vapi_msg_id_gbp_bridge_domain_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_bridge_domain_del>>()
{
  return ::vapi_msg_id_gbp_bridge_domain_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_bridge_domain_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_bridge_domain_del>(vapi_msg_id_gbp_bridge_domain_del);
}

template <> inline vapi_msg_gbp_bridge_domain_del* vapi_alloc<vapi_msg_gbp_bridge_domain_del>(Connection &con)
{
  vapi_msg_gbp_bridge_domain_del* result = vapi_alloc_gbp_bridge_domain_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_bridge_domain_del>;

template class Request<vapi_msg_gbp_bridge_domain_del, vapi_msg_gbp_bridge_domain_del_reply>;

using Gbp_bridge_domain_del = Request<vapi_msg_gbp_bridge_domain_del, vapi_msg_gbp_bridge_domain_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_bridge_domain_del_reply>(vapi_msg_gbp_bridge_domain_del_reply *msg)
{
  vapi_msg_gbp_bridge_domain_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_bridge_domain_del_reply>(vapi_msg_gbp_bridge_domain_del_reply *msg)
{
  vapi_msg_gbp_bridge_domain_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_bridge_domain_del_reply>()
{
  return ::vapi_msg_id_gbp_bridge_domain_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_bridge_domain_del_reply>>()
{
  return ::vapi_msg_id_gbp_bridge_domain_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_bridge_domain_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_bridge_domain_del_reply>(vapi_msg_id_gbp_bridge_domain_del_reply);
}

template class Msg<vapi_msg_gbp_bridge_domain_del_reply>;

using Gbp_bridge_domain_del_reply = Msg<vapi_msg_gbp_bridge_domain_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_bridge_domain_dump>(vapi_msg_gbp_bridge_domain_dump *msg)
{
  vapi_msg_gbp_bridge_domain_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_bridge_domain_dump>(vapi_msg_gbp_bridge_domain_dump *msg)
{
  vapi_msg_gbp_bridge_domain_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_bridge_domain_dump>()
{
  return ::vapi_msg_id_gbp_bridge_domain_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_bridge_domain_dump>>()
{
  return ::vapi_msg_id_gbp_bridge_domain_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_bridge_domain_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_bridge_domain_dump>(vapi_msg_id_gbp_bridge_domain_dump);
}

template <> inline vapi_msg_gbp_bridge_domain_dump* vapi_alloc<vapi_msg_gbp_bridge_domain_dump>(Connection &con)
{
  vapi_msg_gbp_bridge_domain_dump* result = vapi_alloc_gbp_bridge_domain_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_bridge_domain_dump>;

template class Dump<vapi_msg_gbp_bridge_domain_dump, vapi_msg_gbp_bridge_domain_details>;

using Gbp_bridge_domain_dump = Dump<vapi_msg_gbp_bridge_domain_dump, vapi_msg_gbp_bridge_domain_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_bridge_domain_details>(vapi_msg_gbp_bridge_domain_details *msg)
{
  vapi_msg_gbp_bridge_domain_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_bridge_domain_details>(vapi_msg_gbp_bridge_domain_details *msg)
{
  vapi_msg_gbp_bridge_domain_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_bridge_domain_details>()
{
  return ::vapi_msg_id_gbp_bridge_domain_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_bridge_domain_details>>()
{
  return ::vapi_msg_id_gbp_bridge_domain_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_bridge_domain_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_bridge_domain_details>(vapi_msg_id_gbp_bridge_domain_details);
}

template class Msg<vapi_msg_gbp_bridge_domain_details>;

using Gbp_bridge_domain_details = Msg<vapi_msg_gbp_bridge_domain_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_route_domain_add>(vapi_msg_gbp_route_domain_add *msg)
{
  vapi_msg_gbp_route_domain_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_route_domain_add>(vapi_msg_gbp_route_domain_add *msg)
{
  vapi_msg_gbp_route_domain_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_route_domain_add>()
{
  return ::vapi_msg_id_gbp_route_domain_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_route_domain_add>>()
{
  return ::vapi_msg_id_gbp_route_domain_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_route_domain_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_route_domain_add>(vapi_msg_id_gbp_route_domain_add);
}

template <> inline vapi_msg_gbp_route_domain_add* vapi_alloc<vapi_msg_gbp_route_domain_add>(Connection &con)
{
  vapi_msg_gbp_route_domain_add* result = vapi_alloc_gbp_route_domain_add(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_route_domain_add>;

template class Request<vapi_msg_gbp_route_domain_add, vapi_msg_gbp_route_domain_add_reply>;

using Gbp_route_domain_add = Request<vapi_msg_gbp_route_domain_add, vapi_msg_gbp_route_domain_add_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_route_domain_add_reply>(vapi_msg_gbp_route_domain_add_reply *msg)
{
  vapi_msg_gbp_route_domain_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_route_domain_add_reply>(vapi_msg_gbp_route_domain_add_reply *msg)
{
  vapi_msg_gbp_route_domain_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_route_domain_add_reply>()
{
  return ::vapi_msg_id_gbp_route_domain_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_route_domain_add_reply>>()
{
  return ::vapi_msg_id_gbp_route_domain_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_route_domain_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_route_domain_add_reply>(vapi_msg_id_gbp_route_domain_add_reply);
}

template class Msg<vapi_msg_gbp_route_domain_add_reply>;

using Gbp_route_domain_add_reply = Msg<vapi_msg_gbp_route_domain_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_route_domain_del>(vapi_msg_gbp_route_domain_del *msg)
{
  vapi_msg_gbp_route_domain_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_route_domain_del>(vapi_msg_gbp_route_domain_del *msg)
{
  vapi_msg_gbp_route_domain_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_route_domain_del>()
{
  return ::vapi_msg_id_gbp_route_domain_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_route_domain_del>>()
{
  return ::vapi_msg_id_gbp_route_domain_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_route_domain_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_route_domain_del>(vapi_msg_id_gbp_route_domain_del);
}

template <> inline vapi_msg_gbp_route_domain_del* vapi_alloc<vapi_msg_gbp_route_domain_del>(Connection &con)
{
  vapi_msg_gbp_route_domain_del* result = vapi_alloc_gbp_route_domain_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_route_domain_del>;

template class Request<vapi_msg_gbp_route_domain_del, vapi_msg_gbp_route_domain_del_reply>;

using Gbp_route_domain_del = Request<vapi_msg_gbp_route_domain_del, vapi_msg_gbp_route_domain_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_route_domain_del_reply>(vapi_msg_gbp_route_domain_del_reply *msg)
{
  vapi_msg_gbp_route_domain_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_route_domain_del_reply>(vapi_msg_gbp_route_domain_del_reply *msg)
{
  vapi_msg_gbp_route_domain_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_route_domain_del_reply>()
{
  return ::vapi_msg_id_gbp_route_domain_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_route_domain_del_reply>>()
{
  return ::vapi_msg_id_gbp_route_domain_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_route_domain_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_route_domain_del_reply>(vapi_msg_id_gbp_route_domain_del_reply);
}

template class Msg<vapi_msg_gbp_route_domain_del_reply>;

using Gbp_route_domain_del_reply = Msg<vapi_msg_gbp_route_domain_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_route_domain_dump>(vapi_msg_gbp_route_domain_dump *msg)
{
  vapi_msg_gbp_route_domain_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_route_domain_dump>(vapi_msg_gbp_route_domain_dump *msg)
{
  vapi_msg_gbp_route_domain_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_route_domain_dump>()
{
  return ::vapi_msg_id_gbp_route_domain_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_route_domain_dump>>()
{
  return ::vapi_msg_id_gbp_route_domain_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_route_domain_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_route_domain_dump>(vapi_msg_id_gbp_route_domain_dump);
}

template <> inline vapi_msg_gbp_route_domain_dump* vapi_alloc<vapi_msg_gbp_route_domain_dump>(Connection &con)
{
  vapi_msg_gbp_route_domain_dump* result = vapi_alloc_gbp_route_domain_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_route_domain_dump>;

template class Dump<vapi_msg_gbp_route_domain_dump, vapi_msg_gbp_route_domain_details>;

using Gbp_route_domain_dump = Dump<vapi_msg_gbp_route_domain_dump, vapi_msg_gbp_route_domain_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_route_domain_details>(vapi_msg_gbp_route_domain_details *msg)
{
  vapi_msg_gbp_route_domain_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_route_domain_details>(vapi_msg_gbp_route_domain_details *msg)
{
  vapi_msg_gbp_route_domain_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_route_domain_details>()
{
  return ::vapi_msg_id_gbp_route_domain_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_route_domain_details>>()
{
  return ::vapi_msg_id_gbp_route_domain_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_route_domain_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_route_domain_details>(vapi_msg_id_gbp_route_domain_details);
}

template class Msg<vapi_msg_gbp_route_domain_details>;

using Gbp_route_domain_details = Msg<vapi_msg_gbp_route_domain_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_add>(vapi_msg_gbp_endpoint_add *msg)
{
  vapi_msg_gbp_endpoint_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_add>(vapi_msg_gbp_endpoint_add *msg)
{
  vapi_msg_gbp_endpoint_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_add>()
{
  return ::vapi_msg_id_gbp_endpoint_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_add>>()
{
  return ::vapi_msg_id_gbp_endpoint_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_add>(vapi_msg_id_gbp_endpoint_add);
}

template <> inline vapi_msg_gbp_endpoint_add* vapi_alloc<vapi_msg_gbp_endpoint_add, size_t>(Connection &con, size_t endpoint_ips_array_size)
{
  vapi_msg_gbp_endpoint_add* result = vapi_alloc_gbp_endpoint_add(con.vapi_ctx, endpoint_ips_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_endpoint_add>;

template class Request<vapi_msg_gbp_endpoint_add, vapi_msg_gbp_endpoint_add_reply, size_t>;

using Gbp_endpoint_add = Request<vapi_msg_gbp_endpoint_add, vapi_msg_gbp_endpoint_add_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_add_reply>(vapi_msg_gbp_endpoint_add_reply *msg)
{
  vapi_msg_gbp_endpoint_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_add_reply>(vapi_msg_gbp_endpoint_add_reply *msg)
{
  vapi_msg_gbp_endpoint_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_add_reply>()
{
  return ::vapi_msg_id_gbp_endpoint_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_add_reply>>()
{
  return ::vapi_msg_id_gbp_endpoint_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_add_reply>(vapi_msg_id_gbp_endpoint_add_reply);
}

template class Msg<vapi_msg_gbp_endpoint_add_reply>;

using Gbp_endpoint_add_reply = Msg<vapi_msg_gbp_endpoint_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_del>(vapi_msg_gbp_endpoint_del *msg)
{
  vapi_msg_gbp_endpoint_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_del>(vapi_msg_gbp_endpoint_del *msg)
{
  vapi_msg_gbp_endpoint_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_del>()
{
  return ::vapi_msg_id_gbp_endpoint_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_del>>()
{
  return ::vapi_msg_id_gbp_endpoint_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_del>(vapi_msg_id_gbp_endpoint_del);
}

template <> inline vapi_msg_gbp_endpoint_del* vapi_alloc<vapi_msg_gbp_endpoint_del>(Connection &con)
{
  vapi_msg_gbp_endpoint_del* result = vapi_alloc_gbp_endpoint_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_endpoint_del>;

template class Request<vapi_msg_gbp_endpoint_del, vapi_msg_gbp_endpoint_del_reply>;

using Gbp_endpoint_del = Request<vapi_msg_gbp_endpoint_del, vapi_msg_gbp_endpoint_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_del_reply>(vapi_msg_gbp_endpoint_del_reply *msg)
{
  vapi_msg_gbp_endpoint_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_del_reply>(vapi_msg_gbp_endpoint_del_reply *msg)
{
  vapi_msg_gbp_endpoint_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_del_reply>()
{
  return ::vapi_msg_id_gbp_endpoint_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_del_reply>>()
{
  return ::vapi_msg_id_gbp_endpoint_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_del_reply>(vapi_msg_id_gbp_endpoint_del_reply);
}

template class Msg<vapi_msg_gbp_endpoint_del_reply>;

using Gbp_endpoint_del_reply = Msg<vapi_msg_gbp_endpoint_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_dump>(vapi_msg_gbp_endpoint_dump *msg)
{
  vapi_msg_gbp_endpoint_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_dump>(vapi_msg_gbp_endpoint_dump *msg)
{
  vapi_msg_gbp_endpoint_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_dump>()
{
  return ::vapi_msg_id_gbp_endpoint_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_dump>>()
{
  return ::vapi_msg_id_gbp_endpoint_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_dump>(vapi_msg_id_gbp_endpoint_dump);
}

template <> inline vapi_msg_gbp_endpoint_dump* vapi_alloc<vapi_msg_gbp_endpoint_dump>(Connection &con)
{
  vapi_msg_gbp_endpoint_dump* result = vapi_alloc_gbp_endpoint_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_endpoint_dump>;

template class Dump<vapi_msg_gbp_endpoint_dump, vapi_msg_gbp_endpoint_details>;

using Gbp_endpoint_dump = Dump<vapi_msg_gbp_endpoint_dump, vapi_msg_gbp_endpoint_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_details>(vapi_msg_gbp_endpoint_details *msg)
{
  vapi_msg_gbp_endpoint_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_details>(vapi_msg_gbp_endpoint_details *msg)
{
  vapi_msg_gbp_endpoint_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_details>()
{
  return ::vapi_msg_id_gbp_endpoint_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_details>>()
{
  return ::vapi_msg_id_gbp_endpoint_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_details>(vapi_msg_id_gbp_endpoint_details);
}

template class Msg<vapi_msg_gbp_endpoint_details>;

using Gbp_endpoint_details = Msg<vapi_msg_gbp_endpoint_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_group_add>(vapi_msg_gbp_endpoint_group_add *msg)
{
  vapi_msg_gbp_endpoint_group_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_group_add>(vapi_msg_gbp_endpoint_group_add *msg)
{
  vapi_msg_gbp_endpoint_group_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_group_add>()
{
  return ::vapi_msg_id_gbp_endpoint_group_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_group_add>>()
{
  return ::vapi_msg_id_gbp_endpoint_group_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_group_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_group_add>(vapi_msg_id_gbp_endpoint_group_add);
}

template <> inline vapi_msg_gbp_endpoint_group_add* vapi_alloc<vapi_msg_gbp_endpoint_group_add>(Connection &con)
{
  vapi_msg_gbp_endpoint_group_add* result = vapi_alloc_gbp_endpoint_group_add(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_endpoint_group_add>;

template class Request<vapi_msg_gbp_endpoint_group_add, vapi_msg_gbp_endpoint_group_add_reply>;

using Gbp_endpoint_group_add = Request<vapi_msg_gbp_endpoint_group_add, vapi_msg_gbp_endpoint_group_add_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_group_add_reply>(vapi_msg_gbp_endpoint_group_add_reply *msg)
{
  vapi_msg_gbp_endpoint_group_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_group_add_reply>(vapi_msg_gbp_endpoint_group_add_reply *msg)
{
  vapi_msg_gbp_endpoint_group_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_group_add_reply>()
{
  return ::vapi_msg_id_gbp_endpoint_group_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_group_add_reply>>()
{
  return ::vapi_msg_id_gbp_endpoint_group_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_group_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_group_add_reply>(vapi_msg_id_gbp_endpoint_group_add_reply);
}

template class Msg<vapi_msg_gbp_endpoint_group_add_reply>;

using Gbp_endpoint_group_add_reply = Msg<vapi_msg_gbp_endpoint_group_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_group_del>(vapi_msg_gbp_endpoint_group_del *msg)
{
  vapi_msg_gbp_endpoint_group_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_group_del>(vapi_msg_gbp_endpoint_group_del *msg)
{
  vapi_msg_gbp_endpoint_group_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_group_del>()
{
  return ::vapi_msg_id_gbp_endpoint_group_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_group_del>>()
{
  return ::vapi_msg_id_gbp_endpoint_group_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_group_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_group_del>(vapi_msg_id_gbp_endpoint_group_del);
}

template <> inline vapi_msg_gbp_endpoint_group_del* vapi_alloc<vapi_msg_gbp_endpoint_group_del>(Connection &con)
{
  vapi_msg_gbp_endpoint_group_del* result = vapi_alloc_gbp_endpoint_group_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_endpoint_group_del>;

template class Request<vapi_msg_gbp_endpoint_group_del, vapi_msg_gbp_endpoint_group_del_reply>;

using Gbp_endpoint_group_del = Request<vapi_msg_gbp_endpoint_group_del, vapi_msg_gbp_endpoint_group_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_group_del_reply>(vapi_msg_gbp_endpoint_group_del_reply *msg)
{
  vapi_msg_gbp_endpoint_group_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_group_del_reply>(vapi_msg_gbp_endpoint_group_del_reply *msg)
{
  vapi_msg_gbp_endpoint_group_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_group_del_reply>()
{
  return ::vapi_msg_id_gbp_endpoint_group_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_group_del_reply>>()
{
  return ::vapi_msg_id_gbp_endpoint_group_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_group_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_group_del_reply>(vapi_msg_id_gbp_endpoint_group_del_reply);
}

template class Msg<vapi_msg_gbp_endpoint_group_del_reply>;

using Gbp_endpoint_group_del_reply = Msg<vapi_msg_gbp_endpoint_group_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_group_dump>(vapi_msg_gbp_endpoint_group_dump *msg)
{
  vapi_msg_gbp_endpoint_group_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_group_dump>(vapi_msg_gbp_endpoint_group_dump *msg)
{
  vapi_msg_gbp_endpoint_group_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_group_dump>()
{
  return ::vapi_msg_id_gbp_endpoint_group_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_group_dump>>()
{
  return ::vapi_msg_id_gbp_endpoint_group_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_group_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_group_dump>(vapi_msg_id_gbp_endpoint_group_dump);
}

template <> inline vapi_msg_gbp_endpoint_group_dump* vapi_alloc<vapi_msg_gbp_endpoint_group_dump>(Connection &con)
{
  vapi_msg_gbp_endpoint_group_dump* result = vapi_alloc_gbp_endpoint_group_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_endpoint_group_dump>;

template class Dump<vapi_msg_gbp_endpoint_group_dump, vapi_msg_gbp_endpoint_group_details>;

using Gbp_endpoint_group_dump = Dump<vapi_msg_gbp_endpoint_group_dump, vapi_msg_gbp_endpoint_group_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_endpoint_group_details>(vapi_msg_gbp_endpoint_group_details *msg)
{
  vapi_msg_gbp_endpoint_group_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_endpoint_group_details>(vapi_msg_gbp_endpoint_group_details *msg)
{
  vapi_msg_gbp_endpoint_group_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_endpoint_group_details>()
{
  return ::vapi_msg_id_gbp_endpoint_group_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_endpoint_group_details>>()
{
  return ::vapi_msg_id_gbp_endpoint_group_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_endpoint_group_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_endpoint_group_details>(vapi_msg_id_gbp_endpoint_group_details);
}

template class Msg<vapi_msg_gbp_endpoint_group_details>;

using Gbp_endpoint_group_details = Msg<vapi_msg_gbp_endpoint_group_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_recirc_add_del>(vapi_msg_gbp_recirc_add_del *msg)
{
  vapi_msg_gbp_recirc_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_recirc_add_del>(vapi_msg_gbp_recirc_add_del *msg)
{
  vapi_msg_gbp_recirc_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_recirc_add_del>()
{
  return ::vapi_msg_id_gbp_recirc_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_recirc_add_del>>()
{
  return ::vapi_msg_id_gbp_recirc_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_recirc_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_recirc_add_del>(vapi_msg_id_gbp_recirc_add_del);
}

template <> inline vapi_msg_gbp_recirc_add_del* vapi_alloc<vapi_msg_gbp_recirc_add_del>(Connection &con)
{
  vapi_msg_gbp_recirc_add_del* result = vapi_alloc_gbp_recirc_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_recirc_add_del>;

template class Request<vapi_msg_gbp_recirc_add_del, vapi_msg_gbp_recirc_add_del_reply>;

using Gbp_recirc_add_del = Request<vapi_msg_gbp_recirc_add_del, vapi_msg_gbp_recirc_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_recirc_add_del_reply>(vapi_msg_gbp_recirc_add_del_reply *msg)
{
  vapi_msg_gbp_recirc_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_recirc_add_del_reply>(vapi_msg_gbp_recirc_add_del_reply *msg)
{
  vapi_msg_gbp_recirc_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_recirc_add_del_reply>()
{
  return ::vapi_msg_id_gbp_recirc_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_recirc_add_del_reply>>()
{
  return ::vapi_msg_id_gbp_recirc_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_recirc_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_recirc_add_del_reply>(vapi_msg_id_gbp_recirc_add_del_reply);
}

template class Msg<vapi_msg_gbp_recirc_add_del_reply>;

using Gbp_recirc_add_del_reply = Msg<vapi_msg_gbp_recirc_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_recirc_dump>(vapi_msg_gbp_recirc_dump *msg)
{
  vapi_msg_gbp_recirc_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_recirc_dump>(vapi_msg_gbp_recirc_dump *msg)
{
  vapi_msg_gbp_recirc_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_recirc_dump>()
{
  return ::vapi_msg_id_gbp_recirc_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_recirc_dump>>()
{
  return ::vapi_msg_id_gbp_recirc_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_recirc_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_recirc_dump>(vapi_msg_id_gbp_recirc_dump);
}

template <> inline vapi_msg_gbp_recirc_dump* vapi_alloc<vapi_msg_gbp_recirc_dump>(Connection &con)
{
  vapi_msg_gbp_recirc_dump* result = vapi_alloc_gbp_recirc_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_recirc_dump>;

template class Dump<vapi_msg_gbp_recirc_dump, vapi_msg_gbp_recirc_details>;

using Gbp_recirc_dump = Dump<vapi_msg_gbp_recirc_dump, vapi_msg_gbp_recirc_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_recirc_details>(vapi_msg_gbp_recirc_details *msg)
{
  vapi_msg_gbp_recirc_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_recirc_details>(vapi_msg_gbp_recirc_details *msg)
{
  vapi_msg_gbp_recirc_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_recirc_details>()
{
  return ::vapi_msg_id_gbp_recirc_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_recirc_details>>()
{
  return ::vapi_msg_id_gbp_recirc_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_recirc_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_recirc_details>(vapi_msg_id_gbp_recirc_details);
}

template class Msg<vapi_msg_gbp_recirc_details>;

using Gbp_recirc_details = Msg<vapi_msg_gbp_recirc_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_subnet_add_del>(vapi_msg_gbp_subnet_add_del *msg)
{
  vapi_msg_gbp_subnet_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_subnet_add_del>(vapi_msg_gbp_subnet_add_del *msg)
{
  vapi_msg_gbp_subnet_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_subnet_add_del>()
{
  return ::vapi_msg_id_gbp_subnet_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_subnet_add_del>>()
{
  return ::vapi_msg_id_gbp_subnet_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_subnet_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_subnet_add_del>(vapi_msg_id_gbp_subnet_add_del);
}

template <> inline vapi_msg_gbp_subnet_add_del* vapi_alloc<vapi_msg_gbp_subnet_add_del>(Connection &con)
{
  vapi_msg_gbp_subnet_add_del* result = vapi_alloc_gbp_subnet_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_subnet_add_del>;

template class Request<vapi_msg_gbp_subnet_add_del, vapi_msg_gbp_subnet_add_del_reply>;

using Gbp_subnet_add_del = Request<vapi_msg_gbp_subnet_add_del, vapi_msg_gbp_subnet_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_subnet_add_del_reply>(vapi_msg_gbp_subnet_add_del_reply *msg)
{
  vapi_msg_gbp_subnet_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_subnet_add_del_reply>(vapi_msg_gbp_subnet_add_del_reply *msg)
{
  vapi_msg_gbp_subnet_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_subnet_add_del_reply>()
{
  return ::vapi_msg_id_gbp_subnet_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_subnet_add_del_reply>>()
{
  return ::vapi_msg_id_gbp_subnet_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_subnet_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_subnet_add_del_reply>(vapi_msg_id_gbp_subnet_add_del_reply);
}

template class Msg<vapi_msg_gbp_subnet_add_del_reply>;

using Gbp_subnet_add_del_reply = Msg<vapi_msg_gbp_subnet_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_subnet_dump>(vapi_msg_gbp_subnet_dump *msg)
{
  vapi_msg_gbp_subnet_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_subnet_dump>(vapi_msg_gbp_subnet_dump *msg)
{
  vapi_msg_gbp_subnet_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_subnet_dump>()
{
  return ::vapi_msg_id_gbp_subnet_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_subnet_dump>>()
{
  return ::vapi_msg_id_gbp_subnet_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_subnet_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_subnet_dump>(vapi_msg_id_gbp_subnet_dump);
}

template <> inline vapi_msg_gbp_subnet_dump* vapi_alloc<vapi_msg_gbp_subnet_dump>(Connection &con)
{
  vapi_msg_gbp_subnet_dump* result = vapi_alloc_gbp_subnet_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_subnet_dump>;

template class Dump<vapi_msg_gbp_subnet_dump, vapi_msg_gbp_subnet_details>;

using Gbp_subnet_dump = Dump<vapi_msg_gbp_subnet_dump, vapi_msg_gbp_subnet_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_subnet_details>(vapi_msg_gbp_subnet_details *msg)
{
  vapi_msg_gbp_subnet_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_subnet_details>(vapi_msg_gbp_subnet_details *msg)
{
  vapi_msg_gbp_subnet_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_subnet_details>()
{
  return ::vapi_msg_id_gbp_subnet_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_subnet_details>>()
{
  return ::vapi_msg_id_gbp_subnet_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_subnet_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_subnet_details>(vapi_msg_id_gbp_subnet_details);
}

template class Msg<vapi_msg_gbp_subnet_details>;

using Gbp_subnet_details = Msg<vapi_msg_gbp_subnet_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_contract_add_del>(vapi_msg_gbp_contract_add_del *msg)
{
  vapi_msg_gbp_contract_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_contract_add_del>(vapi_msg_gbp_contract_add_del *msg)
{
  vapi_msg_gbp_contract_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_contract_add_del>()
{
  return ::vapi_msg_id_gbp_contract_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_contract_add_del>>()
{
  return ::vapi_msg_id_gbp_contract_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_contract_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_contract_add_del>(vapi_msg_id_gbp_contract_add_del);
}

template <> inline vapi_msg_gbp_contract_add_del* vapi_alloc<vapi_msg_gbp_contract_add_del, size_t>(Connection &con, size_t contract_rules_array_size)
{
  vapi_msg_gbp_contract_add_del* result = vapi_alloc_gbp_contract_add_del(con.vapi_ctx, contract_rules_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_contract_add_del>;

template class Request<vapi_msg_gbp_contract_add_del, vapi_msg_gbp_contract_add_del_reply, size_t>;

using Gbp_contract_add_del = Request<vapi_msg_gbp_contract_add_del, vapi_msg_gbp_contract_add_del_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_contract_add_del_reply>(vapi_msg_gbp_contract_add_del_reply *msg)
{
  vapi_msg_gbp_contract_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_contract_add_del_reply>(vapi_msg_gbp_contract_add_del_reply *msg)
{
  vapi_msg_gbp_contract_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_contract_add_del_reply>()
{
  return ::vapi_msg_id_gbp_contract_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_contract_add_del_reply>>()
{
  return ::vapi_msg_id_gbp_contract_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_contract_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_contract_add_del_reply>(vapi_msg_id_gbp_contract_add_del_reply);
}

template class Msg<vapi_msg_gbp_contract_add_del_reply>;

using Gbp_contract_add_del_reply = Msg<vapi_msg_gbp_contract_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_contract_dump>(vapi_msg_gbp_contract_dump *msg)
{
  vapi_msg_gbp_contract_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_contract_dump>(vapi_msg_gbp_contract_dump *msg)
{
  vapi_msg_gbp_contract_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_contract_dump>()
{
  return ::vapi_msg_id_gbp_contract_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_contract_dump>>()
{
  return ::vapi_msg_id_gbp_contract_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_contract_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_contract_dump>(vapi_msg_id_gbp_contract_dump);
}

template <> inline vapi_msg_gbp_contract_dump* vapi_alloc<vapi_msg_gbp_contract_dump>(Connection &con)
{
  vapi_msg_gbp_contract_dump* result = vapi_alloc_gbp_contract_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_contract_dump>;

template class Dump<vapi_msg_gbp_contract_dump, vapi_msg_gbp_contract_details>;

using Gbp_contract_dump = Dump<vapi_msg_gbp_contract_dump, vapi_msg_gbp_contract_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_contract_details>(vapi_msg_gbp_contract_details *msg)
{
  vapi_msg_gbp_contract_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_contract_details>(vapi_msg_gbp_contract_details *msg)
{
  vapi_msg_gbp_contract_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_contract_details>()
{
  return ::vapi_msg_id_gbp_contract_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_contract_details>>()
{
  return ::vapi_msg_id_gbp_contract_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_contract_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_contract_details>(vapi_msg_id_gbp_contract_details);
}

template class Msg<vapi_msg_gbp_contract_details>;

using Gbp_contract_details = Msg<vapi_msg_gbp_contract_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_vxlan_tunnel_add>(vapi_msg_gbp_vxlan_tunnel_add *msg)
{
  vapi_msg_gbp_vxlan_tunnel_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_vxlan_tunnel_add>(vapi_msg_gbp_vxlan_tunnel_add *msg)
{
  vapi_msg_gbp_vxlan_tunnel_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_vxlan_tunnel_add>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_vxlan_tunnel_add>>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_vxlan_tunnel_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_vxlan_tunnel_add>(vapi_msg_id_gbp_vxlan_tunnel_add);
}

template <> inline vapi_msg_gbp_vxlan_tunnel_add* vapi_alloc<vapi_msg_gbp_vxlan_tunnel_add>(Connection &con)
{
  vapi_msg_gbp_vxlan_tunnel_add* result = vapi_alloc_gbp_vxlan_tunnel_add(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_vxlan_tunnel_add>;

template class Request<vapi_msg_gbp_vxlan_tunnel_add, vapi_msg_gbp_vxlan_tunnel_add_reply>;

using Gbp_vxlan_tunnel_add = Request<vapi_msg_gbp_vxlan_tunnel_add, vapi_msg_gbp_vxlan_tunnel_add_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_vxlan_tunnel_add_reply>(vapi_msg_gbp_vxlan_tunnel_add_reply *msg)
{
  vapi_msg_gbp_vxlan_tunnel_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_vxlan_tunnel_add_reply>(vapi_msg_gbp_vxlan_tunnel_add_reply *msg)
{
  vapi_msg_gbp_vxlan_tunnel_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_vxlan_tunnel_add_reply>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_vxlan_tunnel_add_reply>>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_vxlan_tunnel_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_vxlan_tunnel_add_reply>(vapi_msg_id_gbp_vxlan_tunnel_add_reply);
}

template class Msg<vapi_msg_gbp_vxlan_tunnel_add_reply>;

using Gbp_vxlan_tunnel_add_reply = Msg<vapi_msg_gbp_vxlan_tunnel_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_vxlan_tunnel_del>(vapi_msg_gbp_vxlan_tunnel_del *msg)
{
  vapi_msg_gbp_vxlan_tunnel_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_vxlan_tunnel_del>(vapi_msg_gbp_vxlan_tunnel_del *msg)
{
  vapi_msg_gbp_vxlan_tunnel_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_vxlan_tunnel_del>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_vxlan_tunnel_del>>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_vxlan_tunnel_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_vxlan_tunnel_del>(vapi_msg_id_gbp_vxlan_tunnel_del);
}

template <> inline vapi_msg_gbp_vxlan_tunnel_del* vapi_alloc<vapi_msg_gbp_vxlan_tunnel_del>(Connection &con)
{
  vapi_msg_gbp_vxlan_tunnel_del* result = vapi_alloc_gbp_vxlan_tunnel_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_vxlan_tunnel_del>;

template class Request<vapi_msg_gbp_vxlan_tunnel_del, vapi_msg_gbp_vxlan_tunnel_del_reply>;

using Gbp_vxlan_tunnel_del = Request<vapi_msg_gbp_vxlan_tunnel_del, vapi_msg_gbp_vxlan_tunnel_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_vxlan_tunnel_del_reply>(vapi_msg_gbp_vxlan_tunnel_del_reply *msg)
{
  vapi_msg_gbp_vxlan_tunnel_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_vxlan_tunnel_del_reply>(vapi_msg_gbp_vxlan_tunnel_del_reply *msg)
{
  vapi_msg_gbp_vxlan_tunnel_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_vxlan_tunnel_del_reply>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_vxlan_tunnel_del_reply>>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_vxlan_tunnel_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_vxlan_tunnel_del_reply>(vapi_msg_id_gbp_vxlan_tunnel_del_reply);
}

template class Msg<vapi_msg_gbp_vxlan_tunnel_del_reply>;

using Gbp_vxlan_tunnel_del_reply = Msg<vapi_msg_gbp_vxlan_tunnel_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_vxlan_tunnel_dump>(vapi_msg_gbp_vxlan_tunnel_dump *msg)
{
  vapi_msg_gbp_vxlan_tunnel_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_vxlan_tunnel_dump>(vapi_msg_gbp_vxlan_tunnel_dump *msg)
{
  vapi_msg_gbp_vxlan_tunnel_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_vxlan_tunnel_dump>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_vxlan_tunnel_dump>>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_vxlan_tunnel_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_vxlan_tunnel_dump>(vapi_msg_id_gbp_vxlan_tunnel_dump);
}

template <> inline vapi_msg_gbp_vxlan_tunnel_dump* vapi_alloc<vapi_msg_gbp_vxlan_tunnel_dump>(Connection &con)
{
  vapi_msg_gbp_vxlan_tunnel_dump* result = vapi_alloc_gbp_vxlan_tunnel_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_vxlan_tunnel_dump>;

template class Dump<vapi_msg_gbp_vxlan_tunnel_dump, vapi_msg_gbp_vxlan_tunnel_details>;

using Gbp_vxlan_tunnel_dump = Dump<vapi_msg_gbp_vxlan_tunnel_dump, vapi_msg_gbp_vxlan_tunnel_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_vxlan_tunnel_details>(vapi_msg_gbp_vxlan_tunnel_details *msg)
{
  vapi_msg_gbp_vxlan_tunnel_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_vxlan_tunnel_details>(vapi_msg_gbp_vxlan_tunnel_details *msg)
{
  vapi_msg_gbp_vxlan_tunnel_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_vxlan_tunnel_details>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_vxlan_tunnel_details>>()
{
  return ::vapi_msg_id_gbp_vxlan_tunnel_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_vxlan_tunnel_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_vxlan_tunnel_details>(vapi_msg_id_gbp_vxlan_tunnel_details);
}

template class Msg<vapi_msg_gbp_vxlan_tunnel_details>;

using Gbp_vxlan_tunnel_details = Msg<vapi_msg_gbp_vxlan_tunnel_details>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_ext_itf_add_del>(vapi_msg_gbp_ext_itf_add_del *msg)
{
  vapi_msg_gbp_ext_itf_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_ext_itf_add_del>(vapi_msg_gbp_ext_itf_add_del *msg)
{
  vapi_msg_gbp_ext_itf_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_ext_itf_add_del>()
{
  return ::vapi_msg_id_gbp_ext_itf_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_ext_itf_add_del>>()
{
  return ::vapi_msg_id_gbp_ext_itf_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_ext_itf_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_ext_itf_add_del>(vapi_msg_id_gbp_ext_itf_add_del);
}

template <> inline vapi_msg_gbp_ext_itf_add_del* vapi_alloc<vapi_msg_gbp_ext_itf_add_del>(Connection &con)
{
  vapi_msg_gbp_ext_itf_add_del* result = vapi_alloc_gbp_ext_itf_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_ext_itf_add_del>;

template class Request<vapi_msg_gbp_ext_itf_add_del, vapi_msg_gbp_ext_itf_add_del_reply>;

using Gbp_ext_itf_add_del = Request<vapi_msg_gbp_ext_itf_add_del, vapi_msg_gbp_ext_itf_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_ext_itf_add_del_reply>(vapi_msg_gbp_ext_itf_add_del_reply *msg)
{
  vapi_msg_gbp_ext_itf_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_ext_itf_add_del_reply>(vapi_msg_gbp_ext_itf_add_del_reply *msg)
{
  vapi_msg_gbp_ext_itf_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_ext_itf_add_del_reply>()
{
  return ::vapi_msg_id_gbp_ext_itf_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_ext_itf_add_del_reply>>()
{
  return ::vapi_msg_id_gbp_ext_itf_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_ext_itf_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_ext_itf_add_del_reply>(vapi_msg_id_gbp_ext_itf_add_del_reply);
}

template class Msg<vapi_msg_gbp_ext_itf_add_del_reply>;

using Gbp_ext_itf_add_del_reply = Msg<vapi_msg_gbp_ext_itf_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_gbp_ext_itf_dump>(vapi_msg_gbp_ext_itf_dump *msg)
{
  vapi_msg_gbp_ext_itf_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_ext_itf_dump>(vapi_msg_gbp_ext_itf_dump *msg)
{
  vapi_msg_gbp_ext_itf_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_ext_itf_dump>()
{
  return ::vapi_msg_id_gbp_ext_itf_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_ext_itf_dump>>()
{
  return ::vapi_msg_id_gbp_ext_itf_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_ext_itf_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_ext_itf_dump>(vapi_msg_id_gbp_ext_itf_dump);
}

template <> inline vapi_msg_gbp_ext_itf_dump* vapi_alloc<vapi_msg_gbp_ext_itf_dump>(Connection &con)
{
  vapi_msg_gbp_ext_itf_dump* result = vapi_alloc_gbp_ext_itf_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_gbp_ext_itf_dump>;

template class Dump<vapi_msg_gbp_ext_itf_dump, vapi_msg_gbp_ext_itf_details>;

using Gbp_ext_itf_dump = Dump<vapi_msg_gbp_ext_itf_dump, vapi_msg_gbp_ext_itf_details>;

template <> inline void vapi_swap_to_be<vapi_msg_gbp_ext_itf_details>(vapi_msg_gbp_ext_itf_details *msg)
{
  vapi_msg_gbp_ext_itf_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_gbp_ext_itf_details>(vapi_msg_gbp_ext_itf_details *msg)
{
  vapi_msg_gbp_ext_itf_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_gbp_ext_itf_details>()
{
  return ::vapi_msg_id_gbp_ext_itf_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_gbp_ext_itf_details>>()
{
  return ::vapi_msg_id_gbp_ext_itf_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_gbp_ext_itf_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_gbp_ext_itf_details>(vapi_msg_id_gbp_ext_itf_details);
}

template class Msg<vapi_msg_gbp_ext_itf_details>;

using Gbp_ext_itf_details = Msg<vapi_msg_gbp_ext_itf_details>;
}
#endif
