#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_srmpls_sr_mpls_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_srmpls_sr_mpls_api_json

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

extern vapi_msg_id_t vapi_msg_id_sr_mpls_steering_add_del;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_mod_reply;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_add_reply;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_del_reply;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_assign_endpoint_color;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_mod;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_steering_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_assign_endpoint_color_reply;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_add;
extern vapi_msg_id_t vapi_msg_id_sr_mpls_policy_del;

#define DEFINE_VAPI_MSG_IDS_SR_MPLS_API_JSON\
  vapi_msg_id_t vapi_msg_id_sr_mpls_steering_add_del;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_mod_reply;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_add_reply;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_del_reply;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_assign_endpoint_color;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_mod;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_steering_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_assign_endpoint_color_reply;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_add;\
  vapi_msg_id_t vapi_msg_id_sr_mpls_policy_del;


#ifndef defined_vapi_msg_sr_mpls_steering_add_del_reply
#define defined_vapi_msg_sr_mpls_steering_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_mpls_steering_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_mpls_steering_add_del_reply payload;
} vapi_msg_sr_mpls_steering_add_del_reply;

static inline void vapi_msg_sr_mpls_steering_add_del_reply_payload_hton(vapi_payload_sr_mpls_steering_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_mpls_steering_add_del_reply_payload_ntoh(vapi_payload_sr_mpls_steering_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_mpls_steering_add_del_reply_hton(vapi_msg_sr_mpls_steering_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_steering_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_mpls_steering_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_steering_add_del_reply_ntoh(vapi_msg_sr_mpls_steering_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_steering_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_steering_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_steering_add_del_reply_msg_size(vapi_msg_sr_mpls_steering_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_mpls_steering_add_del_reply()
{
  static const char name[] = "sr_mpls_steering_add_del_reply";
  static const char name_with_crc[] = "sr_mpls_steering_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_steering_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_mpls_steering_add_del_reply, payload),
    sizeof(vapi_msg_sr_mpls_steering_add_del_reply),
    (generic_swap_fn_t)vapi_msg_sr_mpls_steering_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_steering_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_steering_add_del_reply = vapi_register_msg(&__vapi_metadata_sr_mpls_steering_add_del_reply);
  VAPI_DBG("Assigned msg id %d to sr_mpls_steering_add_del_reply", vapi_msg_id_sr_mpls_steering_add_del_reply);
}

static inline void vapi_set_vapi_msg_sr_mpls_steering_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_mpls_steering_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_mpls_steering_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_mpls_steering_add_del
#define defined_vapi_msg_sr_mpls_steering_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_del;
  u32 bsid;
  u32 table_id;
  u8 prefix_addr[16];
  u32 mask_width;
  u8 traffic_type;
  u8 next_hop[16];
  u8 nh_type;
  u32 color;
  u8 co_bits;
  u32 vpn_label; 
} vapi_payload_sr_mpls_steering_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_mpls_steering_add_del payload;
} vapi_msg_sr_mpls_steering_add_del;

static inline void vapi_msg_sr_mpls_steering_add_del_payload_hton(vapi_payload_sr_mpls_steering_add_del *payload)
{
  payload->bsid = htobe32(payload->bsid);
  payload->table_id = htobe32(payload->table_id);
  payload->mask_width = htobe32(payload->mask_width);
  payload->color = htobe32(payload->color);
  payload->vpn_label = htobe32(payload->vpn_label);
}

static inline void vapi_msg_sr_mpls_steering_add_del_payload_ntoh(vapi_payload_sr_mpls_steering_add_del *payload)
{
  payload->bsid = be32toh(payload->bsid);
  payload->table_id = be32toh(payload->table_id);
  payload->mask_width = be32toh(payload->mask_width);
  payload->color = be32toh(payload->color);
  payload->vpn_label = be32toh(payload->vpn_label);
}

static inline void vapi_msg_sr_mpls_steering_add_del_hton(vapi_msg_sr_mpls_steering_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_steering_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_mpls_steering_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_steering_add_del_ntoh(vapi_msg_sr_mpls_steering_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_steering_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_steering_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_steering_add_del_msg_size(vapi_msg_sr_mpls_steering_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_mpls_steering_add_del* vapi_alloc_sr_mpls_steering_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_mpls_steering_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_mpls_steering_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_mpls_steering_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_mpls_steering_add_del);

  return msg;
}

static inline vapi_error_e vapi_sr_mpls_steering_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_sr_mpls_steering_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_mpls_steering_add_del_reply *reply),
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
  vapi_msg_sr_mpls_steering_add_del_hton(msg);
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
    vapi_msg_sr_mpls_steering_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_mpls_steering_add_del()
{
  static const char name[] = "sr_mpls_steering_add_del";
  static const char name_with_crc[] = "sr_mpls_steering_add_del_1591f94a";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_steering_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_mpls_steering_add_del, payload),
    sizeof(vapi_msg_sr_mpls_steering_add_del),
    (generic_swap_fn_t)vapi_msg_sr_mpls_steering_add_del_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_steering_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_steering_add_del = vapi_register_msg(&__vapi_metadata_sr_mpls_steering_add_del);
  VAPI_DBG("Assigned msg id %d to sr_mpls_steering_add_del", vapi_msg_id_sr_mpls_steering_add_del);
}
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_mod_reply
#define defined_vapi_msg_sr_mpls_policy_mod_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_mpls_policy_mod_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_mpls_policy_mod_reply payload;
} vapi_msg_sr_mpls_policy_mod_reply;

static inline void vapi_msg_sr_mpls_policy_mod_reply_payload_hton(vapi_payload_sr_mpls_policy_mod_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_mod_reply_payload_ntoh(vapi_payload_sr_mpls_policy_mod_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_mod_reply_hton(vapi_msg_sr_mpls_policy_mod_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_mod_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_mod_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_mod_reply_ntoh(vapi_msg_sr_mpls_policy_mod_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_mod_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_mod_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_mod_reply_msg_size(vapi_msg_sr_mpls_policy_mod_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_mod_reply()
{
  static const char name[] = "sr_mpls_policy_mod_reply";
  static const char name_with_crc[] = "sr_mpls_policy_mod_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_mod_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_mpls_policy_mod_reply, payload),
    sizeof(vapi_msg_sr_mpls_policy_mod_reply),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_mod_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_mod_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_mod_reply = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_mod_reply);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_mod_reply", vapi_msg_id_sr_mpls_policy_mod_reply);
}

static inline void vapi_set_vapi_msg_sr_mpls_policy_mod_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_mpls_policy_mod_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_mpls_policy_mod_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_add_reply
#define defined_vapi_msg_sr_mpls_policy_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_mpls_policy_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_mpls_policy_add_reply payload;
} vapi_msg_sr_mpls_policy_add_reply;

static inline void vapi_msg_sr_mpls_policy_add_reply_payload_hton(vapi_payload_sr_mpls_policy_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_add_reply_payload_ntoh(vapi_payload_sr_mpls_policy_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_add_reply_hton(vapi_msg_sr_mpls_policy_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_add_reply_ntoh(vapi_msg_sr_mpls_policy_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_add_reply_msg_size(vapi_msg_sr_mpls_policy_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_add_reply()
{
  static const char name[] = "sr_mpls_policy_add_reply";
  static const char name_with_crc[] = "sr_mpls_policy_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_mpls_policy_add_reply, payload),
    sizeof(vapi_msg_sr_mpls_policy_add_reply),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_add_reply = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_add_reply);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_add_reply", vapi_msg_id_sr_mpls_policy_add_reply);
}

static inline void vapi_set_vapi_msg_sr_mpls_policy_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_mpls_policy_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_mpls_policy_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_del_reply
#define defined_vapi_msg_sr_mpls_policy_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_mpls_policy_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_mpls_policy_del_reply payload;
} vapi_msg_sr_mpls_policy_del_reply;

static inline void vapi_msg_sr_mpls_policy_del_reply_payload_hton(vapi_payload_sr_mpls_policy_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_del_reply_payload_ntoh(vapi_payload_sr_mpls_policy_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_del_reply_hton(vapi_msg_sr_mpls_policy_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_del_reply_ntoh(vapi_msg_sr_mpls_policy_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_del_reply_msg_size(vapi_msg_sr_mpls_policy_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_del_reply()
{
  static const char name[] = "sr_mpls_policy_del_reply";
  static const char name_with_crc[] = "sr_mpls_policy_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_mpls_policy_del_reply, payload),
    sizeof(vapi_msg_sr_mpls_policy_del_reply),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_del_reply = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_del_reply);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_del_reply", vapi_msg_id_sr_mpls_policy_del_reply);
}

static inline void vapi_set_vapi_msg_sr_mpls_policy_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_mpls_policy_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_mpls_policy_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_assign_endpoint_color_reply
#define defined_vapi_msg_sr_mpls_policy_assign_endpoint_color_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_mpls_policy_assign_endpoint_color_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_mpls_policy_assign_endpoint_color_reply payload;
} vapi_msg_sr_mpls_policy_assign_endpoint_color_reply;

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_payload_hton(vapi_payload_sr_mpls_policy_assign_endpoint_color_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_payload_ntoh(vapi_payload_sr_mpls_policy_assign_endpoint_color_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_hton(vapi_msg_sr_mpls_policy_assign_endpoint_color_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_assign_endpoint_color_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_ntoh(vapi_msg_sr_mpls_policy_assign_endpoint_color_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_assign_endpoint_color_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_assign_endpoint_color_reply_msg_size(vapi_msg_sr_mpls_policy_assign_endpoint_color_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_assign_endpoint_color_reply()
{
  static const char name[] = "sr_mpls_policy_assign_endpoint_color_reply";
  static const char name_with_crc[] = "sr_mpls_policy_assign_endpoint_color_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_assign_endpoint_color_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_mpls_policy_assign_endpoint_color_reply, payload),
    sizeof(vapi_msg_sr_mpls_policy_assign_endpoint_color_reply),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_assign_endpoint_color_reply = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_assign_endpoint_color_reply);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_assign_endpoint_color_reply", vapi_msg_id_sr_mpls_policy_assign_endpoint_color_reply);
}

static inline void vapi_set_vapi_msg_sr_mpls_policy_assign_endpoint_color_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_mpls_policy_assign_endpoint_color_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_mpls_policy_assign_endpoint_color_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_assign_endpoint_color
#define defined_vapi_msg_sr_mpls_policy_assign_endpoint_color
typedef struct __attribute__ ((__packed__)) {
  u32 bsid;
  u8 endpoint[16];
  u8 endpoint_type;
  u32 color; 
} vapi_payload_sr_mpls_policy_assign_endpoint_color;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_mpls_policy_assign_endpoint_color payload;
} vapi_msg_sr_mpls_policy_assign_endpoint_color;

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_payload_hton(vapi_payload_sr_mpls_policy_assign_endpoint_color *payload)
{
  payload->bsid = htobe32(payload->bsid);
  payload->color = htobe32(payload->color);
}

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_payload_ntoh(vapi_payload_sr_mpls_policy_assign_endpoint_color *payload)
{
  payload->bsid = be32toh(payload->bsid);
  payload->color = be32toh(payload->color);
}

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_hton(vapi_msg_sr_mpls_policy_assign_endpoint_color *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_assign_endpoint_color'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_assign_endpoint_color_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_assign_endpoint_color_ntoh(vapi_msg_sr_mpls_policy_assign_endpoint_color *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_assign_endpoint_color'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_assign_endpoint_color_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_assign_endpoint_color_msg_size(vapi_msg_sr_mpls_policy_assign_endpoint_color *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_mpls_policy_assign_endpoint_color* vapi_alloc_sr_mpls_policy_assign_endpoint_color(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_mpls_policy_assign_endpoint_color *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_mpls_policy_assign_endpoint_color);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_mpls_policy_assign_endpoint_color*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_mpls_policy_assign_endpoint_color);

  return msg;
}

static inline vapi_error_e vapi_sr_mpls_policy_assign_endpoint_color(struct vapi_ctx_s *ctx,
  vapi_msg_sr_mpls_policy_assign_endpoint_color *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_mpls_policy_assign_endpoint_color_reply *reply),
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
  vapi_msg_sr_mpls_policy_assign_endpoint_color_hton(msg);
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
    vapi_msg_sr_mpls_policy_assign_endpoint_color_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_assign_endpoint_color()
{
  static const char name[] = "sr_mpls_policy_assign_endpoint_color";
  static const char name_with_crc[] = "sr_mpls_policy_assign_endpoint_color_6c82a6da";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_assign_endpoint_color = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_mpls_policy_assign_endpoint_color, payload),
    sizeof(vapi_msg_sr_mpls_policy_assign_endpoint_color),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_assign_endpoint_color_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_assign_endpoint_color_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_assign_endpoint_color = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_assign_endpoint_color);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_assign_endpoint_color", vapi_msg_id_sr_mpls_policy_assign_endpoint_color);
}
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_mod
#define defined_vapi_msg_sr_mpls_policy_mod
typedef struct __attribute__ ((__packed__)) {
  u32 bsid;
  u8 operation;
  u32 sl_index;
  u32 weight;
  u8 n_segments;
  u32 segments[0]; 
} vapi_payload_sr_mpls_policy_mod;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_mpls_policy_mod payload;
} vapi_msg_sr_mpls_policy_mod;

static inline void vapi_msg_sr_mpls_policy_mod_payload_hton(vapi_payload_sr_mpls_policy_mod *payload)
{
  payload->bsid = htobe32(payload->bsid);
  payload->sl_index = htobe32(payload->sl_index);
  payload->weight = htobe32(payload->weight);
  do { unsigned i; for (i = 0; i < payload->n_segments; ++i) { payload->segments[i] = htobe32(payload->segments[i]); } } while(0);
}

static inline void vapi_msg_sr_mpls_policy_mod_payload_ntoh(vapi_payload_sr_mpls_policy_mod *payload)
{
  payload->bsid = be32toh(payload->bsid);
  payload->sl_index = be32toh(payload->sl_index);
  payload->weight = be32toh(payload->weight);
  do { unsigned i; for (i = 0; i < payload->n_segments; ++i) { payload->segments[i] = be32toh(payload->segments[i]); } } while(0);
}

static inline void vapi_msg_sr_mpls_policy_mod_hton(vapi_msg_sr_mpls_policy_mod *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_mod'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_mod_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_mod_ntoh(vapi_msg_sr_mpls_policy_mod *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_mod'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_mod_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_mod_msg_size(vapi_msg_sr_mpls_policy_mod *msg)
{
  return sizeof(*msg)+ msg->payload.n_segments * sizeof(msg->payload.segments[0]);
}

static inline vapi_msg_sr_mpls_policy_mod* vapi_alloc_sr_mpls_policy_mod(struct vapi_ctx_s *ctx, size_t _segments_array_size)
{
  vapi_msg_sr_mpls_policy_mod *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_mpls_policy_mod) + sizeof(msg->payload.segments[0]) * _segments_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_mpls_policy_mod*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_mpls_policy_mod);
  msg->payload.n_segments = _segments_array_size;

  return msg;
}

static inline vapi_error_e vapi_sr_mpls_policy_mod(struct vapi_ctx_s *ctx,
  vapi_msg_sr_mpls_policy_mod *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_mpls_policy_mod_reply *reply),
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
  vapi_msg_sr_mpls_policy_mod_hton(msg);
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
    vapi_msg_sr_mpls_policy_mod_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_mod()
{
  static const char name[] = "sr_mpls_policy_mod";
  static const char name_with_crc[] = "sr_mpls_policy_mod_09d338ac";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_mod = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_mpls_policy_mod, payload),
    sizeof(vapi_msg_sr_mpls_policy_mod),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_mod_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_mod_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_mod = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_mod);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_mod", vapi_msg_id_sr_mpls_policy_mod);
}
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_add
#define defined_vapi_msg_sr_mpls_policy_add
typedef struct __attribute__ ((__packed__)) {
  u32 bsid;
  u32 weight;
  u8 type;
  u8 n_segments;
  u32 segments[0]; 
} vapi_payload_sr_mpls_policy_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_mpls_policy_add payload;
} vapi_msg_sr_mpls_policy_add;

static inline void vapi_msg_sr_mpls_policy_add_payload_hton(vapi_payload_sr_mpls_policy_add *payload)
{
  payload->bsid = htobe32(payload->bsid);
  payload->weight = htobe32(payload->weight);
  do { unsigned i; for (i = 0; i < payload->n_segments; ++i) { payload->segments[i] = htobe32(payload->segments[i]); } } while(0);
}

static inline void vapi_msg_sr_mpls_policy_add_payload_ntoh(vapi_payload_sr_mpls_policy_add *payload)
{
  payload->bsid = be32toh(payload->bsid);
  payload->weight = be32toh(payload->weight);
  do { unsigned i; for (i = 0; i < payload->n_segments; ++i) { payload->segments[i] = be32toh(payload->segments[i]); } } while(0);
}

static inline void vapi_msg_sr_mpls_policy_add_hton(vapi_msg_sr_mpls_policy_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_add_ntoh(vapi_msg_sr_mpls_policy_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_add_msg_size(vapi_msg_sr_mpls_policy_add *msg)
{
  return sizeof(*msg)+ msg->payload.n_segments * sizeof(msg->payload.segments[0]);
}

static inline vapi_msg_sr_mpls_policy_add* vapi_alloc_sr_mpls_policy_add(struct vapi_ctx_s *ctx, size_t _segments_array_size)
{
  vapi_msg_sr_mpls_policy_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_mpls_policy_add) + sizeof(msg->payload.segments[0]) * _segments_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_mpls_policy_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_mpls_policy_add);
  msg->payload.n_segments = _segments_array_size;

  return msg;
}

static inline vapi_error_e vapi_sr_mpls_policy_add(struct vapi_ctx_s *ctx,
  vapi_msg_sr_mpls_policy_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_mpls_policy_add_reply *reply),
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
  vapi_msg_sr_mpls_policy_add_hton(msg);
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
    vapi_msg_sr_mpls_policy_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_add()
{
  static const char name[] = "sr_mpls_policy_add";
  static const char name_with_crc[] = "sr_mpls_policy_add_6f5b21cc";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_mpls_policy_add, payload),
    sizeof(vapi_msg_sr_mpls_policy_add),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_add_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_add = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_add);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_add", vapi_msg_id_sr_mpls_policy_add);
}
#endif

#ifndef defined_vapi_msg_sr_mpls_policy_del
#define defined_vapi_msg_sr_mpls_policy_del
typedef struct __attribute__ ((__packed__)) {
  u32 bsid; 
} vapi_payload_sr_mpls_policy_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_mpls_policy_del payload;
} vapi_msg_sr_mpls_policy_del;

static inline void vapi_msg_sr_mpls_policy_del_payload_hton(vapi_payload_sr_mpls_policy_del *payload)
{
  payload->bsid = htobe32(payload->bsid);
}

static inline void vapi_msg_sr_mpls_policy_del_payload_ntoh(vapi_payload_sr_mpls_policy_del *payload)
{
  payload->bsid = be32toh(payload->bsid);
}

static inline void vapi_msg_sr_mpls_policy_del_hton(vapi_msg_sr_mpls_policy_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_mpls_policy_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_mpls_policy_del_ntoh(vapi_msg_sr_mpls_policy_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_mpls_policy_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_mpls_policy_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_mpls_policy_del_msg_size(vapi_msg_sr_mpls_policy_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_mpls_policy_del* vapi_alloc_sr_mpls_policy_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_mpls_policy_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_mpls_policy_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_mpls_policy_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_mpls_policy_del);

  return msg;
}

static inline vapi_error_e vapi_sr_mpls_policy_del(struct vapi_ctx_s *ctx,
  vapi_msg_sr_mpls_policy_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_mpls_policy_del_reply *reply),
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
  vapi_msg_sr_mpls_policy_del_hton(msg);
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
    vapi_msg_sr_mpls_policy_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_mpls_policy_del()
{
  static const char name[] = "sr_mpls_policy_del";
  static const char name_with_crc[] = "sr_mpls_policy_del_e29d34fa";
  static vapi_message_desc_t __vapi_metadata_sr_mpls_policy_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_mpls_policy_del, payload),
    sizeof(vapi_msg_sr_mpls_policy_del),
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_del_hton,
    (generic_swap_fn_t)vapi_msg_sr_mpls_policy_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_mpls_policy_del = vapi_register_msg(&__vapi_metadata_sr_mpls_policy_del);
  VAPI_DBG("Assigned msg id %d to sr_mpls_policy_del", vapi_msg_id_sr_mpls_policy_del);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
