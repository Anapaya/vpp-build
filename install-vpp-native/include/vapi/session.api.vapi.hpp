#ifndef __included_hpp_session_api_json
#define __included_hpp_session_api_json

#include <vapi/vapi.hpp>
#include <vapi/session.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_application_detach>(vapi_msg_application_detach *msg)
{
  vapi_msg_application_detach_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_detach>(vapi_msg_application_detach *msg)
{
  vapi_msg_application_detach_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_detach>()
{
  return ::vapi_msg_id_application_detach; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_detach>>()
{
  return ::vapi_msg_id_application_detach; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_detach()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_detach>(vapi_msg_id_application_detach);
}

template <> inline vapi_msg_application_detach* vapi_alloc<vapi_msg_application_detach>(Connection &con)
{
  vapi_msg_application_detach* result = vapi_alloc_application_detach(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_application_detach>;

template class Request<vapi_msg_application_detach, vapi_msg_application_detach_reply>;

using Application_detach = Request<vapi_msg_application_detach, vapi_msg_application_detach_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_application_attach>(vapi_msg_application_attach *msg)
{
  vapi_msg_application_attach_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_attach>(vapi_msg_application_attach *msg)
{
  vapi_msg_application_attach_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_attach>()
{
  return ::vapi_msg_id_application_attach; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_attach>>()
{
  return ::vapi_msg_id_application_attach; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_attach()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_attach>(vapi_msg_id_application_attach);
}

template <> inline vapi_msg_application_attach* vapi_alloc<vapi_msg_application_attach>(Connection &con)
{
  vapi_msg_application_attach* result = vapi_alloc_application_attach(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_application_attach>;

template class Request<vapi_msg_application_attach, vapi_msg_application_attach_reply>;

using Application_attach = Request<vapi_msg_application_attach, vapi_msg_application_attach_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_unbind_sock>(vapi_msg_unbind_sock *msg)
{
  vapi_msg_unbind_sock_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_unbind_sock>(vapi_msg_unbind_sock *msg)
{
  vapi_msg_unbind_sock_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_unbind_sock>()
{
  return ::vapi_msg_id_unbind_sock; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_unbind_sock>>()
{
  return ::vapi_msg_id_unbind_sock; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_unbind_sock()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_unbind_sock>(vapi_msg_id_unbind_sock);
}

template <> inline vapi_msg_unbind_sock* vapi_alloc<vapi_msg_unbind_sock>(Connection &con)
{
  vapi_msg_unbind_sock* result = vapi_alloc_unbind_sock(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_unbind_sock>;

template class Request<vapi_msg_unbind_sock, vapi_msg_unbind_sock_reply>;

using Unbind_sock = Request<vapi_msg_unbind_sock, vapi_msg_unbind_sock_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_connect_uri_reply>(vapi_msg_connect_uri_reply *msg)
{
  vapi_msg_connect_uri_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_connect_uri_reply>(vapi_msg_connect_uri_reply *msg)
{
  vapi_msg_connect_uri_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_connect_uri_reply>()
{
  return ::vapi_msg_id_connect_uri_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_connect_uri_reply>>()
{
  return ::vapi_msg_id_connect_uri_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_connect_uri_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_connect_uri_reply>(vapi_msg_id_connect_uri_reply);
}

template class Msg<vapi_msg_connect_uri_reply>;

using Connect_uri_reply = Msg<vapi_msg_connect_uri_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_session_rules_details>(vapi_msg_session_rules_details *msg)
{
  vapi_msg_session_rules_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_session_rules_details>(vapi_msg_session_rules_details *msg)
{
  vapi_msg_session_rules_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_session_rules_details>()
{
  return ::vapi_msg_id_session_rules_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_session_rules_details>>()
{
  return ::vapi_msg_id_session_rules_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_session_rules_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_session_rules_details>(vapi_msg_id_session_rules_details);
}

template class Msg<vapi_msg_session_rules_details>;

using Session_rules_details = Msg<vapi_msg_session_rules_details>;
template <> inline void vapi_swap_to_be<vapi_msg_map_another_segment>(vapi_msg_map_another_segment *msg)
{
  vapi_msg_map_another_segment_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_map_another_segment>(vapi_msg_map_another_segment *msg)
{
  vapi_msg_map_another_segment_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_map_another_segment>()
{
  return ::vapi_msg_id_map_another_segment; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_map_another_segment>>()
{
  return ::vapi_msg_id_map_another_segment; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_map_another_segment()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_map_another_segment>(vapi_msg_id_map_another_segment);
}

template <> inline vapi_msg_map_another_segment* vapi_alloc<vapi_msg_map_another_segment>(Connection &con)
{
  vapi_msg_map_another_segment* result = vapi_alloc_map_another_segment(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_map_another_segment>;

template class Request<vapi_msg_map_another_segment, vapi_msg_map_another_segment_reply>;

using Map_another_segment = Request<vapi_msg_map_another_segment, vapi_msg_map_another_segment_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_disconnect_session_reply>(vapi_msg_disconnect_session_reply *msg)
{
  vapi_msg_disconnect_session_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_disconnect_session_reply>(vapi_msg_disconnect_session_reply *msg)
{
  vapi_msg_disconnect_session_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_disconnect_session_reply>()
{
  return ::vapi_msg_id_disconnect_session_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_disconnect_session_reply>>()
{
  return ::vapi_msg_id_disconnect_session_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_disconnect_session_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_disconnect_session_reply>(vapi_msg_id_disconnect_session_reply);
}

template class Msg<vapi_msg_disconnect_session_reply>;

using Disconnect_session_reply = Msg<vapi_msg_disconnect_session_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_connect_uri>(vapi_msg_connect_uri *msg)
{
  vapi_msg_connect_uri_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_connect_uri>(vapi_msg_connect_uri *msg)
{
  vapi_msg_connect_uri_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_connect_uri>()
{
  return ::vapi_msg_id_connect_uri; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_connect_uri>>()
{
  return ::vapi_msg_id_connect_uri; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_connect_uri()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_connect_uri>(vapi_msg_id_connect_uri);
}

template <> inline vapi_msg_connect_uri* vapi_alloc<vapi_msg_connect_uri>(Connection &con)
{
  vapi_msg_connect_uri* result = vapi_alloc_connect_uri(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_connect_uri>;

template class Request<vapi_msg_connect_uri, vapi_msg_connect_uri_reply>;

using Connect_uri = Request<vapi_msg_connect_uri, vapi_msg_connect_uri_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_app_worker_add_del_reply>(vapi_msg_app_worker_add_del_reply *msg)
{
  vapi_msg_app_worker_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_app_worker_add_del_reply>(vapi_msg_app_worker_add_del_reply *msg)
{
  vapi_msg_app_worker_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_app_worker_add_del_reply>()
{
  return ::vapi_msg_id_app_worker_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_app_worker_add_del_reply>>()
{
  return ::vapi_msg_id_app_worker_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_app_worker_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_app_worker_add_del_reply>(vapi_msg_id_app_worker_add_del_reply);
}

template class Msg<vapi_msg_app_worker_add_del_reply>;

using App_worker_add_del_reply = Msg<vapi_msg_app_worker_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_application_tls_key_add_reply>(vapi_msg_application_tls_key_add_reply *msg)
{
  vapi_msg_application_tls_key_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_tls_key_add_reply>(vapi_msg_application_tls_key_add_reply *msg)
{
  vapi_msg_application_tls_key_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_tls_key_add_reply>()
{
  return ::vapi_msg_id_application_tls_key_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_tls_key_add_reply>>()
{
  return ::vapi_msg_id_application_tls_key_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_tls_key_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_tls_key_add_reply>(vapi_msg_id_application_tls_key_add_reply);
}

template class Msg<vapi_msg_application_tls_key_add_reply>;

using Application_tls_key_add_reply = Msg<vapi_msg_application_tls_key_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_app_cut_through_registration_add_reply>(vapi_msg_app_cut_through_registration_add_reply *msg)
{
  vapi_msg_app_cut_through_registration_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_app_cut_through_registration_add_reply>(vapi_msg_app_cut_through_registration_add_reply *msg)
{
  vapi_msg_app_cut_through_registration_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_app_cut_through_registration_add_reply>()
{
  return ::vapi_msg_id_app_cut_through_registration_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_app_cut_through_registration_add_reply>>()
{
  return ::vapi_msg_id_app_cut_through_registration_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_app_cut_through_registration_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_app_cut_through_registration_add_reply>(vapi_msg_id_app_cut_through_registration_add_reply);
}

template class Msg<vapi_msg_app_cut_through_registration_add_reply>;

using App_cut_through_registration_add_reply = Msg<vapi_msg_app_cut_through_registration_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_session_rules_dump>(vapi_msg_session_rules_dump *msg)
{
  vapi_msg_session_rules_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_session_rules_dump>(vapi_msg_session_rules_dump *msg)
{
  vapi_msg_session_rules_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_session_rules_dump>()
{
  return ::vapi_msg_id_session_rules_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_session_rules_dump>>()
{
  return ::vapi_msg_id_session_rules_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_session_rules_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_session_rules_dump>(vapi_msg_id_session_rules_dump);
}

template <> inline vapi_msg_session_rules_dump* vapi_alloc<vapi_msg_session_rules_dump>(Connection &con)
{
  vapi_msg_session_rules_dump* result = vapi_alloc_session_rules_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_session_rules_dump>;

template class Dump<vapi_msg_session_rules_dump, vapi_msg_session_rules_details>;

using Session_rules_dump = Dump<vapi_msg_session_rules_dump, vapi_msg_session_rules_details>;

template <> inline void vapi_swap_to_be<vapi_msg_unmap_segment>(vapi_msg_unmap_segment *msg)
{
  vapi_msg_unmap_segment_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_unmap_segment>(vapi_msg_unmap_segment *msg)
{
  vapi_msg_unmap_segment_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_unmap_segment>()
{
  return ::vapi_msg_id_unmap_segment; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_unmap_segment>>()
{
  return ::vapi_msg_id_unmap_segment; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_unmap_segment()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_unmap_segment>(vapi_msg_id_unmap_segment);
}

template <> inline vapi_msg_unmap_segment* vapi_alloc<vapi_msg_unmap_segment>(Connection &con)
{
  vapi_msg_unmap_segment* result = vapi_alloc_unmap_segment(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_unmap_segment>;

template class Request<vapi_msg_unmap_segment, vapi_msg_unmap_segment_reply>;

using Unmap_segment = Request<vapi_msg_unmap_segment, vapi_msg_unmap_segment_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_unbind_sock_reply>(vapi_msg_unbind_sock_reply *msg)
{
  vapi_msg_unbind_sock_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_unbind_sock_reply>(vapi_msg_unbind_sock_reply *msg)
{
  vapi_msg_unbind_sock_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_unbind_sock_reply>()
{
  return ::vapi_msg_id_unbind_sock_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_unbind_sock_reply>>()
{
  return ::vapi_msg_id_unbind_sock_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_unbind_sock_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_unbind_sock_reply>(vapi_msg_id_unbind_sock_reply);
}

template class Msg<vapi_msg_unbind_sock_reply>;

using Unbind_sock_reply = Msg<vapi_msg_unbind_sock_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_connect_sock>(vapi_msg_connect_sock *msg)
{
  vapi_msg_connect_sock_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_connect_sock>(vapi_msg_connect_sock *msg)
{
  vapi_msg_connect_sock_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_connect_sock>()
{
  return ::vapi_msg_id_connect_sock; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_connect_sock>>()
{
  return ::vapi_msg_id_connect_sock; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_connect_sock()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_connect_sock>(vapi_msg_id_connect_sock);
}

template <> inline vapi_msg_connect_sock* vapi_alloc<vapi_msg_connect_sock, size_t>(Connection &con, size_t _hostname_array_size)
{
  vapi_msg_connect_sock* result = vapi_alloc_connect_sock(con.vapi_ctx, _hostname_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_connect_sock>;

template class Request<vapi_msg_connect_sock, vapi_msg_connect_sock_reply, size_t>;

using Connect_sock = Request<vapi_msg_connect_sock, vapi_msg_connect_sock_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_unbind_uri>(vapi_msg_unbind_uri *msg)
{
  vapi_msg_unbind_uri_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_unbind_uri>(vapi_msg_unbind_uri *msg)
{
  vapi_msg_unbind_uri_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_unbind_uri>()
{
  return ::vapi_msg_id_unbind_uri; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_unbind_uri>>()
{
  return ::vapi_msg_id_unbind_uri; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_unbind_uri()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_unbind_uri>(vapi_msg_id_unbind_uri);
}

template <> inline vapi_msg_unbind_uri* vapi_alloc<vapi_msg_unbind_uri>(Connection &con)
{
  vapi_msg_unbind_uri* result = vapi_alloc_unbind_uri(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_unbind_uri>;

template class Request<vapi_msg_unbind_uri, vapi_msg_unbind_uri_reply>;

using Unbind_uri = Request<vapi_msg_unbind_uri, vapi_msg_unbind_uri_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_unbind_uri_reply>(vapi_msg_unbind_uri_reply *msg)
{
  vapi_msg_unbind_uri_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_unbind_uri_reply>(vapi_msg_unbind_uri_reply *msg)
{
  vapi_msg_unbind_uri_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_unbind_uri_reply>()
{
  return ::vapi_msg_id_unbind_uri_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_unbind_uri_reply>>()
{
  return ::vapi_msg_id_unbind_uri_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_unbind_uri_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_unbind_uri_reply>(vapi_msg_id_unbind_uri_reply);
}

template class Msg<vapi_msg_unbind_uri_reply>;

using Unbind_uri_reply = Msg<vapi_msg_unbind_uri_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_session_enable_disable_reply>(vapi_msg_session_enable_disable_reply *msg)
{
  vapi_msg_session_enable_disable_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_session_enable_disable_reply>(vapi_msg_session_enable_disable_reply *msg)
{
  vapi_msg_session_enable_disable_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_session_enable_disable_reply>()
{
  return ::vapi_msg_id_session_enable_disable_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_session_enable_disable_reply>>()
{
  return ::vapi_msg_id_session_enable_disable_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_session_enable_disable_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_session_enable_disable_reply>(vapi_msg_id_session_enable_disable_reply);
}

template class Msg<vapi_msg_session_enable_disable_reply>;

using Session_enable_disable_reply = Msg<vapi_msg_session_enable_disable_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_application_tls_key_add>(vapi_msg_application_tls_key_add *msg)
{
  vapi_msg_application_tls_key_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_tls_key_add>(vapi_msg_application_tls_key_add *msg)
{
  vapi_msg_application_tls_key_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_tls_key_add>()
{
  return ::vapi_msg_id_application_tls_key_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_tls_key_add>>()
{
  return ::vapi_msg_id_application_tls_key_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_tls_key_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_tls_key_add>(vapi_msg_id_application_tls_key_add);
}

template <> inline vapi_msg_application_tls_key_add* vapi_alloc<vapi_msg_application_tls_key_add, size_t>(Connection &con, size_t _key_array_size)
{
  vapi_msg_application_tls_key_add* result = vapi_alloc_application_tls_key_add(con.vapi_ctx, _key_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_application_tls_key_add>;

template class Request<vapi_msg_application_tls_key_add, vapi_msg_application_tls_key_add_reply, size_t>;

using Application_tls_key_add = Request<vapi_msg_application_tls_key_add, vapi_msg_application_tls_key_add_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_bind_sock>(vapi_msg_bind_sock *msg)
{
  vapi_msg_bind_sock_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_bind_sock>(vapi_msg_bind_sock *msg)
{
  vapi_msg_bind_sock_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_bind_sock>()
{
  return ::vapi_msg_id_bind_sock; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_bind_sock>>()
{
  return ::vapi_msg_id_bind_sock; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_bind_sock()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_bind_sock>(vapi_msg_id_bind_sock);
}

template <> inline vapi_msg_bind_sock* vapi_alloc<vapi_msg_bind_sock>(Connection &con)
{
  vapi_msg_bind_sock* result = vapi_alloc_bind_sock(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_bind_sock>;

template class Request<vapi_msg_bind_sock, vapi_msg_bind_sock_reply>;

using Bind_sock = Request<vapi_msg_bind_sock, vapi_msg_bind_sock_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_app_cut_through_registration_add>(vapi_msg_app_cut_through_registration_add *msg)
{
  vapi_msg_app_cut_through_registration_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_app_cut_through_registration_add>(vapi_msg_app_cut_through_registration_add *msg)
{
  vapi_msg_app_cut_through_registration_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_app_cut_through_registration_add>()
{
  return ::vapi_msg_id_app_cut_through_registration_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_app_cut_through_registration_add>>()
{
  return ::vapi_msg_id_app_cut_through_registration_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_app_cut_through_registration_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_app_cut_through_registration_add>(vapi_msg_id_app_cut_through_registration_add);
}

template <> inline vapi_msg_app_cut_through_registration_add* vapi_alloc<vapi_msg_app_cut_through_registration_add>(Connection &con)
{
  vapi_msg_app_cut_through_registration_add* result = vapi_alloc_app_cut_through_registration_add(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_app_cut_through_registration_add>;

template class Request<vapi_msg_app_cut_through_registration_add, vapi_msg_app_cut_through_registration_add_reply>;

using App_cut_through_registration_add = Request<vapi_msg_app_cut_through_registration_add, vapi_msg_app_cut_through_registration_add_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_bind_uri_reply>(vapi_msg_bind_uri_reply *msg)
{
  vapi_msg_bind_uri_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_bind_uri_reply>(vapi_msg_bind_uri_reply *msg)
{
  vapi_msg_bind_uri_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_bind_uri_reply>()
{
  return ::vapi_msg_id_bind_uri_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_bind_uri_reply>>()
{
  return ::vapi_msg_id_bind_uri_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_bind_uri_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_bind_uri_reply>(vapi_msg_id_bind_uri_reply);
}

template class Msg<vapi_msg_bind_uri_reply>;

using Bind_uri_reply = Msg<vapi_msg_bind_uri_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_application_detach_reply>(vapi_msg_application_detach_reply *msg)
{
  vapi_msg_application_detach_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_detach_reply>(vapi_msg_application_detach_reply *msg)
{
  vapi_msg_application_detach_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_detach_reply>()
{
  return ::vapi_msg_id_application_detach_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_detach_reply>>()
{
  return ::vapi_msg_id_application_detach_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_detach_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_detach_reply>(vapi_msg_id_application_detach_reply);
}

template class Msg<vapi_msg_application_detach_reply>;

using Application_detach_reply = Msg<vapi_msg_application_detach_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_app_worker_add_del>(vapi_msg_app_worker_add_del *msg)
{
  vapi_msg_app_worker_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_app_worker_add_del>(vapi_msg_app_worker_add_del *msg)
{
  vapi_msg_app_worker_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_app_worker_add_del>()
{
  return ::vapi_msg_id_app_worker_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_app_worker_add_del>>()
{
  return ::vapi_msg_id_app_worker_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_app_worker_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_app_worker_add_del>(vapi_msg_id_app_worker_add_del);
}

template <> inline vapi_msg_app_worker_add_del* vapi_alloc<vapi_msg_app_worker_add_del>(Connection &con)
{
  vapi_msg_app_worker_add_del* result = vapi_alloc_app_worker_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_app_worker_add_del>;

template class Request<vapi_msg_app_worker_add_del, vapi_msg_app_worker_add_del_reply>;

using App_worker_add_del = Request<vapi_msg_app_worker_add_del, vapi_msg_app_worker_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_application_attach_reply>(vapi_msg_application_attach_reply *msg)
{
  vapi_msg_application_attach_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_attach_reply>(vapi_msg_application_attach_reply *msg)
{
  vapi_msg_application_attach_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_attach_reply>()
{
  return ::vapi_msg_id_application_attach_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_attach_reply>>()
{
  return ::vapi_msg_id_application_attach_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_attach_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_attach_reply>(vapi_msg_id_application_attach_reply);
}

template class Msg<vapi_msg_application_attach_reply>;

using Application_attach_reply = Msg<vapi_msg_application_attach_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_session_rule_add_del_reply>(vapi_msg_session_rule_add_del_reply *msg)
{
  vapi_msg_session_rule_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_session_rule_add_del_reply>(vapi_msg_session_rule_add_del_reply *msg)
{
  vapi_msg_session_rule_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_session_rule_add_del_reply>()
{
  return ::vapi_msg_id_session_rule_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_session_rule_add_del_reply>>()
{
  return ::vapi_msg_id_session_rule_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_session_rule_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_session_rule_add_del_reply>(vapi_msg_id_session_rule_add_del_reply);
}

template class Msg<vapi_msg_session_rule_add_del_reply>;

using Session_rule_add_del_reply = Msg<vapi_msg_session_rule_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_app_namespace_add_del>(vapi_msg_app_namespace_add_del *msg)
{
  vapi_msg_app_namespace_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_app_namespace_add_del>(vapi_msg_app_namespace_add_del *msg)
{
  vapi_msg_app_namespace_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_app_namespace_add_del>()
{
  return ::vapi_msg_id_app_namespace_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_app_namespace_add_del>>()
{
  return ::vapi_msg_id_app_namespace_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_app_namespace_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_app_namespace_add_del>(vapi_msg_id_app_namespace_add_del);
}

template <> inline vapi_msg_app_namespace_add_del* vapi_alloc<vapi_msg_app_namespace_add_del>(Connection &con)
{
  vapi_msg_app_namespace_add_del* result = vapi_alloc_app_namespace_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_app_namespace_add_del>;

template class Request<vapi_msg_app_namespace_add_del, vapi_msg_app_namespace_add_del_reply>;

using App_namespace_add_del = Request<vapi_msg_app_namespace_add_del, vapi_msg_app_namespace_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_map_another_segment_reply>(vapi_msg_map_another_segment_reply *msg)
{
  vapi_msg_map_another_segment_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_map_another_segment_reply>(vapi_msg_map_another_segment_reply *msg)
{
  vapi_msg_map_another_segment_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_map_another_segment_reply>()
{
  return ::vapi_msg_id_map_another_segment_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_map_another_segment_reply>>()
{
  return ::vapi_msg_id_map_another_segment_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_map_another_segment_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_map_another_segment_reply>(vapi_msg_id_map_another_segment_reply);
}

template class Msg<vapi_msg_map_another_segment_reply>;

using Map_another_segment_reply = Msg<vapi_msg_map_another_segment_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_session_rule_add_del>(vapi_msg_session_rule_add_del *msg)
{
  vapi_msg_session_rule_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_session_rule_add_del>(vapi_msg_session_rule_add_del *msg)
{
  vapi_msg_session_rule_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_session_rule_add_del>()
{
  return ::vapi_msg_id_session_rule_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_session_rule_add_del>>()
{
  return ::vapi_msg_id_session_rule_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_session_rule_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_session_rule_add_del>(vapi_msg_id_session_rule_add_del);
}

template <> inline vapi_msg_session_rule_add_del* vapi_alloc<vapi_msg_session_rule_add_del>(Connection &con)
{
  vapi_msg_session_rule_add_del* result = vapi_alloc_session_rule_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_session_rule_add_del>;

template class Request<vapi_msg_session_rule_add_del, vapi_msg_session_rule_add_del_reply>;

using Session_rule_add_del = Request<vapi_msg_session_rule_add_del, vapi_msg_session_rule_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_bind_sock_reply>(vapi_msg_bind_sock_reply *msg)
{
  vapi_msg_bind_sock_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_bind_sock_reply>(vapi_msg_bind_sock_reply *msg)
{
  vapi_msg_bind_sock_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_bind_sock_reply>()
{
  return ::vapi_msg_id_bind_sock_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_bind_sock_reply>>()
{
  return ::vapi_msg_id_bind_sock_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_bind_sock_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_bind_sock_reply>(vapi_msg_id_bind_sock_reply);
}

template class Msg<vapi_msg_bind_sock_reply>;

using Bind_sock_reply = Msg<vapi_msg_bind_sock_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_app_namespace_add_del_reply>(vapi_msg_app_namespace_add_del_reply *msg)
{
  vapi_msg_app_namespace_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_app_namespace_add_del_reply>(vapi_msg_app_namespace_add_del_reply *msg)
{
  vapi_msg_app_namespace_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_app_namespace_add_del_reply>()
{
  return ::vapi_msg_id_app_namespace_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_app_namespace_add_del_reply>>()
{
  return ::vapi_msg_id_app_namespace_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_app_namespace_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_app_namespace_add_del_reply>(vapi_msg_id_app_namespace_add_del_reply);
}

template class Msg<vapi_msg_app_namespace_add_del_reply>;

using App_namespace_add_del_reply = Msg<vapi_msg_app_namespace_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_bind_uri>(vapi_msg_bind_uri *msg)
{
  vapi_msg_bind_uri_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_bind_uri>(vapi_msg_bind_uri *msg)
{
  vapi_msg_bind_uri_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_bind_uri>()
{
  return ::vapi_msg_id_bind_uri; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_bind_uri>>()
{
  return ::vapi_msg_id_bind_uri; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_bind_uri()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_bind_uri>(vapi_msg_id_bind_uri);
}

template <> inline vapi_msg_bind_uri* vapi_alloc<vapi_msg_bind_uri>(Connection &con)
{
  vapi_msg_bind_uri* result = vapi_alloc_bind_uri(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_bind_uri>;

template class Request<vapi_msg_bind_uri, vapi_msg_bind_uri_reply>;

using Bind_uri = Request<vapi_msg_bind_uri, vapi_msg_bind_uri_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_unmap_segment_reply>(vapi_msg_unmap_segment_reply *msg)
{
  vapi_msg_unmap_segment_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_unmap_segment_reply>(vapi_msg_unmap_segment_reply *msg)
{
  vapi_msg_unmap_segment_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_unmap_segment_reply>()
{
  return ::vapi_msg_id_unmap_segment_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_unmap_segment_reply>>()
{
  return ::vapi_msg_id_unmap_segment_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_unmap_segment_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_unmap_segment_reply>(vapi_msg_id_unmap_segment_reply);
}

template class Msg<vapi_msg_unmap_segment_reply>;

using Unmap_segment_reply = Msg<vapi_msg_unmap_segment_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_disconnect_session>(vapi_msg_disconnect_session *msg)
{
  vapi_msg_disconnect_session_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_disconnect_session>(vapi_msg_disconnect_session *msg)
{
  vapi_msg_disconnect_session_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_disconnect_session>()
{
  return ::vapi_msg_id_disconnect_session; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_disconnect_session>>()
{
  return ::vapi_msg_id_disconnect_session; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_disconnect_session()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_disconnect_session>(vapi_msg_id_disconnect_session);
}

template <> inline vapi_msg_disconnect_session* vapi_alloc<vapi_msg_disconnect_session>(Connection &con)
{
  vapi_msg_disconnect_session* result = vapi_alloc_disconnect_session(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_disconnect_session>;

template class Request<vapi_msg_disconnect_session, vapi_msg_disconnect_session_reply>;

using Disconnect_session = Request<vapi_msg_disconnect_session, vapi_msg_disconnect_session_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_application_tls_cert_add_reply>(vapi_msg_application_tls_cert_add_reply *msg)
{
  vapi_msg_application_tls_cert_add_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_tls_cert_add_reply>(vapi_msg_application_tls_cert_add_reply *msg)
{
  vapi_msg_application_tls_cert_add_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_tls_cert_add_reply>()
{
  return ::vapi_msg_id_application_tls_cert_add_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_tls_cert_add_reply>>()
{
  return ::vapi_msg_id_application_tls_cert_add_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_tls_cert_add_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_tls_cert_add_reply>(vapi_msg_id_application_tls_cert_add_reply);
}

template class Msg<vapi_msg_application_tls_cert_add_reply>;

using Application_tls_cert_add_reply = Msg<vapi_msg_application_tls_cert_add_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_connect_sock_reply>(vapi_msg_connect_sock_reply *msg)
{
  vapi_msg_connect_sock_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_connect_sock_reply>(vapi_msg_connect_sock_reply *msg)
{
  vapi_msg_connect_sock_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_connect_sock_reply>()
{
  return ::vapi_msg_id_connect_sock_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_connect_sock_reply>>()
{
  return ::vapi_msg_id_connect_sock_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_connect_sock_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_connect_sock_reply>(vapi_msg_id_connect_sock_reply);
}

template class Msg<vapi_msg_connect_sock_reply>;

using Connect_sock_reply = Msg<vapi_msg_connect_sock_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_application_tls_cert_add>(vapi_msg_application_tls_cert_add *msg)
{
  vapi_msg_application_tls_cert_add_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_application_tls_cert_add>(vapi_msg_application_tls_cert_add *msg)
{
  vapi_msg_application_tls_cert_add_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_application_tls_cert_add>()
{
  return ::vapi_msg_id_application_tls_cert_add; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_application_tls_cert_add>>()
{
  return ::vapi_msg_id_application_tls_cert_add; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_application_tls_cert_add()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_application_tls_cert_add>(vapi_msg_id_application_tls_cert_add);
}

template <> inline vapi_msg_application_tls_cert_add* vapi_alloc<vapi_msg_application_tls_cert_add, size_t>(Connection &con, size_t _cert_array_size)
{
  vapi_msg_application_tls_cert_add* result = vapi_alloc_application_tls_cert_add(con.vapi_ctx, _cert_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_application_tls_cert_add>;

template class Request<vapi_msg_application_tls_cert_add, vapi_msg_application_tls_cert_add_reply, size_t>;

using Application_tls_cert_add = Request<vapi_msg_application_tls_cert_add, vapi_msg_application_tls_cert_add_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_session_enable_disable>(vapi_msg_session_enable_disable *msg)
{
  vapi_msg_session_enable_disable_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_session_enable_disable>(vapi_msg_session_enable_disable *msg)
{
  vapi_msg_session_enable_disable_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_session_enable_disable>()
{
  return ::vapi_msg_id_session_enable_disable; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_session_enable_disable>>()
{
  return ::vapi_msg_id_session_enable_disable; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_session_enable_disable()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_session_enable_disable>(vapi_msg_id_session_enable_disable);
}

template <> inline vapi_msg_session_enable_disable* vapi_alloc<vapi_msg_session_enable_disable>(Connection &con)
{
  vapi_msg_session_enable_disable* result = vapi_alloc_session_enable_disable(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_session_enable_disable>;

template class Request<vapi_msg_session_enable_disable, vapi_msg_session_enable_disable_reply>;

using Session_enable_disable = Request<vapi_msg_session_enable_disable, vapi_msg_session_enable_disable_reply>;

}
#endif
