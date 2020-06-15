#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_flowprobe_flowprobe_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_flowprobe_flowprobe_api_json

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

extern vapi_msg_id_t vapi_msg_id_flowprobe_params_reply;
extern vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del;
extern vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_flowprobe_params;

#define DEFINE_VAPI_MSG_IDS_FLOWPROBE_API_JSON\
  vapi_msg_id_t vapi_msg_id_flowprobe_params_reply;\
  vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del;\
  vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_flowprobe_params;


#ifndef defined_vapi_msg_flowprobe_params_reply
#define defined_vapi_msg_flowprobe_params_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_flowprobe_params_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_flowprobe_params_reply payload;
} vapi_msg_flowprobe_params_reply;

static inline void vapi_msg_flowprobe_params_reply_payload_hton(vapi_payload_flowprobe_params_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_flowprobe_params_reply_payload_ntoh(vapi_payload_flowprobe_params_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_flowprobe_params_reply_hton(vapi_msg_flowprobe_params_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_flowprobe_params_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_params_reply_ntoh(vapi_msg_flowprobe_params_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_flowprobe_params_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_params_reply_msg_size(vapi_msg_flowprobe_params_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_flowprobe_params_reply()
{
  static const char name[] = "flowprobe_params_reply";
  static const char name_with_crc[] = "flowprobe_params_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_flowprobe_params_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_flowprobe_params_reply, payload),
    sizeof(vapi_msg_flowprobe_params_reply),
    (generic_swap_fn_t)vapi_msg_flowprobe_params_reply_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_params_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_params_reply = vapi_register_msg(&__vapi_metadata_flowprobe_params_reply);
  VAPI_DBG("Assigned msg id %d to flowprobe_params_reply", vapi_msg_id_flowprobe_params_reply);
}

static inline void vapi_set_vapi_msg_flowprobe_params_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_flowprobe_params_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_flowprobe_params_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_flowprobe_tx_interface_add_del_reply
#define defined_vapi_msg_flowprobe_tx_interface_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_flowprobe_tx_interface_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_flowprobe_tx_interface_add_del_reply payload;
} vapi_msg_flowprobe_tx_interface_add_del_reply;

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_payload_hton(vapi_payload_flowprobe_tx_interface_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_payload_ntoh(vapi_payload_flowprobe_tx_interface_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_hton(vapi_msg_flowprobe_tx_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_ntoh(vapi_msg_flowprobe_tx_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_tx_interface_add_del_reply_msg_size(vapi_msg_flowprobe_tx_interface_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_flowprobe_tx_interface_add_del_reply()
{
  static const char name[] = "flowprobe_tx_interface_add_del_reply";
  static const char name_with_crc[] = "flowprobe_tx_interface_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_flowprobe_tx_interface_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_flowprobe_tx_interface_add_del_reply, payload),
    sizeof(vapi_msg_flowprobe_tx_interface_add_del_reply),
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_tx_interface_add_del_reply = vapi_register_msg(&__vapi_metadata_flowprobe_tx_interface_add_del_reply);
  VAPI_DBG("Assigned msg id %d to flowprobe_tx_interface_add_del_reply", vapi_msg_id_flowprobe_tx_interface_add_del_reply);
}

static inline void vapi_set_vapi_msg_flowprobe_tx_interface_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_flowprobe_tx_interface_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_flowprobe_tx_interface_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_flowprobe_tx_interface_add_del
#define defined_vapi_msg_flowprobe_tx_interface_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 which;
  u32 sw_if_index; 
} vapi_payload_flowprobe_tx_interface_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_flowprobe_tx_interface_add_del payload;
} vapi_msg_flowprobe_tx_interface_add_del;

static inline void vapi_msg_flowprobe_tx_interface_add_del_payload_hton(vapi_payload_flowprobe_tx_interface_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_payload_ntoh(vapi_payload_flowprobe_tx_interface_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_hton(vapi_msg_flowprobe_tx_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_ntoh(vapi_msg_flowprobe_tx_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_tx_interface_add_del_msg_size(vapi_msg_flowprobe_tx_interface_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_flowprobe_tx_interface_add_del* vapi_alloc_flowprobe_tx_interface_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_flowprobe_tx_interface_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_flowprobe_tx_interface_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_flowprobe_tx_interface_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_flowprobe_tx_interface_add_del);

  return msg;
}

static inline vapi_error_e vapi_flowprobe_tx_interface_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_flowprobe_tx_interface_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_flowprobe_tx_interface_add_del_reply *reply),
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
  vapi_msg_flowprobe_tx_interface_add_del_hton(msg);
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
    vapi_msg_flowprobe_tx_interface_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_flowprobe_tx_interface_add_del()
{
  static const char name[] = "flowprobe_tx_interface_add_del";
  static const char name_with_crc[] = "flowprobe_tx_interface_add_del_10c2fbab";
  static vapi_message_desc_t __vapi_metadata_flowprobe_tx_interface_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_flowprobe_tx_interface_add_del, payload),
    sizeof(vapi_msg_flowprobe_tx_interface_add_del),
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_tx_interface_add_del = vapi_register_msg(&__vapi_metadata_flowprobe_tx_interface_add_del);
  VAPI_DBG("Assigned msg id %d to flowprobe_tx_interface_add_del", vapi_msg_id_flowprobe_tx_interface_add_del);
}
#endif

#ifndef defined_vapi_msg_flowprobe_params
#define defined_vapi_msg_flowprobe_params
typedef struct __attribute__ ((__packed__)) {
  u8 record_l2;
  u8 record_l3;
  u8 record_l4;
  u32 active_timer;
  u32 passive_timer; 
} vapi_payload_flowprobe_params;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_flowprobe_params payload;
} vapi_msg_flowprobe_params;

static inline void vapi_msg_flowprobe_params_payload_hton(vapi_payload_flowprobe_params *payload)
{
  payload->active_timer = htobe32(payload->active_timer);
  payload->passive_timer = htobe32(payload->passive_timer);
}

static inline void vapi_msg_flowprobe_params_payload_ntoh(vapi_payload_flowprobe_params *payload)
{
  payload->active_timer = be32toh(payload->active_timer);
  payload->passive_timer = be32toh(payload->passive_timer);
}

static inline void vapi_msg_flowprobe_params_hton(vapi_msg_flowprobe_params *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_flowprobe_params_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_params_ntoh(vapi_msg_flowprobe_params *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_flowprobe_params_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_params_msg_size(vapi_msg_flowprobe_params *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_flowprobe_params* vapi_alloc_flowprobe_params(struct vapi_ctx_s *ctx)
{
  vapi_msg_flowprobe_params *msg = NULL;
  const size_t size = sizeof(vapi_msg_flowprobe_params);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_flowprobe_params*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_flowprobe_params);

  return msg;
}

static inline vapi_error_e vapi_flowprobe_params(struct vapi_ctx_s *ctx,
  vapi_msg_flowprobe_params *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_flowprobe_params_reply *reply),
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
  vapi_msg_flowprobe_params_hton(msg);
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
    vapi_msg_flowprobe_params_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_flowprobe_params()
{
  static const char name[] = "flowprobe_params";
  static const char name_with_crc[] = "flowprobe_params_574adc1c";
  static vapi_message_desc_t __vapi_metadata_flowprobe_params = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_flowprobe_params, payload),
    sizeof(vapi_msg_flowprobe_params),
    (generic_swap_fn_t)vapi_msg_flowprobe_params_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_params_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_params = vapi_register_msg(&__vapi_metadata_flowprobe_params);
  VAPI_DBG("Assigned msg id %d to flowprobe_params", vapi_msg_id_flowprobe_params);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
