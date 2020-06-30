#ifndef __included_hpp_urpf_api_json
#define __included_hpp_urpf_api_json

#include <vapi/vapi.hpp>
#include <vapi/urpf.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_urpf_update>(vapi_msg_urpf_update *msg)
{
  vapi_msg_urpf_update_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_urpf_update>(vapi_msg_urpf_update *msg)
{
  vapi_msg_urpf_update_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_urpf_update>()
{
  return ::vapi_msg_id_urpf_update; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_urpf_update>>()
{
  return ::vapi_msg_id_urpf_update; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_urpf_update()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_urpf_update>(vapi_msg_id_urpf_update);
}

template <> inline vapi_msg_urpf_update* vapi_alloc<vapi_msg_urpf_update>(Connection &con)
{
  vapi_msg_urpf_update* result = vapi_alloc_urpf_update(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_urpf_update>;

template class Request<vapi_msg_urpf_update, vapi_msg_urpf_update_reply>;

using Urpf_update = Request<vapi_msg_urpf_update, vapi_msg_urpf_update_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_urpf_update_reply>(vapi_msg_urpf_update_reply *msg)
{
  vapi_msg_urpf_update_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_urpf_update_reply>(vapi_msg_urpf_update_reply *msg)
{
  vapi_msg_urpf_update_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_urpf_update_reply>()
{
  return ::vapi_msg_id_urpf_update_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_urpf_update_reply>>()
{
  return ::vapi_msg_id_urpf_update_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_urpf_update_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_urpf_update_reply>(vapi_msg_id_urpf_update_reply);
}

template class Msg<vapi_msg_urpf_update_reply>;

using Urpf_update_reply = Msg<vapi_msg_urpf_update_reply>;
}
#endif
