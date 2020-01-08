#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_bonding_bond_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_bonding_bond_api_json

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

extern vapi_msg_id_t vapi_msg_id_bond_enslave;
extern vapi_msg_id_t vapi_msg_id_bond_create;
extern vapi_msg_id_t vapi_msg_id_bond_create_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_slave_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_bond_details;
extern vapi_msg_id_t vapi_msg_id_bond_delete_reply;
extern vapi_msg_id_t vapi_msg_id_bond_detach_slave;
extern vapi_msg_id_t vapi_msg_id_sw_interface_bond_dump;
extern vapi_msg_id_t vapi_msg_id_sw_interface_slave_dump;
extern vapi_msg_id_t vapi_msg_id_bond_detach_slave_reply;
extern vapi_msg_id_t vapi_msg_id_bond_enslave_reply;
extern vapi_msg_id_t vapi_msg_id_bond_delete;

#define DEFINE_VAPI_MSG_IDS_BOND_API_JSON\
  vapi_msg_id_t vapi_msg_id_bond_enslave;\
  vapi_msg_id_t vapi_msg_id_bond_create;\
  vapi_msg_id_t vapi_msg_id_bond_create_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_slave_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_bond_details;\
  vapi_msg_id_t vapi_msg_id_bond_delete_reply;\
  vapi_msg_id_t vapi_msg_id_bond_detach_slave;\
  vapi_msg_id_t vapi_msg_id_sw_interface_bond_dump;\
  vapi_msg_id_t vapi_msg_id_sw_interface_slave_dump;\
  vapi_msg_id_t vapi_msg_id_bond_detach_slave_reply;\
  vapi_msg_id_t vapi_msg_id_bond_enslave_reply;\
  vapi_msg_id_t vapi_msg_id_bond_delete;


#ifndef defined_vapi_msg_bond_enslave_reply
#define defined_vapi_msg_bond_enslave_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bond_enslave_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bond_enslave_reply payload;
} vapi_msg_bond_enslave_reply;

static inline void vapi_msg_bond_enslave_reply_payload_hton(vapi_payload_bond_enslave_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bond_enslave_reply_payload_ntoh(vapi_payload_bond_enslave_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bond_enslave_reply_hton(vapi_msg_bond_enslave_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_enslave_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bond_enslave_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_enslave_reply_ntoh(vapi_msg_bond_enslave_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_enslave_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bond_enslave_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_enslave_reply_msg_size(vapi_msg_bond_enslave_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bond_enslave_reply()
{
  static const char name[] = "bond_enslave_reply";
  static const char name_with_crc[] = "bond_enslave_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bond_enslave_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bond_enslave_reply, payload),
    sizeof(vapi_msg_bond_enslave_reply),
    (generic_swap_fn_t)vapi_msg_bond_enslave_reply_hton,
    (generic_swap_fn_t)vapi_msg_bond_enslave_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_enslave_reply = vapi_register_msg(&__vapi_metadata_bond_enslave_reply);
  VAPI_DBG("Assigned msg id %d to bond_enslave_reply", vapi_msg_id_bond_enslave_reply);
}

static inline void vapi_set_vapi_msg_bond_enslave_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bond_enslave_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bond_enslave_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bond_enslave
#define defined_vapi_msg_bond_enslave
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 bond_sw_if_index;
  u8 is_passive;
  u8 is_long_timeout; 
} vapi_payload_bond_enslave;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bond_enslave payload;
} vapi_msg_bond_enslave;

static inline void vapi_msg_bond_enslave_payload_hton(vapi_payload_bond_enslave *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->bond_sw_if_index = htobe32(payload->bond_sw_if_index);
}

static inline void vapi_msg_bond_enslave_payload_ntoh(vapi_payload_bond_enslave *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->bond_sw_if_index = be32toh(payload->bond_sw_if_index);
}

static inline void vapi_msg_bond_enslave_hton(vapi_msg_bond_enslave *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_enslave'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bond_enslave_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_enslave_ntoh(vapi_msg_bond_enslave *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_enslave'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bond_enslave_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_enslave_msg_size(vapi_msg_bond_enslave *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bond_enslave* vapi_alloc_bond_enslave(struct vapi_ctx_s *ctx)
{
  vapi_msg_bond_enslave *msg = NULL;
  const size_t size = sizeof(vapi_msg_bond_enslave);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bond_enslave*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bond_enslave);

  return msg;
}

static inline vapi_error_e vapi_bond_enslave(struct vapi_ctx_s *ctx,
  vapi_msg_bond_enslave *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bond_enslave_reply *reply),
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
  vapi_msg_bond_enslave_hton(msg);
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
    vapi_msg_bond_enslave_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bond_enslave()
{
  static const char name[] = "bond_enslave";
  static const char name_with_crc[] = "bond_enslave_0ded34f6";
  static vapi_message_desc_t __vapi_metadata_bond_enslave = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bond_enslave, payload),
    sizeof(vapi_msg_bond_enslave),
    (generic_swap_fn_t)vapi_msg_bond_enslave_hton,
    (generic_swap_fn_t)vapi_msg_bond_enslave_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_enslave = vapi_register_msg(&__vapi_metadata_bond_enslave);
  VAPI_DBG("Assigned msg id %d to bond_enslave", vapi_msg_id_bond_enslave);
}
#endif

#ifndef defined_vapi_msg_bond_create_reply
#define defined_vapi_msg_bond_create_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_bond_create_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bond_create_reply payload;
} vapi_msg_bond_create_reply;

static inline void vapi_msg_bond_create_reply_payload_hton(vapi_payload_bond_create_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bond_create_reply_payload_ntoh(vapi_payload_bond_create_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bond_create_reply_hton(vapi_msg_bond_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_create_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bond_create_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_create_reply_ntoh(vapi_msg_bond_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_create_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bond_create_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_create_reply_msg_size(vapi_msg_bond_create_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bond_create_reply()
{
  static const char name[] = "bond_create_reply";
  static const char name_with_crc[] = "bond_create_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_bond_create_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bond_create_reply, payload),
    sizeof(vapi_msg_bond_create_reply),
    (generic_swap_fn_t)vapi_msg_bond_create_reply_hton,
    (generic_swap_fn_t)vapi_msg_bond_create_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_create_reply = vapi_register_msg(&__vapi_metadata_bond_create_reply);
  VAPI_DBG("Assigned msg id %d to bond_create_reply", vapi_msg_id_bond_create_reply);
}

static inline void vapi_set_vapi_msg_bond_create_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bond_create_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bond_create_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bond_create
#define defined_vapi_msg_bond_create
typedef struct __attribute__ ((__packed__)) {
  u32 id;
  u8 use_custom_mac;
  u8 mac_address[6];
  u8 mode;
  u8 lb;
  u8 numa_only; 
} vapi_payload_bond_create;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bond_create payload;
} vapi_msg_bond_create;

static inline void vapi_msg_bond_create_payload_hton(vapi_payload_bond_create *payload)
{
  payload->id = htobe32(payload->id);
}

static inline void vapi_msg_bond_create_payload_ntoh(vapi_payload_bond_create *payload)
{
  payload->id = be32toh(payload->id);
}

static inline void vapi_msg_bond_create_hton(vapi_msg_bond_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_create'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bond_create_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_create_ntoh(vapi_msg_bond_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_create'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bond_create_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_create_msg_size(vapi_msg_bond_create *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bond_create* vapi_alloc_bond_create(struct vapi_ctx_s *ctx)
{
  vapi_msg_bond_create *msg = NULL;
  const size_t size = sizeof(vapi_msg_bond_create);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bond_create*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bond_create);

  return msg;
}

static inline vapi_error_e vapi_bond_create(struct vapi_ctx_s *ctx,
  vapi_msg_bond_create *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bond_create_reply *reply),
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
  vapi_msg_bond_create_hton(msg);
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
    vapi_msg_bond_create_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bond_create()
{
  static const char name[] = "bond_create";
  static const char name_with_crc[] = "bond_create_f19b4ad0";
  static vapi_message_desc_t __vapi_metadata_bond_create = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bond_create, payload),
    sizeof(vapi_msg_bond_create),
    (generic_swap_fn_t)vapi_msg_bond_create_hton,
    (generic_swap_fn_t)vapi_msg_bond_create_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_create = vapi_register_msg(&__vapi_metadata_bond_create);
  VAPI_DBG("Assigned msg id %d to bond_create", vapi_msg_id_bond_create);
}
#endif

#ifndef defined_vapi_msg_sw_interface_slave_details
#define defined_vapi_msg_sw_interface_slave_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 interface_name[64];
  u8 is_passive;
  u8 is_long_timeout; 
} vapi_payload_sw_interface_slave_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_slave_details payload;
} vapi_msg_sw_interface_slave_details;

static inline void vapi_msg_sw_interface_slave_details_payload_hton(vapi_payload_sw_interface_slave_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_slave_details_payload_ntoh(vapi_payload_sw_interface_slave_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_slave_details_hton(vapi_msg_sw_interface_slave_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_slave_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_slave_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_slave_details_ntoh(vapi_msg_sw_interface_slave_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_slave_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_slave_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_slave_details_msg_size(vapi_msg_sw_interface_slave_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_slave_details()
{
  static const char name[] = "sw_interface_slave_details";
  static const char name_with_crc[] = "sw_interface_slave_details_d5c58e45";
  static vapi_message_desc_t __vapi_metadata_sw_interface_slave_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_slave_details, payload),
    sizeof(vapi_msg_sw_interface_slave_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_slave_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_slave_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_slave_details = vapi_register_msg(&__vapi_metadata_sw_interface_slave_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_slave_details", vapi_msg_id_sw_interface_slave_details);
}

static inline void vapi_set_vapi_msg_sw_interface_slave_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_slave_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_slave_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_bond_details
#define defined_vapi_msg_sw_interface_bond_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 id;
  u8 interface_name[64];
  u8 mode;
  u8 lb;
  u8 numa_only;
  u32 active_slaves;
  u32 slaves; 
} vapi_payload_sw_interface_bond_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_bond_details payload;
} vapi_msg_sw_interface_bond_details;

static inline void vapi_msg_sw_interface_bond_details_payload_hton(vapi_payload_sw_interface_bond_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->id = htobe32(payload->id);
  payload->active_slaves = htobe32(payload->active_slaves);
  payload->slaves = htobe32(payload->slaves);
}

static inline void vapi_msg_sw_interface_bond_details_payload_ntoh(vapi_payload_sw_interface_bond_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->id = be32toh(payload->id);
  payload->active_slaves = be32toh(payload->active_slaves);
  payload->slaves = be32toh(payload->slaves);
}

static inline void vapi_msg_sw_interface_bond_details_hton(vapi_msg_sw_interface_bond_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_bond_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_bond_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_bond_details_ntoh(vapi_msg_sw_interface_bond_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_bond_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_bond_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_bond_details_msg_size(vapi_msg_sw_interface_bond_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_bond_details()
{
  static const char name[] = "sw_interface_bond_details";
  static const char name_with_crc[] = "sw_interface_bond_details_a8ac5a5f";
  static vapi_message_desc_t __vapi_metadata_sw_interface_bond_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_bond_details, payload),
    sizeof(vapi_msg_sw_interface_bond_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_bond_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_bond_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_bond_details = vapi_register_msg(&__vapi_metadata_sw_interface_bond_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_bond_details", vapi_msg_id_sw_interface_bond_details);
}

static inline void vapi_set_vapi_msg_sw_interface_bond_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_bond_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_bond_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bond_delete_reply
#define defined_vapi_msg_bond_delete_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bond_delete_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bond_delete_reply payload;
} vapi_msg_bond_delete_reply;

static inline void vapi_msg_bond_delete_reply_payload_hton(vapi_payload_bond_delete_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bond_delete_reply_payload_ntoh(vapi_payload_bond_delete_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bond_delete_reply_hton(vapi_msg_bond_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_delete_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bond_delete_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_delete_reply_ntoh(vapi_msg_bond_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_delete_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bond_delete_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_delete_reply_msg_size(vapi_msg_bond_delete_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bond_delete_reply()
{
  static const char name[] = "bond_delete_reply";
  static const char name_with_crc[] = "bond_delete_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bond_delete_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bond_delete_reply, payload),
    sizeof(vapi_msg_bond_delete_reply),
    (generic_swap_fn_t)vapi_msg_bond_delete_reply_hton,
    (generic_swap_fn_t)vapi_msg_bond_delete_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_delete_reply = vapi_register_msg(&__vapi_metadata_bond_delete_reply);
  VAPI_DBG("Assigned msg id %d to bond_delete_reply", vapi_msg_id_bond_delete_reply);
}

static inline void vapi_set_vapi_msg_bond_delete_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bond_delete_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bond_delete_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bond_detach_slave_reply
#define defined_vapi_msg_bond_detach_slave_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bond_detach_slave_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bond_detach_slave_reply payload;
} vapi_msg_bond_detach_slave_reply;

static inline void vapi_msg_bond_detach_slave_reply_payload_hton(vapi_payload_bond_detach_slave_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bond_detach_slave_reply_payload_ntoh(vapi_payload_bond_detach_slave_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bond_detach_slave_reply_hton(vapi_msg_bond_detach_slave_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_detach_slave_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bond_detach_slave_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_detach_slave_reply_ntoh(vapi_msg_bond_detach_slave_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_detach_slave_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bond_detach_slave_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_detach_slave_reply_msg_size(vapi_msg_bond_detach_slave_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bond_detach_slave_reply()
{
  static const char name[] = "bond_detach_slave_reply";
  static const char name_with_crc[] = "bond_detach_slave_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bond_detach_slave_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bond_detach_slave_reply, payload),
    sizeof(vapi_msg_bond_detach_slave_reply),
    (generic_swap_fn_t)vapi_msg_bond_detach_slave_reply_hton,
    (generic_swap_fn_t)vapi_msg_bond_detach_slave_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_detach_slave_reply = vapi_register_msg(&__vapi_metadata_bond_detach_slave_reply);
  VAPI_DBG("Assigned msg id %d to bond_detach_slave_reply", vapi_msg_id_bond_detach_slave_reply);
}

static inline void vapi_set_vapi_msg_bond_detach_slave_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bond_detach_slave_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bond_detach_slave_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bond_detach_slave
#define defined_vapi_msg_bond_detach_slave
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_bond_detach_slave;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bond_detach_slave payload;
} vapi_msg_bond_detach_slave;

static inline void vapi_msg_bond_detach_slave_payload_hton(vapi_payload_bond_detach_slave *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bond_detach_slave_payload_ntoh(vapi_payload_bond_detach_slave *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bond_detach_slave_hton(vapi_msg_bond_detach_slave *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_detach_slave'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bond_detach_slave_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_detach_slave_ntoh(vapi_msg_bond_detach_slave *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_detach_slave'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bond_detach_slave_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_detach_slave_msg_size(vapi_msg_bond_detach_slave *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bond_detach_slave* vapi_alloc_bond_detach_slave(struct vapi_ctx_s *ctx)
{
  vapi_msg_bond_detach_slave *msg = NULL;
  const size_t size = sizeof(vapi_msg_bond_detach_slave);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bond_detach_slave*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bond_detach_slave);

  return msg;
}

static inline vapi_error_e vapi_bond_detach_slave(struct vapi_ctx_s *ctx,
  vapi_msg_bond_detach_slave *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bond_detach_slave_reply *reply),
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
  vapi_msg_bond_detach_slave_hton(msg);
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
    vapi_msg_bond_detach_slave_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bond_detach_slave()
{
  static const char name[] = "bond_detach_slave";
  static const char name_with_crc[] = "bond_detach_slave_529cb13f";
  static vapi_message_desc_t __vapi_metadata_bond_detach_slave = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bond_detach_slave, payload),
    sizeof(vapi_msg_bond_detach_slave),
    (generic_swap_fn_t)vapi_msg_bond_detach_slave_hton,
    (generic_swap_fn_t)vapi_msg_bond_detach_slave_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_detach_slave = vapi_register_msg(&__vapi_metadata_bond_detach_slave);
  VAPI_DBG("Assigned msg id %d to bond_detach_slave", vapi_msg_id_bond_detach_slave);
}
#endif

#ifndef defined_vapi_msg_sw_interface_bond_dump
#define defined_vapi_msg_sw_interface_bond_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_interface_bond_dump;

static inline void vapi_msg_sw_interface_bond_dump_hton(vapi_msg_sw_interface_bond_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_bond_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_interface_bond_dump_ntoh(vapi_msg_sw_interface_bond_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_bond_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_interface_bond_dump_msg_size(vapi_msg_sw_interface_bond_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_bond_dump* vapi_alloc_sw_interface_bond_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_bond_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_bond_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_bond_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_bond_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_bond_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_bond_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_bond_details *reply),
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
  vapi_msg_sw_interface_bond_dump_hton(msg);
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
    vapi_msg_sw_interface_bond_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_bond_dump()
{
  static const char name[] = "sw_interface_bond_dump";
  static const char name_with_crc[] = "sw_interface_bond_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_interface_bond_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_interface_bond_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_bond_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_bond_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_bond_dump = vapi_register_msg(&__vapi_metadata_sw_interface_bond_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_bond_dump", vapi_msg_id_sw_interface_bond_dump);
}
#endif

#ifndef defined_vapi_msg_sw_interface_slave_dump
#define defined_vapi_msg_sw_interface_slave_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_sw_interface_slave_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_slave_dump payload;
} vapi_msg_sw_interface_slave_dump;

static inline void vapi_msg_sw_interface_slave_dump_payload_hton(vapi_payload_sw_interface_slave_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_slave_dump_payload_ntoh(vapi_payload_sw_interface_slave_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_slave_dump_hton(vapi_msg_sw_interface_slave_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_slave_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_slave_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_slave_dump_ntoh(vapi_msg_sw_interface_slave_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_slave_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_slave_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_slave_dump_msg_size(vapi_msg_sw_interface_slave_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_slave_dump* vapi_alloc_sw_interface_slave_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_slave_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_slave_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_slave_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_slave_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_slave_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_slave_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_slave_details *reply),
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
  vapi_msg_sw_interface_slave_dump_hton(msg);
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
    vapi_msg_sw_interface_slave_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_slave_dump()
{
  static const char name[] = "sw_interface_slave_dump";
  static const char name_with_crc[] = "sw_interface_slave_dump_529cb13f";
  static vapi_message_desc_t __vapi_metadata_sw_interface_slave_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_slave_dump, payload),
    sizeof(vapi_msg_sw_interface_slave_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_slave_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_slave_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_slave_dump = vapi_register_msg(&__vapi_metadata_sw_interface_slave_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_slave_dump", vapi_msg_id_sw_interface_slave_dump);
}
#endif

#ifndef defined_vapi_msg_bond_delete
#define defined_vapi_msg_bond_delete
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_bond_delete;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bond_delete payload;
} vapi_msg_bond_delete;

static inline void vapi_msg_bond_delete_payload_hton(vapi_payload_bond_delete *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bond_delete_payload_ntoh(vapi_payload_bond_delete *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bond_delete_hton(vapi_msg_bond_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_delete'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bond_delete_payload_hton(&msg->payload);
}

static inline void vapi_msg_bond_delete_ntoh(vapi_msg_bond_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bond_delete'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bond_delete_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bond_delete_msg_size(vapi_msg_bond_delete *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bond_delete* vapi_alloc_bond_delete(struct vapi_ctx_s *ctx)
{
  vapi_msg_bond_delete *msg = NULL;
  const size_t size = sizeof(vapi_msg_bond_delete);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bond_delete*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bond_delete);

  return msg;
}

static inline vapi_error_e vapi_bond_delete(struct vapi_ctx_s *ctx,
  vapi_msg_bond_delete *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bond_delete_reply *reply),
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
  vapi_msg_bond_delete_hton(msg);
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
    vapi_msg_bond_delete_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bond_delete()
{
  static const char name[] = "bond_delete";
  static const char name_with_crc[] = "bond_delete_529cb13f";
  static vapi_message_desc_t __vapi_metadata_bond_delete = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bond_delete, payload),
    sizeof(vapi_msg_bond_delete),
    (generic_swap_fn_t)vapi_msg_bond_delete_hton,
    (generic_swap_fn_t)vapi_msg_bond_delete_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bond_delete = vapi_register_msg(&__vapi_metadata_bond_delete);
  VAPI_DBG("Assigned msg id %d to bond_delete", vapi_msg_id_bond_delete);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
