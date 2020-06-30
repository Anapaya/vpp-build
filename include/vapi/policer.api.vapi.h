#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_policer_policer_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_policer_policer_api_json

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

extern vapi_msg_id_t vapi_msg_id_policer_add_del;
extern vapi_msg_id_t vapi_msg_id_policer_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_policer_dump;
extern vapi_msg_id_t vapi_msg_id_policer_details;

#define DEFINE_VAPI_MSG_IDS_POLICER_API_JSON\
  vapi_msg_id_t vapi_msg_id_policer_add_del;\
  vapi_msg_id_t vapi_msg_id_policer_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_policer_dump;\
  vapi_msg_id_t vapi_msg_id_policer_details;


#ifndef defined_vapi_enum_sse2_qos_rate_type
#define defined_vapi_enum_sse2_qos_rate_type
typedef enum {
  SSE2_QOS_RATE_API_KBPS = 0,
  SSE2_QOS_RATE_API_PPS = 1,
  SSE2_QOS_RATE_API_INVALID = 2,
} __attribute__((packed)) vapi_enum_sse2_qos_rate_type;

#endif

#ifndef defined_vapi_enum_sse2_qos_round_type
#define defined_vapi_enum_sse2_qos_round_type
typedef enum {
  SSE2_QOS_ROUND_API_TO_CLOSEST = 0,
  SSE2_QOS_ROUND_API_TO_UP = 1,
  SSE2_QOS_ROUND_API_TO_DOWN = 2,
  SSE2_QOS_ROUND_API_INVALID = 3,
} __attribute__((packed)) vapi_enum_sse2_qos_round_type;

#endif

#ifndef defined_vapi_enum_sse2_qos_policer_type
#define defined_vapi_enum_sse2_qos_policer_type
typedef enum {
  SSE2_QOS_POLICER_TYPE_API_1R2C = 0,
  SSE2_QOS_POLICER_TYPE_API_1R3C_RFC_2697 = 1,
  SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_2698 = 2,
  SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_4115 = 3,
  SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_MEF5CF1 = 4,
  SSE2_QOS_POLICER_TYPE_API_MAX = 5,
} __attribute__((packed)) vapi_enum_sse2_qos_policer_type;

#endif

#ifndef defined_vapi_enum_sse2_qos_action_type
#define defined_vapi_enum_sse2_qos_action_type
typedef enum {
  SSE2_QOS_ACTION_API_DROP = 0,
  SSE2_QOS_ACTION_API_TRANSMIT = 1,
  SSE2_QOS_ACTION_API_MARK_AND_TRANSMIT = 2,
} __attribute__((packed)) vapi_enum_sse2_qos_action_type;

#endif

#ifndef defined_vapi_type_sse2_qos_action
#define defined_vapi_type_sse2_qos_action
typedef struct __attribute__((__packed__)) {
  vapi_enum_sse2_qos_action_type type;
  u8 dscp;
} vapi_type_sse2_qos_action;

static inline void vapi_type_sse2_qos_action_hton(vapi_type_sse2_qos_action *msg)
{

}

static inline void vapi_type_sse2_qos_action_ntoh(vapi_type_sse2_qos_action *msg)
{

}
#endif

#ifndef defined_vapi_msg_policer_add_del_reply
#define defined_vapi_msg_policer_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 policer_index; 
} vapi_payload_policer_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_policer_add_del_reply payload;
} vapi_msg_policer_add_del_reply;

static inline void vapi_msg_policer_add_del_reply_payload_hton(vapi_payload_policer_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->policer_index = htobe32(payload->policer_index);
}

static inline void vapi_msg_policer_add_del_reply_payload_ntoh(vapi_payload_policer_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->policer_index = be32toh(payload->policer_index);
}

static inline void vapi_msg_policer_add_del_reply_hton(vapi_msg_policer_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_policer_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_add_del_reply_ntoh(vapi_msg_policer_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_policer_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_add_del_reply_msg_size(vapi_msg_policer_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_policer_add_del_reply()
{
  static const char name[] = "policer_add_del_reply";
  static const char name_with_crc[] = "policer_add_del_reply_a177cef2";
  static vapi_message_desc_t __vapi_metadata_policer_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_policer_add_del_reply, payload),
    sizeof(vapi_msg_policer_add_del_reply),
    (generic_swap_fn_t)vapi_msg_policer_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_policer_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_add_del_reply = vapi_register_msg(&__vapi_metadata_policer_add_del_reply);
  VAPI_DBG("Assigned msg id %d to policer_add_del_reply", vapi_msg_id_policer_add_del_reply);
}

static inline void vapi_set_vapi_msg_policer_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_policer_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_policer_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_policer_add_del
#define defined_vapi_msg_policer_add_del
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  u8 name[64];
  u32 cir;
  u32 eir;
  u64 cb;
  u64 eb;
  vapi_enum_sse2_qos_rate_type rate_type;
  vapi_enum_sse2_qos_round_type round_type;
  vapi_enum_sse2_qos_policer_type type;
  bool color_aware;
  vapi_type_sse2_qos_action conform_action;
  vapi_type_sse2_qos_action exceed_action;
  vapi_type_sse2_qos_action violate_action; 
} vapi_payload_policer_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_policer_add_del payload;
} vapi_msg_policer_add_del;

static inline void vapi_msg_policer_add_del_payload_hton(vapi_payload_policer_add_del *payload)
{
  payload->cir = htobe32(payload->cir);
  payload->eir = htobe32(payload->eir);
  payload->cb = htobe64(payload->cb);
  payload->eb = htobe64(payload->eb);
}

static inline void vapi_msg_policer_add_del_payload_ntoh(vapi_payload_policer_add_del *payload)
{
  payload->cir = be32toh(payload->cir);
  payload->eir = be32toh(payload->eir);
  payload->cb = be64toh(payload->cb);
  payload->eb = be64toh(payload->eb);
}

static inline void vapi_msg_policer_add_del_hton(vapi_msg_policer_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_policer_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_add_del_ntoh(vapi_msg_policer_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_policer_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_add_del_msg_size(vapi_msg_policer_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_policer_add_del* vapi_alloc_policer_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_policer_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_policer_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_policer_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_policer_add_del);

  return msg;
}

static inline vapi_error_e vapi_policer_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_policer_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_policer_add_del_reply *reply),
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
  vapi_msg_policer_add_del_hton(msg);
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
    vapi_msg_policer_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_policer_add_del()
{
  static const char name[] = "policer_add_del";
  static const char name_with_crc[] = "policer_add_del_cb948f6e";
  static vapi_message_desc_t __vapi_metadata_policer_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_policer_add_del, payload),
    sizeof(vapi_msg_policer_add_del),
    (generic_swap_fn_t)vapi_msg_policer_add_del_hton,
    (generic_swap_fn_t)vapi_msg_policer_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_add_del = vapi_register_msg(&__vapi_metadata_policer_add_del);
  VAPI_DBG("Assigned msg id %d to policer_add_del", vapi_msg_id_policer_add_del);
}
#endif

#ifndef defined_vapi_msg_policer_details
#define defined_vapi_msg_policer_details
typedef struct __attribute__ ((__packed__)) {
  u8 name[64];
  u32 cir;
  u32 eir;
  u64 cb;
  u64 eb;
  vapi_enum_sse2_qos_rate_type rate_type;
  vapi_enum_sse2_qos_round_type round_type;
  vapi_enum_sse2_qos_policer_type type;
  vapi_type_sse2_qos_action conform_action;
  vapi_type_sse2_qos_action exceed_action;
  vapi_type_sse2_qos_action violate_action;
  bool single_rate;
  bool color_aware;
  u32 scale;
  u32 cir_tokens_per_period;
  u32 pir_tokens_per_period;
  u32 current_limit;
  u32 current_bucket;
  u32 extended_limit;
  u32 extended_bucket;
  u64 last_update_time; 
} vapi_payload_policer_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_policer_details payload;
} vapi_msg_policer_details;

static inline void vapi_msg_policer_details_payload_hton(vapi_payload_policer_details *payload)
{
  payload->cir = htobe32(payload->cir);
  payload->eir = htobe32(payload->eir);
  payload->cb = htobe64(payload->cb);
  payload->eb = htobe64(payload->eb);
  payload->scale = htobe32(payload->scale);
  payload->cir_tokens_per_period = htobe32(payload->cir_tokens_per_period);
  payload->pir_tokens_per_period = htobe32(payload->pir_tokens_per_period);
  payload->current_limit = htobe32(payload->current_limit);
  payload->current_bucket = htobe32(payload->current_bucket);
  payload->extended_limit = htobe32(payload->extended_limit);
  payload->extended_bucket = htobe32(payload->extended_bucket);
  payload->last_update_time = htobe64(payload->last_update_time);
}

static inline void vapi_msg_policer_details_payload_ntoh(vapi_payload_policer_details *payload)
{
  payload->cir = be32toh(payload->cir);
  payload->eir = be32toh(payload->eir);
  payload->cb = be64toh(payload->cb);
  payload->eb = be64toh(payload->eb);
  payload->scale = be32toh(payload->scale);
  payload->cir_tokens_per_period = be32toh(payload->cir_tokens_per_period);
  payload->pir_tokens_per_period = be32toh(payload->pir_tokens_per_period);
  payload->current_limit = be32toh(payload->current_limit);
  payload->current_bucket = be32toh(payload->current_bucket);
  payload->extended_limit = be32toh(payload->extended_limit);
  payload->extended_bucket = be32toh(payload->extended_bucket);
  payload->last_update_time = be64toh(payload->last_update_time);
}

static inline void vapi_msg_policer_details_hton(vapi_msg_policer_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_policer_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_details_ntoh(vapi_msg_policer_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_policer_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_details_msg_size(vapi_msg_policer_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_policer_details()
{
  static const char name[] = "policer_details";
  static const char name_with_crc[] = "policer_details_a43f781a";
  static vapi_message_desc_t __vapi_metadata_policer_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_policer_details, payload),
    sizeof(vapi_msg_policer_details),
    (generic_swap_fn_t)vapi_msg_policer_details_hton,
    (generic_swap_fn_t)vapi_msg_policer_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_details = vapi_register_msg(&__vapi_metadata_policer_details);
  VAPI_DBG("Assigned msg id %d to policer_details", vapi_msg_id_policer_details);
}

static inline void vapi_set_vapi_msg_policer_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_policer_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_policer_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_policer_dump
#define defined_vapi_msg_policer_dump
typedef struct __attribute__ ((__packed__)) {
  bool match_name_valid;
  u8 match_name[64]; 
} vapi_payload_policer_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_policer_dump payload;
} vapi_msg_policer_dump;

static inline void vapi_msg_policer_dump_payload_hton(vapi_payload_policer_dump *payload)
{

}

static inline void vapi_msg_policer_dump_payload_ntoh(vapi_payload_policer_dump *payload)
{

}

static inline void vapi_msg_policer_dump_hton(vapi_msg_policer_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_policer_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_dump_ntoh(vapi_msg_policer_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_policer_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_dump_msg_size(vapi_msg_policer_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_policer_dump* vapi_alloc_policer_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_policer_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_policer_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_policer_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_policer_dump);

  return msg;
}

static inline vapi_error_e vapi_policer_dump(struct vapi_ctx_s *ctx,
  vapi_msg_policer_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_policer_details *reply),
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
  vapi_msg_policer_dump_hton(msg);
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
    vapi_msg_policer_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_policer_dump()
{
  static const char name[] = "policer_dump";
  static const char name_with_crc[] = "policer_dump_35f1ae0f";
  static vapi_message_desc_t __vapi_metadata_policer_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_policer_dump, payload),
    sizeof(vapi_msg_policer_dump),
    (generic_swap_fn_t)vapi_msg_policer_dump_hton,
    (generic_swap_fn_t)vapi_msg_policer_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_dump = vapi_register_msg(&__vapi_metadata_policer_dump);
  VAPI_DBG("Assigned msg id %d to policer_dump", vapi_msg_id_policer_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
