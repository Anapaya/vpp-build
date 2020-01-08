#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_stn_stn_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_stn_stn_api_json

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

extern vapi_msg_id_t vapi_msg_id_stn_add_del_rule;
extern vapi_msg_id_t vapi_msg_id_stn_rules_dump;
extern vapi_msg_id_t vapi_msg_id_stn_add_del_rule_reply;
extern vapi_msg_id_t vapi_msg_id_stn_rules_details;

#define DEFINE_VAPI_MSG_IDS_STN_API_JSON\
  vapi_msg_id_t vapi_msg_id_stn_add_del_rule;\
  vapi_msg_id_t vapi_msg_id_stn_rules_dump;\
  vapi_msg_id_t vapi_msg_id_stn_add_del_rule_reply;\
  vapi_msg_id_t vapi_msg_id_stn_rules_details;


#ifndef defined_vapi_msg_stn_add_del_rule_reply
#define defined_vapi_msg_stn_add_del_rule_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_stn_add_del_rule_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_stn_add_del_rule_reply payload;
} vapi_msg_stn_add_del_rule_reply;

static inline void vapi_msg_stn_add_del_rule_reply_payload_hton(vapi_payload_stn_add_del_rule_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_stn_add_del_rule_reply_payload_ntoh(vapi_payload_stn_add_del_rule_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_stn_add_del_rule_reply_hton(vapi_msg_stn_add_del_rule_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_add_del_rule_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_stn_add_del_rule_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_stn_add_del_rule_reply_ntoh(vapi_msg_stn_add_del_rule_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_add_del_rule_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_stn_add_del_rule_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_stn_add_del_rule_reply_msg_size(vapi_msg_stn_add_del_rule_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_stn_add_del_rule_reply()
{
  static const char name[] = "stn_add_del_rule_reply";
  static const char name_with_crc[] = "stn_add_del_rule_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_stn_add_del_rule_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_stn_add_del_rule_reply, payload),
    sizeof(vapi_msg_stn_add_del_rule_reply),
    (generic_swap_fn_t)vapi_msg_stn_add_del_rule_reply_hton,
    (generic_swap_fn_t)vapi_msg_stn_add_del_rule_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_stn_add_del_rule_reply = vapi_register_msg(&__vapi_metadata_stn_add_del_rule_reply);
  VAPI_DBG("Assigned msg id %d to stn_add_del_rule_reply", vapi_msg_id_stn_add_del_rule_reply);
}

static inline void vapi_set_vapi_msg_stn_add_del_rule_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_stn_add_del_rule_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_stn_add_del_rule_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_stn_add_del_rule
#define defined_vapi_msg_stn_add_del_rule
typedef struct __attribute__ ((__packed__)) {
  u8 is_ip4;
  u8 ip_address[16];
  u32 sw_if_index;
  u8 is_add; 
} vapi_payload_stn_add_del_rule;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_stn_add_del_rule payload;
} vapi_msg_stn_add_del_rule;

static inline void vapi_msg_stn_add_del_rule_payload_hton(vapi_payload_stn_add_del_rule *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_stn_add_del_rule_payload_ntoh(vapi_payload_stn_add_del_rule *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_stn_add_del_rule_hton(vapi_msg_stn_add_del_rule *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_add_del_rule'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_stn_add_del_rule_payload_hton(&msg->payload);
}

static inline void vapi_msg_stn_add_del_rule_ntoh(vapi_msg_stn_add_del_rule *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_add_del_rule'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_stn_add_del_rule_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_stn_add_del_rule_msg_size(vapi_msg_stn_add_del_rule *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_stn_add_del_rule* vapi_alloc_stn_add_del_rule(struct vapi_ctx_s *ctx)
{
  vapi_msg_stn_add_del_rule *msg = NULL;
  const size_t size = sizeof(vapi_msg_stn_add_del_rule);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_stn_add_del_rule*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_stn_add_del_rule);

  return msg;
}

static inline vapi_error_e vapi_stn_add_del_rule(struct vapi_ctx_s *ctx,
  vapi_msg_stn_add_del_rule *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_stn_add_del_rule_reply *reply),
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
  vapi_msg_stn_add_del_rule_hton(msg);
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
    vapi_msg_stn_add_del_rule_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_stn_add_del_rule()
{
  static const char name[] = "stn_add_del_rule";
  static const char name_with_crc[] = "stn_add_del_rule_9f0bbe21";
  static vapi_message_desc_t __vapi_metadata_stn_add_del_rule = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_stn_add_del_rule, payload),
    sizeof(vapi_msg_stn_add_del_rule),
    (generic_swap_fn_t)vapi_msg_stn_add_del_rule_hton,
    (generic_swap_fn_t)vapi_msg_stn_add_del_rule_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_stn_add_del_rule = vapi_register_msg(&__vapi_metadata_stn_add_del_rule);
  VAPI_DBG("Assigned msg id %d to stn_add_del_rule", vapi_msg_id_stn_add_del_rule);
}
#endif

#ifndef defined_vapi_msg_stn_rules_details
#define defined_vapi_msg_stn_rules_details
typedef struct __attribute__ ((__packed__)) {
  u8 is_ip4;
  u8 ip_address[16];
  u32 sw_if_index; 
} vapi_payload_stn_rules_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_stn_rules_details payload;
} vapi_msg_stn_rules_details;

static inline void vapi_msg_stn_rules_details_payload_hton(vapi_payload_stn_rules_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_stn_rules_details_payload_ntoh(vapi_payload_stn_rules_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_stn_rules_details_hton(vapi_msg_stn_rules_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_rules_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_stn_rules_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_stn_rules_details_ntoh(vapi_msg_stn_rules_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_rules_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_stn_rules_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_stn_rules_details_msg_size(vapi_msg_stn_rules_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_stn_rules_details()
{
  static const char name[] = "stn_rules_details";
  static const char name_with_crc[] = "stn_rules_details_5eafa31e";
  static vapi_message_desc_t __vapi_metadata_stn_rules_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_stn_rules_details, payload),
    sizeof(vapi_msg_stn_rules_details),
    (generic_swap_fn_t)vapi_msg_stn_rules_details_hton,
    (generic_swap_fn_t)vapi_msg_stn_rules_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_stn_rules_details = vapi_register_msg(&__vapi_metadata_stn_rules_details);
  VAPI_DBG("Assigned msg id %d to stn_rules_details", vapi_msg_id_stn_rules_details);
}

static inline void vapi_set_vapi_msg_stn_rules_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_stn_rules_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_stn_rules_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_stn_rules_dump
#define defined_vapi_msg_stn_rules_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_stn_rules_dump;

static inline void vapi_msg_stn_rules_dump_hton(vapi_msg_stn_rules_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_rules_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_stn_rules_dump_ntoh(vapi_msg_stn_rules_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_stn_rules_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_stn_rules_dump_msg_size(vapi_msg_stn_rules_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_stn_rules_dump* vapi_alloc_stn_rules_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_stn_rules_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_stn_rules_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_stn_rules_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_stn_rules_dump);

  return msg;
}

static inline vapi_error_e vapi_stn_rules_dump(struct vapi_ctx_s *ctx,
  vapi_msg_stn_rules_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_stn_rules_details *reply),
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
  vapi_msg_stn_rules_dump_hton(msg);
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
    vapi_msg_stn_rules_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_stn_rules_dump()
{
  static const char name[] = "stn_rules_dump";
  static const char name_with_crc[] = "stn_rules_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_stn_rules_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_stn_rules_dump),
    (generic_swap_fn_t)vapi_msg_stn_rules_dump_hton,
    (generic_swap_fn_t)vapi_msg_stn_rules_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_stn_rules_dump = vapi_register_msg(&__vapi_metadata_stn_rules_dump);
  VAPI_DBG("Assigned msg id %d to stn_rules_dump", vapi_msg_id_stn_rules_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
