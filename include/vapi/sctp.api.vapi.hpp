#ifndef __included_hpp_sctp_api_json
#define __included_hpp_sctp_api_json

#include <vapi/vapi.hpp>
#include <vapi/sctp.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_sctp_add_src_dst_connection_reply>(vapi_msg_sctp_add_src_dst_connection_reply *msg)
{
  vapi_msg_sctp_add_src_dst_connection_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sctp_add_src_dst_connection_reply>(vapi_msg_sctp_add_src_dst_connection_reply *msg)
{
  vapi_msg_sctp_add_src_dst_connection_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sctp_add_src_dst_connection_reply>()
{
  return ::vapi_msg_id_sctp_add_src_dst_connection_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sctp_add_src_dst_connection_reply>>()
{
  return ::vapi_msg_id_sctp_add_src_dst_connection_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sctp_add_src_dst_connection_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sctp_add_src_dst_connection_reply>(vapi_msg_id_sctp_add_src_dst_connection_reply);
}

template class Msg<vapi_msg_sctp_add_src_dst_connection_reply>;

using Sctp_add_src_dst_connection_reply = Msg<vapi_msg_sctp_add_src_dst_connection_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_sctp_del_src_dst_connection_reply>(vapi_msg_sctp_del_src_dst_connection_reply *msg)
{
  vapi_msg_sctp_del_src_dst_connection_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sctp_del_src_dst_connection_reply>(vapi_msg_sctp_del_src_dst_connection_reply *msg)
{
  vapi_msg_sctp_del_src_dst_connection_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sctp_del_src_dst_connection_reply>()
{
  return ::vapi_msg_id_sctp_del_src_dst_connection_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sctp_del_src_dst_connection_reply>>()
{
  return ::vapi_msg_id_sctp_del_src_dst_connection_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sctp_del_src_dst_connection_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sctp_del_src_dst_connection_reply>(vapi_msg_id_sctp_del_src_dst_connection_reply);
}

template class Msg<vapi_msg_sctp_del_src_dst_connection_reply>;

using Sctp_del_src_dst_connection_reply = Msg<vapi_msg_sctp_del_src_dst_connection_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_sctp_del_src_dst_connection>(vapi_msg_sctp_del_src_dst_connection *msg)
{
  vapi_msg_sctp_del_src_dst_connection_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sctp_del_src_dst_connection>(vapi_msg_sctp_del_src_dst_connection *msg)
{
  vapi_msg_sctp_del_src_dst_connection_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sctp_del_src_dst_connection>()
{
  return ::vapi_msg_id_sctp_del_src_dst_connection; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sctp_del_src_dst_connection>>()
{
  return ::vapi_msg_id_sctp_del_src_dst_connection; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sctp_del_src_dst_connection()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sctp_del_src_dst_connection>(vapi_msg_id_sctp_del_src_dst_connection);
}

template <> inline vapi_msg_sctp_del_src_dst_connection* vapi_alloc<vapi_msg_sctp_del_src_dst_connection>(Connection &con)
{
  vapi_msg_sctp_del_src_dst_connection* result = vapi_alloc_sctp_del_src_dst_connection(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sctp_del_src_dst_connection>;

template class Request<vapi_msg_sctp_del_src_dst_connection, vapi_msg_sctp_del_src_dst_connection_reply>;

using Sctp_del_src_dst_connection = Request<vapi_msg_sctp_del_src_dst_connection, vapi_msg_sctp_del_src_dst_connection_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sctp_config>(vapi_msg_sctp_config *msg)
{
  vapi_msg_sctp_config_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sctp_config>(vapi_msg_sctp_config *msg)
{
  vapi_msg_sctp_config_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sctp_config>()
{
  return ::vapi_msg_id_sctp_config; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sctp_config>>()
{
  return ::vapi_msg_id_sctp_config; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sctp_config()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sctp_config>(vapi_msg_id_sctp_config);
}

template <> inline vapi_msg_sctp_config* vapi_alloc<vapi_msg_sctp_config>(Connection &con)
{
  vapi_msg_sctp_config* result = vapi_alloc_sctp_config(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sctp_config>;

template class Request<vapi_msg_sctp_config, vapi_msg_sctp_config_reply>;

using Sctp_config = Request<vapi_msg_sctp_config, vapi_msg_sctp_config_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sctp_add_src_dst_connection>(vapi_msg_sctp_add_src_dst_connection *msg)
{
  vapi_msg_sctp_add_src_dst_connection_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sctp_add_src_dst_connection>(vapi_msg_sctp_add_src_dst_connection *msg)
{
  vapi_msg_sctp_add_src_dst_connection_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sctp_add_src_dst_connection>()
{
  return ::vapi_msg_id_sctp_add_src_dst_connection; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sctp_add_src_dst_connection>>()
{
  return ::vapi_msg_id_sctp_add_src_dst_connection; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sctp_add_src_dst_connection()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sctp_add_src_dst_connection>(vapi_msg_id_sctp_add_src_dst_connection);
}

template <> inline vapi_msg_sctp_add_src_dst_connection* vapi_alloc<vapi_msg_sctp_add_src_dst_connection>(Connection &con)
{
  vapi_msg_sctp_add_src_dst_connection* result = vapi_alloc_sctp_add_src_dst_connection(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_sctp_add_src_dst_connection>;

template class Request<vapi_msg_sctp_add_src_dst_connection, vapi_msg_sctp_add_src_dst_connection_reply>;

using Sctp_add_src_dst_connection = Request<vapi_msg_sctp_add_src_dst_connection, vapi_msg_sctp_add_src_dst_connection_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_sctp_config_reply>(vapi_msg_sctp_config_reply *msg)
{
  vapi_msg_sctp_config_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_sctp_config_reply>(vapi_msg_sctp_config_reply *msg)
{
  vapi_msg_sctp_config_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_sctp_config_reply>()
{
  return ::vapi_msg_id_sctp_config_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_sctp_config_reply>>()
{
  return ::vapi_msg_id_sctp_config_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_sctp_config_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_sctp_config_reply>(vapi_msg_id_sctp_config_reply);
}

template class Msg<vapi_msg_sctp_config_reply>;

using Sctp_config_reply = Msg<vapi_msg_sctp_config_reply>;
}
#endif
