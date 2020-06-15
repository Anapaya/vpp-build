#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_ikev2_ikev2_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_ikev2_ikev2_api_json

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

extern vapi_msg_id_t vapi_msg_id_ikev2_set_local_key;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_responder;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_responder_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_esp_transforms_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_sa_init;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_ike_sa;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_rekey_child_sa_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_ike_sa_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_plugin_get_version;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_add_del;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_ike_transforms_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_sa_lifetime;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_rekey_child_sa;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_sa_lifetime_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_set_auth;
extern vapi_msg_id_t vapi_msg_id_ikev2_plugin_get_version_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_child_sa_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_ike_transforms;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_esp_transforms;
extern vapi_msg_id_t vapi_msg_id_ikev2_set_local_key_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_set_id;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_child_sa;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_set_ts;
extern vapi_msg_id_t vapi_msg_id_ikev2_initiate_sa_init_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_set_id_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_set_ts_reply;
extern vapi_msg_id_t vapi_msg_id_ikev2_profile_set_auth_reply;

#define DEFINE_VAPI_MSG_IDS_IKEV2_API_JSON\
  vapi_msg_id_t vapi_msg_id_ikev2_set_local_key;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_responder;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_responder_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_esp_transforms_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_sa_init;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_ike_sa;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_rekey_child_sa_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_ike_sa_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_plugin_get_version;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_add_del;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_ike_transforms_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_sa_lifetime;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_rekey_child_sa;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_sa_lifetime_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_set_auth;\
  vapi_msg_id_t vapi_msg_id_ikev2_plugin_get_version_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_child_sa_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_ike_transforms;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_esp_transforms;\
  vapi_msg_id_t vapi_msg_id_ikev2_set_local_key_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_set_id;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_del_child_sa;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_set_ts;\
  vapi_msg_id_t vapi_msg_id_ikev2_initiate_sa_init_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_set_id_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_set_ts_reply;\
  vapi_msg_id_t vapi_msg_id_ikev2_profile_set_auth_reply;


#ifndef defined_vapi_msg_ikev2_set_local_key_reply
#define defined_vapi_msg_ikev2_set_local_key_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_set_local_key_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_set_local_key_reply payload;
} vapi_msg_ikev2_set_local_key_reply;

static inline void vapi_msg_ikev2_set_local_key_reply_payload_hton(vapi_payload_ikev2_set_local_key_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_set_local_key_reply_payload_ntoh(vapi_payload_ikev2_set_local_key_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_set_local_key_reply_hton(vapi_msg_ikev2_set_local_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_local_key_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_set_local_key_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_local_key_reply_ntoh(vapi_msg_ikev2_set_local_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_local_key_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_local_key_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_local_key_reply_msg_size(vapi_msg_ikev2_set_local_key_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_set_local_key_reply()
{
  static const char name[] = "ikev2_set_local_key_reply";
  static const char name_with_crc[] = "ikev2_set_local_key_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_local_key_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_set_local_key_reply, payload),
    sizeof(vapi_msg_ikev2_set_local_key_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_set_local_key_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_local_key_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_local_key_reply = vapi_register_msg(&__vapi_metadata_ikev2_set_local_key_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_set_local_key_reply", vapi_msg_id_ikev2_set_local_key_reply);
}

static inline void vapi_set_vapi_msg_ikev2_set_local_key_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_set_local_key_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_set_local_key_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_set_local_key
#define defined_vapi_msg_ikev2_set_local_key
typedef struct __attribute__ ((__packed__)) {
  u8 key_file[256]; 
} vapi_payload_ikev2_set_local_key;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_set_local_key payload;
} vapi_msg_ikev2_set_local_key;

static inline void vapi_msg_ikev2_set_local_key_payload_hton(vapi_payload_ikev2_set_local_key *payload)
{

}

static inline void vapi_msg_ikev2_set_local_key_payload_ntoh(vapi_payload_ikev2_set_local_key *payload)
{

}

static inline void vapi_msg_ikev2_set_local_key_hton(vapi_msg_ikev2_set_local_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_local_key'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_set_local_key_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_local_key_ntoh(vapi_msg_ikev2_set_local_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_local_key'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_local_key_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_local_key_msg_size(vapi_msg_ikev2_set_local_key *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_set_local_key* vapi_alloc_ikev2_set_local_key(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_set_local_key *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_set_local_key);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_set_local_key*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_set_local_key);

  return msg;
}

static inline vapi_error_e vapi_ikev2_set_local_key(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_set_local_key *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_set_local_key_reply *reply),
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
  vapi_msg_ikev2_set_local_key_hton(msg);
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
    vapi_msg_ikev2_set_local_key_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_set_local_key()
{
  static const char name[] = "ikev2_set_local_key";
  static const char name_with_crc[] = "ikev2_set_local_key_e4996cd5";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_local_key = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_set_local_key, payload),
    sizeof(vapi_msg_ikev2_set_local_key),
    (generic_swap_fn_t)vapi_msg_ikev2_set_local_key_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_local_key_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_local_key = vapi_register_msg(&__vapi_metadata_ikev2_set_local_key);
  VAPI_DBG("Assigned msg id %d to ikev2_set_local_key", vapi_msg_id_ikev2_set_local_key);
}
#endif

#ifndef defined_vapi_msg_ikev2_set_responder_reply
#define defined_vapi_msg_ikev2_set_responder_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_set_responder_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_set_responder_reply payload;
} vapi_msg_ikev2_set_responder_reply;

static inline void vapi_msg_ikev2_set_responder_reply_payload_hton(vapi_payload_ikev2_set_responder_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_set_responder_reply_payload_ntoh(vapi_payload_ikev2_set_responder_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_set_responder_reply_hton(vapi_msg_ikev2_set_responder_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_responder_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_set_responder_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_responder_reply_ntoh(vapi_msg_ikev2_set_responder_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_responder_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_responder_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_responder_reply_msg_size(vapi_msg_ikev2_set_responder_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_set_responder_reply()
{
  static const char name[] = "ikev2_set_responder_reply";
  static const char name_with_crc[] = "ikev2_set_responder_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_responder_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_set_responder_reply, payload),
    sizeof(vapi_msg_ikev2_set_responder_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_set_responder_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_responder_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_responder_reply = vapi_register_msg(&__vapi_metadata_ikev2_set_responder_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_set_responder_reply", vapi_msg_id_ikev2_set_responder_reply);
}

static inline void vapi_set_vapi_msg_ikev2_set_responder_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_set_responder_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_set_responder_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_set_responder
#define defined_vapi_msg_ikev2_set_responder
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u32 sw_if_index;
  u8 address[4]; 
} vapi_payload_ikev2_set_responder;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_set_responder payload;
} vapi_msg_ikev2_set_responder;

static inline void vapi_msg_ikev2_set_responder_payload_hton(vapi_payload_ikev2_set_responder *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ikev2_set_responder_payload_ntoh(vapi_payload_ikev2_set_responder *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ikev2_set_responder_hton(vapi_msg_ikev2_set_responder *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_responder'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_set_responder_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_responder_ntoh(vapi_msg_ikev2_set_responder *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_responder'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_responder_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_responder_msg_size(vapi_msg_ikev2_set_responder *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_set_responder* vapi_alloc_ikev2_set_responder(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_set_responder *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_set_responder);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_set_responder*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_set_responder);

  return msg;
}

static inline vapi_error_e vapi_ikev2_set_responder(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_set_responder *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_set_responder_reply *reply),
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
  vapi_msg_ikev2_set_responder_hton(msg);
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
    vapi_msg_ikev2_set_responder_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_set_responder()
{
  static const char name[] = "ikev2_set_responder";
  static const char name_with_crc[] = "ikev2_set_responder_a99996f3";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_responder = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_set_responder, payload),
    sizeof(vapi_msg_ikev2_set_responder),
    (generic_swap_fn_t)vapi_msg_ikev2_set_responder_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_responder_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_responder = vapi_register_msg(&__vapi_metadata_ikev2_set_responder);
  VAPI_DBG("Assigned msg id %d to ikev2_set_responder", vapi_msg_id_ikev2_set_responder);
}
#endif

#ifndef defined_vapi_msg_ikev2_set_esp_transforms_reply
#define defined_vapi_msg_ikev2_set_esp_transforms_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_set_esp_transforms_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_set_esp_transforms_reply payload;
} vapi_msg_ikev2_set_esp_transforms_reply;

static inline void vapi_msg_ikev2_set_esp_transforms_reply_payload_hton(vapi_payload_ikev2_set_esp_transforms_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_set_esp_transforms_reply_payload_ntoh(vapi_payload_ikev2_set_esp_transforms_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_set_esp_transforms_reply_hton(vapi_msg_ikev2_set_esp_transforms_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_esp_transforms_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_set_esp_transforms_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_esp_transforms_reply_ntoh(vapi_msg_ikev2_set_esp_transforms_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_esp_transforms_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_esp_transforms_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_esp_transforms_reply_msg_size(vapi_msg_ikev2_set_esp_transforms_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_set_esp_transforms_reply()
{
  static const char name[] = "ikev2_set_esp_transforms_reply";
  static const char name_with_crc[] = "ikev2_set_esp_transforms_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_esp_transforms_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_set_esp_transforms_reply, payload),
    sizeof(vapi_msg_ikev2_set_esp_transforms_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_set_esp_transforms_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_esp_transforms_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_esp_transforms_reply = vapi_register_msg(&__vapi_metadata_ikev2_set_esp_transforms_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_set_esp_transforms_reply", vapi_msg_id_ikev2_set_esp_transforms_reply);
}

static inline void vapi_set_vapi_msg_ikev2_set_esp_transforms_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_set_esp_transforms_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_set_esp_transforms_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_initiate_sa_init_reply
#define defined_vapi_msg_ikev2_initiate_sa_init_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_initiate_sa_init_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_initiate_sa_init_reply payload;
} vapi_msg_ikev2_initiate_sa_init_reply;

static inline void vapi_msg_ikev2_initiate_sa_init_reply_payload_hton(vapi_payload_ikev2_initiate_sa_init_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_sa_init_reply_payload_ntoh(vapi_payload_ikev2_initiate_sa_init_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_sa_init_reply_hton(vapi_msg_ikev2_initiate_sa_init_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_sa_init_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_sa_init_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_sa_init_reply_ntoh(vapi_msg_ikev2_initiate_sa_init_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_sa_init_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_sa_init_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_sa_init_reply_msg_size(vapi_msg_ikev2_initiate_sa_init_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_sa_init_reply()
{
  static const char name[] = "ikev2_initiate_sa_init_reply";
  static const char name_with_crc[] = "ikev2_initiate_sa_init_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_sa_init_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_initiate_sa_init_reply, payload),
    sizeof(vapi_msg_ikev2_initiate_sa_init_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_sa_init_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_sa_init_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_sa_init_reply = vapi_register_msg(&__vapi_metadata_ikev2_initiate_sa_init_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_sa_init_reply", vapi_msg_id_ikev2_initiate_sa_init_reply);
}

static inline void vapi_set_vapi_msg_ikev2_initiate_sa_init_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_initiate_sa_init_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_initiate_sa_init_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_initiate_sa_init
#define defined_vapi_msg_ikev2_initiate_sa_init
typedef struct __attribute__ ((__packed__)) {
  u8 name[64]; 
} vapi_payload_ikev2_initiate_sa_init;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_initiate_sa_init payload;
} vapi_msg_ikev2_initiate_sa_init;

static inline void vapi_msg_ikev2_initiate_sa_init_payload_hton(vapi_payload_ikev2_initiate_sa_init *payload)
{

}

static inline void vapi_msg_ikev2_initiate_sa_init_payload_ntoh(vapi_payload_ikev2_initiate_sa_init *payload)
{

}

static inline void vapi_msg_ikev2_initiate_sa_init_hton(vapi_msg_ikev2_initiate_sa_init *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_sa_init'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_sa_init_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_sa_init_ntoh(vapi_msg_ikev2_initiate_sa_init *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_sa_init'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_sa_init_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_sa_init_msg_size(vapi_msg_ikev2_initiate_sa_init *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_initiate_sa_init* vapi_alloc_ikev2_initiate_sa_init(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_initiate_sa_init *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_initiate_sa_init);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_initiate_sa_init*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_initiate_sa_init);

  return msg;
}

static inline vapi_error_e vapi_ikev2_initiate_sa_init(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_initiate_sa_init *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_initiate_sa_init_reply *reply),
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
  vapi_msg_ikev2_initiate_sa_init_hton(msg);
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
    vapi_msg_ikev2_initiate_sa_init_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_sa_init()
{
  static const char name[] = "ikev2_initiate_sa_init";
  static const char name_with_crc[] = "ikev2_initiate_sa_init_0cb71b0e";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_sa_init = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_initiate_sa_init, payload),
    sizeof(vapi_msg_ikev2_initiate_sa_init),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_sa_init_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_sa_init_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_sa_init = vapi_register_msg(&__vapi_metadata_ikev2_initiate_sa_init);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_sa_init", vapi_msg_id_ikev2_initiate_sa_init);
}
#endif

#ifndef defined_vapi_msg_ikev2_initiate_del_ike_sa_reply
#define defined_vapi_msg_ikev2_initiate_del_ike_sa_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_initiate_del_ike_sa_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_initiate_del_ike_sa_reply payload;
} vapi_msg_ikev2_initiate_del_ike_sa_reply;

static inline void vapi_msg_ikev2_initiate_del_ike_sa_reply_payload_hton(vapi_payload_ikev2_initiate_del_ike_sa_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_del_ike_sa_reply_payload_ntoh(vapi_payload_ikev2_initiate_del_ike_sa_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_del_ike_sa_reply_hton(vapi_msg_ikev2_initiate_del_ike_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_ike_sa_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_del_ike_sa_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_del_ike_sa_reply_ntoh(vapi_msg_ikev2_initiate_del_ike_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_ike_sa_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_del_ike_sa_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_del_ike_sa_reply_msg_size(vapi_msg_ikev2_initiate_del_ike_sa_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_del_ike_sa_reply()
{
  static const char name[] = "ikev2_initiate_del_ike_sa_reply";
  static const char name_with_crc[] = "ikev2_initiate_del_ike_sa_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_del_ike_sa_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_initiate_del_ike_sa_reply, payload),
    sizeof(vapi_msg_ikev2_initiate_del_ike_sa_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_ike_sa_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_ike_sa_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_del_ike_sa_reply = vapi_register_msg(&__vapi_metadata_ikev2_initiate_del_ike_sa_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_del_ike_sa_reply", vapi_msg_id_ikev2_initiate_del_ike_sa_reply);
}

static inline void vapi_set_vapi_msg_ikev2_initiate_del_ike_sa_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_initiate_del_ike_sa_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_initiate_del_ike_sa_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_initiate_del_ike_sa
#define defined_vapi_msg_ikev2_initiate_del_ike_sa
typedef struct __attribute__ ((__packed__)) {
  u64 ispi; 
} vapi_payload_ikev2_initiate_del_ike_sa;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_initiate_del_ike_sa payload;
} vapi_msg_ikev2_initiate_del_ike_sa;

static inline void vapi_msg_ikev2_initiate_del_ike_sa_payload_hton(vapi_payload_ikev2_initiate_del_ike_sa *payload)
{
  payload->ispi = htobe64(payload->ispi);
}

static inline void vapi_msg_ikev2_initiate_del_ike_sa_payload_ntoh(vapi_payload_ikev2_initiate_del_ike_sa *payload)
{
  payload->ispi = be64toh(payload->ispi);
}

static inline void vapi_msg_ikev2_initiate_del_ike_sa_hton(vapi_msg_ikev2_initiate_del_ike_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_ike_sa'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_del_ike_sa_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_del_ike_sa_ntoh(vapi_msg_ikev2_initiate_del_ike_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_ike_sa'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_del_ike_sa_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_del_ike_sa_msg_size(vapi_msg_ikev2_initiate_del_ike_sa *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_initiate_del_ike_sa* vapi_alloc_ikev2_initiate_del_ike_sa(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_initiate_del_ike_sa *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_initiate_del_ike_sa);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_initiate_del_ike_sa*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_initiate_del_ike_sa);

  return msg;
}

static inline vapi_error_e vapi_ikev2_initiate_del_ike_sa(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_initiate_del_ike_sa *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_initiate_del_ike_sa_reply *reply),
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
  vapi_msg_ikev2_initiate_del_ike_sa_hton(msg);
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
    vapi_msg_ikev2_initiate_del_ike_sa_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_del_ike_sa()
{
  static const char name[] = "ikev2_initiate_del_ike_sa";
  static const char name_with_crc[] = "ikev2_initiate_del_ike_sa_8d125bdd";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_del_ike_sa = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_initiate_del_ike_sa, payload),
    sizeof(vapi_msg_ikev2_initiate_del_ike_sa),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_ike_sa_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_ike_sa_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_del_ike_sa = vapi_register_msg(&__vapi_metadata_ikev2_initiate_del_ike_sa);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_del_ike_sa", vapi_msg_id_ikev2_initiate_del_ike_sa);
}
#endif

#ifndef defined_vapi_msg_ikev2_initiate_rekey_child_sa_reply
#define defined_vapi_msg_ikev2_initiate_rekey_child_sa_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_initiate_rekey_child_sa_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_initiate_rekey_child_sa_reply payload;
} vapi_msg_ikev2_initiate_rekey_child_sa_reply;

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_reply_payload_hton(vapi_payload_ikev2_initiate_rekey_child_sa_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_reply_payload_ntoh(vapi_payload_ikev2_initiate_rekey_child_sa_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_reply_hton(vapi_msg_ikev2_initiate_rekey_child_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_rekey_child_sa_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_rekey_child_sa_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_reply_ntoh(vapi_msg_ikev2_initiate_rekey_child_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_rekey_child_sa_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_rekey_child_sa_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_rekey_child_sa_reply_msg_size(vapi_msg_ikev2_initiate_rekey_child_sa_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_rekey_child_sa_reply()
{
  static const char name[] = "ikev2_initiate_rekey_child_sa_reply";
  static const char name_with_crc[] = "ikev2_initiate_rekey_child_sa_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_rekey_child_sa_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_initiate_rekey_child_sa_reply, payload),
    sizeof(vapi_msg_ikev2_initiate_rekey_child_sa_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_rekey_child_sa_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_rekey_child_sa_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_rekey_child_sa_reply = vapi_register_msg(&__vapi_metadata_ikev2_initiate_rekey_child_sa_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_rekey_child_sa_reply", vapi_msg_id_ikev2_initiate_rekey_child_sa_reply);
}

static inline void vapi_set_vapi_msg_ikev2_initiate_rekey_child_sa_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_initiate_rekey_child_sa_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_initiate_rekey_child_sa_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_profile_add_del_reply
#define defined_vapi_msg_ikev2_profile_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_profile_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_profile_add_del_reply payload;
} vapi_msg_ikev2_profile_add_del_reply;

static inline void vapi_msg_ikev2_profile_add_del_reply_payload_hton(vapi_payload_ikev2_profile_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_profile_add_del_reply_payload_ntoh(vapi_payload_ikev2_profile_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_profile_add_del_reply_hton(vapi_msg_ikev2_profile_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_profile_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_add_del_reply_ntoh(vapi_msg_ikev2_profile_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_add_del_reply_msg_size(vapi_msg_ikev2_profile_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_add_del_reply()
{
  static const char name[] = "ikev2_profile_add_del_reply";
  static const char name_with_crc[] = "ikev2_profile_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_profile_add_del_reply, payload),
    sizeof(vapi_msg_ikev2_profile_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_add_del_reply = vapi_register_msg(&__vapi_metadata_ikev2_profile_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_add_del_reply", vapi_msg_id_ikev2_profile_add_del_reply);
}

static inline void vapi_set_vapi_msg_ikev2_profile_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_profile_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_profile_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_plugin_get_version_reply
#define defined_vapi_msg_ikev2_plugin_get_version_reply
typedef struct __attribute__ ((__packed__)) {
  u32 major;
  u32 minor; 
} vapi_payload_ikev2_plugin_get_version_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_plugin_get_version_reply payload;
} vapi_msg_ikev2_plugin_get_version_reply;

static inline void vapi_msg_ikev2_plugin_get_version_reply_payload_hton(vapi_payload_ikev2_plugin_get_version_reply *payload)
{
  payload->major = htobe32(payload->major);
  payload->minor = htobe32(payload->minor);
}

static inline void vapi_msg_ikev2_plugin_get_version_reply_payload_ntoh(vapi_payload_ikev2_plugin_get_version_reply *payload)
{
  payload->major = be32toh(payload->major);
  payload->minor = be32toh(payload->minor);
}

static inline void vapi_msg_ikev2_plugin_get_version_reply_hton(vapi_msg_ikev2_plugin_get_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_plugin_get_version_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_plugin_get_version_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_plugin_get_version_reply_ntoh(vapi_msg_ikev2_plugin_get_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_plugin_get_version_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_plugin_get_version_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_plugin_get_version_reply_msg_size(vapi_msg_ikev2_plugin_get_version_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_plugin_get_version_reply()
{
  static const char name[] = "ikev2_plugin_get_version_reply";
  static const char name_with_crc[] = "ikev2_plugin_get_version_reply_9b32cf86";
  static vapi_message_desc_t __vapi_metadata_ikev2_plugin_get_version_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_plugin_get_version_reply, payload),
    sizeof(vapi_msg_ikev2_plugin_get_version_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_plugin_get_version_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_plugin_get_version_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_plugin_get_version_reply = vapi_register_msg(&__vapi_metadata_ikev2_plugin_get_version_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_plugin_get_version_reply", vapi_msg_id_ikev2_plugin_get_version_reply);
}

static inline void vapi_set_vapi_msg_ikev2_plugin_get_version_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_plugin_get_version_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_plugin_get_version_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_plugin_get_version
#define defined_vapi_msg_ikev2_plugin_get_version
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ikev2_plugin_get_version;

static inline void vapi_msg_ikev2_plugin_get_version_hton(vapi_msg_ikev2_plugin_get_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_plugin_get_version'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ikev2_plugin_get_version_ntoh(vapi_msg_ikev2_plugin_get_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_plugin_get_version'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ikev2_plugin_get_version_msg_size(vapi_msg_ikev2_plugin_get_version *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_plugin_get_version* vapi_alloc_ikev2_plugin_get_version(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_plugin_get_version *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_plugin_get_version);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_plugin_get_version*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_plugin_get_version);

  return msg;
}

static inline vapi_error_e vapi_ikev2_plugin_get_version(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_plugin_get_version *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_plugin_get_version_reply *reply),
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
  vapi_msg_ikev2_plugin_get_version_hton(msg);
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
    vapi_msg_ikev2_plugin_get_version_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_plugin_get_version()
{
  static const char name[] = "ikev2_plugin_get_version";
  static const char name_with_crc[] = "ikev2_plugin_get_version_51077d14";
  static vapi_message_desc_t __vapi_metadata_ikev2_plugin_get_version = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ikev2_plugin_get_version),
    (generic_swap_fn_t)vapi_msg_ikev2_plugin_get_version_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_plugin_get_version_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_plugin_get_version = vapi_register_msg(&__vapi_metadata_ikev2_plugin_get_version);
  VAPI_DBG("Assigned msg id %d to ikev2_plugin_get_version", vapi_msg_id_ikev2_plugin_get_version);
}
#endif

#ifndef defined_vapi_msg_ikev2_profile_add_del
#define defined_vapi_msg_ikev2_profile_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u8 is_add; 
} vapi_payload_ikev2_profile_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_profile_add_del payload;
} vapi_msg_ikev2_profile_add_del;

static inline void vapi_msg_ikev2_profile_add_del_payload_hton(vapi_payload_ikev2_profile_add_del *payload)
{

}

static inline void vapi_msg_ikev2_profile_add_del_payload_ntoh(vapi_payload_ikev2_profile_add_del *payload)
{

}

static inline void vapi_msg_ikev2_profile_add_del_hton(vapi_msg_ikev2_profile_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_profile_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_add_del_ntoh(vapi_msg_ikev2_profile_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_add_del_msg_size(vapi_msg_ikev2_profile_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_profile_add_del* vapi_alloc_ikev2_profile_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_profile_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_profile_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_profile_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_profile_add_del);

  return msg;
}

static inline vapi_error_e vapi_ikev2_profile_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_profile_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_profile_add_del_reply *reply),
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
  vapi_msg_ikev2_profile_add_del_hton(msg);
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
    vapi_msg_ikev2_profile_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_add_del()
{
  static const char name[] = "ikev2_profile_add_del";
  static const char name_with_crc[] = "ikev2_profile_add_del_405b222e";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_profile_add_del, payload),
    sizeof(vapi_msg_ikev2_profile_add_del),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_add_del = vapi_register_msg(&__vapi_metadata_ikev2_profile_add_del);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_add_del", vapi_msg_id_ikev2_profile_add_del);
}
#endif

#ifndef defined_vapi_msg_ikev2_set_ike_transforms_reply
#define defined_vapi_msg_ikev2_set_ike_transforms_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_set_ike_transforms_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_set_ike_transforms_reply payload;
} vapi_msg_ikev2_set_ike_transforms_reply;

static inline void vapi_msg_ikev2_set_ike_transforms_reply_payload_hton(vapi_payload_ikev2_set_ike_transforms_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_set_ike_transforms_reply_payload_ntoh(vapi_payload_ikev2_set_ike_transforms_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_set_ike_transforms_reply_hton(vapi_msg_ikev2_set_ike_transforms_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_ike_transforms_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_set_ike_transforms_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_ike_transforms_reply_ntoh(vapi_msg_ikev2_set_ike_transforms_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_ike_transforms_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_ike_transforms_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_ike_transforms_reply_msg_size(vapi_msg_ikev2_set_ike_transforms_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_set_ike_transforms_reply()
{
  static const char name[] = "ikev2_set_ike_transforms_reply";
  static const char name_with_crc[] = "ikev2_set_ike_transforms_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_ike_transforms_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_set_ike_transforms_reply, payload),
    sizeof(vapi_msg_ikev2_set_ike_transforms_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_set_ike_transforms_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_ike_transforms_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_ike_transforms_reply = vapi_register_msg(&__vapi_metadata_ikev2_set_ike_transforms_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_set_ike_transforms_reply", vapi_msg_id_ikev2_set_ike_transforms_reply);
}

static inline void vapi_set_vapi_msg_ikev2_set_ike_transforms_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_set_ike_transforms_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_set_ike_transforms_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_set_sa_lifetime_reply
#define defined_vapi_msg_ikev2_set_sa_lifetime_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_set_sa_lifetime_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_set_sa_lifetime_reply payload;
} vapi_msg_ikev2_set_sa_lifetime_reply;

static inline void vapi_msg_ikev2_set_sa_lifetime_reply_payload_hton(vapi_payload_ikev2_set_sa_lifetime_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_set_sa_lifetime_reply_payload_ntoh(vapi_payload_ikev2_set_sa_lifetime_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_set_sa_lifetime_reply_hton(vapi_msg_ikev2_set_sa_lifetime_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_sa_lifetime_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_set_sa_lifetime_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_sa_lifetime_reply_ntoh(vapi_msg_ikev2_set_sa_lifetime_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_sa_lifetime_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_sa_lifetime_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_sa_lifetime_reply_msg_size(vapi_msg_ikev2_set_sa_lifetime_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_set_sa_lifetime_reply()
{
  static const char name[] = "ikev2_set_sa_lifetime_reply";
  static const char name_with_crc[] = "ikev2_set_sa_lifetime_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_sa_lifetime_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_set_sa_lifetime_reply, payload),
    sizeof(vapi_msg_ikev2_set_sa_lifetime_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_set_sa_lifetime_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_sa_lifetime_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_sa_lifetime_reply = vapi_register_msg(&__vapi_metadata_ikev2_set_sa_lifetime_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_set_sa_lifetime_reply", vapi_msg_id_ikev2_set_sa_lifetime_reply);
}

static inline void vapi_set_vapi_msg_ikev2_set_sa_lifetime_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_set_sa_lifetime_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_set_sa_lifetime_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_set_sa_lifetime
#define defined_vapi_msg_ikev2_set_sa_lifetime
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u64 lifetime;
  u32 lifetime_jitter;
  u32 handover;
  u64 lifetime_maxdata; 
} vapi_payload_ikev2_set_sa_lifetime;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_set_sa_lifetime payload;
} vapi_msg_ikev2_set_sa_lifetime;

static inline void vapi_msg_ikev2_set_sa_lifetime_payload_hton(vapi_payload_ikev2_set_sa_lifetime *payload)
{
  payload->lifetime = htobe64(payload->lifetime);
  payload->lifetime_jitter = htobe32(payload->lifetime_jitter);
  payload->handover = htobe32(payload->handover);
  payload->lifetime_maxdata = htobe64(payload->lifetime_maxdata);
}

static inline void vapi_msg_ikev2_set_sa_lifetime_payload_ntoh(vapi_payload_ikev2_set_sa_lifetime *payload)
{
  payload->lifetime = be64toh(payload->lifetime);
  payload->lifetime_jitter = be32toh(payload->lifetime_jitter);
  payload->handover = be32toh(payload->handover);
  payload->lifetime_maxdata = be64toh(payload->lifetime_maxdata);
}

static inline void vapi_msg_ikev2_set_sa_lifetime_hton(vapi_msg_ikev2_set_sa_lifetime *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_sa_lifetime'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_set_sa_lifetime_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_sa_lifetime_ntoh(vapi_msg_ikev2_set_sa_lifetime *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_sa_lifetime'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_sa_lifetime_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_sa_lifetime_msg_size(vapi_msg_ikev2_set_sa_lifetime *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_set_sa_lifetime* vapi_alloc_ikev2_set_sa_lifetime(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_set_sa_lifetime *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_set_sa_lifetime);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_set_sa_lifetime*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_set_sa_lifetime);

  return msg;
}

static inline vapi_error_e vapi_ikev2_set_sa_lifetime(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_set_sa_lifetime *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_set_sa_lifetime_reply *reply),
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
  vapi_msg_ikev2_set_sa_lifetime_hton(msg);
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
    vapi_msg_ikev2_set_sa_lifetime_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_set_sa_lifetime()
{
  static const char name[] = "ikev2_set_sa_lifetime";
  static const char name_with_crc[] = "ikev2_set_sa_lifetime_46d31203";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_sa_lifetime = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_set_sa_lifetime, payload),
    sizeof(vapi_msg_ikev2_set_sa_lifetime),
    (generic_swap_fn_t)vapi_msg_ikev2_set_sa_lifetime_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_sa_lifetime_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_sa_lifetime = vapi_register_msg(&__vapi_metadata_ikev2_set_sa_lifetime);
  VAPI_DBG("Assigned msg id %d to ikev2_set_sa_lifetime", vapi_msg_id_ikev2_set_sa_lifetime);
}
#endif

#ifndef defined_vapi_msg_ikev2_initiate_rekey_child_sa
#define defined_vapi_msg_ikev2_initiate_rekey_child_sa
typedef struct __attribute__ ((__packed__)) {
  u32 ispi; 
} vapi_payload_ikev2_initiate_rekey_child_sa;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_initiate_rekey_child_sa payload;
} vapi_msg_ikev2_initiate_rekey_child_sa;

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_payload_hton(vapi_payload_ikev2_initiate_rekey_child_sa *payload)
{
  payload->ispi = htobe32(payload->ispi);
}

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_payload_ntoh(vapi_payload_ikev2_initiate_rekey_child_sa *payload)
{
  payload->ispi = be32toh(payload->ispi);
}

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_hton(vapi_msg_ikev2_initiate_rekey_child_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_rekey_child_sa'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_rekey_child_sa_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_rekey_child_sa_ntoh(vapi_msg_ikev2_initiate_rekey_child_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_rekey_child_sa'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_rekey_child_sa_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_rekey_child_sa_msg_size(vapi_msg_ikev2_initiate_rekey_child_sa *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_initiate_rekey_child_sa* vapi_alloc_ikev2_initiate_rekey_child_sa(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_initiate_rekey_child_sa *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_initiate_rekey_child_sa);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_initiate_rekey_child_sa*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_initiate_rekey_child_sa);

  return msg;
}

static inline vapi_error_e vapi_ikev2_initiate_rekey_child_sa(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_initiate_rekey_child_sa *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_initiate_rekey_child_sa_reply *reply),
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
  vapi_msg_ikev2_initiate_rekey_child_sa_hton(msg);
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
    vapi_msg_ikev2_initiate_rekey_child_sa_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_rekey_child_sa()
{
  static const char name[] = "ikev2_initiate_rekey_child_sa";
  static const char name_with_crc[] = "ikev2_initiate_rekey_child_sa_7f004d2e";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_rekey_child_sa = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_initiate_rekey_child_sa, payload),
    sizeof(vapi_msg_ikev2_initiate_rekey_child_sa),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_rekey_child_sa_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_rekey_child_sa_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_rekey_child_sa = vapi_register_msg(&__vapi_metadata_ikev2_initiate_rekey_child_sa);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_rekey_child_sa", vapi_msg_id_ikev2_initiate_rekey_child_sa);
}
#endif

#ifndef defined_vapi_msg_ikev2_profile_set_auth_reply
#define defined_vapi_msg_ikev2_profile_set_auth_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_profile_set_auth_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_profile_set_auth_reply payload;
} vapi_msg_ikev2_profile_set_auth_reply;

static inline void vapi_msg_ikev2_profile_set_auth_reply_payload_hton(vapi_payload_ikev2_profile_set_auth_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_profile_set_auth_reply_payload_ntoh(vapi_payload_ikev2_profile_set_auth_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_profile_set_auth_reply_hton(vapi_msg_ikev2_profile_set_auth_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_auth_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_profile_set_auth_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_set_auth_reply_ntoh(vapi_msg_ikev2_profile_set_auth_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_auth_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_set_auth_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_set_auth_reply_msg_size(vapi_msg_ikev2_profile_set_auth_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_set_auth_reply()
{
  static const char name[] = "ikev2_profile_set_auth_reply";
  static const char name_with_crc[] = "ikev2_profile_set_auth_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_set_auth_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_profile_set_auth_reply, payload),
    sizeof(vapi_msg_ikev2_profile_set_auth_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_auth_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_auth_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_set_auth_reply = vapi_register_msg(&__vapi_metadata_ikev2_profile_set_auth_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_set_auth_reply", vapi_msg_id_ikev2_profile_set_auth_reply);
}

static inline void vapi_set_vapi_msg_ikev2_profile_set_auth_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_profile_set_auth_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_profile_set_auth_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_profile_set_auth
#define defined_vapi_msg_ikev2_profile_set_auth
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u8 auth_method;
  u8 is_hex;
  u32 data_len;
  u8 data[0]; 
} vapi_payload_ikev2_profile_set_auth;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_profile_set_auth payload;
} vapi_msg_ikev2_profile_set_auth;

static inline void vapi_msg_ikev2_profile_set_auth_payload_hton(vapi_payload_ikev2_profile_set_auth *payload)
{
  payload->data_len = htobe32(payload->data_len);
}

static inline void vapi_msg_ikev2_profile_set_auth_payload_ntoh(vapi_payload_ikev2_profile_set_auth *payload)
{
  payload->data_len = be32toh(payload->data_len);
}

static inline void vapi_msg_ikev2_profile_set_auth_hton(vapi_msg_ikev2_profile_set_auth *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_auth'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_profile_set_auth_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_set_auth_ntoh(vapi_msg_ikev2_profile_set_auth *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_auth'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_set_auth_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_set_auth_msg_size(vapi_msg_ikev2_profile_set_auth *msg)
{
  return sizeof(*msg)+ msg->payload.data_len * sizeof(msg->payload.data[0]);
}

static inline vapi_msg_ikev2_profile_set_auth* vapi_alloc_ikev2_profile_set_auth(struct vapi_ctx_s *ctx, size_t _data_array_size)
{
  vapi_msg_ikev2_profile_set_auth *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_profile_set_auth) + sizeof(msg->payload.data[0]) * _data_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_profile_set_auth*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_profile_set_auth);
  msg->payload.data_len = _data_array_size;

  return msg;
}

static inline vapi_error_e vapi_ikev2_profile_set_auth(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_profile_set_auth *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_profile_set_auth_reply *reply),
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
  vapi_msg_ikev2_profile_set_auth_hton(msg);
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
    vapi_msg_ikev2_profile_set_auth_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_set_auth()
{
  static const char name[] = "ikev2_profile_set_auth";
  static const char name_with_crc[] = "ikev2_profile_set_auth_bd76f369";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_set_auth = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_profile_set_auth, payload),
    sizeof(vapi_msg_ikev2_profile_set_auth),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_auth_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_auth_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_set_auth = vapi_register_msg(&__vapi_metadata_ikev2_profile_set_auth);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_set_auth", vapi_msg_id_ikev2_profile_set_auth);
}
#endif

#ifndef defined_vapi_msg_ikev2_initiate_del_child_sa_reply
#define defined_vapi_msg_ikev2_initiate_del_child_sa_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_initiate_del_child_sa_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_initiate_del_child_sa_reply payload;
} vapi_msg_ikev2_initiate_del_child_sa_reply;

static inline void vapi_msg_ikev2_initiate_del_child_sa_reply_payload_hton(vapi_payload_ikev2_initiate_del_child_sa_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_del_child_sa_reply_payload_ntoh(vapi_payload_ikev2_initiate_del_child_sa_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_initiate_del_child_sa_reply_hton(vapi_msg_ikev2_initiate_del_child_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_child_sa_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_del_child_sa_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_del_child_sa_reply_ntoh(vapi_msg_ikev2_initiate_del_child_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_child_sa_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_del_child_sa_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_del_child_sa_reply_msg_size(vapi_msg_ikev2_initiate_del_child_sa_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_del_child_sa_reply()
{
  static const char name[] = "ikev2_initiate_del_child_sa_reply";
  static const char name_with_crc[] = "ikev2_initiate_del_child_sa_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_del_child_sa_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_initiate_del_child_sa_reply, payload),
    sizeof(vapi_msg_ikev2_initiate_del_child_sa_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_child_sa_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_child_sa_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_del_child_sa_reply = vapi_register_msg(&__vapi_metadata_ikev2_initiate_del_child_sa_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_del_child_sa_reply", vapi_msg_id_ikev2_initiate_del_child_sa_reply);
}

static inline void vapi_set_vapi_msg_ikev2_initiate_del_child_sa_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_initiate_del_child_sa_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_initiate_del_child_sa_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_set_ike_transforms
#define defined_vapi_msg_ikev2_set_ike_transforms
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u32 crypto_alg;
  u32 crypto_key_size;
  u32 integ_alg;
  u32 dh_group; 
} vapi_payload_ikev2_set_ike_transforms;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_set_ike_transforms payload;
} vapi_msg_ikev2_set_ike_transforms;

static inline void vapi_msg_ikev2_set_ike_transforms_payload_hton(vapi_payload_ikev2_set_ike_transforms *payload)
{
  payload->crypto_alg = htobe32(payload->crypto_alg);
  payload->crypto_key_size = htobe32(payload->crypto_key_size);
  payload->integ_alg = htobe32(payload->integ_alg);
  payload->dh_group = htobe32(payload->dh_group);
}

static inline void vapi_msg_ikev2_set_ike_transforms_payload_ntoh(vapi_payload_ikev2_set_ike_transforms *payload)
{
  payload->crypto_alg = be32toh(payload->crypto_alg);
  payload->crypto_key_size = be32toh(payload->crypto_key_size);
  payload->integ_alg = be32toh(payload->integ_alg);
  payload->dh_group = be32toh(payload->dh_group);
}

static inline void vapi_msg_ikev2_set_ike_transforms_hton(vapi_msg_ikev2_set_ike_transforms *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_ike_transforms'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_set_ike_transforms_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_ike_transforms_ntoh(vapi_msg_ikev2_set_ike_transforms *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_ike_transforms'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_ike_transforms_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_ike_transforms_msg_size(vapi_msg_ikev2_set_ike_transforms *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_set_ike_transforms* vapi_alloc_ikev2_set_ike_transforms(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_set_ike_transforms *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_set_ike_transforms);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_set_ike_transforms*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_set_ike_transforms);

  return msg;
}

static inline vapi_error_e vapi_ikev2_set_ike_transforms(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_set_ike_transforms *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_set_ike_transforms_reply *reply),
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
  vapi_msg_ikev2_set_ike_transforms_hton(msg);
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
    vapi_msg_ikev2_set_ike_transforms_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_set_ike_transforms()
{
  static const char name[] = "ikev2_set_ike_transforms";
  static const char name_with_crc[] = "ikev2_set_ike_transforms_919f5efd";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_ike_transforms = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_set_ike_transforms, payload),
    sizeof(vapi_msg_ikev2_set_ike_transforms),
    (generic_swap_fn_t)vapi_msg_ikev2_set_ike_transforms_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_ike_transforms_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_ike_transforms = vapi_register_msg(&__vapi_metadata_ikev2_set_ike_transforms);
  VAPI_DBG("Assigned msg id %d to ikev2_set_ike_transforms", vapi_msg_id_ikev2_set_ike_transforms);
}
#endif

#ifndef defined_vapi_msg_ikev2_set_esp_transforms
#define defined_vapi_msg_ikev2_set_esp_transforms
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u32 crypto_alg;
  u32 crypto_key_size;
  u32 integ_alg;
  u32 dh_group; 
} vapi_payload_ikev2_set_esp_transforms;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_set_esp_transforms payload;
} vapi_msg_ikev2_set_esp_transforms;

static inline void vapi_msg_ikev2_set_esp_transforms_payload_hton(vapi_payload_ikev2_set_esp_transforms *payload)
{
  payload->crypto_alg = htobe32(payload->crypto_alg);
  payload->crypto_key_size = htobe32(payload->crypto_key_size);
  payload->integ_alg = htobe32(payload->integ_alg);
  payload->dh_group = htobe32(payload->dh_group);
}

static inline void vapi_msg_ikev2_set_esp_transforms_payload_ntoh(vapi_payload_ikev2_set_esp_transforms *payload)
{
  payload->crypto_alg = be32toh(payload->crypto_alg);
  payload->crypto_key_size = be32toh(payload->crypto_key_size);
  payload->integ_alg = be32toh(payload->integ_alg);
  payload->dh_group = be32toh(payload->dh_group);
}

static inline void vapi_msg_ikev2_set_esp_transforms_hton(vapi_msg_ikev2_set_esp_transforms *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_esp_transforms'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_set_esp_transforms_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_set_esp_transforms_ntoh(vapi_msg_ikev2_set_esp_transforms *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_set_esp_transforms'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_set_esp_transforms_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_set_esp_transforms_msg_size(vapi_msg_ikev2_set_esp_transforms *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_set_esp_transforms* vapi_alloc_ikev2_set_esp_transforms(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_set_esp_transforms *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_set_esp_transforms);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_set_esp_transforms*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_set_esp_transforms);

  return msg;
}

static inline vapi_error_e vapi_ikev2_set_esp_transforms(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_set_esp_transforms *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_set_esp_transforms_reply *reply),
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
  vapi_msg_ikev2_set_esp_transforms_hton(msg);
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
    vapi_msg_ikev2_set_esp_transforms_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_set_esp_transforms()
{
  static const char name[] = "ikev2_set_esp_transforms";
  static const char name_with_crc[] = "ikev2_set_esp_transforms_919f5efd";
  static vapi_message_desc_t __vapi_metadata_ikev2_set_esp_transforms = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_set_esp_transforms, payload),
    sizeof(vapi_msg_ikev2_set_esp_transforms),
    (generic_swap_fn_t)vapi_msg_ikev2_set_esp_transforms_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_set_esp_transforms_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_set_esp_transforms = vapi_register_msg(&__vapi_metadata_ikev2_set_esp_transforms);
  VAPI_DBG("Assigned msg id %d to ikev2_set_esp_transforms", vapi_msg_id_ikev2_set_esp_transforms);
}
#endif

#ifndef defined_vapi_msg_ikev2_profile_set_id_reply
#define defined_vapi_msg_ikev2_profile_set_id_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_profile_set_id_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_profile_set_id_reply payload;
} vapi_msg_ikev2_profile_set_id_reply;

static inline void vapi_msg_ikev2_profile_set_id_reply_payload_hton(vapi_payload_ikev2_profile_set_id_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_profile_set_id_reply_payload_ntoh(vapi_payload_ikev2_profile_set_id_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_profile_set_id_reply_hton(vapi_msg_ikev2_profile_set_id_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_id_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_profile_set_id_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_set_id_reply_ntoh(vapi_msg_ikev2_profile_set_id_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_id_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_set_id_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_set_id_reply_msg_size(vapi_msg_ikev2_profile_set_id_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_set_id_reply()
{
  static const char name[] = "ikev2_profile_set_id_reply";
  static const char name_with_crc[] = "ikev2_profile_set_id_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_set_id_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_profile_set_id_reply, payload),
    sizeof(vapi_msg_ikev2_profile_set_id_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_id_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_id_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_set_id_reply = vapi_register_msg(&__vapi_metadata_ikev2_profile_set_id_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_set_id_reply", vapi_msg_id_ikev2_profile_set_id_reply);
}

static inline void vapi_set_vapi_msg_ikev2_profile_set_id_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_profile_set_id_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_profile_set_id_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_profile_set_id
#define defined_vapi_msg_ikev2_profile_set_id
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u8 is_local;
  u8 id_type;
  u32 data_len;
  u8 data[0]; 
} vapi_payload_ikev2_profile_set_id;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_profile_set_id payload;
} vapi_msg_ikev2_profile_set_id;

static inline void vapi_msg_ikev2_profile_set_id_payload_hton(vapi_payload_ikev2_profile_set_id *payload)
{
  payload->data_len = htobe32(payload->data_len);
}

static inline void vapi_msg_ikev2_profile_set_id_payload_ntoh(vapi_payload_ikev2_profile_set_id *payload)
{
  payload->data_len = be32toh(payload->data_len);
}

static inline void vapi_msg_ikev2_profile_set_id_hton(vapi_msg_ikev2_profile_set_id *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_id'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_profile_set_id_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_set_id_ntoh(vapi_msg_ikev2_profile_set_id *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_id'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_set_id_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_set_id_msg_size(vapi_msg_ikev2_profile_set_id *msg)
{
  return sizeof(*msg)+ msg->payload.data_len * sizeof(msg->payload.data[0]);
}

static inline vapi_msg_ikev2_profile_set_id* vapi_alloc_ikev2_profile_set_id(struct vapi_ctx_s *ctx, size_t _data_array_size)
{
  vapi_msg_ikev2_profile_set_id *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_profile_set_id) + sizeof(msg->payload.data[0]) * _data_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_profile_set_id*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_profile_set_id);
  msg->payload.data_len = _data_array_size;

  return msg;
}

static inline vapi_error_e vapi_ikev2_profile_set_id(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_profile_set_id *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_profile_set_id_reply *reply),
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
  vapi_msg_ikev2_profile_set_id_hton(msg);
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
    vapi_msg_ikev2_profile_set_id_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_set_id()
{
  static const char name[] = "ikev2_profile_set_id";
  static const char name_with_crc[] = "ikev2_profile_set_id_ca88c0ef";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_set_id = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_profile_set_id, payload),
    sizeof(vapi_msg_ikev2_profile_set_id),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_id_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_id_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_set_id = vapi_register_msg(&__vapi_metadata_ikev2_profile_set_id);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_set_id", vapi_msg_id_ikev2_profile_set_id);
}
#endif

#ifndef defined_vapi_msg_ikev2_initiate_del_child_sa
#define defined_vapi_msg_ikev2_initiate_del_child_sa
typedef struct __attribute__ ((__packed__)) {
  u32 ispi; 
} vapi_payload_ikev2_initiate_del_child_sa;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_initiate_del_child_sa payload;
} vapi_msg_ikev2_initiate_del_child_sa;

static inline void vapi_msg_ikev2_initiate_del_child_sa_payload_hton(vapi_payload_ikev2_initiate_del_child_sa *payload)
{
  payload->ispi = htobe32(payload->ispi);
}

static inline void vapi_msg_ikev2_initiate_del_child_sa_payload_ntoh(vapi_payload_ikev2_initiate_del_child_sa *payload)
{
  payload->ispi = be32toh(payload->ispi);
}

static inline void vapi_msg_ikev2_initiate_del_child_sa_hton(vapi_msg_ikev2_initiate_del_child_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_child_sa'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_initiate_del_child_sa_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_initiate_del_child_sa_ntoh(vapi_msg_ikev2_initiate_del_child_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_initiate_del_child_sa'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_initiate_del_child_sa_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_initiate_del_child_sa_msg_size(vapi_msg_ikev2_initiate_del_child_sa *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_initiate_del_child_sa* vapi_alloc_ikev2_initiate_del_child_sa(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_initiate_del_child_sa *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_initiate_del_child_sa);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_initiate_del_child_sa*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_initiate_del_child_sa);

  return msg;
}

static inline vapi_error_e vapi_ikev2_initiate_del_child_sa(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_initiate_del_child_sa *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_initiate_del_child_sa_reply *reply),
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
  vapi_msg_ikev2_initiate_del_child_sa_hton(msg);
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
    vapi_msg_ikev2_initiate_del_child_sa_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_initiate_del_child_sa()
{
  static const char name[] = "ikev2_initiate_del_child_sa";
  static const char name_with_crc[] = "ikev2_initiate_del_child_sa_7f004d2e";
  static vapi_message_desc_t __vapi_metadata_ikev2_initiate_del_child_sa = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_initiate_del_child_sa, payload),
    sizeof(vapi_msg_ikev2_initiate_del_child_sa),
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_child_sa_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_initiate_del_child_sa_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_initiate_del_child_sa = vapi_register_msg(&__vapi_metadata_ikev2_initiate_del_child_sa);
  VAPI_DBG("Assigned msg id %d to ikev2_initiate_del_child_sa", vapi_msg_id_ikev2_initiate_del_child_sa);
}
#endif

#ifndef defined_vapi_msg_ikev2_profile_set_ts_reply
#define defined_vapi_msg_ikev2_profile_set_ts_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ikev2_profile_set_ts_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ikev2_profile_set_ts_reply payload;
} vapi_msg_ikev2_profile_set_ts_reply;

static inline void vapi_msg_ikev2_profile_set_ts_reply_payload_hton(vapi_payload_ikev2_profile_set_ts_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ikev2_profile_set_ts_reply_payload_ntoh(vapi_payload_ikev2_profile_set_ts_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ikev2_profile_set_ts_reply_hton(vapi_msg_ikev2_profile_set_ts_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_ts_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ikev2_profile_set_ts_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_set_ts_reply_ntoh(vapi_msg_ikev2_profile_set_ts_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_ts_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_set_ts_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_set_ts_reply_msg_size(vapi_msg_ikev2_profile_set_ts_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_set_ts_reply()
{
  static const char name[] = "ikev2_profile_set_ts_reply";
  static const char name_with_crc[] = "ikev2_profile_set_ts_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_set_ts_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ikev2_profile_set_ts_reply, payload),
    sizeof(vapi_msg_ikev2_profile_set_ts_reply),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_ts_reply_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_ts_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_set_ts_reply = vapi_register_msg(&__vapi_metadata_ikev2_profile_set_ts_reply);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_set_ts_reply", vapi_msg_id_ikev2_profile_set_ts_reply);
}

static inline void vapi_set_vapi_msg_ikev2_profile_set_ts_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ikev2_profile_set_ts_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ikev2_profile_set_ts_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ikev2_profile_set_ts
#define defined_vapi_msg_ikev2_profile_set_ts
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u8 is_local;
  u8 proto;
  u16 start_port;
  u16 end_port;
  u32 start_addr;
  u32 end_addr; 
} vapi_payload_ikev2_profile_set_ts;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ikev2_profile_set_ts payload;
} vapi_msg_ikev2_profile_set_ts;

static inline void vapi_msg_ikev2_profile_set_ts_payload_hton(vapi_payload_ikev2_profile_set_ts *payload)
{
  payload->start_port = htobe16(payload->start_port);
  payload->end_port = htobe16(payload->end_port);
  payload->start_addr = htobe32(payload->start_addr);
  payload->end_addr = htobe32(payload->end_addr);
}

static inline void vapi_msg_ikev2_profile_set_ts_payload_ntoh(vapi_payload_ikev2_profile_set_ts *payload)
{
  payload->start_port = be16toh(payload->start_port);
  payload->end_port = be16toh(payload->end_port);
  payload->start_addr = be32toh(payload->start_addr);
  payload->end_addr = be32toh(payload->end_addr);
}

static inline void vapi_msg_ikev2_profile_set_ts_hton(vapi_msg_ikev2_profile_set_ts *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_ts'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ikev2_profile_set_ts_payload_hton(&msg->payload);
}

static inline void vapi_msg_ikev2_profile_set_ts_ntoh(vapi_msg_ikev2_profile_set_ts *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ikev2_profile_set_ts'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ikev2_profile_set_ts_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ikev2_profile_set_ts_msg_size(vapi_msg_ikev2_profile_set_ts *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ikev2_profile_set_ts* vapi_alloc_ikev2_profile_set_ts(struct vapi_ctx_s *ctx)
{
  vapi_msg_ikev2_profile_set_ts *msg = NULL;
  const size_t size = sizeof(vapi_msg_ikev2_profile_set_ts);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ikev2_profile_set_ts*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ikev2_profile_set_ts);

  return msg;
}

static inline vapi_error_e vapi_ikev2_profile_set_ts(struct vapi_ctx_s *ctx,
  vapi_msg_ikev2_profile_set_ts *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ikev2_profile_set_ts_reply *reply),
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
  vapi_msg_ikev2_profile_set_ts_hton(msg);
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
    vapi_msg_ikev2_profile_set_ts_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ikev2_profile_set_ts()
{
  static const char name[] = "ikev2_profile_set_ts";
  static const char name_with_crc[] = "ikev2_profile_set_ts_481aad89";
  static vapi_message_desc_t __vapi_metadata_ikev2_profile_set_ts = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ikev2_profile_set_ts, payload),
    sizeof(vapi_msg_ikev2_profile_set_ts),
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_ts_hton,
    (generic_swap_fn_t)vapi_msg_ikev2_profile_set_ts_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ikev2_profile_set_ts = vapi_register_msg(&__vapi_metadata_ikev2_profile_set_ts);
  VAPI_DBG("Assigned msg id %d to ikev2_profile_set_ts", vapi_msg_id_ikev2_profile_set_ts);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
