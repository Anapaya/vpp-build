#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_abf_abf_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_abf_abf_api_json

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

extern vapi_msg_id_t vapi_msg_id_abf_plugin_get_version_reply;
extern vapi_msg_id_t vapi_msg_id_abf_itf_attach_add_del;
extern vapi_msg_id_t vapi_msg_id_abf_plugin_get_version;
extern vapi_msg_id_t vapi_msg_id_abf_itf_attach_dump;
extern vapi_msg_id_t vapi_msg_id_abf_itf_attach_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_abf_policy_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_abf_policy_add_del;
extern vapi_msg_id_t vapi_msg_id_abf_policy_dump;
extern vapi_msg_id_t vapi_msg_id_abf_itf_attach_details;
extern vapi_msg_id_t vapi_msg_id_abf_policy_details;

#define DEFINE_VAPI_MSG_IDS_ABF_API_JSON\
  vapi_msg_id_t vapi_msg_id_abf_plugin_get_version_reply;\
  vapi_msg_id_t vapi_msg_id_abf_itf_attach_add_del;\
  vapi_msg_id_t vapi_msg_id_abf_plugin_get_version;\
  vapi_msg_id_t vapi_msg_id_abf_itf_attach_dump;\
  vapi_msg_id_t vapi_msg_id_abf_itf_attach_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_abf_policy_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_abf_policy_add_del;\
  vapi_msg_id_t vapi_msg_id_abf_policy_dump;\
  vapi_msg_id_t vapi_msg_id_abf_itf_attach_details;\
  vapi_msg_id_t vapi_msg_id_abf_policy_details;


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

#ifndef defined_vapi_type_abf_itf_attach
#define defined_vapi_type_abf_itf_attach
typedef struct __attribute__((__packed__)) {
  u32 policy_id;
  u32 sw_if_index;
  u32 priority;
  u8 is_ipv6;
} vapi_type_abf_itf_attach;

static inline void vapi_type_abf_itf_attach_hton(vapi_type_abf_itf_attach *msg)
{
  msg->policy_id = htobe32(msg->policy_id);
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->priority = htobe32(msg->priority);
}

static inline void vapi_type_abf_itf_attach_ntoh(vapi_type_abf_itf_attach *msg)
{
  msg->policy_id = be32toh(msg->policy_id);
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->priority = be32toh(msg->priority);
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

#ifndef defined_vapi_type_abf_policy
#define defined_vapi_type_abf_policy
typedef struct __attribute__((__packed__)) {
  u32 policy_id;
  u32 acl_index;
  u8 n_paths;
  vapi_type_fib_path paths[0];
} vapi_type_abf_policy;

static inline void vapi_type_abf_policy_hton(vapi_type_abf_policy *msg)
{
  msg->policy_id = htobe32(msg->policy_id);
  msg->acl_index = htobe32(msg->acl_index);
  do { unsigned i; for (i = 0; i < msg->n_paths; ++i) { vapi_type_fib_path_hton(&msg->paths[i]); } } while(0);
}

static inline void vapi_type_abf_policy_ntoh(vapi_type_abf_policy *msg)
{
  msg->policy_id = be32toh(msg->policy_id);
  msg->acl_index = be32toh(msg->acl_index);
  do { unsigned i; for (i = 0; i < msg->n_paths; ++i) { vapi_type_fib_path_ntoh(&msg->paths[i]); } } while(0);
}
#endif

#ifndef defined_vapi_msg_abf_plugin_get_version_reply
#define defined_vapi_msg_abf_plugin_get_version_reply
typedef struct __attribute__ ((__packed__)) {
  u32 major;
  u32 minor; 
} vapi_payload_abf_plugin_get_version_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_abf_plugin_get_version_reply payload;
} vapi_msg_abf_plugin_get_version_reply;

static inline void vapi_msg_abf_plugin_get_version_reply_payload_hton(vapi_payload_abf_plugin_get_version_reply *payload)
{
  payload->major = htobe32(payload->major);
  payload->minor = htobe32(payload->minor);
}

static inline void vapi_msg_abf_plugin_get_version_reply_payload_ntoh(vapi_payload_abf_plugin_get_version_reply *payload)
{
  payload->major = be32toh(payload->major);
  payload->minor = be32toh(payload->minor);
}

static inline void vapi_msg_abf_plugin_get_version_reply_hton(vapi_msg_abf_plugin_get_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_plugin_get_version_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_abf_plugin_get_version_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_abf_plugin_get_version_reply_ntoh(vapi_msg_abf_plugin_get_version_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_plugin_get_version_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_abf_plugin_get_version_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_abf_plugin_get_version_reply_msg_size(vapi_msg_abf_plugin_get_version_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_abf_plugin_get_version_reply()
{
  static const char name[] = "abf_plugin_get_version_reply";
  static const char name_with_crc[] = "abf_plugin_get_version_reply_9b32cf86";
  static vapi_message_desc_t __vapi_metadata_abf_plugin_get_version_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_abf_plugin_get_version_reply, payload),
    sizeof(vapi_msg_abf_plugin_get_version_reply),
    (generic_swap_fn_t)vapi_msg_abf_plugin_get_version_reply_hton,
    (generic_swap_fn_t)vapi_msg_abf_plugin_get_version_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_plugin_get_version_reply = vapi_register_msg(&__vapi_metadata_abf_plugin_get_version_reply);
  VAPI_DBG("Assigned msg id %d to abf_plugin_get_version_reply", vapi_msg_id_abf_plugin_get_version_reply);
}

static inline void vapi_set_vapi_msg_abf_plugin_get_version_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_abf_plugin_get_version_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_abf_plugin_get_version_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_abf_itf_attach_add_del_reply
#define defined_vapi_msg_abf_itf_attach_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_abf_itf_attach_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_abf_itf_attach_add_del_reply payload;
} vapi_msg_abf_itf_attach_add_del_reply;

static inline void vapi_msg_abf_itf_attach_add_del_reply_payload_hton(vapi_payload_abf_itf_attach_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_abf_itf_attach_add_del_reply_payload_ntoh(vapi_payload_abf_itf_attach_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_abf_itf_attach_add_del_reply_hton(vapi_msg_abf_itf_attach_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_abf_itf_attach_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_abf_itf_attach_add_del_reply_ntoh(vapi_msg_abf_itf_attach_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_abf_itf_attach_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_abf_itf_attach_add_del_reply_msg_size(vapi_msg_abf_itf_attach_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_abf_itf_attach_add_del_reply()
{
  static const char name[] = "abf_itf_attach_add_del_reply";
  static const char name_with_crc[] = "abf_itf_attach_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_abf_itf_attach_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_abf_itf_attach_add_del_reply, payload),
    sizeof(vapi_msg_abf_itf_attach_add_del_reply),
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_itf_attach_add_del_reply = vapi_register_msg(&__vapi_metadata_abf_itf_attach_add_del_reply);
  VAPI_DBG("Assigned msg id %d to abf_itf_attach_add_del_reply", vapi_msg_id_abf_itf_attach_add_del_reply);
}

static inline void vapi_set_vapi_msg_abf_itf_attach_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_abf_itf_attach_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_abf_itf_attach_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_abf_itf_attach_add_del
#define defined_vapi_msg_abf_itf_attach_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_abf_itf_attach attach; 
} vapi_payload_abf_itf_attach_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_abf_itf_attach_add_del payload;
} vapi_msg_abf_itf_attach_add_del;

static inline void vapi_msg_abf_itf_attach_add_del_payload_hton(vapi_payload_abf_itf_attach_add_del *payload)
{
  vapi_type_abf_itf_attach_hton(&payload->attach);
}

static inline void vapi_msg_abf_itf_attach_add_del_payload_ntoh(vapi_payload_abf_itf_attach_add_del *payload)
{
  vapi_type_abf_itf_attach_ntoh(&payload->attach);
}

static inline void vapi_msg_abf_itf_attach_add_del_hton(vapi_msg_abf_itf_attach_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_abf_itf_attach_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_abf_itf_attach_add_del_ntoh(vapi_msg_abf_itf_attach_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_abf_itf_attach_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_abf_itf_attach_add_del_msg_size(vapi_msg_abf_itf_attach_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_abf_itf_attach_add_del* vapi_alloc_abf_itf_attach_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_abf_itf_attach_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_abf_itf_attach_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_abf_itf_attach_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_abf_itf_attach_add_del);

  return msg;
}

static inline vapi_error_e vapi_abf_itf_attach_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_abf_itf_attach_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_abf_itf_attach_add_del_reply *reply),
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
  vapi_msg_abf_itf_attach_add_del_hton(msg);
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
    vapi_msg_abf_itf_attach_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_abf_itf_attach_add_del()
{
  static const char name[] = "abf_itf_attach_add_del";
  static const char name_with_crc[] = "abf_itf_attach_add_del_4464f87d";
  static vapi_message_desc_t __vapi_metadata_abf_itf_attach_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_abf_itf_attach_add_del, payload),
    sizeof(vapi_msg_abf_itf_attach_add_del),
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_add_del_hton,
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_itf_attach_add_del = vapi_register_msg(&__vapi_metadata_abf_itf_attach_add_del);
  VAPI_DBG("Assigned msg id %d to abf_itf_attach_add_del", vapi_msg_id_abf_itf_attach_add_del);
}
#endif

#ifndef defined_vapi_msg_abf_plugin_get_version
#define defined_vapi_msg_abf_plugin_get_version
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_abf_plugin_get_version;

static inline void vapi_msg_abf_plugin_get_version_hton(vapi_msg_abf_plugin_get_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_plugin_get_version'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_abf_plugin_get_version_ntoh(vapi_msg_abf_plugin_get_version *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_plugin_get_version'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_abf_plugin_get_version_msg_size(vapi_msg_abf_plugin_get_version *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_abf_plugin_get_version* vapi_alloc_abf_plugin_get_version(struct vapi_ctx_s *ctx)
{
  vapi_msg_abf_plugin_get_version *msg = NULL;
  const size_t size = sizeof(vapi_msg_abf_plugin_get_version);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_abf_plugin_get_version*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_abf_plugin_get_version);

  return msg;
}

static inline vapi_error_e vapi_abf_plugin_get_version(struct vapi_ctx_s *ctx,
  vapi_msg_abf_plugin_get_version *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_abf_plugin_get_version_reply *reply),
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
  vapi_msg_abf_plugin_get_version_hton(msg);
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
    vapi_msg_abf_plugin_get_version_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_abf_plugin_get_version()
{
  static const char name[] = "abf_plugin_get_version";
  static const char name_with_crc[] = "abf_plugin_get_version_51077d14";
  static vapi_message_desc_t __vapi_metadata_abf_plugin_get_version = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_abf_plugin_get_version),
    (generic_swap_fn_t)vapi_msg_abf_plugin_get_version_hton,
    (generic_swap_fn_t)vapi_msg_abf_plugin_get_version_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_plugin_get_version = vapi_register_msg(&__vapi_metadata_abf_plugin_get_version);
  VAPI_DBG("Assigned msg id %d to abf_plugin_get_version", vapi_msg_id_abf_plugin_get_version);
}
#endif

#ifndef defined_vapi_msg_abf_itf_attach_details
#define defined_vapi_msg_abf_itf_attach_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_abf_itf_attach attach; 
} vapi_payload_abf_itf_attach_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_abf_itf_attach_details payload;
} vapi_msg_abf_itf_attach_details;

static inline void vapi_msg_abf_itf_attach_details_payload_hton(vapi_payload_abf_itf_attach_details *payload)
{
  vapi_type_abf_itf_attach_hton(&payload->attach);
}

static inline void vapi_msg_abf_itf_attach_details_payload_ntoh(vapi_payload_abf_itf_attach_details *payload)
{
  vapi_type_abf_itf_attach_ntoh(&payload->attach);
}

static inline void vapi_msg_abf_itf_attach_details_hton(vapi_msg_abf_itf_attach_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_abf_itf_attach_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_abf_itf_attach_details_ntoh(vapi_msg_abf_itf_attach_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_abf_itf_attach_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_abf_itf_attach_details_msg_size(vapi_msg_abf_itf_attach_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_abf_itf_attach_details()
{
  static const char name[] = "abf_itf_attach_details";
  static const char name_with_crc[] = "abf_itf_attach_details_4a943370";
  static vapi_message_desc_t __vapi_metadata_abf_itf_attach_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_abf_itf_attach_details, payload),
    sizeof(vapi_msg_abf_itf_attach_details),
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_details_hton,
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_itf_attach_details = vapi_register_msg(&__vapi_metadata_abf_itf_attach_details);
  VAPI_DBG("Assigned msg id %d to abf_itf_attach_details", vapi_msg_id_abf_itf_attach_details);
}

static inline void vapi_set_vapi_msg_abf_itf_attach_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_abf_itf_attach_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_abf_itf_attach_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_abf_itf_attach_dump
#define defined_vapi_msg_abf_itf_attach_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_abf_itf_attach_dump;

static inline void vapi_msg_abf_itf_attach_dump_hton(vapi_msg_abf_itf_attach_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_abf_itf_attach_dump_ntoh(vapi_msg_abf_itf_attach_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_itf_attach_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_abf_itf_attach_dump_msg_size(vapi_msg_abf_itf_attach_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_abf_itf_attach_dump* vapi_alloc_abf_itf_attach_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_abf_itf_attach_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_abf_itf_attach_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_abf_itf_attach_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_abf_itf_attach_dump);

  return msg;
}

static inline vapi_error_e vapi_abf_itf_attach_dump(struct vapi_ctx_s *ctx,
  vapi_msg_abf_itf_attach_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_abf_itf_attach_details *reply),
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
  vapi_msg_abf_itf_attach_dump_hton(msg);
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
    vapi_msg_abf_itf_attach_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_abf_itf_attach_dump()
{
  static const char name[] = "abf_itf_attach_dump";
  static const char name_with_crc[] = "abf_itf_attach_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_abf_itf_attach_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_abf_itf_attach_dump),
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_dump_hton,
    (generic_swap_fn_t)vapi_msg_abf_itf_attach_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_itf_attach_dump = vapi_register_msg(&__vapi_metadata_abf_itf_attach_dump);
  VAPI_DBG("Assigned msg id %d to abf_itf_attach_dump", vapi_msg_id_abf_itf_attach_dump);
}
#endif

#ifndef defined_vapi_msg_abf_policy_add_del_reply
#define defined_vapi_msg_abf_policy_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_abf_policy_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_abf_policy_add_del_reply payload;
} vapi_msg_abf_policy_add_del_reply;

static inline void vapi_msg_abf_policy_add_del_reply_payload_hton(vapi_payload_abf_policy_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_abf_policy_add_del_reply_payload_ntoh(vapi_payload_abf_policy_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_abf_policy_add_del_reply_hton(vapi_msg_abf_policy_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_abf_policy_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_abf_policy_add_del_reply_ntoh(vapi_msg_abf_policy_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_abf_policy_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_abf_policy_add_del_reply_msg_size(vapi_msg_abf_policy_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_abf_policy_add_del_reply()
{
  static const char name[] = "abf_policy_add_del_reply";
  static const char name_with_crc[] = "abf_policy_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_abf_policy_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_abf_policy_add_del_reply, payload),
    sizeof(vapi_msg_abf_policy_add_del_reply),
    (generic_swap_fn_t)vapi_msg_abf_policy_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_abf_policy_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_policy_add_del_reply = vapi_register_msg(&__vapi_metadata_abf_policy_add_del_reply);
  VAPI_DBG("Assigned msg id %d to abf_policy_add_del_reply", vapi_msg_id_abf_policy_add_del_reply);
}

static inline void vapi_set_vapi_msg_abf_policy_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_abf_policy_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_abf_policy_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_abf_policy_add_del
#define defined_vapi_msg_abf_policy_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_abf_policy policy; 
} vapi_payload_abf_policy_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_abf_policy_add_del payload;
} vapi_msg_abf_policy_add_del;

static inline void vapi_msg_abf_policy_add_del_payload_hton(vapi_payload_abf_policy_add_del *payload)
{
  vapi_type_abf_policy_hton(&payload->policy);
}

static inline void vapi_msg_abf_policy_add_del_payload_ntoh(vapi_payload_abf_policy_add_del *payload)
{
  vapi_type_abf_policy_ntoh(&payload->policy);
}

static inline void vapi_msg_abf_policy_add_del_hton(vapi_msg_abf_policy_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_abf_policy_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_abf_policy_add_del_ntoh(vapi_msg_abf_policy_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_abf_policy_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_abf_policy_add_del_msg_size(vapi_msg_abf_policy_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_abf_policy_add_del* vapi_alloc_abf_policy_add_del(struct vapi_ctx_s *ctx, size_t policy_paths_array_size)
{
  vapi_msg_abf_policy_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_abf_policy_add_del) + sizeof(msg->payload.policy.paths[0]) * policy_paths_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_abf_policy_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_abf_policy_add_del);
  msg->payload.policy.n_paths = policy_paths_array_size;

  return msg;
}

static inline vapi_error_e vapi_abf_policy_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_abf_policy_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_abf_policy_add_del_reply *reply),
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
  vapi_msg_abf_policy_add_del_hton(msg);
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
    vapi_msg_abf_policy_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_abf_policy_add_del()
{
  static const char name[] = "abf_policy_add_del";
  static const char name_with_crc[] = "abf_policy_add_del_d1fc434d";
  static vapi_message_desc_t __vapi_metadata_abf_policy_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_abf_policy_add_del, payload),
    sizeof(vapi_msg_abf_policy_add_del),
    (generic_swap_fn_t)vapi_msg_abf_policy_add_del_hton,
    (generic_swap_fn_t)vapi_msg_abf_policy_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_policy_add_del = vapi_register_msg(&__vapi_metadata_abf_policy_add_del);
  VAPI_DBG("Assigned msg id %d to abf_policy_add_del", vapi_msg_id_abf_policy_add_del);
}
#endif

#ifndef defined_vapi_msg_abf_policy_details
#define defined_vapi_msg_abf_policy_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_abf_policy policy; 
} vapi_payload_abf_policy_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_abf_policy_details payload;
} vapi_msg_abf_policy_details;

static inline void vapi_msg_abf_policy_details_payload_hton(vapi_payload_abf_policy_details *payload)
{
  vapi_type_abf_policy_hton(&payload->policy);
}

static inline void vapi_msg_abf_policy_details_payload_ntoh(vapi_payload_abf_policy_details *payload)
{
  vapi_type_abf_policy_ntoh(&payload->policy);
}

static inline void vapi_msg_abf_policy_details_hton(vapi_msg_abf_policy_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_abf_policy_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_abf_policy_details_ntoh(vapi_msg_abf_policy_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_abf_policy_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_abf_policy_details_msg_size(vapi_msg_abf_policy_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_abf_policy_details()
{
  static const char name[] = "abf_policy_details";
  static const char name_with_crc[] = "abf_policy_details_c19593c8";
  static vapi_message_desc_t __vapi_metadata_abf_policy_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_abf_policy_details, payload),
    sizeof(vapi_msg_abf_policy_details),
    (generic_swap_fn_t)vapi_msg_abf_policy_details_hton,
    (generic_swap_fn_t)vapi_msg_abf_policy_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_policy_details = vapi_register_msg(&__vapi_metadata_abf_policy_details);
  VAPI_DBG("Assigned msg id %d to abf_policy_details", vapi_msg_id_abf_policy_details);
}

static inline void vapi_set_vapi_msg_abf_policy_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_abf_policy_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_abf_policy_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_abf_policy_dump
#define defined_vapi_msg_abf_policy_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_abf_policy_dump;

static inline void vapi_msg_abf_policy_dump_hton(vapi_msg_abf_policy_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_abf_policy_dump_ntoh(vapi_msg_abf_policy_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_abf_policy_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_abf_policy_dump_msg_size(vapi_msg_abf_policy_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_abf_policy_dump* vapi_alloc_abf_policy_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_abf_policy_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_abf_policy_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_abf_policy_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_abf_policy_dump);

  return msg;
}

static inline vapi_error_e vapi_abf_policy_dump(struct vapi_ctx_s *ctx,
  vapi_msg_abf_policy_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_abf_policy_details *reply),
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
  vapi_msg_abf_policy_dump_hton(msg);
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
    vapi_msg_abf_policy_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_abf_policy_dump()
{
  static const char name[] = "abf_policy_dump";
  static const char name_with_crc[] = "abf_policy_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_abf_policy_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_abf_policy_dump),
    (generic_swap_fn_t)vapi_msg_abf_policy_dump_hton,
    (generic_swap_fn_t)vapi_msg_abf_policy_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_abf_policy_dump = vapi_register_msg(&__vapi_metadata_abf_policy_dump);
  VAPI_DBG("Assigned msg id %d to abf_policy_dump", vapi_msg_id_abf_policy_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
