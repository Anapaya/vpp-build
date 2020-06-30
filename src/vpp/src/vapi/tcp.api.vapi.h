#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_tcp_tcp_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_tcp_tcp_api_json

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

extern vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses;
extern vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses_reply;

#define DEFINE_VAPI_MSG_IDS_TCP_API_JSON\
  vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses;\
  vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses_reply;


#ifndef defined_vapi_enum_address_family
#define defined_vapi_enum_address_family
typedef enum {
  ADDRESS_IP4 = 0,
  ADDRESS_IP6 = 1,
} __attribute__((packed)) vapi_enum_address_family;

#endif

#ifndef defined_vapi_enum_ip_ecn
#define defined_vapi_enum_ip_ecn
typedef enum {
  IP_API_ECN_NONE = 0,
  IP_API_ECN_ECT0 = 1,
  IP_API_ECN_ECT1 = 2,
  IP_API_ECN_CE = 3,
} __attribute__((packed)) vapi_enum_ip_ecn;

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
} __attribute__((packed)) vapi_enum_ip_dscp;

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
  IP_API_PROTO_ESP = 50,
  IP_API_PROTO_AH = 51,
  IP_API_PROTO_ICMP6 = 58,
  IP_API_PROTO_EIGRP = 88,
  IP_API_PROTO_OSPF = 89,
  IP_API_PROTO_SCTP = 132,
  IP_API_PROTO_RESERVED = 255,
} __attribute__((packed)) vapi_enum_ip_proto;

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

}

static inline void vapi_type_address_ntoh(vapi_type_address *msg)
{

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

}

static inline void vapi_type_prefix_ntoh(vapi_type_prefix *msg)
{

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
  msg->grp_address_length = htobe16(msg->grp_address_length);
}

static inline void vapi_type_mprefix_ntoh(vapi_type_mprefix *msg)
{
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

#ifndef defined_vapi_type_address_with_prefix
#define defined_vapi_type_address_with_prefix
typedef vapi_type_prefix vapi_type_address_with_prefix;

#endif

#ifndef defined_vapi_type_ip4_address_with_prefix
#define defined_vapi_type_ip4_address_with_prefix
typedef vapi_type_ip4_prefix vapi_type_ip4_address_with_prefix;

#endif

#ifndef defined_vapi_type_ip6_address_with_prefix
#define defined_vapi_type_ip6_address_with_prefix
typedef vapi_type_ip6_prefix vapi_type_ip6_address_with_prefix;

#endif

#ifndef defined_vapi_msg_tcp_configure_src_addresses_reply
#define defined_vapi_msg_tcp_configure_src_addresses_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_tcp_configure_src_addresses_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_tcp_configure_src_addresses_reply payload;
} vapi_msg_tcp_configure_src_addresses_reply;

static inline void vapi_msg_tcp_configure_src_addresses_reply_payload_hton(vapi_payload_tcp_configure_src_addresses_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_tcp_configure_src_addresses_reply_payload_ntoh(vapi_payload_tcp_configure_src_addresses_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_tcp_configure_src_addresses_reply_hton(vapi_msg_tcp_configure_src_addresses_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_tcp_configure_src_addresses_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_tcp_configure_src_addresses_reply_ntoh(vapi_msg_tcp_configure_src_addresses_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_tcp_configure_src_addresses_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tcp_configure_src_addresses_reply_msg_size(vapi_msg_tcp_configure_src_addresses_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_tcp_configure_src_addresses_reply()
{
  static const char name[] = "tcp_configure_src_addresses_reply";
  static const char name_with_crc[] = "tcp_configure_src_addresses_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_tcp_configure_src_addresses_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_tcp_configure_src_addresses_reply, payload),
    sizeof(vapi_msg_tcp_configure_src_addresses_reply),
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_reply_hton,
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tcp_configure_src_addresses_reply = vapi_register_msg(&__vapi_metadata_tcp_configure_src_addresses_reply);
  VAPI_DBG("Assigned msg id %d to tcp_configure_src_addresses_reply", vapi_msg_id_tcp_configure_src_addresses_reply);
}

static inline void vapi_set_vapi_msg_tcp_configure_src_addresses_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_tcp_configure_src_addresses_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_tcp_configure_src_addresses_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_tcp_configure_src_addresses
#define defined_vapi_msg_tcp_configure_src_addresses
typedef struct __attribute__ ((__packed__)) {
  u32 vrf_id;
  vapi_type_address first_address;
  vapi_type_address last_address; 
} vapi_payload_tcp_configure_src_addresses;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_tcp_configure_src_addresses payload;
} vapi_msg_tcp_configure_src_addresses;

static inline void vapi_msg_tcp_configure_src_addresses_payload_hton(vapi_payload_tcp_configure_src_addresses *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_tcp_configure_src_addresses_payload_ntoh(vapi_payload_tcp_configure_src_addresses *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_tcp_configure_src_addresses_hton(vapi_msg_tcp_configure_src_addresses *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_tcp_configure_src_addresses_payload_hton(&msg->payload);
}

static inline void vapi_msg_tcp_configure_src_addresses_ntoh(vapi_msg_tcp_configure_src_addresses *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_tcp_configure_src_addresses_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tcp_configure_src_addresses_msg_size(vapi_msg_tcp_configure_src_addresses *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_tcp_configure_src_addresses* vapi_alloc_tcp_configure_src_addresses(struct vapi_ctx_s *ctx)
{
  vapi_msg_tcp_configure_src_addresses *msg = NULL;
  const size_t size = sizeof(vapi_msg_tcp_configure_src_addresses);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_tcp_configure_src_addresses*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_tcp_configure_src_addresses);

  return msg;
}

static inline vapi_error_e vapi_tcp_configure_src_addresses(struct vapi_ctx_s *ctx,
  vapi_msg_tcp_configure_src_addresses *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_tcp_configure_src_addresses_reply *reply),
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
  vapi_msg_tcp_configure_src_addresses_hton(msg);
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
    vapi_msg_tcp_configure_src_addresses_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_tcp_configure_src_addresses()
{
  static const char name[] = "tcp_configure_src_addresses";
  static const char name_with_crc[] = "tcp_configure_src_addresses_4b02b946";
  static vapi_message_desc_t __vapi_metadata_tcp_configure_src_addresses = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_tcp_configure_src_addresses, payload),
    sizeof(vapi_msg_tcp_configure_src_addresses),
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_hton,
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tcp_configure_src_addresses = vapi_register_msg(&__vapi_metadata_tcp_configure_src_addresses);
  VAPI_DBG("Assigned msg id %d to tcp_configure_src_addresses", vapi_msg_id_tcp_configure_src_addresses);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
