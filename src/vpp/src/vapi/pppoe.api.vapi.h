#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_pppoe_pppoe_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_pppoe_pppoe_api_json

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

extern vapi_msg_id_t vapi_msg_id_pppoe_session_dump;
extern vapi_msg_id_t vapi_msg_id_pppoe_add_del_session;
extern vapi_msg_id_t vapi_msg_id_pppoe_add_del_session_reply;
extern vapi_msg_id_t vapi_msg_id_pppoe_session_details;

#define DEFINE_VAPI_MSG_IDS_PPPOE_API_JSON\
  vapi_msg_id_t vapi_msg_id_pppoe_session_dump;\
  vapi_msg_id_t vapi_msg_id_pppoe_add_del_session;\
  vapi_msg_id_t vapi_msg_id_pppoe_add_del_session_reply;\
  vapi_msg_id_t vapi_msg_id_pppoe_session_details;


#ifndef defined_vapi_msg_pppoe_session_details
#define defined_vapi_msg_pppoe_session_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_ipv6;
  u16 session_id;
  u8 client_ip[16];
  u32 encap_if_index;
  u32 decap_vrf_id;
  u8 local_mac[6];
  u8 client_mac[6]; 
} vapi_payload_pppoe_session_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_pppoe_session_details payload;
} vapi_msg_pppoe_session_details;

static inline void vapi_msg_pppoe_session_details_payload_hton(vapi_payload_pppoe_session_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->session_id = htobe16(payload->session_id);
  payload->encap_if_index = htobe32(payload->encap_if_index);
  payload->decap_vrf_id = htobe32(payload->decap_vrf_id);
}

static inline void vapi_msg_pppoe_session_details_payload_ntoh(vapi_payload_pppoe_session_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->session_id = be16toh(payload->session_id);
  payload->encap_if_index = be32toh(payload->encap_if_index);
  payload->decap_vrf_id = be32toh(payload->decap_vrf_id);
}

static inline void vapi_msg_pppoe_session_details_hton(vapi_msg_pppoe_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_session_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_pppoe_session_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_pppoe_session_details_ntoh(vapi_msg_pppoe_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_session_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_pppoe_session_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pppoe_session_details_msg_size(vapi_msg_pppoe_session_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_pppoe_session_details()
{
  static const char name[] = "pppoe_session_details";
  static const char name_with_crc[] = "pppoe_session_details_358fc7a8";
  static vapi_message_desc_t __vapi_metadata_pppoe_session_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_pppoe_session_details, payload),
    sizeof(vapi_msg_pppoe_session_details),
    (generic_swap_fn_t)vapi_msg_pppoe_session_details_hton,
    (generic_swap_fn_t)vapi_msg_pppoe_session_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pppoe_session_details = vapi_register_msg(&__vapi_metadata_pppoe_session_details);
  VAPI_DBG("Assigned msg id %d to pppoe_session_details", vapi_msg_id_pppoe_session_details);
}

static inline void vapi_set_vapi_msg_pppoe_session_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_pppoe_session_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_pppoe_session_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_pppoe_session_dump
#define defined_vapi_msg_pppoe_session_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_pppoe_session_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_pppoe_session_dump payload;
} vapi_msg_pppoe_session_dump;

static inline void vapi_msg_pppoe_session_dump_payload_hton(vapi_payload_pppoe_session_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_pppoe_session_dump_payload_ntoh(vapi_payload_pppoe_session_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_pppoe_session_dump_hton(vapi_msg_pppoe_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_session_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_pppoe_session_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_pppoe_session_dump_ntoh(vapi_msg_pppoe_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_session_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_pppoe_session_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pppoe_session_dump_msg_size(vapi_msg_pppoe_session_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_pppoe_session_dump* vapi_alloc_pppoe_session_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_pppoe_session_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_pppoe_session_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_pppoe_session_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_pppoe_session_dump);

  return msg;
}

static inline vapi_error_e vapi_pppoe_session_dump(struct vapi_ctx_s *ctx,
  vapi_msg_pppoe_session_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_pppoe_session_details *reply),
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
  vapi_msg_pppoe_session_dump_hton(msg);
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
    vapi_msg_pppoe_session_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_pppoe_session_dump()
{
  static const char name[] = "pppoe_session_dump";
  static const char name_with_crc[] = "pppoe_session_dump_529cb13f";
  static vapi_message_desc_t __vapi_metadata_pppoe_session_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_pppoe_session_dump, payload),
    sizeof(vapi_msg_pppoe_session_dump),
    (generic_swap_fn_t)vapi_msg_pppoe_session_dump_hton,
    (generic_swap_fn_t)vapi_msg_pppoe_session_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pppoe_session_dump = vapi_register_msg(&__vapi_metadata_pppoe_session_dump);
  VAPI_DBG("Assigned msg id %d to pppoe_session_dump", vapi_msg_id_pppoe_session_dump);
}
#endif

#ifndef defined_vapi_msg_pppoe_add_del_session_reply
#define defined_vapi_msg_pppoe_add_del_session_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_pppoe_add_del_session_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_pppoe_add_del_session_reply payload;
} vapi_msg_pppoe_add_del_session_reply;

static inline void vapi_msg_pppoe_add_del_session_reply_payload_hton(vapi_payload_pppoe_add_del_session_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_pppoe_add_del_session_reply_payload_ntoh(vapi_payload_pppoe_add_del_session_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_pppoe_add_del_session_reply_hton(vapi_msg_pppoe_add_del_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_add_del_session_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_pppoe_add_del_session_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_pppoe_add_del_session_reply_ntoh(vapi_msg_pppoe_add_del_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_add_del_session_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_pppoe_add_del_session_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pppoe_add_del_session_reply_msg_size(vapi_msg_pppoe_add_del_session_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_pppoe_add_del_session_reply()
{
  static const char name[] = "pppoe_add_del_session_reply";
  static const char name_with_crc[] = "pppoe_add_del_session_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_pppoe_add_del_session_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_pppoe_add_del_session_reply, payload),
    sizeof(vapi_msg_pppoe_add_del_session_reply),
    (generic_swap_fn_t)vapi_msg_pppoe_add_del_session_reply_hton,
    (generic_swap_fn_t)vapi_msg_pppoe_add_del_session_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pppoe_add_del_session_reply = vapi_register_msg(&__vapi_metadata_pppoe_add_del_session_reply);
  VAPI_DBG("Assigned msg id %d to pppoe_add_del_session_reply", vapi_msg_id_pppoe_add_del_session_reply);
}

static inline void vapi_set_vapi_msg_pppoe_add_del_session_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_pppoe_add_del_session_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_pppoe_add_del_session_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_pppoe_add_del_session
#define defined_vapi_msg_pppoe_add_del_session
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_ipv6;
  u16 session_id;
  u8 client_ip[16];
  u32 decap_vrf_id;
  u8 client_mac[6]; 
} vapi_payload_pppoe_add_del_session;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_pppoe_add_del_session payload;
} vapi_msg_pppoe_add_del_session;

static inline void vapi_msg_pppoe_add_del_session_payload_hton(vapi_payload_pppoe_add_del_session *payload)
{
  payload->session_id = htobe16(payload->session_id);
  payload->decap_vrf_id = htobe32(payload->decap_vrf_id);
}

static inline void vapi_msg_pppoe_add_del_session_payload_ntoh(vapi_payload_pppoe_add_del_session *payload)
{
  payload->session_id = be16toh(payload->session_id);
  payload->decap_vrf_id = be32toh(payload->decap_vrf_id);
}

static inline void vapi_msg_pppoe_add_del_session_hton(vapi_msg_pppoe_add_del_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_add_del_session'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_pppoe_add_del_session_payload_hton(&msg->payload);
}

static inline void vapi_msg_pppoe_add_del_session_ntoh(vapi_msg_pppoe_add_del_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pppoe_add_del_session'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_pppoe_add_del_session_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pppoe_add_del_session_msg_size(vapi_msg_pppoe_add_del_session *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_pppoe_add_del_session* vapi_alloc_pppoe_add_del_session(struct vapi_ctx_s *ctx)
{
  vapi_msg_pppoe_add_del_session *msg = NULL;
  const size_t size = sizeof(vapi_msg_pppoe_add_del_session);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_pppoe_add_del_session*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_pppoe_add_del_session);

  return msg;
}

static inline vapi_error_e vapi_pppoe_add_del_session(struct vapi_ctx_s *ctx,
  vapi_msg_pppoe_add_del_session *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_pppoe_add_del_session_reply *reply),
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
  vapi_msg_pppoe_add_del_session_hton(msg);
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
    vapi_msg_pppoe_add_del_session_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_pppoe_add_del_session()
{
  static const char name[] = "pppoe_add_del_session";
  static const char name_with_crc[] = "pppoe_add_del_session_766cbfeb";
  static vapi_message_desc_t __vapi_metadata_pppoe_add_del_session = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_pppoe_add_del_session, payload),
    sizeof(vapi_msg_pppoe_add_del_session),
    (generic_swap_fn_t)vapi_msg_pppoe_add_del_session_hton,
    (generic_swap_fn_t)vapi_msg_pppoe_add_del_session_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pppoe_add_del_session = vapi_register_msg(&__vapi_metadata_pppoe_add_del_session);
  VAPI_DBG("Assigned msg id %d to pppoe_add_del_session", vapi_msg_id_pppoe_add_del_session);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
