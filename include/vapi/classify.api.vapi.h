#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_classify_classify_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_classify_classify_api_json

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

extern vapi_msg_id_t vapi_msg_id_policer_classify_set_interface;
extern vapi_msg_id_t vapi_msg_id_flow_classify_set_interface_reply;
extern vapi_msg_id_t vapi_msg_id_classify_table_ids;
extern vapi_msg_id_t vapi_msg_id_output_acl_set_interface;
extern vapi_msg_id_t vapi_msg_id_classify_session_details;
extern vapi_msg_id_t vapi_msg_id_classify_set_interface_l2_tables;
extern vapi_msg_id_t vapi_msg_id_policer_classify_details;
extern vapi_msg_id_t vapi_msg_id_input_acl_set_interface_reply;
extern vapi_msg_id_t vapi_msg_id_classify_add_del_session_reply;
extern vapi_msg_id_t vapi_msg_id_classify_add_del_table_reply;
extern vapi_msg_id_t vapi_msg_id_policer_classify_dump;
extern vapi_msg_id_t vapi_msg_id_classify_set_interface_ip_table_reply;
extern vapi_msg_id_t vapi_msg_id_classify_add_del_session;
extern vapi_msg_id_t vapi_msg_id_classify_table_info_reply;
extern vapi_msg_id_t vapi_msg_id_classify_table_by_interface_reply;
extern vapi_msg_id_t vapi_msg_id_classify_add_del_table;
extern vapi_msg_id_t vapi_msg_id_flow_classify_details;
extern vapi_msg_id_t vapi_msg_id_output_acl_set_interface_reply;
extern vapi_msg_id_t vapi_msg_id_classify_set_interface_l2_tables_reply;
extern vapi_msg_id_t vapi_msg_id_policer_classify_set_interface_reply;
extern vapi_msg_id_t vapi_msg_id_flow_classify_dump;
extern vapi_msg_id_t vapi_msg_id_classify_table_ids_reply;
extern vapi_msg_id_t vapi_msg_id_flow_classify_set_interface;
extern vapi_msg_id_t vapi_msg_id_classify_session_dump;
extern vapi_msg_id_t vapi_msg_id_classify_set_interface_ip_table;
extern vapi_msg_id_t vapi_msg_id_input_acl_set_interface;
extern vapi_msg_id_t vapi_msg_id_classify_table_info;
extern vapi_msg_id_t vapi_msg_id_classify_table_by_interface;

#define DEFINE_VAPI_MSG_IDS_CLASSIFY_API_JSON\
  vapi_msg_id_t vapi_msg_id_policer_classify_set_interface;\
  vapi_msg_id_t vapi_msg_id_flow_classify_set_interface_reply;\
  vapi_msg_id_t vapi_msg_id_classify_table_ids;\
  vapi_msg_id_t vapi_msg_id_output_acl_set_interface;\
  vapi_msg_id_t vapi_msg_id_classify_session_details;\
  vapi_msg_id_t vapi_msg_id_classify_set_interface_l2_tables;\
  vapi_msg_id_t vapi_msg_id_policer_classify_details;\
  vapi_msg_id_t vapi_msg_id_input_acl_set_interface_reply;\
  vapi_msg_id_t vapi_msg_id_classify_add_del_session_reply;\
  vapi_msg_id_t vapi_msg_id_classify_add_del_table_reply;\
  vapi_msg_id_t vapi_msg_id_policer_classify_dump;\
  vapi_msg_id_t vapi_msg_id_classify_set_interface_ip_table_reply;\
  vapi_msg_id_t vapi_msg_id_classify_add_del_session;\
  vapi_msg_id_t vapi_msg_id_classify_table_info_reply;\
  vapi_msg_id_t vapi_msg_id_classify_table_by_interface_reply;\
  vapi_msg_id_t vapi_msg_id_classify_add_del_table;\
  vapi_msg_id_t vapi_msg_id_flow_classify_details;\
  vapi_msg_id_t vapi_msg_id_output_acl_set_interface_reply;\
  vapi_msg_id_t vapi_msg_id_classify_set_interface_l2_tables_reply;\
  vapi_msg_id_t vapi_msg_id_policer_classify_set_interface_reply;\
  vapi_msg_id_t vapi_msg_id_flow_classify_dump;\
  vapi_msg_id_t vapi_msg_id_classify_table_ids_reply;\
  vapi_msg_id_t vapi_msg_id_flow_classify_set_interface;\
  vapi_msg_id_t vapi_msg_id_classify_session_dump;\
  vapi_msg_id_t vapi_msg_id_classify_set_interface_ip_table;\
  vapi_msg_id_t vapi_msg_id_input_acl_set_interface;\
  vapi_msg_id_t vapi_msg_id_classify_table_info;\
  vapi_msg_id_t vapi_msg_id_classify_table_by_interface;


#ifndef defined_vapi_msg_policer_classify_set_interface_reply
#define defined_vapi_msg_policer_classify_set_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_policer_classify_set_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_policer_classify_set_interface_reply payload;
} vapi_msg_policer_classify_set_interface_reply;

static inline void vapi_msg_policer_classify_set_interface_reply_payload_hton(vapi_payload_policer_classify_set_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_policer_classify_set_interface_reply_payload_ntoh(vapi_payload_policer_classify_set_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_policer_classify_set_interface_reply_hton(vapi_msg_policer_classify_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_set_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_policer_classify_set_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_classify_set_interface_reply_ntoh(vapi_msg_policer_classify_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_set_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_policer_classify_set_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_classify_set_interface_reply_msg_size(vapi_msg_policer_classify_set_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_policer_classify_set_interface_reply()
{
  static const char name[] = "policer_classify_set_interface_reply";
  static const char name_with_crc[] = "policer_classify_set_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_policer_classify_set_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_policer_classify_set_interface_reply, payload),
    sizeof(vapi_msg_policer_classify_set_interface_reply),
    (generic_swap_fn_t)vapi_msg_policer_classify_set_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_policer_classify_set_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_classify_set_interface_reply = vapi_register_msg(&__vapi_metadata_policer_classify_set_interface_reply);
  VAPI_DBG("Assigned msg id %d to policer_classify_set_interface_reply", vapi_msg_id_policer_classify_set_interface_reply);
}

static inline void vapi_set_vapi_msg_policer_classify_set_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_policer_classify_set_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_policer_classify_set_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_policer_classify_set_interface
#define defined_vapi_msg_policer_classify_set_interface
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 ip4_table_index;
  u32 ip6_table_index;
  u32 l2_table_index;
  u8 is_add; 
} vapi_payload_policer_classify_set_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_policer_classify_set_interface payload;
} vapi_msg_policer_classify_set_interface;

static inline void vapi_msg_policer_classify_set_interface_payload_hton(vapi_payload_policer_classify_set_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->ip4_table_index = htobe32(payload->ip4_table_index);
  payload->ip6_table_index = htobe32(payload->ip6_table_index);
  payload->l2_table_index = htobe32(payload->l2_table_index);
}

static inline void vapi_msg_policer_classify_set_interface_payload_ntoh(vapi_payload_policer_classify_set_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->ip4_table_index = be32toh(payload->ip4_table_index);
  payload->ip6_table_index = be32toh(payload->ip6_table_index);
  payload->l2_table_index = be32toh(payload->l2_table_index);
}

static inline void vapi_msg_policer_classify_set_interface_hton(vapi_msg_policer_classify_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_set_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_policer_classify_set_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_classify_set_interface_ntoh(vapi_msg_policer_classify_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_set_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_policer_classify_set_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_classify_set_interface_msg_size(vapi_msg_policer_classify_set_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_policer_classify_set_interface* vapi_alloc_policer_classify_set_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_policer_classify_set_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_policer_classify_set_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_policer_classify_set_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_policer_classify_set_interface);

  return msg;
}

static inline vapi_error_e vapi_policer_classify_set_interface(struct vapi_ctx_s *ctx,
  vapi_msg_policer_classify_set_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_policer_classify_set_interface_reply *reply),
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
  vapi_msg_policer_classify_set_interface_hton(msg);
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
    vapi_msg_policer_classify_set_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_policer_classify_set_interface()
{
  static const char name[] = "policer_classify_set_interface";
  static const char name_with_crc[] = "policer_classify_set_interface_e09537b0";
  static vapi_message_desc_t __vapi_metadata_policer_classify_set_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_policer_classify_set_interface, payload),
    sizeof(vapi_msg_policer_classify_set_interface),
    (generic_swap_fn_t)vapi_msg_policer_classify_set_interface_hton,
    (generic_swap_fn_t)vapi_msg_policer_classify_set_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_classify_set_interface = vapi_register_msg(&__vapi_metadata_policer_classify_set_interface);
  VAPI_DBG("Assigned msg id %d to policer_classify_set_interface", vapi_msg_id_policer_classify_set_interface);
}
#endif

#ifndef defined_vapi_msg_flow_classify_set_interface_reply
#define defined_vapi_msg_flow_classify_set_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_flow_classify_set_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_flow_classify_set_interface_reply payload;
} vapi_msg_flow_classify_set_interface_reply;

static inline void vapi_msg_flow_classify_set_interface_reply_payload_hton(vapi_payload_flow_classify_set_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_flow_classify_set_interface_reply_payload_ntoh(vapi_payload_flow_classify_set_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_flow_classify_set_interface_reply_hton(vapi_msg_flow_classify_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_set_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_flow_classify_set_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_flow_classify_set_interface_reply_ntoh(vapi_msg_flow_classify_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_set_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_flow_classify_set_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flow_classify_set_interface_reply_msg_size(vapi_msg_flow_classify_set_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_flow_classify_set_interface_reply()
{
  static const char name[] = "flow_classify_set_interface_reply";
  static const char name_with_crc[] = "flow_classify_set_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_flow_classify_set_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_flow_classify_set_interface_reply, payload),
    sizeof(vapi_msg_flow_classify_set_interface_reply),
    (generic_swap_fn_t)vapi_msg_flow_classify_set_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_flow_classify_set_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flow_classify_set_interface_reply = vapi_register_msg(&__vapi_metadata_flow_classify_set_interface_reply);
  VAPI_DBG("Assigned msg id %d to flow_classify_set_interface_reply", vapi_msg_id_flow_classify_set_interface_reply);
}

static inline void vapi_set_vapi_msg_flow_classify_set_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_flow_classify_set_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_flow_classify_set_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_table_ids_reply
#define defined_vapi_msg_classify_table_ids_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 count;
  u32 ids[0]; 
} vapi_payload_classify_table_ids_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_table_ids_reply payload;
} vapi_msg_classify_table_ids_reply;

static inline void vapi_msg_classify_table_ids_reply_payload_hton(vapi_payload_classify_table_ids_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->count = htobe32(payload->count);
  do { unsigned i; for (i = 0; i < be32toh(payload->count); ++i) { payload->ids[i] = htobe32(payload->ids[i]); } } while(0);
}

static inline void vapi_msg_classify_table_ids_reply_payload_ntoh(vapi_payload_classify_table_ids_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->count = be32toh(payload->count);
  do { unsigned i; for (i = 0; i < payload->count; ++i) { payload->ids[i] = be32toh(payload->ids[i]); } } while(0);
}

static inline void vapi_msg_classify_table_ids_reply_hton(vapi_msg_classify_table_ids_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_ids_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_table_ids_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_table_ids_reply_ntoh(vapi_msg_classify_table_ids_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_ids_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_table_ids_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_table_ids_reply_msg_size(vapi_msg_classify_table_ids_reply *msg)
{
  return sizeof(*msg)+ msg->payload.count * sizeof(msg->payload.ids[0]);
}

static void __attribute__((constructor)) __vapi_constructor_classify_table_ids_reply()
{
  static const char name[] = "classify_table_ids_reply";
  static const char name_with_crc[] = "classify_table_ids_reply_d1d20e1d";
  static vapi_message_desc_t __vapi_metadata_classify_table_ids_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_table_ids_reply, payload),
    sizeof(vapi_msg_classify_table_ids_reply),
    (generic_swap_fn_t)vapi_msg_classify_table_ids_reply_hton,
    (generic_swap_fn_t)vapi_msg_classify_table_ids_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_table_ids_reply = vapi_register_msg(&__vapi_metadata_classify_table_ids_reply);
  VAPI_DBG("Assigned msg id %d to classify_table_ids_reply", vapi_msg_id_classify_table_ids_reply);
}

static inline void vapi_set_vapi_msg_classify_table_ids_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_table_ids_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_table_ids_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_table_ids
#define defined_vapi_msg_classify_table_ids
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_classify_table_ids;

static inline void vapi_msg_classify_table_ids_hton(vapi_msg_classify_table_ids *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_ids'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_classify_table_ids_ntoh(vapi_msg_classify_table_ids *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_ids'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_classify_table_ids_msg_size(vapi_msg_classify_table_ids *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_classify_table_ids* vapi_alloc_classify_table_ids(struct vapi_ctx_s *ctx)
{
  vapi_msg_classify_table_ids *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_table_ids);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_table_ids*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_table_ids);

  return msg;
}

static inline vapi_error_e vapi_classify_table_ids(struct vapi_ctx_s *ctx,
  vapi_msg_classify_table_ids *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_table_ids_reply *reply),
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
  vapi_msg_classify_table_ids_hton(msg);
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
    vapi_msg_classify_table_ids_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_table_ids()
{
  static const char name[] = "classify_table_ids";
  static const char name_with_crc[] = "classify_table_ids_51077d14";
  static vapi_message_desc_t __vapi_metadata_classify_table_ids = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_classify_table_ids),
    (generic_swap_fn_t)vapi_msg_classify_table_ids_hton,
    (generic_swap_fn_t)vapi_msg_classify_table_ids_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_table_ids = vapi_register_msg(&__vapi_metadata_classify_table_ids);
  VAPI_DBG("Assigned msg id %d to classify_table_ids", vapi_msg_id_classify_table_ids);
}
#endif

#ifndef defined_vapi_msg_output_acl_set_interface_reply
#define defined_vapi_msg_output_acl_set_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_output_acl_set_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_output_acl_set_interface_reply payload;
} vapi_msg_output_acl_set_interface_reply;

static inline void vapi_msg_output_acl_set_interface_reply_payload_hton(vapi_payload_output_acl_set_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_output_acl_set_interface_reply_payload_ntoh(vapi_payload_output_acl_set_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_output_acl_set_interface_reply_hton(vapi_msg_output_acl_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_output_acl_set_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_output_acl_set_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_output_acl_set_interface_reply_ntoh(vapi_msg_output_acl_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_output_acl_set_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_output_acl_set_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_output_acl_set_interface_reply_msg_size(vapi_msg_output_acl_set_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_output_acl_set_interface_reply()
{
  static const char name[] = "output_acl_set_interface_reply";
  static const char name_with_crc[] = "output_acl_set_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_output_acl_set_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_output_acl_set_interface_reply, payload),
    sizeof(vapi_msg_output_acl_set_interface_reply),
    (generic_swap_fn_t)vapi_msg_output_acl_set_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_output_acl_set_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_output_acl_set_interface_reply = vapi_register_msg(&__vapi_metadata_output_acl_set_interface_reply);
  VAPI_DBG("Assigned msg id %d to output_acl_set_interface_reply", vapi_msg_id_output_acl_set_interface_reply);
}

static inline void vapi_set_vapi_msg_output_acl_set_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_output_acl_set_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_output_acl_set_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_output_acl_set_interface
#define defined_vapi_msg_output_acl_set_interface
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 ip4_table_index;
  u32 ip6_table_index;
  u32 l2_table_index;
  u8 is_add; 
} vapi_payload_output_acl_set_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_output_acl_set_interface payload;
} vapi_msg_output_acl_set_interface;

static inline void vapi_msg_output_acl_set_interface_payload_hton(vapi_payload_output_acl_set_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->ip4_table_index = htobe32(payload->ip4_table_index);
  payload->ip6_table_index = htobe32(payload->ip6_table_index);
  payload->l2_table_index = htobe32(payload->l2_table_index);
}

static inline void vapi_msg_output_acl_set_interface_payload_ntoh(vapi_payload_output_acl_set_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->ip4_table_index = be32toh(payload->ip4_table_index);
  payload->ip6_table_index = be32toh(payload->ip6_table_index);
  payload->l2_table_index = be32toh(payload->l2_table_index);
}

static inline void vapi_msg_output_acl_set_interface_hton(vapi_msg_output_acl_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_output_acl_set_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_output_acl_set_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_output_acl_set_interface_ntoh(vapi_msg_output_acl_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_output_acl_set_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_output_acl_set_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_output_acl_set_interface_msg_size(vapi_msg_output_acl_set_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_output_acl_set_interface* vapi_alloc_output_acl_set_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_output_acl_set_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_output_acl_set_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_output_acl_set_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_output_acl_set_interface);

  return msg;
}

static inline vapi_error_e vapi_output_acl_set_interface(struct vapi_ctx_s *ctx,
  vapi_msg_output_acl_set_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_output_acl_set_interface_reply *reply),
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
  vapi_msg_output_acl_set_interface_hton(msg);
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
    vapi_msg_output_acl_set_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_output_acl_set_interface()
{
  static const char name[] = "output_acl_set_interface";
  static const char name_with_crc[] = "output_acl_set_interface_e09537b0";
  static vapi_message_desc_t __vapi_metadata_output_acl_set_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_output_acl_set_interface, payload),
    sizeof(vapi_msg_output_acl_set_interface),
    (generic_swap_fn_t)vapi_msg_output_acl_set_interface_hton,
    (generic_swap_fn_t)vapi_msg_output_acl_set_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_output_acl_set_interface = vapi_register_msg(&__vapi_metadata_output_acl_set_interface);
  VAPI_DBG("Assigned msg id %d to output_acl_set_interface", vapi_msg_id_output_acl_set_interface);
}
#endif

#ifndef defined_vapi_msg_classify_session_details
#define defined_vapi_msg_classify_session_details
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 table_id;
  u32 hit_next_index;
  i32 advance;
  u32 opaque_index;
  u32 match_length;
  u8 match[0]; 
} vapi_payload_classify_session_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_session_details payload;
} vapi_msg_classify_session_details;

static inline void vapi_msg_classify_session_details_payload_hton(vapi_payload_classify_session_details *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->table_id = htobe32(payload->table_id);
  payload->hit_next_index = htobe32(payload->hit_next_index);
  payload->advance = htobe32(payload->advance);
  payload->opaque_index = htobe32(payload->opaque_index);
  payload->match_length = htobe32(payload->match_length);
}

static inline void vapi_msg_classify_session_details_payload_ntoh(vapi_payload_classify_session_details *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->table_id = be32toh(payload->table_id);
  payload->hit_next_index = be32toh(payload->hit_next_index);
  payload->advance = be32toh(payload->advance);
  payload->opaque_index = be32toh(payload->opaque_index);
  payload->match_length = be32toh(payload->match_length);
}

static inline void vapi_msg_classify_session_details_hton(vapi_msg_classify_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_session_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_session_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_session_details_ntoh(vapi_msg_classify_session_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_session_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_session_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_session_details_msg_size(vapi_msg_classify_session_details *msg)
{
  return sizeof(*msg)+ msg->payload.match_length * sizeof(msg->payload.match[0]);
}

static void __attribute__((constructor)) __vapi_constructor_classify_session_details()
{
  static const char name[] = "classify_session_details";
  static const char name_with_crc[] = "classify_session_details_60e3ef94";
  static vapi_message_desc_t __vapi_metadata_classify_session_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_session_details, payload),
    sizeof(vapi_msg_classify_session_details),
    (generic_swap_fn_t)vapi_msg_classify_session_details_hton,
    (generic_swap_fn_t)vapi_msg_classify_session_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_session_details = vapi_register_msg(&__vapi_metadata_classify_session_details);
  VAPI_DBG("Assigned msg id %d to classify_session_details", vapi_msg_id_classify_session_details);
}

static inline void vapi_set_vapi_msg_classify_session_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_session_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_session_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_set_interface_l2_tables_reply
#define defined_vapi_msg_classify_set_interface_l2_tables_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_classify_set_interface_l2_tables_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_set_interface_l2_tables_reply payload;
} vapi_msg_classify_set_interface_l2_tables_reply;

static inline void vapi_msg_classify_set_interface_l2_tables_reply_payload_hton(vapi_payload_classify_set_interface_l2_tables_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_classify_set_interface_l2_tables_reply_payload_ntoh(vapi_payload_classify_set_interface_l2_tables_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_classify_set_interface_l2_tables_reply_hton(vapi_msg_classify_set_interface_l2_tables_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_l2_tables_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_set_interface_l2_tables_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_set_interface_l2_tables_reply_ntoh(vapi_msg_classify_set_interface_l2_tables_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_l2_tables_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_set_interface_l2_tables_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_set_interface_l2_tables_reply_msg_size(vapi_msg_classify_set_interface_l2_tables_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_classify_set_interface_l2_tables_reply()
{
  static const char name[] = "classify_set_interface_l2_tables_reply";
  static const char name_with_crc[] = "classify_set_interface_l2_tables_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_classify_set_interface_l2_tables_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_set_interface_l2_tables_reply, payload),
    sizeof(vapi_msg_classify_set_interface_l2_tables_reply),
    (generic_swap_fn_t)vapi_msg_classify_set_interface_l2_tables_reply_hton,
    (generic_swap_fn_t)vapi_msg_classify_set_interface_l2_tables_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_set_interface_l2_tables_reply = vapi_register_msg(&__vapi_metadata_classify_set_interface_l2_tables_reply);
  VAPI_DBG("Assigned msg id %d to classify_set_interface_l2_tables_reply", vapi_msg_id_classify_set_interface_l2_tables_reply);
}

static inline void vapi_set_vapi_msg_classify_set_interface_l2_tables_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_set_interface_l2_tables_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_set_interface_l2_tables_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_set_interface_l2_tables
#define defined_vapi_msg_classify_set_interface_l2_tables
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 ip4_table_index;
  u32 ip6_table_index;
  u32 other_table_index;
  u8 is_input; 
} vapi_payload_classify_set_interface_l2_tables;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_classify_set_interface_l2_tables payload;
} vapi_msg_classify_set_interface_l2_tables;

static inline void vapi_msg_classify_set_interface_l2_tables_payload_hton(vapi_payload_classify_set_interface_l2_tables *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->ip4_table_index = htobe32(payload->ip4_table_index);
  payload->ip6_table_index = htobe32(payload->ip6_table_index);
  payload->other_table_index = htobe32(payload->other_table_index);
}

static inline void vapi_msg_classify_set_interface_l2_tables_payload_ntoh(vapi_payload_classify_set_interface_l2_tables *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->ip4_table_index = be32toh(payload->ip4_table_index);
  payload->ip6_table_index = be32toh(payload->ip6_table_index);
  payload->other_table_index = be32toh(payload->other_table_index);
}

static inline void vapi_msg_classify_set_interface_l2_tables_hton(vapi_msg_classify_set_interface_l2_tables *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_l2_tables'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_classify_set_interface_l2_tables_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_set_interface_l2_tables_ntoh(vapi_msg_classify_set_interface_l2_tables *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_l2_tables'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_classify_set_interface_l2_tables_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_set_interface_l2_tables_msg_size(vapi_msg_classify_set_interface_l2_tables *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_classify_set_interface_l2_tables* vapi_alloc_classify_set_interface_l2_tables(struct vapi_ctx_s *ctx)
{
  vapi_msg_classify_set_interface_l2_tables *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_set_interface_l2_tables);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_set_interface_l2_tables*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_set_interface_l2_tables);

  return msg;
}

static inline vapi_error_e vapi_classify_set_interface_l2_tables(struct vapi_ctx_s *ctx,
  vapi_msg_classify_set_interface_l2_tables *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_set_interface_l2_tables_reply *reply),
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
  vapi_msg_classify_set_interface_l2_tables_hton(msg);
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
    vapi_msg_classify_set_interface_l2_tables_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_set_interface_l2_tables()
{
  static const char name[] = "classify_set_interface_l2_tables";
  static const char name_with_crc[] = "classify_set_interface_l2_tables_6d60ab5f";
  static vapi_message_desc_t __vapi_metadata_classify_set_interface_l2_tables = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_classify_set_interface_l2_tables, payload),
    sizeof(vapi_msg_classify_set_interface_l2_tables),
    (generic_swap_fn_t)vapi_msg_classify_set_interface_l2_tables_hton,
    (generic_swap_fn_t)vapi_msg_classify_set_interface_l2_tables_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_set_interface_l2_tables = vapi_register_msg(&__vapi_metadata_classify_set_interface_l2_tables);
  VAPI_DBG("Assigned msg id %d to classify_set_interface_l2_tables", vapi_msg_id_classify_set_interface_l2_tables);
}
#endif

#ifndef defined_vapi_msg_policer_classify_details
#define defined_vapi_msg_policer_classify_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 table_index; 
} vapi_payload_policer_classify_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_policer_classify_details payload;
} vapi_msg_policer_classify_details;

static inline void vapi_msg_policer_classify_details_payload_hton(vapi_payload_policer_classify_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->table_index = htobe32(payload->table_index);
}

static inline void vapi_msg_policer_classify_details_payload_ntoh(vapi_payload_policer_classify_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->table_index = be32toh(payload->table_index);
}

static inline void vapi_msg_policer_classify_details_hton(vapi_msg_policer_classify_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_policer_classify_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_classify_details_ntoh(vapi_msg_policer_classify_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_policer_classify_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_classify_details_msg_size(vapi_msg_policer_classify_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_policer_classify_details()
{
  static const char name[] = "policer_classify_details";
  static const char name_with_crc[] = "policer_classify_details_cc3461ad";
  static vapi_message_desc_t __vapi_metadata_policer_classify_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_policer_classify_details, payload),
    sizeof(vapi_msg_policer_classify_details),
    (generic_swap_fn_t)vapi_msg_policer_classify_details_hton,
    (generic_swap_fn_t)vapi_msg_policer_classify_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_classify_details = vapi_register_msg(&__vapi_metadata_policer_classify_details);
  VAPI_DBG("Assigned msg id %d to policer_classify_details", vapi_msg_id_policer_classify_details);
}

static inline void vapi_set_vapi_msg_policer_classify_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_policer_classify_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_policer_classify_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_input_acl_set_interface_reply
#define defined_vapi_msg_input_acl_set_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_input_acl_set_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_input_acl_set_interface_reply payload;
} vapi_msg_input_acl_set_interface_reply;

static inline void vapi_msg_input_acl_set_interface_reply_payload_hton(vapi_payload_input_acl_set_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_input_acl_set_interface_reply_payload_ntoh(vapi_payload_input_acl_set_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_input_acl_set_interface_reply_hton(vapi_msg_input_acl_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_input_acl_set_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_input_acl_set_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_input_acl_set_interface_reply_ntoh(vapi_msg_input_acl_set_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_input_acl_set_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_input_acl_set_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_input_acl_set_interface_reply_msg_size(vapi_msg_input_acl_set_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_input_acl_set_interface_reply()
{
  static const char name[] = "input_acl_set_interface_reply";
  static const char name_with_crc[] = "input_acl_set_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_input_acl_set_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_input_acl_set_interface_reply, payload),
    sizeof(vapi_msg_input_acl_set_interface_reply),
    (generic_swap_fn_t)vapi_msg_input_acl_set_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_input_acl_set_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_input_acl_set_interface_reply = vapi_register_msg(&__vapi_metadata_input_acl_set_interface_reply);
  VAPI_DBG("Assigned msg id %d to input_acl_set_interface_reply", vapi_msg_id_input_acl_set_interface_reply);
}

static inline void vapi_set_vapi_msg_input_acl_set_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_input_acl_set_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_input_acl_set_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_add_del_session_reply
#define defined_vapi_msg_classify_add_del_session_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_classify_add_del_session_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_add_del_session_reply payload;
} vapi_msg_classify_add_del_session_reply;

static inline void vapi_msg_classify_add_del_session_reply_payload_hton(vapi_payload_classify_add_del_session_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_classify_add_del_session_reply_payload_ntoh(vapi_payload_classify_add_del_session_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_classify_add_del_session_reply_hton(vapi_msg_classify_add_del_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_session_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_add_del_session_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_add_del_session_reply_ntoh(vapi_msg_classify_add_del_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_session_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_add_del_session_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_add_del_session_reply_msg_size(vapi_msg_classify_add_del_session_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_classify_add_del_session_reply()
{
  static const char name[] = "classify_add_del_session_reply";
  static const char name_with_crc[] = "classify_add_del_session_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_classify_add_del_session_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_add_del_session_reply, payload),
    sizeof(vapi_msg_classify_add_del_session_reply),
    (generic_swap_fn_t)vapi_msg_classify_add_del_session_reply_hton,
    (generic_swap_fn_t)vapi_msg_classify_add_del_session_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_add_del_session_reply = vapi_register_msg(&__vapi_metadata_classify_add_del_session_reply);
  VAPI_DBG("Assigned msg id %d to classify_add_del_session_reply", vapi_msg_id_classify_add_del_session_reply);
}

static inline void vapi_set_vapi_msg_classify_add_del_session_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_add_del_session_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_add_del_session_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_add_del_table_reply
#define defined_vapi_msg_classify_add_del_table_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 new_table_index;
  u32 skip_n_vectors;
  u32 match_n_vectors; 
} vapi_payload_classify_add_del_table_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_add_del_table_reply payload;
} vapi_msg_classify_add_del_table_reply;

static inline void vapi_msg_classify_add_del_table_reply_payload_hton(vapi_payload_classify_add_del_table_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->new_table_index = htobe32(payload->new_table_index);
  payload->skip_n_vectors = htobe32(payload->skip_n_vectors);
  payload->match_n_vectors = htobe32(payload->match_n_vectors);
}

static inline void vapi_msg_classify_add_del_table_reply_payload_ntoh(vapi_payload_classify_add_del_table_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->new_table_index = be32toh(payload->new_table_index);
  payload->skip_n_vectors = be32toh(payload->skip_n_vectors);
  payload->match_n_vectors = be32toh(payload->match_n_vectors);
}

static inline void vapi_msg_classify_add_del_table_reply_hton(vapi_msg_classify_add_del_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_table_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_add_del_table_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_add_del_table_reply_ntoh(vapi_msg_classify_add_del_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_table_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_add_del_table_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_add_del_table_reply_msg_size(vapi_msg_classify_add_del_table_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_classify_add_del_table_reply()
{
  static const char name[] = "classify_add_del_table_reply";
  static const char name_with_crc[] = "classify_add_del_table_reply_05486349";
  static vapi_message_desc_t __vapi_metadata_classify_add_del_table_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_add_del_table_reply, payload),
    sizeof(vapi_msg_classify_add_del_table_reply),
    (generic_swap_fn_t)vapi_msg_classify_add_del_table_reply_hton,
    (generic_swap_fn_t)vapi_msg_classify_add_del_table_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_add_del_table_reply = vapi_register_msg(&__vapi_metadata_classify_add_del_table_reply);
  VAPI_DBG("Assigned msg id %d to classify_add_del_table_reply", vapi_msg_id_classify_add_del_table_reply);
}

static inline void vapi_set_vapi_msg_classify_add_del_table_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_add_del_table_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_add_del_table_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_policer_classify_dump
#define defined_vapi_msg_policer_classify_dump
typedef struct __attribute__ ((__packed__)) {
  u8 type; 
} vapi_payload_policer_classify_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_policer_classify_dump payload;
} vapi_msg_policer_classify_dump;

static inline void vapi_msg_policer_classify_dump_payload_hton(vapi_payload_policer_classify_dump *payload)
{

}

static inline void vapi_msg_policer_classify_dump_payload_ntoh(vapi_payload_policer_classify_dump *payload)
{

}

static inline void vapi_msg_policer_classify_dump_hton(vapi_msg_policer_classify_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_policer_classify_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_policer_classify_dump_ntoh(vapi_msg_policer_classify_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_policer_classify_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_policer_classify_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_policer_classify_dump_msg_size(vapi_msg_policer_classify_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_policer_classify_dump* vapi_alloc_policer_classify_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_policer_classify_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_policer_classify_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_policer_classify_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_policer_classify_dump);

  return msg;
}

static inline vapi_error_e vapi_policer_classify_dump(struct vapi_ctx_s *ctx,
  vapi_msg_policer_classify_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_policer_classify_details *reply),
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
  vapi_msg_policer_classify_dump_hton(msg);
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
    vapi_msg_policer_classify_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_policer_classify_dump()
{
  static const char name[] = "policer_classify_dump";
  static const char name_with_crc[] = "policer_classify_dump_41503530";
  static vapi_message_desc_t __vapi_metadata_policer_classify_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_policer_classify_dump, payload),
    sizeof(vapi_msg_policer_classify_dump),
    (generic_swap_fn_t)vapi_msg_policer_classify_dump_hton,
    (generic_swap_fn_t)vapi_msg_policer_classify_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_policer_classify_dump = vapi_register_msg(&__vapi_metadata_policer_classify_dump);
  VAPI_DBG("Assigned msg id %d to policer_classify_dump", vapi_msg_id_policer_classify_dump);
}
#endif

#ifndef defined_vapi_msg_classify_set_interface_ip_table_reply
#define defined_vapi_msg_classify_set_interface_ip_table_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_classify_set_interface_ip_table_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_set_interface_ip_table_reply payload;
} vapi_msg_classify_set_interface_ip_table_reply;

static inline void vapi_msg_classify_set_interface_ip_table_reply_payload_hton(vapi_payload_classify_set_interface_ip_table_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_classify_set_interface_ip_table_reply_payload_ntoh(vapi_payload_classify_set_interface_ip_table_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_classify_set_interface_ip_table_reply_hton(vapi_msg_classify_set_interface_ip_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_ip_table_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_set_interface_ip_table_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_set_interface_ip_table_reply_ntoh(vapi_msg_classify_set_interface_ip_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_ip_table_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_set_interface_ip_table_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_set_interface_ip_table_reply_msg_size(vapi_msg_classify_set_interface_ip_table_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_classify_set_interface_ip_table_reply()
{
  static const char name[] = "classify_set_interface_ip_table_reply";
  static const char name_with_crc[] = "classify_set_interface_ip_table_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_classify_set_interface_ip_table_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_set_interface_ip_table_reply, payload),
    sizeof(vapi_msg_classify_set_interface_ip_table_reply),
    (generic_swap_fn_t)vapi_msg_classify_set_interface_ip_table_reply_hton,
    (generic_swap_fn_t)vapi_msg_classify_set_interface_ip_table_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_set_interface_ip_table_reply = vapi_register_msg(&__vapi_metadata_classify_set_interface_ip_table_reply);
  VAPI_DBG("Assigned msg id %d to classify_set_interface_ip_table_reply", vapi_msg_id_classify_set_interface_ip_table_reply);
}

static inline void vapi_set_vapi_msg_classify_set_interface_ip_table_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_set_interface_ip_table_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_set_interface_ip_table_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_add_del_session
#define defined_vapi_msg_classify_add_del_session
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u32 table_index;
  u32 hit_next_index;
  u32 opaque_index;
  i32 advance;
  u8 action;
  u32 metadata;
  u32 match_len;
  u8 match[0]; 
} vapi_payload_classify_add_del_session;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_classify_add_del_session payload;
} vapi_msg_classify_add_del_session;

static inline void vapi_msg_classify_add_del_session_payload_hton(vapi_payload_classify_add_del_session *payload)
{
  payload->table_index = htobe32(payload->table_index);
  payload->hit_next_index = htobe32(payload->hit_next_index);
  payload->opaque_index = htobe32(payload->opaque_index);
  payload->advance = htobe32(payload->advance);
  payload->metadata = htobe32(payload->metadata);
  payload->match_len = htobe32(payload->match_len);
}

static inline void vapi_msg_classify_add_del_session_payload_ntoh(vapi_payload_classify_add_del_session *payload)
{
  payload->table_index = be32toh(payload->table_index);
  payload->hit_next_index = be32toh(payload->hit_next_index);
  payload->opaque_index = be32toh(payload->opaque_index);
  payload->advance = be32toh(payload->advance);
  payload->metadata = be32toh(payload->metadata);
  payload->match_len = be32toh(payload->match_len);
}

static inline void vapi_msg_classify_add_del_session_hton(vapi_msg_classify_add_del_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_session'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_classify_add_del_session_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_add_del_session_ntoh(vapi_msg_classify_add_del_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_session'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_classify_add_del_session_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_add_del_session_msg_size(vapi_msg_classify_add_del_session *msg)
{
  return sizeof(*msg)+ msg->payload.match_len * sizeof(msg->payload.match[0]);
}

static inline vapi_msg_classify_add_del_session* vapi_alloc_classify_add_del_session(struct vapi_ctx_s *ctx, size_t _match_array_size)
{
  vapi_msg_classify_add_del_session *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_add_del_session) + sizeof(msg->payload.match[0]) * _match_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_add_del_session*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_add_del_session);
  msg->payload.match_len = _match_array_size;

  return msg;
}

static inline vapi_error_e vapi_classify_add_del_session(struct vapi_ctx_s *ctx,
  vapi_msg_classify_add_del_session *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_add_del_session_reply *reply),
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
  vapi_msg_classify_add_del_session_hton(msg);
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
    vapi_msg_classify_add_del_session_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_add_del_session()
{
  static const char name[] = "classify_add_del_session";
  static const char name_with_crc[] = "classify_add_del_session_85fd79f4";
  static vapi_message_desc_t __vapi_metadata_classify_add_del_session = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_classify_add_del_session, payload),
    sizeof(vapi_msg_classify_add_del_session),
    (generic_swap_fn_t)vapi_msg_classify_add_del_session_hton,
    (generic_swap_fn_t)vapi_msg_classify_add_del_session_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_add_del_session = vapi_register_msg(&__vapi_metadata_classify_add_del_session);
  VAPI_DBG("Assigned msg id %d to classify_add_del_session", vapi_msg_id_classify_add_del_session);
}
#endif

#ifndef defined_vapi_msg_classify_table_info_reply
#define defined_vapi_msg_classify_table_info_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 table_id;
  u32 nbuckets;
  u32 match_n_vectors;
  u32 skip_n_vectors;
  u32 active_sessions;
  u32 next_table_index;
  u32 miss_next_index;
  u32 mask_length;
  u8 mask[0]; 
} vapi_payload_classify_table_info_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_table_info_reply payload;
} vapi_msg_classify_table_info_reply;

static inline void vapi_msg_classify_table_info_reply_payload_hton(vapi_payload_classify_table_info_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->table_id = htobe32(payload->table_id);
  payload->nbuckets = htobe32(payload->nbuckets);
  payload->match_n_vectors = htobe32(payload->match_n_vectors);
  payload->skip_n_vectors = htobe32(payload->skip_n_vectors);
  payload->active_sessions = htobe32(payload->active_sessions);
  payload->next_table_index = htobe32(payload->next_table_index);
  payload->miss_next_index = htobe32(payload->miss_next_index);
  payload->mask_length = htobe32(payload->mask_length);
}

static inline void vapi_msg_classify_table_info_reply_payload_ntoh(vapi_payload_classify_table_info_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->table_id = be32toh(payload->table_id);
  payload->nbuckets = be32toh(payload->nbuckets);
  payload->match_n_vectors = be32toh(payload->match_n_vectors);
  payload->skip_n_vectors = be32toh(payload->skip_n_vectors);
  payload->active_sessions = be32toh(payload->active_sessions);
  payload->next_table_index = be32toh(payload->next_table_index);
  payload->miss_next_index = be32toh(payload->miss_next_index);
  payload->mask_length = be32toh(payload->mask_length);
}

static inline void vapi_msg_classify_table_info_reply_hton(vapi_msg_classify_table_info_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_info_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_table_info_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_table_info_reply_ntoh(vapi_msg_classify_table_info_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_info_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_table_info_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_table_info_reply_msg_size(vapi_msg_classify_table_info_reply *msg)
{
  return sizeof(*msg)+ msg->payload.mask_length * sizeof(msg->payload.mask[0]);
}

static void __attribute__((constructor)) __vapi_constructor_classify_table_info_reply()
{
  static const char name[] = "classify_table_info_reply";
  static const char name_with_crc[] = "classify_table_info_reply_4a573c0e";
  static vapi_message_desc_t __vapi_metadata_classify_table_info_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_table_info_reply, payload),
    sizeof(vapi_msg_classify_table_info_reply),
    (generic_swap_fn_t)vapi_msg_classify_table_info_reply_hton,
    (generic_swap_fn_t)vapi_msg_classify_table_info_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_table_info_reply = vapi_register_msg(&__vapi_metadata_classify_table_info_reply);
  VAPI_DBG("Assigned msg id %d to classify_table_info_reply", vapi_msg_id_classify_table_info_reply);
}

static inline void vapi_set_vapi_msg_classify_table_info_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_table_info_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_table_info_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_table_by_interface_reply
#define defined_vapi_msg_classify_table_by_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index;
  u32 l2_table_id;
  u32 ip4_table_id;
  u32 ip6_table_id; 
} vapi_payload_classify_table_by_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_classify_table_by_interface_reply payload;
} vapi_msg_classify_table_by_interface_reply;

static inline void vapi_msg_classify_table_by_interface_reply_payload_hton(vapi_payload_classify_table_by_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->l2_table_id = htobe32(payload->l2_table_id);
  payload->ip4_table_id = htobe32(payload->ip4_table_id);
  payload->ip6_table_id = htobe32(payload->ip6_table_id);
}

static inline void vapi_msg_classify_table_by_interface_reply_payload_ntoh(vapi_payload_classify_table_by_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->l2_table_id = be32toh(payload->l2_table_id);
  payload->ip4_table_id = be32toh(payload->ip4_table_id);
  payload->ip6_table_id = be32toh(payload->ip6_table_id);
}

static inline void vapi_msg_classify_table_by_interface_reply_hton(vapi_msg_classify_table_by_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_by_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_classify_table_by_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_table_by_interface_reply_ntoh(vapi_msg_classify_table_by_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_by_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_classify_table_by_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_table_by_interface_reply_msg_size(vapi_msg_classify_table_by_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_classify_table_by_interface_reply()
{
  static const char name[] = "classify_table_by_interface_reply";
  static const char name_with_crc[] = "classify_table_by_interface_reply_eccde823";
  static vapi_message_desc_t __vapi_metadata_classify_table_by_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_classify_table_by_interface_reply, payload),
    sizeof(vapi_msg_classify_table_by_interface_reply),
    (generic_swap_fn_t)vapi_msg_classify_table_by_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_classify_table_by_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_table_by_interface_reply = vapi_register_msg(&__vapi_metadata_classify_table_by_interface_reply);
  VAPI_DBG("Assigned msg id %d to classify_table_by_interface_reply", vapi_msg_id_classify_table_by_interface_reply);
}

static inline void vapi_set_vapi_msg_classify_table_by_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_classify_table_by_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_classify_table_by_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_classify_add_del_table
#define defined_vapi_msg_classify_add_del_table
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 del_chain;
  u32 table_index;
  u32 nbuckets;
  u32 memory_size;
  u32 skip_n_vectors;
  u32 match_n_vectors;
  u32 next_table_index;
  u32 miss_next_index;
  u32 current_data_flag;
  i32 current_data_offset;
  u32 mask_len;
  u8 mask[0]; 
} vapi_payload_classify_add_del_table;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_classify_add_del_table payload;
} vapi_msg_classify_add_del_table;

static inline void vapi_msg_classify_add_del_table_payload_hton(vapi_payload_classify_add_del_table *payload)
{
  payload->table_index = htobe32(payload->table_index);
  payload->nbuckets = htobe32(payload->nbuckets);
  payload->memory_size = htobe32(payload->memory_size);
  payload->skip_n_vectors = htobe32(payload->skip_n_vectors);
  payload->match_n_vectors = htobe32(payload->match_n_vectors);
  payload->next_table_index = htobe32(payload->next_table_index);
  payload->miss_next_index = htobe32(payload->miss_next_index);
  payload->current_data_flag = htobe32(payload->current_data_flag);
  payload->current_data_offset = htobe32(payload->current_data_offset);
  payload->mask_len = htobe32(payload->mask_len);
}

static inline void vapi_msg_classify_add_del_table_payload_ntoh(vapi_payload_classify_add_del_table *payload)
{
  payload->table_index = be32toh(payload->table_index);
  payload->nbuckets = be32toh(payload->nbuckets);
  payload->memory_size = be32toh(payload->memory_size);
  payload->skip_n_vectors = be32toh(payload->skip_n_vectors);
  payload->match_n_vectors = be32toh(payload->match_n_vectors);
  payload->next_table_index = be32toh(payload->next_table_index);
  payload->miss_next_index = be32toh(payload->miss_next_index);
  payload->current_data_flag = be32toh(payload->current_data_flag);
  payload->current_data_offset = be32toh(payload->current_data_offset);
  payload->mask_len = be32toh(payload->mask_len);
}

static inline void vapi_msg_classify_add_del_table_hton(vapi_msg_classify_add_del_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_table'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_classify_add_del_table_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_add_del_table_ntoh(vapi_msg_classify_add_del_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_add_del_table'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_classify_add_del_table_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_add_del_table_msg_size(vapi_msg_classify_add_del_table *msg)
{
  return sizeof(*msg)+ msg->payload.mask_len * sizeof(msg->payload.mask[0]);
}

static inline vapi_msg_classify_add_del_table* vapi_alloc_classify_add_del_table(struct vapi_ctx_s *ctx, size_t _mask_array_size)
{
  vapi_msg_classify_add_del_table *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_add_del_table) + sizeof(msg->payload.mask[0]) * _mask_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_add_del_table*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_add_del_table);
  msg->payload.mask_len = _mask_array_size;

  return msg;
}

static inline vapi_error_e vapi_classify_add_del_table(struct vapi_ctx_s *ctx,
  vapi_msg_classify_add_del_table *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_add_del_table_reply *reply),
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
  vapi_msg_classify_add_del_table_hton(msg);
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
    vapi_msg_classify_add_del_table_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_add_del_table()
{
  static const char name[] = "classify_add_del_table";
  static const char name_with_crc[] = "classify_add_del_table_9bd794ae";
  static vapi_message_desc_t __vapi_metadata_classify_add_del_table = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_classify_add_del_table, payload),
    sizeof(vapi_msg_classify_add_del_table),
    (generic_swap_fn_t)vapi_msg_classify_add_del_table_hton,
    (generic_swap_fn_t)vapi_msg_classify_add_del_table_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_add_del_table = vapi_register_msg(&__vapi_metadata_classify_add_del_table);
  VAPI_DBG("Assigned msg id %d to classify_add_del_table", vapi_msg_id_classify_add_del_table);
}
#endif

#ifndef defined_vapi_msg_flow_classify_details
#define defined_vapi_msg_flow_classify_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 table_index; 
} vapi_payload_flow_classify_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_flow_classify_details payload;
} vapi_msg_flow_classify_details;

static inline void vapi_msg_flow_classify_details_payload_hton(vapi_payload_flow_classify_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->table_index = htobe32(payload->table_index);
}

static inline void vapi_msg_flow_classify_details_payload_ntoh(vapi_payload_flow_classify_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->table_index = be32toh(payload->table_index);
}

static inline void vapi_msg_flow_classify_details_hton(vapi_msg_flow_classify_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_flow_classify_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_flow_classify_details_ntoh(vapi_msg_flow_classify_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_flow_classify_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flow_classify_details_msg_size(vapi_msg_flow_classify_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_flow_classify_details()
{
  static const char name[] = "flow_classify_details";
  static const char name_with_crc[] = "flow_classify_details_cc3461ad";
  static vapi_message_desc_t __vapi_metadata_flow_classify_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_flow_classify_details, payload),
    sizeof(vapi_msg_flow_classify_details),
    (generic_swap_fn_t)vapi_msg_flow_classify_details_hton,
    (generic_swap_fn_t)vapi_msg_flow_classify_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flow_classify_details = vapi_register_msg(&__vapi_metadata_flow_classify_details);
  VAPI_DBG("Assigned msg id %d to flow_classify_details", vapi_msg_id_flow_classify_details);
}

static inline void vapi_set_vapi_msg_flow_classify_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_flow_classify_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_flow_classify_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_flow_classify_dump
#define defined_vapi_msg_flow_classify_dump
typedef struct __attribute__ ((__packed__)) {
  u8 type; 
} vapi_payload_flow_classify_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_flow_classify_dump payload;
} vapi_msg_flow_classify_dump;

static inline void vapi_msg_flow_classify_dump_payload_hton(vapi_payload_flow_classify_dump *payload)
{

}

static inline void vapi_msg_flow_classify_dump_payload_ntoh(vapi_payload_flow_classify_dump *payload)
{

}

static inline void vapi_msg_flow_classify_dump_hton(vapi_msg_flow_classify_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_flow_classify_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_flow_classify_dump_ntoh(vapi_msg_flow_classify_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_flow_classify_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flow_classify_dump_msg_size(vapi_msg_flow_classify_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_flow_classify_dump* vapi_alloc_flow_classify_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_flow_classify_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_flow_classify_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_flow_classify_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_flow_classify_dump);

  return msg;
}

static inline vapi_error_e vapi_flow_classify_dump(struct vapi_ctx_s *ctx,
  vapi_msg_flow_classify_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_flow_classify_details *reply),
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
  vapi_msg_flow_classify_dump_hton(msg);
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
    vapi_msg_flow_classify_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_flow_classify_dump()
{
  static const char name[] = "flow_classify_dump";
  static const char name_with_crc[] = "flow_classify_dump_41503530";
  static vapi_message_desc_t __vapi_metadata_flow_classify_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_flow_classify_dump, payload),
    sizeof(vapi_msg_flow_classify_dump),
    (generic_swap_fn_t)vapi_msg_flow_classify_dump_hton,
    (generic_swap_fn_t)vapi_msg_flow_classify_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flow_classify_dump = vapi_register_msg(&__vapi_metadata_flow_classify_dump);
  VAPI_DBG("Assigned msg id %d to flow_classify_dump", vapi_msg_id_flow_classify_dump);
}
#endif

#ifndef defined_vapi_msg_flow_classify_set_interface
#define defined_vapi_msg_flow_classify_set_interface
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 ip4_table_index;
  u32 ip6_table_index;
  u8 is_add; 
} vapi_payload_flow_classify_set_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_flow_classify_set_interface payload;
} vapi_msg_flow_classify_set_interface;

static inline void vapi_msg_flow_classify_set_interface_payload_hton(vapi_payload_flow_classify_set_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->ip4_table_index = htobe32(payload->ip4_table_index);
  payload->ip6_table_index = htobe32(payload->ip6_table_index);
}

static inline void vapi_msg_flow_classify_set_interface_payload_ntoh(vapi_payload_flow_classify_set_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->ip4_table_index = be32toh(payload->ip4_table_index);
  payload->ip6_table_index = be32toh(payload->ip6_table_index);
}

static inline void vapi_msg_flow_classify_set_interface_hton(vapi_msg_flow_classify_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_set_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_flow_classify_set_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_flow_classify_set_interface_ntoh(vapi_msg_flow_classify_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_flow_classify_set_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_flow_classify_set_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_flow_classify_set_interface_msg_size(vapi_msg_flow_classify_set_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_flow_classify_set_interface* vapi_alloc_flow_classify_set_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_flow_classify_set_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_flow_classify_set_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_flow_classify_set_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_flow_classify_set_interface);

  return msg;
}

static inline vapi_error_e vapi_flow_classify_set_interface(struct vapi_ctx_s *ctx,
  vapi_msg_flow_classify_set_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_flow_classify_set_interface_reply *reply),
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
  vapi_msg_flow_classify_set_interface_hton(msg);
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
    vapi_msg_flow_classify_set_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_flow_classify_set_interface()
{
  static const char name[] = "flow_classify_set_interface";
  static const char name_with_crc[] = "flow_classify_set_interface_275fa12c";
  static vapi_message_desc_t __vapi_metadata_flow_classify_set_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_flow_classify_set_interface, payload),
    sizeof(vapi_msg_flow_classify_set_interface),
    (generic_swap_fn_t)vapi_msg_flow_classify_set_interface_hton,
    (generic_swap_fn_t)vapi_msg_flow_classify_set_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_flow_classify_set_interface = vapi_register_msg(&__vapi_metadata_flow_classify_set_interface);
  VAPI_DBG("Assigned msg id %d to flow_classify_set_interface", vapi_msg_id_flow_classify_set_interface);
}
#endif

#ifndef defined_vapi_msg_classify_session_dump
#define defined_vapi_msg_classify_session_dump
typedef struct __attribute__ ((__packed__)) {
  u32 table_id; 
} vapi_payload_classify_session_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_classify_session_dump payload;
} vapi_msg_classify_session_dump;

static inline void vapi_msg_classify_session_dump_payload_hton(vapi_payload_classify_session_dump *payload)
{
  payload->table_id = htobe32(payload->table_id);
}

static inline void vapi_msg_classify_session_dump_payload_ntoh(vapi_payload_classify_session_dump *payload)
{
  payload->table_id = be32toh(payload->table_id);
}

static inline void vapi_msg_classify_session_dump_hton(vapi_msg_classify_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_session_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_classify_session_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_session_dump_ntoh(vapi_msg_classify_session_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_session_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_classify_session_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_session_dump_msg_size(vapi_msg_classify_session_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_classify_session_dump* vapi_alloc_classify_session_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_classify_session_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_session_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_session_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_session_dump);

  return msg;
}

static inline vapi_error_e vapi_classify_session_dump(struct vapi_ctx_s *ctx,
  vapi_msg_classify_session_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_session_details *reply),
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
  vapi_msg_classify_session_dump_hton(msg);
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
    vapi_msg_classify_session_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_session_dump()
{
  static const char name[] = "classify_session_dump";
  static const char name_with_crc[] = "classify_session_dump_0cca2cd9";
  static vapi_message_desc_t __vapi_metadata_classify_session_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_classify_session_dump, payload),
    sizeof(vapi_msg_classify_session_dump),
    (generic_swap_fn_t)vapi_msg_classify_session_dump_hton,
    (generic_swap_fn_t)vapi_msg_classify_session_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_session_dump = vapi_register_msg(&__vapi_metadata_classify_session_dump);
  VAPI_DBG("Assigned msg id %d to classify_session_dump", vapi_msg_id_classify_session_dump);
}
#endif

#ifndef defined_vapi_msg_classify_set_interface_ip_table
#define defined_vapi_msg_classify_set_interface_ip_table
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6;
  u32 sw_if_index;
  u32 table_index; 
} vapi_payload_classify_set_interface_ip_table;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_classify_set_interface_ip_table payload;
} vapi_msg_classify_set_interface_ip_table;

static inline void vapi_msg_classify_set_interface_ip_table_payload_hton(vapi_payload_classify_set_interface_ip_table *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->table_index = htobe32(payload->table_index);
}

static inline void vapi_msg_classify_set_interface_ip_table_payload_ntoh(vapi_payload_classify_set_interface_ip_table *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->table_index = be32toh(payload->table_index);
}

static inline void vapi_msg_classify_set_interface_ip_table_hton(vapi_msg_classify_set_interface_ip_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_ip_table'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_classify_set_interface_ip_table_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_set_interface_ip_table_ntoh(vapi_msg_classify_set_interface_ip_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_set_interface_ip_table'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_classify_set_interface_ip_table_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_set_interface_ip_table_msg_size(vapi_msg_classify_set_interface_ip_table *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_classify_set_interface_ip_table* vapi_alloc_classify_set_interface_ip_table(struct vapi_ctx_s *ctx)
{
  vapi_msg_classify_set_interface_ip_table *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_set_interface_ip_table);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_set_interface_ip_table*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_set_interface_ip_table);

  return msg;
}

static inline vapi_error_e vapi_classify_set_interface_ip_table(struct vapi_ctx_s *ctx,
  vapi_msg_classify_set_interface_ip_table *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_set_interface_ip_table_reply *reply),
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
  vapi_msg_classify_set_interface_ip_table_hton(msg);
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
    vapi_msg_classify_set_interface_ip_table_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_set_interface_ip_table()
{
  static const char name[] = "classify_set_interface_ip_table";
  static const char name_with_crc[] = "classify_set_interface_ip_table_d7199b03";
  static vapi_message_desc_t __vapi_metadata_classify_set_interface_ip_table = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_classify_set_interface_ip_table, payload),
    sizeof(vapi_msg_classify_set_interface_ip_table),
    (generic_swap_fn_t)vapi_msg_classify_set_interface_ip_table_hton,
    (generic_swap_fn_t)vapi_msg_classify_set_interface_ip_table_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_set_interface_ip_table = vapi_register_msg(&__vapi_metadata_classify_set_interface_ip_table);
  VAPI_DBG("Assigned msg id %d to classify_set_interface_ip_table", vapi_msg_id_classify_set_interface_ip_table);
}
#endif

#ifndef defined_vapi_msg_input_acl_set_interface
#define defined_vapi_msg_input_acl_set_interface
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 ip4_table_index;
  u32 ip6_table_index;
  u32 l2_table_index;
  u8 is_add; 
} vapi_payload_input_acl_set_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_input_acl_set_interface payload;
} vapi_msg_input_acl_set_interface;

static inline void vapi_msg_input_acl_set_interface_payload_hton(vapi_payload_input_acl_set_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->ip4_table_index = htobe32(payload->ip4_table_index);
  payload->ip6_table_index = htobe32(payload->ip6_table_index);
  payload->l2_table_index = htobe32(payload->l2_table_index);
}

static inline void vapi_msg_input_acl_set_interface_payload_ntoh(vapi_payload_input_acl_set_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->ip4_table_index = be32toh(payload->ip4_table_index);
  payload->ip6_table_index = be32toh(payload->ip6_table_index);
  payload->l2_table_index = be32toh(payload->l2_table_index);
}

static inline void vapi_msg_input_acl_set_interface_hton(vapi_msg_input_acl_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_input_acl_set_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_input_acl_set_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_input_acl_set_interface_ntoh(vapi_msg_input_acl_set_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_input_acl_set_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_input_acl_set_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_input_acl_set_interface_msg_size(vapi_msg_input_acl_set_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_input_acl_set_interface* vapi_alloc_input_acl_set_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_input_acl_set_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_input_acl_set_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_input_acl_set_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_input_acl_set_interface);

  return msg;
}

static inline vapi_error_e vapi_input_acl_set_interface(struct vapi_ctx_s *ctx,
  vapi_msg_input_acl_set_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_input_acl_set_interface_reply *reply),
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
  vapi_msg_input_acl_set_interface_hton(msg);
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
    vapi_msg_input_acl_set_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_input_acl_set_interface()
{
  static const char name[] = "input_acl_set_interface";
  static const char name_with_crc[] = "input_acl_set_interface_e09537b0";
  static vapi_message_desc_t __vapi_metadata_input_acl_set_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_input_acl_set_interface, payload),
    sizeof(vapi_msg_input_acl_set_interface),
    (generic_swap_fn_t)vapi_msg_input_acl_set_interface_hton,
    (generic_swap_fn_t)vapi_msg_input_acl_set_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_input_acl_set_interface = vapi_register_msg(&__vapi_metadata_input_acl_set_interface);
  VAPI_DBG("Assigned msg id %d to input_acl_set_interface", vapi_msg_id_input_acl_set_interface);
}
#endif

#ifndef defined_vapi_msg_classify_table_info
#define defined_vapi_msg_classify_table_info
typedef struct __attribute__ ((__packed__)) {
  u32 table_id; 
} vapi_payload_classify_table_info;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_classify_table_info payload;
} vapi_msg_classify_table_info;

static inline void vapi_msg_classify_table_info_payload_hton(vapi_payload_classify_table_info *payload)
{
  payload->table_id = htobe32(payload->table_id);
}

static inline void vapi_msg_classify_table_info_payload_ntoh(vapi_payload_classify_table_info *payload)
{
  payload->table_id = be32toh(payload->table_id);
}

static inline void vapi_msg_classify_table_info_hton(vapi_msg_classify_table_info *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_info'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_classify_table_info_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_table_info_ntoh(vapi_msg_classify_table_info *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_info'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_classify_table_info_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_table_info_msg_size(vapi_msg_classify_table_info *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_classify_table_info* vapi_alloc_classify_table_info(struct vapi_ctx_s *ctx)
{
  vapi_msg_classify_table_info *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_table_info);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_table_info*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_table_info);

  return msg;
}

static inline vapi_error_e vapi_classify_table_info(struct vapi_ctx_s *ctx,
  vapi_msg_classify_table_info *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_table_info_reply *reply),
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
  vapi_msg_classify_table_info_hton(msg);
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
    vapi_msg_classify_table_info_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_table_info()
{
  static const char name[] = "classify_table_info";
  static const char name_with_crc[] = "classify_table_info_0cca2cd9";
  static vapi_message_desc_t __vapi_metadata_classify_table_info = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_classify_table_info, payload),
    sizeof(vapi_msg_classify_table_info),
    (generic_swap_fn_t)vapi_msg_classify_table_info_hton,
    (generic_swap_fn_t)vapi_msg_classify_table_info_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_table_info = vapi_register_msg(&__vapi_metadata_classify_table_info);
  VAPI_DBG("Assigned msg id %d to classify_table_info", vapi_msg_id_classify_table_info);
}
#endif

#ifndef defined_vapi_msg_classify_table_by_interface
#define defined_vapi_msg_classify_table_by_interface
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_classify_table_by_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_classify_table_by_interface payload;
} vapi_msg_classify_table_by_interface;

static inline void vapi_msg_classify_table_by_interface_payload_hton(vapi_payload_classify_table_by_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_classify_table_by_interface_payload_ntoh(vapi_payload_classify_table_by_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_classify_table_by_interface_hton(vapi_msg_classify_table_by_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_by_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_classify_table_by_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_classify_table_by_interface_ntoh(vapi_msg_classify_table_by_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_classify_table_by_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_classify_table_by_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_classify_table_by_interface_msg_size(vapi_msg_classify_table_by_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_classify_table_by_interface* vapi_alloc_classify_table_by_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_classify_table_by_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_classify_table_by_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_classify_table_by_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_classify_table_by_interface);

  return msg;
}

static inline vapi_error_e vapi_classify_table_by_interface(struct vapi_ctx_s *ctx,
  vapi_msg_classify_table_by_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_classify_table_by_interface_reply *reply),
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
  vapi_msg_classify_table_by_interface_hton(msg);
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
    vapi_msg_classify_table_by_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_classify_table_by_interface()
{
  static const char name[] = "classify_table_by_interface";
  static const char name_with_crc[] = "classify_table_by_interface_529cb13f";
  static vapi_message_desc_t __vapi_metadata_classify_table_by_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_classify_table_by_interface, payload),
    sizeof(vapi_msg_classify_table_by_interface),
    (generic_swap_fn_t)vapi_msg_classify_table_by_interface_hton,
    (generic_swap_fn_t)vapi_msg_classify_table_by_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_classify_table_by_interface = vapi_register_msg(&__vapi_metadata_classify_table_by_interface);
  VAPI_DBG("Assigned msg id %d to classify_table_by_interface", vapi_msg_id_classify_table_by_interface);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
