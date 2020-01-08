#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_ioam_udp_ping_udp_ping_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_ioam_udp_ping_udp_ping_api_json

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

extern vapi_msg_id_t vapi_msg_id_udp_ping_export_reply;
extern vapi_msg_id_t vapi_msg_id_udp_ping_export;
extern vapi_msg_id_t vapi_msg_id_udp_ping_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_udp_ping_add_del;

#define DEFINE_VAPI_MSG_IDS_UDP_PING_API_JSON\
  vapi_msg_id_t vapi_msg_id_udp_ping_export_reply;\
  vapi_msg_id_t vapi_msg_id_udp_ping_export;\
  vapi_msg_id_t vapi_msg_id_udp_ping_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_udp_ping_add_del;


#ifndef defined_vapi_msg_udp_ping_export_reply
#define defined_vapi_msg_udp_ping_export_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_udp_ping_export_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_udp_ping_export_reply payload;
} vapi_msg_udp_ping_export_reply;

static inline void vapi_msg_udp_ping_export_reply_payload_hton(vapi_payload_udp_ping_export_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_udp_ping_export_reply_payload_ntoh(vapi_payload_udp_ping_export_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_udp_ping_export_reply_hton(vapi_msg_udp_ping_export_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_export_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_udp_ping_export_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_udp_ping_export_reply_ntoh(vapi_msg_udp_ping_export_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_export_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_udp_ping_export_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_udp_ping_export_reply_msg_size(vapi_msg_udp_ping_export_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_udp_ping_export_reply()
{
  static const char name[] = "udp_ping_export_reply";
  static const char name_with_crc[] = "udp_ping_export_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_udp_ping_export_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_udp_ping_export_reply, payload),
    sizeof(vapi_msg_udp_ping_export_reply),
    (generic_swap_fn_t)vapi_msg_udp_ping_export_reply_hton,
    (generic_swap_fn_t)vapi_msg_udp_ping_export_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_udp_ping_export_reply = vapi_register_msg(&__vapi_metadata_udp_ping_export_reply);
  VAPI_DBG("Assigned msg id %d to udp_ping_export_reply", vapi_msg_id_udp_ping_export_reply);
}

static inline void vapi_set_vapi_msg_udp_ping_export_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_udp_ping_export_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_udp_ping_export_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_udp_ping_export
#define defined_vapi_msg_udp_ping_export
typedef struct __attribute__ ((__packed__)) {
  u32 enable; 
} vapi_payload_udp_ping_export;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_udp_ping_export payload;
} vapi_msg_udp_ping_export;

static inline void vapi_msg_udp_ping_export_payload_hton(vapi_payload_udp_ping_export *payload)
{
  payload->enable = htobe32(payload->enable);
}

static inline void vapi_msg_udp_ping_export_payload_ntoh(vapi_payload_udp_ping_export *payload)
{
  payload->enable = be32toh(payload->enable);
}

static inline void vapi_msg_udp_ping_export_hton(vapi_msg_udp_ping_export *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_export'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_udp_ping_export_payload_hton(&msg->payload);
}

static inline void vapi_msg_udp_ping_export_ntoh(vapi_msg_udp_ping_export *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_export'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_udp_ping_export_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_udp_ping_export_msg_size(vapi_msg_udp_ping_export *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_udp_ping_export* vapi_alloc_udp_ping_export(struct vapi_ctx_s *ctx)
{
  vapi_msg_udp_ping_export *msg = NULL;
  const size_t size = sizeof(vapi_msg_udp_ping_export);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_udp_ping_export*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_udp_ping_export);

  return msg;
}

static inline vapi_error_e vapi_udp_ping_export(struct vapi_ctx_s *ctx,
  vapi_msg_udp_ping_export *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_udp_ping_export_reply *reply),
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
  vapi_msg_udp_ping_export_hton(msg);
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
    vapi_msg_udp_ping_export_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_udp_ping_export()
{
  static const char name[] = "udp_ping_export";
  static const char name_with_crc[] = "udp_ping_export_b142b369";
  static vapi_message_desc_t __vapi_metadata_udp_ping_export = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_udp_ping_export, payload),
    sizeof(vapi_msg_udp_ping_export),
    (generic_swap_fn_t)vapi_msg_udp_ping_export_hton,
    (generic_swap_fn_t)vapi_msg_udp_ping_export_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_udp_ping_export = vapi_register_msg(&__vapi_metadata_udp_ping_export);
  VAPI_DBG("Assigned msg id %d to udp_ping_export", vapi_msg_id_udp_ping_export);
}
#endif

#ifndef defined_vapi_msg_udp_ping_add_del_reply
#define defined_vapi_msg_udp_ping_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_udp_ping_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_udp_ping_add_del_reply payload;
} vapi_msg_udp_ping_add_del_reply;

static inline void vapi_msg_udp_ping_add_del_reply_payload_hton(vapi_payload_udp_ping_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_udp_ping_add_del_reply_payload_ntoh(vapi_payload_udp_ping_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_udp_ping_add_del_reply_hton(vapi_msg_udp_ping_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_udp_ping_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_udp_ping_add_del_reply_ntoh(vapi_msg_udp_ping_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_udp_ping_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_udp_ping_add_del_reply_msg_size(vapi_msg_udp_ping_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_udp_ping_add_del_reply()
{
  static const char name[] = "udp_ping_add_del_reply";
  static const char name_with_crc[] = "udp_ping_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_udp_ping_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_udp_ping_add_del_reply, payload),
    sizeof(vapi_msg_udp_ping_add_del_reply),
    (generic_swap_fn_t)vapi_msg_udp_ping_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_udp_ping_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_udp_ping_add_del_reply = vapi_register_msg(&__vapi_metadata_udp_ping_add_del_reply);
  VAPI_DBG("Assigned msg id %d to udp_ping_add_del_reply", vapi_msg_id_udp_ping_add_del_reply);
}

static inline void vapi_set_vapi_msg_udp_ping_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_udp_ping_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_udp_ping_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_udp_ping_add_del
#define defined_vapi_msg_udp_ping_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 src_ip_address[16];
  u8 dst_ip_address[16];
  u16 start_src_port;
  u16 end_src_port;
  u16 start_dst_port;
  u16 end_dst_port;
  u16 interval;
  u8 is_ipv4;
  u8 dis;
  u8 fault_det;
  u8 reserve[3]; 
} vapi_payload_udp_ping_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_udp_ping_add_del payload;
} vapi_msg_udp_ping_add_del;

static inline void vapi_msg_udp_ping_add_del_payload_hton(vapi_payload_udp_ping_add_del *payload)
{
  payload->start_src_port = htobe16(payload->start_src_port);
  payload->end_src_port = htobe16(payload->end_src_port);
  payload->start_dst_port = htobe16(payload->start_dst_port);
  payload->end_dst_port = htobe16(payload->end_dst_port);
  payload->interval = htobe16(payload->interval);
}

static inline void vapi_msg_udp_ping_add_del_payload_ntoh(vapi_payload_udp_ping_add_del *payload)
{
  payload->start_src_port = be16toh(payload->start_src_port);
  payload->end_src_port = be16toh(payload->end_src_port);
  payload->start_dst_port = be16toh(payload->start_dst_port);
  payload->end_dst_port = be16toh(payload->end_dst_port);
  payload->interval = be16toh(payload->interval);
}

static inline void vapi_msg_udp_ping_add_del_hton(vapi_msg_udp_ping_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_udp_ping_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_udp_ping_add_del_ntoh(vapi_msg_udp_ping_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_udp_ping_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_udp_ping_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_udp_ping_add_del_msg_size(vapi_msg_udp_ping_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_udp_ping_add_del* vapi_alloc_udp_ping_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_udp_ping_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_udp_ping_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_udp_ping_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_udp_ping_add_del);

  return msg;
}

static inline vapi_error_e vapi_udp_ping_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_udp_ping_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_udp_ping_add_del_reply *reply),
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
  vapi_msg_udp_ping_add_del_hton(msg);
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
    vapi_msg_udp_ping_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_udp_ping_add_del()
{
  static const char name[] = "udp_ping_add_del";
  static const char name_with_crc[] = "udp_ping_add_del_559fcc01";
  static vapi_message_desc_t __vapi_metadata_udp_ping_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_udp_ping_add_del, payload),
    sizeof(vapi_msg_udp_ping_add_del),
    (generic_swap_fn_t)vapi_msg_udp_ping_add_del_hton,
    (generic_swap_fn_t)vapi_msg_udp_ping_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_udp_ping_add_del = vapi_register_msg(&__vapi_metadata_udp_ping_add_del);
  VAPI_DBG("Assigned msg id %d to udp_ping_add_del", vapi_msg_id_udp_ping_add_del);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
