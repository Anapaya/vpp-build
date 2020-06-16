#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_lacp_lacp_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_lacp_lacp_api_json

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

extern vapi_msg_id_t vapi_msg_id_sw_interface_lacp_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_lacp_dump;

#define DEFINE_VAPI_MSG_IDS_LACP_API_JSON\
  vapi_msg_id_t vapi_msg_id_sw_interface_lacp_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_lacp_dump;


#ifndef defined_vapi_msg_sw_interface_lacp_details
#define defined_vapi_msg_sw_interface_lacp_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 interface_name[64];
  u32 rx_state;
  u32 tx_state;
  u32 mux_state;
  u32 ptx_state;
  u8 bond_interface_name[64];
  u16 actor_system_priority;
  u8 actor_system[6];
  u16 actor_key;
  u16 actor_port_priority;
  u16 actor_port_number;
  u8 actor_state;
  u16 partner_system_priority;
  u8 partner_system[6];
  u16 partner_key;
  u16 partner_port_priority;
  u16 partner_port_number;
  u8 partner_state; 
} vapi_payload_sw_interface_lacp_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_lacp_details payload;
} vapi_msg_sw_interface_lacp_details;

static inline void vapi_msg_sw_interface_lacp_details_payload_hton(vapi_payload_sw_interface_lacp_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->rx_state = htobe32(payload->rx_state);
  payload->tx_state = htobe32(payload->tx_state);
  payload->mux_state = htobe32(payload->mux_state);
  payload->ptx_state = htobe32(payload->ptx_state);
  payload->actor_system_priority = htobe16(payload->actor_system_priority);
  payload->actor_key = htobe16(payload->actor_key);
  payload->actor_port_priority = htobe16(payload->actor_port_priority);
  payload->actor_port_number = htobe16(payload->actor_port_number);
  payload->partner_system_priority = htobe16(payload->partner_system_priority);
  payload->partner_key = htobe16(payload->partner_key);
  payload->partner_port_priority = htobe16(payload->partner_port_priority);
  payload->partner_port_number = htobe16(payload->partner_port_number);
}

static inline void vapi_msg_sw_interface_lacp_details_payload_ntoh(vapi_payload_sw_interface_lacp_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->rx_state = be32toh(payload->rx_state);
  payload->tx_state = be32toh(payload->tx_state);
  payload->mux_state = be32toh(payload->mux_state);
  payload->ptx_state = be32toh(payload->ptx_state);
  payload->actor_system_priority = be16toh(payload->actor_system_priority);
  payload->actor_key = be16toh(payload->actor_key);
  payload->actor_port_priority = be16toh(payload->actor_port_priority);
  payload->actor_port_number = be16toh(payload->actor_port_number);
  payload->partner_system_priority = be16toh(payload->partner_system_priority);
  payload->partner_key = be16toh(payload->partner_key);
  payload->partner_port_priority = be16toh(payload->partner_port_priority);
  payload->partner_port_number = be16toh(payload->partner_port_number);
}

static inline void vapi_msg_sw_interface_lacp_details_hton(vapi_msg_sw_interface_lacp_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_lacp_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_lacp_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_lacp_details_ntoh(vapi_msg_sw_interface_lacp_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_lacp_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_lacp_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_lacp_details_msg_size(vapi_msg_sw_interface_lacp_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_lacp_details()
{
  static const char name[] = "sw_interface_lacp_details";
  static const char name_with_crc[] = "sw_interface_lacp_details_8a14b95e";
  static vapi_message_desc_t __vapi_metadata_sw_interface_lacp_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_lacp_details, payload),
    sizeof(vapi_msg_sw_interface_lacp_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_lacp_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_lacp_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_lacp_details = vapi_register_msg(&__vapi_metadata_sw_interface_lacp_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_lacp_details", vapi_msg_id_sw_interface_lacp_details);
}

static inline void vapi_set_vapi_msg_sw_interface_lacp_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_lacp_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_lacp_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_lacp_dump
#define defined_vapi_msg_sw_interface_lacp_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_interface_lacp_dump;

static inline void vapi_msg_sw_interface_lacp_dump_hton(vapi_msg_sw_interface_lacp_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_lacp_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_interface_lacp_dump_ntoh(vapi_msg_sw_interface_lacp_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_lacp_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_interface_lacp_dump_msg_size(vapi_msg_sw_interface_lacp_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_lacp_dump* vapi_alloc_sw_interface_lacp_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_lacp_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_lacp_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_lacp_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_lacp_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_lacp_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_lacp_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_lacp_details *reply),
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
  vapi_msg_sw_interface_lacp_dump_hton(msg);
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
    vapi_msg_sw_interface_lacp_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_lacp_dump()
{
  static const char name[] = "sw_interface_lacp_dump";
  static const char name_with_crc[] = "sw_interface_lacp_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_interface_lacp_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_interface_lacp_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_lacp_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_lacp_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_lacp_dump = vapi_register_msg(&__vapi_metadata_sw_interface_lacp_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_lacp_dump", vapi_msg_id_sw_interface_lacp_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
