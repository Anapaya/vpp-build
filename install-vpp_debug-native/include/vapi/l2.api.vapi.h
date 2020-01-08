#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_l2_l2_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_l2_l2_api_json

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

extern vapi_msg_id_t vapi_msg_id_l2_flags;
extern vapi_msg_id_t vapi_msg_id_l2fib_flush_all;
extern vapi_msg_id_t vapi_msg_id_l2_fib_table_dump;
extern vapi_msg_id_t vapi_msg_id_bd_ip_mac_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_l2_patch_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_bridge_domain_dump;
extern vapi_msg_id_t vapi_msg_id_l2_xconnect_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_vpath_reply;
extern vapi_msg_id_t vapi_msg_id_bvi_create_reply;
extern vapi_msg_id_t vapi_msg_id_bd_ip_mac_flush;
extern vapi_msg_id_t vapi_msg_id_l2fib_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_l2fib_flush_bd_reply;
extern vapi_msg_id_t vapi_msg_id_bvi_delete;
extern vapi_msg_id_t vapi_msg_id_l2_interface_vlan_tag_rewrite_reply;
extern vapi_msg_id_t vapi_msg_id_bd_ip_mac_dump;
extern vapi_msg_id_t vapi_msg_id_bd_ip_mac_add_del;
extern vapi_msg_id_t vapi_msg_id_l2fib_flush_int_reply;
extern vapi_msg_id_t vapi_msg_id_l2_fib_clear_table_reply;
extern vapi_msg_id_t vapi_msg_id_bridge_flags_reply;
extern vapi_msg_id_t vapi_msg_id_l2fib_flush_bd;
extern vapi_msg_id_t vapi_msg_id_l2fib_flush_int;
extern vapi_msg_id_t vapi_msg_id_l2_fib_table_details;
extern vapi_msg_id_t vapi_msg_id_bridge_domain_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_bridge_domain_set_mac_age;
extern vapi_msg_id_t vapi_msg_id_l2fib_flush_all_reply;
extern vapi_msg_id_t vapi_msg_id_l2_interface_efp_filter;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_xconnect;
extern vapi_msg_id_t vapi_msg_id_l2_macs_event;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_xconnect_reply;
extern vapi_msg_id_t vapi_msg_id_l2_interface_efp_filter_reply;
extern vapi_msg_id_t vapi_msg_id_l2_flags_reply;
extern vapi_msg_id_t vapi_msg_id_l2_patch_add_del;
extern vapi_msg_id_t vapi_msg_id_bd_ip_mac_details;
extern vapi_msg_id_t vapi_msg_id_l2_interface_pbb_tag_rewrite;
extern vapi_msg_id_t vapi_msg_id_bvi_create;
extern vapi_msg_id_t vapi_msg_id_l2_fib_clear_table;
extern vapi_msg_id_t vapi_msg_id_bd_ip_mac_flush_reply;
extern vapi_msg_id_t vapi_msg_id_l2fib_add_del;
extern vapi_msg_id_t vapi_msg_id_bridge_domain_set_mac_age_reply;
extern vapi_msg_id_t vapi_msg_id_want_l2_macs_events;
extern vapi_msg_id_t vapi_msg_id_bvi_delete_reply;
extern vapi_msg_id_t vapi_msg_id_bridge_domain_add_del;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_bridge_reply;
extern vapi_msg_id_t vapi_msg_id_bridge_domain_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_bridge;
extern vapi_msg_id_t vapi_msg_id_want_l2_macs_events_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_vpath;
extern vapi_msg_id_t vapi_msg_id_l2_interface_pbb_tag_rewrite_reply;
extern vapi_msg_id_t vapi_msg_id_l2_xconnect_dump;
extern vapi_msg_id_t vapi_msg_id_bridge_flags;
extern vapi_msg_id_t vapi_msg_id_l2_interface_vlan_tag_rewrite;

#define DEFINE_VAPI_MSG_IDS_L2_API_JSON\
  vapi_msg_id_t vapi_msg_id_l2_flags;\
  vapi_msg_id_t vapi_msg_id_l2fib_flush_all;\
  vapi_msg_id_t vapi_msg_id_l2_fib_table_dump;\
  vapi_msg_id_t vapi_msg_id_bd_ip_mac_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_l2_patch_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_bridge_domain_dump;\
  vapi_msg_id_t vapi_msg_id_l2_xconnect_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_vpath_reply;\
  vapi_msg_id_t vapi_msg_id_bvi_create_reply;\
  vapi_msg_id_t vapi_msg_id_bd_ip_mac_flush;\
  vapi_msg_id_t vapi_msg_id_l2fib_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_l2fib_flush_bd_reply;\
  vapi_msg_id_t vapi_msg_id_bvi_delete;\
  vapi_msg_id_t vapi_msg_id_l2_interface_vlan_tag_rewrite_reply;\
  vapi_msg_id_t vapi_msg_id_bd_ip_mac_dump;\
  vapi_msg_id_t vapi_msg_id_bd_ip_mac_add_del;\
  vapi_msg_id_t vapi_msg_id_l2fib_flush_int_reply;\
  vapi_msg_id_t vapi_msg_id_l2_fib_clear_table_reply;\
  vapi_msg_id_t vapi_msg_id_bridge_flags_reply;\
  vapi_msg_id_t vapi_msg_id_l2fib_flush_bd;\
  vapi_msg_id_t vapi_msg_id_l2fib_flush_int;\
  vapi_msg_id_t vapi_msg_id_l2_fib_table_details;\
  vapi_msg_id_t vapi_msg_id_bridge_domain_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_bridge_domain_set_mac_age;\
  vapi_msg_id_t vapi_msg_id_l2fib_flush_all_reply;\
  vapi_msg_id_t vapi_msg_id_l2_interface_efp_filter;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_xconnect;\
  vapi_msg_id_t vapi_msg_id_l2_macs_event;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_xconnect_reply;\
  vapi_msg_id_t vapi_msg_id_l2_interface_efp_filter_reply;\
  vapi_msg_id_t vapi_msg_id_l2_flags_reply;\
  vapi_msg_id_t vapi_msg_id_l2_patch_add_del;\
  vapi_msg_id_t vapi_msg_id_bd_ip_mac_details;\
  vapi_msg_id_t vapi_msg_id_l2_interface_pbb_tag_rewrite;\
  vapi_msg_id_t vapi_msg_id_bvi_create;\
  vapi_msg_id_t vapi_msg_id_l2_fib_clear_table;\
  vapi_msg_id_t vapi_msg_id_bd_ip_mac_flush_reply;\
  vapi_msg_id_t vapi_msg_id_l2fib_add_del;\
  vapi_msg_id_t vapi_msg_id_bridge_domain_set_mac_age_reply;\
  vapi_msg_id_t vapi_msg_id_want_l2_macs_events;\
  vapi_msg_id_t vapi_msg_id_bvi_delete_reply;\
  vapi_msg_id_t vapi_msg_id_bridge_domain_add_del;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_bridge_reply;\
  vapi_msg_id_t vapi_msg_id_bridge_domain_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_l2_bridge;\
  vapi_msg_id_t vapi_msg_id_want_l2_macs_events_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_vpath;\
  vapi_msg_id_t vapi_msg_id_l2_interface_pbb_tag_rewrite_reply;\
  vapi_msg_id_t vapi_msg_id_l2_xconnect_dump;\
  vapi_msg_id_t vapi_msg_id_bridge_flags;\
  vapi_msg_id_t vapi_msg_id_l2_interface_vlan_tag_rewrite;


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

#ifndef defined_vapi_enum_bd_flags
#define defined_vapi_enum_bd_flags
typedef enum {
  BRIDGE_API_FLAG_NONE = 0,
  BRIDGE_API_FLAG_LEARN = 1,
  BRIDGE_API_FLAG_FWD = 2,
  BRIDGE_API_FLAG_FLOOD = 4,
  BRIDGE_API_FLAG_UU_FLOOD = 8,
  BRIDGE_API_FLAG_ARP_TERM = 16,
  BRIDGE_API_FLAG_ARP_UFWD = 32,
} vapi_enum_bd_flags;

#endif

#ifndef defined_vapi_enum_l2_port_type
#define defined_vapi_enum_l2_port_type
typedef enum {
  L2_API_PORT_TYPE_NORMAL = 0,
  L2_API_PORT_TYPE_BVI = 1,
  L2_API_PORT_TYPE_UU_FWD = 2,
} vapi_enum_l2_port_type;

#endif

#ifndef defined_vapi_type_ip6_address
#define defined_vapi_type_ip6_address
typedef u8 vapi_type_ip6_address[16];

#endif

#ifndef defined_vapi_type_ip4_address
#define defined_vapi_type_ip4_address
typedef u8 vapi_type_ip4_address[4];

#endif

#ifndef defined_vapi_type_mac_address
#define defined_vapi_type_mac_address
typedef u8 vapi_type_mac_address[6];

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

#ifndef defined_vapi_type_mac_entry
#define defined_vapi_type_mac_entry
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  u8 mac_addr[6];
  u8 action;
  u8 flags;
} vapi_type_mac_entry;

static inline void vapi_type_mac_entry_hton(vapi_type_mac_entry *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
}

static inline void vapi_type_mac_entry_ntoh(vapi_type_mac_entry *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
}
#endif

#ifndef defined_vapi_type_bridge_domain_sw_if
#define defined_vapi_type_bridge_domain_sw_if
typedef struct __attribute__((__packed__)) {
  u32 context;
  u32 sw_if_index;
  u8 shg;
} vapi_type_bridge_domain_sw_if;

static inline void vapi_type_bridge_domain_sw_if_hton(vapi_type_bridge_domain_sw_if *msg)
{
  msg->context = htobe32(msg->context);
  msg->sw_if_index = htobe32(msg->sw_if_index);
}

static inline void vapi_type_bridge_domain_sw_if_ntoh(vapi_type_bridge_domain_sw_if *msg)
{
  msg->context = be32toh(msg->context);
  msg->sw_if_index = be32toh(msg->sw_if_index);
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

#ifndef defined_vapi_type_bd_ip_mac
#define defined_vapi_type_bd_ip_mac
typedef struct __attribute__((__packed__)) {
  u32 bd_id;
  vapi_type_address ip;
  vapi_type_mac_address mac;
} vapi_type_bd_ip_mac;

static inline void vapi_type_bd_ip_mac_hton(vapi_type_bd_ip_mac *msg)
{
  msg->bd_id = htobe32(msg->bd_id);
  vapi_type_address_hton(&msg->ip);
}

static inline void vapi_type_bd_ip_mac_ntoh(vapi_type_bd_ip_mac *msg)
{
  msg->bd_id = be32toh(msg->bd_id);
  vapi_type_address_ntoh(&msg->ip);
}
#endif

#ifndef defined_vapi_msg_l2_flags_reply
#define defined_vapi_msg_l2_flags_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 resulting_feature_bitmap; 
} vapi_payload_l2_flags_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_flags_reply payload;
} vapi_msg_l2_flags_reply;

static inline void vapi_msg_l2_flags_reply_payload_hton(vapi_payload_l2_flags_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->resulting_feature_bitmap = htobe32(payload->resulting_feature_bitmap);
}

static inline void vapi_msg_l2_flags_reply_payload_ntoh(vapi_payload_l2_flags_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->resulting_feature_bitmap = be32toh(payload->resulting_feature_bitmap);
}

static inline void vapi_msg_l2_flags_reply_hton(vapi_msg_l2_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_flags_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_flags_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_flags_reply_ntoh(vapi_msg_l2_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_flags_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_flags_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_flags_reply_msg_size(vapi_msg_l2_flags_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_flags_reply()
{
  static const char name[] = "l2_flags_reply";
  static const char name_with_crc[] = "l2_flags_reply_29b2a2b3";
  static vapi_message_desc_t __vapi_metadata_l2_flags_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_flags_reply, payload),
    sizeof(vapi_msg_l2_flags_reply),
    (generic_swap_fn_t)vapi_msg_l2_flags_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2_flags_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_flags_reply = vapi_register_msg(&__vapi_metadata_l2_flags_reply);
  VAPI_DBG("Assigned msg id %d to l2_flags_reply", vapi_msg_id_l2_flags_reply);
}

static inline void vapi_set_vapi_msg_l2_flags_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_flags_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_flags_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2_flags
#define defined_vapi_msg_l2_flags
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 is_set;
  u32 feature_bitmap; 
} vapi_payload_l2_flags;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2_flags payload;
} vapi_msg_l2_flags;

static inline void vapi_msg_l2_flags_payload_hton(vapi_payload_l2_flags *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->feature_bitmap = htobe32(payload->feature_bitmap);
}

static inline void vapi_msg_l2_flags_payload_ntoh(vapi_payload_l2_flags *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->feature_bitmap = be32toh(payload->feature_bitmap);
}

static inline void vapi_msg_l2_flags_hton(vapi_msg_l2_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_flags'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2_flags_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_flags_ntoh(vapi_msg_l2_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_flags'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2_flags_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_flags_msg_size(vapi_msg_l2_flags *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_flags* vapi_alloc_l2_flags(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_flags *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_flags);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_flags*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_flags);

  return msg;
}

static inline vapi_error_e vapi_l2_flags(struct vapi_ctx_s *ctx,
  vapi_msg_l2_flags *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_flags_reply *reply),
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
  vapi_msg_l2_flags_hton(msg);
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
    vapi_msg_l2_flags_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_flags()
{
  static const char name[] = "l2_flags";
  static const char name_with_crc[] = "l2_flags_0e889fb9";
  static vapi_message_desc_t __vapi_metadata_l2_flags = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2_flags, payload),
    sizeof(vapi_msg_l2_flags),
    (generic_swap_fn_t)vapi_msg_l2_flags_hton,
    (generic_swap_fn_t)vapi_msg_l2_flags_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_flags = vapi_register_msg(&__vapi_metadata_l2_flags);
  VAPI_DBG("Assigned msg id %d to l2_flags", vapi_msg_id_l2_flags);
}
#endif

#ifndef defined_vapi_msg_l2fib_flush_all_reply
#define defined_vapi_msg_l2fib_flush_all_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2fib_flush_all_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2fib_flush_all_reply payload;
} vapi_msg_l2fib_flush_all_reply;

static inline void vapi_msg_l2fib_flush_all_reply_payload_hton(vapi_payload_l2fib_flush_all_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2fib_flush_all_reply_payload_ntoh(vapi_payload_l2fib_flush_all_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2fib_flush_all_reply_hton(vapi_msg_l2fib_flush_all_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_all_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2fib_flush_all_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2fib_flush_all_reply_ntoh(vapi_msg_l2fib_flush_all_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_all_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2fib_flush_all_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2fib_flush_all_reply_msg_size(vapi_msg_l2fib_flush_all_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2fib_flush_all_reply()
{
  static const char name[] = "l2fib_flush_all_reply";
  static const char name_with_crc[] = "l2fib_flush_all_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2fib_flush_all_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2fib_flush_all_reply, payload),
    sizeof(vapi_msg_l2fib_flush_all_reply),
    (generic_swap_fn_t)vapi_msg_l2fib_flush_all_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_flush_all_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_flush_all_reply = vapi_register_msg(&__vapi_metadata_l2fib_flush_all_reply);
  VAPI_DBG("Assigned msg id %d to l2fib_flush_all_reply", vapi_msg_id_l2fib_flush_all_reply);
}

static inline void vapi_set_vapi_msg_l2fib_flush_all_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2fib_flush_all_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2fib_flush_all_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2fib_flush_all
#define defined_vapi_msg_l2fib_flush_all
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_l2fib_flush_all;

static inline void vapi_msg_l2fib_flush_all_hton(vapi_msg_l2fib_flush_all *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_all'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_l2fib_flush_all_ntoh(vapi_msg_l2fib_flush_all *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_all'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_l2fib_flush_all_msg_size(vapi_msg_l2fib_flush_all *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2fib_flush_all* vapi_alloc_l2fib_flush_all(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2fib_flush_all *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2fib_flush_all);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2fib_flush_all*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2fib_flush_all);

  return msg;
}

static inline vapi_error_e vapi_l2fib_flush_all(struct vapi_ctx_s *ctx,
  vapi_msg_l2fib_flush_all *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2fib_flush_all_reply *reply),
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
  vapi_msg_l2fib_flush_all_hton(msg);
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
    vapi_msg_l2fib_flush_all_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2fib_flush_all()
{
  static const char name[] = "l2fib_flush_all";
  static const char name_with_crc[] = "l2fib_flush_all_51077d14";
  static vapi_message_desc_t __vapi_metadata_l2fib_flush_all = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_l2fib_flush_all),
    (generic_swap_fn_t)vapi_msg_l2fib_flush_all_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_flush_all_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_flush_all = vapi_register_msg(&__vapi_metadata_l2fib_flush_all);
  VAPI_DBG("Assigned msg id %d to l2fib_flush_all", vapi_msg_id_l2fib_flush_all);
}
#endif

#ifndef defined_vapi_msg_l2_fib_table_details
#define defined_vapi_msg_l2_fib_table_details
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id;
  u8 mac[6];
  u32 sw_if_index;
  u8 static_mac;
  u8 filter_mac;
  u8 bvi_mac; 
} vapi_payload_l2_fib_table_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_fib_table_details payload;
} vapi_msg_l2_fib_table_details;

static inline void vapi_msg_l2_fib_table_details_payload_hton(vapi_payload_l2_fib_table_details *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_l2_fib_table_details_payload_ntoh(vapi_payload_l2_fib_table_details *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_l2_fib_table_details_hton(vapi_msg_l2_fib_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_table_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_fib_table_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_fib_table_details_ntoh(vapi_msg_l2_fib_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_table_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_fib_table_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_fib_table_details_msg_size(vapi_msg_l2_fib_table_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_fib_table_details()
{
  static const char name[] = "l2_fib_table_details";
  static const char name_with_crc[] = "l2_fib_table_details_c7392706";
  static vapi_message_desc_t __vapi_metadata_l2_fib_table_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_fib_table_details, payload),
    sizeof(vapi_msg_l2_fib_table_details),
    (generic_swap_fn_t)vapi_msg_l2_fib_table_details_hton,
    (generic_swap_fn_t)vapi_msg_l2_fib_table_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_fib_table_details = vapi_register_msg(&__vapi_metadata_l2_fib_table_details);
  VAPI_DBG("Assigned msg id %d to l2_fib_table_details", vapi_msg_id_l2_fib_table_details);
}

static inline void vapi_set_vapi_msg_l2_fib_table_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_fib_table_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_fib_table_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2_fib_table_dump
#define defined_vapi_msg_l2_fib_table_dump
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id; 
} vapi_payload_l2_fib_table_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2_fib_table_dump payload;
} vapi_msg_l2_fib_table_dump;

static inline void vapi_msg_l2_fib_table_dump_payload_hton(vapi_payload_l2_fib_table_dump *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_l2_fib_table_dump_payload_ntoh(vapi_payload_l2_fib_table_dump *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_l2_fib_table_dump_hton(vapi_msg_l2_fib_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_table_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2_fib_table_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_fib_table_dump_ntoh(vapi_msg_l2_fib_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_table_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2_fib_table_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_fib_table_dump_msg_size(vapi_msg_l2_fib_table_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_fib_table_dump* vapi_alloc_l2_fib_table_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_fib_table_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_fib_table_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_fib_table_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_fib_table_dump);

  return msg;
}

static inline vapi_error_e vapi_l2_fib_table_dump(struct vapi_ctx_s *ctx,
  vapi_msg_l2_fib_table_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_fib_table_details *reply),
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
  vapi_msg_l2_fib_table_dump_hton(msg);
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
    vapi_msg_l2_fib_table_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_fib_table_dump()
{
  static const char name[] = "l2_fib_table_dump";
  static const char name_with_crc[] = "l2_fib_table_dump_c25fdce6";
  static vapi_message_desc_t __vapi_metadata_l2_fib_table_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2_fib_table_dump, payload),
    sizeof(vapi_msg_l2_fib_table_dump),
    (generic_swap_fn_t)vapi_msg_l2_fib_table_dump_hton,
    (generic_swap_fn_t)vapi_msg_l2_fib_table_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_fib_table_dump = vapi_register_msg(&__vapi_metadata_l2_fib_table_dump);
  VAPI_DBG("Assigned msg id %d to l2_fib_table_dump", vapi_msg_id_l2_fib_table_dump);
}
#endif

#ifndef defined_vapi_msg_bd_ip_mac_add_del_reply
#define defined_vapi_msg_bd_ip_mac_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bd_ip_mac_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bd_ip_mac_add_del_reply payload;
} vapi_msg_bd_ip_mac_add_del_reply;

static inline void vapi_msg_bd_ip_mac_add_del_reply_payload_hton(vapi_payload_bd_ip_mac_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bd_ip_mac_add_del_reply_payload_ntoh(vapi_payload_bd_ip_mac_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bd_ip_mac_add_del_reply_hton(vapi_msg_bd_ip_mac_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bd_ip_mac_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bd_ip_mac_add_del_reply_ntoh(vapi_msg_bd_ip_mac_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bd_ip_mac_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bd_ip_mac_add_del_reply_msg_size(vapi_msg_bd_ip_mac_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bd_ip_mac_add_del_reply()
{
  static const char name[] = "bd_ip_mac_add_del_reply";
  static const char name_with_crc[] = "bd_ip_mac_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bd_ip_mac_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bd_ip_mac_add_del_reply, payload),
    sizeof(vapi_msg_bd_ip_mac_add_del_reply),
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bd_ip_mac_add_del_reply = vapi_register_msg(&__vapi_metadata_bd_ip_mac_add_del_reply);
  VAPI_DBG("Assigned msg id %d to bd_ip_mac_add_del_reply", vapi_msg_id_bd_ip_mac_add_del_reply);
}

static inline void vapi_set_vapi_msg_bd_ip_mac_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bd_ip_mac_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bd_ip_mac_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2_patch_add_del_reply
#define defined_vapi_msg_l2_patch_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2_patch_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_patch_add_del_reply payload;
} vapi_msg_l2_patch_add_del_reply;

static inline void vapi_msg_l2_patch_add_del_reply_payload_hton(vapi_payload_l2_patch_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2_patch_add_del_reply_payload_ntoh(vapi_payload_l2_patch_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2_patch_add_del_reply_hton(vapi_msg_l2_patch_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_patch_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_patch_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_patch_add_del_reply_ntoh(vapi_msg_l2_patch_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_patch_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_patch_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_patch_add_del_reply_msg_size(vapi_msg_l2_patch_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_patch_add_del_reply()
{
  static const char name[] = "l2_patch_add_del_reply";
  static const char name_with_crc[] = "l2_patch_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2_patch_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_patch_add_del_reply, payload),
    sizeof(vapi_msg_l2_patch_add_del_reply),
    (generic_swap_fn_t)vapi_msg_l2_patch_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2_patch_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_patch_add_del_reply = vapi_register_msg(&__vapi_metadata_l2_patch_add_del_reply);
  VAPI_DBG("Assigned msg id %d to l2_patch_add_del_reply", vapi_msg_id_l2_patch_add_del_reply);
}

static inline void vapi_set_vapi_msg_l2_patch_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_patch_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_patch_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bridge_domain_details
#define defined_vapi_msg_bridge_domain_details
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id;
  u8 flood;
  u8 uu_flood;
  u8 forward;
  u8 learn;
  u8 arp_term;
  u8 arp_ufwd;
  u8 mac_age;
  u8 bd_tag[64];
  u32 bvi_sw_if_index;
  u32 uu_fwd_sw_if_index;
  u32 n_sw_ifs;
  vapi_type_bridge_domain_sw_if sw_if_details[0]; 
} vapi_payload_bridge_domain_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bridge_domain_details payload;
} vapi_msg_bridge_domain_details;

static inline void vapi_msg_bridge_domain_details_payload_hton(vapi_payload_bridge_domain_details *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
  payload->bvi_sw_if_index = htobe32(payload->bvi_sw_if_index);
  payload->uu_fwd_sw_if_index = htobe32(payload->uu_fwd_sw_if_index);
  payload->n_sw_ifs = htobe32(payload->n_sw_ifs);
  do { unsigned i; for (i = 0; i < be32toh(payload->n_sw_ifs); ++i) { vapi_type_bridge_domain_sw_if_hton(&payload->sw_if_details[i]); } } while(0);
}

static inline void vapi_msg_bridge_domain_details_payload_ntoh(vapi_payload_bridge_domain_details *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
  payload->bvi_sw_if_index = be32toh(payload->bvi_sw_if_index);
  payload->uu_fwd_sw_if_index = be32toh(payload->uu_fwd_sw_if_index);
  payload->n_sw_ifs = be32toh(payload->n_sw_ifs);
  do { unsigned i; for (i = 0; i < payload->n_sw_ifs; ++i) { vapi_type_bridge_domain_sw_if_ntoh(&payload->sw_if_details[i]); } } while(0);
}

static inline void vapi_msg_bridge_domain_details_hton(vapi_msg_bridge_domain_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bridge_domain_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_domain_details_ntoh(vapi_msg_bridge_domain_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bridge_domain_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_domain_details_msg_size(vapi_msg_bridge_domain_details *msg)
{
  return sizeof(*msg)+ msg->payload.n_sw_ifs * sizeof(msg->payload.sw_if_details[0]);
}

static void __attribute__((constructor)) __vapi_constructor_bridge_domain_details()
{
  static const char name[] = "bridge_domain_details";
  static const char name_with_crc[] = "bridge_domain_details_748c854a";
  static vapi_message_desc_t __vapi_metadata_bridge_domain_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bridge_domain_details, payload),
    sizeof(vapi_msg_bridge_domain_details),
    (generic_swap_fn_t)vapi_msg_bridge_domain_details_hton,
    (generic_swap_fn_t)vapi_msg_bridge_domain_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_domain_details = vapi_register_msg(&__vapi_metadata_bridge_domain_details);
  VAPI_DBG("Assigned msg id %d to bridge_domain_details", vapi_msg_id_bridge_domain_details);
}

static inline void vapi_set_vapi_msg_bridge_domain_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bridge_domain_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bridge_domain_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bridge_domain_dump
#define defined_vapi_msg_bridge_domain_dump
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id; 
} vapi_payload_bridge_domain_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bridge_domain_dump payload;
} vapi_msg_bridge_domain_dump;

static inline void vapi_msg_bridge_domain_dump_payload_hton(vapi_payload_bridge_domain_dump *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_bridge_domain_dump_payload_ntoh(vapi_payload_bridge_domain_dump *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_bridge_domain_dump_hton(vapi_msg_bridge_domain_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bridge_domain_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_domain_dump_ntoh(vapi_msg_bridge_domain_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bridge_domain_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_domain_dump_msg_size(vapi_msg_bridge_domain_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bridge_domain_dump* vapi_alloc_bridge_domain_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_bridge_domain_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_bridge_domain_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bridge_domain_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bridge_domain_dump);

  return msg;
}

static inline vapi_error_e vapi_bridge_domain_dump(struct vapi_ctx_s *ctx,
  vapi_msg_bridge_domain_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bridge_domain_details *reply),
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
  vapi_msg_bridge_domain_dump_hton(msg);
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
    vapi_msg_bridge_domain_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bridge_domain_dump()
{
  static const char name[] = "bridge_domain_dump";
  static const char name_with_crc[] = "bridge_domain_dump_c25fdce6";
  static vapi_message_desc_t __vapi_metadata_bridge_domain_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bridge_domain_dump, payload),
    sizeof(vapi_msg_bridge_domain_dump),
    (generic_swap_fn_t)vapi_msg_bridge_domain_dump_hton,
    (generic_swap_fn_t)vapi_msg_bridge_domain_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_domain_dump = vapi_register_msg(&__vapi_metadata_bridge_domain_dump);
  VAPI_DBG("Assigned msg id %d to bridge_domain_dump", vapi_msg_id_bridge_domain_dump);
}
#endif

#ifndef defined_vapi_msg_l2_xconnect_details
#define defined_vapi_msg_l2_xconnect_details
typedef struct __attribute__ ((__packed__)) {
  u32 rx_sw_if_index;
  u32 tx_sw_if_index; 
} vapi_payload_l2_xconnect_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_xconnect_details payload;
} vapi_msg_l2_xconnect_details;

static inline void vapi_msg_l2_xconnect_details_payload_hton(vapi_payload_l2_xconnect_details *payload)
{
  payload->rx_sw_if_index = htobe32(payload->rx_sw_if_index);
  payload->tx_sw_if_index = htobe32(payload->tx_sw_if_index);
}

static inline void vapi_msg_l2_xconnect_details_payload_ntoh(vapi_payload_l2_xconnect_details *payload)
{
  payload->rx_sw_if_index = be32toh(payload->rx_sw_if_index);
  payload->tx_sw_if_index = be32toh(payload->tx_sw_if_index);
}

static inline void vapi_msg_l2_xconnect_details_hton(vapi_msg_l2_xconnect_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_xconnect_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_xconnect_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_xconnect_details_ntoh(vapi_msg_l2_xconnect_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_xconnect_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_xconnect_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_xconnect_details_msg_size(vapi_msg_l2_xconnect_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_xconnect_details()
{
  static const char name[] = "l2_xconnect_details";
  static const char name_with_crc[] = "l2_xconnect_details_722e2378";
  static vapi_message_desc_t __vapi_metadata_l2_xconnect_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_xconnect_details, payload),
    sizeof(vapi_msg_l2_xconnect_details),
    (generic_swap_fn_t)vapi_msg_l2_xconnect_details_hton,
    (generic_swap_fn_t)vapi_msg_l2_xconnect_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_xconnect_details = vapi_register_msg(&__vapi_metadata_l2_xconnect_details);
  VAPI_DBG("Assigned msg id %d to l2_xconnect_details", vapi_msg_id_l2_xconnect_details);
}

static inline void vapi_set_vapi_msg_l2_xconnect_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_xconnect_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_xconnect_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_vpath_reply
#define defined_vapi_msg_sw_interface_set_vpath_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_vpath_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_vpath_reply payload;
} vapi_msg_sw_interface_set_vpath_reply;

static inline void vapi_msg_sw_interface_set_vpath_reply_payload_hton(vapi_payload_sw_interface_set_vpath_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_vpath_reply_payload_ntoh(vapi_payload_sw_interface_set_vpath_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_vpath_reply_hton(vapi_msg_sw_interface_set_vpath_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_vpath_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_vpath_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_vpath_reply_ntoh(vapi_msg_sw_interface_set_vpath_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_vpath_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_vpath_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_vpath_reply_msg_size(vapi_msg_sw_interface_set_vpath_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_vpath_reply()
{
  static const char name[] = "sw_interface_set_vpath_reply";
  static const char name_with_crc[] = "sw_interface_set_vpath_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_vpath_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_vpath_reply, payload),
    sizeof(vapi_msg_sw_interface_set_vpath_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_vpath_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_vpath_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_vpath_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_vpath_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_vpath_reply", vapi_msg_id_sw_interface_set_vpath_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_vpath_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_vpath_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_vpath_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bvi_create_reply
#define defined_vapi_msg_bvi_create_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_bvi_create_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bvi_create_reply payload;
} vapi_msg_bvi_create_reply;

static inline void vapi_msg_bvi_create_reply_payload_hton(vapi_payload_bvi_create_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bvi_create_reply_payload_ntoh(vapi_payload_bvi_create_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bvi_create_reply_hton(vapi_msg_bvi_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_create_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bvi_create_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bvi_create_reply_ntoh(vapi_msg_bvi_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_create_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bvi_create_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bvi_create_reply_msg_size(vapi_msg_bvi_create_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bvi_create_reply()
{
  static const char name[] = "bvi_create_reply";
  static const char name_with_crc[] = "bvi_create_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_bvi_create_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bvi_create_reply, payload),
    sizeof(vapi_msg_bvi_create_reply),
    (generic_swap_fn_t)vapi_msg_bvi_create_reply_hton,
    (generic_swap_fn_t)vapi_msg_bvi_create_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bvi_create_reply = vapi_register_msg(&__vapi_metadata_bvi_create_reply);
  VAPI_DBG("Assigned msg id %d to bvi_create_reply", vapi_msg_id_bvi_create_reply);
}

static inline void vapi_set_vapi_msg_bvi_create_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bvi_create_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bvi_create_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bd_ip_mac_flush_reply
#define defined_vapi_msg_bd_ip_mac_flush_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bd_ip_mac_flush_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bd_ip_mac_flush_reply payload;
} vapi_msg_bd_ip_mac_flush_reply;

static inline void vapi_msg_bd_ip_mac_flush_reply_payload_hton(vapi_payload_bd_ip_mac_flush_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bd_ip_mac_flush_reply_payload_ntoh(vapi_payload_bd_ip_mac_flush_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bd_ip_mac_flush_reply_hton(vapi_msg_bd_ip_mac_flush_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_flush_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bd_ip_mac_flush_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bd_ip_mac_flush_reply_ntoh(vapi_msg_bd_ip_mac_flush_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_flush_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bd_ip_mac_flush_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bd_ip_mac_flush_reply_msg_size(vapi_msg_bd_ip_mac_flush_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bd_ip_mac_flush_reply()
{
  static const char name[] = "bd_ip_mac_flush_reply";
  static const char name_with_crc[] = "bd_ip_mac_flush_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bd_ip_mac_flush_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bd_ip_mac_flush_reply, payload),
    sizeof(vapi_msg_bd_ip_mac_flush_reply),
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_flush_reply_hton,
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_flush_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bd_ip_mac_flush_reply = vapi_register_msg(&__vapi_metadata_bd_ip_mac_flush_reply);
  VAPI_DBG("Assigned msg id %d to bd_ip_mac_flush_reply", vapi_msg_id_bd_ip_mac_flush_reply);
}

static inline void vapi_set_vapi_msg_bd_ip_mac_flush_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bd_ip_mac_flush_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bd_ip_mac_flush_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bd_ip_mac_flush
#define defined_vapi_msg_bd_ip_mac_flush
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id; 
} vapi_payload_bd_ip_mac_flush;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bd_ip_mac_flush payload;
} vapi_msg_bd_ip_mac_flush;

static inline void vapi_msg_bd_ip_mac_flush_payload_hton(vapi_payload_bd_ip_mac_flush *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_bd_ip_mac_flush_payload_ntoh(vapi_payload_bd_ip_mac_flush *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_bd_ip_mac_flush_hton(vapi_msg_bd_ip_mac_flush *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_flush'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bd_ip_mac_flush_payload_hton(&msg->payload);
}

static inline void vapi_msg_bd_ip_mac_flush_ntoh(vapi_msg_bd_ip_mac_flush *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_flush'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bd_ip_mac_flush_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bd_ip_mac_flush_msg_size(vapi_msg_bd_ip_mac_flush *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bd_ip_mac_flush* vapi_alloc_bd_ip_mac_flush(struct vapi_ctx_s *ctx)
{
  vapi_msg_bd_ip_mac_flush *msg = NULL;
  const size_t size = sizeof(vapi_msg_bd_ip_mac_flush);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bd_ip_mac_flush*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bd_ip_mac_flush);

  return msg;
}

static inline vapi_error_e vapi_bd_ip_mac_flush(struct vapi_ctx_s *ctx,
  vapi_msg_bd_ip_mac_flush *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bd_ip_mac_flush_reply *reply),
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
  vapi_msg_bd_ip_mac_flush_hton(msg);
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
    vapi_msg_bd_ip_mac_flush_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bd_ip_mac_flush()
{
  static const char name[] = "bd_ip_mac_flush";
  static const char name_with_crc[] = "bd_ip_mac_flush_c25fdce6";
  static vapi_message_desc_t __vapi_metadata_bd_ip_mac_flush = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bd_ip_mac_flush, payload),
    sizeof(vapi_msg_bd_ip_mac_flush),
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_flush_hton,
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_flush_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bd_ip_mac_flush = vapi_register_msg(&__vapi_metadata_bd_ip_mac_flush);
  VAPI_DBG("Assigned msg id %d to bd_ip_mac_flush", vapi_msg_id_bd_ip_mac_flush);
}
#endif

#ifndef defined_vapi_msg_l2fib_add_del_reply
#define defined_vapi_msg_l2fib_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2fib_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2fib_add_del_reply payload;
} vapi_msg_l2fib_add_del_reply;

static inline void vapi_msg_l2fib_add_del_reply_payload_hton(vapi_payload_l2fib_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2fib_add_del_reply_payload_ntoh(vapi_payload_l2fib_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2fib_add_del_reply_hton(vapi_msg_l2fib_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2fib_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2fib_add_del_reply_ntoh(vapi_msg_l2fib_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2fib_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2fib_add_del_reply_msg_size(vapi_msg_l2fib_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2fib_add_del_reply()
{
  static const char name[] = "l2fib_add_del_reply";
  static const char name_with_crc[] = "l2fib_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2fib_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2fib_add_del_reply, payload),
    sizeof(vapi_msg_l2fib_add_del_reply),
    (generic_swap_fn_t)vapi_msg_l2fib_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_add_del_reply = vapi_register_msg(&__vapi_metadata_l2fib_add_del_reply);
  VAPI_DBG("Assigned msg id %d to l2fib_add_del_reply", vapi_msg_id_l2fib_add_del_reply);
}

static inline void vapi_set_vapi_msg_l2fib_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2fib_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2fib_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2fib_flush_bd_reply
#define defined_vapi_msg_l2fib_flush_bd_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2fib_flush_bd_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2fib_flush_bd_reply payload;
} vapi_msg_l2fib_flush_bd_reply;

static inline void vapi_msg_l2fib_flush_bd_reply_payload_hton(vapi_payload_l2fib_flush_bd_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2fib_flush_bd_reply_payload_ntoh(vapi_payload_l2fib_flush_bd_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2fib_flush_bd_reply_hton(vapi_msg_l2fib_flush_bd_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_bd_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2fib_flush_bd_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2fib_flush_bd_reply_ntoh(vapi_msg_l2fib_flush_bd_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_bd_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2fib_flush_bd_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2fib_flush_bd_reply_msg_size(vapi_msg_l2fib_flush_bd_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2fib_flush_bd_reply()
{
  static const char name[] = "l2fib_flush_bd_reply";
  static const char name_with_crc[] = "l2fib_flush_bd_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2fib_flush_bd_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2fib_flush_bd_reply, payload),
    sizeof(vapi_msg_l2fib_flush_bd_reply),
    (generic_swap_fn_t)vapi_msg_l2fib_flush_bd_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_flush_bd_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_flush_bd_reply = vapi_register_msg(&__vapi_metadata_l2fib_flush_bd_reply);
  VAPI_DBG("Assigned msg id %d to l2fib_flush_bd_reply", vapi_msg_id_l2fib_flush_bd_reply);
}

static inline void vapi_set_vapi_msg_l2fib_flush_bd_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2fib_flush_bd_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2fib_flush_bd_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bvi_delete_reply
#define defined_vapi_msg_bvi_delete_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bvi_delete_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bvi_delete_reply payload;
} vapi_msg_bvi_delete_reply;

static inline void vapi_msg_bvi_delete_reply_payload_hton(vapi_payload_bvi_delete_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bvi_delete_reply_payload_ntoh(vapi_payload_bvi_delete_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bvi_delete_reply_hton(vapi_msg_bvi_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_delete_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bvi_delete_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bvi_delete_reply_ntoh(vapi_msg_bvi_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_delete_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bvi_delete_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bvi_delete_reply_msg_size(vapi_msg_bvi_delete_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bvi_delete_reply()
{
  static const char name[] = "bvi_delete_reply";
  static const char name_with_crc[] = "bvi_delete_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bvi_delete_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bvi_delete_reply, payload),
    sizeof(vapi_msg_bvi_delete_reply),
    (generic_swap_fn_t)vapi_msg_bvi_delete_reply_hton,
    (generic_swap_fn_t)vapi_msg_bvi_delete_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bvi_delete_reply = vapi_register_msg(&__vapi_metadata_bvi_delete_reply);
  VAPI_DBG("Assigned msg id %d to bvi_delete_reply", vapi_msg_id_bvi_delete_reply);
}

static inline void vapi_set_vapi_msg_bvi_delete_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bvi_delete_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bvi_delete_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bvi_delete
#define defined_vapi_msg_bvi_delete
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_bvi_delete;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bvi_delete payload;
} vapi_msg_bvi_delete;

static inline void vapi_msg_bvi_delete_payload_hton(vapi_payload_bvi_delete *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_bvi_delete_payload_ntoh(vapi_payload_bvi_delete *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_bvi_delete_hton(vapi_msg_bvi_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_delete'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bvi_delete_payload_hton(&msg->payload);
}

static inline void vapi_msg_bvi_delete_ntoh(vapi_msg_bvi_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_delete'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bvi_delete_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bvi_delete_msg_size(vapi_msg_bvi_delete *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bvi_delete* vapi_alloc_bvi_delete(struct vapi_ctx_s *ctx)
{
  vapi_msg_bvi_delete *msg = NULL;
  const size_t size = sizeof(vapi_msg_bvi_delete);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bvi_delete*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bvi_delete);

  return msg;
}

static inline vapi_error_e vapi_bvi_delete(struct vapi_ctx_s *ctx,
  vapi_msg_bvi_delete *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bvi_delete_reply *reply),
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
  vapi_msg_bvi_delete_hton(msg);
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
    vapi_msg_bvi_delete_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bvi_delete()
{
  static const char name[] = "bvi_delete";
  static const char name_with_crc[] = "bvi_delete_529cb13f";
  static vapi_message_desc_t __vapi_metadata_bvi_delete = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bvi_delete, payload),
    sizeof(vapi_msg_bvi_delete),
    (generic_swap_fn_t)vapi_msg_bvi_delete_hton,
    (generic_swap_fn_t)vapi_msg_bvi_delete_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bvi_delete = vapi_register_msg(&__vapi_metadata_bvi_delete);
  VAPI_DBG("Assigned msg id %d to bvi_delete", vapi_msg_id_bvi_delete);
}
#endif

#ifndef defined_vapi_msg_l2_interface_vlan_tag_rewrite_reply
#define defined_vapi_msg_l2_interface_vlan_tag_rewrite_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2_interface_vlan_tag_rewrite_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_interface_vlan_tag_rewrite_reply payload;
} vapi_msg_l2_interface_vlan_tag_rewrite_reply;

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_reply_payload_hton(vapi_payload_l2_interface_vlan_tag_rewrite_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_reply_payload_ntoh(vapi_payload_l2_interface_vlan_tag_rewrite_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_reply_hton(vapi_msg_l2_interface_vlan_tag_rewrite_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_vlan_tag_rewrite_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_interface_vlan_tag_rewrite_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_reply_ntoh(vapi_msg_l2_interface_vlan_tag_rewrite_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_vlan_tag_rewrite_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_interface_vlan_tag_rewrite_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_interface_vlan_tag_rewrite_reply_msg_size(vapi_msg_l2_interface_vlan_tag_rewrite_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_interface_vlan_tag_rewrite_reply()
{
  static const char name[] = "l2_interface_vlan_tag_rewrite_reply";
  static const char name_with_crc[] = "l2_interface_vlan_tag_rewrite_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2_interface_vlan_tag_rewrite_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_interface_vlan_tag_rewrite_reply, payload),
    sizeof(vapi_msg_l2_interface_vlan_tag_rewrite_reply),
    (generic_swap_fn_t)vapi_msg_l2_interface_vlan_tag_rewrite_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2_interface_vlan_tag_rewrite_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_interface_vlan_tag_rewrite_reply = vapi_register_msg(&__vapi_metadata_l2_interface_vlan_tag_rewrite_reply);
  VAPI_DBG("Assigned msg id %d to l2_interface_vlan_tag_rewrite_reply", vapi_msg_id_l2_interface_vlan_tag_rewrite_reply);
}

static inline void vapi_set_vapi_msg_l2_interface_vlan_tag_rewrite_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_interface_vlan_tag_rewrite_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_interface_vlan_tag_rewrite_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bd_ip_mac_details
#define defined_vapi_msg_bd_ip_mac_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_bd_ip_mac entry; 
} vapi_payload_bd_ip_mac_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bd_ip_mac_details payload;
} vapi_msg_bd_ip_mac_details;

static inline void vapi_msg_bd_ip_mac_details_payload_hton(vapi_payload_bd_ip_mac_details *payload)
{
  vapi_type_bd_ip_mac_hton(&payload->entry);
}

static inline void vapi_msg_bd_ip_mac_details_payload_ntoh(vapi_payload_bd_ip_mac_details *payload)
{
  vapi_type_bd_ip_mac_ntoh(&payload->entry);
}

static inline void vapi_msg_bd_ip_mac_details_hton(vapi_msg_bd_ip_mac_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bd_ip_mac_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_bd_ip_mac_details_ntoh(vapi_msg_bd_ip_mac_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bd_ip_mac_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bd_ip_mac_details_msg_size(vapi_msg_bd_ip_mac_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bd_ip_mac_details()
{
  static const char name[] = "bd_ip_mac_details";
  static const char name_with_crc[] = "bd_ip_mac_details_3f1eb886";
  static vapi_message_desc_t __vapi_metadata_bd_ip_mac_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bd_ip_mac_details, payload),
    sizeof(vapi_msg_bd_ip_mac_details),
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_details_hton,
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bd_ip_mac_details = vapi_register_msg(&__vapi_metadata_bd_ip_mac_details);
  VAPI_DBG("Assigned msg id %d to bd_ip_mac_details", vapi_msg_id_bd_ip_mac_details);
}

static inline void vapi_set_vapi_msg_bd_ip_mac_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bd_ip_mac_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bd_ip_mac_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bd_ip_mac_dump
#define defined_vapi_msg_bd_ip_mac_dump
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id; 
} vapi_payload_bd_ip_mac_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bd_ip_mac_dump payload;
} vapi_msg_bd_ip_mac_dump;

static inline void vapi_msg_bd_ip_mac_dump_payload_hton(vapi_payload_bd_ip_mac_dump *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_bd_ip_mac_dump_payload_ntoh(vapi_payload_bd_ip_mac_dump *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_bd_ip_mac_dump_hton(vapi_msg_bd_ip_mac_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bd_ip_mac_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_bd_ip_mac_dump_ntoh(vapi_msg_bd_ip_mac_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bd_ip_mac_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bd_ip_mac_dump_msg_size(vapi_msg_bd_ip_mac_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bd_ip_mac_dump* vapi_alloc_bd_ip_mac_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_bd_ip_mac_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_bd_ip_mac_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bd_ip_mac_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bd_ip_mac_dump);

  return msg;
}

static inline vapi_error_e vapi_bd_ip_mac_dump(struct vapi_ctx_s *ctx,
  vapi_msg_bd_ip_mac_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bd_ip_mac_details *reply),
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
  vapi_msg_bd_ip_mac_dump_hton(msg);
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
    vapi_msg_bd_ip_mac_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bd_ip_mac_dump()
{
  static const char name[] = "bd_ip_mac_dump";
  static const char name_with_crc[] = "bd_ip_mac_dump_c25fdce6";
  static vapi_message_desc_t __vapi_metadata_bd_ip_mac_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bd_ip_mac_dump, payload),
    sizeof(vapi_msg_bd_ip_mac_dump),
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_dump_hton,
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bd_ip_mac_dump = vapi_register_msg(&__vapi_metadata_bd_ip_mac_dump);
  VAPI_DBG("Assigned msg id %d to bd_ip_mac_dump", vapi_msg_id_bd_ip_mac_dump);
}
#endif

#ifndef defined_vapi_msg_bd_ip_mac_add_del
#define defined_vapi_msg_bd_ip_mac_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_bd_ip_mac entry; 
} vapi_payload_bd_ip_mac_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bd_ip_mac_add_del payload;
} vapi_msg_bd_ip_mac_add_del;

static inline void vapi_msg_bd_ip_mac_add_del_payload_hton(vapi_payload_bd_ip_mac_add_del *payload)
{
  vapi_type_bd_ip_mac_hton(&payload->entry);
}

static inline void vapi_msg_bd_ip_mac_add_del_payload_ntoh(vapi_payload_bd_ip_mac_add_del *payload)
{
  vapi_type_bd_ip_mac_ntoh(&payload->entry);
}

static inline void vapi_msg_bd_ip_mac_add_del_hton(vapi_msg_bd_ip_mac_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bd_ip_mac_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_bd_ip_mac_add_del_ntoh(vapi_msg_bd_ip_mac_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bd_ip_mac_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bd_ip_mac_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bd_ip_mac_add_del_msg_size(vapi_msg_bd_ip_mac_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bd_ip_mac_add_del* vapi_alloc_bd_ip_mac_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_bd_ip_mac_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_bd_ip_mac_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bd_ip_mac_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bd_ip_mac_add_del);

  return msg;
}

static inline vapi_error_e vapi_bd_ip_mac_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_bd_ip_mac_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bd_ip_mac_add_del_reply *reply),
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
  vapi_msg_bd_ip_mac_add_del_hton(msg);
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
    vapi_msg_bd_ip_mac_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bd_ip_mac_add_del()
{
  static const char name[] = "bd_ip_mac_add_del";
  static const char name_with_crc[] = "bd_ip_mac_add_del_97367ad1";
  static vapi_message_desc_t __vapi_metadata_bd_ip_mac_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bd_ip_mac_add_del, payload),
    sizeof(vapi_msg_bd_ip_mac_add_del),
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_add_del_hton,
    (generic_swap_fn_t)vapi_msg_bd_ip_mac_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bd_ip_mac_add_del = vapi_register_msg(&__vapi_metadata_bd_ip_mac_add_del);
  VAPI_DBG("Assigned msg id %d to bd_ip_mac_add_del", vapi_msg_id_bd_ip_mac_add_del);
}
#endif

#ifndef defined_vapi_msg_l2fib_flush_int_reply
#define defined_vapi_msg_l2fib_flush_int_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2fib_flush_int_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2fib_flush_int_reply payload;
} vapi_msg_l2fib_flush_int_reply;

static inline void vapi_msg_l2fib_flush_int_reply_payload_hton(vapi_payload_l2fib_flush_int_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2fib_flush_int_reply_payload_ntoh(vapi_payload_l2fib_flush_int_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2fib_flush_int_reply_hton(vapi_msg_l2fib_flush_int_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_int_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2fib_flush_int_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2fib_flush_int_reply_ntoh(vapi_msg_l2fib_flush_int_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_int_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2fib_flush_int_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2fib_flush_int_reply_msg_size(vapi_msg_l2fib_flush_int_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2fib_flush_int_reply()
{
  static const char name[] = "l2fib_flush_int_reply";
  static const char name_with_crc[] = "l2fib_flush_int_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2fib_flush_int_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2fib_flush_int_reply, payload),
    sizeof(vapi_msg_l2fib_flush_int_reply),
    (generic_swap_fn_t)vapi_msg_l2fib_flush_int_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_flush_int_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_flush_int_reply = vapi_register_msg(&__vapi_metadata_l2fib_flush_int_reply);
  VAPI_DBG("Assigned msg id %d to l2fib_flush_int_reply", vapi_msg_id_l2fib_flush_int_reply);
}

static inline void vapi_set_vapi_msg_l2fib_flush_int_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2fib_flush_int_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2fib_flush_int_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2_fib_clear_table_reply
#define defined_vapi_msg_l2_fib_clear_table_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2_fib_clear_table_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_fib_clear_table_reply payload;
} vapi_msg_l2_fib_clear_table_reply;

static inline void vapi_msg_l2_fib_clear_table_reply_payload_hton(vapi_payload_l2_fib_clear_table_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2_fib_clear_table_reply_payload_ntoh(vapi_payload_l2_fib_clear_table_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2_fib_clear_table_reply_hton(vapi_msg_l2_fib_clear_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_clear_table_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_fib_clear_table_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_fib_clear_table_reply_ntoh(vapi_msg_l2_fib_clear_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_clear_table_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_fib_clear_table_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_fib_clear_table_reply_msg_size(vapi_msg_l2_fib_clear_table_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_fib_clear_table_reply()
{
  static const char name[] = "l2_fib_clear_table_reply";
  static const char name_with_crc[] = "l2_fib_clear_table_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2_fib_clear_table_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_fib_clear_table_reply, payload),
    sizeof(vapi_msg_l2_fib_clear_table_reply),
    (generic_swap_fn_t)vapi_msg_l2_fib_clear_table_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2_fib_clear_table_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_fib_clear_table_reply = vapi_register_msg(&__vapi_metadata_l2_fib_clear_table_reply);
  VAPI_DBG("Assigned msg id %d to l2_fib_clear_table_reply", vapi_msg_id_l2_fib_clear_table_reply);
}

static inline void vapi_set_vapi_msg_l2_fib_clear_table_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_fib_clear_table_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_fib_clear_table_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bridge_flags_reply
#define defined_vapi_msg_bridge_flags_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 resulting_feature_bitmap; 
} vapi_payload_bridge_flags_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bridge_flags_reply payload;
} vapi_msg_bridge_flags_reply;

static inline void vapi_msg_bridge_flags_reply_payload_hton(vapi_payload_bridge_flags_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->resulting_feature_bitmap = htobe32(payload->resulting_feature_bitmap);
}

static inline void vapi_msg_bridge_flags_reply_payload_ntoh(vapi_payload_bridge_flags_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->resulting_feature_bitmap = be32toh(payload->resulting_feature_bitmap);
}

static inline void vapi_msg_bridge_flags_reply_hton(vapi_msg_bridge_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_flags_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bridge_flags_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_flags_reply_ntoh(vapi_msg_bridge_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_flags_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bridge_flags_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_flags_reply_msg_size(vapi_msg_bridge_flags_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bridge_flags_reply()
{
  static const char name[] = "bridge_flags_reply";
  static const char name_with_crc[] = "bridge_flags_reply_29b2a2b3";
  static vapi_message_desc_t __vapi_metadata_bridge_flags_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bridge_flags_reply, payload),
    sizeof(vapi_msg_bridge_flags_reply),
    (generic_swap_fn_t)vapi_msg_bridge_flags_reply_hton,
    (generic_swap_fn_t)vapi_msg_bridge_flags_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_flags_reply = vapi_register_msg(&__vapi_metadata_bridge_flags_reply);
  VAPI_DBG("Assigned msg id %d to bridge_flags_reply", vapi_msg_id_bridge_flags_reply);
}

static inline void vapi_set_vapi_msg_bridge_flags_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bridge_flags_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bridge_flags_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2fib_flush_bd
#define defined_vapi_msg_l2fib_flush_bd
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id; 
} vapi_payload_l2fib_flush_bd;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2fib_flush_bd payload;
} vapi_msg_l2fib_flush_bd;

static inline void vapi_msg_l2fib_flush_bd_payload_hton(vapi_payload_l2fib_flush_bd *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_l2fib_flush_bd_payload_ntoh(vapi_payload_l2fib_flush_bd *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_l2fib_flush_bd_hton(vapi_msg_l2fib_flush_bd *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_bd'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2fib_flush_bd_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2fib_flush_bd_ntoh(vapi_msg_l2fib_flush_bd *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_bd'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2fib_flush_bd_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2fib_flush_bd_msg_size(vapi_msg_l2fib_flush_bd *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2fib_flush_bd* vapi_alloc_l2fib_flush_bd(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2fib_flush_bd *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2fib_flush_bd);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2fib_flush_bd*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2fib_flush_bd);

  return msg;
}

static inline vapi_error_e vapi_l2fib_flush_bd(struct vapi_ctx_s *ctx,
  vapi_msg_l2fib_flush_bd *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2fib_flush_bd_reply *reply),
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
  vapi_msg_l2fib_flush_bd_hton(msg);
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
    vapi_msg_l2fib_flush_bd_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2fib_flush_bd()
{
  static const char name[] = "l2fib_flush_bd";
  static const char name_with_crc[] = "l2fib_flush_bd_c25fdce6";
  static vapi_message_desc_t __vapi_metadata_l2fib_flush_bd = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2fib_flush_bd, payload),
    sizeof(vapi_msg_l2fib_flush_bd),
    (generic_swap_fn_t)vapi_msg_l2fib_flush_bd_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_flush_bd_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_flush_bd = vapi_register_msg(&__vapi_metadata_l2fib_flush_bd);
  VAPI_DBG("Assigned msg id %d to l2fib_flush_bd", vapi_msg_id_l2fib_flush_bd);
}
#endif

#ifndef defined_vapi_msg_l2fib_flush_int
#define defined_vapi_msg_l2fib_flush_int
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_l2fib_flush_int;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2fib_flush_int payload;
} vapi_msg_l2fib_flush_int;

static inline void vapi_msg_l2fib_flush_int_payload_hton(vapi_payload_l2fib_flush_int *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_l2fib_flush_int_payload_ntoh(vapi_payload_l2fib_flush_int *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_l2fib_flush_int_hton(vapi_msg_l2fib_flush_int *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_int'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2fib_flush_int_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2fib_flush_int_ntoh(vapi_msg_l2fib_flush_int *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_flush_int'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2fib_flush_int_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2fib_flush_int_msg_size(vapi_msg_l2fib_flush_int *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2fib_flush_int* vapi_alloc_l2fib_flush_int(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2fib_flush_int *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2fib_flush_int);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2fib_flush_int*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2fib_flush_int);

  return msg;
}

static inline vapi_error_e vapi_l2fib_flush_int(struct vapi_ctx_s *ctx,
  vapi_msg_l2fib_flush_int *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2fib_flush_int_reply *reply),
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
  vapi_msg_l2fib_flush_int_hton(msg);
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
    vapi_msg_l2fib_flush_int_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2fib_flush_int()
{
  static const char name[] = "l2fib_flush_int";
  static const char name_with_crc[] = "l2fib_flush_int_529cb13f";
  static vapi_message_desc_t __vapi_metadata_l2fib_flush_int = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2fib_flush_int, payload),
    sizeof(vapi_msg_l2fib_flush_int),
    (generic_swap_fn_t)vapi_msg_l2fib_flush_int_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_flush_int_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_flush_int = vapi_register_msg(&__vapi_metadata_l2fib_flush_int);
  VAPI_DBG("Assigned msg id %d to l2fib_flush_int", vapi_msg_id_l2fib_flush_int);
}
#endif

#ifndef defined_vapi_msg_bridge_domain_add_del_reply
#define defined_vapi_msg_bridge_domain_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bridge_domain_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bridge_domain_add_del_reply payload;
} vapi_msg_bridge_domain_add_del_reply;

static inline void vapi_msg_bridge_domain_add_del_reply_payload_hton(vapi_payload_bridge_domain_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bridge_domain_add_del_reply_payload_ntoh(vapi_payload_bridge_domain_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bridge_domain_add_del_reply_hton(vapi_msg_bridge_domain_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bridge_domain_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_domain_add_del_reply_ntoh(vapi_msg_bridge_domain_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bridge_domain_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_domain_add_del_reply_msg_size(vapi_msg_bridge_domain_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bridge_domain_add_del_reply()
{
  static const char name[] = "bridge_domain_add_del_reply";
  static const char name_with_crc[] = "bridge_domain_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bridge_domain_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bridge_domain_add_del_reply, payload),
    sizeof(vapi_msg_bridge_domain_add_del_reply),
    (generic_swap_fn_t)vapi_msg_bridge_domain_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_bridge_domain_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_domain_add_del_reply = vapi_register_msg(&__vapi_metadata_bridge_domain_add_del_reply);
  VAPI_DBG("Assigned msg id %d to bridge_domain_add_del_reply", vapi_msg_id_bridge_domain_add_del_reply);
}

static inline void vapi_set_vapi_msg_bridge_domain_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bridge_domain_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bridge_domain_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bridge_domain_set_mac_age_reply
#define defined_vapi_msg_bridge_domain_set_mac_age_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_bridge_domain_set_mac_age_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_bridge_domain_set_mac_age_reply payload;
} vapi_msg_bridge_domain_set_mac_age_reply;

static inline void vapi_msg_bridge_domain_set_mac_age_reply_payload_hton(vapi_payload_bridge_domain_set_mac_age_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_bridge_domain_set_mac_age_reply_payload_ntoh(vapi_payload_bridge_domain_set_mac_age_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_bridge_domain_set_mac_age_reply_hton(vapi_msg_bridge_domain_set_mac_age_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_set_mac_age_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_bridge_domain_set_mac_age_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_domain_set_mac_age_reply_ntoh(vapi_msg_bridge_domain_set_mac_age_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_set_mac_age_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_bridge_domain_set_mac_age_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_domain_set_mac_age_reply_msg_size(vapi_msg_bridge_domain_set_mac_age_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_bridge_domain_set_mac_age_reply()
{
  static const char name[] = "bridge_domain_set_mac_age_reply";
  static const char name_with_crc[] = "bridge_domain_set_mac_age_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_bridge_domain_set_mac_age_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_bridge_domain_set_mac_age_reply, payload),
    sizeof(vapi_msg_bridge_domain_set_mac_age_reply),
    (generic_swap_fn_t)vapi_msg_bridge_domain_set_mac_age_reply_hton,
    (generic_swap_fn_t)vapi_msg_bridge_domain_set_mac_age_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_domain_set_mac_age_reply = vapi_register_msg(&__vapi_metadata_bridge_domain_set_mac_age_reply);
  VAPI_DBG("Assigned msg id %d to bridge_domain_set_mac_age_reply", vapi_msg_id_bridge_domain_set_mac_age_reply);
}

static inline void vapi_set_vapi_msg_bridge_domain_set_mac_age_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_bridge_domain_set_mac_age_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_bridge_domain_set_mac_age_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_bridge_domain_set_mac_age
#define defined_vapi_msg_bridge_domain_set_mac_age
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id;
  u8 mac_age; 
} vapi_payload_bridge_domain_set_mac_age;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bridge_domain_set_mac_age payload;
} vapi_msg_bridge_domain_set_mac_age;

static inline void vapi_msg_bridge_domain_set_mac_age_payload_hton(vapi_payload_bridge_domain_set_mac_age *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_bridge_domain_set_mac_age_payload_ntoh(vapi_payload_bridge_domain_set_mac_age *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_bridge_domain_set_mac_age_hton(vapi_msg_bridge_domain_set_mac_age *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_set_mac_age'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bridge_domain_set_mac_age_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_domain_set_mac_age_ntoh(vapi_msg_bridge_domain_set_mac_age *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_set_mac_age'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bridge_domain_set_mac_age_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_domain_set_mac_age_msg_size(vapi_msg_bridge_domain_set_mac_age *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bridge_domain_set_mac_age* vapi_alloc_bridge_domain_set_mac_age(struct vapi_ctx_s *ctx)
{
  vapi_msg_bridge_domain_set_mac_age *msg = NULL;
  const size_t size = sizeof(vapi_msg_bridge_domain_set_mac_age);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bridge_domain_set_mac_age*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bridge_domain_set_mac_age);

  return msg;
}

static inline vapi_error_e vapi_bridge_domain_set_mac_age(struct vapi_ctx_s *ctx,
  vapi_msg_bridge_domain_set_mac_age *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bridge_domain_set_mac_age_reply *reply),
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
  vapi_msg_bridge_domain_set_mac_age_hton(msg);
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
    vapi_msg_bridge_domain_set_mac_age_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bridge_domain_set_mac_age()
{
  static const char name[] = "bridge_domain_set_mac_age";
  static const char name_with_crc[] = "bridge_domain_set_mac_age_b537ad7b";
  static vapi_message_desc_t __vapi_metadata_bridge_domain_set_mac_age = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bridge_domain_set_mac_age, payload),
    sizeof(vapi_msg_bridge_domain_set_mac_age),
    (generic_swap_fn_t)vapi_msg_bridge_domain_set_mac_age_hton,
    (generic_swap_fn_t)vapi_msg_bridge_domain_set_mac_age_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_domain_set_mac_age = vapi_register_msg(&__vapi_metadata_bridge_domain_set_mac_age);
  VAPI_DBG("Assigned msg id %d to bridge_domain_set_mac_age", vapi_msg_id_bridge_domain_set_mac_age);
}
#endif

#ifndef defined_vapi_msg_l2_interface_efp_filter_reply
#define defined_vapi_msg_l2_interface_efp_filter_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2_interface_efp_filter_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_interface_efp_filter_reply payload;
} vapi_msg_l2_interface_efp_filter_reply;

static inline void vapi_msg_l2_interface_efp_filter_reply_payload_hton(vapi_payload_l2_interface_efp_filter_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2_interface_efp_filter_reply_payload_ntoh(vapi_payload_l2_interface_efp_filter_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2_interface_efp_filter_reply_hton(vapi_msg_l2_interface_efp_filter_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_efp_filter_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_interface_efp_filter_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_interface_efp_filter_reply_ntoh(vapi_msg_l2_interface_efp_filter_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_efp_filter_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_interface_efp_filter_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_interface_efp_filter_reply_msg_size(vapi_msg_l2_interface_efp_filter_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_interface_efp_filter_reply()
{
  static const char name[] = "l2_interface_efp_filter_reply";
  static const char name_with_crc[] = "l2_interface_efp_filter_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2_interface_efp_filter_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_interface_efp_filter_reply, payload),
    sizeof(vapi_msg_l2_interface_efp_filter_reply),
    (generic_swap_fn_t)vapi_msg_l2_interface_efp_filter_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2_interface_efp_filter_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_interface_efp_filter_reply = vapi_register_msg(&__vapi_metadata_l2_interface_efp_filter_reply);
  VAPI_DBG("Assigned msg id %d to l2_interface_efp_filter_reply", vapi_msg_id_l2_interface_efp_filter_reply);
}

static inline void vapi_set_vapi_msg_l2_interface_efp_filter_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_interface_efp_filter_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_interface_efp_filter_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2_interface_efp_filter
#define defined_vapi_msg_l2_interface_efp_filter
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 enable_disable; 
} vapi_payload_l2_interface_efp_filter;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2_interface_efp_filter payload;
} vapi_msg_l2_interface_efp_filter;

static inline void vapi_msg_l2_interface_efp_filter_payload_hton(vapi_payload_l2_interface_efp_filter *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_l2_interface_efp_filter_payload_ntoh(vapi_payload_l2_interface_efp_filter *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_l2_interface_efp_filter_hton(vapi_msg_l2_interface_efp_filter *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_efp_filter'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2_interface_efp_filter_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_interface_efp_filter_ntoh(vapi_msg_l2_interface_efp_filter *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_efp_filter'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2_interface_efp_filter_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_interface_efp_filter_msg_size(vapi_msg_l2_interface_efp_filter *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_interface_efp_filter* vapi_alloc_l2_interface_efp_filter(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_interface_efp_filter *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_interface_efp_filter);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_interface_efp_filter*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_interface_efp_filter);

  return msg;
}

static inline vapi_error_e vapi_l2_interface_efp_filter(struct vapi_ctx_s *ctx,
  vapi_msg_l2_interface_efp_filter *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_interface_efp_filter_reply *reply),
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
  vapi_msg_l2_interface_efp_filter_hton(msg);
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
    vapi_msg_l2_interface_efp_filter_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_interface_efp_filter()
{
  static const char name[] = "l2_interface_efp_filter";
  static const char name_with_crc[] = "l2_interface_efp_filter_69d24598";
  static vapi_message_desc_t __vapi_metadata_l2_interface_efp_filter = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2_interface_efp_filter, payload),
    sizeof(vapi_msg_l2_interface_efp_filter),
    (generic_swap_fn_t)vapi_msg_l2_interface_efp_filter_hton,
    (generic_swap_fn_t)vapi_msg_l2_interface_efp_filter_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_interface_efp_filter = vapi_register_msg(&__vapi_metadata_l2_interface_efp_filter);
  VAPI_DBG("Assigned msg id %d to l2_interface_efp_filter", vapi_msg_id_l2_interface_efp_filter);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_l2_xconnect_reply
#define defined_vapi_msg_sw_interface_set_l2_xconnect_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_l2_xconnect_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_l2_xconnect_reply payload;
} vapi_msg_sw_interface_set_l2_xconnect_reply;

static inline void vapi_msg_sw_interface_set_l2_xconnect_reply_payload_hton(vapi_payload_sw_interface_set_l2_xconnect_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_l2_xconnect_reply_payload_ntoh(vapi_payload_sw_interface_set_l2_xconnect_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_l2_xconnect_reply_hton(vapi_msg_sw_interface_set_l2_xconnect_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_xconnect_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_l2_xconnect_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_l2_xconnect_reply_ntoh(vapi_msg_sw_interface_set_l2_xconnect_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_xconnect_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_l2_xconnect_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_l2_xconnect_reply_msg_size(vapi_msg_sw_interface_set_l2_xconnect_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_l2_xconnect_reply()
{
  static const char name[] = "sw_interface_set_l2_xconnect_reply";
  static const char name_with_crc[] = "sw_interface_set_l2_xconnect_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_l2_xconnect_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_l2_xconnect_reply, payload),
    sizeof(vapi_msg_sw_interface_set_l2_xconnect_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_xconnect_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_xconnect_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_l2_xconnect_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_l2_xconnect_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_l2_xconnect_reply", vapi_msg_id_sw_interface_set_l2_xconnect_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_l2_xconnect_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_l2_xconnect_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_l2_xconnect_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_l2_xconnect
#define defined_vapi_msg_sw_interface_set_l2_xconnect
typedef struct __attribute__ ((__packed__)) {
  u32 rx_sw_if_index;
  u32 tx_sw_if_index;
  u8 enable; 
} vapi_payload_sw_interface_set_l2_xconnect;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_l2_xconnect payload;
} vapi_msg_sw_interface_set_l2_xconnect;

static inline void vapi_msg_sw_interface_set_l2_xconnect_payload_hton(vapi_payload_sw_interface_set_l2_xconnect *payload)
{
  payload->rx_sw_if_index = htobe32(payload->rx_sw_if_index);
  payload->tx_sw_if_index = htobe32(payload->tx_sw_if_index);
}

static inline void vapi_msg_sw_interface_set_l2_xconnect_payload_ntoh(vapi_payload_sw_interface_set_l2_xconnect *payload)
{
  payload->rx_sw_if_index = be32toh(payload->rx_sw_if_index);
  payload->tx_sw_if_index = be32toh(payload->tx_sw_if_index);
}

static inline void vapi_msg_sw_interface_set_l2_xconnect_hton(vapi_msg_sw_interface_set_l2_xconnect *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_xconnect'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_l2_xconnect_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_l2_xconnect_ntoh(vapi_msg_sw_interface_set_l2_xconnect *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_xconnect'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_l2_xconnect_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_l2_xconnect_msg_size(vapi_msg_sw_interface_set_l2_xconnect *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_l2_xconnect* vapi_alloc_sw_interface_set_l2_xconnect(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_l2_xconnect *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_l2_xconnect);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_l2_xconnect*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_l2_xconnect);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_l2_xconnect(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_l2_xconnect *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_l2_xconnect_reply *reply),
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
  vapi_msg_sw_interface_set_l2_xconnect_hton(msg);
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
    vapi_msg_sw_interface_set_l2_xconnect_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_l2_xconnect()
{
  static const char name[] = "sw_interface_set_l2_xconnect";
  static const char name_with_crc[] = "sw_interface_set_l2_xconnect_95de3988";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_l2_xconnect = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_l2_xconnect, payload),
    sizeof(vapi_msg_sw_interface_set_l2_xconnect),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_xconnect_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_xconnect_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_l2_xconnect = vapi_register_msg(&__vapi_metadata_sw_interface_set_l2_xconnect);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_l2_xconnect", vapi_msg_id_sw_interface_set_l2_xconnect);
}
#endif

#ifndef defined_vapi_msg_l2_macs_event
#define defined_vapi_msg_l2_macs_event
typedef struct __attribute__ ((__packed__)) {
  u16 _vl_msg_id;
  u32 client_index;
  u32 pid;
  u32 n_macs;
  vapi_type_mac_entry mac[0]; 
} vapi_payload_l2_macs_event;

typedef struct __attribute__ ((__packed__)) {

  vapi_payload_l2_macs_event payload;
} vapi_msg_l2_macs_event;

static inline void vapi_msg_l2_macs_event_payload_hton(vapi_payload_l2_macs_event *payload)
{
  payload->_vl_msg_id = htobe16(payload->_vl_msg_id);
  payload->client_index = htobe32(payload->client_index);
  payload->pid = htobe32(payload->pid);
  payload->n_macs = htobe32(payload->n_macs);
  do { unsigned i; for (i = 0; i < be32toh(payload->n_macs); ++i) { vapi_type_mac_entry_hton(&payload->mac[i]); } } while(0);
}

static inline void vapi_msg_l2_macs_event_payload_ntoh(vapi_payload_l2_macs_event *payload)
{
  payload->_vl_msg_id = be16toh(payload->_vl_msg_id);
  payload->client_index = be32toh(payload->client_index);
  payload->pid = be32toh(payload->pid);
  payload->n_macs = be32toh(payload->n_macs);
  do { unsigned i; for (i = 0; i < payload->n_macs; ++i) { vapi_type_mac_entry_ntoh(&payload->mac[i]); } } while(0);
}

static inline void vapi_msg_l2_macs_event_hton(vapi_msg_l2_macs_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_macs_event'@%p to big endian", msg);

  vapi_msg_l2_macs_event_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_macs_event_ntoh(vapi_msg_l2_macs_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_macs_event'@%p to host byte order", msg);

  vapi_msg_l2_macs_event_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_macs_event_msg_size(vapi_msg_l2_macs_event *msg)
{
  return sizeof(*msg)+ msg->payload.n_macs * sizeof(msg->payload.mac[0]);
}

static void __attribute__((constructor)) __vapi_constructor_l2_macs_event()
{
  static const char name[] = "l2_macs_event";
  static const char name_with_crc[] = "l2_macs_event_afc74a60";
  static vapi_message_desc_t __vapi_metadata_l2_macs_event = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    false,
    0,
    offsetof(vapi_msg_l2_macs_event, payload),
    sizeof(vapi_msg_l2_macs_event),
    (generic_swap_fn_t)vapi_msg_l2_macs_event_hton,
    (generic_swap_fn_t)vapi_msg_l2_macs_event_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_macs_event = vapi_register_msg(&__vapi_metadata_l2_macs_event);
  VAPI_DBG("Assigned msg id %d to l2_macs_event", vapi_msg_id_l2_macs_event);
}

static inline void vapi_set_vapi_msg_l2_macs_event_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_macs_event *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_macs_event, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2_patch_add_del
#define defined_vapi_msg_l2_patch_add_del
typedef struct __attribute__ ((__packed__)) {
  u32 rx_sw_if_index;
  u32 tx_sw_if_index;
  u8 is_add; 
} vapi_payload_l2_patch_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2_patch_add_del payload;
} vapi_msg_l2_patch_add_del;

static inline void vapi_msg_l2_patch_add_del_payload_hton(vapi_payload_l2_patch_add_del *payload)
{
  payload->rx_sw_if_index = htobe32(payload->rx_sw_if_index);
  payload->tx_sw_if_index = htobe32(payload->tx_sw_if_index);
}

static inline void vapi_msg_l2_patch_add_del_payload_ntoh(vapi_payload_l2_patch_add_del *payload)
{
  payload->rx_sw_if_index = be32toh(payload->rx_sw_if_index);
  payload->tx_sw_if_index = be32toh(payload->tx_sw_if_index);
}

static inline void vapi_msg_l2_patch_add_del_hton(vapi_msg_l2_patch_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_patch_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2_patch_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_patch_add_del_ntoh(vapi_msg_l2_patch_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_patch_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2_patch_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_patch_add_del_msg_size(vapi_msg_l2_patch_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_patch_add_del* vapi_alloc_l2_patch_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_patch_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_patch_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_patch_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_patch_add_del);

  return msg;
}

static inline vapi_error_e vapi_l2_patch_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_l2_patch_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_patch_add_del_reply *reply),
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
  vapi_msg_l2_patch_add_del_hton(msg);
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
    vapi_msg_l2_patch_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_patch_add_del()
{
  static const char name[] = "l2_patch_add_del";
  static const char name_with_crc[] = "l2_patch_add_del_62506e63";
  static vapi_message_desc_t __vapi_metadata_l2_patch_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2_patch_add_del, payload),
    sizeof(vapi_msg_l2_patch_add_del),
    (generic_swap_fn_t)vapi_msg_l2_patch_add_del_hton,
    (generic_swap_fn_t)vapi_msg_l2_patch_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_patch_add_del = vapi_register_msg(&__vapi_metadata_l2_patch_add_del);
  VAPI_DBG("Assigned msg id %d to l2_patch_add_del", vapi_msg_id_l2_patch_add_del);
}
#endif

#ifndef defined_vapi_msg_l2_interface_pbb_tag_rewrite_reply
#define defined_vapi_msg_l2_interface_pbb_tag_rewrite_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_l2_interface_pbb_tag_rewrite_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_l2_interface_pbb_tag_rewrite_reply payload;
} vapi_msg_l2_interface_pbb_tag_rewrite_reply;

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_reply_payload_hton(vapi_payload_l2_interface_pbb_tag_rewrite_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_reply_payload_ntoh(vapi_payload_l2_interface_pbb_tag_rewrite_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_reply_hton(vapi_msg_l2_interface_pbb_tag_rewrite_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_pbb_tag_rewrite_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_l2_interface_pbb_tag_rewrite_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_reply_ntoh(vapi_msg_l2_interface_pbb_tag_rewrite_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_pbb_tag_rewrite_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_l2_interface_pbb_tag_rewrite_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_interface_pbb_tag_rewrite_reply_msg_size(vapi_msg_l2_interface_pbb_tag_rewrite_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_l2_interface_pbb_tag_rewrite_reply()
{
  static const char name[] = "l2_interface_pbb_tag_rewrite_reply";
  static const char name_with_crc[] = "l2_interface_pbb_tag_rewrite_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_l2_interface_pbb_tag_rewrite_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_l2_interface_pbb_tag_rewrite_reply, payload),
    sizeof(vapi_msg_l2_interface_pbb_tag_rewrite_reply),
    (generic_swap_fn_t)vapi_msg_l2_interface_pbb_tag_rewrite_reply_hton,
    (generic_swap_fn_t)vapi_msg_l2_interface_pbb_tag_rewrite_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_interface_pbb_tag_rewrite_reply = vapi_register_msg(&__vapi_metadata_l2_interface_pbb_tag_rewrite_reply);
  VAPI_DBG("Assigned msg id %d to l2_interface_pbb_tag_rewrite_reply", vapi_msg_id_l2_interface_pbb_tag_rewrite_reply);
}

static inline void vapi_set_vapi_msg_l2_interface_pbb_tag_rewrite_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_l2_interface_pbb_tag_rewrite_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_l2_interface_pbb_tag_rewrite_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_l2_interface_pbb_tag_rewrite
#define defined_vapi_msg_l2_interface_pbb_tag_rewrite
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 vtr_op;
  u16 outer_tag;
  u8 b_dmac[6];
  u8 b_smac[6];
  u16 b_vlanid;
  u32 i_sid; 
} vapi_payload_l2_interface_pbb_tag_rewrite;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2_interface_pbb_tag_rewrite payload;
} vapi_msg_l2_interface_pbb_tag_rewrite;

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_payload_hton(vapi_payload_l2_interface_pbb_tag_rewrite *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->vtr_op = htobe32(payload->vtr_op);
  payload->outer_tag = htobe16(payload->outer_tag);
  payload->b_vlanid = htobe16(payload->b_vlanid);
  payload->i_sid = htobe32(payload->i_sid);
}

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_payload_ntoh(vapi_payload_l2_interface_pbb_tag_rewrite *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->vtr_op = be32toh(payload->vtr_op);
  payload->outer_tag = be16toh(payload->outer_tag);
  payload->b_vlanid = be16toh(payload->b_vlanid);
  payload->i_sid = be32toh(payload->i_sid);
}

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_hton(vapi_msg_l2_interface_pbb_tag_rewrite *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_pbb_tag_rewrite'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2_interface_pbb_tag_rewrite_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_interface_pbb_tag_rewrite_ntoh(vapi_msg_l2_interface_pbb_tag_rewrite *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_pbb_tag_rewrite'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2_interface_pbb_tag_rewrite_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_interface_pbb_tag_rewrite_msg_size(vapi_msg_l2_interface_pbb_tag_rewrite *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_interface_pbb_tag_rewrite* vapi_alloc_l2_interface_pbb_tag_rewrite(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_interface_pbb_tag_rewrite *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_interface_pbb_tag_rewrite);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_interface_pbb_tag_rewrite*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_interface_pbb_tag_rewrite);

  return msg;
}

static inline vapi_error_e vapi_l2_interface_pbb_tag_rewrite(struct vapi_ctx_s *ctx,
  vapi_msg_l2_interface_pbb_tag_rewrite *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_interface_pbb_tag_rewrite_reply *reply),
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
  vapi_msg_l2_interface_pbb_tag_rewrite_hton(msg);
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
    vapi_msg_l2_interface_pbb_tag_rewrite_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_interface_pbb_tag_rewrite()
{
  static const char name[] = "l2_interface_pbb_tag_rewrite";
  static const char name_with_crc[] = "l2_interface_pbb_tag_rewrite_6cf815f9";
  static vapi_message_desc_t __vapi_metadata_l2_interface_pbb_tag_rewrite = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2_interface_pbb_tag_rewrite, payload),
    sizeof(vapi_msg_l2_interface_pbb_tag_rewrite),
    (generic_swap_fn_t)vapi_msg_l2_interface_pbb_tag_rewrite_hton,
    (generic_swap_fn_t)vapi_msg_l2_interface_pbb_tag_rewrite_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_interface_pbb_tag_rewrite = vapi_register_msg(&__vapi_metadata_l2_interface_pbb_tag_rewrite);
  VAPI_DBG("Assigned msg id %d to l2_interface_pbb_tag_rewrite", vapi_msg_id_l2_interface_pbb_tag_rewrite);
}
#endif

#ifndef defined_vapi_msg_bvi_create
#define defined_vapi_msg_bvi_create
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mac_address mac;
  u32 user_instance; 
} vapi_payload_bvi_create;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bvi_create payload;
} vapi_msg_bvi_create;

static inline void vapi_msg_bvi_create_payload_hton(vapi_payload_bvi_create *payload)
{
  payload->user_instance = htobe32(payload->user_instance);
}

static inline void vapi_msg_bvi_create_payload_ntoh(vapi_payload_bvi_create *payload)
{
  payload->user_instance = be32toh(payload->user_instance);
}

static inline void vapi_msg_bvi_create_hton(vapi_msg_bvi_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_create'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bvi_create_payload_hton(&msg->payload);
}

static inline void vapi_msg_bvi_create_ntoh(vapi_msg_bvi_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bvi_create'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bvi_create_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bvi_create_msg_size(vapi_msg_bvi_create *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bvi_create* vapi_alloc_bvi_create(struct vapi_ctx_s *ctx)
{
  vapi_msg_bvi_create *msg = NULL;
  const size_t size = sizeof(vapi_msg_bvi_create);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bvi_create*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bvi_create);

  return msg;
}

static inline vapi_error_e vapi_bvi_create(struct vapi_ctx_s *ctx,
  vapi_msg_bvi_create *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bvi_create_reply *reply),
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
  vapi_msg_bvi_create_hton(msg);
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
    vapi_msg_bvi_create_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bvi_create()
{
  static const char name[] = "bvi_create";
  static const char name_with_crc[] = "bvi_create_27a79e9e";
  static vapi_message_desc_t __vapi_metadata_bvi_create = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bvi_create, payload),
    sizeof(vapi_msg_bvi_create),
    (generic_swap_fn_t)vapi_msg_bvi_create_hton,
    (generic_swap_fn_t)vapi_msg_bvi_create_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bvi_create = vapi_register_msg(&__vapi_metadata_bvi_create);
  VAPI_DBG("Assigned msg id %d to bvi_create", vapi_msg_id_bvi_create);
}
#endif

#ifndef defined_vapi_msg_l2_fib_clear_table
#define defined_vapi_msg_l2_fib_clear_table
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_l2_fib_clear_table;

static inline void vapi_msg_l2_fib_clear_table_hton(vapi_msg_l2_fib_clear_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_clear_table'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_l2_fib_clear_table_ntoh(vapi_msg_l2_fib_clear_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_fib_clear_table'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_l2_fib_clear_table_msg_size(vapi_msg_l2_fib_clear_table *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_fib_clear_table* vapi_alloc_l2_fib_clear_table(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_fib_clear_table *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_fib_clear_table);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_fib_clear_table*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_fib_clear_table);

  return msg;
}

static inline vapi_error_e vapi_l2_fib_clear_table(struct vapi_ctx_s *ctx,
  vapi_msg_l2_fib_clear_table *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_fib_clear_table_reply *reply),
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
  vapi_msg_l2_fib_clear_table_hton(msg);
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
    vapi_msg_l2_fib_clear_table_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_fib_clear_table()
{
  static const char name[] = "l2_fib_clear_table";
  static const char name_with_crc[] = "l2_fib_clear_table_51077d14";
  static vapi_message_desc_t __vapi_metadata_l2_fib_clear_table = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_l2_fib_clear_table),
    (generic_swap_fn_t)vapi_msg_l2_fib_clear_table_hton,
    (generic_swap_fn_t)vapi_msg_l2_fib_clear_table_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_fib_clear_table = vapi_register_msg(&__vapi_metadata_l2_fib_clear_table);
  VAPI_DBG("Assigned msg id %d to l2_fib_clear_table", vapi_msg_id_l2_fib_clear_table);
}
#endif

#ifndef defined_vapi_msg_l2fib_add_del
#define defined_vapi_msg_l2fib_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 mac[6];
  u32 bd_id;
  u32 sw_if_index;
  u8 is_add;
  u8 static_mac;
  u8 filter_mac;
  u8 bvi_mac; 
} vapi_payload_l2fib_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2fib_add_del payload;
} vapi_msg_l2fib_add_del;

static inline void vapi_msg_l2fib_add_del_payload_hton(vapi_payload_l2fib_add_del *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_l2fib_add_del_payload_ntoh(vapi_payload_l2fib_add_del *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_l2fib_add_del_hton(vapi_msg_l2fib_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2fib_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2fib_add_del_ntoh(vapi_msg_l2fib_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2fib_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2fib_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2fib_add_del_msg_size(vapi_msg_l2fib_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2fib_add_del* vapi_alloc_l2fib_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2fib_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2fib_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2fib_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2fib_add_del);

  return msg;
}

static inline vapi_error_e vapi_l2fib_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_l2fib_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2fib_add_del_reply *reply),
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
  vapi_msg_l2fib_add_del_hton(msg);
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
    vapi_msg_l2fib_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2fib_add_del()
{
  static const char name[] = "l2fib_add_del";
  static const char name_with_crc[] = "l2fib_add_del_34ced3eb";
  static vapi_message_desc_t __vapi_metadata_l2fib_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2fib_add_del, payload),
    sizeof(vapi_msg_l2fib_add_del),
    (generic_swap_fn_t)vapi_msg_l2fib_add_del_hton,
    (generic_swap_fn_t)vapi_msg_l2fib_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2fib_add_del = vapi_register_msg(&__vapi_metadata_l2fib_add_del);
  VAPI_DBG("Assigned msg id %d to l2fib_add_del", vapi_msg_id_l2fib_add_del);
}
#endif

#ifndef defined_vapi_msg_want_l2_macs_events_reply
#define defined_vapi_msg_want_l2_macs_events_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_want_l2_macs_events_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_want_l2_macs_events_reply payload;
} vapi_msg_want_l2_macs_events_reply;

static inline void vapi_msg_want_l2_macs_events_reply_payload_hton(vapi_payload_want_l2_macs_events_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_want_l2_macs_events_reply_payload_ntoh(vapi_payload_want_l2_macs_events_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_want_l2_macs_events_reply_hton(vapi_msg_want_l2_macs_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_l2_macs_events_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_want_l2_macs_events_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_l2_macs_events_reply_ntoh(vapi_msg_want_l2_macs_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_l2_macs_events_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_want_l2_macs_events_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_l2_macs_events_reply_msg_size(vapi_msg_want_l2_macs_events_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_want_l2_macs_events_reply()
{
  static const char name[] = "want_l2_macs_events_reply";
  static const char name_with_crc[] = "want_l2_macs_events_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_want_l2_macs_events_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_want_l2_macs_events_reply, payload),
    sizeof(vapi_msg_want_l2_macs_events_reply),
    (generic_swap_fn_t)vapi_msg_want_l2_macs_events_reply_hton,
    (generic_swap_fn_t)vapi_msg_want_l2_macs_events_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_l2_macs_events_reply = vapi_register_msg(&__vapi_metadata_want_l2_macs_events_reply);
  VAPI_DBG("Assigned msg id %d to want_l2_macs_events_reply", vapi_msg_id_want_l2_macs_events_reply);
}

static inline void vapi_set_vapi_msg_want_l2_macs_events_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_want_l2_macs_events_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_want_l2_macs_events_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_l2_macs_events
#define defined_vapi_msg_want_l2_macs_events
typedef struct __attribute__ ((__packed__)) {
  u32 learn_limit;
  u8 scan_delay;
  u8 max_macs_in_event;
  u8 enable_disable;
  u32 pid; 
} vapi_payload_want_l2_macs_events;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_want_l2_macs_events payload;
} vapi_msg_want_l2_macs_events;

static inline void vapi_msg_want_l2_macs_events_payload_hton(vapi_payload_want_l2_macs_events *payload)
{
  payload->learn_limit = htobe32(payload->learn_limit);
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_want_l2_macs_events_payload_ntoh(vapi_payload_want_l2_macs_events *payload)
{
  payload->learn_limit = be32toh(payload->learn_limit);
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_want_l2_macs_events_hton(vapi_msg_want_l2_macs_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_l2_macs_events'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_want_l2_macs_events_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_l2_macs_events_ntoh(vapi_msg_want_l2_macs_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_l2_macs_events'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_want_l2_macs_events_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_l2_macs_events_msg_size(vapi_msg_want_l2_macs_events *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_want_l2_macs_events* vapi_alloc_want_l2_macs_events(struct vapi_ctx_s *ctx)
{
  vapi_msg_want_l2_macs_events *msg = NULL;
  const size_t size = sizeof(vapi_msg_want_l2_macs_events);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_want_l2_macs_events*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_want_l2_macs_events);

  return msg;
}

static inline vapi_error_e vapi_want_l2_macs_events(struct vapi_ctx_s *ctx,
  vapi_msg_want_l2_macs_events *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_want_l2_macs_events_reply *reply),
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
  vapi_msg_want_l2_macs_events_hton(msg);
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
    vapi_msg_want_l2_macs_events_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_want_l2_macs_events()
{
  static const char name[] = "want_l2_macs_events";
  static const char name_with_crc[] = "want_l2_macs_events_94e63394";
  static vapi_message_desc_t __vapi_metadata_want_l2_macs_events = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_want_l2_macs_events, payload),
    sizeof(vapi_msg_want_l2_macs_events),
    (generic_swap_fn_t)vapi_msg_want_l2_macs_events_hton,
    (generic_swap_fn_t)vapi_msg_want_l2_macs_events_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_l2_macs_events = vapi_register_msg(&__vapi_metadata_want_l2_macs_events);
  VAPI_DBG("Assigned msg id %d to want_l2_macs_events", vapi_msg_id_want_l2_macs_events);
}
#endif

#ifndef defined_vapi_msg_bridge_domain_add_del
#define defined_vapi_msg_bridge_domain_add_del
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id;
  u8 flood;
  u8 uu_flood;
  u8 forward;
  u8 learn;
  u8 arp_term;
  u8 arp_ufwd;
  u8 mac_age;
  u8 bd_tag[64];
  u8 is_add; 
} vapi_payload_bridge_domain_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bridge_domain_add_del payload;
} vapi_msg_bridge_domain_add_del;

static inline void vapi_msg_bridge_domain_add_del_payload_hton(vapi_payload_bridge_domain_add_del *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_bridge_domain_add_del_payload_ntoh(vapi_payload_bridge_domain_add_del *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_bridge_domain_add_del_hton(vapi_msg_bridge_domain_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bridge_domain_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_domain_add_del_ntoh(vapi_msg_bridge_domain_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_domain_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bridge_domain_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_domain_add_del_msg_size(vapi_msg_bridge_domain_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bridge_domain_add_del* vapi_alloc_bridge_domain_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_bridge_domain_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_bridge_domain_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bridge_domain_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bridge_domain_add_del);

  return msg;
}

static inline vapi_error_e vapi_bridge_domain_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_bridge_domain_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bridge_domain_add_del_reply *reply),
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
  vapi_msg_bridge_domain_add_del_hton(msg);
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
    vapi_msg_bridge_domain_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bridge_domain_add_del()
{
  static const char name[] = "bridge_domain_add_del";
  static const char name_with_crc[] = "bridge_domain_add_del_c6360720";
  static vapi_message_desc_t __vapi_metadata_bridge_domain_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bridge_domain_add_del, payload),
    sizeof(vapi_msg_bridge_domain_add_del),
    (generic_swap_fn_t)vapi_msg_bridge_domain_add_del_hton,
    (generic_swap_fn_t)vapi_msg_bridge_domain_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_domain_add_del = vapi_register_msg(&__vapi_metadata_bridge_domain_add_del);
  VAPI_DBG("Assigned msg id %d to bridge_domain_add_del", vapi_msg_id_bridge_domain_add_del);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_l2_bridge_reply
#define defined_vapi_msg_sw_interface_set_l2_bridge_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_l2_bridge_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_l2_bridge_reply payload;
} vapi_msg_sw_interface_set_l2_bridge_reply;

static inline void vapi_msg_sw_interface_set_l2_bridge_reply_payload_hton(vapi_payload_sw_interface_set_l2_bridge_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_l2_bridge_reply_payload_ntoh(vapi_payload_sw_interface_set_l2_bridge_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_l2_bridge_reply_hton(vapi_msg_sw_interface_set_l2_bridge_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_bridge_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_l2_bridge_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_l2_bridge_reply_ntoh(vapi_msg_sw_interface_set_l2_bridge_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_bridge_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_l2_bridge_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_l2_bridge_reply_msg_size(vapi_msg_sw_interface_set_l2_bridge_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_l2_bridge_reply()
{
  static const char name[] = "sw_interface_set_l2_bridge_reply";
  static const char name_with_crc[] = "sw_interface_set_l2_bridge_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_l2_bridge_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_l2_bridge_reply, payload),
    sizeof(vapi_msg_sw_interface_set_l2_bridge_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_bridge_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_bridge_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_l2_bridge_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_l2_bridge_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_l2_bridge_reply", vapi_msg_id_sw_interface_set_l2_bridge_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_l2_bridge_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_l2_bridge_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_l2_bridge_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_l2_bridge
#define defined_vapi_msg_sw_interface_set_l2_bridge
typedef struct __attribute__ ((__packed__)) {
  u32 rx_sw_if_index;
  u32 bd_id;
  vapi_enum_l2_port_type port_type;
  u8 shg;
  u8 enable; 
} vapi_payload_sw_interface_set_l2_bridge;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_l2_bridge payload;
} vapi_msg_sw_interface_set_l2_bridge;

static inline void vapi_msg_sw_interface_set_l2_bridge_payload_hton(vapi_payload_sw_interface_set_l2_bridge *payload)
{
  payload->rx_sw_if_index = htobe32(payload->rx_sw_if_index);
  payload->bd_id = htobe32(payload->bd_id);
  payload->port_type = (vapi_enum_l2_port_type)htobe32(payload->port_type);
}

static inline void vapi_msg_sw_interface_set_l2_bridge_payload_ntoh(vapi_payload_sw_interface_set_l2_bridge *payload)
{
  payload->rx_sw_if_index = be32toh(payload->rx_sw_if_index);
  payload->bd_id = be32toh(payload->bd_id);
  payload->port_type = (vapi_enum_l2_port_type)be32toh(payload->port_type);
}

static inline void vapi_msg_sw_interface_set_l2_bridge_hton(vapi_msg_sw_interface_set_l2_bridge *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_bridge'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_l2_bridge_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_l2_bridge_ntoh(vapi_msg_sw_interface_set_l2_bridge *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_l2_bridge'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_l2_bridge_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_l2_bridge_msg_size(vapi_msg_sw_interface_set_l2_bridge *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_l2_bridge* vapi_alloc_sw_interface_set_l2_bridge(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_l2_bridge *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_l2_bridge);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_l2_bridge*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_l2_bridge);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_l2_bridge(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_l2_bridge *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_l2_bridge_reply *reply),
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
  vapi_msg_sw_interface_set_l2_bridge_hton(msg);
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
    vapi_msg_sw_interface_set_l2_bridge_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_l2_bridge()
{
  static const char name[] = "sw_interface_set_l2_bridge";
  static const char name_with_crc[] = "sw_interface_set_l2_bridge_5579f809";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_l2_bridge = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_l2_bridge, payload),
    sizeof(vapi_msg_sw_interface_set_l2_bridge),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_bridge_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_l2_bridge_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_l2_bridge = vapi_register_msg(&__vapi_metadata_sw_interface_set_l2_bridge);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_l2_bridge", vapi_msg_id_sw_interface_set_l2_bridge);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_vpath
#define defined_vapi_msg_sw_interface_set_vpath
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 enable; 
} vapi_payload_sw_interface_set_vpath;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_vpath payload;
} vapi_msg_sw_interface_set_vpath;

static inline void vapi_msg_sw_interface_set_vpath_payload_hton(vapi_payload_sw_interface_set_vpath *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_vpath_payload_ntoh(vapi_payload_sw_interface_set_vpath *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_vpath_hton(vapi_msg_sw_interface_set_vpath *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_vpath'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_vpath_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_vpath_ntoh(vapi_msg_sw_interface_set_vpath *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_vpath'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_vpath_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_vpath_msg_size(vapi_msg_sw_interface_set_vpath *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_vpath* vapi_alloc_sw_interface_set_vpath(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_vpath *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_vpath);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_vpath*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_vpath);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_vpath(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_vpath *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_vpath_reply *reply),
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
  vapi_msg_sw_interface_set_vpath_hton(msg);
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
    vapi_msg_sw_interface_set_vpath_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_vpath()
{
  static const char name[] = "sw_interface_set_vpath";
  static const char name_with_crc[] = "sw_interface_set_vpath_a36fadc0";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_vpath = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_vpath, payload),
    sizeof(vapi_msg_sw_interface_set_vpath),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_vpath_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_vpath_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_vpath = vapi_register_msg(&__vapi_metadata_sw_interface_set_vpath);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_vpath", vapi_msg_id_sw_interface_set_vpath);
}
#endif

#ifndef defined_vapi_msg_l2_xconnect_dump
#define defined_vapi_msg_l2_xconnect_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_l2_xconnect_dump;

static inline void vapi_msg_l2_xconnect_dump_hton(vapi_msg_l2_xconnect_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_xconnect_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_l2_xconnect_dump_ntoh(vapi_msg_l2_xconnect_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_xconnect_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_l2_xconnect_dump_msg_size(vapi_msg_l2_xconnect_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_xconnect_dump* vapi_alloc_l2_xconnect_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_xconnect_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_xconnect_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_xconnect_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_xconnect_dump);

  return msg;
}

static inline vapi_error_e vapi_l2_xconnect_dump(struct vapi_ctx_s *ctx,
  vapi_msg_l2_xconnect_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_xconnect_details *reply),
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
  vapi_msg_l2_xconnect_dump_hton(msg);
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
    vapi_msg_l2_xconnect_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_xconnect_dump()
{
  static const char name[] = "l2_xconnect_dump";
  static const char name_with_crc[] = "l2_xconnect_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_l2_xconnect_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_l2_xconnect_dump),
    (generic_swap_fn_t)vapi_msg_l2_xconnect_dump_hton,
    (generic_swap_fn_t)vapi_msg_l2_xconnect_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_xconnect_dump = vapi_register_msg(&__vapi_metadata_l2_xconnect_dump);
  VAPI_DBG("Assigned msg id %d to l2_xconnect_dump", vapi_msg_id_l2_xconnect_dump);
}
#endif

#ifndef defined_vapi_msg_bridge_flags
#define defined_vapi_msg_bridge_flags
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id;
  u8 is_set;
  vapi_enum_bd_flags flags; 
} vapi_payload_bridge_flags;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_bridge_flags payload;
} vapi_msg_bridge_flags;

static inline void vapi_msg_bridge_flags_payload_hton(vapi_payload_bridge_flags *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
  payload->flags = (vapi_enum_bd_flags)htobe32(payload->flags);
}

static inline void vapi_msg_bridge_flags_payload_ntoh(vapi_payload_bridge_flags *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
  payload->flags = (vapi_enum_bd_flags)be32toh(payload->flags);
}

static inline void vapi_msg_bridge_flags_hton(vapi_msg_bridge_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_flags'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_bridge_flags_payload_hton(&msg->payload);
}

static inline void vapi_msg_bridge_flags_ntoh(vapi_msg_bridge_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_bridge_flags'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_bridge_flags_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_bridge_flags_msg_size(vapi_msg_bridge_flags *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_bridge_flags* vapi_alloc_bridge_flags(struct vapi_ctx_s *ctx)
{
  vapi_msg_bridge_flags *msg = NULL;
  const size_t size = sizeof(vapi_msg_bridge_flags);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_bridge_flags*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_bridge_flags);

  return msg;
}

static inline vapi_error_e vapi_bridge_flags(struct vapi_ctx_s *ctx,
  vapi_msg_bridge_flags *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_bridge_flags_reply *reply),
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
  vapi_msg_bridge_flags_hton(msg);
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
    vapi_msg_bridge_flags_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_bridge_flags()
{
  static const char name[] = "bridge_flags";
  static const char name_with_crc[] = "bridge_flags_2eb9b76c";
  static vapi_message_desc_t __vapi_metadata_bridge_flags = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_bridge_flags, payload),
    sizeof(vapi_msg_bridge_flags),
    (generic_swap_fn_t)vapi_msg_bridge_flags_hton,
    (generic_swap_fn_t)vapi_msg_bridge_flags_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_bridge_flags = vapi_register_msg(&__vapi_metadata_bridge_flags);
  VAPI_DBG("Assigned msg id %d to bridge_flags", vapi_msg_id_bridge_flags);
}
#endif

#ifndef defined_vapi_msg_l2_interface_vlan_tag_rewrite
#define defined_vapi_msg_l2_interface_vlan_tag_rewrite
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u32 vtr_op;
  u32 push_dot1q;
  u32 tag1;
  u32 tag2; 
} vapi_payload_l2_interface_vlan_tag_rewrite;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_l2_interface_vlan_tag_rewrite payload;
} vapi_msg_l2_interface_vlan_tag_rewrite;

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_payload_hton(vapi_payload_l2_interface_vlan_tag_rewrite *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->vtr_op = htobe32(payload->vtr_op);
  payload->push_dot1q = htobe32(payload->push_dot1q);
  payload->tag1 = htobe32(payload->tag1);
  payload->tag2 = htobe32(payload->tag2);
}

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_payload_ntoh(vapi_payload_l2_interface_vlan_tag_rewrite *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->vtr_op = be32toh(payload->vtr_op);
  payload->push_dot1q = be32toh(payload->push_dot1q);
  payload->tag1 = be32toh(payload->tag1);
  payload->tag2 = be32toh(payload->tag2);
}

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_hton(vapi_msg_l2_interface_vlan_tag_rewrite *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_vlan_tag_rewrite'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_l2_interface_vlan_tag_rewrite_payload_hton(&msg->payload);
}

static inline void vapi_msg_l2_interface_vlan_tag_rewrite_ntoh(vapi_msg_l2_interface_vlan_tag_rewrite *msg)
{
  VAPI_DBG("Swapping `vapi_msg_l2_interface_vlan_tag_rewrite'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_l2_interface_vlan_tag_rewrite_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_l2_interface_vlan_tag_rewrite_msg_size(vapi_msg_l2_interface_vlan_tag_rewrite *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_l2_interface_vlan_tag_rewrite* vapi_alloc_l2_interface_vlan_tag_rewrite(struct vapi_ctx_s *ctx)
{
  vapi_msg_l2_interface_vlan_tag_rewrite *msg = NULL;
  const size_t size = sizeof(vapi_msg_l2_interface_vlan_tag_rewrite);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_l2_interface_vlan_tag_rewrite*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_l2_interface_vlan_tag_rewrite);

  return msg;
}

static inline vapi_error_e vapi_l2_interface_vlan_tag_rewrite(struct vapi_ctx_s *ctx,
  vapi_msg_l2_interface_vlan_tag_rewrite *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_l2_interface_vlan_tag_rewrite_reply *reply),
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
  vapi_msg_l2_interface_vlan_tag_rewrite_hton(msg);
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
    vapi_msg_l2_interface_vlan_tag_rewrite_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_l2_interface_vlan_tag_rewrite()
{
  static const char name[] = "l2_interface_vlan_tag_rewrite";
  static const char name_with_crc[] = "l2_interface_vlan_tag_rewrite_b90be6b4";
  static vapi_message_desc_t __vapi_metadata_l2_interface_vlan_tag_rewrite = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_l2_interface_vlan_tag_rewrite, payload),
    sizeof(vapi_msg_l2_interface_vlan_tag_rewrite),
    (generic_swap_fn_t)vapi_msg_l2_interface_vlan_tag_rewrite_hton,
    (generic_swap_fn_t)vapi_msg_l2_interface_vlan_tag_rewrite_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_l2_interface_vlan_tag_rewrite = vapi_register_msg(&__vapi_metadata_l2_interface_vlan_tag_rewrite);
  VAPI_DBG("Assigned msg id %d to l2_interface_vlan_tag_rewrite", vapi_msg_id_l2_interface_vlan_tag_rewrite);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
