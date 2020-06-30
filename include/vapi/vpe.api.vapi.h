#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vpp_api_vpe_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vpp_api_vpe_api_json

#include <stdlib.h>
#include <stddef.h>
#include <arpa/inet.h>
#include <vapi/vapi_internal.h>
#include <vapi/vapi.h>
#include <vapi/vapi_dbg.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline vapi_error_e vapi_send_with_control_ping (vapi_ctx_t ctx, void * msg, u32 context);

extern vapi_msg_id_t vapi_msg_id_control_ping;
extern vapi_msg_id_t vapi_msg_id_control_ping_reply;
extern vapi_msg_id_t vapi_msg_id_cli;
extern vapi_msg_id_t vapi_msg_id_cli_inband;
extern vapi_msg_id_t vapi_msg_id_cli_reply;
extern vapi_msg_id_t vapi_msg_id_cli_inband_reply;
extern vapi_msg_id_t vapi_msg_id_get_node_index;
extern vapi_msg_id_t vapi_msg_id_get_node_index_reply;
extern vapi_msg_id_t vapi_msg_id_add_node_next;
extern vapi_msg_id_t vapi_msg_id_add_node_next_reply;
extern vapi_msg_id_t vapi_msg_id_show_version;
extern vapi_msg_id_t vapi_msg_id_show_version_reply;
extern vapi_msg_id_t vapi_msg_id_show_threads;
extern vapi_msg_id_t vapi_msg_id_show_threads_reply;
extern vapi_msg_id_t vapi_msg_id_get_node_graph;
extern vapi_msg_id_t vapi_msg_id_get_node_graph_reply;
extern vapi_msg_id_t vapi_msg_id_get_next_index;
extern vapi_msg_id_t vapi_msg_id_get_next_index_reply;
extern vapi_msg_id_t vapi_msg_id_log_dump;
extern vapi_msg_id_t vapi_msg_id_log_details;
extern vapi_msg_id_t vapi_msg_id_show_vpe_system_time;
extern vapi_msg_id_t vapi_msg_id_show_vpe_system_time_reply;
extern vapi_msg_id_t vapi_msg_id_get_f64_endian_value;
extern vapi_msg_id_t vapi_msg_id_get_f64_endian_value_reply;
extern vapi_msg_id_t vapi_msg_id_get_f64_increment_by_one;
extern vapi_msg_id_t vapi_msg_id_get_f64_increment_by_one_reply;

#define DEFINE_VAPI_MSG_IDS_VPE_API_JSON\
  vapi_msg_id_t vapi_msg_id_control_ping;\
  vapi_msg_id_t vapi_msg_id_control_ping_reply;\
  vapi_msg_id_t vapi_msg_id_cli;\
  vapi_msg_id_t vapi_msg_id_cli_inband;\
  vapi_msg_id_t vapi_msg_id_cli_reply;\
  vapi_msg_id_t vapi_msg_id_cli_inband_reply;\
  vapi_msg_id_t vapi_msg_id_get_node_index;\
  vapi_msg_id_t vapi_msg_id_get_node_index_reply;\
  vapi_msg_id_t vapi_msg_id_add_node_next;\
  vapi_msg_id_t vapi_msg_id_add_node_next_reply;\
  vapi_msg_id_t vapi_msg_id_show_version;\
  vapi_msg_id_t vapi_msg_id_show_version_reply;\
  vapi_msg_id_t vapi_msg_id_show_threads;\
  vapi_msg_id_t vapi_msg_id_show_threads_reply;\
  vapi_msg_id_t vapi_msg_id_get_node_graph;\
  vapi_msg_id_t vapi_msg_id_get_node_graph_reply;\
  vapi_msg_id_t vapi_msg_id_get_next_index;\
  vapi_msg_id_t vapi_msg_id_get_next_index_reply;\
  vapi_msg_id_t vapi_msg_id_log_dump;\
  vapi_msg_id_t vapi_msg_id_log_details;\
  vapi_msg_id_t vapi_msg_id_show_vpe_system_time;\
  vapi_msg_id_t vapi_msg_id_show_vpe_system_time_reply;\
  vapi_msg_id_t vapi_msg_id_get_f64_endian_value;\
  vapi_msg_id_t vapi_msg_id_get_f64_endian_value_reply;\
  vapi_msg_id_t vapi_msg_id_get_f64_increment_by_one;\
  vapi_msg_id_t vapi_msg_id_get_f64_increment_by_one_reply;


#ifndef defined_vapi_enum_log_level
#define defined_vapi_enum_log_level
typedef enum {
  VPE_API_LOG_LEVEL_EMERG = 0,
  VPE_API_LOG_LEVEL_ALERT = 1,
  VPE_API_LOG_LEVEL_CRIT = 2,
  VPE_API_LOG_LEVEL_ERR = 3,
  VPE_API_LOG_LEVEL_WARNING = 4,
  VPE_API_LOG_LEVEL_NOTICE = 5,
  VPE_API_LOG_LEVEL_INFO = 6,
  VPE_API_LOG_LEVEL_DEBUG = 7,
  VPE_API_LOG_LEVEL_DISABLED = 8,
}  vapi_enum_log_level;

#endif

#ifndef defined_vapi_type_version
#define defined_vapi_type_version
typedef struct __attribute__((__packed__)) {
  u32 major;
  u32 minor;
  u32 patch;
  u8 pre_release[17];
  u8 build_metadata[17];
} vapi_type_version;

static inline void vapi_type_version_hton(vapi_type_version *msg)
{
  msg->major = htobe32(msg->major);
  msg->minor = htobe32(msg->minor);
  msg->patch = htobe32(msg->patch);
}

static inline void vapi_type_version_ntoh(vapi_type_version *msg)
{
  msg->major = be32toh(msg->major);
  msg->minor = be32toh(msg->minor);
  msg->patch = be32toh(msg->patch);
}
#endif

#ifndef defined_vapi_type_thread_data
#define defined_vapi_type_thread_data
typedef struct __attribute__((__packed__)) {
  u32 id;
  u8 name[64];
  u8 type[64];
  u32 pid;
  u32 cpu_id;
  u32 core;
  u32 cpu_socket;
} vapi_type_thread_data;

static inline void vapi_type_thread_data_hton(vapi_type_thread_data *msg)
{
  msg->id = htobe32(msg->id);
  msg->pid = htobe32(msg->pid);
  msg->cpu_id = htobe32(msg->cpu_id);
  msg->core = htobe32(msg->core);
  msg->cpu_socket = htobe32(msg->cpu_socket);
}

static inline void vapi_type_thread_data_ntoh(vapi_type_thread_data *msg)
{
  msg->id = be32toh(msg->id);
  msg->pid = be32toh(msg->pid);
  msg->cpu_id = be32toh(msg->cpu_id);
  msg->core = be32toh(msg->core);
  msg->cpu_socket = be32toh(msg->cpu_socket);
}
#endif

#ifndef defined_vapi_type_timestamp
#define defined_vapi_type_timestamp
typedef f64 vapi_type_timestamp;

#endif

#ifndef defined_vapi_type_timedelta
#define defined_vapi_type_timedelta
typedef f64 vapi_type_timedelta;

#endif

#ifndef defined_vapi_msg_control_ping_reply
#define defined_vapi_msg_control_ping_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 client_index;
  u32 vpe_pid; 
} vapi_payload_control_ping_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_control_ping_reply payload;
} vapi_msg_control_ping_reply;

static inline void vapi_msg_control_ping_reply_payload_hton(vapi_payload_control_ping_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->client_index = htobe32(payload->client_index);
  payload->vpe_pid = htobe32(payload->vpe_pid);
}

static inline void vapi_msg_control_ping_reply_payload_ntoh(vapi_payload_control_ping_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->client_index = be32toh(payload->client_index);
  payload->vpe_pid = be32toh(payload->vpe_pid);
}

static inline void vapi_msg_control_ping_reply_hton(vapi_msg_control_ping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_control_ping_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_control_ping_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_control_ping_reply_ntoh(vapi_msg_control_ping_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_control_ping_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_control_ping_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_control_ping_reply_msg_size(vapi_msg_control_ping_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_control_ping_reply()
{
  static const char name[] = "control_ping_reply";
  static const char name_with_crc[] = "control_ping_reply_f6b0b8ca";
  static vapi_message_desc_t __vapi_metadata_control_ping_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_control_ping_reply, payload),
    sizeof(vapi_msg_control_ping_reply),
    (generic_swap_fn_t)vapi_msg_control_ping_reply_hton,
    (generic_swap_fn_t)vapi_msg_control_ping_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_control_ping_reply = vapi_register_msg(&__vapi_metadata_control_ping_reply);
  VAPI_DBG("Assigned msg id %d to control_ping_reply", vapi_msg_id_control_ping_reply);
}

static inline void vapi_set_vapi_msg_control_ping_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_control_ping_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_control_ping_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_control_ping
#define defined_vapi_msg_control_ping
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_control_ping;

static inline void vapi_msg_control_ping_hton(vapi_msg_control_ping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_control_ping'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_control_ping_ntoh(vapi_msg_control_ping *msg)
{
  VAPI_DBG("Swapping `vapi_msg_control_ping'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_control_ping_msg_size(vapi_msg_control_ping *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_control_ping* vapi_alloc_control_ping(struct vapi_ctx_s *ctx)
{
  vapi_msg_control_ping *msg = NULL;
  const size_t size = sizeof(vapi_msg_control_ping);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_control_ping*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_control_ping);

  return msg;
}

static inline vapi_error_e vapi_control_ping(struct vapi_ctx_s *ctx,
  vapi_msg_control_ping *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_control_ping_reply *reply),
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
  vapi_msg_control_ping_hton(msg);
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
    vapi_msg_control_ping_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_control_ping()
{
  static const char name[] = "control_ping";
  static const char name_with_crc[] = "control_ping_51077d14";
  static vapi_message_desc_t __vapi_metadata_control_ping = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_control_ping),
    (generic_swap_fn_t)vapi_msg_control_ping_hton,
    (generic_swap_fn_t)vapi_msg_control_ping_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_control_ping = vapi_register_msg(&__vapi_metadata_control_ping);
  VAPI_DBG("Assigned msg id %d to control_ping", vapi_msg_id_control_ping);
}
#endif

#ifndef defined_vapi_msg_cli_reply
#define defined_vapi_msg_cli_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u64 reply_in_shmem; 
} vapi_payload_cli_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_cli_reply payload;
} vapi_msg_cli_reply;

static inline void vapi_msg_cli_reply_payload_hton(vapi_payload_cli_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->reply_in_shmem = htobe64(payload->reply_in_shmem);
}

static inline void vapi_msg_cli_reply_payload_ntoh(vapi_payload_cli_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->reply_in_shmem = be64toh(payload->reply_in_shmem);
}

static inline void vapi_msg_cli_reply_hton(vapi_msg_cli_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_cli_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_cli_reply_ntoh(vapi_msg_cli_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_cli_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_cli_reply_msg_size(vapi_msg_cli_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_cli_reply()
{
  static const char name[] = "cli_reply";
  static const char name_with_crc[] = "cli_reply_06d68297";
  static vapi_message_desc_t __vapi_metadata_cli_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_cli_reply, payload),
    sizeof(vapi_msg_cli_reply),
    (generic_swap_fn_t)vapi_msg_cli_reply_hton,
    (generic_swap_fn_t)vapi_msg_cli_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_cli_reply = vapi_register_msg(&__vapi_metadata_cli_reply);
  VAPI_DBG("Assigned msg id %d to cli_reply", vapi_msg_id_cli_reply);
}

static inline void vapi_set_vapi_msg_cli_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_cli_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_cli_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_cli
#define defined_vapi_msg_cli
typedef struct __attribute__ ((__packed__)) {
  u64 cmd_in_shmem; 
} vapi_payload_cli;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_cli payload;
} vapi_msg_cli;

static inline void vapi_msg_cli_payload_hton(vapi_payload_cli *payload)
{
  payload->cmd_in_shmem = htobe64(payload->cmd_in_shmem);
}

static inline void vapi_msg_cli_payload_ntoh(vapi_payload_cli *payload)
{
  payload->cmd_in_shmem = be64toh(payload->cmd_in_shmem);
}

static inline void vapi_msg_cli_hton(vapi_msg_cli *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_cli_payload_hton(&msg->payload);
}

static inline void vapi_msg_cli_ntoh(vapi_msg_cli *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_cli_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_cli_msg_size(vapi_msg_cli *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_cli* vapi_alloc_cli(struct vapi_ctx_s *ctx)
{
  vapi_msg_cli *msg = NULL;
  const size_t size = sizeof(vapi_msg_cli);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_cli*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_cli);

  return msg;
}

static inline vapi_error_e vapi_cli(struct vapi_ctx_s *ctx,
  vapi_msg_cli *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_cli_reply *reply),
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
  vapi_msg_cli_hton(msg);
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
    vapi_msg_cli_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_cli()
{
  static const char name[] = "cli";
  static const char name_with_crc[] = "cli_23bfbfff";
  static vapi_message_desc_t __vapi_metadata_cli = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_cli, payload),
    sizeof(vapi_msg_cli),
    (generic_swap_fn_t)vapi_msg_cli_hton,
    (generic_swap_fn_t)vapi_msg_cli_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_cli = vapi_register_msg(&__vapi_metadata_cli);
  VAPI_DBG("Assigned msg id %d to cli", vapi_msg_id_cli);
}
#endif

#ifndef defined_vapi_msg_cli_inband_reply
#define defined_vapi_msg_cli_inband_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vl_api_string_t reply; 
} vapi_payload_cli_inband_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_cli_inband_reply payload;
} vapi_msg_cli_inband_reply;

static inline void vapi_msg_cli_inband_reply_payload_hton(vapi_payload_cli_inband_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_cli_inband_reply_payload_ntoh(vapi_payload_cli_inband_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_cli_inband_reply_hton(vapi_msg_cli_inband_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli_inband_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_cli_inband_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_cli_inband_reply_ntoh(vapi_msg_cli_inband_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli_inband_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_cli_inband_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_cli_inband_reply_msg_size(vapi_msg_cli_inband_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_cli_inband_reply()
{
  static const char name[] = "cli_inband_reply";
  static const char name_with_crc[] = "cli_inband_reply_05879051";
  static vapi_message_desc_t __vapi_metadata_cli_inband_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_cli_inband_reply, payload),
    sizeof(vapi_msg_cli_inband_reply),
    (generic_swap_fn_t)vapi_msg_cli_inband_reply_hton,
    (generic_swap_fn_t)vapi_msg_cli_inband_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_cli_inband_reply = vapi_register_msg(&__vapi_metadata_cli_inband_reply);
  VAPI_DBG("Assigned msg id %d to cli_inband_reply", vapi_msg_id_cli_inband_reply);
}

static inline void vapi_set_vapi_msg_cli_inband_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_cli_inband_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_cli_inband_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_cli_inband
#define defined_vapi_msg_cli_inband
typedef struct __attribute__ ((__packed__)) {
  vl_api_string_t cmd; 
} vapi_payload_cli_inband;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_cli_inband payload;
} vapi_msg_cli_inband;

static inline void vapi_msg_cli_inband_payload_hton(vapi_payload_cli_inband *payload)
{

}

static inline void vapi_msg_cli_inband_payload_ntoh(vapi_payload_cli_inband *payload)
{

}

static inline void vapi_msg_cli_inband_hton(vapi_msg_cli_inband *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli_inband'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_cli_inband_payload_hton(&msg->payload);
}

static inline void vapi_msg_cli_inband_ntoh(vapi_msg_cli_inband *msg)
{
  VAPI_DBG("Swapping `vapi_msg_cli_inband'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_cli_inband_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_cli_inband_msg_size(vapi_msg_cli_inband *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_cli_inband* vapi_alloc_cli_inband(struct vapi_ctx_s *ctx)
{
  vapi_msg_cli_inband *msg = NULL;
  const size_t size = sizeof(vapi_msg_cli_inband);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_cli_inband*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_cli_inband);

  return msg;
}

static inline vapi_error_e vapi_cli_inband(struct vapi_ctx_s *ctx,
  vapi_msg_cli_inband *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_cli_inband_reply *reply),
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
  vapi_msg_cli_inband_hton(msg);
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
    vapi_msg_cli_inband_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_cli_inband()
{
  static const char name[] = "cli_inband";
  static const char name_with_crc[] = "cli_inband_f8377302";
  static vapi_message_desc_t __vapi_metadata_cli_inband = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_cli_inband, payload),
    sizeof(vapi_msg_cli_inband),
    (generic_swap_fn_t)vapi_msg_cli_inband_hton,
    (generic_swap_fn_t)vapi_msg_cli_inband_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_cli_inband = vapi_register_msg(&__vapi_metadata_cli_inband);
  VAPI_DBG("Assigned msg id %d to cli_inband", vapi_msg_id_cli_inband);
}
#endif

#ifndef defined_vapi_msg_get_node_index_reply
#define defined_vapi_msg_get_node_index_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 node_index; 
} vapi_payload_get_node_index_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_get_node_index_reply payload;
} vapi_msg_get_node_index_reply;

static inline void vapi_msg_get_node_index_reply_payload_hton(vapi_payload_get_node_index_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->node_index = htobe32(payload->node_index);
}

static inline void vapi_msg_get_node_index_reply_payload_ntoh(vapi_payload_get_node_index_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->node_index = be32toh(payload->node_index);
}

static inline void vapi_msg_get_node_index_reply_hton(vapi_msg_get_node_index_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_index_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_get_node_index_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_node_index_reply_ntoh(vapi_msg_get_node_index_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_index_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_get_node_index_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_node_index_reply_msg_size(vapi_msg_get_node_index_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_get_node_index_reply()
{
  static const char name[] = "get_node_index_reply";
  static const char name_with_crc[] = "get_node_index_reply_a8600b89";
  static vapi_message_desc_t __vapi_metadata_get_node_index_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_get_node_index_reply, payload),
    sizeof(vapi_msg_get_node_index_reply),
    (generic_swap_fn_t)vapi_msg_get_node_index_reply_hton,
    (generic_swap_fn_t)vapi_msg_get_node_index_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_node_index_reply = vapi_register_msg(&__vapi_metadata_get_node_index_reply);
  VAPI_DBG("Assigned msg id %d to get_node_index_reply", vapi_msg_id_get_node_index_reply);
}

static inline void vapi_set_vapi_msg_get_node_index_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_get_node_index_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_get_node_index_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_get_node_index
#define defined_vapi_msg_get_node_index
typedef struct __attribute__ ((__packed__)) {
  u8 node_name[64]; 
} vapi_payload_get_node_index;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_get_node_index payload;
} vapi_msg_get_node_index;

static inline void vapi_msg_get_node_index_payload_hton(vapi_payload_get_node_index *payload)
{

}

static inline void vapi_msg_get_node_index_payload_ntoh(vapi_payload_get_node_index *payload)
{

}

static inline void vapi_msg_get_node_index_hton(vapi_msg_get_node_index *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_index'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_get_node_index_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_node_index_ntoh(vapi_msg_get_node_index *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_index'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_get_node_index_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_node_index_msg_size(vapi_msg_get_node_index *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_get_node_index* vapi_alloc_get_node_index(struct vapi_ctx_s *ctx)
{
  vapi_msg_get_node_index *msg = NULL;
  const size_t size = sizeof(vapi_msg_get_node_index);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_get_node_index*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_get_node_index);

  return msg;
}

static inline vapi_error_e vapi_get_node_index(struct vapi_ctx_s *ctx,
  vapi_msg_get_node_index *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_get_node_index_reply *reply),
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
  vapi_msg_get_node_index_hton(msg);
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
    vapi_msg_get_node_index_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_get_node_index()
{
  static const char name[] = "get_node_index";
  static const char name_with_crc[] = "get_node_index_f1984c64";
  static vapi_message_desc_t __vapi_metadata_get_node_index = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_get_node_index, payload),
    sizeof(vapi_msg_get_node_index),
    (generic_swap_fn_t)vapi_msg_get_node_index_hton,
    (generic_swap_fn_t)vapi_msg_get_node_index_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_node_index = vapi_register_msg(&__vapi_metadata_get_node_index);
  VAPI_DBG("Assigned msg id %d to get_node_index", vapi_msg_id_get_node_index);
}
#endif

#ifndef defined_vapi_msg_add_node_next_reply
#define defined_vapi_msg_add_node_next_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 next_index; 
} vapi_payload_add_node_next_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_add_node_next_reply payload;
} vapi_msg_add_node_next_reply;

static inline void vapi_msg_add_node_next_reply_payload_hton(vapi_payload_add_node_next_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->next_index = htobe32(payload->next_index);
}

static inline void vapi_msg_add_node_next_reply_payload_ntoh(vapi_payload_add_node_next_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->next_index = be32toh(payload->next_index);
}

static inline void vapi_msg_add_node_next_reply_hton(vapi_msg_add_node_next_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_add_node_next_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_add_node_next_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_add_node_next_reply_ntoh(vapi_msg_add_node_next_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_add_node_next_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_add_node_next_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_add_node_next_reply_msg_size(vapi_msg_add_node_next_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_add_node_next_reply()
{
  static const char name[] = "add_node_next_reply";
  static const char name_with_crc[] = "add_node_next_reply_2ed75f32";
  static vapi_message_desc_t __vapi_metadata_add_node_next_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_add_node_next_reply, payload),
    sizeof(vapi_msg_add_node_next_reply),
    (generic_swap_fn_t)vapi_msg_add_node_next_reply_hton,
    (generic_swap_fn_t)vapi_msg_add_node_next_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_add_node_next_reply = vapi_register_msg(&__vapi_metadata_add_node_next_reply);
  VAPI_DBG("Assigned msg id %d to add_node_next_reply", vapi_msg_id_add_node_next_reply);
}

static inline void vapi_set_vapi_msg_add_node_next_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_add_node_next_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_add_node_next_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_add_node_next
#define defined_vapi_msg_add_node_next
typedef struct __attribute__ ((__packed__)) {
  u8 node_name[64];
  u8 next_name[64]; 
} vapi_payload_add_node_next;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_add_node_next payload;
} vapi_msg_add_node_next;

static inline void vapi_msg_add_node_next_payload_hton(vapi_payload_add_node_next *payload)
{

}

static inline void vapi_msg_add_node_next_payload_ntoh(vapi_payload_add_node_next *payload)
{

}

static inline void vapi_msg_add_node_next_hton(vapi_msg_add_node_next *msg)
{
  VAPI_DBG("Swapping `vapi_msg_add_node_next'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_add_node_next_payload_hton(&msg->payload);
}

static inline void vapi_msg_add_node_next_ntoh(vapi_msg_add_node_next *msg)
{
  VAPI_DBG("Swapping `vapi_msg_add_node_next'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_add_node_next_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_add_node_next_msg_size(vapi_msg_add_node_next *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_add_node_next* vapi_alloc_add_node_next(struct vapi_ctx_s *ctx)
{
  vapi_msg_add_node_next *msg = NULL;
  const size_t size = sizeof(vapi_msg_add_node_next);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_add_node_next*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_add_node_next);

  return msg;
}

static inline vapi_error_e vapi_add_node_next(struct vapi_ctx_s *ctx,
  vapi_msg_add_node_next *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_add_node_next_reply *reply),
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
  vapi_msg_add_node_next_hton(msg);
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
    vapi_msg_add_node_next_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_add_node_next()
{
  static const char name[] = "add_node_next";
  static const char name_with_crc[] = "add_node_next_2457116d";
  static vapi_message_desc_t __vapi_metadata_add_node_next = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_add_node_next, payload),
    sizeof(vapi_msg_add_node_next),
    (generic_swap_fn_t)vapi_msg_add_node_next_hton,
    (generic_swap_fn_t)vapi_msg_add_node_next_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_add_node_next = vapi_register_msg(&__vapi_metadata_add_node_next);
  VAPI_DBG("Assigned msg id %d to add_node_next", vapi_msg_id_add_node_next);
}
#endif

#ifndef defined_vapi_msg_show_version_reply
#define defined_vapi_msg_show_version_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 program[32];
  u8 version[32];
  u8 build_date[32];
  u8 build_directory[256]; 
} vapi_payload_show_version_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_version_reply payload;
} vapi_msg_show_version_reply;

static inline void vapi_msg_show_version_reply_payload_hton(vapi_payload_show_version_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_version_reply_payload_ntoh(vapi_payload_show_version_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_version_reply_hton(vapi_msg_show_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_version_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_version_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_version_reply_ntoh(vapi_msg_show_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_version_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_version_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_version_reply_msg_size(vapi_msg_show_version_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_version_reply()
{
  static const char name[] = "show_version_reply";
  static const char name_with_crc[] = "show_version_reply_c919bde1";
  static vapi_message_desc_t __vapi_metadata_show_version_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_version_reply, payload),
    sizeof(vapi_msg_show_version_reply),
    (generic_swap_fn_t)vapi_msg_show_version_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_version_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_version_reply = vapi_register_msg(&__vapi_metadata_show_version_reply);
  VAPI_DBG("Assigned msg id %d to show_version_reply", vapi_msg_id_show_version_reply);
}

static inline void vapi_set_vapi_msg_show_version_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_version_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_version_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_show_version
#define defined_vapi_msg_show_version
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_version;

static inline void vapi_msg_show_version_hton(vapi_msg_show_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_version'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_version_ntoh(vapi_msg_show_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_version'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_version_msg_size(vapi_msg_show_version *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_version* vapi_alloc_show_version(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_version *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_version);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_version*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_version);

  return msg;
}

static inline vapi_error_e vapi_show_version(struct vapi_ctx_s *ctx,
  vapi_msg_show_version *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_version_reply *reply),
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
  vapi_msg_show_version_hton(msg);
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
    vapi_msg_show_version_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_version()
{
  static const char name[] = "show_version";
  static const char name_with_crc[] = "show_version_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_version = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_version),
    (generic_swap_fn_t)vapi_msg_show_version_hton,
    (generic_swap_fn_t)vapi_msg_show_version_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_version = vapi_register_msg(&__vapi_metadata_show_version);
  VAPI_DBG("Assigned msg id %d to show_version", vapi_msg_id_show_version);
}
#endif

#ifndef defined_vapi_msg_show_threads_reply
#define defined_vapi_msg_show_threads_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 count;
  vapi_type_thread_data thread_data[0]; 
} vapi_payload_show_threads_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_threads_reply payload;
} vapi_msg_show_threads_reply;

static inline void vapi_msg_show_threads_reply_payload_hton(vapi_payload_show_threads_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->count = htobe32(payload->count);
  do { unsigned i; for (i = 0; i < be32toh(payload->count); ++i) { vapi_type_thread_data_hton(&payload->thread_data[i]); } } while(0);
}

static inline void vapi_msg_show_threads_reply_payload_ntoh(vapi_payload_show_threads_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->count = be32toh(payload->count);
  do { unsigned i; for (i = 0; i < payload->count; ++i) { vapi_type_thread_data_ntoh(&payload->thread_data[i]); } } while(0);
}

static inline void vapi_msg_show_threads_reply_hton(vapi_msg_show_threads_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_threads_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_threads_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_threads_reply_ntoh(vapi_msg_show_threads_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_threads_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_threads_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_threads_reply_msg_size(vapi_msg_show_threads_reply *msg)
{
  return sizeof(*msg)+ msg->payload.count * sizeof(msg->payload.thread_data[0]);
}

static void __attribute__((constructor)) __vapi_constructor_show_threads_reply()
{
  static const char name[] = "show_threads_reply";
  static const char name_with_crc[] = "show_threads_reply_efd78e83";
  static vapi_message_desc_t __vapi_metadata_show_threads_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_threads_reply, payload),
    sizeof(vapi_msg_show_threads_reply),
    (generic_swap_fn_t)vapi_msg_show_threads_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_threads_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_threads_reply = vapi_register_msg(&__vapi_metadata_show_threads_reply);
  VAPI_DBG("Assigned msg id %d to show_threads_reply", vapi_msg_id_show_threads_reply);
}

static inline void vapi_set_vapi_msg_show_threads_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_threads_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_threads_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_show_threads
#define defined_vapi_msg_show_threads
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_threads;

static inline void vapi_msg_show_threads_hton(vapi_msg_show_threads *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_threads'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_threads_ntoh(vapi_msg_show_threads *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_threads'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_threads_msg_size(vapi_msg_show_threads *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_threads* vapi_alloc_show_threads(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_threads *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_threads);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_threads*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_threads);

  return msg;
}

static inline vapi_error_e vapi_show_threads(struct vapi_ctx_s *ctx,
  vapi_msg_show_threads *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_threads_reply *reply),
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
  vapi_msg_show_threads_hton(msg);
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
    vapi_msg_show_threads_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_threads()
{
  static const char name[] = "show_threads";
  static const char name_with_crc[] = "show_threads_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_threads = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_threads),
    (generic_swap_fn_t)vapi_msg_show_threads_hton,
    (generic_swap_fn_t)vapi_msg_show_threads_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_threads = vapi_register_msg(&__vapi_metadata_show_threads);
  VAPI_DBG("Assigned msg id %d to show_threads", vapi_msg_id_show_threads);
}
#endif

#ifndef defined_vapi_msg_get_node_graph_reply
#define defined_vapi_msg_get_node_graph_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u64 reply_in_shmem; 
} vapi_payload_get_node_graph_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_get_node_graph_reply payload;
} vapi_msg_get_node_graph_reply;

static inline void vapi_msg_get_node_graph_reply_payload_hton(vapi_payload_get_node_graph_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->reply_in_shmem = htobe64(payload->reply_in_shmem);
}

static inline void vapi_msg_get_node_graph_reply_payload_ntoh(vapi_payload_get_node_graph_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->reply_in_shmem = be64toh(payload->reply_in_shmem);
}

static inline void vapi_msg_get_node_graph_reply_hton(vapi_msg_get_node_graph_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_graph_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_get_node_graph_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_node_graph_reply_ntoh(vapi_msg_get_node_graph_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_graph_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_get_node_graph_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_node_graph_reply_msg_size(vapi_msg_get_node_graph_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_get_node_graph_reply()
{
  static const char name[] = "get_node_graph_reply";
  static const char name_with_crc[] = "get_node_graph_reply_06d68297";
  static vapi_message_desc_t __vapi_metadata_get_node_graph_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_get_node_graph_reply, payload),
    sizeof(vapi_msg_get_node_graph_reply),
    (generic_swap_fn_t)vapi_msg_get_node_graph_reply_hton,
    (generic_swap_fn_t)vapi_msg_get_node_graph_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_node_graph_reply = vapi_register_msg(&__vapi_metadata_get_node_graph_reply);
  VAPI_DBG("Assigned msg id %d to get_node_graph_reply", vapi_msg_id_get_node_graph_reply);
}

static inline void vapi_set_vapi_msg_get_node_graph_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_get_node_graph_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_get_node_graph_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_get_node_graph
#define defined_vapi_msg_get_node_graph
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_get_node_graph;

static inline void vapi_msg_get_node_graph_hton(vapi_msg_get_node_graph *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_graph'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_get_node_graph_ntoh(vapi_msg_get_node_graph *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_node_graph'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_get_node_graph_msg_size(vapi_msg_get_node_graph *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_get_node_graph* vapi_alloc_get_node_graph(struct vapi_ctx_s *ctx)
{
  vapi_msg_get_node_graph *msg = NULL;
  const size_t size = sizeof(vapi_msg_get_node_graph);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_get_node_graph*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_get_node_graph);

  return msg;
}

static inline vapi_error_e vapi_get_node_graph(struct vapi_ctx_s *ctx,
  vapi_msg_get_node_graph *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_get_node_graph_reply *reply),
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
  vapi_msg_get_node_graph_hton(msg);
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
    vapi_msg_get_node_graph_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_get_node_graph()
{
  static const char name[] = "get_node_graph";
  static const char name_with_crc[] = "get_node_graph_51077d14";
  static vapi_message_desc_t __vapi_metadata_get_node_graph = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_get_node_graph),
    (generic_swap_fn_t)vapi_msg_get_node_graph_hton,
    (generic_swap_fn_t)vapi_msg_get_node_graph_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_node_graph = vapi_register_msg(&__vapi_metadata_get_node_graph);
  VAPI_DBG("Assigned msg id %d to get_node_graph", vapi_msg_id_get_node_graph);
}
#endif

#ifndef defined_vapi_msg_get_next_index_reply
#define defined_vapi_msg_get_next_index_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 next_index; 
} vapi_payload_get_next_index_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_get_next_index_reply payload;
} vapi_msg_get_next_index_reply;

static inline void vapi_msg_get_next_index_reply_payload_hton(vapi_payload_get_next_index_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->next_index = htobe32(payload->next_index);
}

static inline void vapi_msg_get_next_index_reply_payload_ntoh(vapi_payload_get_next_index_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->next_index = be32toh(payload->next_index);
}

static inline void vapi_msg_get_next_index_reply_hton(vapi_msg_get_next_index_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_next_index_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_get_next_index_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_next_index_reply_ntoh(vapi_msg_get_next_index_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_next_index_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_get_next_index_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_next_index_reply_msg_size(vapi_msg_get_next_index_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_get_next_index_reply()
{
  static const char name[] = "get_next_index_reply";
  static const char name_with_crc[] = "get_next_index_reply_2ed75f32";
  static vapi_message_desc_t __vapi_metadata_get_next_index_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_get_next_index_reply, payload),
    sizeof(vapi_msg_get_next_index_reply),
    (generic_swap_fn_t)vapi_msg_get_next_index_reply_hton,
    (generic_swap_fn_t)vapi_msg_get_next_index_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_next_index_reply = vapi_register_msg(&__vapi_metadata_get_next_index_reply);
  VAPI_DBG("Assigned msg id %d to get_next_index_reply", vapi_msg_id_get_next_index_reply);
}

static inline void vapi_set_vapi_msg_get_next_index_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_get_next_index_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_get_next_index_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_get_next_index
#define defined_vapi_msg_get_next_index
typedef struct __attribute__ ((__packed__)) {
  u8 node_name[64];
  u8 next_name[64]; 
} vapi_payload_get_next_index;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_get_next_index payload;
} vapi_msg_get_next_index;

static inline void vapi_msg_get_next_index_payload_hton(vapi_payload_get_next_index *payload)
{

}

static inline void vapi_msg_get_next_index_payload_ntoh(vapi_payload_get_next_index *payload)
{

}

static inline void vapi_msg_get_next_index_hton(vapi_msg_get_next_index *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_next_index'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_get_next_index_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_next_index_ntoh(vapi_msg_get_next_index *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_next_index'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_get_next_index_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_next_index_msg_size(vapi_msg_get_next_index *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_get_next_index* vapi_alloc_get_next_index(struct vapi_ctx_s *ctx)
{
  vapi_msg_get_next_index *msg = NULL;
  const size_t size = sizeof(vapi_msg_get_next_index);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_get_next_index*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_get_next_index);

  return msg;
}

static inline vapi_error_e vapi_get_next_index(struct vapi_ctx_s *ctx,
  vapi_msg_get_next_index *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_get_next_index_reply *reply),
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
  vapi_msg_get_next_index_hton(msg);
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
    vapi_msg_get_next_index_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_get_next_index()
{
  static const char name[] = "get_next_index";
  static const char name_with_crc[] = "get_next_index_2457116d";
  static vapi_message_desc_t __vapi_metadata_get_next_index = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_get_next_index, payload),
    sizeof(vapi_msg_get_next_index),
    (generic_swap_fn_t)vapi_msg_get_next_index_hton,
    (generic_swap_fn_t)vapi_msg_get_next_index_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_next_index = vapi_register_msg(&__vapi_metadata_get_next_index);
  VAPI_DBG("Assigned msg id %d to get_next_index", vapi_msg_id_get_next_index);
}
#endif

#ifndef defined_vapi_msg_log_details
#define defined_vapi_msg_log_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_timestamp timestamp;
  vapi_enum_log_level level;
  u8 msg_class[32];
  u8 message[256]; 
} vapi_payload_log_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_log_details payload;
} vapi_msg_log_details;

static inline void vapi_msg_log_details_payload_hton(vapi_payload_log_details *payload)
{
  payload->level = (vapi_enum_log_level)htobe32(payload->level);
}

static inline void vapi_msg_log_details_payload_ntoh(vapi_payload_log_details *payload)
{
  payload->level = (vapi_enum_log_level)be32toh(payload->level);
}

static inline void vapi_msg_log_details_hton(vapi_msg_log_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_log_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_log_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_log_details_ntoh(vapi_msg_log_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_log_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_log_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_log_details_msg_size(vapi_msg_log_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_log_details()
{
  static const char name[] = "log_details";
  static const char name_with_crc[] = "log_details_255827a1";
  static vapi_message_desc_t __vapi_metadata_log_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_log_details, payload),
    sizeof(vapi_msg_log_details),
    (generic_swap_fn_t)vapi_msg_log_details_hton,
    (generic_swap_fn_t)vapi_msg_log_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_log_details = vapi_register_msg(&__vapi_metadata_log_details);
  VAPI_DBG("Assigned msg id %d to log_details", vapi_msg_id_log_details);
}

static inline void vapi_set_vapi_msg_log_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_log_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_log_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_log_dump
#define defined_vapi_msg_log_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_timestamp start_timestamp; 
} vapi_payload_log_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_log_dump payload;
} vapi_msg_log_dump;

static inline void vapi_msg_log_dump_payload_hton(vapi_payload_log_dump *payload)
{

}

static inline void vapi_msg_log_dump_payload_ntoh(vapi_payload_log_dump *payload)
{

}

static inline void vapi_msg_log_dump_hton(vapi_msg_log_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_log_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_log_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_log_dump_ntoh(vapi_msg_log_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_log_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_log_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_log_dump_msg_size(vapi_msg_log_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_log_dump* vapi_alloc_log_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_log_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_log_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_log_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_log_dump);

  return msg;
}

static inline vapi_error_e vapi_log_dump(struct vapi_ctx_s *ctx,
  vapi_msg_log_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_log_details *reply),
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
  vapi_msg_log_dump_hton(msg);
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
    vapi_msg_log_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_log_dump()
{
  static const char name[] = "log_dump";
  static const char name_with_crc[] = "log_dump_6ab31753";
  static vapi_message_desc_t __vapi_metadata_log_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_log_dump, payload),
    sizeof(vapi_msg_log_dump),
    (generic_swap_fn_t)vapi_msg_log_dump_hton,
    (generic_swap_fn_t)vapi_msg_log_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_log_dump = vapi_register_msg(&__vapi_metadata_log_dump);
  VAPI_DBG("Assigned msg id %d to log_dump", vapi_msg_id_log_dump);
}
#endif

#ifndef defined_vapi_msg_show_vpe_system_time_reply
#define defined_vapi_msg_show_vpe_system_time_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_timestamp vpe_system_time; 
} vapi_payload_show_vpe_system_time_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_show_vpe_system_time_reply payload;
} vapi_msg_show_vpe_system_time_reply;

static inline void vapi_msg_show_vpe_system_time_reply_payload_hton(vapi_payload_show_vpe_system_time_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_show_vpe_system_time_reply_payload_ntoh(vapi_payload_show_vpe_system_time_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_show_vpe_system_time_reply_hton(vapi_msg_show_vpe_system_time_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_vpe_system_time_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_show_vpe_system_time_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_show_vpe_system_time_reply_ntoh(vapi_msg_show_vpe_system_time_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_vpe_system_time_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_show_vpe_system_time_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_show_vpe_system_time_reply_msg_size(vapi_msg_show_vpe_system_time_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_show_vpe_system_time_reply()
{
  static const char name[] = "show_vpe_system_time_reply";
  static const char name_with_crc[] = "show_vpe_system_time_reply_7ffd8193";
  static vapi_message_desc_t __vapi_metadata_show_vpe_system_time_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_show_vpe_system_time_reply, payload),
    sizeof(vapi_msg_show_vpe_system_time_reply),
    (generic_swap_fn_t)vapi_msg_show_vpe_system_time_reply_hton,
    (generic_swap_fn_t)vapi_msg_show_vpe_system_time_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_vpe_system_time_reply = vapi_register_msg(&__vapi_metadata_show_vpe_system_time_reply);
  VAPI_DBG("Assigned msg id %d to show_vpe_system_time_reply", vapi_msg_id_show_vpe_system_time_reply);
}

static inline void vapi_set_vapi_msg_show_vpe_system_time_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_show_vpe_system_time_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_show_vpe_system_time_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_show_vpe_system_time
#define defined_vapi_msg_show_vpe_system_time
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_show_vpe_system_time;

static inline void vapi_msg_show_vpe_system_time_hton(vapi_msg_show_vpe_system_time *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_vpe_system_time'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_show_vpe_system_time_ntoh(vapi_msg_show_vpe_system_time *msg)
{
  VAPI_DBG("Swapping `vapi_msg_show_vpe_system_time'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_show_vpe_system_time_msg_size(vapi_msg_show_vpe_system_time *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_show_vpe_system_time* vapi_alloc_show_vpe_system_time(struct vapi_ctx_s *ctx)
{
  vapi_msg_show_vpe_system_time *msg = NULL;
  const size_t size = sizeof(vapi_msg_show_vpe_system_time);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_show_vpe_system_time*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_show_vpe_system_time);

  return msg;
}

static inline vapi_error_e vapi_show_vpe_system_time(struct vapi_ctx_s *ctx,
  vapi_msg_show_vpe_system_time *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_show_vpe_system_time_reply *reply),
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
  vapi_msg_show_vpe_system_time_hton(msg);
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
    vapi_msg_show_vpe_system_time_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_show_vpe_system_time()
{
  static const char name[] = "show_vpe_system_time";
  static const char name_with_crc[] = "show_vpe_system_time_51077d14";
  static vapi_message_desc_t __vapi_metadata_show_vpe_system_time = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_show_vpe_system_time),
    (generic_swap_fn_t)vapi_msg_show_vpe_system_time_hton,
    (generic_swap_fn_t)vapi_msg_show_vpe_system_time_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_show_vpe_system_time = vapi_register_msg(&__vapi_metadata_show_vpe_system_time);
  VAPI_DBG("Assigned msg id %d to show_vpe_system_time", vapi_msg_id_show_vpe_system_time);
}
#endif

#ifndef defined_vapi_msg_get_f64_endian_value_reply
#define defined_vapi_msg_get_f64_endian_value_reply
typedef struct __attribute__ ((__packed__)) {
  u32 retval;
  f64 f64_one_result; 
} vapi_payload_get_f64_endian_value_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_get_f64_endian_value_reply payload;
} vapi_msg_get_f64_endian_value_reply;

static inline void vapi_msg_get_f64_endian_value_reply_payload_hton(vapi_payload_get_f64_endian_value_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_get_f64_endian_value_reply_payload_ntoh(vapi_payload_get_f64_endian_value_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_get_f64_endian_value_reply_hton(vapi_msg_get_f64_endian_value_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_endian_value_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_get_f64_endian_value_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_f64_endian_value_reply_ntoh(vapi_msg_get_f64_endian_value_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_endian_value_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_get_f64_endian_value_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_f64_endian_value_reply_msg_size(vapi_msg_get_f64_endian_value_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_get_f64_endian_value_reply()
{
  static const char name[] = "get_f64_endian_value_reply";
  static const char name_with_crc[] = "get_f64_endian_value_reply_7e02e404";
  static vapi_message_desc_t __vapi_metadata_get_f64_endian_value_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_get_f64_endian_value_reply, payload),
    sizeof(vapi_msg_get_f64_endian_value_reply),
    (generic_swap_fn_t)vapi_msg_get_f64_endian_value_reply_hton,
    (generic_swap_fn_t)vapi_msg_get_f64_endian_value_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_f64_endian_value_reply = vapi_register_msg(&__vapi_metadata_get_f64_endian_value_reply);
  VAPI_DBG("Assigned msg id %d to get_f64_endian_value_reply", vapi_msg_id_get_f64_endian_value_reply);
}

static inline void vapi_set_vapi_msg_get_f64_endian_value_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_get_f64_endian_value_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_get_f64_endian_value_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_get_f64_endian_value
#define defined_vapi_msg_get_f64_endian_value
typedef struct __attribute__ ((__packed__)) {
  f64 f64_one; 
} vapi_payload_get_f64_endian_value;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_get_f64_endian_value payload;
} vapi_msg_get_f64_endian_value;

static inline void vapi_msg_get_f64_endian_value_payload_hton(vapi_payload_get_f64_endian_value *payload)
{

}

static inline void vapi_msg_get_f64_endian_value_payload_ntoh(vapi_payload_get_f64_endian_value *payload)
{

}

static inline void vapi_msg_get_f64_endian_value_hton(vapi_msg_get_f64_endian_value *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_endian_value'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_get_f64_endian_value_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_f64_endian_value_ntoh(vapi_msg_get_f64_endian_value *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_endian_value'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_get_f64_endian_value_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_f64_endian_value_msg_size(vapi_msg_get_f64_endian_value *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_get_f64_endian_value* vapi_alloc_get_f64_endian_value(struct vapi_ctx_s *ctx)
{
  vapi_msg_get_f64_endian_value *msg = NULL;
  const size_t size = sizeof(vapi_msg_get_f64_endian_value);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_get_f64_endian_value*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_get_f64_endian_value);

  return msg;
}

static inline vapi_error_e vapi_get_f64_endian_value(struct vapi_ctx_s *ctx,
  vapi_msg_get_f64_endian_value *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_get_f64_endian_value_reply *reply),
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
  vapi_msg_get_f64_endian_value_hton(msg);
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
    vapi_msg_get_f64_endian_value_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_get_f64_endian_value()
{
  static const char name[] = "get_f64_endian_value";
  static const char name_with_crc[] = "get_f64_endian_value_809fcd44";
  static vapi_message_desc_t __vapi_metadata_get_f64_endian_value = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_get_f64_endian_value, payload),
    sizeof(vapi_msg_get_f64_endian_value),
    (generic_swap_fn_t)vapi_msg_get_f64_endian_value_hton,
    (generic_swap_fn_t)vapi_msg_get_f64_endian_value_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_f64_endian_value = vapi_register_msg(&__vapi_metadata_get_f64_endian_value);
  VAPI_DBG("Assigned msg id %d to get_f64_endian_value", vapi_msg_id_get_f64_endian_value);
}
#endif

#ifndef defined_vapi_msg_get_f64_increment_by_one_reply
#define defined_vapi_msg_get_f64_increment_by_one_reply
typedef struct __attribute__ ((__packed__)) {
  u32 retval;
  f64 f64_value; 
} vapi_payload_get_f64_increment_by_one_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_get_f64_increment_by_one_reply payload;
} vapi_msg_get_f64_increment_by_one_reply;

static inline void vapi_msg_get_f64_increment_by_one_reply_payload_hton(vapi_payload_get_f64_increment_by_one_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_get_f64_increment_by_one_reply_payload_ntoh(vapi_payload_get_f64_increment_by_one_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_get_f64_increment_by_one_reply_hton(vapi_msg_get_f64_increment_by_one_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_increment_by_one_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_get_f64_increment_by_one_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_f64_increment_by_one_reply_ntoh(vapi_msg_get_f64_increment_by_one_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_increment_by_one_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_get_f64_increment_by_one_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_f64_increment_by_one_reply_msg_size(vapi_msg_get_f64_increment_by_one_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_get_f64_increment_by_one_reply()
{
  static const char name[] = "get_f64_increment_by_one_reply";
  static const char name_with_crc[] = "get_f64_increment_by_one_reply_d25dbaa3";
  static vapi_message_desc_t __vapi_metadata_get_f64_increment_by_one_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_get_f64_increment_by_one_reply, payload),
    sizeof(vapi_msg_get_f64_increment_by_one_reply),
    (generic_swap_fn_t)vapi_msg_get_f64_increment_by_one_reply_hton,
    (generic_swap_fn_t)vapi_msg_get_f64_increment_by_one_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_f64_increment_by_one_reply = vapi_register_msg(&__vapi_metadata_get_f64_increment_by_one_reply);
  VAPI_DBG("Assigned msg id %d to get_f64_increment_by_one_reply", vapi_msg_id_get_f64_increment_by_one_reply);
}

static inline void vapi_set_vapi_msg_get_f64_increment_by_one_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_get_f64_increment_by_one_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_get_f64_increment_by_one_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_get_f64_increment_by_one
#define defined_vapi_msg_get_f64_increment_by_one
typedef struct __attribute__ ((__packed__)) {
  f64 f64_value; 
} vapi_payload_get_f64_increment_by_one;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_get_f64_increment_by_one payload;
} vapi_msg_get_f64_increment_by_one;

static inline void vapi_msg_get_f64_increment_by_one_payload_hton(vapi_payload_get_f64_increment_by_one *payload)
{

}

static inline void vapi_msg_get_f64_increment_by_one_payload_ntoh(vapi_payload_get_f64_increment_by_one *payload)
{

}

static inline void vapi_msg_get_f64_increment_by_one_hton(vapi_msg_get_f64_increment_by_one *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_increment_by_one'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_get_f64_increment_by_one_payload_hton(&msg->payload);
}

static inline void vapi_msg_get_f64_increment_by_one_ntoh(vapi_msg_get_f64_increment_by_one *msg)
{
  VAPI_DBG("Swapping `vapi_msg_get_f64_increment_by_one'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_get_f64_increment_by_one_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_get_f64_increment_by_one_msg_size(vapi_msg_get_f64_increment_by_one *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_get_f64_increment_by_one* vapi_alloc_get_f64_increment_by_one(struct vapi_ctx_s *ctx)
{
  vapi_msg_get_f64_increment_by_one *msg = NULL;
  const size_t size = sizeof(vapi_msg_get_f64_increment_by_one);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_get_f64_increment_by_one*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_get_f64_increment_by_one);

  return msg;
}

static inline vapi_error_e vapi_get_f64_increment_by_one(struct vapi_ctx_s *ctx,
  vapi_msg_get_f64_increment_by_one *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_get_f64_increment_by_one_reply *reply),
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
  vapi_msg_get_f64_increment_by_one_hton(msg);
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
    vapi_msg_get_f64_increment_by_one_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_get_f64_increment_by_one()
{
  static const char name[] = "get_f64_increment_by_one";
  static const char name_with_crc[] = "get_f64_increment_by_one_b64f027e";
  static vapi_message_desc_t __vapi_metadata_get_f64_increment_by_one = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_get_f64_increment_by_one, payload),
    sizeof(vapi_msg_get_f64_increment_by_one),
    (generic_swap_fn_t)vapi_msg_get_f64_increment_by_one_hton,
    (generic_swap_fn_t)vapi_msg_get_f64_increment_by_one_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_get_f64_increment_by_one = vapi_register_msg(&__vapi_metadata_get_f64_increment_by_one);
  VAPI_DBG("Assigned msg id %d to get_f64_increment_by_one", vapi_msg_id_get_f64_increment_by_one);
}
#endif



static inline vapi_error_e
vapi_send_with_control_ping (vapi_ctx_t ctx, void *msg, u32 context)
{
  vapi_msg_control_ping *ping = vapi_alloc_control_ping (ctx);
  if (!ping)
    {
      return VAPI_ENOMEM;
    }
  ping->header.context = context;
  vapi_msg_control_ping_hton (ping);
  return vapi_send2 (ctx, msg, ping);
}


#ifdef __cplusplus
}
#endif

#endif
