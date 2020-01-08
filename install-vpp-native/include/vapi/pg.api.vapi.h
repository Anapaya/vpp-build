#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_pg_pg_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_pg_pg_api_json

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

extern vapi_msg_id_t vapi_msg_id_pg_enable_disable;
extern vapi_msg_id_t vapi_msg_id_pg_create_interface_reply;
extern vapi_msg_id_t vapi_msg_id_pg_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_pg_capture_reply;
extern vapi_msg_id_t vapi_msg_id_pg_create_interface;
extern vapi_msg_id_t vapi_msg_id_pg_capture;

#define DEFINE_VAPI_MSG_IDS_PG_API_JSON\
  vapi_msg_id_t vapi_msg_id_pg_enable_disable;\
  vapi_msg_id_t vapi_msg_id_pg_create_interface_reply;\
  vapi_msg_id_t vapi_msg_id_pg_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_pg_capture_reply;\
  vapi_msg_id_t vapi_msg_id_pg_create_interface;\
  vapi_msg_id_t vapi_msg_id_pg_capture;


#ifndef defined_vapi_msg_pg_enable_disable_reply
#define defined_vapi_msg_pg_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_pg_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_pg_enable_disable_reply payload;
} vapi_msg_pg_enable_disable_reply;

static inline void vapi_msg_pg_enable_disable_reply_payload_hton(vapi_payload_pg_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_pg_enable_disable_reply_payload_ntoh(vapi_payload_pg_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_pg_enable_disable_reply_hton(vapi_msg_pg_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_pg_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_pg_enable_disable_reply_ntoh(vapi_msg_pg_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_pg_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pg_enable_disable_reply_msg_size(vapi_msg_pg_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_pg_enable_disable_reply()
{
  static const char name[] = "pg_enable_disable_reply";
  static const char name_with_crc[] = "pg_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_pg_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_pg_enable_disable_reply, payload),
    sizeof(vapi_msg_pg_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_pg_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_pg_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pg_enable_disable_reply = vapi_register_msg(&__vapi_metadata_pg_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to pg_enable_disable_reply", vapi_msg_id_pg_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_pg_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_pg_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_pg_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_pg_enable_disable
#define defined_vapi_msg_pg_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_enabled;
  u32 stream_name_length;
  u8 stream_name[0]; 
} vapi_payload_pg_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_pg_enable_disable payload;
} vapi_msg_pg_enable_disable;

static inline void vapi_msg_pg_enable_disable_payload_hton(vapi_payload_pg_enable_disable *payload)
{
  payload->stream_name_length = htobe32(payload->stream_name_length);
}

static inline void vapi_msg_pg_enable_disable_payload_ntoh(vapi_payload_pg_enable_disable *payload)
{
  payload->stream_name_length = be32toh(payload->stream_name_length);
}

static inline void vapi_msg_pg_enable_disable_hton(vapi_msg_pg_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_pg_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_pg_enable_disable_ntoh(vapi_msg_pg_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_pg_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pg_enable_disable_msg_size(vapi_msg_pg_enable_disable *msg)
{
  return sizeof(*msg)+ msg->payload.stream_name_length * sizeof(msg->payload.stream_name[0]);
}

static inline vapi_msg_pg_enable_disable* vapi_alloc_pg_enable_disable(struct vapi_ctx_s *ctx, size_t _stream_name_array_size)
{
  vapi_msg_pg_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_pg_enable_disable) + sizeof(msg->payload.stream_name[0]) * _stream_name_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_pg_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_pg_enable_disable);
  msg->payload.stream_name_length = _stream_name_array_size;

  return msg;
}

static inline vapi_error_e vapi_pg_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_pg_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_pg_enable_disable_reply *reply),
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
  vapi_msg_pg_enable_disable_hton(msg);
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
    vapi_msg_pg_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_pg_enable_disable()
{
  static const char name[] = "pg_enable_disable";
  static const char name_with_crc[] = "pg_enable_disable_0cb71d10";
  static vapi_message_desc_t __vapi_metadata_pg_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_pg_enable_disable, payload),
    sizeof(vapi_msg_pg_enable_disable),
    (generic_swap_fn_t)vapi_msg_pg_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_pg_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pg_enable_disable = vapi_register_msg(&__vapi_metadata_pg_enable_disable);
  VAPI_DBG("Assigned msg id %d to pg_enable_disable", vapi_msg_id_pg_enable_disable);
}
#endif

#ifndef defined_vapi_msg_pg_create_interface_reply
#define defined_vapi_msg_pg_create_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_pg_create_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_pg_create_interface_reply payload;
} vapi_msg_pg_create_interface_reply;

static inline void vapi_msg_pg_create_interface_reply_payload_hton(vapi_payload_pg_create_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_pg_create_interface_reply_payload_ntoh(vapi_payload_pg_create_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_pg_create_interface_reply_hton(vapi_msg_pg_create_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_create_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_pg_create_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_pg_create_interface_reply_ntoh(vapi_msg_pg_create_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_create_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_pg_create_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pg_create_interface_reply_msg_size(vapi_msg_pg_create_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_pg_create_interface_reply()
{
  static const char name[] = "pg_create_interface_reply";
  static const char name_with_crc[] = "pg_create_interface_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_pg_create_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_pg_create_interface_reply, payload),
    sizeof(vapi_msg_pg_create_interface_reply),
    (generic_swap_fn_t)vapi_msg_pg_create_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_pg_create_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pg_create_interface_reply = vapi_register_msg(&__vapi_metadata_pg_create_interface_reply);
  VAPI_DBG("Assigned msg id %d to pg_create_interface_reply", vapi_msg_id_pg_create_interface_reply);
}

static inline void vapi_set_vapi_msg_pg_create_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_pg_create_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_pg_create_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_pg_capture_reply
#define defined_vapi_msg_pg_capture_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_pg_capture_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_pg_capture_reply payload;
} vapi_msg_pg_capture_reply;

static inline void vapi_msg_pg_capture_reply_payload_hton(vapi_payload_pg_capture_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_pg_capture_reply_payload_ntoh(vapi_payload_pg_capture_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_pg_capture_reply_hton(vapi_msg_pg_capture_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_capture_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_pg_capture_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_pg_capture_reply_ntoh(vapi_msg_pg_capture_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_capture_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_pg_capture_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pg_capture_reply_msg_size(vapi_msg_pg_capture_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_pg_capture_reply()
{
  static const char name[] = "pg_capture_reply";
  static const char name_with_crc[] = "pg_capture_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_pg_capture_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_pg_capture_reply, payload),
    sizeof(vapi_msg_pg_capture_reply),
    (generic_swap_fn_t)vapi_msg_pg_capture_reply_hton,
    (generic_swap_fn_t)vapi_msg_pg_capture_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pg_capture_reply = vapi_register_msg(&__vapi_metadata_pg_capture_reply);
  VAPI_DBG("Assigned msg id %d to pg_capture_reply", vapi_msg_id_pg_capture_reply);
}

static inline void vapi_set_vapi_msg_pg_capture_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_pg_capture_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_pg_capture_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_pg_create_interface
#define defined_vapi_msg_pg_create_interface
typedef struct __attribute__ ((__packed__)) {
  u32 interface_id;
  u8 gso_enabled;
  u32 gso_size; 
} vapi_payload_pg_create_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_pg_create_interface payload;
} vapi_msg_pg_create_interface;

static inline void vapi_msg_pg_create_interface_payload_hton(vapi_payload_pg_create_interface *payload)
{
  payload->interface_id = htobe32(payload->interface_id);
  payload->gso_size = htobe32(payload->gso_size);
}

static inline void vapi_msg_pg_create_interface_payload_ntoh(vapi_payload_pg_create_interface *payload)
{
  payload->interface_id = be32toh(payload->interface_id);
  payload->gso_size = be32toh(payload->gso_size);
}

static inline void vapi_msg_pg_create_interface_hton(vapi_msg_pg_create_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_create_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_pg_create_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_pg_create_interface_ntoh(vapi_msg_pg_create_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_create_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_pg_create_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pg_create_interface_msg_size(vapi_msg_pg_create_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_pg_create_interface* vapi_alloc_pg_create_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_pg_create_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_pg_create_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_pg_create_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_pg_create_interface);

  return msg;
}

static inline vapi_error_e vapi_pg_create_interface(struct vapi_ctx_s *ctx,
  vapi_msg_pg_create_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_pg_create_interface_reply *reply),
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
  vapi_msg_pg_create_interface_hton(msg);
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
    vapi_msg_pg_create_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_pg_create_interface()
{
  static const char name[] = "pg_create_interface";
  static const char name_with_crc[] = "pg_create_interface_b1ecff05";
  static vapi_message_desc_t __vapi_metadata_pg_create_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_pg_create_interface, payload),
    sizeof(vapi_msg_pg_create_interface),
    (generic_swap_fn_t)vapi_msg_pg_create_interface_hton,
    (generic_swap_fn_t)vapi_msg_pg_create_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pg_create_interface = vapi_register_msg(&__vapi_metadata_pg_create_interface);
  VAPI_DBG("Assigned msg id %d to pg_create_interface", vapi_msg_id_pg_create_interface);
}
#endif

#ifndef defined_vapi_msg_pg_capture
#define defined_vapi_msg_pg_capture
typedef struct __attribute__ ((__packed__)) {
  u32 interface_id;
  u8 is_enabled;
  u32 count;
  u32 pcap_name_length;
  u8 pcap_file_name[0]; 
} vapi_payload_pg_capture;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_pg_capture payload;
} vapi_msg_pg_capture;

static inline void vapi_msg_pg_capture_payload_hton(vapi_payload_pg_capture *payload)
{
  payload->interface_id = htobe32(payload->interface_id);
  payload->count = htobe32(payload->count);
  payload->pcap_name_length = htobe32(payload->pcap_name_length);
}

static inline void vapi_msg_pg_capture_payload_ntoh(vapi_payload_pg_capture *payload)
{
  payload->interface_id = be32toh(payload->interface_id);
  payload->count = be32toh(payload->count);
  payload->pcap_name_length = be32toh(payload->pcap_name_length);
}

static inline void vapi_msg_pg_capture_hton(vapi_msg_pg_capture *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_capture'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_pg_capture_payload_hton(&msg->payload);
}

static inline void vapi_msg_pg_capture_ntoh(vapi_msg_pg_capture *msg)
{
  VAPI_DBG("Swapping `vapi_msg_pg_capture'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_pg_capture_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_pg_capture_msg_size(vapi_msg_pg_capture *msg)
{
  return sizeof(*msg)+ msg->payload.pcap_name_length * sizeof(msg->payload.pcap_file_name[0]);
}

static inline vapi_msg_pg_capture* vapi_alloc_pg_capture(struct vapi_ctx_s *ctx, size_t _pcap_file_name_array_size)
{
  vapi_msg_pg_capture *msg = NULL;
  const size_t size = sizeof(vapi_msg_pg_capture) + sizeof(msg->payload.pcap_file_name[0]) * _pcap_file_name_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_pg_capture*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_pg_capture);
  msg->payload.pcap_name_length = _pcap_file_name_array_size;

  return msg;
}

static inline vapi_error_e vapi_pg_capture(struct vapi_ctx_s *ctx,
  vapi_msg_pg_capture *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_pg_capture_reply *reply),
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
  vapi_msg_pg_capture_hton(msg);
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
    vapi_msg_pg_capture_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_pg_capture()
{
  static const char name[] = "pg_capture";
  static const char name_with_crc[] = "pg_capture_453da78d";
  static vapi_message_desc_t __vapi_metadata_pg_capture = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_pg_capture, payload),
    sizeof(vapi_msg_pg_capture),
    (generic_swap_fn_t)vapi_msg_pg_capture_hton,
    (generic_swap_fn_t)vapi_msg_pg_capture_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_pg_capture = vapi_register_msg(&__vapi_metadata_pg_capture);
  VAPI_DBG("Assigned msg id %d to pg_capture", vapi_msg_id_pg_capture);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
