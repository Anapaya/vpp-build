#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_session_session_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_session_session_api_json

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

extern vapi_msg_id_t vapi_msg_id_app_attach;
extern vapi_msg_id_t vapi_msg_id_app_attach_reply;
extern vapi_msg_id_t vapi_msg_id_application_detach;
extern vapi_msg_id_t vapi_msg_id_application_detach_reply;
extern vapi_msg_id_t vapi_msg_id_app_add_cert_key_pair;
extern vapi_msg_id_t vapi_msg_id_app_add_cert_key_pair_reply;
extern vapi_msg_id_t vapi_msg_id_app_del_cert_key_pair;
extern vapi_msg_id_t vapi_msg_id_app_del_cert_key_pair_reply;
extern vapi_msg_id_t vapi_msg_id_application_tls_cert_add;
extern vapi_msg_id_t vapi_msg_id_application_tls_cert_add_reply;
extern vapi_msg_id_t vapi_msg_id_application_tls_key_add;
extern vapi_msg_id_t vapi_msg_id_application_tls_key_add_reply;
extern vapi_msg_id_t vapi_msg_id_app_worker_add_del;
extern vapi_msg_id_t vapi_msg_id_app_worker_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_session_enable_disable;
extern vapi_msg_id_t vapi_msg_id_session_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_app_namespace_add_del;
extern vapi_msg_id_t vapi_msg_id_app_namespace_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_session_rule_add_del;
extern vapi_msg_id_t vapi_msg_id_session_rule_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_session_rules_dump;
extern vapi_msg_id_t vapi_msg_id_session_rules_details;

#define DEFINE_VAPI_MSG_IDS_SESSION_API_JSON\
  vapi_msg_id_t vapi_msg_id_app_attach;\
  vapi_msg_id_t vapi_msg_id_app_attach_reply;\
  vapi_msg_id_t vapi_msg_id_application_detach;\
  vapi_msg_id_t vapi_msg_id_application_detach_reply;\
  vapi_msg_id_t vapi_msg_id_app_add_cert_key_pair;\
  vapi_msg_id_t vapi_msg_id_app_add_cert_key_pair_reply;\
  vapi_msg_id_t vapi_msg_id_app_del_cert_key_pair;\
  vapi_msg_id_t vapi_msg_id_app_del_cert_key_pair_reply;\
  vapi_msg_id_t vapi_msg_id_application_tls_cert_add;\
  vapi_msg_id_t vapi_msg_id_application_tls_cert_add_reply;\
  vapi_msg_id_t vapi_msg_id_application_tls_key_add;\
  vapi_msg_id_t vapi_msg_id_application_tls_key_add_reply;\
  vapi_msg_id_t vapi_msg_id_app_worker_add_del;\
  vapi_msg_id_t vapi_msg_id_app_worker_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_session_enable_disable;\
  vapi_msg_id_t vapi_msg_id_session_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_app_namespace_add_del;\
  vapi_msg_id_t vapi_msg_id_app_namespace_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_session_rule_add_del;\
  vapi_msg_id_t vapi_msg_id_session_rule_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_session_rules_dump;\
  vapi_msg_id_t vapi_msg_id_session_rules_details;


#ifndef defined_vapi_enum_if_status_flags
#define defined_vapi_enum_if_status_flags
typedef enum {
  IF_STATUS_API_FLAG_ADMIN_UP = 1,
  IF_STATUS_API_FLAG_LINK_UP = 2,
}  vapi_enum_if_status_flags;

#endif

#ifndef defined_vapi_enum_mtu_proto
#define defined_vapi_enum_mtu_proto
typedef enum {
  MTU_PROTO_API_L3 = 0,
  MTU_PROTO_API_IP4 = 1,
  MTU_PROTO_API_IP6 = 2,
  MTU_PROTO_API_MPLS = 3,
}  vapi_enum_mtu_proto;

#endif

#ifndef defined_vapi_enum_link_duplex
#define defined_vapi_enum_link_duplex
typedef enum {
  LINK_DUPLEX_API_UNKNOWN = 0,
  LINK_DUPLEX_API_HALF = 1,
  LINK_DUPLEX_API_FULL = 2,
}  vapi_enum_link_duplex;

#endif

#ifndef defined_vapi_enum_sub_if_flags
#define defined_vapi_enum_sub_if_flags
typedef enum {
  SUB_IF_API_FLAG_NO_TAGS = 1,
  SUB_IF_API_FLAG_ONE_TAG = 2,
  SUB_IF_API_FLAG_TWO_TAGS = 4,
  SUB_IF_API_FLAG_DOT1AD = 8,
  SUB_IF_API_FLAG_EXACT_MATCH = 16,
  SUB_IF_API_FLAG_DEFAULT = 32,
  SUB_IF_API_FLAG_OUTER_VLAN_ID_ANY = 64,
  SUB_IF_API_FLAG_INNER_VLAN_ID_ANY = 128,
  SUB_IF_API_FLAG_MASK_VNET = 254,
  SUB_IF_API_FLAG_DOT1AH = 256,
}  vapi_enum_sub_if_flags;

#endif

#ifndef defined_vapi_enum_rx_mode
#define defined_vapi_enum_rx_mode
typedef enum {
  RX_MODE_API_UNKNOWN = 0,
  RX_MODE_API_POLLING = 1,
  RX_MODE_API_INTERRUPT = 2,
  RX_MODE_API_ADAPTIVE = 3,
  RX_MODE_API_DEFAULT = 4,
}  vapi_enum_rx_mode;

#endif

#ifndef defined_vapi_enum_if_type
#define defined_vapi_enum_if_type
typedef enum {
  IF_API_TYPE_HARDWARE = 0,
  IF_API_TYPE_SUB = 1,
  IF_API_TYPE_P2P = 2,
  IF_API_TYPE_PIPE = 3,
}  vapi_enum_if_type;

#endif

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

#ifndef defined_vapi_enum_transport_proto
#define defined_vapi_enum_transport_proto
typedef enum {
  TRANSPORT_PROTO_API_TCP = 1,
  TRANSPORT_PROTO_API_UDP = 2,
  TRANSPORT_PROTO_API_NONE = 3,
  TRANSPORT_PROTO_API_TLS = 4,
  TRANSPORT_PROTO_API_QUIC = 5,
} __attribute__((packed)) vapi_enum_transport_proto;

#endif

#ifndef defined_vapi_enum_session_rule_scope
#define defined_vapi_enum_session_rule_scope
typedef enum {
  SESSION_RULE_SCOPE_API_GLOBAL = 0,
  SESSION_RULE_SCOPE_API_LOCAL = 1,
  SESSION_RULE_SCOPE_API_BOTH = 2,
}  vapi_enum_session_rule_scope;

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

#ifndef defined_vapi_type_interface_index
#define defined_vapi_type_interface_index
typedef u32 vapi_type_interface_index;

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
  u64 segment_handle;
  vl_api_string_t segment_name; 
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
  static const char name_with_crc[] = "app_attach_reply_5c89c3b0";
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
  u64 options[18];
  vl_api_string_t namespace_id; 
} vapi_payload_app_attach;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_app_attach payload;
} vapi_msg_app_attach;

static inline void vapi_msg_app_attach_payload_hton(vapi_payload_app_attach *payload)
{
  do { unsigned i; for (i = 0; i < 18; ++i) { payload->options[i] = htobe64(payload->options[i]); } } while(0);
}

static inline void vapi_msg_app_attach_payload_ntoh(vapi_payload_app_attach *payload)
{
  do { unsigned i; for (i = 0; i < 18; ++i) { payload->options[i] = be64toh(payload->options[i]); } } while(0);
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
  static const char name_with_crc[] = "app_attach_5f4a260d";
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

#ifndef defined_vapi_msg_app_add_cert_key_pair_reply
#define defined_vapi_msg_app_add_cert_key_pair_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 index; 
} vapi_payload_app_add_cert_key_pair_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_app_add_cert_key_pair_reply payload;
} vapi_msg_app_add_cert_key_pair_reply;

static inline void vapi_msg_app_add_cert_key_pair_reply_payload_hton(vapi_payload_app_add_cert_key_pair_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->index = htobe32(payload->index);
}

static inline void vapi_msg_app_add_cert_key_pair_reply_payload_ntoh(vapi_payload_app_add_cert_key_pair_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->index = be32toh(payload->index);
}

static inline void vapi_msg_app_add_cert_key_pair_reply_hton(vapi_msg_app_add_cert_key_pair_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_add_cert_key_pair_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_app_add_cert_key_pair_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_add_cert_key_pair_reply_ntoh(vapi_msg_app_add_cert_key_pair_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_add_cert_key_pair_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_app_add_cert_key_pair_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_add_cert_key_pair_reply_msg_size(vapi_msg_app_add_cert_key_pair_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_app_add_cert_key_pair_reply()
{
  static const char name[] = "app_add_cert_key_pair_reply";
  static const char name_with_crc[] = "app_add_cert_key_pair_reply_b42958d0";
  static vapi_message_desc_t __vapi_metadata_app_add_cert_key_pair_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_app_add_cert_key_pair_reply, payload),
    sizeof(vapi_msg_app_add_cert_key_pair_reply),
    (generic_swap_fn_t)vapi_msg_app_add_cert_key_pair_reply_hton,
    (generic_swap_fn_t)vapi_msg_app_add_cert_key_pair_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_add_cert_key_pair_reply = vapi_register_msg(&__vapi_metadata_app_add_cert_key_pair_reply);
  VAPI_DBG("Assigned msg id %d to app_add_cert_key_pair_reply", vapi_msg_id_app_add_cert_key_pair_reply);
}

static inline void vapi_set_vapi_msg_app_add_cert_key_pair_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_app_add_cert_key_pair_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_app_add_cert_key_pair_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_add_cert_key_pair
#define defined_vapi_msg_app_add_cert_key_pair
typedef struct __attribute__ ((__packed__)) {
  u16 cert_len;
  u16 certkey_len;
  u8 certkey[0]; 
} vapi_payload_app_add_cert_key_pair;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_app_add_cert_key_pair payload;
} vapi_msg_app_add_cert_key_pair;

static inline void vapi_msg_app_add_cert_key_pair_payload_hton(vapi_payload_app_add_cert_key_pair *payload)
{
  payload->cert_len = htobe16(payload->cert_len);
  payload->certkey_len = htobe16(payload->certkey_len);
}

static inline void vapi_msg_app_add_cert_key_pair_payload_ntoh(vapi_payload_app_add_cert_key_pair *payload)
{
  payload->cert_len = be16toh(payload->cert_len);
  payload->certkey_len = be16toh(payload->certkey_len);
}

static inline void vapi_msg_app_add_cert_key_pair_hton(vapi_msg_app_add_cert_key_pair *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_add_cert_key_pair'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_app_add_cert_key_pair_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_add_cert_key_pair_ntoh(vapi_msg_app_add_cert_key_pair *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_add_cert_key_pair'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_app_add_cert_key_pair_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_add_cert_key_pair_msg_size(vapi_msg_app_add_cert_key_pair *msg)
{
  return sizeof(*msg)+ msg->payload.certkey_len * sizeof(msg->payload.certkey[0]);
}

static inline vapi_msg_app_add_cert_key_pair* vapi_alloc_app_add_cert_key_pair(struct vapi_ctx_s *ctx, size_t _certkey_array_size)
{
  vapi_msg_app_add_cert_key_pair *msg = NULL;
  const size_t size = sizeof(vapi_msg_app_add_cert_key_pair) + sizeof(msg->payload.certkey[0]) * _certkey_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_app_add_cert_key_pair*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_app_add_cert_key_pair);
  msg->payload.certkey_len = _certkey_array_size;

  return msg;
}

static inline vapi_error_e vapi_app_add_cert_key_pair(struct vapi_ctx_s *ctx,
  vapi_msg_app_add_cert_key_pair *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_app_add_cert_key_pair_reply *reply),
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
  vapi_msg_app_add_cert_key_pair_hton(msg);
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
    vapi_msg_app_add_cert_key_pair_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_app_add_cert_key_pair()
{
  static const char name[] = "app_add_cert_key_pair";
  static const char name_with_crc[] = "app_add_cert_key_pair_02eb8016";
  static vapi_message_desc_t __vapi_metadata_app_add_cert_key_pair = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_app_add_cert_key_pair, payload),
    sizeof(vapi_msg_app_add_cert_key_pair),
    (generic_swap_fn_t)vapi_msg_app_add_cert_key_pair_hton,
    (generic_swap_fn_t)vapi_msg_app_add_cert_key_pair_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_add_cert_key_pair = vapi_register_msg(&__vapi_metadata_app_add_cert_key_pair);
  VAPI_DBG("Assigned msg id %d to app_add_cert_key_pair", vapi_msg_id_app_add_cert_key_pair);
}
#endif

#ifndef defined_vapi_msg_app_del_cert_key_pair_reply
#define defined_vapi_msg_app_del_cert_key_pair_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_app_del_cert_key_pair_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_app_del_cert_key_pair_reply payload;
} vapi_msg_app_del_cert_key_pair_reply;

static inline void vapi_msg_app_del_cert_key_pair_reply_payload_hton(vapi_payload_app_del_cert_key_pair_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_app_del_cert_key_pair_reply_payload_ntoh(vapi_payload_app_del_cert_key_pair_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_app_del_cert_key_pair_reply_hton(vapi_msg_app_del_cert_key_pair_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_del_cert_key_pair_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_app_del_cert_key_pair_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_del_cert_key_pair_reply_ntoh(vapi_msg_app_del_cert_key_pair_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_del_cert_key_pair_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_app_del_cert_key_pair_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_del_cert_key_pair_reply_msg_size(vapi_msg_app_del_cert_key_pair_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_app_del_cert_key_pair_reply()
{
  static const char name[] = "app_del_cert_key_pair_reply";
  static const char name_with_crc[] = "app_del_cert_key_pair_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_app_del_cert_key_pair_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_app_del_cert_key_pair_reply, payload),
    sizeof(vapi_msg_app_del_cert_key_pair_reply),
    (generic_swap_fn_t)vapi_msg_app_del_cert_key_pair_reply_hton,
    (generic_swap_fn_t)vapi_msg_app_del_cert_key_pair_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_del_cert_key_pair_reply = vapi_register_msg(&__vapi_metadata_app_del_cert_key_pair_reply);
  VAPI_DBG("Assigned msg id %d to app_del_cert_key_pair_reply", vapi_msg_id_app_del_cert_key_pair_reply);
}

static inline void vapi_set_vapi_msg_app_del_cert_key_pair_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_app_del_cert_key_pair_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_app_del_cert_key_pair_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_app_del_cert_key_pair
#define defined_vapi_msg_app_del_cert_key_pair
typedef struct __attribute__ ((__packed__)) {
  u32 index; 
} vapi_payload_app_del_cert_key_pair;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_app_del_cert_key_pair payload;
} vapi_msg_app_del_cert_key_pair;

static inline void vapi_msg_app_del_cert_key_pair_payload_hton(vapi_payload_app_del_cert_key_pair *payload)
{
  payload->index = htobe32(payload->index);
}

static inline void vapi_msg_app_del_cert_key_pair_payload_ntoh(vapi_payload_app_del_cert_key_pair *payload)
{
  payload->index = be32toh(payload->index);
}

static inline void vapi_msg_app_del_cert_key_pair_hton(vapi_msg_app_del_cert_key_pair *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_del_cert_key_pair'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_app_del_cert_key_pair_payload_hton(&msg->payload);
}

static inline void vapi_msg_app_del_cert_key_pair_ntoh(vapi_msg_app_del_cert_key_pair *msg)
{
  VAPI_DBG("Swapping `vapi_msg_app_del_cert_key_pair'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_app_del_cert_key_pair_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_app_del_cert_key_pair_msg_size(vapi_msg_app_del_cert_key_pair *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_app_del_cert_key_pair* vapi_alloc_app_del_cert_key_pair(struct vapi_ctx_s *ctx)
{
  vapi_msg_app_del_cert_key_pair *msg = NULL;
  const size_t size = sizeof(vapi_msg_app_del_cert_key_pair);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_app_del_cert_key_pair*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_app_del_cert_key_pair);

  return msg;
}

static inline vapi_error_e vapi_app_del_cert_key_pair(struct vapi_ctx_s *ctx,
  vapi_msg_app_del_cert_key_pair *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_app_del_cert_key_pair_reply *reply),
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
  vapi_msg_app_del_cert_key_pair_hton(msg);
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
    vapi_msg_app_del_cert_key_pair_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_app_del_cert_key_pair()
{
  static const char name[] = "app_del_cert_key_pair";
  static const char name_with_crc[] = "app_del_cert_key_pair_8ac76db6";
  static vapi_message_desc_t __vapi_metadata_app_del_cert_key_pair = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_app_del_cert_key_pair, payload),
    sizeof(vapi_msg_app_del_cert_key_pair),
    (generic_swap_fn_t)vapi_msg_app_del_cert_key_pair_hton,
    (generic_swap_fn_t)vapi_msg_app_del_cert_key_pair_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_app_del_cert_key_pair = vapi_register_msg(&__vapi_metadata_app_del_cert_key_pair);
  VAPI_DBG("Assigned msg id %d to app_del_cert_key_pair", vapi_msg_id_app_del_cert_key_pair);
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

#ifndef defined_vapi_msg_app_worker_add_del_reply
#define defined_vapi_msg_app_worker_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 wrk_index;
  u64 app_event_queue_address;
  u8 n_fds;
  u8 fd_flags;
  u64 segment_handle;
  bool is_add;
  vl_api_string_t segment_name; 
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
  static const char name_with_crc[] = "app_worker_add_del_reply_5735ffe7";
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

#ifndef defined_vapi_msg_app_worker_add_del
#define defined_vapi_msg_app_worker_add_del
typedef struct __attribute__ ((__packed__)) {
  u32 app_index;
  u32 wrk_index;
  bool is_add; 
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
  static const char name_with_crc[] = "app_worker_add_del_753253dc";
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

#ifndef defined_vapi_msg_session_enable_disable
#define defined_vapi_msg_session_enable_disable
typedef struct __attribute__ ((__packed__)) {
  bool is_enable; 
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
  static const char name_with_crc[] = "session_enable_disable_c264d7bf";
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
  vapi_type_interface_index sw_if_index;
  u32 ip4_fib_id;
  u32 ip6_fib_id;
  vl_api_string_t namespace_id; 
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
  static const char name_with_crc[] = "app_namespace_add_del_6306aecb";
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

#ifndef defined_vapi_msg_session_rule_add_del
#define defined_vapi_msg_session_rule_add_del
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_transport_proto transport_proto;
  vapi_type_prefix lcl;
  vapi_type_prefix rmt;
  u16 lcl_port;
  u16 rmt_port;
  u32 action_index;
  bool is_add;
  u32 appns_index;
  vapi_enum_session_rule_scope scope;
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
  payload->scope = (vapi_enum_session_rule_scope)htobe32(payload->scope);
}

static inline void vapi_msg_session_rule_add_del_payload_ntoh(vapi_payload_session_rule_add_del *payload)
{
  payload->lcl_port = be16toh(payload->lcl_port);
  payload->rmt_port = be16toh(payload->rmt_port);
  payload->action_index = be32toh(payload->action_index);
  payload->appns_index = be32toh(payload->appns_index);
  payload->scope = (vapi_enum_session_rule_scope)be32toh(payload->scope);
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
  static const char name_with_crc[] = "session_rule_add_del_e31f9443";
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

#ifndef defined_vapi_msg_session_rules_details
#define defined_vapi_msg_session_rules_details
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_transport_proto transport_proto;
  vapi_type_prefix lcl;
  vapi_type_prefix rmt;
  u16 lcl_port;
  u16 rmt_port;
  u32 action_index;
  u32 appns_index;
  vapi_enum_session_rule_scope scope;
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
  payload->scope = (vapi_enum_session_rule_scope)htobe32(payload->scope);
}

static inline void vapi_msg_session_rules_details_payload_ntoh(vapi_payload_session_rules_details *payload)
{
  payload->lcl_port = be16toh(payload->lcl_port);
  payload->rmt_port = be16toh(payload->rmt_port);
  payload->action_index = be32toh(payload->action_index);
  payload->appns_index = be32toh(payload->appns_index);
  payload->scope = (vapi_enum_session_rule_scope)be32toh(payload->scope);
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
  static const char name_with_crc[] = "session_rules_details_304b91f0";
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


#ifdef __cplusplus
}
#endif

#endif
