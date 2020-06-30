#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ipsec_ipsec_types_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_ipsec_ipsec_types_api_json

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


#define DEFINE_VAPI_MSG_IDS_IPSEC_TYPES_API_JSON\



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


#ifdef __cplusplus
}
#endif

#endif
