#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_virtio_virtio_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_virtio_virtio_api_json

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

extern vapi_msg_id_t vapi_msg_id_virtio_pci_delete;
extern vapi_msg_id_t vapi_msg_id_sw_interface_virtio_pci_dump;
extern vapi_msg_id_t vapi_msg_id_virtio_pci_create_reply;
extern vapi_msg_id_t vapi_msg_id_virtio_pci_create;
extern vapi_msg_id_t vapi_msg_id_virtio_pci_delete_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_virtio_pci_details;

#define DEFINE_VAPI_MSG_IDS_VIRTIO_API_JSON\
  vapi_msg_id_t vapi_msg_id_virtio_pci_delete;\
  vapi_msg_id_t vapi_msg_id_sw_interface_virtio_pci_dump;\
  vapi_msg_id_t vapi_msg_id_virtio_pci_create_reply;\
  vapi_msg_id_t vapi_msg_id_virtio_pci_create;\
  vapi_msg_id_t vapi_msg_id_virtio_pci_delete_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_virtio_pci_details;


#ifndef defined_vapi_msg_virtio_pci_delete_reply
#define defined_vapi_msg_virtio_pci_delete_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_virtio_pci_delete_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_virtio_pci_delete_reply payload;
} vapi_msg_virtio_pci_delete_reply;

static inline void vapi_msg_virtio_pci_delete_reply_payload_hton(vapi_payload_virtio_pci_delete_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_virtio_pci_delete_reply_payload_ntoh(vapi_payload_virtio_pci_delete_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_virtio_pci_delete_reply_hton(vapi_msg_virtio_pci_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_delete_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_virtio_pci_delete_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_virtio_pci_delete_reply_ntoh(vapi_msg_virtio_pci_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_delete_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_virtio_pci_delete_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_virtio_pci_delete_reply_msg_size(vapi_msg_virtio_pci_delete_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_virtio_pci_delete_reply()
{
  static const char name[] = "virtio_pci_delete_reply";
  static const char name_with_crc[] = "virtio_pci_delete_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_virtio_pci_delete_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_virtio_pci_delete_reply, payload),
    sizeof(vapi_msg_virtio_pci_delete_reply),
    (generic_swap_fn_t)vapi_msg_virtio_pci_delete_reply_hton,
    (generic_swap_fn_t)vapi_msg_virtio_pci_delete_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_virtio_pci_delete_reply = vapi_register_msg(&__vapi_metadata_virtio_pci_delete_reply);
  VAPI_DBG("Assigned msg id %d to virtio_pci_delete_reply", vapi_msg_id_virtio_pci_delete_reply);
}

static inline void vapi_set_vapi_msg_virtio_pci_delete_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_virtio_pci_delete_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_virtio_pci_delete_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_virtio_pci_delete
#define defined_vapi_msg_virtio_pci_delete
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_virtio_pci_delete;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_virtio_pci_delete payload;
} vapi_msg_virtio_pci_delete;

static inline void vapi_msg_virtio_pci_delete_payload_hton(vapi_payload_virtio_pci_delete *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_virtio_pci_delete_payload_ntoh(vapi_payload_virtio_pci_delete *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_virtio_pci_delete_hton(vapi_msg_virtio_pci_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_delete'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_virtio_pci_delete_payload_hton(&msg->payload);
}

static inline void vapi_msg_virtio_pci_delete_ntoh(vapi_msg_virtio_pci_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_delete'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_virtio_pci_delete_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_virtio_pci_delete_msg_size(vapi_msg_virtio_pci_delete *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_virtio_pci_delete* vapi_alloc_virtio_pci_delete(struct vapi_ctx_s *ctx)
{
  vapi_msg_virtio_pci_delete *msg = NULL;
  const size_t size = sizeof(vapi_msg_virtio_pci_delete);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_virtio_pci_delete*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_virtio_pci_delete);

  return msg;
}

static inline vapi_error_e vapi_virtio_pci_delete(struct vapi_ctx_s *ctx,
  vapi_msg_virtio_pci_delete *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_virtio_pci_delete_reply *reply),
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
  vapi_msg_virtio_pci_delete_hton(msg);
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
    vapi_msg_virtio_pci_delete_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_virtio_pci_delete()
{
  static const char name[] = "virtio_pci_delete";
  static const char name_with_crc[] = "virtio_pci_delete_529cb13f";
  static vapi_message_desc_t __vapi_metadata_virtio_pci_delete = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_virtio_pci_delete, payload),
    sizeof(vapi_msg_virtio_pci_delete),
    (generic_swap_fn_t)vapi_msg_virtio_pci_delete_hton,
    (generic_swap_fn_t)vapi_msg_virtio_pci_delete_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_virtio_pci_delete = vapi_register_msg(&__vapi_metadata_virtio_pci_delete);
  VAPI_DBG("Assigned msg id %d to virtio_pci_delete", vapi_msg_id_virtio_pci_delete);
}
#endif

#ifndef defined_vapi_msg_sw_interface_virtio_pci_details
#define defined_vapi_msg_sw_interface_virtio_pci_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 pci_addr;
  u8 mac_addr[6];
  u16 tx_ring_sz;
  u16 rx_ring_sz;
  u64 features; 
} vapi_payload_sw_interface_virtio_pci_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_virtio_pci_details payload;
} vapi_msg_sw_interface_virtio_pci_details;

static inline void vapi_msg_sw_interface_virtio_pci_details_payload_hton(vapi_payload_sw_interface_virtio_pci_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->pci_addr = htobe32(payload->pci_addr);
  payload->tx_ring_sz = htobe16(payload->tx_ring_sz);
  payload->rx_ring_sz = htobe16(payload->rx_ring_sz);
  payload->features = htobe64(payload->features);
}

static inline void vapi_msg_sw_interface_virtio_pci_details_payload_ntoh(vapi_payload_sw_interface_virtio_pci_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->pci_addr = be32toh(payload->pci_addr);
  payload->tx_ring_sz = be16toh(payload->tx_ring_sz);
  payload->rx_ring_sz = be16toh(payload->rx_ring_sz);
  payload->features = be64toh(payload->features);
}

static inline void vapi_msg_sw_interface_virtio_pci_details_hton(vapi_msg_sw_interface_virtio_pci_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_virtio_pci_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_virtio_pci_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_virtio_pci_details_ntoh(vapi_msg_sw_interface_virtio_pci_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_virtio_pci_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_virtio_pci_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_virtio_pci_details_msg_size(vapi_msg_sw_interface_virtio_pci_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_virtio_pci_details()
{
  static const char name[] = "sw_interface_virtio_pci_details";
  static const char name_with_crc[] = "sw_interface_virtio_pci_details_d3a3ade3";
  static vapi_message_desc_t __vapi_metadata_sw_interface_virtio_pci_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_virtio_pci_details, payload),
    sizeof(vapi_msg_sw_interface_virtio_pci_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_virtio_pci_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_virtio_pci_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_virtio_pci_details = vapi_register_msg(&__vapi_metadata_sw_interface_virtio_pci_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_virtio_pci_details", vapi_msg_id_sw_interface_virtio_pci_details);
}

static inline void vapi_set_vapi_msg_sw_interface_virtio_pci_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_virtio_pci_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_virtio_pci_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_virtio_pci_dump
#define defined_vapi_msg_sw_interface_virtio_pci_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_interface_virtio_pci_dump;

static inline void vapi_msg_sw_interface_virtio_pci_dump_hton(vapi_msg_sw_interface_virtio_pci_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_virtio_pci_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_interface_virtio_pci_dump_ntoh(vapi_msg_sw_interface_virtio_pci_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_virtio_pci_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_interface_virtio_pci_dump_msg_size(vapi_msg_sw_interface_virtio_pci_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_virtio_pci_dump* vapi_alloc_sw_interface_virtio_pci_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_virtio_pci_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_virtio_pci_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_virtio_pci_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_virtio_pci_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_virtio_pci_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_virtio_pci_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_virtio_pci_details *reply),
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
  vapi_msg_sw_interface_virtio_pci_dump_hton(msg);
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
    vapi_msg_sw_interface_virtio_pci_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_virtio_pci_dump()
{
  static const char name[] = "sw_interface_virtio_pci_dump";
  static const char name_with_crc[] = "sw_interface_virtio_pci_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_interface_virtio_pci_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_interface_virtio_pci_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_virtio_pci_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_virtio_pci_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_virtio_pci_dump = vapi_register_msg(&__vapi_metadata_sw_interface_virtio_pci_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_virtio_pci_dump", vapi_msg_id_sw_interface_virtio_pci_dump);
}
#endif

#ifndef defined_vapi_msg_virtio_pci_create_reply
#define defined_vapi_msg_virtio_pci_create_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_virtio_pci_create_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_virtio_pci_create_reply payload;
} vapi_msg_virtio_pci_create_reply;

static inline void vapi_msg_virtio_pci_create_reply_payload_hton(vapi_payload_virtio_pci_create_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_virtio_pci_create_reply_payload_ntoh(vapi_payload_virtio_pci_create_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_virtio_pci_create_reply_hton(vapi_msg_virtio_pci_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_create_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_virtio_pci_create_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_virtio_pci_create_reply_ntoh(vapi_msg_virtio_pci_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_create_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_virtio_pci_create_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_virtio_pci_create_reply_msg_size(vapi_msg_virtio_pci_create_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_virtio_pci_create_reply()
{
  static const char name[] = "virtio_pci_create_reply";
  static const char name_with_crc[] = "virtio_pci_create_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_virtio_pci_create_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_virtio_pci_create_reply, payload),
    sizeof(vapi_msg_virtio_pci_create_reply),
    (generic_swap_fn_t)vapi_msg_virtio_pci_create_reply_hton,
    (generic_swap_fn_t)vapi_msg_virtio_pci_create_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_virtio_pci_create_reply = vapi_register_msg(&__vapi_metadata_virtio_pci_create_reply);
  VAPI_DBG("Assigned msg id %d to virtio_pci_create_reply", vapi_msg_id_virtio_pci_create_reply);
}

static inline void vapi_set_vapi_msg_virtio_pci_create_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_virtio_pci_create_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_virtio_pci_create_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_virtio_pci_create
#define defined_vapi_msg_virtio_pci_create
typedef struct __attribute__ ((__packed__)) {
  u32 pci_addr;
  u8 use_random_mac;
  u8 mac_address[6];
  u8 gso_enabled;
  u64 features; 
} vapi_payload_virtio_pci_create;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_virtio_pci_create payload;
} vapi_msg_virtio_pci_create;

static inline void vapi_msg_virtio_pci_create_payload_hton(vapi_payload_virtio_pci_create *payload)
{
  payload->pci_addr = htobe32(payload->pci_addr);
  payload->features = htobe64(payload->features);
}

static inline void vapi_msg_virtio_pci_create_payload_ntoh(vapi_payload_virtio_pci_create *payload)
{
  payload->pci_addr = be32toh(payload->pci_addr);
  payload->features = be64toh(payload->features);
}

static inline void vapi_msg_virtio_pci_create_hton(vapi_msg_virtio_pci_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_create'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_virtio_pci_create_payload_hton(&msg->payload);
}

static inline void vapi_msg_virtio_pci_create_ntoh(vapi_msg_virtio_pci_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_virtio_pci_create'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_virtio_pci_create_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_virtio_pci_create_msg_size(vapi_msg_virtio_pci_create *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_virtio_pci_create* vapi_alloc_virtio_pci_create(struct vapi_ctx_s *ctx)
{
  vapi_msg_virtio_pci_create *msg = NULL;
  const size_t size = sizeof(vapi_msg_virtio_pci_create);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_virtio_pci_create*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_virtio_pci_create);

  return msg;
}

static inline vapi_error_e vapi_virtio_pci_create(struct vapi_ctx_s *ctx,
  vapi_msg_virtio_pci_create *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_virtio_pci_create_reply *reply),
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
  vapi_msg_virtio_pci_create_hton(msg);
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
    vapi_msg_virtio_pci_create_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_virtio_pci_create()
{
  static const char name[] = "virtio_pci_create";
  static const char name_with_crc[] = "virtio_pci_create_2964dcb5";
  static vapi_message_desc_t __vapi_metadata_virtio_pci_create = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_virtio_pci_create, payload),
    sizeof(vapi_msg_virtio_pci_create),
    (generic_swap_fn_t)vapi_msg_virtio_pci_create_hton,
    (generic_swap_fn_t)vapi_msg_virtio_pci_create_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_virtio_pci_create = vapi_register_msg(&__vapi_metadata_virtio_pci_create);
  VAPI_DBG("Assigned msg id %d to virtio_pci_create", vapi_msg_id_virtio_pci_create);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
