/*
 * VLIB API definitions 2020-01-07 14:25:43
 * Input file: abf.api
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
#warning no content included from abf.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_ABF_PLUGIN_GET_VERSION, vl_api_abf_plugin_get_version_t_handler)
vl_msg_id(VL_API_ABF_PLUGIN_GET_VERSION_REPLY, vl_api_abf_plugin_get_version_reply_t_handler)
vl_msg_id(VL_API_ABF_POLICY_ADD_DEL, vl_api_abf_policy_add_del_t_handler)
vl_msg_id(VL_API_ABF_POLICY_ADD_DEL_REPLY, vl_api_abf_policy_add_del_reply_t_handler)
vl_msg_id(VL_API_ABF_POLICY_DETAILS, vl_api_abf_policy_details_t_handler)
vl_msg_id(VL_API_ABF_POLICY_DUMP, vl_api_abf_policy_dump_t_handler)
vl_msg_id(VL_API_ABF_ITF_ATTACH_ADD_DEL, vl_api_abf_itf_attach_add_del_t_handler)
vl_msg_id(VL_API_ABF_ITF_ATTACH_ADD_DEL_REPLY, vl_api_abf_itf_attach_add_del_reply_t_handler)
vl_msg_id(VL_API_ABF_ITF_ATTACH_DETAILS, vl_api_abf_itf_attach_details_t_handler)
vl_msg_id(VL_API_ABF_ITF_ATTACH_DUMP, vl_api_abf_itf_attach_dump_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_abf_plugin_get_version_t, 1)
vl_msg_name(vl_api_abf_plugin_get_version_reply_t, 1)
vl_msg_name(vl_api_abf_policy_add_del_t, 1)
vl_msg_name(vl_api_abf_policy_add_del_reply_t, 1)
vl_msg_name(vl_api_abf_policy_details_t, 1)
vl_msg_name(vl_api_abf_policy_dump_t, 1)
vl_msg_name(vl_api_abf_itf_attach_add_del_t, 1)
vl_msg_name(vl_api_abf_itf_attach_add_del_reply_t, 1)
vl_msg_name(vl_api_abf_itf_attach_details_t, 1)
vl_msg_name(vl_api_abf_itf_attach_dump_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_abf \
_(VL_API_ABF_PLUGIN_GET_VERSION, abf_plugin_get_version, 51077d14) \
_(VL_API_ABF_PLUGIN_GET_VERSION_REPLY, abf_plugin_get_version_reply, 9b32cf86) \
_(VL_API_ABF_POLICY_ADD_DEL, abf_policy_add_del, d1fc434d) \
_(VL_API_ABF_POLICY_ADD_DEL_REPLY, abf_policy_add_del_reply, e8d4e804) \
_(VL_API_ABF_POLICY_DETAILS, abf_policy_details, c19593c8) \
_(VL_API_ABF_POLICY_DUMP, abf_policy_dump, 51077d14) \
_(VL_API_ABF_ITF_ATTACH_ADD_DEL, abf_itf_attach_add_del, 4464f87d) \
_(VL_API_ABF_ITF_ATTACH_ADD_DEL_REPLY, abf_itf_attach_add_del_reply, e8d4e804) \
_(VL_API_ABF_ITF_ATTACH_DETAILS, abf_itf_attach_details, 4a943370) \
_(VL_API_ABF_ITF_ATTACH_DUMP, abf_itf_attach_dump, 51077d14) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_abf_api
#define included_abf_api
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

#ifndef _vl_api_defined_abf_policy
#define _vl_api_defined_abf_policy
typedef VL_API_PACKED(struct _vl_api_abf_policy {
    u32 policy_id;
    u32 acl_index;
    u8 n_paths;
    vl_api_fib_path_t paths[0];
}) vl_api_abf_policy_t;
#endif

#ifndef _vl_api_defined_abf_itf_attach
#define _vl_api_defined_abf_itf_attach
typedef VL_API_PACKED(struct _vl_api_abf_itf_attach {
    u32 policy_id;
    u32 sw_if_index;
    u32 priority;
    u8 is_ipv6;
}) vl_api_abf_itf_attach_t;
#endif

#ifndef _vl_api_defined_abf_plugin_get_version
#define _vl_api_defined_abf_plugin_get_version
typedef VL_API_PACKED(struct _vl_api_abf_plugin_get_version {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_abf_plugin_get_version_t;
#endif

#ifndef _vl_api_defined_abf_plugin_get_version_reply
#define _vl_api_defined_abf_plugin_get_version_reply
typedef VL_API_PACKED(struct _vl_api_abf_plugin_get_version_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 major;
    u32 minor;
}) vl_api_abf_plugin_get_version_reply_t;
#endif

#ifndef _vl_api_defined_abf_policy_add_del
#define _vl_api_defined_abf_policy_add_del
typedef VL_API_PACKED(struct _vl_api_abf_policy_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_abf_policy_t policy;
}) vl_api_abf_policy_add_del_t;
#endif

#ifndef _vl_api_defined_abf_policy_add_del_reply
#define _vl_api_defined_abf_policy_add_del_reply
typedef VL_API_PACKED(struct _vl_api_abf_policy_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_abf_policy_add_del_reply_t;
#endif

#ifndef _vl_api_defined_abf_policy_details
#define _vl_api_defined_abf_policy_details
typedef VL_API_PACKED(struct _vl_api_abf_policy_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_abf_policy_t policy;
}) vl_api_abf_policy_details_t;
#endif

#ifndef _vl_api_defined_abf_policy_dump
#define _vl_api_defined_abf_policy_dump
typedef VL_API_PACKED(struct _vl_api_abf_policy_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_abf_policy_dump_t;
#endif

#ifndef _vl_api_defined_abf_itf_attach_add_del
#define _vl_api_defined_abf_itf_attach_add_del
typedef VL_API_PACKED(struct _vl_api_abf_itf_attach_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_abf_itf_attach_t attach;
}) vl_api_abf_itf_attach_add_del_t;
#endif

#ifndef _vl_api_defined_abf_itf_attach_add_del_reply
#define _vl_api_defined_abf_itf_attach_add_del_reply
typedef VL_API_PACKED(struct _vl_api_abf_itf_attach_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_abf_itf_attach_add_del_reply_t;
#endif

#ifndef _vl_api_defined_abf_itf_attach_details
#define _vl_api_defined_abf_itf_attach_details
typedef VL_API_PACKED(struct _vl_api_abf_itf_attach_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_abf_itf_attach_t attach;
}) vl_api_abf_itf_attach_details_t;
#endif

#ifndef _vl_api_defined_abf_itf_attach_dump
#define _vl_api_defined_abf_itf_attach_dump
typedef VL_API_PACKED(struct _vl_api_abf_itf_attach_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_abf_itf_attach_dump_t;
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

#ifndef _vl_api_defined_abf_policy_t_print
#define _vl_api_defined_abf_policy_t_print
static inline void *vl_api_abf_policy_t_print (vl_api_abf_policy_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_policy_t:\n");
    vl_print(handle, "policy_id: %u\n", a->policy_id);
    vl_print(handle, "acl_index: %u\n", a->acl_index);
    vl_print(handle, "n_paths: %u\n", a->n_paths);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_t_print
#define _vl_api_defined_abf_itf_attach_t_print
static inline void *vl_api_abf_itf_attach_t_print (vl_api_abf_itf_attach_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_itf_attach_t:\n");
    vl_print(handle, "policy_id: %u\n", a->policy_id);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "priority: %u\n", a->priority);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_plugin_get_version_t_print
#define _vl_api_defined_abf_plugin_get_version_t_print
static inline void *vl_api_abf_plugin_get_version_t_print (vl_api_abf_plugin_get_version_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_plugin_get_version_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_plugin_get_version_reply_t_print
#define _vl_api_defined_abf_plugin_get_version_reply_t_print
static inline void *vl_api_abf_plugin_get_version_reply_t_print (vl_api_abf_plugin_get_version_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_plugin_get_version_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "major: %u\n", a->major);
    vl_print(handle, "minor: %u\n", a->minor);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_policy_add_del_t_print
#define _vl_api_defined_abf_policy_add_del_t_print
static inline void *vl_api_abf_policy_add_del_t_print (vl_api_abf_policy_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_policy_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_policy_add_del_reply_t_print
#define _vl_api_defined_abf_policy_add_del_reply_t_print
static inline void *vl_api_abf_policy_add_del_reply_t_print (vl_api_abf_policy_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_policy_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_policy_details_t_print
#define _vl_api_defined_abf_policy_details_t_print
static inline void *vl_api_abf_policy_details_t_print (vl_api_abf_policy_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_policy_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_policy_dump_t_print
#define _vl_api_defined_abf_policy_dump_t_print
static inline void *vl_api_abf_policy_dump_t_print (vl_api_abf_policy_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_policy_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_add_del_t_print
#define _vl_api_defined_abf_itf_attach_add_del_t_print
static inline void *vl_api_abf_itf_attach_add_del_t_print (vl_api_abf_itf_attach_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_itf_attach_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_add_del_reply_t_print
#define _vl_api_defined_abf_itf_attach_add_del_reply_t_print
static inline void *vl_api_abf_itf_attach_add_del_reply_t_print (vl_api_abf_itf_attach_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_itf_attach_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_details_t_print
#define _vl_api_defined_abf_itf_attach_details_t_print
static inline void *vl_api_abf_itf_attach_details_t_print (vl_api_abf_itf_attach_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_itf_attach_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_dump_t_print
#define _vl_api_defined_abf_itf_attach_dump_t_print
static inline void *vl_api_abf_itf_attach_dump_t_print (vl_api_abf_itf_attach_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_abf_itf_attach_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
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

#ifndef _vl_api_defined_abf_policy_t_endian
#define _vl_api_defined_abf_policy_t_endian
static inline void vl_api_abf_policy_t_endian (vl_api_abf_policy_t *a)
{
    a->policy_id = clib_net_to_host_u32(a->policy_id);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    /* a->n_paths = a->n_paths (no-op) */
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_t_endian
#define _vl_api_defined_abf_itf_attach_t_endian
static inline void vl_api_abf_itf_attach_t_endian (vl_api_abf_itf_attach_t *a)
{
    a->policy_id = clib_net_to_host_u32(a->policy_id);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->priority = clib_net_to_host_u32(a->priority);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_abf_plugin_get_version_t_endian
#define _vl_api_defined_abf_plugin_get_version_t_endian
static inline void vl_api_abf_plugin_get_version_t_endian (vl_api_abf_plugin_get_version_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_abf_plugin_get_version_reply_t_endian
#define _vl_api_defined_abf_plugin_get_version_reply_t_endian
static inline void vl_api_abf_plugin_get_version_reply_t_endian (vl_api_abf_plugin_get_version_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
}

#endif

#ifndef _vl_api_defined_abf_policy_add_del_t_endian
#define _vl_api_defined_abf_policy_add_del_t_endian
static inline void vl_api_abf_policy_add_del_t_endian (vl_api_abf_policy_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->policy = a->policy (no-op) */
}

#endif

#ifndef _vl_api_defined_abf_policy_add_del_reply_t_endian
#define _vl_api_defined_abf_policy_add_del_reply_t_endian
static inline void vl_api_abf_policy_add_del_reply_t_endian (vl_api_abf_policy_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_abf_policy_details_t_endian
#define _vl_api_defined_abf_policy_details_t_endian
static inline void vl_api_abf_policy_details_t_endian (vl_api_abf_policy_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->policy = a->policy (no-op) */
}

#endif

#ifndef _vl_api_defined_abf_policy_dump_t_endian
#define _vl_api_defined_abf_policy_dump_t_endian
static inline void vl_api_abf_policy_dump_t_endian (vl_api_abf_policy_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_add_del_t_endian
#define _vl_api_defined_abf_itf_attach_add_del_t_endian
static inline void vl_api_abf_itf_attach_add_del_t_endian (vl_api_abf_itf_attach_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->attach = a->attach (no-op) */
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_add_del_reply_t_endian
#define _vl_api_defined_abf_itf_attach_add_del_reply_t_endian
static inline void vl_api_abf_itf_attach_add_del_reply_t_endian (vl_api_abf_itf_attach_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_details_t_endian
#define _vl_api_defined_abf_itf_attach_details_t_endian
static inline void vl_api_abf_itf_attach_details_t_endian (vl_api_abf_itf_attach_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->attach = a->attach (no-op) */
}

#endif

#ifndef _vl_api_defined_abf_itf_attach_dump_t_endian
#define _vl_api_defined_abf_itf_attach_dump_t_endian
static inline void vl_api_abf_itf_attach_dump_t_endian (vl_api_abf_itf_attach_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(abf.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(abf.api, 0x96d30784)

#endif

