#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_http_static_http_static_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_http_static_http_static_api_json

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

extern vapi_msg_id_t vapi_msg_id_http_static_enable_reply;
extern vapi_msg_id_t vapi_msg_id_http_static_enable;

#define DEFINE_VAPI_MSG_IDS_HTTP_STATIC_API_JSON\
  vapi_msg_id_t vapi_msg_id_http_static_enable_reply;\
  vapi_msg_id_t vapi_msg_id_http_static_enable;


#ifndef defined_vapi_msg_http_static_enable_reply
#define defined_vapi_msg_http_static_enable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_http_static_enable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_http_static_enable_reply payload;
} vapi_msg_http_static_enable_reply;

static inline void vapi_msg_http_static_enable_reply_payload_hton(vapi_payload_http_static_enable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_http_static_enable_reply_payload_ntoh(vapi_payload_http_static_enable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_http_static_enable_reply_hton(vapi_msg_http_static_enable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_http_static_enable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_http_static_enable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_http_static_enable_reply_ntoh(vapi_msg_http_static_enable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_http_static_enable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_http_static_enable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_http_static_enable_reply_msg_size(vapi_msg_http_static_enable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_http_static_enable_reply()
{
  static const char name[] = "http_static_enable_reply";
  static const char name_with_crc[] = "http_static_enable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_http_static_enable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_http_static_enable_reply, payload),
    sizeof(vapi_msg_http_static_enable_reply),
    (generic_swap_fn_t)vapi_msg_http_static_enable_reply_hton,
    (generic_swap_fn_t)vapi_msg_http_static_enable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_http_static_enable_reply = vapi_register_msg(&__vapi_metadata_http_static_enable_reply);
  VAPI_DBG("Assigned msg id %d to http_static_enable_reply", vapi_msg_id_http_static_enable_reply);
}

static inline void vapi_set_vapi_msg_http_static_enable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_http_static_enable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_http_static_enable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_http_static_enable
#define defined_vapi_msg_http_static_enable
typedef struct __attribute__ ((__packed__)) {
  u32 fifo_size;
  u32 cache_size_limit;
  u32 prealloc_fifos;
  u32 private_segment_size;
  vl_api_string_t www_root;
  vl_api_string_t uri; 
} vapi_payload_http_static_enable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_http_static_enable payload;
} vapi_msg_http_static_enable;

static inline void vapi_msg_http_static_enable_payload_hton(vapi_payload_http_static_enable *payload)
{
  payload->fifo_size = htobe32(payload->fifo_size);
  payload->cache_size_limit = htobe32(payload->cache_size_limit);
  payload->prealloc_fifos = htobe32(payload->prealloc_fifos);
  payload->private_segment_size = htobe32(payload->private_segment_size);
}

static inline void vapi_msg_http_static_enable_payload_ntoh(vapi_payload_http_static_enable *payload)
{
  payload->fifo_size = be32toh(payload->fifo_size);
  payload->cache_size_limit = be32toh(payload->cache_size_limit);
  payload->prealloc_fifos = be32toh(payload->prealloc_fifos);
  payload->private_segment_size = be32toh(payload->private_segment_size);
}

static inline void vapi_msg_http_static_enable_hton(vapi_msg_http_static_enable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_http_static_enable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_http_static_enable_payload_hton(&msg->payload);
}

static inline void vapi_msg_http_static_enable_ntoh(vapi_msg_http_static_enable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_http_static_enable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_http_static_enable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_http_static_enable_msg_size(vapi_msg_http_static_enable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_http_static_enable* vapi_alloc_http_static_enable(struct vapi_ctx_s *ctx)
{
  vapi_msg_http_static_enable *msg = NULL;
  const size_t size = sizeof(vapi_msg_http_static_enable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_http_static_enable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_http_static_enable);

  return msg;
}

static inline vapi_error_e vapi_http_static_enable(struct vapi_ctx_s *ctx,
  vapi_msg_http_static_enable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_http_static_enable_reply *reply),
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
  vapi_msg_http_static_enable_hton(msg);
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
    vapi_msg_http_static_enable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_http_static_enable()
{
  static const char name[] = "http_static_enable";
  static const char name_with_crc[] = "http_static_enable_1fa440d3";
  static vapi_message_desc_t __vapi_metadata_http_static_enable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_http_static_enable, payload),
    sizeof(vapi_msg_http_static_enable),
    (generic_swap_fn_t)vapi_msg_http_static_enable_hton,
    (generic_swap_fn_t)vapi_msg_http_static_enable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_http_static_enable = vapi_register_msg(&__vapi_metadata_http_static_enable);
  VAPI_DBG("Assigned msg id %d to http_static_enable", vapi_msg_id_http_static_enable);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
