#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_session_session_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_session_session_api_json

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

extern vapi_msg_id_t vapi_msg_id_application_detach;
extern vapi_msg_id_t vapi_msg_id_application_attach;
extern vapi_msg_id_t vapi_msg_id_unbind_sock;
extern vapi_msg_id_t vapi_msg_id_connect_uri_reply;
extern vapi_msg_id_t vapi_msg_id_session_rules_details;
extern vapi_msg_id_t vapi_msg_id_map_another_segment;
extern vapi_msg_id_t vapi_msg_id_disconnect_session_reply;
extern vapi_msg_id_t vapi_msg_id_app_worker_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_application_tls_key_add_reply;
extern vapi_msg_id_t vapi_msg_id_app_cut_through_registration_add_reply;
extern vapi_msg_id_t vapi_msg_id_session_rules_dump;
extern vapi_msg_id_t vapi_msg_id_application_tls_cert_add_reply;
extern vapi_msg_id_t vapi_msg_id_unmap_segment;
extern vapi_msg_id_t vapi_msg_id_unbind_sock_reply;
extern vapi_msg_id_t vapi_msg_id_connect_sock;
extern vapi_msg_id_t vapi_msg_id_unmap_segment_reply;
extern vapi_msg_id_t vapi_msg_id_unbind_uri;
extern vapi_msg_id_t vapi_msg_id_unbind_uri_reply;
extern vapi_msg_id_t vapi_msg_id_session_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_application_tls_key_add;
extern vapi_msg_id_t vapi_msg_id_bind_sock;
extern vapi_msg_id_t vapi_msg_id_app_attach;
extern vapi_msg_id_t vapi_msg_id_app_cut_through_registration_add;
extern vapi_msg_id_t vapi_msg_id_bind_uri_reply;
extern vapi_msg_id_t vapi_msg_id_application_detach_reply;
extern vapi_msg_id_t vapi_msg_id_app_worker_add_del;
extern vapi_msg_id_t vapi_msg_id_application_attach_reply;
extern vapi_msg_id_t vapi_msg_id_session_rule_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_app_namespace_add_del;
extern vapi_msg_id_t vapi_msg_id_map_another_segment_reply;
extern vapi_msg_id_t vapi_msg_id_session_rule_add_del;
extern vapi_msg_id_t vapi_msg_id_bind_sock_reply;
extern vapi_msg_id_t vapi_msg_id_app_namespace_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_bind_uri;
extern vapi_msg_id_t vapi_msg_id_application_tls_cert_add;
extern vapi_msg_id_t vapi_msg_id_disconnect_session;
extern vapi_msg_id_t vapi_msg_id_app_attach_reply;
extern vapi_msg_id_t vapi_msg_id_connect_sock_reply;
extern vapi_msg_id_t vapi_msg_id_connect_uri;
extern vapi_msg_id_t vapi_msg_id_session_enable_disable;

#define DEFINE_VAPI_MSG_IDS_SESSION_API_JSON\
  vapi_msg_id_t vapi_msg_id_application_detach;\
  vapi_msg_id_t vapi_msg_id_application_attach;\
  vapi_msg_id_t vapi_msg_id_unbind_sock;\
  vapi_msg_id_t vapi_msg_id_connect_uri_reply;\
  vapi_msg_id_t vapi_msg_id_session_rules_details;\
  vapi_msg_id_t vapi_msg_id_map_another_segment;\
  vapi_msg_id_t vapi_msg_id_disconnect_session_reply;\
  vapi_msg_id_t vapi_msg_id_app_worker_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_application_tls_key_add_reply;\
  vapi_msg_id_t vapi_msg_id_app_cut_through_registration_add_reply;\
  vapi_msg_id_t vapi_msg_id_session_rules_dump;\
  vapi_msg_id_t vapi_msg_id_application_tls_cert_add_reply;\
  vapi_msg_id_t vapi_msg_id_unmap_segment;\
  vapi_msg_id_t vapi_msg_id_unbind_sock_reply;\
  vapi_msg_id_t vapi_msg_id_connect_sock;\
  vapi_msg_id_t vapi_msg_id_unmap_segment_reply;\
  vapi_msg_id_t vapi_msg_id_unbind_uri;\
  vapi_msg_id_t vapi_msg_id_unbind_uri_reply;\
  vapi_msg_id_t vapi_msg_id_session_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_application_tls_key_add;\
  vapi_msg_id_t vapi_msg_id_bind_sock;\
  vapi_msg_id_t vapi_msg_id_app_attach;\
  vapi_msg_id_t vapi_msg_id_app_cut_through_registration_add;\
  vapi_msg_id_t vapi_msg_id_bind_uri_reply;\
  vapi_msg_id_t vapi_msg_id_application_detach_reply;\
  vapi_msg_id_t vapi_msg_id_app_worker_add_del;\
  vapi_msg_id_t vapi_msg_id_application_attach_reply;\
  vapi_msg_id_t vapi_msg_id_session_rule_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_app_namespace_add_del;\
  vapi_msg_id_t vapi_msg_id_map_another_segment_reply;\
  vapi_msg_id_t vapi_msg_id_session_rule_add_del;\
  vapi_msg_id_t vapi_msg_id_bind_sock_reply;\
  vapi_msg_id_t vapi_msg_id_app_namespace_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_bind_uri;\
  vapi_msg_id_t vapi_msg_id_application_tls_cert_add;\
  vapi_msg_id_t vapi_msg_id_disconnect_session;\
  vapi_msg_id_t vapi_msg_id_app_attach_reply;\
  vapi_msg_id_t vapi_msg_id_connect_sock_reply;\
  vapi_msg_id_t vapi_msg_id_connect_uri;\
  vapi_msg_id_t vapi_msg_id_session_enable_disable;


#ifndef defined_vapi_msg_application_detach_reply
#define defined_vapi_msg_application_detach_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_application_detach_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_application_detach_reply payload;
} vapi_msg_application_detach_reply;

static inline void vapi_msg_application_detach_reply_payload_hton(vapi_payload_application_detach_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_application_detach_reply_payload_ntoh(vapi_payload_application_detach_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_application_detach_reply_hton(vapi_msg_application_detach_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_detach_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_application_detach_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_application_detach_reply_ntoh(vapi_msg_application_detach_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_detach_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_application_detach_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_application_detach_reply_msg_size(vapi_msg_application_detach_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_application_detach_reply()
{
  static const char name[] = "application_detach_reply";
  static const char name_with_crc[] = "application_detach_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_application_detach_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_application_detach_reply, payload),
    sizeof(vapi_msg_application_detach_reply),
    (generic_swap_fn_t)vapi_msg_application_detach_reply_hton,
    (generic_swap_fn_t)vapi_msg_application_detach_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_detach_reply = vapi_register_msg(&__vapi_metadata_application_detach_reply);
  VAPI_DBG("Assigned msg id %d to application_detach_reply", vapi_msg_id_application_detach_reply);
}

static inline void vapi_set_vapi_msg_application_detach_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_application_detach_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_application_detach_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_application_detach
#define defined_vapi_msg_application_detach
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_application_detach;

static inline void vapi_msg_application_detach_hton(vapi_msg_application_detach *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_detach'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_application_detach_ntoh(vapi_msg_application_detach *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_detach'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_application_detach_msg_size(vapi_msg_application_detach *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_application_detach* vapi_alloc_application_detach(struct vapi_ctx_s *ctx)
{
  vapi_msg_application_detach *msg = NULL;
  const size_t size = sizeof(vapi_msg_application_detach);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_application_detach*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_application_detach);

  return msg;
}

static inline vapi_error_e vapi_application_detach(struct vapi_ctx_s *ctx,
  vapi_msg_application_detach *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_application_detach_reply *reply),
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
  vapi_msg_application_detach_hton(msg);
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
    vapi_msg_application_detach_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_application_detach()
{
  static const char name[] = "application_detach";
  static const char name_with_crc[] = "application_detach_51077d14";
  static vapi_message_desc_t __vapi_metadata_application_detach = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_application_detach),
    (generic_swap_fn_t)vapi_msg_application_detach_hton,
    (generic_swap_fn_t)vapi_msg_application_detach_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_detach = vapi_register_msg(&__vapi_metadata_application_detach);
  VAPI_DBG("Assigned msg id %d to application_detach", vapi_msg_id_application_detach);
}
#endif

#ifndef defined_vapi_msg_application_attach_reply
#define defined_vapi_msg_application_attach_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u64 app_event_queue_address;
  u8 n_fds;
  u8 fd_flags;
  u32 segment_size;
  u8 segment_name_length;
  u8 segment_name[128];
  u32 app_index;
  u64 segment_handle; 
} vapi_payload_application_attach_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_application_attach_reply payload;
} vapi_msg_application_attach_reply;

static inline void vapi_msg_application_attach_reply_payload_hton(vapi_payload_application_attach_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->app_event_queue_address = htobe64(payload->app_event_queue_address);
  payload->segment_size = htobe32(payload->segment_size);
  payload->app_index = htobe32(payload->app_index);
  payload->segment_handle = htobe64(payload->segment_handle);
}

static inline void vapi_msg_application_attach_reply_payload_ntoh(vapi_payload_application_attach_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->app_event_queue_address = be64toh(payload->app_event_queue_address);
  payload->segment_size = be32toh(payload->segment_size);
  payload->app_index = be32toh(payload->app_index);
  payload->segment_handle = be64toh(payload->segment_handle);
}

static inline void vapi_msg_application_attach_reply_hton(vapi_msg_application_attach_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_attach_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_application_attach_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_application_attach_reply_ntoh(vapi_msg_application_attach_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_attach_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_application_attach_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_application_attach_reply_msg_size(vapi_msg_application_attach_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_application_attach_reply()
{
  static const char name[] = "application_attach_reply";
  static const char name_with_crc[] = "application_attach_reply_581866e8";
  static vapi_message_desc_t __vapi_metadata_application_attach_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_application_attach_reply, payload),
    sizeof(vapi_msg_application_attach_reply),
    (generic_swap_fn_t)vapi_msg_application_attach_reply_hton,
    (generic_swap_fn_t)vapi_msg_application_attach_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_attach_reply = vapi_register_msg(&__vapi_metadata_application_attach_reply);
  VAPI_DBG("Assigned msg id %d to application_attach_reply", vapi_msg_id_application_attach_reply);
}

static inline void vapi_set_vapi_msg_application_attach_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_application_attach_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_application_attach_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_application_attach
#define defined_vapi_msg_application_attach
typedef struct __attribute__ ((__packed__)) {
  u32 initial_segment_size;
  u64 options[16];
  u8 namespace_id_len;
  u8 namespace_id[64]; 
} vapi_payload_application_attach;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_application_attach payload;
} vapi_msg_application_attach;

static inline void vapi_msg_application_attach_payload_hton(vapi_payload_application_attach *payload)
{
  payload->initial_segment_size = htobe32(payload->initial_segment_size);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = htobe64(payload->options[i]); } } while(0);
}

static inline void vapi_msg_application_attach_payload_ntoh(vapi_payload_application_attach *payload)
{
  payload->initial_segment_size = be32toh(payload->initial_segment_size);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = be64toh(payload->options[i]); } } while(0);
}

static inline void vapi_msg_application_attach_hton(vapi_msg_application_attach *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_attach'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_application_attach_payload_hton(&msg->payload);
}

static inline void vapi_msg_application_attach_ntoh(vapi_msg_application_attach *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_attach'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_application_attach_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_application_attach_msg_size(vapi_msg_application_attach *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_application_attach* vapi_alloc_application_attach(struct vapi_ctx_s *ctx)
{
  vapi_msg_application_attach *msg = NULL;
  const size_t size = sizeof(vapi_msg_application_attach);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_application_attach*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_application_attach);

  return msg;
}

static inline vapi_error_e vapi_application_attach(struct vapi_ctx_s *ctx,
  vapi_msg_application_attach *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_application_attach_reply *reply),
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
  vapi_msg_application_attach_hton(msg);
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
    vapi_msg_application_attach_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_application_attach()
{
  static const char name[] = "application_attach";
  static const char name_with_crc[] = "application_attach_81d4f974";
  static vapi_message_desc_t __vapi_metadata_application_attach = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_application_attach, payload),
    sizeof(vapi_msg_application_attach),
    (generic_swap_fn_t)vapi_msg_application_attach_hton,
    (generic_swap_fn_t)vapi_msg_application_attach_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_attach = vapi_register_msg(&__vapi_metadata_application_attach);
  VAPI_DBG("Assigned msg id %d to application_attach", vapi_msg_id_application_attach);
}
#endif

#ifndef defined_vapi_msg_unbind_sock_reply
#define defined_vapi_msg_unbind_sock_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_unbind_sock_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_unbind_sock_reply payload;
} vapi_msg_unbind_sock_reply;

static inline void vapi_msg_unbind_sock_reply_payload_hton(vapi_payload_unbind_sock_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_unbind_sock_reply_payload_ntoh(vapi_payload_unbind_sock_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_unbind_sock_reply_hton(vapi_msg_unbind_sock_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_sock_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_unbind_sock_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_unbind_sock_reply_ntoh(vapi_msg_unbind_sock_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_sock_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_unbind_sock_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_unbind_sock_reply_msg_size(vapi_msg_unbind_sock_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_unbind_sock_reply()
{
  static const char name[] = "unbind_sock_reply";
  static const char name_with_crc[] = "unbind_sock_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_unbind_sock_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_unbind_sock_reply, payload),
    sizeof(vapi_msg_unbind_sock_reply),
    (generic_swap_fn_t)vapi_msg_unbind_sock_reply_hton,
    (generic_swap_fn_t)vapi_msg_unbind_sock_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_unbind_sock_reply = vapi_register_msg(&__vapi_metadata_unbind_sock_reply);
  VAPI_DBG("Assigned msg id %d to unbind_sock_reply", vapi_msg_id_unbind_sock_reply);
}

static inline void vapi_set_vapi_msg_unbind_sock_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_unbind_sock_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_unbind_sock_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_unbind_sock
#define defined_vapi_msg_unbind_sock
typedef struct __attribute__ ((__packed__)) {
  u32 wrk_index;
  u64 handle; 
} vapi_payload_unbind_sock;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_unbind_sock payload;
} vapi_msg_unbind_sock;

static inline void vapi_msg_unbind_sock_payload_hton(vapi_payload_unbind_sock *payload)
{
  payload->wrk_index = htobe32(payload->wrk_index);
  payload->handle = htobe64(payload->handle);
}

static inline void vapi_msg_unbind_sock_payload_ntoh(vapi_payload_unbind_sock *payload)
{
  payload->wrk_index = be32toh(payload->wrk_index);
  payload->handle = be64toh(payload->handle);
}

static inline void vapi_msg_unbind_sock_hton(vapi_msg_unbind_sock *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_sock'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_unbind_sock_payload_hton(&msg->payload);
}

static inline void vapi_msg_unbind_sock_ntoh(vapi_msg_unbind_sock *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_sock'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_unbind_sock_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_unbind_sock_msg_size(vapi_msg_unbind_sock *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_unbind_sock* vapi_alloc_unbind_sock(struct vapi_ctx_s *ctx)
{
  vapi_msg_unbind_sock *msg = NULL;
  const size_t size = sizeof(vapi_msg_unbind_sock);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_unbind_sock*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_unbind_sock);

  return msg;
}

static inline vapi_error_e vapi_unbind_sock(struct vapi_ctx_s *ctx,
  vapi_msg_unbind_sock *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_unbind_sock_reply *reply),
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
  vapi_msg_unbind_sock_hton(msg);
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
    vapi_msg_unbind_sock_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_unbind_sock()
{
  static const char name[] = "unbind_sock";
  static const char name_with_crc[] = "unbind_sock_08880908";
  static vapi_message_desc_t __vapi_metadata_unbind_sock = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_unbind_sock, payload),
    sizeof(vapi_msg_unbind_sock),
    (generic_swap_fn_t)vapi_msg_unbind_sock_hton,
    (generic_swap_fn_t)vapi_msg_unbind_sock_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_unbind_sock = vapi_register_msg(&__vapi_metadata_unbind_sock);
  VAPI_DBG("Assigned msg id %d to unbind_sock", vapi_msg_id_unbind_sock);
}
#endif

#ifndef defined_vapi_msg_connect_uri_reply
#define defined_vapi_msg_connect_uri_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_connect_uri_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_connect_uri_reply payload;
} vapi_msg_connect_uri_reply;

static inline void vapi_msg_connect_uri_reply_payload_hton(vapi_payload_connect_uri_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_connect_uri_reply_payload_ntoh(vapi_payload_connect_uri_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_connect_uri_reply_hton(vapi_msg_connect_uri_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_uri_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_connect_uri_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_connect_uri_reply_ntoh(vapi_msg_connect_uri_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_uri_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_connect_uri_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_connect_uri_reply_msg_size(vapi_msg_connect_uri_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_connect_uri_reply()
{
  static const char name[] = "connect_uri_reply";
  static const char name_with_crc[] = "connect_uri_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_connect_uri_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_connect_uri_reply, payload),
    sizeof(vapi_msg_connect_uri_reply),
    (generic_swap_fn_t)vapi_msg_connect_uri_reply_hton,
    (generic_swap_fn_t)vapi_msg_connect_uri_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_connect_uri_reply = vapi_register_msg(&__vapi_metadata_connect_uri_reply);
  VAPI_DBG("Assigned msg id %d to connect_uri_reply", vapi_msg_id_connect_uri_reply);
}

static inline void vapi_set_vapi_msg_connect_uri_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_connect_uri_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_connect_uri_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_session_rules_details
#define defined_vapi_msg_session_rules_details
typedef struct __attribute__ ((__packed__)) {
  u8 transport_proto;
  u8 is_ip4;
  u8 lcl_ip[16];
  u8 lcl_plen;
  u8 rmt_ip[16];
  u8 rmt_plen;
  u16 lcl_port;
  u16 rmt_port;
  u32 action_index;
  u32 appns_index;
  u8 scope;
  u8 tag[64]; 
} vapi_payload_session_rules_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_session_rules_details payload;
} vapi_msg_session_rules_details;

static inline void vapi_msg_session_rules_details_payload_hton(vapi_payload_session_rules_details *payload)
{
  payload->lcl_port = htobe16(payload->lcl_port);
  payload->rmt_port = htobe16(payload->rmt_port);
  payload->action_index = htobe32(payload->action_index);
  payload->appns_index = htobe32(payload->appns_index);
}

static inline void vapi_msg_session_rules_details_payload_ntoh(vapi_payload_session_rules_details *payload)
{
  payload->lcl_port = be16toh(payload->lcl_port);
  payload->rmt_port = be16toh(payload->rmt_port);
  payload->action_index = be32toh(payload->action_index);
  payload->appns_index = be32toh(payload->appns_index);
}

static inline void vapi_msg_session_rules_details_hton(vapi_msg_session_rules_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rules_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_session_rules_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_session_rules_details_ntoh(vapi_msg_session_rules_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rules_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_session_rules_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_session_rules_details_msg_size(vapi_msg_session_rules_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_session_rules_details()
{
  static const char name[] = "session_rules_details";
  static const char name_with_crc[] = "session_rules_details_a52b0e96";
  static vapi_message_desc_t __vapi_metadata_session_rules_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_session_rules_details, payload),
    sizeof(vapi_msg_session_rules_details),
    (generic_swap_fn_t)vapi_msg_session_rules_details_hton,
    (generic_swap_fn_t)vapi_msg_session_rules_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_session_rules_details = vapi_register_msg(&__vapi_metadata_session_rules_details);
  VAPI_DBG("Assigned msg id %d to session_rules_details", vapi_msg_id_session_rules_details);
}

static inline void vapi_set_vapi_msg_session_rules_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_session_rules_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_session_rules_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_map_another_segment_reply
#define defined_vapi_msg_map_another_segment_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_map_another_segment_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_map_another_segment_reply payload;
} vapi_msg_map_another_segment_reply;

static inline void vapi_msg_map_another_segment_reply_payload_hton(vapi_payload_map_another_segment_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_map_another_segment_reply_payload_ntoh(vapi_payload_map_another_segment_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_map_another_segment_reply_hton(vapi_msg_map_another_segment_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_map_another_segment_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_map_another_segment_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_map_another_segment_reply_ntoh(vapi_msg_map_another_segment_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_map_another_segment_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_map_another_segment_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_map_another_segment_reply_msg_size(vapi_msg_map_another_segment_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_map_another_segment_reply()
{
  static const char name[] = "map_another_segment_reply";
  static const char name_with_crc[] = "map_another_segment_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_map_another_segment_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_map_another_segment_reply, payload),
    sizeof(vapi_msg_map_another_segment_reply),
    (generic_swap_fn_t)vapi_msg_map_another_segment_reply_hton,
    (generic_swap_fn_t)vapi_msg_map_another_segment_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_map_another_segment_reply = vapi_register_msg(&__vapi_metadata_map_another_segment_reply);
  VAPI_DBG("Assigned msg id %d to map_another_segment_reply", vapi_msg_id_map_another_segment_reply);
}

static inline void vapi_set_vapi_msg_map_another_segment_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_map_another_segment_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_map_another_segment_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_map_another_segment
#define defined_vapi_msg_map_another_segment
typedef struct __attribute__ ((__packed__)) {
  u8 fd_flags;
  u32 segment_size;
  u8 segment_name[128];
  u64 segment_handle; 
} vapi_payload_map_another_segment;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_map_another_segment payload;
} vapi_msg_map_another_segment;

static inline void vapi_msg_map_another_segment_payload_hton(vapi_payload_map_another_segment *payload)
{
  payload->segment_size = htobe32(payload->segment_size);
  payload->segment_handle = htobe64(payload->segment_handle);
}

static inline void vapi_msg_map_another_segment_payload_ntoh(vapi_payload_map_another_segment *payload)
{
  payload->segment_size = be32toh(payload->segment_size);
  payload->segment_handle = be64toh(payload->segment_handle);
}

static inline void vapi_msg_map_another_segment_hton(vapi_msg_map_another_segment *msg)
{
  VAPI_DBG("Swapping `vapi_msg_map_another_segment'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_map_another_segment_payload_hton(&msg->payload);
}

static inline void vapi_msg_map_another_segment_ntoh(vapi_msg_map_another_segment *msg)
{
  VAPI_DBG("Swapping `vapi_msg_map_another_segment'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_map_another_segment_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_map_another_segment_msg_size(vapi_msg_map_another_segment *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_map_another_segment* vapi_alloc_map_another_segment(struct vapi_ctx_s *ctx)
{
  vapi_msg_map_another_segment *msg = NULL;
  const size_t size = sizeof(vapi_msg_map_another_segment);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_map_another_segment*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_map_another_segment);

  return msg;
}

static inline vapi_error_e vapi_map_another_segment(struct vapi_ctx_s *ctx,
  vapi_msg_map_another_segment *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_map_another_segment_reply *reply),
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
  vapi_msg_map_another_segment_hton(msg);
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
    vapi_msg_map_another_segment_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_map_another_segment()
{
  static const char name[] = "map_another_segment";
  static const char name_with_crc[] = "map_another_segment_dc2d630b";
  static vapi_message_desc_t __vapi_metadata_map_another_segment = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_map_another_segment, payload),
    sizeof(vapi_msg_map_another_segment),
    (generic_swap_fn_t)vapi_msg_map_another_segment_hton,
    (generic_swap_fn_t)vapi_msg_map_another_segment_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_map_another_segment = vapi_register_msg(&__vapi_metadata_map_another_segment);
  VAPI_DBG("Assigned msg id %d to map_another_segment", vapi_msg_id_map_another_segment);
}
#endif

#ifndef defined_vapi_msg_disconnect_session_reply
#define defined_vapi_msg_disconnect_session_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u64 handle; 
} vapi_payload_disconnect_session_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_disconnect_session_reply payload;
} vapi_msg_disconnect_session_reply;

static inline void vapi_msg_disconnect_session_reply_payload_hton(vapi_payload_disconnect_session_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->handle = htobe64(payload->handle);
}

static inline void vapi_msg_disconnect_session_reply_payload_ntoh(vapi_payload_disconnect_session_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->handle = be64toh(payload->handle);
}

static inline void vapi_msg_disconnect_session_reply_hton(vapi_msg_disconnect_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_disconnect_session_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_disconnect_session_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_disconnect_session_reply_ntoh(vapi_msg_disconnect_session_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_disconnect_session_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_disconnect_session_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_disconnect_session_reply_msg_size(vapi_msg_disconnect_session_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_disconnect_session_reply()
{
  static const char name[] = "disconnect_session_reply";
  static const char name_with_crc[] = "disconnect_session_reply_d6960a03";
  static vapi_message_desc_t __vapi_metadata_disconnect_session_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_disconnect_session_reply, payload),
    sizeof(vapi_msg_disconnect_session_reply),
    (generic_swap_fn_t)vapi_msg_disconnect_session_reply_hton,
    (generic_swap_fn_t)vapi_msg_disconnect_session_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_disconnect_session_reply = vapi_register_msg(&__vapi_metadata_disconnect_session_reply);
  VAPI_DBG("Assigned msg id %d to disconnect_session_reply", vapi_msg_id_disconnect_session_reply);
}

static inline void vapi_set_vapi_msg_disconnect_session_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_disconnect_session_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_disconnect_session_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_worker_add_del_reply
#define defined_vapi_msg_app_worker_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 wrk_index;
  u64 app_event_queue_address;
  u8 n_fds;
  u8 fd_flags;
  u8 segment_name_length;
  u8 segment_name[128];
  u64 segment_handle;
  u8 is_add; 
} vapi_payload_app_worker_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_app_worker_add_del_reply payload;
} vapi_msg_app_worker_add_del_reply;

static inline void vapi_msg_app_worker_add_del_reply_payload_hton(vapi_payload_app_worker_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->wrk_index = htobe32(payload->wrk_index);
  payload->app_event_queue_address = htobe64(payload->app_event_queue_address);
  payload->segment_handle = htobe64(payload->segment_handle);
}

static inline void vapi_msg_app_worker_add_del_reply_payload_ntoh(vapi_payload_app_worker_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->wrk_index = be32toh(payload->wrk_index);
  payload->app_event_queue_address = be64toh(payload->app_event_queue_address);
  payload->segment_handle = be64toh(payload->segment_handle);
}

static inline void vapi_msg_app_worker_add_del_reply_hton(vapi_msg_app_worker_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_worker_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_app_worker_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_worker_add_del_reply_ntoh(vapi_msg_app_worker_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_worker_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_app_worker_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_worker_add_del_reply_msg_size(vapi_msg_app_worker_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_app_worker_add_del_reply()
{
  static const char name[] = "app_worker_add_del_reply";
  static const char name_with_crc[] = "app_worker_add_del_reply_56b21abc";
  static vapi_message_desc_t __vapi_metadata_app_worker_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_app_worker_add_del_reply, payload),
    sizeof(vapi_msg_app_worker_add_del_reply),
    (generic_swap_fn_t)vapi_msg_app_worker_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_app_worker_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_worker_add_del_reply = vapi_register_msg(&__vapi_metadata_app_worker_add_del_reply);
  VAPI_DBG("Assigned msg id %d to app_worker_add_del_reply", vapi_msg_id_app_worker_add_del_reply);
}

static inline void vapi_set_vapi_msg_app_worker_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_app_worker_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_app_worker_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_application_tls_key_add_reply
#define defined_vapi_msg_application_tls_key_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_application_tls_key_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_application_tls_key_add_reply payload;
} vapi_msg_application_tls_key_add_reply;

static inline void vapi_msg_application_tls_key_add_reply_payload_hton(vapi_payload_application_tls_key_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_application_tls_key_add_reply_payload_ntoh(vapi_payload_application_tls_key_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_application_tls_key_add_reply_hton(vapi_msg_application_tls_key_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_key_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_application_tls_key_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_application_tls_key_add_reply_ntoh(vapi_msg_application_tls_key_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_key_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_application_tls_key_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_application_tls_key_add_reply_msg_size(vapi_msg_application_tls_key_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_application_tls_key_add_reply()
{
  static const char name[] = "application_tls_key_add_reply";
  static const char name_with_crc[] = "application_tls_key_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_application_tls_key_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_application_tls_key_add_reply, payload),
    sizeof(vapi_msg_application_tls_key_add_reply),
    (generic_swap_fn_t)vapi_msg_application_tls_key_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_application_tls_key_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_tls_key_add_reply = vapi_register_msg(&__vapi_metadata_application_tls_key_add_reply);
  VAPI_DBG("Assigned msg id %d to application_tls_key_add_reply", vapi_msg_id_application_tls_key_add_reply);
}

static inline void vapi_set_vapi_msg_application_tls_key_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_application_tls_key_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_application_tls_key_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_cut_through_registration_add_reply
#define defined_vapi_msg_app_cut_through_registration_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_app_cut_through_registration_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_app_cut_through_registration_add_reply payload;
} vapi_msg_app_cut_through_registration_add_reply;

static inline void vapi_msg_app_cut_through_registration_add_reply_payload_hton(vapi_payload_app_cut_through_registration_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_app_cut_through_registration_add_reply_payload_ntoh(vapi_payload_app_cut_through_registration_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_app_cut_through_registration_add_reply_hton(vapi_msg_app_cut_through_registration_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_cut_through_registration_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_app_cut_through_registration_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_cut_through_registration_add_reply_ntoh(vapi_msg_app_cut_through_registration_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_cut_through_registration_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_app_cut_through_registration_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_cut_through_registration_add_reply_msg_size(vapi_msg_app_cut_through_registration_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_app_cut_through_registration_add_reply()
{
  static const char name[] = "app_cut_through_registration_add_reply";
  static const char name_with_crc[] = "app_cut_through_registration_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_app_cut_through_registration_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_app_cut_through_registration_add_reply, payload),
    sizeof(vapi_msg_app_cut_through_registration_add_reply),
    (generic_swap_fn_t)vapi_msg_app_cut_through_registration_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_app_cut_through_registration_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_cut_through_registration_add_reply = vapi_register_msg(&__vapi_metadata_app_cut_through_registration_add_reply);
  VAPI_DBG("Assigned msg id %d to app_cut_through_registration_add_reply", vapi_msg_id_app_cut_through_registration_add_reply);
}

static inline void vapi_set_vapi_msg_app_cut_through_registration_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_app_cut_through_registration_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_app_cut_through_registration_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_session_rules_dump
#define defined_vapi_msg_session_rules_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_session_rules_dump;

static inline void vapi_msg_session_rules_dump_hton(vapi_msg_session_rules_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rules_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_session_rules_dump_ntoh(vapi_msg_session_rules_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rules_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_session_rules_dump_msg_size(vapi_msg_session_rules_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_session_rules_dump* vapi_alloc_session_rules_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_session_rules_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_session_rules_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_session_rules_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_session_rules_dump);

  return msg;
}

static inline vapi_error_e vapi_session_rules_dump(struct vapi_ctx_s *ctx,
  vapi_msg_session_rules_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_session_rules_details *reply),
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
  vapi_msg_session_rules_dump_hton(msg);
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
    vapi_msg_session_rules_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_session_rules_dump()
{
  static const char name[] = "session_rules_dump";
  static const char name_with_crc[] = "session_rules_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_session_rules_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_session_rules_dump),
    (generic_swap_fn_t)vapi_msg_session_rules_dump_hton,
    (generic_swap_fn_t)vapi_msg_session_rules_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_session_rules_dump = vapi_register_msg(&__vapi_metadata_session_rules_dump);
  VAPI_DBG("Assigned msg id %d to session_rules_dump", vapi_msg_id_session_rules_dump);
}
#endif

#ifndef defined_vapi_msg_application_tls_cert_add_reply
#define defined_vapi_msg_application_tls_cert_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_application_tls_cert_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_application_tls_cert_add_reply payload;
} vapi_msg_application_tls_cert_add_reply;

static inline void vapi_msg_application_tls_cert_add_reply_payload_hton(vapi_payload_application_tls_cert_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_application_tls_cert_add_reply_payload_ntoh(vapi_payload_application_tls_cert_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_application_tls_cert_add_reply_hton(vapi_msg_application_tls_cert_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_cert_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_application_tls_cert_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_application_tls_cert_add_reply_ntoh(vapi_msg_application_tls_cert_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_cert_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_application_tls_cert_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_application_tls_cert_add_reply_msg_size(vapi_msg_application_tls_cert_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_application_tls_cert_add_reply()
{
  static const char name[] = "application_tls_cert_add_reply";
  static const char name_with_crc[] = "application_tls_cert_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_application_tls_cert_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_application_tls_cert_add_reply, payload),
    sizeof(vapi_msg_application_tls_cert_add_reply),
    (generic_swap_fn_t)vapi_msg_application_tls_cert_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_application_tls_cert_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_tls_cert_add_reply = vapi_register_msg(&__vapi_metadata_application_tls_cert_add_reply);
  VAPI_DBG("Assigned msg id %d to application_tls_cert_add_reply", vapi_msg_id_application_tls_cert_add_reply);
}

static inline void vapi_set_vapi_msg_application_tls_cert_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_application_tls_cert_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_application_tls_cert_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_unmap_segment_reply
#define defined_vapi_msg_unmap_segment_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_unmap_segment_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_unmap_segment_reply payload;
} vapi_msg_unmap_segment_reply;

static inline void vapi_msg_unmap_segment_reply_payload_hton(vapi_payload_unmap_segment_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_unmap_segment_reply_payload_ntoh(vapi_payload_unmap_segment_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_unmap_segment_reply_hton(vapi_msg_unmap_segment_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unmap_segment_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_unmap_segment_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_unmap_segment_reply_ntoh(vapi_msg_unmap_segment_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unmap_segment_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_unmap_segment_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_unmap_segment_reply_msg_size(vapi_msg_unmap_segment_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_unmap_segment_reply()
{
  static const char name[] = "unmap_segment_reply";
  static const char name_with_crc[] = "unmap_segment_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_unmap_segment_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_unmap_segment_reply, payload),
    sizeof(vapi_msg_unmap_segment_reply),
    (generic_swap_fn_t)vapi_msg_unmap_segment_reply_hton,
    (generic_swap_fn_t)vapi_msg_unmap_segment_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_unmap_segment_reply = vapi_register_msg(&__vapi_metadata_unmap_segment_reply);
  VAPI_DBG("Assigned msg id %d to unmap_segment_reply", vapi_msg_id_unmap_segment_reply);
}

static inline void vapi_set_vapi_msg_unmap_segment_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_unmap_segment_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_unmap_segment_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_unmap_segment
#define defined_vapi_msg_unmap_segment
typedef struct __attribute__ ((__packed__)) {
  u64 segment_handle; 
} vapi_payload_unmap_segment;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_unmap_segment payload;
} vapi_msg_unmap_segment;

static inline void vapi_msg_unmap_segment_payload_hton(vapi_payload_unmap_segment *payload)
{
  payload->segment_handle = htobe64(payload->segment_handle);
}

static inline void vapi_msg_unmap_segment_payload_ntoh(vapi_payload_unmap_segment *payload)
{
  payload->segment_handle = be64toh(payload->segment_handle);
}

static inline void vapi_msg_unmap_segment_hton(vapi_msg_unmap_segment *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unmap_segment'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_unmap_segment_payload_hton(&msg->payload);
}

static inline void vapi_msg_unmap_segment_ntoh(vapi_msg_unmap_segment *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unmap_segment'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_unmap_segment_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_unmap_segment_msg_size(vapi_msg_unmap_segment *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_unmap_segment* vapi_alloc_unmap_segment(struct vapi_ctx_s *ctx)
{
  vapi_msg_unmap_segment *msg = NULL;
  const size_t size = sizeof(vapi_msg_unmap_segment);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_unmap_segment*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_unmap_segment);

  return msg;
}

static inline vapi_error_e vapi_unmap_segment(struct vapi_ctx_s *ctx,
  vapi_msg_unmap_segment *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_unmap_segment_reply *reply),
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
  vapi_msg_unmap_segment_hton(msg);
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
    vapi_msg_unmap_segment_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_unmap_segment()
{
  static const char name[] = "unmap_segment";
  static const char name_with_crc[] = "unmap_segment_f77096f6";
  static vapi_message_desc_t __vapi_metadata_unmap_segment = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_unmap_segment, payload),
    sizeof(vapi_msg_unmap_segment),
    (generic_swap_fn_t)vapi_msg_unmap_segment_hton,
    (generic_swap_fn_t)vapi_msg_unmap_segment_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_unmap_segment = vapi_register_msg(&__vapi_metadata_unmap_segment);
  VAPI_DBG("Assigned msg id %d to unmap_segment", vapi_msg_id_unmap_segment);
}
#endif

#ifndef defined_vapi_msg_connect_sock_reply
#define defined_vapi_msg_connect_sock_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_connect_sock_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_connect_sock_reply payload;
} vapi_msg_connect_sock_reply;

static inline void vapi_msg_connect_sock_reply_payload_hton(vapi_payload_connect_sock_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_connect_sock_reply_payload_ntoh(vapi_payload_connect_sock_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_connect_sock_reply_hton(vapi_msg_connect_sock_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_sock_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_connect_sock_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_connect_sock_reply_ntoh(vapi_msg_connect_sock_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_sock_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_connect_sock_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_connect_sock_reply_msg_size(vapi_msg_connect_sock_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_connect_sock_reply()
{
  static const char name[] = "connect_sock_reply";
  static const char name_with_crc[] = "connect_sock_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_connect_sock_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_connect_sock_reply, payload),
    sizeof(vapi_msg_connect_sock_reply),
    (generic_swap_fn_t)vapi_msg_connect_sock_reply_hton,
    (generic_swap_fn_t)vapi_msg_connect_sock_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_connect_sock_reply = vapi_register_msg(&__vapi_metadata_connect_sock_reply);
  VAPI_DBG("Assigned msg id %d to connect_sock_reply", vapi_msg_id_connect_sock_reply);
}

static inline void vapi_set_vapi_msg_connect_sock_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_connect_sock_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_connect_sock_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_connect_sock
#define defined_vapi_msg_connect_sock
typedef struct __attribute__ ((__packed__)) {
  u32 wrk_index;
  u64 client_queue_address;
  u64 options[16];
  u32 vrf;
  u8 is_ip4;
  u8 ip[16];
  u16 port;
  u8 proto;
  u64 parent_handle;
  u8 hostname_len;
  u8 hostname[0]; 
} vapi_payload_connect_sock;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_connect_sock payload;
} vapi_msg_connect_sock;

static inline void vapi_msg_connect_sock_payload_hton(vapi_payload_connect_sock *payload)
{
  payload->wrk_index = htobe32(payload->wrk_index);
  payload->client_queue_address = htobe64(payload->client_queue_address);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = htobe64(payload->options[i]); } } while(0);
  payload->vrf = htobe32(payload->vrf);
  payload->port = htobe16(payload->port);
  payload->parent_handle = htobe64(payload->parent_handle);
}

static inline void vapi_msg_connect_sock_payload_ntoh(vapi_payload_connect_sock *payload)
{
  payload->wrk_index = be32toh(payload->wrk_index);
  payload->client_queue_address = be64toh(payload->client_queue_address);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = be64toh(payload->options[i]); } } while(0);
  payload->vrf = be32toh(payload->vrf);
  payload->port = be16toh(payload->port);
  payload->parent_handle = be64toh(payload->parent_handle);
}

static inline void vapi_msg_connect_sock_hton(vapi_msg_connect_sock *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_sock'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_connect_sock_payload_hton(&msg->payload);
}

static inline void vapi_msg_connect_sock_ntoh(vapi_msg_connect_sock *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_sock'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_connect_sock_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_connect_sock_msg_size(vapi_msg_connect_sock *msg)
{
  return sizeof(*msg)+ msg->payload.hostname_len * sizeof(msg->payload.hostname[0]);
}

static inline vapi_msg_connect_sock* vapi_alloc_connect_sock(struct vapi_ctx_s *ctx, size_t _hostname_array_size)
{
  vapi_msg_connect_sock *msg = NULL;
  const size_t size = sizeof(vapi_msg_connect_sock) + sizeof(msg->payload.hostname[0]) * _hostname_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_connect_sock*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_connect_sock);
  msg->payload.hostname_len = _hostname_array_size;

  return msg;
}

static inline vapi_error_e vapi_connect_sock(struct vapi_ctx_s *ctx,
  vapi_msg_connect_sock *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_connect_sock_reply *reply),
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
  vapi_msg_connect_sock_hton(msg);
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
    vapi_msg_connect_sock_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_connect_sock()
{
  static const char name[] = "connect_sock";
  static const char name_with_crc[] = "connect_sock_d2b460ca";
  static vapi_message_desc_t __vapi_metadata_connect_sock = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_connect_sock, payload),
    sizeof(vapi_msg_connect_sock),
    (generic_swap_fn_t)vapi_msg_connect_sock_hton,
    (generic_swap_fn_t)vapi_msg_connect_sock_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_connect_sock = vapi_register_msg(&__vapi_metadata_connect_sock);
  VAPI_DBG("Assigned msg id %d to connect_sock", vapi_msg_id_connect_sock);
}
#endif

#ifndef defined_vapi_msg_unbind_uri_reply
#define defined_vapi_msg_unbind_uri_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_unbind_uri_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_unbind_uri_reply payload;
} vapi_msg_unbind_uri_reply;

static inline void vapi_msg_unbind_uri_reply_payload_hton(vapi_payload_unbind_uri_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_unbind_uri_reply_payload_ntoh(vapi_payload_unbind_uri_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_unbind_uri_reply_hton(vapi_msg_unbind_uri_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_uri_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_unbind_uri_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_unbind_uri_reply_ntoh(vapi_msg_unbind_uri_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_uri_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_unbind_uri_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_unbind_uri_reply_msg_size(vapi_msg_unbind_uri_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_unbind_uri_reply()
{
  static const char name[] = "unbind_uri_reply";
  static const char name_with_crc[] = "unbind_uri_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_unbind_uri_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_unbind_uri_reply, payload),
    sizeof(vapi_msg_unbind_uri_reply),
    (generic_swap_fn_t)vapi_msg_unbind_uri_reply_hton,
    (generic_swap_fn_t)vapi_msg_unbind_uri_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_unbind_uri_reply = vapi_register_msg(&__vapi_metadata_unbind_uri_reply);
  VAPI_DBG("Assigned msg id %d to unbind_uri_reply", vapi_msg_id_unbind_uri_reply);
}

static inline void vapi_set_vapi_msg_unbind_uri_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_unbind_uri_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_unbind_uri_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_unbind_uri
#define defined_vapi_msg_unbind_uri
typedef struct __attribute__ ((__packed__)) {
  u8 uri[128]; 
} vapi_payload_unbind_uri;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_unbind_uri payload;
} vapi_msg_unbind_uri;

static inline void vapi_msg_unbind_uri_payload_hton(vapi_payload_unbind_uri *payload)
{

}

static inline void vapi_msg_unbind_uri_payload_ntoh(vapi_payload_unbind_uri *payload)
{

}

static inline void vapi_msg_unbind_uri_hton(vapi_msg_unbind_uri *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_uri'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_unbind_uri_payload_hton(&msg->payload);
}

static inline void vapi_msg_unbind_uri_ntoh(vapi_msg_unbind_uri *msg)
{
  VAPI_DBG("Swapping `vapi_msg_unbind_uri'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_unbind_uri_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_unbind_uri_msg_size(vapi_msg_unbind_uri *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_unbind_uri* vapi_alloc_unbind_uri(struct vapi_ctx_s *ctx)
{
  vapi_msg_unbind_uri *msg = NULL;
  const size_t size = sizeof(vapi_msg_unbind_uri);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_unbind_uri*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_unbind_uri);

  return msg;
}

static inline vapi_error_e vapi_unbind_uri(struct vapi_ctx_s *ctx,
  vapi_msg_unbind_uri *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_unbind_uri_reply *reply),
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
  vapi_msg_unbind_uri_hton(msg);
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
    vapi_msg_unbind_uri_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_unbind_uri()
{
  static const char name[] = "unbind_uri";
  static const char name_with_crc[] = "unbind_uri_294cf07d";
  static vapi_message_desc_t __vapi_metadata_unbind_uri = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_unbind_uri, payload),
    sizeof(vapi_msg_unbind_uri),
    (generic_swap_fn_t)vapi_msg_unbind_uri_hton,
    (generic_swap_fn_t)vapi_msg_unbind_uri_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_unbind_uri = vapi_register_msg(&__vapi_metadata_unbind_uri);
  VAPI_DBG("Assigned msg id %d to unbind_uri", vapi_msg_id_unbind_uri);
}
#endif

#ifndef defined_vapi_msg_session_enable_disable_reply
#define defined_vapi_msg_session_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_session_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_session_enable_disable_reply payload;
} vapi_msg_session_enable_disable_reply;

static inline void vapi_msg_session_enable_disable_reply_payload_hton(vapi_payload_session_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_session_enable_disable_reply_payload_ntoh(vapi_payload_session_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_session_enable_disable_reply_hton(vapi_msg_session_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_session_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_session_enable_disable_reply_ntoh(vapi_msg_session_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_session_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_session_enable_disable_reply_msg_size(vapi_msg_session_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_session_enable_disable_reply()
{
  static const char name[] = "session_enable_disable_reply";
  static const char name_with_crc[] = "session_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_session_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_session_enable_disable_reply, payload),
    sizeof(vapi_msg_session_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_session_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_session_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_session_enable_disable_reply = vapi_register_msg(&__vapi_metadata_session_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to session_enable_disable_reply", vapi_msg_id_session_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_session_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_session_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_session_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_application_tls_key_add
#define defined_vapi_msg_application_tls_key_add
typedef struct __attribute__ ((__packed__)) {
  u32 app_index;
  u16 key_len;
  u8 key[0]; 
} vapi_payload_application_tls_key_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_application_tls_key_add payload;
} vapi_msg_application_tls_key_add;

static inline void vapi_msg_application_tls_key_add_payload_hton(vapi_payload_application_tls_key_add *payload)
{
  payload->app_index = htobe32(payload->app_index);
  payload->key_len = htobe16(payload->key_len);
}

static inline void vapi_msg_application_tls_key_add_payload_ntoh(vapi_payload_application_tls_key_add *payload)
{
  payload->app_index = be32toh(payload->app_index);
  payload->key_len = be16toh(payload->key_len);
}

static inline void vapi_msg_application_tls_key_add_hton(vapi_msg_application_tls_key_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_key_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_application_tls_key_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_application_tls_key_add_ntoh(vapi_msg_application_tls_key_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_key_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_application_tls_key_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_application_tls_key_add_msg_size(vapi_msg_application_tls_key_add *msg)
{
  return sizeof(*msg)+ msg->payload.key_len * sizeof(msg->payload.key[0]);
}

static inline vapi_msg_application_tls_key_add* vapi_alloc_application_tls_key_add(struct vapi_ctx_s *ctx, size_t _key_array_size)
{
  vapi_msg_application_tls_key_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_application_tls_key_add) + sizeof(msg->payload.key[0]) * _key_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_application_tls_key_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_application_tls_key_add);
  msg->payload.key_len = _key_array_size;

  return msg;
}

static inline vapi_error_e vapi_application_tls_key_add(struct vapi_ctx_s *ctx,
  vapi_msg_application_tls_key_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_application_tls_key_add_reply *reply),
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
  vapi_msg_application_tls_key_add_hton(msg);
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
    vapi_msg_application_tls_key_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_application_tls_key_add()
{
  static const char name[] = "application_tls_key_add";
  static const char name_with_crc[] = "application_tls_key_add_5eaf70cd";
  static vapi_message_desc_t __vapi_metadata_application_tls_key_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_application_tls_key_add, payload),
    sizeof(vapi_msg_application_tls_key_add),
    (generic_swap_fn_t)vapi_msg_application_tls_key_add_hton,
    (generic_swap_fn_t)vapi_msg_application_tls_key_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_tls_key_add = vapi_register_msg(&__vapi_metadata_application_tls_key_add);
  VAPI_DBG("Assigned msg id %d to application_tls_key_add", vapi_msg_id_application_tls_key_add);
}
#endif

#ifndef defined_vapi_msg_bind_sock_reply
#define defined_vapi_msg_bind_sock_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bind_sock_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bind_sock_reply payload;
} vapi_msg_bind_sock_reply;

static inline void vapi_msg_bind_sock_reply_payload_hton(vapi_payload_bind_sock_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bind_sock_reply_payload_ntoh(vapi_payload_bind_sock_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bind_sock_reply_hton(vapi_msg_bind_sock_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_sock_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bind_sock_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bind_sock_reply_ntoh(vapi_msg_bind_sock_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_sock_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bind_sock_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bind_sock_reply_msg_size(vapi_msg_bind_sock_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bind_sock_reply()
{
  static const char name[] = "bind_sock_reply";
  static const char name_with_crc[] = "bind_sock_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bind_sock_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bind_sock_reply, payload),
    sizeof(vapi_msg_bind_sock_reply),
    (generic_swap_fn_t)vapi_msg_bind_sock_reply_hton,
    (generic_swap_fn_t)vapi_msg_bind_sock_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bind_sock_reply = vapi_register_msg(&__vapi_metadata_bind_sock_reply);
  VAPI_DBG("Assigned msg id %d to bind_sock_reply", vapi_msg_id_bind_sock_reply);
}

static inline void vapi_set_vapi_msg_bind_sock_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bind_sock_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bind_sock_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bind_sock
#define defined_vapi_msg_bind_sock
typedef struct __attribute__ ((__packed__)) {
  u32 wrk_index;
  u32 vrf;
  u8 is_ip4;
  u8 ip[16];
  u16 port;
  u8 proto;
  u64 options[16]; 
} vapi_payload_bind_sock;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bind_sock payload;
} vapi_msg_bind_sock;

static inline void vapi_msg_bind_sock_payload_hton(vapi_payload_bind_sock *payload)
{
  payload->wrk_index = htobe32(payload->wrk_index);
  payload->vrf = htobe32(payload->vrf);
  payload->port = htobe16(payload->port);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = htobe64(payload->options[i]); } } while(0);
}

static inline void vapi_msg_bind_sock_payload_ntoh(vapi_payload_bind_sock *payload)
{
  payload->wrk_index = be32toh(payload->wrk_index);
  payload->vrf = be32toh(payload->vrf);
  payload->port = be16toh(payload->port);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = be64toh(payload->options[i]); } } while(0);
}

static inline void vapi_msg_bind_sock_hton(vapi_msg_bind_sock *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_sock'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bind_sock_payload_hton(&msg->payload);
}

static inline void vapi_msg_bind_sock_ntoh(vapi_msg_bind_sock *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_sock'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bind_sock_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bind_sock_msg_size(vapi_msg_bind_sock *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bind_sock* vapi_alloc_bind_sock(struct vapi_ctx_s *ctx)
{
  vapi_msg_bind_sock *msg = NULL;
  const size_t size = sizeof(vapi_msg_bind_sock);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bind_sock*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bind_sock);

  return msg;
}

static inline vapi_error_e vapi_bind_sock(struct vapi_ctx_s *ctx,
  vapi_msg_bind_sock *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bind_sock_reply *reply),
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
  vapi_msg_bind_sock_hton(msg);
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
    vapi_msg_bind_sock_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bind_sock()
{
  static const char name[] = "bind_sock";
  static const char name_with_crc[] = "bind_sock_0394633f";
  static vapi_message_desc_t __vapi_metadata_bind_sock = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bind_sock, payload),
    sizeof(vapi_msg_bind_sock),
    (generic_swap_fn_t)vapi_msg_bind_sock_hton,
    (generic_swap_fn_t)vapi_msg_bind_sock_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bind_sock = vapi_register_msg(&__vapi_metadata_bind_sock);
  VAPI_DBG("Assigned msg id %d to bind_sock", vapi_msg_id_bind_sock);
}
#endif

#ifndef defined_vapi_msg_app_attach_reply
#define defined_vapi_msg_app_attach_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u64 app_mq;
  u64 vpp_ctrl_mq;
  u8 vpp_ctrl_mq_thread;
  u32 app_index;
  u8 n_fds;
  u8 fd_flags;
  u32 segment_size;
  u8 segment_name_length;
  u8 segment_name[128];
  u64 segment_handle; 
} vapi_payload_app_attach_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_app_attach_reply payload;
} vapi_msg_app_attach_reply;

static inline void vapi_msg_app_attach_reply_payload_hton(vapi_payload_app_attach_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->app_mq = htobe64(payload->app_mq);
  payload->vpp_ctrl_mq = htobe64(payload->vpp_ctrl_mq);
  payload->app_index = htobe32(payload->app_index);
  payload->segment_size = htobe32(payload->segment_size);
  payload->segment_handle = htobe64(payload->segment_handle);
}

static inline void vapi_msg_app_attach_reply_payload_ntoh(vapi_payload_app_attach_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->app_mq = be64toh(payload->app_mq);
  payload->vpp_ctrl_mq = be64toh(payload->vpp_ctrl_mq);
  payload->app_index = be32toh(payload->app_index);
  payload->segment_size = be32toh(payload->segment_size);
  payload->segment_handle = be64toh(payload->segment_handle);
}

static inline void vapi_msg_app_attach_reply_hton(vapi_msg_app_attach_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_attach_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_app_attach_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_attach_reply_ntoh(vapi_msg_app_attach_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_attach_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_app_attach_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_attach_reply_msg_size(vapi_msg_app_attach_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_app_attach_reply()
{
  static const char name[] = "app_attach_reply";
  static const char name_with_crc[] = "app_attach_reply_0112f647";
  static vapi_message_desc_t __vapi_metadata_app_attach_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_app_attach_reply, payload),
    sizeof(vapi_msg_app_attach_reply),
    (generic_swap_fn_t)vapi_msg_app_attach_reply_hton,
    (generic_swap_fn_t)vapi_msg_app_attach_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_attach_reply = vapi_register_msg(&__vapi_metadata_app_attach_reply);
  VAPI_DBG("Assigned msg id %d to app_attach_reply", vapi_msg_id_app_attach_reply);
}

static inline void vapi_set_vapi_msg_app_attach_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_app_attach_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_app_attach_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_attach
#define defined_vapi_msg_app_attach
typedef struct __attribute__ ((__packed__)) {
  u64 options[16];
  u8 namespace_id_len;
  u8 namespace_id[64]; 
} vapi_payload_app_attach;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_app_attach payload;
} vapi_msg_app_attach;

static inline void vapi_msg_app_attach_payload_hton(vapi_payload_app_attach *payload)
{
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = htobe64(payload->options[i]); } } while(0);
}

static inline void vapi_msg_app_attach_payload_ntoh(vapi_payload_app_attach *payload)
{
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = be64toh(payload->options[i]); } } while(0);
}

static inline void vapi_msg_app_attach_hton(vapi_msg_app_attach *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_attach'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_app_attach_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_attach_ntoh(vapi_msg_app_attach *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_attach'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_app_attach_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_attach_msg_size(vapi_msg_app_attach *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_app_attach* vapi_alloc_app_attach(struct vapi_ctx_s *ctx)
{
  vapi_msg_app_attach *msg = NULL;
  const size_t size = sizeof(vapi_msg_app_attach);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_app_attach*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_app_attach);

  return msg;
}

static inline vapi_error_e vapi_app_attach(struct vapi_ctx_s *ctx,
  vapi_msg_app_attach *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_app_attach_reply *reply),
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
  vapi_msg_app_attach_hton(msg);
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
    vapi_msg_app_attach_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_app_attach()
{
  static const char name[] = "app_attach";
  static const char name_with_crc[] = "app_attach_ed08f4bd";
  static vapi_message_desc_t __vapi_metadata_app_attach = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_app_attach, payload),
    sizeof(vapi_msg_app_attach),
    (generic_swap_fn_t)vapi_msg_app_attach_hton,
    (generic_swap_fn_t)vapi_msg_app_attach_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_attach = vapi_register_msg(&__vapi_metadata_app_attach);
  VAPI_DBG("Assigned msg id %d to app_attach", vapi_msg_id_app_attach);
}
#endif

#ifndef defined_vapi_msg_app_cut_through_registration_add
#define defined_vapi_msg_app_cut_through_registration_add
typedef struct __attribute__ ((__packed__)) {
  u64 evt_q_address;
  u64 peer_evt_q_address;
  u32 wrk_index;
  u8 n_fds;
  u8 fd_flags; 
} vapi_payload_app_cut_through_registration_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_app_cut_through_registration_add payload;
} vapi_msg_app_cut_through_registration_add;

static inline void vapi_msg_app_cut_through_registration_add_payload_hton(vapi_payload_app_cut_through_registration_add *payload)
{
  payload->evt_q_address = htobe64(payload->evt_q_address);
  payload->peer_evt_q_address = htobe64(payload->peer_evt_q_address);
  payload->wrk_index = htobe32(payload->wrk_index);
}

static inline void vapi_msg_app_cut_through_registration_add_payload_ntoh(vapi_payload_app_cut_through_registration_add *payload)
{
  payload->evt_q_address = be64toh(payload->evt_q_address);
  payload->peer_evt_q_address = be64toh(payload->peer_evt_q_address);
  payload->wrk_index = be32toh(payload->wrk_index);
}

static inline void vapi_msg_app_cut_through_registration_add_hton(vapi_msg_app_cut_through_registration_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_cut_through_registration_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_app_cut_through_registration_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_cut_through_registration_add_ntoh(vapi_msg_app_cut_through_registration_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_cut_through_registration_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_app_cut_through_registration_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_cut_through_registration_add_msg_size(vapi_msg_app_cut_through_registration_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_app_cut_through_registration_add* vapi_alloc_app_cut_through_registration_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_app_cut_through_registration_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_app_cut_through_registration_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_app_cut_through_registration_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_app_cut_through_registration_add);

  return msg;
}

static inline vapi_error_e vapi_app_cut_through_registration_add(struct vapi_ctx_s *ctx,
  vapi_msg_app_cut_through_registration_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_app_cut_through_registration_add_reply *reply),
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
  vapi_msg_app_cut_through_registration_add_hton(msg);
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
    vapi_msg_app_cut_through_registration_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_app_cut_through_registration_add()
{
  static const char name[] = "app_cut_through_registration_add";
  static const char name_with_crc[] = "app_cut_through_registration_add_6d73b1b9";
  static vapi_message_desc_t __vapi_metadata_app_cut_through_registration_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_app_cut_through_registration_add, payload),
    sizeof(vapi_msg_app_cut_through_registration_add),
    (generic_swap_fn_t)vapi_msg_app_cut_through_registration_add_hton,
    (generic_swap_fn_t)vapi_msg_app_cut_through_registration_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_cut_through_registration_add = vapi_register_msg(&__vapi_metadata_app_cut_through_registration_add);
  VAPI_DBG("Assigned msg id %d to app_cut_through_registration_add", vapi_msg_id_app_cut_through_registration_add);
}
#endif

#ifndef defined_vapi_msg_bind_uri_reply
#define defined_vapi_msg_bind_uri_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bind_uri_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bind_uri_reply payload;
} vapi_msg_bind_uri_reply;

static inline void vapi_msg_bind_uri_reply_payload_hton(vapi_payload_bind_uri_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bind_uri_reply_payload_ntoh(vapi_payload_bind_uri_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bind_uri_reply_hton(vapi_msg_bind_uri_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_uri_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bind_uri_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bind_uri_reply_ntoh(vapi_msg_bind_uri_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_uri_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bind_uri_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bind_uri_reply_msg_size(vapi_msg_bind_uri_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bind_uri_reply()
{
  static const char name[] = "bind_uri_reply";
  static const char name_with_crc[] = "bind_uri_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bind_uri_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bind_uri_reply, payload),
    sizeof(vapi_msg_bind_uri_reply),
    (generic_swap_fn_t)vapi_msg_bind_uri_reply_hton,
    (generic_swap_fn_t)vapi_msg_bind_uri_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bind_uri_reply = vapi_register_msg(&__vapi_metadata_bind_uri_reply);
  VAPI_DBG("Assigned msg id %d to bind_uri_reply", vapi_msg_id_bind_uri_reply);
}

static inline void vapi_set_vapi_msg_bind_uri_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bind_uri_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bind_uri_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_worker_add_del
#define defined_vapi_msg_app_worker_add_del
typedef struct __attribute__ ((__packed__)) {
  u32 app_index;
  u32 wrk_index;
  u8 is_add; 
} vapi_payload_app_worker_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_app_worker_add_del payload;
} vapi_msg_app_worker_add_del;

static inline void vapi_msg_app_worker_add_del_payload_hton(vapi_payload_app_worker_add_del *payload)
{
  payload->app_index = htobe32(payload->app_index);
  payload->wrk_index = htobe32(payload->wrk_index);
}

static inline void vapi_msg_app_worker_add_del_payload_ntoh(vapi_payload_app_worker_add_del *payload)
{
  payload->app_index = be32toh(payload->app_index);
  payload->wrk_index = be32toh(payload->wrk_index);
}

static inline void vapi_msg_app_worker_add_del_hton(vapi_msg_app_worker_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_worker_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_app_worker_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_worker_add_del_ntoh(vapi_msg_app_worker_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_worker_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_app_worker_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_worker_add_del_msg_size(vapi_msg_app_worker_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_app_worker_add_del* vapi_alloc_app_worker_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_app_worker_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_app_worker_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_app_worker_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_app_worker_add_del);

  return msg;
}

static inline vapi_error_e vapi_app_worker_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_app_worker_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_app_worker_add_del_reply *reply),
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
  vapi_msg_app_worker_add_del_hton(msg);
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
    vapi_msg_app_worker_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_app_worker_add_del()
{
  static const char name[] = "app_worker_add_del";
  static const char name_with_crc[] = "app_worker_add_del_6d2b2279";
  static vapi_message_desc_t __vapi_metadata_app_worker_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_app_worker_add_del, payload),
    sizeof(vapi_msg_app_worker_add_del),
    (generic_swap_fn_t)vapi_msg_app_worker_add_del_hton,
    (generic_swap_fn_t)vapi_msg_app_worker_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_worker_add_del = vapi_register_msg(&__vapi_metadata_app_worker_add_del);
  VAPI_DBG("Assigned msg id %d to app_worker_add_del", vapi_msg_id_app_worker_add_del);
}
#endif

#ifndef defined_vapi_msg_session_rule_add_del_reply
#define defined_vapi_msg_session_rule_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_session_rule_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_session_rule_add_del_reply payload;
} vapi_msg_session_rule_add_del_reply;

static inline void vapi_msg_session_rule_add_del_reply_payload_hton(vapi_payload_session_rule_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_session_rule_add_del_reply_payload_ntoh(vapi_payload_session_rule_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_session_rule_add_del_reply_hton(vapi_msg_session_rule_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rule_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_session_rule_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_session_rule_add_del_reply_ntoh(vapi_msg_session_rule_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rule_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_session_rule_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_session_rule_add_del_reply_msg_size(vapi_msg_session_rule_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_session_rule_add_del_reply()
{
  static const char name[] = "session_rule_add_del_reply";
  static const char name_with_crc[] = "session_rule_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_session_rule_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_session_rule_add_del_reply, payload),
    sizeof(vapi_msg_session_rule_add_del_reply),
    (generic_swap_fn_t)vapi_msg_session_rule_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_session_rule_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_session_rule_add_del_reply = vapi_register_msg(&__vapi_metadata_session_rule_add_del_reply);
  VAPI_DBG("Assigned msg id %d to session_rule_add_del_reply", vapi_msg_id_session_rule_add_del_reply);
}

static inline void vapi_set_vapi_msg_session_rule_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_session_rule_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_session_rule_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_namespace_add_del_reply
#define defined_vapi_msg_app_namespace_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 appns_index; 
} vapi_payload_app_namespace_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_app_namespace_add_del_reply payload;
} vapi_msg_app_namespace_add_del_reply;

static inline void vapi_msg_app_namespace_add_del_reply_payload_hton(vapi_payload_app_namespace_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->appns_index = htobe32(payload->appns_index);
}

static inline void vapi_msg_app_namespace_add_del_reply_payload_ntoh(vapi_payload_app_namespace_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->appns_index = be32toh(payload->appns_index);
}

static inline void vapi_msg_app_namespace_add_del_reply_hton(vapi_msg_app_namespace_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_namespace_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_app_namespace_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_namespace_add_del_reply_ntoh(vapi_msg_app_namespace_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_namespace_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_app_namespace_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_namespace_add_del_reply_msg_size(vapi_msg_app_namespace_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_app_namespace_add_del_reply()
{
  static const char name[] = "app_namespace_add_del_reply";
  static const char name_with_crc[] = "app_namespace_add_del_reply_85137120";
  static vapi_message_desc_t __vapi_metadata_app_namespace_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_app_namespace_add_del_reply, payload),
    sizeof(vapi_msg_app_namespace_add_del_reply),
    (generic_swap_fn_t)vapi_msg_app_namespace_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_app_namespace_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_namespace_add_del_reply = vapi_register_msg(&__vapi_metadata_app_namespace_add_del_reply);
  VAPI_DBG("Assigned msg id %d to app_namespace_add_del_reply", vapi_msg_id_app_namespace_add_del_reply);
}

static inline void vapi_set_vapi_msg_app_namespace_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_app_namespace_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_app_namespace_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_namespace_add_del
#define defined_vapi_msg_app_namespace_add_del
typedef struct __attribute__ ((__packed__)) {
  u64 secret;
  u32 sw_if_index;
  u32 ip4_fib_id;
  u32 ip6_fib_id;
  u8 namespace_id_len;
  u8 namespace_id[64]; 
} vapi_payload_app_namespace_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_app_namespace_add_del payload;
} vapi_msg_app_namespace_add_del;

static inline void vapi_msg_app_namespace_add_del_payload_hton(vapi_payload_app_namespace_add_del *payload)
{
  payload->secret = htobe64(payload->secret);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->ip4_fib_id = htobe32(payload->ip4_fib_id);
  payload->ip6_fib_id = htobe32(payload->ip6_fib_id);
}

static inline void vapi_msg_app_namespace_add_del_payload_ntoh(vapi_payload_app_namespace_add_del *payload)
{
  payload->secret = be64toh(payload->secret);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->ip4_fib_id = be32toh(payload->ip4_fib_id);
  payload->ip6_fib_id = be32toh(payload->ip6_fib_id);
}

static inline void vapi_msg_app_namespace_add_del_hton(vapi_msg_app_namespace_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_namespace_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_app_namespace_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_namespace_add_del_ntoh(vapi_msg_app_namespace_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_namespace_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_app_namespace_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_namespace_add_del_msg_size(vapi_msg_app_namespace_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_app_namespace_add_del* vapi_alloc_app_namespace_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_app_namespace_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_app_namespace_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_app_namespace_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_app_namespace_add_del);

  return msg;
}

static inline vapi_error_e vapi_app_namespace_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_app_namespace_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_app_namespace_add_del_reply *reply),
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
  vapi_msg_app_namespace_add_del_hton(msg);
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
    vapi_msg_app_namespace_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_app_namespace_add_del()
{
  static const char name[] = "app_namespace_add_del";
  static const char name_with_crc[] = "app_namespace_add_del_dd074c65";
  static vapi_message_desc_t __vapi_metadata_app_namespace_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_app_namespace_add_del, payload),
    sizeof(vapi_msg_app_namespace_add_del),
    (generic_swap_fn_t)vapi_msg_app_namespace_add_del_hton,
    (generic_swap_fn_t)vapi_msg_app_namespace_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_namespace_add_del = vapi_register_msg(&__vapi_metadata_app_namespace_add_del);
  VAPI_DBG("Assigned msg id %d to app_namespace_add_del", vapi_msg_id_app_namespace_add_del);
}
#endif

#ifndef defined_vapi_msg_session_rule_add_del
#define defined_vapi_msg_session_rule_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 transport_proto;
  u8 is_ip4;
  u8 lcl_ip[16];
  u8 lcl_plen;
  u8 rmt_ip[16];
  u8 rmt_plen;
  u16 lcl_port;
  u16 rmt_port;
  u32 action_index;
  u8 is_add;
  u32 appns_index;
  u8 scope;
  u8 tag[64]; 
} vapi_payload_session_rule_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_session_rule_add_del payload;
} vapi_msg_session_rule_add_del;

static inline void vapi_msg_session_rule_add_del_payload_hton(vapi_payload_session_rule_add_del *payload)
{
  payload->lcl_port = htobe16(payload->lcl_port);
  payload->rmt_port = htobe16(payload->rmt_port);
  payload->action_index = htobe32(payload->action_index);
  payload->appns_index = htobe32(payload->appns_index);
}

static inline void vapi_msg_session_rule_add_del_payload_ntoh(vapi_payload_session_rule_add_del *payload)
{
  payload->lcl_port = be16toh(payload->lcl_port);
  payload->rmt_port = be16toh(payload->rmt_port);
  payload->action_index = be32toh(payload->action_index);
  payload->appns_index = be32toh(payload->appns_index);
}

static inline void vapi_msg_session_rule_add_del_hton(vapi_msg_session_rule_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rule_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_session_rule_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_session_rule_add_del_ntoh(vapi_msg_session_rule_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_rule_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_session_rule_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_session_rule_add_del_msg_size(vapi_msg_session_rule_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_session_rule_add_del* vapi_alloc_session_rule_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_session_rule_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_session_rule_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_session_rule_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_session_rule_add_del);

  return msg;
}

static inline vapi_error_e vapi_session_rule_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_session_rule_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_session_rule_add_del_reply *reply),
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
  vapi_msg_session_rule_add_del_hton(msg);
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
    vapi_msg_session_rule_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_session_rule_add_del()
{
  static const char name[] = "session_rule_add_del";
  static const char name_with_crc[] = "session_rule_add_del_4ab2eb06";
  static vapi_message_desc_t __vapi_metadata_session_rule_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_session_rule_add_del, payload),
    sizeof(vapi_msg_session_rule_add_del),
    (generic_swap_fn_t)vapi_msg_session_rule_add_del_hton,
    (generic_swap_fn_t)vapi_msg_session_rule_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_session_rule_add_del = vapi_register_msg(&__vapi_metadata_session_rule_add_del);
  VAPI_DBG("Assigned msg id %d to session_rule_add_del", vapi_msg_id_session_rule_add_del);
}
#endif

#ifndef defined_vapi_msg_bind_uri
#define defined_vapi_msg_bind_uri
typedef struct __attribute__ ((__packed__)) {
  u32 accept_cookie;
  u8 uri[128]; 
} vapi_payload_bind_uri;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bind_uri payload;
} vapi_msg_bind_uri;

static inline void vapi_msg_bind_uri_payload_hton(vapi_payload_bind_uri *payload)
{
  payload->accept_cookie = htobe32(payload->accept_cookie);
}

static inline void vapi_msg_bind_uri_payload_ntoh(vapi_payload_bind_uri *payload)
{
  payload->accept_cookie = be32toh(payload->accept_cookie);
}

static inline void vapi_msg_bind_uri_hton(vapi_msg_bind_uri *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_uri'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bind_uri_payload_hton(&msg->payload);
}

static inline void vapi_msg_bind_uri_ntoh(vapi_msg_bind_uri *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bind_uri'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bind_uri_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bind_uri_msg_size(vapi_msg_bind_uri *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bind_uri* vapi_alloc_bind_uri(struct vapi_ctx_s *ctx)
{
  vapi_msg_bind_uri *msg = NULL;
  const size_t size = sizeof(vapi_msg_bind_uri);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bind_uri*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bind_uri);

  return msg;
}

static inline vapi_error_e vapi_bind_uri(struct vapi_ctx_s *ctx,
  vapi_msg_bind_uri *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bind_uri_reply *reply),
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
  vapi_msg_bind_uri_hton(msg);
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
    vapi_msg_bind_uri_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bind_uri()
{
  static const char name[] = "bind_uri";
  static const char name_with_crc[] = "bind_uri_fae140cb";
  static vapi_message_desc_t __vapi_metadata_bind_uri = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bind_uri, payload),
    sizeof(vapi_msg_bind_uri),
    (generic_swap_fn_t)vapi_msg_bind_uri_hton,
    (generic_swap_fn_t)vapi_msg_bind_uri_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bind_uri = vapi_register_msg(&__vapi_metadata_bind_uri);
  VAPI_DBG("Assigned msg id %d to bind_uri", vapi_msg_id_bind_uri);
}
#endif

#ifndef defined_vapi_msg_application_tls_cert_add
#define defined_vapi_msg_application_tls_cert_add
typedef struct __attribute__ ((__packed__)) {
  u32 app_index;
  u16 cert_len;
  u8 cert[0]; 
} vapi_payload_application_tls_cert_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_application_tls_cert_add payload;
} vapi_msg_application_tls_cert_add;

static inline void vapi_msg_application_tls_cert_add_payload_hton(vapi_payload_application_tls_cert_add *payload)
{
  payload->app_index = htobe32(payload->app_index);
  payload->cert_len = htobe16(payload->cert_len);
}

static inline void vapi_msg_application_tls_cert_add_payload_ntoh(vapi_payload_application_tls_cert_add *payload)
{
  payload->app_index = be32toh(payload->app_index);
  payload->cert_len = be16toh(payload->cert_len);
}

static inline void vapi_msg_application_tls_cert_add_hton(vapi_msg_application_tls_cert_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_cert_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_application_tls_cert_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_application_tls_cert_add_ntoh(vapi_msg_application_tls_cert_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_application_tls_cert_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_application_tls_cert_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_application_tls_cert_add_msg_size(vapi_msg_application_tls_cert_add *msg)
{
  return sizeof(*msg)+ msg->payload.cert_len * sizeof(msg->payload.cert[0]);
}

static inline vapi_msg_application_tls_cert_add* vapi_alloc_application_tls_cert_add(struct vapi_ctx_s *ctx, size_t _cert_array_size)
{
  vapi_msg_application_tls_cert_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_application_tls_cert_add) + sizeof(msg->payload.cert[0]) * _cert_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_application_tls_cert_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_application_tls_cert_add);
  msg->payload.cert_len = _cert_array_size;

  return msg;
}

static inline vapi_error_e vapi_application_tls_cert_add(struct vapi_ctx_s *ctx,
  vapi_msg_application_tls_cert_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_application_tls_cert_add_reply *reply),
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
  vapi_msg_application_tls_cert_add_hton(msg);
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
    vapi_msg_application_tls_cert_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_application_tls_cert_add()
{
  static const char name[] = "application_tls_cert_add";
  static const char name_with_crc[] = "application_tls_cert_add_3f5cfe45";
  static vapi_message_desc_t __vapi_metadata_application_tls_cert_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_application_tls_cert_add, payload),
    sizeof(vapi_msg_application_tls_cert_add),
    (generic_swap_fn_t)vapi_msg_application_tls_cert_add_hton,
    (generic_swap_fn_t)vapi_msg_application_tls_cert_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_application_tls_cert_add = vapi_register_msg(&__vapi_metadata_application_tls_cert_add);
  VAPI_DBG("Assigned msg id %d to application_tls_cert_add", vapi_msg_id_application_tls_cert_add);
}
#endif

#ifndef defined_vapi_msg_disconnect_session
#define defined_vapi_msg_disconnect_session
typedef struct __attribute__ ((__packed__)) {
  u64 handle; 
} vapi_payload_disconnect_session;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_disconnect_session payload;
} vapi_msg_disconnect_session;

static inline void vapi_msg_disconnect_session_payload_hton(vapi_payload_disconnect_session *payload)
{
  payload->handle = htobe64(payload->handle);
}

static inline void vapi_msg_disconnect_session_payload_ntoh(vapi_payload_disconnect_session *payload)
{
  payload->handle = be64toh(payload->handle);
}

static inline void vapi_msg_disconnect_session_hton(vapi_msg_disconnect_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_disconnect_session'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_disconnect_session_payload_hton(&msg->payload);
}

static inline void vapi_msg_disconnect_session_ntoh(vapi_msg_disconnect_session *msg)
{
  VAPI_DBG("Swapping `vapi_msg_disconnect_session'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_disconnect_session_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_disconnect_session_msg_size(vapi_msg_disconnect_session *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_disconnect_session* vapi_alloc_disconnect_session(struct vapi_ctx_s *ctx)
{
  vapi_msg_disconnect_session *msg = NULL;
  const size_t size = sizeof(vapi_msg_disconnect_session);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_disconnect_session*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_disconnect_session);

  return msg;
}

static inline vapi_error_e vapi_disconnect_session(struct vapi_ctx_s *ctx,
  vapi_msg_disconnect_session *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_disconnect_session_reply *reply),
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
  vapi_msg_disconnect_session_hton(msg);
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
    vapi_msg_disconnect_session_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_disconnect_session()
{
  static const char name[] = "disconnect_session";
  static const char name_with_crc[] = "disconnect_session_7279205b";
  static vapi_message_desc_t __vapi_metadata_disconnect_session = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_disconnect_session, payload),
    sizeof(vapi_msg_disconnect_session),
    (generic_swap_fn_t)vapi_msg_disconnect_session_hton,
    (generic_swap_fn_t)vapi_msg_disconnect_session_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_disconnect_session = vapi_register_msg(&__vapi_metadata_disconnect_session);
  VAPI_DBG("Assigned msg id %d to disconnect_session", vapi_msg_id_disconnect_session);
}
#endif

#ifndef defined_vapi_msg_connect_uri
#define defined_vapi_msg_connect_uri
typedef struct __attribute__ ((__packed__)) {
  u64 client_queue_address;
  u64 options[16];
  u8 uri[128]; 
} vapi_payload_connect_uri;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_connect_uri payload;
} vapi_msg_connect_uri;

static inline void vapi_msg_connect_uri_payload_hton(vapi_payload_connect_uri *payload)
{
  payload->client_queue_address = htobe64(payload->client_queue_address);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = htobe64(payload->options[i]); } } while(0);
}

static inline void vapi_msg_connect_uri_payload_ntoh(vapi_payload_connect_uri *payload)
{
  payload->client_queue_address = be64toh(payload->client_queue_address);
  do { unsigned i; for (i = 0; i < 16; ++i) { payload->options[i] = be64toh(payload->options[i]); } } while(0);
}

static inline void vapi_msg_connect_uri_hton(vapi_msg_connect_uri *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_uri'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_connect_uri_payload_hton(&msg->payload);
}

static inline void vapi_msg_connect_uri_ntoh(vapi_msg_connect_uri *msg)
{
  VAPI_DBG("Swapping `vapi_msg_connect_uri'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_connect_uri_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_connect_uri_msg_size(vapi_msg_connect_uri *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_connect_uri* vapi_alloc_connect_uri(struct vapi_ctx_s *ctx)
{
  vapi_msg_connect_uri *msg = NULL;
  const size_t size = sizeof(vapi_msg_connect_uri);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_connect_uri*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_connect_uri);

  return msg;
}

static inline vapi_error_e vapi_connect_uri(struct vapi_ctx_s *ctx,
  vapi_msg_connect_uri *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_connect_uri_reply *reply),
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
  vapi_msg_connect_uri_hton(msg);
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
    vapi_msg_connect_uri_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_connect_uri()
{
  static const char name[] = "connect_uri";
  static const char name_with_crc[] = "connect_uri_a36143d6";
  static vapi_message_desc_t __vapi_metadata_connect_uri = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_connect_uri, payload),
    sizeof(vapi_msg_connect_uri),
    (generic_swap_fn_t)vapi_msg_connect_uri_hton,
    (generic_swap_fn_t)vapi_msg_connect_uri_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_connect_uri = vapi_register_msg(&__vapi_metadata_connect_uri);
  VAPI_DBG("Assigned msg id %d to connect_uri", vapi_msg_id_connect_uri);
}
#endif

#ifndef defined_vapi_msg_session_enable_disable
#define defined_vapi_msg_session_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_enable; 
} vapi_payload_session_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_session_enable_disable payload;
} vapi_msg_session_enable_disable;

static inline void vapi_msg_session_enable_disable_payload_hton(vapi_payload_session_enable_disable *payload)
{

}

static inline void vapi_msg_session_enable_disable_payload_ntoh(vapi_payload_session_enable_disable *payload)
{

}

static inline void vapi_msg_session_enable_disable_hton(vapi_msg_session_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_session_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_session_enable_disable_ntoh(vapi_msg_session_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_session_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_session_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_session_enable_disable_msg_size(vapi_msg_session_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_session_enable_disable* vapi_alloc_session_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_session_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_session_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_session_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_session_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_session_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_session_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_session_enable_disable_reply *reply),
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
  vapi_msg_session_enable_disable_hton(msg);
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
    vapi_msg_session_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_session_enable_disable()
{
  static const char name[] = "session_enable_disable";
  static const char name_with_crc[] = "session_enable_disable_30ac9be7";
  static vapi_message_desc_t __vapi_metadata_session_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_session_enable_disable, payload),
    sizeof(vapi_msg_session_enable_disable),
    (generic_swap_fn_t)vapi_msg_session_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_session_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_session_enable_disable = vapi_register_msg(&__vapi_metadata_session_enable_disable);
  VAPI_DBG("Assigned msg id %d to session_enable_disable", vapi_msg_id_session_enable_disable);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
