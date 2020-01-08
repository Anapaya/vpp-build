#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_ioam_lib_trace_trace_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_ioam_lib_trace_trace_api_json

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

extern vapi_msg_id_t vapi_msg_id_trace_profile_show_config;
extern vapi_msg_id_t vapi_msg_id_trace_profile_add;
extern vapi_msg_id_t vapi_msg_id_trace_profile_del_reply;
extern vapi_msg_id_t vapi_msg_id_trace_profile_del;
extern vapi_msg_id_t vapi_msg_id_trace_profile_add_reply;
extern vapi_msg_id_t vapi_msg_id_trace_profile_show_config_reply;

#define DEFINE_VAPI_MSG_IDS_TRACE_API_JSON\
  vapi_msg_id_t vapi_msg_id_trace_profile_show_config;\
  vapi_msg_id_t vapi_msg_id_trace_profile_add;\
  vapi_msg_id_t vapi_msg_id_trace_profile_del_reply;\
  vapi_msg_id_t vapi_msg_id_trace_profile_del;\
  vapi_msg_id_t vapi_msg_id_trace_profile_add_reply;\
  vapi_msg_id_t vapi_msg_id_trace_profile_show_config_reply;


#ifndef defined_vapi_msg_trace_profile_show_config_reply
#define defined_vapi_msg_trace_profile_show_config_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 trace_type;
  u8 num_elts;
  u8 trace_tsp;
  u32 node_id;
  u32 app_data; 
} vapi_payload_trace_profile_show_config_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_trace_profile_show_config_reply payload;
} vapi_msg_trace_profile_show_config_reply;

static inline void vapi_msg_trace_profile_show_config_reply_payload_hton(vapi_payload_trace_profile_show_config_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->node_id = htobe32(payload->node_id);
  payload->app_data = htobe32(payload->app_data);
}

static inline void vapi_msg_trace_profile_show_config_reply_payload_ntoh(vapi_payload_trace_profile_show_config_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->node_id = be32toh(payload->node_id);
  payload->app_data = be32toh(payload->app_data);
}

static inline void vapi_msg_trace_profile_show_config_reply_hton(vapi_msg_trace_profile_show_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_show_config_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_trace_profile_show_config_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_trace_profile_show_config_reply_ntoh(vapi_msg_trace_profile_show_config_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_show_config_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_trace_profile_show_config_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_trace_profile_show_config_reply_msg_size(vapi_msg_trace_profile_show_config_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_trace_profile_show_config_reply()
{
  static const char name[] = "trace_profile_show_config_reply";
  static const char name_with_crc[] = "trace_profile_show_config_reply_0f1d374c";
  static vapi_message_desc_t __vapi_metadata_trace_profile_show_config_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_trace_profile_show_config_reply, payload),
    sizeof(vapi_msg_trace_profile_show_config_reply),
    (generic_swap_fn_t)vapi_msg_trace_profile_show_config_reply_hton,
    (generic_swap_fn_t)vapi_msg_trace_profile_show_config_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_trace_profile_show_config_reply = vapi_register_msg(&__vapi_metadata_trace_profile_show_config_reply);
  VAPI_DBG("Assigned msg id %d to trace_profile_show_config_reply", vapi_msg_id_trace_profile_show_config_reply);
}

static inline void vapi_set_vapi_msg_trace_profile_show_config_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_trace_profile_show_config_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_trace_profile_show_config_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_trace_profile_show_config
#define defined_vapi_msg_trace_profile_show_config
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_trace_profile_show_config;

static inline void vapi_msg_trace_profile_show_config_hton(vapi_msg_trace_profile_show_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_show_config'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_trace_profile_show_config_ntoh(vapi_msg_trace_profile_show_config *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_show_config'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_trace_profile_show_config_msg_size(vapi_msg_trace_profile_show_config *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_trace_profile_show_config* vapi_alloc_trace_profile_show_config(struct vapi_ctx_s *ctx)
{
  vapi_msg_trace_profile_show_config *msg = NULL;
  const size_t size = sizeof(vapi_msg_trace_profile_show_config);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_trace_profile_show_config*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_trace_profile_show_config);

  return msg;
}

static inline vapi_error_e vapi_trace_profile_show_config(struct vapi_ctx_s *ctx,
  vapi_msg_trace_profile_show_config *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_trace_profile_show_config_reply *reply),
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
  vapi_msg_trace_profile_show_config_hton(msg);
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
    vapi_msg_trace_profile_show_config_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_trace_profile_show_config()
{
  static const char name[] = "trace_profile_show_config";
  static const char name_with_crc[] = "trace_profile_show_config_51077d14";
  static vapi_message_desc_t __vapi_metadata_trace_profile_show_config = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_trace_profile_show_config),
    (generic_swap_fn_t)vapi_msg_trace_profile_show_config_hton,
    (generic_swap_fn_t)vapi_msg_trace_profile_show_config_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_trace_profile_show_config = vapi_register_msg(&__vapi_metadata_trace_profile_show_config);
  VAPI_DBG("Assigned msg id %d to trace_profile_show_config", vapi_msg_id_trace_profile_show_config);
}
#endif

#ifndef defined_vapi_msg_trace_profile_add_reply
#define defined_vapi_msg_trace_profile_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_trace_profile_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_trace_profile_add_reply payload;
} vapi_msg_trace_profile_add_reply;

static inline void vapi_msg_trace_profile_add_reply_payload_hton(vapi_payload_trace_profile_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_trace_profile_add_reply_payload_ntoh(vapi_payload_trace_profile_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_trace_profile_add_reply_hton(vapi_msg_trace_profile_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_trace_profile_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_trace_profile_add_reply_ntoh(vapi_msg_trace_profile_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_trace_profile_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_trace_profile_add_reply_msg_size(vapi_msg_trace_profile_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_trace_profile_add_reply()
{
  static const char name[] = "trace_profile_add_reply";
  static const char name_with_crc[] = "trace_profile_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_trace_profile_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_trace_profile_add_reply, payload),
    sizeof(vapi_msg_trace_profile_add_reply),
    (generic_swap_fn_t)vapi_msg_trace_profile_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_trace_profile_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_trace_profile_add_reply = vapi_register_msg(&__vapi_metadata_trace_profile_add_reply);
  VAPI_DBG("Assigned msg id %d to trace_profile_add_reply", vapi_msg_id_trace_profile_add_reply);
}

static inline void vapi_set_vapi_msg_trace_profile_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_trace_profile_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_trace_profile_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_trace_profile_add
#define defined_vapi_msg_trace_profile_add
typedef struct __attribute__ ((__packed__)) {
  u8 trace_type;
  u8 num_elts;
  u8 trace_tsp;
  u32 node_id;
  u32 app_data; 
} vapi_payload_trace_profile_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_trace_profile_add payload;
} vapi_msg_trace_profile_add;

static inline void vapi_msg_trace_profile_add_payload_hton(vapi_payload_trace_profile_add *payload)
{
  payload->node_id = htobe32(payload->node_id);
  payload->app_data = htobe32(payload->app_data);
}

static inline void vapi_msg_trace_profile_add_payload_ntoh(vapi_payload_trace_profile_add *payload)
{
  payload->node_id = be32toh(payload->node_id);
  payload->app_data = be32toh(payload->app_data);
}

static inline void vapi_msg_trace_profile_add_hton(vapi_msg_trace_profile_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_trace_profile_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_trace_profile_add_ntoh(vapi_msg_trace_profile_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_trace_profile_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_trace_profile_add_msg_size(vapi_msg_trace_profile_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_trace_profile_add* vapi_alloc_trace_profile_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_trace_profile_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_trace_profile_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_trace_profile_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_trace_profile_add);

  return msg;
}

static inline vapi_error_e vapi_trace_profile_add(struct vapi_ctx_s *ctx,
  vapi_msg_trace_profile_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_trace_profile_add_reply *reply),
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
  vapi_msg_trace_profile_add_hton(msg);
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
    vapi_msg_trace_profile_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_trace_profile_add()
{
  static const char name[] = "trace_profile_add";
  static const char name_with_crc[] = "trace_profile_add_de08aa6d";
  static vapi_message_desc_t __vapi_metadata_trace_profile_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_trace_profile_add, payload),
    sizeof(vapi_msg_trace_profile_add),
    (generic_swap_fn_t)vapi_msg_trace_profile_add_hton,
    (generic_swap_fn_t)vapi_msg_trace_profile_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_trace_profile_add = vapi_register_msg(&__vapi_metadata_trace_profile_add);
  VAPI_DBG("Assigned msg id %d to trace_profile_add", vapi_msg_id_trace_profile_add);
}
#endif

#ifndef defined_vapi_msg_trace_profile_del_reply
#define defined_vapi_msg_trace_profile_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_trace_profile_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_trace_profile_del_reply payload;
} vapi_msg_trace_profile_del_reply;

static inline void vapi_msg_trace_profile_del_reply_payload_hton(vapi_payload_trace_profile_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_trace_profile_del_reply_payload_ntoh(vapi_payload_trace_profile_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_trace_profile_del_reply_hton(vapi_msg_trace_profile_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_trace_profile_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_trace_profile_del_reply_ntoh(vapi_msg_trace_profile_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_trace_profile_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_trace_profile_del_reply_msg_size(vapi_msg_trace_profile_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_trace_profile_del_reply()
{
  static const char name[] = "trace_profile_del_reply";
  static const char name_with_crc[] = "trace_profile_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_trace_profile_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_trace_profile_del_reply, payload),
    sizeof(vapi_msg_trace_profile_del_reply),
    (generic_swap_fn_t)vapi_msg_trace_profile_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_trace_profile_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_trace_profile_del_reply = vapi_register_msg(&__vapi_metadata_trace_profile_del_reply);
  VAPI_DBG("Assigned msg id %d to trace_profile_del_reply", vapi_msg_id_trace_profile_del_reply);
}

static inline void vapi_set_vapi_msg_trace_profile_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_trace_profile_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_trace_profile_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_trace_profile_del
#define defined_vapi_msg_trace_profile_del
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_trace_profile_del;

static inline void vapi_msg_trace_profile_del_hton(vapi_msg_trace_profile_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_trace_profile_del_ntoh(vapi_msg_trace_profile_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_trace_profile_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_trace_profile_del_msg_size(vapi_msg_trace_profile_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_trace_profile_del* vapi_alloc_trace_profile_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_trace_profile_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_trace_profile_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_trace_profile_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_trace_profile_del);

  return msg;
}

static inline vapi_error_e vapi_trace_profile_del(struct vapi_ctx_s *ctx,
  vapi_msg_trace_profile_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_trace_profile_del_reply *reply),
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
  vapi_msg_trace_profile_del_hton(msg);
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
    vapi_msg_trace_profile_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_trace_profile_del()
{
  static const char name[] = "trace_profile_del";
  static const char name_with_crc[] = "trace_profile_del_51077d14";
  static vapi_message_desc_t __vapi_metadata_trace_profile_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_trace_profile_del),
    (generic_swap_fn_t)vapi_msg_trace_profile_del_hton,
    (generic_swap_fn_t)vapi_msg_trace_profile_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_trace_profile_del = vapi_register_msg(&__vapi_metadata_trace_profile_del);
  VAPI_DBG("Assigned msg id %d to trace_profile_del", vapi_msg_id_trace_profile_del);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
