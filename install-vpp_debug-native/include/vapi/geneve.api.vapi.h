#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_geneve_geneve_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_geneve_geneve_api_json

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

extern vapi_msg_id_t vapi_msg_id_sw_interface_set_geneve_bypass_reply;
extern vapi_msg_id_t vapi_msg_id_geneve_add_del_tunnel;
extern vapi_msg_id_t vapi_msg_id_geneve_add_del_tunnel_reply;
extern vapi_msg_id_t vapi_msg_id_geneve_tunnel_details;
extern vapi_msg_id_t vapi_msg_id_geneve_tunnel_dump;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_geneve_bypass;

#define DEFINE_VAPI_MSG_IDS_GENEVE_API_JSON\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_geneve_bypass_reply;\
  vapi_msg_id_t vapi_msg_id_geneve_add_del_tunnel;\
  vapi_msg_id_t vapi_msg_id_geneve_add_del_tunnel_reply;\
  vapi_msg_id_t vapi_msg_id_geneve_tunnel_details;\
  vapi_msg_id_t vapi_msg_id_geneve_tunnel_dump;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_geneve_bypass;


#ifndef defined_vapi_msg_sw_interface_set_geneve_bypass_reply
#define defined_vapi_msg_sw_interface_set_geneve_bypass_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_geneve_bypass_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_geneve_bypass_reply payload;
} vapi_msg_sw_interface_set_geneve_bypass_reply;

static inline void vapi_msg_sw_interface_set_geneve_bypass_reply_payload_hton(vapi_payload_sw_interface_set_geneve_bypass_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_geneve_bypass_reply_payload_ntoh(vapi_payload_sw_interface_set_geneve_bypass_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_geneve_bypass_reply_hton(vapi_msg_sw_interface_set_geneve_bypass_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_geneve_bypass_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_geneve_bypass_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_geneve_bypass_reply_ntoh(vapi_msg_sw_interface_set_geneve_bypass_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_geneve_bypass_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_geneve_bypass_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_geneve_bypass_reply_msg_size(vapi_msg_sw_interface_set_geneve_bypass_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_geneve_bypass_reply()
{
  static const char name[] = "sw_interface_set_geneve_bypass_reply";
  static const char name_with_crc[] = "sw_interface_set_geneve_bypass_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_geneve_bypass_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_geneve_bypass_reply, payload),
    sizeof(vapi_msg_sw_interface_set_geneve_bypass_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_geneve_bypass_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_geneve_bypass_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_geneve_bypass_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_geneve_bypass_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_geneve_bypass_reply", vapi_msg_id_sw_interface_set_geneve_bypass_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_geneve_bypass_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_geneve_bypass_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_geneve_bypass_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_geneve_add_del_tunnel_reply
#define defined_vapi_msg_geneve_add_del_tunnel_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_geneve_add_del_tunnel_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_geneve_add_del_tunnel_reply payload;
} vapi_msg_geneve_add_del_tunnel_reply;

static inline void vapi_msg_geneve_add_del_tunnel_reply_payload_hton(vapi_payload_geneve_add_del_tunnel_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_geneve_add_del_tunnel_reply_payload_ntoh(vapi_payload_geneve_add_del_tunnel_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_geneve_add_del_tunnel_reply_hton(vapi_msg_geneve_add_del_tunnel_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_add_del_tunnel_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_geneve_add_del_tunnel_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_geneve_add_del_tunnel_reply_ntoh(vapi_msg_geneve_add_del_tunnel_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_add_del_tunnel_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_geneve_add_del_tunnel_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_geneve_add_del_tunnel_reply_msg_size(vapi_msg_geneve_add_del_tunnel_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_geneve_add_del_tunnel_reply()
{
  static const char name[] = "geneve_add_del_tunnel_reply";
  static const char name_with_crc[] = "geneve_add_del_tunnel_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_geneve_add_del_tunnel_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_geneve_add_del_tunnel_reply, payload),
    sizeof(vapi_msg_geneve_add_del_tunnel_reply),
    (generic_swap_fn_t)vapi_msg_geneve_add_del_tunnel_reply_hton,
    (generic_swap_fn_t)vapi_msg_geneve_add_del_tunnel_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_geneve_add_del_tunnel_reply = vapi_register_msg(&__vapi_metadata_geneve_add_del_tunnel_reply);
  VAPI_DBG("Assigned msg id %d to geneve_add_del_tunnel_reply", vapi_msg_id_geneve_add_del_tunnel_reply);
}

static inline void vapi_set_vapi_msg_geneve_add_del_tunnel_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_geneve_add_del_tunnel_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_geneve_add_del_tunnel_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_geneve_add_del_tunnel
#define defined_vapi_msg_geneve_add_del_tunnel
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_ipv6;
  u8 local_address[16];
  u8 remote_address[16];
  u32 mcast_sw_if_index;
  u32 encap_vrf_id;
  u32 decap_next_index;
  u32 vni; 
} vapi_payload_geneve_add_del_tunnel;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_geneve_add_del_tunnel payload;
} vapi_msg_geneve_add_del_tunnel;

static inline void vapi_msg_geneve_add_del_tunnel_payload_hton(vapi_payload_geneve_add_del_tunnel *payload)
{
  payload->mcast_sw_if_index = htobe32(payload->mcast_sw_if_index);
  payload->encap_vrf_id = htobe32(payload->encap_vrf_id);
  payload->decap_next_index = htobe32(payload->decap_next_index);
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_geneve_add_del_tunnel_payload_ntoh(vapi_payload_geneve_add_del_tunnel *payload)
{
  payload->mcast_sw_if_index = be32toh(payload->mcast_sw_if_index);
  payload->encap_vrf_id = be32toh(payload->encap_vrf_id);
  payload->decap_next_index = be32toh(payload->decap_next_index);
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_geneve_add_del_tunnel_hton(vapi_msg_geneve_add_del_tunnel *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_add_del_tunnel'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_geneve_add_del_tunnel_payload_hton(&msg->payload);
}

static inline void vapi_msg_geneve_add_del_tunnel_ntoh(vapi_msg_geneve_add_del_tunnel *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_add_del_tunnel'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_geneve_add_del_tunnel_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_geneve_add_del_tunnel_msg_size(vapi_msg_geneve_add_del_tunnel *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_geneve_add_del_tunnel* vapi_alloc_geneve_add_del_tunnel(struct vapi_ctx_s *ctx)
{
  vapi_msg_geneve_add_del_tunnel *msg = NULL;
  const size_t size = sizeof(vapi_msg_geneve_add_del_tunnel);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_geneve_add_del_tunnel*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_geneve_add_del_tunnel);

  return msg;
}

static inline vapi_error_e vapi_geneve_add_del_tunnel(struct vapi_ctx_s *ctx,
  vapi_msg_geneve_add_del_tunnel *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_geneve_add_del_tunnel_reply *reply),
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
  vapi_msg_geneve_add_del_tunnel_hton(msg);
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
    vapi_msg_geneve_add_del_tunnel_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_geneve_add_del_tunnel()
{
  static const char name[] = "geneve_add_del_tunnel";
  static const char name_with_crc[] = "geneve_add_del_tunnel_403cf981";
  static vapi_message_desc_t __vapi_metadata_geneve_add_del_tunnel = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_geneve_add_del_tunnel, payload),
    sizeof(vapi_msg_geneve_add_del_tunnel),
    (generic_swap_fn_t)vapi_msg_geneve_add_del_tunnel_hton,
    (generic_swap_fn_t)vapi_msg_geneve_add_del_tunnel_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_geneve_add_del_tunnel = vapi_register_msg(&__vapi_metadata_geneve_add_del_tunnel);
  VAPI_DBG("Assigned msg id %d to geneve_add_del_tunnel", vapi_msg_id_geneve_add_del_tunnel);
}
#endif

#ifndef defined_vapi_msg_geneve_tunnel_details
#define defined_vapi_msg_geneve_tunnel_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 src_address[16];
  u8 dst_address[16];
  u32 mcast_sw_if_index;
  u32 encap_vrf_id;
  u32 decap_next_index;
  u32 vni;
  u8 is_ipv6; 
} vapi_payload_geneve_tunnel_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_geneve_tunnel_details payload;
} vapi_msg_geneve_tunnel_details;

static inline void vapi_msg_geneve_tunnel_details_payload_hton(vapi_payload_geneve_tunnel_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->mcast_sw_if_index = htobe32(payload->mcast_sw_if_index);
  payload->encap_vrf_id = htobe32(payload->encap_vrf_id);
  payload->decap_next_index = htobe32(payload->decap_next_index);
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_geneve_tunnel_details_payload_ntoh(vapi_payload_geneve_tunnel_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->mcast_sw_if_index = be32toh(payload->mcast_sw_if_index);
  payload->encap_vrf_id = be32toh(payload->encap_vrf_id);
  payload->decap_next_index = be32toh(payload->decap_next_index);
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_geneve_tunnel_details_hton(vapi_msg_geneve_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_tunnel_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_geneve_tunnel_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_geneve_tunnel_details_ntoh(vapi_msg_geneve_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_tunnel_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_geneve_tunnel_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_geneve_tunnel_details_msg_size(vapi_msg_geneve_tunnel_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_geneve_tunnel_details()
{
  static const char name[] = "geneve_tunnel_details";
  static const char name_with_crc[] = "geneve_tunnel_details_024fa31f";
  static vapi_message_desc_t __vapi_metadata_geneve_tunnel_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_geneve_tunnel_details, payload),
    sizeof(vapi_msg_geneve_tunnel_details),
    (generic_swap_fn_t)vapi_msg_geneve_tunnel_details_hton,
    (generic_swap_fn_t)vapi_msg_geneve_tunnel_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_geneve_tunnel_details = vapi_register_msg(&__vapi_metadata_geneve_tunnel_details);
  VAPI_DBG("Assigned msg id %d to geneve_tunnel_details", vapi_msg_id_geneve_tunnel_details);
}

static inline void vapi_set_vapi_msg_geneve_tunnel_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_geneve_tunnel_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_geneve_tunnel_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_geneve_tunnel_dump
#define defined_vapi_msg_geneve_tunnel_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_geneve_tunnel_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_geneve_tunnel_dump payload;
} vapi_msg_geneve_tunnel_dump;

static inline void vapi_msg_geneve_tunnel_dump_payload_hton(vapi_payload_geneve_tunnel_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_geneve_tunnel_dump_payload_ntoh(vapi_payload_geneve_tunnel_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_geneve_tunnel_dump_hton(vapi_msg_geneve_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_tunnel_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_geneve_tunnel_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_geneve_tunnel_dump_ntoh(vapi_msg_geneve_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_geneve_tunnel_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_geneve_tunnel_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_geneve_tunnel_dump_msg_size(vapi_msg_geneve_tunnel_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_geneve_tunnel_dump* vapi_alloc_geneve_tunnel_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_geneve_tunnel_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_geneve_tunnel_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_geneve_tunnel_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_geneve_tunnel_dump);

  return msg;
}

static inline vapi_error_e vapi_geneve_tunnel_dump(struct vapi_ctx_s *ctx,
  vapi_msg_geneve_tunnel_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_geneve_tunnel_details *reply),
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
  vapi_msg_geneve_tunnel_dump_hton(msg);
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
    vapi_msg_geneve_tunnel_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_geneve_tunnel_dump()
{
  static const char name[] = "geneve_tunnel_dump";
  static const char name_with_crc[] = "geneve_tunnel_dump_529cb13f";
  static vapi_message_desc_t __vapi_metadata_geneve_tunnel_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_geneve_tunnel_dump, payload),
    sizeof(vapi_msg_geneve_tunnel_dump),
    (generic_swap_fn_t)vapi_msg_geneve_tunnel_dump_hton,
    (generic_swap_fn_t)vapi_msg_geneve_tunnel_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_geneve_tunnel_dump = vapi_register_msg(&__vapi_metadata_geneve_tunnel_dump);
  VAPI_DBG("Assigned msg id %d to geneve_tunnel_dump", vapi_msg_id_geneve_tunnel_dump);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_geneve_bypass
#define defined_vapi_msg_sw_interface_set_geneve_bypass
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_ipv6;
  u8 enable; 
} vapi_payload_sw_interface_set_geneve_bypass;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_geneve_bypass payload;
} vapi_msg_sw_interface_set_geneve_bypass;

static inline void vapi_msg_sw_interface_set_geneve_bypass_payload_hton(vapi_payload_sw_interface_set_geneve_bypass *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_geneve_bypass_payload_ntoh(vapi_payload_sw_interface_set_geneve_bypass *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_geneve_bypass_hton(vapi_msg_sw_interface_set_geneve_bypass *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_geneve_bypass'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_geneve_bypass_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_geneve_bypass_ntoh(vapi_msg_sw_interface_set_geneve_bypass *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_geneve_bypass'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_geneve_bypass_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_geneve_bypass_msg_size(vapi_msg_sw_interface_set_geneve_bypass *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_geneve_bypass* vapi_alloc_sw_interface_set_geneve_bypass(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_geneve_bypass *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_geneve_bypass);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_geneve_bypass*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_geneve_bypass);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_geneve_bypass(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_geneve_bypass *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_geneve_bypass_reply *reply),
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
  vapi_msg_sw_interface_set_geneve_bypass_hton(msg);
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
    vapi_msg_sw_interface_set_geneve_bypass_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_geneve_bypass()
{
  static const char name[] = "sw_interface_set_geneve_bypass";
  static const char name_with_crc[] = "sw_interface_set_geneve_bypass_e74ca095";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_geneve_bypass = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_geneve_bypass, payload),
    sizeof(vapi_msg_sw_interface_set_geneve_bypass),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_geneve_bypass_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_geneve_bypass_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_geneve_bypass = vapi_register_msg(&__vapi_metadata_sw_interface_set_geneve_bypass);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_geneve_bypass", vapi_msg_id_sw_interface_set_geneve_bypass);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
