/*
 * VLIB API definitions 2020-01-07 14:25:06
 * Input file: ipsec.api
 * Automatically generated: please edit the input file NOT this file!
 */

#include <stdbool.h>
#if defined(vl_msg_id)||defined(vl_union_id) \
    || defined(vl_printfun) ||defined(vl_endianfun) \
    || defined(vl_api_version)||defined(vl_typedefs) \
    || defined(vl_msg_name)||defined(vl_msg_name_crc_list) \
    || defined(vl_api_version_tuple)
/* ok, something was selected */
#else
#warning no content included from ipsec.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IPSEC_SPD_ADD_DEL, vl_api_ipsec_spd_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_ADD_DEL_REPLY, vl_api_ipsec_spd_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD, vl_api_ipsec_interface_add_del_spd_t_handler)
vl_msg_id(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD_REPLY, vl_api_ipsec_interface_add_del_spd_reply_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_ENTRY_ADD_DEL, vl_api_ipsec_spd_entry_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_ENTRY_ADD_DEL_REPLY, vl_api_ipsec_spd_entry_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_SPDS_DUMP, vl_api_ipsec_spds_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SPDS_DETAILS, vl_api_ipsec_spds_details_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_DUMP, vl_api_ipsec_spd_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_DETAILS, vl_api_ipsec_spd_details_t_handler)
vl_msg_id(VL_API_IPSEC_SAD_ENTRY_ADD_DEL, vl_api_ipsec_sad_entry_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_SAD_ENTRY_ADD_DEL_REPLY, vl_api_ipsec_sad_entry_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE, vl_api_ipsec_tunnel_protect_update_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE_REPLY, vl_api_ipsec_tunnel_protect_update_reply_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DEL, vl_api_ipsec_tunnel_protect_del_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DEL_REPLY, vl_api_ipsec_tunnel_protect_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DUMP, vl_api_ipsec_tunnel_protect_dump_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_PROTECT_DETAILS, vl_api_ipsec_tunnel_protect_details_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_INTERFACE_DUMP, vl_api_ipsec_spd_interface_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SPD_INTERFACE_DETAILS, vl_api_ipsec_spd_interface_details_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_ADD_DEL, vl_api_ipsec_tunnel_if_add_del_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_ADD_DEL_REPLY, vl_api_ipsec_tunnel_if_add_del_reply_t_handler)
vl_msg_id(VL_API_IPSEC_SA_DUMP, vl_api_ipsec_sa_dump_t_handler)
vl_msg_id(VL_API_IPSEC_SA_DETAILS, vl_api_ipsec_sa_details_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_SET_SA, vl_api_ipsec_tunnel_if_set_sa_t_handler)
vl_msg_id(VL_API_IPSEC_TUNNEL_IF_SET_SA_REPLY, vl_api_ipsec_tunnel_if_set_sa_reply_t_handler)
vl_msg_id(VL_API_IPSEC_BACKEND_DUMP, vl_api_ipsec_backend_dump_t_handler)
vl_msg_id(VL_API_IPSEC_BACKEND_DETAILS, vl_api_ipsec_backend_details_t_handler)
vl_msg_id(VL_API_IPSEC_SELECT_BACKEND, vl_api_ipsec_select_backend_t_handler)
vl_msg_id(VL_API_IPSEC_SELECT_BACKEND_REPLY, vl_api_ipsec_select_backend_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ipsec_spd_add_del_t, 1)
vl_msg_name(vl_api_ipsec_spd_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_interface_add_del_spd_t, 1)
vl_msg_name(vl_api_ipsec_interface_add_del_spd_reply_t, 1)
vl_msg_name(vl_api_ipsec_spd_entry_add_del_t, 1)
vl_msg_name(vl_api_ipsec_spd_entry_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_spds_dump_t, 1)
vl_msg_name(vl_api_ipsec_spds_details_t, 1)
vl_msg_name(vl_api_ipsec_spd_dump_t, 1)
vl_msg_name(vl_api_ipsec_spd_details_t, 1)
vl_msg_name(vl_api_ipsec_sad_entry_add_del_t, 1)
vl_msg_name(vl_api_ipsec_sad_entry_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_update_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_update_reply_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_del_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_dump_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_protect_details_t, 1)
vl_msg_name(vl_api_ipsec_spd_interface_dump_t, 1)
vl_msg_name(vl_api_ipsec_spd_interface_details_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_add_del_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_add_del_reply_t, 1)
vl_msg_name(vl_api_ipsec_sa_dump_t, 1)
vl_msg_name(vl_api_ipsec_sa_details_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_set_sa_t, 1)
vl_msg_name(vl_api_ipsec_tunnel_if_set_sa_reply_t, 1)
vl_msg_name(vl_api_ipsec_backend_dump_t, 1)
vl_msg_name(vl_api_ipsec_backend_details_t, 1)
vl_msg_name(vl_api_ipsec_select_backend_t, 1)
vl_msg_name(vl_api_ipsec_select_backend_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ipsec \
_(VL_API_IPSEC_SPD_ADD_DEL, ipsec_spd_add_del, 9ffdf5da) \
_(VL_API_IPSEC_SPD_ADD_DEL_REPLY, ipsec_spd_add_del_reply, e8d4e804) \
_(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD, ipsec_interface_add_del_spd, 1e3b8286) \
_(VL_API_IPSEC_INTERFACE_ADD_DEL_SPD_REPLY, ipsec_interface_add_del_spd_reply, e8d4e804) \
_(VL_API_IPSEC_SPD_ENTRY_ADD_DEL, ipsec_spd_entry_add_del, 6bc6a3b5) \
_(VL_API_IPSEC_SPD_ENTRY_ADD_DEL_REPLY, ipsec_spd_entry_add_del_reply, 9ffac24b) \
_(VL_API_IPSEC_SPDS_DUMP, ipsec_spds_dump, 51077d14) \
_(VL_API_IPSEC_SPDS_DETAILS, ipsec_spds_details, a04bb254) \
_(VL_API_IPSEC_SPD_DUMP, ipsec_spd_dump, afefbf7d) \
_(VL_API_IPSEC_SPD_DETAILS, ipsec_spd_details, 06df7fb3) \
_(VL_API_IPSEC_SAD_ENTRY_ADD_DEL, ipsec_sad_entry_add_del, a25ab61e) \
_(VL_API_IPSEC_SAD_ENTRY_ADD_DEL_REPLY, ipsec_sad_entry_add_del_reply, 9ffac24b) \
_(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE, ipsec_tunnel_protect_update, 316dab99) \
_(VL_API_IPSEC_TUNNEL_PROTECT_UPDATE_REPLY, ipsec_tunnel_protect_update_reply, e8d4e804) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DEL, ipsec_tunnel_protect_del, d85aab0d) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DEL_REPLY, ipsec_tunnel_protect_del_reply, e8d4e804) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DUMP, ipsec_tunnel_protect_dump, d85aab0d) \
_(VL_API_IPSEC_TUNNEL_PROTECT_DETAILS, ipsec_tunnel_protect_details, f724bc50) \
_(VL_API_IPSEC_SPD_INTERFACE_DUMP, ipsec_spd_interface_dump, 8971de19) \
_(VL_API_IPSEC_SPD_INTERFACE_DETAILS, ipsec_spd_interface_details, 2c54296d) \
_(VL_API_IPSEC_TUNNEL_IF_ADD_DEL, ipsec_tunnel_if_add_del, aa539b47) \
_(VL_API_IPSEC_TUNNEL_IF_ADD_DEL_REPLY, ipsec_tunnel_if_add_del_reply, fda5941f) \
_(VL_API_IPSEC_SA_DUMP, ipsec_sa_dump, 2076c2f4) \
_(VL_API_IPSEC_SA_DETAILS, ipsec_sa_details, 9c8d829a) \
_(VL_API_IPSEC_TUNNEL_IF_SET_SA, ipsec_tunnel_if_set_sa, 6ab567f2) \
_(VL_API_IPSEC_TUNNEL_IF_SET_SA_REPLY, ipsec_tunnel_if_set_sa_reply, e8d4e804) \
_(VL_API_IPSEC_BACKEND_DUMP, ipsec_backend_dump, 51077d14) \
_(VL_API_IPSEC_BACKEND_DETAILS, ipsec_backend_details, 7700751c) \
_(VL_API_IPSEC_SELECT_BACKEND, ipsec_select_backend, 4fd24836) \
_(VL_API_IPSEC_SELECT_BACKEND_REPLY, ipsec_select_backend_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_ipsec_api
#define included_ipsec_api
#ifndef _vl_api_defined_interface_index
#define _vl_api_defined_interface_index
typedef u32 vl_api_interface_index_t;
#endif

#ifndef _vl_api_defined_ip4_address
#define _vl_api_defined_ip4_address
typedef u8 vl_api_ip4_address_t[4];
#endif

#ifndef _vl_api_defined_ip6_address
#define _vl_api_defined_ip6_address
typedef u8 vl_api_ip6_address_t[16];
#endif

#ifndef _vl_api_defined_address_family
#define _vl_api_defined_address_family
typedef enum {
    ADDRESS_IP4 = 0,
    ADDRESS_IP6 = 1,
} vl_api_address_family_t;
#endif

#ifndef _vl_api_defined_ip_ecn
#define _vl_api_defined_ip_ecn
typedef enum __attribute__((__packed__)) {
    IP_API_ECN_NONE = 0,
    IP_API_ECN_ECT0 = 1,
    IP_API_ECN_ECT1 = 2,
    IP_API_ECN_CE = 3,
} vl_api_ip_ecn_t;
STATIC_ASSERT(sizeof(vl_api_ip_ecn_t) == sizeof(u8), "size of API enum ip_ecn is wrong");
#endif

#ifndef _vl_api_defined_ip_dscp
#define _vl_api_defined_ip_dscp
typedef enum __attribute__((__packed__)) {
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
} vl_api_ip_dscp_t;
STATIC_ASSERT(sizeof(vl_api_ip_dscp_t) == sizeof(u8), "size of API enum ip_dscp is wrong");
#endif

#ifndef _vl_api_defined_ip_proto
#define _vl_api_defined_ip_proto
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
} vl_api_ip_proto_t;
#endif

#ifndef _vl_api_defined_address_union
#define _vl_api_defined_address_union
typedef VL_API_PACKED(union _vl_api_address_union {
    vl_api_ip4_address_t ip4;
    vl_api_ip6_address_t ip6;
}) vl_api_address_union_t;
#endif

#ifndef _vl_api_defined_address
#define _vl_api_defined_address
typedef VL_API_PACKED(struct _vl_api_address {
    vl_api_address_family_t af;
    vl_api_address_union_t un;
}) vl_api_address_t;
#endif

#ifndef _vl_api_defined_prefix
#define _vl_api_defined_prefix
typedef VL_API_PACKED(struct _vl_api_prefix {
    vl_api_address_t address;
    u8 len;
}) vl_api_prefix_t;
#endif

#ifndef _vl_api_defined_mprefix
#define _vl_api_defined_mprefix
typedef VL_API_PACKED(struct _vl_api_mprefix {
    vl_api_address_family_t af;
    u16 grp_address_length;
    vl_api_address_union_t grp_address;
    vl_api_address_union_t src_address;
}) vl_api_mprefix_t;
#endif

#ifndef _vl_api_defined_ip6_prefix
#define _vl_api_defined_ip6_prefix
typedef VL_API_PACKED(struct _vl_api_ip6_prefix {
    vl_api_ip6_address_t address;
    u8 len;
}) vl_api_ip6_prefix_t;
#endif

#ifndef _vl_api_defined_ip4_prefix
#define _vl_api_defined_ip4_prefix
typedef VL_API_PACKED(struct _vl_api_ip4_prefix {
    vl_api_ip4_address_t address;
    u8 len;
}) vl_api_ip4_prefix_t;
#endif

#ifndef _vl_api_defined_prefix_matcher
#define _vl_api_defined_prefix_matcher
typedef VL_API_PACKED(struct _vl_api_prefix_matcher {
    u8 le;
    u8 ge;
}) vl_api_prefix_matcher_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_action
#define _vl_api_defined_ipsec_spd_action
typedef enum {
    IPSEC_API_SPD_ACTION_BYPASS = 0,
    IPSEC_API_SPD_ACTION_DISCARD = 1,
    IPSEC_API_SPD_ACTION_RESOLVE = 2,
    IPSEC_API_SPD_ACTION_PROTECT = 3,
} vl_api_ipsec_spd_action_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_entry
#define _vl_api_defined_ipsec_spd_entry
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_entry {
    u32 spd_id;
    i32 priority;
    u8 is_outbound;
    u32 sa_id;
    vl_api_ipsec_spd_action_t policy;
    u8 protocol;
    vl_api_address_t remote_address_start;
    vl_api_address_t remote_address_stop;
    vl_api_address_t local_address_start;
    vl_api_address_t local_address_stop;
    u16 remote_port_start;
    u16 remote_port_stop;
    u16 local_port_start;
    u16 local_port_stop;
}) vl_api_ipsec_spd_entry_t;
#endif

#ifndef _vl_api_defined_ipsec_crypto_alg
#define _vl_api_defined_ipsec_crypto_alg
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
} vl_api_ipsec_crypto_alg_t;
#endif

#ifndef _vl_api_defined_ipsec_integ_alg
#define _vl_api_defined_ipsec_integ_alg
typedef enum {
    IPSEC_API_INTEG_ALG_NONE = 0,
    IPSEC_API_INTEG_ALG_MD5_96 = 1,
    IPSEC_API_INTEG_ALG_SHA1_96 = 2,
    IPSEC_API_INTEG_ALG_SHA_256_96 = 3,
    IPSEC_API_INTEG_ALG_SHA_256_128 = 4,
    IPSEC_API_INTEG_ALG_SHA_384_192 = 5,
    IPSEC_API_INTEG_ALG_SHA_512_256 = 6,
} vl_api_ipsec_integ_alg_t;
#endif

#ifndef _vl_api_defined_ipsec_sad_flags
#define _vl_api_defined_ipsec_sad_flags
typedef enum {
    IPSEC_API_SAD_FLAG_NONE = 0,
    IPSEC_API_SAD_FLAG_USE_ESN = 1,
    IPSEC_API_SAD_FLAG_USE_ANTI_REPLAY = 2,
    IPSEC_API_SAD_FLAG_IS_TUNNEL = 4,
    IPSEC_API_SAD_FLAG_IS_TUNNEL_V6 = 8,
    IPSEC_API_SAD_FLAG_UDP_ENCAP = 16,
} vl_api_ipsec_sad_flags_t;
#endif

#ifndef _vl_api_defined_ipsec_proto
#define _vl_api_defined_ipsec_proto
typedef enum {
    IPSEC_API_PROTO_ESP = 1,
    IPSEC_API_PROTO_AH = 2,
} vl_api_ipsec_proto_t;
#endif

#ifndef _vl_api_defined_key
#define _vl_api_defined_key
typedef VL_API_PACKED(struct _vl_api_key {
    u8 length;
    u8 data[128];
}) vl_api_key_t;
#endif

#ifndef _vl_api_defined_ipsec_sad_entry
#define _vl_api_defined_ipsec_sad_entry
typedef VL_API_PACKED(struct _vl_api_ipsec_sad_entry {
    u32 sad_id;
    u32 spi;
    vl_api_ipsec_proto_t protocol;
    vl_api_ipsec_crypto_alg_t crypto_algorithm;
    vl_api_key_t crypto_key;
    vl_api_ipsec_integ_alg_t integrity_algorithm;
    vl_api_key_t integrity_key;
    vl_api_ipsec_sad_flags_t flags;
    vl_api_address_t tunnel_src;
    vl_api_address_t tunnel_dst;
    u32 tx_table_id;
    u32 salt;
}) vl_api_ipsec_sad_entry_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect
#define _vl_api_defined_ipsec_tunnel_protect
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_protect {
    vl_api_interface_index_t sw_if_index;
    u32 sa_out;
    u8 n_sa_in;
    u32 sa_in[0];
}) vl_api_ipsec_tunnel_protect_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_add_del
#define _vl_api_defined_ipsec_spd_add_del
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 spd_id;
}) vl_api_ipsec_spd_add_del_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_add_del_reply
#define _vl_api_defined_ipsec_spd_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipsec_spd_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_interface_add_del_spd
#define _vl_api_defined_ipsec_interface_add_del_spd
typedef VL_API_PACKED(struct _vl_api_ipsec_interface_add_del_spd {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 sw_if_index;
    u32 spd_id;
}) vl_api_ipsec_interface_add_del_spd_t;
#endif

#ifndef _vl_api_defined_ipsec_interface_add_del_spd_reply
#define _vl_api_defined_ipsec_interface_add_del_spd_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_interface_add_del_spd_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipsec_interface_add_del_spd_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_entry_add_del
#define _vl_api_defined_ipsec_spd_entry_add_del
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_entry_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_ipsec_spd_entry_t entry;
}) vl_api_ipsec_spd_entry_add_del_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_entry_add_del_reply
#define _vl_api_defined_ipsec_spd_entry_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_entry_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stat_index;
}) vl_api_ipsec_spd_entry_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_spds_dump
#define _vl_api_defined_ipsec_spds_dump
typedef VL_API_PACKED(struct _vl_api_ipsec_spds_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ipsec_spds_dump_t;
#endif

#ifndef _vl_api_defined_ipsec_spds_details
#define _vl_api_defined_ipsec_spds_details
typedef VL_API_PACKED(struct _vl_api_ipsec_spds_details {
    u16 _vl_msg_id;
    u32 context;
    u32 spd_id;
    u32 npolicies;
}) vl_api_ipsec_spds_details_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_dump
#define _vl_api_defined_ipsec_spd_dump
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 spd_id;
    u32 sa_id;
}) vl_api_ipsec_spd_dump_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_details
#define _vl_api_defined_ipsec_spd_details
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipsec_spd_entry_t entry;
}) vl_api_ipsec_spd_details_t;
#endif

#ifndef _vl_api_defined_ipsec_sad_entry_add_del
#define _vl_api_defined_ipsec_sad_entry_add_del
typedef VL_API_PACKED(struct _vl_api_ipsec_sad_entry_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_ipsec_sad_entry_t entry;
}) vl_api_ipsec_sad_entry_add_del_t;
#endif

#ifndef _vl_api_defined_ipsec_sad_entry_add_del_reply
#define _vl_api_defined_ipsec_sad_entry_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_sad_entry_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 stat_index;
}) vl_api_ipsec_sad_entry_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_update
#define _vl_api_defined_ipsec_tunnel_protect_update
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_protect_update {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ipsec_tunnel_protect_t tunnel;
}) vl_api_ipsec_tunnel_protect_update_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_update_reply
#define _vl_api_defined_ipsec_tunnel_protect_update_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_protect_update_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipsec_tunnel_protect_update_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_del
#define _vl_api_defined_ipsec_tunnel_protect_del
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_protect_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
}) vl_api_ipsec_tunnel_protect_del_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_del_reply
#define _vl_api_defined_ipsec_tunnel_protect_del_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_protect_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipsec_tunnel_protect_del_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_dump
#define _vl_api_defined_ipsec_tunnel_protect_dump
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_protect_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
}) vl_api_ipsec_tunnel_protect_dump_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_details
#define _vl_api_defined_ipsec_tunnel_protect_details
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_protect_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipsec_tunnel_protect_t tun;
}) vl_api_ipsec_tunnel_protect_details_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_interface_dump
#define _vl_api_defined_ipsec_spd_interface_dump
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_interface_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 spd_index;
    u8 spd_index_valid;
}) vl_api_ipsec_spd_interface_dump_t;
#endif

#ifndef _vl_api_defined_ipsec_spd_interface_details
#define _vl_api_defined_ipsec_spd_interface_details
typedef VL_API_PACKED(struct _vl_api_ipsec_spd_interface_details {
    u16 _vl_msg_id;
    u32 context;
    u32 spd_index;
    u32 sw_if_index;
}) vl_api_ipsec_spd_interface_details_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_add_del
#define _vl_api_defined_ipsec_tunnel_if_add_del
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_if_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 esn;
    u8 anti_replay;
    vl_api_address_t local_ip;
    vl_api_address_t remote_ip;
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
    u8 renumber;
    u32 show_instance;
    u8 udp_encap;
    u32 tx_table_id;
    u32 salt;
}) vl_api_ipsec_tunnel_if_add_del_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_add_del_reply
#define _vl_api_defined_ipsec_tunnel_if_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_if_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_ipsec_tunnel_if_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_sa_dump
#define _vl_api_defined_ipsec_sa_dump
typedef VL_API_PACKED(struct _vl_api_ipsec_sa_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sa_id;
}) vl_api_ipsec_sa_dump_t;
#endif

#ifndef _vl_api_defined_ipsec_sa_details
#define _vl_api_defined_ipsec_sa_details
typedef VL_API_PACKED(struct _vl_api_ipsec_sa_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipsec_sad_entry_t entry;
    u32 sw_if_index;
    u32 salt;
    u64 seq_outbound;
    u64 last_seq_inbound;
    u64 replay_window;
    u64 total_data_size;
}) vl_api_ipsec_sa_details_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_set_sa
#define _vl_api_defined_ipsec_tunnel_if_set_sa
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_if_set_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 sa_id;
    u8 is_outbound;
}) vl_api_ipsec_tunnel_if_set_sa_t;
#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_set_sa_reply
#define _vl_api_defined_ipsec_tunnel_if_set_sa_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_tunnel_if_set_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipsec_tunnel_if_set_sa_reply_t;
#endif

#ifndef _vl_api_defined_ipsec_backend_dump
#define _vl_api_defined_ipsec_backend_dump
typedef VL_API_PACKED(struct _vl_api_ipsec_backend_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ipsec_backend_dump_t;
#endif

#ifndef _vl_api_defined_ipsec_backend_details
#define _vl_api_defined_ipsec_backend_details
typedef VL_API_PACKED(struct _vl_api_ipsec_backend_details {
    u16 _vl_msg_id;
    u32 context;
    u8 name[128];
    vl_api_ipsec_proto_t protocol;
    u8 index;
    u8 active;
}) vl_api_ipsec_backend_details_t;
#endif

#ifndef _vl_api_defined_ipsec_select_backend
#define _vl_api_defined_ipsec_select_backend
typedef VL_API_PACKED(struct _vl_api_ipsec_select_backend {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ipsec_proto_t protocol;
    u8 index;
}) vl_api_ipsec_select_backend_t;
#endif

#ifndef _vl_api_defined_ipsec_select_backend_reply
#define _vl_api_defined_ipsec_select_backend_reply
typedef VL_API_PACKED(struct _vl_api_ipsec_select_backend_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipsec_select_backend_reply_t;
#endif


#endif
#endif

/****** Print functions *****/
#ifdef vl_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

#ifndef _vl_api_defined_address_union_t_print
#define _vl_api_defined_address_union_t_print
static inline void *vl_api_address_union_t_print (vl_api_address_union_t *a,void *handle)
{
    vl_print(handle, "vl_api_address_union_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_address_t_print
#define _vl_api_defined_address_t_print
static inline void *vl_api_address_t_print (vl_api_address_t *a,void *handle)
{
    vl_print(handle, "vl_api_address_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_prefix_t_print
#define _vl_api_defined_prefix_t_print
static inline void *vl_api_prefix_t_print (vl_api_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_prefix_t:\n");
    vl_print(handle, "len: %u\n", a->len);
    return handle;
}

#endif

#ifndef _vl_api_defined_mprefix_t_print
#define _vl_api_defined_mprefix_t_print
static inline void *vl_api_mprefix_t_print (vl_api_mprefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_mprefix_t:\n");
    vl_print(handle, "grp_address_length: %u\n", a->grp_address_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip6_prefix_t_print
#define _vl_api_defined_ip6_prefix_t_print
static inline void *vl_api_ip6_prefix_t_print (vl_api_ip6_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip6_prefix_t:\n");
    vl_print(handle, "len: %u\n", a->len);
    return handle;
}

#endif

#ifndef _vl_api_defined_ip4_prefix_t_print
#define _vl_api_defined_ip4_prefix_t_print
static inline void *vl_api_ip4_prefix_t_print (vl_api_ip4_prefix_t *a,void *handle)
{
    vl_print(handle, "vl_api_ip4_prefix_t:\n");
    vl_print(handle, "len: %u\n", a->len);
    return handle;
}

#endif

#ifndef _vl_api_defined_prefix_matcher_t_print
#define _vl_api_defined_prefix_matcher_t_print
static inline void *vl_api_prefix_matcher_t_print (vl_api_prefix_matcher_t *a,void *handle)
{
    vl_print(handle, "vl_api_prefix_matcher_t:\n");
    vl_print(handle, "le: %u\n", a->le);
    vl_print(handle, "ge: %u\n", a->ge);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_entry_t_print
#define _vl_api_defined_ipsec_spd_entry_t_print
static inline void *vl_api_ipsec_spd_entry_t_print (vl_api_ipsec_spd_entry_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_entry_t:\n");
    vl_print(handle, "spd_id: %u\n", a->spd_id);
    vl_print(handle, "priority: %ld\n", a->priority);
    vl_print(handle, "is_outbound: %u\n", a->is_outbound);
    vl_print(handle, "sa_id: %u\n", a->sa_id);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "remote_port_start: %u\n", a->remote_port_start);
    vl_print(handle, "remote_port_stop: %u\n", a->remote_port_stop);
    vl_print(handle, "local_port_start: %u\n", a->local_port_start);
    vl_print(handle, "local_port_stop: %u\n", a->local_port_stop);
    return handle;
}

#endif

#ifndef _vl_api_defined_key_t_print
#define _vl_api_defined_key_t_print
static inline void *vl_api_key_t_print (vl_api_key_t *a,void *handle)
{
    vl_print(handle, "vl_api_key_t:\n");
    vl_print(handle, "length: %u\n", a->length);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_sad_entry_t_print
#define _vl_api_defined_ipsec_sad_entry_t_print
static inline void *vl_api_ipsec_sad_entry_t_print (vl_api_ipsec_sad_entry_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_sad_entry_t:\n");
    vl_print(handle, "sad_id: %u\n", a->sad_id);
    vl_print(handle, "spi: %u\n", a->spi);
    vl_print(handle, "tx_table_id: %u\n", a->tx_table_id);
    vl_print(handle, "salt: %u\n", a->salt);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_t_print
#define _vl_api_defined_ipsec_tunnel_protect_t_print
static inline void *vl_api_ipsec_tunnel_protect_t_print (vl_api_ipsec_tunnel_protect_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_protect_t:\n");
    vl_print(handle, "sa_out: %u\n", a->sa_out);
    vl_print(handle, "n_sa_in: %u\n", a->n_sa_in);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_add_del_t_print
#define _vl_api_defined_ipsec_spd_add_del_t_print
static inline void *vl_api_ipsec_spd_add_del_t_print (vl_api_ipsec_spd_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "spd_id: %u\n", a->spd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_add_del_reply_t_print
#define _vl_api_defined_ipsec_spd_add_del_reply_t_print
static inline void *vl_api_ipsec_spd_add_del_reply_t_print (vl_api_ipsec_spd_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_interface_add_del_spd_t_print
#define _vl_api_defined_ipsec_interface_add_del_spd_t_print
static inline void *vl_api_ipsec_interface_add_del_spd_t_print (vl_api_ipsec_interface_add_del_spd_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_interface_add_del_spd_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "spd_id: %u\n", a->spd_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_interface_add_del_spd_reply_t_print
#define _vl_api_defined_ipsec_interface_add_del_spd_reply_t_print
static inline void *vl_api_ipsec_interface_add_del_spd_reply_t_print (vl_api_ipsec_interface_add_del_spd_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_interface_add_del_spd_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_entry_add_del_t_print
#define _vl_api_defined_ipsec_spd_entry_add_del_t_print
static inline void *vl_api_ipsec_spd_entry_add_del_t_print (vl_api_ipsec_spd_entry_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_entry_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_entry_add_del_reply_t_print
#define _vl_api_defined_ipsec_spd_entry_add_del_reply_t_print
static inline void *vl_api_ipsec_spd_entry_add_del_reply_t_print (vl_api_ipsec_spd_entry_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_entry_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "stat_index: %u\n", a->stat_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spds_dump_t_print
#define _vl_api_defined_ipsec_spds_dump_t_print
static inline void *vl_api_ipsec_spds_dump_t_print (vl_api_ipsec_spds_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spds_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spds_details_t_print
#define _vl_api_defined_ipsec_spds_details_t_print
static inline void *vl_api_ipsec_spds_details_t_print (vl_api_ipsec_spds_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spds_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "spd_id: %u\n", a->spd_id);
    vl_print(handle, "npolicies: %u\n", a->npolicies);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_dump_t_print
#define _vl_api_defined_ipsec_spd_dump_t_print
static inline void *vl_api_ipsec_spd_dump_t_print (vl_api_ipsec_spd_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "spd_id: %u\n", a->spd_id);
    vl_print(handle, "sa_id: %u\n", a->sa_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_details_t_print
#define _vl_api_defined_ipsec_spd_details_t_print
static inline void *vl_api_ipsec_spd_details_t_print (vl_api_ipsec_spd_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_sad_entry_add_del_t_print
#define _vl_api_defined_ipsec_sad_entry_add_del_t_print
static inline void *vl_api_ipsec_sad_entry_add_del_t_print (vl_api_ipsec_sad_entry_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_sad_entry_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_sad_entry_add_del_reply_t_print
#define _vl_api_defined_ipsec_sad_entry_add_del_reply_t_print
static inline void *vl_api_ipsec_sad_entry_add_del_reply_t_print (vl_api_ipsec_sad_entry_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_sad_entry_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "stat_index: %u\n", a->stat_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_update_t_print
#define _vl_api_defined_ipsec_tunnel_protect_update_t_print
static inline void *vl_api_ipsec_tunnel_protect_update_t_print (vl_api_ipsec_tunnel_protect_update_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_protect_update_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_update_reply_t_print
#define _vl_api_defined_ipsec_tunnel_protect_update_reply_t_print
static inline void *vl_api_ipsec_tunnel_protect_update_reply_t_print (vl_api_ipsec_tunnel_protect_update_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_protect_update_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_del_t_print
#define _vl_api_defined_ipsec_tunnel_protect_del_t_print
static inline void *vl_api_ipsec_tunnel_protect_del_t_print (vl_api_ipsec_tunnel_protect_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_protect_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_del_reply_t_print
#define _vl_api_defined_ipsec_tunnel_protect_del_reply_t_print
static inline void *vl_api_ipsec_tunnel_protect_del_reply_t_print (vl_api_ipsec_tunnel_protect_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_protect_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_dump_t_print
#define _vl_api_defined_ipsec_tunnel_protect_dump_t_print
static inline void *vl_api_ipsec_tunnel_protect_dump_t_print (vl_api_ipsec_tunnel_protect_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_protect_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_details_t_print
#define _vl_api_defined_ipsec_tunnel_protect_details_t_print
static inline void *vl_api_ipsec_tunnel_protect_details_t_print (vl_api_ipsec_tunnel_protect_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_protect_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_interface_dump_t_print
#define _vl_api_defined_ipsec_spd_interface_dump_t_print
static inline void *vl_api_ipsec_spd_interface_dump_t_print (vl_api_ipsec_spd_interface_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_interface_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "spd_index: %u\n", a->spd_index);
    vl_print(handle, "spd_index_valid: %u\n", a->spd_index_valid);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_spd_interface_details_t_print
#define _vl_api_defined_ipsec_spd_interface_details_t_print
static inline void *vl_api_ipsec_spd_interface_details_t_print (vl_api_ipsec_spd_interface_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_spd_interface_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "spd_index: %u\n", a->spd_index);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_add_del_t_print
#define _vl_api_defined_ipsec_tunnel_if_add_del_t_print
static inline void *vl_api_ipsec_tunnel_if_add_del_t_print (vl_api_ipsec_tunnel_if_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_if_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "esn: %u\n", a->esn);
    vl_print(handle, "anti_replay: %u\n", a->anti_replay);
    vl_print(handle, "local_spi: %u\n", a->local_spi);
    vl_print(handle, "remote_spi: %u\n", a->remote_spi);
    vl_print(handle, "crypto_alg: %u\n", a->crypto_alg);
    vl_print(handle, "local_crypto_key_len: %u\n", a->local_crypto_key_len);
    vl_print(handle, "remote_crypto_key_len: %u\n", a->remote_crypto_key_len);
    vl_print(handle, "integ_alg: %u\n", a->integ_alg);
    vl_print(handle, "local_integ_key_len: %u\n", a->local_integ_key_len);
    vl_print(handle, "remote_integ_key_len: %u\n", a->remote_integ_key_len);
    vl_print(handle, "renumber: %u\n", a->renumber);
    vl_print(handle, "show_instance: %u\n", a->show_instance);
    vl_print(handle, "udp_encap: %u\n", a->udp_encap);
    vl_print(handle, "tx_table_id: %u\n", a->tx_table_id);
    vl_print(handle, "salt: %u\n", a->salt);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_add_del_reply_t_print
#define _vl_api_defined_ipsec_tunnel_if_add_del_reply_t_print
static inline void *vl_api_ipsec_tunnel_if_add_del_reply_t_print (vl_api_ipsec_tunnel_if_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_if_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_sa_dump_t_print
#define _vl_api_defined_ipsec_sa_dump_t_print
static inline void *vl_api_ipsec_sa_dump_t_print (vl_api_ipsec_sa_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_sa_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sa_id: %u\n", a->sa_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_sa_details_t_print
#define _vl_api_defined_ipsec_sa_details_t_print
static inline void *vl_api_ipsec_sa_details_t_print (vl_api_ipsec_sa_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_sa_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "salt: %u\n", a->salt);
    vl_print(handle, "seq_outbound: %llu\n", a->seq_outbound);
    vl_print(handle, "last_seq_inbound: %llu\n", a->last_seq_inbound);
    vl_print(handle, "replay_window: %llu\n", a->replay_window);
    vl_print(handle, "total_data_size: %llu\n", a->total_data_size);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_set_sa_t_print
#define _vl_api_defined_ipsec_tunnel_if_set_sa_t_print
static inline void *vl_api_ipsec_tunnel_if_set_sa_t_print (vl_api_ipsec_tunnel_if_set_sa_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_if_set_sa_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "sa_id: %u\n", a->sa_id);
    vl_print(handle, "is_outbound: %u\n", a->is_outbound);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_set_sa_reply_t_print
#define _vl_api_defined_ipsec_tunnel_if_set_sa_reply_t_print
static inline void *vl_api_ipsec_tunnel_if_set_sa_reply_t_print (vl_api_ipsec_tunnel_if_set_sa_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_tunnel_if_set_sa_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_backend_dump_t_print
#define _vl_api_defined_ipsec_backend_dump_t_print
static inline void *vl_api_ipsec_backend_dump_t_print (vl_api_ipsec_backend_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_backend_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_backend_details_t_print
#define _vl_api_defined_ipsec_backend_details_t_print
static inline void *vl_api_ipsec_backend_details_t_print (vl_api_ipsec_backend_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_backend_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "index: %u\n", a->index);
    vl_print(handle, "active: %u\n", a->active);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_select_backend_t_print
#define _vl_api_defined_ipsec_select_backend_t_print
static inline void *vl_api_ipsec_select_backend_t_print (vl_api_ipsec_select_backend_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_select_backend_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "index: %u\n", a->index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipsec_select_backend_reply_t_print
#define _vl_api_defined_ipsec_select_backend_reply_t_print
static inline void *vl_api_ipsec_select_backend_reply_t_print (vl_api_ipsec_select_backend_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipsec_select_backend_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif


#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

#ifndef _vl_api_defined_address_union_t_endian
#define _vl_api_defined_address_union_t_endian
static inline void vl_api_address_union_t_endian (vl_api_address_union_t *a)
{
    /* a->ip4 = a->ip4 (no-op) */
    /* a->ip6 = a->ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_address_t_endian
#define _vl_api_defined_address_t_endian
static inline void vl_api_address_t_endian (vl_api_address_t *a)
{
    /* a->af = a->af (no-op) */
    /* a->un = a->un (no-op) */
}

#endif

#ifndef _vl_api_defined_prefix_t_endian
#define _vl_api_defined_prefix_t_endian
static inline void vl_api_prefix_t_endian (vl_api_prefix_t *a)
{
    /* a->address = a->address (no-op) */
    /* a->len = a->len (no-op) */
}

#endif

#ifndef _vl_api_defined_mprefix_t_endian
#define _vl_api_defined_mprefix_t_endian
static inline void vl_api_mprefix_t_endian (vl_api_mprefix_t *a)
{
    /* a->af = a->af (no-op) */
    a->grp_address_length = clib_net_to_host_u16(a->grp_address_length);
    /* a->grp_address = a->grp_address (no-op) */
    /* a->src_address = a->src_address (no-op) */
}

#endif

#ifndef _vl_api_defined_ip6_prefix_t_endian
#define _vl_api_defined_ip6_prefix_t_endian
static inline void vl_api_ip6_prefix_t_endian (vl_api_ip6_prefix_t *a)
{
    /* a->address = a->address (no-op) */
    /* a->len = a->len (no-op) */
}

#endif

#ifndef _vl_api_defined_ip4_prefix_t_endian
#define _vl_api_defined_ip4_prefix_t_endian
static inline void vl_api_ip4_prefix_t_endian (vl_api_ip4_prefix_t *a)
{
    /* a->address = a->address (no-op) */
    /* a->len = a->len (no-op) */
}

#endif

#ifndef _vl_api_defined_prefix_matcher_t_endian
#define _vl_api_defined_prefix_matcher_t_endian
static inline void vl_api_prefix_matcher_t_endian (vl_api_prefix_matcher_t *a)
{
    /* a->le = a->le (no-op) */
    /* a->ge = a->ge (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_spd_entry_t_endian
#define _vl_api_defined_ipsec_spd_entry_t_endian
static inline void vl_api_ipsec_spd_entry_t_endian (vl_api_ipsec_spd_entry_t *a)
{
    a->spd_id = clib_net_to_host_u32(a->spd_id);
    a->priority = clib_net_to_host_u32(a->priority);
    /* a->is_outbound = a->is_outbound (no-op) */
    a->sa_id = clib_net_to_host_u32(a->sa_id);
    /* a->policy = a->policy (no-op) */
    /* a->protocol = a->protocol (no-op) */
    /* a->remote_address_start = a->remote_address_start (no-op) */
    /* a->remote_address_stop = a->remote_address_stop (no-op) */
    /* a->local_address_start = a->local_address_start (no-op) */
    /* a->local_address_stop = a->local_address_stop (no-op) */
    a->remote_port_start = clib_net_to_host_u16(a->remote_port_start);
    a->remote_port_stop = clib_net_to_host_u16(a->remote_port_stop);
    a->local_port_start = clib_net_to_host_u16(a->local_port_start);
    a->local_port_stop = clib_net_to_host_u16(a->local_port_stop);
}

#endif

#ifndef _vl_api_defined_key_t_endian
#define _vl_api_defined_key_t_endian
static inline void vl_api_key_t_endian (vl_api_key_t *a)
{
    /* a->length = a->length (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_sad_entry_t_endian
#define _vl_api_defined_ipsec_sad_entry_t_endian
static inline void vl_api_ipsec_sad_entry_t_endian (vl_api_ipsec_sad_entry_t *a)
{
    a->sad_id = clib_net_to_host_u32(a->sad_id);
    a->spi = clib_net_to_host_u32(a->spi);
    /* a->protocol = a->protocol (no-op) */
    /* a->crypto_algorithm = a->crypto_algorithm (no-op) */
    /* a->crypto_key = a->crypto_key (no-op) */
    /* a->integrity_algorithm = a->integrity_algorithm (no-op) */
    /* a->integrity_key = a->integrity_key (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->tunnel_src = a->tunnel_src (no-op) */
    /* a->tunnel_dst = a->tunnel_dst (no-op) */
    a->tx_table_id = clib_net_to_host_u32(a->tx_table_id);
    a->salt = clib_net_to_host_u32(a->salt);
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_t_endian
#define _vl_api_defined_ipsec_tunnel_protect_t_endian
static inline void vl_api_ipsec_tunnel_protect_t_endian (vl_api_ipsec_tunnel_protect_t *a)
{
    /* a->sw_if_index = a->sw_if_index (no-op) */
    a->sa_out = clib_net_to_host_u32(a->sa_out);
    /* a->n_sa_in = a->n_sa_in (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_spd_add_del_t_endian
#define _vl_api_defined_ipsec_spd_add_del_t_endian
static inline void vl_api_ipsec_spd_add_del_t_endian (vl_api_ipsec_spd_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->spd_id = clib_net_to_host_u32(a->spd_id);
}

#endif

#ifndef _vl_api_defined_ipsec_spd_add_del_reply_t_endian
#define _vl_api_defined_ipsec_spd_add_del_reply_t_endian
static inline void vl_api_ipsec_spd_add_del_reply_t_endian (vl_api_ipsec_spd_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipsec_interface_add_del_spd_t_endian
#define _vl_api_defined_ipsec_interface_add_del_spd_t_endian
static inline void vl_api_ipsec_interface_add_del_spd_t_endian (vl_api_ipsec_interface_add_del_spd_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->spd_id = clib_net_to_host_u32(a->spd_id);
}

#endif

#ifndef _vl_api_defined_ipsec_interface_add_del_spd_reply_t_endian
#define _vl_api_defined_ipsec_interface_add_del_spd_reply_t_endian
static inline void vl_api_ipsec_interface_add_del_spd_reply_t_endian (vl_api_ipsec_interface_add_del_spd_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipsec_spd_entry_add_del_t_endian
#define _vl_api_defined_ipsec_spd_entry_add_del_t_endian
static inline void vl_api_ipsec_spd_entry_add_del_t_endian (vl_api_ipsec_spd_entry_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->entry = a->entry (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_spd_entry_add_del_reply_t_endian
#define _vl_api_defined_ipsec_spd_entry_add_del_reply_t_endian
static inline void vl_api_ipsec_spd_entry_add_del_reply_t_endian (vl_api_ipsec_spd_entry_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->stat_index = clib_net_to_host_u32(a->stat_index);
}

#endif

#ifndef _vl_api_defined_ipsec_spds_dump_t_endian
#define _vl_api_defined_ipsec_spds_dump_t_endian
static inline void vl_api_ipsec_spds_dump_t_endian (vl_api_ipsec_spds_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ipsec_spds_details_t_endian
#define _vl_api_defined_ipsec_spds_details_t_endian
static inline void vl_api_ipsec_spds_details_t_endian (vl_api_ipsec_spds_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->spd_id = clib_net_to_host_u32(a->spd_id);
    a->npolicies = clib_net_to_host_u32(a->npolicies);
}

#endif

#ifndef _vl_api_defined_ipsec_spd_dump_t_endian
#define _vl_api_defined_ipsec_spd_dump_t_endian
static inline void vl_api_ipsec_spd_dump_t_endian (vl_api_ipsec_spd_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->spd_id = clib_net_to_host_u32(a->spd_id);
    a->sa_id = clib_net_to_host_u32(a->sa_id);
}

#endif

#ifndef _vl_api_defined_ipsec_spd_details_t_endian
#define _vl_api_defined_ipsec_spd_details_t_endian
static inline void vl_api_ipsec_spd_details_t_endian (vl_api_ipsec_spd_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->entry = a->entry (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_sad_entry_add_del_t_endian
#define _vl_api_defined_ipsec_sad_entry_add_del_t_endian
static inline void vl_api_ipsec_sad_entry_add_del_t_endian (vl_api_ipsec_sad_entry_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->entry = a->entry (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_sad_entry_add_del_reply_t_endian
#define _vl_api_defined_ipsec_sad_entry_add_del_reply_t_endian
static inline void vl_api_ipsec_sad_entry_add_del_reply_t_endian (vl_api_ipsec_sad_entry_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->stat_index = clib_net_to_host_u32(a->stat_index);
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_update_t_endian
#define _vl_api_defined_ipsec_tunnel_protect_update_t_endian
static inline void vl_api_ipsec_tunnel_protect_update_t_endian (vl_api_ipsec_tunnel_protect_update_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->tunnel = a->tunnel (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_update_reply_t_endian
#define _vl_api_defined_ipsec_tunnel_protect_update_reply_t_endian
static inline void vl_api_ipsec_tunnel_protect_update_reply_t_endian (vl_api_ipsec_tunnel_protect_update_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_del_t_endian
#define _vl_api_defined_ipsec_tunnel_protect_del_t_endian
static inline void vl_api_ipsec_tunnel_protect_del_t_endian (vl_api_ipsec_tunnel_protect_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_del_reply_t_endian
#define _vl_api_defined_ipsec_tunnel_protect_del_reply_t_endian
static inline void vl_api_ipsec_tunnel_protect_del_reply_t_endian (vl_api_ipsec_tunnel_protect_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_dump_t_endian
#define _vl_api_defined_ipsec_tunnel_protect_dump_t_endian
static inline void vl_api_ipsec_tunnel_protect_dump_t_endian (vl_api_ipsec_tunnel_protect_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_protect_details_t_endian
#define _vl_api_defined_ipsec_tunnel_protect_details_t_endian
static inline void vl_api_ipsec_tunnel_protect_details_t_endian (vl_api_ipsec_tunnel_protect_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->tun = a->tun (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_spd_interface_dump_t_endian
#define _vl_api_defined_ipsec_spd_interface_dump_t_endian
static inline void vl_api_ipsec_spd_interface_dump_t_endian (vl_api_ipsec_spd_interface_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->spd_index = clib_net_to_host_u32(a->spd_index);
    /* a->spd_index_valid = a->spd_index_valid (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_spd_interface_details_t_endian
#define _vl_api_defined_ipsec_spd_interface_details_t_endian
static inline void vl_api_ipsec_spd_interface_details_t_endian (vl_api_ipsec_spd_interface_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->spd_index = clib_net_to_host_u32(a->spd_index);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_add_del_t_endian
#define _vl_api_defined_ipsec_tunnel_if_add_del_t_endian
static inline void vl_api_ipsec_tunnel_if_add_del_t_endian (vl_api_ipsec_tunnel_if_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->esn = a->esn (no-op) */
    /* a->anti_replay = a->anti_replay (no-op) */
    /* a->local_ip = a->local_ip (no-op) */
    /* a->remote_ip = a->remote_ip (no-op) */
    a->local_spi = clib_net_to_host_u32(a->local_spi);
    a->remote_spi = clib_net_to_host_u32(a->remote_spi);
    /* a->crypto_alg = a->crypto_alg (no-op) */
    /* a->local_crypto_key_len = a->local_crypto_key_len (no-op) */
    /* a->remote_crypto_key_len = a->remote_crypto_key_len (no-op) */
    /* a->integ_alg = a->integ_alg (no-op) */
    /* a->local_integ_key_len = a->local_integ_key_len (no-op) */
    /* a->remote_integ_key_len = a->remote_integ_key_len (no-op) */
    /* a->renumber = a->renumber (no-op) */
    a->show_instance = clib_net_to_host_u32(a->show_instance);
    /* a->udp_encap = a->udp_encap (no-op) */
    a->tx_table_id = clib_net_to_host_u32(a->tx_table_id);
    a->salt = clib_net_to_host_u32(a->salt);
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_add_del_reply_t_endian
#define _vl_api_defined_ipsec_tunnel_if_add_del_reply_t_endian
static inline void vl_api_ipsec_tunnel_if_add_del_reply_t_endian (vl_api_ipsec_tunnel_if_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_ipsec_sa_dump_t_endian
#define _vl_api_defined_ipsec_sa_dump_t_endian
static inline void vl_api_ipsec_sa_dump_t_endian (vl_api_ipsec_sa_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sa_id = clib_net_to_host_u32(a->sa_id);
}

#endif

#ifndef _vl_api_defined_ipsec_sa_details_t_endian
#define _vl_api_defined_ipsec_sa_details_t_endian
static inline void vl_api_ipsec_sa_details_t_endian (vl_api_ipsec_sa_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->entry = a->entry (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->salt = clib_net_to_host_u32(a->salt);
    a->seq_outbound = clib_net_to_host_u64(a->seq_outbound);
    a->last_seq_inbound = clib_net_to_host_u64(a->last_seq_inbound);
    a->replay_window = clib_net_to_host_u64(a->replay_window);
    a->total_data_size = clib_net_to_host_u64(a->total_data_size);
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_set_sa_t_endian
#define _vl_api_defined_ipsec_tunnel_if_set_sa_t_endian
static inline void vl_api_ipsec_tunnel_if_set_sa_t_endian (vl_api_ipsec_tunnel_if_set_sa_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->sa_id = clib_net_to_host_u32(a->sa_id);
    /* a->is_outbound = a->is_outbound (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_tunnel_if_set_sa_reply_t_endian
#define _vl_api_defined_ipsec_tunnel_if_set_sa_reply_t_endian
static inline void vl_api_ipsec_tunnel_if_set_sa_reply_t_endian (vl_api_ipsec_tunnel_if_set_sa_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipsec_backend_dump_t_endian
#define _vl_api_defined_ipsec_backend_dump_t_endian
static inline void vl_api_ipsec_backend_dump_t_endian (vl_api_ipsec_backend_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ipsec_backend_details_t_endian
#define _vl_api_defined_ipsec_backend_details_t_endian
static inline void vl_api_ipsec_backend_details_t_endian (vl_api_ipsec_backend_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->protocol = a->protocol (no-op) */
    /* a->index = a->index (no-op) */
    /* a->active = a->active (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_select_backend_t_endian
#define _vl_api_defined_ipsec_select_backend_t_endian
static inline void vl_api_ipsec_select_backend_t_endian (vl_api_ipsec_select_backend_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->protocol = a->protocol (no-op) */
    /* a->index = a->index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipsec_select_backend_reply_t_endian
#define _vl_api_defined_ipsec_select_backend_reply_t_endian
static inline void vl_api_ipsec_select_backend_reply_t_endian (vl_api_ipsec_select_backend_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ipsec.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ipsec.api, 0xaffef530)

#endif

