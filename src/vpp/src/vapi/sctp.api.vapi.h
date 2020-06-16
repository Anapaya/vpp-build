#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_sctp_sctp_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_sctp_sctp_api_json

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

extern vapi_msg_id_t vapi_msg_id_sctp_add_src_dst_connection_reply;
extern vapi_msg_id_t vapi_msg_id_sctp_del_src_dst_connection_reply;
extern vapi_msg_id_t vapi_msg_id_sctp_del_src_dst_connection;
extern vapi_msg_id_t vapi_msg_id_sctp_config;
extern vapi_msg_id_t vapi_msg_id_sctp_add_src_dst_connection;
extern vapi_msg_id_t vapi_msg_id_sctp_config_reply;

#define DEFINE_VAPI_MSG_IDS_SCTP_API_JSON\
  vapi_msg_id_t vapi_msg_id_sctp_add_src_dst_connection_reply;\
  vapi_msg_id_t vapi_msg_id_sctp_del_src_dst_connection_reply;\
  vapi_msg_id_t vapi_msg_id_sctp_del_src_dst_connection;\
  vapi_msg_id_t vapi_msg_id_sctp_config;\
  vapi_msg_id_t vapi_msg_id_sctp_add_src_dst_connection;\
  vapi_msg_id_t vapi_msg_id_sctp_config_reply;


#ifndef defined_vapi_msg_sctp_add_src_dst_connection_reply
#define defined_vapi_msg_sctp_add_src_dst_connection_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sctp_add_src_dst_connection_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sctp_add_src_dst_connection_reply payload;
} vapi_msg_sctp_add_src_dst_connection_reply;

static inline void vapi_msg_sctp_add_src_dst_connection_reply_payload_hton(vapi_payload_sctp_add_src_dst_connection_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sctp_add_src_dst_connection_reply_payload_ntoh(vapi_payload_sctp_add_src_dst_connection_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sctp_add_src_dst_connection_reply_hton(vapi_msg_sctp_add_src_dst_connection_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_add_src_dst_connection_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sctp_add_src_dst_connection_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sctp_add_src_dst_connection_reply_ntoh(vapi_msg_sctp_add_src_dst_connection_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_add_src_dst_connection_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sctp_add_src_dst_connection_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sctp_add_src_dst_connection_reply_msg_size(vapi_msg_sctp_add_src_dst_connection_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sctp_add_src_dst_connection_reply()
{
  static const char name[] = "sctp_add_src_dst_connection_reply";
  static const char name_with_crc[] = "sctp_add_src_dst_connection_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sctp_add_src_dst_connection_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sctp_add_src_dst_connection_reply, payload),
    sizeof(vapi_msg_sctp_add_src_dst_connection_reply),
    (generic_swap_fn_t)vapi_msg_sctp_add_src_dst_connection_reply_hton,
    (generic_swap_fn_t)vapi_msg_sctp_add_src_dst_connection_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sctp_add_src_dst_connection_reply = vapi_register_msg(&__vapi_metadata_sctp_add_src_dst_connection_reply);
  VAPI_DBG("Assigned msg id %d to sctp_add_src_dst_connection_reply", vapi_msg_id_sctp_add_src_dst_connection_reply);
}

static inline void vapi_set_vapi_msg_sctp_add_src_dst_connection_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sctp_add_src_dst_connection_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sctp_add_src_dst_connection_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sctp_del_src_dst_connection_reply
#define defined_vapi_msg_sctp_del_src_dst_connection_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sctp_del_src_dst_connection_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sctp_del_src_dst_connection_reply payload;
} vapi_msg_sctp_del_src_dst_connection_reply;

static inline void vapi_msg_sctp_del_src_dst_connection_reply_payload_hton(vapi_payload_sctp_del_src_dst_connection_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sctp_del_src_dst_connection_reply_payload_ntoh(vapi_payload_sctp_del_src_dst_connection_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sctp_del_src_dst_connection_reply_hton(vapi_msg_sctp_del_src_dst_connection_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_del_src_dst_connection_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sctp_del_src_dst_connection_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sctp_del_src_dst_connection_reply_ntoh(vapi_msg_sctp_del_src_dst_connection_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_del_src_dst_connection_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sctp_del_src_dst_connection_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sctp_del_src_dst_connection_reply_msg_size(vapi_msg_sctp_del_src_dst_connection_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sctp_del_src_dst_connection_reply()
{
  static const char name[] = "sctp_del_src_dst_connection_reply";
  static const char name_with_crc[] = "sctp_del_src_dst_connection_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sctp_del_src_dst_connection_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sctp_del_src_dst_connection_reply, payload),
    sizeof(vapi_msg_sctp_del_src_dst_connection_reply),
    (generic_swap_fn_t)vapi_msg_sctp_del_src_dst_connection_reply_hton,
    (generic_swap_fn_t)vapi_msg_sctp_del_src_dst_connection_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sctp_del_src_dst_connection_reply = vapi_register_msg(&__vapi_metadata_sctp_del_src_dst_connection_reply);
  VAPI_DBG("Assigned msg id %d to sctp_del_src_dst_connection_reply", vapi_msg_id_sctp_del_src_dst_connection_reply);
}

static inline void vapi_set_vapi_msg_sctp_del_src_dst_connection_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sctp_del_src_dst_connection_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sctp_del_src_dst_connection_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sctp_del_src_dst_connection
#define defined_vapi_msg_sctp_del_src_dst_connection
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6;
  u32 vrf_id;
  u8 src_address[16];
  u8 dst_address[16]; 
} vapi_payload_sctp_del_src_dst_connection;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sctp_del_src_dst_connection payload;
} vapi_msg_sctp_del_src_dst_connection;

static inline void vapi_msg_sctp_del_src_dst_connection_payload_hton(vapi_payload_sctp_del_src_dst_connection *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_sctp_del_src_dst_connection_payload_ntoh(vapi_payload_sctp_del_src_dst_connection *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_sctp_del_src_dst_connection_hton(vapi_msg_sctp_del_src_dst_connection *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_del_src_dst_connection'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sctp_del_src_dst_connection_payload_hton(&msg->payload);
}

static inline void vapi_msg_sctp_del_src_dst_connection_ntoh(vapi_msg_sctp_del_src_dst_connection *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_del_src_dst_connection'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sctp_del_src_dst_connection_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sctp_del_src_dst_connection_msg_size(vapi_msg_sctp_del_src_dst_connection *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sctp_del_src_dst_connection* vapi_alloc_sctp_del_src_dst_connection(struct vapi_ctx_s *ctx)
{
  vapi_msg_sctp_del_src_dst_connection *msg = NULL;
  const size_t size = sizeof(vapi_msg_sctp_del_src_dst_connection);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sctp_del_src_dst_connection*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sctp_del_src_dst_connection);

  return msg;
}

static inline vapi_error_e vapi_sctp_del_src_dst_connection(struct vapi_ctx_s *ctx,
  vapi_msg_sctp_del_src_dst_connection *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sctp_del_src_dst_connection_reply *reply),
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
  vapi_msg_sctp_del_src_dst_connection_hton(msg);
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
    vapi_msg_sctp_del_src_dst_connection_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sctp_del_src_dst_connection()
{
  static const char name[] = "sctp_del_src_dst_connection";
  static const char name_with_crc[] = "sctp_del_src_dst_connection_45c59b2f";
  static vapi_message_desc_t __vapi_metadata_sctp_del_src_dst_connection = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sctp_del_src_dst_connection, payload),
    sizeof(vapi_msg_sctp_del_src_dst_connection),
    (generic_swap_fn_t)vapi_msg_sctp_del_src_dst_connection_hton,
    (generic_swap_fn_t)vapi_msg_sctp_del_src_dst_connection_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sctp_del_src_dst_connection = vapi_register_msg(&__vapi_metadata_sctp_del_src_dst_connection);
  VAPI_DBG("Assigned msg id %d to sctp_del_src_dst_connection", vapi_msg_id_sctp_del_src_dst_connection);
}
#endif

#ifndef defined_vapi_msg_sctp_config_reply
#define defined_vapi_msg_sctp_config_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sctp_config_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sctp_config_reply payload;
} vapi_msg_sctp_config_reply;

static inline void vapi_msg_sctp_config_reply_payload_hton(vapi_payload_sctp_config_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sctp_config_reply_payload_ntoh(vapi_payload_sctp_config_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sctp_config_reply_hton(vapi_msg_sctp_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_config_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sctp_config_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sctp_config_reply_ntoh(vapi_msg_sctp_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_config_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sctp_config_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sctp_config_reply_msg_size(vapi_msg_sctp_config_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sctp_config_reply()
{
  static const char name[] = "sctp_config_reply";
  static const char name_with_crc[] = "sctp_config_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sctp_config_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sctp_config_reply, payload),
    sizeof(vapi_msg_sctp_config_reply),
    (generic_swap_fn_t)vapi_msg_sctp_config_reply_hton,
    (generic_swap_fn_t)vapi_msg_sctp_config_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sctp_config_reply = vapi_register_msg(&__vapi_metadata_sctp_config_reply);
  VAPI_DBG("Assigned msg id %d to sctp_config_reply", vapi_msg_id_sctp_config_reply);
}

static inline void vapi_set_vapi_msg_sctp_config_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sctp_config_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sctp_config_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sctp_config
#define defined_vapi_msg_sctp_config
typedef struct __attribute__ ((__packed__)) {
  u8 never_delay_sack;
  u8 never_bundle; 
} vapi_payload_sctp_config;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sctp_config payload;
} vapi_msg_sctp_config;

static inline void vapi_msg_sctp_config_payload_hton(vapi_payload_sctp_config *payload)
{

}

static inline void vapi_msg_sctp_config_payload_ntoh(vapi_payload_sctp_config *payload)
{

}

static inline void vapi_msg_sctp_config_hton(vapi_msg_sctp_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_config'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sctp_config_payload_hton(&msg->payload);
}

static inline void vapi_msg_sctp_config_ntoh(vapi_msg_sctp_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_config'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sctp_config_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sctp_config_msg_size(vapi_msg_sctp_config *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sctp_config* vapi_alloc_sctp_config(struct vapi_ctx_s *ctx)
{
  vapi_msg_sctp_config *msg = NULL;
  const size_t size = sizeof(vapi_msg_sctp_config);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sctp_config*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sctp_config);

  return msg;
}

static inline vapi_error_e vapi_sctp_config(struct vapi_ctx_s *ctx,
  vapi_msg_sctp_config *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sctp_config_reply *reply),
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
  vapi_msg_sctp_config_hton(msg);
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
    vapi_msg_sctp_config_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sctp_config()
{
  static const char name[] = "sctp_config";
  static const char name_with_crc[] = "sctp_config_7617eced";
  static vapi_message_desc_t __vapi_metadata_sctp_config = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sctp_config, payload),
    sizeof(vapi_msg_sctp_config),
    (generic_swap_fn_t)vapi_msg_sctp_config_hton,
    (generic_swap_fn_t)vapi_msg_sctp_config_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sctp_config = vapi_register_msg(&__vapi_metadata_sctp_config);
  VAPI_DBG("Assigned msg id %d to sctp_config", vapi_msg_id_sctp_config);
}
#endif

#ifndef defined_vapi_msg_sctp_add_src_dst_connection
#define defined_vapi_msg_sctp_add_src_dst_connection
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6;
  u32 vrf_id;
  u8 src_address[16];
  u8 dst_address[16]; 
} vapi_payload_sctp_add_src_dst_connection;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sctp_add_src_dst_connection payload;
} vapi_msg_sctp_add_src_dst_connection;

static inline void vapi_msg_sctp_add_src_dst_connection_payload_hton(vapi_payload_sctp_add_src_dst_connection *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_sctp_add_src_dst_connection_payload_ntoh(vapi_payload_sctp_add_src_dst_connection *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_sctp_add_src_dst_connection_hton(vapi_msg_sctp_add_src_dst_connection *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_add_src_dst_connection'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sctp_add_src_dst_connection_payload_hton(&msg->payload);
}

static inline void vapi_msg_sctp_add_src_dst_connection_ntoh(vapi_msg_sctp_add_src_dst_connection *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sctp_add_src_dst_connection'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sctp_add_src_dst_connection_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sctp_add_src_dst_connection_msg_size(vapi_msg_sctp_add_src_dst_connection *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sctp_add_src_dst_connection* vapi_alloc_sctp_add_src_dst_connection(struct vapi_ctx_s *ctx)
{
  vapi_msg_sctp_add_src_dst_connection *msg = NULL;
  const size_t size = sizeof(vapi_msg_sctp_add_src_dst_connection);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sctp_add_src_dst_connection*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sctp_add_src_dst_connection);

  return msg;
}

static inline vapi_error_e vapi_sctp_add_src_dst_connection(struct vapi_ctx_s *ctx,
  vapi_msg_sctp_add_src_dst_connection *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sctp_add_src_dst_connection_reply *reply),
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
  vapi_msg_sctp_add_src_dst_connection_hton(msg);
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
    vapi_msg_sctp_add_src_dst_connection_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sctp_add_src_dst_connection()
{
  static const char name[] = "sctp_add_src_dst_connection";
  static const char name_with_crc[] = "sctp_add_src_dst_connection_45c59b2f";
  static vapi_message_desc_t __vapi_metadata_sctp_add_src_dst_connection = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sctp_add_src_dst_connection, payload),
    sizeof(vapi_msg_sctp_add_src_dst_connection),
    (generic_swap_fn_t)vapi_msg_sctp_add_src_dst_connection_hton,
    (generic_swap_fn_t)vapi_msg_sctp_add_src_dst_connection_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sctp_add_src_dst_connection = vapi_register_msg(&__vapi_metadata_sctp_add_src_dst_connection);
  VAPI_DBG("Assigned msg id %d to sctp_add_src_dst_connection", vapi_msg_id_sctp_add_src_dst_connection);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
