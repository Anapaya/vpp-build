#ifndef __included_hpp_l2e_api_json
#define __included_hpp_l2e_api_json

#include <vapi/vapi.hpp>
#include <vapi/l2e.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_l2_emulation>(vapi_msg_l2_emulation *msg)
{
  vapi_msg_l2_emulation_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_l2_emulation>(vapi_msg_l2_emulation *msg)
{
  vapi_msg_l2_emulation_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_l2_emulation>()
{
  return ::vapi_msg_id_l2_emulation; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_l2_emulation>>()
{
  return ::vapi_msg_id_l2_emulation; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_l2_emulation()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_l2_emulation>(vapi_msg_id_l2_emulation);
}

template <> inline vapi_msg_l2_emulation* vapi_alloc<vapi_msg_l2_emulation>(Connection &con)
{
  vapi_msg_l2_emulation* result = vapi_alloc_l2_emulation(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_l2_emulation>;

template class Request<vapi_msg_l2_emulation, vapi_msg_l2_emulation_reply>;

using L2_emulation = Request<vapi_msg_l2_emulation, vapi_msg_l2_emulation_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_l2_emulation_reply>(vapi_msg_l2_emulation_reply *msg)
{
  vapi_msg_l2_emulation_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_l2_emulation_reply>(vapi_msg_l2_emulation_reply *msg)
{
  vapi_msg_l2_emulation_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_l2_emulation_reply>()
{
  return ::vapi_msg_id_l2_emulation_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_l2_emulation_reply>>()
{
  return ::vapi_msg_id_l2_emulation_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_l2_emulation_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_l2_emulation_reply>(vapi_msg_id_l2_emulation_reply);
}

template class Msg<vapi_msg_l2_emulation_reply>;

using L2_emulation_reply = Msg<vapi_msg_l2_emulation_reply>;
}
#endif
