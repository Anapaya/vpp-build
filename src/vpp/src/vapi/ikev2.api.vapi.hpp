#ifndef __included_hpp_ikev2_api_json
#define __included_hpp_ikev2_api_json

#include <vapi/vapi.hpp>
#include <vapi/ikev2.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_local_key>(vapi_msg_ikev2_set_local_key *msg)
{
  vapi_msg_ikev2_set_local_key_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_local_key>(vapi_msg_ikev2_set_local_key *msg)
{
  vapi_msg_ikev2_set_local_key_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_local_key>()
{
  return ::vapi_msg_id_ikev2_set_local_key; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_local_key>>()
{
  return ::vapi_msg_id_ikev2_set_local_key; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_local_key()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_local_key>(vapi_msg_id_ikev2_set_local_key);
}

template <> inline vapi_msg_ikev2_set_local_key* vapi_alloc<vapi_msg_ikev2_set_local_key>(Connection &con)
{
  vapi_msg_ikev2_set_local_key* result = vapi_alloc_ikev2_set_local_key(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_set_local_key>;

template class Request<vapi_msg_ikev2_set_local_key, vapi_msg_ikev2_set_local_key_reply>;

using Ikev2_set_local_key = Request<vapi_msg_ikev2_set_local_key, vapi_msg_ikev2_set_local_key_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_responder>(vapi_msg_ikev2_set_responder *msg)
{
  vapi_msg_ikev2_set_responder_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_responder>(vapi_msg_ikev2_set_responder *msg)
{
  vapi_msg_ikev2_set_responder_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_responder>()
{
  return ::vapi_msg_id_ikev2_set_responder; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_responder>>()
{
  return ::vapi_msg_id_ikev2_set_responder; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_responder()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_responder>(vapi_msg_id_ikev2_set_responder);
}

template <> inline vapi_msg_ikev2_set_responder* vapi_alloc<vapi_msg_ikev2_set_responder>(Connection &con)
{
  vapi_msg_ikev2_set_responder* result = vapi_alloc_ikev2_set_responder(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_set_responder>;

template class Request<vapi_msg_ikev2_set_responder, vapi_msg_ikev2_set_responder_reply>;

using Ikev2_set_responder = Request<vapi_msg_ikev2_set_responder, vapi_msg_ikev2_set_responder_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_responder_reply>(vapi_msg_ikev2_set_responder_reply *msg)
{
  vapi_msg_ikev2_set_responder_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_responder_reply>(vapi_msg_ikev2_set_responder_reply *msg)
{
  vapi_msg_ikev2_set_responder_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_responder_reply>()
{
  return ::vapi_msg_id_ikev2_set_responder_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_responder_reply>>()
{
  return ::vapi_msg_id_ikev2_set_responder_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_responder_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_responder_reply>(vapi_msg_id_ikev2_set_responder_reply);
}

template class Msg<vapi_msg_ikev2_set_responder_reply>;

using Ikev2_set_responder_reply = Msg<vapi_msg_ikev2_set_responder_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_esp_transforms_reply>(vapi_msg_ikev2_set_esp_transforms_reply *msg)
{
  vapi_msg_ikev2_set_esp_transforms_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_esp_transforms_reply>(vapi_msg_ikev2_set_esp_transforms_reply *msg)
{
  vapi_msg_ikev2_set_esp_transforms_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_esp_transforms_reply>()
{
  return ::vapi_msg_id_ikev2_set_esp_transforms_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_esp_transforms_reply>>()
{
  return ::vapi_msg_id_ikev2_set_esp_transforms_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_esp_transforms_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_esp_transforms_reply>(vapi_msg_id_ikev2_set_esp_transforms_reply);
}

template class Msg<vapi_msg_ikev2_set_esp_transforms_reply>;

using Ikev2_set_esp_transforms_reply = Msg<vapi_msg_ikev2_set_esp_transforms_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_sa_init>(vapi_msg_ikev2_initiate_sa_init *msg)
{
  vapi_msg_ikev2_initiate_sa_init_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_sa_init>(vapi_msg_ikev2_initiate_sa_init *msg)
{
  vapi_msg_ikev2_initiate_sa_init_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_sa_init>()
{
  return ::vapi_msg_id_ikev2_initiate_sa_init; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_sa_init>>()
{
  return ::vapi_msg_id_ikev2_initiate_sa_init; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_sa_init()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_sa_init>(vapi_msg_id_ikev2_initiate_sa_init);
}

template <> inline vapi_msg_ikev2_initiate_sa_init* vapi_alloc<vapi_msg_ikev2_initiate_sa_init>(Connection &con)
{
  vapi_msg_ikev2_initiate_sa_init* result = vapi_alloc_ikev2_initiate_sa_init(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_initiate_sa_init>;

template class Request<vapi_msg_ikev2_initiate_sa_init, vapi_msg_ikev2_initiate_sa_init_reply>;

using Ikev2_initiate_sa_init = Request<vapi_msg_ikev2_initiate_sa_init, vapi_msg_ikev2_initiate_sa_init_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_del_ike_sa>(vapi_msg_ikev2_initiate_del_ike_sa *msg)
{
  vapi_msg_ikev2_initiate_del_ike_sa_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_del_ike_sa>(vapi_msg_ikev2_initiate_del_ike_sa *msg)
{
  vapi_msg_ikev2_initiate_del_ike_sa_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_del_ike_sa>()
{
  return ::vapi_msg_id_ikev2_initiate_del_ike_sa; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_del_ike_sa>>()
{
  return ::vapi_msg_id_ikev2_initiate_del_ike_sa; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_del_ike_sa()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_del_ike_sa>(vapi_msg_id_ikev2_initiate_del_ike_sa);
}

template <> inline vapi_msg_ikev2_initiate_del_ike_sa* vapi_alloc<vapi_msg_ikev2_initiate_del_ike_sa>(Connection &con)
{
  vapi_msg_ikev2_initiate_del_ike_sa* result = vapi_alloc_ikev2_initiate_del_ike_sa(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_initiate_del_ike_sa>;

template class Request<vapi_msg_ikev2_initiate_del_ike_sa, vapi_msg_ikev2_initiate_del_ike_sa_reply>;

using Ikev2_initiate_del_ike_sa = Request<vapi_msg_ikev2_initiate_del_ike_sa, vapi_msg_ikev2_initiate_del_ike_sa_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_rekey_child_sa_reply>(vapi_msg_ikev2_initiate_rekey_child_sa_reply *msg)
{
  vapi_msg_ikev2_initiate_rekey_child_sa_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_rekey_child_sa_reply>(vapi_msg_ikev2_initiate_rekey_child_sa_reply *msg)
{
  vapi_msg_ikev2_initiate_rekey_child_sa_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_rekey_child_sa_reply>()
{
  return ::vapi_msg_id_ikev2_initiate_rekey_child_sa_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_rekey_child_sa_reply>>()
{
  return ::vapi_msg_id_ikev2_initiate_rekey_child_sa_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_rekey_child_sa_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_rekey_child_sa_reply>(vapi_msg_id_ikev2_initiate_rekey_child_sa_reply);
}

template class Msg<vapi_msg_ikev2_initiate_rekey_child_sa_reply>;

using Ikev2_initiate_rekey_child_sa_reply = Msg<vapi_msg_ikev2_initiate_rekey_child_sa_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_add_del_reply>(vapi_msg_ikev2_profile_add_del_reply *msg)
{
  vapi_msg_ikev2_profile_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_add_del_reply>(vapi_msg_ikev2_profile_add_del_reply *msg)
{
  vapi_msg_ikev2_profile_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_add_del_reply>()
{
  return ::vapi_msg_id_ikev2_profile_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_add_del_reply>>()
{
  return ::vapi_msg_id_ikev2_profile_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_add_del_reply>(vapi_msg_id_ikev2_profile_add_del_reply);
}

template class Msg<vapi_msg_ikev2_profile_add_del_reply>;

using Ikev2_profile_add_del_reply = Msg<vapi_msg_ikev2_profile_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_del_ike_sa_reply>(vapi_msg_ikev2_initiate_del_ike_sa_reply *msg)
{
  vapi_msg_ikev2_initiate_del_ike_sa_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_del_ike_sa_reply>(vapi_msg_ikev2_initiate_del_ike_sa_reply *msg)
{
  vapi_msg_ikev2_initiate_del_ike_sa_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_del_ike_sa_reply>()
{
  return ::vapi_msg_id_ikev2_initiate_del_ike_sa_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_del_ike_sa_reply>>()
{
  return ::vapi_msg_id_ikev2_initiate_del_ike_sa_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_del_ike_sa_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_del_ike_sa_reply>(vapi_msg_id_ikev2_initiate_del_ike_sa_reply);
}

template class Msg<vapi_msg_ikev2_initiate_del_ike_sa_reply>;

using Ikev2_initiate_del_ike_sa_reply = Msg<vapi_msg_ikev2_initiate_del_ike_sa_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_plugin_get_version>(vapi_msg_ikev2_plugin_get_version *msg)
{
  vapi_msg_ikev2_plugin_get_version_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_plugin_get_version>(vapi_msg_ikev2_plugin_get_version *msg)
{
  vapi_msg_ikev2_plugin_get_version_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_plugin_get_version>()
{
  return ::vapi_msg_id_ikev2_plugin_get_version; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_plugin_get_version>>()
{
  return ::vapi_msg_id_ikev2_plugin_get_version; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_plugin_get_version()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_plugin_get_version>(vapi_msg_id_ikev2_plugin_get_version);
}

template <> inline vapi_msg_ikev2_plugin_get_version* vapi_alloc<vapi_msg_ikev2_plugin_get_version>(Connection &con)
{
  vapi_msg_ikev2_plugin_get_version* result = vapi_alloc_ikev2_plugin_get_version(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_plugin_get_version>;

template class Request<vapi_msg_ikev2_plugin_get_version, vapi_msg_ikev2_plugin_get_version_reply>;

using Ikev2_plugin_get_version = Request<vapi_msg_ikev2_plugin_get_version, vapi_msg_ikev2_plugin_get_version_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_add_del>(vapi_msg_ikev2_profile_add_del *msg)
{
  vapi_msg_ikev2_profile_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_add_del>(vapi_msg_ikev2_profile_add_del *msg)
{
  vapi_msg_ikev2_profile_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_add_del>()
{
  return ::vapi_msg_id_ikev2_profile_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_add_del>>()
{
  return ::vapi_msg_id_ikev2_profile_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_add_del>(vapi_msg_id_ikev2_profile_add_del);
}

template <> inline vapi_msg_ikev2_profile_add_del* vapi_alloc<vapi_msg_ikev2_profile_add_del>(Connection &con)
{
  vapi_msg_ikev2_profile_add_del* result = vapi_alloc_ikev2_profile_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_profile_add_del>;

template class Request<vapi_msg_ikev2_profile_add_del, vapi_msg_ikev2_profile_add_del_reply>;

using Ikev2_profile_add_del = Request<vapi_msg_ikev2_profile_add_del, vapi_msg_ikev2_profile_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_ike_transforms_reply>(vapi_msg_ikev2_set_ike_transforms_reply *msg)
{
  vapi_msg_ikev2_set_ike_transforms_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_ike_transforms_reply>(vapi_msg_ikev2_set_ike_transforms_reply *msg)
{
  vapi_msg_ikev2_set_ike_transforms_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_ike_transforms_reply>()
{
  return ::vapi_msg_id_ikev2_set_ike_transforms_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_ike_transforms_reply>>()
{
  return ::vapi_msg_id_ikev2_set_ike_transforms_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_ike_transforms_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_ike_transforms_reply>(vapi_msg_id_ikev2_set_ike_transforms_reply);
}

template class Msg<vapi_msg_ikev2_set_ike_transforms_reply>;

using Ikev2_set_ike_transforms_reply = Msg<vapi_msg_ikev2_set_ike_transforms_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_sa_lifetime>(vapi_msg_ikev2_set_sa_lifetime *msg)
{
  vapi_msg_ikev2_set_sa_lifetime_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_sa_lifetime>(vapi_msg_ikev2_set_sa_lifetime *msg)
{
  vapi_msg_ikev2_set_sa_lifetime_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_sa_lifetime>()
{
  return ::vapi_msg_id_ikev2_set_sa_lifetime; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_sa_lifetime>>()
{
  return ::vapi_msg_id_ikev2_set_sa_lifetime; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_sa_lifetime()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_sa_lifetime>(vapi_msg_id_ikev2_set_sa_lifetime);
}

template <> inline vapi_msg_ikev2_set_sa_lifetime* vapi_alloc<vapi_msg_ikev2_set_sa_lifetime>(Connection &con)
{
  vapi_msg_ikev2_set_sa_lifetime* result = vapi_alloc_ikev2_set_sa_lifetime(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_set_sa_lifetime>;

template class Request<vapi_msg_ikev2_set_sa_lifetime, vapi_msg_ikev2_set_sa_lifetime_reply>;

using Ikev2_set_sa_lifetime = Request<vapi_msg_ikev2_set_sa_lifetime, vapi_msg_ikev2_set_sa_lifetime_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_rekey_child_sa>(vapi_msg_ikev2_initiate_rekey_child_sa *msg)
{
  vapi_msg_ikev2_initiate_rekey_child_sa_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_rekey_child_sa>(vapi_msg_ikev2_initiate_rekey_child_sa *msg)
{
  vapi_msg_ikev2_initiate_rekey_child_sa_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_rekey_child_sa>()
{
  return ::vapi_msg_id_ikev2_initiate_rekey_child_sa; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_rekey_child_sa>>()
{
  return ::vapi_msg_id_ikev2_initiate_rekey_child_sa; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_rekey_child_sa()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_rekey_child_sa>(vapi_msg_id_ikev2_initiate_rekey_child_sa);
}

template <> inline vapi_msg_ikev2_initiate_rekey_child_sa* vapi_alloc<vapi_msg_ikev2_initiate_rekey_child_sa>(Connection &con)
{
  vapi_msg_ikev2_initiate_rekey_child_sa* result = vapi_alloc_ikev2_initiate_rekey_child_sa(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_initiate_rekey_child_sa>;

template class Request<vapi_msg_ikev2_initiate_rekey_child_sa, vapi_msg_ikev2_initiate_rekey_child_sa_reply>;

using Ikev2_initiate_rekey_child_sa = Request<vapi_msg_ikev2_initiate_rekey_child_sa, vapi_msg_ikev2_initiate_rekey_child_sa_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_sa_lifetime_reply>(vapi_msg_ikev2_set_sa_lifetime_reply *msg)
{
  vapi_msg_ikev2_set_sa_lifetime_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_sa_lifetime_reply>(vapi_msg_ikev2_set_sa_lifetime_reply *msg)
{
  vapi_msg_ikev2_set_sa_lifetime_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_sa_lifetime_reply>()
{
  return ::vapi_msg_id_ikev2_set_sa_lifetime_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_sa_lifetime_reply>>()
{
  return ::vapi_msg_id_ikev2_set_sa_lifetime_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_sa_lifetime_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_sa_lifetime_reply>(vapi_msg_id_ikev2_set_sa_lifetime_reply);
}

template class Msg<vapi_msg_ikev2_set_sa_lifetime_reply>;

using Ikev2_set_sa_lifetime_reply = Msg<vapi_msg_ikev2_set_sa_lifetime_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_set_auth>(vapi_msg_ikev2_profile_set_auth *msg)
{
  vapi_msg_ikev2_profile_set_auth_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_set_auth>(vapi_msg_ikev2_profile_set_auth *msg)
{
  vapi_msg_ikev2_profile_set_auth_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_set_auth>()
{
  return ::vapi_msg_id_ikev2_profile_set_auth; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_set_auth>>()
{
  return ::vapi_msg_id_ikev2_profile_set_auth; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_set_auth()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_set_auth>(vapi_msg_id_ikev2_profile_set_auth);
}

template <> inline vapi_msg_ikev2_profile_set_auth* vapi_alloc<vapi_msg_ikev2_profile_set_auth, size_t>(Connection &con, size_t _data_array_size)
{
  vapi_msg_ikev2_profile_set_auth* result = vapi_alloc_ikev2_profile_set_auth(con.vapi_ctx, _data_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_profile_set_auth>;

template class Request<vapi_msg_ikev2_profile_set_auth, vapi_msg_ikev2_profile_set_auth_reply, size_t>;

using Ikev2_profile_set_auth = Request<vapi_msg_ikev2_profile_set_auth, vapi_msg_ikev2_profile_set_auth_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_plugin_get_version_reply>(vapi_msg_ikev2_plugin_get_version_reply *msg)
{
  vapi_msg_ikev2_plugin_get_version_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_plugin_get_version_reply>(vapi_msg_ikev2_plugin_get_version_reply *msg)
{
  vapi_msg_ikev2_plugin_get_version_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_plugin_get_version_reply>()
{
  return ::vapi_msg_id_ikev2_plugin_get_version_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_plugin_get_version_reply>>()
{
  return ::vapi_msg_id_ikev2_plugin_get_version_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_plugin_get_version_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_plugin_get_version_reply>(vapi_msg_id_ikev2_plugin_get_version_reply);
}

template class Msg<vapi_msg_ikev2_plugin_get_version_reply>;

using Ikev2_plugin_get_version_reply = Msg<vapi_msg_ikev2_plugin_get_version_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_del_child_sa_reply>(vapi_msg_ikev2_initiate_del_child_sa_reply *msg)
{
  vapi_msg_ikev2_initiate_del_child_sa_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_del_child_sa_reply>(vapi_msg_ikev2_initiate_del_child_sa_reply *msg)
{
  vapi_msg_ikev2_initiate_del_child_sa_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_del_child_sa_reply>()
{
  return ::vapi_msg_id_ikev2_initiate_del_child_sa_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_del_child_sa_reply>>()
{
  return ::vapi_msg_id_ikev2_initiate_del_child_sa_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_del_child_sa_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_del_child_sa_reply>(vapi_msg_id_ikev2_initiate_del_child_sa_reply);
}

template class Msg<vapi_msg_ikev2_initiate_del_child_sa_reply>;

using Ikev2_initiate_del_child_sa_reply = Msg<vapi_msg_ikev2_initiate_del_child_sa_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_ike_transforms>(vapi_msg_ikev2_set_ike_transforms *msg)
{
  vapi_msg_ikev2_set_ike_transforms_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_ike_transforms>(vapi_msg_ikev2_set_ike_transforms *msg)
{
  vapi_msg_ikev2_set_ike_transforms_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_ike_transforms>()
{
  return ::vapi_msg_id_ikev2_set_ike_transforms; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_ike_transforms>>()
{
  return ::vapi_msg_id_ikev2_set_ike_transforms; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_ike_transforms()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_ike_transforms>(vapi_msg_id_ikev2_set_ike_transforms);
}

template <> inline vapi_msg_ikev2_set_ike_transforms* vapi_alloc<vapi_msg_ikev2_set_ike_transforms>(Connection &con)
{
  vapi_msg_ikev2_set_ike_transforms* result = vapi_alloc_ikev2_set_ike_transforms(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_set_ike_transforms>;

template class Request<vapi_msg_ikev2_set_ike_transforms, vapi_msg_ikev2_set_ike_transforms_reply>;

using Ikev2_set_ike_transforms = Request<vapi_msg_ikev2_set_ike_transforms, vapi_msg_ikev2_set_ike_transforms_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_esp_transforms>(vapi_msg_ikev2_set_esp_transforms *msg)
{
  vapi_msg_ikev2_set_esp_transforms_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_esp_transforms>(vapi_msg_ikev2_set_esp_transforms *msg)
{
  vapi_msg_ikev2_set_esp_transforms_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_esp_transforms>()
{
  return ::vapi_msg_id_ikev2_set_esp_transforms; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_esp_transforms>>()
{
  return ::vapi_msg_id_ikev2_set_esp_transforms; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_esp_transforms()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_esp_transforms>(vapi_msg_id_ikev2_set_esp_transforms);
}

template <> inline vapi_msg_ikev2_set_esp_transforms* vapi_alloc<vapi_msg_ikev2_set_esp_transforms>(Connection &con)
{
  vapi_msg_ikev2_set_esp_transforms* result = vapi_alloc_ikev2_set_esp_transforms(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_set_esp_transforms>;

template class Request<vapi_msg_ikev2_set_esp_transforms, vapi_msg_ikev2_set_esp_transforms_reply>;

using Ikev2_set_esp_transforms = Request<vapi_msg_ikev2_set_esp_transforms, vapi_msg_ikev2_set_esp_transforms_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_set_local_key_reply>(vapi_msg_ikev2_set_local_key_reply *msg)
{
  vapi_msg_ikev2_set_local_key_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_set_local_key_reply>(vapi_msg_ikev2_set_local_key_reply *msg)
{
  vapi_msg_ikev2_set_local_key_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_set_local_key_reply>()
{
  return ::vapi_msg_id_ikev2_set_local_key_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_set_local_key_reply>>()
{
  return ::vapi_msg_id_ikev2_set_local_key_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_set_local_key_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_set_local_key_reply>(vapi_msg_id_ikev2_set_local_key_reply);
}

template class Msg<vapi_msg_ikev2_set_local_key_reply>;

using Ikev2_set_local_key_reply = Msg<vapi_msg_ikev2_set_local_key_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_set_id>(vapi_msg_ikev2_profile_set_id *msg)
{
  vapi_msg_ikev2_profile_set_id_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_set_id>(vapi_msg_ikev2_profile_set_id *msg)
{
  vapi_msg_ikev2_profile_set_id_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_set_id>()
{
  return ::vapi_msg_id_ikev2_profile_set_id; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_set_id>>()
{
  return ::vapi_msg_id_ikev2_profile_set_id; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_set_id()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_set_id>(vapi_msg_id_ikev2_profile_set_id);
}

template <> inline vapi_msg_ikev2_profile_set_id* vapi_alloc<vapi_msg_ikev2_profile_set_id, size_t>(Connection &con, size_t _data_array_size)
{
  vapi_msg_ikev2_profile_set_id* result = vapi_alloc_ikev2_profile_set_id(con.vapi_ctx, _data_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_profile_set_id>;

template class Request<vapi_msg_ikev2_profile_set_id, vapi_msg_ikev2_profile_set_id_reply, size_t>;

using Ikev2_profile_set_id = Request<vapi_msg_ikev2_profile_set_id, vapi_msg_ikev2_profile_set_id_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_del_child_sa>(vapi_msg_ikev2_initiate_del_child_sa *msg)
{
  vapi_msg_ikev2_initiate_del_child_sa_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_del_child_sa>(vapi_msg_ikev2_initiate_del_child_sa *msg)
{
  vapi_msg_ikev2_initiate_del_child_sa_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_del_child_sa>()
{
  return ::vapi_msg_id_ikev2_initiate_del_child_sa; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_del_child_sa>>()
{
  return ::vapi_msg_id_ikev2_initiate_del_child_sa; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_del_child_sa()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_del_child_sa>(vapi_msg_id_ikev2_initiate_del_child_sa);
}

template <> inline vapi_msg_ikev2_initiate_del_child_sa* vapi_alloc<vapi_msg_ikev2_initiate_del_child_sa>(Connection &con)
{
  vapi_msg_ikev2_initiate_del_child_sa* result = vapi_alloc_ikev2_initiate_del_child_sa(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_initiate_del_child_sa>;

template class Request<vapi_msg_ikev2_initiate_del_child_sa, vapi_msg_ikev2_initiate_del_child_sa_reply>;

using Ikev2_initiate_del_child_sa = Request<vapi_msg_ikev2_initiate_del_child_sa, vapi_msg_ikev2_initiate_del_child_sa_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_set_ts>(vapi_msg_ikev2_profile_set_ts *msg)
{
  vapi_msg_ikev2_profile_set_ts_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_set_ts>(vapi_msg_ikev2_profile_set_ts *msg)
{
  vapi_msg_ikev2_profile_set_ts_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_set_ts>()
{
  return ::vapi_msg_id_ikev2_profile_set_ts; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_set_ts>>()
{
  return ::vapi_msg_id_ikev2_profile_set_ts; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_set_ts()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_set_ts>(vapi_msg_id_ikev2_profile_set_ts);
}

template <> inline vapi_msg_ikev2_profile_set_ts* vapi_alloc<vapi_msg_ikev2_profile_set_ts>(Connection &con)
{
  vapi_msg_ikev2_profile_set_ts* result = vapi_alloc_ikev2_profile_set_ts(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ikev2_profile_set_ts>;

template class Request<vapi_msg_ikev2_profile_set_ts, vapi_msg_ikev2_profile_set_ts_reply>;

using Ikev2_profile_set_ts = Request<vapi_msg_ikev2_profile_set_ts, vapi_msg_ikev2_profile_set_ts_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ikev2_initiate_sa_init_reply>(vapi_msg_ikev2_initiate_sa_init_reply *msg)
{
  vapi_msg_ikev2_initiate_sa_init_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_initiate_sa_init_reply>(vapi_msg_ikev2_initiate_sa_init_reply *msg)
{
  vapi_msg_ikev2_initiate_sa_init_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_initiate_sa_init_reply>()
{
  return ::vapi_msg_id_ikev2_initiate_sa_init_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_initiate_sa_init_reply>>()
{
  return ::vapi_msg_id_ikev2_initiate_sa_init_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_initiate_sa_init_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_initiate_sa_init_reply>(vapi_msg_id_ikev2_initiate_sa_init_reply);
}

template class Msg<vapi_msg_ikev2_initiate_sa_init_reply>;

using Ikev2_initiate_sa_init_reply = Msg<vapi_msg_ikev2_initiate_sa_init_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_set_id_reply>(vapi_msg_ikev2_profile_set_id_reply *msg)
{
  vapi_msg_ikev2_profile_set_id_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_set_id_reply>(vapi_msg_ikev2_profile_set_id_reply *msg)
{
  vapi_msg_ikev2_profile_set_id_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_set_id_reply>()
{
  return ::vapi_msg_id_ikev2_profile_set_id_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_set_id_reply>>()
{
  return ::vapi_msg_id_ikev2_profile_set_id_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_set_id_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_set_id_reply>(vapi_msg_id_ikev2_profile_set_id_reply);
}

template class Msg<vapi_msg_ikev2_profile_set_id_reply>;

using Ikev2_profile_set_id_reply = Msg<vapi_msg_ikev2_profile_set_id_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_set_ts_reply>(vapi_msg_ikev2_profile_set_ts_reply *msg)
{
  vapi_msg_ikev2_profile_set_ts_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_set_ts_reply>(vapi_msg_ikev2_profile_set_ts_reply *msg)
{
  vapi_msg_ikev2_profile_set_ts_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_set_ts_reply>()
{
  return ::vapi_msg_id_ikev2_profile_set_ts_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_set_ts_reply>>()
{
  return ::vapi_msg_id_ikev2_profile_set_ts_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_set_ts_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_set_ts_reply>(vapi_msg_id_ikev2_profile_set_ts_reply);
}

template class Msg<vapi_msg_ikev2_profile_set_ts_reply>;

using Ikev2_profile_set_ts_reply = Msg<vapi_msg_ikev2_profile_set_ts_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ikev2_profile_set_auth_reply>(vapi_msg_ikev2_profile_set_auth_reply *msg)
{
  vapi_msg_ikev2_profile_set_auth_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ikev2_profile_set_auth_reply>(vapi_msg_ikev2_profile_set_auth_reply *msg)
{
  vapi_msg_ikev2_profile_set_auth_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ikev2_profile_set_auth_reply>()
{
  return ::vapi_msg_id_ikev2_profile_set_auth_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ikev2_profile_set_auth_reply>>()
{
  return ::vapi_msg_id_ikev2_profile_set_auth_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ikev2_profile_set_auth_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ikev2_profile_set_auth_reply>(vapi_msg_id_ikev2_profile_set_auth_reply);
}

template class Msg<vapi_msg_ikev2_profile_set_auth_reply>;

using Ikev2_profile_set_auth_reply = Msg<vapi_msg_ikev2_profile_set_auth_reply>;
}
#endif
