/*
 * VLIB API definitions 2020-06-13 06:00:58
 * Input file: bier.api
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
#warning no content included from bier.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_BIER_TABLE_ADD_DEL, vl_api_bier_table_add_del_t_handler)
vl_msg_id(VL_API_BIER_TABLE_ADD_DEL_REPLY, vl_api_bier_table_add_del_reply_t_handler)
vl_msg_id(VL_API_BIER_TABLE_DUMP, vl_api_bier_table_dump_t_handler)
vl_msg_id(VL_API_BIER_TABLE_DETAILS, vl_api_bier_table_details_t_handler)
vl_msg_id(VL_API_BIER_ROUTE_ADD_DEL, vl_api_bier_route_add_del_t_handler)
vl_msg_id(VL_API_BIER_ROUTE_ADD_DEL_REPLY, vl_api_bier_route_add_del_reply_t_handler)
vl_msg_id(VL_API_BIER_ROUTE_DUMP, vl_api_bier_route_dump_t_handler)
vl_msg_id(VL_API_BIER_ROUTE_DETAILS, vl_api_bier_route_details_t_handler)
vl_msg_id(VL_API_BIER_IMP_ADD, vl_api_bier_imp_add_t_handler)
vl_msg_id(VL_API_BIER_IMP_ADD_REPLY, vl_api_bier_imp_add_reply_t_handler)
vl_msg_id(VL_API_BIER_IMP_DEL, vl_api_bier_imp_del_t_handler)
vl_msg_id(VL_API_BIER_IMP_DEL_REPLY, vl_api_bier_imp_del_reply_t_handler)
vl_msg_id(VL_API_BIER_IMP_DUMP, vl_api_bier_imp_dump_t_handler)
vl_msg_id(VL_API_BIER_IMP_DETAILS, vl_api_bier_imp_details_t_handler)
vl_msg_id(VL_API_BIER_DISP_TABLE_ADD_DEL, vl_api_bier_disp_table_add_del_t_handler)
vl_msg_id(VL_API_BIER_DISP_TABLE_ADD_DEL_REPLY, vl_api_bier_disp_table_add_del_reply_t_handler)
vl_msg_id(VL_API_BIER_DISP_TABLE_DUMP, vl_api_bier_disp_table_dump_t_handler)
vl_msg_id(VL_API_BIER_DISP_TABLE_DETAILS, vl_api_bier_disp_table_details_t_handler)
vl_msg_id(VL_API_BIER_DISP_ENTRY_ADD_DEL, vl_api_bier_disp_entry_add_del_t_handler)
vl_msg_id(VL_API_BIER_DISP_ENTRY_ADD_DEL_REPLY, vl_api_bier_disp_entry_add_del_reply_t_handler)
vl_msg_id(VL_API_BIER_DISP_ENTRY_DUMP, vl_api_bier_disp_entry_dump_t_handler)
vl_msg_id(VL_API_BIER_DISP_ENTRY_DETAILS, vl_api_bier_disp_entry_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_bier_table_add_del_t, 1)
vl_msg_name(vl_api_bier_table_add_del_reply_t, 1)
vl_msg_name(vl_api_bier_table_dump_t, 1)
vl_msg_name(vl_api_bier_table_details_t, 1)
vl_msg_name(vl_api_bier_route_add_del_t, 1)
vl_msg_name(vl_api_bier_route_add_del_reply_t, 1)
vl_msg_name(vl_api_bier_route_dump_t, 1)
vl_msg_name(vl_api_bier_route_details_t, 1)
vl_msg_name(vl_api_bier_imp_add_t, 1)
vl_msg_name(vl_api_bier_imp_add_reply_t, 1)
vl_msg_name(vl_api_bier_imp_del_t, 1)
vl_msg_name(vl_api_bier_imp_del_reply_t, 1)
vl_msg_name(vl_api_bier_imp_dump_t, 1)
vl_msg_name(vl_api_bier_imp_details_t, 1)
vl_msg_name(vl_api_bier_disp_table_add_del_t, 1)
vl_msg_name(vl_api_bier_disp_table_add_del_reply_t, 1)
vl_msg_name(vl_api_bier_disp_table_dump_t, 1)
vl_msg_name(vl_api_bier_disp_table_details_t, 1)
vl_msg_name(vl_api_bier_disp_entry_add_del_t, 1)
vl_msg_name(vl_api_bier_disp_entry_add_del_reply_t, 1)
vl_msg_name(vl_api_bier_disp_entry_dump_t, 1)
vl_msg_name(vl_api_bier_disp_entry_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_bier \
_(VL_API_BIER_TABLE_ADD_DEL, bier_table_add_del, cd3e9483) \
_(VL_API_BIER_TABLE_ADD_DEL_REPLY, bier_table_add_del_reply, e8d4e804) \
_(VL_API_BIER_TABLE_DUMP, bier_table_dump, 51077d14) \
_(VL_API_BIER_TABLE_DETAILS, bier_table_details, fc44a9dd) \
_(VL_API_BIER_ROUTE_ADD_DEL, bier_route_add_del, 90121982) \
_(VL_API_BIER_ROUTE_ADD_DEL_REPLY, bier_route_add_del_reply, e8d4e804) \
_(VL_API_BIER_ROUTE_DUMP, bier_route_dump, 38339846) \
_(VL_API_BIER_ROUTE_DETAILS, bier_route_details, 39ee6a56) \
_(VL_API_BIER_IMP_ADD, bier_imp_add, 3856dc3d) \
_(VL_API_BIER_IMP_ADD_REPLY, bier_imp_add_reply, d49c5793) \
_(VL_API_BIER_IMP_DEL, bier_imp_del, 7d45edf6) \
_(VL_API_BIER_IMP_DEL_REPLY, bier_imp_del_reply, e8d4e804) \
_(VL_API_BIER_IMP_DUMP, bier_imp_dump, 51077d14) \
_(VL_API_BIER_IMP_DETAILS, bier_imp_details, b76192df) \
_(VL_API_BIER_DISP_TABLE_ADD_DEL, bier_disp_table_add_del, 7671b2cb) \
_(VL_API_BIER_DISP_TABLE_ADD_DEL_REPLY, bier_disp_table_add_del_reply, e8d4e804) \
_(VL_API_BIER_DISP_TABLE_DUMP, bier_disp_table_dump, 51077d14) \
_(VL_API_BIER_DISP_TABLE_DETAILS, bier_disp_table_details, d27942c0) \
_(VL_API_BIER_DISP_ENTRY_ADD_DEL, bier_disp_entry_add_del, 8ce72614) \
_(VL_API_BIER_DISP_ENTRY_ADD_DEL_REPLY, bier_disp_entry_add_del_reply, e8d4e804) \
_(VL_API_BIER_DISP_ENTRY_DUMP, bier_disp_entry_dump, b5fa54ad) \
_(VL_API_BIER_DISP_ENTRY_DETAILS, bier_disp_entry_details, 8865070b) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_bier_api
#define included_bier_api
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

#ifndef _vl_api_defined_address_with_prefix
#define _vl_api_defined_address_with_prefix
typedef vl_api_prefix_t vl_api_address_with_prefix_t;
#endif

#ifndef _vl_api_defined_ip4_address_with_prefix
#define _vl_api_defined_ip4_address_with_prefix
typedef vl_api_ip4_prefix_t vl_api_ip4_address_with_prefix_t;
#endif

#ifndef _vl_api_defined_ip6_address_with_prefix
#define _vl_api_defined_ip6_address_with_prefix
typedef vl_api_ip6_prefix_t vl_api_ip6_address_with_prefix_t;
#endif

#ifndef _vl_api_defined_prefix_matcher
#define _vl_api_defined_prefix_matcher
typedef VL_API_PACKED(struct _vl_api_prefix_matcher {
    u8 le;
    u8 ge;
}) vl_api_prefix_matcher_t;
#endif

#ifndef _vl_api_defined_fib_mpls_label
#define _vl_api_defined_fib_mpls_label
typedef VL_API_PACKED(struct _vl_api_fib_mpls_label {
    u8 is_uniform;
    u32 label;
    u8 ttl;
    u8 exp;
}) vl_api_fib_mpls_label_t;
#endif

#ifndef _vl_api_defined_fib_path_nh_proto
#define _vl_api_defined_fib_path_nh_proto
typedef enum {
    FIB_API_PATH_NH_PROTO_IP4 = 0,
    FIB_API_PATH_NH_PROTO_IP6 = 1,
    FIB_API_PATH_NH_PROTO_MPLS = 2,
    FIB_API_PATH_NH_PROTO_ETHERNET = 3,
    FIB_API_PATH_NH_PROTO_BIER = 4,
} vl_api_fib_path_nh_proto_t;
#endif

#ifndef _vl_api_defined_fib_path_flags
#define _vl_api_defined_fib_path_flags
typedef enum {
    FIB_API_PATH_FLAG_NONE = 0,
    FIB_API_PATH_FLAG_RESOLVE_VIA_ATTACHED = 1,
    FIB_API_PATH_FLAG_RESOLVE_VIA_HOST = 2,
    FIB_API_PATH_FLAG_POP_PW_CW = 4,
} vl_api_fib_path_flags_t;
#endif

#ifndef _vl_api_defined_fib_path_nh
#define _vl_api_defined_fib_path_nh
typedef VL_API_PACKED(struct _vl_api_fib_path_nh {
    vl_api_address_union_t address;
    u32 via_label;
    u32 obj_id;
    u32 classify_table_index;
}) vl_api_fib_path_nh_t;
#endif

#ifndef _vl_api_defined_fib_path_type
#define _vl_api_defined_fib_path_type
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
} vl_api_fib_path_type_t;
#endif

#ifndef _vl_api_defined_fib_path
#define _vl_api_defined_fib_path
typedef VL_API_PACKED(struct _vl_api_fib_path {
    u32 sw_if_index;
    u32 table_id;
    u32 rpf_id;
    u8 weight;
    u8 preference;
    vl_api_fib_path_type_t type;
    vl_api_fib_path_flags_t flags;
    vl_api_fib_path_nh_proto_t proto;
    vl_api_fib_path_nh_t nh;
    u8 n_labels;
    vl_api_fib_mpls_label_t label_stack[16];
}) vl_api_fib_path_t;
#endif

#ifndef _vl_api_defined_bier_table_id
#define _vl_api_defined_bier_table_id
typedef VL_API_PACKED(struct _vl_api_bier_table_id {
    u8 bt_set;
    u8 bt_sub_domain;
    u8 bt_hdr_len_id;
}) vl_api_bier_table_id_t;
#endif

#ifndef _vl_api_defined_bier_route
#define _vl_api_defined_bier_route
typedef VL_API_PACKED(struct _vl_api_bier_route {
    u32 br_bp;
    vl_api_bier_table_id_t br_tbl_id;
    u8 br_n_paths;
    vl_api_fib_path_t br_paths[0];
}) vl_api_bier_route_t;
#endif

#ifndef _vl_api_defined_bier_table_add_del
#define _vl_api_defined_bier_table_add_del
typedef VL_API_PACKED(struct _vl_api_bier_table_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_bier_table_id_t bt_tbl_id;
    u32 bt_label;
    u8 bt_is_add;
}) vl_api_bier_table_add_del_t;
#endif

#ifndef _vl_api_defined_bier_table_add_del_reply
#define _vl_api_defined_bier_table_add_del_reply
typedef VL_API_PACKED(struct _vl_api_bier_table_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bier_table_add_del_reply_t;
#endif

#ifndef _vl_api_defined_bier_table_dump
#define _vl_api_defined_bier_table_dump
typedef VL_API_PACKED(struct _vl_api_bier_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_bier_table_dump_t;
#endif

#ifndef _vl_api_defined_bier_table_details
#define _vl_api_defined_bier_table_details
typedef VL_API_PACKED(struct _vl_api_bier_table_details {
    u16 _vl_msg_id;
    u32 context;
    u32 bt_label;
    vl_api_bier_table_id_t bt_tbl_id;
}) vl_api_bier_table_details_t;
#endif

#ifndef _vl_api_defined_bier_route_add_del
#define _vl_api_defined_bier_route_add_del
typedef VL_API_PACKED(struct _vl_api_bier_route_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 br_is_add;
    u8 br_is_replace;
    vl_api_bier_route_t br_route;
}) vl_api_bier_route_add_del_t;
#endif

#ifndef _vl_api_defined_bier_route_add_del_reply
#define _vl_api_defined_bier_route_add_del_reply
typedef VL_API_PACKED(struct _vl_api_bier_route_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bier_route_add_del_reply_t;
#endif

#ifndef _vl_api_defined_bier_route_dump
#define _vl_api_defined_bier_route_dump
typedef VL_API_PACKED(struct _vl_api_bier_route_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_bier_table_id_t br_tbl_id;
}) vl_api_bier_route_dump_t;
#endif

#ifndef _vl_api_defined_bier_route_details
#define _vl_api_defined_bier_route_details
typedef VL_API_PACKED(struct _vl_api_bier_route_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_bier_route_t br_route;
}) vl_api_bier_route_details_t;
#endif

#ifndef _vl_api_defined_bier_imp_add
#define _vl_api_defined_bier_imp_add
typedef VL_API_PACKED(struct _vl_api_bier_imp_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_bier_table_id_t bi_tbl_id;
    u16 bi_src;
    u8 bi_n_bytes;
    u8 bi_bytes[0];
}) vl_api_bier_imp_add_t;
#endif

#ifndef _vl_api_defined_bier_imp_add_reply
#define _vl_api_defined_bier_imp_add_reply
typedef VL_API_PACKED(struct _vl_api_bier_imp_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 bi_index;
}) vl_api_bier_imp_add_reply_t;
#endif

#ifndef _vl_api_defined_bier_imp_del
#define _vl_api_defined_bier_imp_del
typedef VL_API_PACKED(struct _vl_api_bier_imp_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bi_index;
}) vl_api_bier_imp_del_t;
#endif

#ifndef _vl_api_defined_bier_imp_del_reply
#define _vl_api_defined_bier_imp_del_reply
typedef VL_API_PACKED(struct _vl_api_bier_imp_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bier_imp_del_reply_t;
#endif

#ifndef _vl_api_defined_bier_imp_dump
#define _vl_api_defined_bier_imp_dump
typedef VL_API_PACKED(struct _vl_api_bier_imp_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_bier_imp_dump_t;
#endif

#ifndef _vl_api_defined_bier_imp_details
#define _vl_api_defined_bier_imp_details
typedef VL_API_PACKED(struct _vl_api_bier_imp_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_bier_table_id_t bi_tbl_id;
    u16 bi_src;
    u8 bi_n_bytes;
    u8 bi_bytes[0];
}) vl_api_bier_imp_details_t;
#endif

#ifndef _vl_api_defined_bier_disp_table_add_del
#define _vl_api_defined_bier_disp_table_add_del
typedef VL_API_PACKED(struct _vl_api_bier_disp_table_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bdt_tbl_id;
    u8 bdt_is_add;
}) vl_api_bier_disp_table_add_del_t;
#endif

#ifndef _vl_api_defined_bier_disp_table_add_del_reply
#define _vl_api_defined_bier_disp_table_add_del_reply
typedef VL_API_PACKED(struct _vl_api_bier_disp_table_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bier_disp_table_add_del_reply_t;
#endif

#ifndef _vl_api_defined_bier_disp_table_dump
#define _vl_api_defined_bier_disp_table_dump
typedef VL_API_PACKED(struct _vl_api_bier_disp_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_bier_disp_table_dump_t;
#endif

#ifndef _vl_api_defined_bier_disp_table_details
#define _vl_api_defined_bier_disp_table_details
typedef VL_API_PACKED(struct _vl_api_bier_disp_table_details {
    u16 _vl_msg_id;
    u32 context;
    u32 bdt_tbl_id;
}) vl_api_bier_disp_table_details_t;
#endif

#ifndef _vl_api_defined_bier_disp_entry_add_del
#define _vl_api_defined_bier_disp_entry_add_del
typedef VL_API_PACKED(struct _vl_api_bier_disp_entry_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 bde_bp;
    u32 bde_tbl_id;
    u8 bde_is_add;
    u8 bde_payload_proto;
    u8 bde_n_paths;
    vl_api_fib_path_t bde_paths[0];
}) vl_api_bier_disp_entry_add_del_t;
#endif

#ifndef _vl_api_defined_bier_disp_entry_add_del_reply
#define _vl_api_defined_bier_disp_entry_add_del_reply
typedef VL_API_PACKED(struct _vl_api_bier_disp_entry_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bier_disp_entry_add_del_reply_t;
#endif

#ifndef _vl_api_defined_bier_disp_entry_dump
#define _vl_api_defined_bier_disp_entry_dump
typedef VL_API_PACKED(struct _vl_api_bier_disp_entry_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bde_tbl_id;
}) vl_api_bier_disp_entry_dump_t;
#endif

#ifndef _vl_api_defined_bier_disp_entry_details
#define _vl_api_defined_bier_disp_entry_details
typedef VL_API_PACKED(struct _vl_api_bier_disp_entry_details {
    u16 _vl_msg_id;
    u32 context;
    u16 bde_bp;
    u32 bde_tbl_id;
    u8 bde_is_add;
    u8 bde_payload_proto;
    u8 bde_n_paths;
    vl_api_fib_path_t bde_paths[0];
}) vl_api_bier_disp_entry_details_t;
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

/***** manual: vl_api_ip4_address_t_print  *****/

/***** manual: vl_api_ip6_address_t_print  *****/

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

/***** manual: vl_api_address_with_prefix_t_print  *****/

/***** manual: vl_api_ip4_address_with_prefix_t_print  *****/

/***** manual: vl_api_ip6_address_with_prefix_t_print  *****/

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

#ifndef _vl_api_defined_fib_mpls_label_t_print
#define _vl_api_defined_fib_mpls_label_t_print
static inline void *vl_api_fib_mpls_label_t_print (vl_api_fib_mpls_label_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_mpls_label_t:\n");
    vl_print(handle, "is_uniform: %u\n", a->is_uniform);
    vl_print(handle, "label: %u\n", a->label);
    vl_print(handle, "ttl: %u\n", a->ttl);
    vl_print(handle, "exp: %u\n", a->exp);
    return handle;
}

#endif

#ifndef _vl_api_defined_fib_path_nh_t_print
#define _vl_api_defined_fib_path_nh_t_print
static inline void *vl_api_fib_path_nh_t_print (vl_api_fib_path_nh_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_path_nh_t:\n");
    vl_print(handle, "via_label: %u\n", a->via_label);
    vl_print(handle, "obj_id: %u\n", a->obj_id);
    vl_print(handle, "classify_table_index: %u\n", a->classify_table_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_fib_path_t_print
#define _vl_api_defined_fib_path_t_print
static inline void *vl_api_fib_path_t_print (vl_api_fib_path_t *a,void *handle)
{
    vl_print(handle, "vl_api_fib_path_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "rpf_id: %u\n", a->rpf_id);
    vl_print(handle, "weight: %u\n", a->weight);
    vl_print(handle, "preference: %u\n", a->preference);
    vl_print(handle, "n_labels: %u\n", a->n_labels);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_table_id_t_print
#define _vl_api_defined_bier_table_id_t_print
static inline void *vl_api_bier_table_id_t_print (vl_api_bier_table_id_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_table_id_t:\n");
    vl_print(handle, "bt_set: %u\n", a->bt_set);
    vl_print(handle, "bt_sub_domain: %u\n", a->bt_sub_domain);
    vl_print(handle, "bt_hdr_len_id: %u\n", a->bt_hdr_len_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_route_t_print
#define _vl_api_defined_bier_route_t_print
static inline void *vl_api_bier_route_t_print (vl_api_bier_route_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_route_t:\n");
    vl_print(handle, "br_bp: %u\n", a->br_bp);
    vl_print(handle, "br_n_paths: %u\n", a->br_n_paths);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_table_add_del_t_print
#define _vl_api_defined_bier_table_add_del_t_print
static inline void *vl_api_bier_table_add_del_t_print (vl_api_bier_table_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_table_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bt_label: %u\n", a->bt_label);
    vl_print(handle, "bt_is_add: %u\n", a->bt_is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_table_add_del_reply_t_print
#define _vl_api_defined_bier_table_add_del_reply_t_print
static inline void *vl_api_bier_table_add_del_reply_t_print (vl_api_bier_table_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_table_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_table_dump_t_print
#define _vl_api_defined_bier_table_dump_t_print
static inline void *vl_api_bier_table_dump_t_print (vl_api_bier_table_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_table_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_table_details_t_print
#define _vl_api_defined_bier_table_details_t_print
static inline void *vl_api_bier_table_details_t_print (vl_api_bier_table_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_table_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bt_label: %u\n", a->bt_label);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_route_add_del_t_print
#define _vl_api_defined_bier_route_add_del_t_print
static inline void *vl_api_bier_route_add_del_t_print (vl_api_bier_route_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_route_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "br_is_add: %u\n", a->br_is_add);
    vl_print(handle, "br_is_replace: %u\n", a->br_is_replace);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_route_add_del_reply_t_print
#define _vl_api_defined_bier_route_add_del_reply_t_print
static inline void *vl_api_bier_route_add_del_reply_t_print (vl_api_bier_route_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_route_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_route_dump_t_print
#define _vl_api_defined_bier_route_dump_t_print
static inline void *vl_api_bier_route_dump_t_print (vl_api_bier_route_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_route_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_route_details_t_print
#define _vl_api_defined_bier_route_details_t_print
static inline void *vl_api_bier_route_details_t_print (vl_api_bier_route_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_route_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_imp_add_t_print
#define _vl_api_defined_bier_imp_add_t_print
static inline void *vl_api_bier_imp_add_t_print (vl_api_bier_imp_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_imp_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bi_src: %u\n", a->bi_src);
    vl_print(handle, "bi_n_bytes: %u\n", a->bi_n_bytes);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_imp_add_reply_t_print
#define _vl_api_defined_bier_imp_add_reply_t_print
static inline void *vl_api_bier_imp_add_reply_t_print (vl_api_bier_imp_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_imp_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "bi_index: %u\n", a->bi_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_imp_del_t_print
#define _vl_api_defined_bier_imp_del_t_print
static inline void *vl_api_bier_imp_del_t_print (vl_api_bier_imp_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_imp_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bi_index: %u\n", a->bi_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_imp_del_reply_t_print
#define _vl_api_defined_bier_imp_del_reply_t_print
static inline void *vl_api_bier_imp_del_reply_t_print (vl_api_bier_imp_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_imp_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_imp_dump_t_print
#define _vl_api_defined_bier_imp_dump_t_print
static inline void *vl_api_bier_imp_dump_t_print (vl_api_bier_imp_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_imp_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_imp_details_t_print
#define _vl_api_defined_bier_imp_details_t_print
static inline void *vl_api_bier_imp_details_t_print (vl_api_bier_imp_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_imp_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bi_src: %u\n", a->bi_src);
    vl_print(handle, "bi_n_bytes: %u\n", a->bi_n_bytes);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_table_add_del_t_print
#define _vl_api_defined_bier_disp_table_add_del_t_print
static inline void *vl_api_bier_disp_table_add_del_t_print (vl_api_bier_disp_table_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_table_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bdt_tbl_id: %u\n", a->bdt_tbl_id);
    vl_print(handle, "bdt_is_add: %u\n", a->bdt_is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_table_add_del_reply_t_print
#define _vl_api_defined_bier_disp_table_add_del_reply_t_print
static inline void *vl_api_bier_disp_table_add_del_reply_t_print (vl_api_bier_disp_table_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_table_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_table_dump_t_print
#define _vl_api_defined_bier_disp_table_dump_t_print
static inline void *vl_api_bier_disp_table_dump_t_print (vl_api_bier_disp_table_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_table_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_table_details_t_print
#define _vl_api_defined_bier_disp_table_details_t_print
static inline void *vl_api_bier_disp_table_details_t_print (vl_api_bier_disp_table_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_table_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bdt_tbl_id: %u\n", a->bdt_tbl_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_add_del_t_print
#define _vl_api_defined_bier_disp_entry_add_del_t_print
static inline void *vl_api_bier_disp_entry_add_del_t_print (vl_api_bier_disp_entry_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_entry_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bde_bp: %u\n", a->bde_bp);
    vl_print(handle, "bde_tbl_id: %u\n", a->bde_tbl_id);
    vl_print(handle, "bde_is_add: %u\n", a->bde_is_add);
    vl_print(handle, "bde_payload_proto: %u\n", a->bde_payload_proto);
    vl_print(handle, "bde_n_paths: %u\n", a->bde_n_paths);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_add_del_reply_t_print
#define _vl_api_defined_bier_disp_entry_add_del_reply_t_print
static inline void *vl_api_bier_disp_entry_add_del_reply_t_print (vl_api_bier_disp_entry_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_entry_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_dump_t_print
#define _vl_api_defined_bier_disp_entry_dump_t_print
static inline void *vl_api_bier_disp_entry_dump_t_print (vl_api_bier_disp_entry_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_entry_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bde_tbl_id: %u\n", a->bde_tbl_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_details_t_print
#define _vl_api_defined_bier_disp_entry_details_t_print
static inline void *vl_api_bier_disp_entry_details_t_print (vl_api_bier_disp_entry_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bier_disp_entry_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bde_bp: %u\n", a->bde_bp);
    vl_print(handle, "bde_tbl_id: %u\n", a->bde_tbl_id);
    vl_print(handle, "bde_is_add: %u\n", a->bde_is_add);
    vl_print(handle, "bde_payload_proto: %u\n", a->bde_payload_proto);
    vl_print(handle, "bde_n_paths: %u\n", a->bde_n_paths);
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

/***** manual: vl_api_ip4_address_t_endian  *****/

/***** manual: vl_api_ip6_address_t_endian  *****/

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

/***** manual: vl_api_address_with_prefix_t_endian  *****/

/***** manual: vl_api_ip4_address_with_prefix_t_endian  *****/

/***** manual: vl_api_ip6_address_with_prefix_t_endian  *****/

#ifndef _vl_api_defined_prefix_matcher_t_endian
#define _vl_api_defined_prefix_matcher_t_endian
static inline void vl_api_prefix_matcher_t_endian (vl_api_prefix_matcher_t *a)
{
    /* a->le = a->le (no-op) */
    /* a->ge = a->ge (no-op) */
}

#endif

#ifndef _vl_api_defined_fib_mpls_label_t_endian
#define _vl_api_defined_fib_mpls_label_t_endian
static inline void vl_api_fib_mpls_label_t_endian (vl_api_fib_mpls_label_t *a)
{
    /* a->is_uniform = a->is_uniform (no-op) */
    a->label = clib_net_to_host_u32(a->label);
    /* a->ttl = a->ttl (no-op) */
    /* a->exp = a->exp (no-op) */
}

#endif

#ifndef _vl_api_defined_fib_path_nh_t_endian
#define _vl_api_defined_fib_path_nh_t_endian
static inline void vl_api_fib_path_nh_t_endian (vl_api_fib_path_nh_t *a)
{
    /* a->address = a->address (no-op) */
    a->via_label = clib_net_to_host_u32(a->via_label);
    a->obj_id = clib_net_to_host_u32(a->obj_id);
    a->classify_table_index = clib_net_to_host_u32(a->classify_table_index);
}

#endif

#ifndef _vl_api_defined_fib_path_t_endian
#define _vl_api_defined_fib_path_t_endian
static inline void vl_api_fib_path_t_endian (vl_api_fib_path_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->rpf_id = clib_net_to_host_u32(a->rpf_id);
    /* a->weight = a->weight (no-op) */
    /* a->preference = a->preference (no-op) */
    /* a->type = a->type (no-op) */
    /* a->flags = a->flags (no-op) */
    /* a->proto = a->proto (no-op) */
    /* a->nh = a->nh (no-op) */
    /* a->n_labels = a->n_labels (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_table_id_t_endian
#define _vl_api_defined_bier_table_id_t_endian
static inline void vl_api_bier_table_id_t_endian (vl_api_bier_table_id_t *a)
{
    /* a->bt_set = a->bt_set (no-op) */
    /* a->bt_sub_domain = a->bt_sub_domain (no-op) */
    /* a->bt_hdr_len_id = a->bt_hdr_len_id (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_route_t_endian
#define _vl_api_defined_bier_route_t_endian
static inline void vl_api_bier_route_t_endian (vl_api_bier_route_t *a)
{
    a->br_bp = clib_net_to_host_u32(a->br_bp);
    /* a->br_tbl_id = a->br_tbl_id (no-op) */
    /* a->br_n_paths = a->br_n_paths (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_table_add_del_t_endian
#define _vl_api_defined_bier_table_add_del_t_endian
static inline void vl_api_bier_table_add_del_t_endian (vl_api_bier_table_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->bt_tbl_id = a->bt_tbl_id (no-op) */
    a->bt_label = clib_net_to_host_u32(a->bt_label);
    /* a->bt_is_add = a->bt_is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_table_add_del_reply_t_endian
#define _vl_api_defined_bier_table_add_del_reply_t_endian
static inline void vl_api_bier_table_add_del_reply_t_endian (vl_api_bier_table_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bier_table_dump_t_endian
#define _vl_api_defined_bier_table_dump_t_endian
static inline void vl_api_bier_table_dump_t_endian (vl_api_bier_table_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_bier_table_details_t_endian
#define _vl_api_defined_bier_table_details_t_endian
static inline void vl_api_bier_table_details_t_endian (vl_api_bier_table_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->bt_label = clib_net_to_host_u32(a->bt_label);
    /* a->bt_tbl_id = a->bt_tbl_id (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_route_add_del_t_endian
#define _vl_api_defined_bier_route_add_del_t_endian
static inline void vl_api_bier_route_add_del_t_endian (vl_api_bier_route_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->br_is_add = a->br_is_add (no-op) */
    /* a->br_is_replace = a->br_is_replace (no-op) */
    /* a->br_route = a->br_route (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_route_add_del_reply_t_endian
#define _vl_api_defined_bier_route_add_del_reply_t_endian
static inline void vl_api_bier_route_add_del_reply_t_endian (vl_api_bier_route_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bier_route_dump_t_endian
#define _vl_api_defined_bier_route_dump_t_endian
static inline void vl_api_bier_route_dump_t_endian (vl_api_bier_route_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->br_tbl_id = a->br_tbl_id (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_route_details_t_endian
#define _vl_api_defined_bier_route_details_t_endian
static inline void vl_api_bier_route_details_t_endian (vl_api_bier_route_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->br_route = a->br_route (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_imp_add_t_endian
#define _vl_api_defined_bier_imp_add_t_endian
static inline void vl_api_bier_imp_add_t_endian (vl_api_bier_imp_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->bi_tbl_id = a->bi_tbl_id (no-op) */
    a->bi_src = clib_net_to_host_u16(a->bi_src);
    /* a->bi_n_bytes = a->bi_n_bytes (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_imp_add_reply_t_endian
#define _vl_api_defined_bier_imp_add_reply_t_endian
static inline void vl_api_bier_imp_add_reply_t_endian (vl_api_bier_imp_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->bi_index = clib_net_to_host_u32(a->bi_index);
}

#endif

#ifndef _vl_api_defined_bier_imp_del_t_endian
#define _vl_api_defined_bier_imp_del_t_endian
static inline void vl_api_bier_imp_del_t_endian (vl_api_bier_imp_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bi_index = clib_net_to_host_u32(a->bi_index);
}

#endif

#ifndef _vl_api_defined_bier_imp_del_reply_t_endian
#define _vl_api_defined_bier_imp_del_reply_t_endian
static inline void vl_api_bier_imp_del_reply_t_endian (vl_api_bier_imp_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bier_imp_dump_t_endian
#define _vl_api_defined_bier_imp_dump_t_endian
static inline void vl_api_bier_imp_dump_t_endian (vl_api_bier_imp_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_bier_imp_details_t_endian
#define _vl_api_defined_bier_imp_details_t_endian
static inline void vl_api_bier_imp_details_t_endian (vl_api_bier_imp_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->bi_tbl_id = a->bi_tbl_id (no-op) */
    a->bi_src = clib_net_to_host_u16(a->bi_src);
    /* a->bi_n_bytes = a->bi_n_bytes (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_disp_table_add_del_t_endian
#define _vl_api_defined_bier_disp_table_add_del_t_endian
static inline void vl_api_bier_disp_table_add_del_t_endian (vl_api_bier_disp_table_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bdt_tbl_id = clib_net_to_host_u32(a->bdt_tbl_id);
    /* a->bdt_is_add = a->bdt_is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_disp_table_add_del_reply_t_endian
#define _vl_api_defined_bier_disp_table_add_del_reply_t_endian
static inline void vl_api_bier_disp_table_add_del_reply_t_endian (vl_api_bier_disp_table_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bier_disp_table_dump_t_endian
#define _vl_api_defined_bier_disp_table_dump_t_endian
static inline void vl_api_bier_disp_table_dump_t_endian (vl_api_bier_disp_table_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_bier_disp_table_details_t_endian
#define _vl_api_defined_bier_disp_table_details_t_endian
static inline void vl_api_bier_disp_table_details_t_endian (vl_api_bier_disp_table_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->bdt_tbl_id = clib_net_to_host_u32(a->bdt_tbl_id);
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_add_del_t_endian
#define _vl_api_defined_bier_disp_entry_add_del_t_endian
static inline void vl_api_bier_disp_entry_add_del_t_endian (vl_api_bier_disp_entry_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bde_bp = clib_net_to_host_u16(a->bde_bp);
    a->bde_tbl_id = clib_net_to_host_u32(a->bde_tbl_id);
    /* a->bde_is_add = a->bde_is_add (no-op) */
    /* a->bde_payload_proto = a->bde_payload_proto (no-op) */
    /* a->bde_n_paths = a->bde_n_paths (no-op) */
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_add_del_reply_t_endian
#define _vl_api_defined_bier_disp_entry_add_del_reply_t_endian
static inline void vl_api_bier_disp_entry_add_del_reply_t_endian (vl_api_bier_disp_entry_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_dump_t_endian
#define _vl_api_defined_bier_disp_entry_dump_t_endian
static inline void vl_api_bier_disp_entry_dump_t_endian (vl_api_bier_disp_entry_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bde_tbl_id = clib_net_to_host_u32(a->bde_tbl_id);
}

#endif

#ifndef _vl_api_defined_bier_disp_entry_details_t_endian
#define _vl_api_defined_bier_disp_entry_details_t_endian
static inline void vl_api_bier_disp_entry_details_t_endian (vl_api_bier_disp_entry_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->bde_bp = clib_net_to_host_u16(a->bde_bp);
    a->bde_tbl_id = clib_net_to_host_u32(a->bde_tbl_id);
    /* a->bde_is_add = a->bde_is_add (no-op) */
    /* a->bde_payload_proto = a->bde_payload_proto (no-op) */
    /* a->bde_n_paths = a->bde_n_paths (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(bier.api, 1, 2, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(bier.api, 0x814e163f)

#endif

