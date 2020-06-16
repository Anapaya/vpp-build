#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_bfd_bfd_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_bfd_bfd_api_json

#include <stdlib.h>
#include <stddef.h>
#include <arpa/inet.h>
#include <vapi/vapi_internal.h>
#include <vapi/vapi.h>
#include <vapi/vapi_dbg.h>

#ifdef __cplusplus
extern "C" {
#endif
#include <vapi/vpe.api.vapi.h>

extern vapi_msg_id_t vapi_msg_id_bfd_udp_mod;
extern vapi_msg_id_t vapi_msg_id_bfd_auth_del_key;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_del_echo_source;
extern vapi_msg_id_t vapi_msg_id_want_bfd_events;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_session_details;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_add_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_set_echo_source_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_session_set_flags_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_auth_keys_dump;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_auth_deactivate;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_del_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_auth_activate_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_session_set_flags;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_get_echo_source_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_get_echo_source;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_add;
extern vapi_msg_id_t vapi_msg_id_bfd_auth_set_key;
extern vapi_msg_id_t vapi_msg_id_want_bfd_events_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_auth_activate;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_auth_deactivate_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_mod_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_auth_keys_details;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_del_echo_source_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_auth_set_key_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_session_dump;
extern vapi_msg_id_t vapi_msg_id_bfd_auth_del_key_reply;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_del;
extern vapi_msg_id_t vapi_msg_id_bfd_udp_set_echo_source;

#define DEFINE_VAPI_MSG_IDS_BFD_API_JSON\
  vapi_msg_id_t vapi_msg_id_bfd_udp_mod;\
  vapi_msg_id_t vapi_msg_id_bfd_auth_del_key;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_del_echo_source;\
  vapi_msg_id_t vapi_msg_id_want_bfd_events;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_session_details;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_add_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_set_echo_source_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_session_set_flags_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_auth_keys_dump;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_auth_deactivate;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_del_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_auth_activate_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_session_set_flags;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_get_echo_source_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_get_echo_source;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_add;\
  vapi_msg_id_t vapi_msg_id_bfd_auth_set_key;\
  vapi_msg_id_t vapi_msg_id_want_bfd_events_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_auth_activate;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_auth_deactivate_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_mod_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_auth_keys_details;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_del_echo_source_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_auth_set_key_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_session_dump;\
  vapi_msg_id_t vapi_msg_id_bfd_auth_del_key_reply;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_del;\
  vapi_msg_id_t vapi_msg_id_bfd_udp_set_echo_source;


#ifndef defined_vapi_msg_bfd_udp_mod_reply
#define defined_vapi_msg_bfd_udp_mod_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_mod_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_mod_reply payload;
} vapi_msg_bfd_udp_mod_reply;

static inline void vapi_msg_bfd_udp_mod_reply_payload_hton(vapi_payload_bfd_udp_mod_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_mod_reply_payload_ntoh(vapi_payload_bfd_udp_mod_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_mod_reply_hton(vapi_msg_bfd_udp_mod_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_mod_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_mod_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_mod_reply_ntoh(vapi_msg_bfd_udp_mod_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_mod_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_mod_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_mod_reply_msg_size(vapi_msg_bfd_udp_mod_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_mod_reply()
{
  static const char name[] = "bfd_udp_mod_reply";
  static const char name_with_crc[] = "bfd_udp_mod_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_mod_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_mod_reply, payload),
    sizeof(vapi_msg_bfd_udp_mod_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_mod_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_mod_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_mod_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_mod_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_mod_reply", vapi_msg_id_bfd_udp_mod_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_mod_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_mod_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_mod_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_mod
#define defined_vapi_msg_bfd_udp_mod
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 desired_min_tx;
  u32 required_min_rx;
  u8 local_addr[16];
  u8 peer_addr[16];
  u8 is_ipv6;
  u8 detect_mult; 
} vapi_payload_bfd_udp_mod;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_udp_mod payload;
} vapi_msg_bfd_udp_mod;

static inline void vapi_msg_bfd_udp_mod_payload_hton(vapi_payload_bfd_udp_mod *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->desired_min_tx = htobe32(payload->desired_min_tx);
  payload->required_min_rx = htobe32(payload->required_min_rx);
}

static inline void vapi_msg_bfd_udp_mod_payload_ntoh(vapi_payload_bfd_udp_mod *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->desired_min_tx = be32toh(payload->desired_min_tx);
  payload->required_min_rx = be32toh(payload->required_min_rx);
}

static inline void vapi_msg_bfd_udp_mod_hton(vapi_msg_bfd_udp_mod *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_mod'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_udp_mod_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_mod_ntoh(vapi_msg_bfd_udp_mod *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_mod'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_mod_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_mod_msg_size(vapi_msg_bfd_udp_mod *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_mod* vapi_alloc_bfd_udp_mod(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_mod *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_mod);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_mod*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_mod);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_mod(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_mod *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_mod_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_mod_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_mod_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_mod()
{
  static const char name[] = "bfd_udp_mod";
  static const char name_with_crc[] = "bfd_udp_mod_6049bf47";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_mod = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_udp_mod, payload),
    sizeof(vapi_msg_bfd_udp_mod),
    (generic_swap_fn_t)vapi_msg_bfd_udp_mod_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_mod_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_mod = vapi_register_msg(&__vapi_metadata_bfd_udp_mod);
  VAPI_DBG("Assigned msg id %d to bfd_udp_mod", vapi_msg_id_bfd_udp_mod);
}
#endif

#ifndef defined_vapi_msg_bfd_auth_del_key_reply
#define defined_vapi_msg_bfd_auth_del_key_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_auth_del_key_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_auth_del_key_reply payload;
} vapi_msg_bfd_auth_del_key_reply;

static inline void vapi_msg_bfd_auth_del_key_reply_payload_hton(vapi_payload_bfd_auth_del_key_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_auth_del_key_reply_payload_ntoh(vapi_payload_bfd_auth_del_key_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_auth_del_key_reply_hton(vapi_msg_bfd_auth_del_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_del_key_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_auth_del_key_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_auth_del_key_reply_ntoh(vapi_msg_bfd_auth_del_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_del_key_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_auth_del_key_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_auth_del_key_reply_msg_size(vapi_msg_bfd_auth_del_key_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_auth_del_key_reply()
{
  static const char name[] = "bfd_auth_del_key_reply";
  static const char name_with_crc[] = "bfd_auth_del_key_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_auth_del_key_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_auth_del_key_reply, payload),
    sizeof(vapi_msg_bfd_auth_del_key_reply),
    (generic_swap_fn_t)vapi_msg_bfd_auth_del_key_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_auth_del_key_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_auth_del_key_reply = vapi_register_msg(&__vapi_metadata_bfd_auth_del_key_reply);
  VAPI_DBG("Assigned msg id %d to bfd_auth_del_key_reply", vapi_msg_id_bfd_auth_del_key_reply);
}

static inline void vapi_set_vapi_msg_bfd_auth_del_key_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_auth_del_key_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_auth_del_key_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_auth_del_key
#define defined_vapi_msg_bfd_auth_del_key
typedef struct __attribute__ ((__packed__)) {
  u32 conf_key_id; 
} vapi_payload_bfd_auth_del_key;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_auth_del_key payload;
} vapi_msg_bfd_auth_del_key;

static inline void vapi_msg_bfd_auth_del_key_payload_hton(vapi_payload_bfd_auth_del_key *payload)
{
  payload->conf_key_id = htobe32(payload->conf_key_id);
}

static inline void vapi_msg_bfd_auth_del_key_payload_ntoh(vapi_payload_bfd_auth_del_key *payload)
{
  payload->conf_key_id = be32toh(payload->conf_key_id);
}

static inline void vapi_msg_bfd_auth_del_key_hton(vapi_msg_bfd_auth_del_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_del_key'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_auth_del_key_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_auth_del_key_ntoh(vapi_msg_bfd_auth_del_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_del_key'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_auth_del_key_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_auth_del_key_msg_size(vapi_msg_bfd_auth_del_key *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_auth_del_key* vapi_alloc_bfd_auth_del_key(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_auth_del_key *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_auth_del_key);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_auth_del_key*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_auth_del_key);

  return msg;
}

static inline vapi_error_e vapi_bfd_auth_del_key(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_auth_del_key *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_auth_del_key_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_auth_del_key_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_auth_del_key_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_auth_del_key()
{
  static const char name[] = "bfd_auth_del_key";
  static const char name_with_crc[] = "bfd_auth_del_key_65310b22";
  static vapi_message_desc_t __vapi_metadata_bfd_auth_del_key = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_auth_del_key, payload),
    sizeof(vapi_msg_bfd_auth_del_key),
    (generic_swap_fn_t)vapi_msg_bfd_auth_del_key_hton,
    (generic_swap_fn_t)vapi_msg_bfd_auth_del_key_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_auth_del_key = vapi_register_msg(&__vapi_metadata_bfd_auth_del_key);
  VAPI_DBG("Assigned msg id %d to bfd_auth_del_key", vapi_msg_id_bfd_auth_del_key);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_del_echo_source_reply
#define defined_vapi_msg_bfd_udp_del_echo_source_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_del_echo_source_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_del_echo_source_reply payload;
} vapi_msg_bfd_udp_del_echo_source_reply;

static inline void vapi_msg_bfd_udp_del_echo_source_reply_payload_hton(vapi_payload_bfd_udp_del_echo_source_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_del_echo_source_reply_payload_ntoh(vapi_payload_bfd_udp_del_echo_source_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_del_echo_source_reply_hton(vapi_msg_bfd_udp_del_echo_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del_echo_source_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_del_echo_source_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_del_echo_source_reply_ntoh(vapi_msg_bfd_udp_del_echo_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del_echo_source_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_del_echo_source_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_del_echo_source_reply_msg_size(vapi_msg_bfd_udp_del_echo_source_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_del_echo_source_reply()
{
  static const char name[] = "bfd_udp_del_echo_source_reply";
  static const char name_with_crc[] = "bfd_udp_del_echo_source_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_del_echo_source_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_del_echo_source_reply, payload),
    sizeof(vapi_msg_bfd_udp_del_echo_source_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_echo_source_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_echo_source_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_del_echo_source_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_del_echo_source_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_del_echo_source_reply", vapi_msg_id_bfd_udp_del_echo_source_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_del_echo_source_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_del_echo_source_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_del_echo_source_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_del_echo_source
#define defined_vapi_msg_bfd_udp_del_echo_source
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_bfd_udp_del_echo_source;

static inline void vapi_msg_bfd_udp_del_echo_source_hton(vapi_msg_bfd_udp_del_echo_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del_echo_source'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_bfd_udp_del_echo_source_ntoh(vapi_msg_bfd_udp_del_echo_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del_echo_source'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_bfd_udp_del_echo_source_msg_size(vapi_msg_bfd_udp_del_echo_source *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_del_echo_source* vapi_alloc_bfd_udp_del_echo_source(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_del_echo_source *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_del_echo_source);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_del_echo_source*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_del_echo_source);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_del_echo_source(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_del_echo_source *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_del_echo_source_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_del_echo_source_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_del_echo_source_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_del_echo_source()
{
  static const char name[] = "bfd_udp_del_echo_source";
  static const char name_with_crc[] = "bfd_udp_del_echo_source_51077d14";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_del_echo_source = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_bfd_udp_del_echo_source),
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_echo_source_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_echo_source_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_del_echo_source = vapi_register_msg(&__vapi_metadata_bfd_udp_del_echo_source);
  VAPI_DBG("Assigned msg id %d to bfd_udp_del_echo_source", vapi_msg_id_bfd_udp_del_echo_source);
}
#endif

#ifndef defined_vapi_msg_want_bfd_events_reply
#define defined_vapi_msg_want_bfd_events_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_want_bfd_events_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_want_bfd_events_reply payload;
} vapi_msg_want_bfd_events_reply;

static inline void vapi_msg_want_bfd_events_reply_payload_hton(vapi_payload_want_bfd_events_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_want_bfd_events_reply_payload_ntoh(vapi_payload_want_bfd_events_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_want_bfd_events_reply_hton(vapi_msg_want_bfd_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_bfd_events_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_want_bfd_events_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_bfd_events_reply_ntoh(vapi_msg_want_bfd_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_bfd_events_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_want_bfd_events_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_bfd_events_reply_msg_size(vapi_msg_want_bfd_events_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_want_bfd_events_reply()
{
  static const char name[] = "want_bfd_events_reply";
  static const char name_with_crc[] = "want_bfd_events_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_want_bfd_events_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_want_bfd_events_reply, payload),
    sizeof(vapi_msg_want_bfd_events_reply),
    (generic_swap_fn_t)vapi_msg_want_bfd_events_reply_hton,
    (generic_swap_fn_t)vapi_msg_want_bfd_events_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_bfd_events_reply = vapi_register_msg(&__vapi_metadata_want_bfd_events_reply);
  VAPI_DBG("Assigned msg id %d to want_bfd_events_reply", vapi_msg_id_want_bfd_events_reply);
}

static inline void vapi_set_vapi_msg_want_bfd_events_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_want_bfd_events_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_want_bfd_events_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_bfd_events
#define defined_vapi_msg_want_bfd_events
typedef struct __attribute__ ((__packed__)) {
  u32 enable_disable;
  u32 pid; 
} vapi_payload_want_bfd_events;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_want_bfd_events payload;
} vapi_msg_want_bfd_events;

static inline void vapi_msg_want_bfd_events_payload_hton(vapi_payload_want_bfd_events *payload)
{
  payload->enable_disable = htobe32(payload->enable_disable);
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_want_bfd_events_payload_ntoh(vapi_payload_want_bfd_events *payload)
{
  payload->enable_disable = be32toh(payload->enable_disable);
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_want_bfd_events_hton(vapi_msg_want_bfd_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_bfd_events'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_want_bfd_events_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_bfd_events_ntoh(vapi_msg_want_bfd_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_bfd_events'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_want_bfd_events_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_bfd_events_msg_size(vapi_msg_want_bfd_events *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_want_bfd_events* vapi_alloc_want_bfd_events(struct vapi_ctx_s *ctx)
{
  vapi_msg_want_bfd_events *msg = NULL;
  const size_t size = sizeof(vapi_msg_want_bfd_events);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_want_bfd_events*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_want_bfd_events);

  return msg;
}

static inline vapi_error_e vapi_want_bfd_events(struct vapi_ctx_s *ctx,
  vapi_msg_want_bfd_events *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_want_bfd_events_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_want_bfd_events_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_want_bfd_events_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_want_bfd_events()
{
  static const char name[] = "want_bfd_events";
  static const char name_with_crc[] = "want_bfd_events_476f5a08";
  static vapi_message_desc_t __vapi_metadata_want_bfd_events = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_want_bfd_events, payload),
    sizeof(vapi_msg_want_bfd_events),
    (generic_swap_fn_t)vapi_msg_want_bfd_events_hton,
    (generic_swap_fn_t)vapi_msg_want_bfd_events_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_bfd_events = vapi_register_msg(&__vapi_metadata_want_bfd_events);
  VAPI_DBG("Assigned msg id %d to want_bfd_events", vapi_msg_id_want_bfd_events);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_session_details
#define defined_vapi_msg_bfd_udp_session_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 local_addr[16];
  u8 peer_addr[16];
  u8 is_ipv6;
  u8 state;
  u8 is_authenticated;
  u8 bfd_key_id;
  u32 conf_key_id;
  u32 required_min_rx;
  u32 desired_min_tx;
  u8 detect_mult; 
} vapi_payload_bfd_udp_session_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_session_details payload;
} vapi_msg_bfd_udp_session_details;

static inline void vapi_msg_bfd_udp_session_details_payload_hton(vapi_payload_bfd_udp_session_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->conf_key_id = htobe32(payload->conf_key_id);
  payload->required_min_rx = htobe32(payload->required_min_rx);
  payload->desired_min_tx = htobe32(payload->desired_min_tx);
}

static inline void vapi_msg_bfd_udp_session_details_payload_ntoh(vapi_payload_bfd_udp_session_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->conf_key_id = be32toh(payload->conf_key_id);
  payload->required_min_rx = be32toh(payload->required_min_rx);
  payload->desired_min_tx = be32toh(payload->desired_min_tx);
}

static inline void vapi_msg_bfd_udp_session_details_hton(vapi_msg_bfd_udp_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_session_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_session_details_ntoh(vapi_msg_bfd_udp_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_session_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_session_details_msg_size(vapi_msg_bfd_udp_session_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_session_details()
{
  static const char name[] = "bfd_udp_session_details";
  static const char name_with_crc[] = "bfd_udp_session_details_837bb0ed";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_session_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_session_details, payload),
    sizeof(vapi_msg_bfd_udp_session_details),
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_details_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_session_details = vapi_register_msg(&__vapi_metadata_bfd_udp_session_details);
  VAPI_DBG("Assigned msg id %d to bfd_udp_session_details", vapi_msg_id_bfd_udp_session_details);
}

static inline void vapi_set_vapi_msg_bfd_udp_session_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_session_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_session_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_add_reply
#define defined_vapi_msg_bfd_udp_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_add_reply payload;
} vapi_msg_bfd_udp_add_reply;

static inline void vapi_msg_bfd_udp_add_reply_payload_hton(vapi_payload_bfd_udp_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_add_reply_payload_ntoh(vapi_payload_bfd_udp_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_add_reply_hton(vapi_msg_bfd_udp_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_add_reply_ntoh(vapi_msg_bfd_udp_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_add_reply_msg_size(vapi_msg_bfd_udp_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_add_reply()
{
  static const char name[] = "bfd_udp_add_reply";
  static const char name_with_crc[] = "bfd_udp_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_add_reply, payload),
    sizeof(vapi_msg_bfd_udp_add_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_add_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_add_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_add_reply", vapi_msg_id_bfd_udp_add_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_set_echo_source_reply
#define defined_vapi_msg_bfd_udp_set_echo_source_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_set_echo_source_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_set_echo_source_reply payload;
} vapi_msg_bfd_udp_set_echo_source_reply;

static inline void vapi_msg_bfd_udp_set_echo_source_reply_payload_hton(vapi_payload_bfd_udp_set_echo_source_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_set_echo_source_reply_payload_ntoh(vapi_payload_bfd_udp_set_echo_source_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_set_echo_source_reply_hton(vapi_msg_bfd_udp_set_echo_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_set_echo_source_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_set_echo_source_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_set_echo_source_reply_ntoh(vapi_msg_bfd_udp_set_echo_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_set_echo_source_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_set_echo_source_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_set_echo_source_reply_msg_size(vapi_msg_bfd_udp_set_echo_source_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_set_echo_source_reply()
{
  static const char name[] = "bfd_udp_set_echo_source_reply";
  static const char name_with_crc[] = "bfd_udp_set_echo_source_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_set_echo_source_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_set_echo_source_reply, payload),
    sizeof(vapi_msg_bfd_udp_set_echo_source_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_set_echo_source_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_set_echo_source_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_set_echo_source_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_set_echo_source_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_set_echo_source_reply", vapi_msg_id_bfd_udp_set_echo_source_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_set_echo_source_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_set_echo_source_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_set_echo_source_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_session_set_flags_reply
#define defined_vapi_msg_bfd_udp_session_set_flags_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_session_set_flags_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_session_set_flags_reply payload;
} vapi_msg_bfd_udp_session_set_flags_reply;

static inline void vapi_msg_bfd_udp_session_set_flags_reply_payload_hton(vapi_payload_bfd_udp_session_set_flags_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_session_set_flags_reply_payload_ntoh(vapi_payload_bfd_udp_session_set_flags_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_session_set_flags_reply_hton(vapi_msg_bfd_udp_session_set_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_set_flags_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_session_set_flags_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_session_set_flags_reply_ntoh(vapi_msg_bfd_udp_session_set_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_set_flags_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_session_set_flags_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_session_set_flags_reply_msg_size(vapi_msg_bfd_udp_session_set_flags_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_session_set_flags_reply()
{
  static const char name[] = "bfd_udp_session_set_flags_reply";
  static const char name_with_crc[] = "bfd_udp_session_set_flags_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_session_set_flags_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_session_set_flags_reply, payload),
    sizeof(vapi_msg_bfd_udp_session_set_flags_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_set_flags_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_set_flags_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_session_set_flags_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_session_set_flags_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_session_set_flags_reply", vapi_msg_id_bfd_udp_session_set_flags_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_session_set_flags_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_session_set_flags_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_session_set_flags_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_auth_keys_details
#define defined_vapi_msg_bfd_auth_keys_details
typedef struct __attribute__ ((__packed__)) {
  u32 conf_key_id;
  u32 use_count;
  u8 auth_type; 
} vapi_payload_bfd_auth_keys_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_auth_keys_details payload;
} vapi_msg_bfd_auth_keys_details;

static inline void vapi_msg_bfd_auth_keys_details_payload_hton(vapi_payload_bfd_auth_keys_details *payload)
{
  payload->conf_key_id = htobe32(payload->conf_key_id);
  payload->use_count = htobe32(payload->use_count);
}

static inline void vapi_msg_bfd_auth_keys_details_payload_ntoh(vapi_payload_bfd_auth_keys_details *payload)
{
  payload->conf_key_id = be32toh(payload->conf_key_id);
  payload->use_count = be32toh(payload->use_count);
}

static inline void vapi_msg_bfd_auth_keys_details_hton(vapi_msg_bfd_auth_keys_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_keys_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_auth_keys_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_auth_keys_details_ntoh(vapi_msg_bfd_auth_keys_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_keys_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_auth_keys_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_auth_keys_details_msg_size(vapi_msg_bfd_auth_keys_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_auth_keys_details()
{
  static const char name[] = "bfd_auth_keys_details";
  static const char name_with_crc[] = "bfd_auth_keys_details_84130e9f";
  static vapi_message_desc_t __vapi_metadata_bfd_auth_keys_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_auth_keys_details, payload),
    sizeof(vapi_msg_bfd_auth_keys_details),
    (generic_swap_fn_t)vapi_msg_bfd_auth_keys_details_hton,
    (generic_swap_fn_t)vapi_msg_bfd_auth_keys_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_auth_keys_details = vapi_register_msg(&__vapi_metadata_bfd_auth_keys_details);
  VAPI_DBG("Assigned msg id %d to bfd_auth_keys_details", vapi_msg_id_bfd_auth_keys_details);
}

static inline void vapi_set_vapi_msg_bfd_auth_keys_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_auth_keys_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_auth_keys_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_auth_keys_dump
#define defined_vapi_msg_bfd_auth_keys_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_bfd_auth_keys_dump;

static inline void vapi_msg_bfd_auth_keys_dump_hton(vapi_msg_bfd_auth_keys_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_keys_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_bfd_auth_keys_dump_ntoh(vapi_msg_bfd_auth_keys_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_keys_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_bfd_auth_keys_dump_msg_size(vapi_msg_bfd_auth_keys_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_auth_keys_dump* vapi_alloc_bfd_auth_keys_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_auth_keys_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_auth_keys_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_auth_keys_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_auth_keys_dump);

  return msg;
}

static inline vapi_error_e vapi_bfd_auth_keys_dump(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_auth_keys_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_auth_keys_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_auth_keys_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_auth_keys_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_auth_keys_dump()
{
  static const char name[] = "bfd_auth_keys_dump";
  static const char name_with_crc[] = "bfd_auth_keys_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_bfd_auth_keys_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_bfd_auth_keys_dump),
    (generic_swap_fn_t)vapi_msg_bfd_auth_keys_dump_hton,
    (generic_swap_fn_t)vapi_msg_bfd_auth_keys_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_auth_keys_dump = vapi_register_msg(&__vapi_metadata_bfd_auth_keys_dump);
  VAPI_DBG("Assigned msg id %d to bfd_auth_keys_dump", vapi_msg_id_bfd_auth_keys_dump);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_auth_deactivate_reply
#define defined_vapi_msg_bfd_udp_auth_deactivate_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_auth_deactivate_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_auth_deactivate_reply payload;
} vapi_msg_bfd_udp_auth_deactivate_reply;

static inline void vapi_msg_bfd_udp_auth_deactivate_reply_payload_hton(vapi_payload_bfd_udp_auth_deactivate_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_auth_deactivate_reply_payload_ntoh(vapi_payload_bfd_udp_auth_deactivate_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_auth_deactivate_reply_hton(vapi_msg_bfd_udp_auth_deactivate_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_deactivate_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_auth_deactivate_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_auth_deactivate_reply_ntoh(vapi_msg_bfd_udp_auth_deactivate_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_deactivate_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_auth_deactivate_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_auth_deactivate_reply_msg_size(vapi_msg_bfd_udp_auth_deactivate_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_auth_deactivate_reply()
{
  static const char name[] = "bfd_udp_auth_deactivate_reply";
  static const char name_with_crc[] = "bfd_udp_auth_deactivate_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_auth_deactivate_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_auth_deactivate_reply, payload),
    sizeof(vapi_msg_bfd_udp_auth_deactivate_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_deactivate_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_deactivate_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_auth_deactivate_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_auth_deactivate_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_auth_deactivate_reply", vapi_msg_id_bfd_udp_auth_deactivate_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_auth_deactivate_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_auth_deactivate_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_auth_deactivate_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_auth_deactivate
#define defined_vapi_msg_bfd_udp_auth_deactivate
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 local_addr[16];
  u8 peer_addr[16];
  u8 is_ipv6;
  u8 is_delayed; 
} vapi_payload_bfd_udp_auth_deactivate;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_udp_auth_deactivate payload;
} vapi_msg_bfd_udp_auth_deactivate;

static inline void vapi_msg_bfd_udp_auth_deactivate_payload_hton(vapi_payload_bfd_udp_auth_deactivate *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_auth_deactivate_payload_ntoh(vapi_payload_bfd_udp_auth_deactivate *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_auth_deactivate_hton(vapi_msg_bfd_udp_auth_deactivate *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_deactivate'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_udp_auth_deactivate_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_auth_deactivate_ntoh(vapi_msg_bfd_udp_auth_deactivate *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_deactivate'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_auth_deactivate_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_auth_deactivate_msg_size(vapi_msg_bfd_udp_auth_deactivate *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_auth_deactivate* vapi_alloc_bfd_udp_auth_deactivate(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_auth_deactivate *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_auth_deactivate);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_auth_deactivate*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_auth_deactivate);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_auth_deactivate(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_auth_deactivate *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_auth_deactivate_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_auth_deactivate_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_auth_deactivate_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_auth_deactivate()
{
  static const char name[] = "bfd_udp_auth_deactivate";
  static const char name_with_crc[] = "bfd_udp_auth_deactivate_10661991";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_auth_deactivate = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_udp_auth_deactivate, payload),
    sizeof(vapi_msg_bfd_udp_auth_deactivate),
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_deactivate_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_deactivate_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_auth_deactivate = vapi_register_msg(&__vapi_metadata_bfd_udp_auth_deactivate);
  VAPI_DBG("Assigned msg id %d to bfd_udp_auth_deactivate", vapi_msg_id_bfd_udp_auth_deactivate);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_del_reply
#define defined_vapi_msg_bfd_udp_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_del_reply payload;
} vapi_msg_bfd_udp_del_reply;

static inline void vapi_msg_bfd_udp_del_reply_payload_hton(vapi_payload_bfd_udp_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_del_reply_payload_ntoh(vapi_payload_bfd_udp_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_del_reply_hton(vapi_msg_bfd_udp_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_del_reply_ntoh(vapi_msg_bfd_udp_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_del_reply_msg_size(vapi_msg_bfd_udp_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_del_reply()
{
  static const char name[] = "bfd_udp_del_reply";
  static const char name_with_crc[] = "bfd_udp_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_del_reply, payload),
    sizeof(vapi_msg_bfd_udp_del_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_del_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_del_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_del_reply", vapi_msg_id_bfd_udp_del_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_auth_activate_reply
#define defined_vapi_msg_bfd_udp_auth_activate_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_udp_auth_activate_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_auth_activate_reply payload;
} vapi_msg_bfd_udp_auth_activate_reply;

static inline void vapi_msg_bfd_udp_auth_activate_reply_payload_hton(vapi_payload_bfd_udp_auth_activate_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_udp_auth_activate_reply_payload_ntoh(vapi_payload_bfd_udp_auth_activate_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_udp_auth_activate_reply_hton(vapi_msg_bfd_udp_auth_activate_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_activate_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_auth_activate_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_auth_activate_reply_ntoh(vapi_msg_bfd_udp_auth_activate_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_activate_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_auth_activate_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_auth_activate_reply_msg_size(vapi_msg_bfd_udp_auth_activate_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_auth_activate_reply()
{
  static const char name[] = "bfd_udp_auth_activate_reply";
  static const char name_with_crc[] = "bfd_udp_auth_activate_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_auth_activate_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_auth_activate_reply, payload),
    sizeof(vapi_msg_bfd_udp_auth_activate_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_activate_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_activate_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_auth_activate_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_auth_activate_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_auth_activate_reply", vapi_msg_id_bfd_udp_auth_activate_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_auth_activate_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_auth_activate_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_auth_activate_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_session_set_flags
#define defined_vapi_msg_bfd_udp_session_set_flags
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 local_addr[16];
  u8 peer_addr[16];
  u8 is_ipv6;
  u8 admin_up_down; 
} vapi_payload_bfd_udp_session_set_flags;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_udp_session_set_flags payload;
} vapi_msg_bfd_udp_session_set_flags;

static inline void vapi_msg_bfd_udp_session_set_flags_payload_hton(vapi_payload_bfd_udp_session_set_flags *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_session_set_flags_payload_ntoh(vapi_payload_bfd_udp_session_set_flags *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_session_set_flags_hton(vapi_msg_bfd_udp_session_set_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_set_flags'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_udp_session_set_flags_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_session_set_flags_ntoh(vapi_msg_bfd_udp_session_set_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_set_flags'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_session_set_flags_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_session_set_flags_msg_size(vapi_msg_bfd_udp_session_set_flags *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_session_set_flags* vapi_alloc_bfd_udp_session_set_flags(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_session_set_flags *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_session_set_flags);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_session_set_flags*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_session_set_flags);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_session_set_flags(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_session_set_flags *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_session_set_flags_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_session_set_flags_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_session_set_flags_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_session_set_flags()
{
  static const char name[] = "bfd_udp_session_set_flags";
  static const char name_with_crc[] = "bfd_udp_session_set_flags_667d6e7c";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_session_set_flags = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_udp_session_set_flags, payload),
    sizeof(vapi_msg_bfd_udp_session_set_flags),
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_set_flags_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_set_flags_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_session_set_flags = vapi_register_msg(&__vapi_metadata_bfd_udp_session_set_flags);
  VAPI_DBG("Assigned msg id %d to bfd_udp_session_set_flags", vapi_msg_id_bfd_udp_session_set_flags);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_get_echo_source_reply
#define defined_vapi_msg_bfd_udp_get_echo_source_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index;
  u8 is_set;
  u8 have_usable_ip4;
  u8 ip4_addr[4];
  u8 have_usable_ip6;
  u8 ip6_addr[16]; 
} vapi_payload_bfd_udp_get_echo_source_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_udp_get_echo_source_reply payload;
} vapi_msg_bfd_udp_get_echo_source_reply;

static inline void vapi_msg_bfd_udp_get_echo_source_reply_payload_hton(vapi_payload_bfd_udp_get_echo_source_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_get_echo_source_reply_payload_ntoh(vapi_payload_bfd_udp_get_echo_source_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_get_echo_source_reply_hton(vapi_msg_bfd_udp_get_echo_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_get_echo_source_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_udp_get_echo_source_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_get_echo_source_reply_ntoh(vapi_msg_bfd_udp_get_echo_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_get_echo_source_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_get_echo_source_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_get_echo_source_reply_msg_size(vapi_msg_bfd_udp_get_echo_source_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_udp_get_echo_source_reply()
{
  static const char name[] = "bfd_udp_get_echo_source_reply";
  static const char name_with_crc[] = "bfd_udp_get_echo_source_reply_6924ca6b";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_get_echo_source_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_udp_get_echo_source_reply, payload),
    sizeof(vapi_msg_bfd_udp_get_echo_source_reply),
    (generic_swap_fn_t)vapi_msg_bfd_udp_get_echo_source_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_get_echo_source_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_get_echo_source_reply = vapi_register_msg(&__vapi_metadata_bfd_udp_get_echo_source_reply);
  VAPI_DBG("Assigned msg id %d to bfd_udp_get_echo_source_reply", vapi_msg_id_bfd_udp_get_echo_source_reply);
}

static inline void vapi_set_vapi_msg_bfd_udp_get_echo_source_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_udp_get_echo_source_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_udp_get_echo_source_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_udp_get_echo_source
#define defined_vapi_msg_bfd_udp_get_echo_source
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_bfd_udp_get_echo_source;

static inline void vapi_msg_bfd_udp_get_echo_source_hton(vapi_msg_bfd_udp_get_echo_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_get_echo_source'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_bfd_udp_get_echo_source_ntoh(vapi_msg_bfd_udp_get_echo_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_get_echo_source'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_bfd_udp_get_echo_source_msg_size(vapi_msg_bfd_udp_get_echo_source *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_get_echo_source* vapi_alloc_bfd_udp_get_echo_source(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_get_echo_source *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_get_echo_source);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_get_echo_source*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_get_echo_source);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_get_echo_source(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_get_echo_source *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_get_echo_source_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_get_echo_source_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_get_echo_source_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_get_echo_source()
{
  static const char name[] = "bfd_udp_get_echo_source";
  static const char name_with_crc[] = "bfd_udp_get_echo_source_51077d14";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_get_echo_source = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_bfd_udp_get_echo_source),
    (generic_swap_fn_t)vapi_msg_bfd_udp_get_echo_source_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_get_echo_source_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_get_echo_source = vapi_register_msg(&__vapi_metadata_bfd_udp_get_echo_source);
  VAPI_DBG("Assigned msg id %d to bfd_udp_get_echo_source", vapi_msg_id_bfd_udp_get_echo_source);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_add
#define defined_vapi_msg_bfd_udp_add
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 desired_min_tx;
  u32 required_min_rx;
  u8 local_addr[16];
  u8 peer_addr[16];
  u8 is_ipv6;
  u8 detect_mult;
  u8 is_authenticated;
  u8 bfd_key_id;
  u32 conf_key_id; 
} vapi_payload_bfd_udp_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_udp_add payload;
} vapi_msg_bfd_udp_add;

static inline void vapi_msg_bfd_udp_add_payload_hton(vapi_payload_bfd_udp_add *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->desired_min_tx = htobe32(payload->desired_min_tx);
  payload->required_min_rx = htobe32(payload->required_min_rx);
  payload->conf_key_id = htobe32(payload->conf_key_id);
}

static inline void vapi_msg_bfd_udp_add_payload_ntoh(vapi_payload_bfd_udp_add *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->desired_min_tx = be32toh(payload->desired_min_tx);
  payload->required_min_rx = be32toh(payload->required_min_rx);
  payload->conf_key_id = be32toh(payload->conf_key_id);
}

static inline void vapi_msg_bfd_udp_add_hton(vapi_msg_bfd_udp_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_udp_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_add_ntoh(vapi_msg_bfd_udp_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_add_msg_size(vapi_msg_bfd_udp_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_add* vapi_alloc_bfd_udp_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_add);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_add(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_add_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_add_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_add()
{
  static const char name[] = "bfd_udp_add";
  static const char name_with_crc[] = "bfd_udp_add_61cf1850";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_udp_add, payload),
    sizeof(vapi_msg_bfd_udp_add),
    (generic_swap_fn_t)vapi_msg_bfd_udp_add_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_add = vapi_register_msg(&__vapi_metadata_bfd_udp_add);
  VAPI_DBG("Assigned msg id %d to bfd_udp_add", vapi_msg_id_bfd_udp_add);
}
#endif

#ifndef defined_vapi_msg_bfd_auth_set_key_reply
#define defined_vapi_msg_bfd_auth_set_key_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bfd_auth_set_key_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bfd_auth_set_key_reply payload;
} vapi_msg_bfd_auth_set_key_reply;

static inline void vapi_msg_bfd_auth_set_key_reply_payload_hton(vapi_payload_bfd_auth_set_key_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bfd_auth_set_key_reply_payload_ntoh(vapi_payload_bfd_auth_set_key_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bfd_auth_set_key_reply_hton(vapi_msg_bfd_auth_set_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_set_key_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bfd_auth_set_key_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_auth_set_key_reply_ntoh(vapi_msg_bfd_auth_set_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_set_key_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bfd_auth_set_key_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_auth_set_key_reply_msg_size(vapi_msg_bfd_auth_set_key_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bfd_auth_set_key_reply()
{
  static const char name[] = "bfd_auth_set_key_reply";
  static const char name_with_crc[] = "bfd_auth_set_key_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bfd_auth_set_key_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bfd_auth_set_key_reply, payload),
    sizeof(vapi_msg_bfd_auth_set_key_reply),
    (generic_swap_fn_t)vapi_msg_bfd_auth_set_key_reply_hton,
    (generic_swap_fn_t)vapi_msg_bfd_auth_set_key_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_auth_set_key_reply = vapi_register_msg(&__vapi_metadata_bfd_auth_set_key_reply);
  VAPI_DBG("Assigned msg id %d to bfd_auth_set_key_reply", vapi_msg_id_bfd_auth_set_key_reply);
}

static inline void vapi_set_vapi_msg_bfd_auth_set_key_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bfd_auth_set_key_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bfd_auth_set_key_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bfd_auth_set_key
#define defined_vapi_msg_bfd_auth_set_key
typedef struct __attribute__ ((__packed__)) {
  u32 conf_key_id;
  u8 key_len;
  u8 auth_type;
  u8 key[20]; 
} vapi_payload_bfd_auth_set_key;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_auth_set_key payload;
} vapi_msg_bfd_auth_set_key;

static inline void vapi_msg_bfd_auth_set_key_payload_hton(vapi_payload_bfd_auth_set_key *payload)
{
  payload->conf_key_id = htobe32(payload->conf_key_id);
}

static inline void vapi_msg_bfd_auth_set_key_payload_ntoh(vapi_payload_bfd_auth_set_key *payload)
{
  payload->conf_key_id = be32toh(payload->conf_key_id);
}

static inline void vapi_msg_bfd_auth_set_key_hton(vapi_msg_bfd_auth_set_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_set_key'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_auth_set_key_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_auth_set_key_ntoh(vapi_msg_bfd_auth_set_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_auth_set_key'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_auth_set_key_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_auth_set_key_msg_size(vapi_msg_bfd_auth_set_key *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_auth_set_key* vapi_alloc_bfd_auth_set_key(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_auth_set_key *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_auth_set_key);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_auth_set_key*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_auth_set_key);

  return msg;
}

static inline vapi_error_e vapi_bfd_auth_set_key(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_auth_set_key *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_auth_set_key_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_auth_set_key_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_auth_set_key_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_auth_set_key()
{
  static const char name[] = "bfd_auth_set_key";
  static const char name_with_crc[] = "bfd_auth_set_key_690b8877";
  static vapi_message_desc_t __vapi_metadata_bfd_auth_set_key = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_auth_set_key, payload),
    sizeof(vapi_msg_bfd_auth_set_key),
    (generic_swap_fn_t)vapi_msg_bfd_auth_set_key_hton,
    (generic_swap_fn_t)vapi_msg_bfd_auth_set_key_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_auth_set_key = vapi_register_msg(&__vapi_metadata_bfd_auth_set_key);
  VAPI_DBG("Assigned msg id %d to bfd_auth_set_key", vapi_msg_id_bfd_auth_set_key);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_auth_activate
#define defined_vapi_msg_bfd_udp_auth_activate
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 local_addr[16];
  u8 peer_addr[16];
  u8 is_ipv6;
  u8 is_delayed;
  u8 bfd_key_id;
  u32 conf_key_id; 
} vapi_payload_bfd_udp_auth_activate;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_udp_auth_activate payload;
} vapi_msg_bfd_udp_auth_activate;

static inline void vapi_msg_bfd_udp_auth_activate_payload_hton(vapi_payload_bfd_udp_auth_activate *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->conf_key_id = htobe32(payload->conf_key_id);
}

static inline void vapi_msg_bfd_udp_auth_activate_payload_ntoh(vapi_payload_bfd_udp_auth_activate *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->conf_key_id = be32toh(payload->conf_key_id);
}

static inline void vapi_msg_bfd_udp_auth_activate_hton(vapi_msg_bfd_udp_auth_activate *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_activate'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_udp_auth_activate_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_auth_activate_ntoh(vapi_msg_bfd_udp_auth_activate *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_auth_activate'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_auth_activate_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_auth_activate_msg_size(vapi_msg_bfd_udp_auth_activate *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_auth_activate* vapi_alloc_bfd_udp_auth_activate(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_auth_activate *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_auth_activate);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_auth_activate*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_auth_activate);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_auth_activate(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_auth_activate *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_auth_activate_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_auth_activate_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_auth_activate_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_auth_activate()
{
  static const char name[] = "bfd_udp_auth_activate";
  static const char name_with_crc[] = "bfd_udp_auth_activate_1bae0947";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_auth_activate = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_udp_auth_activate, payload),
    sizeof(vapi_msg_bfd_udp_auth_activate),
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_activate_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_auth_activate_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_auth_activate = vapi_register_msg(&__vapi_metadata_bfd_udp_auth_activate);
  VAPI_DBG("Assigned msg id %d to bfd_udp_auth_activate", vapi_msg_id_bfd_udp_auth_activate);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_session_dump
#define defined_vapi_msg_bfd_udp_session_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_bfd_udp_session_dump;

static inline void vapi_msg_bfd_udp_session_dump_hton(vapi_msg_bfd_udp_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_bfd_udp_session_dump_ntoh(vapi_msg_bfd_udp_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_session_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_bfd_udp_session_dump_msg_size(vapi_msg_bfd_udp_session_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_session_dump* vapi_alloc_bfd_udp_session_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_session_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_session_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_session_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_session_dump);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_session_dump(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_session_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_session_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_session_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_session_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_session_dump()
{
  static const char name[] = "bfd_udp_session_dump";
  static const char name_with_crc[] = "bfd_udp_session_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_session_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_bfd_udp_session_dump),
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_dump_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_session_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_session_dump = vapi_register_msg(&__vapi_metadata_bfd_udp_session_dump);
  VAPI_DBG("Assigned msg id %d to bfd_udp_session_dump", vapi_msg_id_bfd_udp_session_dump);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_del
#define defined_vapi_msg_bfd_udp_del
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 local_addr[16];
  u8 peer_addr[16];
  u8 is_ipv6; 
} vapi_payload_bfd_udp_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_udp_del payload;
} vapi_msg_bfd_udp_del;

static inline void vapi_msg_bfd_udp_del_payload_hton(vapi_payload_bfd_udp_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_del_payload_ntoh(vapi_payload_bfd_udp_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_del_hton(vapi_msg_bfd_udp_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_udp_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_del_ntoh(vapi_msg_bfd_udp_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_del_msg_size(vapi_msg_bfd_udp_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_del* vapi_alloc_bfd_udp_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_del);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_del(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_del()
{
  static const char name[] = "bfd_udp_del";
  static const char name_with_crc[] = "bfd_udp_del_c9e9cc5a";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_udp_del, payload),
    sizeof(vapi_msg_bfd_udp_del),
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_del = vapi_register_msg(&__vapi_metadata_bfd_udp_del);
  VAPI_DBG("Assigned msg id %d to bfd_udp_del", vapi_msg_id_bfd_udp_del);
}
#endif

#ifndef defined_vapi_msg_bfd_udp_set_echo_source
#define defined_vapi_msg_bfd_udp_set_echo_source
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_bfd_udp_set_echo_source;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bfd_udp_set_echo_source payload;
} vapi_msg_bfd_udp_set_echo_source;

static inline void vapi_msg_bfd_udp_set_echo_source_payload_hton(vapi_payload_bfd_udp_set_echo_source *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_set_echo_source_payload_ntoh(vapi_payload_bfd_udp_set_echo_source *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bfd_udp_set_echo_source_hton(vapi_msg_bfd_udp_set_echo_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_set_echo_source'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bfd_udp_set_echo_source_payload_hton(&msg->payload);
}

static inline void vapi_msg_bfd_udp_set_echo_source_ntoh(vapi_msg_bfd_udp_set_echo_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bfd_udp_set_echo_source'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bfd_udp_set_echo_source_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bfd_udp_set_echo_source_msg_size(vapi_msg_bfd_udp_set_echo_source *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bfd_udp_set_echo_source* vapi_alloc_bfd_udp_set_echo_source(struct vapi_ctx_s *ctx)
{
  vapi_msg_bfd_udp_set_echo_source *msg = NULL;
  const size_t size = sizeof(vapi_msg_bfd_udp_set_echo_source);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bfd_udp_set_echo_source*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bfd_udp_set_echo_source);

  return msg;
}

static inline vapi_error_e vapi_bfd_udp_set_echo_source(struct vapi_ctx_s *ctx,
  vapi_msg_bfd_udp_set_echo_source *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bfd_udp_set_echo_source_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_bfd_udp_set_echo_source_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_bfd_udp_set_echo_source_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bfd_udp_set_echo_source()
{
  static const char name[] = "bfd_udp_set_echo_source";
  static const char name_with_crc[] = "bfd_udp_set_echo_source_529cb13f";
  static vapi_message_desc_t __vapi_metadata_bfd_udp_set_echo_source = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bfd_udp_set_echo_source, payload),
    sizeof(vapi_msg_bfd_udp_set_echo_source),
    (generic_swap_fn_t)vapi_msg_bfd_udp_set_echo_source_hton,
    (generic_swap_fn_t)vapi_msg_bfd_udp_set_echo_source_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bfd_udp_set_echo_source = vapi_register_msg(&__vapi_metadata_bfd_udp_set_echo_source);
  VAPI_DBG("Assigned msg id %d to bfd_udp_set_echo_source", vapi_msg_id_bfd_udp_set_echo_source);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
