#ifndef __included_hpp_netmap_api_json
#define __included_hpp_netmap_api_json

#include <vapi/vapi.hpp>
#include <vapi/netmap.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_netmap_delete>(vapi_msg_netmap_delete *msg)
{
  vapi_msg_netmap_delete_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_netmap_delete>(vapi_msg_netmap_delete *msg)
{
  vapi_msg_netmap_delete_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_netmap_delete>()
{
  return ::vapi_msg_id_netmap_delete; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_netmap_delete>>()
{
  return ::vapi_msg_id_netmap_delete; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_netmap_delete()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_netmap_delete>(vapi_msg_id_netmap_delete);
}

template <> inline vapi_msg_netmap_delete* vapi_alloc<vapi_msg_netmap_delete>(Connection &con)
{
  vapi_msg_netmap_delete* result = vapi_alloc_netmap_delete(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_netmap_delete>;

template class Request<vapi_msg_netmap_delete, vapi_msg_netmap_delete_reply>;

using Netmap_delete = Request<vapi_msg_netmap_delete, vapi_msg_netmap_delete_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_netmap_create>(vapi_msg_netmap_create *msg)
{
  vapi_msg_netmap_create_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_netmap_create>(vapi_msg_netmap_create *msg)
{
  vapi_msg_netmap_create_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_netmap_create>()
{
  return ::vapi_msg_id_netmap_create; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_netmap_create>>()
{
  return ::vapi_msg_id_netmap_create; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_netmap_create()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_netmap_create>(vapi_msg_id_netmap_create);
}

template <> inline vapi_msg_netmap_create* vapi_alloc<vapi_msg_netmap_create>(Connection &con)
{
  vapi_msg_netmap_create* result = vapi_alloc_netmap_create(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_netmap_create>;

template class Request<vapi_msg_netmap_create, vapi_msg_netmap_create_reply>;

using Netmap_create = Request<vapi_msg_netmap_create, vapi_msg_netmap_create_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_netmap_create_reply>(vapi_msg_netmap_create_reply *msg)
{
  vapi_msg_netmap_create_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_netmap_create_reply>(vapi_msg_netmap_create_reply *msg)
{
  vapi_msg_netmap_create_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_netmap_create_reply>()
{
  return ::vapi_msg_id_netmap_create_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_netmap_create_reply>>()
{
  return ::vapi_msg_id_netmap_create_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_netmap_create_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_netmap_create_reply>(vapi_msg_id_netmap_create_reply);
}

template class Msg<vapi_msg_netmap_create_reply>;

using Netmap_create_reply = Msg<vapi_msg_netmap_create_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_netmap_delete_reply>(vapi_msg_netmap_delete_reply *msg)
{
  vapi_msg_netmap_delete_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_netmap_delete_reply>(vapi_msg_netmap_delete_reply *msg)
{
  vapi_msg_netmap_delete_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_netmap_delete_reply>()
{
  return ::vapi_msg_id_netmap_delete_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_netmap_delete_reply>>()
{
  return ::vapi_msg_id_netmap_delete_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_netmap_delete_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_netmap_delete_reply>(vapi_msg_id_netmap_delete_reply);
}

template class Msg<vapi_msg_netmap_delete_reply>;

using Netmap_delete_reply = Msg<vapi_msg_netmap_delete_reply>;
}
#endif
