#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_flowprobe_flowprobe_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_flowprobe_flowprobe_api_json

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

extern vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del;
extern vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_flowprobe_params;
extern vapi_msg_id_t vapi_msg_id_flowprobe_params_reply;

#define DEFINE_VAPI_MSG_IDS_FLOWPROBE_API_JSON\
  vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del;\
  vapi_msg_id_t vapi_msg_id_flowprobe_tx_interface_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_flowprobe_params;\
  vapi_msg_id_t vapi_msg_id_flowprobe_params_reply;


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

#ifndef defined_vapi_enum_flowprobe_which_flags
#define defined_vapi_enum_flowprobe_which_flags
typedef enum {
  FLOWPROBE_WHICH_FLAG_IP4 = 1,
  FLOWPROBE_WHICH_FLAG_L2 = 2,
  FLOWPROBE_WHICH_FLAG_IP6 = 4,
} __attribute__((packed)) vapi_enum_flowprobe_which_flags;

#endif

#ifndef defined_vapi_enum_flowprobe_record_flags
#define defined_vapi_enum_flowprobe_record_flags
typedef enum {
  FLOWPROBE_RECORD_FLAG_L2 = 1,
  FLOWPROBE_RECORD_FLAG_L3 = 2,
  FLOWPROBE_RECORD_FLAG_L4 = 4,
} __attribute__((packed)) vapi_enum_flowprobe_record_flags;

#endif

#ifndef defined_vapi_type_interface_index
#define defined_vapi_type_interface_index
typedef u32 vapi_type_interface_index;

#endif

#ifndef defined_vapi_msg_flowprobe_tx_interface_add_del_reply
#define defined_vapi_msg_flowprobe_tx_interface_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_flowprobe_tx_interface_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_flowprobe_tx_interface_add_del_reply payload;
} vapi_msg_flowprobe_tx_interface_add_del_reply;

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_payload_hton(vapi_payload_flowprobe_tx_interface_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_payload_ntoh(vapi_payload_flowprobe_tx_interface_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_hton(vapi_msg_flowprobe_tx_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_reply_ntoh(vapi_msg_flowprobe_tx_interface_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_tx_interface_add_del_reply_msg_size(vapi_msg_flowprobe_tx_interface_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_flowprobe_tx_interface_add_del_reply()
{
  static const char name[] = "flowprobe_tx_interface_add_del_reply";
  static const char name_with_crc[] = "flowprobe_tx_interface_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_flowprobe_tx_interface_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_flowprobe_tx_interface_add_del_reply, payload),
    sizeof(vapi_msg_flowprobe_tx_interface_add_del_reply),
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_tx_interface_add_del_reply = vapi_register_msg(&__vapi_metadata_flowprobe_tx_interface_add_del_reply);
  VAPI_DBG("Assigned msg id %d to flowprobe_tx_interface_add_del_reply", vapi_msg_id_flowprobe_tx_interface_add_del_reply);
}

static inline void vapi_set_vapi_msg_flowprobe_tx_interface_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_flowprobe_tx_interface_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_flowprobe_tx_interface_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_flowprobe_tx_interface_add_del
#define defined_vapi_msg_flowprobe_tx_interface_add_del
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_enum_flowprobe_which_flags which;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_flowprobe_tx_interface_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_flowprobe_tx_interface_add_del payload;
} vapi_msg_flowprobe_tx_interface_add_del;

static inline void vapi_msg_flowprobe_tx_interface_add_del_payload_hton(vapi_payload_flowprobe_tx_interface_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_payload_ntoh(vapi_payload_flowprobe_tx_interface_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_hton(vapi_msg_flowprobe_tx_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_tx_interface_add_del_ntoh(vapi_msg_flowprobe_tx_interface_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_tx_interface_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_flowprobe_tx_interface_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_tx_interface_add_del_msg_size(vapi_msg_flowprobe_tx_interface_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_flowprobe_tx_interface_add_del* vapi_alloc_flowprobe_tx_interface_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_flowprobe_tx_interface_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_flowprobe_tx_interface_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_flowprobe_tx_interface_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_flowprobe_tx_interface_add_del);

  return msg;
}

static inline vapi_error_e vapi_flowprobe_tx_interface_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_flowprobe_tx_interface_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_flowprobe_tx_interface_add_del_reply *reply),
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
  vapi_msg_flowprobe_tx_interface_add_del_hton(msg);
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
    vapi_msg_flowprobe_tx_interface_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_flowprobe_tx_interface_add_del()
{
  static const char name[] = "flowprobe_tx_interface_add_del";
  static const char name_with_crc[] = "flowprobe_tx_interface_add_del_b782c976";
  static vapi_message_desc_t __vapi_metadata_flowprobe_tx_interface_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_flowprobe_tx_interface_add_del, payload),
    sizeof(vapi_msg_flowprobe_tx_interface_add_del),
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_tx_interface_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_tx_interface_add_del = vapi_register_msg(&__vapi_metadata_flowprobe_tx_interface_add_del);
  VAPI_DBG("Assigned msg id %d to flowprobe_tx_interface_add_del", vapi_msg_id_flowprobe_tx_interface_add_del);
}
#endif

#ifndef defined_vapi_msg_flowprobe_params_reply
#define defined_vapi_msg_flowprobe_params_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_flowprobe_params_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_flowprobe_params_reply payload;
} vapi_msg_flowprobe_params_reply;

static inline void vapi_msg_flowprobe_params_reply_payload_hton(vapi_payload_flowprobe_params_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_flowprobe_params_reply_payload_ntoh(vapi_payload_flowprobe_params_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_flowprobe_params_reply_hton(vapi_msg_flowprobe_params_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_flowprobe_params_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_params_reply_ntoh(vapi_msg_flowprobe_params_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_flowprobe_params_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_params_reply_msg_size(vapi_msg_flowprobe_params_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_flowprobe_params_reply()
{
  static const char name[] = "flowprobe_params_reply";
  static const char name_with_crc[] = "flowprobe_params_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_flowprobe_params_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_flowprobe_params_reply, payload),
    sizeof(vapi_msg_flowprobe_params_reply),
    (generic_swap_fn_t)vapi_msg_flowprobe_params_reply_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_params_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_params_reply = vapi_register_msg(&__vapi_metadata_flowprobe_params_reply);
  VAPI_DBG("Assigned msg id %d to flowprobe_params_reply", vapi_msg_id_flowprobe_params_reply);
}

static inline void vapi_set_vapi_msg_flowprobe_params_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_flowprobe_params_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_flowprobe_params_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_flowprobe_params
#define defined_vapi_msg_flowprobe_params
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_flowprobe_record_flags record_flags;
  u32 active_timer;
  u32 passive_timer; 
} vapi_payload_flowprobe_params;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_flowprobe_params payload;
} vapi_msg_flowprobe_params;

static inline void vapi_msg_flowprobe_params_payload_hton(vapi_payload_flowprobe_params *payload)
{
  payload->active_timer = htobe32(payload->active_timer);
  payload->passive_timer = htobe32(payload->passive_timer);
}

static inline void vapi_msg_flowprobe_params_payload_ntoh(vapi_payload_flowprobe_params *payload)
{
  payload->active_timer = be32toh(payload->active_timer);
  payload->passive_timer = be32toh(payload->passive_timer);
}

static inline void vapi_msg_flowprobe_params_hton(vapi_msg_flowprobe_params *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_flowprobe_params_payload_hton(&msg->payload);
}

static inline void vapi_msg_flowprobe_params_ntoh(vapi_msg_flowprobe_params *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flowprobe_params'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_flowprobe_params_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flowprobe_params_msg_size(vapi_msg_flowprobe_params *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_flowprobe_params* vapi_alloc_flowprobe_params(struct vapi_ctx_s *ctx)
{
  vapi_msg_flowprobe_params *msg = NULL;
  const size_t size = sizeof(vapi_msg_flowprobe_params);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_flowprobe_params*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_flowprobe_params);

  return msg;
}

static inline vapi_error_e vapi_flowprobe_params(struct vapi_ctx_s *ctx,
  vapi_msg_flowprobe_params *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_flowprobe_params_reply *reply),
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
  vapi_msg_flowprobe_params_hton(msg);
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
    vapi_msg_flowprobe_params_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_flowprobe_params()
{
  static const char name[] = "flowprobe_params";
  static const char name_with_crc[] = "flowprobe_params_baa46c09";
  static vapi_message_desc_t __vapi_metadata_flowprobe_params = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_flowprobe_params, payload),
    sizeof(vapi_msg_flowprobe_params),
    (generic_swap_fn_t)vapi_msg_flowprobe_params_hton,
    (generic_swap_fn_t)vapi_msg_flowprobe_params_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flowprobe_params = vapi_register_msg(&__vapi_metadata_flowprobe_params);
  VAPI_DBG("Assigned msg id %d to flowprobe_params", vapi_msg_id_flowprobe_params);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
