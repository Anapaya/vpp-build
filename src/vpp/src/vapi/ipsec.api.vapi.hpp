#ifndef __included_hpp_ipsec_api_json
#define __included_hpp_ipsec_api_json

#include <vapi/vapi.hpp>
#include <vapi/ipsec.api.vapi.h>

namespace vapi {

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_backend_dump>(vapi_msg_ipsec_backend_dump *msg)
{
  vapi_msg_ipsec_backend_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_backend_dump>(vapi_msg_ipsec_backend_dump *msg)
{
  vapi_msg_ipsec_backend_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_backend_dump>()
{
  return ::vapi_msg_id_ipsec_backend_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_backend_dump>>()
{
  return ::vapi_msg_id_ipsec_backend_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_backend_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_backend_dump>(vapi_msg_id_ipsec_backend_dump);
}

template <> inline vapi_msg_ipsec_backend_dump* vapi_alloc<vapi_msg_ipsec_backend_dump>(Connection &con)
{
  vapi_msg_ipsec_backend_dump* result = vapi_alloc_ipsec_backend_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_backend_dump>;

template class Dump<vapi_msg_ipsec_backend_dump, vapi_msg_ipsec_backend_details>;

using Ipsec_backend_dump = Dump<vapi_msg_ipsec_backend_dump, vapi_msg_ipsec_backend_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_add_del>(vapi_msg_ipsec_spd_add_del *msg)
{
  vapi_msg_ipsec_spd_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_add_del>(vapi_msg_ipsec_spd_add_del *msg)
{
  vapi_msg_ipsec_spd_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_add_del>()
{
  return ::vapi_msg_id_ipsec_spd_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_add_del>>()
{
  return ::vapi_msg_id_ipsec_spd_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_add_del>(vapi_msg_id_ipsec_spd_add_del);
}

template <> inline vapi_msg_ipsec_spd_add_del* vapi_alloc<vapi_msg_ipsec_spd_add_del>(Connection &con)
{
  vapi_msg_ipsec_spd_add_del* result = vapi_alloc_ipsec_spd_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_spd_add_del>;

template class Request<vapi_msg_ipsec_spd_add_del, vapi_msg_ipsec_spd_add_del_reply>;

using Ipsec_spd_add_del = Request<vapi_msg_ipsec_spd_add_del, vapi_msg_ipsec_spd_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_interface_details>(vapi_msg_ipsec_spd_interface_details *msg)
{
  vapi_msg_ipsec_spd_interface_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_interface_details>(vapi_msg_ipsec_spd_interface_details *msg)
{
  vapi_msg_ipsec_spd_interface_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_interface_details>()
{
  return ::vapi_msg_id_ipsec_spd_interface_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_interface_details>>()
{
  return ::vapi_msg_id_ipsec_spd_interface_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_interface_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_interface_details>(vapi_msg_id_ipsec_spd_interface_details);
}

template class Msg<vapi_msg_ipsec_spd_interface_details>;

using Ipsec_spd_interface_details = Msg<vapi_msg_ipsec_spd_interface_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_interface_add_del_spd>(vapi_msg_ipsec_interface_add_del_spd *msg)
{
  vapi_msg_ipsec_interface_add_del_spd_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_interface_add_del_spd>(vapi_msg_ipsec_interface_add_del_spd *msg)
{
  vapi_msg_ipsec_interface_add_del_spd_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_interface_add_del_spd>()
{
  return ::vapi_msg_id_ipsec_interface_add_del_spd; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_interface_add_del_spd>>()
{
  return ::vapi_msg_id_ipsec_interface_add_del_spd; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_interface_add_del_spd()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_interface_add_del_spd>(vapi_msg_id_ipsec_interface_add_del_spd);
}

template <> inline vapi_msg_ipsec_interface_add_del_spd* vapi_alloc<vapi_msg_ipsec_interface_add_del_spd>(Connection &con)
{
  vapi_msg_ipsec_interface_add_del_spd* result = vapi_alloc_ipsec_interface_add_del_spd(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_interface_add_del_spd>;

template class Request<vapi_msg_ipsec_interface_add_del_spd, vapi_msg_ipsec_interface_add_del_spd_reply>;

using Ipsec_interface_add_del_spd = Request<vapi_msg_ipsec_interface_add_del_spd, vapi_msg_ipsec_interface_add_del_spd_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_if_set_sa>(vapi_msg_ipsec_tunnel_if_set_sa *msg)
{
  vapi_msg_ipsec_tunnel_if_set_sa_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_if_set_sa>(vapi_msg_ipsec_tunnel_if_set_sa *msg)
{
  vapi_msg_ipsec_tunnel_if_set_sa_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_if_set_sa>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_set_sa; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_if_set_sa>>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_set_sa; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_if_set_sa()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_if_set_sa>(vapi_msg_id_ipsec_tunnel_if_set_sa);
}

template <> inline vapi_msg_ipsec_tunnel_if_set_sa* vapi_alloc<vapi_msg_ipsec_tunnel_if_set_sa>(Connection &con)
{
  vapi_msg_ipsec_tunnel_if_set_sa* result = vapi_alloc_ipsec_tunnel_if_set_sa(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_tunnel_if_set_sa>;

template class Request<vapi_msg_ipsec_tunnel_if_set_sa, vapi_msg_ipsec_tunnel_if_set_sa_reply>;

using Ipsec_tunnel_if_set_sa = Request<vapi_msg_ipsec_tunnel_if_set_sa, vapi_msg_ipsec_tunnel_if_set_sa_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_entry_add_del>(vapi_msg_ipsec_spd_entry_add_del *msg)
{
  vapi_msg_ipsec_spd_entry_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_entry_add_del>(vapi_msg_ipsec_spd_entry_add_del *msg)
{
  vapi_msg_ipsec_spd_entry_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_entry_add_del>()
{
  return ::vapi_msg_id_ipsec_spd_entry_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_entry_add_del>>()
{
  return ::vapi_msg_id_ipsec_spd_entry_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_entry_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_entry_add_del>(vapi_msg_id_ipsec_spd_entry_add_del);
}

template <> inline vapi_msg_ipsec_spd_entry_add_del* vapi_alloc<vapi_msg_ipsec_spd_entry_add_del>(Connection &con)
{
  vapi_msg_ipsec_spd_entry_add_del* result = vapi_alloc_ipsec_spd_entry_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_spd_entry_add_del>;

template class Request<vapi_msg_ipsec_spd_entry_add_del, vapi_msg_ipsec_spd_entry_add_del_reply>;

using Ipsec_spd_entry_add_del = Request<vapi_msg_ipsec_spd_entry_add_del, vapi_msg_ipsec_spd_entry_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_protect_dump>(vapi_msg_ipsec_tunnel_protect_dump *msg)
{
  vapi_msg_ipsec_tunnel_protect_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_protect_dump>(vapi_msg_ipsec_tunnel_protect_dump *msg)
{
  vapi_msg_ipsec_tunnel_protect_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_protect_dump>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_protect_dump>>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_protect_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_protect_dump>(vapi_msg_id_ipsec_tunnel_protect_dump);
}

template <> inline vapi_msg_ipsec_tunnel_protect_dump* vapi_alloc<vapi_msg_ipsec_tunnel_protect_dump>(Connection &con)
{
  vapi_msg_ipsec_tunnel_protect_dump* result = vapi_alloc_ipsec_tunnel_protect_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_tunnel_protect_dump>;

template class Dump<vapi_msg_ipsec_tunnel_protect_dump, vapi_msg_ipsec_tunnel_protect_details>;

using Ipsec_tunnel_protect_dump = Dump<vapi_msg_ipsec_tunnel_protect_dump, vapi_msg_ipsec_tunnel_protect_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_select_backend>(vapi_msg_ipsec_select_backend *msg)
{
  vapi_msg_ipsec_select_backend_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_select_backend>(vapi_msg_ipsec_select_backend *msg)
{
  vapi_msg_ipsec_select_backend_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_select_backend>()
{
  return ::vapi_msg_id_ipsec_select_backend; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_select_backend>>()
{
  return ::vapi_msg_id_ipsec_select_backend; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_select_backend()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_select_backend>(vapi_msg_id_ipsec_select_backend);
}

template <> inline vapi_msg_ipsec_select_backend* vapi_alloc<vapi_msg_ipsec_select_backend>(Connection &con)
{
  vapi_msg_ipsec_select_backend* result = vapi_alloc_ipsec_select_backend(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_select_backend>;

template class Request<vapi_msg_ipsec_select_backend, vapi_msg_ipsec_select_backend_reply>;

using Ipsec_select_backend = Request<vapi_msg_ipsec_select_backend, vapi_msg_ipsec_select_backend_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spds_dump>(vapi_msg_ipsec_spds_dump *msg)
{
  vapi_msg_ipsec_spds_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spds_dump>(vapi_msg_ipsec_spds_dump *msg)
{
  vapi_msg_ipsec_spds_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spds_dump>()
{
  return ::vapi_msg_id_ipsec_spds_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spds_dump>>()
{
  return ::vapi_msg_id_ipsec_spds_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spds_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spds_dump>(vapi_msg_id_ipsec_spds_dump);
}

template <> inline vapi_msg_ipsec_spds_dump* vapi_alloc<vapi_msg_ipsec_spds_dump>(Connection &con)
{
  vapi_msg_ipsec_spds_dump* result = vapi_alloc_ipsec_spds_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_spds_dump>;

template class Dump<vapi_msg_ipsec_spds_dump, vapi_msg_ipsec_spds_details>;

using Ipsec_spds_dump = Dump<vapi_msg_ipsec_spds_dump, vapi_msg_ipsec_spds_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_add_del_reply>(vapi_msg_ipsec_spd_add_del_reply *msg)
{
  vapi_msg_ipsec_spd_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_add_del_reply>(vapi_msg_ipsec_spd_add_del_reply *msg)
{
  vapi_msg_ipsec_spd_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_add_del_reply>()
{
  return ::vapi_msg_id_ipsec_spd_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_add_del_reply>>()
{
  return ::vapi_msg_id_ipsec_spd_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_add_del_reply>(vapi_msg_id_ipsec_spd_add_del_reply);
}

template class Msg<vapi_msg_ipsec_spd_add_del_reply>;

using Ipsec_spd_add_del_reply = Msg<vapi_msg_ipsec_spd_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_sad_entry_add_del_reply>(vapi_msg_ipsec_sad_entry_add_del_reply *msg)
{
  vapi_msg_ipsec_sad_entry_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_sad_entry_add_del_reply>(vapi_msg_ipsec_sad_entry_add_del_reply *msg)
{
  vapi_msg_ipsec_sad_entry_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_sad_entry_add_del_reply>()
{
  return ::vapi_msg_id_ipsec_sad_entry_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_sad_entry_add_del_reply>>()
{
  return ::vapi_msg_id_ipsec_sad_entry_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_sad_entry_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_sad_entry_add_del_reply>(vapi_msg_id_ipsec_sad_entry_add_del_reply);
}

template class Msg<vapi_msg_ipsec_sad_entry_add_del_reply>;

using Ipsec_sad_entry_add_del_reply = Msg<vapi_msg_ipsec_sad_entry_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_protect_del>(vapi_msg_ipsec_tunnel_protect_del *msg)
{
  vapi_msg_ipsec_tunnel_protect_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_protect_del>(vapi_msg_ipsec_tunnel_protect_del *msg)
{
  vapi_msg_ipsec_tunnel_protect_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_protect_del>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_protect_del>>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_protect_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_protect_del>(vapi_msg_id_ipsec_tunnel_protect_del);
}

template <> inline vapi_msg_ipsec_tunnel_protect_del* vapi_alloc<vapi_msg_ipsec_tunnel_protect_del>(Connection &con)
{
  vapi_msg_ipsec_tunnel_protect_del* result = vapi_alloc_ipsec_tunnel_protect_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_tunnel_protect_del>;

template class Request<vapi_msg_ipsec_tunnel_protect_del, vapi_msg_ipsec_tunnel_protect_del_reply>;

using Ipsec_tunnel_protect_del = Request<vapi_msg_ipsec_tunnel_protect_del, vapi_msg_ipsec_tunnel_protect_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_protect_update>(vapi_msg_ipsec_tunnel_protect_update *msg)
{
  vapi_msg_ipsec_tunnel_protect_update_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_protect_update>(vapi_msg_ipsec_tunnel_protect_update *msg)
{
  vapi_msg_ipsec_tunnel_protect_update_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_protect_update>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_update; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_protect_update>>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_update; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_protect_update()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_protect_update>(vapi_msg_id_ipsec_tunnel_protect_update);
}

template <> inline vapi_msg_ipsec_tunnel_protect_update* vapi_alloc<vapi_msg_ipsec_tunnel_protect_update, size_t>(Connection &con, size_t tunnel_sa_in_array_size)
{
  vapi_msg_ipsec_tunnel_protect_update* result = vapi_alloc_ipsec_tunnel_protect_update(con.vapi_ctx, tunnel_sa_in_array_size);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_tunnel_protect_update>;

template class Request<vapi_msg_ipsec_tunnel_protect_update, vapi_msg_ipsec_tunnel_protect_update_reply, size_t>;

using Ipsec_tunnel_protect_update = Request<vapi_msg_ipsec_tunnel_protect_update, vapi_msg_ipsec_tunnel_protect_update_reply, size_t>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_if_set_sa_reply>(vapi_msg_ipsec_tunnel_if_set_sa_reply *msg)
{
  vapi_msg_ipsec_tunnel_if_set_sa_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_if_set_sa_reply>(vapi_msg_ipsec_tunnel_if_set_sa_reply *msg)
{
  vapi_msg_ipsec_tunnel_if_set_sa_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_if_set_sa_reply>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_set_sa_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_if_set_sa_reply>>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_set_sa_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_if_set_sa_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_if_set_sa_reply>(vapi_msg_id_ipsec_tunnel_if_set_sa_reply);
}

template class Msg<vapi_msg_ipsec_tunnel_if_set_sa_reply>;

using Ipsec_tunnel_if_set_sa_reply = Msg<vapi_msg_ipsec_tunnel_if_set_sa_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_if_add_del_reply>(vapi_msg_ipsec_tunnel_if_add_del_reply *msg)
{
  vapi_msg_ipsec_tunnel_if_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_if_add_del_reply>(vapi_msg_ipsec_tunnel_if_add_del_reply *msg)
{
  vapi_msg_ipsec_tunnel_if_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_if_add_del_reply>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_if_add_del_reply>>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_if_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_if_add_del_reply>(vapi_msg_id_ipsec_tunnel_if_add_del_reply);
}

template class Msg<vapi_msg_ipsec_tunnel_if_add_del_reply>;

using Ipsec_tunnel_if_add_del_reply = Msg<vapi_msg_ipsec_tunnel_if_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spds_details>(vapi_msg_ipsec_spds_details *msg)
{
  vapi_msg_ipsec_spds_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spds_details>(vapi_msg_ipsec_spds_details *msg)
{
  vapi_msg_ipsec_spds_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spds_details>()
{
  return ::vapi_msg_id_ipsec_spds_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spds_details>>()
{
  return ::vapi_msg_id_ipsec_spds_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spds_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spds_details>(vapi_msg_id_ipsec_spds_details);
}

template class Msg<vapi_msg_ipsec_spds_details>;

using Ipsec_spds_details = Msg<vapi_msg_ipsec_spds_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_entry_add_del_reply>(vapi_msg_ipsec_spd_entry_add_del_reply *msg)
{
  vapi_msg_ipsec_spd_entry_add_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_entry_add_del_reply>(vapi_msg_ipsec_spd_entry_add_del_reply *msg)
{
  vapi_msg_ipsec_spd_entry_add_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_entry_add_del_reply>()
{
  return ::vapi_msg_id_ipsec_spd_entry_add_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_entry_add_del_reply>>()
{
  return ::vapi_msg_id_ipsec_spd_entry_add_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_entry_add_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_entry_add_del_reply>(vapi_msg_id_ipsec_spd_entry_add_del_reply);
}

template class Msg<vapi_msg_ipsec_spd_entry_add_del_reply>;

using Ipsec_spd_entry_add_del_reply = Msg<vapi_msg_ipsec_spd_entry_add_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_protect_details>(vapi_msg_ipsec_tunnel_protect_details *msg)
{
  vapi_msg_ipsec_tunnel_protect_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_protect_details>(vapi_msg_ipsec_tunnel_protect_details *msg)
{
  vapi_msg_ipsec_tunnel_protect_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_protect_details>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_protect_details>>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_protect_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_protect_details>(vapi_msg_id_ipsec_tunnel_protect_details);
}

template class Msg<vapi_msg_ipsec_tunnel_protect_details>;

using Ipsec_tunnel_protect_details = Msg<vapi_msg_ipsec_tunnel_protect_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_sad_entry_add_del>(vapi_msg_ipsec_sad_entry_add_del *msg)
{
  vapi_msg_ipsec_sad_entry_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_sad_entry_add_del>(vapi_msg_ipsec_sad_entry_add_del *msg)
{
  vapi_msg_ipsec_sad_entry_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_sad_entry_add_del>()
{
  return ::vapi_msg_id_ipsec_sad_entry_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_sad_entry_add_del>>()
{
  return ::vapi_msg_id_ipsec_sad_entry_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_sad_entry_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_sad_entry_add_del>(vapi_msg_id_ipsec_sad_entry_add_del);
}

template <> inline vapi_msg_ipsec_sad_entry_add_del* vapi_alloc<vapi_msg_ipsec_sad_entry_add_del>(Connection &con)
{
  vapi_msg_ipsec_sad_entry_add_del* result = vapi_alloc_ipsec_sad_entry_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_sad_entry_add_del>;

template class Request<vapi_msg_ipsec_sad_entry_add_del, vapi_msg_ipsec_sad_entry_add_del_reply>;

using Ipsec_sad_entry_add_del = Request<vapi_msg_ipsec_sad_entry_add_del, vapi_msg_ipsec_sad_entry_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_backend_details>(vapi_msg_ipsec_backend_details *msg)
{
  vapi_msg_ipsec_backend_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_backend_details>(vapi_msg_ipsec_backend_details *msg)
{
  vapi_msg_ipsec_backend_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_backend_details>()
{
  return ::vapi_msg_id_ipsec_backend_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_backend_details>>()
{
  return ::vapi_msg_id_ipsec_backend_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_backend_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_backend_details>(vapi_msg_id_ipsec_backend_details);
}

template class Msg<vapi_msg_ipsec_backend_details>;

using Ipsec_backend_details = Msg<vapi_msg_ipsec_backend_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_interface_add_del_spd_reply>(vapi_msg_ipsec_interface_add_del_spd_reply *msg)
{
  vapi_msg_ipsec_interface_add_del_spd_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_interface_add_del_spd_reply>(vapi_msg_ipsec_interface_add_del_spd_reply *msg)
{
  vapi_msg_ipsec_interface_add_del_spd_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_interface_add_del_spd_reply>()
{
  return ::vapi_msg_id_ipsec_interface_add_del_spd_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_interface_add_del_spd_reply>>()
{
  return ::vapi_msg_id_ipsec_interface_add_del_spd_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_interface_add_del_spd_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_interface_add_del_spd_reply>(vapi_msg_id_ipsec_interface_add_del_spd_reply);
}

template class Msg<vapi_msg_ipsec_interface_add_del_spd_reply>;

using Ipsec_interface_add_del_spd_reply = Msg<vapi_msg_ipsec_interface_add_del_spd_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_dump>(vapi_msg_ipsec_spd_dump *msg)
{
  vapi_msg_ipsec_spd_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_dump>(vapi_msg_ipsec_spd_dump *msg)
{
  vapi_msg_ipsec_spd_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_dump>()
{
  return ::vapi_msg_id_ipsec_spd_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_dump>>()
{
  return ::vapi_msg_id_ipsec_spd_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_dump>(vapi_msg_id_ipsec_spd_dump);
}

template <> inline vapi_msg_ipsec_spd_dump* vapi_alloc<vapi_msg_ipsec_spd_dump>(Connection &con)
{
  vapi_msg_ipsec_spd_dump* result = vapi_alloc_ipsec_spd_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_spd_dump>;

template class Dump<vapi_msg_ipsec_spd_dump, vapi_msg_ipsec_spd_details>;

using Ipsec_spd_dump = Dump<vapi_msg_ipsec_spd_dump, vapi_msg_ipsec_spd_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_protect_update_reply>(vapi_msg_ipsec_tunnel_protect_update_reply *msg)
{
  vapi_msg_ipsec_tunnel_protect_update_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_protect_update_reply>(vapi_msg_ipsec_tunnel_protect_update_reply *msg)
{
  vapi_msg_ipsec_tunnel_protect_update_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_protect_update_reply>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_update_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_protect_update_reply>>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_update_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_protect_update_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_protect_update_reply>(vapi_msg_id_ipsec_tunnel_protect_update_reply);
}

template class Msg<vapi_msg_ipsec_tunnel_protect_update_reply>;

using Ipsec_tunnel_protect_update_reply = Msg<vapi_msg_ipsec_tunnel_protect_update_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_details>(vapi_msg_ipsec_spd_details *msg)
{
  vapi_msg_ipsec_spd_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_details>(vapi_msg_ipsec_spd_details *msg)
{
  vapi_msg_ipsec_spd_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_details>()
{
  return ::vapi_msg_id_ipsec_spd_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_details>>()
{
  return ::vapi_msg_id_ipsec_spd_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_details>(vapi_msg_id_ipsec_spd_details);
}

template class Msg<vapi_msg_ipsec_spd_details>;

using Ipsec_spd_details = Msg<vapi_msg_ipsec_spd_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_sa_dump>(vapi_msg_ipsec_sa_dump *msg)
{
  vapi_msg_ipsec_sa_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_sa_dump>(vapi_msg_ipsec_sa_dump *msg)
{
  vapi_msg_ipsec_sa_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_sa_dump>()
{
  return ::vapi_msg_id_ipsec_sa_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_sa_dump>>()
{
  return ::vapi_msg_id_ipsec_sa_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_sa_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_sa_dump>(vapi_msg_id_ipsec_sa_dump);
}

template <> inline vapi_msg_ipsec_sa_dump* vapi_alloc<vapi_msg_ipsec_sa_dump>(Connection &con)
{
  vapi_msg_ipsec_sa_dump* result = vapi_alloc_ipsec_sa_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_sa_dump>;

template class Dump<vapi_msg_ipsec_sa_dump, vapi_msg_ipsec_sa_details>;

using Ipsec_sa_dump = Dump<vapi_msg_ipsec_sa_dump, vapi_msg_ipsec_sa_details>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_sa_details>(vapi_msg_ipsec_sa_details *msg)
{
  vapi_msg_ipsec_sa_details_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_sa_details>(vapi_msg_ipsec_sa_details *msg)
{
  vapi_msg_ipsec_sa_details_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_sa_details>()
{
  return ::vapi_msg_id_ipsec_sa_details; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_sa_details>>()
{
  return ::vapi_msg_id_ipsec_sa_details; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_sa_details()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_sa_details>(vapi_msg_id_ipsec_sa_details);
}

template class Msg<vapi_msg_ipsec_sa_details>;

using Ipsec_sa_details = Msg<vapi_msg_ipsec_sa_details>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_protect_del_reply>(vapi_msg_ipsec_tunnel_protect_del_reply *msg)
{
  vapi_msg_ipsec_tunnel_protect_del_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_protect_del_reply>(vapi_msg_ipsec_tunnel_protect_del_reply *msg)
{
  vapi_msg_ipsec_tunnel_protect_del_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_protect_del_reply>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_del_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_protect_del_reply>>()
{
  return ::vapi_msg_id_ipsec_tunnel_protect_del_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_protect_del_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_protect_del_reply>(vapi_msg_id_ipsec_tunnel_protect_del_reply);
}

template class Msg<vapi_msg_ipsec_tunnel_protect_del_reply>;

using Ipsec_tunnel_protect_del_reply = Msg<vapi_msg_ipsec_tunnel_protect_del_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_select_backend_reply>(vapi_msg_ipsec_select_backend_reply *msg)
{
  vapi_msg_ipsec_select_backend_reply_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_select_backend_reply>(vapi_msg_ipsec_select_backend_reply *msg)
{
  vapi_msg_ipsec_select_backend_reply_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_select_backend_reply>()
{
  return ::vapi_msg_id_ipsec_select_backend_reply; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_select_backend_reply>>()
{
  return ::vapi_msg_id_ipsec_select_backend_reply; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_select_backend_reply()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_select_backend_reply>(vapi_msg_id_ipsec_select_backend_reply);
}

template class Msg<vapi_msg_ipsec_select_backend_reply>;

using Ipsec_select_backend_reply = Msg<vapi_msg_ipsec_select_backend_reply>;
template <> inline void vapi_swap_to_be<vapi_msg_ipsec_tunnel_if_add_del>(vapi_msg_ipsec_tunnel_if_add_del *msg)
{
  vapi_msg_ipsec_tunnel_if_add_del_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_tunnel_if_add_del>(vapi_msg_ipsec_tunnel_if_add_del *msg)
{
  vapi_msg_ipsec_tunnel_if_add_del_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_tunnel_if_add_del>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_add_del; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_tunnel_if_add_del>>()
{
  return ::vapi_msg_id_ipsec_tunnel_if_add_del; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_tunnel_if_add_del()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_tunnel_if_add_del>(vapi_msg_id_ipsec_tunnel_if_add_del);
}

template <> inline vapi_msg_ipsec_tunnel_if_add_del* vapi_alloc<vapi_msg_ipsec_tunnel_if_add_del>(Connection &con)
{
  vapi_msg_ipsec_tunnel_if_add_del* result = vapi_alloc_ipsec_tunnel_if_add_del(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_tunnel_if_add_del>;

template class Request<vapi_msg_ipsec_tunnel_if_add_del, vapi_msg_ipsec_tunnel_if_add_del_reply>;

using Ipsec_tunnel_if_add_del = Request<vapi_msg_ipsec_tunnel_if_add_del, vapi_msg_ipsec_tunnel_if_add_del_reply>;

template <> inline void vapi_swap_to_be<vapi_msg_ipsec_spd_interface_dump>(vapi_msg_ipsec_spd_interface_dump *msg)
{
  vapi_msg_ipsec_spd_interface_dump_hton(msg);
}

template <> inline void vapi_swap_to_host<vapi_msg_ipsec_spd_interface_dump>(vapi_msg_ipsec_spd_interface_dump *msg)
{
  vapi_msg_ipsec_spd_interface_dump_ntoh(msg);
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<vapi_msg_ipsec_spd_interface_dump>()
{
  return ::vapi_msg_id_ipsec_spd_interface_dump; 
}

template <> inline vapi_msg_id_t vapi_get_msg_id_t<Msg<vapi_msg_ipsec_spd_interface_dump>>()
{
  return ::vapi_msg_id_ipsec_spd_interface_dump; 
}

static void __attribute__((constructor)) __vapi_cpp_constructor_ipsec_spd_interface_dump()
{
  vapi::vapi_msg_set_msg_id<vapi_msg_ipsec_spd_interface_dump>(vapi_msg_id_ipsec_spd_interface_dump);
}

template <> inline vapi_msg_ipsec_spd_interface_dump* vapi_alloc<vapi_msg_ipsec_spd_interface_dump>(Connection &con)
{
  vapi_msg_ipsec_spd_interface_dump* result = vapi_alloc_ipsec_spd_interface_dump(con.vapi_ctx);
#if VAPI_CPP_DEBUG_LEAKS
  con.on_shm_data_alloc(result);
#endif
  return result;
}

template class Msg<vapi_msg_ipsec_spd_interface_dump>;

template class Dump<vapi_msg_ipsec_spd_interface_dump, vapi_msg_ipsec_spd_interface_details>;

using Ipsec_spd_interface_dump = Dump<vapi_msg_ipsec_spd_interface_dump, vapi_msg_ipsec_spd_interface_details>;

}
#endif
