#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_ipsec_ipsec_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_ipsec_ipsec_api_json

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

extern vapi_msg_id_t vapi_msg_id_ipsec_spd_add_del;
extern vapi_msg_id_t vapi_msg_id_ipsec_spd_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_interface_add_del_spd;
extern vapi_msg_id_t vapi_msg_id_ipsec_interface_add_del_spd_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_spd_entry_add_del;
extern vapi_msg_id_t vapi_msg_id_ipsec_spd_entry_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_spds_dump;
extern vapi_msg_id_t vapi_msg_id_ipsec_spds_details;
extern vapi_msg_id_t vapi_msg_id_ipsec_spd_dump;
extern vapi_msg_id_t vapi_msg_id_ipsec_spd_details;
extern vapi_msg_id_t vapi_msg_id_ipsec_sad_entry_add_del;
extern vapi_msg_id_t vapi_msg_id_ipsec_sad_entry_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_update;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_update_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_del;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_del_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_dump;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_details;
extern vapi_msg_id_t vapi_msg_id_ipsec_spd_interface_dump;
extern vapi_msg_id_t vapi_msg_id_ipsec_spd_interface_details;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_add_del;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_sa_dump;
extern vapi_msg_id_t vapi_msg_id_ipsec_sa_details;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_set_sa;
extern vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_set_sa_reply;
extern vapi_msg_id_t vapi_msg_id_ipsec_backend_dump;
extern vapi_msg_id_t vapi_msg_id_ipsec_backend_details;
extern vapi_msg_id_t vapi_msg_id_ipsec_select_backend;
extern vapi_msg_id_t vapi_msg_id_ipsec_select_backend_reply;

#define DEFINE_VAPI_MSG_IDS_IPSEC_API_JSON\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_add_del;\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_interface_add_del_spd;\
  vapi_msg_id_t vapi_msg_id_ipsec_interface_add_del_spd_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_entry_add_del;\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_entry_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_spds_dump;\
  vapi_msg_id_t vapi_msg_id_ipsec_spds_details;\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_dump;\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_details;\
  vapi_msg_id_t vapi_msg_id_ipsec_sad_entry_add_del;\
  vapi_msg_id_t vapi_msg_id_ipsec_sad_entry_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_update;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_update_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_del;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_del_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_dump;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_protect_details;\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_interface_dump;\
  vapi_msg_id_t vapi_msg_id_ipsec_spd_interface_details;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_add_del;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_sa_dump;\
  vapi_msg_id_t vapi_msg_id_ipsec_sa_details;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_set_sa;\
  vapi_msg_id_t vapi_msg_id_ipsec_tunnel_if_set_sa_reply;\
  vapi_msg_id_t vapi_msg_id_ipsec_backend_dump;\
  vapi_msg_id_t vapi_msg_id_ipsec_backend_details;\
  vapi_msg_id_t vapi_msg_id_ipsec_select_backend;\
  vapi_msg_id_t vapi_msg_id_ipsec_select_backend_reply;


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

#ifndef defined_vapi_enum_ipsec_crypto_alg
#define defined_vapi_enum_ipsec_crypto_alg
typedef enum {
  IPSEC_API_CRYPTO_ALG_NONE = 0,
  IPSEC_API_CRYPTO_ALG_AES_CBC_128 = 1,
  IPSEC_API_CRYPTO_ALG_AES_CBC_192 = 2,
  IPSEC_API_CRYPTO_ALG_AES_CBC_256 = 3,
  IPSEC_API_CRYPTO_ALG_AES_CTR_128 = 4,
  IPSEC_API_CRYPTO_ALG_AES_CTR_192 = 5,
  IPSEC_API_CRYPTO_ALG_AES_CTR_256 = 6,
  IPSEC_API_CRYPTO_ALG_AES_GCM_128 = 7,
  IPSEC_API_CRYPTO_ALG_AES_GCM_192 = 8,
  IPSEC_API_CRYPTO_ALG_AES_GCM_256 = 9,
  IPSEC_API_CRYPTO_ALG_DES_CBC = 10,
  IPSEC_API_CRYPTO_ALG_3DES_CBC = 11,
}  vapi_enum_ipsec_crypto_alg;

#endif

#ifndef defined_vapi_enum_ipsec_integ_alg
#define defined_vapi_enum_ipsec_integ_alg
typedef enum {
  IPSEC_API_INTEG_ALG_NONE = 0,
  IPSEC_API_INTEG_ALG_MD5_96 = 1,
  IPSEC_API_INTEG_ALG_SHA1_96 = 2,
  IPSEC_API_INTEG_ALG_SHA_256_96 = 3,
  IPSEC_API_INTEG_ALG_SHA_256_128 = 4,
  IPSEC_API_INTEG_ALG_SHA_384_192 = 5,
  IPSEC_API_INTEG_ALG_SHA_512_256 = 6,
}  vapi_enum_ipsec_integ_alg;

#endif

#ifndef defined_vapi_enum_ipsec_sad_flags
#define defined_vapi_enum_ipsec_sad_flags
typedef enum {
  IPSEC_API_SAD_FLAG_NONE = 0,
  IPSEC_API_SAD_FLAG_USE_ESN = 1,
  IPSEC_API_SAD_FLAG_USE_ANTI_REPLAY = 2,
  IPSEC_API_SAD_FLAG_IS_TUNNEL = 4,
  IPSEC_API_SAD_FLAG_IS_TUNNEL_V6 = 8,
  IPSEC_API_SAD_FLAG_UDP_ENCAP = 16,
  IPSEC_API_SAD_FLAG_IS_INBOUND = 64,
}  vapi_enum_ipsec_sad_flags;

#endif

#ifndef defined_vapi_enum_ipsec_proto
#define defined_vapi_enum_ipsec_proto
typedef enum {
  IPSEC_API_PROTO_ESP = 50,
  IPSEC_API_PROTO_AH = 51,
}  vapi_enum_ipsec_proto;

#endif

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

#ifndef defined_vapi_enum_ipsec_spd_action
#define defined_vapi_enum_ipsec_spd_action
typedef enum {
  IPSEC_API_SPD_ACTION_BYPASS = 0,
  IPSEC_API_SPD_ACTION_DISCARD = 1,
  IPSEC_API_SPD_ACTION_RESOLVE = 2,
  IPSEC_API_SPD_ACTION_PROTECT = 3,
}  vapi_enum_ipsec_spd_action;

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

#ifndef defined_vapi_type_key
#define defined_vapi_type_key
typedef struct __attribute__((__packed__)) {
  u8 length;
  u8 data[128];
} vapi_type_key;

static inline void vapi_type_key_hton(vapi_type_key *msg)
{

}

static inline void vapi_type_key_ntoh(vapi_type_key *msg)
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

#ifndef defined_vapi_type_ipsec_sad_entry
#define defined_vapi_type_ipsec_sad_entry
typedef struct __attribute__((__packed__)) {
  u32 sad_id;
  u32 spi;
  vapi_enum_ipsec_proto protocol;
  vapi_enum_ipsec_crypto_alg crypto_algorithm;
  vapi_type_key crypto_key;
  vapi_enum_ipsec_integ_alg integrity_algorithm;
  vapi_type_key integrity_key;
  vapi_enum_ipsec_sad_flags flags;
  vapi_type_address tunnel_src;
  vapi_type_address tunnel_dst;
  u32 tx_table_id;
  u32 salt;
  u16 udp_src_port;
  u16 udp_dst_port;
} vapi_type_ipsec_sad_entry;

static inline void vapi_type_ipsec_sad_entry_hton(vapi_type_ipsec_sad_entry *msg)
{
  msg->sad_id = htobe32(msg->sad_id);
  msg->spi = htobe32(msg->spi);
  msg->protocol = (vapi_enum_ipsec_proto)htobe32(msg->protocol);
  msg->crypto_algorithm = (vapi_enum_ipsec_crypto_alg)htobe32(msg->crypto_algorithm);
  msg->integrity_algorithm = (vapi_enum_ipsec_integ_alg)htobe32(msg->integrity_algorithm);
  msg->flags = (vapi_enum_ipsec_sad_flags)htobe32(msg->flags);
  msg->tx_table_id = htobe32(msg->tx_table_id);
  msg->salt = htobe32(msg->salt);
  msg->udp_src_port = htobe16(msg->udp_src_port);
  msg->udp_dst_port = htobe16(msg->udp_dst_port);
}

static inline void vapi_type_ipsec_sad_entry_ntoh(vapi_type_ipsec_sad_entry *msg)
{
  msg->sad_id = be32toh(msg->sad_id);
  msg->spi = be32toh(msg->spi);
  msg->protocol = (vapi_enum_ipsec_proto)be32toh(msg->protocol);
  msg->crypto_algorithm = (vapi_enum_ipsec_crypto_alg)be32toh(msg->crypto_algorithm);
  msg->integrity_algorithm = (vapi_enum_ipsec_integ_alg)be32toh(msg->integrity_algorithm);
  msg->flags = (vapi_enum_ipsec_sad_flags)be32toh(msg->flags);
  msg->tx_table_id = be32toh(msg->tx_table_id);
  msg->salt = be32toh(msg->salt);
  msg->udp_src_port = be16toh(msg->udp_src_port);
  msg->udp_dst_port = be16toh(msg->udp_dst_port);
}
#endif

#ifndef defined_vapi_type_ipsec_spd_entry
#define defined_vapi_type_ipsec_spd_entry
typedef struct __attribute__((__packed__)) {
  u32 spd_id;
  i32 priority;
  bool is_outbound;
  u32 sa_id;
  vapi_enum_ipsec_spd_action policy;
  u8 protocol;
  vapi_type_address remote_address_start;
  vapi_type_address remote_address_stop;
  vapi_type_address local_address_start;
  vapi_type_address local_address_stop;
  u16 remote_port_start;
  u16 remote_port_stop;
  u16 local_port_start;
  u16 local_port_stop;
} vapi_type_ipsec_spd_entry;

static inline void vapi_type_ipsec_spd_entry_hton(vapi_type_ipsec_spd_entry *msg)
{
  msg->spd_id = htobe32(msg->spd_id);
  msg->priority = htobe32(msg->priority);
  msg->sa_id = htobe32(msg->sa_id);
  msg->policy = (vapi_enum_ipsec_spd_action)htobe32(msg->policy);
  msg->remote_port_start = htobe16(msg->remote_port_start);
  msg->remote_port_stop = htobe16(msg->remote_port_stop);
  msg->local_port_start = htobe16(msg->local_port_start);
  msg->local_port_stop = htobe16(msg->local_port_stop);
}

static inline void vapi_type_ipsec_spd_entry_ntoh(vapi_type_ipsec_spd_entry *msg)
{
  msg->spd_id = be32toh(msg->spd_id);
  msg->priority = be32toh(msg->priority);
  msg->sa_id = be32toh(msg->sa_id);
  msg->policy = (vapi_enum_ipsec_spd_action)be32toh(msg->policy);
  msg->remote_port_start = be16toh(msg->remote_port_start);
  msg->remote_port_stop = be16toh(msg->remote_port_stop);
  msg->local_port_start = be16toh(msg->local_port_start);
  msg->local_port_stop = be16toh(msg->local_port_stop);
}
#endif

#ifndef defined_vapi_type_interface_index
#define defined_vapi_type_interface_index
typedef u32 vapi_type_interface_index;

#endif

#ifndef defined_vapi_type_ipsec_tunnel_protect
#define defined_vapi_type_ipsec_tunnel_protect
typedef struct __attribute__((__packed__)) {
  vapi_type_interface_index sw_if_index;
  vapi_type_address nh;
  u32 sa_out;
  u8 n_sa_in;
  u32 sa_in[0];
} vapi_type_ipsec_tunnel_protect;

static inline void vapi_type_ipsec_tunnel_protect_hton(vapi_type_ipsec_tunnel_protect *msg)
{
  msg->sw_if_index = htobe32(msg->sw_if_index);
  msg->sa_out = htobe32(msg->sa_out);
  do { unsigned i; for (i = 0; i < msg->n_sa_in; ++i) { msg->sa_in[i] = htobe32(msg->sa_in[i]); } } while(0);
}

static inline void vapi_type_ipsec_tunnel_protect_ntoh(vapi_type_ipsec_tunnel_protect *msg)
{
  msg->sw_if_index = be32toh(msg->sw_if_index);
  msg->sa_out = be32toh(msg->sa_out);
  do { unsigned i; for (i = 0; i < msg->n_sa_in; ++i) { msg->sa_in[i] = be32toh(msg->sa_in[i]); } } while(0);
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

#ifndef defined_vapi_msg_ipsec_spd_add_del_reply
#define defined_vapi_msg_ipsec_spd_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipsec_spd_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_spd_add_del_reply payload;
} vapi_msg_ipsec_spd_add_del_reply;

static inline void vapi_msg_ipsec_spd_add_del_reply_payload_hton(vapi_payload_ipsec_spd_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipsec_spd_add_del_reply_payload_ntoh(vapi_payload_ipsec_spd_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipsec_spd_add_del_reply_hton(vapi_msg_ipsec_spd_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_spd_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_add_del_reply_ntoh(vapi_msg_ipsec_spd_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_add_del_reply_msg_size(vapi_msg_ipsec_spd_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_add_del_reply()
{
  static const char name[] = "ipsec_spd_add_del_reply";
  static const char name_with_crc[] = "ipsec_spd_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_spd_add_del_reply, payload),
    sizeof(vapi_msg_ipsec_spd_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_add_del_reply = vapi_register_msg(&__vapi_metadata_ipsec_spd_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_add_del_reply", vapi_msg_id_ipsec_spd_add_del_reply);
}

static inline void vapi_set_vapi_msg_ipsec_spd_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_spd_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_spd_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_spd_add_del
#define defined_vapi_msg_ipsec_spd_add_del
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  u32 spd_id; 
} vapi_payload_ipsec_spd_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_spd_add_del payload;
} vapi_msg_ipsec_spd_add_del;

static inline void vapi_msg_ipsec_spd_add_del_payload_hton(vapi_payload_ipsec_spd_add_del *payload)
{
  payload->spd_id = htobe32(payload->spd_id);
}

static inline void vapi_msg_ipsec_spd_add_del_payload_ntoh(vapi_payload_ipsec_spd_add_del *payload)
{
  payload->spd_id = be32toh(payload->spd_id);
}

static inline void vapi_msg_ipsec_spd_add_del_hton(vapi_msg_ipsec_spd_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_spd_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_add_del_ntoh(vapi_msg_ipsec_spd_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_add_del_msg_size(vapi_msg_ipsec_spd_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_spd_add_del* vapi_alloc_ipsec_spd_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_spd_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_spd_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_spd_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_spd_add_del);

  return msg;
}

static inline vapi_error_e vapi_ipsec_spd_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_spd_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_spd_add_del_reply *reply),
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
  vapi_msg_ipsec_spd_add_del_hton(msg);
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
    vapi_msg_ipsec_spd_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_add_del()
{
  static const char name[] = "ipsec_spd_add_del";
  static const char name_with_crc[] = "ipsec_spd_add_del_20e89a95";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_spd_add_del, payload),
    sizeof(vapi_msg_ipsec_spd_add_del),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_add_del = vapi_register_msg(&__vapi_metadata_ipsec_spd_add_del);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_add_del", vapi_msg_id_ipsec_spd_add_del);
}
#endif

#ifndef defined_vapi_msg_ipsec_interface_add_del_spd_reply
#define defined_vapi_msg_ipsec_interface_add_del_spd_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipsec_interface_add_del_spd_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_interface_add_del_spd_reply payload;
} vapi_msg_ipsec_interface_add_del_spd_reply;

static inline void vapi_msg_ipsec_interface_add_del_spd_reply_payload_hton(vapi_payload_ipsec_interface_add_del_spd_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipsec_interface_add_del_spd_reply_payload_ntoh(vapi_payload_ipsec_interface_add_del_spd_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipsec_interface_add_del_spd_reply_hton(vapi_msg_ipsec_interface_add_del_spd_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_interface_add_del_spd_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_interface_add_del_spd_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_interface_add_del_spd_reply_ntoh(vapi_msg_ipsec_interface_add_del_spd_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_interface_add_del_spd_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_interface_add_del_spd_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_interface_add_del_spd_reply_msg_size(vapi_msg_ipsec_interface_add_del_spd_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_interface_add_del_spd_reply()
{
  static const char name[] = "ipsec_interface_add_del_spd_reply";
  static const char name_with_crc[] = "ipsec_interface_add_del_spd_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipsec_interface_add_del_spd_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_interface_add_del_spd_reply, payload),
    sizeof(vapi_msg_ipsec_interface_add_del_spd_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_interface_add_del_spd_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_interface_add_del_spd_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_interface_add_del_spd_reply = vapi_register_msg(&__vapi_metadata_ipsec_interface_add_del_spd_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_interface_add_del_spd_reply", vapi_msg_id_ipsec_interface_add_del_spd_reply);
}

static inline void vapi_set_vapi_msg_ipsec_interface_add_del_spd_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_interface_add_del_spd_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_interface_add_del_spd_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_interface_add_del_spd
#define defined_vapi_msg_ipsec_interface_add_del_spd
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_interface_index sw_if_index;
  u32 spd_id; 
} vapi_payload_ipsec_interface_add_del_spd;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_interface_add_del_spd payload;
} vapi_msg_ipsec_interface_add_del_spd;

static inline void vapi_msg_ipsec_interface_add_del_spd_payload_hton(vapi_payload_ipsec_interface_add_del_spd *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->spd_id = htobe32(payload->spd_id);
}

static inline void vapi_msg_ipsec_interface_add_del_spd_payload_ntoh(vapi_payload_ipsec_interface_add_del_spd *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->spd_id = be32toh(payload->spd_id);
}

static inline void vapi_msg_ipsec_interface_add_del_spd_hton(vapi_msg_ipsec_interface_add_del_spd *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_interface_add_del_spd'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_interface_add_del_spd_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_interface_add_del_spd_ntoh(vapi_msg_ipsec_interface_add_del_spd *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_interface_add_del_spd'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_interface_add_del_spd_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_interface_add_del_spd_msg_size(vapi_msg_ipsec_interface_add_del_spd *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_interface_add_del_spd* vapi_alloc_ipsec_interface_add_del_spd(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_interface_add_del_spd *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_interface_add_del_spd);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_interface_add_del_spd*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_interface_add_del_spd);

  return msg;
}

static inline vapi_error_e vapi_ipsec_interface_add_del_spd(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_interface_add_del_spd *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_interface_add_del_spd_reply *reply),
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
  vapi_msg_ipsec_interface_add_del_spd_hton(msg);
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
    vapi_msg_ipsec_interface_add_del_spd_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_interface_add_del_spd()
{
  static const char name[] = "ipsec_interface_add_del_spd";
  static const char name_with_crc[] = "ipsec_interface_add_del_spd_80f80cbb";
  static vapi_message_desc_t __vapi_metadata_ipsec_interface_add_del_spd = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_interface_add_del_spd, payload),
    sizeof(vapi_msg_ipsec_interface_add_del_spd),
    (generic_swap_fn_t)vapi_msg_ipsec_interface_add_del_spd_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_interface_add_del_spd_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_interface_add_del_spd = vapi_register_msg(&__vapi_metadata_ipsec_interface_add_del_spd);
  VAPI_DBG("Assigned msg id %d to ipsec_interface_add_del_spd", vapi_msg_id_ipsec_interface_add_del_spd);
}
#endif

#ifndef defined_vapi_msg_ipsec_spd_entry_add_del_reply
#define defined_vapi_msg_ipsec_spd_entry_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 stat_index; 
} vapi_payload_ipsec_spd_entry_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_spd_entry_add_del_reply payload;
} vapi_msg_ipsec_spd_entry_add_del_reply;

static inline void vapi_msg_ipsec_spd_entry_add_del_reply_payload_hton(vapi_payload_ipsec_spd_entry_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->stat_index = htobe32(payload->stat_index);
}

static inline void vapi_msg_ipsec_spd_entry_add_del_reply_payload_ntoh(vapi_payload_ipsec_spd_entry_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->stat_index = be32toh(payload->stat_index);
}

static inline void vapi_msg_ipsec_spd_entry_add_del_reply_hton(vapi_msg_ipsec_spd_entry_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_entry_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_spd_entry_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_entry_add_del_reply_ntoh(vapi_msg_ipsec_spd_entry_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_entry_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_entry_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_entry_add_del_reply_msg_size(vapi_msg_ipsec_spd_entry_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_entry_add_del_reply()
{
  static const char name[] = "ipsec_spd_entry_add_del_reply";
  static const char name_with_crc[] = "ipsec_spd_entry_add_del_reply_9ffac24b";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_entry_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_spd_entry_add_del_reply, payload),
    sizeof(vapi_msg_ipsec_spd_entry_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_entry_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_entry_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_entry_add_del_reply = vapi_register_msg(&__vapi_metadata_ipsec_spd_entry_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_entry_add_del_reply", vapi_msg_id_ipsec_spd_entry_add_del_reply);
}

static inline void vapi_set_vapi_msg_ipsec_spd_entry_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_spd_entry_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_spd_entry_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_spd_entry_add_del
#define defined_vapi_msg_ipsec_spd_entry_add_del
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_ipsec_spd_entry entry; 
} vapi_payload_ipsec_spd_entry_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_spd_entry_add_del payload;
} vapi_msg_ipsec_spd_entry_add_del;

static inline void vapi_msg_ipsec_spd_entry_add_del_payload_hton(vapi_payload_ipsec_spd_entry_add_del *payload)
{
  vapi_type_ipsec_spd_entry_hton(&payload->entry);
}

static inline void vapi_msg_ipsec_spd_entry_add_del_payload_ntoh(vapi_payload_ipsec_spd_entry_add_del *payload)
{
  vapi_type_ipsec_spd_entry_ntoh(&payload->entry);
}

static inline void vapi_msg_ipsec_spd_entry_add_del_hton(vapi_msg_ipsec_spd_entry_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_entry_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_spd_entry_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_entry_add_del_ntoh(vapi_msg_ipsec_spd_entry_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_entry_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_entry_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_entry_add_del_msg_size(vapi_msg_ipsec_spd_entry_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_spd_entry_add_del* vapi_alloc_ipsec_spd_entry_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_spd_entry_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_spd_entry_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_spd_entry_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_spd_entry_add_del);

  return msg;
}

static inline vapi_error_e vapi_ipsec_spd_entry_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_spd_entry_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_spd_entry_add_del_reply *reply),
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
  vapi_msg_ipsec_spd_entry_add_del_hton(msg);
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
    vapi_msg_ipsec_spd_entry_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_entry_add_del()
{
  static const char name[] = "ipsec_spd_entry_add_del";
  static const char name_with_crc[] = "ipsec_spd_entry_add_del_9f384b8d";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_entry_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_spd_entry_add_del, payload),
    sizeof(vapi_msg_ipsec_spd_entry_add_del),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_entry_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_entry_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_entry_add_del = vapi_register_msg(&__vapi_metadata_ipsec_spd_entry_add_del);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_entry_add_del", vapi_msg_id_ipsec_spd_entry_add_del);
}
#endif

#ifndef defined_vapi_msg_ipsec_spds_details
#define defined_vapi_msg_ipsec_spds_details
typedef struct __attribute__ ((__packed__)) {
  u32 spd_id;
  u32 npolicies; 
} vapi_payload_ipsec_spds_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_spds_details payload;
} vapi_msg_ipsec_spds_details;

static inline void vapi_msg_ipsec_spds_details_payload_hton(vapi_payload_ipsec_spds_details *payload)
{
  payload->spd_id = htobe32(payload->spd_id);
  payload->npolicies = htobe32(payload->npolicies);
}

static inline void vapi_msg_ipsec_spds_details_payload_ntoh(vapi_payload_ipsec_spds_details *payload)
{
  payload->spd_id = be32toh(payload->spd_id);
  payload->npolicies = be32toh(payload->npolicies);
}

static inline void vapi_msg_ipsec_spds_details_hton(vapi_msg_ipsec_spds_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spds_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_spds_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spds_details_ntoh(vapi_msg_ipsec_spds_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spds_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_spds_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spds_details_msg_size(vapi_msg_ipsec_spds_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_spds_details()
{
  static const char name[] = "ipsec_spds_details";
  static const char name_with_crc[] = "ipsec_spds_details_a04bb254";
  static vapi_message_desc_t __vapi_metadata_ipsec_spds_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_spds_details, payload),
    sizeof(vapi_msg_ipsec_spds_details),
    (generic_swap_fn_t)vapi_msg_ipsec_spds_details_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spds_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spds_details = vapi_register_msg(&__vapi_metadata_ipsec_spds_details);
  VAPI_DBG("Assigned msg id %d to ipsec_spds_details", vapi_msg_id_ipsec_spds_details);
}

static inline void vapi_set_vapi_msg_ipsec_spds_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_spds_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_spds_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_spds_dump
#define defined_vapi_msg_ipsec_spds_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ipsec_spds_dump;

static inline void vapi_msg_ipsec_spds_dump_hton(vapi_msg_ipsec_spds_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spds_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ipsec_spds_dump_ntoh(vapi_msg_ipsec_spds_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spds_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ipsec_spds_dump_msg_size(vapi_msg_ipsec_spds_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_spds_dump* vapi_alloc_ipsec_spds_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_spds_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_spds_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_spds_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_spds_dump);

  return msg;
}

static inline vapi_error_e vapi_ipsec_spds_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_spds_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_spds_details *reply),
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
  vapi_msg_ipsec_spds_dump_hton(msg);
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
    vapi_msg_ipsec_spds_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_spds_dump()
{
  static const char name[] = "ipsec_spds_dump";
  static const char name_with_crc[] = "ipsec_spds_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ipsec_spds_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ipsec_spds_dump),
    (generic_swap_fn_t)vapi_msg_ipsec_spds_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spds_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spds_dump = vapi_register_msg(&__vapi_metadata_ipsec_spds_dump);
  VAPI_DBG("Assigned msg id %d to ipsec_spds_dump", vapi_msg_id_ipsec_spds_dump);
}
#endif

#ifndef defined_vapi_msg_ipsec_spd_details
#define defined_vapi_msg_ipsec_spd_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ipsec_spd_entry entry; 
} vapi_payload_ipsec_spd_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_spd_details payload;
} vapi_msg_ipsec_spd_details;

static inline void vapi_msg_ipsec_spd_details_payload_hton(vapi_payload_ipsec_spd_details *payload)
{
  vapi_type_ipsec_spd_entry_hton(&payload->entry);
}

static inline void vapi_msg_ipsec_spd_details_payload_ntoh(vapi_payload_ipsec_spd_details *payload)
{
  vapi_type_ipsec_spd_entry_ntoh(&payload->entry);
}

static inline void vapi_msg_ipsec_spd_details_hton(vapi_msg_ipsec_spd_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_spd_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_details_ntoh(vapi_msg_ipsec_spd_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_details_msg_size(vapi_msg_ipsec_spd_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_details()
{
  static const char name[] = "ipsec_spd_details";
  static const char name_with_crc[] = "ipsec_spd_details_f2222790";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_spd_details, payload),
    sizeof(vapi_msg_ipsec_spd_details),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_details_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_details = vapi_register_msg(&__vapi_metadata_ipsec_spd_details);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_details", vapi_msg_id_ipsec_spd_details);
}

static inline void vapi_set_vapi_msg_ipsec_spd_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_spd_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_spd_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_spd_dump
#define defined_vapi_msg_ipsec_spd_dump
typedef struct __attribute__ ((__packed__)) {
  u32 spd_id;
  u32 sa_id; 
} vapi_payload_ipsec_spd_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_spd_dump payload;
} vapi_msg_ipsec_spd_dump;

static inline void vapi_msg_ipsec_spd_dump_payload_hton(vapi_payload_ipsec_spd_dump *payload)
{
  payload->spd_id = htobe32(payload->spd_id);
  payload->sa_id = htobe32(payload->sa_id);
}

static inline void vapi_msg_ipsec_spd_dump_payload_ntoh(vapi_payload_ipsec_spd_dump *payload)
{
  payload->spd_id = be32toh(payload->spd_id);
  payload->sa_id = be32toh(payload->sa_id);
}

static inline void vapi_msg_ipsec_spd_dump_hton(vapi_msg_ipsec_spd_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_spd_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_dump_ntoh(vapi_msg_ipsec_spd_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_dump_msg_size(vapi_msg_ipsec_spd_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_spd_dump* vapi_alloc_ipsec_spd_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_spd_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_spd_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_spd_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_spd_dump);

  return msg;
}

static inline vapi_error_e vapi_ipsec_spd_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_spd_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_spd_details *reply),
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
  vapi_msg_ipsec_spd_dump_hton(msg);
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
    vapi_msg_ipsec_spd_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_dump()
{
  static const char name[] = "ipsec_spd_dump";
  static const char name_with_crc[] = "ipsec_spd_dump_afefbf7d";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_spd_dump, payload),
    sizeof(vapi_msg_ipsec_spd_dump),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_dump = vapi_register_msg(&__vapi_metadata_ipsec_spd_dump);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_dump", vapi_msg_id_ipsec_spd_dump);
}
#endif

#ifndef defined_vapi_msg_ipsec_sad_entry_add_del_reply
#define defined_vapi_msg_ipsec_sad_entry_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 stat_index; 
} vapi_payload_ipsec_sad_entry_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_sad_entry_add_del_reply payload;
} vapi_msg_ipsec_sad_entry_add_del_reply;

static inline void vapi_msg_ipsec_sad_entry_add_del_reply_payload_hton(vapi_payload_ipsec_sad_entry_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->stat_index = htobe32(payload->stat_index);
}

static inline void vapi_msg_ipsec_sad_entry_add_del_reply_payload_ntoh(vapi_payload_ipsec_sad_entry_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->stat_index = be32toh(payload->stat_index);
}

static inline void vapi_msg_ipsec_sad_entry_add_del_reply_hton(vapi_msg_ipsec_sad_entry_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sad_entry_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_sad_entry_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_sad_entry_add_del_reply_ntoh(vapi_msg_ipsec_sad_entry_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sad_entry_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_sad_entry_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_sad_entry_add_del_reply_msg_size(vapi_msg_ipsec_sad_entry_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_sad_entry_add_del_reply()
{
  static const char name[] = "ipsec_sad_entry_add_del_reply";
  static const char name_with_crc[] = "ipsec_sad_entry_add_del_reply_9ffac24b";
  static vapi_message_desc_t __vapi_metadata_ipsec_sad_entry_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_sad_entry_add_del_reply, payload),
    sizeof(vapi_msg_ipsec_sad_entry_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_sad_entry_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_sad_entry_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_sad_entry_add_del_reply = vapi_register_msg(&__vapi_metadata_ipsec_sad_entry_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_sad_entry_add_del_reply", vapi_msg_id_ipsec_sad_entry_add_del_reply);
}

static inline void vapi_set_vapi_msg_ipsec_sad_entry_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_sad_entry_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_sad_entry_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_sad_entry_add_del
#define defined_vapi_msg_ipsec_sad_entry_add_del
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  vapi_type_ipsec_sad_entry entry; 
} vapi_payload_ipsec_sad_entry_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_sad_entry_add_del payload;
} vapi_msg_ipsec_sad_entry_add_del;

static inline void vapi_msg_ipsec_sad_entry_add_del_payload_hton(vapi_payload_ipsec_sad_entry_add_del *payload)
{
  vapi_type_ipsec_sad_entry_hton(&payload->entry);
}

static inline void vapi_msg_ipsec_sad_entry_add_del_payload_ntoh(vapi_payload_ipsec_sad_entry_add_del *payload)
{
  vapi_type_ipsec_sad_entry_ntoh(&payload->entry);
}

static inline void vapi_msg_ipsec_sad_entry_add_del_hton(vapi_msg_ipsec_sad_entry_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sad_entry_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_sad_entry_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_sad_entry_add_del_ntoh(vapi_msg_ipsec_sad_entry_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sad_entry_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_sad_entry_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_sad_entry_add_del_msg_size(vapi_msg_ipsec_sad_entry_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_sad_entry_add_del* vapi_alloc_ipsec_sad_entry_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_sad_entry_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_sad_entry_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_sad_entry_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_sad_entry_add_del);

  return msg;
}

static inline vapi_error_e vapi_ipsec_sad_entry_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_sad_entry_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_sad_entry_add_del_reply *reply),
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
  vapi_msg_ipsec_sad_entry_add_del_hton(msg);
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
    vapi_msg_ipsec_sad_entry_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_sad_entry_add_del()
{
  static const char name[] = "ipsec_sad_entry_add_del";
  static const char name_with_crc[] = "ipsec_sad_entry_add_del_b8def364";
  static vapi_message_desc_t __vapi_metadata_ipsec_sad_entry_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_sad_entry_add_del, payload),
    sizeof(vapi_msg_ipsec_sad_entry_add_del),
    (generic_swap_fn_t)vapi_msg_ipsec_sad_entry_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_sad_entry_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_sad_entry_add_del = vapi_register_msg(&__vapi_metadata_ipsec_sad_entry_add_del);
  VAPI_DBG("Assigned msg id %d to ipsec_sad_entry_add_del", vapi_msg_id_ipsec_sad_entry_add_del);
}
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_protect_update_reply
#define defined_vapi_msg_ipsec_tunnel_protect_update_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipsec_tunnel_protect_update_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_tunnel_protect_update_reply payload;
} vapi_msg_ipsec_tunnel_protect_update_reply;

static inline void vapi_msg_ipsec_tunnel_protect_update_reply_payload_hton(vapi_payload_ipsec_tunnel_protect_update_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipsec_tunnel_protect_update_reply_payload_ntoh(vapi_payload_ipsec_tunnel_protect_update_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipsec_tunnel_protect_update_reply_hton(vapi_msg_ipsec_tunnel_protect_update_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_update_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_protect_update_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_protect_update_reply_ntoh(vapi_msg_ipsec_tunnel_protect_update_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_update_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_protect_update_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_protect_update_reply_msg_size(vapi_msg_ipsec_tunnel_protect_update_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_protect_update_reply()
{
  static const char name[] = "ipsec_tunnel_protect_update_reply";
  static const char name_with_crc[] = "ipsec_tunnel_protect_update_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_protect_update_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_tunnel_protect_update_reply, payload),
    sizeof(vapi_msg_ipsec_tunnel_protect_update_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_update_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_update_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_protect_update_reply = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_protect_update_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_protect_update_reply", vapi_msg_id_ipsec_tunnel_protect_update_reply);
}

static inline void vapi_set_vapi_msg_ipsec_tunnel_protect_update_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_tunnel_protect_update_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_tunnel_protect_update_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_protect_update
#define defined_vapi_msg_ipsec_tunnel_protect_update
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ipsec_tunnel_protect tunnel; 
} vapi_payload_ipsec_tunnel_protect_update;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_tunnel_protect_update payload;
} vapi_msg_ipsec_tunnel_protect_update;

static inline void vapi_msg_ipsec_tunnel_protect_update_payload_hton(vapi_payload_ipsec_tunnel_protect_update *payload)
{
  vapi_type_ipsec_tunnel_protect_hton(&payload->tunnel);
}

static inline void vapi_msg_ipsec_tunnel_protect_update_payload_ntoh(vapi_payload_ipsec_tunnel_protect_update *payload)
{
  vapi_type_ipsec_tunnel_protect_ntoh(&payload->tunnel);
}

static inline void vapi_msg_ipsec_tunnel_protect_update_hton(vapi_msg_ipsec_tunnel_protect_update *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_update'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_protect_update_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_protect_update_ntoh(vapi_msg_ipsec_tunnel_protect_update *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_update'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_protect_update_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_protect_update_msg_size(vapi_msg_ipsec_tunnel_protect_update *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_tunnel_protect_update* vapi_alloc_ipsec_tunnel_protect_update(struct vapi_ctx_s *ctx, size_t tunnel_sa_in_array_size)
{
  vapi_msg_ipsec_tunnel_protect_update *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_tunnel_protect_update) + sizeof(msg->payload.tunnel.sa_in[0]) * tunnel_sa_in_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_tunnel_protect_update*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_tunnel_protect_update);
  msg->payload.tunnel.n_sa_in = tunnel_sa_in_array_size;

  return msg;
}

static inline vapi_error_e vapi_ipsec_tunnel_protect_update(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_tunnel_protect_update *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_tunnel_protect_update_reply *reply),
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
  vapi_msg_ipsec_tunnel_protect_update_hton(msg);
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
    vapi_msg_ipsec_tunnel_protect_update_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_protect_update()
{
  static const char name[] = "ipsec_tunnel_protect_update";
  static const char name_with_crc[] = "ipsec_tunnel_protect_update_143f155d";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_protect_update = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_tunnel_protect_update, payload),
    sizeof(vapi_msg_ipsec_tunnel_protect_update),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_update_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_update_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_protect_update = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_protect_update);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_protect_update", vapi_msg_id_ipsec_tunnel_protect_update);
}
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_protect_del_reply
#define defined_vapi_msg_ipsec_tunnel_protect_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipsec_tunnel_protect_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_tunnel_protect_del_reply payload;
} vapi_msg_ipsec_tunnel_protect_del_reply;

static inline void vapi_msg_ipsec_tunnel_protect_del_reply_payload_hton(vapi_payload_ipsec_tunnel_protect_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipsec_tunnel_protect_del_reply_payload_ntoh(vapi_payload_ipsec_tunnel_protect_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipsec_tunnel_protect_del_reply_hton(vapi_msg_ipsec_tunnel_protect_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_protect_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_protect_del_reply_ntoh(vapi_msg_ipsec_tunnel_protect_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_protect_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_protect_del_reply_msg_size(vapi_msg_ipsec_tunnel_protect_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_protect_del_reply()
{
  static const char name[] = "ipsec_tunnel_protect_del_reply";
  static const char name_with_crc[] = "ipsec_tunnel_protect_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_protect_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_tunnel_protect_del_reply, payload),
    sizeof(vapi_msg_ipsec_tunnel_protect_del_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_protect_del_reply = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_protect_del_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_protect_del_reply", vapi_msg_id_ipsec_tunnel_protect_del_reply);
}

static inline void vapi_set_vapi_msg_ipsec_tunnel_protect_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_tunnel_protect_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_tunnel_protect_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_protect_del
#define defined_vapi_msg_ipsec_tunnel_protect_del
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  vapi_type_address nh; 
} vapi_payload_ipsec_tunnel_protect_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_tunnel_protect_del payload;
} vapi_msg_ipsec_tunnel_protect_del;

static inline void vapi_msg_ipsec_tunnel_protect_del_payload_hton(vapi_payload_ipsec_tunnel_protect_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_tunnel_protect_del_payload_ntoh(vapi_payload_ipsec_tunnel_protect_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_tunnel_protect_del_hton(vapi_msg_ipsec_tunnel_protect_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_protect_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_protect_del_ntoh(vapi_msg_ipsec_tunnel_protect_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_protect_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_protect_del_msg_size(vapi_msg_ipsec_tunnel_protect_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_tunnel_protect_del* vapi_alloc_ipsec_tunnel_protect_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_tunnel_protect_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_tunnel_protect_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_tunnel_protect_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_tunnel_protect_del);

  return msg;
}

static inline vapi_error_e vapi_ipsec_tunnel_protect_del(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_tunnel_protect_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_tunnel_protect_del_reply *reply),
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
  vapi_msg_ipsec_tunnel_protect_del_hton(msg);
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
    vapi_msg_ipsec_tunnel_protect_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_protect_del()
{
  static const char name[] = "ipsec_tunnel_protect_del";
  static const char name_with_crc[] = "ipsec_tunnel_protect_del_ddd2ba36";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_protect_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_tunnel_protect_del, payload),
    sizeof(vapi_msg_ipsec_tunnel_protect_del),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_del_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_protect_del = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_protect_del);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_protect_del", vapi_msg_id_ipsec_tunnel_protect_del);
}
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_protect_details
#define defined_vapi_msg_ipsec_tunnel_protect_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ipsec_tunnel_protect tun; 
} vapi_payload_ipsec_tunnel_protect_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_tunnel_protect_details payload;
} vapi_msg_ipsec_tunnel_protect_details;

static inline void vapi_msg_ipsec_tunnel_protect_details_payload_hton(vapi_payload_ipsec_tunnel_protect_details *payload)
{
  vapi_type_ipsec_tunnel_protect_hton(&payload->tun);
}

static inline void vapi_msg_ipsec_tunnel_protect_details_payload_ntoh(vapi_payload_ipsec_tunnel_protect_details *payload)
{
  vapi_type_ipsec_tunnel_protect_ntoh(&payload->tun);
}

static inline void vapi_msg_ipsec_tunnel_protect_details_hton(vapi_msg_ipsec_tunnel_protect_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_protect_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_protect_details_ntoh(vapi_msg_ipsec_tunnel_protect_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_protect_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_protect_details_msg_size(vapi_msg_ipsec_tunnel_protect_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_protect_details()
{
  static const char name[] = "ipsec_tunnel_protect_details";
  static const char name_with_crc[] = "ipsec_tunnel_protect_details_ac6c823b";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_protect_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_tunnel_protect_details, payload),
    sizeof(vapi_msg_ipsec_tunnel_protect_details),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_details_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_protect_details = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_protect_details);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_protect_details", vapi_msg_id_ipsec_tunnel_protect_details);
}

static inline void vapi_set_vapi_msg_ipsec_tunnel_protect_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_tunnel_protect_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_tunnel_protect_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_protect_dump
#define defined_vapi_msg_ipsec_tunnel_protect_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index; 
} vapi_payload_ipsec_tunnel_protect_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_tunnel_protect_dump payload;
} vapi_msg_ipsec_tunnel_protect_dump;

static inline void vapi_msg_ipsec_tunnel_protect_dump_payload_hton(vapi_payload_ipsec_tunnel_protect_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_tunnel_protect_dump_payload_ntoh(vapi_payload_ipsec_tunnel_protect_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_tunnel_protect_dump_hton(vapi_msg_ipsec_tunnel_protect_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_protect_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_protect_dump_ntoh(vapi_msg_ipsec_tunnel_protect_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_protect_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_protect_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_protect_dump_msg_size(vapi_msg_ipsec_tunnel_protect_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_tunnel_protect_dump* vapi_alloc_ipsec_tunnel_protect_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_tunnel_protect_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_tunnel_protect_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_tunnel_protect_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_tunnel_protect_dump);

  return msg;
}

static inline vapi_error_e vapi_ipsec_tunnel_protect_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_tunnel_protect_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_tunnel_protect_details *reply),
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
  vapi_msg_ipsec_tunnel_protect_dump_hton(msg);
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
    vapi_msg_ipsec_tunnel_protect_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_protect_dump()
{
  static const char name[] = "ipsec_tunnel_protect_dump";
  static const char name_with_crc[] = "ipsec_tunnel_protect_dump_f9e6675e";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_protect_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_tunnel_protect_dump, payload),
    sizeof(vapi_msg_ipsec_tunnel_protect_dump),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_protect_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_protect_dump = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_protect_dump);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_protect_dump", vapi_msg_id_ipsec_tunnel_protect_dump);
}
#endif

#ifndef defined_vapi_msg_ipsec_spd_interface_details
#define defined_vapi_msg_ipsec_spd_interface_details
typedef struct __attribute__ ((__packed__)) {
  u32 spd_index;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_ipsec_spd_interface_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_spd_interface_details payload;
} vapi_msg_ipsec_spd_interface_details;

static inline void vapi_msg_ipsec_spd_interface_details_payload_hton(vapi_payload_ipsec_spd_interface_details *payload)
{
  payload->spd_index = htobe32(payload->spd_index);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_spd_interface_details_payload_ntoh(vapi_payload_ipsec_spd_interface_details *payload)
{
  payload->spd_index = be32toh(payload->spd_index);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_spd_interface_details_hton(vapi_msg_ipsec_spd_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_interface_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_spd_interface_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_interface_details_ntoh(vapi_msg_ipsec_spd_interface_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_interface_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_interface_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_interface_details_msg_size(vapi_msg_ipsec_spd_interface_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_interface_details()
{
  static const char name[] = "ipsec_spd_interface_details";
  static const char name_with_crc[] = "ipsec_spd_interface_details_7a0bcf3e";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_interface_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_spd_interface_details, payload),
    sizeof(vapi_msg_ipsec_spd_interface_details),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_interface_details_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_interface_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_interface_details = vapi_register_msg(&__vapi_metadata_ipsec_spd_interface_details);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_interface_details", vapi_msg_id_ipsec_spd_interface_details);
}

static inline void vapi_set_vapi_msg_ipsec_spd_interface_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_spd_interface_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_spd_interface_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_spd_interface_dump
#define defined_vapi_msg_ipsec_spd_interface_dump
typedef struct __attribute__ ((__packed__)) {
  u32 spd_index;
  u8 spd_index_valid; 
} vapi_payload_ipsec_spd_interface_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_spd_interface_dump payload;
} vapi_msg_ipsec_spd_interface_dump;

static inline void vapi_msg_ipsec_spd_interface_dump_payload_hton(vapi_payload_ipsec_spd_interface_dump *payload)
{
  payload->spd_index = htobe32(payload->spd_index);
}

static inline void vapi_msg_ipsec_spd_interface_dump_payload_ntoh(vapi_payload_ipsec_spd_interface_dump *payload)
{
  payload->spd_index = be32toh(payload->spd_index);
}

static inline void vapi_msg_ipsec_spd_interface_dump_hton(vapi_msg_ipsec_spd_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_interface_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_spd_interface_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_spd_interface_dump_ntoh(vapi_msg_ipsec_spd_interface_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_spd_interface_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_spd_interface_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_spd_interface_dump_msg_size(vapi_msg_ipsec_spd_interface_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_spd_interface_dump* vapi_alloc_ipsec_spd_interface_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_spd_interface_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_spd_interface_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_spd_interface_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_spd_interface_dump);

  return msg;
}

static inline vapi_error_e vapi_ipsec_spd_interface_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_spd_interface_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_spd_interface_details *reply),
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
  vapi_msg_ipsec_spd_interface_dump_hton(msg);
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
    vapi_msg_ipsec_spd_interface_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_spd_interface_dump()
{
  static const char name[] = "ipsec_spd_interface_dump";
  static const char name_with_crc[] = "ipsec_spd_interface_dump_8971de19";
  static vapi_message_desc_t __vapi_metadata_ipsec_spd_interface_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_spd_interface_dump, payload),
    sizeof(vapi_msg_ipsec_spd_interface_dump),
    (generic_swap_fn_t)vapi_msg_ipsec_spd_interface_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_spd_interface_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_spd_interface_dump = vapi_register_msg(&__vapi_metadata_ipsec_spd_interface_dump);
  VAPI_DBG("Assigned msg id %d to ipsec_spd_interface_dump", vapi_msg_id_ipsec_spd_interface_dump);
}
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_if_add_del_reply
#define defined_vapi_msg_ipsec_tunnel_if_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  vapi_type_interface_index sw_if_index; 
} vapi_payload_ipsec_tunnel_if_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_tunnel_if_add_del_reply payload;
} vapi_msg_ipsec_tunnel_if_add_del_reply;

static inline void vapi_msg_ipsec_tunnel_if_add_del_reply_payload_hton(vapi_payload_ipsec_tunnel_if_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_tunnel_if_add_del_reply_payload_ntoh(vapi_payload_ipsec_tunnel_if_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_ipsec_tunnel_if_add_del_reply_hton(vapi_msg_ipsec_tunnel_if_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_if_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_if_add_del_reply_ntoh(vapi_msg_ipsec_tunnel_if_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_if_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_if_add_del_reply_msg_size(vapi_msg_ipsec_tunnel_if_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_if_add_del_reply()
{
  static const char name[] = "ipsec_tunnel_if_add_del_reply";
  static const char name_with_crc[] = "ipsec_tunnel_if_add_del_reply_5383d31f";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_if_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_tunnel_if_add_del_reply, payload),
    sizeof(vapi_msg_ipsec_tunnel_if_add_del_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_if_add_del_reply = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_if_add_del_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_if_add_del_reply", vapi_msg_id_ipsec_tunnel_if_add_del_reply);
}

static inline void vapi_set_vapi_msg_ipsec_tunnel_if_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_tunnel_if_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_tunnel_if_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_if_add_del
#define defined_vapi_msg_ipsec_tunnel_if_add_del
typedef struct __attribute__ ((__packed__)) {
  bool is_add;
  bool esn;
  bool anti_replay;
  vapi_type_address local_ip;
  vapi_type_address remote_ip;
  u32 local_spi;
  u32 remote_spi;
  u8 crypto_alg;
  u8 local_crypto_key_len;
  u8 local_crypto_key[128];
  u8 remote_crypto_key_len;
  u8 remote_crypto_key[128];
  u8 integ_alg;
  u8 local_integ_key_len;
  u8 local_integ_key[128];
  u8 remote_integ_key_len;
  u8 remote_integ_key[128];
  bool renumber;
  u32 show_instance;
  bool udp_encap;
  u32 tx_table_id;
  u32 salt; 
} vapi_payload_ipsec_tunnel_if_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_tunnel_if_add_del payload;
} vapi_msg_ipsec_tunnel_if_add_del;

static inline void vapi_msg_ipsec_tunnel_if_add_del_payload_hton(vapi_payload_ipsec_tunnel_if_add_del *payload)
{
  payload->local_spi = htobe32(payload->local_spi);
  payload->remote_spi = htobe32(payload->remote_spi);
  payload->show_instance = htobe32(payload->show_instance);
  payload->tx_table_id = htobe32(payload->tx_table_id);
  payload->salt = htobe32(payload->salt);
}

static inline void vapi_msg_ipsec_tunnel_if_add_del_payload_ntoh(vapi_payload_ipsec_tunnel_if_add_del *payload)
{
  payload->local_spi = be32toh(payload->local_spi);
  payload->remote_spi = be32toh(payload->remote_spi);
  payload->show_instance = be32toh(payload->show_instance);
  payload->tx_table_id = be32toh(payload->tx_table_id);
  payload->salt = be32toh(payload->salt);
}

static inline void vapi_msg_ipsec_tunnel_if_add_del_hton(vapi_msg_ipsec_tunnel_if_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_if_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_if_add_del_ntoh(vapi_msg_ipsec_tunnel_if_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_if_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_if_add_del_msg_size(vapi_msg_ipsec_tunnel_if_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_tunnel_if_add_del* vapi_alloc_ipsec_tunnel_if_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_tunnel_if_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_tunnel_if_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_tunnel_if_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_tunnel_if_add_del);

  return msg;
}

static inline vapi_error_e vapi_ipsec_tunnel_if_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_tunnel_if_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_tunnel_if_add_del_reply *reply),
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
  vapi_msg_ipsec_tunnel_if_add_del_hton(msg);
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
    vapi_msg_ipsec_tunnel_if_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_if_add_del()
{
  static const char name[] = "ipsec_tunnel_if_add_del";
  static const char name_with_crc[] = "ipsec_tunnel_if_add_del_2b135e68";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_if_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_tunnel_if_add_del, payload),
    sizeof(vapi_msg_ipsec_tunnel_if_add_del),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_add_del_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_if_add_del = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_if_add_del);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_if_add_del", vapi_msg_id_ipsec_tunnel_if_add_del);
}
#endif

#ifndef defined_vapi_msg_ipsec_sa_details
#define defined_vapi_msg_ipsec_sa_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_ipsec_sad_entry entry;
  vapi_type_interface_index sw_if_index;
  u32 salt;
  u64 seq_outbound;
  u64 last_seq_inbound;
  u64 replay_window;
  u32 stat_index; 
} vapi_payload_ipsec_sa_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_sa_details payload;
} vapi_msg_ipsec_sa_details;

static inline void vapi_msg_ipsec_sa_details_payload_hton(vapi_payload_ipsec_sa_details *payload)
{
  vapi_type_ipsec_sad_entry_hton(&payload->entry);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->salt = htobe32(payload->salt);
  payload->seq_outbound = htobe64(payload->seq_outbound);
  payload->last_seq_inbound = htobe64(payload->last_seq_inbound);
  payload->replay_window = htobe64(payload->replay_window);
  payload->stat_index = htobe32(payload->stat_index);
}

static inline void vapi_msg_ipsec_sa_details_payload_ntoh(vapi_payload_ipsec_sa_details *payload)
{
  vapi_type_ipsec_sad_entry_ntoh(&payload->entry);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->salt = be32toh(payload->salt);
  payload->seq_outbound = be64toh(payload->seq_outbound);
  payload->last_seq_inbound = be64toh(payload->last_seq_inbound);
  payload->replay_window = be64toh(payload->replay_window);
  payload->stat_index = be32toh(payload->stat_index);
}

static inline void vapi_msg_ipsec_sa_details_hton(vapi_msg_ipsec_sa_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sa_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_sa_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_sa_details_ntoh(vapi_msg_ipsec_sa_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sa_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_sa_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_sa_details_msg_size(vapi_msg_ipsec_sa_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_sa_details()
{
  static const char name[] = "ipsec_sa_details";
  static const char name_with_crc[] = "ipsec_sa_details_b30c7f41";
  static vapi_message_desc_t __vapi_metadata_ipsec_sa_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_sa_details, payload),
    sizeof(vapi_msg_ipsec_sa_details),
    (generic_swap_fn_t)vapi_msg_ipsec_sa_details_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_sa_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_sa_details = vapi_register_msg(&__vapi_metadata_ipsec_sa_details);
  VAPI_DBG("Assigned msg id %d to ipsec_sa_details", vapi_msg_id_ipsec_sa_details);
}

static inline void vapi_set_vapi_msg_ipsec_sa_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_sa_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_sa_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_sa_dump
#define defined_vapi_msg_ipsec_sa_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sa_id; 
} vapi_payload_ipsec_sa_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_sa_dump payload;
} vapi_msg_ipsec_sa_dump;

static inline void vapi_msg_ipsec_sa_dump_payload_hton(vapi_payload_ipsec_sa_dump *payload)
{
  payload->sa_id = htobe32(payload->sa_id);
}

static inline void vapi_msg_ipsec_sa_dump_payload_ntoh(vapi_payload_ipsec_sa_dump *payload)
{
  payload->sa_id = be32toh(payload->sa_id);
}

static inline void vapi_msg_ipsec_sa_dump_hton(vapi_msg_ipsec_sa_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sa_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_sa_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_sa_dump_ntoh(vapi_msg_ipsec_sa_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_sa_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_sa_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_sa_dump_msg_size(vapi_msg_ipsec_sa_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_sa_dump* vapi_alloc_ipsec_sa_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_sa_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_sa_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_sa_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_sa_dump);

  return msg;
}

static inline vapi_error_e vapi_ipsec_sa_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_sa_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_sa_details *reply),
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
  vapi_msg_ipsec_sa_dump_hton(msg);
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
    vapi_msg_ipsec_sa_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_sa_dump()
{
  static const char name[] = "ipsec_sa_dump";
  static const char name_with_crc[] = "ipsec_sa_dump_2076c2f4";
  static vapi_message_desc_t __vapi_metadata_ipsec_sa_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_sa_dump, payload),
    sizeof(vapi_msg_ipsec_sa_dump),
    (generic_swap_fn_t)vapi_msg_ipsec_sa_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_sa_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_sa_dump = vapi_register_msg(&__vapi_metadata_ipsec_sa_dump);
  VAPI_DBG("Assigned msg id %d to ipsec_sa_dump", vapi_msg_id_ipsec_sa_dump);
}
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_if_set_sa_reply
#define defined_vapi_msg_ipsec_tunnel_if_set_sa_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipsec_tunnel_if_set_sa_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_tunnel_if_set_sa_reply payload;
} vapi_msg_ipsec_tunnel_if_set_sa_reply;

static inline void vapi_msg_ipsec_tunnel_if_set_sa_reply_payload_hton(vapi_payload_ipsec_tunnel_if_set_sa_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipsec_tunnel_if_set_sa_reply_payload_ntoh(vapi_payload_ipsec_tunnel_if_set_sa_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipsec_tunnel_if_set_sa_reply_hton(vapi_msg_ipsec_tunnel_if_set_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_set_sa_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_if_set_sa_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_if_set_sa_reply_ntoh(vapi_msg_ipsec_tunnel_if_set_sa_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_set_sa_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_if_set_sa_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_if_set_sa_reply_msg_size(vapi_msg_ipsec_tunnel_if_set_sa_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_if_set_sa_reply()
{
  static const char name[] = "ipsec_tunnel_if_set_sa_reply";
  static const char name_with_crc[] = "ipsec_tunnel_if_set_sa_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_if_set_sa_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_tunnel_if_set_sa_reply, payload),
    sizeof(vapi_msg_ipsec_tunnel_if_set_sa_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_set_sa_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_set_sa_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_if_set_sa_reply = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_if_set_sa_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_if_set_sa_reply", vapi_msg_id_ipsec_tunnel_if_set_sa_reply);
}

static inline void vapi_set_vapi_msg_ipsec_tunnel_if_set_sa_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_tunnel_if_set_sa_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_tunnel_if_set_sa_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_tunnel_if_set_sa
#define defined_vapi_msg_ipsec_tunnel_if_set_sa
typedef struct __attribute__ ((__packed__)) {
  vapi_type_interface_index sw_if_index;
  u32 sa_id;
  u8 is_outbound; 
} vapi_payload_ipsec_tunnel_if_set_sa;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_tunnel_if_set_sa payload;
} vapi_msg_ipsec_tunnel_if_set_sa;

static inline void vapi_msg_ipsec_tunnel_if_set_sa_payload_hton(vapi_payload_ipsec_tunnel_if_set_sa *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->sa_id = htobe32(payload->sa_id);
}

static inline void vapi_msg_ipsec_tunnel_if_set_sa_payload_ntoh(vapi_payload_ipsec_tunnel_if_set_sa *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->sa_id = be32toh(payload->sa_id);
}

static inline void vapi_msg_ipsec_tunnel_if_set_sa_hton(vapi_msg_ipsec_tunnel_if_set_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_set_sa'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_tunnel_if_set_sa_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_tunnel_if_set_sa_ntoh(vapi_msg_ipsec_tunnel_if_set_sa *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_tunnel_if_set_sa'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_tunnel_if_set_sa_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_tunnel_if_set_sa_msg_size(vapi_msg_ipsec_tunnel_if_set_sa *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_tunnel_if_set_sa* vapi_alloc_ipsec_tunnel_if_set_sa(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_tunnel_if_set_sa *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_tunnel_if_set_sa);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_tunnel_if_set_sa*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_tunnel_if_set_sa);

  return msg;
}

static inline vapi_error_e vapi_ipsec_tunnel_if_set_sa(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_tunnel_if_set_sa *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_tunnel_if_set_sa_reply *reply),
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
  vapi_msg_ipsec_tunnel_if_set_sa_hton(msg);
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
    vapi_msg_ipsec_tunnel_if_set_sa_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_tunnel_if_set_sa()
{
  static const char name[] = "ipsec_tunnel_if_set_sa";
  static const char name_with_crc[] = "ipsec_tunnel_if_set_sa_f2f87112";
  static vapi_message_desc_t __vapi_metadata_ipsec_tunnel_if_set_sa = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_tunnel_if_set_sa, payload),
    sizeof(vapi_msg_ipsec_tunnel_if_set_sa),
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_set_sa_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_tunnel_if_set_sa_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_tunnel_if_set_sa = vapi_register_msg(&__vapi_metadata_ipsec_tunnel_if_set_sa);
  VAPI_DBG("Assigned msg id %d to ipsec_tunnel_if_set_sa", vapi_msg_id_ipsec_tunnel_if_set_sa);
}
#endif

#ifndef defined_vapi_msg_ipsec_backend_details
#define defined_vapi_msg_ipsec_backend_details
typedef struct __attribute__ ((__packed__)) {
  u8 name[128];
  vapi_enum_ipsec_proto protocol;
  u8 index;
  bool active; 
} vapi_payload_ipsec_backend_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_backend_details payload;
} vapi_msg_ipsec_backend_details;

static inline void vapi_msg_ipsec_backend_details_payload_hton(vapi_payload_ipsec_backend_details *payload)
{
  payload->protocol = (vapi_enum_ipsec_proto)htobe32(payload->protocol);
}

static inline void vapi_msg_ipsec_backend_details_payload_ntoh(vapi_payload_ipsec_backend_details *payload)
{
  payload->protocol = (vapi_enum_ipsec_proto)be32toh(payload->protocol);
}

static inline void vapi_msg_ipsec_backend_details_hton(vapi_msg_ipsec_backend_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_backend_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_backend_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_backend_details_ntoh(vapi_msg_ipsec_backend_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_backend_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_backend_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_backend_details_msg_size(vapi_msg_ipsec_backend_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_backend_details()
{
  static const char name[] = "ipsec_backend_details";
  static const char name_with_crc[] = "ipsec_backend_details_ee601c29";
  static vapi_message_desc_t __vapi_metadata_ipsec_backend_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_backend_details, payload),
    sizeof(vapi_msg_ipsec_backend_details),
    (generic_swap_fn_t)vapi_msg_ipsec_backend_details_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_backend_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_backend_details = vapi_register_msg(&__vapi_metadata_ipsec_backend_details);
  VAPI_DBG("Assigned msg id %d to ipsec_backend_details", vapi_msg_id_ipsec_backend_details);
}

static inline void vapi_set_vapi_msg_ipsec_backend_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_backend_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_backend_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_backend_dump
#define defined_vapi_msg_ipsec_backend_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_ipsec_backend_dump;

static inline void vapi_msg_ipsec_backend_dump_hton(vapi_msg_ipsec_backend_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_backend_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_ipsec_backend_dump_ntoh(vapi_msg_ipsec_backend_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_backend_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_ipsec_backend_dump_msg_size(vapi_msg_ipsec_backend_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_backend_dump* vapi_alloc_ipsec_backend_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_backend_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_backend_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_backend_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_backend_dump);

  return msg;
}

static inline vapi_error_e vapi_ipsec_backend_dump(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_backend_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_backend_details *reply),
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
  vapi_msg_ipsec_backend_dump_hton(msg);
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
    vapi_msg_ipsec_backend_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_backend_dump()
{
  static const char name[] = "ipsec_backend_dump";
  static const char name_with_crc[] = "ipsec_backend_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_ipsec_backend_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_ipsec_backend_dump),
    (generic_swap_fn_t)vapi_msg_ipsec_backend_dump_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_backend_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_backend_dump = vapi_register_msg(&__vapi_metadata_ipsec_backend_dump);
  VAPI_DBG("Assigned msg id %d to ipsec_backend_dump", vapi_msg_id_ipsec_backend_dump);
}
#endif

#ifndef defined_vapi_msg_ipsec_select_backend_reply
#define defined_vapi_msg_ipsec_select_backend_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ipsec_select_backend_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ipsec_select_backend_reply payload;
} vapi_msg_ipsec_select_backend_reply;

static inline void vapi_msg_ipsec_select_backend_reply_payload_hton(vapi_payload_ipsec_select_backend_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ipsec_select_backend_reply_payload_ntoh(vapi_payload_ipsec_select_backend_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ipsec_select_backend_reply_hton(vapi_msg_ipsec_select_backend_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_select_backend_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ipsec_select_backend_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_select_backend_reply_ntoh(vapi_msg_ipsec_select_backend_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_select_backend_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ipsec_select_backend_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_select_backend_reply_msg_size(vapi_msg_ipsec_select_backend_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ipsec_select_backend_reply()
{
  static const char name[] = "ipsec_select_backend_reply";
  static const char name_with_crc[] = "ipsec_select_backend_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ipsec_select_backend_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ipsec_select_backend_reply, payload),
    sizeof(vapi_msg_ipsec_select_backend_reply),
    (generic_swap_fn_t)vapi_msg_ipsec_select_backend_reply_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_select_backend_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_select_backend_reply = vapi_register_msg(&__vapi_metadata_ipsec_select_backend_reply);
  VAPI_DBG("Assigned msg id %d to ipsec_select_backend_reply", vapi_msg_id_ipsec_select_backend_reply);
}

static inline void vapi_set_vapi_msg_ipsec_select_backend_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ipsec_select_backend_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ipsec_select_backend_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ipsec_select_backend
#define defined_vapi_msg_ipsec_select_backend
typedef struct __attribute__ ((__packed__)) {
  vapi_enum_ipsec_proto protocol;
  u8 index; 
} vapi_payload_ipsec_select_backend;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ipsec_select_backend payload;
} vapi_msg_ipsec_select_backend;

static inline void vapi_msg_ipsec_select_backend_payload_hton(vapi_payload_ipsec_select_backend *payload)
{
  payload->protocol = (vapi_enum_ipsec_proto)htobe32(payload->protocol);
}

static inline void vapi_msg_ipsec_select_backend_payload_ntoh(vapi_payload_ipsec_select_backend *payload)
{
  payload->protocol = (vapi_enum_ipsec_proto)be32toh(payload->protocol);
}

static inline void vapi_msg_ipsec_select_backend_hton(vapi_msg_ipsec_select_backend *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_select_backend'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ipsec_select_backend_payload_hton(&msg->payload);
}

static inline void vapi_msg_ipsec_select_backend_ntoh(vapi_msg_ipsec_select_backend *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ipsec_select_backend'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ipsec_select_backend_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ipsec_select_backend_msg_size(vapi_msg_ipsec_select_backend *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ipsec_select_backend* vapi_alloc_ipsec_select_backend(struct vapi_ctx_s *ctx)
{
  vapi_msg_ipsec_select_backend *msg = NULL;
  const size_t size = sizeof(vapi_msg_ipsec_select_backend);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ipsec_select_backend*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ipsec_select_backend);

  return msg;
}

static inline vapi_error_e vapi_ipsec_select_backend(struct vapi_ctx_s *ctx,
  vapi_msg_ipsec_select_backend *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ipsec_select_backend_reply *reply),
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
  vapi_msg_ipsec_select_backend_hton(msg);
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
    vapi_msg_ipsec_select_backend_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ipsec_select_backend()
{
  static const char name[] = "ipsec_select_backend";
  static const char name_with_crc[] = "ipsec_select_backend_5bcfd3b7";
  static vapi_message_desc_t __vapi_metadata_ipsec_select_backend = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ipsec_select_backend, payload),
    sizeof(vapi_msg_ipsec_select_backend),
    (generic_swap_fn_t)vapi_msg_ipsec_select_backend_hton,
    (generic_swap_fn_t)vapi_msg_ipsec_select_backend_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ipsec_select_backend = vapi_register_msg(&__vapi_metadata_ipsec_select_backend);
  VAPI_DBG("Assigned msg id %d to ipsec_select_backend", vapi_msg_id_ipsec_select_backend);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
