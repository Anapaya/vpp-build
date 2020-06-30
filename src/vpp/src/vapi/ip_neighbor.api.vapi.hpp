#ifndef __included_hpp_ip_neighbor_api_json
#define __included_hpp_ip_neighbor_api_json

#include <vapi/vapi.hpp>
#include <vapi/ip_neighbor.api.vapi.h>

namespace vapi {

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
template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_config>(vapi_msg_ip_neighbor_config *msg)
{
  vapi_msg_ip_neighbor_config_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_config>(vapi_msg_ip_neighbor_config *msg)
{
  vapi_msg_ip_neighbor_config_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_config>()
{
  return ::vapi_msg_id_ip_neighbor_config; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_config>>()
{
  return ::vapi_msg_id_ip_neighbor_config; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_config()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_config>(vapi_msg_id_ip_neighbor_config);
}

template <> inline vapi_msg_ip_neighbor_config* vapi_alloc<vapi_msg_ip_neighbor_config>(Connection &con)
{
  vapi_msg_ip_neighbor_config* result = vapi_alloc_ip_neighbor_config(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_neighbor_config>;

template class Request<vapi_msg_ip_neighbor_config, vapi_msg_ip_neighbor_config_reply>;

using Ip_neighbor_config = Request<vapi_msg_ip_neighbor_config, vapi_msg_ip_neighbor_config_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_config_reply>(vapi_msg_ip_neighbor_config_reply *msg)
{
  vapi_msg_ip_neighbor_config_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_config_reply>(vapi_msg_ip_neighbor_config_reply *msg)
{
  vapi_msg_ip_neighbor_config_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_config_reply>()
{
  return ::vapi_msg_id_ip_neighbor_config_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_config_reply>>()
{
  return ::vapi_msg_id_ip_neighbor_config_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_config_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_config_reply>(vapi_msg_id_ip_neighbor_config_reply);
}

template class Msg<vapi_msg_ip_neighbor_config_reply>;

using Ip_neighbor_config_reply = Msg<vapi_msg_ip_neighbor_config_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_replace_begin>(vapi_msg_ip_neighbor_replace_begin *msg)
{
  vapi_msg_ip_neighbor_replace_begin_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_replace_begin>(vapi_msg_ip_neighbor_replace_begin *msg)
{
  vapi_msg_ip_neighbor_replace_begin_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_replace_begin>()
{
  return ::vapi_msg_id_ip_neighbor_replace_begin; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_replace_begin>>()
{
  return ::vapi_msg_id_ip_neighbor_replace_begin; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_replace_begin()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_replace_begin>(vapi_msg_id_ip_neighbor_replace_begin);
}

template <> inline vapi_msg_ip_neighbor_replace_begin* vapi_alloc<vapi_msg_ip_neighbor_replace_begin>(Connection &con)
{
  vapi_msg_ip_neighbor_replace_begin* result = vapi_alloc_ip_neighbor_replace_begin(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_neighbor_replace_begin>;

template class Request<vapi_msg_ip_neighbor_replace_begin, vapi_msg_ip_neighbor_replace_begin_reply>;

using Ip_neighbor_replace_begin = Request<vapi_msg_ip_neighbor_replace_begin, vapi_msg_ip_neighbor_replace_begin_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_replace_begin_reply>(vapi_msg_ip_neighbor_replace_begin_reply *msg)
{
  vapi_msg_ip_neighbor_replace_begin_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_replace_begin_reply>(vapi_msg_ip_neighbor_replace_begin_reply *msg)
{
  vapi_msg_ip_neighbor_replace_begin_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_replace_begin_reply>()
{
  return ::vapi_msg_id_ip_neighbor_replace_begin_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_replace_begin_reply>>()
{
  return ::vapi_msg_id_ip_neighbor_replace_begin_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_replace_begin_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_replace_begin_reply>(vapi_msg_id_ip_neighbor_replace_begin_reply);
}

template class Msg<vapi_msg_ip_neighbor_replace_begin_reply>;

using Ip_neighbor_replace_begin_reply = Msg<vapi_msg_ip_neighbor_replace_begin_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_replace_end>(vapi_msg_ip_neighbor_replace_end *msg)
{
  vapi_msg_ip_neighbor_replace_end_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_replace_end>(vapi_msg_ip_neighbor_replace_end *msg)
{
  vapi_msg_ip_neighbor_replace_end_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_replace_end>()
{
  return ::vapi_msg_id_ip_neighbor_replace_end; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_replace_end>>()
{
  return ::vapi_msg_id_ip_neighbor_replace_end; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_replace_end()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_replace_end>(vapi_msg_id_ip_neighbor_replace_end);
}

template <> inline vapi_msg_ip_neighbor_replace_end* vapi_alloc<vapi_msg_ip_neighbor_replace_end>(Connection &con)
{
  vapi_msg_ip_neighbor_replace_end* result = vapi_alloc_ip_neighbor_replace_end(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_neighbor_replace_end>;

template class Request<vapi_msg_ip_neighbor_replace_end, vapi_msg_ip_neighbor_replace_end_reply>;

using Ip_neighbor_replace_end = Request<vapi_msg_ip_neighbor_replace_end, vapi_msg_ip_neighbor_replace_end_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_replace_end_reply>(vapi_msg_ip_neighbor_replace_end_reply *msg)
{
  vapi_msg_ip_neighbor_replace_end_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_replace_end_reply>(vapi_msg_ip_neighbor_replace_end_reply *msg)
{
  vapi_msg_ip_neighbor_replace_end_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_replace_end_reply>()
{
  return ::vapi_msg_id_ip_neighbor_replace_end_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_replace_end_reply>>()
{
  return ::vapi_msg_id_ip_neighbor_replace_end_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_replace_end_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_replace_end_reply>(vapi_msg_id_ip_neighbor_replace_end_reply);
}

template class Msg<vapi_msg_ip_neighbor_replace_end_reply>;

using Ip_neighbor_replace_end_reply = Msg<vapi_msg_ip_neighbor_replace_end_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_flush>(vapi_msg_ip_neighbor_flush *msg)
{
  vapi_msg_ip_neighbor_flush_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_flush>(vapi_msg_ip_neighbor_flush *msg)
{
  vapi_msg_ip_neighbor_flush_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_flush>()
{
  return ::vapi_msg_id_ip_neighbor_flush; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_flush>>()
{
  return ::vapi_msg_id_ip_neighbor_flush; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_flush()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_flush>(vapi_msg_id_ip_neighbor_flush);
}

template <> inline vapi_msg_ip_neighbor_flush* vapi_alloc<vapi_msg_ip_neighbor_flush>(Connection &con)
{
  vapi_msg_ip_neighbor_flush* result = vapi_alloc_ip_neighbor_flush(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ip_neighbor_flush>;

template class Request<vapi_msg_ip_neighbor_flush, vapi_msg_ip_neighbor_flush_reply>;

using Ip_neighbor_flush = Request<vapi_msg_ip_neighbor_flush, vapi_msg_ip_neighbor_flush_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_flush_reply>(vapi_msg_ip_neighbor_flush_reply *msg)
{
  vapi_msg_ip_neighbor_flush_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_flush_reply>(vapi_msg_ip_neighbor_flush_reply *msg)
{
  vapi_msg_ip_neighbor_flush_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_flush_reply>()
{
  return ::vapi_msg_id_ip_neighbor_flush_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_flush_reply>>()
{
  return ::vapi_msg_id_ip_neighbor_flush_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_flush_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_flush_reply>(vapi_msg_id_ip_neighbor_flush_reply);
}

template class Msg<vapi_msg_ip_neighbor_flush_reply>;

using Ip_neighbor_flush_reply = Msg<vapi_msg_ip_neighbor_flush_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_want_ip_neighbor_events>(vapi_msg_want_ip_neighbor_events *msg)
{
  vapi_msg_want_ip_neighbor_events_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip_neighbor_events>(vapi_msg_want_ip_neighbor_events *msg)
{
  vapi_msg_want_ip_neighbor_events_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip_neighbor_events>()
{
  return ::vapi_msg_id_want_ip_neighbor_events; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip_neighbor_events>>()
{
  return ::vapi_msg_id_want_ip_neighbor_events; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip_neighbor_events()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip_neighbor_events>(vapi_msg_id_want_ip_neighbor_events);
}

template <> inline vapi_msg_want_ip_neighbor_events* vapi_alloc<vapi_msg_want_ip_neighbor_events>(Connection &con)
{
  vapi_msg_want_ip_neighbor_events* result = vapi_alloc_want_ip_neighbor_events(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_want_ip_neighbor_events>;

template class Request<vapi_msg_want_ip_neighbor_events, vapi_msg_want_ip_neighbor_events_reply>;

using Want_ip_neighbor_events = Request<vapi_msg_want_ip_neighbor_events, vapi_msg_want_ip_neighbor_events_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_want_ip_neighbor_events_reply>(vapi_msg_want_ip_neighbor_events_reply *msg)
{
  vapi_msg_want_ip_neighbor_events_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_want_ip_neighbor_events_reply>(vapi_msg_want_ip_neighbor_events_reply *msg)
{
  vapi_msg_want_ip_neighbor_events_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_want_ip_neighbor_events_reply>()
{
  return ::vapi_msg_id_want_ip_neighbor_events_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_want_ip_neighbor_events_reply>>()
{
  return ::vapi_msg_id_want_ip_neighbor_events_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_want_ip_neighbor_events_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_want_ip_neighbor_events_reply>(vapi_msg_id_want_ip_neighbor_events_reply);
}

template class Msg<vapi_msg_want_ip_neighbor_events_reply>;

using Want_ip_neighbor_events_reply = Msg<vapi_msg_want_ip_neighbor_events_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ip_neighbor_event>(vapi_msg_ip_neighbor_event *msg)
{
  vapi_msg_ip_neighbor_event_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ip_neighbor_event>(vapi_msg_ip_neighbor_event *msg)
{
  vapi_msg_ip_neighbor_event_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ip_neighbor_event>()
{
  return ::vapi_msg_id_ip_neighbor_event; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ip_neighbor_event>>()
{
  return ::vapi_msg_id_ip_neighbor_event; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ip_neighbor_event()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ip_neighbor_event>(vapi_msg_id_ip_neighbor_event);
}

template class Msg<vapi_msg_ip_neighbor_event>;

using Ip_neighbor_event = Msg<vapi_msg_ip_neighbor_event>;
}
#endif
