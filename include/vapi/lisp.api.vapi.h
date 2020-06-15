#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_lisp_cp_lisp_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_lisp_cp_lisp_api_json

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

extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_vni_dump;
extern vapi_msg_id_t vapi_msg_id_show_lisp_map_request_mode;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_locator_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_locator_set;
extern vapi_msg_id_t vapi_msg_id_show_lisp_map_register_state_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_locator_dump;
extern vapi_msg_id_t vapi_msg_id_show_lisp_use_petr;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_map_resolver_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_adjacencies_get;
extern vapi_msg_id_t vapi_msg_id_lisp_map_resolver_dump;
extern vapi_msg_id_t vapi_msg_id_lisp_locator_details;
extern vapi_msg_id_t vapi_msg_id_show_lisp_map_request_mode_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_rloc_probe_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_local_eid_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_use_petr;
extern vapi_msg_id_t vapi_msg_id_lisp_map_resolver_details;
extern vapi_msg_id_t vapi_msg_id_lisp_locator_set_details;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_map_resolver;
extern vapi_msg_id_t vapi_msg_id_show_lisp_pitr;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_adjacency;
extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_add_del_map;
extern vapi_msg_id_t vapi_msg_id_lisp_pitr_set_locator_set;
extern vapi_msg_id_t vapi_msg_id_lisp_get_map_request_itr_rlocs;
extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_map_details;
extern vapi_msg_id_t vapi_msg_id_lisp_map_server_details;
extern vapi_msg_id_t vapi_msg_id_lisp_map_request_mode;
extern vapi_msg_id_t vapi_msg_id_show_lisp_map_register_state;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_remote_mapping;
extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_dump;
extern vapi_msg_id_t vapi_msg_id_lisp_map_register_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_enable_disable;
extern vapi_msg_id_t vapi_msg_id_show_lisp_rloc_probe_state_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_map_dump;
extern vapi_msg_id_t vapi_msg_id_lisp_map_register_enable_disable;
extern vapi_msg_id_t vapi_msg_id_lisp_locator_set_dump;
extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_details;
extern vapi_msg_id_t vapi_msg_id_lisp_map_request_mode_reply;
extern vapi_msg_id_t vapi_msg_id_show_lisp_status_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_rloc_probe_enable_disable;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_map_server;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_local_eid;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_map_server_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_adjacencies_get_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_pitr_set_locator_set_reply;
extern vapi_msg_id_t vapi_msg_id_show_lisp_use_petr_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_map_request_itr_rlocs;
extern vapi_msg_id_t vapi_msg_id_show_lisp_pitr_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_map_server_dump;
extern vapi_msg_id_t vapi_msg_id_show_lisp_rloc_probe_state;
extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_add_del_map_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_locator_set_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_use_petr_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_locator;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_map_request_itr_rlocs_reply;
extern vapi_msg_id_t vapi_msg_id_show_lisp_status;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_adjacency_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_eid_table_vni_details;
extern vapi_msg_id_t vapi_msg_id_lisp_add_del_remote_mapping_reply;
extern vapi_msg_id_t vapi_msg_id_lisp_get_map_request_itr_rlocs_reply;

#define DEFINE_VAPI_MSG_IDS_LISP_API_JSON\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_vni_dump;\
  vapi_msg_id_t vapi_msg_id_show_lisp_map_request_mode;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_locator_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_locator_set;\
  vapi_msg_id_t vapi_msg_id_show_lisp_map_register_state_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_locator_dump;\
  vapi_msg_id_t vapi_msg_id_show_lisp_use_petr;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_map_resolver_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_adjacencies_get;\
  vapi_msg_id_t vapi_msg_id_lisp_map_resolver_dump;\
  vapi_msg_id_t vapi_msg_id_lisp_locator_details;\
  vapi_msg_id_t vapi_msg_id_show_lisp_map_request_mode_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_rloc_probe_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_local_eid_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_use_petr;\
  vapi_msg_id_t vapi_msg_id_lisp_map_resolver_details;\
  vapi_msg_id_t vapi_msg_id_lisp_locator_set_details;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_map_resolver;\
  vapi_msg_id_t vapi_msg_id_show_lisp_pitr;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_adjacency;\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_add_del_map;\
  vapi_msg_id_t vapi_msg_id_lisp_pitr_set_locator_set;\
  vapi_msg_id_t vapi_msg_id_lisp_get_map_request_itr_rlocs;\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_map_details;\
  vapi_msg_id_t vapi_msg_id_lisp_map_server_details;\
  vapi_msg_id_t vapi_msg_id_lisp_map_request_mode;\
  vapi_msg_id_t vapi_msg_id_show_lisp_map_register_state;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_remote_mapping;\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_dump;\
  vapi_msg_id_t vapi_msg_id_lisp_map_register_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_enable_disable;\
  vapi_msg_id_t vapi_msg_id_show_lisp_rloc_probe_state_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_map_dump;\
  vapi_msg_id_t vapi_msg_id_lisp_map_register_enable_disable;\
  vapi_msg_id_t vapi_msg_id_lisp_locator_set_dump;\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_details;\
  vapi_msg_id_t vapi_msg_id_lisp_map_request_mode_reply;\
  vapi_msg_id_t vapi_msg_id_show_lisp_status_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_rloc_probe_enable_disable;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_map_server;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_local_eid;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_map_server_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_adjacencies_get_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_pitr_set_locator_set_reply;\
  vapi_msg_id_t vapi_msg_id_show_lisp_use_petr_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_map_request_itr_rlocs;\
  vapi_msg_id_t vapi_msg_id_show_lisp_pitr_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_map_server_dump;\
  vapi_msg_id_t vapi_msg_id_show_lisp_rloc_probe_state;\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_add_del_map_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_locator_set_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_use_petr_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_locator;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_map_request_itr_rlocs_reply;\
  vapi_msg_id_t vapi_msg_id_show_lisp_status;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_adjacency_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_eid_table_vni_details;\
  vapi_msg_id_t vapi_msg_id_lisp_add_del_remote_mapping_reply;\
  vapi_msg_id_t vapi_msg_id_lisp_get_map_request_itr_rlocs_reply;


#ifndef defined_vapi_type_local_locator
#define defined_vapi_type_local_locator
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  u8 priority;
  u8 weight;
} vapi_type_local_locator;

static inline void vapi_type_local_locator_hton(vapi_type_local_locator *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
}

static inline void vapi_type_local_locator_ntoh(vapi_type_local_locator *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
}
#endif

#ifndef defined_vapi_type_remote_locator
#define defined_vapi_type_remote_locator
typedef struct __attribute__((__packed__)) {
  u8 is_ip4;
  u8 priority;
  u8 weight;
  u8 addr[16];
} vapi_type_remote_locator;

static inline void vapi_type_remote_locator_hton(vapi_type_remote_locator *msg)
{

}

static inline void vapi_type_remote_locator_ntoh(vapi_type_remote_locator *msg)
{

}
#endif

#ifndef defined_vapi_type_lisp_adjacency
#define defined_vapi_type_lisp_adjacency
typedef struct __attribute__((__packed__)) {
  u8 eid_type;
  u8 reid[16];
  u8 leid[16];
  u8 reid_prefix_len;
  u8 leid_prefix_len;
} vapi_type_lisp_adjacency;

static inline void vapi_type_lisp_adjacency_hton(vapi_type_lisp_adjacency *msg)
{

}

static inline void vapi_type_lisp_adjacency_ntoh(vapi_type_lisp_adjacency *msg)
{

}
#endif

#ifndef defined_vapi_msg_lisp_eid_table_vni_details
#define defined_vapi_msg_lisp_eid_table_vni_details
typedef struct __attribute__ ((__packed__)) {
  u32 vni; 
} vapi_payload_lisp_eid_table_vni_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_eid_table_vni_details payload;
} vapi_msg_lisp_eid_table_vni_details;

static inline void vapi_msg_lisp_eid_table_vni_details_payload_hton(vapi_payload_lisp_eid_table_vni_details *payload)
{
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_lisp_eid_table_vni_details_payload_ntoh(vapi_payload_lisp_eid_table_vni_details *payload)
{
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_lisp_eid_table_vni_details_hton(vapi_msg_lisp_eid_table_vni_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_vni_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_eid_table_vni_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_eid_table_vni_details_ntoh(vapi_msg_lisp_eid_table_vni_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_vni_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_eid_table_vni_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_eid_table_vni_details_msg_size(vapi_msg_lisp_eid_table_vni_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_vni_details()
{
  static const char name[] = "lisp_eid_table_vni_details";
  static const char name_with_crc[] = "lisp_eid_table_vni_details_64abc01e";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_vni_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_eid_table_vni_details, payload),
    sizeof(vapi_msg_lisp_eid_table_vni_details),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_vni_details_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_vni_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_vni_details = vapi_register_msg(&__vapi_metadata_lisp_eid_table_vni_details);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_vni_details", vapi_msg_id_lisp_eid_table_vni_details);
}

static inline void vapi_set_vapi_msg_lisp_eid_table_vni_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_eid_table_vni_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_eid_table_vni_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_eid_table_vni_dump
#define defined_vapi_msg_lisp_eid_table_vni_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_lisp_eid_table_vni_dump;

static inline void vapi_msg_lisp_eid_table_vni_dump_hton(vapi_msg_lisp_eid_table_vni_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_vni_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_lisp_eid_table_vni_dump_ntoh(vapi_msg_lisp_eid_table_vni_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_vni_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_lisp_eid_table_vni_dump_msg_size(vapi_msg_lisp_eid_table_vni_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_eid_table_vni_dump* vapi_alloc_lisp_eid_table_vni_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_eid_table_vni_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_eid_table_vni_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_eid_table_vni_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_eid_table_vni_dump);

  return msg;
}

static inline vapi_error_e vapi_lisp_eid_table_vni_dump(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_eid_table_vni_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_eid_table_vni_details *reply),
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
  vapi_msg_lisp_eid_table_vni_dump_hton(msg);
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
    vapi_msg_lisp_eid_table_vni_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_vni_dump()
{
  static const char name[] = "lisp_eid_table_vni_dump";
  static const char name_with_crc[] = "lisp_eid_table_vni_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_vni_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_lisp_eid_table_vni_dump),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_vni_dump_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_vni_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_vni_dump = vapi_register_msg(&__vapi_metadata_lisp_eid_table_vni_dump);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_vni_dump", vapi_msg_id_lisp_eid_table_vni_dump);
}
#endif

#ifndef defined_vapi_msg_show_lisp_map_request_mode_reply
#define defined_vapi_msg_show_lisp_map_request_mode_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 mode; 
} vapi_payload_show_lisp_map_request_mode_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_lisp_map_request_mode_reply payload;
} vapi_msg_show_lisp_map_request_mode_reply;

static inline void vapi_msg_show_lisp_map_request_mode_reply_payload_hton(vapi_payload_show_lisp_map_request_mode_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_lisp_map_request_mode_reply_payload_ntoh(vapi_payload_show_lisp_map_request_mode_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_lisp_map_request_mode_reply_hton(vapi_msg_show_lisp_map_request_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_request_mode_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_lisp_map_request_mode_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_lisp_map_request_mode_reply_ntoh(vapi_msg_show_lisp_map_request_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_request_mode_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_lisp_map_request_mode_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_lisp_map_request_mode_reply_msg_size(vapi_msg_show_lisp_map_request_mode_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_lisp_map_request_mode_reply()
{
  static const char name[] = "show_lisp_map_request_mode_reply";
  static const char name_with_crc[] = "show_lisp_map_request_mode_reply_d423107c";
  static vapi_message_desc_t __vapi_metadata_show_lisp_map_request_mode_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_lisp_map_request_mode_reply, payload),
    sizeof(vapi_msg_show_lisp_map_request_mode_reply),
    (generic_swap_fn_t)vapi_msg_show_lisp_map_request_mode_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_map_request_mode_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_map_request_mode_reply = vapi_register_msg(&__vapi_metadata_show_lisp_map_request_mode_reply);
  VAPI_DBG("Assigned msg id %d to show_lisp_map_request_mode_reply", vapi_msg_id_show_lisp_map_request_mode_reply);
}

static inline void vapi_set_vapi_msg_show_lisp_map_request_mode_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_lisp_map_request_mode_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_lisp_map_request_mode_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_show_lisp_map_request_mode
#define defined_vapi_msg_show_lisp_map_request_mode
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_lisp_map_request_mode;

static inline void vapi_msg_show_lisp_map_request_mode_hton(vapi_msg_show_lisp_map_request_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_request_mode'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_lisp_map_request_mode_ntoh(vapi_msg_show_lisp_map_request_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_request_mode'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_lisp_map_request_mode_msg_size(vapi_msg_show_lisp_map_request_mode *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_lisp_map_request_mode* vapi_alloc_show_lisp_map_request_mode(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_lisp_map_request_mode *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_lisp_map_request_mode);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_lisp_map_request_mode*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_lisp_map_request_mode);

  return msg;
}

static inline vapi_error_e vapi_show_lisp_map_request_mode(struct vapi_ctx_s *ctx,
  vapi_msg_show_lisp_map_request_mode *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_lisp_map_request_mode_reply *reply),
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
  vapi_msg_show_lisp_map_request_mode_hton(msg);
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
    vapi_msg_show_lisp_map_request_mode_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_lisp_map_request_mode()
{
  static const char name[] = "show_lisp_map_request_mode";
  static const char name_with_crc[] = "show_lisp_map_request_mode_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_lisp_map_request_mode = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_lisp_map_request_mode),
    (generic_swap_fn_t)vapi_msg_show_lisp_map_request_mode_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_map_request_mode_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_map_request_mode = vapi_register_msg(&__vapi_metadata_show_lisp_map_request_mode);
  VAPI_DBG("Assigned msg id %d to show_lisp_map_request_mode", vapi_msg_id_show_lisp_map_request_mode);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_locator_reply
#define defined_vapi_msg_lisp_add_del_locator_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_add_del_locator_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_locator_reply payload;
} vapi_msg_lisp_add_del_locator_reply;

static inline void vapi_msg_lisp_add_del_locator_reply_payload_hton(vapi_payload_lisp_add_del_locator_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_add_del_locator_reply_payload_ntoh(vapi_payload_lisp_add_del_locator_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_add_del_locator_reply_hton(vapi_msg_lisp_add_del_locator_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_locator_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_locator_reply_ntoh(vapi_msg_lisp_add_del_locator_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_locator_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_locator_reply_msg_size(vapi_msg_lisp_add_del_locator_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_locator_reply()
{
  static const char name[] = "lisp_add_del_locator_reply";
  static const char name_with_crc[] = "lisp_add_del_locator_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_locator_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_locator_reply, payload),
    sizeof(vapi_msg_lisp_add_del_locator_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_locator_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_locator_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_locator_reply", vapi_msg_id_lisp_add_del_locator_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_locator_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_locator_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_locator_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_locator_set_reply
#define defined_vapi_msg_lisp_add_del_locator_set_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 ls_index; 
} vapi_payload_lisp_add_del_locator_set_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_locator_set_reply payload;
} vapi_msg_lisp_add_del_locator_set_reply;

static inline void vapi_msg_lisp_add_del_locator_set_reply_payload_hton(vapi_payload_lisp_add_del_locator_set_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->ls_index = htobe32(payload->ls_index);
}

static inline void vapi_msg_lisp_add_del_locator_set_reply_payload_ntoh(vapi_payload_lisp_add_del_locator_set_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->ls_index = be32toh(payload->ls_index);
}

static inline void vapi_msg_lisp_add_del_locator_set_reply_hton(vapi_msg_lisp_add_del_locator_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator_set_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_locator_set_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_locator_set_reply_ntoh(vapi_msg_lisp_add_del_locator_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator_set_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_locator_set_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_locator_set_reply_msg_size(vapi_msg_lisp_add_del_locator_set_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_locator_set_reply()
{
  static const char name[] = "lisp_add_del_locator_set_reply";
  static const char name_with_crc[] = "lisp_add_del_locator_set_reply_b6666db4";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_locator_set_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_locator_set_reply, payload),
    sizeof(vapi_msg_lisp_add_del_locator_set_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_set_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_set_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_locator_set_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_locator_set_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_locator_set_reply", vapi_msg_id_lisp_add_del_locator_set_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_locator_set_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_locator_set_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_locator_set_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_locator_set
#define defined_vapi_msg_lisp_add_del_locator_set
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 locator_set_name[64];
  u32 locator_num;
  vapi_type_local_locator locators[0]; 
} vapi_payload_lisp_add_del_locator_set;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_locator_set payload;
} vapi_msg_lisp_add_del_locator_set;

static inline void vapi_msg_lisp_add_del_locator_set_payload_hton(vapi_payload_lisp_add_del_locator_set *payload)
{
  payload->locator_num = htobe32(payload->locator_num);
  do { unsigned i; for (i = 0; i < be32toh(payload->locator_num); ++i) { vapi_type_local_locator_hton(&payload->locators[i]); } } while(0);
}

static inline void vapi_msg_lisp_add_del_locator_set_payload_ntoh(vapi_payload_lisp_add_del_locator_set *payload)
{
  payload->locator_num = be32toh(payload->locator_num);
  do { unsigned i; for (i = 0; i < payload->locator_num; ++i) { vapi_type_local_locator_ntoh(&payload->locators[i]); } } while(0);
}

static inline void vapi_msg_lisp_add_del_locator_set_hton(vapi_msg_lisp_add_del_locator_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator_set'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_locator_set_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_locator_set_ntoh(vapi_msg_lisp_add_del_locator_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator_set'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_locator_set_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_locator_set_msg_size(vapi_msg_lisp_add_del_locator_set *msg)
{
  return sizeof(*msg)+ msg->payload.locator_num * sizeof(msg->payload.locators[0]);
}

static inline vapi_msg_lisp_add_del_locator_set* vapi_alloc_lisp_add_del_locator_set(struct vapi_ctx_s *ctx, size_t _locators_array_size)
{
  vapi_msg_lisp_add_del_locator_set *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_locator_set) + sizeof(msg->payload.locators[0]) * _locators_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_locator_set*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_locator_set);
  msg->payload.locator_num = _locators_array_size;

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_locator_set(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_locator_set *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_locator_set_reply *reply),
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
  vapi_msg_lisp_add_del_locator_set_hton(msg);
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
    vapi_msg_lisp_add_del_locator_set_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_locator_set()
{
  static const char name[] = "lisp_add_del_locator_set";
  static const char name_with_crc[] = "lisp_add_del_locator_set_06968e38";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_locator_set = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_locator_set, payload),
    sizeof(vapi_msg_lisp_add_del_locator_set),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_set_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_set_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_locator_set = vapi_register_msg(&__vapi_metadata_lisp_add_del_locator_set);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_locator_set", vapi_msg_id_lisp_add_del_locator_set);
}
#endif

#ifndef defined_vapi_msg_show_lisp_map_register_state_reply
#define defined_vapi_msg_show_lisp_map_register_state_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 is_enabled; 
} vapi_payload_show_lisp_map_register_state_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_lisp_map_register_state_reply payload;
} vapi_msg_show_lisp_map_register_state_reply;

static inline void vapi_msg_show_lisp_map_register_state_reply_payload_hton(vapi_payload_show_lisp_map_register_state_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_lisp_map_register_state_reply_payload_ntoh(vapi_payload_show_lisp_map_register_state_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_lisp_map_register_state_reply_hton(vapi_msg_show_lisp_map_register_state_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_register_state_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_lisp_map_register_state_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_lisp_map_register_state_reply_ntoh(vapi_msg_show_lisp_map_register_state_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_register_state_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_lisp_map_register_state_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_lisp_map_register_state_reply_msg_size(vapi_msg_show_lisp_map_register_state_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_lisp_map_register_state_reply()
{
  static const char name[] = "show_lisp_map_register_state_reply";
  static const char name_with_crc[] = "show_lisp_map_register_state_reply_14304fbc";
  static vapi_message_desc_t __vapi_metadata_show_lisp_map_register_state_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_lisp_map_register_state_reply, payload),
    sizeof(vapi_msg_show_lisp_map_register_state_reply),
    (generic_swap_fn_t)vapi_msg_show_lisp_map_register_state_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_map_register_state_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_map_register_state_reply = vapi_register_msg(&__vapi_metadata_show_lisp_map_register_state_reply);
  VAPI_DBG("Assigned msg id %d to show_lisp_map_register_state_reply", vapi_msg_id_show_lisp_map_register_state_reply);
}

static inline void vapi_set_vapi_msg_show_lisp_map_register_state_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_lisp_map_register_state_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_lisp_map_register_state_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_locator_details
#define defined_vapi_msg_lisp_locator_details
typedef struct __attribute__ ((__packed__)) {
  u8 local;
  u32 sw_if_index;
  u8 is_ipv6;
  u8 ip_address[16];
  u8 priority;
  u8 weight; 
} vapi_payload_lisp_locator_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_locator_details payload;
} vapi_msg_lisp_locator_details;

static inline void vapi_msg_lisp_locator_details_payload_hton(vapi_payload_lisp_locator_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_lisp_locator_details_payload_ntoh(vapi_payload_lisp_locator_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_lisp_locator_details_hton(vapi_msg_lisp_locator_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_locator_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_locator_details_ntoh(vapi_msg_lisp_locator_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_locator_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_locator_details_msg_size(vapi_msg_lisp_locator_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_locator_details()
{
  static const char name[] = "lisp_locator_details";
  static const char name_with_crc[] = "lisp_locator_details_b3988a30";
  static vapi_message_desc_t __vapi_metadata_lisp_locator_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_locator_details, payload),
    sizeof(vapi_msg_lisp_locator_details),
    (generic_swap_fn_t)vapi_msg_lisp_locator_details_hton,
    (generic_swap_fn_t)vapi_msg_lisp_locator_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_locator_details = vapi_register_msg(&__vapi_metadata_lisp_locator_details);
  VAPI_DBG("Assigned msg id %d to lisp_locator_details", vapi_msg_id_lisp_locator_details);
}

static inline void vapi_set_vapi_msg_lisp_locator_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_locator_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_locator_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_locator_dump
#define defined_vapi_msg_lisp_locator_dump
typedef struct __attribute__ ((__packed__)) {
  u32 ls_index;
  u8 ls_name[64];
  u8 is_index_set; 
} vapi_payload_lisp_locator_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_locator_dump payload;
} vapi_msg_lisp_locator_dump;

static inline void vapi_msg_lisp_locator_dump_payload_hton(vapi_payload_lisp_locator_dump *payload)
{
  payload->ls_index = htobe32(payload->ls_index);
}

static inline void vapi_msg_lisp_locator_dump_payload_ntoh(vapi_payload_lisp_locator_dump *payload)
{
  payload->ls_index = be32toh(payload->ls_index);
}

static inline void vapi_msg_lisp_locator_dump_hton(vapi_msg_lisp_locator_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_locator_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_locator_dump_ntoh(vapi_msg_lisp_locator_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_locator_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_locator_dump_msg_size(vapi_msg_lisp_locator_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_locator_dump* vapi_alloc_lisp_locator_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_locator_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_locator_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_locator_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_locator_dump);

  return msg;
}

static inline vapi_error_e vapi_lisp_locator_dump(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_locator_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_locator_details *reply),
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
  vapi_msg_lisp_locator_dump_hton(msg);
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
    vapi_msg_lisp_locator_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_locator_dump()
{
  static const char name[] = "lisp_locator_dump";
  static const char name_with_crc[] = "lisp_locator_dump_f27d5050";
  static vapi_message_desc_t __vapi_metadata_lisp_locator_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_locator_dump, payload),
    sizeof(vapi_msg_lisp_locator_dump),
    (generic_swap_fn_t)vapi_msg_lisp_locator_dump_hton,
    (generic_swap_fn_t)vapi_msg_lisp_locator_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_locator_dump = vapi_register_msg(&__vapi_metadata_lisp_locator_dump);
  VAPI_DBG("Assigned msg id %d to lisp_locator_dump", vapi_msg_id_lisp_locator_dump);
}
#endif

#ifndef defined_vapi_msg_show_lisp_use_petr_reply
#define defined_vapi_msg_show_lisp_use_petr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 status;
  u8 is_ip4;
  u8 address[16]; 
} vapi_payload_show_lisp_use_petr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_lisp_use_petr_reply payload;
} vapi_msg_show_lisp_use_petr_reply;

static inline void vapi_msg_show_lisp_use_petr_reply_payload_hton(vapi_payload_show_lisp_use_petr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_lisp_use_petr_reply_payload_ntoh(vapi_payload_show_lisp_use_petr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_lisp_use_petr_reply_hton(vapi_msg_show_lisp_use_petr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_use_petr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_lisp_use_petr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_lisp_use_petr_reply_ntoh(vapi_msg_show_lisp_use_petr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_use_petr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_lisp_use_petr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_lisp_use_petr_reply_msg_size(vapi_msg_show_lisp_use_petr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_lisp_use_petr_reply()
{
  static const char name[] = "show_lisp_use_petr_reply";
  static const char name_with_crc[] = "show_lisp_use_petr_reply_1eb21916";
  static vapi_message_desc_t __vapi_metadata_show_lisp_use_petr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_lisp_use_petr_reply, payload),
    sizeof(vapi_msg_show_lisp_use_petr_reply),
    (generic_swap_fn_t)vapi_msg_show_lisp_use_petr_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_use_petr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_use_petr_reply = vapi_register_msg(&__vapi_metadata_show_lisp_use_petr_reply);
  VAPI_DBG("Assigned msg id %d to show_lisp_use_petr_reply", vapi_msg_id_show_lisp_use_petr_reply);
}

static inline void vapi_set_vapi_msg_show_lisp_use_petr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_lisp_use_petr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_lisp_use_petr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_show_lisp_use_petr
#define defined_vapi_msg_show_lisp_use_petr
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_lisp_use_petr;

static inline void vapi_msg_show_lisp_use_petr_hton(vapi_msg_show_lisp_use_petr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_use_petr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_lisp_use_petr_ntoh(vapi_msg_show_lisp_use_petr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_use_petr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_lisp_use_petr_msg_size(vapi_msg_show_lisp_use_petr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_lisp_use_petr* vapi_alloc_show_lisp_use_petr(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_lisp_use_petr *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_lisp_use_petr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_lisp_use_petr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_lisp_use_petr);

  return msg;
}

static inline vapi_error_e vapi_show_lisp_use_petr(struct vapi_ctx_s *ctx,
  vapi_msg_show_lisp_use_petr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_lisp_use_petr_reply *reply),
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
  vapi_msg_show_lisp_use_petr_hton(msg);
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
    vapi_msg_show_lisp_use_petr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_lisp_use_petr()
{
  static const char name[] = "show_lisp_use_petr";
  static const char name_with_crc[] = "show_lisp_use_petr_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_lisp_use_petr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_lisp_use_petr),
    (generic_swap_fn_t)vapi_msg_show_lisp_use_petr_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_use_petr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_use_petr = vapi_register_msg(&__vapi_metadata_show_lisp_use_petr);
  VAPI_DBG("Assigned msg id %d to show_lisp_use_petr", vapi_msg_id_show_lisp_use_petr);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_map_resolver_reply
#define defined_vapi_msg_lisp_add_del_map_resolver_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_add_del_map_resolver_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_map_resolver_reply payload;
} vapi_msg_lisp_add_del_map_resolver_reply;

static inline void vapi_msg_lisp_add_del_map_resolver_reply_payload_hton(vapi_payload_lisp_add_del_map_resolver_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_add_del_map_resolver_reply_payload_ntoh(vapi_payload_lisp_add_del_map_resolver_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_add_del_map_resolver_reply_hton(vapi_msg_lisp_add_del_map_resolver_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_resolver_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_map_resolver_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_map_resolver_reply_ntoh(vapi_msg_lisp_add_del_map_resolver_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_resolver_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_map_resolver_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_map_resolver_reply_msg_size(vapi_msg_lisp_add_del_map_resolver_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_map_resolver_reply()
{
  static const char name[] = "lisp_add_del_map_resolver_reply";
  static const char name_with_crc[] = "lisp_add_del_map_resolver_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_map_resolver_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_map_resolver_reply, payload),
    sizeof(vapi_msg_lisp_add_del_map_resolver_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_resolver_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_resolver_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_map_resolver_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_map_resolver_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_map_resolver_reply", vapi_msg_id_lisp_add_del_map_resolver_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_map_resolver_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_map_resolver_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_map_resolver_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_adjacencies_get_reply
#define defined_vapi_msg_lisp_adjacencies_get_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 count;
  vapi_type_lisp_adjacency adjacencies[0]; 
} vapi_payload_lisp_adjacencies_get_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_adjacencies_get_reply payload;
} vapi_msg_lisp_adjacencies_get_reply;

static inline void vapi_msg_lisp_adjacencies_get_reply_payload_hton(vapi_payload_lisp_adjacencies_get_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->count = htobe32(payload->count);
}

static inline void vapi_msg_lisp_adjacencies_get_reply_payload_ntoh(vapi_payload_lisp_adjacencies_get_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->count = be32toh(payload->count);
}

static inline void vapi_msg_lisp_adjacencies_get_reply_hton(vapi_msg_lisp_adjacencies_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_adjacencies_get_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_adjacencies_get_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_adjacencies_get_reply_ntoh(vapi_msg_lisp_adjacencies_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_adjacencies_get_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_adjacencies_get_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_adjacencies_get_reply_msg_size(vapi_msg_lisp_adjacencies_get_reply *msg)
{
  return sizeof(*msg)+ msg->payload.count * sizeof(msg->payload.adjacencies[0]);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_adjacencies_get_reply()
{
  static const char name[] = "lisp_adjacencies_get_reply";
  static const char name_with_crc[] = "lisp_adjacencies_get_reply_ada0f464";
  static vapi_message_desc_t __vapi_metadata_lisp_adjacencies_get_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_adjacencies_get_reply, payload),
    sizeof(vapi_msg_lisp_adjacencies_get_reply),
    (generic_swap_fn_t)vapi_msg_lisp_adjacencies_get_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_adjacencies_get_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_adjacencies_get_reply = vapi_register_msg(&__vapi_metadata_lisp_adjacencies_get_reply);
  VAPI_DBG("Assigned msg id %d to lisp_adjacencies_get_reply", vapi_msg_id_lisp_adjacencies_get_reply);
}

static inline void vapi_set_vapi_msg_lisp_adjacencies_get_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_adjacencies_get_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_adjacencies_get_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_adjacencies_get
#define defined_vapi_msg_lisp_adjacencies_get
typedef struct __attribute__ ((__packed__)) {
  u32 vni; 
} vapi_payload_lisp_adjacencies_get;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_adjacencies_get payload;
} vapi_msg_lisp_adjacencies_get;

static inline void vapi_msg_lisp_adjacencies_get_payload_hton(vapi_payload_lisp_adjacencies_get *payload)
{
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_lisp_adjacencies_get_payload_ntoh(vapi_payload_lisp_adjacencies_get *payload)
{
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_lisp_adjacencies_get_hton(vapi_msg_lisp_adjacencies_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_adjacencies_get'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_adjacencies_get_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_adjacencies_get_ntoh(vapi_msg_lisp_adjacencies_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_adjacencies_get'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_adjacencies_get_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_adjacencies_get_msg_size(vapi_msg_lisp_adjacencies_get *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_adjacencies_get* vapi_alloc_lisp_adjacencies_get(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_adjacencies_get *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_adjacencies_get);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_adjacencies_get*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_adjacencies_get);

  return msg;
}

static inline vapi_error_e vapi_lisp_adjacencies_get(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_adjacencies_get *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_adjacencies_get_reply *reply),
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
  vapi_msg_lisp_adjacencies_get_hton(msg);
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
    vapi_msg_lisp_adjacencies_get_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_adjacencies_get()
{
  static const char name[] = "lisp_adjacencies_get";
  static const char name_with_crc[] = "lisp_adjacencies_get_8d1f2fe9";
  static vapi_message_desc_t __vapi_metadata_lisp_adjacencies_get = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_adjacencies_get, payload),
    sizeof(vapi_msg_lisp_adjacencies_get),
    (generic_swap_fn_t)vapi_msg_lisp_adjacencies_get_hton,
    (generic_swap_fn_t)vapi_msg_lisp_adjacencies_get_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_adjacencies_get = vapi_register_msg(&__vapi_metadata_lisp_adjacencies_get);
  VAPI_DBG("Assigned msg id %d to lisp_adjacencies_get", vapi_msg_id_lisp_adjacencies_get);
}
#endif

#ifndef defined_vapi_msg_lisp_map_resolver_details
#define defined_vapi_msg_lisp_map_resolver_details
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6;
  u8 ip_address[16]; 
} vapi_payload_lisp_map_resolver_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_map_resolver_details payload;
} vapi_msg_lisp_map_resolver_details;

static inline void vapi_msg_lisp_map_resolver_details_payload_hton(vapi_payload_lisp_map_resolver_details *payload)
{

}

static inline void vapi_msg_lisp_map_resolver_details_payload_ntoh(vapi_payload_lisp_map_resolver_details *payload)
{

}

static inline void vapi_msg_lisp_map_resolver_details_hton(vapi_msg_lisp_map_resolver_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_resolver_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_map_resolver_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_map_resolver_details_ntoh(vapi_msg_lisp_map_resolver_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_resolver_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_map_resolver_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_map_resolver_details_msg_size(vapi_msg_lisp_map_resolver_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_map_resolver_details()
{
  static const char name[] = "lisp_map_resolver_details";
  static const char name_with_crc[] = "lisp_map_resolver_details_60a5f5ca";
  static vapi_message_desc_t __vapi_metadata_lisp_map_resolver_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_map_resolver_details, payload),
    sizeof(vapi_msg_lisp_map_resolver_details),
    (generic_swap_fn_t)vapi_msg_lisp_map_resolver_details_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_resolver_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_resolver_details = vapi_register_msg(&__vapi_metadata_lisp_map_resolver_details);
  VAPI_DBG("Assigned msg id %d to lisp_map_resolver_details", vapi_msg_id_lisp_map_resolver_details);
}

static inline void vapi_set_vapi_msg_lisp_map_resolver_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_map_resolver_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_map_resolver_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_map_resolver_dump
#define defined_vapi_msg_lisp_map_resolver_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_lisp_map_resolver_dump;

static inline void vapi_msg_lisp_map_resolver_dump_hton(vapi_msg_lisp_map_resolver_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_resolver_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_lisp_map_resolver_dump_ntoh(vapi_msg_lisp_map_resolver_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_resolver_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_lisp_map_resolver_dump_msg_size(vapi_msg_lisp_map_resolver_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_map_resolver_dump* vapi_alloc_lisp_map_resolver_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_map_resolver_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_map_resolver_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_map_resolver_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_map_resolver_dump);

  return msg;
}

static inline vapi_error_e vapi_lisp_map_resolver_dump(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_map_resolver_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_map_resolver_details *reply),
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
  vapi_msg_lisp_map_resolver_dump_hton(msg);
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
    vapi_msg_lisp_map_resolver_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_map_resolver_dump()
{
  static const char name[] = "lisp_map_resolver_dump";
  static const char name_with_crc[] = "lisp_map_resolver_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_lisp_map_resolver_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_lisp_map_resolver_dump),
    (generic_swap_fn_t)vapi_msg_lisp_map_resolver_dump_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_resolver_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_resolver_dump = vapi_register_msg(&__vapi_metadata_lisp_map_resolver_dump);
  VAPI_DBG("Assigned msg id %d to lisp_map_resolver_dump", vapi_msg_id_lisp_map_resolver_dump);
}
#endif

#ifndef defined_vapi_msg_lisp_rloc_probe_enable_disable_reply
#define defined_vapi_msg_lisp_rloc_probe_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_rloc_probe_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_rloc_probe_enable_disable_reply payload;
} vapi_msg_lisp_rloc_probe_enable_disable_reply;

static inline void vapi_msg_lisp_rloc_probe_enable_disable_reply_payload_hton(vapi_payload_lisp_rloc_probe_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_rloc_probe_enable_disable_reply_payload_ntoh(vapi_payload_lisp_rloc_probe_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_rloc_probe_enable_disable_reply_hton(vapi_msg_lisp_rloc_probe_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_rloc_probe_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_rloc_probe_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_rloc_probe_enable_disable_reply_ntoh(vapi_msg_lisp_rloc_probe_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_rloc_probe_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_rloc_probe_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_rloc_probe_enable_disable_reply_msg_size(vapi_msg_lisp_rloc_probe_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_rloc_probe_enable_disable_reply()
{
  static const char name[] = "lisp_rloc_probe_enable_disable_reply";
  static const char name_with_crc[] = "lisp_rloc_probe_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_rloc_probe_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_rloc_probe_enable_disable_reply, payload),
    sizeof(vapi_msg_lisp_rloc_probe_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_lisp_rloc_probe_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_rloc_probe_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_rloc_probe_enable_disable_reply = vapi_register_msg(&__vapi_metadata_lisp_rloc_probe_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to lisp_rloc_probe_enable_disable_reply", vapi_msg_id_lisp_rloc_probe_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_lisp_rloc_probe_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_rloc_probe_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_rloc_probe_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_local_eid_reply
#define defined_vapi_msg_lisp_add_del_local_eid_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_add_del_local_eid_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_local_eid_reply payload;
} vapi_msg_lisp_add_del_local_eid_reply;

static inline void vapi_msg_lisp_add_del_local_eid_reply_payload_hton(vapi_payload_lisp_add_del_local_eid_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_add_del_local_eid_reply_payload_ntoh(vapi_payload_lisp_add_del_local_eid_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_add_del_local_eid_reply_hton(vapi_msg_lisp_add_del_local_eid_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_local_eid_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_local_eid_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_local_eid_reply_ntoh(vapi_msg_lisp_add_del_local_eid_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_local_eid_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_local_eid_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_local_eid_reply_msg_size(vapi_msg_lisp_add_del_local_eid_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_local_eid_reply()
{
  static const char name[] = "lisp_add_del_local_eid_reply";
  static const char name_with_crc[] = "lisp_add_del_local_eid_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_local_eid_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_local_eid_reply, payload),
    sizeof(vapi_msg_lisp_add_del_local_eid_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_local_eid_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_local_eid_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_local_eid_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_local_eid_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_local_eid_reply", vapi_msg_id_lisp_add_del_local_eid_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_local_eid_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_local_eid_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_local_eid_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_use_petr_reply
#define defined_vapi_msg_lisp_use_petr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_use_petr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_use_petr_reply payload;
} vapi_msg_lisp_use_petr_reply;

static inline void vapi_msg_lisp_use_petr_reply_payload_hton(vapi_payload_lisp_use_petr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_use_petr_reply_payload_ntoh(vapi_payload_lisp_use_petr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_use_petr_reply_hton(vapi_msg_lisp_use_petr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_use_petr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_use_petr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_use_petr_reply_ntoh(vapi_msg_lisp_use_petr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_use_petr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_use_petr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_use_petr_reply_msg_size(vapi_msg_lisp_use_petr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_use_petr_reply()
{
  static const char name[] = "lisp_use_petr_reply";
  static const char name_with_crc[] = "lisp_use_petr_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_use_petr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_use_petr_reply, payload),
    sizeof(vapi_msg_lisp_use_petr_reply),
    (generic_swap_fn_t)vapi_msg_lisp_use_petr_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_use_petr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_use_petr_reply = vapi_register_msg(&__vapi_metadata_lisp_use_petr_reply);
  VAPI_DBG("Assigned msg id %d to lisp_use_petr_reply", vapi_msg_id_lisp_use_petr_reply);
}

static inline void vapi_set_vapi_msg_lisp_use_petr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_use_petr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_use_petr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_use_petr
#define defined_vapi_msg_lisp_use_petr
typedef struct __attribute__ ((__packed__)) {
  u8 is_ip4;
  u8 address[16];
  u8 is_add; 
} vapi_payload_lisp_use_petr;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_use_petr payload;
} vapi_msg_lisp_use_petr;

static inline void vapi_msg_lisp_use_petr_payload_hton(vapi_payload_lisp_use_petr *payload)
{

}

static inline void vapi_msg_lisp_use_petr_payload_ntoh(vapi_payload_lisp_use_petr *payload)
{

}

static inline void vapi_msg_lisp_use_petr_hton(vapi_msg_lisp_use_petr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_use_petr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_use_petr_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_use_petr_ntoh(vapi_msg_lisp_use_petr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_use_petr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_use_petr_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_use_petr_msg_size(vapi_msg_lisp_use_petr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_use_petr* vapi_alloc_lisp_use_petr(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_use_petr *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_use_petr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_use_petr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_use_petr);

  return msg;
}

static inline vapi_error_e vapi_lisp_use_petr(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_use_petr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_use_petr_reply *reply),
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
  vapi_msg_lisp_use_petr_hton(msg);
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
    vapi_msg_lisp_use_petr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_use_petr()
{
  static const char name[] = "lisp_use_petr";
  static const char name_with_crc[] = "lisp_use_petr_6910787d";
  static vapi_message_desc_t __vapi_metadata_lisp_use_petr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_use_petr, payload),
    sizeof(vapi_msg_lisp_use_petr),
    (generic_swap_fn_t)vapi_msg_lisp_use_petr_hton,
    (generic_swap_fn_t)vapi_msg_lisp_use_petr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_use_petr = vapi_register_msg(&__vapi_metadata_lisp_use_petr);
  VAPI_DBG("Assigned msg id %d to lisp_use_petr", vapi_msg_id_lisp_use_petr);
}
#endif

#ifndef defined_vapi_msg_lisp_locator_set_details
#define defined_vapi_msg_lisp_locator_set_details
typedef struct __attribute__ ((__packed__)) {
  u32 ls_index;
  u8 ls_name[64]; 
} vapi_payload_lisp_locator_set_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_locator_set_details payload;
} vapi_msg_lisp_locator_set_details;

static inline void vapi_msg_lisp_locator_set_details_payload_hton(vapi_payload_lisp_locator_set_details *payload)
{
  payload->ls_index = htobe32(payload->ls_index);
}

static inline void vapi_msg_lisp_locator_set_details_payload_ntoh(vapi_payload_lisp_locator_set_details *payload)
{
  payload->ls_index = be32toh(payload->ls_index);
}

static inline void vapi_msg_lisp_locator_set_details_hton(vapi_msg_lisp_locator_set_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_set_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_locator_set_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_locator_set_details_ntoh(vapi_msg_lisp_locator_set_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_set_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_locator_set_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_locator_set_details_msg_size(vapi_msg_lisp_locator_set_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_locator_set_details()
{
  static const char name[] = "lisp_locator_set_details";
  static const char name_with_crc[] = "lisp_locator_set_details_6b846882";
  static vapi_message_desc_t __vapi_metadata_lisp_locator_set_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_locator_set_details, payload),
    sizeof(vapi_msg_lisp_locator_set_details),
    (generic_swap_fn_t)vapi_msg_lisp_locator_set_details_hton,
    (generic_swap_fn_t)vapi_msg_lisp_locator_set_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_locator_set_details = vapi_register_msg(&__vapi_metadata_lisp_locator_set_details);
  VAPI_DBG("Assigned msg id %d to lisp_locator_set_details", vapi_msg_id_lisp_locator_set_details);
}

static inline void vapi_set_vapi_msg_lisp_locator_set_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_locator_set_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_locator_set_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_map_resolver
#define defined_vapi_msg_lisp_add_del_map_resolver
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_ipv6;
  u8 ip_address[16]; 
} vapi_payload_lisp_add_del_map_resolver;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_map_resolver payload;
} vapi_msg_lisp_add_del_map_resolver;

static inline void vapi_msg_lisp_add_del_map_resolver_payload_hton(vapi_payload_lisp_add_del_map_resolver *payload)
{

}

static inline void vapi_msg_lisp_add_del_map_resolver_payload_ntoh(vapi_payload_lisp_add_del_map_resolver *payload)
{

}

static inline void vapi_msg_lisp_add_del_map_resolver_hton(vapi_msg_lisp_add_del_map_resolver *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_resolver'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_map_resolver_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_map_resolver_ntoh(vapi_msg_lisp_add_del_map_resolver *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_resolver'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_map_resolver_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_map_resolver_msg_size(vapi_msg_lisp_add_del_map_resolver *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_add_del_map_resolver* vapi_alloc_lisp_add_del_map_resolver(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_add_del_map_resolver *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_map_resolver);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_map_resolver*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_map_resolver);

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_map_resolver(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_map_resolver *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_map_resolver_reply *reply),
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
  vapi_msg_lisp_add_del_map_resolver_hton(msg);
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
    vapi_msg_lisp_add_del_map_resolver_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_map_resolver()
{
  static const char name[] = "lisp_add_del_map_resolver";
  static const char name_with_crc[] = "lisp_add_del_map_resolver_0ebcd37d";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_map_resolver = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_map_resolver, payload),
    sizeof(vapi_msg_lisp_add_del_map_resolver),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_resolver_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_resolver_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_map_resolver = vapi_register_msg(&__vapi_metadata_lisp_add_del_map_resolver);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_map_resolver", vapi_msg_id_lisp_add_del_map_resolver);
}
#endif

#ifndef defined_vapi_msg_show_lisp_pitr_reply
#define defined_vapi_msg_show_lisp_pitr_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 status;
  u8 locator_set_name[64]; 
} vapi_payload_show_lisp_pitr_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_lisp_pitr_reply payload;
} vapi_msg_show_lisp_pitr_reply;

static inline void vapi_msg_show_lisp_pitr_reply_payload_hton(vapi_payload_show_lisp_pitr_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_lisp_pitr_reply_payload_ntoh(vapi_payload_show_lisp_pitr_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_lisp_pitr_reply_hton(vapi_msg_show_lisp_pitr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_pitr_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_lisp_pitr_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_lisp_pitr_reply_ntoh(vapi_msg_show_lisp_pitr_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_pitr_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_lisp_pitr_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_lisp_pitr_reply_msg_size(vapi_msg_show_lisp_pitr_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_lisp_pitr_reply()
{
  static const char name[] = "show_lisp_pitr_reply";
  static const char name_with_crc[] = "show_lisp_pitr_reply_dca512cc";
  static vapi_message_desc_t __vapi_metadata_show_lisp_pitr_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_lisp_pitr_reply, payload),
    sizeof(vapi_msg_show_lisp_pitr_reply),
    (generic_swap_fn_t)vapi_msg_show_lisp_pitr_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_pitr_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_pitr_reply = vapi_register_msg(&__vapi_metadata_show_lisp_pitr_reply);
  VAPI_DBG("Assigned msg id %d to show_lisp_pitr_reply", vapi_msg_id_show_lisp_pitr_reply);
}

static inline void vapi_set_vapi_msg_show_lisp_pitr_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_lisp_pitr_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_lisp_pitr_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_show_lisp_pitr
#define defined_vapi_msg_show_lisp_pitr
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_lisp_pitr;

static inline void vapi_msg_show_lisp_pitr_hton(vapi_msg_show_lisp_pitr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_pitr'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_lisp_pitr_ntoh(vapi_msg_show_lisp_pitr *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_pitr'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_lisp_pitr_msg_size(vapi_msg_show_lisp_pitr *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_lisp_pitr* vapi_alloc_show_lisp_pitr(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_lisp_pitr *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_lisp_pitr);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_lisp_pitr*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_lisp_pitr);

  return msg;
}

static inline vapi_error_e vapi_show_lisp_pitr(struct vapi_ctx_s *ctx,
  vapi_msg_show_lisp_pitr *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_lisp_pitr_reply *reply),
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
  vapi_msg_show_lisp_pitr_hton(msg);
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
    vapi_msg_show_lisp_pitr_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_lisp_pitr()
{
  static const char name[] = "show_lisp_pitr";
  static const char name_with_crc[] = "show_lisp_pitr_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_lisp_pitr = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_lisp_pitr),
    (generic_swap_fn_t)vapi_msg_show_lisp_pitr_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_pitr_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_pitr = vapi_register_msg(&__vapi_metadata_show_lisp_pitr);
  VAPI_DBG("Assigned msg id %d to show_lisp_pitr", vapi_msg_id_show_lisp_pitr);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_adjacency_reply
#define defined_vapi_msg_lisp_add_del_adjacency_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_add_del_adjacency_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_adjacency_reply payload;
} vapi_msg_lisp_add_del_adjacency_reply;

static inline void vapi_msg_lisp_add_del_adjacency_reply_payload_hton(vapi_payload_lisp_add_del_adjacency_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_add_del_adjacency_reply_payload_ntoh(vapi_payload_lisp_add_del_adjacency_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_add_del_adjacency_reply_hton(vapi_msg_lisp_add_del_adjacency_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_adjacency_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_adjacency_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_adjacency_reply_ntoh(vapi_msg_lisp_add_del_adjacency_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_adjacency_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_adjacency_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_adjacency_reply_msg_size(vapi_msg_lisp_add_del_adjacency_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_adjacency_reply()
{
  static const char name[] = "lisp_add_del_adjacency_reply";
  static const char name_with_crc[] = "lisp_add_del_adjacency_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_adjacency_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_adjacency_reply, payload),
    sizeof(vapi_msg_lisp_add_del_adjacency_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_adjacency_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_adjacency_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_adjacency_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_adjacency_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_adjacency_reply", vapi_msg_id_lisp_add_del_adjacency_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_adjacency_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_adjacency_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_adjacency_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_adjacency
#define defined_vapi_msg_lisp_add_del_adjacency
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u32 vni;
  u8 eid_type;
  u8 reid[16];
  u8 leid[16];
  u8 reid_len;
  u8 leid_len; 
} vapi_payload_lisp_add_del_adjacency;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_adjacency payload;
} vapi_msg_lisp_add_del_adjacency;

static inline void vapi_msg_lisp_add_del_adjacency_payload_hton(vapi_payload_lisp_add_del_adjacency *payload)
{
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_lisp_add_del_adjacency_payload_ntoh(vapi_payload_lisp_add_del_adjacency *payload)
{
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_lisp_add_del_adjacency_hton(vapi_msg_lisp_add_del_adjacency *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_adjacency'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_adjacency_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_adjacency_ntoh(vapi_msg_lisp_add_del_adjacency *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_adjacency'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_adjacency_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_adjacency_msg_size(vapi_msg_lisp_add_del_adjacency *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_add_del_adjacency* vapi_alloc_lisp_add_del_adjacency(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_add_del_adjacency *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_adjacency);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_adjacency*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_adjacency);

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_adjacency(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_adjacency *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_adjacency_reply *reply),
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
  vapi_msg_lisp_add_del_adjacency_hton(msg);
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
    vapi_msg_lisp_add_del_adjacency_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_adjacency()
{
  static const char name[] = "lisp_add_del_adjacency";
  static const char name_with_crc[] = "lisp_add_del_adjacency_f047390d";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_adjacency = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_adjacency, payload),
    sizeof(vapi_msg_lisp_add_del_adjacency),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_adjacency_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_adjacency_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_adjacency = vapi_register_msg(&__vapi_metadata_lisp_add_del_adjacency);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_adjacency", vapi_msg_id_lisp_add_del_adjacency);
}
#endif

#ifndef defined_vapi_msg_lisp_eid_table_add_del_map_reply
#define defined_vapi_msg_lisp_eid_table_add_del_map_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_eid_table_add_del_map_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_eid_table_add_del_map_reply payload;
} vapi_msg_lisp_eid_table_add_del_map_reply;

static inline void vapi_msg_lisp_eid_table_add_del_map_reply_payload_hton(vapi_payload_lisp_eid_table_add_del_map_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_eid_table_add_del_map_reply_payload_ntoh(vapi_payload_lisp_eid_table_add_del_map_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_eid_table_add_del_map_reply_hton(vapi_msg_lisp_eid_table_add_del_map_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_add_del_map_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_eid_table_add_del_map_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_eid_table_add_del_map_reply_ntoh(vapi_msg_lisp_eid_table_add_del_map_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_add_del_map_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_eid_table_add_del_map_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_eid_table_add_del_map_reply_msg_size(vapi_msg_lisp_eid_table_add_del_map_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_add_del_map_reply()
{
  static const char name[] = "lisp_eid_table_add_del_map_reply";
  static const char name_with_crc[] = "lisp_eid_table_add_del_map_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_add_del_map_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_eid_table_add_del_map_reply, payload),
    sizeof(vapi_msg_lisp_eid_table_add_del_map_reply),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_add_del_map_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_add_del_map_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_add_del_map_reply = vapi_register_msg(&__vapi_metadata_lisp_eid_table_add_del_map_reply);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_add_del_map_reply", vapi_msg_id_lisp_eid_table_add_del_map_reply);
}

static inline void vapi_set_vapi_msg_lisp_eid_table_add_del_map_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_eid_table_add_del_map_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_eid_table_add_del_map_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_eid_table_add_del_map
#define defined_vapi_msg_lisp_eid_table_add_del_map
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u32 vni;
  u32 dp_table;
  u8 is_l2; 
} vapi_payload_lisp_eid_table_add_del_map;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_eid_table_add_del_map payload;
} vapi_msg_lisp_eid_table_add_del_map;

static inline void vapi_msg_lisp_eid_table_add_del_map_payload_hton(vapi_payload_lisp_eid_table_add_del_map *payload)
{
  payload->vni = htobe32(payload->vni);
  payload->dp_table = htobe32(payload->dp_table);
}

static inline void vapi_msg_lisp_eid_table_add_del_map_payload_ntoh(vapi_payload_lisp_eid_table_add_del_map *payload)
{
  payload->vni = be32toh(payload->vni);
  payload->dp_table = be32toh(payload->dp_table);
}

static inline void vapi_msg_lisp_eid_table_add_del_map_hton(vapi_msg_lisp_eid_table_add_del_map *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_add_del_map'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_eid_table_add_del_map_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_eid_table_add_del_map_ntoh(vapi_msg_lisp_eid_table_add_del_map *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_add_del_map'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_eid_table_add_del_map_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_eid_table_add_del_map_msg_size(vapi_msg_lisp_eid_table_add_del_map *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_eid_table_add_del_map* vapi_alloc_lisp_eid_table_add_del_map(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_eid_table_add_del_map *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_eid_table_add_del_map);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_eid_table_add_del_map*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_eid_table_add_del_map);

  return msg;
}

static inline vapi_error_e vapi_lisp_eid_table_add_del_map(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_eid_table_add_del_map *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_eid_table_add_del_map_reply *reply),
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
  vapi_msg_lisp_eid_table_add_del_map_hton(msg);
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
    vapi_msg_lisp_eid_table_add_del_map_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_add_del_map()
{
  static const char name[] = "lisp_eid_table_add_del_map";
  static const char name_with_crc[] = "lisp_eid_table_add_del_map_59e9975e";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_add_del_map = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_eid_table_add_del_map, payload),
    sizeof(vapi_msg_lisp_eid_table_add_del_map),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_add_del_map_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_add_del_map_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_add_del_map = vapi_register_msg(&__vapi_metadata_lisp_eid_table_add_del_map);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_add_del_map", vapi_msg_id_lisp_eid_table_add_del_map);
}
#endif

#ifndef defined_vapi_msg_lisp_pitr_set_locator_set_reply
#define defined_vapi_msg_lisp_pitr_set_locator_set_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_pitr_set_locator_set_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_pitr_set_locator_set_reply payload;
} vapi_msg_lisp_pitr_set_locator_set_reply;

static inline void vapi_msg_lisp_pitr_set_locator_set_reply_payload_hton(vapi_payload_lisp_pitr_set_locator_set_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_pitr_set_locator_set_reply_payload_ntoh(vapi_payload_lisp_pitr_set_locator_set_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_pitr_set_locator_set_reply_hton(vapi_msg_lisp_pitr_set_locator_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_pitr_set_locator_set_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_pitr_set_locator_set_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_pitr_set_locator_set_reply_ntoh(vapi_msg_lisp_pitr_set_locator_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_pitr_set_locator_set_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_pitr_set_locator_set_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_pitr_set_locator_set_reply_msg_size(vapi_msg_lisp_pitr_set_locator_set_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_pitr_set_locator_set_reply()
{
  static const char name[] = "lisp_pitr_set_locator_set_reply";
  static const char name_with_crc[] = "lisp_pitr_set_locator_set_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_pitr_set_locator_set_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_pitr_set_locator_set_reply, payload),
    sizeof(vapi_msg_lisp_pitr_set_locator_set_reply),
    (generic_swap_fn_t)vapi_msg_lisp_pitr_set_locator_set_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_pitr_set_locator_set_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_pitr_set_locator_set_reply = vapi_register_msg(&__vapi_metadata_lisp_pitr_set_locator_set_reply);
  VAPI_DBG("Assigned msg id %d to lisp_pitr_set_locator_set_reply", vapi_msg_id_lisp_pitr_set_locator_set_reply);
}

static inline void vapi_set_vapi_msg_lisp_pitr_set_locator_set_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_pitr_set_locator_set_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_pitr_set_locator_set_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_pitr_set_locator_set
#define defined_vapi_msg_lisp_pitr_set_locator_set
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 ls_name[64]; 
} vapi_payload_lisp_pitr_set_locator_set;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_pitr_set_locator_set payload;
} vapi_msg_lisp_pitr_set_locator_set;

static inline void vapi_msg_lisp_pitr_set_locator_set_payload_hton(vapi_payload_lisp_pitr_set_locator_set *payload)
{

}

static inline void vapi_msg_lisp_pitr_set_locator_set_payload_ntoh(vapi_payload_lisp_pitr_set_locator_set *payload)
{

}

static inline void vapi_msg_lisp_pitr_set_locator_set_hton(vapi_msg_lisp_pitr_set_locator_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_pitr_set_locator_set'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_pitr_set_locator_set_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_pitr_set_locator_set_ntoh(vapi_msg_lisp_pitr_set_locator_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_pitr_set_locator_set'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_pitr_set_locator_set_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_pitr_set_locator_set_msg_size(vapi_msg_lisp_pitr_set_locator_set *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_pitr_set_locator_set* vapi_alloc_lisp_pitr_set_locator_set(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_pitr_set_locator_set *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_pitr_set_locator_set);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_pitr_set_locator_set*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_pitr_set_locator_set);

  return msg;
}

static inline vapi_error_e vapi_lisp_pitr_set_locator_set(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_pitr_set_locator_set *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_pitr_set_locator_set_reply *reply),
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
  vapi_msg_lisp_pitr_set_locator_set_hton(msg);
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
    vapi_msg_lisp_pitr_set_locator_set_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_pitr_set_locator_set()
{
  static const char name[] = "lisp_pitr_set_locator_set";
  static const char name_with_crc[] = "lisp_pitr_set_locator_set_7aa022dd";
  static vapi_message_desc_t __vapi_metadata_lisp_pitr_set_locator_set = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_pitr_set_locator_set, payload),
    sizeof(vapi_msg_lisp_pitr_set_locator_set),
    (generic_swap_fn_t)vapi_msg_lisp_pitr_set_locator_set_hton,
    (generic_swap_fn_t)vapi_msg_lisp_pitr_set_locator_set_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_pitr_set_locator_set = vapi_register_msg(&__vapi_metadata_lisp_pitr_set_locator_set);
  VAPI_DBG("Assigned msg id %d to lisp_pitr_set_locator_set", vapi_msg_id_lisp_pitr_set_locator_set);
}
#endif

#ifndef defined_vapi_msg_lisp_get_map_request_itr_rlocs_reply
#define defined_vapi_msg_lisp_get_map_request_itr_rlocs_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 locator_set_name[64]; 
} vapi_payload_lisp_get_map_request_itr_rlocs_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_get_map_request_itr_rlocs_reply payload;
} vapi_msg_lisp_get_map_request_itr_rlocs_reply;

static inline void vapi_msg_lisp_get_map_request_itr_rlocs_reply_payload_hton(vapi_payload_lisp_get_map_request_itr_rlocs_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_get_map_request_itr_rlocs_reply_payload_ntoh(vapi_payload_lisp_get_map_request_itr_rlocs_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_get_map_request_itr_rlocs_reply_hton(vapi_msg_lisp_get_map_request_itr_rlocs_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_get_map_request_itr_rlocs_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_get_map_request_itr_rlocs_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_get_map_request_itr_rlocs_reply_ntoh(vapi_msg_lisp_get_map_request_itr_rlocs_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_get_map_request_itr_rlocs_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_get_map_request_itr_rlocs_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_get_map_request_itr_rlocs_reply_msg_size(vapi_msg_lisp_get_map_request_itr_rlocs_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_get_map_request_itr_rlocs_reply()
{
  static const char name[] = "lisp_get_map_request_itr_rlocs_reply";
  static const char name_with_crc[] = "lisp_get_map_request_itr_rlocs_reply_9f56f6f7";
  static vapi_message_desc_t __vapi_metadata_lisp_get_map_request_itr_rlocs_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_get_map_request_itr_rlocs_reply, payload),
    sizeof(vapi_msg_lisp_get_map_request_itr_rlocs_reply),
    (generic_swap_fn_t)vapi_msg_lisp_get_map_request_itr_rlocs_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_get_map_request_itr_rlocs_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_get_map_request_itr_rlocs_reply = vapi_register_msg(&__vapi_metadata_lisp_get_map_request_itr_rlocs_reply);
  VAPI_DBG("Assigned msg id %d to lisp_get_map_request_itr_rlocs_reply", vapi_msg_id_lisp_get_map_request_itr_rlocs_reply);
}

static inline void vapi_set_vapi_msg_lisp_get_map_request_itr_rlocs_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_get_map_request_itr_rlocs_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_get_map_request_itr_rlocs_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_get_map_request_itr_rlocs
#define defined_vapi_msg_lisp_get_map_request_itr_rlocs
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_lisp_get_map_request_itr_rlocs;

static inline void vapi_msg_lisp_get_map_request_itr_rlocs_hton(vapi_msg_lisp_get_map_request_itr_rlocs *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_get_map_request_itr_rlocs'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_lisp_get_map_request_itr_rlocs_ntoh(vapi_msg_lisp_get_map_request_itr_rlocs *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_get_map_request_itr_rlocs'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_lisp_get_map_request_itr_rlocs_msg_size(vapi_msg_lisp_get_map_request_itr_rlocs *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_get_map_request_itr_rlocs* vapi_alloc_lisp_get_map_request_itr_rlocs(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_get_map_request_itr_rlocs *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_get_map_request_itr_rlocs);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_get_map_request_itr_rlocs*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_get_map_request_itr_rlocs);

  return msg;
}

static inline vapi_error_e vapi_lisp_get_map_request_itr_rlocs(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_get_map_request_itr_rlocs *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_get_map_request_itr_rlocs_reply *reply),
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
  vapi_msg_lisp_get_map_request_itr_rlocs_hton(msg);
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
    vapi_msg_lisp_get_map_request_itr_rlocs_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_get_map_request_itr_rlocs()
{
  static const char name[] = "lisp_get_map_request_itr_rlocs";
  static const char name_with_crc[] = "lisp_get_map_request_itr_rlocs_51077d14";
  static vapi_message_desc_t __vapi_metadata_lisp_get_map_request_itr_rlocs = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_lisp_get_map_request_itr_rlocs),
    (generic_swap_fn_t)vapi_msg_lisp_get_map_request_itr_rlocs_hton,
    (generic_swap_fn_t)vapi_msg_lisp_get_map_request_itr_rlocs_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_get_map_request_itr_rlocs = vapi_register_msg(&__vapi_metadata_lisp_get_map_request_itr_rlocs);
  VAPI_DBG("Assigned msg id %d to lisp_get_map_request_itr_rlocs", vapi_msg_id_lisp_get_map_request_itr_rlocs);
}
#endif

#ifndef defined_vapi_msg_lisp_eid_table_map_details
#define defined_vapi_msg_lisp_eid_table_map_details
typedef struct __attribute__ ((__packed__)) {
  u32 vni;
  u32 dp_table; 
} vapi_payload_lisp_eid_table_map_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_eid_table_map_details payload;
} vapi_msg_lisp_eid_table_map_details;

static inline void vapi_msg_lisp_eid_table_map_details_payload_hton(vapi_payload_lisp_eid_table_map_details *payload)
{
  payload->vni = htobe32(payload->vni);
  payload->dp_table = htobe32(payload->dp_table);
}

static inline void vapi_msg_lisp_eid_table_map_details_payload_ntoh(vapi_payload_lisp_eid_table_map_details *payload)
{
  payload->vni = be32toh(payload->vni);
  payload->dp_table = be32toh(payload->dp_table);
}

static inline void vapi_msg_lisp_eid_table_map_details_hton(vapi_msg_lisp_eid_table_map_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_map_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_eid_table_map_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_eid_table_map_details_ntoh(vapi_msg_lisp_eid_table_map_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_map_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_eid_table_map_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_eid_table_map_details_msg_size(vapi_msg_lisp_eid_table_map_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_map_details()
{
  static const char name[] = "lisp_eid_table_map_details";
  static const char name_with_crc[] = "lisp_eid_table_map_details_0b6859e2";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_map_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_eid_table_map_details, payload),
    sizeof(vapi_msg_lisp_eid_table_map_details),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_map_details_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_map_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_map_details = vapi_register_msg(&__vapi_metadata_lisp_eid_table_map_details);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_map_details", vapi_msg_id_lisp_eid_table_map_details);
}

static inline void vapi_set_vapi_msg_lisp_eid_table_map_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_eid_table_map_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_eid_table_map_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_map_server_details
#define defined_vapi_msg_lisp_map_server_details
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6;
  u8 ip_address[16]; 
} vapi_payload_lisp_map_server_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_map_server_details payload;
} vapi_msg_lisp_map_server_details;

static inline void vapi_msg_lisp_map_server_details_payload_hton(vapi_payload_lisp_map_server_details *payload)
{

}

static inline void vapi_msg_lisp_map_server_details_payload_ntoh(vapi_payload_lisp_map_server_details *payload)
{

}

static inline void vapi_msg_lisp_map_server_details_hton(vapi_msg_lisp_map_server_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_server_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_map_server_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_map_server_details_ntoh(vapi_msg_lisp_map_server_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_server_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_map_server_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_map_server_details_msg_size(vapi_msg_lisp_map_server_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_map_server_details()
{
  static const char name[] = "lisp_map_server_details";
  static const char name_with_crc[] = "lisp_map_server_details_60a5f5ca";
  static vapi_message_desc_t __vapi_metadata_lisp_map_server_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_map_server_details, payload),
    sizeof(vapi_msg_lisp_map_server_details),
    (generic_swap_fn_t)vapi_msg_lisp_map_server_details_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_server_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_server_details = vapi_register_msg(&__vapi_metadata_lisp_map_server_details);
  VAPI_DBG("Assigned msg id %d to lisp_map_server_details", vapi_msg_id_lisp_map_server_details);
}

static inline void vapi_set_vapi_msg_lisp_map_server_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_map_server_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_map_server_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_map_request_mode_reply
#define defined_vapi_msg_lisp_map_request_mode_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_map_request_mode_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_map_request_mode_reply payload;
} vapi_msg_lisp_map_request_mode_reply;

static inline void vapi_msg_lisp_map_request_mode_reply_payload_hton(vapi_payload_lisp_map_request_mode_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_map_request_mode_reply_payload_ntoh(vapi_payload_lisp_map_request_mode_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_map_request_mode_reply_hton(vapi_msg_lisp_map_request_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_request_mode_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_map_request_mode_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_map_request_mode_reply_ntoh(vapi_msg_lisp_map_request_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_request_mode_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_map_request_mode_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_map_request_mode_reply_msg_size(vapi_msg_lisp_map_request_mode_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_map_request_mode_reply()
{
  static const char name[] = "lisp_map_request_mode_reply";
  static const char name_with_crc[] = "lisp_map_request_mode_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_map_request_mode_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_map_request_mode_reply, payload),
    sizeof(vapi_msg_lisp_map_request_mode_reply),
    (generic_swap_fn_t)vapi_msg_lisp_map_request_mode_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_request_mode_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_request_mode_reply = vapi_register_msg(&__vapi_metadata_lisp_map_request_mode_reply);
  VAPI_DBG("Assigned msg id %d to lisp_map_request_mode_reply", vapi_msg_id_lisp_map_request_mode_reply);
}

static inline void vapi_set_vapi_msg_lisp_map_request_mode_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_map_request_mode_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_map_request_mode_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_map_request_mode
#define defined_vapi_msg_lisp_map_request_mode
typedef struct __attribute__ ((__packed__)) {
  u8 mode; 
} vapi_payload_lisp_map_request_mode;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_map_request_mode payload;
} vapi_msg_lisp_map_request_mode;

static inline void vapi_msg_lisp_map_request_mode_payload_hton(vapi_payload_lisp_map_request_mode *payload)
{

}

static inline void vapi_msg_lisp_map_request_mode_payload_ntoh(vapi_payload_lisp_map_request_mode *payload)
{

}

static inline void vapi_msg_lisp_map_request_mode_hton(vapi_msg_lisp_map_request_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_request_mode'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_map_request_mode_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_map_request_mode_ntoh(vapi_msg_lisp_map_request_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_request_mode'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_map_request_mode_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_map_request_mode_msg_size(vapi_msg_lisp_map_request_mode *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_map_request_mode* vapi_alloc_lisp_map_request_mode(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_map_request_mode *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_map_request_mode);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_map_request_mode*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_map_request_mode);

  return msg;
}

static inline vapi_error_e vapi_lisp_map_request_mode(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_map_request_mode *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_map_request_mode_reply *reply),
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
  vapi_msg_lisp_map_request_mode_hton(msg);
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
    vapi_msg_lisp_map_request_mode_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_map_request_mode()
{
  static const char name[] = "lisp_map_request_mode";
  static const char name_with_crc[] = "lisp_map_request_mode_f3f93ce9";
  static vapi_message_desc_t __vapi_metadata_lisp_map_request_mode = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_map_request_mode, payload),
    sizeof(vapi_msg_lisp_map_request_mode),
    (generic_swap_fn_t)vapi_msg_lisp_map_request_mode_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_request_mode_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_request_mode = vapi_register_msg(&__vapi_metadata_lisp_map_request_mode);
  VAPI_DBG("Assigned msg id %d to lisp_map_request_mode", vapi_msg_id_lisp_map_request_mode);
}
#endif

#ifndef defined_vapi_msg_show_lisp_map_register_state
#define defined_vapi_msg_show_lisp_map_register_state
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_lisp_map_register_state;

static inline void vapi_msg_show_lisp_map_register_state_hton(vapi_msg_show_lisp_map_register_state *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_register_state'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_lisp_map_register_state_ntoh(vapi_msg_show_lisp_map_register_state *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_map_register_state'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_lisp_map_register_state_msg_size(vapi_msg_show_lisp_map_register_state *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_lisp_map_register_state* vapi_alloc_show_lisp_map_register_state(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_lisp_map_register_state *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_lisp_map_register_state);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_lisp_map_register_state*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_lisp_map_register_state);

  return msg;
}

static inline vapi_error_e vapi_show_lisp_map_register_state(struct vapi_ctx_s *ctx,
  vapi_msg_show_lisp_map_register_state *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_lisp_map_register_state_reply *reply),
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
  vapi_msg_show_lisp_map_register_state_hton(msg);
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
    vapi_msg_show_lisp_map_register_state_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_lisp_map_register_state()
{
  static const char name[] = "show_lisp_map_register_state";
  static const char name_with_crc[] = "show_lisp_map_register_state_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_lisp_map_register_state = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_lisp_map_register_state),
    (generic_swap_fn_t)vapi_msg_show_lisp_map_register_state_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_map_register_state_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_map_register_state = vapi_register_msg(&__vapi_metadata_show_lisp_map_register_state);
  VAPI_DBG("Assigned msg id %d to show_lisp_map_register_state", vapi_msg_id_show_lisp_map_register_state);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_remote_mapping_reply
#define defined_vapi_msg_lisp_add_del_remote_mapping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_add_del_remote_mapping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_remote_mapping_reply payload;
} vapi_msg_lisp_add_del_remote_mapping_reply;

static inline void vapi_msg_lisp_add_del_remote_mapping_reply_payload_hton(vapi_payload_lisp_add_del_remote_mapping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_add_del_remote_mapping_reply_payload_ntoh(vapi_payload_lisp_add_del_remote_mapping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_add_del_remote_mapping_reply_hton(vapi_msg_lisp_add_del_remote_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_remote_mapping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_remote_mapping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_remote_mapping_reply_ntoh(vapi_msg_lisp_add_del_remote_mapping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_remote_mapping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_remote_mapping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_remote_mapping_reply_msg_size(vapi_msg_lisp_add_del_remote_mapping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_remote_mapping_reply()
{
  static const char name[] = "lisp_add_del_remote_mapping_reply";
  static const char name_with_crc[] = "lisp_add_del_remote_mapping_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_remote_mapping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_remote_mapping_reply, payload),
    sizeof(vapi_msg_lisp_add_del_remote_mapping_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_remote_mapping_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_remote_mapping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_remote_mapping_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_remote_mapping_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_remote_mapping_reply", vapi_msg_id_lisp_add_del_remote_mapping_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_remote_mapping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_remote_mapping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_remote_mapping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_remote_mapping
#define defined_vapi_msg_lisp_add_del_remote_mapping
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_src_dst;
  u8 del_all;
  u32 vni;
  u8 action;
  u8 eid_type;
  u8 eid[16];
  u8 eid_len;
  u8 seid[16];
  u8 seid_len;
  u32 rloc_num;
  vapi_type_remote_locator rlocs[0]; 
} vapi_payload_lisp_add_del_remote_mapping;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_remote_mapping payload;
} vapi_msg_lisp_add_del_remote_mapping;

static inline void vapi_msg_lisp_add_del_remote_mapping_payload_hton(vapi_payload_lisp_add_del_remote_mapping *payload)
{
  payload->vni = htobe32(payload->vni);
  payload->rloc_num = htobe32(payload->rloc_num);
}

static inline void vapi_msg_lisp_add_del_remote_mapping_payload_ntoh(vapi_payload_lisp_add_del_remote_mapping *payload)
{
  payload->vni = be32toh(payload->vni);
  payload->rloc_num = be32toh(payload->rloc_num);
}

static inline void vapi_msg_lisp_add_del_remote_mapping_hton(vapi_msg_lisp_add_del_remote_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_remote_mapping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_remote_mapping_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_remote_mapping_ntoh(vapi_msg_lisp_add_del_remote_mapping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_remote_mapping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_remote_mapping_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_remote_mapping_msg_size(vapi_msg_lisp_add_del_remote_mapping *msg)
{
  return sizeof(*msg)+ msg->payload.rloc_num * sizeof(msg->payload.rlocs[0]);
}

static inline vapi_msg_lisp_add_del_remote_mapping* vapi_alloc_lisp_add_del_remote_mapping(struct vapi_ctx_s *ctx, size_t _rlocs_array_size)
{
  vapi_msg_lisp_add_del_remote_mapping *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_remote_mapping) + sizeof(msg->payload.rlocs[0]) * _rlocs_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_remote_mapping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_remote_mapping);
  msg->payload.rloc_num = _rlocs_array_size;

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_remote_mapping(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_remote_mapping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_remote_mapping_reply *reply),
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
  vapi_msg_lisp_add_del_remote_mapping_hton(msg);
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
    vapi_msg_lisp_add_del_remote_mapping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_remote_mapping()
{
  static const char name[] = "lisp_add_del_remote_mapping";
  static const char name_with_crc[] = "lisp_add_del_remote_mapping_b879c3a9";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_remote_mapping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_remote_mapping, payload),
    sizeof(vapi_msg_lisp_add_del_remote_mapping),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_remote_mapping_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_remote_mapping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_remote_mapping = vapi_register_msg(&__vapi_metadata_lisp_add_del_remote_mapping);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_remote_mapping", vapi_msg_id_lisp_add_del_remote_mapping);
}
#endif

#ifndef defined_vapi_msg_lisp_eid_table_details
#define defined_vapi_msg_lisp_eid_table_details
typedef struct __attribute__ ((__packed__)) {
  u32 locator_set_index;
  u8 action;
  u8 is_local;
  u8 eid_type;
  u8 is_src_dst;
  u32 vni;
  u8 eid[16];
  u8 eid_prefix_len;
  u8 seid[16];
  u8 seid_prefix_len;
  u32 ttl;
  u8 authoritative;
  u16 key_id;
  u8 key[64]; 
} vapi_payload_lisp_eid_table_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_eid_table_details payload;
} vapi_msg_lisp_eid_table_details;

static inline void vapi_msg_lisp_eid_table_details_payload_hton(vapi_payload_lisp_eid_table_details *payload)
{
  payload->locator_set_index = htobe32(payload->locator_set_index);
  payload->vni = htobe32(payload->vni);
  payload->ttl = htobe32(payload->ttl);
  payload->key_id = htobe16(payload->key_id);
}

static inline void vapi_msg_lisp_eid_table_details_payload_ntoh(vapi_payload_lisp_eid_table_details *payload)
{
  payload->locator_set_index = be32toh(payload->locator_set_index);
  payload->vni = be32toh(payload->vni);
  payload->ttl = be32toh(payload->ttl);
  payload->key_id = be16toh(payload->key_id);
}

static inline void vapi_msg_lisp_eid_table_details_hton(vapi_msg_lisp_eid_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_eid_table_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_eid_table_details_ntoh(vapi_msg_lisp_eid_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_eid_table_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_eid_table_details_msg_size(vapi_msg_lisp_eid_table_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_details()
{
  static const char name[] = "lisp_eid_table_details";
  static const char name_with_crc[] = "lisp_eid_table_details_dcd9f414";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_eid_table_details, payload),
    sizeof(vapi_msg_lisp_eid_table_details),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_details_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_details = vapi_register_msg(&__vapi_metadata_lisp_eid_table_details);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_details", vapi_msg_id_lisp_eid_table_details);
}

static inline void vapi_set_vapi_msg_lisp_eid_table_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_eid_table_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_eid_table_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_eid_table_dump
#define defined_vapi_msg_lisp_eid_table_dump
typedef struct __attribute__ ((__packed__)) {
  u8 eid_set;
  u8 prefix_length;
  u32 vni;
  u8 eid_type;
  u8 eid[16];
  u8 filter; 
} vapi_payload_lisp_eid_table_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_eid_table_dump payload;
} vapi_msg_lisp_eid_table_dump;

static inline void vapi_msg_lisp_eid_table_dump_payload_hton(vapi_payload_lisp_eid_table_dump *payload)
{
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_lisp_eid_table_dump_payload_ntoh(vapi_payload_lisp_eid_table_dump *payload)
{
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_lisp_eid_table_dump_hton(vapi_msg_lisp_eid_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_eid_table_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_eid_table_dump_ntoh(vapi_msg_lisp_eid_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_eid_table_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_eid_table_dump_msg_size(vapi_msg_lisp_eid_table_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_eid_table_dump* vapi_alloc_lisp_eid_table_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_eid_table_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_eid_table_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_eid_table_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_eid_table_dump);

  return msg;
}

static inline vapi_error_e vapi_lisp_eid_table_dump(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_eid_table_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_eid_table_details *reply),
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
  vapi_msg_lisp_eid_table_dump_hton(msg);
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
    vapi_msg_lisp_eid_table_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_dump()
{
  static const char name[] = "lisp_eid_table_dump";
  static const char name_with_crc[] = "lisp_eid_table_dump_e0df64da";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_eid_table_dump, payload),
    sizeof(vapi_msg_lisp_eid_table_dump),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_dump_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_dump = vapi_register_msg(&__vapi_metadata_lisp_eid_table_dump);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_dump", vapi_msg_id_lisp_eid_table_dump);
}
#endif

#ifndef defined_vapi_msg_lisp_map_register_enable_disable_reply
#define defined_vapi_msg_lisp_map_register_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_map_register_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_map_register_enable_disable_reply payload;
} vapi_msg_lisp_map_register_enable_disable_reply;

static inline void vapi_msg_lisp_map_register_enable_disable_reply_payload_hton(vapi_payload_lisp_map_register_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_map_register_enable_disable_reply_payload_ntoh(vapi_payload_lisp_map_register_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_map_register_enable_disable_reply_hton(vapi_msg_lisp_map_register_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_register_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_map_register_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_map_register_enable_disable_reply_ntoh(vapi_msg_lisp_map_register_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_register_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_map_register_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_map_register_enable_disable_reply_msg_size(vapi_msg_lisp_map_register_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_map_register_enable_disable_reply()
{
  static const char name[] = "lisp_map_register_enable_disable_reply";
  static const char name_with_crc[] = "lisp_map_register_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_map_register_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_map_register_enable_disable_reply, payload),
    sizeof(vapi_msg_lisp_map_register_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_lisp_map_register_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_register_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_register_enable_disable_reply = vapi_register_msg(&__vapi_metadata_lisp_map_register_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to lisp_map_register_enable_disable_reply", vapi_msg_id_lisp_map_register_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_lisp_map_register_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_map_register_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_map_register_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_enable_disable_reply
#define defined_vapi_msg_lisp_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_enable_disable_reply payload;
} vapi_msg_lisp_enable_disable_reply;

static inline void vapi_msg_lisp_enable_disable_reply_payload_hton(vapi_payload_lisp_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_enable_disable_reply_payload_ntoh(vapi_payload_lisp_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_enable_disable_reply_hton(vapi_msg_lisp_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_enable_disable_reply_ntoh(vapi_msg_lisp_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_enable_disable_reply_msg_size(vapi_msg_lisp_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_enable_disable_reply()
{
  static const char name[] = "lisp_enable_disable_reply";
  static const char name_with_crc[] = "lisp_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_enable_disable_reply, payload),
    sizeof(vapi_msg_lisp_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_lisp_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_enable_disable_reply = vapi_register_msg(&__vapi_metadata_lisp_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to lisp_enable_disable_reply", vapi_msg_id_lisp_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_lisp_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_enable_disable
#define defined_vapi_msg_lisp_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_en; 
} vapi_payload_lisp_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_enable_disable payload;
} vapi_msg_lisp_enable_disable;

static inline void vapi_msg_lisp_enable_disable_payload_hton(vapi_payload_lisp_enable_disable *payload)
{

}

static inline void vapi_msg_lisp_enable_disable_payload_ntoh(vapi_payload_lisp_enable_disable *payload)
{

}

static inline void vapi_msg_lisp_enable_disable_hton(vapi_msg_lisp_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_enable_disable_ntoh(vapi_msg_lisp_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_enable_disable_msg_size(vapi_msg_lisp_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_enable_disable* vapi_alloc_lisp_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_lisp_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_enable_disable_reply *reply),
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
  vapi_msg_lisp_enable_disable_hton(msg);
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
    vapi_msg_lisp_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_enable_disable()
{
  static const char name[] = "lisp_enable_disable";
  static const char name_with_crc[] = "lisp_enable_disable_eb0e943b";
  static vapi_message_desc_t __vapi_metadata_lisp_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_enable_disable, payload),
    sizeof(vapi_msg_lisp_enable_disable),
    (generic_swap_fn_t)vapi_msg_lisp_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_lisp_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_enable_disable = vapi_register_msg(&__vapi_metadata_lisp_enable_disable);
  VAPI_DBG("Assigned msg id %d to lisp_enable_disable", vapi_msg_id_lisp_enable_disable);
}
#endif

#ifndef defined_vapi_msg_show_lisp_rloc_probe_state_reply
#define defined_vapi_msg_show_lisp_rloc_probe_state_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 is_enabled; 
} vapi_payload_show_lisp_rloc_probe_state_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_lisp_rloc_probe_state_reply payload;
} vapi_msg_show_lisp_rloc_probe_state_reply;

static inline void vapi_msg_show_lisp_rloc_probe_state_reply_payload_hton(vapi_payload_show_lisp_rloc_probe_state_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_lisp_rloc_probe_state_reply_payload_ntoh(vapi_payload_show_lisp_rloc_probe_state_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_lisp_rloc_probe_state_reply_hton(vapi_msg_show_lisp_rloc_probe_state_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_rloc_probe_state_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_lisp_rloc_probe_state_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_lisp_rloc_probe_state_reply_ntoh(vapi_msg_show_lisp_rloc_probe_state_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_rloc_probe_state_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_lisp_rloc_probe_state_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_lisp_rloc_probe_state_reply_msg_size(vapi_msg_show_lisp_rloc_probe_state_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_lisp_rloc_probe_state_reply()
{
  static const char name[] = "show_lisp_rloc_probe_state_reply";
  static const char name_with_crc[] = "show_lisp_rloc_probe_state_reply_14304fbc";
  static vapi_message_desc_t __vapi_metadata_show_lisp_rloc_probe_state_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_lisp_rloc_probe_state_reply, payload),
    sizeof(vapi_msg_show_lisp_rloc_probe_state_reply),
    (generic_swap_fn_t)vapi_msg_show_lisp_rloc_probe_state_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_rloc_probe_state_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_rloc_probe_state_reply = vapi_register_msg(&__vapi_metadata_show_lisp_rloc_probe_state_reply);
  VAPI_DBG("Assigned msg id %d to show_lisp_rloc_probe_state_reply", vapi_msg_id_show_lisp_rloc_probe_state_reply);
}

static inline void vapi_set_vapi_msg_show_lisp_rloc_probe_state_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_lisp_rloc_probe_state_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_lisp_rloc_probe_state_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_eid_table_map_dump
#define defined_vapi_msg_lisp_eid_table_map_dump
typedef struct __attribute__ ((__packed__)) {
  u8 is_l2; 
} vapi_payload_lisp_eid_table_map_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_eid_table_map_dump payload;
} vapi_msg_lisp_eid_table_map_dump;

static inline void vapi_msg_lisp_eid_table_map_dump_payload_hton(vapi_payload_lisp_eid_table_map_dump *payload)
{

}

static inline void vapi_msg_lisp_eid_table_map_dump_payload_ntoh(vapi_payload_lisp_eid_table_map_dump *payload)
{

}

static inline void vapi_msg_lisp_eid_table_map_dump_hton(vapi_msg_lisp_eid_table_map_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_map_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_eid_table_map_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_eid_table_map_dump_ntoh(vapi_msg_lisp_eid_table_map_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_eid_table_map_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_eid_table_map_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_eid_table_map_dump_msg_size(vapi_msg_lisp_eid_table_map_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_eid_table_map_dump* vapi_alloc_lisp_eid_table_map_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_eid_table_map_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_eid_table_map_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_eid_table_map_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_eid_table_map_dump);

  return msg;
}

static inline vapi_error_e vapi_lisp_eid_table_map_dump(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_eid_table_map_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_eid_table_map_details *reply),
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
  vapi_msg_lisp_eid_table_map_dump_hton(msg);
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
    vapi_msg_lisp_eid_table_map_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_eid_table_map_dump()
{
  static const char name[] = "lisp_eid_table_map_dump";
  static const char name_with_crc[] = "lisp_eid_table_map_dump_67c54650";
  static vapi_message_desc_t __vapi_metadata_lisp_eid_table_map_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_eid_table_map_dump, payload),
    sizeof(vapi_msg_lisp_eid_table_map_dump),
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_map_dump_hton,
    (generic_swap_fn_t)vapi_msg_lisp_eid_table_map_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_eid_table_map_dump = vapi_register_msg(&__vapi_metadata_lisp_eid_table_map_dump);
  VAPI_DBG("Assigned msg id %d to lisp_eid_table_map_dump", vapi_msg_id_lisp_eid_table_map_dump);
}
#endif

#ifndef defined_vapi_msg_lisp_map_register_enable_disable
#define defined_vapi_msg_lisp_map_register_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_enabled; 
} vapi_payload_lisp_map_register_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_map_register_enable_disable payload;
} vapi_msg_lisp_map_register_enable_disable;

static inline void vapi_msg_lisp_map_register_enable_disable_payload_hton(vapi_payload_lisp_map_register_enable_disable *payload)
{

}

static inline void vapi_msg_lisp_map_register_enable_disable_payload_ntoh(vapi_payload_lisp_map_register_enable_disable *payload)
{

}

static inline void vapi_msg_lisp_map_register_enable_disable_hton(vapi_msg_lisp_map_register_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_register_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_map_register_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_map_register_enable_disable_ntoh(vapi_msg_lisp_map_register_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_register_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_map_register_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_map_register_enable_disable_msg_size(vapi_msg_lisp_map_register_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_map_register_enable_disable* vapi_alloc_lisp_map_register_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_map_register_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_map_register_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_map_register_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_map_register_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_lisp_map_register_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_map_register_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_map_register_enable_disable_reply *reply),
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
  vapi_msg_lisp_map_register_enable_disable_hton(msg);
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
    vapi_msg_lisp_map_register_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_map_register_enable_disable()
{
  static const char name[] = "lisp_map_register_enable_disable";
  static const char name_with_crc[] = "lisp_map_register_enable_disable_294103d1";
  static vapi_message_desc_t __vapi_metadata_lisp_map_register_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_map_register_enable_disable, payload),
    sizeof(vapi_msg_lisp_map_register_enable_disable),
    (generic_swap_fn_t)vapi_msg_lisp_map_register_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_register_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_register_enable_disable = vapi_register_msg(&__vapi_metadata_lisp_map_register_enable_disable);
  VAPI_DBG("Assigned msg id %d to lisp_map_register_enable_disable", vapi_msg_id_lisp_map_register_enable_disable);
}
#endif

#ifndef defined_vapi_msg_lisp_locator_set_dump
#define defined_vapi_msg_lisp_locator_set_dump
typedef struct __attribute__ ((__packed__)) {
  u8 filter; 
} vapi_payload_lisp_locator_set_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_locator_set_dump payload;
} vapi_msg_lisp_locator_set_dump;

static inline void vapi_msg_lisp_locator_set_dump_payload_hton(vapi_payload_lisp_locator_set_dump *payload)
{

}

static inline void vapi_msg_lisp_locator_set_dump_payload_ntoh(vapi_payload_lisp_locator_set_dump *payload)
{

}

static inline void vapi_msg_lisp_locator_set_dump_hton(vapi_msg_lisp_locator_set_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_set_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_locator_set_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_locator_set_dump_ntoh(vapi_msg_lisp_locator_set_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_locator_set_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_locator_set_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_locator_set_dump_msg_size(vapi_msg_lisp_locator_set_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_locator_set_dump* vapi_alloc_lisp_locator_set_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_locator_set_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_locator_set_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_locator_set_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_locator_set_dump);

  return msg;
}

static inline vapi_error_e vapi_lisp_locator_set_dump(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_locator_set_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_locator_set_details *reply),
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
  vapi_msg_lisp_locator_set_dump_hton(msg);
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
    vapi_msg_lisp_locator_set_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_locator_set_dump()
{
  static const char name[] = "lisp_locator_set_dump";
  static const char name_with_crc[] = "lisp_locator_set_dump_c79e8ab0";
  static vapi_message_desc_t __vapi_metadata_lisp_locator_set_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_locator_set_dump, payload),
    sizeof(vapi_msg_lisp_locator_set_dump),
    (generic_swap_fn_t)vapi_msg_lisp_locator_set_dump_hton,
    (generic_swap_fn_t)vapi_msg_lisp_locator_set_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_locator_set_dump = vapi_register_msg(&__vapi_metadata_lisp_locator_set_dump);
  VAPI_DBG("Assigned msg id %d to lisp_locator_set_dump", vapi_msg_id_lisp_locator_set_dump);
}
#endif

#ifndef defined_vapi_msg_show_lisp_status_reply
#define defined_vapi_msg_show_lisp_status_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 feature_status;
  u8 gpe_status; 
} vapi_payload_show_lisp_status_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_lisp_status_reply payload;
} vapi_msg_show_lisp_status_reply;

static inline void vapi_msg_show_lisp_status_reply_payload_hton(vapi_payload_show_lisp_status_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_lisp_status_reply_payload_ntoh(vapi_payload_show_lisp_status_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_lisp_status_reply_hton(vapi_msg_show_lisp_status_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_status_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_lisp_status_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_lisp_status_reply_ntoh(vapi_msg_show_lisp_status_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_status_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_lisp_status_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_lisp_status_reply_msg_size(vapi_msg_show_lisp_status_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_lisp_status_reply()
{
  static const char name[] = "show_lisp_status_reply";
  static const char name_with_crc[] = "show_lisp_status_reply_ddcf48ef";
  static vapi_message_desc_t __vapi_metadata_show_lisp_status_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_lisp_status_reply, payload),
    sizeof(vapi_msg_show_lisp_status_reply),
    (generic_swap_fn_t)vapi_msg_show_lisp_status_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_status_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_status_reply = vapi_register_msg(&__vapi_metadata_show_lisp_status_reply);
  VAPI_DBG("Assigned msg id %d to show_lisp_status_reply", vapi_msg_id_show_lisp_status_reply);
}

static inline void vapi_set_vapi_msg_show_lisp_status_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_lisp_status_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_lisp_status_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_rloc_probe_enable_disable
#define defined_vapi_msg_lisp_rloc_probe_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_enabled; 
} vapi_payload_lisp_rloc_probe_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_rloc_probe_enable_disable payload;
} vapi_msg_lisp_rloc_probe_enable_disable;

static inline void vapi_msg_lisp_rloc_probe_enable_disable_payload_hton(vapi_payload_lisp_rloc_probe_enable_disable *payload)
{

}

static inline void vapi_msg_lisp_rloc_probe_enable_disable_payload_ntoh(vapi_payload_lisp_rloc_probe_enable_disable *payload)
{

}

static inline void vapi_msg_lisp_rloc_probe_enable_disable_hton(vapi_msg_lisp_rloc_probe_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_rloc_probe_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_rloc_probe_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_rloc_probe_enable_disable_ntoh(vapi_msg_lisp_rloc_probe_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_rloc_probe_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_rloc_probe_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_rloc_probe_enable_disable_msg_size(vapi_msg_lisp_rloc_probe_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_rloc_probe_enable_disable* vapi_alloc_lisp_rloc_probe_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_rloc_probe_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_rloc_probe_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_rloc_probe_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_rloc_probe_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_lisp_rloc_probe_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_rloc_probe_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_rloc_probe_enable_disable_reply *reply),
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
  vapi_msg_lisp_rloc_probe_enable_disable_hton(msg);
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
    vapi_msg_lisp_rloc_probe_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_rloc_probe_enable_disable()
{
  static const char name[] = "lisp_rloc_probe_enable_disable";
  static const char name_with_crc[] = "lisp_rloc_probe_enable_disable_294103d1";
  static vapi_message_desc_t __vapi_metadata_lisp_rloc_probe_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_rloc_probe_enable_disable, payload),
    sizeof(vapi_msg_lisp_rloc_probe_enable_disable),
    (generic_swap_fn_t)vapi_msg_lisp_rloc_probe_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_lisp_rloc_probe_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_rloc_probe_enable_disable = vapi_register_msg(&__vapi_metadata_lisp_rloc_probe_enable_disable);
  VAPI_DBG("Assigned msg id %d to lisp_rloc_probe_enable_disable", vapi_msg_id_lisp_rloc_probe_enable_disable);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_map_server_reply
#define defined_vapi_msg_lisp_add_del_map_server_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_add_del_map_server_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_map_server_reply payload;
} vapi_msg_lisp_add_del_map_server_reply;

static inline void vapi_msg_lisp_add_del_map_server_reply_payload_hton(vapi_payload_lisp_add_del_map_server_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_add_del_map_server_reply_payload_ntoh(vapi_payload_lisp_add_del_map_server_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_add_del_map_server_reply_hton(vapi_msg_lisp_add_del_map_server_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_server_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_map_server_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_map_server_reply_ntoh(vapi_msg_lisp_add_del_map_server_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_server_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_map_server_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_map_server_reply_msg_size(vapi_msg_lisp_add_del_map_server_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_map_server_reply()
{
  static const char name[] = "lisp_add_del_map_server_reply";
  static const char name_with_crc[] = "lisp_add_del_map_server_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_map_server_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_map_server_reply, payload),
    sizeof(vapi_msg_lisp_add_del_map_server_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_server_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_server_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_map_server_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_map_server_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_map_server_reply", vapi_msg_id_lisp_add_del_map_server_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_map_server_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_map_server_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_map_server_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_map_server
#define defined_vapi_msg_lisp_add_del_map_server
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_ipv6;
  u8 ip_address[16]; 
} vapi_payload_lisp_add_del_map_server;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_map_server payload;
} vapi_msg_lisp_add_del_map_server;

static inline void vapi_msg_lisp_add_del_map_server_payload_hton(vapi_payload_lisp_add_del_map_server *payload)
{

}

static inline void vapi_msg_lisp_add_del_map_server_payload_ntoh(vapi_payload_lisp_add_del_map_server *payload)
{

}

static inline void vapi_msg_lisp_add_del_map_server_hton(vapi_msg_lisp_add_del_map_server *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_server'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_map_server_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_map_server_ntoh(vapi_msg_lisp_add_del_map_server *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_server'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_map_server_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_map_server_msg_size(vapi_msg_lisp_add_del_map_server *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_add_del_map_server* vapi_alloc_lisp_add_del_map_server(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_add_del_map_server *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_map_server);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_map_server*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_map_server);

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_map_server(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_map_server *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_map_server_reply *reply),
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
  vapi_msg_lisp_add_del_map_server_hton(msg);
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
    vapi_msg_lisp_add_del_map_server_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_map_server()
{
  static const char name[] = "lisp_add_del_map_server";
  static const char name_with_crc[] = "lisp_add_del_map_server_0ebcd37d";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_map_server = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_map_server, payload),
    sizeof(vapi_msg_lisp_add_del_map_server),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_server_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_server_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_map_server = vapi_register_msg(&__vapi_metadata_lisp_add_del_map_server);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_map_server", vapi_msg_id_lisp_add_del_map_server);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_local_eid
#define defined_vapi_msg_lisp_add_del_local_eid
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 eid_type;
  u8 eid[16];
  u8 prefix_len;
  u8 locator_set_name[64];
  u32 vni;
  u16 key_id;
  u8 key[64]; 
} vapi_payload_lisp_add_del_local_eid;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_local_eid payload;
} vapi_msg_lisp_add_del_local_eid;

static inline void vapi_msg_lisp_add_del_local_eid_payload_hton(vapi_payload_lisp_add_del_local_eid *payload)
{
  payload->vni = htobe32(payload->vni);
  payload->key_id = htobe16(payload->key_id);
}

static inline void vapi_msg_lisp_add_del_local_eid_payload_ntoh(vapi_payload_lisp_add_del_local_eid *payload)
{
  payload->vni = be32toh(payload->vni);
  payload->key_id = be16toh(payload->key_id);
}

static inline void vapi_msg_lisp_add_del_local_eid_hton(vapi_msg_lisp_add_del_local_eid *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_local_eid'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_local_eid_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_local_eid_ntoh(vapi_msg_lisp_add_del_local_eid *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_local_eid'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_local_eid_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_local_eid_msg_size(vapi_msg_lisp_add_del_local_eid *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_add_del_local_eid* vapi_alloc_lisp_add_del_local_eid(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_add_del_local_eid *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_local_eid);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_local_eid*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_local_eid);

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_local_eid(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_local_eid *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_local_eid_reply *reply),
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
  vapi_msg_lisp_add_del_local_eid_hton(msg);
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
    vapi_msg_lisp_add_del_local_eid_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_local_eid()
{
  static const char name[] = "lisp_add_del_local_eid";
  static const char name_with_crc[] = "lisp_add_del_local_eid_e6d00717";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_local_eid = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_local_eid, payload),
    sizeof(vapi_msg_lisp_add_del_local_eid),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_local_eid_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_local_eid_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_local_eid = vapi_register_msg(&__vapi_metadata_lisp_add_del_local_eid);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_local_eid", vapi_msg_id_lisp_add_del_local_eid);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_map_request_itr_rlocs_reply
#define defined_vapi_msg_lisp_add_del_map_request_itr_rlocs_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_lisp_add_del_map_request_itr_rlocs_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_lisp_add_del_map_request_itr_rlocs_reply payload;
} vapi_msg_lisp_add_del_map_request_itr_rlocs_reply;

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_payload_hton(vapi_payload_lisp_add_del_map_request_itr_rlocs_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_payload_ntoh(vapi_payload_lisp_add_del_map_request_itr_rlocs_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_hton(vapi_msg_lisp_add_del_map_request_itr_rlocs_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_request_itr_rlocs_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_ntoh(vapi_msg_lisp_add_del_map_request_itr_rlocs_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_request_itr_rlocs_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_map_request_itr_rlocs_reply_msg_size(vapi_msg_lisp_add_del_map_request_itr_rlocs_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_map_request_itr_rlocs_reply()
{
  static const char name[] = "lisp_add_del_map_request_itr_rlocs_reply";
  static const char name_with_crc[] = "lisp_add_del_map_request_itr_rlocs_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_map_request_itr_rlocs_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_lisp_add_del_map_request_itr_rlocs_reply, payload),
    sizeof(vapi_msg_lisp_add_del_map_request_itr_rlocs_reply),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_map_request_itr_rlocs_reply = vapi_register_msg(&__vapi_metadata_lisp_add_del_map_request_itr_rlocs_reply);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_map_request_itr_rlocs_reply", vapi_msg_id_lisp_add_del_map_request_itr_rlocs_reply);
}

static inline void vapi_set_vapi_msg_lisp_add_del_map_request_itr_rlocs_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_lisp_add_del_map_request_itr_rlocs_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_lisp_add_del_map_request_itr_rlocs_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_lisp_add_del_map_request_itr_rlocs
#define defined_vapi_msg_lisp_add_del_map_request_itr_rlocs
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 locator_set_name[64]; 
} vapi_payload_lisp_add_del_map_request_itr_rlocs;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_map_request_itr_rlocs payload;
} vapi_msg_lisp_add_del_map_request_itr_rlocs;

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_payload_hton(vapi_payload_lisp_add_del_map_request_itr_rlocs *payload)
{

}

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_payload_ntoh(vapi_payload_lisp_add_del_map_request_itr_rlocs *payload)
{

}

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_hton(vapi_msg_lisp_add_del_map_request_itr_rlocs *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_request_itr_rlocs'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_map_request_itr_rlocs_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_map_request_itr_rlocs_ntoh(vapi_msg_lisp_add_del_map_request_itr_rlocs *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_map_request_itr_rlocs'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_map_request_itr_rlocs_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_map_request_itr_rlocs_msg_size(vapi_msg_lisp_add_del_map_request_itr_rlocs *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_add_del_map_request_itr_rlocs* vapi_alloc_lisp_add_del_map_request_itr_rlocs(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_add_del_map_request_itr_rlocs *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_map_request_itr_rlocs);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_map_request_itr_rlocs*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_map_request_itr_rlocs);

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_map_request_itr_rlocs(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_map_request_itr_rlocs *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_map_request_itr_rlocs_reply *reply),
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
  vapi_msg_lisp_add_del_map_request_itr_rlocs_hton(msg);
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
    vapi_msg_lisp_add_del_map_request_itr_rlocs_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_map_request_itr_rlocs()
{
  static const char name[] = "lisp_add_del_map_request_itr_rlocs";
  static const char name_with_crc[] = "lisp_add_del_map_request_itr_rlocs_c7c6cb2f";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_map_request_itr_rlocs = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_map_request_itr_rlocs, payload),
    sizeof(vapi_msg_lisp_add_del_map_request_itr_rlocs),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_request_itr_rlocs_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_map_request_itr_rlocs_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_map_request_itr_rlocs = vapi_register_msg(&__vapi_metadata_lisp_add_del_map_request_itr_rlocs);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_map_request_itr_rlocs", vapi_msg_id_lisp_add_del_map_request_itr_rlocs);
}
#endif

#ifndef defined_vapi_msg_lisp_map_server_dump
#define defined_vapi_msg_lisp_map_server_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_lisp_map_server_dump;

static inline void vapi_msg_lisp_map_server_dump_hton(vapi_msg_lisp_map_server_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_server_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_lisp_map_server_dump_ntoh(vapi_msg_lisp_map_server_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_map_server_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_lisp_map_server_dump_msg_size(vapi_msg_lisp_map_server_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_map_server_dump* vapi_alloc_lisp_map_server_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_map_server_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_map_server_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_map_server_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_map_server_dump);

  return msg;
}

static inline vapi_error_e vapi_lisp_map_server_dump(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_map_server_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_map_server_details *reply),
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
  vapi_msg_lisp_map_server_dump_hton(msg);
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
    vapi_msg_lisp_map_server_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_map_server_dump()
{
  static const char name[] = "lisp_map_server_dump";
  static const char name_with_crc[] = "lisp_map_server_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_lisp_map_server_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_lisp_map_server_dump),
    (generic_swap_fn_t)vapi_msg_lisp_map_server_dump_hton,
    (generic_swap_fn_t)vapi_msg_lisp_map_server_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_map_server_dump = vapi_register_msg(&__vapi_metadata_lisp_map_server_dump);
  VAPI_DBG("Assigned msg id %d to lisp_map_server_dump", vapi_msg_id_lisp_map_server_dump);
}
#endif

#ifndef defined_vapi_msg_show_lisp_rloc_probe_state
#define defined_vapi_msg_show_lisp_rloc_probe_state
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_lisp_rloc_probe_state;

static inline void vapi_msg_show_lisp_rloc_probe_state_hton(vapi_msg_show_lisp_rloc_probe_state *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_rloc_probe_state'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_lisp_rloc_probe_state_ntoh(vapi_msg_show_lisp_rloc_probe_state *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_rloc_probe_state'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_lisp_rloc_probe_state_msg_size(vapi_msg_show_lisp_rloc_probe_state *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_lisp_rloc_probe_state* vapi_alloc_show_lisp_rloc_probe_state(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_lisp_rloc_probe_state *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_lisp_rloc_probe_state);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_lisp_rloc_probe_state*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_lisp_rloc_probe_state);

  return msg;
}

static inline vapi_error_e vapi_show_lisp_rloc_probe_state(struct vapi_ctx_s *ctx,
  vapi_msg_show_lisp_rloc_probe_state *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_lisp_rloc_probe_state_reply *reply),
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
  vapi_msg_show_lisp_rloc_probe_state_hton(msg);
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
    vapi_msg_show_lisp_rloc_probe_state_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_lisp_rloc_probe_state()
{
  static const char name[] = "show_lisp_rloc_probe_state";
  static const char name_with_crc[] = "show_lisp_rloc_probe_state_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_lisp_rloc_probe_state = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_lisp_rloc_probe_state),
    (generic_swap_fn_t)vapi_msg_show_lisp_rloc_probe_state_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_rloc_probe_state_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_rloc_probe_state = vapi_register_msg(&__vapi_metadata_show_lisp_rloc_probe_state);
  VAPI_DBG("Assigned msg id %d to show_lisp_rloc_probe_state", vapi_msg_id_show_lisp_rloc_probe_state);
}
#endif

#ifndef defined_vapi_msg_lisp_add_del_locator
#define defined_vapi_msg_lisp_add_del_locator
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 locator_set_name[64];
  u32 sw_if_index;
  u8 priority;
  u8 weight; 
} vapi_payload_lisp_add_del_locator;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_lisp_add_del_locator payload;
} vapi_msg_lisp_add_del_locator;

static inline void vapi_msg_lisp_add_del_locator_payload_hton(vapi_payload_lisp_add_del_locator *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_lisp_add_del_locator_payload_ntoh(vapi_payload_lisp_add_del_locator *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_lisp_add_del_locator_hton(vapi_msg_lisp_add_del_locator *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_lisp_add_del_locator_payload_hton(&msg->payload);
}

static inline void vapi_msg_lisp_add_del_locator_ntoh(vapi_msg_lisp_add_del_locator *msg)
{
  VAPI_DBG("Swapping `vapi_msg_lisp_add_del_locator'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_lisp_add_del_locator_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_lisp_add_del_locator_msg_size(vapi_msg_lisp_add_del_locator *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_lisp_add_del_locator* vapi_alloc_lisp_add_del_locator(struct vapi_ctx_s *ctx)
{
  vapi_msg_lisp_add_del_locator *msg = NULL;
  const size_t size = sizeof(vapi_msg_lisp_add_del_locator);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_lisp_add_del_locator*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_lisp_add_del_locator);

  return msg;
}

static inline vapi_error_e vapi_lisp_add_del_locator(struct vapi_ctx_s *ctx,
  vapi_msg_lisp_add_del_locator *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_lisp_add_del_locator_reply *reply),
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
  vapi_msg_lisp_add_del_locator_hton(msg);
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
    vapi_msg_lisp_add_del_locator_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_lisp_add_del_locator()
{
  static const char name[] = "lisp_add_del_locator";
  static const char name_with_crc[] = "lisp_add_del_locator_006a4240";
  static vapi_message_desc_t __vapi_metadata_lisp_add_del_locator = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_lisp_add_del_locator, payload),
    sizeof(vapi_msg_lisp_add_del_locator),
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_hton,
    (generic_swap_fn_t)vapi_msg_lisp_add_del_locator_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_lisp_add_del_locator = vapi_register_msg(&__vapi_metadata_lisp_add_del_locator);
  VAPI_DBG("Assigned msg id %d to lisp_add_del_locator", vapi_msg_id_lisp_add_del_locator);
}
#endif

#ifndef defined_vapi_msg_show_lisp_status
#define defined_vapi_msg_show_lisp_status
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_lisp_status;

static inline void vapi_msg_show_lisp_status_hton(vapi_msg_show_lisp_status *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_status'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_lisp_status_ntoh(vapi_msg_show_lisp_status *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_lisp_status'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_lisp_status_msg_size(vapi_msg_show_lisp_status *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_lisp_status* vapi_alloc_show_lisp_status(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_lisp_status *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_lisp_status);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_lisp_status*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_lisp_status);

  return msg;
}

static inline vapi_error_e vapi_show_lisp_status(struct vapi_ctx_s *ctx,
  vapi_msg_show_lisp_status *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_lisp_status_reply *reply),
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
  vapi_msg_show_lisp_status_hton(msg);
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
    vapi_msg_show_lisp_status_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_lisp_status()
{
  static const char name[] = "show_lisp_status";
  static const char name_with_crc[] = "show_lisp_status_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_lisp_status = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_lisp_status),
    (generic_swap_fn_t)vapi_msg_show_lisp_status_hton,
    (generic_swap_fn_t)vapi_msg_show_lisp_status_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_lisp_status = vapi_register_msg(&__vapi_metadata_show_lisp_status);
  VAPI_DBG("Assigned msg id %d to show_lisp_status", vapi_msg_id_show_lisp_status);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
