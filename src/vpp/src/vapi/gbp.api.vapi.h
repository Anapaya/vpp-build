#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_gbp_gbp_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_gbp_gbp_api_json

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

extern vapi_msg_id_t vapi_msg_id_gbp_subnet_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_recirc_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_contract_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_route_domain_add_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_details;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_add;
extern vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_del;
extern vapi_msg_id_t vapi_msg_id_gbp_route_domain_del;
extern vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_details;
extern vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_add;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_del;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_del;
extern vapi_msg_id_t vapi_msg_id_gbp_route_domain_details;
extern vapi_msg_id_t vapi_msg_id_gbp_contract_add_del;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_ext_itf_add_del;
extern vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_add_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_add_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_recirc_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_route_domain_add;
extern vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_details;
extern vapi_msg_id_t vapi_msg_id_gbp_route_domain_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_contract_details;
extern vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_del;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_contract_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_ext_itf_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_subnet_details;
extern vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_add;
extern vapi_msg_id_t vapi_msg_id_gbp_subnet_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_ext_itf_details;
extern vapi_msg_id_t vapi_msg_id_gbp_recirc_add_del;
extern vapi_msg_id_t vapi_msg_id_gbp_subnet_add_del;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_details;
extern vapi_msg_id_t vapi_msg_id_gbp_ext_itf_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_add_reply;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_add;
extern vapi_msg_id_t vapi_msg_id_gbp_route_domain_dump;
extern vapi_msg_id_t vapi_msg_id_gbp_recirc_details;
extern vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_add_reply;

#define DEFINE_VAPI_MSG_IDS_GBP_API_JSON\
  vapi_msg_id_t vapi_msg_id_gbp_subnet_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_recirc_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_contract_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_route_domain_add_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_details;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_add;\
  vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_del;\
  vapi_msg_id_t vapi_msg_id_gbp_route_domain_del;\
  vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_details;\
  vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_add;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_del;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_del;\
  vapi_msg_id_t vapi_msg_id_gbp_route_domain_details;\
  vapi_msg_id_t vapi_msg_id_gbp_contract_add_del;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_ext_itf_add_del;\
  vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_add_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_add_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_recirc_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_route_domain_add;\
  vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_details;\
  vapi_msg_id_t vapi_msg_id_gbp_route_domain_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_contract_details;\
  vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_del;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_contract_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_ext_itf_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_subnet_details;\
  vapi_msg_id_t vapi_msg_id_gbp_bridge_domain_add;\
  vapi_msg_id_t vapi_msg_id_gbp_subnet_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_ext_itf_details;\
  vapi_msg_id_t vapi_msg_id_gbp_recirc_add_del;\
  vapi_msg_id_t vapi_msg_id_gbp_subnet_add_del;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_details;\
  vapi_msg_id_t vapi_msg_id_gbp_ext_itf_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_vxlan_tunnel_add_reply;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_add;\
  vapi_msg_id_t vapi_msg_id_gbp_route_domain_dump;\
  vapi_msg_id_t vapi_msg_id_gbp_recirc_details;\
  vapi_msg_id_t vapi_msg_id_gbp_endpoint_group_add_reply;


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

#ifndef defined_vapi_enum_gbp_bridge_domain_flags
#define defined_vapi_enum_gbp_bridge_domain_flags
typedef enum {
  GBP_BD_API_FLAG_NONE = 0,
  GBP_BD_API_FLAG_DO_NOT_LEARN = 1,
  GBP_BD_API_FLAG_UU_FWD_DROP = 2,
  GBP_BD_API_FLAG_MCAST_DROP = 4,
  GBP_BD_API_FLAG_UCAST_ARP = 8,
} vapi_enum_gbp_bridge_domain_flags;

#endif

#ifndef defined_vapi_enum_gbp_endpoint_flags
#define defined_vapi_enum_gbp_endpoint_flags
typedef enum {
  GBP_API_ENDPOINT_FLAG_NONE = 0,
  GBP_API_ENDPOINT_FLAG_BOUNCE = 1,
  GBP_API_ENDPOINT_FLAG_REMOTE = 2,
  GBP_API_ENDPOINT_FLAG_LEARNT = 4,
  GBP_API_ENDPOINT_FLAG_EXTERNAL = 8,
} vapi_enum_gbp_endpoint_flags;

#endif

#ifndef defined_vapi_enum_gbp_subnet_type
#define defined_vapi_enum_gbp_subnet_type
typedef enum {
  GBP_API_SUBNET_TRANSPORT = 1,
  GBP_API_SUBNET_STITCHED_INTERNAL = 2,
  GBP_API_SUBNET_STITCHED_EXTERNAL = 3,
  GBP_API_SUBNET_L3_OUT = 4,
  GBP_API_SUBNET_ANON_L3_OUT = 5,
} vapi_enum_gbp_subnet_type;

#endif

#ifndef defined_vapi_enum_gbp_hash_mode
#define defined_vapi_enum_gbp_hash_mode
typedef enum {
  GBP_API_HASH_MODE_SRC_IP = 1,
  GBP_API_HASH_MODE_DST_IP = 2,
  GBP_API_HASH_MODE_SYMMETRIC = 3,
} vapi_enum_gbp_hash_mode;

#endif

#ifndef defined_vapi_enum_gbp_rule_action
#define defined_vapi_enum_gbp_rule_action
typedef enum {
  GBP_API_RULE_PERMIT = 1,
  GBP_API_RULE_DENY = 2,
  GBP_API_RULE_REDIRECT = 3,
} vapi_enum_gbp_rule_action;

#endif

#ifndef defined_vapi_enum_gbp_vxlan_tunnel_mode
#define defined_vapi_enum_gbp_vxlan_tunnel_mode
typedef enum {
  GBP_VXLAN_TUNNEL_MODE_L2 = 1,
  GBP_VXLAN_TUNNEL_MODE_L3 = 2,
} vapi_enum_gbp_vxlan_tunnel_mode;

#endif

#ifndef defined_vapi_enum_gbp_ext_itf_flags
#define defined_vapi_enum_gbp_ext_itf_flags
typedef enum {
  GBP_API_EXT_ITF_F_NONE = 0,
  GBP_API_EXT_ITF_F_ANON = 1,
} vapi_enum_gbp_ext_itf_flags;

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

#ifndef defined_vapi_type_gbp_bridge_domain
#define defined_vapi_type_gbp_bridge_domain
typedef struct __attribute__((__packed__)) {
  u32 bd_id;
  u32 rd_id;
  vapi_enum_gbp_bridge_domain_flags flags;
  u32 bvi_sw_if_index;
  u32 uu_fwd_sw_if_index;
  u32 bm_flood_sw_if_index;
} vapi_type_gbp_bridge_domain;

static inline void vapi_type_gbp_bridge_domain_hton(vapi_type_gbp_bridge_domain *msg)
{
  msg->bd_id = htobe32(msg->bd_id);
  msg->rd_id = htobe32(msg->rd_id);
  msg->flags = (vapi_enum_gbp_bridge_domain_flags)htobe32(msg->flags);
  msg->bvi_sw_if_index = htobe32(msg->bvi_sw_if_index);
  msg->uu_fwd_sw_if_index = htobe32(msg->uu_fwd_sw_if_index);
  msg->bm_flood_sw_if_index = htobe32(msg->bm_flood_sw_if_index);
}

static inline void vapi_type_gbp_bridge_domain_ntoh(vapi_type_gbp_bridge_domain *msg)
{
  msg->bd_id = be32toh(msg->bd_id);
  msg->rd_id = be32toh(msg->rd_id);
  msg->flags = (vapi_enum_gbp_bridge_domain_flags)be32toh(msg->flags);
  msg->bvi_sw_if_index = be32toh(msg->bvi_sw_if_index);
  msg->uu_fwd_sw_if_index = be32toh(msg->uu_fwd_sw_if_index);
  msg->bm_flood_sw_if_index = be32toh(msg->bm_flood_sw_if_index);
}
#endif

#ifndef defined_vapi_type_gbp_endpoint_retention
#define defined_vapi_type_gbp_endpoint_retention
typedef struct __attribute__((__packed__)) {
  u32 remote_ep_timeout;
} vapi_type_gbp_endpoint_retention;

static inline void vapi_type_gbp_endpoint_retention_hton(vapi_type_gbp_endpoint_retention *msg)
{
  msg->remote_ep_timeout = htobe32(msg->remote_ep_timeout);
}

static inline void vapi_type_gbp_endpoint_retention_ntoh(vapi_type_gbp_endpoint_retention *msg)
{
  msg->remote_ep_timeout = be32toh(msg->remote_ep_timeout);
}
#endif

#ifndef defined_vapi_type_gbp_endpoint_group
#define defined_vapi_type_gbp_endpoint_group
typedef struct __attribute__((__packed__)) {
  u32 vnid;
  u16 sclass;
  u32 bd_id;
  u32 rd_id;
  u32 uplink_sw_if_index;
  vapi_type_gbp_endpoint_retention retention;
} vapi_type_gbp_endpoint_group;

static inline void vapi_type_gbp_endpoint_group_hton(vapi_type_gbp_endpoint_group *msg)
{
  msg->vnid = htobe32(msg->vnid);
  msg->sclass = htobe16(msg->sclass);
  msg->bd_id = htobe32(msg->bd_id);
  msg->rd_id = htobe32(msg->rd_id);
  msg->uplink_sw_if_index = htobe32(msg->uplink_sw_if_index);
  vapi_type_gbp_endpoint_retention_hton(&msg->retention);
}

static inline void vapi_type_gbp_endpoint_group_ntoh(vapi_type_gbp_endpoint_group *msg)
{
  msg->vnid = be32toh(msg->vnid);
  msg->sclass = be16toh(msg->sclass);
  msg->bd_id = be32toh(msg->bd_id);
  msg->rd_id = be32toh(msg->rd_id);
  msg->uplink_sw_if_index = be32toh(msg->uplink_sw_if_index);
  vapi_type_gbp_endpoint_retention_ntoh(&msg->retention);
}
#endif

#ifndef defined_vapi_type_gbp_recirc
#define defined_vapi_type_gbp_recirc
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  u16 sclass;
  u8 is_ext;
} vapi_type_gbp_recirc;

static inline void vapi_type_gbp_recirc_hton(vapi_type_gbp_recirc *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->sclass = htobe16(msg->sclass);
}

static inline void vapi_type_gbp_recirc_ntoh(vapi_type_gbp_recirc *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->sclass = be16toh(msg->sclass);
}
#endif

#ifndef defined_vapi_type_gbp_ext_itf
#define defined_vapi_type_gbp_ext_itf
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  u32 bd_id;
  u32 rd_id;
  vapi_enum_gbp_ext_itf_flags flags;
} vapi_type_gbp_ext_itf;

static inline void vapi_type_gbp_ext_itf_hton(vapi_type_gbp_ext_itf *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->bd_id = htobe32(msg->bd_id);
  msg->rd_id = htobe32(msg->rd_id);
  msg->flags = (vapi_enum_gbp_ext_itf_flags)htobe32(msg->flags);
}

static inline void vapi_type_gbp_ext_itf_ntoh(vapi_type_gbp_ext_itf *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->bd_id = be32toh(msg->bd_id);
  msg->rd_id = be32toh(msg->rd_id);
  msg->flags = (vapi_enum_gbp_ext_itf_flags)be32toh(msg->flags);
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

#ifndef defined_vapi_type_gbp_scope
#define defined_vapi_type_gbp_scope
typedef u16 vapi_type_gbp_scope;

#endif

#ifndef defined_vapi_type_gbp_route_domain
#define defined_vapi_type_gbp_route_domain
typedef struct __attribute__((__packed__)) {
  u32 rd_id;
  u32 ip4_table_id;
  u32 ip6_table_id;
  u32 ip4_uu_sw_if_index;
  u32 ip6_uu_sw_if_index;
  vapi_type_gbp_scope scope;
} vapi_type_gbp_route_domain;

static inline void vapi_type_gbp_route_domain_hton(vapi_type_gbp_route_domain *msg)
{
  msg->rd_id = htobe32(msg->rd_id);
  msg->ip4_table_id = htobe32(msg->ip4_table_id);
  msg->ip6_table_id = htobe32(msg->ip6_table_id);
  msg->ip4_uu_sw_if_index = htobe32(msg->ip4_uu_sw_if_index);
  msg->ip6_uu_sw_if_index = htobe32(msg->ip6_uu_sw_if_index);
  msg->scope = htobe16(msg->scope);
}

static inline void vapi_type_gbp_route_domain_ntoh(vapi_type_gbp_route_domain *msg)
{
  msg->rd_id = be32toh(msg->rd_id);
  msg->ip4_table_id = be32toh(msg->ip4_table_id);
  msg->ip6_table_id = be32toh(msg->ip6_table_id);
  msg->ip4_uu_sw_if_index = be32toh(msg->ip4_uu_sw_if_index);
  msg->ip6_uu_sw_if_index = be32toh(msg->ip6_uu_sw_if_index);
  msg->scope = be16toh(msg->scope);
}
#endif

#ifndef defined_vapi_type_gbp_endpoint_tun
#define defined_vapi_type_gbp_endpoint_tun
typedef struct __attribute__((__packed__)) {
  vapi_type_address src;
  vapi_type_address dst;
} vapi_type_gbp_endpoint_tun;

static inline void vapi_type_gbp_endpoint_tun_hton(vapi_type_gbp_endpoint_tun *msg)
{
  vapi_type_address_hton(&msg->src);
  vapi_type_address_hton(&msg->dst);
}

static inline void vapi_type_gbp_endpoint_tun_ntoh(vapi_type_gbp_endpoint_tun *msg)
{
  vapi_type_address_ntoh(&msg->src);
  vapi_type_address_ntoh(&msg->dst);
}
#endif

#ifndef defined_vapi_type_mac_address
#define defined_vapi_type_mac_address
typedef u8 vapi_type_mac_address[6];

#endif

#ifndef defined_vapi_type_gbp_endpoint
#define defined_vapi_type_gbp_endpoint
typedef struct __attribute__((__packed__)) {
  u32 sw_if_index;
  u16 sclass;
  vapi_enum_gbp_endpoint_flags flags;
  vapi_type_mac_address mac;
  vapi_type_gbp_endpoint_tun tun;
  u8 n_ips;
  vapi_type_address ips[0];
} vapi_type_gbp_endpoint;

static inline void vapi_type_gbp_endpoint_hton(vapi_type_gbp_endpoint *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->sclass = htobe16(msg->sclass);
  msg->flags = (vapi_enum_gbp_endpoint_flags)htobe32(msg->flags);
  vapi_type_gbp_endpoint_tun_hton(&msg->tun);
  do { unsigned i; for (i = 0; i < msg->n_ips; ++i) { vapi_type_address_hton(&msg->ips[i]); } } while(0);
}

static inline void vapi_type_gbp_endpoint_ntoh(vapi_type_gbp_endpoint *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->sclass = be16toh(msg->sclass);
  msg->flags = (vapi_enum_gbp_endpoint_flags)be32toh(msg->flags);
  vapi_type_gbp_endpoint_tun_ntoh(&msg->tun);
  do { unsigned i; for (i = 0; i < msg->n_ips; ++i) { vapi_type_address_ntoh(&msg->ips[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_gbp_subnet
#define defined_vapi_type_gbp_subnet
typedef struct __attribute__((__packed__)) {
  u32 rd_id;
  u32 sw_if_index;
  u16 sclass;
  vapi_enum_gbp_subnet_type type;
  vapi_type_prefix prefix;
} vapi_type_gbp_subnet;

static inline void vapi_type_gbp_subnet_hton(vapi_type_gbp_subnet *msg)
{
  msg->rd_id = htobe32(msg->rd_id);
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->sclass = htobe16(msg->sclass);
  msg->type = (vapi_enum_gbp_subnet_type)htobe32(msg->type);
  vapi_type_prefix_hton(&msg->prefix);
}

static inline void vapi_type_gbp_subnet_ntoh(vapi_type_gbp_subnet *msg)
{
  msg->rd_id = be32toh(msg->rd_id);
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->sclass = be16toh(msg->sclass);
  msg->type = (vapi_enum_gbp_subnet_type)be32toh(msg->type);
  vapi_type_prefix_ntoh(&msg->prefix);
}
#endif

#ifndef defined_vapi_type_gbp_next_hop
#define defined_vapi_type_gbp_next_hop
typedef struct __attribute__((__packed__)) {
  vapi_type_address ip;
  vapi_type_mac_address mac;
  u32 bd_id;
  u32 rd_id;
} vapi_type_gbp_next_hop;

static inline void vapi_type_gbp_next_hop_hton(vapi_type_gbp_next_hop *msg)
{
  vapi_type_address_hton(&msg->ip);
  msg->bd_id = htobe32(msg->bd_id);
  msg->rd_id = htobe32(msg->rd_id);
}

static inline void vapi_type_gbp_next_hop_ntoh(vapi_type_gbp_next_hop *msg)
{
  vapi_type_address_ntoh(&msg->ip);
  msg->bd_id = be32toh(msg->bd_id);
  msg->rd_id = be32toh(msg->rd_id);
}
#endif

#ifndef defined_vapi_type_gbp_next_hop_set
#define defined_vapi_type_gbp_next_hop_set
typedef struct __attribute__((__packed__)) {
  vapi_enum_gbp_hash_mode hash_mode;
  u8 n_nhs;
  vapi_type_gbp_next_hop nhs[8];
} vapi_type_gbp_next_hop_set;

static inline void vapi_type_gbp_next_hop_set_hton(vapi_type_gbp_next_hop_set *msg)
{
  msg->hash_mode = (vapi_enum_gbp_hash_mode)htobe32(msg->hash_mode);
  do { unsigned i; for (i = 0; i < 8; ++i) { vapi_type_gbp_next_hop_hton(&msg->nhs[i]); } } while(0);
}

static inline void vapi_type_gbp_next_hop_set_ntoh(vapi_type_gbp_next_hop_set *msg)
{
  msg->hash_mode = (vapi_enum_gbp_hash_mode)be32toh(msg->hash_mode);
  do { unsigned i; for (i = 0; i < 8; ++i) { vapi_type_gbp_next_hop_ntoh(&msg->nhs[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_gbp_rule
#define defined_vapi_type_gbp_rule
typedef struct __attribute__((__packed__)) {
  vapi_enum_gbp_rule_action action;
  vapi_type_gbp_next_hop_set nh_set;
} vapi_type_gbp_rule;

static inline void vapi_type_gbp_rule_hton(vapi_type_gbp_rule *msg)
{
  msg->action = (vapi_enum_gbp_rule_action)htobe32(msg->action);
  vapi_type_gbp_next_hop_set_hton(&msg->nh_set);
}

static inline void vapi_type_gbp_rule_ntoh(vapi_type_gbp_rule *msg)
{
  msg->action = (vapi_enum_gbp_rule_action)be32toh(msg->action);
  vapi_type_gbp_next_hop_set_ntoh(&msg->nh_set);
}
#endif

#ifndef defined_vapi_type_gbp_contract
#define defined_vapi_type_gbp_contract
typedef struct __attribute__((__packed__)) {
  vapi_type_gbp_scope scope;
  u16 sclass;
  u16 dclass;
  u32 acl_index;
  u8 n_ether_types;
  u16 allowed_ethertypes[16];
  u8 n_rules;
  vapi_type_gbp_rule rules[0];
} vapi_type_gbp_contract;

static inline void vapi_type_gbp_contract_hton(vapi_type_gbp_contract *msg)
{
  msg->scope = htobe16(msg->scope);
  msg->sclass = htobe16(msg->sclass);
  msg->dclass = htobe16(msg->dclass);
  msg->acl_index = htobe32(msg->acl_index);
  do { unsigned i; for (i = 0; i < 16; ++i) { msg->allowed_ethertypes[i] = htobe16(msg->allowed_ethertypes[i]); } } while(0);
  do { unsigned i; for (i = 0; i < msg->n_rules; ++i) { vapi_type_gbp_rule_hton(&msg->rules[i]); } } while(0);
}

static inline void vapi_type_gbp_contract_ntoh(vapi_type_gbp_contract *msg)
{
  msg->scope = be16toh(msg->scope);
  msg->sclass = be16toh(msg->sclass);
  msg->dclass = be16toh(msg->dclass);
  msg->acl_index = be32toh(msg->acl_index);
  do { unsigned i; for (i = 0; i < 16; ++i) { msg->allowed_ethertypes[i] = be16toh(msg->allowed_ethertypes[i]); } } while(0);
  do { unsigned i; for (i = 0; i < msg->n_rules; ++i) { vapi_type_gbp_rule_ntoh(&msg->rules[i]); } } while(0);
}
#endif

#ifndef defined_vapi_type_gbp_vxlan_tunnel
#define defined_vapi_type_gbp_vxlan_tunnel
typedef struct __attribute__((__packed__)) {
  u32 vni;
  vapi_enum_gbp_vxlan_tunnel_mode mode;
  u32 bd_rd_id;
  vapi_type_ip4_address src;
} vapi_type_gbp_vxlan_tunnel;

static inline void vapi_type_gbp_vxlan_tunnel_hton(vapi_type_gbp_vxlan_tunnel *msg)
{
  msg->vni = htobe32(msg->vni);
  msg->mode = (vapi_enum_gbp_vxlan_tunnel_mode)htobe32(msg->mode);
  msg->bd_rd_id = htobe32(msg->bd_rd_id);
}

static inline void vapi_type_gbp_vxlan_tunnel_ntoh(vapi_type_gbp_vxlan_tunnel *msg)
{
  msg->vni = be32toh(msg->vni);
  msg->mode = (vapi_enum_gbp_vxlan_tunnel_mode)be32toh(msg->mode);
  msg->bd_rd_id = be32toh(msg->bd_rd_id);
}
#endif

#ifndef defined_vapi_type_address_with_prefix
#define defined_vapi_type_address_with_prefix
typedef vapi_type_prefix vapi_type_address_with_prefix;

#endif

#ifndef defined_vapi_type_ip6_address_with_prefix
#define defined_vapi_type_ip6_address_with_prefix
typedef vapi_type_ip6_prefix vapi_type_ip6_address_with_prefix;

#endif

#ifndef defined_vapi_type_ip4_address_with_prefix
#define defined_vapi_type_ip4_address_with_prefix
typedef vapi_type_ip4_prefix vapi_type_ip4_address_with_prefix;

#endif

#ifndef defined_vapi_msg_gbp_subnet_details
#define defined_vapi_msg_gbp_subnet_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_subnet subnet; 
} vapi_payload_gbp_subnet_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_subnet_details payload;
} vapi_msg_gbp_subnet_details;

static inline void vapi_msg_gbp_subnet_details_payload_hton(vapi_payload_gbp_subnet_details *payload)
{
  vapi_type_gbp_subnet_hton(&payload->subnet);
}

static inline void vapi_msg_gbp_subnet_details_payload_ntoh(vapi_payload_gbp_subnet_details *payload)
{
  vapi_type_gbp_subnet_ntoh(&payload->subnet);
}

static inline void vapi_msg_gbp_subnet_details_hton(vapi_msg_gbp_subnet_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_subnet_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_subnet_details_ntoh(vapi_msg_gbp_subnet_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_subnet_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_subnet_details_msg_size(vapi_msg_gbp_subnet_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_subnet_details()
{
  static const char name[] = "gbp_subnet_details";
  static const char name_with_crc[] = "gbp_subnet_details_871555dc";
  static vapi_message_desc_t __vapi_metadata_gbp_subnet_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_subnet_details, payload),
    sizeof(vapi_msg_gbp_subnet_details),
    (generic_swap_fn_t)vapi_msg_gbp_subnet_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_subnet_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_subnet_details = vapi_register_msg(&__vapi_metadata_gbp_subnet_details);
  VAPI_DBG("Assigned msg id %d to gbp_subnet_details", vapi_msg_id_gbp_subnet_details);
}

static inline void vapi_set_vapi_msg_gbp_subnet_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_subnet_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_subnet_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_subnet_dump
#define defined_vapi_msg_gbp_subnet_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_subnet_dump;

static inline void vapi_msg_gbp_subnet_dump_hton(vapi_msg_gbp_subnet_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_subnet_dump_ntoh(vapi_msg_gbp_subnet_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_subnet_dump_msg_size(vapi_msg_gbp_subnet_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_subnet_dump* vapi_alloc_gbp_subnet_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_subnet_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_subnet_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_subnet_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_subnet_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_subnet_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_subnet_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_subnet_details *reply),
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
  vapi_msg_gbp_subnet_dump_hton(msg);
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
    vapi_msg_gbp_subnet_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_subnet_dump()
{
  static const char name[] = "gbp_subnet_dump";
  static const char name_with_crc[] = "gbp_subnet_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_subnet_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_subnet_dump),
    (generic_swap_fn_t)vapi_msg_gbp_subnet_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_subnet_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_subnet_dump = vapi_register_msg(&__vapi_metadata_gbp_subnet_dump);
  VAPI_DBG("Assigned msg id %d to gbp_subnet_dump", vapi_msg_id_gbp_subnet_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_recirc_details
#define defined_vapi_msg_gbp_recirc_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_recirc recirc; 
} vapi_payload_gbp_recirc_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_recirc_details payload;
} vapi_msg_gbp_recirc_details;

static inline void vapi_msg_gbp_recirc_details_payload_hton(vapi_payload_gbp_recirc_details *payload)
{
  vapi_type_gbp_recirc_hton(&payload->recirc);
}

static inline void vapi_msg_gbp_recirc_details_payload_ntoh(vapi_payload_gbp_recirc_details *payload)
{
  vapi_type_gbp_recirc_ntoh(&payload->recirc);
}

static inline void vapi_msg_gbp_recirc_details_hton(vapi_msg_gbp_recirc_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_recirc_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_recirc_details_ntoh(vapi_msg_gbp_recirc_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_recirc_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_recirc_details_msg_size(vapi_msg_gbp_recirc_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_recirc_details()
{
  static const char name[] = "gbp_recirc_details";
  static const char name_with_crc[] = "gbp_recirc_details_3b048478";
  static vapi_message_desc_t __vapi_metadata_gbp_recirc_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_recirc_details, payload),
    sizeof(vapi_msg_gbp_recirc_details),
    (generic_swap_fn_t)vapi_msg_gbp_recirc_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_recirc_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_recirc_details = vapi_register_msg(&__vapi_metadata_gbp_recirc_details);
  VAPI_DBG("Assigned msg id %d to gbp_recirc_details", vapi_msg_id_gbp_recirc_details);
}

static inline void vapi_set_vapi_msg_gbp_recirc_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_recirc_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_recirc_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_recirc_dump
#define defined_vapi_msg_gbp_recirc_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_recirc_dump;

static inline void vapi_msg_gbp_recirc_dump_hton(vapi_msg_gbp_recirc_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_recirc_dump_ntoh(vapi_msg_gbp_recirc_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_recirc_dump_msg_size(vapi_msg_gbp_recirc_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_recirc_dump* vapi_alloc_gbp_recirc_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_recirc_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_recirc_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_recirc_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_recirc_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_recirc_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_recirc_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_recirc_details *reply),
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
  vapi_msg_gbp_recirc_dump_hton(msg);
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
    vapi_msg_gbp_recirc_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_recirc_dump()
{
  static const char name[] = "gbp_recirc_dump";
  static const char name_with_crc[] = "gbp_recirc_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_recirc_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_recirc_dump),
    (generic_swap_fn_t)vapi_msg_gbp_recirc_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_recirc_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_recirc_dump = vapi_register_msg(&__vapi_metadata_gbp_recirc_dump);
  VAPI_DBG("Assigned msg id %d to gbp_recirc_dump", vapi_msg_id_gbp_recirc_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_contract_add_del_reply
#define defined_vapi_msg_gbp_contract_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 stats_index; 
} vapi_payload_gbp_contract_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_contract_add_del_reply payload;
} vapi_msg_gbp_contract_add_del_reply;

static inline void vapi_msg_gbp_contract_add_del_reply_payload_hton(vapi_payload_gbp_contract_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->stats_index = htobe32(payload->stats_index);
}

static inline void vapi_msg_gbp_contract_add_del_reply_payload_ntoh(vapi_payload_gbp_contract_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->stats_index = be32toh(payload->stats_index);
}

static inline void vapi_msg_gbp_contract_add_del_reply_hton(vapi_msg_gbp_contract_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_contract_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_contract_add_del_reply_ntoh(vapi_msg_gbp_contract_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_contract_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_contract_add_del_reply_msg_size(vapi_msg_gbp_contract_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_contract_add_del_reply()
{
  static const char name[] = "gbp_contract_add_del_reply";
  static const char name_with_crc[] = "gbp_contract_add_del_reply_1992deab";
  static vapi_message_desc_t __vapi_metadata_gbp_contract_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_contract_add_del_reply, payload),
    sizeof(vapi_msg_gbp_contract_add_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_contract_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_contract_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_contract_add_del_reply = vapi_register_msg(&__vapi_metadata_gbp_contract_add_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_contract_add_del_reply", vapi_msg_id_gbp_contract_add_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_contract_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_contract_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_contract_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_route_domain_add_reply
#define defined_vapi_msg_gbp_route_domain_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_route_domain_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_route_domain_add_reply payload;
} vapi_msg_gbp_route_domain_add_reply;

static inline void vapi_msg_gbp_route_domain_add_reply_payload_hton(vapi_payload_gbp_route_domain_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_route_domain_add_reply_payload_ntoh(vapi_payload_gbp_route_domain_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_route_domain_add_reply_hton(vapi_msg_gbp_route_domain_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_route_domain_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_route_domain_add_reply_ntoh(vapi_msg_gbp_route_domain_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_route_domain_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_route_domain_add_reply_msg_size(vapi_msg_gbp_route_domain_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_route_domain_add_reply()
{
  static const char name[] = "gbp_route_domain_add_reply";
  static const char name_with_crc[] = "gbp_route_domain_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_route_domain_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_route_domain_add_reply, payload),
    sizeof(vapi_msg_gbp_route_domain_add_reply),
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_route_domain_add_reply = vapi_register_msg(&__vapi_metadata_gbp_route_domain_add_reply);
  VAPI_DBG("Assigned msg id %d to gbp_route_domain_add_reply", vapi_msg_id_gbp_route_domain_add_reply);
}

static inline void vapi_set_vapi_msg_gbp_route_domain_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_route_domain_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_route_domain_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_endpoint_group_details
#define defined_vapi_msg_gbp_endpoint_group_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_endpoint_group epg; 
} vapi_payload_gbp_endpoint_group_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_endpoint_group_details payload;
} vapi_msg_gbp_endpoint_group_details;

static inline void vapi_msg_gbp_endpoint_group_details_payload_hton(vapi_payload_gbp_endpoint_group_details *payload)
{
  vapi_type_gbp_endpoint_group_hton(&payload->epg);
}

static inline void vapi_msg_gbp_endpoint_group_details_payload_ntoh(vapi_payload_gbp_endpoint_group_details *payload)
{
  vapi_type_gbp_endpoint_group_ntoh(&payload->epg);
}

static inline void vapi_msg_gbp_endpoint_group_details_hton(vapi_msg_gbp_endpoint_group_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_group_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_group_details_ntoh(vapi_msg_gbp_endpoint_group_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_group_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_group_details_msg_size(vapi_msg_gbp_endpoint_group_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_group_details()
{
  static const char name[] = "gbp_endpoint_group_details";
  static const char name_with_crc[] = "gbp_endpoint_group_details_4bf0705b";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_group_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_endpoint_group_details, payload),
    sizeof(vapi_msg_gbp_endpoint_group_details),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_group_details = vapi_register_msg(&__vapi_metadata_gbp_endpoint_group_details);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_group_details", vapi_msg_id_gbp_endpoint_group_details);
}

static inline void vapi_set_vapi_msg_gbp_endpoint_group_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_endpoint_group_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_endpoint_group_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_endpoint_add_reply
#define defined_vapi_msg_gbp_endpoint_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 handle; 
} vapi_payload_gbp_endpoint_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_endpoint_add_reply payload;
} vapi_msg_gbp_endpoint_add_reply;

static inline void vapi_msg_gbp_endpoint_add_reply_payload_hton(vapi_payload_gbp_endpoint_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->handle = htobe32(payload->handle);
}

static inline void vapi_msg_gbp_endpoint_add_reply_payload_ntoh(vapi_payload_gbp_endpoint_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->handle = be32toh(payload->handle);
}

static inline void vapi_msg_gbp_endpoint_add_reply_hton(vapi_msg_gbp_endpoint_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_add_reply_ntoh(vapi_msg_gbp_endpoint_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_add_reply_msg_size(vapi_msg_gbp_endpoint_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_add_reply()
{
  static const char name[] = "gbp_endpoint_add_reply";
  static const char name_with_crc[] = "gbp_endpoint_add_reply_1dd3ff3e";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_endpoint_add_reply, payload),
    sizeof(vapi_msg_gbp_endpoint_add_reply),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_add_reply = vapi_register_msg(&__vapi_metadata_gbp_endpoint_add_reply);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_add_reply", vapi_msg_id_gbp_endpoint_add_reply);
}

static inline void vapi_set_vapi_msg_gbp_endpoint_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_endpoint_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_endpoint_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_endpoint_add
#define defined_vapi_msg_gbp_endpoint_add
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_endpoint endpoint; 
} vapi_payload_gbp_endpoint_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_endpoint_add payload;
} vapi_msg_gbp_endpoint_add;

static inline void vapi_msg_gbp_endpoint_add_payload_hton(vapi_payload_gbp_endpoint_add *payload)
{
  vapi_type_gbp_endpoint_hton(&payload->endpoint);
}

static inline void vapi_msg_gbp_endpoint_add_payload_ntoh(vapi_payload_gbp_endpoint_add *payload)
{
  vapi_type_gbp_endpoint_ntoh(&payload->endpoint);
}

static inline void vapi_msg_gbp_endpoint_add_hton(vapi_msg_gbp_endpoint_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_add_ntoh(vapi_msg_gbp_endpoint_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_add_msg_size(vapi_msg_gbp_endpoint_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_endpoint_add* vapi_alloc_gbp_endpoint_add(struct vapi_ctx_s *ctx, size_t endpoint_ips_array_size)
{
  vapi_msg_gbp_endpoint_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_endpoint_add) + sizeof(msg->payload.endpoint.ips[0]) * endpoint_ips_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_endpoint_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_endpoint_add);
  msg->payload.endpoint.n_ips = endpoint_ips_array_size;

  return msg;
}

static inline vapi_error_e vapi_gbp_endpoint_add(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_endpoint_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_endpoint_add_reply *reply),
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
  vapi_msg_gbp_endpoint_add_hton(msg);
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
    vapi_msg_gbp_endpoint_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_add()
{
  static const char name[] = "gbp_endpoint_add";
  static const char name_with_crc[] = "gbp_endpoint_add_f0efa120";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_endpoint_add, payload),
    sizeof(vapi_msg_gbp_endpoint_add),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_add_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_add = vapi_register_msg(&__vapi_metadata_gbp_endpoint_add);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_add", vapi_msg_id_gbp_endpoint_add);
}
#endif

#ifndef defined_vapi_msg_gbp_bridge_domain_del_reply
#define defined_vapi_msg_gbp_bridge_domain_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_bridge_domain_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_bridge_domain_del_reply payload;
} vapi_msg_gbp_bridge_domain_del_reply;

static inline void vapi_msg_gbp_bridge_domain_del_reply_payload_hton(vapi_payload_gbp_bridge_domain_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_bridge_domain_del_reply_payload_ntoh(vapi_payload_gbp_bridge_domain_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_bridge_domain_del_reply_hton(vapi_msg_gbp_bridge_domain_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_bridge_domain_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_bridge_domain_del_reply_ntoh(vapi_msg_gbp_bridge_domain_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_bridge_domain_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_bridge_domain_del_reply_msg_size(vapi_msg_gbp_bridge_domain_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_bridge_domain_del_reply()
{
  static const char name[] = "gbp_bridge_domain_del_reply";
  static const char name_with_crc[] = "gbp_bridge_domain_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_bridge_domain_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_bridge_domain_del_reply, payload),
    sizeof(vapi_msg_gbp_bridge_domain_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_bridge_domain_del_reply = vapi_register_msg(&__vapi_metadata_gbp_bridge_domain_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_bridge_domain_del_reply", vapi_msg_id_gbp_bridge_domain_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_bridge_domain_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_bridge_domain_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_bridge_domain_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_bridge_domain_del
#define defined_vapi_msg_gbp_bridge_domain_del
typedef struct __attribute__ ((__packed__)) {
  u32 bd_id; 
} vapi_payload_gbp_bridge_domain_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_bridge_domain_del payload;
} vapi_msg_gbp_bridge_domain_del;

static inline void vapi_msg_gbp_bridge_domain_del_payload_hton(vapi_payload_gbp_bridge_domain_del *payload)
{
  payload->bd_id = htobe32(payload->bd_id);
}

static inline void vapi_msg_gbp_bridge_domain_del_payload_ntoh(vapi_payload_gbp_bridge_domain_del *payload)
{
  payload->bd_id = be32toh(payload->bd_id);
}

static inline void vapi_msg_gbp_bridge_domain_del_hton(vapi_msg_gbp_bridge_domain_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_bridge_domain_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_bridge_domain_del_ntoh(vapi_msg_gbp_bridge_domain_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_bridge_domain_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_bridge_domain_del_msg_size(vapi_msg_gbp_bridge_domain_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_bridge_domain_del* vapi_alloc_gbp_bridge_domain_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_bridge_domain_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_bridge_domain_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_bridge_domain_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_bridge_domain_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_bridge_domain_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_bridge_domain_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_bridge_domain_del_reply *reply),
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
  vapi_msg_gbp_bridge_domain_del_hton(msg);
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
    vapi_msg_gbp_bridge_domain_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_bridge_domain_del()
{
  static const char name[] = "gbp_bridge_domain_del";
  static const char name_with_crc[] = "gbp_bridge_domain_del_c25fdce6";
  static vapi_message_desc_t __vapi_metadata_gbp_bridge_domain_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_bridge_domain_del, payload),
    sizeof(vapi_msg_gbp_bridge_domain_del),
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_bridge_domain_del = vapi_register_msg(&__vapi_metadata_gbp_bridge_domain_del);
  VAPI_DBG("Assigned msg id %d to gbp_bridge_domain_del", vapi_msg_id_gbp_bridge_domain_del);
}
#endif

#ifndef defined_vapi_msg_gbp_route_domain_del_reply
#define defined_vapi_msg_gbp_route_domain_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_route_domain_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_route_domain_del_reply payload;
} vapi_msg_gbp_route_domain_del_reply;

static inline void vapi_msg_gbp_route_domain_del_reply_payload_hton(vapi_payload_gbp_route_domain_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_route_domain_del_reply_payload_ntoh(vapi_payload_gbp_route_domain_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_route_domain_del_reply_hton(vapi_msg_gbp_route_domain_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_route_domain_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_route_domain_del_reply_ntoh(vapi_msg_gbp_route_domain_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_route_domain_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_route_domain_del_reply_msg_size(vapi_msg_gbp_route_domain_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_route_domain_del_reply()
{
  static const char name[] = "gbp_route_domain_del_reply";
  static const char name_with_crc[] = "gbp_route_domain_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_route_domain_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_route_domain_del_reply, payload),
    sizeof(vapi_msg_gbp_route_domain_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_route_domain_del_reply = vapi_register_msg(&__vapi_metadata_gbp_route_domain_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_route_domain_del_reply", vapi_msg_id_gbp_route_domain_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_route_domain_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_route_domain_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_route_domain_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_route_domain_del
#define defined_vapi_msg_gbp_route_domain_del
typedef struct __attribute__ ((__packed__)) {
  u32 rd_id; 
} vapi_payload_gbp_route_domain_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_route_domain_del payload;
} vapi_msg_gbp_route_domain_del;

static inline void vapi_msg_gbp_route_domain_del_payload_hton(vapi_payload_gbp_route_domain_del *payload)
{
  payload->rd_id = htobe32(payload->rd_id);
}

static inline void vapi_msg_gbp_route_domain_del_payload_ntoh(vapi_payload_gbp_route_domain_del *payload)
{
  payload->rd_id = be32toh(payload->rd_id);
}

static inline void vapi_msg_gbp_route_domain_del_hton(vapi_msg_gbp_route_domain_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_route_domain_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_route_domain_del_ntoh(vapi_msg_gbp_route_domain_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_route_domain_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_route_domain_del_msg_size(vapi_msg_gbp_route_domain_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_route_domain_del* vapi_alloc_gbp_route_domain_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_route_domain_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_route_domain_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_route_domain_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_route_domain_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_route_domain_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_route_domain_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_route_domain_del_reply *reply),
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
  vapi_msg_gbp_route_domain_del_hton(msg);
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
    vapi_msg_gbp_route_domain_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_route_domain_del()
{
  static const char name[] = "gbp_route_domain_del";
  static const char name_with_crc[] = "gbp_route_domain_del_bee4edcd";
  static vapi_message_desc_t __vapi_metadata_gbp_route_domain_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_route_domain_del, payload),
    sizeof(vapi_msg_gbp_route_domain_del),
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_route_domain_del = vapi_register_msg(&__vapi_metadata_gbp_route_domain_del);
  VAPI_DBG("Assigned msg id %d to gbp_route_domain_del", vapi_msg_id_gbp_route_domain_del);
}
#endif

#ifndef defined_vapi_msg_gbp_endpoint_del_reply
#define defined_vapi_msg_gbp_endpoint_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_endpoint_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_endpoint_del_reply payload;
} vapi_msg_gbp_endpoint_del_reply;

static inline void vapi_msg_gbp_endpoint_del_reply_payload_hton(vapi_payload_gbp_endpoint_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_endpoint_del_reply_payload_ntoh(vapi_payload_gbp_endpoint_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_endpoint_del_reply_hton(vapi_msg_gbp_endpoint_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_del_reply_ntoh(vapi_msg_gbp_endpoint_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_del_reply_msg_size(vapi_msg_gbp_endpoint_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_del_reply()
{
  static const char name[] = "gbp_endpoint_del_reply";
  static const char name_with_crc[] = "gbp_endpoint_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_endpoint_del_reply, payload),
    sizeof(vapi_msg_gbp_endpoint_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_del_reply = vapi_register_msg(&__vapi_metadata_gbp_endpoint_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_del_reply", vapi_msg_id_gbp_endpoint_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_endpoint_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_endpoint_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_endpoint_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_vxlan_tunnel_details
#define defined_vapi_msg_gbp_vxlan_tunnel_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_vxlan_tunnel tunnel; 
} vapi_payload_gbp_vxlan_tunnel_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_vxlan_tunnel_details payload;
} vapi_msg_gbp_vxlan_tunnel_details;

static inline void vapi_msg_gbp_vxlan_tunnel_details_payload_hton(vapi_payload_gbp_vxlan_tunnel_details *payload)
{
  vapi_type_gbp_vxlan_tunnel_hton(&payload->tunnel);
}

static inline void vapi_msg_gbp_vxlan_tunnel_details_payload_ntoh(vapi_payload_gbp_vxlan_tunnel_details *payload)
{
  vapi_type_gbp_vxlan_tunnel_ntoh(&payload->tunnel);
}

static inline void vapi_msg_gbp_vxlan_tunnel_details_hton(vapi_msg_gbp_vxlan_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_vxlan_tunnel_details_ntoh(vapi_msg_gbp_vxlan_tunnel_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_vxlan_tunnel_details_msg_size(vapi_msg_gbp_vxlan_tunnel_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_vxlan_tunnel_details()
{
  static const char name[] = "gbp_vxlan_tunnel_details";
  static const char name_with_crc[] = "gbp_vxlan_tunnel_details_65c6c818";
  static vapi_message_desc_t __vapi_metadata_gbp_vxlan_tunnel_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_vxlan_tunnel_details, payload),
    sizeof(vapi_msg_gbp_vxlan_tunnel_details),
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_vxlan_tunnel_details = vapi_register_msg(&__vapi_metadata_gbp_vxlan_tunnel_details);
  VAPI_DBG("Assigned msg id %d to gbp_vxlan_tunnel_details", vapi_msg_id_gbp_vxlan_tunnel_details);
}

static inline void vapi_set_vapi_msg_gbp_vxlan_tunnel_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_vxlan_tunnel_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_vxlan_tunnel_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_vxlan_tunnel_add_reply
#define defined_vapi_msg_gbp_vxlan_tunnel_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_gbp_vxlan_tunnel_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_vxlan_tunnel_add_reply payload;
} vapi_msg_gbp_vxlan_tunnel_add_reply;

static inline void vapi_msg_gbp_vxlan_tunnel_add_reply_payload_hton(vapi_payload_gbp_vxlan_tunnel_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_gbp_vxlan_tunnel_add_reply_payload_ntoh(vapi_payload_gbp_vxlan_tunnel_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_gbp_vxlan_tunnel_add_reply_hton(vapi_msg_gbp_vxlan_tunnel_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_vxlan_tunnel_add_reply_ntoh(vapi_msg_gbp_vxlan_tunnel_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_vxlan_tunnel_add_reply_msg_size(vapi_msg_gbp_vxlan_tunnel_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_vxlan_tunnel_add_reply()
{
  static const char name[] = "gbp_vxlan_tunnel_add_reply";
  static const char name_with_crc[] = "gbp_vxlan_tunnel_add_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_gbp_vxlan_tunnel_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_vxlan_tunnel_add_reply, payload),
    sizeof(vapi_msg_gbp_vxlan_tunnel_add_reply),
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_vxlan_tunnel_add_reply = vapi_register_msg(&__vapi_metadata_gbp_vxlan_tunnel_add_reply);
  VAPI_DBG("Assigned msg id %d to gbp_vxlan_tunnel_add_reply", vapi_msg_id_gbp_vxlan_tunnel_add_reply);
}

static inline void vapi_set_vapi_msg_gbp_vxlan_tunnel_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_vxlan_tunnel_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_vxlan_tunnel_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_vxlan_tunnel_add
#define defined_vapi_msg_gbp_vxlan_tunnel_add
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_vxlan_tunnel tunnel; 
} vapi_payload_gbp_vxlan_tunnel_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_vxlan_tunnel_add payload;
} vapi_msg_gbp_vxlan_tunnel_add;

static inline void vapi_msg_gbp_vxlan_tunnel_add_payload_hton(vapi_payload_gbp_vxlan_tunnel_add *payload)
{
  vapi_type_gbp_vxlan_tunnel_hton(&payload->tunnel);
}

static inline void vapi_msg_gbp_vxlan_tunnel_add_payload_ntoh(vapi_payload_gbp_vxlan_tunnel_add *payload)
{
  vapi_type_gbp_vxlan_tunnel_ntoh(&payload->tunnel);
}

static inline void vapi_msg_gbp_vxlan_tunnel_add_hton(vapi_msg_gbp_vxlan_tunnel_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_vxlan_tunnel_add_ntoh(vapi_msg_gbp_vxlan_tunnel_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_vxlan_tunnel_add_msg_size(vapi_msg_gbp_vxlan_tunnel_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_vxlan_tunnel_add* vapi_alloc_gbp_vxlan_tunnel_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_vxlan_tunnel_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_vxlan_tunnel_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_vxlan_tunnel_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_vxlan_tunnel_add);

  return msg;
}

static inline vapi_error_e vapi_gbp_vxlan_tunnel_add(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_vxlan_tunnel_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_vxlan_tunnel_add_reply *reply),
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
  vapi_msg_gbp_vxlan_tunnel_add_hton(msg);
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
    vapi_msg_gbp_vxlan_tunnel_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_vxlan_tunnel_add()
{
  static const char name[] = "gbp_vxlan_tunnel_add";
  static const char name_with_crc[] = "gbp_vxlan_tunnel_add_3e070b35";
  static vapi_message_desc_t __vapi_metadata_gbp_vxlan_tunnel_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_vxlan_tunnel_add, payload),
    sizeof(vapi_msg_gbp_vxlan_tunnel_add),
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_add_hton,
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_vxlan_tunnel_add = vapi_register_msg(&__vapi_metadata_gbp_vxlan_tunnel_add);
  VAPI_DBG("Assigned msg id %d to gbp_vxlan_tunnel_add", vapi_msg_id_gbp_vxlan_tunnel_add);
}
#endif

#ifndef defined_vapi_msg_gbp_endpoint_group_del_reply
#define defined_vapi_msg_gbp_endpoint_group_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_endpoint_group_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_endpoint_group_del_reply payload;
} vapi_msg_gbp_endpoint_group_del_reply;

static inline void vapi_msg_gbp_endpoint_group_del_reply_payload_hton(vapi_payload_gbp_endpoint_group_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_endpoint_group_del_reply_payload_ntoh(vapi_payload_gbp_endpoint_group_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_endpoint_group_del_reply_hton(vapi_msg_gbp_endpoint_group_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_group_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_group_del_reply_ntoh(vapi_msg_gbp_endpoint_group_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_group_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_group_del_reply_msg_size(vapi_msg_gbp_endpoint_group_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_group_del_reply()
{
  static const char name[] = "gbp_endpoint_group_del_reply";
  static const char name_with_crc[] = "gbp_endpoint_group_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_group_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_endpoint_group_del_reply, payload),
    sizeof(vapi_msg_gbp_endpoint_group_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_group_del_reply = vapi_register_msg(&__vapi_metadata_gbp_endpoint_group_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_group_del_reply", vapi_msg_id_gbp_endpoint_group_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_endpoint_group_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_endpoint_group_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_endpoint_group_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_endpoint_del
#define defined_vapi_msg_gbp_endpoint_del
typedef struct __attribute__ ((__packed__)) {
  u32 handle; 
} vapi_payload_gbp_endpoint_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_endpoint_del payload;
} vapi_msg_gbp_endpoint_del;

static inline void vapi_msg_gbp_endpoint_del_payload_hton(vapi_payload_gbp_endpoint_del *payload)
{
  payload->handle = htobe32(payload->handle);
}

static inline void vapi_msg_gbp_endpoint_del_payload_ntoh(vapi_payload_gbp_endpoint_del *payload)
{
  payload->handle = be32toh(payload->handle);
}

static inline void vapi_msg_gbp_endpoint_del_hton(vapi_msg_gbp_endpoint_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_del_ntoh(vapi_msg_gbp_endpoint_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_del_msg_size(vapi_msg_gbp_endpoint_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_endpoint_del* vapi_alloc_gbp_endpoint_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_endpoint_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_endpoint_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_endpoint_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_endpoint_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_endpoint_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_endpoint_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_endpoint_del_reply *reply),
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
  vapi_msg_gbp_endpoint_del_hton(msg);
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
    vapi_msg_gbp_endpoint_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_del()
{
  static const char name[] = "gbp_endpoint_del";
  static const char name_with_crc[] = "gbp_endpoint_del_b93cd566";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_endpoint_del, payload),
    sizeof(vapi_msg_gbp_endpoint_del),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_del = vapi_register_msg(&__vapi_metadata_gbp_endpoint_del);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_del", vapi_msg_id_gbp_endpoint_del);
}
#endif

#ifndef defined_vapi_msg_gbp_endpoint_group_del
#define defined_vapi_msg_gbp_endpoint_group_del
typedef struct __attribute__ ((__packed__)) {
  u16 sclass; 
} vapi_payload_gbp_endpoint_group_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_endpoint_group_del payload;
} vapi_msg_gbp_endpoint_group_del;

static inline void vapi_msg_gbp_endpoint_group_del_payload_hton(vapi_payload_gbp_endpoint_group_del *payload)
{
  payload->sclass = htobe16(payload->sclass);
}

static inline void vapi_msg_gbp_endpoint_group_del_payload_ntoh(vapi_payload_gbp_endpoint_group_del *payload)
{
  payload->sclass = be16toh(payload->sclass);
}

static inline void vapi_msg_gbp_endpoint_group_del_hton(vapi_msg_gbp_endpoint_group_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_group_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_group_del_ntoh(vapi_msg_gbp_endpoint_group_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_group_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_group_del_msg_size(vapi_msg_gbp_endpoint_group_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_endpoint_group_del* vapi_alloc_gbp_endpoint_group_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_endpoint_group_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_endpoint_group_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_endpoint_group_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_endpoint_group_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_endpoint_group_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_endpoint_group_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_endpoint_group_del_reply *reply),
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
  vapi_msg_gbp_endpoint_group_del_hton(msg);
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
    vapi_msg_gbp_endpoint_group_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_group_del()
{
  static const char name[] = "gbp_endpoint_group_del";
  static const char name_with_crc[] = "gbp_endpoint_group_del_3436b8b7";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_group_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_endpoint_group_del, payload),
    sizeof(vapi_msg_gbp_endpoint_group_del),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_group_del = vapi_register_msg(&__vapi_metadata_gbp_endpoint_group_del);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_group_del", vapi_msg_id_gbp_endpoint_group_del);
}
#endif

#ifndef defined_vapi_msg_gbp_route_domain_details
#define defined_vapi_msg_gbp_route_domain_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_route_domain rd; 
} vapi_payload_gbp_route_domain_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_route_domain_details payload;
} vapi_msg_gbp_route_domain_details;

static inline void vapi_msg_gbp_route_domain_details_payload_hton(vapi_payload_gbp_route_domain_details *payload)
{
  vapi_type_gbp_route_domain_hton(&payload->rd);
}

static inline void vapi_msg_gbp_route_domain_details_payload_ntoh(vapi_payload_gbp_route_domain_details *payload)
{
  vapi_type_gbp_route_domain_ntoh(&payload->rd);
}

static inline void vapi_msg_gbp_route_domain_details_hton(vapi_msg_gbp_route_domain_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_route_domain_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_route_domain_details_ntoh(vapi_msg_gbp_route_domain_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_route_domain_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_route_domain_details_msg_size(vapi_msg_gbp_route_domain_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_route_domain_details()
{
  static const char name[] = "gbp_route_domain_details";
  static const char name_with_crc[] = "gbp_route_domain_details_53241099";
  static vapi_message_desc_t __vapi_metadata_gbp_route_domain_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_route_domain_details, payload),
    sizeof(vapi_msg_gbp_route_domain_details),
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_route_domain_details = vapi_register_msg(&__vapi_metadata_gbp_route_domain_details);
  VAPI_DBG("Assigned msg id %d to gbp_route_domain_details", vapi_msg_id_gbp_route_domain_details);
}

static inline void vapi_set_vapi_msg_gbp_route_domain_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_route_domain_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_route_domain_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_contract_add_del
#define defined_vapi_msg_gbp_contract_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_gbp_contract contract; 
} vapi_payload_gbp_contract_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_contract_add_del payload;
} vapi_msg_gbp_contract_add_del;

static inline void vapi_msg_gbp_contract_add_del_payload_hton(vapi_payload_gbp_contract_add_del *payload)
{
  vapi_type_gbp_contract_hton(&payload->contract);
}

static inline void vapi_msg_gbp_contract_add_del_payload_ntoh(vapi_payload_gbp_contract_add_del *payload)
{
  vapi_type_gbp_contract_ntoh(&payload->contract);
}

static inline void vapi_msg_gbp_contract_add_del_hton(vapi_msg_gbp_contract_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_contract_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_contract_add_del_ntoh(vapi_msg_gbp_contract_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_contract_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_contract_add_del_msg_size(vapi_msg_gbp_contract_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_contract_add_del* vapi_alloc_gbp_contract_add_del(struct vapi_ctx_s *ctx, size_t contract_rules_array_size)
{
  vapi_msg_gbp_contract_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_contract_add_del) + sizeof(msg->payload.contract.rules[0]) * contract_rules_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_contract_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_contract_add_del);
  msg->payload.contract.n_rules = contract_rules_array_size;

  return msg;
}

static inline vapi_error_e vapi_gbp_contract_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_contract_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_contract_add_del_reply *reply),
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
  vapi_msg_gbp_contract_add_del_hton(msg);
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
    vapi_msg_gbp_contract_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_contract_add_del()
{
  static const char name[] = "gbp_contract_add_del";
  static const char name_with_crc[] = "gbp_contract_add_del_5b63d90a";
  static vapi_message_desc_t __vapi_metadata_gbp_contract_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_contract_add_del, payload),
    sizeof(vapi_msg_gbp_contract_add_del),
    (generic_swap_fn_t)vapi_msg_gbp_contract_add_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_contract_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_contract_add_del = vapi_register_msg(&__vapi_metadata_gbp_contract_add_del);
  VAPI_DBG("Assigned msg id %d to gbp_contract_add_del", vapi_msg_id_gbp_contract_add_del);
}
#endif

#ifndef defined_vapi_msg_gbp_endpoint_group_dump
#define defined_vapi_msg_gbp_endpoint_group_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_endpoint_group_dump;

static inline void vapi_msg_gbp_endpoint_group_dump_hton(vapi_msg_gbp_endpoint_group_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_endpoint_group_dump_ntoh(vapi_msg_gbp_endpoint_group_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_endpoint_group_dump_msg_size(vapi_msg_gbp_endpoint_group_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_endpoint_group_dump* vapi_alloc_gbp_endpoint_group_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_endpoint_group_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_endpoint_group_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_endpoint_group_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_endpoint_group_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_endpoint_group_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_endpoint_group_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_endpoint_group_details *reply),
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
  vapi_msg_gbp_endpoint_group_dump_hton(msg);
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
    vapi_msg_gbp_endpoint_group_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_group_dump()
{
  static const char name[] = "gbp_endpoint_group_dump";
  static const char name_with_crc[] = "gbp_endpoint_group_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_group_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_endpoint_group_dump),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_group_dump = vapi_register_msg(&__vapi_metadata_gbp_endpoint_group_dump);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_group_dump", vapi_msg_id_gbp_endpoint_group_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_vxlan_tunnel_dump
#define defined_vapi_msg_gbp_vxlan_tunnel_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_vxlan_tunnel_dump;

static inline void vapi_msg_gbp_vxlan_tunnel_dump_hton(vapi_msg_gbp_vxlan_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_vxlan_tunnel_dump_ntoh(vapi_msg_gbp_vxlan_tunnel_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_vxlan_tunnel_dump_msg_size(vapi_msg_gbp_vxlan_tunnel_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_vxlan_tunnel_dump* vapi_alloc_gbp_vxlan_tunnel_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_vxlan_tunnel_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_vxlan_tunnel_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_vxlan_tunnel_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_vxlan_tunnel_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_vxlan_tunnel_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_vxlan_tunnel_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_vxlan_tunnel_details *reply),
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
  vapi_msg_gbp_vxlan_tunnel_dump_hton(msg);
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
    vapi_msg_gbp_vxlan_tunnel_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_vxlan_tunnel_dump()
{
  static const char name[] = "gbp_vxlan_tunnel_dump";
  static const char name_with_crc[] = "gbp_vxlan_tunnel_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_vxlan_tunnel_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_vxlan_tunnel_dump),
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_vxlan_tunnel_dump = vapi_register_msg(&__vapi_metadata_gbp_vxlan_tunnel_dump);
  VAPI_DBG("Assigned msg id %d to gbp_vxlan_tunnel_dump", vapi_msg_id_gbp_vxlan_tunnel_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_ext_itf_add_del_reply
#define defined_vapi_msg_gbp_ext_itf_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_ext_itf_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_ext_itf_add_del_reply payload;
} vapi_msg_gbp_ext_itf_add_del_reply;

static inline void vapi_msg_gbp_ext_itf_add_del_reply_payload_hton(vapi_payload_gbp_ext_itf_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_ext_itf_add_del_reply_payload_ntoh(vapi_payload_gbp_ext_itf_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_ext_itf_add_del_reply_hton(vapi_msg_gbp_ext_itf_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_ext_itf_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_ext_itf_add_del_reply_ntoh(vapi_msg_gbp_ext_itf_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_ext_itf_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_ext_itf_add_del_reply_msg_size(vapi_msg_gbp_ext_itf_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_ext_itf_add_del_reply()
{
  static const char name[] = "gbp_ext_itf_add_del_reply";
  static const char name_with_crc[] = "gbp_ext_itf_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_ext_itf_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_ext_itf_add_del_reply, payload),
    sizeof(vapi_msg_gbp_ext_itf_add_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_ext_itf_add_del_reply = vapi_register_msg(&__vapi_metadata_gbp_ext_itf_add_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_ext_itf_add_del_reply", vapi_msg_id_gbp_ext_itf_add_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_ext_itf_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_ext_itf_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_ext_itf_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_ext_itf_add_del
#define defined_vapi_msg_gbp_ext_itf_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_gbp_ext_itf ext_itf; 
} vapi_payload_gbp_ext_itf_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_ext_itf_add_del payload;
} vapi_msg_gbp_ext_itf_add_del;

static inline void vapi_msg_gbp_ext_itf_add_del_payload_hton(vapi_payload_gbp_ext_itf_add_del *payload)
{
  vapi_type_gbp_ext_itf_hton(&payload->ext_itf);
}

static inline void vapi_msg_gbp_ext_itf_add_del_payload_ntoh(vapi_payload_gbp_ext_itf_add_del *payload)
{
  vapi_type_gbp_ext_itf_ntoh(&payload->ext_itf);
}

static inline void vapi_msg_gbp_ext_itf_add_del_hton(vapi_msg_gbp_ext_itf_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_ext_itf_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_ext_itf_add_del_ntoh(vapi_msg_gbp_ext_itf_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_ext_itf_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_ext_itf_add_del_msg_size(vapi_msg_gbp_ext_itf_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_ext_itf_add_del* vapi_alloc_gbp_ext_itf_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_ext_itf_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_ext_itf_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_ext_itf_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_ext_itf_add_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_ext_itf_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_ext_itf_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_ext_itf_add_del_reply *reply),
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
  vapi_msg_gbp_ext_itf_add_del_hton(msg);
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
    vapi_msg_gbp_ext_itf_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_ext_itf_add_del()
{
  static const char name[] = "gbp_ext_itf_add_del";
  static const char name_with_crc[] = "gbp_ext_itf_add_del_6995e85f";
  static vapi_message_desc_t __vapi_metadata_gbp_ext_itf_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_ext_itf_add_del, payload),
    sizeof(vapi_msg_gbp_ext_itf_add_del),
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_add_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_ext_itf_add_del = vapi_register_msg(&__vapi_metadata_gbp_ext_itf_add_del);
  VAPI_DBG("Assigned msg id %d to gbp_ext_itf_add_del", vapi_msg_id_gbp_ext_itf_add_del);
}
#endif

#ifndef defined_vapi_msg_gbp_bridge_domain_add_reply
#define defined_vapi_msg_gbp_bridge_domain_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_bridge_domain_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_bridge_domain_add_reply payload;
} vapi_msg_gbp_bridge_domain_add_reply;

static inline void vapi_msg_gbp_bridge_domain_add_reply_payload_hton(vapi_payload_gbp_bridge_domain_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_bridge_domain_add_reply_payload_ntoh(vapi_payload_gbp_bridge_domain_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_bridge_domain_add_reply_hton(vapi_msg_gbp_bridge_domain_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_bridge_domain_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_bridge_domain_add_reply_ntoh(vapi_msg_gbp_bridge_domain_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_bridge_domain_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_bridge_domain_add_reply_msg_size(vapi_msg_gbp_bridge_domain_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_bridge_domain_add_reply()
{
  static const char name[] = "gbp_bridge_domain_add_reply";
  static const char name_with_crc[] = "gbp_bridge_domain_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_bridge_domain_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_bridge_domain_add_reply, payload),
    sizeof(vapi_msg_gbp_bridge_domain_add_reply),
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_bridge_domain_add_reply = vapi_register_msg(&__vapi_metadata_gbp_bridge_domain_add_reply);
  VAPI_DBG("Assigned msg id %d to gbp_bridge_domain_add_reply", vapi_msg_id_gbp_bridge_domain_add_reply);
}

static inline void vapi_set_vapi_msg_gbp_bridge_domain_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_bridge_domain_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_bridge_domain_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_recirc_add_del_reply
#define defined_vapi_msg_gbp_recirc_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_recirc_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_recirc_add_del_reply payload;
} vapi_msg_gbp_recirc_add_del_reply;

static inline void vapi_msg_gbp_recirc_add_del_reply_payload_hton(vapi_payload_gbp_recirc_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_recirc_add_del_reply_payload_ntoh(vapi_payload_gbp_recirc_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_recirc_add_del_reply_hton(vapi_msg_gbp_recirc_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_recirc_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_recirc_add_del_reply_ntoh(vapi_msg_gbp_recirc_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_recirc_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_recirc_add_del_reply_msg_size(vapi_msg_gbp_recirc_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_recirc_add_del_reply()
{
  static const char name[] = "gbp_recirc_add_del_reply";
  static const char name_with_crc[] = "gbp_recirc_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_recirc_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_recirc_add_del_reply, payload),
    sizeof(vapi_msg_gbp_recirc_add_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_recirc_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_recirc_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_recirc_add_del_reply = vapi_register_msg(&__vapi_metadata_gbp_recirc_add_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_recirc_add_del_reply", vapi_msg_id_gbp_recirc_add_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_recirc_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_recirc_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_recirc_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_route_domain_add
#define defined_vapi_msg_gbp_route_domain_add
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_route_domain rd; 
} vapi_payload_gbp_route_domain_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_route_domain_add payload;
} vapi_msg_gbp_route_domain_add;

static inline void vapi_msg_gbp_route_domain_add_payload_hton(vapi_payload_gbp_route_domain_add *payload)
{
  vapi_type_gbp_route_domain_hton(&payload->rd);
}

static inline void vapi_msg_gbp_route_domain_add_payload_ntoh(vapi_payload_gbp_route_domain_add *payload)
{
  vapi_type_gbp_route_domain_ntoh(&payload->rd);
}

static inline void vapi_msg_gbp_route_domain_add_hton(vapi_msg_gbp_route_domain_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_route_domain_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_route_domain_add_ntoh(vapi_msg_gbp_route_domain_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_route_domain_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_route_domain_add_msg_size(vapi_msg_gbp_route_domain_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_route_domain_add* vapi_alloc_gbp_route_domain_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_route_domain_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_route_domain_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_route_domain_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_route_domain_add);

  return msg;
}

static inline vapi_error_e vapi_gbp_route_domain_add(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_route_domain_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_route_domain_add_reply *reply),
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
  vapi_msg_gbp_route_domain_add_hton(msg);
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
    vapi_msg_gbp_route_domain_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_route_domain_add()
{
  static const char name[] = "gbp_route_domain_add";
  static const char name_with_crc[] = "gbp_route_domain_add_1560adc7";
  static vapi_message_desc_t __vapi_metadata_gbp_route_domain_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_route_domain_add, payload),
    sizeof(vapi_msg_gbp_route_domain_add),
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_add_hton,
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_route_domain_add = vapi_register_msg(&__vapi_metadata_gbp_route_domain_add);
  VAPI_DBG("Assigned msg id %d to gbp_route_domain_add", vapi_msg_id_gbp_route_domain_add);
}
#endif

#ifndef defined_vapi_msg_gbp_bridge_domain_details
#define defined_vapi_msg_gbp_bridge_domain_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_bridge_domain bd; 
} vapi_payload_gbp_bridge_domain_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_bridge_domain_details payload;
} vapi_msg_gbp_bridge_domain_details;

static inline void vapi_msg_gbp_bridge_domain_details_payload_hton(vapi_payload_gbp_bridge_domain_details *payload)
{
  vapi_type_gbp_bridge_domain_hton(&payload->bd);
}

static inline void vapi_msg_gbp_bridge_domain_details_payload_ntoh(vapi_payload_gbp_bridge_domain_details *payload)
{
  vapi_type_gbp_bridge_domain_ntoh(&payload->bd);
}

static inline void vapi_msg_gbp_bridge_domain_details_hton(vapi_msg_gbp_bridge_domain_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_bridge_domain_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_bridge_domain_details_ntoh(vapi_msg_gbp_bridge_domain_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_bridge_domain_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_bridge_domain_details_msg_size(vapi_msg_gbp_bridge_domain_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_bridge_domain_details()
{
  static const char name[] = "gbp_bridge_domain_details";
  static const char name_with_crc[] = "gbp_bridge_domain_details_db8b025a";
  static vapi_message_desc_t __vapi_metadata_gbp_bridge_domain_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_bridge_domain_details, payload),
    sizeof(vapi_msg_gbp_bridge_domain_details),
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_bridge_domain_details = vapi_register_msg(&__vapi_metadata_gbp_bridge_domain_details);
  VAPI_DBG("Assigned msg id %d to gbp_bridge_domain_details", vapi_msg_id_gbp_bridge_domain_details);
}

static inline void vapi_set_vapi_msg_gbp_bridge_domain_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_bridge_domain_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_bridge_domain_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_contract_details
#define defined_vapi_msg_gbp_contract_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_contract contract; 
} vapi_payload_gbp_contract_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_contract_details payload;
} vapi_msg_gbp_contract_details;

static inline void vapi_msg_gbp_contract_details_payload_hton(vapi_payload_gbp_contract_details *payload)
{
  vapi_type_gbp_contract_hton(&payload->contract);
}

static inline void vapi_msg_gbp_contract_details_payload_ntoh(vapi_payload_gbp_contract_details *payload)
{
  vapi_type_gbp_contract_ntoh(&payload->contract);
}

static inline void vapi_msg_gbp_contract_details_hton(vapi_msg_gbp_contract_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_contract_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_contract_details_ntoh(vapi_msg_gbp_contract_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_contract_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_contract_details_msg_size(vapi_msg_gbp_contract_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_contract_details()
{
  static const char name[] = "gbp_contract_details";
  static const char name_with_crc[] = "gbp_contract_details_2a18db6e";
  static vapi_message_desc_t __vapi_metadata_gbp_contract_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_contract_details, payload),
    sizeof(vapi_msg_gbp_contract_details),
    (generic_swap_fn_t)vapi_msg_gbp_contract_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_contract_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_contract_details = vapi_register_msg(&__vapi_metadata_gbp_contract_details);
  VAPI_DBG("Assigned msg id %d to gbp_contract_details", vapi_msg_id_gbp_contract_details);
}

static inline void vapi_set_vapi_msg_gbp_contract_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_contract_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_contract_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_vxlan_tunnel_del_reply
#define defined_vapi_msg_gbp_vxlan_tunnel_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_vxlan_tunnel_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_vxlan_tunnel_del_reply payload;
} vapi_msg_gbp_vxlan_tunnel_del_reply;

static inline void vapi_msg_gbp_vxlan_tunnel_del_reply_payload_hton(vapi_payload_gbp_vxlan_tunnel_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_vxlan_tunnel_del_reply_payload_ntoh(vapi_payload_gbp_vxlan_tunnel_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_vxlan_tunnel_del_reply_hton(vapi_msg_gbp_vxlan_tunnel_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_vxlan_tunnel_del_reply_ntoh(vapi_msg_gbp_vxlan_tunnel_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_vxlan_tunnel_del_reply_msg_size(vapi_msg_gbp_vxlan_tunnel_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_vxlan_tunnel_del_reply()
{
  static const char name[] = "gbp_vxlan_tunnel_del_reply";
  static const char name_with_crc[] = "gbp_vxlan_tunnel_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_vxlan_tunnel_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_vxlan_tunnel_del_reply, payload),
    sizeof(vapi_msg_gbp_vxlan_tunnel_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_vxlan_tunnel_del_reply = vapi_register_msg(&__vapi_metadata_gbp_vxlan_tunnel_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_vxlan_tunnel_del_reply", vapi_msg_id_gbp_vxlan_tunnel_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_vxlan_tunnel_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_vxlan_tunnel_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_vxlan_tunnel_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_vxlan_tunnel_del
#define defined_vapi_msg_gbp_vxlan_tunnel_del
typedef struct __attribute__ ((__packed__)) {
  u32 vni; 
} vapi_payload_gbp_vxlan_tunnel_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_vxlan_tunnel_del payload;
} vapi_msg_gbp_vxlan_tunnel_del;

static inline void vapi_msg_gbp_vxlan_tunnel_del_payload_hton(vapi_payload_gbp_vxlan_tunnel_del *payload)
{
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_gbp_vxlan_tunnel_del_payload_ntoh(vapi_payload_gbp_vxlan_tunnel_del *payload)
{
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_gbp_vxlan_tunnel_del_hton(vapi_msg_gbp_vxlan_tunnel_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_vxlan_tunnel_del_ntoh(vapi_msg_gbp_vxlan_tunnel_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_vxlan_tunnel_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_vxlan_tunnel_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_vxlan_tunnel_del_msg_size(vapi_msg_gbp_vxlan_tunnel_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_vxlan_tunnel_del* vapi_alloc_gbp_vxlan_tunnel_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_vxlan_tunnel_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_vxlan_tunnel_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_vxlan_tunnel_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_vxlan_tunnel_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_vxlan_tunnel_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_vxlan_tunnel_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_vxlan_tunnel_del_reply *reply),
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
  vapi_msg_gbp_vxlan_tunnel_del_hton(msg);
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
    vapi_msg_gbp_vxlan_tunnel_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_vxlan_tunnel_del()
{
  static const char name[] = "gbp_vxlan_tunnel_del";
  static const char name_with_crc[] = "gbp_vxlan_tunnel_del_8d1f2fe9";
  static vapi_message_desc_t __vapi_metadata_gbp_vxlan_tunnel_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_vxlan_tunnel_del, payload),
    sizeof(vapi_msg_gbp_vxlan_tunnel_del),
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_vxlan_tunnel_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_vxlan_tunnel_del = vapi_register_msg(&__vapi_metadata_gbp_vxlan_tunnel_del);
  VAPI_DBG("Assigned msg id %d to gbp_vxlan_tunnel_del", vapi_msg_id_gbp_vxlan_tunnel_del);
}
#endif

#ifndef defined_vapi_msg_gbp_endpoint_details
#define defined_vapi_msg_gbp_endpoint_details
typedef struct __attribute__ ((__packed__)) {
  f64 age;
  u32 handle;
  vapi_type_gbp_endpoint endpoint; 
} vapi_payload_gbp_endpoint_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_endpoint_details payload;
} vapi_msg_gbp_endpoint_details;

static inline void vapi_msg_gbp_endpoint_details_payload_hton(vapi_payload_gbp_endpoint_details *payload)
{
  payload->handle = htobe32(payload->handle);
  vapi_type_gbp_endpoint_hton(&payload->endpoint);
}

static inline void vapi_msg_gbp_endpoint_details_payload_ntoh(vapi_payload_gbp_endpoint_details *payload)
{
  payload->handle = be32toh(payload->handle);
  vapi_type_gbp_endpoint_ntoh(&payload->endpoint);
}

static inline void vapi_msg_gbp_endpoint_details_hton(vapi_msg_gbp_endpoint_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_details_ntoh(vapi_msg_gbp_endpoint_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_details_msg_size(vapi_msg_gbp_endpoint_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_details()
{
  static const char name[] = "gbp_endpoint_details";
  static const char name_with_crc[] = "gbp_endpoint_details_e1ca5e65";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_endpoint_details, payload),
    sizeof(vapi_msg_gbp_endpoint_details),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_details = vapi_register_msg(&__vapi_metadata_gbp_endpoint_details);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_details", vapi_msg_id_gbp_endpoint_details);
}

static inline void vapi_set_vapi_msg_gbp_endpoint_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_endpoint_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_endpoint_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_endpoint_dump
#define defined_vapi_msg_gbp_endpoint_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_endpoint_dump;

static inline void vapi_msg_gbp_endpoint_dump_hton(vapi_msg_gbp_endpoint_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_endpoint_dump_ntoh(vapi_msg_gbp_endpoint_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_endpoint_dump_msg_size(vapi_msg_gbp_endpoint_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_endpoint_dump* vapi_alloc_gbp_endpoint_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_endpoint_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_endpoint_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_endpoint_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_endpoint_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_endpoint_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_endpoint_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_endpoint_details *reply),
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
  vapi_msg_gbp_endpoint_dump_hton(msg);
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
    vapi_msg_gbp_endpoint_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_dump()
{
  static const char name[] = "gbp_endpoint_dump";
  static const char name_with_crc[] = "gbp_endpoint_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_endpoint_dump),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_dump = vapi_register_msg(&__vapi_metadata_gbp_endpoint_dump);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_dump", vapi_msg_id_gbp_endpoint_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_contract_dump
#define defined_vapi_msg_gbp_contract_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_contract_dump;

static inline void vapi_msg_gbp_contract_dump_hton(vapi_msg_gbp_contract_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_contract_dump_ntoh(vapi_msg_gbp_contract_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_contract_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_contract_dump_msg_size(vapi_msg_gbp_contract_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_contract_dump* vapi_alloc_gbp_contract_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_contract_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_contract_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_contract_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_contract_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_contract_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_contract_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_contract_details *reply),
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
  vapi_msg_gbp_contract_dump_hton(msg);
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
    vapi_msg_gbp_contract_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_contract_dump()
{
  static const char name[] = "gbp_contract_dump";
  static const char name_with_crc[] = "gbp_contract_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_contract_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_contract_dump),
    (generic_swap_fn_t)vapi_msg_gbp_contract_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_contract_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_contract_dump = vapi_register_msg(&__vapi_metadata_gbp_contract_dump);
  VAPI_DBG("Assigned msg id %d to gbp_contract_dump", vapi_msg_id_gbp_contract_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_ext_itf_details
#define defined_vapi_msg_gbp_ext_itf_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_ext_itf ext_itf; 
} vapi_payload_gbp_ext_itf_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_ext_itf_details payload;
} vapi_msg_gbp_ext_itf_details;

static inline void vapi_msg_gbp_ext_itf_details_payload_hton(vapi_payload_gbp_ext_itf_details *payload)
{
  vapi_type_gbp_ext_itf_hton(&payload->ext_itf);
}

static inline void vapi_msg_gbp_ext_itf_details_payload_ntoh(vapi_payload_gbp_ext_itf_details *payload)
{
  vapi_type_gbp_ext_itf_ntoh(&payload->ext_itf);
}

static inline void vapi_msg_gbp_ext_itf_details_hton(vapi_msg_gbp_ext_itf_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_ext_itf_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_ext_itf_details_ntoh(vapi_msg_gbp_ext_itf_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_ext_itf_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_ext_itf_details_msg_size(vapi_msg_gbp_ext_itf_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_ext_itf_details()
{
  static const char name[] = "gbp_ext_itf_details";
  static const char name_with_crc[] = "gbp_ext_itf_details_89c19ec5";
  static vapi_message_desc_t __vapi_metadata_gbp_ext_itf_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_ext_itf_details, payload),
    sizeof(vapi_msg_gbp_ext_itf_details),
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_details_hton,
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_ext_itf_details = vapi_register_msg(&__vapi_metadata_gbp_ext_itf_details);
  VAPI_DBG("Assigned msg id %d to gbp_ext_itf_details", vapi_msg_id_gbp_ext_itf_details);
}

static inline void vapi_set_vapi_msg_gbp_ext_itf_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_ext_itf_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_ext_itf_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_ext_itf_dump
#define defined_vapi_msg_gbp_ext_itf_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_ext_itf_dump;

static inline void vapi_msg_gbp_ext_itf_dump_hton(vapi_msg_gbp_ext_itf_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_ext_itf_dump_ntoh(vapi_msg_gbp_ext_itf_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_ext_itf_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_ext_itf_dump_msg_size(vapi_msg_gbp_ext_itf_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_ext_itf_dump* vapi_alloc_gbp_ext_itf_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_ext_itf_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_ext_itf_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_ext_itf_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_ext_itf_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_ext_itf_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_ext_itf_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_ext_itf_details *reply),
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
  vapi_msg_gbp_ext_itf_dump_hton(msg);
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
    vapi_msg_gbp_ext_itf_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_ext_itf_dump()
{
  static const char name[] = "gbp_ext_itf_dump";
  static const char name_with_crc[] = "gbp_ext_itf_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_ext_itf_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_ext_itf_dump),
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_ext_itf_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_ext_itf_dump = vapi_register_msg(&__vapi_metadata_gbp_ext_itf_dump);
  VAPI_DBG("Assigned msg id %d to gbp_ext_itf_dump", vapi_msg_id_gbp_ext_itf_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_bridge_domain_dump
#define defined_vapi_msg_gbp_bridge_domain_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_bridge_domain_dump;

static inline void vapi_msg_gbp_bridge_domain_dump_hton(vapi_msg_gbp_bridge_domain_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_bridge_domain_dump_ntoh(vapi_msg_gbp_bridge_domain_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_bridge_domain_dump_msg_size(vapi_msg_gbp_bridge_domain_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_bridge_domain_dump* vapi_alloc_gbp_bridge_domain_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_bridge_domain_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_bridge_domain_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_bridge_domain_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_bridge_domain_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_bridge_domain_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_bridge_domain_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_bridge_domain_details *reply),
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
  vapi_msg_gbp_bridge_domain_dump_hton(msg);
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
    vapi_msg_gbp_bridge_domain_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_bridge_domain_dump()
{
  static const char name[] = "gbp_bridge_domain_dump";
  static const char name_with_crc[] = "gbp_bridge_domain_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_bridge_domain_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_bridge_domain_dump),
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_bridge_domain_dump = vapi_register_msg(&__vapi_metadata_gbp_bridge_domain_dump);
  VAPI_DBG("Assigned msg id %d to gbp_bridge_domain_dump", vapi_msg_id_gbp_bridge_domain_dump);
}
#endif

#ifndef defined_vapi_msg_gbp_bridge_domain_add
#define defined_vapi_msg_gbp_bridge_domain_add
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_bridge_domain bd; 
} vapi_payload_gbp_bridge_domain_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_bridge_domain_add payload;
} vapi_msg_gbp_bridge_domain_add;

static inline void vapi_msg_gbp_bridge_domain_add_payload_hton(vapi_payload_gbp_bridge_domain_add *payload)
{
  vapi_type_gbp_bridge_domain_hton(&payload->bd);
}

static inline void vapi_msg_gbp_bridge_domain_add_payload_ntoh(vapi_payload_gbp_bridge_domain_add *payload)
{
  vapi_type_gbp_bridge_domain_ntoh(&payload->bd);
}

static inline void vapi_msg_gbp_bridge_domain_add_hton(vapi_msg_gbp_bridge_domain_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_bridge_domain_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_bridge_domain_add_ntoh(vapi_msg_gbp_bridge_domain_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_bridge_domain_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_bridge_domain_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_bridge_domain_add_msg_size(vapi_msg_gbp_bridge_domain_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_bridge_domain_add* vapi_alloc_gbp_bridge_domain_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_bridge_domain_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_bridge_domain_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_bridge_domain_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_bridge_domain_add);

  return msg;
}

static inline vapi_error_e vapi_gbp_bridge_domain_add(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_bridge_domain_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_bridge_domain_add_reply *reply),
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
  vapi_msg_gbp_bridge_domain_add_hton(msg);
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
    vapi_msg_gbp_bridge_domain_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_bridge_domain_add()
{
  static const char name[] = "gbp_bridge_domain_add";
  static const char name_with_crc[] = "gbp_bridge_domain_add_70f1069c";
  static vapi_message_desc_t __vapi_metadata_gbp_bridge_domain_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_bridge_domain_add, payload),
    sizeof(vapi_msg_gbp_bridge_domain_add),
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_add_hton,
    (generic_swap_fn_t)vapi_msg_gbp_bridge_domain_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_bridge_domain_add = vapi_register_msg(&__vapi_metadata_gbp_bridge_domain_add);
  VAPI_DBG("Assigned msg id %d to gbp_bridge_domain_add", vapi_msg_id_gbp_bridge_domain_add);
}
#endif

#ifndef defined_vapi_msg_gbp_subnet_add_del_reply
#define defined_vapi_msg_gbp_subnet_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_subnet_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_subnet_add_del_reply payload;
} vapi_msg_gbp_subnet_add_del_reply;

static inline void vapi_msg_gbp_subnet_add_del_reply_payload_hton(vapi_payload_gbp_subnet_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_subnet_add_del_reply_payload_ntoh(vapi_payload_gbp_subnet_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_subnet_add_del_reply_hton(vapi_msg_gbp_subnet_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_subnet_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_subnet_add_del_reply_ntoh(vapi_msg_gbp_subnet_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_subnet_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_subnet_add_del_reply_msg_size(vapi_msg_gbp_subnet_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_subnet_add_del_reply()
{
  static const char name[] = "gbp_subnet_add_del_reply";
  static const char name_with_crc[] = "gbp_subnet_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_subnet_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_subnet_add_del_reply, payload),
    sizeof(vapi_msg_gbp_subnet_add_del_reply),
    (generic_swap_fn_t)vapi_msg_gbp_subnet_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_subnet_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_subnet_add_del_reply = vapi_register_msg(&__vapi_metadata_gbp_subnet_add_del_reply);
  VAPI_DBG("Assigned msg id %d to gbp_subnet_add_del_reply", vapi_msg_id_gbp_subnet_add_del_reply);
}

static inline void vapi_set_vapi_msg_gbp_subnet_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_subnet_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_subnet_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_recirc_add_del
#define defined_vapi_msg_gbp_recirc_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_gbp_recirc recirc; 
} vapi_payload_gbp_recirc_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_recirc_add_del payload;
} vapi_msg_gbp_recirc_add_del;

static inline void vapi_msg_gbp_recirc_add_del_payload_hton(vapi_payload_gbp_recirc_add_del *payload)
{
  vapi_type_gbp_recirc_hton(&payload->recirc);
}

static inline void vapi_msg_gbp_recirc_add_del_payload_ntoh(vapi_payload_gbp_recirc_add_del *payload)
{
  vapi_type_gbp_recirc_ntoh(&payload->recirc);
}

static inline void vapi_msg_gbp_recirc_add_del_hton(vapi_msg_gbp_recirc_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_recirc_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_recirc_add_del_ntoh(vapi_msg_gbp_recirc_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_recirc_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_recirc_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_recirc_add_del_msg_size(vapi_msg_gbp_recirc_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_recirc_add_del* vapi_alloc_gbp_recirc_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_recirc_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_recirc_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_recirc_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_recirc_add_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_recirc_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_recirc_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_recirc_add_del_reply *reply),
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
  vapi_msg_gbp_recirc_add_del_hton(msg);
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
    vapi_msg_gbp_recirc_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_recirc_add_del()
{
  static const char name[] = "gbp_recirc_add_del";
  static const char name_with_crc[] = "gbp_recirc_add_del_aaba42d5";
  static vapi_message_desc_t __vapi_metadata_gbp_recirc_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_recirc_add_del, payload),
    sizeof(vapi_msg_gbp_recirc_add_del),
    (generic_swap_fn_t)vapi_msg_gbp_recirc_add_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_recirc_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_recirc_add_del = vapi_register_msg(&__vapi_metadata_gbp_recirc_add_del);
  VAPI_DBG("Assigned msg id %d to gbp_recirc_add_del", vapi_msg_id_gbp_recirc_add_del);
}
#endif

#ifndef defined_vapi_msg_gbp_subnet_add_del
#define defined_vapi_msg_gbp_subnet_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  vapi_type_gbp_subnet subnet; 
} vapi_payload_gbp_subnet_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_subnet_add_del payload;
} vapi_msg_gbp_subnet_add_del;

static inline void vapi_msg_gbp_subnet_add_del_payload_hton(vapi_payload_gbp_subnet_add_del *payload)
{
  vapi_type_gbp_subnet_hton(&payload->subnet);
}

static inline void vapi_msg_gbp_subnet_add_del_payload_ntoh(vapi_payload_gbp_subnet_add_del *payload)
{
  vapi_type_gbp_subnet_ntoh(&payload->subnet);
}

static inline void vapi_msg_gbp_subnet_add_del_hton(vapi_msg_gbp_subnet_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_subnet_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_subnet_add_del_ntoh(vapi_msg_gbp_subnet_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_subnet_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_subnet_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_subnet_add_del_msg_size(vapi_msg_gbp_subnet_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_subnet_add_del* vapi_alloc_gbp_subnet_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_subnet_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_subnet_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_subnet_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_subnet_add_del);

  return msg;
}

static inline vapi_error_e vapi_gbp_subnet_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_subnet_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_subnet_add_del_reply *reply),
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
  vapi_msg_gbp_subnet_add_del_hton(msg);
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
    vapi_msg_gbp_subnet_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_subnet_add_del()
{
  static const char name[] = "gbp_subnet_add_del";
  static const char name_with_crc[] = "gbp_subnet_add_del_f42b9430";
  static vapi_message_desc_t __vapi_metadata_gbp_subnet_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_subnet_add_del, payload),
    sizeof(vapi_msg_gbp_subnet_add_del),
    (generic_swap_fn_t)vapi_msg_gbp_subnet_add_del_hton,
    (generic_swap_fn_t)vapi_msg_gbp_subnet_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_subnet_add_del = vapi_register_msg(&__vapi_metadata_gbp_subnet_add_del);
  VAPI_DBG("Assigned msg id %d to gbp_subnet_add_del", vapi_msg_id_gbp_subnet_add_del);
}
#endif

#ifndef defined_vapi_msg_gbp_endpoint_group_add_reply
#define defined_vapi_msg_gbp_endpoint_group_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gbp_endpoint_group_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gbp_endpoint_group_add_reply payload;
} vapi_msg_gbp_endpoint_group_add_reply;

static inline void vapi_msg_gbp_endpoint_group_add_reply_payload_hton(vapi_payload_gbp_endpoint_group_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gbp_endpoint_group_add_reply_payload_ntoh(vapi_payload_gbp_endpoint_group_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gbp_endpoint_group_add_reply_hton(vapi_msg_gbp_endpoint_group_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_group_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_group_add_reply_ntoh(vapi_msg_gbp_endpoint_group_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_group_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_group_add_reply_msg_size(vapi_msg_gbp_endpoint_group_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_group_add_reply()
{
  static const char name[] = "gbp_endpoint_group_add_reply";
  static const char name_with_crc[] = "gbp_endpoint_group_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_group_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gbp_endpoint_group_add_reply, payload),
    sizeof(vapi_msg_gbp_endpoint_group_add_reply),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_group_add_reply = vapi_register_msg(&__vapi_metadata_gbp_endpoint_group_add_reply);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_group_add_reply", vapi_msg_id_gbp_endpoint_group_add_reply);
}

static inline void vapi_set_vapi_msg_gbp_endpoint_group_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gbp_endpoint_group_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gbp_endpoint_group_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gbp_endpoint_group_add
#define defined_vapi_msg_gbp_endpoint_group_add
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gbp_endpoint_group epg; 
} vapi_payload_gbp_endpoint_group_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gbp_endpoint_group_add payload;
} vapi_msg_gbp_endpoint_group_add;

static inline void vapi_msg_gbp_endpoint_group_add_payload_hton(vapi_payload_gbp_endpoint_group_add *payload)
{
  vapi_type_gbp_endpoint_group_hton(&payload->epg);
}

static inline void vapi_msg_gbp_endpoint_group_add_payload_ntoh(vapi_payload_gbp_endpoint_group_add *payload)
{
  vapi_type_gbp_endpoint_group_ntoh(&payload->epg);
}

static inline void vapi_msg_gbp_endpoint_group_add_hton(vapi_msg_gbp_endpoint_group_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gbp_endpoint_group_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_gbp_endpoint_group_add_ntoh(vapi_msg_gbp_endpoint_group_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_endpoint_group_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gbp_endpoint_group_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gbp_endpoint_group_add_msg_size(vapi_msg_gbp_endpoint_group_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_endpoint_group_add* vapi_alloc_gbp_endpoint_group_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_endpoint_group_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_endpoint_group_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_endpoint_group_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_endpoint_group_add);

  return msg;
}

static inline vapi_error_e vapi_gbp_endpoint_group_add(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_endpoint_group_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_endpoint_group_add_reply *reply),
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
  vapi_msg_gbp_endpoint_group_add_hton(msg);
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
    vapi_msg_gbp_endpoint_group_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_endpoint_group_add()
{
  static const char name[] = "gbp_endpoint_group_add";
  static const char name_with_crc[] = "gbp_endpoint_group_add_1031b376";
  static vapi_message_desc_t __vapi_metadata_gbp_endpoint_group_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gbp_endpoint_group_add, payload),
    sizeof(vapi_msg_gbp_endpoint_group_add),
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_add_hton,
    (generic_swap_fn_t)vapi_msg_gbp_endpoint_group_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_endpoint_group_add = vapi_register_msg(&__vapi_metadata_gbp_endpoint_group_add);
  VAPI_DBG("Assigned msg id %d to gbp_endpoint_group_add", vapi_msg_id_gbp_endpoint_group_add);
}
#endif

#ifndef defined_vapi_msg_gbp_route_domain_dump
#define defined_vapi_msg_gbp_route_domain_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gbp_route_domain_dump;

static inline void vapi_msg_gbp_route_domain_dump_hton(vapi_msg_gbp_route_domain_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gbp_route_domain_dump_ntoh(vapi_msg_gbp_route_domain_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gbp_route_domain_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gbp_route_domain_dump_msg_size(vapi_msg_gbp_route_domain_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gbp_route_domain_dump* vapi_alloc_gbp_route_domain_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gbp_route_domain_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gbp_route_domain_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gbp_route_domain_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gbp_route_domain_dump);

  return msg;
}

static inline vapi_error_e vapi_gbp_route_domain_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gbp_route_domain_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gbp_route_domain_details *reply),
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
  vapi_msg_gbp_route_domain_dump_hton(msg);
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
    vapi_msg_gbp_route_domain_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gbp_route_domain_dump()
{
  static const char name[] = "gbp_route_domain_dump";
  static const char name_with_crc[] = "gbp_route_domain_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_gbp_route_domain_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gbp_route_domain_dump),
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_dump_hton,
    (generic_swap_fn_t)vapi_msg_gbp_route_domain_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gbp_route_domain_dump = vapi_register_msg(&__vapi_metadata_gbp_route_domain_dump);
  VAPI_DBG("Assigned msg id %d to gbp_route_domain_dump", vapi_msg_id_gbp_route_domain_dump);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
