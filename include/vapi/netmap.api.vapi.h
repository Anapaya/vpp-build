#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_netmap_netmap_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_netmap_netmap_api_json

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

extern vapi_msg_id_t vapi_msg_id_netmap_delete;
extern vapi_msg_id_t vapi_msg_id_netmap_create;
extern vapi_msg_id_t vapi_msg_id_netmap_create_reply;
extern vapi_msg_id_t vapi_msg_id_netmap_delete_reply;

#define DEFINE_VAPI_MSG_IDS_NETMAP_API_JSON\
  vapi_msg_id_t vapi_msg_id_netmap_delete;\
  vapi_msg_id_t vapi_msg_id_netmap_create;\
  vapi_msg_id_t vapi_msg_id_netmap_create_reply;\
  vapi_msg_id_t vapi_msg_id_netmap_delete_reply;


#ifndef defined_vapi_msg_netmap_delete_reply
#define defined_vapi_msg_netmap_delete_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_netmap_delete_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_netmap_delete_reply payload;
} vapi_msg_netmap_delete_reply;

static inline void vapi_msg_netmap_delete_reply_payload_hton(vapi_payload_netmap_delete_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_netmap_delete_reply_payload_ntoh(vapi_payload_netmap_delete_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_netmap_delete_reply_hton(vapi_msg_netmap_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_delete_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_netmap_delete_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_netmap_delete_reply_ntoh(vapi_msg_netmap_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_delete_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_netmap_delete_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_netmap_delete_reply_msg_size(vapi_msg_netmap_delete_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_netmap_delete_reply()
{
  static const char name[] = "netmap_delete_reply";
  static const char name_with_crc[] = "netmap_delete_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_netmap_delete_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_netmap_delete_reply, payload),
    sizeof(vapi_msg_netmap_delete_reply),
    (generic_swap_fn_t)vapi_msg_netmap_delete_reply_hton,
    (generic_swap_fn_t)vapi_msg_netmap_delete_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_netmap_delete_reply = vapi_register_msg(&__vapi_metadata_netmap_delete_reply);
  VAPI_DBG("Assigned msg id %d to netmap_delete_reply", vapi_msg_id_netmap_delete_reply);
}

static inline void vapi_set_vapi_msg_netmap_delete_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_netmap_delete_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_netmap_delete_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_netmap_delete
#define defined_vapi_msg_netmap_delete
typedef struct __attribute__ ((__packed__)) {
  u8 netmap_if_name[64]; 
} vapi_payload_netmap_delete;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_netmap_delete payload;
} vapi_msg_netmap_delete;

static inline void vapi_msg_netmap_delete_payload_hton(vapi_payload_netmap_delete *payload)
{

}

static inline void vapi_msg_netmap_delete_payload_ntoh(vapi_payload_netmap_delete *payload)
{

}

static inline void vapi_msg_netmap_delete_hton(vapi_msg_netmap_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_delete'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_netmap_delete_payload_hton(&msg->payload);
}

static inline void vapi_msg_netmap_delete_ntoh(vapi_msg_netmap_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_delete'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_netmap_delete_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_netmap_delete_msg_size(vapi_msg_netmap_delete *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_netmap_delete* vapi_alloc_netmap_delete(struct vapi_ctx_s *ctx)
{
  vapi_msg_netmap_delete *msg = NULL;
  const size_t size = sizeof(vapi_msg_netmap_delete);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_netmap_delete*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_netmap_delete);

  return msg;
}

static inline vapi_error_e vapi_netmap_delete(struct vapi_ctx_s *ctx,
  vapi_msg_netmap_delete *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_netmap_delete_reply *reply),
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
  vapi_msg_netmap_delete_hton(msg);
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
    vapi_msg_netmap_delete_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_netmap_delete()
{
  static const char name[] = "netmap_delete";
  static const char name_with_crc[] = "netmap_delete_a8b6c201";
  static vapi_message_desc_t __vapi_metadata_netmap_delete = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_netmap_delete, payload),
    sizeof(vapi_msg_netmap_delete),
    (generic_swap_fn_t)vapi_msg_netmap_delete_hton,
    (generic_swap_fn_t)vapi_msg_netmap_delete_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_netmap_delete = vapi_register_msg(&__vapi_metadata_netmap_delete);
  VAPI_DBG("Assigned msg id %d to netmap_delete", vapi_msg_id_netmap_delete);
}
#endif

#ifndef defined_vapi_msg_netmap_create_reply
#define defined_vapi_msg_netmap_create_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_netmap_create_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_netmap_create_reply payload;
} vapi_msg_netmap_create_reply;

static inline void vapi_msg_netmap_create_reply_payload_hton(vapi_payload_netmap_create_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_netmap_create_reply_payload_ntoh(vapi_payload_netmap_create_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_netmap_create_reply_hton(vapi_msg_netmap_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_create_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_netmap_create_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_netmap_create_reply_ntoh(vapi_msg_netmap_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_create_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_netmap_create_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_netmap_create_reply_msg_size(vapi_msg_netmap_create_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_netmap_create_reply()
{
  static const char name[] = "netmap_create_reply";
  static const char name_with_crc[] = "netmap_create_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_netmap_create_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_netmap_create_reply, payload),
    sizeof(vapi_msg_netmap_create_reply),
    (generic_swap_fn_t)vapi_msg_netmap_create_reply_hton,
    (generic_swap_fn_t)vapi_msg_netmap_create_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_netmap_create_reply = vapi_register_msg(&__vapi_metadata_netmap_create_reply);
  VAPI_DBG("Assigned msg id %d to netmap_create_reply", vapi_msg_id_netmap_create_reply);
}

static inline void vapi_set_vapi_msg_netmap_create_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_netmap_create_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_netmap_create_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_netmap_create
#define defined_vapi_msg_netmap_create
typedef struct __attribute__ ((__packed__)) {
  u8 netmap_if_name[64];
  u8 hw_addr[6];
  u8 use_random_hw_addr;
  u8 is_pipe;
  u8 is_master; 
} vapi_payload_netmap_create;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_netmap_create payload;
} vapi_msg_netmap_create;

static inline void vapi_msg_netmap_create_payload_hton(vapi_payload_netmap_create *payload)
{

}

static inline void vapi_msg_netmap_create_payload_ntoh(vapi_payload_netmap_create *payload)
{

}

static inline void vapi_msg_netmap_create_hton(vapi_msg_netmap_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_create'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_netmap_create_payload_hton(&msg->payload);
}

static inline void vapi_msg_netmap_create_ntoh(vapi_msg_netmap_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_netmap_create'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_netmap_create_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_netmap_create_msg_size(vapi_msg_netmap_create *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_netmap_create* vapi_alloc_netmap_create(struct vapi_ctx_s *ctx)
{
  vapi_msg_netmap_create *msg = NULL;
  const size_t size = sizeof(vapi_msg_netmap_create);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_netmap_create*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_netmap_create);

  return msg;
}

static inline vapi_error_e vapi_netmap_create(struct vapi_ctx_s *ctx,
  vapi_msg_netmap_create *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_netmap_create_reply *reply),
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
  vapi_msg_netmap_create_hton(msg);
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
    vapi_msg_netmap_create_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_netmap_create()
{
  static const char name[] = "netmap_create";
  static const char name_with_crc[] = "netmap_create_5299044e";
  static vapi_message_desc_t __vapi_metadata_netmap_create = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_netmap_create, payload),
    sizeof(vapi_msg_netmap_create),
    (generic_swap_fn_t)vapi_msg_netmap_create_hton,
    (generic_swap_fn_t)vapi_msg_netmap_create_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_netmap_create = vapi_register_msg(&__vapi_metadata_netmap_create);
  VAPI_DBG("Assigned msg id %d to netmap_create", vapi_msg_id_netmap_create);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
