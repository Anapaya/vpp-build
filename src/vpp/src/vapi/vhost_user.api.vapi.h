#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_devices_virtio_vhost_user_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_devices_virtio_vhost_user_api_json

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

extern vapi_msg_id_t vapi_msg_id_sw_interface_vhost_user_details;
extern vapi_msg_id_t vapi_msg_id_create_vhost_user_if;
extern vapi_msg_id_t vapi_msg_id_modify_vhost_user_if;
extern vapi_msg_id_t vapi_msg_id_sw_interface_vhost_user_dump;
extern vapi_msg_id_t vapi_msg_id_create_vhost_user_if_reply;
extern vapi_msg_id_t vapi_msg_id_modify_vhost_user_if_reply;
extern vapi_msg_id_t vapi_msg_id_delete_vhost_user_if_reply;
extern vapi_msg_id_t vapi_msg_id_delete_vhost_user_if;

#define DEFINE_VAPI_MSG_IDS_VHOST_USER_API_JSON\
  vapi_msg_id_t vapi_msg_id_sw_interface_vhost_user_details;\
  vapi_msg_id_t vapi_msg_id_create_vhost_user_if;\
  vapi_msg_id_t vapi_msg_id_modify_vhost_user_if;\
  vapi_msg_id_t vapi_msg_id_sw_interface_vhost_user_dump;\
  vapi_msg_id_t vapi_msg_id_create_vhost_user_if_reply;\
  vapi_msg_id_t vapi_msg_id_modify_vhost_user_if_reply;\
  vapi_msg_id_t vapi_msg_id_delete_vhost_user_if_reply;\
  vapi_msg_id_t vapi_msg_id_delete_vhost_user_if;


#ifndef defined_vapi_msg_sw_interface_vhost_user_details
#define defined_vapi_msg_sw_interface_vhost_user_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 interface_name[64];
  u32 virtio_net_hdr_sz;
  u64 features;
  u8 is_server;
  u8 sock_filename[256];
  u32 num_regions;
  i32 sock_errno; 
} vapi_payload_sw_interface_vhost_user_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_vhost_user_details payload;
} vapi_msg_sw_interface_vhost_user_details;

static inline void vapi_msg_sw_interface_vhost_user_details_payload_hton(vapi_payload_sw_interface_vhost_user_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->virtio_net_hdr_sz = htobe32(payload->virtio_net_hdr_sz);
  payload->features = htobe64(payload->features);
  payload->num_regions = htobe32(payload->num_regions);
  payload->sock_errno = htobe32(payload->sock_errno);
}

static inline void vapi_msg_sw_interface_vhost_user_details_payload_ntoh(vapi_payload_sw_interface_vhost_user_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->virtio_net_hdr_sz = be32toh(payload->virtio_net_hdr_sz);
  payload->features = be64toh(payload->features);
  payload->num_regions = be32toh(payload->num_regions);
  payload->sock_errno = be32toh(payload->sock_errno);
}

static inline void vapi_msg_sw_interface_vhost_user_details_hton(vapi_msg_sw_interface_vhost_user_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_vhost_user_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_vhost_user_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_vhost_user_details_ntoh(vapi_msg_sw_interface_vhost_user_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_vhost_user_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_vhost_user_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_vhost_user_details_msg_size(vapi_msg_sw_interface_vhost_user_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_vhost_user_details()
{
  static const char name[] = "sw_interface_vhost_user_details";
  static const char name_with_crc[] = "sw_interface_vhost_user_details_91ff3307";
  static vapi_message_desc_t __vapi_metadata_sw_interface_vhost_user_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_vhost_user_details, payload),
    sizeof(vapi_msg_sw_interface_vhost_user_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_vhost_user_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_vhost_user_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_vhost_user_details = vapi_register_msg(&__vapi_metadata_sw_interface_vhost_user_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_vhost_user_details", vapi_msg_id_sw_interface_vhost_user_details);
}

static inline void vapi_set_vapi_msg_sw_interface_vhost_user_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_vhost_user_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_vhost_user_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_create_vhost_user_if_reply
#define defined_vapi_msg_create_vhost_user_if_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_create_vhost_user_if_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_create_vhost_user_if_reply payload;
} vapi_msg_create_vhost_user_if_reply;

static inline void vapi_msg_create_vhost_user_if_reply_payload_hton(vapi_payload_create_vhost_user_if_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_create_vhost_user_if_reply_payload_ntoh(vapi_payload_create_vhost_user_if_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_create_vhost_user_if_reply_hton(vapi_msg_create_vhost_user_if_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vhost_user_if_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_create_vhost_user_if_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_vhost_user_if_reply_ntoh(vapi_msg_create_vhost_user_if_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vhost_user_if_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_create_vhost_user_if_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_vhost_user_if_reply_msg_size(vapi_msg_create_vhost_user_if_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_create_vhost_user_if_reply()
{
  static const char name[] = "create_vhost_user_if_reply";
  static const char name_with_crc[] = "create_vhost_user_if_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_create_vhost_user_if_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_create_vhost_user_if_reply, payload),
    sizeof(vapi_msg_create_vhost_user_if_reply),
    (generic_swap_fn_t)vapi_msg_create_vhost_user_if_reply_hton,
    (generic_swap_fn_t)vapi_msg_create_vhost_user_if_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_vhost_user_if_reply = vapi_register_msg(&__vapi_metadata_create_vhost_user_if_reply);
  VAPI_DBG("Assigned msg id %d to create_vhost_user_if_reply", vapi_msg_id_create_vhost_user_if_reply);
}

static inline void vapi_set_vapi_msg_create_vhost_user_if_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_create_vhost_user_if_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_create_vhost_user_if_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_create_vhost_user_if
#define defined_vapi_msg_create_vhost_user_if
typedef struct __attribute__ ((__packed__)) {
  u8 is_server;
  u8 sock_filename[256];
  u8 renumber;
  u8 disable_mrg_rxbuf;
  u8 disable_indirect_desc;
  u8 enable_gso;
  u32 custom_dev_instance;
  u8 use_custom_mac;
  u8 mac_address[6];
  u8 tag[64]; 
} vapi_payload_create_vhost_user_if;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_create_vhost_user_if payload;
} vapi_msg_create_vhost_user_if;

static inline void vapi_msg_create_vhost_user_if_payload_hton(vapi_payload_create_vhost_user_if *payload)
{
  payload->custom_dev_instance = htobe32(payload->custom_dev_instance);
}

static inline void vapi_msg_create_vhost_user_if_payload_ntoh(vapi_payload_create_vhost_user_if *payload)
{
  payload->custom_dev_instance = be32toh(payload->custom_dev_instance);
}

static inline void vapi_msg_create_vhost_user_if_hton(vapi_msg_create_vhost_user_if *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vhost_user_if'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_create_vhost_user_if_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_vhost_user_if_ntoh(vapi_msg_create_vhost_user_if *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vhost_user_if'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_create_vhost_user_if_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_vhost_user_if_msg_size(vapi_msg_create_vhost_user_if *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_create_vhost_user_if* vapi_alloc_create_vhost_user_if(struct vapi_ctx_s *ctx)
{
  vapi_msg_create_vhost_user_if *msg = NULL;
  const size_t size = sizeof(vapi_msg_create_vhost_user_if);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_create_vhost_user_if*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_create_vhost_user_if);

  return msg;
}

static inline vapi_error_e vapi_create_vhost_user_if(struct vapi_ctx_s *ctx,
  vapi_msg_create_vhost_user_if *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_create_vhost_user_if_reply *reply),
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
  vapi_msg_create_vhost_user_if_hton(msg);
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
    vapi_msg_create_vhost_user_if_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_create_vhost_user_if()
{
  static const char name[] = "create_vhost_user_if";
  static const char name_with_crc[] = "create_vhost_user_if_a3438cd4";
  static vapi_message_desc_t __vapi_metadata_create_vhost_user_if = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_create_vhost_user_if, payload),
    sizeof(vapi_msg_create_vhost_user_if),
    (generic_swap_fn_t)vapi_msg_create_vhost_user_if_hton,
    (generic_swap_fn_t)vapi_msg_create_vhost_user_if_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_vhost_user_if = vapi_register_msg(&__vapi_metadata_create_vhost_user_if);
  VAPI_DBG("Assigned msg id %d to create_vhost_user_if", vapi_msg_id_create_vhost_user_if);
}
#endif

#ifndef defined_vapi_msg_modify_vhost_user_if_reply
#define defined_vapi_msg_modify_vhost_user_if_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_modify_vhost_user_if_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_modify_vhost_user_if_reply payload;
} vapi_msg_modify_vhost_user_if_reply;

static inline void vapi_msg_modify_vhost_user_if_reply_payload_hton(vapi_payload_modify_vhost_user_if_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_modify_vhost_user_if_reply_payload_ntoh(vapi_payload_modify_vhost_user_if_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_modify_vhost_user_if_reply_hton(vapi_msg_modify_vhost_user_if_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_modify_vhost_user_if_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_modify_vhost_user_if_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_modify_vhost_user_if_reply_ntoh(vapi_msg_modify_vhost_user_if_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_modify_vhost_user_if_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_modify_vhost_user_if_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_modify_vhost_user_if_reply_msg_size(vapi_msg_modify_vhost_user_if_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_modify_vhost_user_if_reply()
{
  static const char name[] = "modify_vhost_user_if_reply";
  static const char name_with_crc[] = "modify_vhost_user_if_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_modify_vhost_user_if_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_modify_vhost_user_if_reply, payload),
    sizeof(vapi_msg_modify_vhost_user_if_reply),
    (generic_swap_fn_t)vapi_msg_modify_vhost_user_if_reply_hton,
    (generic_swap_fn_t)vapi_msg_modify_vhost_user_if_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_modify_vhost_user_if_reply = vapi_register_msg(&__vapi_metadata_modify_vhost_user_if_reply);
  VAPI_DBG("Assigned msg id %d to modify_vhost_user_if_reply", vapi_msg_id_modify_vhost_user_if_reply);
}

static inline void vapi_set_vapi_msg_modify_vhost_user_if_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_modify_vhost_user_if_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_modify_vhost_user_if_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_modify_vhost_user_if
#define defined_vapi_msg_modify_vhost_user_if
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_server;
  u8 sock_filename[256];
  u8 renumber;
  u8 enable_gso;
  u32 custom_dev_instance; 
} vapi_payload_modify_vhost_user_if;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_modify_vhost_user_if payload;
} vapi_msg_modify_vhost_user_if;

static inline void vapi_msg_modify_vhost_user_if_payload_hton(vapi_payload_modify_vhost_user_if *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->custom_dev_instance = htobe32(payload->custom_dev_instance);
}

static inline void vapi_msg_modify_vhost_user_if_payload_ntoh(vapi_payload_modify_vhost_user_if *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->custom_dev_instance = be32toh(payload->custom_dev_instance);
}

static inline void vapi_msg_modify_vhost_user_if_hton(vapi_msg_modify_vhost_user_if *msg)
{
  VAPI_DBG("Swapping `vapi_msg_modify_vhost_user_if'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_modify_vhost_user_if_payload_hton(&msg->payload);
}

static inline void vapi_msg_modify_vhost_user_if_ntoh(vapi_msg_modify_vhost_user_if *msg)
{
  VAPI_DBG("Swapping `vapi_msg_modify_vhost_user_if'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_modify_vhost_user_if_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_modify_vhost_user_if_msg_size(vapi_msg_modify_vhost_user_if *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_modify_vhost_user_if* vapi_alloc_modify_vhost_user_if(struct vapi_ctx_s *ctx)
{
  vapi_msg_modify_vhost_user_if *msg = NULL;
  const size_t size = sizeof(vapi_msg_modify_vhost_user_if);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_modify_vhost_user_if*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_modify_vhost_user_if);

  return msg;
}

static inline vapi_error_e vapi_modify_vhost_user_if(struct vapi_ctx_s *ctx,
  vapi_msg_modify_vhost_user_if *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_modify_vhost_user_if_reply *reply),
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
  vapi_msg_modify_vhost_user_if_hton(msg);
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
    vapi_msg_modify_vhost_user_if_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_modify_vhost_user_if()
{
  static const char name[] = "modify_vhost_user_if";
  static const char name_with_crc[] = "modify_vhost_user_if_3fd4c094";
  static vapi_message_desc_t __vapi_metadata_modify_vhost_user_if = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_modify_vhost_user_if, payload),
    sizeof(vapi_msg_modify_vhost_user_if),
    (generic_swap_fn_t)vapi_msg_modify_vhost_user_if_hton,
    (generic_swap_fn_t)vapi_msg_modify_vhost_user_if_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_modify_vhost_user_if = vapi_register_msg(&__vapi_metadata_modify_vhost_user_if);
  VAPI_DBG("Assigned msg id %d to modify_vhost_user_if", vapi_msg_id_modify_vhost_user_if);
}
#endif

#ifndef defined_vapi_msg_sw_interface_vhost_user_dump
#define defined_vapi_msg_sw_interface_vhost_user_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_interface_vhost_user_dump;

static inline void vapi_msg_sw_interface_vhost_user_dump_hton(vapi_msg_sw_interface_vhost_user_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_vhost_user_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_interface_vhost_user_dump_ntoh(vapi_msg_sw_interface_vhost_user_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_vhost_user_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_interface_vhost_user_dump_msg_size(vapi_msg_sw_interface_vhost_user_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_vhost_user_dump* vapi_alloc_sw_interface_vhost_user_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_vhost_user_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_vhost_user_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_vhost_user_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_vhost_user_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_vhost_user_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_vhost_user_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_vhost_user_details *reply),
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
  vapi_msg_sw_interface_vhost_user_dump_hton(msg);
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
    vapi_msg_sw_interface_vhost_user_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_vhost_user_dump()
{
  static const char name[] = "sw_interface_vhost_user_dump";
  static const char name_with_crc[] = "sw_interface_vhost_user_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_interface_vhost_user_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_interface_vhost_user_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_vhost_user_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_vhost_user_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_vhost_user_dump = vapi_register_msg(&__vapi_metadata_sw_interface_vhost_user_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_vhost_user_dump", vapi_msg_id_sw_interface_vhost_user_dump);
}
#endif

#ifndef defined_vapi_msg_delete_vhost_user_if_reply
#define defined_vapi_msg_delete_vhost_user_if_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_delete_vhost_user_if_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_delete_vhost_user_if_reply payload;
} vapi_msg_delete_vhost_user_if_reply;

static inline void vapi_msg_delete_vhost_user_if_reply_payload_hton(vapi_payload_delete_vhost_user_if_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_delete_vhost_user_if_reply_payload_ntoh(vapi_payload_delete_vhost_user_if_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_delete_vhost_user_if_reply_hton(vapi_msg_delete_vhost_user_if_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_vhost_user_if_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_delete_vhost_user_if_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_delete_vhost_user_if_reply_ntoh(vapi_msg_delete_vhost_user_if_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_vhost_user_if_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_delete_vhost_user_if_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_delete_vhost_user_if_reply_msg_size(vapi_msg_delete_vhost_user_if_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_delete_vhost_user_if_reply()
{
  static const char name[] = "delete_vhost_user_if_reply";
  static const char name_with_crc[] = "delete_vhost_user_if_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_delete_vhost_user_if_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_delete_vhost_user_if_reply, payload),
    sizeof(vapi_msg_delete_vhost_user_if_reply),
    (generic_swap_fn_t)vapi_msg_delete_vhost_user_if_reply_hton,
    (generic_swap_fn_t)vapi_msg_delete_vhost_user_if_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_delete_vhost_user_if_reply = vapi_register_msg(&__vapi_metadata_delete_vhost_user_if_reply);
  VAPI_DBG("Assigned msg id %d to delete_vhost_user_if_reply", vapi_msg_id_delete_vhost_user_if_reply);
}

static inline void vapi_set_vapi_msg_delete_vhost_user_if_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_delete_vhost_user_if_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_delete_vhost_user_if_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_delete_vhost_user_if
#define defined_vapi_msg_delete_vhost_user_if
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_delete_vhost_user_if;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_delete_vhost_user_if payload;
} vapi_msg_delete_vhost_user_if;

static inline void vapi_msg_delete_vhost_user_if_payload_hton(vapi_payload_delete_vhost_user_if *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_delete_vhost_user_if_payload_ntoh(vapi_payload_delete_vhost_user_if *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_delete_vhost_user_if_hton(vapi_msg_delete_vhost_user_if *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_vhost_user_if'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_delete_vhost_user_if_payload_hton(&msg->payload);
}

static inline void vapi_msg_delete_vhost_user_if_ntoh(vapi_msg_delete_vhost_user_if *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_vhost_user_if'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_delete_vhost_user_if_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_delete_vhost_user_if_msg_size(vapi_msg_delete_vhost_user_if *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_delete_vhost_user_if* vapi_alloc_delete_vhost_user_if(struct vapi_ctx_s *ctx)
{
  vapi_msg_delete_vhost_user_if *msg = NULL;
  const size_t size = sizeof(vapi_msg_delete_vhost_user_if);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_delete_vhost_user_if*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_delete_vhost_user_if);

  return msg;
}

static inline vapi_error_e vapi_delete_vhost_user_if(struct vapi_ctx_s *ctx,
  vapi_msg_delete_vhost_user_if *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_delete_vhost_user_if_reply *reply),
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
  vapi_msg_delete_vhost_user_if_hton(msg);
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
    vapi_msg_delete_vhost_user_if_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_delete_vhost_user_if()
{
  static const char name[] = "delete_vhost_user_if";
  static const char name_with_crc[] = "delete_vhost_user_if_529cb13f";
  static vapi_message_desc_t __vapi_metadata_delete_vhost_user_if = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_delete_vhost_user_if, payload),
    sizeof(vapi_msg_delete_vhost_user_if),
    (generic_swap_fn_t)vapi_msg_delete_vhost_user_if_hton,
    (generic_swap_fn_t)vapi_msg_delete_vhost_user_if_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_delete_vhost_user_if = vapi_register_msg(&__vapi_metadata_delete_vhost_user_if);
  VAPI_DBG("Assigned msg id %d to delete_vhost_user_if", vapi_msg_id_delete_vhost_user_if);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
