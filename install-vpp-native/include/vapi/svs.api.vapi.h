#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_svs_svs_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_svs_svs_api_json

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

extern vapi_msg_id_t vapi_msg_id_svs_plugin_get_version_reply;
extern vapi_msg_id_t vapi_msg_id_svs_enable_disable;
extern vapi_msg_id_t vapi_msg_id_svs_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_svs_dump;
extern vapi_msg_id_t vapi_msg_id_svs_route_add_del;
extern vapi_msg_id_t vapi_msg_id_svs_table_add_del;
extern vapi_msg_id_t vapi_msg_id_svs_route_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_svs_details;
extern vapi_msg_id_t vapi_msg_id_svs_table_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_svs_plugin_get_version;

#define DEFINE_VAPI_MSG_IDS_SVS_API_JSON\
  vapi_msg_id_t vapi_msg_id_svs_plugin_get_version_reply;\
  vapi_msg_id_t vapi_msg_id_svs_enable_disable;\
  vapi_msg_id_t vapi_msg_id_svs_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_svs_dump;\
  vapi_msg_id_t vapi_msg_id_svs_route_add_del;\
  vapi_msg_id_t vapi_msg_id_svs_table_add_del;\
  vapi_msg_id_t vapi_msg_id_svs_route_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_svs_details;\
  vapi_msg_id_t vapi_msg_id_svs_table_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_svs_plugin_get_version;


#ifndef defined_vapi_enum_address_family
#define defined_vapi_enum_address_family
typedef enum {
  ADDRESS_IP4 = 0,
  ADDRESS_IP6 = 1,
} vapi_enum_address_family;

#endif

#ifndef defined_vapi_enum_ip_ecn
#define defined_vapi_enum_ip_ecn
typedef enum {
  IP_API_ECN_NONE = 0,
  IP_API_ECN_ECT0 = 1,
  IP_API_ECN_ECT1 = 2,
  IP_API_ECN_CE = 3,
} vapi_enum_ip_ecn;

#endif

#ifndef defined_vapi_enum_ip_dscp
#define defined_vapi_enum_ip_dscp
typedef enum {
  IP_API_DSCP_CS0 = 0,
  IP_API_DSCP_CS1 = 8,
  IP_API_DSCP_AF11 = 10,
  IP_API_DSCP_AF12 = 12,
  IP_API_DSCP_AF13 = 14,
  IP_API_DSCP_CS2 = 16,
  IP_API_DSCP_AF21 = 18,
  IP_API_DSCP_AF22 = 20,
  IP_API_DSCP_AF23 = 22,
  IP_API_DSCP_CS3 = 24,
  IP_API_DSCP_AF31 = 26,
  IP_API_DSCP_AF32 = 28,
  IP_API_DSCP_AF33 = 30,
  IP_API_DSCP_CS4 = 32,
  IP_API_DSCP_AF41 = 34,
  IP_API_DSCP_AF42 = 36,
  IP_API_DSCP_AF43 = 38,
  IP_API_DSCP_CS5 = 40,
  IP_API_DSCP_EF = 46,
  IP_API_DSCP_CS6 = 48,
  IP_API_DSCP_CS7 = 50,
} vapi_enum_ip_dscp;

#endif

#ifndef defined_vapi_enum_ip_proto
#define defined_vapi_enum_ip_proto
typedef enum {
  IP_API_PROTO_HOPOPT = 0,
  IP_API_PROTO_ICMP = 1,
  IP_API_PROTO_IGMP = 2,
  IP_API_PROTO_TCP = 6,
  IP_API_PROTO_UDP = 17,
  IP_API_PROTO_GRE = 47,
  IP_API_PROTO_AH = 50,
  IP_API_PROTO_ESP = 51,
  IP_API_PROTO_EIGRP = 88,
  IP_API_PROTO_OSPF = 89,
  IP_API_PROTO_SCTP = 132,
  IP_API_PROTO_RESERVED = 255,
} vapi_enum_ip_proto;

#endif

#ifndef defined_vapi_type_ip6_address
#define defined_vapi_type_ip6_address
typedef u8 vapi_type_ip6_address[16];

#endif

#ifndef defined_vapi_type_ip4_address
#define defined_vapi_type_ip4_address
typedef u8 vapi_type_ip4_address[4];

#endif

#ifndef defined_vapi_union_address_union
#define defined_vapi_union_address_union
typedef union {
  vapi_type_ip4_address ip4;
  vapi_type_ip6_address ip6;
} vapi_union_address_union;

#endif

#ifndef defined_vapi_type_ip6_prefix
#define defined_vapi_type_ip6_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_ip6_address address;
  u8 len;
} vapi_type_ip6_prefix;

static inline void vapi_type_ip6_prefix_hton(vapi_type_ip6_prefix *msg)
{

}

static inline void vapi_type_ip6_prefix_ntoh(vapi_type_ip6_prefix *msg)
{

}
#endif

#ifndef defined_vapi_type_ip4_prefix
#define defined_vapi_type_ip4_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_ip4_address address;
  u8 len;
} vapi_type_ip4_prefix;

static inline void vapi_type_ip4_prefix_hton(vapi_type_ip4_prefix *msg)
{

}

static inline void vapi_type_ip4_prefix_ntoh(vapi_type_ip4_prefix *msg)
{

}
#endif

#ifndef defined_vapi_type_prefix_matcher
#define defined_vapi_type_prefix_matcher
typedef struct __attribute__((__packed__)) {
  u8 le;
  u8 ge;
} vapi_type_prefix_matcher;

static inline void vapi_type_prefix_matcher_hton(vapi_type_prefix_matcher *msg)
{

}

static inline void vapi_type_prefix_matcher_ntoh(vapi_type_prefix_matcher *msg)
{

}
#endif

#ifndef defined_vapi_type_address
#define defined_vapi_type_address
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  vapi_union_address_union un;
} vapi_type_address;

static inline void vapi_type_address_hton(vapi_type_address *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
}

static inline void vapi_type_address_ntoh(vapi_type_address *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
}
#endif

#ifndef defined_vapi_type_prefix
#define defined_vapi_type_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_address address;
  u8 len;
} vapi_type_prefix;

static inline void vapi_type_prefix_hton(vapi_type_prefix *msg)
{
  vapi_type_address_hton(&msg->address);
}

static inline void vapi_type_prefix_ntoh(vapi_type_prefix *msg)
{
  vapi_type_address_ntoh(&msg->address);
}
#endif

#ifndef defined_vapi_type_mprefix
#define defined_vapi_type_mprefix
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  u16 grp_address_length;
  vapi_union_address_union grp_address;
  vapi_union_address_union src_address;
} vapi_type_mprefix;

static inline void vapi_type_mprefix_hton(vapi_type_mprefix *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
  msg->grp_address_length = htobe16(msg->grp_address_length);
}

static inline void vapi_type_mprefix_ntoh(vapi_type_mprefix *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
  msg->grp_address_length = be16toh(msg->grp_address_length);
}
#endif

#ifndef defined_vapi_msg_svs_plugin_get_version_reply
#define defined_vapi_msg_svs_plugin_get_version_reply
typedef struct __attribute__ ((__packed__)) {
  u32 major;
  u32 minor; 
} vapi_payload_svs_plugin_get_version_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_svs_plugin_get_version_reply payload;
} vapi_msg_svs_plugin_get_version_reply;

static inline void vapi_msg_svs_plugin_get_version_reply_payload_hton(vapi_payload_svs_plugin_get_version_reply *payload)
{
  payload->major = htobe32(payload->major);
  payload->minor = htobe32(payload->minor);
}

static inline void vapi_msg_svs_plugin_get_version_reply_payload_ntoh(vapi_payload_svs_plugin_get_version_reply *payload)
{
  payload->major = be32toh(payload->major);
  payload->minor = be32toh(payload->minor);
}

static inline void vapi_msg_svs_plugin_get_version_reply_hton(vapi_msg_svs_plugin_get_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_plugin_get_version_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_svs_plugin_get_version_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_plugin_get_version_reply_ntoh(vapi_msg_svs_plugin_get_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_plugin_get_version_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_svs_plugin_get_version_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_plugin_get_version_reply_msg_size(vapi_msg_svs_plugin_get_version_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_svs_plugin_get_version_reply()
{
  static const char name[] = "svs_plugin_get_version_reply";
  static const char name_with_crc[] = "svs_plugin_get_version_reply_9b32cf86";
  static vapi_message_desc_t __vapi_metadata_svs_plugin_get_version_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_svs_plugin_get_version_reply, payload),
    sizeof(vapi_msg_svs_plugin_get_version_reply),
    (generic_swap_fn_t)vapi_msg_svs_plugin_get_version_reply_hton,
    (generic_swap_fn_t)vapi_msg_svs_plugin_get_version_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_plugin_get_version_reply = vapi_register_msg(&__vapi_metadata_svs_plugin_get_version_reply);
  VAPI_DBG("Assigned msg id %d to svs_plugin_get_version_reply", vapi_msg_id_svs_plugin_get_version_reply);
}

static inline void vapi_set_vapi_msg_svs_plugin_get_version_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_svs_plugin_get_version_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_svs_plugin_get_version_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_svs_enable_disable_reply
#define defined_vapi_msg_svs_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_svs_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_svs_enable_disable_reply payload;
} vapi_msg_svs_enable_disable_reply;

static inline void vapi_msg_svs_enable_disable_reply_payload_hton(vapi_payload_svs_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_svs_enable_disable_reply_payload_ntoh(vapi_payload_svs_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_svs_enable_disable_reply_hton(vapi_msg_svs_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_svs_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_enable_disable_reply_ntoh(vapi_msg_svs_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_svs_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_enable_disable_reply_msg_size(vapi_msg_svs_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_svs_enable_disable_reply()
{
  static const char name[] = "svs_enable_disable_reply";
  static const char name_with_crc[] = "svs_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_svs_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_svs_enable_disable_reply, payload),
    sizeof(vapi_msg_svs_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_svs_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_svs_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_enable_disable_reply = vapi_register_msg(&__vapi_metadata_svs_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to svs_enable_disable_reply", vapi_msg_id_svs_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_svs_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_svs_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_svs_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_svs_enable_disable
#define defined_vapi_msg_svs_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_enable;
  vapi_enum_address_family af;
  u32 table_id;
  u32 sw_if_index; 
} vapi_payload_svs_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_svs_enable_disable payload;
} vapi_msg_svs_enable_disable;

static inline void vapi_msg_svs_enable_disable_payload_hton(vapi_payload_svs_enable_disable *payload)
{
  payload->af = (vapi_enum_address_family)htobe32(payload->af);
  payload->table_id = htobe32(payload->table_id);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_svs_enable_disable_payload_ntoh(vapi_payload_svs_enable_disable *payload)
{
  payload->af = (vapi_enum_address_family)be32toh(payload->af);
  payload->table_id = be32toh(payload->table_id);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_svs_enable_disable_hton(vapi_msg_svs_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_svs_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_enable_disable_ntoh(vapi_msg_svs_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_svs_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_enable_disable_msg_size(vapi_msg_svs_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_svs_enable_disable* vapi_alloc_svs_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_svs_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_svs_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_svs_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_svs_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_svs_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_svs_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_svs_enable_disable_reply *reply),
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
  vapi_msg_svs_enable_disable_hton(msg);
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
    vapi_msg_svs_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_svs_enable_disable()
{
  static const char name[] = "svs_enable_disable";
  static const char name_with_crc[] = "svs_enable_disable_1ad57a4b";
  static vapi_message_desc_t __vapi_metadata_svs_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_svs_enable_disable, payload),
    sizeof(vapi_msg_svs_enable_disable),
    (generic_swap_fn_t)vapi_msg_svs_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_svs_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_enable_disable = vapi_register_msg(&__vapi_metadata_svs_enable_disable);
  VAPI_DBG("Assigned msg id %d to svs_enable_disable", vapi_msg_id_svs_enable_disable);
}
#endif

#ifndef defined_vapi_msg_svs_details
#define defined_vapi_msg_svs_details
typedef struct __attribute__ ((__packed__)) {
  u32 table_id;
  u32 sw_if_index;
  vapi_enum_address_family af; 
} vapi_payload_svs_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_svs_details payload;
} vapi_msg_svs_details;

static inline void vapi_msg_svs_details_payload_hton(vapi_payload_svs_details *payload)
{
  payload->table_id = htobe32(payload->table_id);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->af = (vapi_enum_address_family)htobe32(payload->af);
}

static inline void vapi_msg_svs_details_payload_ntoh(vapi_payload_svs_details *payload)
{
  payload->table_id = be32toh(payload->table_id);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->af = (vapi_enum_address_family)be32toh(payload->af);
}

static inline void vapi_msg_svs_details_hton(vapi_msg_svs_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_svs_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_details_ntoh(vapi_msg_svs_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_svs_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_details_msg_size(vapi_msg_svs_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_svs_details()
{
  static const char name[] = "svs_details";
  static const char name_with_crc[] = "svs_details_a4e17ae5";
  static vapi_message_desc_t __vapi_metadata_svs_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_svs_details, payload),
    sizeof(vapi_msg_svs_details),
    (generic_swap_fn_t)vapi_msg_svs_details_hton,
    (generic_swap_fn_t)vapi_msg_svs_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_details = vapi_register_msg(&__vapi_metadata_svs_details);
  VAPI_DBG("Assigned msg id %d to svs_details", vapi_msg_id_svs_details);
}

static inline void vapi_set_vapi_msg_svs_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_svs_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_svs_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_svs_dump
#define defined_vapi_msg_svs_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_svs_dump;

static inline void vapi_msg_svs_dump_hton(vapi_msg_svs_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_svs_dump_ntoh(vapi_msg_svs_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_svs_dump_msg_size(vapi_msg_svs_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_svs_dump* vapi_alloc_svs_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_svs_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_svs_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_svs_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_svs_dump);

  return msg;
}

static inline vapi_error_e vapi_svs_dump(struct vapi_ctx_s *ctx,
  vapi_msg_svs_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_svs_details *reply),
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
  vapi_msg_svs_dump_hton(msg);
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
    vapi_msg_svs_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_svs_dump()
{
  static const char name[] = "svs_dump";
  static const char name_with_crc[] = "svs_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_svs_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_svs_dump),
    (generic_swap_fn_t)vapi_msg_svs_dump_hton,
    (generic_swap_fn_t)vapi_msg_svs_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_dump = vapi_register_msg(&__vapi_metadata_svs_dump);
  VAPI_DBG("Assigned msg id %d to svs_dump", vapi_msg_id_svs_dump);
}
#endif

#ifndef defined_vapi_msg_svs_route_add_del_reply
#define defined_vapi_msg_svs_route_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_svs_route_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_svs_route_add_del_reply payload;
} vapi_msg_svs_route_add_del_reply;

static inline void vapi_msg_svs_route_add_del_reply_payload_hton(vapi_payload_svs_route_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_svs_route_add_del_reply_payload_ntoh(vapi_payload_svs_route_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_svs_route_add_del_reply_hton(vapi_msg_svs_route_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_route_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_svs_route_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_route_add_del_reply_ntoh(vapi_msg_svs_route_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_route_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_svs_route_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_route_add_del_reply_msg_size(vapi_msg_svs_route_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_svs_route_add_del_reply()
{
  static const char name[] = "svs_route_add_del_reply";
  static const char name_with_crc[] = "svs_route_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_svs_route_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_svs_route_add_del_reply, payload),
    sizeof(vapi_msg_svs_route_add_del_reply),
    (generic_swap_fn_t)vapi_msg_svs_route_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_svs_route_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_route_add_del_reply = vapi_register_msg(&__vapi_metadata_svs_route_add_del_reply);
  VAPI_DBG("Assigned msg id %d to svs_route_add_del_reply", vapi_msg_id_svs_route_add_del_reply);
}

static inline void vapi_set_vapi_msg_svs_route_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_svs_route_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_svs_route_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_svs_route_add_del
#define defined_vapi_msg_svs_route_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_prefix prefix;
  u32 table_id;
  u32 source_table_id; 
} vapi_payload_svs_route_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_svs_route_add_del payload;
} vapi_msg_svs_route_add_del;

static inline void vapi_msg_svs_route_add_del_payload_hton(vapi_payload_svs_route_add_del *payload)
{
  vapi_type_prefix_hton(&payload->prefix);
  payload->table_id = htobe32(payload->table_id);
  payload->source_table_id = htobe32(payload->source_table_id);
}

static inline void vapi_msg_svs_route_add_del_payload_ntoh(vapi_payload_svs_route_add_del *payload)
{
  vapi_type_prefix_ntoh(&payload->prefix);
  payload->table_id = be32toh(payload->table_id);
  payload->source_table_id = be32toh(payload->source_table_id);
}

static inline void vapi_msg_svs_route_add_del_hton(vapi_msg_svs_route_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_route_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_svs_route_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_route_add_del_ntoh(vapi_msg_svs_route_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_route_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_svs_route_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_route_add_del_msg_size(vapi_msg_svs_route_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_svs_route_add_del* vapi_alloc_svs_route_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_svs_route_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_svs_route_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_svs_route_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_svs_route_add_del);

  return msg;
}

static inline vapi_error_e vapi_svs_route_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_svs_route_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_svs_route_add_del_reply *reply),
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
  vapi_msg_svs_route_add_del_hton(msg);
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
    vapi_msg_svs_route_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_svs_route_add_del()
{
  static const char name[] = "svs_route_add_del";
  static const char name_with_crc[] = "svs_route_add_del_a2a47039";
  static vapi_message_desc_t __vapi_metadata_svs_route_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_svs_route_add_del, payload),
    sizeof(vapi_msg_svs_route_add_del),
    (generic_swap_fn_t)vapi_msg_svs_route_add_del_hton,
    (generic_swap_fn_t)vapi_msg_svs_route_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_route_add_del = vapi_register_msg(&__vapi_metadata_svs_route_add_del);
  VAPI_DBG("Assigned msg id %d to svs_route_add_del", vapi_msg_id_svs_route_add_del);
}
#endif

#ifndef defined_vapi_msg_svs_table_add_del_reply
#define defined_vapi_msg_svs_table_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_svs_table_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_svs_table_add_del_reply payload;
} vapi_msg_svs_table_add_del_reply;

static inline void vapi_msg_svs_table_add_del_reply_payload_hton(vapi_payload_svs_table_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_svs_table_add_del_reply_payload_ntoh(vapi_payload_svs_table_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_svs_table_add_del_reply_hton(vapi_msg_svs_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_table_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_svs_table_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_table_add_del_reply_ntoh(vapi_msg_svs_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_table_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_svs_table_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_table_add_del_reply_msg_size(vapi_msg_svs_table_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_svs_table_add_del_reply()
{
  static const char name[] = "svs_table_add_del_reply";
  static const char name_with_crc[] = "svs_table_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_svs_table_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_svs_table_add_del_reply, payload),
    sizeof(vapi_msg_svs_table_add_del_reply),
    (generic_swap_fn_t)vapi_msg_svs_table_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_svs_table_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_table_add_del_reply = vapi_register_msg(&__vapi_metadata_svs_table_add_del_reply);
  VAPI_DBG("Assigned msg id %d to svs_table_add_del_reply", vapi_msg_id_svs_table_add_del_reply);
}

static inline void vapi_set_vapi_msg_svs_table_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_svs_table_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_svs_table_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_svs_table_add_del
#define defined_vapi_msg_svs_table_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_enum_address_family af;
  u32 table_id; 
} vapi_payload_svs_table_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_svs_table_add_del payload;
} vapi_msg_svs_table_add_del;

static inline void vapi_msg_svs_table_add_del_payload_hton(vapi_payload_svs_table_add_del *payload)
{
  payload->af = (vapi_enum_address_family)htobe32(payload->af);
  payload->table_id = htobe32(payload->table_id);
}

static inline void vapi_msg_svs_table_add_del_payload_ntoh(vapi_payload_svs_table_add_del *payload)
{
  payload->af = (vapi_enum_address_family)be32toh(payload->af);
  payload->table_id = be32toh(payload->table_id);
}

static inline void vapi_msg_svs_table_add_del_hton(vapi_msg_svs_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_table_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_svs_table_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_svs_table_add_del_ntoh(vapi_msg_svs_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_table_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_svs_table_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_svs_table_add_del_msg_size(vapi_msg_svs_table_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_svs_table_add_del* vapi_alloc_svs_table_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_svs_table_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_svs_table_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_svs_table_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_svs_table_add_del);

  return msg;
}

static inline vapi_error_e vapi_svs_table_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_svs_table_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_svs_table_add_del_reply *reply),
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
  vapi_msg_svs_table_add_del_hton(msg);
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
    vapi_msg_svs_table_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_svs_table_add_del()
{
  static const char name[] = "svs_table_add_del";
  static const char name_with_crc[] = "svs_table_add_del_b74bff95";
  static vapi_message_desc_t __vapi_metadata_svs_table_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_svs_table_add_del, payload),
    sizeof(vapi_msg_svs_table_add_del),
    (generic_swap_fn_t)vapi_msg_svs_table_add_del_hton,
    (generic_swap_fn_t)vapi_msg_svs_table_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_table_add_del = vapi_register_msg(&__vapi_metadata_svs_table_add_del);
  VAPI_DBG("Assigned msg id %d to svs_table_add_del", vapi_msg_id_svs_table_add_del);
}
#endif

#ifndef defined_vapi_msg_svs_plugin_get_version
#define defined_vapi_msg_svs_plugin_get_version
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_svs_plugin_get_version;

static inline void vapi_msg_svs_plugin_get_version_hton(vapi_msg_svs_plugin_get_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_plugin_get_version'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_svs_plugin_get_version_ntoh(vapi_msg_svs_plugin_get_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_svs_plugin_get_version'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_svs_plugin_get_version_msg_size(vapi_msg_svs_plugin_get_version *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_svs_plugin_get_version* vapi_alloc_svs_plugin_get_version(struct vapi_ctx_s *ctx)
{
  vapi_msg_svs_plugin_get_version *msg = NULL;
  const size_t size = sizeof(vapi_msg_svs_plugin_get_version);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_svs_plugin_get_version*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_svs_plugin_get_version);

  return msg;
}

static inline vapi_error_e vapi_svs_plugin_get_version(struct vapi_ctx_s *ctx,
  vapi_msg_svs_plugin_get_version *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_svs_plugin_get_version_reply *reply),
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
  vapi_msg_svs_plugin_get_version_hton(msg);
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
    vapi_msg_svs_plugin_get_version_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_svs_plugin_get_version()
{
  static const char name[] = "svs_plugin_get_version";
  static const char name_with_crc[] = "svs_plugin_get_version_51077d14";
  static vapi_message_desc_t __vapi_metadata_svs_plugin_get_version = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_svs_plugin_get_version),
    (generic_swap_fn_t)vapi_msg_svs_plugin_get_version_hton,
    (generic_swap_fn_t)vapi_msg_svs_plugin_get_version_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_svs_plugin_get_version = vapi_register_msg(&__vapi_metadata_svs_plugin_get_version);
  VAPI_DBG("Assigned msg id %d to svs_plugin_get_version", vapi_msg_id_svs_plugin_get_version);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
