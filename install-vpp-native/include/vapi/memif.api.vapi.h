#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_memif_memif_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_memif_memif_api_json

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

extern vapi_msg_id_t vapi_msg_id_memif_socket_filename_add_del;
extern vapi_msg_id_t vapi_msg_id_memif_socket_filename_dump;
extern vapi_msg_id_t vapi_msg_id_memif_create_reply;
extern vapi_msg_id_t vapi_msg_id_memif_dump;
extern vapi_msg_id_t vapi_msg_id_memif_details;
extern vapi_msg_id_t vapi_msg_id_memif_create;
extern vapi_msg_id_t vapi_msg_id_memif_delete_reply;
extern vapi_msg_id_t vapi_msg_id_memif_socket_filename_details;
extern vapi_msg_id_t vapi_msg_id_memif_delete;
extern vapi_msg_id_t vapi_msg_id_memif_socket_filename_add_del_reply;

#define DEFINE_VAPI_MSG_IDS_MEMIF_API_JSON\
  vapi_msg_id_t vapi_msg_id_memif_socket_filename_add_del;\
  vapi_msg_id_t vapi_msg_id_memif_socket_filename_dump;\
  vapi_msg_id_t vapi_msg_id_memif_create_reply;\
  vapi_msg_id_t vapi_msg_id_memif_dump;\
  vapi_msg_id_t vapi_msg_id_memif_details;\
  vapi_msg_id_t vapi_msg_id_memif_create;\
  vapi_msg_id_t vapi_msg_id_memif_delete_reply;\
  vapi_msg_id_t vapi_msg_id_memif_socket_filename_details;\
  vapi_msg_id_t vapi_msg_id_memif_delete;\
  vapi_msg_id_t vapi_msg_id_memif_socket_filename_add_del_reply;


#ifndef defined_vapi_msg_memif_socket_filename_add_del_reply
#define defined_vapi_msg_memif_socket_filename_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_memif_socket_filename_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_memif_socket_filename_add_del_reply payload;
} vapi_msg_memif_socket_filename_add_del_reply;

static inline void vapi_msg_memif_socket_filename_add_del_reply_payload_hton(vapi_payload_memif_socket_filename_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_memif_socket_filename_add_del_reply_payload_ntoh(vapi_payload_memif_socket_filename_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_memif_socket_filename_add_del_reply_hton(vapi_msg_memif_socket_filename_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_memif_socket_filename_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_socket_filename_add_del_reply_ntoh(vapi_msg_memif_socket_filename_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_memif_socket_filename_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_socket_filename_add_del_reply_msg_size(vapi_msg_memif_socket_filename_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_memif_socket_filename_add_del_reply()
{
  static const char name[] = "memif_socket_filename_add_del_reply";
  static const char name_with_crc[] = "memif_socket_filename_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_memif_socket_filename_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_memif_socket_filename_add_del_reply, payload),
    sizeof(vapi_msg_memif_socket_filename_add_del_reply),
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_socket_filename_add_del_reply = vapi_register_msg(&__vapi_metadata_memif_socket_filename_add_del_reply);
  VAPI_DBG("Assigned msg id %d to memif_socket_filename_add_del_reply", vapi_msg_id_memif_socket_filename_add_del_reply);
}

static inline void vapi_set_vapi_msg_memif_socket_filename_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_memif_socket_filename_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_memif_socket_filename_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_memif_socket_filename_add_del
#define defined_vapi_msg_memif_socket_filename_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u32 socket_id;
  u8 socket_filename[128]; 
} vapi_payload_memif_socket_filename_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_memif_socket_filename_add_del payload;
} vapi_msg_memif_socket_filename_add_del;

static inline void vapi_msg_memif_socket_filename_add_del_payload_hton(vapi_payload_memif_socket_filename_add_del *payload)
{
  payload->socket_id = htobe32(payload->socket_id);
}

static inline void vapi_msg_memif_socket_filename_add_del_payload_ntoh(vapi_payload_memif_socket_filename_add_del *payload)
{
  payload->socket_id = be32toh(payload->socket_id);
}

static inline void vapi_msg_memif_socket_filename_add_del_hton(vapi_msg_memif_socket_filename_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_memif_socket_filename_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_socket_filename_add_del_ntoh(vapi_msg_memif_socket_filename_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_memif_socket_filename_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_socket_filename_add_del_msg_size(vapi_msg_memif_socket_filename_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_memif_socket_filename_add_del* vapi_alloc_memif_socket_filename_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_memif_socket_filename_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_memif_socket_filename_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_memif_socket_filename_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_memif_socket_filename_add_del);

  return msg;
}

static inline vapi_error_e vapi_memif_socket_filename_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_memif_socket_filename_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_memif_socket_filename_add_del_reply *reply),
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
  vapi_msg_memif_socket_filename_add_del_hton(msg);
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
    vapi_msg_memif_socket_filename_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_memif_socket_filename_add_del()
{
  static const char name[] = "memif_socket_filename_add_del";
  static const char name_with_crc[] = "memif_socket_filename_add_del_30e3929d";
  static vapi_message_desc_t __vapi_metadata_memif_socket_filename_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_memif_socket_filename_add_del, payload),
    sizeof(vapi_msg_memif_socket_filename_add_del),
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_add_del_hton,
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_socket_filename_add_del = vapi_register_msg(&__vapi_metadata_memif_socket_filename_add_del);
  VAPI_DBG("Assigned msg id %d to memif_socket_filename_add_del", vapi_msg_id_memif_socket_filename_add_del);
}
#endif

#ifndef defined_vapi_msg_memif_socket_filename_details
#define defined_vapi_msg_memif_socket_filename_details
typedef struct __attribute__ ((__packed__)) {
  u32 socket_id;
  u8 socket_filename[128]; 
} vapi_payload_memif_socket_filename_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_memif_socket_filename_details payload;
} vapi_msg_memif_socket_filename_details;

static inline void vapi_msg_memif_socket_filename_details_payload_hton(vapi_payload_memif_socket_filename_details *payload)
{
  payload->socket_id = htobe32(payload->socket_id);
}

static inline void vapi_msg_memif_socket_filename_details_payload_ntoh(vapi_payload_memif_socket_filename_details *payload)
{
  payload->socket_id = be32toh(payload->socket_id);
}

static inline void vapi_msg_memif_socket_filename_details_hton(vapi_msg_memif_socket_filename_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_memif_socket_filename_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_socket_filename_details_ntoh(vapi_msg_memif_socket_filename_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_memif_socket_filename_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_socket_filename_details_msg_size(vapi_msg_memif_socket_filename_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_memif_socket_filename_details()
{
  static const char name[] = "memif_socket_filename_details";
  static const char name_with_crc[] = "memif_socket_filename_details_e347e32f";
  static vapi_message_desc_t __vapi_metadata_memif_socket_filename_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_memif_socket_filename_details, payload),
    sizeof(vapi_msg_memif_socket_filename_details),
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_details_hton,
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_socket_filename_details = vapi_register_msg(&__vapi_metadata_memif_socket_filename_details);
  VAPI_DBG("Assigned msg id %d to memif_socket_filename_details", vapi_msg_id_memif_socket_filename_details);
}

static inline void vapi_set_vapi_msg_memif_socket_filename_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_memif_socket_filename_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_memif_socket_filename_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_memif_socket_filename_dump
#define defined_vapi_msg_memif_socket_filename_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_memif_socket_filename_dump;

static inline void vapi_msg_memif_socket_filename_dump_hton(vapi_msg_memif_socket_filename_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_memif_socket_filename_dump_ntoh(vapi_msg_memif_socket_filename_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_socket_filename_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_memif_socket_filename_dump_msg_size(vapi_msg_memif_socket_filename_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_memif_socket_filename_dump* vapi_alloc_memif_socket_filename_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_memif_socket_filename_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_memif_socket_filename_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_memif_socket_filename_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_memif_socket_filename_dump);

  return msg;
}

static inline vapi_error_e vapi_memif_socket_filename_dump(struct vapi_ctx_s *ctx,
  vapi_msg_memif_socket_filename_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_memif_socket_filename_details *reply),
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
  vapi_msg_memif_socket_filename_dump_hton(msg);
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
    vapi_msg_memif_socket_filename_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_memif_socket_filename_dump()
{
  static const char name[] = "memif_socket_filename_dump";
  static const char name_with_crc[] = "memif_socket_filename_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_memif_socket_filename_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_memif_socket_filename_dump),
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_dump_hton,
    (generic_swap_fn_t)vapi_msg_memif_socket_filename_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_socket_filename_dump = vapi_register_msg(&__vapi_metadata_memif_socket_filename_dump);
  VAPI_DBG("Assigned msg id %d to memif_socket_filename_dump", vapi_msg_id_memif_socket_filename_dump);
}
#endif

#ifndef defined_vapi_msg_memif_create_reply
#define defined_vapi_msg_memif_create_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_memif_create_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_memif_create_reply payload;
} vapi_msg_memif_create_reply;

static inline void vapi_msg_memif_create_reply_payload_hton(vapi_payload_memif_create_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_memif_create_reply_payload_ntoh(vapi_payload_memif_create_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_memif_create_reply_hton(vapi_msg_memif_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_create_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_memif_create_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_create_reply_ntoh(vapi_msg_memif_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_create_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_memif_create_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_create_reply_msg_size(vapi_msg_memif_create_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_memif_create_reply()
{
  static const char name[] = "memif_create_reply";
  static const char name_with_crc[] = "memif_create_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_memif_create_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_memif_create_reply, payload),
    sizeof(vapi_msg_memif_create_reply),
    (generic_swap_fn_t)vapi_msg_memif_create_reply_hton,
    (generic_swap_fn_t)vapi_msg_memif_create_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_create_reply = vapi_register_msg(&__vapi_metadata_memif_create_reply);
  VAPI_DBG("Assigned msg id %d to memif_create_reply", vapi_msg_id_memif_create_reply);
}

static inline void vapi_set_vapi_msg_memif_create_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_memif_create_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_memif_create_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_memif_details
#define defined_vapi_msg_memif_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 if_name[64];
  u8 hw_addr[6];
  u32 id;
  u8 role;
  u8 mode;
  u32 socket_id;
  u32 ring_size;
  u16 buffer_size;
  u8 admin_up_down;
  u8 link_up_down; 
} vapi_payload_memif_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_memif_details payload;
} vapi_msg_memif_details;

static inline void vapi_msg_memif_details_payload_hton(vapi_payload_memif_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->id = htobe32(payload->id);
  payload->socket_id = htobe32(payload->socket_id);
  payload->ring_size = htobe32(payload->ring_size);
  payload->buffer_size = htobe16(payload->buffer_size);
}

static inline void vapi_msg_memif_details_payload_ntoh(vapi_payload_memif_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->id = be32toh(payload->id);
  payload->socket_id = be32toh(payload->socket_id);
  payload->ring_size = be32toh(payload->ring_size);
  payload->buffer_size = be16toh(payload->buffer_size);
}

static inline void vapi_msg_memif_details_hton(vapi_msg_memif_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_memif_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_details_ntoh(vapi_msg_memif_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_memif_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_details_msg_size(vapi_msg_memif_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_memif_details()
{
  static const char name[] = "memif_details";
  static const char name_with_crc[] = "memif_details_4f5a3397";
  static vapi_message_desc_t __vapi_metadata_memif_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_memif_details, payload),
    sizeof(vapi_msg_memif_details),
    (generic_swap_fn_t)vapi_msg_memif_details_hton,
    (generic_swap_fn_t)vapi_msg_memif_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_details = vapi_register_msg(&__vapi_metadata_memif_details);
  VAPI_DBG("Assigned msg id %d to memif_details", vapi_msg_id_memif_details);
}

static inline void vapi_set_vapi_msg_memif_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_memif_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_memif_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_memif_dump
#define defined_vapi_msg_memif_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_memif_dump;

static inline void vapi_msg_memif_dump_hton(vapi_msg_memif_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_memif_dump_ntoh(vapi_msg_memif_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_memif_dump_msg_size(vapi_msg_memif_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_memif_dump* vapi_alloc_memif_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_memif_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_memif_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_memif_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_memif_dump);

  return msg;
}

static inline vapi_error_e vapi_memif_dump(struct vapi_ctx_s *ctx,
  vapi_msg_memif_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_memif_details *reply),
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
  vapi_msg_memif_dump_hton(msg);
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
    vapi_msg_memif_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_memif_dump()
{
  static const char name[] = "memif_dump";
  static const char name_with_crc[] = "memif_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_memif_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_memif_dump),
    (generic_swap_fn_t)vapi_msg_memif_dump_hton,
    (generic_swap_fn_t)vapi_msg_memif_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_dump = vapi_register_msg(&__vapi_metadata_memif_dump);
  VAPI_DBG("Assigned msg id %d to memif_dump", vapi_msg_id_memif_dump);
}
#endif

#ifndef defined_vapi_msg_memif_create
#define defined_vapi_msg_memif_create
typedef struct __attribute__ ((__packed__)) {
  u8 role;
  u8 mode;
  u8 rx_queues;
  u8 tx_queues;
  u32 id;
  u32 socket_id;
  u8 secret[24];
  u32 ring_size;
  u16 buffer_size;
  u8 hw_addr[6]; 
} vapi_payload_memif_create;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_memif_create payload;
} vapi_msg_memif_create;

static inline void vapi_msg_memif_create_payload_hton(vapi_payload_memif_create *payload)
{
  payload->id = htobe32(payload->id);
  payload->socket_id = htobe32(payload->socket_id);
  payload->ring_size = htobe32(payload->ring_size);
  payload->buffer_size = htobe16(payload->buffer_size);
}

static inline void vapi_msg_memif_create_payload_ntoh(vapi_payload_memif_create *payload)
{
  payload->id = be32toh(payload->id);
  payload->socket_id = be32toh(payload->socket_id);
  payload->ring_size = be32toh(payload->ring_size);
  payload->buffer_size = be16toh(payload->buffer_size);
}

static inline void vapi_msg_memif_create_hton(vapi_msg_memif_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_create'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_memif_create_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_create_ntoh(vapi_msg_memif_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_create'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_memif_create_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_create_msg_size(vapi_msg_memif_create *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_memif_create* vapi_alloc_memif_create(struct vapi_ctx_s *ctx)
{
  vapi_msg_memif_create *msg = NULL;
  const size_t size = sizeof(vapi_msg_memif_create);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_memif_create*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_memif_create);

  return msg;
}

static inline vapi_error_e vapi_memif_create(struct vapi_ctx_s *ctx,
  vapi_msg_memif_create *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_memif_create_reply *reply),
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
  vapi_msg_memif_create_hton(msg);
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
    vapi_msg_memif_create_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_memif_create()
{
  static const char name[] = "memif_create";
  static const char name_with_crc[] = "memif_create_6597cdb2";
  static vapi_message_desc_t __vapi_metadata_memif_create = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_memif_create, payload),
    sizeof(vapi_msg_memif_create),
    (generic_swap_fn_t)vapi_msg_memif_create_hton,
    (generic_swap_fn_t)vapi_msg_memif_create_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_create = vapi_register_msg(&__vapi_metadata_memif_create);
  VAPI_DBG("Assigned msg id %d to memif_create", vapi_msg_id_memif_create);
}
#endif

#ifndef defined_vapi_msg_memif_delete_reply
#define defined_vapi_msg_memif_delete_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_memif_delete_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_memif_delete_reply payload;
} vapi_msg_memif_delete_reply;

static inline void vapi_msg_memif_delete_reply_payload_hton(vapi_payload_memif_delete_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_memif_delete_reply_payload_ntoh(vapi_payload_memif_delete_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_memif_delete_reply_hton(vapi_msg_memif_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_delete_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_memif_delete_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_delete_reply_ntoh(vapi_msg_memif_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_delete_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_memif_delete_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_delete_reply_msg_size(vapi_msg_memif_delete_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_memif_delete_reply()
{
  static const char name[] = "memif_delete_reply";
  static const char name_with_crc[] = "memif_delete_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_memif_delete_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_memif_delete_reply, payload),
    sizeof(vapi_msg_memif_delete_reply),
    (generic_swap_fn_t)vapi_msg_memif_delete_reply_hton,
    (generic_swap_fn_t)vapi_msg_memif_delete_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_delete_reply = vapi_register_msg(&__vapi_metadata_memif_delete_reply);
  VAPI_DBG("Assigned msg id %d to memif_delete_reply", vapi_msg_id_memif_delete_reply);
}

static inline void vapi_set_vapi_msg_memif_delete_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_memif_delete_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_memif_delete_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_memif_delete
#define defined_vapi_msg_memif_delete
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_memif_delete;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_memif_delete payload;
} vapi_msg_memif_delete;

static inline void vapi_msg_memif_delete_payload_hton(vapi_payload_memif_delete *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_memif_delete_payload_ntoh(vapi_payload_memif_delete *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_memif_delete_hton(vapi_msg_memif_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_delete'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_memif_delete_payload_hton(&msg->payload);
}

static inline void vapi_msg_memif_delete_ntoh(vapi_msg_memif_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_memif_delete'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_memif_delete_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_memif_delete_msg_size(vapi_msg_memif_delete *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_memif_delete* vapi_alloc_memif_delete(struct vapi_ctx_s *ctx)
{
  vapi_msg_memif_delete *msg = NULL;
  const size_t size = sizeof(vapi_msg_memif_delete);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_memif_delete*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_memif_delete);

  return msg;
}

static inline vapi_error_e vapi_memif_delete(struct vapi_ctx_s *ctx,
  vapi_msg_memif_delete *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_memif_delete_reply *reply),
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
  vapi_msg_memif_delete_hton(msg);
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
    vapi_msg_memif_delete_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_memif_delete()
{
  static const char name[] = "memif_delete";
  static const char name_with_crc[] = "memif_delete_529cb13f";
  static vapi_message_desc_t __vapi_metadata_memif_delete = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_memif_delete, payload),
    sizeof(vapi_msg_memif_delete),
    (generic_swap_fn_t)vapi_msg_memif_delete_hton,
    (generic_swap_fn_t)vapi_msg_memif_delete_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_memif_delete = vapi_register_msg(&__vapi_metadata_memif_delete);
  VAPI_DBG("Assigned msg id %d to memif_delete", vapi_msg_id_memif_delete);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
