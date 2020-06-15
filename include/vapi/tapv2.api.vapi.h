#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_tap_tapv2_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_tap_tapv2_api_json

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

extern vapi_msg_id_t vapi_msg_id_sw_interface_tap_v2_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_tap_v2_dump;
extern vapi_msg_id_t vapi_msg_id_tap_delete_v2_reply;
extern vapi_msg_id_t vapi_msg_id_tap_delete_v2;
extern vapi_msg_id_t vapi_msg_id_tap_create_v2;
extern vapi_msg_id_t vapi_msg_id_tap_create_v2_reply;

#define DEFINE_VAPI_MSG_IDS_TAPV2_API_JSON\
  vapi_msg_id_t vapi_msg_id_sw_interface_tap_v2_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_tap_v2_dump;\
  vapi_msg_id_t vapi_msg_id_tap_delete_v2_reply;\
  vapi_msg_id_t vapi_msg_id_tap_delete_v2;\
  vapi_msg_id_t vapi_msg_id_tap_create_v2;\
  vapi_msg_id_t vapi_msg_id_tap_create_v2_reply;


#ifndef defined_vapi_msg_sw_interface_tap_v2_details
#define defined_vapi_msg_sw_interface_tap_v2_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 id;
  u8 dev_name[64];
  u16 tx_ring_sz;
  u16 rx_ring_sz;
  u8 host_mac_addr[6];
  u8 host_if_name[64];
  u8 host_namespace[64];
  u8 host_bridge[64];
  u8 host_ip4_addr[4];
  u8 host_ip4_prefix_len;
  u8 host_ip6_addr[16];
  u8 host_ip6_prefix_len;
  u32 host_mtu_size;
  u32 tap_flags; 
} vapi_payload_sw_interface_tap_v2_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_tap_v2_details payload;
} vapi_msg_sw_interface_tap_v2_details;

static inline void vapi_msg_sw_interface_tap_v2_details_payload_hton(vapi_payload_sw_interface_tap_v2_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->id = htobe32(payload->id);
  payload->tx_ring_sz = htobe16(payload->tx_ring_sz);
  payload->rx_ring_sz = htobe16(payload->rx_ring_sz);
  payload->host_mtu_size = htobe32(payload->host_mtu_size);
  payload->tap_flags = htobe32(payload->tap_flags);
}

static inline void vapi_msg_sw_interface_tap_v2_details_payload_ntoh(vapi_payload_sw_interface_tap_v2_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->id = be32toh(payload->id);
  payload->tx_ring_sz = be16toh(payload->tx_ring_sz);
  payload->rx_ring_sz = be16toh(payload->rx_ring_sz);
  payload->host_mtu_size = be32toh(payload->host_mtu_size);
  payload->tap_flags = be32toh(payload->tap_flags);
}

static inline void vapi_msg_sw_interface_tap_v2_details_hton(vapi_msg_sw_interface_tap_v2_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tap_v2_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_tap_v2_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_tap_v2_details_ntoh(vapi_msg_sw_interface_tap_v2_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tap_v2_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_tap_v2_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_tap_v2_details_msg_size(vapi_msg_sw_interface_tap_v2_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_tap_v2_details()
{
  static const char name[] = "sw_interface_tap_v2_details";
  static const char name_with_crc[] = "sw_interface_tap_v2_details_5ee87a5f";
  static vapi_message_desc_t __vapi_metadata_sw_interface_tap_v2_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_tap_v2_details, payload),
    sizeof(vapi_msg_sw_interface_tap_v2_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_tap_v2_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_tap_v2_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_tap_v2_details = vapi_register_msg(&__vapi_metadata_sw_interface_tap_v2_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_tap_v2_details", vapi_msg_id_sw_interface_tap_v2_details);
}

static inline void vapi_set_vapi_msg_sw_interface_tap_v2_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_tap_v2_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_tap_v2_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_tap_v2_dump
#define defined_vapi_msg_sw_interface_tap_v2_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_interface_tap_v2_dump;

static inline void vapi_msg_sw_interface_tap_v2_dump_hton(vapi_msg_sw_interface_tap_v2_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tap_v2_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_interface_tap_v2_dump_ntoh(vapi_msg_sw_interface_tap_v2_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tap_v2_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_interface_tap_v2_dump_msg_size(vapi_msg_sw_interface_tap_v2_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_tap_v2_dump* vapi_alloc_sw_interface_tap_v2_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_tap_v2_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_tap_v2_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_tap_v2_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_tap_v2_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_tap_v2_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_tap_v2_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_tap_v2_details *reply),
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
  vapi_msg_sw_interface_tap_v2_dump_hton(msg);
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
    vapi_msg_sw_interface_tap_v2_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_tap_v2_dump()
{
  static const char name[] = "sw_interface_tap_v2_dump";
  static const char name_with_crc[] = "sw_interface_tap_v2_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_interface_tap_v2_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_interface_tap_v2_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_tap_v2_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_tap_v2_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_tap_v2_dump = vapi_register_msg(&__vapi_metadata_sw_interface_tap_v2_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_tap_v2_dump", vapi_msg_id_sw_interface_tap_v2_dump);
}
#endif

#ifndef defined_vapi_msg_tap_delete_v2_reply
#define defined_vapi_msg_tap_delete_v2_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_tap_delete_v2_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_tap_delete_v2_reply payload;
} vapi_msg_tap_delete_v2_reply;

static inline void vapi_msg_tap_delete_v2_reply_payload_hton(vapi_payload_tap_delete_v2_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_tap_delete_v2_reply_payload_ntoh(vapi_payload_tap_delete_v2_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_tap_delete_v2_reply_hton(vapi_msg_tap_delete_v2_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_delete_v2_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_tap_delete_v2_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_tap_delete_v2_reply_ntoh(vapi_msg_tap_delete_v2_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_delete_v2_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_tap_delete_v2_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tap_delete_v2_reply_msg_size(vapi_msg_tap_delete_v2_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_tap_delete_v2_reply()
{
  static const char name[] = "tap_delete_v2_reply";
  static const char name_with_crc[] = "tap_delete_v2_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_tap_delete_v2_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_tap_delete_v2_reply, payload),
    sizeof(vapi_msg_tap_delete_v2_reply),
    (generic_swap_fn_t)vapi_msg_tap_delete_v2_reply_hton,
    (generic_swap_fn_t)vapi_msg_tap_delete_v2_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tap_delete_v2_reply = vapi_register_msg(&__vapi_metadata_tap_delete_v2_reply);
  VAPI_DBG("Assigned msg id %d to tap_delete_v2_reply", vapi_msg_id_tap_delete_v2_reply);
}

static inline void vapi_set_vapi_msg_tap_delete_v2_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_tap_delete_v2_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_tap_delete_v2_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_tap_delete_v2
#define defined_vapi_msg_tap_delete_v2
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_tap_delete_v2;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_tap_delete_v2 payload;
} vapi_msg_tap_delete_v2;

static inline void vapi_msg_tap_delete_v2_payload_hton(vapi_payload_tap_delete_v2 *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_tap_delete_v2_payload_ntoh(vapi_payload_tap_delete_v2 *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_tap_delete_v2_hton(vapi_msg_tap_delete_v2 *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_delete_v2'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_tap_delete_v2_payload_hton(&msg->payload);
}

static inline void vapi_msg_tap_delete_v2_ntoh(vapi_msg_tap_delete_v2 *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_delete_v2'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_tap_delete_v2_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tap_delete_v2_msg_size(vapi_msg_tap_delete_v2 *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_tap_delete_v2* vapi_alloc_tap_delete_v2(struct vapi_ctx_s *ctx)
{
  vapi_msg_tap_delete_v2 *msg = NULL;
  const size_t size = sizeof(vapi_msg_tap_delete_v2);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_tap_delete_v2*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_tap_delete_v2);

  return msg;
}

static inline vapi_error_e vapi_tap_delete_v2(struct vapi_ctx_s *ctx,
  vapi_msg_tap_delete_v2 *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_tap_delete_v2_reply *reply),
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
  vapi_msg_tap_delete_v2_hton(msg);
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
    vapi_msg_tap_delete_v2_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_tap_delete_v2()
{
  static const char name[] = "tap_delete_v2";
  static const char name_with_crc[] = "tap_delete_v2_529cb13f";
  static vapi_message_desc_t __vapi_metadata_tap_delete_v2 = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_tap_delete_v2, payload),
    sizeof(vapi_msg_tap_delete_v2),
    (generic_swap_fn_t)vapi_msg_tap_delete_v2_hton,
    (generic_swap_fn_t)vapi_msg_tap_delete_v2_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tap_delete_v2 = vapi_register_msg(&__vapi_metadata_tap_delete_v2);
  VAPI_DBG("Assigned msg id %d to tap_delete_v2", vapi_msg_id_tap_delete_v2);
}
#endif

#ifndef defined_vapi_msg_tap_create_v2_reply
#define defined_vapi_msg_tap_create_v2_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_tap_create_v2_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_tap_create_v2_reply payload;
} vapi_msg_tap_create_v2_reply;

static inline void vapi_msg_tap_create_v2_reply_payload_hton(vapi_payload_tap_create_v2_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_tap_create_v2_reply_payload_ntoh(vapi_payload_tap_create_v2_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_tap_create_v2_reply_hton(vapi_msg_tap_create_v2_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_create_v2_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_tap_create_v2_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_tap_create_v2_reply_ntoh(vapi_msg_tap_create_v2_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_create_v2_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_tap_create_v2_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tap_create_v2_reply_msg_size(vapi_msg_tap_create_v2_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_tap_create_v2_reply()
{
  static const char name[] = "tap_create_v2_reply";
  static const char name_with_crc[] = "tap_create_v2_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_tap_create_v2_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_tap_create_v2_reply, payload),
    sizeof(vapi_msg_tap_create_v2_reply),
    (generic_swap_fn_t)vapi_msg_tap_create_v2_reply_hton,
    (generic_swap_fn_t)vapi_msg_tap_create_v2_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tap_create_v2_reply = vapi_register_msg(&__vapi_metadata_tap_create_v2_reply);
  VAPI_DBG("Assigned msg id %d to tap_create_v2_reply", vapi_msg_id_tap_create_v2_reply);
}

static inline void vapi_set_vapi_msg_tap_create_v2_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_tap_create_v2_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_tap_create_v2_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_tap_create_v2
#define defined_vapi_msg_tap_create_v2
typedef struct __attribute__ ((__packed__)) {
  u32 id;
  u8 use_random_mac;
  u8 mac_address[6];
  u16 tx_ring_sz;
  u16 rx_ring_sz;
  u8 host_namespace_set;
  u8 host_namespace[64];
  u8 host_mac_addr_set;
  u8 host_mac_addr[6];
  u8 host_if_name_set;
  u8 host_if_name[64];
  u8 host_bridge_set;
  u8 host_bridge[64];
  u8 host_ip4_addr_set;
  u8 host_ip4_addr[4];
  u8 host_ip4_prefix_len;
  u8 host_ip6_addr_set;
  u8 host_ip6_addr[16];
  u8 host_ip6_prefix_len;
  u8 host_ip4_gw_set;
  u8 host_ip4_gw[4];
  u8 host_ip6_gw_set;
  u8 host_ip6_gw[16];
  u8 host_mtu_set;
  u32 host_mtu_size;
  u8 tag[64];
  u32 tap_flags; 
} vapi_payload_tap_create_v2;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_tap_create_v2 payload;
} vapi_msg_tap_create_v2;

static inline void vapi_msg_tap_create_v2_payload_hton(vapi_payload_tap_create_v2 *payload)
{
  payload->id = htobe32(payload->id);
  payload->tx_ring_sz = htobe16(payload->tx_ring_sz);
  payload->rx_ring_sz = htobe16(payload->rx_ring_sz);
  payload->host_mtu_size = htobe32(payload->host_mtu_size);
  payload->tap_flags = htobe32(payload->tap_flags);
}

static inline void vapi_msg_tap_create_v2_payload_ntoh(vapi_payload_tap_create_v2 *payload)
{
  payload->id = be32toh(payload->id);
  payload->tx_ring_sz = be16toh(payload->tx_ring_sz);
  payload->rx_ring_sz = be16toh(payload->rx_ring_sz);
  payload->host_mtu_size = be32toh(payload->host_mtu_size);
  payload->tap_flags = be32toh(payload->tap_flags);
}

static inline void vapi_msg_tap_create_v2_hton(vapi_msg_tap_create_v2 *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_create_v2'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_tap_create_v2_payload_hton(&msg->payload);
}

static inline void vapi_msg_tap_create_v2_ntoh(vapi_msg_tap_create_v2 *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tap_create_v2'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_tap_create_v2_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tap_create_v2_msg_size(vapi_msg_tap_create_v2 *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_tap_create_v2* vapi_alloc_tap_create_v2(struct vapi_ctx_s *ctx)
{
  vapi_msg_tap_create_v2 *msg = NULL;
  const size_t size = sizeof(vapi_msg_tap_create_v2);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_tap_create_v2*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_tap_create_v2);

  return msg;
}

static inline vapi_error_e vapi_tap_create_v2(struct vapi_ctx_s *ctx,
  vapi_msg_tap_create_v2 *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_tap_create_v2_reply *reply),
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
  vapi_msg_tap_create_v2_hton(msg);
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
    vapi_msg_tap_create_v2_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_tap_create_v2()
{
  static const char name[] = "tap_create_v2";
  static const char name_with_crc[] = "tap_create_v2_8fa99320";
  static vapi_message_desc_t __vapi_metadata_tap_create_v2 = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_tap_create_v2, payload),
    sizeof(vapi_msg_tap_create_v2),
    (generic_swap_fn_t)vapi_msg_tap_create_v2_hton,
    (generic_swap_fn_t)vapi_msg_tap_create_v2_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tap_create_v2 = vapi_register_msg(&__vapi_metadata_tap_create_v2);
  VAPI_DBG("Assigned msg id %d to tap_create_v2", vapi_msg_id_tap_create_v2);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
