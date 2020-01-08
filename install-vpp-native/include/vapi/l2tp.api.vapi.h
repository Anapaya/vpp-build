#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_l2tp_l2tp_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_l2tp_l2tp_api_json

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

extern vapi_msg_id_t vapi_msg_id_l2tpv3_create_tunnel_reply;
extern vapi_msg_id_t vapi_msg_id_l2tpv3_set_tunnel_cookies_reply;
extern vapi_msg_id_t vapi_msg_id_sw_if_l2tpv3_tunnel_dump;
extern vapi_msg_id_t vapi_msg_id_l2tpv3_set_lookup_key_reply;
extern vapi_msg_id_t vapi_msg_id_l2tpv3_interface_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_l2tpv3_interface_enable_disable;
extern vapi_msg_id_t vapi_msg_id_l2tpv3_set_tunnel_cookies;
extern vapi_msg_id_t vapi_msg_id_l2tpv3_create_tunnel;
extern vapi_msg_id_t vapi_msg_id_l2tpv3_set_lookup_key;
extern vapi_msg_id_t vapi_msg_id_sw_if_l2tpv3_tunnel_details;

#define DEFINE_VAPI_MSG_IDS_L2TP_API_JSON\
  vapi_msg_id_t vapi_msg_id_l2tpv3_create_tunnel_reply;\
  vapi_msg_id_t vapi_msg_id_l2tpv3_set_tunnel_cookies_reply;\
  vapi_msg_id_t vapi_msg_id_sw_if_l2tpv3_tunnel_dump;\
  vapi_msg_id_t vapi_msg_id_l2tpv3_set_lookup_key_reply;\
  vapi_msg_id_t vapi_msg_id_l2tpv3_interface_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_l2tpv3_interface_enable_disable;\
  vapi_msg_id_t vapi_msg_id_l2tpv3_set_tunnel_cookies;\
  vapi_msg_id_t vapi_msg_id_l2tpv3_create_tunnel;\
  vapi_msg_id_t vapi_msg_id_l2tpv3_set_lookup_key;\
  vapi_msg_id_t vapi_msg_id_sw_if_l2tpv3_tunnel_details;


#ifndef defined_vapi_msg_l2tpv3_create_tunnel_reply
#define defined_vapi_msg_l2tpv3_create_tunnel_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_l2tpv3_create_tunnel_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2tpv3_create_tunnel_reply payload;
} vapi_msg_l2tpv3_create_tunnel_reply;

static inline void vapi_msg_l2tpv3_create_tunnel_reply_payload_hton(vapi_payload_l2tpv3_create_tunnel_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_l2tpv3_create_tunnel_reply_payload_ntoh(vapi_payload_l2tpv3_create_tunnel_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_l2tpv3_create_tunnel_reply_hton(vapi_msg_l2tpv3_create_tunnel_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_create_tunnel_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2tpv3_create_tunnel_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_create_tunnel_reply_ntoh(vapi_msg_l2tpv3_create_tunnel_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_create_tunnel_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_create_tunnel_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_create_tunnel_reply_msg_size(vapi_msg_l2tpv3_create_tunnel_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2tpv3_create_tunnel_reply()
{
  static const char name[] = "l2tpv3_create_tunnel_reply";
  static const char name_with_crc[] = "l2tpv3_create_tunnel_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_create_tunnel_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2tpv3_create_tunnel_reply, payload),
    sizeof(vapi_msg_l2tpv3_create_tunnel_reply),
    (generic_swap_fn_t)vapi_msg_l2tpv3_create_tunnel_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_create_tunnel_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_create_tunnel_reply = vapi_register_msg(&__vapi_metadata_l2tpv3_create_tunnel_reply);
  VAPI_DBG("Assigned msg id %d to l2tpv3_create_tunnel_reply", vapi_msg_id_l2tpv3_create_tunnel_reply);
}

static inline void vapi_set_vapi_msg_l2tpv3_create_tunnel_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2tpv3_create_tunnel_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2tpv3_create_tunnel_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2tpv3_set_tunnel_cookies_reply
#define defined_vapi_msg_l2tpv3_set_tunnel_cookies_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2tpv3_set_tunnel_cookies_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2tpv3_set_tunnel_cookies_reply payload;
} vapi_msg_l2tpv3_set_tunnel_cookies_reply;

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_reply_payload_hton(vapi_payload_l2tpv3_set_tunnel_cookies_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_reply_payload_ntoh(vapi_payload_l2tpv3_set_tunnel_cookies_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_reply_hton(vapi_msg_l2tpv3_set_tunnel_cookies_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_tunnel_cookies_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2tpv3_set_tunnel_cookies_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_reply_ntoh(vapi_msg_l2tpv3_set_tunnel_cookies_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_tunnel_cookies_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_set_tunnel_cookies_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_set_tunnel_cookies_reply_msg_size(vapi_msg_l2tpv3_set_tunnel_cookies_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2tpv3_set_tunnel_cookies_reply()
{
  static const char name[] = "l2tpv3_set_tunnel_cookies_reply";
  static const char name_with_crc[] = "l2tpv3_set_tunnel_cookies_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_set_tunnel_cookies_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2tpv3_set_tunnel_cookies_reply, payload),
    sizeof(vapi_msg_l2tpv3_set_tunnel_cookies_reply),
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_tunnel_cookies_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_tunnel_cookies_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_set_tunnel_cookies_reply = vapi_register_msg(&__vapi_metadata_l2tpv3_set_tunnel_cookies_reply);
  VAPI_DBG("Assigned msg id %d to l2tpv3_set_tunnel_cookies_reply", vapi_msg_id_l2tpv3_set_tunnel_cookies_reply);
}

static inline void vapi_set_vapi_msg_l2tpv3_set_tunnel_cookies_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2tpv3_set_tunnel_cookies_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2tpv3_set_tunnel_cookies_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_if_l2tpv3_tunnel_details
#define defined_vapi_msg_sw_if_l2tpv3_tunnel_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 interface_name[64];
  u8 client_address[16];
  u8 our_address[16];
  u32 local_session_id;
  u32 remote_session_id;
  u64 local_cookie[2];
  u64 remote_cookie;
  u8 l2_sublayer_present; 
} vapi_payload_sw_if_l2tpv3_tunnel_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_if_l2tpv3_tunnel_details payload;
} vapi_msg_sw_if_l2tpv3_tunnel_details;

static inline void vapi_msg_sw_if_l2tpv3_tunnel_details_payload_hton(vapi_payload_sw_if_l2tpv3_tunnel_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->local_session_id = htobe32(payload->local_session_id);
  payload->remote_session_id = htobe32(payload->remote_session_id);
  do { unsigned i; for (i = 0; i < 2; ++i) { payload->local_cookie[i] = htobe64(payload->local_cookie[i]); } } while(0);
  payload->remote_cookie = htobe64(payload->remote_cookie);
}

static inline void vapi_msg_sw_if_l2tpv3_tunnel_details_payload_ntoh(vapi_payload_sw_if_l2tpv3_tunnel_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->local_session_id = be32toh(payload->local_session_id);
  payload->remote_session_id = be32toh(payload->remote_session_id);
  do { unsigned i; for (i = 0; i < 2; ++i) { payload->local_cookie[i] = be64toh(payload->local_cookie[i]); } } while(0);
  payload->remote_cookie = be64toh(payload->remote_cookie);
}

static inline void vapi_msg_sw_if_l2tpv3_tunnel_details_hton(vapi_msg_sw_if_l2tpv3_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_if_l2tpv3_tunnel_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_if_l2tpv3_tunnel_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_if_l2tpv3_tunnel_details_ntoh(vapi_msg_sw_if_l2tpv3_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_if_l2tpv3_tunnel_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_if_l2tpv3_tunnel_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_if_l2tpv3_tunnel_details_msg_size(vapi_msg_sw_if_l2tpv3_tunnel_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_if_l2tpv3_tunnel_details()
{
  static const char name[] = "sw_if_l2tpv3_tunnel_details";
  static const char name_with_crc[] = "sw_if_l2tpv3_tunnel_details_7b22bb34";
  static vapi_message_desc_t __vapi_metadata_sw_if_l2tpv3_tunnel_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_if_l2tpv3_tunnel_details, payload),
    sizeof(vapi_msg_sw_if_l2tpv3_tunnel_details),
    (generic_swap_fn_t)vapi_msg_sw_if_l2tpv3_tunnel_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_if_l2tpv3_tunnel_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_if_l2tpv3_tunnel_details = vapi_register_msg(&__vapi_metadata_sw_if_l2tpv3_tunnel_details);
  VAPI_DBG("Assigned msg id %d to sw_if_l2tpv3_tunnel_details", vapi_msg_id_sw_if_l2tpv3_tunnel_details);
}

static inline void vapi_set_vapi_msg_sw_if_l2tpv3_tunnel_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_if_l2tpv3_tunnel_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_if_l2tpv3_tunnel_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_if_l2tpv3_tunnel_dump
#define defined_vapi_msg_sw_if_l2tpv3_tunnel_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_if_l2tpv3_tunnel_dump;

static inline void vapi_msg_sw_if_l2tpv3_tunnel_dump_hton(vapi_msg_sw_if_l2tpv3_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_if_l2tpv3_tunnel_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_if_l2tpv3_tunnel_dump_ntoh(vapi_msg_sw_if_l2tpv3_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_if_l2tpv3_tunnel_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_if_l2tpv3_tunnel_dump_msg_size(vapi_msg_sw_if_l2tpv3_tunnel_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_if_l2tpv3_tunnel_dump* vapi_alloc_sw_if_l2tpv3_tunnel_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_if_l2tpv3_tunnel_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_if_l2tpv3_tunnel_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_if_l2tpv3_tunnel_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_if_l2tpv3_tunnel_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_if_l2tpv3_tunnel_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_if_l2tpv3_tunnel_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_if_l2tpv3_tunnel_details *reply),
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
  vapi_msg_sw_if_l2tpv3_tunnel_dump_hton(msg);
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
    vapi_msg_sw_if_l2tpv3_tunnel_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_if_l2tpv3_tunnel_dump()
{
  static const char name[] = "sw_if_l2tpv3_tunnel_dump";
  static const char name_with_crc[] = "sw_if_l2tpv3_tunnel_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_if_l2tpv3_tunnel_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_if_l2tpv3_tunnel_dump),
    (generic_swap_fn_t)vapi_msg_sw_if_l2tpv3_tunnel_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_if_l2tpv3_tunnel_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_if_l2tpv3_tunnel_dump = vapi_register_msg(&__vapi_metadata_sw_if_l2tpv3_tunnel_dump);
  VAPI_DBG("Assigned msg id %d to sw_if_l2tpv3_tunnel_dump", vapi_msg_id_sw_if_l2tpv3_tunnel_dump);
}
#endif

#ifndef defined_vapi_msg_l2tpv3_set_lookup_key_reply
#define defined_vapi_msg_l2tpv3_set_lookup_key_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2tpv3_set_lookup_key_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2tpv3_set_lookup_key_reply payload;
} vapi_msg_l2tpv3_set_lookup_key_reply;

static inline void vapi_msg_l2tpv3_set_lookup_key_reply_payload_hton(vapi_payload_l2tpv3_set_lookup_key_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2tpv3_set_lookup_key_reply_payload_ntoh(vapi_payload_l2tpv3_set_lookup_key_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2tpv3_set_lookup_key_reply_hton(vapi_msg_l2tpv3_set_lookup_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_lookup_key_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2tpv3_set_lookup_key_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_set_lookup_key_reply_ntoh(vapi_msg_l2tpv3_set_lookup_key_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_lookup_key_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_set_lookup_key_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_set_lookup_key_reply_msg_size(vapi_msg_l2tpv3_set_lookup_key_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2tpv3_set_lookup_key_reply()
{
  static const char name[] = "l2tpv3_set_lookup_key_reply";
  static const char name_with_crc[] = "l2tpv3_set_lookup_key_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_set_lookup_key_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2tpv3_set_lookup_key_reply, payload),
    sizeof(vapi_msg_l2tpv3_set_lookup_key_reply),
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_lookup_key_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_lookup_key_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_set_lookup_key_reply = vapi_register_msg(&__vapi_metadata_l2tpv3_set_lookup_key_reply);
  VAPI_DBG("Assigned msg id %d to l2tpv3_set_lookup_key_reply", vapi_msg_id_l2tpv3_set_lookup_key_reply);
}

static inline void vapi_set_vapi_msg_l2tpv3_set_lookup_key_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2tpv3_set_lookup_key_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2tpv3_set_lookup_key_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2tpv3_interface_enable_disable_reply
#define defined_vapi_msg_l2tpv3_interface_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2tpv3_interface_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2tpv3_interface_enable_disable_reply payload;
} vapi_msg_l2tpv3_interface_enable_disable_reply;

static inline void vapi_msg_l2tpv3_interface_enable_disable_reply_payload_hton(vapi_payload_l2tpv3_interface_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2tpv3_interface_enable_disable_reply_payload_ntoh(vapi_payload_l2tpv3_interface_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2tpv3_interface_enable_disable_reply_hton(vapi_msg_l2tpv3_interface_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_interface_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2tpv3_interface_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_interface_enable_disable_reply_ntoh(vapi_msg_l2tpv3_interface_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_interface_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_interface_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_interface_enable_disable_reply_msg_size(vapi_msg_l2tpv3_interface_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2tpv3_interface_enable_disable_reply()
{
  static const char name[] = "l2tpv3_interface_enable_disable_reply";
  static const char name_with_crc[] = "l2tpv3_interface_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_interface_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2tpv3_interface_enable_disable_reply, payload),
    sizeof(vapi_msg_l2tpv3_interface_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_l2tpv3_interface_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_interface_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_interface_enable_disable_reply = vapi_register_msg(&__vapi_metadata_l2tpv3_interface_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to l2tpv3_interface_enable_disable_reply", vapi_msg_id_l2tpv3_interface_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_l2tpv3_interface_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2tpv3_interface_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2tpv3_interface_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2tpv3_interface_enable_disable
#define defined_vapi_msg_l2tpv3_interface_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 enable_disable;
  u32 sw_if_index; 
} vapi_payload_l2tpv3_interface_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2tpv3_interface_enable_disable payload;
} vapi_msg_l2tpv3_interface_enable_disable;

static inline void vapi_msg_l2tpv3_interface_enable_disable_payload_hton(vapi_payload_l2tpv3_interface_enable_disable *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_l2tpv3_interface_enable_disable_payload_ntoh(vapi_payload_l2tpv3_interface_enable_disable *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_l2tpv3_interface_enable_disable_hton(vapi_msg_l2tpv3_interface_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_interface_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2tpv3_interface_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_interface_enable_disable_ntoh(vapi_msg_l2tpv3_interface_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_interface_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_interface_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_interface_enable_disable_msg_size(vapi_msg_l2tpv3_interface_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2tpv3_interface_enable_disable* vapi_alloc_l2tpv3_interface_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2tpv3_interface_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2tpv3_interface_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2tpv3_interface_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2tpv3_interface_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_l2tpv3_interface_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_l2tpv3_interface_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2tpv3_interface_enable_disable_reply *reply),
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
  vapi_msg_l2tpv3_interface_enable_disable_hton(msg);
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
    vapi_msg_l2tpv3_interface_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2tpv3_interface_enable_disable()
{
  static const char name[] = "l2tpv3_interface_enable_disable";
  static const char name_with_crc[] = "l2tpv3_interface_enable_disable_57298519";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_interface_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2tpv3_interface_enable_disable, payload),
    sizeof(vapi_msg_l2tpv3_interface_enable_disable),
    (generic_swap_fn_t)vapi_msg_l2tpv3_interface_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_interface_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_interface_enable_disable = vapi_register_msg(&__vapi_metadata_l2tpv3_interface_enable_disable);
  VAPI_DBG("Assigned msg id %d to l2tpv3_interface_enable_disable", vapi_msg_id_l2tpv3_interface_enable_disable);
}
#endif

#ifndef defined_vapi_msg_l2tpv3_set_tunnel_cookies
#define defined_vapi_msg_l2tpv3_set_tunnel_cookies
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u64 new_local_cookie;
  u64 new_remote_cookie; 
} vapi_payload_l2tpv3_set_tunnel_cookies;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2tpv3_set_tunnel_cookies payload;
} vapi_msg_l2tpv3_set_tunnel_cookies;

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_payload_hton(vapi_payload_l2tpv3_set_tunnel_cookies *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->new_local_cookie = htobe64(payload->new_local_cookie);
  payload->new_remote_cookie = htobe64(payload->new_remote_cookie);
}

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_payload_ntoh(vapi_payload_l2tpv3_set_tunnel_cookies *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->new_local_cookie = be64toh(payload->new_local_cookie);
  payload->new_remote_cookie = be64toh(payload->new_remote_cookie);
}

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_hton(vapi_msg_l2tpv3_set_tunnel_cookies *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_tunnel_cookies'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2tpv3_set_tunnel_cookies_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_set_tunnel_cookies_ntoh(vapi_msg_l2tpv3_set_tunnel_cookies *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_tunnel_cookies'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_set_tunnel_cookies_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_set_tunnel_cookies_msg_size(vapi_msg_l2tpv3_set_tunnel_cookies *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2tpv3_set_tunnel_cookies* vapi_alloc_l2tpv3_set_tunnel_cookies(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2tpv3_set_tunnel_cookies *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2tpv3_set_tunnel_cookies);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2tpv3_set_tunnel_cookies*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2tpv3_set_tunnel_cookies);

  return msg;
}

static inline vapi_error_e vapi_l2tpv3_set_tunnel_cookies(struct vapi_ctx_s *ctx,
  vapi_msg_l2tpv3_set_tunnel_cookies *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2tpv3_set_tunnel_cookies_reply *reply),
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
  vapi_msg_l2tpv3_set_tunnel_cookies_hton(msg);
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
    vapi_msg_l2tpv3_set_tunnel_cookies_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2tpv3_set_tunnel_cookies()
{
  static const char name[] = "l2tpv3_set_tunnel_cookies";
  static const char name_with_crc[] = "l2tpv3_set_tunnel_cookies_b0ce1366";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_set_tunnel_cookies = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2tpv3_set_tunnel_cookies, payload),
    sizeof(vapi_msg_l2tpv3_set_tunnel_cookies),
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_tunnel_cookies_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_tunnel_cookies_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_set_tunnel_cookies = vapi_register_msg(&__vapi_metadata_l2tpv3_set_tunnel_cookies);
  VAPI_DBG("Assigned msg id %d to l2tpv3_set_tunnel_cookies", vapi_msg_id_l2tpv3_set_tunnel_cookies);
}
#endif

#ifndef defined_vapi_msg_l2tpv3_create_tunnel
#define defined_vapi_msg_l2tpv3_create_tunnel
typedef struct __attribute__ ((__packed__)) {
  u8 client_address[16];
  u8 our_address[16];
  u8 is_ipv6;
  u32 local_session_id;
  u32 remote_session_id;
  u64 local_cookie;
  u64 remote_cookie;
  u8 l2_sublayer_present;
  u32 encap_vrf_id; 
} vapi_payload_l2tpv3_create_tunnel;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2tpv3_create_tunnel payload;
} vapi_msg_l2tpv3_create_tunnel;

static inline void vapi_msg_l2tpv3_create_tunnel_payload_hton(vapi_payload_l2tpv3_create_tunnel *payload)
{
  payload->local_session_id = htobe32(payload->local_session_id);
  payload->remote_session_id = htobe32(payload->remote_session_id);
  payload->local_cookie = htobe64(payload->local_cookie);
  payload->remote_cookie = htobe64(payload->remote_cookie);
  payload->encap_vrf_id = htobe32(payload->encap_vrf_id);
}

static inline void vapi_msg_l2tpv3_create_tunnel_payload_ntoh(vapi_payload_l2tpv3_create_tunnel *payload)
{
  payload->local_session_id = be32toh(payload->local_session_id);
  payload->remote_session_id = be32toh(payload->remote_session_id);
  payload->local_cookie = be64toh(payload->local_cookie);
  payload->remote_cookie = be64toh(payload->remote_cookie);
  payload->encap_vrf_id = be32toh(payload->encap_vrf_id);
}

static inline void vapi_msg_l2tpv3_create_tunnel_hton(vapi_msg_l2tpv3_create_tunnel *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_create_tunnel'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2tpv3_create_tunnel_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_create_tunnel_ntoh(vapi_msg_l2tpv3_create_tunnel *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_create_tunnel'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_create_tunnel_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_create_tunnel_msg_size(vapi_msg_l2tpv3_create_tunnel *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2tpv3_create_tunnel* vapi_alloc_l2tpv3_create_tunnel(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2tpv3_create_tunnel *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2tpv3_create_tunnel);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2tpv3_create_tunnel*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2tpv3_create_tunnel);

  return msg;
}

static inline vapi_error_e vapi_l2tpv3_create_tunnel(struct vapi_ctx_s *ctx,
  vapi_msg_l2tpv3_create_tunnel *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2tpv3_create_tunnel_reply *reply),
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
  vapi_msg_l2tpv3_create_tunnel_hton(msg);
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
    vapi_msg_l2tpv3_create_tunnel_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2tpv3_create_tunnel()
{
  static const char name[] = "l2tpv3_create_tunnel";
  static const char name_with_crc[] = "l2tpv3_create_tunnel_11bafa9f";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_create_tunnel = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2tpv3_create_tunnel, payload),
    sizeof(vapi_msg_l2tpv3_create_tunnel),
    (generic_swap_fn_t)vapi_msg_l2tpv3_create_tunnel_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_create_tunnel_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_create_tunnel = vapi_register_msg(&__vapi_metadata_l2tpv3_create_tunnel);
  VAPI_DBG("Assigned msg id %d to l2tpv3_create_tunnel", vapi_msg_id_l2tpv3_create_tunnel);
}
#endif

#ifndef defined_vapi_msg_l2tpv3_set_lookup_key
#define defined_vapi_msg_l2tpv3_set_lookup_key
typedef struct __attribute__ ((__packed__)) {
  u8 key; 
} vapi_payload_l2tpv3_set_lookup_key;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2tpv3_set_lookup_key payload;
} vapi_msg_l2tpv3_set_lookup_key;

static inline void vapi_msg_l2tpv3_set_lookup_key_payload_hton(vapi_payload_l2tpv3_set_lookup_key *payload)
{

}

static inline void vapi_msg_l2tpv3_set_lookup_key_payload_ntoh(vapi_payload_l2tpv3_set_lookup_key *payload)
{

}

static inline void vapi_msg_l2tpv3_set_lookup_key_hton(vapi_msg_l2tpv3_set_lookup_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_lookup_key'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2tpv3_set_lookup_key_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2tpv3_set_lookup_key_ntoh(vapi_msg_l2tpv3_set_lookup_key *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2tpv3_set_lookup_key'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2tpv3_set_lookup_key_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2tpv3_set_lookup_key_msg_size(vapi_msg_l2tpv3_set_lookup_key *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2tpv3_set_lookup_key* vapi_alloc_l2tpv3_set_lookup_key(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2tpv3_set_lookup_key *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2tpv3_set_lookup_key);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2tpv3_set_lookup_key*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2tpv3_set_lookup_key);

  return msg;
}

static inline vapi_error_e vapi_l2tpv3_set_lookup_key(struct vapi_ctx_s *ctx,
  vapi_msg_l2tpv3_set_lookup_key *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2tpv3_set_lookup_key_reply *reply),
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
  vapi_msg_l2tpv3_set_lookup_key_hton(msg);
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
    vapi_msg_l2tpv3_set_lookup_key_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2tpv3_set_lookup_key()
{
  static const char name[] = "l2tpv3_set_lookup_key";
  static const char name_with_crc[] = "l2tpv3_set_lookup_key_d7736d45";
  static vapi_message_desc_t __vapi_metadata_l2tpv3_set_lookup_key = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2tpv3_set_lookup_key, payload),
    sizeof(vapi_msg_l2tpv3_set_lookup_key),
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_lookup_key_hton,
    (generic_swap_fn_t)vapi_msg_l2tpv3_set_lookup_key_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2tpv3_set_lookup_key = vapi_register_msg(&__vapi_metadata_l2tpv3_set_lookup_key);
  VAPI_DBG("Assigned msg id %d to l2tpv3_set_lookup_key", vapi_msg_id_l2tpv3_set_lookup_key);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
