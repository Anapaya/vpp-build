#ifndef __included_hpp_builtinurl_api_json
#define __included_hpp_builtinurl_api_json

#include <vapi/vapi.hpp>
#include <vapi/builtinurl.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_builtinurl_enable>(vapi_msg_builtinurl_enable *msg)
{
  vapi_msg_builtinurl_enable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_builtinurl_enable>(vapi_msg_builtinurl_enable *msg)
{
  vapi_msg_builtinurl_enable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_builtinurl_enable>()
{
  return ::vapi_msg_id_builtinurl_enable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_builtinurl_enable>>()
{
  return ::vapi_msg_id_builtinurl_enable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_builtinurl_enable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_builtinurl_enable>(vapi_msg_id_builtinurl_enable);
}

template <> inline vapi_msg_builtinurl_enable* vapi_alloc<vapi_msg_builtinurl_enable>(Connection &con)
{
  vapi_msg_builtinurl_enable* result = vapi_alloc_builtinurl_enable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_builtinurl_enable>;

template class Request<vapi_msg_builtinurl_enable, vapi_msg_builtinurl_enable_reply>;

using Builtinurl_enable = Request<vapi_msg_builtinurl_enable, vapi_msg_builtinurl_enable_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_builtinurl_enable_reply>(vapi_msg_builtinurl_enable_reply *msg)
{
  vapi_msg_builtinurl_enable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_builtinurl_enable_reply>(vapi_msg_builtinurl_enable_reply *msg)
{
  vapi_msg_builtinurl_enable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_builtinurl_enable_reply>()
{
  return ::vapi_msg_id_builtinurl_enable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_builtinurl_enable_reply>>()
{
  return ::vapi_msg_id_builtinurl_enable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_builtinurl_enable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_builtinurl_enable_reply>(vapi_msg_id_builtinurl_enable_reply);
}

template class Msg<vapi_msg_builtinurl_enable_reply>;

using Builtinurl_enable_reply = Msg<vapi_msg_builtinurl_enable_reply>;
}
#endif
