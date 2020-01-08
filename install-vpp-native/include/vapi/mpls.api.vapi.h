#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_mpls_mpls_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_mpls_mpls_api_json

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

extern vapi_msg_id_t vapi_msg_id_mpls_table_add_del;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_mpls_enable_reply;
extern vapi_msg_id_t vapi_msg_id_mpls_ip_bind_unbind_reply;
extern vapi_msg_id_t vapi_msg_id_mpls_ip_bind_unbind;
extern vapi_msg_id_t vapi_msg_id_mpls_tunnel_add_del;
extern vapi_msg_id_t vapi_msg_id_mpls_tunnel_dump;
extern vapi_msg_id_t vapi_msg_id_mpls_route_add_del;
extern vapi_msg_id_t vapi_msg_id_mpls_table_details;
extern vapi_msg_id_t vapi_msg_id_sw_interface_set_mpls_enable;
extern vapi_msg_id_t vapi_msg_id_mpls_table_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_mpls_route_details;
extern vapi_msg_id_t vapi_msg_id_mpls_tunnel_details;
extern vapi_msg_id_t vapi_msg_id_mpls_route_dump;
extern vapi_msg_id_t vapi_msg_id_mpls_route_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_mpls_tunnel_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_mpls_table_dump;

#define DEFINE_VAPI_MSG_IDS_MPLS_API_JSON\
  vapi_msg_id_t vapi_msg_id_mpls_table_add_del;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_mpls_enable_reply;\
  vapi_msg_id_t vapi_msg_id_mpls_ip_bind_unbind_reply;\
  vapi_msg_id_t vapi_msg_id_mpls_ip_bind_unbind;\
  vapi_msg_id_t vapi_msg_id_mpls_tunnel_add_del;\
  vapi_msg_id_t vapi_msg_id_mpls_tunnel_dump;\
  vapi_msg_id_t vapi_msg_id_mpls_route_add_del;\
  vapi_msg_id_t vapi_msg_id_mpls_table_details;\
  vapi_msg_id_t vapi_msg_id_sw_interface_set_mpls_enable;\
  vapi_msg_id_t vapi_msg_id_mpls_table_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_mpls_route_details;\
  vapi_msg_id_t vapi_msg_id_mpls_tunnel_details;\
  vapi_msg_id_t vapi_msg_id_mpls_route_dump;\
  vapi_msg_id_t vapi_msg_id_mpls_route_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_mpls_tunnel_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_mpls_table_dump;


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

#ifndef defined_vapi_enum_fib_path_nh_proto
#define defined_vapi_enum_fib_path_nh_proto
typedef enum {
  FIB_API_PATH_NH_PROTO_IP4 = 0,
  FIB_API_PATH_NH_PROTO_IP6 = 1,
  FIB_API_PATH_NH_PROTO_MPLS = 2,
  FIB_API_PATH_NH_PROTO_ETHERNET = 3,
  FIB_API_PATH_NH_PROTO_BIER = 4,
} vapi_enum_fib_path_nh_proto;

#endif

#ifndef defined_vapi_enum_fib_path_flags
#define defined_vapi_enum_fib_path_flags
typedef enum {
  FIB_API_PATH_FLAG_NONE = 0,
  FIB_API_PATH_FLAG_RESOLVE_VIA_ATTACHED = 1,
  FIB_API_PATH_FLAG_RESOLVE_VIA_HOST = 2,
  FIB_API_PATH_FLAG_POP_PW_CW = 4,
} vapi_enum_fib_path_flags;

#endif

#ifndef defined_vapi_enum_fib_path_type
#define defined_vapi_enum_fib_path_type
typedef enum {
  FIB_API_PATH_TYPE_NORMAL = 0,
  FIB_API_PATH_TYPE_LOCAL = 1,
  FIB_API_PATH_TYPE_DROP = 2,
  FIB_API_PATH_TYPE_UDP_ENCAP = 3,
  FIB_API_PATH_TYPE_BIER_IMP = 4,
  FIB_API_PATH_TYPE_ICMP_UNREACH = 5,
  FIB_API_PATH_TYPE_ICMP_PROHIBIT = 6,
  FIB_API_PATH_TYPE_SOURCE_LOOKUP = 7,
  FIB_API_PATH_TYPE_DVR = 8,
  FIB_API_PATH_TYPE_INTERFACE_RX = 9,
  FIB_API_PATH_TYPE_CLASSIFY = 10,
} vapi_enum_fib_path_type;

#endif

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

#ifndef defined_vapi_type_fib_mpls_label
#define defined_vapi_type_fib_mpls_label
typedef struct __attribute__((__packed__)) {
  u8 is_uniform;
  u32 label;
  u8 ttl;
  u8 exp;
} vapi_type_fib_mpls_label;

static inline void vapi_type_fib_mpls_label_hton(vapi_type_fib_mpls_label *msg)
{
  msg->label = htobe32(msg->label);
}

static inline void vapi_type_fib_mpls_label_ntoh(vapi_type_fib_mpls_label *msg)
{
  msg->label = be32toh(msg->label);
}
#endif

#ifndef defined_vapi_type_mpls_table
#define defined_vapi_type_mpls_table
typedef struct __attribute__((__packed__)) {
  u32 mt_table_id;
  u8 mt_name[64];
} vapi_type_mpls_table;

static inline void vapi_type_mpls_table_hton(vapi_type_mpls_table *msg)
{
  msg->mt_table_id = htobe32(msg->mt_table_id);
}

static inline void vapi_type_mpls_table_ntoh(vapi_type_mpls_table *msg)
{
  msg->mt_table_id = be32toh(msg->mt_table_id);
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

#ifndef defined_vapi_type_fib_path_nh
#define defined_vapi_type_fib_path_nh
typedef struct __attribute__((__packed__)) {
  vapi_union_address_union address;
  u32 via_label;
  u32 obj_id;
  u32 classify_table_index;
} vapi_type_fib_path_nh;

static inline void vapi_type_fib_path_nh_hton(vapi_type_fib_path_nh *msg)
{
  msg->via_label = htobe32(msg->via_label);
  msg->obj_id = htobe32(msg->obj_id);
  msg->classify_table_index = htobe32(msg->classify_table_index);
}

static inline void vapi_type_fib_path_nh_ntoh(vapi_type_fib_path_nh *msg)
{
  msg->via_label = be32toh(msg->via_label);
  msg->obj_id = be32toh(msg->obj_id);
  msg->classify_table_index = be32toh(msg->classify_table_index);
}
#endif

#ifndef defined_vapi_type_fib_path
#define defined_vapi_type_fib_path
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  u32 table_id;
  u32 rpf_id;
  u8 weight;
  u8 preference;
  vapi_enum_fib_path_type type;
  vapi_enum_fib_path_flags flags;
  vapi_enum_fib_path_nh_proto proto;
  vapi_type_fib_path_nh nh;
  u8 n_labels;
  vapi_type_fib_mpls_label label_stack[16];
} vapi_type_fib_path;

static inline void vapi_type_fib_path_hton(vapi_type_fib_path *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->table_id = htobe32(msg->table_id);
  msg->rpf_id = htobe32(msg->rpf_id);
  msg->type = (vapi_enum_fib_path_type)htobe32(msg->type);
  msg->flags = (vapi_enum_fib_path_flags)htobe32(msg->flags);
  msg->proto = (vapi_enum_fib_path_nh_proto)htobe32(msg->proto);
  vapi_type_fib_path_nh_hton(&msg->nh);
  do { unsigned i; for (i = 0; i < 16; ++i) { vapi_type_fib_mpls_label_hton(&msg->label_stack[i]); } } while(0);
}

static inline void vapi_type_fib_path_ntoh(vapi_type_fib_path *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->table_id = be32toh(msg->table_id);
  msg->rpf_id = be32toh(msg->rpf_id);
  msg->type = (vapi_enum_fib_path_type)be32toh(msg->type);
  msg->flags = (vapi_enum_fib_path_flags)be32toh(msg->flags);
  msg->proto = (vapi_enum_fib_path_nh_proto)be32toh(msg->proto);
  vapi_type_fib_path_nh_ntoh(&msg->nh);
  do { unsigned i; for (i = 0; i < 16; ++i) { vapi_type_fib_mpls_label_ntoh(&msg->label_stack[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_mpls_tunnel
#define defined_vapi_type_mpls_tunnel
typedef struct __attribute__((__packed__)) {
  u32 mt_sw_if_index;
  u32 mt_tunnel_index;
  u8 mt_l2_only;
  u8 mt_is_multicast;
  u8 mt_n_paths;
  vapi_type_fib_path mt_paths[0];
} vapi_type_mpls_tunnel;

static inline void vapi_type_mpls_tunnel_hton(vapi_type_mpls_tunnel *msg)
{
  msg->mt_sw_if_index = htobe32(msg->mt_sw_if_index);
  msg->mt_tunnel_index = htobe32(msg->mt_tunnel_index);
  do { unsigned i; for (i = 0; i < msg->mt_n_paths; ++i) { vapi_type_fib_path_hton(&msg->mt_paths[i]); } } while(0);
}

static inline void vapi_type_mpls_tunnel_ntoh(vapi_type_mpls_tunnel *msg)
{
  msg->mt_sw_if_index = be32toh(msg->mt_sw_if_index);
  msg->mt_tunnel_index = be32toh(msg->mt_tunnel_index);
  do { unsigned i; for (i = 0; i < msg->mt_n_paths; ++i) { vapi_type_fib_path_ntoh(&msg->mt_paths[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_mpls_route
#define defined_vapi_type_mpls_route
typedef struct __attribute__((__packed__)) {
  u32 mr_table_id;
  u32 mr_label;
  u8 mr_eos;
  u8 mr_eos_proto;
  u8 mr_is_multicast;
  u8 mr_n_paths;
  vapi_type_fib_path mr_paths[0];
} vapi_type_mpls_route;

static inline void vapi_type_mpls_route_hton(vapi_type_mpls_route *msg)
{
  msg->mr_table_id = htobe32(msg->mr_table_id);
  msg->mr_label = htobe32(msg->mr_label);
  do { unsigned i; for (i = 0; i < msg->mr_n_paths; ++i) { vapi_type_fib_path_hton(&msg->mr_paths[i]); } } while(0);
}

static inline void vapi_type_mpls_route_ntoh(vapi_type_mpls_route *msg)
{
  msg->mr_table_id = be32toh(msg->mr_table_id);
  msg->mr_label = be32toh(msg->mr_label);
  do { unsigned i; for (i = 0; i < msg->mr_n_paths; ++i) { vapi_type_fib_path_ntoh(&msg->mr_paths[i]); } } while(0);
}
#endif

#ifndef defined_vapi_msg_mpls_table_add_del_reply
#define defined_vapi_msg_mpls_table_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_mpls_table_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mpls_table_add_del_reply payload;
} vapi_msg_mpls_table_add_del_reply;

static inline void vapi_msg_mpls_table_add_del_reply_payload_hton(vapi_payload_mpls_table_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_mpls_table_add_del_reply_payload_ntoh(vapi_payload_mpls_table_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_mpls_table_add_del_reply_hton(vapi_msg_mpls_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mpls_table_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_table_add_del_reply_ntoh(vapi_msg_mpls_table_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mpls_table_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_table_add_del_reply_msg_size(vapi_msg_mpls_table_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mpls_table_add_del_reply()
{
  static const char name[] = "mpls_table_add_del_reply";
  static const char name_with_crc[] = "mpls_table_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_mpls_table_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mpls_table_add_del_reply, payload),
    sizeof(vapi_msg_mpls_table_add_del_reply),
    (generic_swap_fn_t)vapi_msg_mpls_table_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_mpls_table_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_table_add_del_reply = vapi_register_msg(&__vapi_metadata_mpls_table_add_del_reply);
  VAPI_DBG("Assigned msg id %d to mpls_table_add_del_reply", vapi_msg_id_mpls_table_add_del_reply);
}

static inline void vapi_set_vapi_msg_mpls_table_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mpls_table_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mpls_table_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mpls_table_add_del
#define defined_vapi_msg_mpls_table_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 mt_is_add;
  vapi_type_mpls_table mt_table; 
} vapi_payload_mpls_table_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_mpls_table_add_del payload;
} vapi_msg_mpls_table_add_del;

static inline void vapi_msg_mpls_table_add_del_payload_hton(vapi_payload_mpls_table_add_del *payload)
{
  vapi_type_mpls_table_hton(&payload->mt_table);
}

static inline void vapi_msg_mpls_table_add_del_payload_ntoh(vapi_payload_mpls_table_add_del *payload)
{
  vapi_type_mpls_table_ntoh(&payload->mt_table);
}

static inline void vapi_msg_mpls_table_add_del_hton(vapi_msg_mpls_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_mpls_table_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_table_add_del_ntoh(vapi_msg_mpls_table_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_mpls_table_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_table_add_del_msg_size(vapi_msg_mpls_table_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mpls_table_add_del* vapi_alloc_mpls_table_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_mpls_table_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_mpls_table_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mpls_table_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mpls_table_add_del);

  return msg;
}

static inline vapi_error_e vapi_mpls_table_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_mpls_table_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mpls_table_add_del_reply *reply),
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
  vapi_msg_mpls_table_add_del_hton(msg);
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
    vapi_msg_mpls_table_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mpls_table_add_del()
{
  static const char name[] = "mpls_table_add_del";
  static const char name_with_crc[] = "mpls_table_add_del_b4ee1c03";
  static vapi_message_desc_t __vapi_metadata_mpls_table_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_mpls_table_add_del, payload),
    sizeof(vapi_msg_mpls_table_add_del),
    (generic_swap_fn_t)vapi_msg_mpls_table_add_del_hton,
    (generic_swap_fn_t)vapi_msg_mpls_table_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_table_add_del = vapi_register_msg(&__vapi_metadata_mpls_table_add_del);
  VAPI_DBG("Assigned msg id %d to mpls_table_add_del", vapi_msg_id_mpls_table_add_del);
}
#endif

#ifndef defined_vapi_msg_sw_interface_set_mpls_enable_reply
#define defined_vapi_msg_sw_interface_set_mpls_enable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sw_interface_set_mpls_enable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sw_interface_set_mpls_enable_reply payload;
} vapi_msg_sw_interface_set_mpls_enable_reply;

static inline void vapi_msg_sw_interface_set_mpls_enable_reply_payload_hton(vapi_payload_sw_interface_set_mpls_enable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sw_interface_set_mpls_enable_reply_payload_ntoh(vapi_payload_sw_interface_set_mpls_enable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sw_interface_set_mpls_enable_reply_hton(vapi_msg_sw_interface_set_mpls_enable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mpls_enable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sw_interface_set_mpls_enable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_mpls_enable_reply_ntoh(vapi_msg_sw_interface_set_mpls_enable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mpls_enable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_mpls_enable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_mpls_enable_reply_msg_size(vapi_msg_sw_interface_set_mpls_enable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_mpls_enable_reply()
{
  static const char name[] = "sw_interface_set_mpls_enable_reply";
  static const char name_with_crc[] = "sw_interface_set_mpls_enable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_mpls_enable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sw_interface_set_mpls_enable_reply, payload),
    sizeof(vapi_msg_sw_interface_set_mpls_enable_reply),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mpls_enable_reply_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mpls_enable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_mpls_enable_reply = vapi_register_msg(&__vapi_metadata_sw_interface_set_mpls_enable_reply);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_mpls_enable_reply", vapi_msg_id_sw_interface_set_mpls_enable_reply);
}

static inline void vapi_set_vapi_msg_sw_interface_set_mpls_enable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sw_interface_set_mpls_enable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sw_interface_set_mpls_enable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mpls_ip_bind_unbind_reply
#define defined_vapi_msg_mpls_ip_bind_unbind_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_mpls_ip_bind_unbind_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mpls_ip_bind_unbind_reply payload;
} vapi_msg_mpls_ip_bind_unbind_reply;

static inline void vapi_msg_mpls_ip_bind_unbind_reply_payload_hton(vapi_payload_mpls_ip_bind_unbind_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_mpls_ip_bind_unbind_reply_payload_ntoh(vapi_payload_mpls_ip_bind_unbind_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_mpls_ip_bind_unbind_reply_hton(vapi_msg_mpls_ip_bind_unbind_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_ip_bind_unbind_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mpls_ip_bind_unbind_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_ip_bind_unbind_reply_ntoh(vapi_msg_mpls_ip_bind_unbind_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_ip_bind_unbind_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mpls_ip_bind_unbind_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_ip_bind_unbind_reply_msg_size(vapi_msg_mpls_ip_bind_unbind_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mpls_ip_bind_unbind_reply()
{
  static const char name[] = "mpls_ip_bind_unbind_reply";
  static const char name_with_crc[] = "mpls_ip_bind_unbind_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_mpls_ip_bind_unbind_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mpls_ip_bind_unbind_reply, payload),
    sizeof(vapi_msg_mpls_ip_bind_unbind_reply),
    (generic_swap_fn_t)vapi_msg_mpls_ip_bind_unbind_reply_hton,
    (generic_swap_fn_t)vapi_msg_mpls_ip_bind_unbind_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_ip_bind_unbind_reply = vapi_register_msg(&__vapi_metadata_mpls_ip_bind_unbind_reply);
  VAPI_DBG("Assigned msg id %d to mpls_ip_bind_unbind_reply", vapi_msg_id_mpls_ip_bind_unbind_reply);
}

static inline void vapi_set_vapi_msg_mpls_ip_bind_unbind_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mpls_ip_bind_unbind_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mpls_ip_bind_unbind_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mpls_ip_bind_unbind
#define defined_vapi_msg_mpls_ip_bind_unbind
typedef struct __attribute__ ((__packed__)) {
  u32 mb_mpls_table_id;
  u32 mb_label;
  u32 mb_ip_table_id;
  u8 mb_is_bind;
  vapi_type_prefix mb_prefix; 
} vapi_payload_mpls_ip_bind_unbind;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_mpls_ip_bind_unbind payload;
} vapi_msg_mpls_ip_bind_unbind;

static inline void vapi_msg_mpls_ip_bind_unbind_payload_hton(vapi_payload_mpls_ip_bind_unbind *payload)
{
  payload->mb_mpls_table_id = htobe32(payload->mb_mpls_table_id);
  payload->mb_label = htobe32(payload->mb_label);
  payload->mb_ip_table_id = htobe32(payload->mb_ip_table_id);
  vapi_type_prefix_hton(&payload->mb_prefix);
}

static inline void vapi_msg_mpls_ip_bind_unbind_payload_ntoh(vapi_payload_mpls_ip_bind_unbind *payload)
{
  payload->mb_mpls_table_id = be32toh(payload->mb_mpls_table_id);
  payload->mb_label = be32toh(payload->mb_label);
  payload->mb_ip_table_id = be32toh(payload->mb_ip_table_id);
  vapi_type_prefix_ntoh(&payload->mb_prefix);
}

static inline void vapi_msg_mpls_ip_bind_unbind_hton(vapi_msg_mpls_ip_bind_unbind *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_ip_bind_unbind'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_mpls_ip_bind_unbind_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_ip_bind_unbind_ntoh(vapi_msg_mpls_ip_bind_unbind *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_ip_bind_unbind'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_mpls_ip_bind_unbind_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_ip_bind_unbind_msg_size(vapi_msg_mpls_ip_bind_unbind *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mpls_ip_bind_unbind* vapi_alloc_mpls_ip_bind_unbind(struct vapi_ctx_s *ctx)
{
  vapi_msg_mpls_ip_bind_unbind *msg = NULL;
  const size_t size = sizeof(vapi_msg_mpls_ip_bind_unbind);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mpls_ip_bind_unbind*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mpls_ip_bind_unbind);

  return msg;
}

static inline vapi_error_e vapi_mpls_ip_bind_unbind(struct vapi_ctx_s *ctx,
  vapi_msg_mpls_ip_bind_unbind *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mpls_ip_bind_unbind_reply *reply),
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
  vapi_msg_mpls_ip_bind_unbind_hton(msg);
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
    vapi_msg_mpls_ip_bind_unbind_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mpls_ip_bind_unbind()
{
  static const char name[] = "mpls_ip_bind_unbind";
  static const char name_with_crc[] = "mpls_ip_bind_unbind_76e7ae51";
  static vapi_message_desc_t __vapi_metadata_mpls_ip_bind_unbind = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_mpls_ip_bind_unbind, payload),
    sizeof(vapi_msg_mpls_ip_bind_unbind),
    (generic_swap_fn_t)vapi_msg_mpls_ip_bind_unbind_hton,
    (generic_swap_fn_t)vapi_msg_mpls_ip_bind_unbind_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_ip_bind_unbind = vapi_register_msg(&__vapi_metadata_mpls_ip_bind_unbind);
  VAPI_DBG("Assigned msg id %d to mpls_ip_bind_unbind", vapi_msg_id_mpls_ip_bind_unbind);
}
#endif

#ifndef defined_vapi_msg_mpls_tunnel_add_del_reply
#define defined_vapi_msg_mpls_tunnel_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index;
  u32 tunnel_index; 
} vapi_payload_mpls_tunnel_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mpls_tunnel_add_del_reply payload;
} vapi_msg_mpls_tunnel_add_del_reply;

static inline void vapi_msg_mpls_tunnel_add_del_reply_payload_hton(vapi_payload_mpls_tunnel_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->tunnel_index = htobe32(payload->tunnel_index);
}

static inline void vapi_msg_mpls_tunnel_add_del_reply_payload_ntoh(vapi_payload_mpls_tunnel_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->tunnel_index = be32toh(payload->tunnel_index);
}

static inline void vapi_msg_mpls_tunnel_add_del_reply_hton(vapi_msg_mpls_tunnel_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mpls_tunnel_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_tunnel_add_del_reply_ntoh(vapi_msg_mpls_tunnel_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mpls_tunnel_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_tunnel_add_del_reply_msg_size(vapi_msg_mpls_tunnel_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mpls_tunnel_add_del_reply()
{
  static const char name[] = "mpls_tunnel_add_del_reply";
  static const char name_with_crc[] = "mpls_tunnel_add_del_reply_cc62a1ce";
  static vapi_message_desc_t __vapi_metadata_mpls_tunnel_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mpls_tunnel_add_del_reply, payload),
    sizeof(vapi_msg_mpls_tunnel_add_del_reply),
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_tunnel_add_del_reply = vapi_register_msg(&__vapi_metadata_mpls_tunnel_add_del_reply);
  VAPI_DBG("Assigned msg id %d to mpls_tunnel_add_del_reply", vapi_msg_id_mpls_tunnel_add_del_reply);
}

static inline void vapi_set_vapi_msg_mpls_tunnel_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mpls_tunnel_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mpls_tunnel_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mpls_tunnel_add_del
#define defined_vapi_msg_mpls_tunnel_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 mt_is_add;
  vapi_type_mpls_tunnel mt_tunnel; 
} vapi_payload_mpls_tunnel_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_mpls_tunnel_add_del payload;
} vapi_msg_mpls_tunnel_add_del;

static inline void vapi_msg_mpls_tunnel_add_del_payload_hton(vapi_payload_mpls_tunnel_add_del *payload)
{
  vapi_type_mpls_tunnel_hton(&payload->mt_tunnel);
}

static inline void vapi_msg_mpls_tunnel_add_del_payload_ntoh(vapi_payload_mpls_tunnel_add_del *payload)
{
  vapi_type_mpls_tunnel_ntoh(&payload->mt_tunnel);
}

static inline void vapi_msg_mpls_tunnel_add_del_hton(vapi_msg_mpls_tunnel_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_mpls_tunnel_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_tunnel_add_del_ntoh(vapi_msg_mpls_tunnel_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_mpls_tunnel_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_tunnel_add_del_msg_size(vapi_msg_mpls_tunnel_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mpls_tunnel_add_del* vapi_alloc_mpls_tunnel_add_del(struct vapi_ctx_s *ctx, size_t mt_tunnel_mt_paths_array_size)
{
  vapi_msg_mpls_tunnel_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_mpls_tunnel_add_del) + sizeof(msg->payload.mt_tunnel.mt_paths[0]) * mt_tunnel_mt_paths_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mpls_tunnel_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mpls_tunnel_add_del);
  msg->payload.mt_tunnel.mt_n_paths = mt_tunnel_mt_paths_array_size;

  return msg;
}

static inline vapi_error_e vapi_mpls_tunnel_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_mpls_tunnel_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mpls_tunnel_add_del_reply *reply),
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
  vapi_msg_mpls_tunnel_add_del_hton(msg);
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
    vapi_msg_mpls_tunnel_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mpls_tunnel_add_del()
{
  static const char name[] = "mpls_tunnel_add_del";
  static const char name_with_crc[] = "mpls_tunnel_add_del_f077d939";
  static vapi_message_desc_t __vapi_metadata_mpls_tunnel_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_mpls_tunnel_add_del, payload),
    sizeof(vapi_msg_mpls_tunnel_add_del),
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_add_del_hton,
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_tunnel_add_del = vapi_register_msg(&__vapi_metadata_mpls_tunnel_add_del);
  VAPI_DBG("Assigned msg id %d to mpls_tunnel_add_del", vapi_msg_id_mpls_tunnel_add_del);
}
#endif

#ifndef defined_vapi_msg_mpls_tunnel_details
#define defined_vapi_msg_mpls_tunnel_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mpls_tunnel mt_tunnel; 
} vapi_payload_mpls_tunnel_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mpls_tunnel_details payload;
} vapi_msg_mpls_tunnel_details;

static inline void vapi_msg_mpls_tunnel_details_payload_hton(vapi_payload_mpls_tunnel_details *payload)
{
  vapi_type_mpls_tunnel_hton(&payload->mt_tunnel);
}

static inline void vapi_msg_mpls_tunnel_details_payload_ntoh(vapi_payload_mpls_tunnel_details *payload)
{
  vapi_type_mpls_tunnel_ntoh(&payload->mt_tunnel);
}

static inline void vapi_msg_mpls_tunnel_details_hton(vapi_msg_mpls_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mpls_tunnel_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_tunnel_details_ntoh(vapi_msg_mpls_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mpls_tunnel_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_tunnel_details_msg_size(vapi_msg_mpls_tunnel_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mpls_tunnel_details()
{
  static const char name[] = "mpls_tunnel_details";
  static const char name_with_crc[] = "mpls_tunnel_details_076f0da6";
  static vapi_message_desc_t __vapi_metadata_mpls_tunnel_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mpls_tunnel_details, payload),
    sizeof(vapi_msg_mpls_tunnel_details),
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_details_hton,
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_tunnel_details = vapi_register_msg(&__vapi_metadata_mpls_tunnel_details);
  VAPI_DBG("Assigned msg id %d to mpls_tunnel_details", vapi_msg_id_mpls_tunnel_details);
}

static inline void vapi_set_vapi_msg_mpls_tunnel_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mpls_tunnel_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mpls_tunnel_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mpls_tunnel_dump
#define defined_vapi_msg_mpls_tunnel_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_mpls_tunnel_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_mpls_tunnel_dump payload;
} vapi_msg_mpls_tunnel_dump;

static inline void vapi_msg_mpls_tunnel_dump_payload_hton(vapi_payload_mpls_tunnel_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_mpls_tunnel_dump_payload_ntoh(vapi_payload_mpls_tunnel_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_mpls_tunnel_dump_hton(vapi_msg_mpls_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_mpls_tunnel_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_tunnel_dump_ntoh(vapi_msg_mpls_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_tunnel_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_mpls_tunnel_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_tunnel_dump_msg_size(vapi_msg_mpls_tunnel_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mpls_tunnel_dump* vapi_alloc_mpls_tunnel_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_mpls_tunnel_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_mpls_tunnel_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mpls_tunnel_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mpls_tunnel_dump);

  return msg;
}

static inline vapi_error_e vapi_mpls_tunnel_dump(struct vapi_ctx_s *ctx,
  vapi_msg_mpls_tunnel_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mpls_tunnel_details *reply),
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
  vapi_msg_mpls_tunnel_dump_hton(msg);
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
    vapi_msg_mpls_tunnel_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mpls_tunnel_dump()
{
  static const char name[] = "mpls_tunnel_dump";
  static const char name_with_crc[] = "mpls_tunnel_dump_529cb13f";
  static vapi_message_desc_t __vapi_metadata_mpls_tunnel_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_mpls_tunnel_dump, payload),
    sizeof(vapi_msg_mpls_tunnel_dump),
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_dump_hton,
    (generic_swap_fn_t)vapi_msg_mpls_tunnel_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_tunnel_dump = vapi_register_msg(&__vapi_metadata_mpls_tunnel_dump);
  VAPI_DBG("Assigned msg id %d to mpls_tunnel_dump", vapi_msg_id_mpls_tunnel_dump);
}
#endif

#ifndef defined_vapi_msg_mpls_route_add_del_reply
#define defined_vapi_msg_mpls_route_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 stats_index; 
} vapi_payload_mpls_route_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mpls_route_add_del_reply payload;
} vapi_msg_mpls_route_add_del_reply;

static inline void vapi_msg_mpls_route_add_del_reply_payload_hton(vapi_payload_mpls_route_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->stats_index = htobe32(payload->stats_index);
}

static inline void vapi_msg_mpls_route_add_del_reply_payload_ntoh(vapi_payload_mpls_route_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->stats_index = be32toh(payload->stats_index);
}

static inline void vapi_msg_mpls_route_add_del_reply_hton(vapi_msg_mpls_route_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mpls_route_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_route_add_del_reply_ntoh(vapi_msg_mpls_route_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mpls_route_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_route_add_del_reply_msg_size(vapi_msg_mpls_route_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mpls_route_add_del_reply()
{
  static const char name[] = "mpls_route_add_del_reply";
  static const char name_with_crc[] = "mpls_route_add_del_reply_1992deab";
  static vapi_message_desc_t __vapi_metadata_mpls_route_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mpls_route_add_del_reply, payload),
    sizeof(vapi_msg_mpls_route_add_del_reply),
    (generic_swap_fn_t)vapi_msg_mpls_route_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_mpls_route_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_route_add_del_reply = vapi_register_msg(&__vapi_metadata_mpls_route_add_del_reply);
  VAPI_DBG("Assigned msg id %d to mpls_route_add_del_reply", vapi_msg_id_mpls_route_add_del_reply);
}

static inline void vapi_set_vapi_msg_mpls_route_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mpls_route_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mpls_route_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mpls_route_add_del
#define defined_vapi_msg_mpls_route_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 mr_is_add;
  u8 mr_is_multipath;
  vapi_type_mpls_route mr_route; 
} vapi_payload_mpls_route_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_mpls_route_add_del payload;
} vapi_msg_mpls_route_add_del;

static inline void vapi_msg_mpls_route_add_del_payload_hton(vapi_payload_mpls_route_add_del *payload)
{
  vapi_type_mpls_route_hton(&payload->mr_route);
}

static inline void vapi_msg_mpls_route_add_del_payload_ntoh(vapi_payload_mpls_route_add_del *payload)
{
  vapi_type_mpls_route_ntoh(&payload->mr_route);
}

static inline void vapi_msg_mpls_route_add_del_hton(vapi_msg_mpls_route_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_mpls_route_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_route_add_del_ntoh(vapi_msg_mpls_route_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_mpls_route_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_route_add_del_msg_size(vapi_msg_mpls_route_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mpls_route_add_del* vapi_alloc_mpls_route_add_del(struct vapi_ctx_s *ctx, size_t mr_route_mr_paths_array_size)
{
  vapi_msg_mpls_route_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_mpls_route_add_del) + sizeof(msg->payload.mr_route.mr_paths[0]) * mr_route_mr_paths_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mpls_route_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mpls_route_add_del);
  msg->payload.mr_route.mr_n_paths = mr_route_mr_paths_array_size;

  return msg;
}

static inline vapi_error_e vapi_mpls_route_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_mpls_route_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mpls_route_add_del_reply *reply),
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
  vapi_msg_mpls_route_add_del_hton(msg);
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
    vapi_msg_mpls_route_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mpls_route_add_del()
{
  static const char name[] = "mpls_route_add_del";
  static const char name_with_crc[] = "mpls_route_add_del_afc038a8";
  static vapi_message_desc_t __vapi_metadata_mpls_route_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_mpls_route_add_del, payload),
    sizeof(vapi_msg_mpls_route_add_del),
    (generic_swap_fn_t)vapi_msg_mpls_route_add_del_hton,
    (generic_swap_fn_t)vapi_msg_mpls_route_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_route_add_del = vapi_register_msg(&__vapi_metadata_mpls_route_add_del);
  VAPI_DBG("Assigned msg id %d to mpls_route_add_del", vapi_msg_id_mpls_route_add_del);
}
#endif

#ifndef defined_vapi_msg_mpls_table_details
#define defined_vapi_msg_mpls_table_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mpls_table mt_table; 
} vapi_payload_mpls_table_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mpls_table_details payload;
} vapi_msg_mpls_table_details;

static inline void vapi_msg_mpls_table_details_payload_hton(vapi_payload_mpls_table_details *payload)
{
  vapi_type_mpls_table_hton(&payload->mt_table);
}

static inline void vapi_msg_mpls_table_details_payload_ntoh(vapi_payload_mpls_table_details *payload)
{
  vapi_type_mpls_table_ntoh(&payload->mt_table);
}

static inline void vapi_msg_mpls_table_details_hton(vapi_msg_mpls_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mpls_table_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_table_details_ntoh(vapi_msg_mpls_table_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mpls_table_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_table_details_msg_size(vapi_msg_mpls_table_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mpls_table_details()
{
  static const char name[] = "mpls_table_details";
  static const char name_with_crc[] = "mpls_table_details_5624404a";
  static vapi_message_desc_t __vapi_metadata_mpls_table_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mpls_table_details, payload),
    sizeof(vapi_msg_mpls_table_details),
    (generic_swap_fn_t)vapi_msg_mpls_table_details_hton,
    (generic_swap_fn_t)vapi_msg_mpls_table_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_table_details = vapi_register_msg(&__vapi_metadata_mpls_table_details);
  VAPI_DBG("Assigned msg id %d to mpls_table_details", vapi_msg_id_mpls_table_details);
}

static inline void vapi_set_vapi_msg_mpls_table_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mpls_table_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mpls_table_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sw_interface_set_mpls_enable
#define defined_vapi_msg_sw_interface_set_mpls_enable
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 enable; 
} vapi_payload_sw_interface_set_mpls_enable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sw_interface_set_mpls_enable payload;
} vapi_msg_sw_interface_set_mpls_enable;

static inline void vapi_msg_sw_interface_set_mpls_enable_payload_hton(vapi_payload_sw_interface_set_mpls_enable *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_mpls_enable_payload_ntoh(vapi_payload_sw_interface_set_mpls_enable *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sw_interface_set_mpls_enable_hton(vapi_msg_sw_interface_set_mpls_enable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mpls_enable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sw_interface_set_mpls_enable_payload_hton(&msg->payload);
}

static inline void vapi_msg_sw_interface_set_mpls_enable_ntoh(vapi_msg_sw_interface_set_mpls_enable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sw_interface_set_mpls_enable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sw_interface_set_mpls_enable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sw_interface_set_mpls_enable_msg_size(vapi_msg_sw_interface_set_mpls_enable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sw_interface_set_mpls_enable* vapi_alloc_sw_interface_set_mpls_enable(struct vapi_ctx_s *ctx)
{
  vapi_msg_sw_interface_set_mpls_enable *msg = NULL;
  const size_t size = sizeof(vapi_msg_sw_interface_set_mpls_enable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sw_interface_set_mpls_enable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sw_interface_set_mpls_enable);

  return msg;
}

static inline vapi_error_e vapi_sw_interface_set_mpls_enable(struct vapi_ctx_s *ctx,
  vapi_msg_sw_interface_set_mpls_enable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sw_interface_set_mpls_enable_reply *reply),
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
  vapi_msg_sw_interface_set_mpls_enable_hton(msg);
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
    vapi_msg_sw_interface_set_mpls_enable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sw_interface_set_mpls_enable()
{
  static const char name[] = "sw_interface_set_mpls_enable";
  static const char name_with_crc[] = "sw_interface_set_mpls_enable_a36fadc0";
  static vapi_message_desc_t __vapi_metadata_sw_interface_set_mpls_enable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sw_interface_set_mpls_enable, payload),
    sizeof(vapi_msg_sw_interface_set_mpls_enable),
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mpls_enable_hton,
    (generic_swap_fn_t)vapi_msg_sw_interface_set_mpls_enable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sw_interface_set_mpls_enable = vapi_register_msg(&__vapi_metadata_sw_interface_set_mpls_enable);
  VAPI_DBG("Assigned msg id %d to sw_interface_set_mpls_enable", vapi_msg_id_sw_interface_set_mpls_enable);
}
#endif

#ifndef defined_vapi_msg_mpls_route_details
#define defined_vapi_msg_mpls_route_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mpls_route mr_route; 
} vapi_payload_mpls_route_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_mpls_route_details payload;
} vapi_msg_mpls_route_details;

static inline void vapi_msg_mpls_route_details_payload_hton(vapi_payload_mpls_route_details *payload)
{
  vapi_type_mpls_route_hton(&payload->mr_route);
}

static inline void vapi_msg_mpls_route_details_payload_ntoh(vapi_payload_mpls_route_details *payload)
{
  vapi_type_mpls_route_ntoh(&payload->mr_route);
}

static inline void vapi_msg_mpls_route_details_hton(vapi_msg_mpls_route_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_mpls_route_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_route_details_ntoh(vapi_msg_mpls_route_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_mpls_route_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_route_details_msg_size(vapi_msg_mpls_route_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_mpls_route_details()
{
  static const char name[] = "mpls_route_details";
  static const char name_with_crc[] = "mpls_route_details_ec00ad76";
  static vapi_message_desc_t __vapi_metadata_mpls_route_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_mpls_route_details, payload),
    sizeof(vapi_msg_mpls_route_details),
    (generic_swap_fn_t)vapi_msg_mpls_route_details_hton,
    (generic_swap_fn_t)vapi_msg_mpls_route_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_route_details = vapi_register_msg(&__vapi_metadata_mpls_route_details);
  VAPI_DBG("Assigned msg id %d to mpls_route_details", vapi_msg_id_mpls_route_details);
}

static inline void vapi_set_vapi_msg_mpls_route_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_mpls_route_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_mpls_route_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_mpls_route_dump
#define defined_vapi_msg_mpls_route_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_mpls_table table; 
} vapi_payload_mpls_route_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_mpls_route_dump payload;
} vapi_msg_mpls_route_dump;

static inline void vapi_msg_mpls_route_dump_payload_hton(vapi_payload_mpls_route_dump *payload)
{
  vapi_type_mpls_table_hton(&payload->table);
}

static inline void vapi_msg_mpls_route_dump_payload_ntoh(vapi_payload_mpls_route_dump *payload)
{
  vapi_type_mpls_table_ntoh(&payload->table);
}

static inline void vapi_msg_mpls_route_dump_hton(vapi_msg_mpls_route_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_mpls_route_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_mpls_route_dump_ntoh(vapi_msg_mpls_route_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_route_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_mpls_route_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_mpls_route_dump_msg_size(vapi_msg_mpls_route_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mpls_route_dump* vapi_alloc_mpls_route_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_mpls_route_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_mpls_route_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mpls_route_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mpls_route_dump);

  return msg;
}

static inline vapi_error_e vapi_mpls_route_dump(struct vapi_ctx_s *ctx,
  vapi_msg_mpls_route_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mpls_route_details *reply),
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
  vapi_msg_mpls_route_dump_hton(msg);
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
    vapi_msg_mpls_route_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mpls_route_dump()
{
  static const char name[] = "mpls_route_dump";
  static const char name_with_crc[] = "mpls_route_dump_fa14d170";
  static vapi_message_desc_t __vapi_metadata_mpls_route_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_mpls_route_dump, payload),
    sizeof(vapi_msg_mpls_route_dump),
    (generic_swap_fn_t)vapi_msg_mpls_route_dump_hton,
    (generic_swap_fn_t)vapi_msg_mpls_route_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_route_dump = vapi_register_msg(&__vapi_metadata_mpls_route_dump);
  VAPI_DBG("Assigned msg id %d to mpls_route_dump", vapi_msg_id_mpls_route_dump);
}
#endif

#ifndef defined_vapi_msg_mpls_table_dump
#define defined_vapi_msg_mpls_table_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_mpls_table_dump;

static inline void vapi_msg_mpls_table_dump_hton(vapi_msg_mpls_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_mpls_table_dump_ntoh(vapi_msg_mpls_table_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_mpls_table_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_mpls_table_dump_msg_size(vapi_msg_mpls_table_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_mpls_table_dump* vapi_alloc_mpls_table_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_mpls_table_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_mpls_table_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_mpls_table_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_mpls_table_dump);

  return msg;
}

static inline vapi_error_e vapi_mpls_table_dump(struct vapi_ctx_s *ctx,
  vapi_msg_mpls_table_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_mpls_table_details *reply),
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
  vapi_msg_mpls_table_dump_hton(msg);
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
    vapi_msg_mpls_table_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_mpls_table_dump()
{
  static const char name[] = "mpls_table_dump";
  static const char name_with_crc[] = "mpls_table_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_mpls_table_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_mpls_table_dump),
    (generic_swap_fn_t)vapi_msg_mpls_table_dump_hton,
    (generic_swap_fn_t)vapi_msg_mpls_table_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_mpls_table_dump = vapi_register_msg(&__vapi_metadata_mpls_table_dump);
  VAPI_DBG("Assigned msg id %d to mpls_table_dump", vapi_msg_id_mpls_table_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
