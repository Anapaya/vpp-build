#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ip_punt_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ip_punt_api_json

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

extern vapi_msg_id_t vapi_msg_id_punt_socket_dump;
extern vapi_msg_id_t vapi_msg_id_punt_socket_register;
extern vapi_msg_id_t vapi_msg_id_punt_socket_deregister;
extern vapi_msg_id_t vapi_msg_id_punt_socket_register_reply;
extern vapi_msg_id_t vapi_msg_id_punt_socket_details;
extern vapi_msg_id_t vapi_msg_id_set_punt;
extern vapi_msg_id_t vapi_msg_id_set_punt_reply;
extern vapi_msg_id_t vapi_msg_id_punt_socket_deregister_reply;

#define DEFINE_VAPI_MSG_IDS_PUNT_API_JSON\
  vapi_msg_id_t vapi_msg_id_punt_socket_dump;\
  vapi_msg_id_t vapi_msg_id_punt_socket_register;\
  vapi_msg_id_t vapi_msg_id_punt_socket_deregister;\
  vapi_msg_id_t vapi_msg_id_punt_socket_register_reply;\
  vapi_msg_id_t vapi_msg_id_punt_socket_details;\
  vapi_msg_id_t vapi_msg_id_set_punt;\
  vapi_msg_id_t vapi_msg_id_set_punt_reply;\
  vapi_msg_id_t vapi_msg_id_punt_socket_deregister_reply;


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

#ifndef defined_vapi_enum_punt_type
#define defined_vapi_enum_punt_type
typedef enum {
  PUNT_API_TYPE_L4 = 1,
  PUNT_API_TYPE_IP_PROTO = 2,
  PUNT_API_TYPE_EXCEPTION = 3,
} vapi_enum_punt_type;

#endif

#ifndef defined_vapi_type_ip4_address
#define defined_vapi_type_ip4_address
typedef u8 vapi_type_ip4_address[4];

#endif

#ifndef defined_vapi_type_ip6_address
#define defined_vapi_type_ip6_address
typedef u8 vapi_type_ip6_address[16];

#endif

#ifndef defined_vapi_union_address_union
#define defined_vapi_union_address_union
typedef union {
  vapi_type_ip4_address ip4;
  vapi_type_ip6_address ip6;
} vapi_union_address_union;

#endif

#ifndef defined_vapi_type_punt_exception
#define defined_vapi_type_punt_exception
typedef struct __attribute__((__packed__)) {
  u32 id;
} vapi_type_punt_exception;

static inline void vapi_type_punt_exception_hton(vapi_type_punt_exception *msg)
{
  msg->id = htobe32(msg->id);
}

static inline void vapi_type_punt_exception_ntoh(vapi_type_punt_exception *msg)
{
  msg->id = be32toh(msg->id);
}
#endif

#ifndef defined_vapi_type_punt_l4
#define defined_vapi_type_punt_l4
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  vapi_enum_ip_proto protocol;
  u16 port;
} vapi_type_punt_l4;

static inline void vapi_type_punt_l4_hton(vapi_type_punt_l4 *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
  msg->protocol = (vapi_enum_ip_proto)htobe32(msg->protocol);
  msg->port = htobe16(msg->port);
}

static inline void vapi_type_punt_l4_ntoh(vapi_type_punt_l4 *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
  msg->protocol = (vapi_enum_ip_proto)be32toh(msg->protocol);
  msg->port = be16toh(msg->port);
}
#endif

#ifndef defined_vapi_type_punt_ip_proto
#define defined_vapi_type_punt_ip_proto
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  vapi_enum_ip_proto protocol;
} vapi_type_punt_ip_proto;

static inline void vapi_type_punt_ip_proto_hton(vapi_type_punt_ip_proto *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
  msg->protocol = (vapi_enum_ip_proto)htobe32(msg->protocol);
}

static inline void vapi_type_punt_ip_proto_ntoh(vapi_type_punt_ip_proto *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
  msg->protocol = (vapi_enum_ip_proto)be32toh(msg->protocol);
}
#endif

#ifndef defined_vapi_union_punt_union
#define defined_vapi_union_punt_union
typedef union {
  vapi_type_punt_exception exception;
  vapi_type_punt_l4 l4;
  vapi_type_punt_ip_proto ip_proto;
} vapi_union_punt_union;

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

#ifndef defined_vapi_type_punt
#define defined_vapi_type_punt
typedef struct __attribute__((__packed__)) {
  vapi_enum_punt_type type;
  vapi_union_punt_union punt;
} vapi_type_punt;

static inline void vapi_type_punt_hton(vapi_type_punt *msg)
{
  msg->type = (vapi_enum_punt_type)htobe32(msg->type);
}

static inline void vapi_type_punt_ntoh(vapi_type_punt *msg)
{
  msg->type = (vapi_enum_punt_type)be32toh(msg->type);
}
#endif

#ifndef defined_vapi_type_ip6_address_with_prefix
#define defined_vapi_type_ip6_address_with_prefix
typedef vapi_type_ip6_prefix vapi_type_ip6_address_with_prefix;

#endif

#ifndef defined_vapi_type_ip4_address_with_prefix
#define defined_vapi_type_ip4_address_with_prefix
typedef vapi_type_ip4_prefix vapi_type_ip4_address_with_prefix;

#endif

#ifndef defined_vapi_type_address_with_prefix
#define defined_vapi_type_address_with_prefix
typedef vapi_type_prefix vapi_type_address_with_prefix;

#endif

#ifndef defined_vapi_msg_punt_socket_details
#define defined_vapi_msg_punt_socket_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_punt punt;
  u8 pathname[108]; 
} vapi_payload_punt_socket_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_punt_socket_details payload;
} vapi_msg_punt_socket_details;

static inline void vapi_msg_punt_socket_details_payload_hton(vapi_payload_punt_socket_details *payload)
{
  vapi_type_punt_hton(&payload->punt);
}

static inline void vapi_msg_punt_socket_details_payload_ntoh(vapi_payload_punt_socket_details *payload)
{
  vapi_type_punt_ntoh(&payload->punt);
}

static inline void vapi_msg_punt_socket_details_hton(vapi_msg_punt_socket_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_punt_socket_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_punt_socket_details_ntoh(vapi_msg_punt_socket_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_punt_socket_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_punt_socket_details_msg_size(vapi_msg_punt_socket_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_punt_socket_details()
{
  static const char name[] = "punt_socket_details";
  static const char name_with_crc[] = "punt_socket_details_25100aad";
  static vapi_message_desc_t __vapi_metadata_punt_socket_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_punt_socket_details, payload),
    sizeof(vapi_msg_punt_socket_details),
    (generic_swap_fn_t)vapi_msg_punt_socket_details_hton,
    (generic_swap_fn_t)vapi_msg_punt_socket_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_punt_socket_details = vapi_register_msg(&__vapi_metadata_punt_socket_details);
  VAPI_DBG("Assigned msg id %d to punt_socket_details", vapi_msg_id_punt_socket_details);
}

static inline void vapi_set_vapi_msg_punt_socket_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_punt_socket_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_punt_socket_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_punt_socket_dump
#define defined_vapi_msg_punt_socket_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_punt_type type; 
} vapi_payload_punt_socket_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_punt_socket_dump payload;
} vapi_msg_punt_socket_dump;

static inline void vapi_msg_punt_socket_dump_payload_hton(vapi_payload_punt_socket_dump *payload)
{
  payload->type = (vapi_enum_punt_type)htobe32(payload->type);
}

static inline void vapi_msg_punt_socket_dump_payload_ntoh(vapi_payload_punt_socket_dump *payload)
{
  payload->type = (vapi_enum_punt_type)be32toh(payload->type);
}

static inline void vapi_msg_punt_socket_dump_hton(vapi_msg_punt_socket_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_punt_socket_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_punt_socket_dump_ntoh(vapi_msg_punt_socket_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_punt_socket_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_punt_socket_dump_msg_size(vapi_msg_punt_socket_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_punt_socket_dump* vapi_alloc_punt_socket_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_punt_socket_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_punt_socket_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_punt_socket_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_punt_socket_dump);

  return msg;
}

static inline vapi_error_e vapi_punt_socket_dump(struct vapi_ctx_s *ctx,
  vapi_msg_punt_socket_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_punt_socket_details *reply),
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
  vapi_msg_punt_socket_dump_hton(msg);
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
    vapi_msg_punt_socket_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_punt_socket_dump()
{
  static const char name[] = "punt_socket_dump";
  static const char name_with_crc[] = "punt_socket_dump_52974935";
  static vapi_message_desc_t __vapi_metadata_punt_socket_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_punt_socket_dump, payload),
    sizeof(vapi_msg_punt_socket_dump),
    (generic_swap_fn_t)vapi_msg_punt_socket_dump_hton,
    (generic_swap_fn_t)vapi_msg_punt_socket_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_punt_socket_dump = vapi_register_msg(&__vapi_metadata_punt_socket_dump);
  VAPI_DBG("Assigned msg id %d to punt_socket_dump", vapi_msg_id_punt_socket_dump);
}
#endif

#ifndef defined_vapi_msg_punt_socket_register_reply
#define defined_vapi_msg_punt_socket_register_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 pathname[64]; 
} vapi_payload_punt_socket_register_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_punt_socket_register_reply payload;
} vapi_msg_punt_socket_register_reply;

static inline void vapi_msg_punt_socket_register_reply_payload_hton(vapi_payload_punt_socket_register_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_punt_socket_register_reply_payload_ntoh(vapi_payload_punt_socket_register_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_punt_socket_register_reply_hton(vapi_msg_punt_socket_register_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_register_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_punt_socket_register_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_punt_socket_register_reply_ntoh(vapi_msg_punt_socket_register_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_register_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_punt_socket_register_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_punt_socket_register_reply_msg_size(vapi_msg_punt_socket_register_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_punt_socket_register_reply()
{
  static const char name[] = "punt_socket_register_reply";
  static const char name_with_crc[] = "punt_socket_register_reply_42dc0ee6";
  static vapi_message_desc_t __vapi_metadata_punt_socket_register_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_punt_socket_register_reply, payload),
    sizeof(vapi_msg_punt_socket_register_reply),
    (generic_swap_fn_t)vapi_msg_punt_socket_register_reply_hton,
    (generic_swap_fn_t)vapi_msg_punt_socket_register_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_punt_socket_register_reply = vapi_register_msg(&__vapi_metadata_punt_socket_register_reply);
  VAPI_DBG("Assigned msg id %d to punt_socket_register_reply", vapi_msg_id_punt_socket_register_reply);
}

static inline void vapi_set_vapi_msg_punt_socket_register_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_punt_socket_register_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_punt_socket_register_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_punt_socket_register
#define defined_vapi_msg_punt_socket_register
typedef struct __attribute__ ((__packed__)) {
  u32 header_version;
  vapi_type_punt punt;
  u8 pathname[108]; 
} vapi_payload_punt_socket_register;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_punt_socket_register payload;
} vapi_msg_punt_socket_register;

static inline void vapi_msg_punt_socket_register_payload_hton(vapi_payload_punt_socket_register *payload)
{
  payload->header_version = htobe32(payload->header_version);
  vapi_type_punt_hton(&payload->punt);
}

static inline void vapi_msg_punt_socket_register_payload_ntoh(vapi_payload_punt_socket_register *payload)
{
  payload->header_version = be32toh(payload->header_version);
  vapi_type_punt_ntoh(&payload->punt);
}

static inline void vapi_msg_punt_socket_register_hton(vapi_msg_punt_socket_register *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_register'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_punt_socket_register_payload_hton(&msg->payload);
}

static inline void vapi_msg_punt_socket_register_ntoh(vapi_msg_punt_socket_register *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_register'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_punt_socket_register_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_punt_socket_register_msg_size(vapi_msg_punt_socket_register *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_punt_socket_register* vapi_alloc_punt_socket_register(struct vapi_ctx_s *ctx)
{
  vapi_msg_punt_socket_register *msg = NULL;
  const size_t size = sizeof(vapi_msg_punt_socket_register);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_punt_socket_register*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_punt_socket_register);

  return msg;
}

static inline vapi_error_e vapi_punt_socket_register(struct vapi_ctx_s *ctx,
  vapi_msg_punt_socket_register *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_punt_socket_register_reply *reply),
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
  vapi_msg_punt_socket_register_hton(msg);
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
    vapi_msg_punt_socket_register_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_punt_socket_register()
{
  static const char name[] = "punt_socket_register";
  static const char name_with_crc[] = "punt_socket_register_ddc0d8e0";
  static vapi_message_desc_t __vapi_metadata_punt_socket_register = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_punt_socket_register, payload),
    sizeof(vapi_msg_punt_socket_register),
    (generic_swap_fn_t)vapi_msg_punt_socket_register_hton,
    (generic_swap_fn_t)vapi_msg_punt_socket_register_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_punt_socket_register = vapi_register_msg(&__vapi_metadata_punt_socket_register);
  VAPI_DBG("Assigned msg id %d to punt_socket_register", vapi_msg_id_punt_socket_register);
}
#endif

#ifndef defined_vapi_msg_punt_socket_deregister_reply
#define defined_vapi_msg_punt_socket_deregister_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_punt_socket_deregister_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_punt_socket_deregister_reply payload;
} vapi_msg_punt_socket_deregister_reply;

static inline void vapi_msg_punt_socket_deregister_reply_payload_hton(vapi_payload_punt_socket_deregister_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_punt_socket_deregister_reply_payload_ntoh(vapi_payload_punt_socket_deregister_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_punt_socket_deregister_reply_hton(vapi_msg_punt_socket_deregister_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_deregister_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_punt_socket_deregister_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_punt_socket_deregister_reply_ntoh(vapi_msg_punt_socket_deregister_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_deregister_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_punt_socket_deregister_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_punt_socket_deregister_reply_msg_size(vapi_msg_punt_socket_deregister_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_punt_socket_deregister_reply()
{
  static const char name[] = "punt_socket_deregister_reply";
  static const char name_with_crc[] = "punt_socket_deregister_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_punt_socket_deregister_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_punt_socket_deregister_reply, payload),
    sizeof(vapi_msg_punt_socket_deregister_reply),
    (generic_swap_fn_t)vapi_msg_punt_socket_deregister_reply_hton,
    (generic_swap_fn_t)vapi_msg_punt_socket_deregister_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_punt_socket_deregister_reply = vapi_register_msg(&__vapi_metadata_punt_socket_deregister_reply);
  VAPI_DBG("Assigned msg id %d to punt_socket_deregister_reply", vapi_msg_id_punt_socket_deregister_reply);
}

static inline void vapi_set_vapi_msg_punt_socket_deregister_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_punt_socket_deregister_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_punt_socket_deregister_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_punt_socket_deregister
#define defined_vapi_msg_punt_socket_deregister
typedef struct __attribute__ ((__packed__)) {
  vapi_type_punt punt; 
} vapi_payload_punt_socket_deregister;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_punt_socket_deregister payload;
} vapi_msg_punt_socket_deregister;

static inline void vapi_msg_punt_socket_deregister_payload_hton(vapi_payload_punt_socket_deregister *payload)
{
  vapi_type_punt_hton(&payload->punt);
}

static inline void vapi_msg_punt_socket_deregister_payload_ntoh(vapi_payload_punt_socket_deregister *payload)
{
  vapi_type_punt_ntoh(&payload->punt);
}

static inline void vapi_msg_punt_socket_deregister_hton(vapi_msg_punt_socket_deregister *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_deregister'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_punt_socket_deregister_payload_hton(&msg->payload);
}

static inline void vapi_msg_punt_socket_deregister_ntoh(vapi_msg_punt_socket_deregister *msg)
{
  VAPI_DBG("Swapping `vapi_msg_punt_socket_deregister'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_punt_socket_deregister_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_punt_socket_deregister_msg_size(vapi_msg_punt_socket_deregister *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_punt_socket_deregister* vapi_alloc_punt_socket_deregister(struct vapi_ctx_s *ctx)
{
  vapi_msg_punt_socket_deregister *msg = NULL;
  const size_t size = sizeof(vapi_msg_punt_socket_deregister);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_punt_socket_deregister*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_punt_socket_deregister);

  return msg;
}

static inline vapi_error_e vapi_punt_socket_deregister(struct vapi_ctx_s *ctx,
  vapi_msg_punt_socket_deregister *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_punt_socket_deregister_reply *reply),
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
  vapi_msg_punt_socket_deregister_hton(msg);
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
    vapi_msg_punt_socket_deregister_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_punt_socket_deregister()
{
  static const char name[] = "punt_socket_deregister";
  static const char name_with_crc[] = "punt_socket_deregister_98a444f4";
  static vapi_message_desc_t __vapi_metadata_punt_socket_deregister = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_punt_socket_deregister, payload),
    sizeof(vapi_msg_punt_socket_deregister),
    (generic_swap_fn_t)vapi_msg_punt_socket_deregister_hton,
    (generic_swap_fn_t)vapi_msg_punt_socket_deregister_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_punt_socket_deregister = vapi_register_msg(&__vapi_metadata_punt_socket_deregister);
  VAPI_DBG("Assigned msg id %d to punt_socket_deregister", vapi_msg_id_punt_socket_deregister);
}
#endif

#ifndef defined_vapi_msg_set_punt_reply
#define defined_vapi_msg_set_punt_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_set_punt_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_set_punt_reply payload;
} vapi_msg_set_punt_reply;

static inline void vapi_msg_set_punt_reply_payload_hton(vapi_payload_set_punt_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_set_punt_reply_payload_ntoh(vapi_payload_set_punt_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_set_punt_reply_hton(vapi_msg_set_punt_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_punt_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_set_punt_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_punt_reply_ntoh(vapi_msg_set_punt_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_punt_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_set_punt_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_punt_reply_msg_size(vapi_msg_set_punt_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_set_punt_reply()
{
  static const char name[] = "set_punt_reply";
  static const char name_with_crc[] = "set_punt_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_set_punt_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_set_punt_reply, payload),
    sizeof(vapi_msg_set_punt_reply),
    (generic_swap_fn_t)vapi_msg_set_punt_reply_hton,
    (generic_swap_fn_t)vapi_msg_set_punt_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_punt_reply = vapi_register_msg(&__vapi_metadata_set_punt_reply);
  VAPI_DBG("Assigned msg id %d to set_punt_reply", vapi_msg_id_set_punt_reply);
}

static inline void vapi_set_vapi_msg_set_punt_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_set_punt_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_set_punt_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_set_punt
#define defined_vapi_msg_set_punt
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_punt punt; 
} vapi_payload_set_punt;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_set_punt payload;
} vapi_msg_set_punt;

static inline void vapi_msg_set_punt_payload_hton(vapi_payload_set_punt *payload)
{
  vapi_type_punt_hton(&payload->punt);
}

static inline void vapi_msg_set_punt_payload_ntoh(vapi_payload_set_punt *payload)
{
  vapi_type_punt_ntoh(&payload->punt);
}

static inline void vapi_msg_set_punt_hton(vapi_msg_set_punt *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_punt'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_set_punt_payload_hton(&msg->payload);
}

static inline void vapi_msg_set_punt_ntoh(vapi_msg_set_punt *msg)
{
  VAPI_DBG("Swapping `vapi_msg_set_punt'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_set_punt_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_set_punt_msg_size(vapi_msg_set_punt *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_set_punt* vapi_alloc_set_punt(struct vapi_ctx_s *ctx)
{
  vapi_msg_set_punt *msg = NULL;
  const size_t size = sizeof(vapi_msg_set_punt);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_set_punt*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_set_punt);

  return msg;
}

static inline vapi_error_e vapi_set_punt(struct vapi_ctx_s *ctx,
  vapi_msg_set_punt *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_set_punt_reply *reply),
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
  vapi_msg_set_punt_hton(msg);
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
    vapi_msg_set_punt_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_set_punt()
{
  static const char name[] = "set_punt";
  static const char name_with_crc[] = "set_punt_032a42ef";
  static vapi_message_desc_t __vapi_metadata_set_punt = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_set_punt, payload),
    sizeof(vapi_msg_set_punt),
    (generic_swap_fn_t)vapi_msg_set_punt_hton,
    (generic_swap_fn_t)vapi_msg_set_punt_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_set_punt = vapi_register_msg(&__vapi_metadata_set_punt);
  VAPI_DBG("Assigned msg id %d to set_punt", vapi_msg_id_set_punt);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
