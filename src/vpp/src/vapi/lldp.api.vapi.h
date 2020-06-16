#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_lldp_lldp_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_lldp_lldp_api_json

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

extern vapi_msg_id_t vapi_msg_id_lldp_config_reply;
extern vapi_msg_id_t vapi_msg_id_lldp_config;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_lldp_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_lldp;

#define DEFINE_VAPI_MSG_IDS_LLDP_API_JSON\
  vapi_msg_id_t vapi_msg_id_lldp_config_reply;\
  vapi_msg_id_t vapi_msg_id_lldp_config;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_lldp_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_lldp;


#ifndef defined_vapi_msg_lldp_config_reply
#define defined_vapi_msg_lldp_config_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lldp_config_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lldp_config_reply payload;
} vapi_msg_lldp_config_reply;

static inline void vapi_msg_lldp_config_reply_payload_hton(vapi_payload_lldp_config_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lldp_config_reply_payload_ntoh(vapi_payload_lldp_config_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lldp_config_reply_hton(vapi_msg_lldp_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lldp_config_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lldp_config_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lldp_config_reply_ntoh(vapi_msg_lldp_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lldp_config_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lldp_config_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lldp_config_reply_msg_size(vapi_msg_lldp_config_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lldp_config_reply()
{
  static const char name[] = "lldp_config_reply";
  static const char name_with_crc[] = "lldp_config_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lldp_config_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lldp_config_reply, payload),
    sizeof(vapi_msg_lldp_config_reply),
    (generic_swap_fn_t)vapi_msg_lldp_config_reply_hton,
    (generic_swap_fn_t)vapi_msg_lldp_config_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lldp_config_reply = vapi_register_msg(&__vapi_metadata_lldp_config_reply);
  VAPI_DBG("Assigned msg id %d to lldp_config_reply", vapi_msg_id_lldp_config_reply);
}

static inline void vapi_set_vapi_msg_lldp_config_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lldp_config_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lldp_config_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lldp_config
#define defined_vapi_msg_lldp_config
typedef struct __attribute__ ((__packed__)) {
  u8 system_name[256];
  u32 tx_hold;
  u32 tx_interval; 
} vapi_payload_lldp_config;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lldp_config payload;
} vapi_msg_lldp_config;

static inline void vapi_msg_lldp_config_payload_hton(vapi_payload_lldp_config *payload)
{
  payload->tx_hold = htobe32(payload->tx_hold);
  payload->tx_interval = htobe32(payload->tx_interval);
}

static inline void vapi_msg_lldp_config_payload_ntoh(vapi_payload_lldp_config *payload)
{
  payload->tx_hold = be32toh(payload->tx_hold);
  payload->tx_interval = be32toh(payload->tx_interval);
}

static inline void vapi_msg_lldp_config_hton(vapi_msg_lldp_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lldp_config'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lldp_config_payload_hton(&msg->payload);
}

static inline void vapi_msg_lldp_config_ntoh(vapi_msg_lldp_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lldp_config'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lldp_config_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lldp_config_msg_size(vapi_msg_lldp_config *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lldp_config* vapi_alloc_lldp_config(struct vapi_ctx_s *ctx)
{
  vapi_msg_lldp_config *msg = NULL;
  const size_t size = sizeof(vapi_msg_lldp_config);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lldp_config*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lldp_config);

  return msg;
}

static inline vapi_error_e vapi_lldp_config(struct vapi_ctx_s *ctx,
  vapi_msg_lldp_config *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lldp_config_reply *reply),
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
  vapi_msg_lldp_config_hton(msg);
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
    vapi_msg_lldp_config_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lldp_config()
{
  static const char name[] = "lldp_config";
  static const char name_with_crc[] = "lldp_config_2410286f";
  static vapi_message_desc_t __vapi_metadata_lldp_config = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lldp_config, payload),
    sizeof(vapi_msg_lldp_config),
    (generic_swap_fn_t)vapi_msg_lldp_config_hton,
    (generic_swap_fn_t)vapi_msg_lldp_config_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lldp_config = vapi_register_msg(&__vapi_metadata_lldp_config);
  VAPI_DBG("Assigned msg id %d to lldp_config", vapi_msg_id_lldp_config);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_lldp_reply
#define defined_vapi_msg_sw_interface_set_lldp_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_lldp_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_lldp_reply payload;
} vapi_msg_sw_interface_set_lldp_reply;

static inline void vapi_msg_sw_interface_set_lldp_reply_payload_hton(vapi_payload_sw_interface_set_lldp_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_lldp_reply_payload_ntoh(vapi_payload_sw_interface_set_lldp_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_lldp_reply_hton(vapi_msg_sw_interface_set_lldp_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_lldp_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_lldp_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_lldp_reply_ntoh(vapi_msg_sw_interface_set_lldp_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_lldp_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_lldp_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_lldp_reply_msg_size(vapi_msg_sw_interface_set_lldp_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_lldp_reply()
{
  static const char name[] = "sw_interface_set_lldp_reply";
  static const char name_with_crc[] = "sw_interface_set_lldp_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_lldp_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_lldp_reply, payload),
    sizeof(vapi_msg_sw_interface_set_lldp_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_lldp_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_lldp_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_lldp_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_lldp_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_lldp_reply", vapi_msg_id_sw_interface_set_lldp_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_lldp_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_lldp_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_lldp_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_lldp
#define defined_vapi_msg_sw_interface_set_lldp
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 port_desc[256];
  u8 mgmt_ip4[4];
  u8 mgmt_ip6[16];
  u8 mgmt_oid[128];
  u8 enable; 
} vapi_payload_sw_interface_set_lldp;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_lldp payload;
} vapi_msg_sw_interface_set_lldp;

static inline void vapi_msg_sw_interface_set_lldp_payload_hton(vapi_payload_sw_interface_set_lldp *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_lldp_payload_ntoh(vapi_payload_sw_interface_set_lldp *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_lldp_hton(vapi_msg_sw_interface_set_lldp *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_lldp'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_lldp_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_lldp_ntoh(vapi_msg_sw_interface_set_lldp *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_lldp'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_lldp_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_lldp_msg_size(vapi_msg_sw_interface_set_lldp *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_lldp* vapi_alloc_sw_interface_set_lldp(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_lldp *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_lldp);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_lldp*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_lldp);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_lldp(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_lldp *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_lldp_reply *reply),
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
  vapi_msg_sw_interface_set_lldp_hton(msg);
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
    vapi_msg_sw_interface_set_lldp_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_lldp()
{
  static const char name[] = "sw_interface_set_lldp";
  static const char name_with_crc[] = "sw_interface_set_lldp_2d85d156";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_lldp = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_lldp, payload),
    sizeof(vapi_msg_sw_interface_set_lldp),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_lldp_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_lldp_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_lldp = vapi_register_msg(&__vapi_metadata_sw_interface_set_lldp);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_lldp", vapi_msg_id_sw_interface_set_lldp);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
