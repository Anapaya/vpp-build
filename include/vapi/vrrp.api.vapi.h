#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_vrrp_vrrp_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_vrrp_vrrp_api_json

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

extern vapi_msg_id_t vapi_msg_id_vrrp_vr_add_del;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_dump;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_details;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_start_stop;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_start_stop_reply;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_set_peers;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_set_peers_reply;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_peer_dump;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_peer_details;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_add_del;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_dump;
extern vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_details;

#define DEFINE_VAPI_MSG_IDS_VRRP_API_JSON\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_add_del;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_dump;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_details;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_start_stop;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_start_stop_reply;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_set_peers;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_set_peers_reply;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_peer_dump;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_peer_details;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_add_del;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_dump;\
  vapi_msg_id_t vapi_msg_id_vrrp_vr_track_if_details;


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

#ifndef defined_vapi_enum_vrrp_vr_flags
#define defined_vapi_enum_vrrp_vr_flags
typedef enum {
  VRRP_API_VR_PREEMPT = 1,
  VRRP_API_VR_ACCEPT = 2,
  VRRP_API_VR_UNICAST = 4,
  VRRP_API_VR_IPV6 = 8,
}  vapi_enum_vrrp_vr_flags;

#endif

#ifndef defined_vapi_enum_vrrp_vr_state
#define defined_vapi_enum_vrrp_vr_state
typedef enum {
  VRRP_API_VR_STATE_INIT = 0,
  VRRP_API_VR_STATE_BACKUP = 1,
  VRRP_API_VR_STATE_MASTER = 2,
  VRRP_API_VR_STATE_INTF_DOWN = 3,
}  vapi_enum_vrrp_vr_state;

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

#ifndef defined_vapi_type_vrrp_vr_tracking
#define defined_vapi_type_vrrp_vr_tracking
typedef struct __attribute__((__packed__)) {
  u32 interfaces_dec;
  u8 priority;
} vapi_type_vrrp_vr_tracking;

static inline void vapi_type_vrrp_vr_tracking_hton(vapi_type_vrrp_vr_tracking *msg)
{
  msg->interfaces_dec = htobe32(msg->interfaces_dec);
}

static inline void vapi_type_vrrp_vr_tracking_ntoh(vapi_type_vrrp_vr_tracking *msg)
{
  msg->interfaces_dec = be32toh(msg->interfaces_dec);
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

#ifndef defined_vapi_type_vrrp_vr_key
#define defined_vapi_type_vrrp_vr_key
typedef struct __attribute__((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 vr_id;
  u8 is_ipv6;
} vapi_type_vrrp_vr_key;

static inline void vapi_type_vrrp_vr_key_hton(vapi_type_vrrp_vr_key *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
}

static inline void vapi_type_vrrp_vr_key_ntoh(vapi_type_vrrp_vr_key *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
}
#endif

#ifndef defined_vapi_type_vrrp_vr_conf
#define defined_vapi_type_vrrp_vr_conf
typedef struct __attribute__((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 vr_id;
  u8 priority;
  u16 interval;
  vapi_enum_vrrp_vr_flags flags;
} vapi_type_vrrp_vr_conf;

static inline void vapi_type_vrrp_vr_conf_hton(vapi_type_vrrp_vr_conf *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->interval = htobe16(msg->interval);
  msg->flags = (vapi_enum_vrrp_vr_flags)htobe32(msg->flags);
}

static inline void vapi_type_vrrp_vr_conf_ntoh(vapi_type_vrrp_vr_conf *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->interval = be16toh(msg->interval);
  msg->flags = (vapi_enum_vrrp_vr_flags)be32toh(msg->flags);
}
#endif

#ifndef defined_vapi_type_mac_address
#define defined_vapi_type_mac_address
typedef u8 vapi_type_mac_address[6];

#endif

#ifndef defined_vapi_type_vrrp_vr_runtime
#define defined_vapi_type_vrrp_vr_runtime
typedef struct __attribute__((__packed__)) {
  vapi_enum_vrrp_vr_state state;
  u16 master_adv_int;
  u16 skew;
  u16 master_down_int;
  vapi_type_mac_address mac;
  vapi_type_vrrp_vr_tracking tracking;
} vapi_type_vrrp_vr_runtime;

static inline void vapi_type_vrrp_vr_runtime_hton(vapi_type_vrrp_vr_runtime *msg)
{
  msg->state = (vapi_enum_vrrp_vr_state)htobe32(msg->state);
  msg->master_adv_int = htobe16(msg->master_adv_int);
  msg->skew = htobe16(msg->skew);
  msg->master_down_int = htobe16(msg->master_down_int);
  vapi_type_vrrp_vr_tracking_hton(&msg->tracking);
}

static inline void vapi_type_vrrp_vr_runtime_ntoh(vapi_type_vrrp_vr_runtime *msg)
{
  msg->state = (vapi_enum_vrrp_vr_state)be32toh(msg->state);
  msg->master_adv_int = be16toh(msg->master_adv_int);
  msg->skew = be16toh(msg->skew);
  msg->master_down_int = be16toh(msg->master_down_int);
  vapi_type_vrrp_vr_tracking_ntoh(&msg->tracking);
}
#endif

#ifndef defined_vapi_type_vrrp_vr_track_if
#define defined_vapi_type_vrrp_vr_track_if
typedef struct __attribute__((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 priority;
} vapi_type_vrrp_vr_track_if;

static inline void vapi_type_vrrp_vr_track_if_hton(vapi_type_vrrp_vr_track_if *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
}

static inline void vapi_type_vrrp_vr_track_if_ntoh(vapi_type_vrrp_vr_track_if *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
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

#ifndef defined_vapi_msg_vrrp_vr_add_del_reply
#define defined_vapi_msg_vrrp_vr_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_vrrp_vr_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vrrp_vr_add_del_reply payload;
} vapi_msg_vrrp_vr_add_del_reply;

static inline void vapi_msg_vrrp_vr_add_del_reply_payload_hton(vapi_payload_vrrp_vr_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_vrrp_vr_add_del_reply_payload_ntoh(vapi_payload_vrrp_vr_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_vrrp_vr_add_del_reply_hton(vapi_msg_vrrp_vr_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vrrp_vr_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_add_del_reply_ntoh(vapi_msg_vrrp_vr_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_add_del_reply_msg_size(vapi_msg_vrrp_vr_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_add_del_reply()
{
  static const char name[] = "vrrp_vr_add_del_reply";
  static const char name_with_crc[] = "vrrp_vr_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vrrp_vr_add_del_reply, payload),
    sizeof(vapi_msg_vrrp_vr_add_del_reply),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_add_del_reply = vapi_register_msg(&__vapi_metadata_vrrp_vr_add_del_reply);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_add_del_reply", vapi_msg_id_vrrp_vr_add_del_reply);
}

static inline void vapi_set_vapi_msg_vrrp_vr_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vrrp_vr_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vrrp_vr_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vrrp_vr_add_del
#define defined_vapi_msg_vrrp_vr_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_interface_index sw_if_index;
  u8 vr_id;
  u8 priority;
  u16 interval;
  vapi_enum_vrrp_vr_flags flags;
  u8 n_addrs;
  vapi_type_address addrs[0]; 
} vapi_payload_vrrp_vr_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_add_del payload;
} vapi_msg_vrrp_vr_add_del;

static inline void vapi_msg_vrrp_vr_add_del_payload_hton(vapi_payload_vrrp_vr_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->interval = htobe16(payload->interval);
  payload->flags = (vapi_enum_vrrp_vr_flags)htobe32(payload->flags);
}

static inline void vapi_msg_vrrp_vr_add_del_payload_ntoh(vapi_payload_vrrp_vr_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->interval = be16toh(payload->interval);
  payload->flags = (vapi_enum_vrrp_vr_flags)be32toh(payload->flags);
}

static inline void vapi_msg_vrrp_vr_add_del_hton(vapi_msg_vrrp_vr_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_add_del_ntoh(vapi_msg_vrrp_vr_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_add_del_msg_size(vapi_msg_vrrp_vr_add_del *msg)
{
  return sizeof(*msg)+ msg->payload.n_addrs * sizeof(msg->payload.addrs[0]);
}

static inline vapi_msg_vrrp_vr_add_del* vapi_alloc_vrrp_vr_add_del(struct vapi_ctx_s *ctx, size_t _addrs_array_size)
{
  vapi_msg_vrrp_vr_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_vrrp_vr_add_del) + sizeof(msg->payload.addrs[0]) * _addrs_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vrrp_vr_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vrrp_vr_add_del);
  msg->payload.n_addrs = _addrs_array_size;

  return msg;
}

static inline vapi_error_e vapi_vrrp_vr_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_vrrp_vr_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vrrp_vr_add_del_reply *reply),
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
  vapi_msg_vrrp_vr_add_del_hton(msg);
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
    vapi_msg_vrrp_vr_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_add_del()
{
  static const char name[] = "vrrp_vr_add_del";
  static const char name_with_crc[] = "vrrp_vr_add_del_6dc4b881";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_add_del, payload),
    sizeof(vapi_msg_vrrp_vr_add_del),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_add_del_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_add_del = vapi_register_msg(&__vapi_metadata_vrrp_vr_add_del);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_add_del", vapi_msg_id_vrrp_vr_add_del);
}
#endif

#ifndef defined_vapi_msg_vrrp_vr_details
#define defined_vapi_msg_vrrp_vr_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_vrrp_vr_conf config;
  vapi_type_vrrp_vr_runtime runtime;
  u8 n_addrs;
  vapi_type_address addrs[0]; 
} vapi_payload_vrrp_vr_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vrrp_vr_details payload;
} vapi_msg_vrrp_vr_details;

static inline void vapi_msg_vrrp_vr_details_payload_hton(vapi_payload_vrrp_vr_details *payload)
{
  vapi_type_vrrp_vr_conf_hton(&payload->config);
  vapi_type_vrrp_vr_runtime_hton(&payload->runtime);
}

static inline void vapi_msg_vrrp_vr_details_payload_ntoh(vapi_payload_vrrp_vr_details *payload)
{
  vapi_type_vrrp_vr_conf_ntoh(&payload->config);
  vapi_type_vrrp_vr_runtime_ntoh(&payload->runtime);
}

static inline void vapi_msg_vrrp_vr_details_hton(vapi_msg_vrrp_vr_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vrrp_vr_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_details_ntoh(vapi_msg_vrrp_vr_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_details_msg_size(vapi_msg_vrrp_vr_details *msg)
{
  return sizeof(*msg)+ msg->payload.n_addrs * sizeof(msg->payload.addrs[0]);
}

static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_details()
{
  static const char name[] = "vrrp_vr_details";
  static const char name_with_crc[] = "vrrp_vr_details_0412fa71";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vrrp_vr_details, payload),
    sizeof(vapi_msg_vrrp_vr_details),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_details_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_details = vapi_register_msg(&__vapi_metadata_vrrp_vr_details);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_details", vapi_msg_id_vrrp_vr_details);
}

static inline void vapi_set_vapi_msg_vrrp_vr_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vrrp_vr_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vrrp_vr_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vrrp_vr_dump
#define defined_vapi_msg_vrrp_vr_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index; 
} vapi_payload_vrrp_vr_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_dump payload;
} vapi_msg_vrrp_vr_dump;

static inline void vapi_msg_vrrp_vr_dump_payload_hton(vapi_payload_vrrp_vr_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_dump_payload_ntoh(vapi_payload_vrrp_vr_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_dump_hton(vapi_msg_vrrp_vr_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_dump_ntoh(vapi_msg_vrrp_vr_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_dump_msg_size(vapi_msg_vrrp_vr_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_vrrp_vr_dump* vapi_alloc_vrrp_vr_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_vrrp_vr_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_vrrp_vr_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vrrp_vr_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vrrp_vr_dump);

  return msg;
}

static inline vapi_error_e vapi_vrrp_vr_dump(struct vapi_ctx_s *ctx,
  vapi_msg_vrrp_vr_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vrrp_vr_details *reply),
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
  vapi_msg_vrrp_vr_dump_hton(msg);
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
    vapi_msg_vrrp_vr_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_dump()
{
  static const char name[] = "vrrp_vr_dump";
  static const char name_with_crc[] = "vrrp_vr_dump_f9e6675e";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_dump, payload),
    sizeof(vapi_msg_vrrp_vr_dump),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_dump_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_dump = vapi_register_msg(&__vapi_metadata_vrrp_vr_dump);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_dump", vapi_msg_id_vrrp_vr_dump);
}
#endif

#ifndef defined_vapi_msg_vrrp_vr_start_stop_reply
#define defined_vapi_msg_vrrp_vr_start_stop_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_vrrp_vr_start_stop_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vrrp_vr_start_stop_reply payload;
} vapi_msg_vrrp_vr_start_stop_reply;

static inline void vapi_msg_vrrp_vr_start_stop_reply_payload_hton(vapi_payload_vrrp_vr_start_stop_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_vrrp_vr_start_stop_reply_payload_ntoh(vapi_payload_vrrp_vr_start_stop_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_vrrp_vr_start_stop_reply_hton(vapi_msg_vrrp_vr_start_stop_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_start_stop_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vrrp_vr_start_stop_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_start_stop_reply_ntoh(vapi_msg_vrrp_vr_start_stop_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_start_stop_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_start_stop_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_start_stop_reply_msg_size(vapi_msg_vrrp_vr_start_stop_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_start_stop_reply()
{
  static const char name[] = "vrrp_vr_start_stop_reply";
  static const char name_with_crc[] = "vrrp_vr_start_stop_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_start_stop_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vrrp_vr_start_stop_reply, payload),
    sizeof(vapi_msg_vrrp_vr_start_stop_reply),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_start_stop_reply_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_start_stop_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_start_stop_reply = vapi_register_msg(&__vapi_metadata_vrrp_vr_start_stop_reply);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_start_stop_reply", vapi_msg_id_vrrp_vr_start_stop_reply);
}

static inline void vapi_set_vapi_msg_vrrp_vr_start_stop_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vrrp_vr_start_stop_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vrrp_vr_start_stop_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vrrp_vr_start_stop
#define defined_vapi_msg_vrrp_vr_start_stop
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 vr_id;
  u8 is_ipv6;
  u8 is_start; 
} vapi_payload_vrrp_vr_start_stop;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_start_stop payload;
} vapi_msg_vrrp_vr_start_stop;

static inline void vapi_msg_vrrp_vr_start_stop_payload_hton(vapi_payload_vrrp_vr_start_stop *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_start_stop_payload_ntoh(vapi_payload_vrrp_vr_start_stop *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_start_stop_hton(vapi_msg_vrrp_vr_start_stop *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_start_stop'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_start_stop_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_start_stop_ntoh(vapi_msg_vrrp_vr_start_stop *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_start_stop'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_start_stop_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_start_stop_msg_size(vapi_msg_vrrp_vr_start_stop *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_vrrp_vr_start_stop* vapi_alloc_vrrp_vr_start_stop(struct vapi_ctx_s *ctx)
{
  vapi_msg_vrrp_vr_start_stop *msg = NULL;
  const size_t size = sizeof(vapi_msg_vrrp_vr_start_stop);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vrrp_vr_start_stop*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vrrp_vr_start_stop);

  return msg;
}

static inline vapi_error_e vapi_vrrp_vr_start_stop(struct vapi_ctx_s *ctx,
  vapi_msg_vrrp_vr_start_stop *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vrrp_vr_start_stop_reply *reply),
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
  vapi_msg_vrrp_vr_start_stop_hton(msg);
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
    vapi_msg_vrrp_vr_start_stop_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_start_stop()
{
  static const char name[] = "vrrp_vr_start_stop";
  static const char name_with_crc[] = "vrrp_vr_start_stop_0662a3b7";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_start_stop = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_start_stop, payload),
    sizeof(vapi_msg_vrrp_vr_start_stop),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_start_stop_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_start_stop_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_start_stop = vapi_register_msg(&__vapi_metadata_vrrp_vr_start_stop);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_start_stop", vapi_msg_id_vrrp_vr_start_stop);
}
#endif

#ifndef defined_vapi_msg_vrrp_vr_set_peers_reply
#define defined_vapi_msg_vrrp_vr_set_peers_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_vrrp_vr_set_peers_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vrrp_vr_set_peers_reply payload;
} vapi_msg_vrrp_vr_set_peers_reply;

static inline void vapi_msg_vrrp_vr_set_peers_reply_payload_hton(vapi_payload_vrrp_vr_set_peers_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_vrrp_vr_set_peers_reply_payload_ntoh(vapi_payload_vrrp_vr_set_peers_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_vrrp_vr_set_peers_reply_hton(vapi_msg_vrrp_vr_set_peers_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_set_peers_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vrrp_vr_set_peers_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_set_peers_reply_ntoh(vapi_msg_vrrp_vr_set_peers_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_set_peers_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_set_peers_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_set_peers_reply_msg_size(vapi_msg_vrrp_vr_set_peers_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_set_peers_reply()
{
  static const char name[] = "vrrp_vr_set_peers_reply";
  static const char name_with_crc[] = "vrrp_vr_set_peers_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_set_peers_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vrrp_vr_set_peers_reply, payload),
    sizeof(vapi_msg_vrrp_vr_set_peers_reply),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_set_peers_reply_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_set_peers_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_set_peers_reply = vapi_register_msg(&__vapi_metadata_vrrp_vr_set_peers_reply);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_set_peers_reply", vapi_msg_id_vrrp_vr_set_peers_reply);
}

static inline void vapi_set_vapi_msg_vrrp_vr_set_peers_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vrrp_vr_set_peers_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vrrp_vr_set_peers_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vrrp_vr_set_peers
#define defined_vapi_msg_vrrp_vr_set_peers
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 vr_id;
  u8 is_ipv6;
  u8 n_addrs;
  vapi_type_address addrs[0]; 
} vapi_payload_vrrp_vr_set_peers;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_set_peers payload;
} vapi_msg_vrrp_vr_set_peers;

static inline void vapi_msg_vrrp_vr_set_peers_payload_hton(vapi_payload_vrrp_vr_set_peers *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_set_peers_payload_ntoh(vapi_payload_vrrp_vr_set_peers *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_set_peers_hton(vapi_msg_vrrp_vr_set_peers *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_set_peers'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_set_peers_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_set_peers_ntoh(vapi_msg_vrrp_vr_set_peers *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_set_peers'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_set_peers_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_set_peers_msg_size(vapi_msg_vrrp_vr_set_peers *msg)
{
  return sizeof(*msg)+ msg->payload.n_addrs * sizeof(msg->payload.addrs[0]);
}

static inline vapi_msg_vrrp_vr_set_peers* vapi_alloc_vrrp_vr_set_peers(struct vapi_ctx_s *ctx, size_t _addrs_array_size)
{
  vapi_msg_vrrp_vr_set_peers *msg = NULL;
  const size_t size = sizeof(vapi_msg_vrrp_vr_set_peers) + sizeof(msg->payload.addrs[0]) * _addrs_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vrrp_vr_set_peers*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vrrp_vr_set_peers);
  msg->payload.n_addrs = _addrs_array_size;

  return msg;
}

static inline vapi_error_e vapi_vrrp_vr_set_peers(struct vapi_ctx_s *ctx,
  vapi_msg_vrrp_vr_set_peers *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vrrp_vr_set_peers_reply *reply),
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
  vapi_msg_vrrp_vr_set_peers_hton(msg);
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
    vapi_msg_vrrp_vr_set_peers_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_set_peers()
{
  static const char name[] = "vrrp_vr_set_peers";
  static const char name_with_crc[] = "vrrp_vr_set_peers_baa2e52b";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_set_peers = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_set_peers, payload),
    sizeof(vapi_msg_vrrp_vr_set_peers),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_set_peers_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_set_peers_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_set_peers = vapi_register_msg(&__vapi_metadata_vrrp_vr_set_peers);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_set_peers", vapi_msg_id_vrrp_vr_set_peers);
}
#endif

#ifndef defined_vapi_msg_vrrp_vr_peer_details
#define defined_vapi_msg_vrrp_vr_peer_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 vr_id;
  u8 is_ipv6;
  u8 n_peer_addrs;
  vapi_type_address peer_addrs[0]; 
} vapi_payload_vrrp_vr_peer_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_peer_details payload;
} vapi_msg_vrrp_vr_peer_details;

static inline void vapi_msg_vrrp_vr_peer_details_payload_hton(vapi_payload_vrrp_vr_peer_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_peer_details_payload_ntoh(vapi_payload_vrrp_vr_peer_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_peer_details_hton(vapi_msg_vrrp_vr_peer_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_peer_details'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_peer_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_peer_details_ntoh(vapi_msg_vrrp_vr_peer_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_peer_details'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_peer_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_peer_details_msg_size(vapi_msg_vrrp_vr_peer_details *msg)
{
  return sizeof(*msg)+ msg->payload.n_peer_addrs * sizeof(msg->payload.peer_addrs[0]);
}

static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_peer_details()
{
  static const char name[] = "vrrp_vr_peer_details";
  static const char name_with_crc[] = "vrrp_vr_peer_details_abd9145e";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_peer_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_peer_details, payload),
    sizeof(vapi_msg_vrrp_vr_peer_details),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_peer_details_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_peer_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_peer_details = vapi_register_msg(&__vapi_metadata_vrrp_vr_peer_details);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_peer_details", vapi_msg_id_vrrp_vr_peer_details);
}

static inline void vapi_set_vapi_msg_vrrp_vr_peer_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vrrp_vr_peer_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vrrp_vr_peer_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vrrp_vr_peer_dump
#define defined_vapi_msg_vrrp_vr_peer_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 is_ipv6;
  u8 vr_id; 
} vapi_payload_vrrp_vr_peer_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_peer_dump payload;
} vapi_msg_vrrp_vr_peer_dump;

static inline void vapi_msg_vrrp_vr_peer_dump_payload_hton(vapi_payload_vrrp_vr_peer_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_peer_dump_payload_ntoh(vapi_payload_vrrp_vr_peer_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_peer_dump_hton(vapi_msg_vrrp_vr_peer_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_peer_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_peer_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_peer_dump_ntoh(vapi_msg_vrrp_vr_peer_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_peer_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_peer_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_peer_dump_msg_size(vapi_msg_vrrp_vr_peer_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_vrrp_vr_peer_dump* vapi_alloc_vrrp_vr_peer_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_vrrp_vr_peer_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_vrrp_vr_peer_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vrrp_vr_peer_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vrrp_vr_peer_dump);

  return msg;
}

static inline vapi_error_e vapi_vrrp_vr_peer_dump(struct vapi_ctx_s *ctx,
  vapi_msg_vrrp_vr_peer_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vrrp_vr_peer_details *reply),
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
  vapi_msg_vrrp_vr_peer_dump_hton(msg);
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
    vapi_msg_vrrp_vr_peer_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_peer_dump()
{
  static const char name[] = "vrrp_vr_peer_dump";
  static const char name_with_crc[] = "vrrp_vr_peer_dump_6fa3f7c4";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_peer_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_peer_dump, payload),
    sizeof(vapi_msg_vrrp_vr_peer_dump),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_peer_dump_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_peer_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_peer_dump = vapi_register_msg(&__vapi_metadata_vrrp_vr_peer_dump);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_peer_dump", vapi_msg_id_vrrp_vr_peer_dump);
}
#endif

#ifndef defined_vapi_msg_vrrp_vr_track_if_add_del_reply
#define defined_vapi_msg_vrrp_vr_track_if_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_vrrp_vr_track_if_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vrrp_vr_track_if_add_del_reply payload;
} vapi_msg_vrrp_vr_track_if_add_del_reply;

static inline void vapi_msg_vrrp_vr_track_if_add_del_reply_payload_hton(vapi_payload_vrrp_vr_track_if_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_vrrp_vr_track_if_add_del_reply_payload_ntoh(vapi_payload_vrrp_vr_track_if_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_vrrp_vr_track_if_add_del_reply_hton(vapi_msg_vrrp_vr_track_if_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vrrp_vr_track_if_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_track_if_add_del_reply_ntoh(vapi_msg_vrrp_vr_track_if_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_track_if_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_track_if_add_del_reply_msg_size(vapi_msg_vrrp_vr_track_if_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_track_if_add_del_reply()
{
  static const char name[] = "vrrp_vr_track_if_add_del_reply";
  static const char name_with_crc[] = "vrrp_vr_track_if_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_track_if_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vrrp_vr_track_if_add_del_reply, payload),
    sizeof(vapi_msg_vrrp_vr_track_if_add_del_reply),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_track_if_add_del_reply = vapi_register_msg(&__vapi_metadata_vrrp_vr_track_if_add_del_reply);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_track_if_add_del_reply", vapi_msg_id_vrrp_vr_track_if_add_del_reply);
}

static inline void vapi_set_vapi_msg_vrrp_vr_track_if_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vrrp_vr_track_if_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vrrp_vr_track_if_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vrrp_vr_track_if_add_del
#define defined_vapi_msg_vrrp_vr_track_if_add_del
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 is_ipv6;
  u8 vr_id;
  u8 is_add;
  u8 n_ifs;
  vapi_type_vrrp_vr_track_if ifs[0]; 
} vapi_payload_vrrp_vr_track_if_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_track_if_add_del payload;
} vapi_msg_vrrp_vr_track_if_add_del;

static inline void vapi_msg_vrrp_vr_track_if_add_del_payload_hton(vapi_payload_vrrp_vr_track_if_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  do { unsigned i; for (i = 0; i < payload->n_ifs; ++i) { vapi_type_vrrp_vr_track_if_hton(&payload->ifs[i]); } } while(0);
}

static inline void vapi_msg_vrrp_vr_track_if_add_del_payload_ntoh(vapi_payload_vrrp_vr_track_if_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  do { unsigned i; for (i = 0; i < payload->n_ifs; ++i) { vapi_type_vrrp_vr_track_if_ntoh(&payload->ifs[i]); } } while(0);
}

static inline void vapi_msg_vrrp_vr_track_if_add_del_hton(vapi_msg_vrrp_vr_track_if_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_track_if_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_track_if_add_del_ntoh(vapi_msg_vrrp_vr_track_if_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_track_if_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_track_if_add_del_msg_size(vapi_msg_vrrp_vr_track_if_add_del *msg)
{
  return sizeof(*msg)+ msg->payload.n_ifs * sizeof(msg->payload.ifs[0]);
}

static inline vapi_msg_vrrp_vr_track_if_add_del* vapi_alloc_vrrp_vr_track_if_add_del(struct vapi_ctx_s *ctx, size_t _ifs_array_size)
{
  vapi_msg_vrrp_vr_track_if_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_vrrp_vr_track_if_add_del) + sizeof(msg->payload.ifs[0]) * _ifs_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vrrp_vr_track_if_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vrrp_vr_track_if_add_del);
  msg->payload.n_ifs = _ifs_array_size;

  return msg;
}

static inline vapi_error_e vapi_vrrp_vr_track_if_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_vrrp_vr_track_if_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vrrp_vr_track_if_add_del_reply *reply),
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
  vapi_msg_vrrp_vr_track_if_add_del_hton(msg);
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
    vapi_msg_vrrp_vr_track_if_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_track_if_add_del()
{
  static const char name[] = "vrrp_vr_track_if_add_del";
  static const char name_with_crc[] = "vrrp_vr_track_if_add_del_337f4ba4";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_track_if_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_track_if_add_del, payload),
    sizeof(vapi_msg_vrrp_vr_track_if_add_del),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_add_del_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_track_if_add_del = vapi_register_msg(&__vapi_metadata_vrrp_vr_track_if_add_del);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_track_if_add_del", vapi_msg_id_vrrp_vr_track_if_add_del);
}
#endif

#ifndef defined_vapi_msg_vrrp_vr_track_if_details
#define defined_vapi_msg_vrrp_vr_track_if_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 vr_id;
  u8 is_ipv6;
  u8 n_ifs;
  vapi_type_vrrp_vr_track_if ifs[0]; 
} vapi_payload_vrrp_vr_track_if_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_track_if_details payload;
} vapi_msg_vrrp_vr_track_if_details;

static inline void vapi_msg_vrrp_vr_track_if_details_payload_hton(vapi_payload_vrrp_vr_track_if_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  do { unsigned i; for (i = 0; i < payload->n_ifs; ++i) { vapi_type_vrrp_vr_track_if_hton(&payload->ifs[i]); } } while(0);
}

static inline void vapi_msg_vrrp_vr_track_if_details_payload_ntoh(vapi_payload_vrrp_vr_track_if_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  do { unsigned i; for (i = 0; i < payload->n_ifs; ++i) { vapi_type_vrrp_vr_track_if_ntoh(&payload->ifs[i]); } } while(0);
}

static inline void vapi_msg_vrrp_vr_track_if_details_hton(vapi_msg_vrrp_vr_track_if_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_details'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_track_if_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_track_if_details_ntoh(vapi_msg_vrrp_vr_track_if_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_details'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_track_if_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_track_if_details_msg_size(vapi_msg_vrrp_vr_track_if_details *msg)
{
  return sizeof(*msg)+ msg->payload.n_ifs * sizeof(msg->payload.ifs[0]);
}

static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_track_if_details()
{
  static const char name[] = "vrrp_vr_track_if_details";
  static const char name_with_crc[] = "vrrp_vr_track_if_details_99bcca9c";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_track_if_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_track_if_details, payload),
    sizeof(vapi_msg_vrrp_vr_track_if_details),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_details_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_track_if_details = vapi_register_msg(&__vapi_metadata_vrrp_vr_track_if_details);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_track_if_details", vapi_msg_id_vrrp_vr_track_if_details);
}

static inline void vapi_set_vapi_msg_vrrp_vr_track_if_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vrrp_vr_track_if_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vrrp_vr_track_if_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vrrp_vr_track_if_dump
#define defined_vapi_msg_vrrp_vr_track_if_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u8 is_ipv6;
  u8 vr_id;
  u8 dump_all; 
} vapi_payload_vrrp_vr_track_if_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vrrp_vr_track_if_dump payload;
} vapi_msg_vrrp_vr_track_if_dump;

static inline void vapi_msg_vrrp_vr_track_if_dump_payload_hton(vapi_payload_vrrp_vr_track_if_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_track_if_dump_payload_ntoh(vapi_payload_vrrp_vr_track_if_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vrrp_vr_track_if_dump_hton(vapi_msg_vrrp_vr_track_if_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vrrp_vr_track_if_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_vrrp_vr_track_if_dump_ntoh(vapi_msg_vrrp_vr_track_if_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vrrp_vr_track_if_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vrrp_vr_track_if_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vrrp_vr_track_if_dump_msg_size(vapi_msg_vrrp_vr_track_if_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_vrrp_vr_track_if_dump* vapi_alloc_vrrp_vr_track_if_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_vrrp_vr_track_if_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_vrrp_vr_track_if_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vrrp_vr_track_if_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vrrp_vr_track_if_dump);

  return msg;
}

static inline vapi_error_e vapi_vrrp_vr_track_if_dump(struct vapi_ctx_s *ctx,
  vapi_msg_vrrp_vr_track_if_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vrrp_vr_track_if_details *reply),
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
  vapi_msg_vrrp_vr_track_if_dump_hton(msg);
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
    vapi_msg_vrrp_vr_track_if_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vrrp_vr_track_if_dump()
{
  static const char name[] = "vrrp_vr_track_if_dump";
  static const char name_with_crc[] = "vrrp_vr_track_if_dump_a34dfc6d";
  static vapi_message_desc_t __vapi_metadata_vrrp_vr_track_if_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vrrp_vr_track_if_dump, payload),
    sizeof(vapi_msg_vrrp_vr_track_if_dump),
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_dump_hton,
    (generic_swap_fn_t)vapi_msg_vrrp_vr_track_if_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vrrp_vr_track_if_dump = vapi_register_msg(&__vapi_metadata_vrrp_vr_track_if_dump);
  VAPI_DBG("Assigned msg id %d to vrrp_vr_track_if_dump", vapi_msg_id_vrrp_vr_track_if_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
