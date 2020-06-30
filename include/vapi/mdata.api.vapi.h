#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_mdata_mdata_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_mdata_mdata_api_json

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

extern vapi_msg_id_t vapi_msg_id_mdata_enable_disable;
extern vapi_msg_id_t vapi_msg_id_mdata_enable_disable_reply;

#define DEFINE_VAPI_MSG_IDS_MDATA_API_JSON\
  vapi_msg_id_t vapi_msg_id_mdata_enable_disable;\
  vapi_msg_id_t vapi_msg_id_mdata_enable_disable_reply;


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

#ifndef defined_vapi_msg_mdata_enable_disable_reply
#define defined_vapi_msg_mdata_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_mdata_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mdata_enable_disable_reply payload;
} vapi_msg_mdata_enable_disable_reply;

static inline void vapi_msg_mdata_enable_disable_reply_payload_hton(vapi_payload_mdata_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_mdata_enable_disable_reply_payload_ntoh(vapi_payload_mdata_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_mdata_enable_disable_reply_hton(vapi_msg_mdata_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mdata_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mdata_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_mdata_enable_disable_reply_ntoh(vapi_msg_mdata_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mdata_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mdata_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mdata_enable_disable_reply_msg_size(vapi_msg_mdata_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mdata_enable_disable_reply()
{
  static const char name[] = "mdata_enable_disable_reply";
  static const char name_with_crc[] = "mdata_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_mdata_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mdata_enable_disable_reply, payload),
    sizeof(vapi_msg_mdata_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_mdata_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_mdata_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mdata_enable_disable_reply = vapi_register_msg(&__vapi_metadata_mdata_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to mdata_enable_disable_reply", vapi_msg_id_mdata_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_mdata_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mdata_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mdata_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mdata_enable_disable
#define defined_vapi_msg_mdata_enable_disable
typedef struct __attribute__ ((__packed__)) {
  bool enable_disable; 
} vapi_payload_mdata_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_mdata_enable_disable payload;
} vapi_msg_mdata_enable_disable;

static inline void vapi_msg_mdata_enable_disable_payload_hton(vapi_payload_mdata_enable_disable *payload)
{

}

static inline void vapi_msg_mdata_enable_disable_payload_ntoh(vapi_payload_mdata_enable_disable *payload)
{

}

static inline void vapi_msg_mdata_enable_disable_hton(vapi_msg_mdata_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mdata_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_mdata_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_mdata_enable_disable_ntoh(vapi_msg_mdata_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mdata_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_mdata_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mdata_enable_disable_msg_size(vapi_msg_mdata_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mdata_enable_disable* vapi_alloc_mdata_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_mdata_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_mdata_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mdata_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mdata_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_mdata_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_mdata_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mdata_enable_disable_reply *reply),
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
  vapi_msg_mdata_enable_disable_hton(msg);
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
    vapi_msg_mdata_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mdata_enable_disable()
{
  static const char name[] = "mdata_enable_disable";
  static const char name_with_crc[] = "mdata_enable_disable_2e7b47df";
  static vapi_message_desc_t __vapi_metadata_mdata_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_mdata_enable_disable, payload),
    sizeof(vapi_msg_mdata_enable_disable),
    (generic_swap_fn_t)vapi_msg_mdata_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_mdata_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mdata_enable_disable = vapi_register_msg(&__vapi_metadata_mdata_enable_disable);
  VAPI_DBG("Assigned msg id %d to mdata_enable_disable", vapi_msg_id_mdata_enable_disable);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
