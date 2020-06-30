#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_interface_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_interface_api_json

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

extern vapi_msg_id_t vapi_msg_id_sw_interface_set_flags;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_flags_reply;
extern vapi_msg_id_t vapi_msg_id_hw_interface_set_mtu;
extern vapi_msg_id_t vapi_msg_id_hw_interface_set_mtu_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_mtu;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_mtu_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_ip_directed_broadcast;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_ip_directed_broadcast_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_event;
extern vapi_msg_id_t vapi_msg_id_want_interface_events;
extern vapi_msg_id_t vapi_msg_id_want_interface_events_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_dump;
extern vapi_msg_id_t vapi_msg_id_sw_interface_add_del_address;
extern vapi_msg_id_t vapi_msg_id_sw_interface_add_del_address_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_begin;
extern vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_begin_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_end;
extern vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_end_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_table;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_table_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_get_table;
extern vapi_msg_id_t vapi_msg_id_sw_interface_get_table_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_unnumbered;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_unnumbered_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_clear_stats;
extern vapi_msg_id_t vapi_msg_id_sw_interface_clear_stats_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_tag_add_del;
extern vapi_msg_id_t vapi_msg_id_sw_interface_tag_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_add_del_mac_address;
extern vapi_msg_id_t vapi_msg_id_sw_interface_add_del_mac_address_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_mac_address;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_mac_address_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_get_mac_address;
extern vapi_msg_id_t vapi_msg_id_sw_interface_get_mac_address_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_mode;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_mode_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_placement;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_placement_reply;
extern vapi_msg_id_t vapi_msg_id_sw_interface_rx_placement_dump;
extern vapi_msg_id_t vapi_msg_id_sw_interface_rx_placement_details;
extern vapi_msg_id_t vapi_msg_id_interface_name_renumber;
extern vapi_msg_id_t vapi_msg_id_interface_name_renumber_reply;
extern vapi_msg_id_t vapi_msg_id_create_subif;
extern vapi_msg_id_t vapi_msg_id_create_subif_reply;
extern vapi_msg_id_t vapi_msg_id_create_vlan_subif;
extern vapi_msg_id_t vapi_msg_id_create_vlan_subif_reply;
extern vapi_msg_id_t vapi_msg_id_delete_subif;
extern vapi_msg_id_t vapi_msg_id_delete_subif_reply;
extern vapi_msg_id_t vapi_msg_id_create_loopback;
extern vapi_msg_id_t vapi_msg_id_create_loopback_reply;
extern vapi_msg_id_t vapi_msg_id_create_loopback_instance;
extern vapi_msg_id_t vapi_msg_id_create_loopback_instance_reply;
extern vapi_msg_id_t vapi_msg_id_delete_loopback;
extern vapi_msg_id_t vapi_msg_id_delete_loopback_reply;
extern vapi_msg_id_t vapi_msg_id_collect_detailed_interface_stats;
extern vapi_msg_id_t vapi_msg_id_collect_detailed_interface_stats_reply;

#define DEFINE_VAPI_MSG_IDS_INTERFACE_API_JSON\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_flags;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_flags_reply;\
  vapi_msg_id_t vapi_msg_id_hw_interface_set_mtu;\
  vapi_msg_id_t vapi_msg_id_hw_interface_set_mtu_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_mtu;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_mtu_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_ip_directed_broadcast;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_ip_directed_broadcast_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_event;\
  vapi_msg_id_t vapi_msg_id_want_interface_events;\
  vapi_msg_id_t vapi_msg_id_want_interface_events_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_dump;\
  vapi_msg_id_t vapi_msg_id_sw_interface_add_del_address;\
  vapi_msg_id_t vapi_msg_id_sw_interface_add_del_address_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_begin;\
  vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_begin_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_end;\
  vapi_msg_id_t vapi_msg_id_sw_interface_address_replace_end_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_table;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_table_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_get_table;\
  vapi_msg_id_t vapi_msg_id_sw_interface_get_table_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_unnumbered;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_unnumbered_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_clear_stats;\
  vapi_msg_id_t vapi_msg_id_sw_interface_clear_stats_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_tag_add_del;\
  vapi_msg_id_t vapi_msg_id_sw_interface_tag_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_add_del_mac_address;\
  vapi_msg_id_t vapi_msg_id_sw_interface_add_del_mac_address_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_mac_address;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_mac_address_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_get_mac_address;\
  vapi_msg_id_t vapi_msg_id_sw_interface_get_mac_address_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_mode;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_mode_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_placement;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_rx_placement_reply;\
  vapi_msg_id_t vapi_msg_id_sw_interface_rx_placement_dump;\
  vapi_msg_id_t vapi_msg_id_sw_interface_rx_placement_details;\
  vapi_msg_id_t vapi_msg_id_interface_name_renumber;\
  vapi_msg_id_t vapi_msg_id_interface_name_renumber_reply;\
  vapi_msg_id_t vapi_msg_id_create_subif;\
  vapi_msg_id_t vapi_msg_id_create_subif_reply;\
  vapi_msg_id_t vapi_msg_id_create_vlan_subif;\
  vapi_msg_id_t vapi_msg_id_create_vlan_subif_reply;\
  vapi_msg_id_t vapi_msg_id_delete_subif;\
  vapi_msg_id_t vapi_msg_id_delete_subif_reply;\
  vapi_msg_id_t vapi_msg_id_create_loopback;\
  vapi_msg_id_t vapi_msg_id_create_loopback_reply;\
  vapi_msg_id_t vapi_msg_id_create_loopback_instance;\
  vapi_msg_id_t vapi_msg_id_create_loopback_instance_reply;\
  vapi_msg_id_t vapi_msg_id_delete_loopback;\
  vapi_msg_id_t vapi_msg_id_delete_loopback_reply;\
  vapi_msg_id_t vapi_msg_id_collect_detailed_interface_stats;\
  vapi_msg_id_t vapi_msg_id_collect_detailed_interface_stats_reply;


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

#ifndef defined_vapi_type_mac_address
#define defined_vapi_type_mac_address
typedef u8 vapi_type_mac_address[6];

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

#ifndef defined_vapi_msg_sw_interface_set_flags_reply
#define defined_vapi_msg_sw_interface_set_flags_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_flags_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_flags_reply payload;
} vapi_msg_sw_interface_set_flags_reply;

static inline void vapi_msg_sw_interface_set_flags_reply_payload_hton(vapi_payload_sw_interface_set_flags_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_flags_reply_payload_ntoh(vapi_payload_sw_interface_set_flags_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_flags_reply_hton(vapi_msg_sw_interface_set_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_flags_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_flags_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_flags_reply_ntoh(vapi_msg_sw_interface_set_flags_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_flags_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_flags_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_flags_reply_msg_size(vapi_msg_sw_interface_set_flags_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_flags_reply()
{
  static const char name[] = "sw_interface_set_flags_reply";
  static const char name_with_crc[] = "sw_interface_set_flags_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_flags_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_flags_reply, payload),
    sizeof(vapi_msg_sw_interface_set_flags_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_flags_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_flags_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_flags_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_flags_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_flags_reply", vapi_msg_id_sw_interface_set_flags_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_flags_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_flags_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_flags_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_flags
#define defined_vapi_msg_sw_interface_set_flags
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  vapi_enum_if_status_flags flags; 
} vapi_payload_sw_interface_set_flags;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_flags payload;
} vapi_msg_sw_interface_set_flags;

static inline void vapi_msg_sw_interface_set_flags_payload_hton(vapi_payload_sw_interface_set_flags *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->flags = (vapi_enum_if_status_flags)htobe32(payload->flags);
}

static inline void vapi_msg_sw_interface_set_flags_payload_ntoh(vapi_payload_sw_interface_set_flags *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->flags = (vapi_enum_if_status_flags)be32toh(payload->flags);
}

static inline void vapi_msg_sw_interface_set_flags_hton(vapi_msg_sw_interface_set_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_flags'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_flags_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_flags_ntoh(vapi_msg_sw_interface_set_flags *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_flags'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_flags_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_flags_msg_size(vapi_msg_sw_interface_set_flags *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_flags* vapi_alloc_sw_interface_set_flags(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_flags *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_flags);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_flags*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_flags);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_flags(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_flags *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_flags_reply *reply),
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
  vapi_msg_sw_interface_set_flags_hton(msg);
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
    vapi_msg_sw_interface_set_flags_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_flags()
{
  static const char name[] = "sw_interface_set_flags";
  static const char name_with_crc[] = "sw_interface_set_flags_6a2b491a";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_flags = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_flags, payload),
    sizeof(vapi_msg_sw_interface_set_flags),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_flags_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_flags_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_flags = vapi_register_msg(&__vapi_metadata_sw_interface_set_flags);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_flags", vapi_msg_id_sw_interface_set_flags);
}
#endif

#ifndef defined_vapi_msg_hw_interface_set_mtu_reply
#define defined_vapi_msg_hw_interface_set_mtu_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_hw_interface_set_mtu_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_hw_interface_set_mtu_reply payload;
} vapi_msg_hw_interface_set_mtu_reply;

static inline void vapi_msg_hw_interface_set_mtu_reply_payload_hton(vapi_payload_hw_interface_set_mtu_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_hw_interface_set_mtu_reply_payload_ntoh(vapi_payload_hw_interface_set_mtu_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_hw_interface_set_mtu_reply_hton(vapi_msg_hw_interface_set_mtu_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_hw_interface_set_mtu_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_hw_interface_set_mtu_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_hw_interface_set_mtu_reply_ntoh(vapi_msg_hw_interface_set_mtu_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_hw_interface_set_mtu_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_hw_interface_set_mtu_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_hw_interface_set_mtu_reply_msg_size(vapi_msg_hw_interface_set_mtu_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_hw_interface_set_mtu_reply()
{
  static const char name[] = "hw_interface_set_mtu_reply";
  static const char name_with_crc[] = "hw_interface_set_mtu_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_hw_interface_set_mtu_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_hw_interface_set_mtu_reply, payload),
    sizeof(vapi_msg_hw_interface_set_mtu_reply),
    (generic_swap_fn_t)vapi_msg_hw_interface_set_mtu_reply_hton,
    (generic_swap_fn_t)vapi_msg_hw_interface_set_mtu_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_hw_interface_set_mtu_reply = vapi_register_msg(&__vapi_metadata_hw_interface_set_mtu_reply);
  VAPI_DBG("Assigned msg id %d to hw_interface_set_mtu_reply", vapi_msg_id_hw_interface_set_mtu_reply);
}

static inline void vapi_set_vapi_msg_hw_interface_set_mtu_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_hw_interface_set_mtu_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_hw_interface_set_mtu_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_hw_interface_set_mtu
#define defined_vapi_msg_hw_interface_set_mtu
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u16 mtu; 
} vapi_payload_hw_interface_set_mtu;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_hw_interface_set_mtu payload;
} vapi_msg_hw_interface_set_mtu;

static inline void vapi_msg_hw_interface_set_mtu_payload_hton(vapi_payload_hw_interface_set_mtu *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->mtu = htobe16(payload->mtu);
}

static inline void vapi_msg_hw_interface_set_mtu_payload_ntoh(vapi_payload_hw_interface_set_mtu *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->mtu = be16toh(payload->mtu);
}

static inline void vapi_msg_hw_interface_set_mtu_hton(vapi_msg_hw_interface_set_mtu *msg)
{
  VAPI_DBG("Swapping `vapi_msg_hw_interface_set_mtu'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_hw_interface_set_mtu_payload_hton(&msg->payload);
}

static inline void vapi_msg_hw_interface_set_mtu_ntoh(vapi_msg_hw_interface_set_mtu *msg)
{
  VAPI_DBG("Swapping `vapi_msg_hw_interface_set_mtu'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_hw_interface_set_mtu_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_hw_interface_set_mtu_msg_size(vapi_msg_hw_interface_set_mtu *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_hw_interface_set_mtu* vapi_alloc_hw_interface_set_mtu(struct vapi_ctx_s *ctx)
{
  vapi_msg_hw_interface_set_mtu *msg = NULL;
  const size_t size = sizeof(vapi_msg_hw_interface_set_mtu);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_hw_interface_set_mtu*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_hw_interface_set_mtu);

  return msg;
}

static inline vapi_error_e vapi_hw_interface_set_mtu(struct vapi_ctx_s *ctx,
  vapi_msg_hw_interface_set_mtu *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_hw_interface_set_mtu_reply *reply),
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
  vapi_msg_hw_interface_set_mtu_hton(msg);
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
    vapi_msg_hw_interface_set_mtu_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_hw_interface_set_mtu()
{
  static const char name[] = "hw_interface_set_mtu";
  static const char name_with_crc[] = "hw_interface_set_mtu_e6746899";
  static vapi_message_desc_t __vapi_metadata_hw_interface_set_mtu = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_hw_interface_set_mtu, payload),
    sizeof(vapi_msg_hw_interface_set_mtu),
    (generic_swap_fn_t)vapi_msg_hw_interface_set_mtu_hton,
    (generic_swap_fn_t)vapi_msg_hw_interface_set_mtu_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_hw_interface_set_mtu = vapi_register_msg(&__vapi_metadata_hw_interface_set_mtu);
  VAPI_DBG("Assigned msg id %d to hw_interface_set_mtu", vapi_msg_id_hw_interface_set_mtu);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_mtu_reply
#define defined_vapi_msg_sw_interface_set_mtu_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_mtu_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_mtu_reply payload;
} vapi_msg_sw_interface_set_mtu_reply;

static inline void vapi_msg_sw_interface_set_mtu_reply_payload_hton(vapi_payload_sw_interface_set_mtu_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_mtu_reply_payload_ntoh(vapi_payload_sw_interface_set_mtu_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_mtu_reply_hton(vapi_msg_sw_interface_set_mtu_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mtu_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_mtu_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_mtu_reply_ntoh(vapi_msg_sw_interface_set_mtu_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mtu_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_mtu_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_mtu_reply_msg_size(vapi_msg_sw_interface_set_mtu_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_mtu_reply()
{
  static const char name[] = "sw_interface_set_mtu_reply";
  static const char name_with_crc[] = "sw_interface_set_mtu_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_mtu_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_mtu_reply, payload),
    sizeof(vapi_msg_sw_interface_set_mtu_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mtu_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mtu_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_mtu_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_mtu_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_mtu_reply", vapi_msg_id_sw_interface_set_mtu_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_mtu_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_mtu_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_mtu_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_mtu
#define defined_vapi_msg_sw_interface_set_mtu
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 mtu[4]; 
} vapi_payload_sw_interface_set_mtu;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_mtu payload;
} vapi_msg_sw_interface_set_mtu;

static inline void vapi_msg_sw_interface_set_mtu_payload_hton(vapi_payload_sw_interface_set_mtu *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  do { unsigned i; for (i = 0; i < 4; ++i) { payload->mtu[i] = htobe32(payload->mtu[i]); } } while(0);
}

static inline void vapi_msg_sw_interface_set_mtu_payload_ntoh(vapi_payload_sw_interface_set_mtu *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  do { unsigned i; for (i = 0; i < 4; ++i) { payload->mtu[i] = be32toh(payload->mtu[i]); } } while(0);
}

static inline void vapi_msg_sw_interface_set_mtu_hton(vapi_msg_sw_interface_set_mtu *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mtu'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_mtu_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_mtu_ntoh(vapi_msg_sw_interface_set_mtu *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mtu'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_mtu_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_mtu_msg_size(vapi_msg_sw_interface_set_mtu *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_mtu* vapi_alloc_sw_interface_set_mtu(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_mtu *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_mtu);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_mtu*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_mtu);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_mtu(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_mtu *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_mtu_reply *reply),
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
  vapi_msg_sw_interface_set_mtu_hton(msg);
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
    vapi_msg_sw_interface_set_mtu_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_mtu()
{
  static const char name[] = "sw_interface_set_mtu";
  static const char name_with_crc[] = "sw_interface_set_mtu_5cbe85e5";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_mtu = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_mtu, payload),
    sizeof(vapi_msg_sw_interface_set_mtu),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mtu_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mtu_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_mtu = vapi_register_msg(&__vapi_metadata_sw_interface_set_mtu);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_mtu", vapi_msg_id_sw_interface_set_mtu);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_ip_directed_broadcast_reply
#define defined_vapi_msg_sw_interface_set_ip_directed_broadcast_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_ip_directed_broadcast_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_ip_directed_broadcast_reply payload;
} vapi_msg_sw_interface_set_ip_directed_broadcast_reply;

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_reply_payload_hton(vapi_payload_sw_interface_set_ip_directed_broadcast_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_reply_payload_ntoh(vapi_payload_sw_interface_set_ip_directed_broadcast_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_reply_hton(vapi_msg_sw_interface_set_ip_directed_broadcast_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_ip_directed_broadcast_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_ip_directed_broadcast_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_reply_ntoh(vapi_msg_sw_interface_set_ip_directed_broadcast_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_ip_directed_broadcast_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_ip_directed_broadcast_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_ip_directed_broadcast_reply_msg_size(vapi_msg_sw_interface_set_ip_directed_broadcast_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_ip_directed_broadcast_reply()
{
  static const char name[] = "sw_interface_set_ip_directed_broadcast_reply";
  static const char name_with_crc[] = "sw_interface_set_ip_directed_broadcast_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_ip_directed_broadcast_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_ip_directed_broadcast_reply, payload),
    sizeof(vapi_msg_sw_interface_set_ip_directed_broadcast_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_ip_directed_broadcast_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_ip_directed_broadcast_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_ip_directed_broadcast_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_ip_directed_broadcast_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_ip_directed_broadcast_reply", vapi_msg_id_sw_interface_set_ip_directed_broadcast_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_ip_directed_broadcast_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_ip_directed_broadcast_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_ip_directed_broadcast_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_ip_directed_broadcast
#define defined_vapi_msg_sw_interface_set_ip_directed_broadcast
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool enable; 
} vapi_payload_sw_interface_set_ip_directed_broadcast;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_ip_directed_broadcast payload;
} vapi_msg_sw_interface_set_ip_directed_broadcast;

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_payload_hton(vapi_payload_sw_interface_set_ip_directed_broadcast *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_payload_ntoh(vapi_payload_sw_interface_set_ip_directed_broadcast *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_hton(vapi_msg_sw_interface_set_ip_directed_broadcast *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_ip_directed_broadcast'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_ip_directed_broadcast_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_ip_directed_broadcast_ntoh(vapi_msg_sw_interface_set_ip_directed_broadcast *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_ip_directed_broadcast'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_ip_directed_broadcast_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_ip_directed_broadcast_msg_size(vapi_msg_sw_interface_set_ip_directed_broadcast *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_ip_directed_broadcast* vapi_alloc_sw_interface_set_ip_directed_broadcast(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_ip_directed_broadcast *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_ip_directed_broadcast);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_ip_directed_broadcast*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_ip_directed_broadcast);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_ip_directed_broadcast(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_ip_directed_broadcast *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_ip_directed_broadcast_reply *reply),
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
  vapi_msg_sw_interface_set_ip_directed_broadcast_hton(msg);
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
    vapi_msg_sw_interface_set_ip_directed_broadcast_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_ip_directed_broadcast()
{
  static const char name[] = "sw_interface_set_ip_directed_broadcast";
  static const char name_with_crc[] = "sw_interface_set_ip_directed_broadcast_ae6cfcfb";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_ip_directed_broadcast = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_ip_directed_broadcast, payload),
    sizeof(vapi_msg_sw_interface_set_ip_directed_broadcast),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_ip_directed_broadcast_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_ip_directed_broadcast_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_ip_directed_broadcast = vapi_register_msg(&__vapi_metadata_sw_interface_set_ip_directed_broadcast);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_ip_directed_broadcast", vapi_msg_id_sw_interface_set_ip_directed_broadcast);
}
#endif

#ifndef defined_vapi_msg_sw_interface_event
#define defined_vapi_msg_sw_interface_event
typedef struct __attribute__ ((__packed__)) {
  u16 _vl_msg_id;
  u32 client_index;
  u32 pid;
  vapi_type_interface_index sw_if_index;
  vapi_enum_if_status_flags flags;
  bool deleted; 
} vapi_payload_sw_interface_event;

typedef struct __attribute__ ((__packed__)) {

  vapi_payload_sw_interface_event payload;
} vapi_msg_sw_interface_event;

static inline void vapi_msg_sw_interface_event_payload_hton(vapi_payload_sw_interface_event *payload)
{
  payload->_vl_msg_id = htobe16(payload->_vl_msg_id);
  payload->client_index = htobe32(payload->client_index);
  payload->pid = htobe32(payload->pid);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->flags = (vapi_enum_if_status_flags)htobe32(payload->flags);
}

static inline void vapi_msg_sw_interface_event_payload_ntoh(vapi_payload_sw_interface_event *payload)
{
  payload->_vl_msg_id = be16toh(payload->_vl_msg_id);
  payload->client_index = be32toh(payload->client_index);
  payload->pid = be32toh(payload->pid);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->flags = (vapi_enum_if_status_flags)be32toh(payload->flags);
}

static inline void vapi_msg_sw_interface_event_hton(vapi_msg_sw_interface_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_event'@%p to big endian", msg);

  vapi_msg_sw_interface_event_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_event_ntoh(vapi_msg_sw_interface_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_event'@%p to host byte order", msg);

  vapi_msg_sw_interface_event_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_event_msg_size(vapi_msg_sw_interface_event *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_event()
{
  static const char name[] = "sw_interface_event";
  static const char name_with_crc[] = "sw_interface_event_f709f78d";
  static vapi_message_desc_t __vapi_metadata_sw_interface_event = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    false,
    0,
    offsetof(vapi_msg_sw_interface_event, payload),
    sizeof(vapi_msg_sw_interface_event),
    (generic_swap_fn_t)vapi_msg_sw_interface_event_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_event_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_event = vapi_register_msg(&__vapi_metadata_sw_interface_event);
  VAPI_DBG("Assigned msg id %d to sw_interface_event", vapi_msg_id_sw_interface_event);
}

static inline void vapi_set_vapi_msg_sw_interface_event_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_event *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_event, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_interface_events_reply
#define defined_vapi_msg_want_interface_events_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_want_interface_events_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_want_interface_events_reply payload;
} vapi_msg_want_interface_events_reply;

static inline void vapi_msg_want_interface_events_reply_payload_hton(vapi_payload_want_interface_events_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_want_interface_events_reply_payload_ntoh(vapi_payload_want_interface_events_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_want_interface_events_reply_hton(vapi_msg_want_interface_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_interface_events_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_want_interface_events_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_interface_events_reply_ntoh(vapi_msg_want_interface_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_interface_events_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_want_interface_events_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_interface_events_reply_msg_size(vapi_msg_want_interface_events_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_want_interface_events_reply()
{
  static const char name[] = "want_interface_events_reply";
  static const char name_with_crc[] = "want_interface_events_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_want_interface_events_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_want_interface_events_reply, payload),
    sizeof(vapi_msg_want_interface_events_reply),
    (generic_swap_fn_t)vapi_msg_want_interface_events_reply_hton,
    (generic_swap_fn_t)vapi_msg_want_interface_events_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_interface_events_reply = vapi_register_msg(&__vapi_metadata_want_interface_events_reply);
  VAPI_DBG("Assigned msg id %d to want_interface_events_reply", vapi_msg_id_want_interface_events_reply);
}

static inline void vapi_set_vapi_msg_want_interface_events_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_want_interface_events_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_want_interface_events_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_interface_events
#define defined_vapi_msg_want_interface_events
typedef struct __attribute__ ((__packed__)) {
  u32 enable_disable;
  u32 pid; 
} vapi_payload_want_interface_events;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_want_interface_events payload;
} vapi_msg_want_interface_events;

static inline void vapi_msg_want_interface_events_payload_hton(vapi_payload_want_interface_events *payload)
{
  payload->enable_disable = htobe32(payload->enable_disable);
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_want_interface_events_payload_ntoh(vapi_payload_want_interface_events *payload)
{
  payload->enable_disable = be32toh(payload->enable_disable);
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_want_interface_events_hton(vapi_msg_want_interface_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_interface_events'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_want_interface_events_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_interface_events_ntoh(vapi_msg_want_interface_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_interface_events'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_want_interface_events_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_interface_events_msg_size(vapi_msg_want_interface_events *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_want_interface_events* vapi_alloc_want_interface_events(struct vapi_ctx_s *ctx)
{
  vapi_msg_want_interface_events *msg = NULL;
  const size_t size = sizeof(vapi_msg_want_interface_events);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_want_interface_events*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_want_interface_events);

  return msg;
}

static inline vapi_error_e vapi_want_interface_events(struct vapi_ctx_s *ctx,
  vapi_msg_want_interface_events *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_want_interface_events_reply *reply),
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
  vapi_msg_want_interface_events_hton(msg);
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
    vapi_msg_want_interface_events_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_want_interface_events()
{
  static const char name[] = "want_interface_events";
  static const char name_with_crc[] = "want_interface_events_476f5a08";
  static vapi_message_desc_t __vapi_metadata_want_interface_events = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_want_interface_events, payload),
    sizeof(vapi_msg_want_interface_events),
    (generic_swap_fn_t)vapi_msg_want_interface_events_hton,
    (generic_swap_fn_t)vapi_msg_want_interface_events_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_interface_events = vapi_register_msg(&__vapi_metadata_want_interface_events);
  VAPI_DBG("Assigned msg id %d to want_interface_events", vapi_msg_id_want_interface_events);
}
#endif

#ifndef defined_vapi_msg_sw_interface_details
#define defined_vapi_msg_sw_interface_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 sup_sw_if_index;
  vapi_type_mac_address l2_address;
  vapi_enum_if_status_flags flags;
  vapi_enum_if_type type;
  vapi_enum_link_duplex link_duplex;
  u32 link_speed;
  u16 link_mtu;
  u32 mtu[4];
  u32 sub_id;
  u8 sub_number_of_tags;
  u16 sub_outer_vlan_id;
  u16 sub_inner_vlan_id;
  vapi_enum_sub_if_flags sub_if_flags;
  u32 vtr_op;
  u32 vtr_push_dot1q;
  u32 vtr_tag1;
  u32 vtr_tag2;
  u16 outer_tag;
  vapi_type_mac_address b_dmac;
  vapi_type_mac_address b_smac;
  u16 b_vlanid;
  u32 i_sid;
  u8 interface_name[64];
  u8 interface_dev_type[64];
  u8 tag[64]; 
} vapi_payload_sw_interface_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_details payload;
} vapi_msg_sw_interface_details;

static inline void vapi_msg_sw_interface_details_payload_hton(vapi_payload_sw_interface_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->sup_sw_if_index = htobe32(payload->sup_sw_if_index);
  payload->flags = (vapi_enum_if_status_flags)htobe32(payload->flags);
  payload->type = (vapi_enum_if_type)htobe32(payload->type);
  payload->link_duplex = (vapi_enum_link_duplex)htobe32(payload->link_duplex);
  payload->link_speed = htobe32(payload->link_speed);
  payload->link_mtu = htobe16(payload->link_mtu);
  do { unsigned i; for (i = 0; i < 4; ++i) { payload->mtu[i] = htobe32(payload->mtu[i]); } } while(0);
  payload->sub_id = htobe32(payload->sub_id);
  payload->sub_outer_vlan_id = htobe16(payload->sub_outer_vlan_id);
  payload->sub_inner_vlan_id = htobe16(payload->sub_inner_vlan_id);
  payload->sub_if_flags = (vapi_enum_sub_if_flags)htobe32(payload->sub_if_flags);
  payload->vtr_op = htobe32(payload->vtr_op);
  payload->vtr_push_dot1q = htobe32(payload->vtr_push_dot1q);
  payload->vtr_tag1 = htobe32(payload->vtr_tag1);
  payload->vtr_tag2 = htobe32(payload->vtr_tag2);
  payload->outer_tag = htobe16(payload->outer_tag);
  payload->b_vlanid = htobe16(payload->b_vlanid);
  payload->i_sid = htobe32(payload->i_sid);
}

static inline void vapi_msg_sw_interface_details_payload_ntoh(vapi_payload_sw_interface_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->sup_sw_if_index = be32toh(payload->sup_sw_if_index);
  payload->flags = (vapi_enum_if_status_flags)be32toh(payload->flags);
  payload->type = (vapi_enum_if_type)be32toh(payload->type);
  payload->link_duplex = (vapi_enum_link_duplex)be32toh(payload->link_duplex);
  payload->link_speed = be32toh(payload->link_speed);
  payload->link_mtu = be16toh(payload->link_mtu);
  do { unsigned i; for (i = 0; i < 4; ++i) { payload->mtu[i] = be32toh(payload->mtu[i]); } } while(0);
  payload->sub_id = be32toh(payload->sub_id);
  payload->sub_outer_vlan_id = be16toh(payload->sub_outer_vlan_id);
  payload->sub_inner_vlan_id = be16toh(payload->sub_inner_vlan_id);
  payload->sub_if_flags = (vapi_enum_sub_if_flags)be32toh(payload->sub_if_flags);
  payload->vtr_op = be32toh(payload->vtr_op);
  payload->vtr_push_dot1q = be32toh(payload->vtr_push_dot1q);
  payload->vtr_tag1 = be32toh(payload->vtr_tag1);
  payload->vtr_tag2 = be32toh(payload->vtr_tag2);
  payload->outer_tag = be16toh(payload->outer_tag);
  payload->b_vlanid = be16toh(payload->b_vlanid);
  payload->i_sid = be32toh(payload->i_sid);
}

static inline void vapi_msg_sw_interface_details_hton(vapi_msg_sw_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_details_ntoh(vapi_msg_sw_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_details_msg_size(vapi_msg_sw_interface_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_details()
{
  static const char name[] = "sw_interface_details";
  static const char name_with_crc[] = "sw_interface_details_17b69fa2";
  static vapi_message_desc_t __vapi_metadata_sw_interface_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_details, payload),
    sizeof(vapi_msg_sw_interface_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_details = vapi_register_msg(&__vapi_metadata_sw_interface_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_details", vapi_msg_id_sw_interface_details);
}

static inline void vapi_set_vapi_msg_sw_interface_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_dump
#define defined_vapi_msg_sw_interface_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool name_filter_valid;
  vl_api_string_t name_filter; 
} vapi_payload_sw_interface_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_dump payload;
} vapi_msg_sw_interface_dump;

static inline void vapi_msg_sw_interface_dump_payload_hton(vapi_payload_sw_interface_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_dump_payload_ntoh(vapi_payload_sw_interface_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_dump_hton(vapi_msg_sw_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_dump_ntoh(vapi_msg_sw_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_dump_msg_size(vapi_msg_sw_interface_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_dump* vapi_alloc_sw_interface_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_details *reply),
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
  vapi_msg_sw_interface_dump_hton(msg);
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
    vapi_msg_sw_interface_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_dump()
{
  static const char name[] = "sw_interface_dump";
  static const char name_with_crc[] = "sw_interface_dump_aa610c27";
  static vapi_message_desc_t __vapi_metadata_sw_interface_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_dump, payload),
    sizeof(vapi_msg_sw_interface_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_dump = vapi_register_msg(&__vapi_metadata_sw_interface_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_dump", vapi_msg_id_sw_interface_dump);
}
#endif

#ifndef defined_vapi_msg_sw_interface_add_del_address_reply
#define defined_vapi_msg_sw_interface_add_del_address_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_add_del_address_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_add_del_address_reply payload;
} vapi_msg_sw_interface_add_del_address_reply;

static inline void vapi_msg_sw_interface_add_del_address_reply_payload_hton(vapi_payload_sw_interface_add_del_address_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_add_del_address_reply_payload_ntoh(vapi_payload_sw_interface_add_del_address_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_add_del_address_reply_hton(vapi_msg_sw_interface_add_del_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_address_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_add_del_address_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_add_del_address_reply_ntoh(vapi_msg_sw_interface_add_del_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_address_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_add_del_address_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_add_del_address_reply_msg_size(vapi_msg_sw_interface_add_del_address_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_add_del_address_reply()
{
  static const char name[] = "sw_interface_add_del_address_reply";
  static const char name_with_crc[] = "sw_interface_add_del_address_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_add_del_address_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_add_del_address_reply, payload),
    sizeof(vapi_msg_sw_interface_add_del_address_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_address_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_address_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_add_del_address_reply = vapi_register_msg(&__vapi_metadata_sw_interface_add_del_address_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_add_del_address_reply", vapi_msg_id_sw_interface_add_del_address_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_add_del_address_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_add_del_address_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_add_del_address_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_add_del_address
#define defined_vapi_msg_sw_interface_add_del_address
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool is_add;
  bool del_all;
  vapi_type_address_with_prefix prefix; 
} vapi_payload_sw_interface_add_del_address;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_add_del_address payload;
} vapi_msg_sw_interface_add_del_address;

static inline void vapi_msg_sw_interface_add_del_address_payload_hton(vapi_payload_sw_interface_add_del_address *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_add_del_address_payload_ntoh(vapi_payload_sw_interface_add_del_address *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_add_del_address_hton(vapi_msg_sw_interface_add_del_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_address'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_add_del_address_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_add_del_address_ntoh(vapi_msg_sw_interface_add_del_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_address'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_add_del_address_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_add_del_address_msg_size(vapi_msg_sw_interface_add_del_address *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_add_del_address* vapi_alloc_sw_interface_add_del_address(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_add_del_address *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_add_del_address);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_add_del_address*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_add_del_address);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_add_del_address(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_add_del_address *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_add_del_address_reply *reply),
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
  vapi_msg_sw_interface_add_del_address_hton(msg);
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
    vapi_msg_sw_interface_add_del_address_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_add_del_address()
{
  static const char name[] = "sw_interface_add_del_address";
  static const char name_with_crc[] = "sw_interface_add_del_address_5803d5c4";
  static vapi_message_desc_t __vapi_metadata_sw_interface_add_del_address = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_add_del_address, payload),
    sizeof(vapi_msg_sw_interface_add_del_address),
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_address_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_address_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_add_del_address = vapi_register_msg(&__vapi_metadata_sw_interface_add_del_address);
  VAPI_DBG("Assigned msg id %d to sw_interface_add_del_address", vapi_msg_id_sw_interface_add_del_address);
}
#endif

#ifndef defined_vapi_msg_sw_interface_address_replace_begin_reply
#define defined_vapi_msg_sw_interface_address_replace_begin_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_address_replace_begin_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_address_replace_begin_reply payload;
} vapi_msg_sw_interface_address_replace_begin_reply;

static inline void vapi_msg_sw_interface_address_replace_begin_reply_payload_hton(vapi_payload_sw_interface_address_replace_begin_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_address_replace_begin_reply_payload_ntoh(vapi_payload_sw_interface_address_replace_begin_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_address_replace_begin_reply_hton(vapi_msg_sw_interface_address_replace_begin_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_begin_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_address_replace_begin_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_address_replace_begin_reply_ntoh(vapi_msg_sw_interface_address_replace_begin_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_begin_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_address_replace_begin_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_address_replace_begin_reply_msg_size(vapi_msg_sw_interface_address_replace_begin_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_address_replace_begin_reply()
{
  static const char name[] = "sw_interface_address_replace_begin_reply";
  static const char name_with_crc[] = "sw_interface_address_replace_begin_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_address_replace_begin_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_address_replace_begin_reply, payload),
    sizeof(vapi_msg_sw_interface_address_replace_begin_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_begin_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_begin_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_address_replace_begin_reply = vapi_register_msg(&__vapi_metadata_sw_interface_address_replace_begin_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_address_replace_begin_reply", vapi_msg_id_sw_interface_address_replace_begin_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_address_replace_begin_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_address_replace_begin_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_address_replace_begin_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_address_replace_begin
#define defined_vapi_msg_sw_interface_address_replace_begin
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_interface_address_replace_begin;

static inline void vapi_msg_sw_interface_address_replace_begin_hton(vapi_msg_sw_interface_address_replace_begin *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_begin'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_interface_address_replace_begin_ntoh(vapi_msg_sw_interface_address_replace_begin *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_begin'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_interface_address_replace_begin_msg_size(vapi_msg_sw_interface_address_replace_begin *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_address_replace_begin* vapi_alloc_sw_interface_address_replace_begin(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_address_replace_begin *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_address_replace_begin);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_address_replace_begin*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_address_replace_begin);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_address_replace_begin(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_address_replace_begin *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_address_replace_begin_reply *reply),
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
  vapi_msg_sw_interface_address_replace_begin_hton(msg);
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
    vapi_msg_sw_interface_address_replace_begin_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_address_replace_begin()
{
  static const char name[] = "sw_interface_address_replace_begin";
  static const char name_with_crc[] = "sw_interface_address_replace_begin_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_interface_address_replace_begin = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_interface_address_replace_begin),
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_begin_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_begin_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_address_replace_begin = vapi_register_msg(&__vapi_metadata_sw_interface_address_replace_begin);
  VAPI_DBG("Assigned msg id %d to sw_interface_address_replace_begin", vapi_msg_id_sw_interface_address_replace_begin);
}
#endif

#ifndef defined_vapi_msg_sw_interface_address_replace_end_reply
#define defined_vapi_msg_sw_interface_address_replace_end_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_address_replace_end_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_address_replace_end_reply payload;
} vapi_msg_sw_interface_address_replace_end_reply;

static inline void vapi_msg_sw_interface_address_replace_end_reply_payload_hton(vapi_payload_sw_interface_address_replace_end_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_address_replace_end_reply_payload_ntoh(vapi_payload_sw_interface_address_replace_end_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_address_replace_end_reply_hton(vapi_msg_sw_interface_address_replace_end_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_end_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_address_replace_end_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_address_replace_end_reply_ntoh(vapi_msg_sw_interface_address_replace_end_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_end_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_address_replace_end_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_address_replace_end_reply_msg_size(vapi_msg_sw_interface_address_replace_end_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_address_replace_end_reply()
{
  static const char name[] = "sw_interface_address_replace_end_reply";
  static const char name_with_crc[] = "sw_interface_address_replace_end_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_address_replace_end_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_address_replace_end_reply, payload),
    sizeof(vapi_msg_sw_interface_address_replace_end_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_end_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_end_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_address_replace_end_reply = vapi_register_msg(&__vapi_metadata_sw_interface_address_replace_end_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_address_replace_end_reply", vapi_msg_id_sw_interface_address_replace_end_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_address_replace_end_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_address_replace_end_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_address_replace_end_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_address_replace_end
#define defined_vapi_msg_sw_interface_address_replace_end
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sw_interface_address_replace_end;

static inline void vapi_msg_sw_interface_address_replace_end_hton(vapi_msg_sw_interface_address_replace_end *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_end'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sw_interface_address_replace_end_ntoh(vapi_msg_sw_interface_address_replace_end *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_address_replace_end'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sw_interface_address_replace_end_msg_size(vapi_msg_sw_interface_address_replace_end *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_address_replace_end* vapi_alloc_sw_interface_address_replace_end(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_address_replace_end *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_address_replace_end);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_address_replace_end*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_address_replace_end);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_address_replace_end(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_address_replace_end *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_address_replace_end_reply *reply),
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
  vapi_msg_sw_interface_address_replace_end_hton(msg);
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
    vapi_msg_sw_interface_address_replace_end_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_address_replace_end()
{
  static const char name[] = "sw_interface_address_replace_end";
  static const char name_with_crc[] = "sw_interface_address_replace_end_51077d14";
  static vapi_message_desc_t __vapi_metadata_sw_interface_address_replace_end = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sw_interface_address_replace_end),
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_end_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_address_replace_end_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_address_replace_end = vapi_register_msg(&__vapi_metadata_sw_interface_address_replace_end);
  VAPI_DBG("Assigned msg id %d to sw_interface_address_replace_end", vapi_msg_id_sw_interface_address_replace_end);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_table_reply
#define defined_vapi_msg_sw_interface_set_table_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_table_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_table_reply payload;
} vapi_msg_sw_interface_set_table_reply;

static inline void vapi_msg_sw_interface_set_table_reply_payload_hton(vapi_payload_sw_interface_set_table_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_table_reply_payload_ntoh(vapi_payload_sw_interface_set_table_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_table_reply_hton(vapi_msg_sw_interface_set_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_table_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_table_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_table_reply_ntoh(vapi_msg_sw_interface_set_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_table_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_table_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_table_reply_msg_size(vapi_msg_sw_interface_set_table_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_table_reply()
{
  static const char name[] = "sw_interface_set_table_reply";
  static const char name_with_crc[] = "sw_interface_set_table_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_table_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_table_reply, payload),
    sizeof(vapi_msg_sw_interface_set_table_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_table_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_table_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_table_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_table_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_table_reply", vapi_msg_id_sw_interface_set_table_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_table_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_table_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_table_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_table
#define defined_vapi_msg_sw_interface_set_table
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool is_ipv6;
  u32 vrf_id; 
} vapi_payload_sw_interface_set_table;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_table payload;
} vapi_msg_sw_interface_set_table;

static inline void vapi_msg_sw_interface_set_table_payload_hton(vapi_payload_sw_interface_set_table *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_sw_interface_set_table_payload_ntoh(vapi_payload_sw_interface_set_table *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_sw_interface_set_table_hton(vapi_msg_sw_interface_set_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_table'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_table_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_table_ntoh(vapi_msg_sw_interface_set_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_table'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_table_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_table_msg_size(vapi_msg_sw_interface_set_table *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_table* vapi_alloc_sw_interface_set_table(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_table *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_table);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_table*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_table);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_table(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_table *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_table_reply *reply),
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
  vapi_msg_sw_interface_set_table_hton(msg);
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
    vapi_msg_sw_interface_set_table_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_table()
{
  static const char name[] = "sw_interface_set_table";
  static const char name_with_crc[] = "sw_interface_set_table_df42a577";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_table = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_table, payload),
    sizeof(vapi_msg_sw_interface_set_table),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_table_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_table_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_table = vapi_register_msg(&__vapi_metadata_sw_interface_set_table);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_table", vapi_msg_id_sw_interface_set_table);
}
#endif

#ifndef defined_vapi_msg_sw_interface_get_table_reply
#define defined_vapi_msg_sw_interface_get_table_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 vrf_id; 
} vapi_payload_sw_interface_get_table_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_get_table_reply payload;
} vapi_msg_sw_interface_get_table_reply;

static inline void vapi_msg_sw_interface_get_table_reply_payload_hton(vapi_payload_sw_interface_get_table_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_sw_interface_get_table_reply_payload_ntoh(vapi_payload_sw_interface_get_table_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_sw_interface_get_table_reply_hton(vapi_msg_sw_interface_get_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_table_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_get_table_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_get_table_reply_ntoh(vapi_msg_sw_interface_get_table_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_table_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_get_table_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_get_table_reply_msg_size(vapi_msg_sw_interface_get_table_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_get_table_reply()
{
  static const char name[] = "sw_interface_get_table_reply";
  static const char name_with_crc[] = "sw_interface_get_table_reply_a6eb0109";
  static vapi_message_desc_t __vapi_metadata_sw_interface_get_table_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_get_table_reply, payload),
    sizeof(vapi_msg_sw_interface_get_table_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_get_table_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_get_table_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_get_table_reply = vapi_register_msg(&__vapi_metadata_sw_interface_get_table_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_get_table_reply", vapi_msg_id_sw_interface_get_table_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_get_table_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_get_table_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_get_table_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_get_table
#define defined_vapi_msg_sw_interface_get_table
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool is_ipv6; 
} vapi_payload_sw_interface_get_table;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_get_table payload;
} vapi_msg_sw_interface_get_table;

static inline void vapi_msg_sw_interface_get_table_payload_hton(vapi_payload_sw_interface_get_table *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_get_table_payload_ntoh(vapi_payload_sw_interface_get_table *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_get_table_hton(vapi_msg_sw_interface_get_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_table'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_get_table_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_get_table_ntoh(vapi_msg_sw_interface_get_table *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_table'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_get_table_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_get_table_msg_size(vapi_msg_sw_interface_get_table *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_get_table* vapi_alloc_sw_interface_get_table(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_get_table *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_get_table);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_get_table*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_get_table);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_get_table(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_get_table *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_get_table_reply *reply),
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
  vapi_msg_sw_interface_get_table_hton(msg);
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
    vapi_msg_sw_interface_get_table_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_get_table()
{
  static const char name[] = "sw_interface_get_table";
  static const char name_with_crc[] = "sw_interface_get_table_2d033de4";
  static vapi_message_desc_t __vapi_metadata_sw_interface_get_table = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_get_table, payload),
    sizeof(vapi_msg_sw_interface_get_table),
    (generic_swap_fn_t)vapi_msg_sw_interface_get_table_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_get_table_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_get_table = vapi_register_msg(&__vapi_metadata_sw_interface_get_table);
  VAPI_DBG("Assigned msg id %d to sw_interface_get_table", vapi_msg_id_sw_interface_get_table);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_unnumbered_reply
#define defined_vapi_msg_sw_interface_set_unnumbered_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_unnumbered_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_unnumbered_reply payload;
} vapi_msg_sw_interface_set_unnumbered_reply;

static inline void vapi_msg_sw_interface_set_unnumbered_reply_payload_hton(vapi_payload_sw_interface_set_unnumbered_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_unnumbered_reply_payload_ntoh(vapi_payload_sw_interface_set_unnumbered_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_unnumbered_reply_hton(vapi_msg_sw_interface_set_unnumbered_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_unnumbered_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_unnumbered_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_unnumbered_reply_ntoh(vapi_msg_sw_interface_set_unnumbered_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_unnumbered_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_unnumbered_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_unnumbered_reply_msg_size(vapi_msg_sw_interface_set_unnumbered_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_unnumbered_reply()
{
  static const char name[] = "sw_interface_set_unnumbered_reply";
  static const char name_with_crc[] = "sw_interface_set_unnumbered_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_unnumbered_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_unnumbered_reply, payload),
    sizeof(vapi_msg_sw_interface_set_unnumbered_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_unnumbered_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_unnumbered_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_unnumbered_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_unnumbered_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_unnumbered_reply", vapi_msg_id_sw_interface_set_unnumbered_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_unnumbered_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_unnumbered_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_unnumbered_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_unnumbered
#define defined_vapi_msg_sw_interface_set_unnumbered
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  vapi_type_interface_index unnumbered_sw_if_index;
  bool is_add; 
} vapi_payload_sw_interface_set_unnumbered;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_unnumbered payload;
} vapi_msg_sw_interface_set_unnumbered;

static inline void vapi_msg_sw_interface_set_unnumbered_payload_hton(vapi_payload_sw_interface_set_unnumbered *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->unnumbered_sw_if_index = htobe32(payload->unnumbered_sw_if_index);
}

static inline void vapi_msg_sw_interface_set_unnumbered_payload_ntoh(vapi_payload_sw_interface_set_unnumbered *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->unnumbered_sw_if_index = be32toh(payload->unnumbered_sw_if_index);
}

static inline void vapi_msg_sw_interface_set_unnumbered_hton(vapi_msg_sw_interface_set_unnumbered *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_unnumbered'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_unnumbered_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_unnumbered_ntoh(vapi_msg_sw_interface_set_unnumbered *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_unnumbered'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_unnumbered_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_unnumbered_msg_size(vapi_msg_sw_interface_set_unnumbered *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_unnumbered* vapi_alloc_sw_interface_set_unnumbered(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_unnumbered *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_unnumbered);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_unnumbered*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_unnumbered);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_unnumbered(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_unnumbered *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_unnumbered_reply *reply),
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
  vapi_msg_sw_interface_set_unnumbered_hton(msg);
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
    vapi_msg_sw_interface_set_unnumbered_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_unnumbered()
{
  static const char name[] = "sw_interface_set_unnumbered";
  static const char name_with_crc[] = "sw_interface_set_unnumbered_938ef33b";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_unnumbered = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_unnumbered, payload),
    sizeof(vapi_msg_sw_interface_set_unnumbered),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_unnumbered_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_unnumbered_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_unnumbered = vapi_register_msg(&__vapi_metadata_sw_interface_set_unnumbered);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_unnumbered", vapi_msg_id_sw_interface_set_unnumbered);
}
#endif

#ifndef defined_vapi_msg_sw_interface_clear_stats_reply
#define defined_vapi_msg_sw_interface_clear_stats_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_clear_stats_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_clear_stats_reply payload;
} vapi_msg_sw_interface_clear_stats_reply;

static inline void vapi_msg_sw_interface_clear_stats_reply_payload_hton(vapi_payload_sw_interface_clear_stats_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_clear_stats_reply_payload_ntoh(vapi_payload_sw_interface_clear_stats_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_clear_stats_reply_hton(vapi_msg_sw_interface_clear_stats_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_clear_stats_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_clear_stats_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_clear_stats_reply_ntoh(vapi_msg_sw_interface_clear_stats_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_clear_stats_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_clear_stats_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_clear_stats_reply_msg_size(vapi_msg_sw_interface_clear_stats_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_clear_stats_reply()
{
  static const char name[] = "sw_interface_clear_stats_reply";
  static const char name_with_crc[] = "sw_interface_clear_stats_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_clear_stats_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_clear_stats_reply, payload),
    sizeof(vapi_msg_sw_interface_clear_stats_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_clear_stats_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_clear_stats_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_clear_stats_reply = vapi_register_msg(&__vapi_metadata_sw_interface_clear_stats_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_clear_stats_reply", vapi_msg_id_sw_interface_clear_stats_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_clear_stats_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_clear_stats_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_clear_stats_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_clear_stats
#define defined_vapi_msg_sw_interface_clear_stats
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index; 
} vapi_payload_sw_interface_clear_stats;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_clear_stats payload;
} vapi_msg_sw_interface_clear_stats;

static inline void vapi_msg_sw_interface_clear_stats_payload_hton(vapi_payload_sw_interface_clear_stats *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_clear_stats_payload_ntoh(vapi_payload_sw_interface_clear_stats *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_clear_stats_hton(vapi_msg_sw_interface_clear_stats *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_clear_stats'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_clear_stats_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_clear_stats_ntoh(vapi_msg_sw_interface_clear_stats *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_clear_stats'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_clear_stats_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_clear_stats_msg_size(vapi_msg_sw_interface_clear_stats *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_clear_stats* vapi_alloc_sw_interface_clear_stats(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_clear_stats *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_clear_stats);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_clear_stats*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_clear_stats);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_clear_stats(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_clear_stats *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_clear_stats_reply *reply),
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
  vapi_msg_sw_interface_clear_stats_hton(msg);
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
    vapi_msg_sw_interface_clear_stats_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_clear_stats()
{
  static const char name[] = "sw_interface_clear_stats";
  static const char name_with_crc[] = "sw_interface_clear_stats_f9e6675e";
  static vapi_message_desc_t __vapi_metadata_sw_interface_clear_stats = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_clear_stats, payload),
    sizeof(vapi_msg_sw_interface_clear_stats),
    (generic_swap_fn_t)vapi_msg_sw_interface_clear_stats_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_clear_stats_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_clear_stats = vapi_register_msg(&__vapi_metadata_sw_interface_clear_stats);
  VAPI_DBG("Assigned msg id %d to sw_interface_clear_stats", vapi_msg_id_sw_interface_clear_stats);
}
#endif

#ifndef defined_vapi_msg_sw_interface_tag_add_del_reply
#define defined_vapi_msg_sw_interface_tag_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_tag_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_tag_add_del_reply payload;
} vapi_msg_sw_interface_tag_add_del_reply;

static inline void vapi_msg_sw_interface_tag_add_del_reply_payload_hton(vapi_payload_sw_interface_tag_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_tag_add_del_reply_payload_ntoh(vapi_payload_sw_interface_tag_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_tag_add_del_reply_hton(vapi_msg_sw_interface_tag_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tag_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_tag_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_tag_add_del_reply_ntoh(vapi_msg_sw_interface_tag_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tag_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_tag_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_tag_add_del_reply_msg_size(vapi_msg_sw_interface_tag_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_tag_add_del_reply()
{
  static const char name[] = "sw_interface_tag_add_del_reply";
  static const char name_with_crc[] = "sw_interface_tag_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_tag_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_tag_add_del_reply, payload),
    sizeof(vapi_msg_sw_interface_tag_add_del_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_tag_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_tag_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_tag_add_del_reply = vapi_register_msg(&__vapi_metadata_sw_interface_tag_add_del_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_tag_add_del_reply", vapi_msg_id_sw_interface_tag_add_del_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_tag_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_tag_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_tag_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_tag_add_del
#define defined_vapi_msg_sw_interface_tag_add_del
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_interface_index sw_if_index;
  u8 tag[64]; 
} vapi_payload_sw_interface_tag_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_tag_add_del payload;
} vapi_msg_sw_interface_tag_add_del;

static inline void vapi_msg_sw_interface_tag_add_del_payload_hton(vapi_payload_sw_interface_tag_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_tag_add_del_payload_ntoh(vapi_payload_sw_interface_tag_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_tag_add_del_hton(vapi_msg_sw_interface_tag_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tag_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_tag_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_tag_add_del_ntoh(vapi_msg_sw_interface_tag_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_tag_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_tag_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_tag_add_del_msg_size(vapi_msg_sw_interface_tag_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_tag_add_del* vapi_alloc_sw_interface_tag_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_tag_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_tag_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_tag_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_tag_add_del);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_tag_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_tag_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_tag_add_del_reply *reply),
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
  vapi_msg_sw_interface_tag_add_del_hton(msg);
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
    vapi_msg_sw_interface_tag_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_tag_add_del()
{
  static const char name[] = "sw_interface_tag_add_del";
  static const char name_with_crc[] = "sw_interface_tag_add_del_426f8bc1";
  static vapi_message_desc_t __vapi_metadata_sw_interface_tag_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_tag_add_del, payload),
    sizeof(vapi_msg_sw_interface_tag_add_del),
    (generic_swap_fn_t)vapi_msg_sw_interface_tag_add_del_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_tag_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_tag_add_del = vapi_register_msg(&__vapi_metadata_sw_interface_tag_add_del);
  VAPI_DBG("Assigned msg id %d to sw_interface_tag_add_del", vapi_msg_id_sw_interface_tag_add_del);
}
#endif

#ifndef defined_vapi_msg_sw_interface_add_del_mac_address_reply
#define defined_vapi_msg_sw_interface_add_del_mac_address_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_add_del_mac_address_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_add_del_mac_address_reply payload;
} vapi_msg_sw_interface_add_del_mac_address_reply;

static inline void vapi_msg_sw_interface_add_del_mac_address_reply_payload_hton(vapi_payload_sw_interface_add_del_mac_address_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_add_del_mac_address_reply_payload_ntoh(vapi_payload_sw_interface_add_del_mac_address_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_add_del_mac_address_reply_hton(vapi_msg_sw_interface_add_del_mac_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_mac_address_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_add_del_mac_address_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_add_del_mac_address_reply_ntoh(vapi_msg_sw_interface_add_del_mac_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_mac_address_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_add_del_mac_address_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_add_del_mac_address_reply_msg_size(vapi_msg_sw_interface_add_del_mac_address_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_add_del_mac_address_reply()
{
  static const char name[] = "sw_interface_add_del_mac_address_reply";
  static const char name_with_crc[] = "sw_interface_add_del_mac_address_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_add_del_mac_address_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_add_del_mac_address_reply, payload),
    sizeof(vapi_msg_sw_interface_add_del_mac_address_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_mac_address_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_mac_address_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_add_del_mac_address_reply = vapi_register_msg(&__vapi_metadata_sw_interface_add_del_mac_address_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_add_del_mac_address_reply", vapi_msg_id_sw_interface_add_del_mac_address_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_add_del_mac_address_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_add_del_mac_address_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_add_del_mac_address_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_add_del_mac_address
#define defined_vapi_msg_sw_interface_add_del_mac_address
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  vapi_type_mac_address addr;
  u8 is_add; 
} vapi_payload_sw_interface_add_del_mac_address;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_add_del_mac_address payload;
} vapi_msg_sw_interface_add_del_mac_address;

static inline void vapi_msg_sw_interface_add_del_mac_address_payload_hton(vapi_payload_sw_interface_add_del_mac_address *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_add_del_mac_address_payload_ntoh(vapi_payload_sw_interface_add_del_mac_address *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_add_del_mac_address_hton(vapi_msg_sw_interface_add_del_mac_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_mac_address'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_add_del_mac_address_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_add_del_mac_address_ntoh(vapi_msg_sw_interface_add_del_mac_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_add_del_mac_address'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_add_del_mac_address_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_add_del_mac_address_msg_size(vapi_msg_sw_interface_add_del_mac_address *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_add_del_mac_address* vapi_alloc_sw_interface_add_del_mac_address(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_add_del_mac_address *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_add_del_mac_address);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_add_del_mac_address*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_add_del_mac_address);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_add_del_mac_address(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_add_del_mac_address *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_add_del_mac_address_reply *reply),
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
  vapi_msg_sw_interface_add_del_mac_address_hton(msg);
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
    vapi_msg_sw_interface_add_del_mac_address_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_add_del_mac_address()
{
  static const char name[] = "sw_interface_add_del_mac_address";
  static const char name_with_crc[] = "sw_interface_add_del_mac_address_638bb9f4";
  static vapi_message_desc_t __vapi_metadata_sw_interface_add_del_mac_address = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_add_del_mac_address, payload),
    sizeof(vapi_msg_sw_interface_add_del_mac_address),
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_mac_address_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_add_del_mac_address_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_add_del_mac_address = vapi_register_msg(&__vapi_metadata_sw_interface_add_del_mac_address);
  VAPI_DBG("Assigned msg id %d to sw_interface_add_del_mac_address", vapi_msg_id_sw_interface_add_del_mac_address);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_mac_address_reply
#define defined_vapi_msg_sw_interface_set_mac_address_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_mac_address_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_mac_address_reply payload;
} vapi_msg_sw_interface_set_mac_address_reply;

static inline void vapi_msg_sw_interface_set_mac_address_reply_payload_hton(vapi_payload_sw_interface_set_mac_address_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_mac_address_reply_payload_ntoh(vapi_payload_sw_interface_set_mac_address_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_mac_address_reply_hton(vapi_msg_sw_interface_set_mac_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mac_address_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_mac_address_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_mac_address_reply_ntoh(vapi_msg_sw_interface_set_mac_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mac_address_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_mac_address_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_mac_address_reply_msg_size(vapi_msg_sw_interface_set_mac_address_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_mac_address_reply()
{
  static const char name[] = "sw_interface_set_mac_address_reply";
  static const char name_with_crc[] = "sw_interface_set_mac_address_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_mac_address_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_mac_address_reply, payload),
    sizeof(vapi_msg_sw_interface_set_mac_address_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mac_address_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mac_address_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_mac_address_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_mac_address_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_mac_address_reply", vapi_msg_id_sw_interface_set_mac_address_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_mac_address_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_mac_address_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_mac_address_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_mac_address
#define defined_vapi_msg_sw_interface_set_mac_address
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  vapi_type_mac_address mac_address; 
} vapi_payload_sw_interface_set_mac_address;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_mac_address payload;
} vapi_msg_sw_interface_set_mac_address;

static inline void vapi_msg_sw_interface_set_mac_address_payload_hton(vapi_payload_sw_interface_set_mac_address *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_mac_address_payload_ntoh(vapi_payload_sw_interface_set_mac_address *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_mac_address_hton(vapi_msg_sw_interface_set_mac_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mac_address'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_mac_address_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_mac_address_ntoh(vapi_msg_sw_interface_set_mac_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mac_address'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_mac_address_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_mac_address_msg_size(vapi_msg_sw_interface_set_mac_address *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_mac_address* vapi_alloc_sw_interface_set_mac_address(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_mac_address *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_mac_address);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_mac_address*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_mac_address);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_mac_address(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_mac_address *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_mac_address_reply *reply),
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
  vapi_msg_sw_interface_set_mac_address_hton(msg);
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
    vapi_msg_sw_interface_set_mac_address_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_mac_address()
{
  static const char name[] = "sw_interface_set_mac_address";
  static const char name_with_crc[] = "sw_interface_set_mac_address_6aca746a";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_mac_address = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_mac_address, payload),
    sizeof(vapi_msg_sw_interface_set_mac_address),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mac_address_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mac_address_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_mac_address = vapi_register_msg(&__vapi_metadata_sw_interface_set_mac_address);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_mac_address", vapi_msg_id_sw_interface_set_mac_address);
}
#endif

#ifndef defined_vapi_msg_sw_interface_get_mac_address_reply
#define defined_vapi_msg_sw_interface_get_mac_address_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_mac_address mac_address; 
} vapi_payload_sw_interface_get_mac_address_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_get_mac_address_reply payload;
} vapi_msg_sw_interface_get_mac_address_reply;

static inline void vapi_msg_sw_interface_get_mac_address_reply_payload_hton(vapi_payload_sw_interface_get_mac_address_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_get_mac_address_reply_payload_ntoh(vapi_payload_sw_interface_get_mac_address_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_get_mac_address_reply_hton(vapi_msg_sw_interface_get_mac_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_mac_address_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_get_mac_address_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_get_mac_address_reply_ntoh(vapi_msg_sw_interface_get_mac_address_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_mac_address_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_get_mac_address_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_get_mac_address_reply_msg_size(vapi_msg_sw_interface_get_mac_address_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_get_mac_address_reply()
{
  static const char name[] = "sw_interface_get_mac_address_reply";
  static const char name_with_crc[] = "sw_interface_get_mac_address_reply_40ef2c08";
  static vapi_message_desc_t __vapi_metadata_sw_interface_get_mac_address_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_get_mac_address_reply, payload),
    sizeof(vapi_msg_sw_interface_get_mac_address_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_get_mac_address_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_get_mac_address_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_get_mac_address_reply = vapi_register_msg(&__vapi_metadata_sw_interface_get_mac_address_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_get_mac_address_reply", vapi_msg_id_sw_interface_get_mac_address_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_get_mac_address_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_get_mac_address_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_get_mac_address_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_get_mac_address
#define defined_vapi_msg_sw_interface_get_mac_address
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index; 
} vapi_payload_sw_interface_get_mac_address;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_get_mac_address payload;
} vapi_msg_sw_interface_get_mac_address;

static inline void vapi_msg_sw_interface_get_mac_address_payload_hton(vapi_payload_sw_interface_get_mac_address *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_get_mac_address_payload_ntoh(vapi_payload_sw_interface_get_mac_address *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_get_mac_address_hton(vapi_msg_sw_interface_get_mac_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_mac_address'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_get_mac_address_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_get_mac_address_ntoh(vapi_msg_sw_interface_get_mac_address *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_get_mac_address'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_get_mac_address_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_get_mac_address_msg_size(vapi_msg_sw_interface_get_mac_address *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_get_mac_address* vapi_alloc_sw_interface_get_mac_address(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_get_mac_address *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_get_mac_address);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_get_mac_address*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_get_mac_address);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_get_mac_address(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_get_mac_address *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_get_mac_address_reply *reply),
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
  vapi_msg_sw_interface_get_mac_address_hton(msg);
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
    vapi_msg_sw_interface_get_mac_address_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_get_mac_address()
{
  static const char name[] = "sw_interface_get_mac_address";
  static const char name_with_crc[] = "sw_interface_get_mac_address_f9e6675e";
  static vapi_message_desc_t __vapi_metadata_sw_interface_get_mac_address = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_get_mac_address, payload),
    sizeof(vapi_msg_sw_interface_get_mac_address),
    (generic_swap_fn_t)vapi_msg_sw_interface_get_mac_address_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_get_mac_address_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_get_mac_address = vapi_register_msg(&__vapi_metadata_sw_interface_get_mac_address);
  VAPI_DBG("Assigned msg id %d to sw_interface_get_mac_address", vapi_msg_id_sw_interface_get_mac_address);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_rx_mode_reply
#define defined_vapi_msg_sw_interface_set_rx_mode_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_rx_mode_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_rx_mode_reply payload;
} vapi_msg_sw_interface_set_rx_mode_reply;

static inline void vapi_msg_sw_interface_set_rx_mode_reply_payload_hton(vapi_payload_sw_interface_set_rx_mode_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_rx_mode_reply_payload_ntoh(vapi_payload_sw_interface_set_rx_mode_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_rx_mode_reply_hton(vapi_msg_sw_interface_set_rx_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_mode_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_rx_mode_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_rx_mode_reply_ntoh(vapi_msg_sw_interface_set_rx_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_mode_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_rx_mode_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_rx_mode_reply_msg_size(vapi_msg_sw_interface_set_rx_mode_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_rx_mode_reply()
{
  static const char name[] = "sw_interface_set_rx_mode_reply";
  static const char name_with_crc[] = "sw_interface_set_rx_mode_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_rx_mode_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_rx_mode_reply, payload),
    sizeof(vapi_msg_sw_interface_set_rx_mode_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_mode_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_mode_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_rx_mode_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_rx_mode_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_rx_mode_reply", vapi_msg_id_sw_interface_set_rx_mode_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_rx_mode_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_rx_mode_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_rx_mode_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_rx_mode
#define defined_vapi_msg_sw_interface_set_rx_mode
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool queue_id_valid;
  u32 queue_id;
  vapi_enum_rx_mode mode; 
} vapi_payload_sw_interface_set_rx_mode;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_rx_mode payload;
} vapi_msg_sw_interface_set_rx_mode;

static inline void vapi_msg_sw_interface_set_rx_mode_payload_hton(vapi_payload_sw_interface_set_rx_mode *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->queue_id = htobe32(payload->queue_id);
  payload->mode = (vapi_enum_rx_mode)htobe32(payload->mode);
}

static inline void vapi_msg_sw_interface_set_rx_mode_payload_ntoh(vapi_payload_sw_interface_set_rx_mode *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->queue_id = be32toh(payload->queue_id);
  payload->mode = (vapi_enum_rx_mode)be32toh(payload->mode);
}

static inline void vapi_msg_sw_interface_set_rx_mode_hton(vapi_msg_sw_interface_set_rx_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_mode'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_rx_mode_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_rx_mode_ntoh(vapi_msg_sw_interface_set_rx_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_mode'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_rx_mode_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_rx_mode_msg_size(vapi_msg_sw_interface_set_rx_mode *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_rx_mode* vapi_alloc_sw_interface_set_rx_mode(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_rx_mode *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_rx_mode);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_rx_mode*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_rx_mode);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_rx_mode(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_rx_mode *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_rx_mode_reply *reply),
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
  vapi_msg_sw_interface_set_rx_mode_hton(msg);
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
    vapi_msg_sw_interface_set_rx_mode_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_rx_mode()
{
  static const char name[] = "sw_interface_set_rx_mode";
  static const char name_with_crc[] = "sw_interface_set_rx_mode_780f5cee";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_rx_mode = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_rx_mode, payload),
    sizeof(vapi_msg_sw_interface_set_rx_mode),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_mode_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_mode_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_rx_mode = vapi_register_msg(&__vapi_metadata_sw_interface_set_rx_mode);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_rx_mode", vapi_msg_id_sw_interface_set_rx_mode);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_rx_placement_reply
#define defined_vapi_msg_sw_interface_set_rx_placement_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_rx_placement_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_rx_placement_reply payload;
} vapi_msg_sw_interface_set_rx_placement_reply;

static inline void vapi_msg_sw_interface_set_rx_placement_reply_payload_hton(vapi_payload_sw_interface_set_rx_placement_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_rx_placement_reply_payload_ntoh(vapi_payload_sw_interface_set_rx_placement_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_rx_placement_reply_hton(vapi_msg_sw_interface_set_rx_placement_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_placement_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_rx_placement_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_rx_placement_reply_ntoh(vapi_msg_sw_interface_set_rx_placement_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_placement_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_rx_placement_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_rx_placement_reply_msg_size(vapi_msg_sw_interface_set_rx_placement_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_rx_placement_reply()
{
  static const char name[] = "sw_interface_set_rx_placement_reply";
  static const char name_with_crc[] = "sw_interface_set_rx_placement_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_rx_placement_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_rx_placement_reply, payload),
    sizeof(vapi_msg_sw_interface_set_rx_placement_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_placement_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_placement_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_rx_placement_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_rx_placement_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_rx_placement_reply", vapi_msg_id_sw_interface_set_rx_placement_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_rx_placement_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_rx_placement_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_rx_placement_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_rx_placement
#define defined_vapi_msg_sw_interface_set_rx_placement
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 queue_id;
  u32 worker_id;
  bool is_main; 
} vapi_payload_sw_interface_set_rx_placement;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_rx_placement payload;
} vapi_msg_sw_interface_set_rx_placement;

static inline void vapi_msg_sw_interface_set_rx_placement_payload_hton(vapi_payload_sw_interface_set_rx_placement *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->queue_id = htobe32(payload->queue_id);
  payload->worker_id = htobe32(payload->worker_id);
}

static inline void vapi_msg_sw_interface_set_rx_placement_payload_ntoh(vapi_payload_sw_interface_set_rx_placement *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->queue_id = be32toh(payload->queue_id);
  payload->worker_id = be32toh(payload->worker_id);
}

static inline void vapi_msg_sw_interface_set_rx_placement_hton(vapi_msg_sw_interface_set_rx_placement *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_placement'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_rx_placement_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_rx_placement_ntoh(vapi_msg_sw_interface_set_rx_placement *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_rx_placement'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_rx_placement_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_rx_placement_msg_size(vapi_msg_sw_interface_set_rx_placement *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_rx_placement* vapi_alloc_sw_interface_set_rx_placement(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_rx_placement *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_rx_placement);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_rx_placement*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_rx_placement);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_rx_placement(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_rx_placement *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_rx_placement_reply *reply),
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
  vapi_msg_sw_interface_set_rx_placement_hton(msg);
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
    vapi_msg_sw_interface_set_rx_placement_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_rx_placement()
{
  static const char name[] = "sw_interface_set_rx_placement";
  static const char name_with_crc[] = "sw_interface_set_rx_placement_db65f3c9";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_rx_placement = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_rx_placement, payload),
    sizeof(vapi_msg_sw_interface_set_rx_placement),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_placement_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_rx_placement_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_rx_placement = vapi_register_msg(&__vapi_metadata_sw_interface_set_rx_placement);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_rx_placement", vapi_msg_id_sw_interface_set_rx_placement);
}
#endif

#ifndef defined_vapi_msg_sw_interface_rx_placement_details
#define defined_vapi_msg_sw_interface_rx_placement_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 queue_id;
  u32 worker_id;
  vapi_enum_rx_mode mode; 
} vapi_payload_sw_interface_rx_placement_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_rx_placement_details payload;
} vapi_msg_sw_interface_rx_placement_details;

static inline void vapi_msg_sw_interface_rx_placement_details_payload_hton(vapi_payload_sw_interface_rx_placement_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->queue_id = htobe32(payload->queue_id);
  payload->worker_id = htobe32(payload->worker_id);
  payload->mode = (vapi_enum_rx_mode)htobe32(payload->mode);
}

static inline void vapi_msg_sw_interface_rx_placement_details_payload_ntoh(vapi_payload_sw_interface_rx_placement_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->queue_id = be32toh(payload->queue_id);
  payload->worker_id = be32toh(payload->worker_id);
  payload->mode = (vapi_enum_rx_mode)be32toh(payload->mode);
}

static inline void vapi_msg_sw_interface_rx_placement_details_hton(vapi_msg_sw_interface_rx_placement_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_rx_placement_details'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_rx_placement_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_rx_placement_details_ntoh(vapi_msg_sw_interface_rx_placement_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_rx_placement_details'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_rx_placement_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_rx_placement_details_msg_size(vapi_msg_sw_interface_rx_placement_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_rx_placement_details()
{
  static const char name[] = "sw_interface_rx_placement_details";
  static const char name_with_crc[] = "sw_interface_rx_placement_details_f6d7d024";
  static vapi_message_desc_t __vapi_metadata_sw_interface_rx_placement_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_rx_placement_details, payload),
    sizeof(vapi_msg_sw_interface_rx_placement_details),
    (generic_swap_fn_t)vapi_msg_sw_interface_rx_placement_details_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_rx_placement_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_rx_placement_details = vapi_register_msg(&__vapi_metadata_sw_interface_rx_placement_details);
  VAPI_DBG("Assigned msg id %d to sw_interface_rx_placement_details", vapi_msg_id_sw_interface_rx_placement_details);
}

static inline void vapi_set_vapi_msg_sw_interface_rx_placement_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_rx_placement_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_rx_placement_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_rx_placement_dump
#define defined_vapi_msg_sw_interface_rx_placement_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index; 
} vapi_payload_sw_interface_rx_placement_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_rx_placement_dump payload;
} vapi_msg_sw_interface_rx_placement_dump;

static inline void vapi_msg_sw_interface_rx_placement_dump_payload_hton(vapi_payload_sw_interface_rx_placement_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_rx_placement_dump_payload_ntoh(vapi_payload_sw_interface_rx_placement_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_rx_placement_dump_hton(vapi_msg_sw_interface_rx_placement_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_rx_placement_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_rx_placement_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_rx_placement_dump_ntoh(vapi_msg_sw_interface_rx_placement_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_rx_placement_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_rx_placement_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_rx_placement_dump_msg_size(vapi_msg_sw_interface_rx_placement_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_rx_placement_dump* vapi_alloc_sw_interface_rx_placement_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_rx_placement_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_rx_placement_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_rx_placement_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_rx_placement_dump);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_rx_placement_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_rx_placement_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_rx_placement_details *reply),
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
  vapi_msg_sw_interface_rx_placement_dump_hton(msg);
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
    vapi_msg_sw_interface_rx_placement_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_rx_placement_dump()
{
  static const char name[] = "sw_interface_rx_placement_dump";
  static const char name_with_crc[] = "sw_interface_rx_placement_dump_f9e6675e";
  static vapi_message_desc_t __vapi_metadata_sw_interface_rx_placement_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_rx_placement_dump, payload),
    sizeof(vapi_msg_sw_interface_rx_placement_dump),
    (generic_swap_fn_t)vapi_msg_sw_interface_rx_placement_dump_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_rx_placement_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_rx_placement_dump = vapi_register_msg(&__vapi_metadata_sw_interface_rx_placement_dump);
  VAPI_DBG("Assigned msg id %d to sw_interface_rx_placement_dump", vapi_msg_id_sw_interface_rx_placement_dump);
}
#endif

#ifndef defined_vapi_msg_interface_name_renumber_reply
#define defined_vapi_msg_interface_name_renumber_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_interface_name_renumber_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_interface_name_renumber_reply payload;
} vapi_msg_interface_name_renumber_reply;

static inline void vapi_msg_interface_name_renumber_reply_payload_hton(vapi_payload_interface_name_renumber_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_interface_name_renumber_reply_payload_ntoh(vapi_payload_interface_name_renumber_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_interface_name_renumber_reply_hton(vapi_msg_interface_name_renumber_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_interface_name_renumber_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_interface_name_renumber_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_interface_name_renumber_reply_ntoh(vapi_msg_interface_name_renumber_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_interface_name_renumber_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_interface_name_renumber_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_interface_name_renumber_reply_msg_size(vapi_msg_interface_name_renumber_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_interface_name_renumber_reply()
{
  static const char name[] = "interface_name_renumber_reply";
  static const char name_with_crc[] = "interface_name_renumber_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_interface_name_renumber_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_interface_name_renumber_reply, payload),
    sizeof(vapi_msg_interface_name_renumber_reply),
    (generic_swap_fn_t)vapi_msg_interface_name_renumber_reply_hton,
    (generic_swap_fn_t)vapi_msg_interface_name_renumber_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_interface_name_renumber_reply = vapi_register_msg(&__vapi_metadata_interface_name_renumber_reply);
  VAPI_DBG("Assigned msg id %d to interface_name_renumber_reply", vapi_msg_id_interface_name_renumber_reply);
}

static inline void vapi_set_vapi_msg_interface_name_renumber_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_interface_name_renumber_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_interface_name_renumber_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_interface_name_renumber
#define defined_vapi_msg_interface_name_renumber
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 new_show_dev_instance; 
} vapi_payload_interface_name_renumber;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_interface_name_renumber payload;
} vapi_msg_interface_name_renumber;

static inline void vapi_msg_interface_name_renumber_payload_hton(vapi_payload_interface_name_renumber *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->new_show_dev_instance = htobe32(payload->new_show_dev_instance);
}

static inline void vapi_msg_interface_name_renumber_payload_ntoh(vapi_payload_interface_name_renumber *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->new_show_dev_instance = be32toh(payload->new_show_dev_instance);
}

static inline void vapi_msg_interface_name_renumber_hton(vapi_msg_interface_name_renumber *msg)
{
  VAPI_DBG("Swapping `vapi_msg_interface_name_renumber'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_interface_name_renumber_payload_hton(&msg->payload);
}

static inline void vapi_msg_interface_name_renumber_ntoh(vapi_msg_interface_name_renumber *msg)
{
  VAPI_DBG("Swapping `vapi_msg_interface_name_renumber'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_interface_name_renumber_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_interface_name_renumber_msg_size(vapi_msg_interface_name_renumber *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_interface_name_renumber* vapi_alloc_interface_name_renumber(struct vapi_ctx_s *ctx)
{
  vapi_msg_interface_name_renumber *msg = NULL;
  const size_t size = sizeof(vapi_msg_interface_name_renumber);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_interface_name_renumber*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_interface_name_renumber);

  return msg;
}

static inline vapi_error_e vapi_interface_name_renumber(struct vapi_ctx_s *ctx,
  vapi_msg_interface_name_renumber *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_interface_name_renumber_reply *reply),
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
  vapi_msg_interface_name_renumber_hton(msg);
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
    vapi_msg_interface_name_renumber_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_interface_name_renumber()
{
  static const char name[] = "interface_name_renumber";
  static const char name_with_crc[] = "interface_name_renumber_2b8858b8";
  static vapi_message_desc_t __vapi_metadata_interface_name_renumber = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_interface_name_renumber, payload),
    sizeof(vapi_msg_interface_name_renumber),
    (generic_swap_fn_t)vapi_msg_interface_name_renumber_hton,
    (generic_swap_fn_t)vapi_msg_interface_name_renumber_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_interface_name_renumber = vapi_register_msg(&__vapi_metadata_interface_name_renumber);
  VAPI_DBG("Assigned msg id %d to interface_name_renumber", vapi_msg_id_interface_name_renumber);
}
#endif

#ifndef defined_vapi_msg_create_subif_reply
#define defined_vapi_msg_create_subif_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_create_subif_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_create_subif_reply payload;
} vapi_msg_create_subif_reply;

static inline void vapi_msg_create_subif_reply_payload_hton(vapi_payload_create_subif_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_create_subif_reply_payload_ntoh(vapi_payload_create_subif_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_create_subif_reply_hton(vapi_msg_create_subif_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_subif_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_create_subif_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_subif_reply_ntoh(vapi_msg_create_subif_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_subif_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_create_subif_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_subif_reply_msg_size(vapi_msg_create_subif_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_create_subif_reply()
{
  static const char name[] = "create_subif_reply";
  static const char name_with_crc[] = "create_subif_reply_5383d31f";
  static vapi_message_desc_t __vapi_metadata_create_subif_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_create_subif_reply, payload),
    sizeof(vapi_msg_create_subif_reply),
    (generic_swap_fn_t)vapi_msg_create_subif_reply_hton,
    (generic_swap_fn_t)vapi_msg_create_subif_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_subif_reply = vapi_register_msg(&__vapi_metadata_create_subif_reply);
  VAPI_DBG("Assigned msg id %d to create_subif_reply", vapi_msg_id_create_subif_reply);
}

static inline void vapi_set_vapi_msg_create_subif_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_create_subif_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_create_subif_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_create_subif
#define defined_vapi_msg_create_subif
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 sub_id;
  vapi_enum_sub_if_flags sub_if_flags;
  u16 outer_vlan_id;
  u16 inner_vlan_id; 
} vapi_payload_create_subif;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_create_subif payload;
} vapi_msg_create_subif;

static inline void vapi_msg_create_subif_payload_hton(vapi_payload_create_subif *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->sub_id = htobe32(payload->sub_id);
  payload->sub_if_flags = (vapi_enum_sub_if_flags)htobe32(payload->sub_if_flags);
  payload->outer_vlan_id = htobe16(payload->outer_vlan_id);
  payload->inner_vlan_id = htobe16(payload->inner_vlan_id);
}

static inline void vapi_msg_create_subif_payload_ntoh(vapi_payload_create_subif *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->sub_id = be32toh(payload->sub_id);
  payload->sub_if_flags = (vapi_enum_sub_if_flags)be32toh(payload->sub_if_flags);
  payload->outer_vlan_id = be16toh(payload->outer_vlan_id);
  payload->inner_vlan_id = be16toh(payload->inner_vlan_id);
}

static inline void vapi_msg_create_subif_hton(vapi_msg_create_subif *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_subif'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_create_subif_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_subif_ntoh(vapi_msg_create_subif *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_subif'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_create_subif_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_subif_msg_size(vapi_msg_create_subif *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_create_subif* vapi_alloc_create_subif(struct vapi_ctx_s *ctx)
{
  vapi_msg_create_subif *msg = NULL;
  const size_t size = sizeof(vapi_msg_create_subif);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_create_subif*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_create_subif);

  return msg;
}

static inline vapi_error_e vapi_create_subif(struct vapi_ctx_s *ctx,
  vapi_msg_create_subif *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_create_subif_reply *reply),
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
  vapi_msg_create_subif_hton(msg);
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
    vapi_msg_create_subif_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_create_subif()
{
  static const char name[] = "create_subif";
  static const char name_with_crc[] = "create_subif_cb371063";
  static vapi_message_desc_t __vapi_metadata_create_subif = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_create_subif, payload),
    sizeof(vapi_msg_create_subif),
    (generic_swap_fn_t)vapi_msg_create_subif_hton,
    (generic_swap_fn_t)vapi_msg_create_subif_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_subif = vapi_register_msg(&__vapi_metadata_create_subif);
  VAPI_DBG("Assigned msg id %d to create_subif", vapi_msg_id_create_subif);
}
#endif

#ifndef defined_vapi_msg_create_vlan_subif_reply
#define defined_vapi_msg_create_vlan_subif_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_create_vlan_subif_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_create_vlan_subif_reply payload;
} vapi_msg_create_vlan_subif_reply;

static inline void vapi_msg_create_vlan_subif_reply_payload_hton(vapi_payload_create_vlan_subif_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_create_vlan_subif_reply_payload_ntoh(vapi_payload_create_vlan_subif_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_create_vlan_subif_reply_hton(vapi_msg_create_vlan_subif_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vlan_subif_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_create_vlan_subif_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_vlan_subif_reply_ntoh(vapi_msg_create_vlan_subif_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vlan_subif_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_create_vlan_subif_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_vlan_subif_reply_msg_size(vapi_msg_create_vlan_subif_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_create_vlan_subif_reply()
{
  static const char name[] = "create_vlan_subif_reply";
  static const char name_with_crc[] = "create_vlan_subif_reply_5383d31f";
  static vapi_message_desc_t __vapi_metadata_create_vlan_subif_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_create_vlan_subif_reply, payload),
    sizeof(vapi_msg_create_vlan_subif_reply),
    (generic_swap_fn_t)vapi_msg_create_vlan_subif_reply_hton,
    (generic_swap_fn_t)vapi_msg_create_vlan_subif_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_vlan_subif_reply = vapi_register_msg(&__vapi_metadata_create_vlan_subif_reply);
  VAPI_DBG("Assigned msg id %d to create_vlan_subif_reply", vapi_msg_id_create_vlan_subif_reply);
}

static inline void vapi_set_vapi_msg_create_vlan_subif_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_create_vlan_subif_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_create_vlan_subif_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_create_vlan_subif
#define defined_vapi_msg_create_vlan_subif
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 vlan_id; 
} vapi_payload_create_vlan_subif;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_create_vlan_subif payload;
} vapi_msg_create_vlan_subif;

static inline void vapi_msg_create_vlan_subif_payload_hton(vapi_payload_create_vlan_subif *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->vlan_id = htobe32(payload->vlan_id);
}

static inline void vapi_msg_create_vlan_subif_payload_ntoh(vapi_payload_create_vlan_subif *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->vlan_id = be32toh(payload->vlan_id);
}

static inline void vapi_msg_create_vlan_subif_hton(vapi_msg_create_vlan_subif *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vlan_subif'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_create_vlan_subif_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_vlan_subif_ntoh(vapi_msg_create_vlan_subif *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_vlan_subif'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_create_vlan_subif_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_vlan_subif_msg_size(vapi_msg_create_vlan_subif *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_create_vlan_subif* vapi_alloc_create_vlan_subif(struct vapi_ctx_s *ctx)
{
  vapi_msg_create_vlan_subif *msg = NULL;
  const size_t size = sizeof(vapi_msg_create_vlan_subif);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_create_vlan_subif*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_create_vlan_subif);

  return msg;
}

static inline vapi_error_e vapi_create_vlan_subif(struct vapi_ctx_s *ctx,
  vapi_msg_create_vlan_subif *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_create_vlan_subif_reply *reply),
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
  vapi_msg_create_vlan_subif_hton(msg);
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
    vapi_msg_create_vlan_subif_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_create_vlan_subif()
{
  static const char name[] = "create_vlan_subif";
  static const char name_with_crc[] = "create_vlan_subif_af34ac8b";
  static vapi_message_desc_t __vapi_metadata_create_vlan_subif = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_create_vlan_subif, payload),
    sizeof(vapi_msg_create_vlan_subif),
    (generic_swap_fn_t)vapi_msg_create_vlan_subif_hton,
    (generic_swap_fn_t)vapi_msg_create_vlan_subif_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_vlan_subif = vapi_register_msg(&__vapi_metadata_create_vlan_subif);
  VAPI_DBG("Assigned msg id %d to create_vlan_subif", vapi_msg_id_create_vlan_subif);
}
#endif

#ifndef defined_vapi_msg_delete_subif_reply
#define defined_vapi_msg_delete_subif_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_delete_subif_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_delete_subif_reply payload;
} vapi_msg_delete_subif_reply;

static inline void vapi_msg_delete_subif_reply_payload_hton(vapi_payload_delete_subif_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_delete_subif_reply_payload_ntoh(vapi_payload_delete_subif_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_delete_subif_reply_hton(vapi_msg_delete_subif_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_subif_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_delete_subif_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_delete_subif_reply_ntoh(vapi_msg_delete_subif_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_subif_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_delete_subif_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_delete_subif_reply_msg_size(vapi_msg_delete_subif_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_delete_subif_reply()
{
  static const char name[] = "delete_subif_reply";
  static const char name_with_crc[] = "delete_subif_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_delete_subif_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_delete_subif_reply, payload),
    sizeof(vapi_msg_delete_subif_reply),
    (generic_swap_fn_t)vapi_msg_delete_subif_reply_hton,
    (generic_swap_fn_t)vapi_msg_delete_subif_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_delete_subif_reply = vapi_register_msg(&__vapi_metadata_delete_subif_reply);
  VAPI_DBG("Assigned msg id %d to delete_subif_reply", vapi_msg_id_delete_subif_reply);
}

static inline void vapi_set_vapi_msg_delete_subif_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_delete_subif_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_delete_subif_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_delete_subif
#define defined_vapi_msg_delete_subif
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index; 
} vapi_payload_delete_subif;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_delete_subif payload;
} vapi_msg_delete_subif;

static inline void vapi_msg_delete_subif_payload_hton(vapi_payload_delete_subif *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_delete_subif_payload_ntoh(vapi_payload_delete_subif *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_delete_subif_hton(vapi_msg_delete_subif *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_subif'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_delete_subif_payload_hton(&msg->payload);
}

static inline void vapi_msg_delete_subif_ntoh(vapi_msg_delete_subif *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_subif'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_delete_subif_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_delete_subif_msg_size(vapi_msg_delete_subif *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_delete_subif* vapi_alloc_delete_subif(struct vapi_ctx_s *ctx)
{
  vapi_msg_delete_subif *msg = NULL;
  const size_t size = sizeof(vapi_msg_delete_subif);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_delete_subif*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_delete_subif);

  return msg;
}

static inline vapi_error_e vapi_delete_subif(struct vapi_ctx_s *ctx,
  vapi_msg_delete_subif *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_delete_subif_reply *reply),
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
  vapi_msg_delete_subif_hton(msg);
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
    vapi_msg_delete_subif_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_delete_subif()
{
  static const char name[] = "delete_subif";
  static const char name_with_crc[] = "delete_subif_f9e6675e";
  static vapi_message_desc_t __vapi_metadata_delete_subif = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_delete_subif, payload),
    sizeof(vapi_msg_delete_subif),
    (generic_swap_fn_t)vapi_msg_delete_subif_hton,
    (generic_swap_fn_t)vapi_msg_delete_subif_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_delete_subif = vapi_register_msg(&__vapi_metadata_delete_subif);
  VAPI_DBG("Assigned msg id %d to delete_subif", vapi_msg_id_delete_subif);
}
#endif

#ifndef defined_vapi_msg_create_loopback_reply
#define defined_vapi_msg_create_loopback_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_create_loopback_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_create_loopback_reply payload;
} vapi_msg_create_loopback_reply;

static inline void vapi_msg_create_loopback_reply_payload_hton(vapi_payload_create_loopback_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_create_loopback_reply_payload_ntoh(vapi_payload_create_loopback_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_create_loopback_reply_hton(vapi_msg_create_loopback_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_create_loopback_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_loopback_reply_ntoh(vapi_msg_create_loopback_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_create_loopback_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_loopback_reply_msg_size(vapi_msg_create_loopback_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_create_loopback_reply()
{
  static const char name[] = "create_loopback_reply";
  static const char name_with_crc[] = "create_loopback_reply_5383d31f";
  static vapi_message_desc_t __vapi_metadata_create_loopback_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_create_loopback_reply, payload),
    sizeof(vapi_msg_create_loopback_reply),
    (generic_swap_fn_t)vapi_msg_create_loopback_reply_hton,
    (generic_swap_fn_t)vapi_msg_create_loopback_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_loopback_reply = vapi_register_msg(&__vapi_metadata_create_loopback_reply);
  VAPI_DBG("Assigned msg id %d to create_loopback_reply", vapi_msg_id_create_loopback_reply);
}

static inline void vapi_set_vapi_msg_create_loopback_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_create_loopback_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_create_loopback_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_create_loopback
#define defined_vapi_msg_create_loopback
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mac_address mac_address; 
} vapi_payload_create_loopback;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_create_loopback payload;
} vapi_msg_create_loopback;

static inline void vapi_msg_create_loopback_payload_hton(vapi_payload_create_loopback *payload)
{

}

static inline void vapi_msg_create_loopback_payload_ntoh(vapi_payload_create_loopback *payload)
{

}

static inline void vapi_msg_create_loopback_hton(vapi_msg_create_loopback *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_create_loopback_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_loopback_ntoh(vapi_msg_create_loopback *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_create_loopback_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_loopback_msg_size(vapi_msg_create_loopback *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_create_loopback* vapi_alloc_create_loopback(struct vapi_ctx_s *ctx)
{
  vapi_msg_create_loopback *msg = NULL;
  const size_t size = sizeof(vapi_msg_create_loopback);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_create_loopback*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_create_loopback);

  return msg;
}

static inline vapi_error_e vapi_create_loopback(struct vapi_ctx_s *ctx,
  vapi_msg_create_loopback *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_create_loopback_reply *reply),
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
  vapi_msg_create_loopback_hton(msg);
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
    vapi_msg_create_loopback_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_create_loopback()
{
  static const char name[] = "create_loopback";
  static const char name_with_crc[] = "create_loopback_42bb5d22";
  static vapi_message_desc_t __vapi_metadata_create_loopback = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_create_loopback, payload),
    sizeof(vapi_msg_create_loopback),
    (generic_swap_fn_t)vapi_msg_create_loopback_hton,
    (generic_swap_fn_t)vapi_msg_create_loopback_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_loopback = vapi_register_msg(&__vapi_metadata_create_loopback);
  VAPI_DBG("Assigned msg id %d to create_loopback", vapi_msg_id_create_loopback);
}
#endif

#ifndef defined_vapi_msg_create_loopback_instance_reply
#define defined_vapi_msg_create_loopback_instance_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_create_loopback_instance_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_create_loopback_instance_reply payload;
} vapi_msg_create_loopback_instance_reply;

static inline void vapi_msg_create_loopback_instance_reply_payload_hton(vapi_payload_create_loopback_instance_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_create_loopback_instance_reply_payload_ntoh(vapi_payload_create_loopback_instance_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_create_loopback_instance_reply_hton(vapi_msg_create_loopback_instance_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback_instance_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_create_loopback_instance_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_loopback_instance_reply_ntoh(vapi_msg_create_loopback_instance_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback_instance_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_create_loopback_instance_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_loopback_instance_reply_msg_size(vapi_msg_create_loopback_instance_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_create_loopback_instance_reply()
{
  static const char name[] = "create_loopback_instance_reply";
  static const char name_with_crc[] = "create_loopback_instance_reply_5383d31f";
  static vapi_message_desc_t __vapi_metadata_create_loopback_instance_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_create_loopback_instance_reply, payload),
    sizeof(vapi_msg_create_loopback_instance_reply),
    (generic_swap_fn_t)vapi_msg_create_loopback_instance_reply_hton,
    (generic_swap_fn_t)vapi_msg_create_loopback_instance_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_loopback_instance_reply = vapi_register_msg(&__vapi_metadata_create_loopback_instance_reply);
  VAPI_DBG("Assigned msg id %d to create_loopback_instance_reply", vapi_msg_id_create_loopback_instance_reply);
}

static inline void vapi_set_vapi_msg_create_loopback_instance_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_create_loopback_instance_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_create_loopback_instance_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_create_loopback_instance
#define defined_vapi_msg_create_loopback_instance
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mac_address mac_address;
  bool is_specified;
  u32 user_instance; 
} vapi_payload_create_loopback_instance;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_create_loopback_instance payload;
} vapi_msg_create_loopback_instance;

static inline void vapi_msg_create_loopback_instance_payload_hton(vapi_payload_create_loopback_instance *payload)
{
  payload->user_instance = htobe32(payload->user_instance);
}

static inline void vapi_msg_create_loopback_instance_payload_ntoh(vapi_payload_create_loopback_instance *payload)
{
  payload->user_instance = be32toh(payload->user_instance);
}

static inline void vapi_msg_create_loopback_instance_hton(vapi_msg_create_loopback_instance *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback_instance'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_create_loopback_instance_payload_hton(&msg->payload);
}

static inline void vapi_msg_create_loopback_instance_ntoh(vapi_msg_create_loopback_instance *msg)
{
  VAPI_DBG("Swapping `vapi_msg_create_loopback_instance'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_create_loopback_instance_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_create_loopback_instance_msg_size(vapi_msg_create_loopback_instance *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_create_loopback_instance* vapi_alloc_create_loopback_instance(struct vapi_ctx_s *ctx)
{
  vapi_msg_create_loopback_instance *msg = NULL;
  const size_t size = sizeof(vapi_msg_create_loopback_instance);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_create_loopback_instance*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_create_loopback_instance);

  return msg;
}

static inline vapi_error_e vapi_create_loopback_instance(struct vapi_ctx_s *ctx,
  vapi_msg_create_loopback_instance *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_create_loopback_instance_reply *reply),
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
  vapi_msg_create_loopback_instance_hton(msg);
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
    vapi_msg_create_loopback_instance_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_create_loopback_instance()
{
  static const char name[] = "create_loopback_instance";
  static const char name_with_crc[] = "create_loopback_instance_d36a3ee2";
  static vapi_message_desc_t __vapi_metadata_create_loopback_instance = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_create_loopback_instance, payload),
    sizeof(vapi_msg_create_loopback_instance),
    (generic_swap_fn_t)vapi_msg_create_loopback_instance_hton,
    (generic_swap_fn_t)vapi_msg_create_loopback_instance_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_create_loopback_instance = vapi_register_msg(&__vapi_metadata_create_loopback_instance);
  VAPI_DBG("Assigned msg id %d to create_loopback_instance", vapi_msg_id_create_loopback_instance);
}
#endif

#ifndef defined_vapi_msg_delete_loopback_reply
#define defined_vapi_msg_delete_loopback_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_delete_loopback_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_delete_loopback_reply payload;
} vapi_msg_delete_loopback_reply;

static inline void vapi_msg_delete_loopback_reply_payload_hton(vapi_payload_delete_loopback_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_delete_loopback_reply_payload_ntoh(vapi_payload_delete_loopback_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_delete_loopback_reply_hton(vapi_msg_delete_loopback_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_loopback_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_delete_loopback_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_delete_loopback_reply_ntoh(vapi_msg_delete_loopback_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_loopback_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_delete_loopback_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_delete_loopback_reply_msg_size(vapi_msg_delete_loopback_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_delete_loopback_reply()
{
  static const char name[] = "delete_loopback_reply";
  static const char name_with_crc[] = "delete_loopback_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_delete_loopback_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_delete_loopback_reply, payload),
    sizeof(vapi_msg_delete_loopback_reply),
    (generic_swap_fn_t)vapi_msg_delete_loopback_reply_hton,
    (generic_swap_fn_t)vapi_msg_delete_loopback_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_delete_loopback_reply = vapi_register_msg(&__vapi_metadata_delete_loopback_reply);
  VAPI_DBG("Assigned msg id %d to delete_loopback_reply", vapi_msg_id_delete_loopback_reply);
}

static inline void vapi_set_vapi_msg_delete_loopback_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_delete_loopback_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_delete_loopback_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_delete_loopback
#define defined_vapi_msg_delete_loopback
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index; 
} vapi_payload_delete_loopback;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_delete_loopback payload;
} vapi_msg_delete_loopback;

static inline void vapi_msg_delete_loopback_payload_hton(vapi_payload_delete_loopback *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_delete_loopback_payload_ntoh(vapi_payload_delete_loopback *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_delete_loopback_hton(vapi_msg_delete_loopback *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_loopback'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_delete_loopback_payload_hton(&msg->payload);
}

static inline void vapi_msg_delete_loopback_ntoh(vapi_msg_delete_loopback *msg)
{
  VAPI_DBG("Swapping `vapi_msg_delete_loopback'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_delete_loopback_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_delete_loopback_msg_size(vapi_msg_delete_loopback *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_delete_loopback* vapi_alloc_delete_loopback(struct vapi_ctx_s *ctx)
{
  vapi_msg_delete_loopback *msg = NULL;
  const size_t size = sizeof(vapi_msg_delete_loopback);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_delete_loopback*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_delete_loopback);

  return msg;
}

static inline vapi_error_e vapi_delete_loopback(struct vapi_ctx_s *ctx,
  vapi_msg_delete_loopback *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_delete_loopback_reply *reply),
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
  vapi_msg_delete_loopback_hton(msg);
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
    vapi_msg_delete_loopback_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_delete_loopback()
{
  static const char name[] = "delete_loopback";
  static const char name_with_crc[] = "delete_loopback_f9e6675e";
  static vapi_message_desc_t __vapi_metadata_delete_loopback = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_delete_loopback, payload),
    sizeof(vapi_msg_delete_loopback),
    (generic_swap_fn_t)vapi_msg_delete_loopback_hton,
    (generic_swap_fn_t)vapi_msg_delete_loopback_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_delete_loopback = vapi_register_msg(&__vapi_metadata_delete_loopback);
  VAPI_DBG("Assigned msg id %d to delete_loopback", vapi_msg_id_delete_loopback);
}
#endif

#ifndef defined_vapi_msg_collect_detailed_interface_stats_reply
#define defined_vapi_msg_collect_detailed_interface_stats_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_collect_detailed_interface_stats_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_collect_detailed_interface_stats_reply payload;
} vapi_msg_collect_detailed_interface_stats_reply;

static inline void vapi_msg_collect_detailed_interface_stats_reply_payload_hton(vapi_payload_collect_detailed_interface_stats_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_collect_detailed_interface_stats_reply_payload_ntoh(vapi_payload_collect_detailed_interface_stats_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_collect_detailed_interface_stats_reply_hton(vapi_msg_collect_detailed_interface_stats_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_collect_detailed_interface_stats_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_collect_detailed_interface_stats_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_collect_detailed_interface_stats_reply_ntoh(vapi_msg_collect_detailed_interface_stats_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_collect_detailed_interface_stats_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_collect_detailed_interface_stats_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_collect_detailed_interface_stats_reply_msg_size(vapi_msg_collect_detailed_interface_stats_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_collect_detailed_interface_stats_reply()
{
  static const char name[] = "collect_detailed_interface_stats_reply";
  static const char name_with_crc[] = "collect_detailed_interface_stats_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_collect_detailed_interface_stats_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_collect_detailed_interface_stats_reply, payload),
    sizeof(vapi_msg_collect_detailed_interface_stats_reply),
    (generic_swap_fn_t)vapi_msg_collect_detailed_interface_stats_reply_hton,
    (generic_swap_fn_t)vapi_msg_collect_detailed_interface_stats_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_collect_detailed_interface_stats_reply = vapi_register_msg(&__vapi_metadata_collect_detailed_interface_stats_reply);
  VAPI_DBG("Assigned msg id %d to collect_detailed_interface_stats_reply", vapi_msg_id_collect_detailed_interface_stats_reply);
}

static inline void vapi_set_vapi_msg_collect_detailed_interface_stats_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_collect_detailed_interface_stats_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_collect_detailed_interface_stats_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_collect_detailed_interface_stats
#define defined_vapi_msg_collect_detailed_interface_stats
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  bool enable_disable; 
} vapi_payload_collect_detailed_interface_stats;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_collect_detailed_interface_stats payload;
} vapi_msg_collect_detailed_interface_stats;

static inline void vapi_msg_collect_detailed_interface_stats_payload_hton(vapi_payload_collect_detailed_interface_stats *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_collect_detailed_interface_stats_payload_ntoh(vapi_payload_collect_detailed_interface_stats *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_collect_detailed_interface_stats_hton(vapi_msg_collect_detailed_interface_stats *msg)
{
  VAPI_DBG("Swapping `vapi_msg_collect_detailed_interface_stats'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_collect_detailed_interface_stats_payload_hton(&msg->payload);
}

static inline void vapi_msg_collect_detailed_interface_stats_ntoh(vapi_msg_collect_detailed_interface_stats *msg)
{
  VAPI_DBG("Swapping `vapi_msg_collect_detailed_interface_stats'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_collect_detailed_interface_stats_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_collect_detailed_interface_stats_msg_size(vapi_msg_collect_detailed_interface_stats *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_collect_detailed_interface_stats* vapi_alloc_collect_detailed_interface_stats(struct vapi_ctx_s *ctx)
{
  vapi_msg_collect_detailed_interface_stats *msg = NULL;
  const size_t size = sizeof(vapi_msg_collect_detailed_interface_stats);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_collect_detailed_interface_stats*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_collect_detailed_interface_stats);

  return msg;
}

static inline vapi_error_e vapi_collect_detailed_interface_stats(struct vapi_ctx_s *ctx,
  vapi_msg_collect_detailed_interface_stats *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_collect_detailed_interface_stats_reply *reply),
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
  vapi_msg_collect_detailed_interface_stats_hton(msg);
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
    vapi_msg_collect_detailed_interface_stats_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_collect_detailed_interface_stats()
{
  static const char name[] = "collect_detailed_interface_stats";
  static const char name_with_crc[] = "collect_detailed_interface_stats_5501adee";
  static vapi_message_desc_t __vapi_metadata_collect_detailed_interface_stats = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_collect_detailed_interface_stats, payload),
    sizeof(vapi_msg_collect_detailed_interface_stats),
    (generic_swap_fn_t)vapi_msg_collect_detailed_interface_stats_hton,
    (generic_swap_fn_t)vapi_msg_collect_detailed_interface_stats_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_collect_detailed_interface_stats = vapi_register_msg(&__vapi_metadata_collect_detailed_interface_stats);
  VAPI_DBG("Assigned msg id %d to collect_detailed_interface_stats", vapi_msg_id_collect_detailed_interface_stats);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
