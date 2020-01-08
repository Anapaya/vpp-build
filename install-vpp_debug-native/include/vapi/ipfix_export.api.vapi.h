#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ipfix_export_ipfix_export_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ipfix_export_ipfix_export_api_json

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

extern vapi_msg_id_t vapi_msg_id_ipfix_exporter_dump;
extern vapi_msg_id_t vapi_msg_id_ipfix_classify_stream_dump;
extern vapi_msg_id_t vapi_msg_id_ipfix_classify_table_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ipfix_classify_table_add_del;
extern vapi_msg_id_t vapi_msg_id_ipfix_flush;
extern vapi_msg_id_t vapi_msg_id_set_ipfix_exporter_reply;
extern vapi_msg_id_t vapi_msg_id_ipfix_flush_reply;
extern vapi_msg_id_t vapi_msg_id_ipfix_exporter_details;
extern vapi_msg_id_t vapi_msg_id_ipfix_classify_table_details;
extern vapi_msg_id_t vapi_msg_id_set_ipfix_classify_stream;
extern vapi_msg_id_t vapi_msg_id_set_ipfix_exporter;
extern vapi_msg_id_t vapi_msg_id_set_ipfix_classify_stream_reply;
extern vapi_msg_id_t vapi_msg_id_ipfix_classify_table_dump;
extern vapi_msg_id_t vapi_msg_id_ipfix_classify_stream_details;

#define DEFINE_VAPI_MSG_IDS_IPFIX_EXPORT_API_JSON\
  vapi_msg_id_t vapi_msg_id_ipfix_exporter_dump;\
  vapi_msg_id_t vapi_msg_id_ipfix_classify_stream_dump;\
  vapi_msg_id_t vapi_msg_id_ipfix_classify_table_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ipfix_classify_table_add_del;\
  vapi_msg_id_t vapi_msg_id_ipfix_flush;\
  vapi_msg_id_t vapi_msg_id_set_ipfix_exporter_reply;\
  vapi_msg_id_t vapi_msg_id_ipfix_flush_reply;\
  vapi_msg_id_t vapi_msg_id_ipfix_exporter_details;\
  vapi_msg_id_t vapi_msg_id_ipfix_classify_table_details;\
  vapi_msg_id_t vapi_msg_id_set_ipfix_classify_stream;\
  vapi_msg_id_t vapi_msg_id_set_ipfix_exporter;\
  vapi_msg_id_t vapi_msg_id_set_ipfix_classify_stream_reply;\
  vapi_msg_id_t vapi_msg_id_ipfix_classify_table_dump;\
  vapi_msg_id_t vapi_msg_id_ipfix_classify_stream_details;


#ifndef defined_vapi_msg_ipfix_exporter_details
#define defined_vapi_msg_ipfix_exporter_details
typedef struct __attribute__ ((__packed__)) {
  u8 collector_address[16];
  u16 collector_port;
  u8 src_address[16];
  u32 vrf_id;
  u32 path_mtu;
  u32 template_interval;
  u8 udp_checksum; 
} vapi_payload_ipfix_exporter_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipfix_exporter_details payload;
} vapi_msg_ipfix_exporter_details;

static inline void vapi_msg_ipfix_exporter_details_payload_hton(vapi_payload_ipfix_exporter_details *payload)
{
  payload->collector_port = htobe16(payload->collector_port);
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->path_mtu = htobe32(payload->path_mtu);
  payload->template_interval = htobe32(payload->template_interval);
}

static inline void vapi_msg_ipfix_exporter_details_payload_ntoh(vapi_payload_ipfix_exporter_details *payload)
{
  payload->collector_port = be16toh(payload->collector_port);
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->path_mtu = be32toh(payload->path_mtu);
  payload->template_interval = be32toh(payload->template_interval);
}

static inline void vapi_msg_ipfix_exporter_details_hton(vapi_msg_ipfix_exporter_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_exporter_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipfix_exporter_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipfix_exporter_details_ntoh(vapi_msg_ipfix_exporter_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_exporter_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipfix_exporter_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipfix_exporter_details_msg_size(vapi_msg_ipfix_exporter_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipfix_exporter_details()
{
  static const char name[] = "ipfix_exporter_details";
  static const char name_with_crc[] = "ipfix_exporter_details_742dddee";
  static vapi_message_desc_t __vapi_metadata_ipfix_exporter_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipfix_exporter_details, payload),
    sizeof(vapi_msg_ipfix_exporter_details),
    (generic_swap_fn_t)vapi_msg_ipfix_exporter_details_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_exporter_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_exporter_details = vapi_register_msg(&__vapi_metadata_ipfix_exporter_details);
  VAPI_DBG("Assigned msg id %d to ipfix_exporter_details", vapi_msg_id_ipfix_exporter_details);
}

static inline void vapi_set_vapi_msg_ipfix_exporter_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipfix_exporter_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipfix_exporter_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipfix_exporter_dump
#define defined_vapi_msg_ipfix_exporter_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ipfix_exporter_dump;

static inline void vapi_msg_ipfix_exporter_dump_hton(vapi_msg_ipfix_exporter_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_exporter_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ipfix_exporter_dump_ntoh(vapi_msg_ipfix_exporter_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_exporter_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ipfix_exporter_dump_msg_size(vapi_msg_ipfix_exporter_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipfix_exporter_dump* vapi_alloc_ipfix_exporter_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipfix_exporter_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipfix_exporter_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipfix_exporter_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipfix_exporter_dump);

  return msg;
}

static inline vapi_error_e vapi_ipfix_exporter_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipfix_exporter_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipfix_exporter_details *reply),
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
  vapi_msg_ipfix_exporter_dump_hton(msg);
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
    vapi_msg_ipfix_exporter_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipfix_exporter_dump()
{
  static const char name[] = "ipfix_exporter_dump";
  static const char name_with_crc[] = "ipfix_exporter_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ipfix_exporter_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ipfix_exporter_dump),
    (generic_swap_fn_t)vapi_msg_ipfix_exporter_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_exporter_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_exporter_dump = vapi_register_msg(&__vapi_metadata_ipfix_exporter_dump);
  VAPI_DBG("Assigned msg id %d to ipfix_exporter_dump", vapi_msg_id_ipfix_exporter_dump);
}
#endif

#ifndef defined_vapi_msg_ipfix_classify_stream_details
#define defined_vapi_msg_ipfix_classify_stream_details
typedef struct __attribute__ ((__packed__)) {
  u32 domain_id;
  u16 src_port; 
} vapi_payload_ipfix_classify_stream_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipfix_classify_stream_details payload;
} vapi_msg_ipfix_classify_stream_details;

static inline void vapi_msg_ipfix_classify_stream_details_payload_hton(vapi_payload_ipfix_classify_stream_details *payload)
{
  payload->domain_id = htobe32(payload->domain_id);
  payload->src_port = htobe16(payload->src_port);
}

static inline void vapi_msg_ipfix_classify_stream_details_payload_ntoh(vapi_payload_ipfix_classify_stream_details *payload)
{
  payload->domain_id = be32toh(payload->domain_id);
  payload->src_port = be16toh(payload->src_port);
}

static inline void vapi_msg_ipfix_classify_stream_details_hton(vapi_msg_ipfix_classify_stream_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_stream_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipfix_classify_stream_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipfix_classify_stream_details_ntoh(vapi_msg_ipfix_classify_stream_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_stream_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipfix_classify_stream_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipfix_classify_stream_details_msg_size(vapi_msg_ipfix_classify_stream_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipfix_classify_stream_details()
{
  static const char name[] = "ipfix_classify_stream_details";
  static const char name_with_crc[] = "ipfix_classify_stream_details_2903539d";
  static vapi_message_desc_t __vapi_metadata_ipfix_classify_stream_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipfix_classify_stream_details, payload),
    sizeof(vapi_msg_ipfix_classify_stream_details),
    (generic_swap_fn_t)vapi_msg_ipfix_classify_stream_details_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_classify_stream_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_classify_stream_details = vapi_register_msg(&__vapi_metadata_ipfix_classify_stream_details);
  VAPI_DBG("Assigned msg id %d to ipfix_classify_stream_details", vapi_msg_id_ipfix_classify_stream_details);
}

static inline void vapi_set_vapi_msg_ipfix_classify_stream_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipfix_classify_stream_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipfix_classify_stream_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipfix_classify_stream_dump
#define defined_vapi_msg_ipfix_classify_stream_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ipfix_classify_stream_dump;

static inline void vapi_msg_ipfix_classify_stream_dump_hton(vapi_msg_ipfix_classify_stream_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_stream_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ipfix_classify_stream_dump_ntoh(vapi_msg_ipfix_classify_stream_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_stream_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ipfix_classify_stream_dump_msg_size(vapi_msg_ipfix_classify_stream_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipfix_classify_stream_dump* vapi_alloc_ipfix_classify_stream_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipfix_classify_stream_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipfix_classify_stream_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipfix_classify_stream_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipfix_classify_stream_dump);

  return msg;
}

static inline vapi_error_e vapi_ipfix_classify_stream_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipfix_classify_stream_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipfix_classify_stream_details *reply),
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
  vapi_msg_ipfix_classify_stream_dump_hton(msg);
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
    vapi_msg_ipfix_classify_stream_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipfix_classify_stream_dump()
{
  static const char name[] = "ipfix_classify_stream_dump";
  static const char name_with_crc[] = "ipfix_classify_stream_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ipfix_classify_stream_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ipfix_classify_stream_dump),
    (generic_swap_fn_t)vapi_msg_ipfix_classify_stream_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_classify_stream_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_classify_stream_dump = vapi_register_msg(&__vapi_metadata_ipfix_classify_stream_dump);
  VAPI_DBG("Assigned msg id %d to ipfix_classify_stream_dump", vapi_msg_id_ipfix_classify_stream_dump);
}
#endif

#ifndef defined_vapi_msg_ipfix_classify_table_add_del_reply
#define defined_vapi_msg_ipfix_classify_table_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipfix_classify_table_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipfix_classify_table_add_del_reply payload;
} vapi_msg_ipfix_classify_table_add_del_reply;

static inline void vapi_msg_ipfix_classify_table_add_del_reply_payload_hton(vapi_payload_ipfix_classify_table_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipfix_classify_table_add_del_reply_payload_ntoh(vapi_payload_ipfix_classify_table_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipfix_classify_table_add_del_reply_hton(vapi_msg_ipfix_classify_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipfix_classify_table_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipfix_classify_table_add_del_reply_ntoh(vapi_msg_ipfix_classify_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipfix_classify_table_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipfix_classify_table_add_del_reply_msg_size(vapi_msg_ipfix_classify_table_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipfix_classify_table_add_del_reply()
{
  static const char name[] = "ipfix_classify_table_add_del_reply";
  static const char name_with_crc[] = "ipfix_classify_table_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipfix_classify_table_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipfix_classify_table_add_del_reply, payload),
    sizeof(vapi_msg_ipfix_classify_table_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_classify_table_add_del_reply = vapi_register_msg(&__vapi_metadata_ipfix_classify_table_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ipfix_classify_table_add_del_reply", vapi_msg_id_ipfix_classify_table_add_del_reply);
}

static inline void vapi_set_vapi_msg_ipfix_classify_table_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipfix_classify_table_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipfix_classify_table_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipfix_classify_table_add_del
#define defined_vapi_msg_ipfix_classify_table_add_del
typedef struct __attribute__ ((__packed__)) {
  u32 table_id;
  u8 ip_version;
  u8 transport_protocol;
  u8 is_add; 
} vapi_payload_ipfix_classify_table_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipfix_classify_table_add_del payload;
} vapi_msg_ipfix_classify_table_add_del;

static inline void vapi_msg_ipfix_classify_table_add_del_payload_hton(vapi_payload_ipfix_classify_table_add_del *payload)
{
  payload->table_id = htobe32(payload->table_id);
}

static inline void vapi_msg_ipfix_classify_table_add_del_payload_ntoh(vapi_payload_ipfix_classify_table_add_del *payload)
{
  payload->table_id = be32toh(payload->table_id);
}

static inline void vapi_msg_ipfix_classify_table_add_del_hton(vapi_msg_ipfix_classify_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipfix_classify_table_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipfix_classify_table_add_del_ntoh(vapi_msg_ipfix_classify_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipfix_classify_table_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipfix_classify_table_add_del_msg_size(vapi_msg_ipfix_classify_table_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipfix_classify_table_add_del* vapi_alloc_ipfix_classify_table_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipfix_classify_table_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipfix_classify_table_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipfix_classify_table_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipfix_classify_table_add_del);

  return msg;
}

static inline vapi_error_e vapi_ipfix_classify_table_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ipfix_classify_table_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipfix_classify_table_add_del_reply *reply),
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
  vapi_msg_ipfix_classify_table_add_del_hton(msg);
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
    vapi_msg_ipfix_classify_table_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipfix_classify_table_add_del()
{
  static const char name[] = "ipfix_classify_table_add_del";
  static const char name_with_crc[] = "ipfix_classify_table_add_del_48efe167";
  static vapi_message_desc_t __vapi_metadata_ipfix_classify_table_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipfix_classify_table_add_del, payload),
    sizeof(vapi_msg_ipfix_classify_table_add_del),
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_classify_table_add_del = vapi_register_msg(&__vapi_metadata_ipfix_classify_table_add_del);
  VAPI_DBG("Assigned msg id %d to ipfix_classify_table_add_del", vapi_msg_id_ipfix_classify_table_add_del);
}
#endif

#ifndef defined_vapi_msg_ipfix_flush_reply
#define defined_vapi_msg_ipfix_flush_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipfix_flush_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipfix_flush_reply payload;
} vapi_msg_ipfix_flush_reply;

static inline void vapi_msg_ipfix_flush_reply_payload_hton(vapi_payload_ipfix_flush_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipfix_flush_reply_payload_ntoh(vapi_payload_ipfix_flush_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipfix_flush_reply_hton(vapi_msg_ipfix_flush_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_flush_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipfix_flush_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipfix_flush_reply_ntoh(vapi_msg_ipfix_flush_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_flush_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipfix_flush_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipfix_flush_reply_msg_size(vapi_msg_ipfix_flush_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipfix_flush_reply()
{
  static const char name[] = "ipfix_flush_reply";
  static const char name_with_crc[] = "ipfix_flush_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipfix_flush_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipfix_flush_reply, payload),
    sizeof(vapi_msg_ipfix_flush_reply),
    (generic_swap_fn_t)vapi_msg_ipfix_flush_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_flush_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_flush_reply = vapi_register_msg(&__vapi_metadata_ipfix_flush_reply);
  VAPI_DBG("Assigned msg id %d to ipfix_flush_reply", vapi_msg_id_ipfix_flush_reply);
}

static inline void vapi_set_vapi_msg_ipfix_flush_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipfix_flush_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipfix_flush_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipfix_flush
#define defined_vapi_msg_ipfix_flush
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ipfix_flush;

static inline void vapi_msg_ipfix_flush_hton(vapi_msg_ipfix_flush *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_flush'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ipfix_flush_ntoh(vapi_msg_ipfix_flush *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_flush'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ipfix_flush_msg_size(vapi_msg_ipfix_flush *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipfix_flush* vapi_alloc_ipfix_flush(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipfix_flush *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipfix_flush);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipfix_flush*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipfix_flush);

  return msg;
}

static inline vapi_error_e vapi_ipfix_flush(struct vapi_ctx_s *ctx,
  vapi_msg_ipfix_flush *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipfix_flush_reply *reply),
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
  vapi_msg_ipfix_flush_hton(msg);
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
    vapi_msg_ipfix_flush_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipfix_flush()
{
  static const char name[] = "ipfix_flush";
  static const char name_with_crc[] = "ipfix_flush_51077d14";
  static vapi_message_desc_t __vapi_metadata_ipfix_flush = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ipfix_flush),
    (generic_swap_fn_t)vapi_msg_ipfix_flush_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_flush_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_flush = vapi_register_msg(&__vapi_metadata_ipfix_flush);
  VAPI_DBG("Assigned msg id %d to ipfix_flush", vapi_msg_id_ipfix_flush);
}
#endif

#ifndef defined_vapi_msg_set_ipfix_exporter_reply
#define defined_vapi_msg_set_ipfix_exporter_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_set_ipfix_exporter_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_set_ipfix_exporter_reply payload;
} vapi_msg_set_ipfix_exporter_reply;

static inline void vapi_msg_set_ipfix_exporter_reply_payload_hton(vapi_payload_set_ipfix_exporter_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_set_ipfix_exporter_reply_payload_ntoh(vapi_payload_set_ipfix_exporter_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_set_ipfix_exporter_reply_hton(vapi_msg_set_ipfix_exporter_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_exporter_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_set_ipfix_exporter_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_ipfix_exporter_reply_ntoh(vapi_msg_set_ipfix_exporter_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_exporter_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_set_ipfix_exporter_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_ipfix_exporter_reply_msg_size(vapi_msg_set_ipfix_exporter_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_set_ipfix_exporter_reply()
{
  static const char name[] = "set_ipfix_exporter_reply";
  static const char name_with_crc[] = "set_ipfix_exporter_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_set_ipfix_exporter_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_set_ipfix_exporter_reply, payload),
    sizeof(vapi_msg_set_ipfix_exporter_reply),
    (generic_swap_fn_t)vapi_msg_set_ipfix_exporter_reply_hton,
    (generic_swap_fn_t)vapi_msg_set_ipfix_exporter_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_ipfix_exporter_reply = vapi_register_msg(&__vapi_metadata_set_ipfix_exporter_reply);
  VAPI_DBG("Assigned msg id %d to set_ipfix_exporter_reply", vapi_msg_id_set_ipfix_exporter_reply);
}

static inline void vapi_set_vapi_msg_set_ipfix_exporter_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_set_ipfix_exporter_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_set_ipfix_exporter_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipfix_classify_table_details
#define defined_vapi_msg_ipfix_classify_table_details
typedef struct __attribute__ ((__packed__)) {
  u32 table_id;
  u8 ip_version;
  u8 transport_protocol; 
} vapi_payload_ipfix_classify_table_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipfix_classify_table_details payload;
} vapi_msg_ipfix_classify_table_details;

static inline void vapi_msg_ipfix_classify_table_details_payload_hton(vapi_payload_ipfix_classify_table_details *payload)
{
  payload->table_id = htobe32(payload->table_id);
}

static inline void vapi_msg_ipfix_classify_table_details_payload_ntoh(vapi_payload_ipfix_classify_table_details *payload)
{
  payload->table_id = be32toh(payload->table_id);
}

static inline void vapi_msg_ipfix_classify_table_details_hton(vapi_msg_ipfix_classify_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipfix_classify_table_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipfix_classify_table_details_ntoh(vapi_msg_ipfix_classify_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipfix_classify_table_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipfix_classify_table_details_msg_size(vapi_msg_ipfix_classify_table_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipfix_classify_table_details()
{
  static const char name[] = "ipfix_classify_table_details";
  static const char name_with_crc[] = "ipfix_classify_table_details_973d0d5b";
  static vapi_message_desc_t __vapi_metadata_ipfix_classify_table_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipfix_classify_table_details, payload),
    sizeof(vapi_msg_ipfix_classify_table_details),
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_details_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_classify_table_details = vapi_register_msg(&__vapi_metadata_ipfix_classify_table_details);
  VAPI_DBG("Assigned msg id %d to ipfix_classify_table_details", vapi_msg_id_ipfix_classify_table_details);
}

static inline void vapi_set_vapi_msg_ipfix_classify_table_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipfix_classify_table_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipfix_classify_table_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_set_ipfix_classify_stream_reply
#define defined_vapi_msg_set_ipfix_classify_stream_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_set_ipfix_classify_stream_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_set_ipfix_classify_stream_reply payload;
} vapi_msg_set_ipfix_classify_stream_reply;

static inline void vapi_msg_set_ipfix_classify_stream_reply_payload_hton(vapi_payload_set_ipfix_classify_stream_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_set_ipfix_classify_stream_reply_payload_ntoh(vapi_payload_set_ipfix_classify_stream_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_set_ipfix_classify_stream_reply_hton(vapi_msg_set_ipfix_classify_stream_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_classify_stream_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_set_ipfix_classify_stream_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_ipfix_classify_stream_reply_ntoh(vapi_msg_set_ipfix_classify_stream_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_classify_stream_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_set_ipfix_classify_stream_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_ipfix_classify_stream_reply_msg_size(vapi_msg_set_ipfix_classify_stream_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_set_ipfix_classify_stream_reply()
{
  static const char name[] = "set_ipfix_classify_stream_reply";
  static const char name_with_crc[] = "set_ipfix_classify_stream_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_set_ipfix_classify_stream_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_set_ipfix_classify_stream_reply, payload),
    sizeof(vapi_msg_set_ipfix_classify_stream_reply),
    (generic_swap_fn_t)vapi_msg_set_ipfix_classify_stream_reply_hton,
    (generic_swap_fn_t)vapi_msg_set_ipfix_classify_stream_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_ipfix_classify_stream_reply = vapi_register_msg(&__vapi_metadata_set_ipfix_classify_stream_reply);
  VAPI_DBG("Assigned msg id %d to set_ipfix_classify_stream_reply", vapi_msg_id_set_ipfix_classify_stream_reply);
}

static inline void vapi_set_vapi_msg_set_ipfix_classify_stream_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_set_ipfix_classify_stream_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_set_ipfix_classify_stream_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_set_ipfix_classify_stream
#define defined_vapi_msg_set_ipfix_classify_stream
typedef struct __attribute__ ((__packed__)) {
  u32 domain_id;
  u16 src_port; 
} vapi_payload_set_ipfix_classify_stream;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_set_ipfix_classify_stream payload;
} vapi_msg_set_ipfix_classify_stream;

static inline void vapi_msg_set_ipfix_classify_stream_payload_hton(vapi_payload_set_ipfix_classify_stream *payload)
{
  payload->domain_id = htobe32(payload->domain_id);
  payload->src_port = htobe16(payload->src_port);
}

static inline void vapi_msg_set_ipfix_classify_stream_payload_ntoh(vapi_payload_set_ipfix_classify_stream *payload)
{
  payload->domain_id = be32toh(payload->domain_id);
  payload->src_port = be16toh(payload->src_port);
}

static inline void vapi_msg_set_ipfix_classify_stream_hton(vapi_msg_set_ipfix_classify_stream *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_classify_stream'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_set_ipfix_classify_stream_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_ipfix_classify_stream_ntoh(vapi_msg_set_ipfix_classify_stream *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_classify_stream'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_set_ipfix_classify_stream_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_ipfix_classify_stream_msg_size(vapi_msg_set_ipfix_classify_stream *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_set_ipfix_classify_stream* vapi_alloc_set_ipfix_classify_stream(struct vapi_ctx_s *ctx)
{
  vapi_msg_set_ipfix_classify_stream *msg = NULL;
  const size_t size = sizeof(vapi_msg_set_ipfix_classify_stream);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_set_ipfix_classify_stream*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_set_ipfix_classify_stream);

  return msg;
}

static inline vapi_error_e vapi_set_ipfix_classify_stream(struct vapi_ctx_s *ctx,
  vapi_msg_set_ipfix_classify_stream *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_set_ipfix_classify_stream_reply *reply),
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
  vapi_msg_set_ipfix_classify_stream_hton(msg);
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
    vapi_msg_set_ipfix_classify_stream_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_set_ipfix_classify_stream()
{
  static const char name[] = "set_ipfix_classify_stream";
  static const char name_with_crc[] = "set_ipfix_classify_stream_c9cbe053";
  static vapi_message_desc_t __vapi_metadata_set_ipfix_classify_stream = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_set_ipfix_classify_stream, payload),
    sizeof(vapi_msg_set_ipfix_classify_stream),
    (generic_swap_fn_t)vapi_msg_set_ipfix_classify_stream_hton,
    (generic_swap_fn_t)vapi_msg_set_ipfix_classify_stream_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_ipfix_classify_stream = vapi_register_msg(&__vapi_metadata_set_ipfix_classify_stream);
  VAPI_DBG("Assigned msg id %d to set_ipfix_classify_stream", vapi_msg_id_set_ipfix_classify_stream);
}
#endif

#ifndef defined_vapi_msg_set_ipfix_exporter
#define defined_vapi_msg_set_ipfix_exporter
typedef struct __attribute__ ((__packed__)) {
  u8 collector_address[16];
  u16 collector_port;
  u8 src_address[16];
  u32 vrf_id;
  u32 path_mtu;
  u32 template_interval;
  u8 udp_checksum; 
} vapi_payload_set_ipfix_exporter;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_set_ipfix_exporter payload;
} vapi_msg_set_ipfix_exporter;

static inline void vapi_msg_set_ipfix_exporter_payload_hton(vapi_payload_set_ipfix_exporter *payload)
{
  payload->collector_port = htobe16(payload->collector_port);
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->path_mtu = htobe32(payload->path_mtu);
  payload->template_interval = htobe32(payload->template_interval);
}

static inline void vapi_msg_set_ipfix_exporter_payload_ntoh(vapi_payload_set_ipfix_exporter *payload)
{
  payload->collector_port = be16toh(payload->collector_port);
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->path_mtu = be32toh(payload->path_mtu);
  payload->template_interval = be32toh(payload->template_interval);
}

static inline void vapi_msg_set_ipfix_exporter_hton(vapi_msg_set_ipfix_exporter *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_exporter'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_set_ipfix_exporter_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_ipfix_exporter_ntoh(vapi_msg_set_ipfix_exporter *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_ipfix_exporter'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_set_ipfix_exporter_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_ipfix_exporter_msg_size(vapi_msg_set_ipfix_exporter *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_set_ipfix_exporter* vapi_alloc_set_ipfix_exporter(struct vapi_ctx_s *ctx)
{
  vapi_msg_set_ipfix_exporter *msg = NULL;
  const size_t size = sizeof(vapi_msg_set_ipfix_exporter);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_set_ipfix_exporter*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_set_ipfix_exporter);

  return msg;
}

static inline vapi_error_e vapi_set_ipfix_exporter(struct vapi_ctx_s *ctx,
  vapi_msg_set_ipfix_exporter *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_set_ipfix_exporter_reply *reply),
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
  vapi_msg_set_ipfix_exporter_hton(msg);
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
    vapi_msg_set_ipfix_exporter_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_set_ipfix_exporter()
{
  static const char name[] = "set_ipfix_exporter";
  static const char name_with_crc[] = "set_ipfix_exporter_4ff71dea";
  static vapi_message_desc_t __vapi_metadata_set_ipfix_exporter = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_set_ipfix_exporter, payload),
    sizeof(vapi_msg_set_ipfix_exporter),
    (generic_swap_fn_t)vapi_msg_set_ipfix_exporter_hton,
    (generic_swap_fn_t)vapi_msg_set_ipfix_exporter_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_ipfix_exporter = vapi_register_msg(&__vapi_metadata_set_ipfix_exporter);
  VAPI_DBG("Assigned msg id %d to set_ipfix_exporter", vapi_msg_id_set_ipfix_exporter);
}
#endif

#ifndef defined_vapi_msg_ipfix_classify_table_dump
#define defined_vapi_msg_ipfix_classify_table_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ipfix_classify_table_dump;

static inline void vapi_msg_ipfix_classify_table_dump_hton(vapi_msg_ipfix_classify_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ipfix_classify_table_dump_ntoh(vapi_msg_ipfix_classify_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipfix_classify_table_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ipfix_classify_table_dump_msg_size(vapi_msg_ipfix_classify_table_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipfix_classify_table_dump* vapi_alloc_ipfix_classify_table_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipfix_classify_table_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipfix_classify_table_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipfix_classify_table_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipfix_classify_table_dump);

  return msg;
}

static inline vapi_error_e vapi_ipfix_classify_table_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipfix_classify_table_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipfix_classify_table_details *reply),
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
  vapi_msg_ipfix_classify_table_dump_hton(msg);
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
    vapi_msg_ipfix_classify_table_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipfix_classify_table_dump()
{
  static const char name[] = "ipfix_classify_table_dump";
  static const char name_with_crc[] = "ipfix_classify_table_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ipfix_classify_table_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ipfix_classify_table_dump),
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipfix_classify_table_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipfix_classify_table_dump = vapi_register_msg(&__vapi_metadata_ipfix_classify_table_dump);
  VAPI_DBG("Assigned msg id %d to ipfix_classify_table_dump", vapi_msg_id_ipfix_classify_table_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
