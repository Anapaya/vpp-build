#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_af_packet_af_packet_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_devices_af_packet_af_packet_api_json

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

extern vapi_msg_id_t vapi_msg_id_af_packet_create;
extern vapi_msg_id_t vapi_msg_id_af_packet_create_reply;
extern vapi_msg_id_t vapi_msg_id_af_packet_delete;
extern vapi_msg_id_t vapi_msg_id_af_packet_delete_reply;
extern vapi_msg_id_t vapi_msg_id_af_packet_set_l4_cksum_offload;
extern vapi_msg_id_t vapi_msg_id_af_packet_set_l4_cksum_offload_reply;
extern vapi_msg_id_t vapi_msg_id_af_packet_dump;
extern vapi_msg_id_t vapi_msg_id_af_packet_details;

#define DEFINE_VAPI_MSG_IDS_AF_PACKET_API_JSON\
  vapi_msg_id_t vapi_msg_id_af_packet_create;\
  vapi_msg_id_t vapi_msg_id_af_packet_create_reply;\
  vapi_msg_id_t vapi_msg_id_af_packet_delete;\
  vapi_msg_id_t vapi_msg_id_af_packet_delete_reply;\
  vapi_msg_id_t vapi_msg_id_af_packet_set_l4_cksum_offload;\
  vapi_msg_id_t vapi_msg_id_af_packet_set_l4_cksum_offload_reply;\
  vapi_msg_id_t vapi_msg_id_af_packet_dump;\
  vapi_msg_id_t vapi_msg_id_af_packet_details;


#ifndef defined_vapi_enum_if_status_flags
#define defined_vapi_enum_if_status_flags
typedef enum {
  IF_STATUS_API_FLAG_ADMIN_UP = 1,
  IF_STATUS_API_FLAG_LINK_UP = 2,
}  vapi_enum_if_status_flags;

#endif

#ifndef defined_vapi_enum_mtu_proto
#define defined_vapi_enum_mtu_proto
typedef enum {
  MTU_PROTO_API_L3 = 0,
  MTU_PROTO_API_IP4 = 1,
  MTU_PROTO_API_IP6 = 2,
  MTU_PROTO_API_MPLS = 3,
}  vapi_enum_mtu_proto;

#endif

#ifndef defined_vapi_enum_link_duplex
#define defined_vapi_enum_link_duplex
typedef enum {
  LINK_DUPLEX_API_UNKNOWN = 0,
  LINK_DUPLEX_API_HALF = 1,
  LINK_DUPLEX_API_FULL = 2,
}  vapi_enum_link_duplex;

#endif

#ifndef defined_vapi_enum_sub_if_flags
#define defined_vapi_enum_sub_if_flags
typedef enum {
  SUB_IF_API_FLAG_NO_TAGS = 1,
  SUB_IF_API_FLAG_ONE_TAG = 2,
  SUB_IF_API_FLAG_TWO_TAGS = 4,
  SUB_IF_API_FLAG_DOT1AD = 8,
  SUB_IF_API_FLAG_EXACT_MATCH = 16,
  SUB_IF_API_FLAG_DEFAULT = 32,
  SUB_IF_API_FLAG_OUTER_VLAN_ID_ANY = 64,
  SUB_IF_API_FLAG_INNER_VLAN_ID_ANY = 128,
  SUB_IF_API_FLAG_MASK_VNET = 254,
  SUB_IF_API_FLAG_DOT1AH = 256,
}  vapi_enum_sub_if_flags;

#endif

#ifndef defined_vapi_enum_rx_mode
#define defined_vapi_enum_rx_mode
typedef enum {
  RX_MODE_API_UNKNOWN = 0,
  RX_MODE_API_POLLING = 1,
  RX_MODE_API_INTERRUPT = 2,
  RX_MODE_API_ADAPTIVE = 3,
  RX_MODE_API_DEFAULT = 4,
}  vapi_enum_rx_mode;

#endif

#ifndef defined_vapi_enum_if_type
#define defined_vapi_enum_if_type
typedef enum {
  IF_API_TYPE_HARDWARE = 0,
  IF_API_TYPE_SUB = 1,
  IF_API_TYPE_P2P = 2,
  IF_API_TYPE_PIPE = 3,
}  vapi_enum_if_type;

#endif

#ifndef defined_vapi_type_interface_index
#define defined_vapi_type_interface_index
typedef u32 vapi_type_interface_index;

#endif

#ifndef defined_vapi_type_mac_address
#define defined_vapi_type_mac_address
typedef u8 vapi_type_mac_address[6];

#endif

#ifndef defined_vapi_msg_af_packet_create_reply
#define defined_vapi_msg_af_packet_create_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_af_packet_create_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_af_packet_create_reply payload;
} vapi_msg_af_packet_create_reply;

static inline void vapi_msg_af_packet_create_reply_payload_hton(vapi_payload_af_packet_create_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_af_packet_create_reply_payload_ntoh(vapi_payload_af_packet_create_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_af_packet_create_reply_hton(vapi_msg_af_packet_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_create_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_af_packet_create_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_af_packet_create_reply_ntoh(vapi_msg_af_packet_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_create_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_af_packet_create_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_af_packet_create_reply_msg_size(vapi_msg_af_packet_create_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_af_packet_create_reply()
{
  static const char name[] = "af_packet_create_reply";
  static const char name_with_crc[] = "af_packet_create_reply_5383d31f";
  static vapi_message_desc_t __vapi_metadata_af_packet_create_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_af_packet_create_reply, payload),
    sizeof(vapi_msg_af_packet_create_reply),
    (generic_swap_fn_t)vapi_msg_af_packet_create_reply_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_create_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_create_reply = vapi_register_msg(&__vapi_metadata_af_packet_create_reply);
  VAPI_DBG("Assigned msg id %d to af_packet_create_reply", vapi_msg_id_af_packet_create_reply);
}

static inline void vapi_set_vapi_msg_af_packet_create_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_af_packet_create_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_af_packet_create_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_af_packet_create
#define defined_vapi_msg_af_packet_create
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mac_address hw_addr;
  bool use_random_hw_addr;
  u8 host_if_name[64]; 
} vapi_payload_af_packet_create;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_af_packet_create payload;
} vapi_msg_af_packet_create;

static inline void vapi_msg_af_packet_create_payload_hton(vapi_payload_af_packet_create *payload)
{

}

static inline void vapi_msg_af_packet_create_payload_ntoh(vapi_payload_af_packet_create *payload)
{

}

static inline void vapi_msg_af_packet_create_hton(vapi_msg_af_packet_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_create'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_af_packet_create_payload_hton(&msg->payload);
}

static inline void vapi_msg_af_packet_create_ntoh(vapi_msg_af_packet_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_create'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_af_packet_create_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_af_packet_create_msg_size(vapi_msg_af_packet_create *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_af_packet_create* vapi_alloc_af_packet_create(struct vapi_ctx_s *ctx)
{
  vapi_msg_af_packet_create *msg = NULL;
  const size_t size = sizeof(vapi_msg_af_packet_create);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_af_packet_create*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_af_packet_create);

  return msg;
}

static inline vapi_error_e vapi_af_packet_create(struct vapi_ctx_s *ctx,
  vapi_msg_af_packet_create *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_af_packet_create_reply *reply),
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
  vapi_msg_af_packet_create_hton(msg);
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
    vapi_msg_af_packet_create_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_af_packet_create()
{
  static const char name[] = "af_packet_create";
  static const char name_with_crc[] = "af_packet_create_a190415f";
  static vapi_message_desc_t __vapi_metadata_af_packet_create = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_af_packet_create, payload),
    sizeof(vapi_msg_af_packet_create),
    (generic_swap_fn_t)vapi_msg_af_packet_create_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_create_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_create = vapi_register_msg(&__vapi_metadata_af_packet_create);
  VAPI_DBG("Assigned msg id %d to af_packet_create", vapi_msg_id_af_packet_create);
}
#endif

#ifndef defined_vapi_msg_af_packet_delete_reply
#define defined_vapi_msg_af_packet_delete_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_af_packet_delete_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_af_packet_delete_reply payload;
} vapi_msg_af_packet_delete_reply;

static inline void vapi_msg_af_packet_delete_reply_payload_hton(vapi_payload_af_packet_delete_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_af_packet_delete_reply_payload_ntoh(vapi_payload_af_packet_delete_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_af_packet_delete_reply_hton(vapi_msg_af_packet_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_delete_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_af_packet_delete_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_af_packet_delete_reply_ntoh(vapi_msg_af_packet_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_delete_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_af_packet_delete_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_af_packet_delete_reply_msg_size(vapi_msg_af_packet_delete_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_af_packet_delete_reply()
{
  static const char name[] = "af_packet_delete_reply";
  static const char name_with_crc[] = "af_packet_delete_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_af_packet_delete_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_af_packet_delete_reply, payload),
    sizeof(vapi_msg_af_packet_delete_reply),
    (generic_swap_fn_t)vapi_msg_af_packet_delete_reply_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_delete_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_delete_reply = vapi_register_msg(&__vapi_metadata_af_packet_delete_reply);
  VAPI_DBG("Assigned msg id %d to af_packet_delete_reply", vapi_msg_id_af_packet_delete_reply);
}

static inline void vapi_set_vapi_msg_af_packet_delete_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_af_packet_delete_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_af_packet_delete_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_af_packet_delete
#define defined_vapi_msg_af_packet_delete
typedef struct __attribute__ ((__packed__)) {
  u8 host_if_name[64]; 
} vapi_payload_af_packet_delete;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_af_packet_delete payload;
} vapi_msg_af_packet_delete;

static inline void vapi_msg_af_packet_delete_payload_hton(vapi_payload_af_packet_delete *payload)
{

}

static inline void vapi_msg_af_packet_delete_payload_ntoh(vapi_payload_af_packet_delete *payload)
{

}

static inline void vapi_msg_af_packet_delete_hton(vapi_msg_af_packet_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_delete'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_af_packet_delete_payload_hton(&msg->payload);
}

static inline void vapi_msg_af_packet_delete_ntoh(vapi_msg_af_packet_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_delete'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_af_packet_delete_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_af_packet_delete_msg_size(vapi_msg_af_packet_delete *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_af_packet_delete* vapi_alloc_af_packet_delete(struct vapi_ctx_s *ctx)
{
  vapi_msg_af_packet_delete *msg = NULL;
  const size_t size = sizeof(vapi_msg_af_packet_delete);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_af_packet_delete*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_af_packet_delete);

  return msg;
}

static inline vapi_error_e vapi_af_packet_delete(struct vapi_ctx_s *ctx,
  vapi_msg_af_packet_delete *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_af_packet_delete_reply *reply),
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
  vapi_msg_af_packet_delete_hton(msg);
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
    vapi_msg_af_packet_delete_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_af_packet_delete()
{
  static const char name[] = "af_packet_delete";
  static const char name_with_crc[] = "af_packet_delete_863fa648";
  static vapi_message_desc_t __vapi_metadata_af_packet_delete = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_af_packet_delete, payload),
    sizeof(vapi_msg_af_packet_delete),
    (generic_swap_fn_t)vapi_msg_af_packet_delete_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_delete_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_delete = vapi_register_msg(&__vapi_metadata_af_packet_delete);
  VAPI_DBG("Assigned msg id %d to af_packet_delete", vapi_msg_id_af_packet_delete);
}
#endif

#ifndef defined_vapi_msg_af_packet_set_l4_cksum_offload_reply
#define defined_vapi_msg_af_packet_set_l4_cksum_offload_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_af_packet_set_l4_cksum_offload_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_af_packet_set_l4_cksum_offload_reply payload;
} vapi_msg_af_packet_set_l4_cksum_offload_reply;

static inline void vapi_msg_af_packet_set_l4_cksum_offload_reply_payload_hton(vapi_payload_af_packet_set_l4_cksum_offload_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_af_packet_set_l4_cksum_offload_reply_payload_ntoh(vapi_payload_af_packet_set_l4_cksum_offload_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_af_packet_set_l4_cksum_offload_reply_hton(vapi_msg_af_packet_set_l4_cksum_offload_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_set_l4_cksum_offload_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_af_packet_set_l4_cksum_offload_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_af_packet_set_l4_cksum_offload_reply_ntoh(vapi_msg_af_packet_set_l4_cksum_offload_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_set_l4_cksum_offload_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_af_packet_set_l4_cksum_offload_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_af_packet_set_l4_cksum_offload_reply_msg_size(vapi_msg_af_packet_set_l4_cksum_offload_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_af_packet_set_l4_cksum_offload_reply()
{
  static const char name[] = "af_packet_set_l4_cksum_offload_reply";
  static const char name_with_crc[] = "af_packet_set_l4_cksum_offload_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_af_packet_set_l4_cksum_offload_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_af_packet_set_l4_cksum_offload_reply, payload),
    sizeof(vapi_msg_af_packet_set_l4_cksum_offload_reply),
    (generic_swap_fn_t)vapi_msg_af_packet_set_l4_cksum_offload_reply_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_set_l4_cksum_offload_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_set_l4_cksum_offload_reply = vapi_register_msg(&__vapi_metadata_af_packet_set_l4_cksum_offload_reply);
  VAPI_DBG("Assigned msg id %d to af_packet_set_l4_cksum_offload_reply", vapi_msg_id_af_packet_set_l4_cksum_offload_reply);
}

static inline void vapi_set_vapi_msg_af_packet_set_l4_cksum_offload_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_af_packet_set_l4_cksum_offload_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_af_packet_set_l4_cksum_offload_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_af_packet_set_l4_cksum_offload
#define defined_vapi_msg_af_packet_set_l4_cksum_offload
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool set; 
} vapi_payload_af_packet_set_l4_cksum_offload;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_af_packet_set_l4_cksum_offload payload;
} vapi_msg_af_packet_set_l4_cksum_offload;

static inline void vapi_msg_af_packet_set_l4_cksum_offload_payload_hton(vapi_payload_af_packet_set_l4_cksum_offload *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_af_packet_set_l4_cksum_offload_payload_ntoh(vapi_payload_af_packet_set_l4_cksum_offload *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_af_packet_set_l4_cksum_offload_hton(vapi_msg_af_packet_set_l4_cksum_offload *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_set_l4_cksum_offload'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_af_packet_set_l4_cksum_offload_payload_hton(&msg->payload);
}

static inline void vapi_msg_af_packet_set_l4_cksum_offload_ntoh(vapi_msg_af_packet_set_l4_cksum_offload *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_set_l4_cksum_offload'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_af_packet_set_l4_cksum_offload_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_af_packet_set_l4_cksum_offload_msg_size(vapi_msg_af_packet_set_l4_cksum_offload *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_af_packet_set_l4_cksum_offload* vapi_alloc_af_packet_set_l4_cksum_offload(struct vapi_ctx_s *ctx)
{
  vapi_msg_af_packet_set_l4_cksum_offload *msg = NULL;
  const size_t size = sizeof(vapi_msg_af_packet_set_l4_cksum_offload);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_af_packet_set_l4_cksum_offload*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_af_packet_set_l4_cksum_offload);

  return msg;
}

static inline vapi_error_e vapi_af_packet_set_l4_cksum_offload(struct vapi_ctx_s *ctx,
  vapi_msg_af_packet_set_l4_cksum_offload *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_af_packet_set_l4_cksum_offload_reply *reply),
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
  vapi_msg_af_packet_set_l4_cksum_offload_hton(msg);
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
    vapi_msg_af_packet_set_l4_cksum_offload_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_af_packet_set_l4_cksum_offload()
{
  static const char name[] = "af_packet_set_l4_cksum_offload";
  static const char name_with_crc[] = "af_packet_set_l4_cksum_offload_319cd5c8";
  static vapi_message_desc_t __vapi_metadata_af_packet_set_l4_cksum_offload = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_af_packet_set_l4_cksum_offload, payload),
    sizeof(vapi_msg_af_packet_set_l4_cksum_offload),
    (generic_swap_fn_t)vapi_msg_af_packet_set_l4_cksum_offload_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_set_l4_cksum_offload_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_set_l4_cksum_offload = vapi_register_msg(&__vapi_metadata_af_packet_set_l4_cksum_offload);
  VAPI_DBG("Assigned msg id %d to af_packet_set_l4_cksum_offload", vapi_msg_id_af_packet_set_l4_cksum_offload);
}
#endif

#ifndef defined_vapi_msg_af_packet_details
#define defined_vapi_msg_af_packet_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 host_if_name[64]; 
} vapi_payload_af_packet_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_af_packet_details payload;
} vapi_msg_af_packet_details;

static inline void vapi_msg_af_packet_details_payload_hton(vapi_payload_af_packet_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_af_packet_details_payload_ntoh(vapi_payload_af_packet_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_af_packet_details_hton(vapi_msg_af_packet_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_af_packet_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_af_packet_details_ntoh(vapi_msg_af_packet_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_af_packet_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_af_packet_details_msg_size(vapi_msg_af_packet_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_af_packet_details()
{
  static const char name[] = "af_packet_details";
  static const char name_with_crc[] = "af_packet_details_58c7c042";
  static vapi_message_desc_t __vapi_metadata_af_packet_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_af_packet_details, payload),
    sizeof(vapi_msg_af_packet_details),
    (generic_swap_fn_t)vapi_msg_af_packet_details_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_details = vapi_register_msg(&__vapi_metadata_af_packet_details);
  VAPI_DBG("Assigned msg id %d to af_packet_details", vapi_msg_id_af_packet_details);
}

static inline void vapi_set_vapi_msg_af_packet_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_af_packet_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_af_packet_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_af_packet_dump
#define defined_vapi_msg_af_packet_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_af_packet_dump;

static inline void vapi_msg_af_packet_dump_hton(vapi_msg_af_packet_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_af_packet_dump_ntoh(vapi_msg_af_packet_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_af_packet_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_af_packet_dump_msg_size(vapi_msg_af_packet_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_af_packet_dump* vapi_alloc_af_packet_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_af_packet_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_af_packet_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_af_packet_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_af_packet_dump);

  return msg;
}

static inline vapi_error_e vapi_af_packet_dump(struct vapi_ctx_s *ctx,
  vapi_msg_af_packet_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_af_packet_details *reply),
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
  vapi_msg_af_packet_dump_hton(msg);
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
    vapi_msg_af_packet_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_af_packet_dump()
{
  static const char name[] = "af_packet_dump";
  static const char name_with_crc[] = "af_packet_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_af_packet_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_af_packet_dump),
    (generic_swap_fn_t)vapi_msg_af_packet_dump_hton,
    (generic_swap_fn_t)vapi_msg_af_packet_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_af_packet_dump = vapi_register_msg(&__vapi_metadata_af_packet_dump);
  VAPI_DBG("Assigned msg id %d to af_packet_dump", vapi_msg_id_af_packet_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
