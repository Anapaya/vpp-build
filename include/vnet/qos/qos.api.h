/*
 * VLIB API definitions 2020-06-13 05:56:05
 * Input file: qos.api
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
#warning no content included from qos.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_QOS_STORE_ENABLE_DISABLE, vl_api_qos_store_enable_disable_t_handler)
vl_msg_id(VL_API_QOS_STORE_ENABLE_DISABLE_REPLY, vl_api_qos_store_enable_disable_reply_t_handler)
vl_msg_id(VL_API_QOS_STORE_DUMP, vl_api_qos_store_dump_t_handler)
vl_msg_id(VL_API_QOS_STORE_DETAILS, vl_api_qos_store_details_t_handler)
vl_msg_id(VL_API_QOS_RECORD_ENABLE_DISABLE, vl_api_qos_record_enable_disable_t_handler)
vl_msg_id(VL_API_QOS_RECORD_ENABLE_DISABLE_REPLY, vl_api_qos_record_enable_disable_reply_t_handler)
vl_msg_id(VL_API_QOS_RECORD_DUMP, vl_api_qos_record_dump_t_handler)
vl_msg_id(VL_API_QOS_RECORD_DETAILS, vl_api_qos_record_details_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_UPDATE, vl_api_qos_egress_map_update_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_UPDATE_REPLY, vl_api_qos_egress_map_update_reply_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DELETE, vl_api_qos_egress_map_delete_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DELETE_REPLY, vl_api_qos_egress_map_delete_reply_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DUMP, vl_api_qos_egress_map_dump_t_handler)
vl_msg_id(VL_API_QOS_EGRESS_MAP_DETAILS, vl_api_qos_egress_map_details_t_handler)
vl_msg_id(VL_API_QOS_MARK_ENABLE_DISABLE, vl_api_qos_mark_enable_disable_t_handler)
vl_msg_id(VL_API_QOS_MARK_ENABLE_DISABLE_REPLY, vl_api_qos_mark_enable_disable_reply_t_handler)
vl_msg_id(VL_API_QOS_MARK_DUMP, vl_api_qos_mark_dump_t_handler)
vl_msg_id(VL_API_QOS_MARK_DETAILS, vl_api_qos_mark_details_t_handler)
vl_msg_id(VL_API_QOS_MARK_DETAILS_REPLY, vl_api_qos_mark_details_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_qos_store_enable_disable_t, 1)
vl_msg_name(vl_api_qos_store_enable_disable_reply_t, 1)
vl_msg_name(vl_api_qos_store_dump_t, 1)
vl_msg_name(vl_api_qos_store_details_t, 1)
vl_msg_name(vl_api_qos_record_enable_disable_t, 1)
vl_msg_name(vl_api_qos_record_enable_disable_reply_t, 1)
vl_msg_name(vl_api_qos_record_dump_t, 1)
vl_msg_name(vl_api_qos_record_details_t, 1)
vl_msg_name(vl_api_qos_egress_map_update_t, 1)
vl_msg_name(vl_api_qos_egress_map_update_reply_t, 1)
vl_msg_name(vl_api_qos_egress_map_delete_t, 1)
vl_msg_name(vl_api_qos_egress_map_delete_reply_t, 1)
vl_msg_name(vl_api_qos_egress_map_dump_t, 1)
vl_msg_name(vl_api_qos_egress_map_details_t, 1)
vl_msg_name(vl_api_qos_mark_enable_disable_t, 1)
vl_msg_name(vl_api_qos_mark_enable_disable_reply_t, 1)
vl_msg_name(vl_api_qos_mark_dump_t, 1)
vl_msg_name(vl_api_qos_mark_details_t, 1)
vl_msg_name(vl_api_qos_mark_details_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_qos \
_(VL_API_QOS_STORE_ENABLE_DISABLE, qos_store_enable_disable, 371eeb27) \
_(VL_API_QOS_STORE_ENABLE_DISABLE_REPLY, qos_store_enable_disable_reply, e8d4e804) \
_(VL_API_QOS_STORE_DUMP, qos_store_dump, 51077d14) \
_(VL_API_QOS_STORE_DETAILS, qos_store_details, 85db0b5a) \
_(VL_API_QOS_RECORD_ENABLE_DISABLE, qos_record_enable_disable, 0e9320b1) \
_(VL_API_QOS_RECORD_ENABLE_DISABLE_REPLY, qos_record_enable_disable_reply, e8d4e804) \
_(VL_API_QOS_RECORD_DUMP, qos_record_dump, 51077d14) \
_(VL_API_QOS_RECORD_DETAILS, qos_record_details, 01e537d6) \
_(VL_API_QOS_EGRESS_MAP_UPDATE, qos_egress_map_update, 6d1c065f) \
_(VL_API_QOS_EGRESS_MAP_UPDATE_REPLY, qos_egress_map_update_reply, e8d4e804) \
_(VL_API_QOS_EGRESS_MAP_DELETE, qos_egress_map_delete, 3a91bde5) \
_(VL_API_QOS_EGRESS_MAP_DELETE_REPLY, qos_egress_map_delete_reply, e8d4e804) \
_(VL_API_QOS_EGRESS_MAP_DUMP, qos_egress_map_dump, 51077d14) \
_(VL_API_QOS_EGRESS_MAP_DETAILS, qos_egress_map_details, 46c5653c) \
_(VL_API_QOS_MARK_ENABLE_DISABLE, qos_mark_enable_disable, a7f849c8) \
_(VL_API_QOS_MARK_ENABLE_DISABLE_REPLY, qos_mark_enable_disable_reply, e8d4e804) \
_(VL_API_QOS_MARK_DUMP, qos_mark_dump, 529cb13f) \
_(VL_API_QOS_MARK_DETAILS, qos_mark_details, 89fe81a9) \
_(VL_API_QOS_MARK_DETAILS_REPLY, qos_mark_details_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_qos_api
#define included_qos_api
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

#ifndef _vl_api_defined_qos_source
#define _vl_api_defined_qos_source
typedef enum __attribute__((__packed__)) {
    QOS_API_SOURCE_EXT = 0,
    QOS_API_SOURCE_VLAN = 1,
    QOS_API_SOURCE_MPLS = 2,
    QOS_API_SOURCE_IP = 3,
} vl_api_qos_source_t;
STATIC_ASSERT(sizeof(vl_api_qos_source_t) == sizeof(u8), "size of API enum qos_source is wrong");
#endif

#ifndef _vl_api_defined_qos_store
#define _vl_api_defined_qos_store
typedef VL_API_PACKED(struct _vl_api_qos_store {
    u32 sw_if_index;
    vl_api_qos_source_t input_source;
    u8 value;
}) vl_api_qos_store_t;
#endif

#ifndef _vl_api_defined_qos_record
#define _vl_api_defined_qos_record
typedef VL_API_PACKED(struct _vl_api_qos_record {
    u32 sw_if_index;
    vl_api_qos_source_t input_source;
}) vl_api_qos_record_t;
#endif

#ifndef _vl_api_defined_qos_egress_map_row
#define _vl_api_defined_qos_egress_map_row
typedef VL_API_PACKED(struct _vl_api_qos_egress_map_row {
    u8 outputs[256];
}) vl_api_qos_egress_map_row_t;
#endif

#ifndef _vl_api_defined_qos_egress_map
#define _vl_api_defined_qos_egress_map
typedef VL_API_PACKED(struct _vl_api_qos_egress_map {
    u32 id;
    vl_api_qos_egress_map_row_t rows[4];
}) vl_api_qos_egress_map_t;
#endif

#ifndef _vl_api_defined_qos_mark
#define _vl_api_defined_qos_mark
typedef VL_API_PACKED(struct _vl_api_qos_mark {
    u32 sw_if_index;
    u32 map_id;
    vl_api_qos_source_t output_source;
}) vl_api_qos_mark_t;
#endif

#ifndef _vl_api_defined_qos_store_enable_disable
#define _vl_api_defined_qos_store_enable_disable
typedef VL_API_PACKED(struct _vl_api_qos_store_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable;
    vl_api_qos_store_t store;
}) vl_api_qos_store_enable_disable_t;
#endif

#ifndef _vl_api_defined_qos_store_enable_disable_reply
#define _vl_api_defined_qos_store_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_qos_store_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_qos_store_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_qos_store_dump
#define _vl_api_defined_qos_store_dump
typedef VL_API_PACKED(struct _vl_api_qos_store_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_qos_store_dump_t;
#endif

#ifndef _vl_api_defined_qos_store_details
#define _vl_api_defined_qos_store_details
typedef VL_API_PACKED(struct _vl_api_qos_store_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_qos_store_t store;
}) vl_api_qos_store_details_t;
#endif

#ifndef _vl_api_defined_qos_record_enable_disable
#define _vl_api_defined_qos_record_enable_disable
typedef VL_API_PACKED(struct _vl_api_qos_record_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable;
    vl_api_qos_record_t record;
}) vl_api_qos_record_enable_disable_t;
#endif

#ifndef _vl_api_defined_qos_record_enable_disable_reply
#define _vl_api_defined_qos_record_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_qos_record_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_qos_record_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_qos_record_dump
#define _vl_api_defined_qos_record_dump
typedef VL_API_PACKED(struct _vl_api_qos_record_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_qos_record_dump_t;
#endif

#ifndef _vl_api_defined_qos_record_details
#define _vl_api_defined_qos_record_details
typedef VL_API_PACKED(struct _vl_api_qos_record_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_qos_record_t record;
}) vl_api_qos_record_details_t;
#endif

#ifndef _vl_api_defined_qos_egress_map_update
#define _vl_api_defined_qos_egress_map_update
typedef VL_API_PACKED(struct _vl_api_qos_egress_map_update {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_qos_egress_map_t map;
}) vl_api_qos_egress_map_update_t;
#endif

#ifndef _vl_api_defined_qos_egress_map_update_reply
#define _vl_api_defined_qos_egress_map_update_reply
typedef VL_API_PACKED(struct _vl_api_qos_egress_map_update_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_qos_egress_map_update_reply_t;
#endif

#ifndef _vl_api_defined_qos_egress_map_delete
#define _vl_api_defined_qos_egress_map_delete
typedef VL_API_PACKED(struct _vl_api_qos_egress_map_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 id;
}) vl_api_qos_egress_map_delete_t;
#endif

#ifndef _vl_api_defined_qos_egress_map_delete_reply
#define _vl_api_defined_qos_egress_map_delete_reply
typedef VL_API_PACKED(struct _vl_api_qos_egress_map_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_qos_egress_map_delete_reply_t;
#endif

#ifndef _vl_api_defined_qos_egress_map_dump
#define _vl_api_defined_qos_egress_map_dump
typedef VL_API_PACKED(struct _vl_api_qos_egress_map_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_qos_egress_map_dump_t;
#endif

#ifndef _vl_api_defined_qos_egress_map_details
#define _vl_api_defined_qos_egress_map_details
typedef VL_API_PACKED(struct _vl_api_qos_egress_map_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_qos_egress_map_t map;
}) vl_api_qos_egress_map_details_t;
#endif

#ifndef _vl_api_defined_qos_mark_enable_disable
#define _vl_api_defined_qos_mark_enable_disable
typedef VL_API_PACKED(struct _vl_api_qos_mark_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable;
    vl_api_qos_mark_t mark;
}) vl_api_qos_mark_enable_disable_t;
#endif

#ifndef _vl_api_defined_qos_mark_enable_disable_reply
#define _vl_api_defined_qos_mark_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_qos_mark_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_qos_mark_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_qos_mark_dump
#define _vl_api_defined_qos_mark_dump
typedef VL_API_PACKED(struct _vl_api_qos_mark_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_qos_mark_dump_t;
#endif

#ifndef _vl_api_defined_qos_mark_details
#define _vl_api_defined_qos_mark_details
typedef VL_API_PACKED(struct _vl_api_qos_mark_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_qos_mark_t mark;
}) vl_api_qos_mark_details_t;
#endif

#ifndef _vl_api_defined_qos_mark_details_reply
#define _vl_api_defined_qos_mark_details_reply
typedef VL_API_PACKED(struct _vl_api_qos_mark_details_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_qos_mark_details_reply_t;
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

#ifndef _vl_api_defined_qos_store_t_print
#define _vl_api_defined_qos_store_t_print
static inline void *vl_api_qos_store_t_print (vl_api_qos_store_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_store_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "value: %u\n", a->value);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_record_t_print
#define _vl_api_defined_qos_record_t_print
static inline void *vl_api_qos_record_t_print (vl_api_qos_record_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_record_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_row_t_print
#define _vl_api_defined_qos_egress_map_row_t_print
static inline void *vl_api_qos_egress_map_row_t_print (vl_api_qos_egress_map_row_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_row_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_t_print
#define _vl_api_defined_qos_egress_map_t_print
static inline void *vl_api_qos_egress_map_t_print (vl_api_qos_egress_map_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_t:\n");
    vl_print(handle, "id: %u\n", a->id);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_mark_t_print
#define _vl_api_defined_qos_mark_t_print
static inline void *vl_api_qos_mark_t_print (vl_api_qos_mark_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_mark_t:\n");
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "map_id: %u\n", a->map_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_store_enable_disable_t_print
#define _vl_api_defined_qos_store_enable_disable_t_print
static inline void *vl_api_qos_store_enable_disable_t_print (vl_api_qos_store_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_store_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_store_enable_disable_reply_t_print
#define _vl_api_defined_qos_store_enable_disable_reply_t_print
static inline void *vl_api_qos_store_enable_disable_reply_t_print (vl_api_qos_store_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_store_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_store_dump_t_print
#define _vl_api_defined_qos_store_dump_t_print
static inline void *vl_api_qos_store_dump_t_print (vl_api_qos_store_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_store_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_store_details_t_print
#define _vl_api_defined_qos_store_details_t_print
static inline void *vl_api_qos_store_details_t_print (vl_api_qos_store_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_store_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_record_enable_disable_t_print
#define _vl_api_defined_qos_record_enable_disable_t_print
static inline void *vl_api_qos_record_enable_disable_t_print (vl_api_qos_record_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_record_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_record_enable_disable_reply_t_print
#define _vl_api_defined_qos_record_enable_disable_reply_t_print
static inline void *vl_api_qos_record_enable_disable_reply_t_print (vl_api_qos_record_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_record_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_record_dump_t_print
#define _vl_api_defined_qos_record_dump_t_print
static inline void *vl_api_qos_record_dump_t_print (vl_api_qos_record_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_record_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_record_details_t_print
#define _vl_api_defined_qos_record_details_t_print
static inline void *vl_api_qos_record_details_t_print (vl_api_qos_record_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_record_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_update_t_print
#define _vl_api_defined_qos_egress_map_update_t_print
static inline void *vl_api_qos_egress_map_update_t_print (vl_api_qos_egress_map_update_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_update_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_update_reply_t_print
#define _vl_api_defined_qos_egress_map_update_reply_t_print
static inline void *vl_api_qos_egress_map_update_reply_t_print (vl_api_qos_egress_map_update_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_update_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_delete_t_print
#define _vl_api_defined_qos_egress_map_delete_t_print
static inline void *vl_api_qos_egress_map_delete_t_print (vl_api_qos_egress_map_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_delete_reply_t_print
#define _vl_api_defined_qos_egress_map_delete_reply_t_print
static inline void *vl_api_qos_egress_map_delete_reply_t_print (vl_api_qos_egress_map_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_dump_t_print
#define _vl_api_defined_qos_egress_map_dump_t_print
static inline void *vl_api_qos_egress_map_dump_t_print (vl_api_qos_egress_map_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_egress_map_details_t_print
#define _vl_api_defined_qos_egress_map_details_t_print
static inline void *vl_api_qos_egress_map_details_t_print (vl_api_qos_egress_map_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_egress_map_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_mark_enable_disable_t_print
#define _vl_api_defined_qos_mark_enable_disable_t_print
static inline void *vl_api_qos_mark_enable_disable_t_print (vl_api_qos_mark_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_mark_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_mark_enable_disable_reply_t_print
#define _vl_api_defined_qos_mark_enable_disable_reply_t_print
static inline void *vl_api_qos_mark_enable_disable_reply_t_print (vl_api_qos_mark_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_mark_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_mark_dump_t_print
#define _vl_api_defined_qos_mark_dump_t_print
static inline void *vl_api_qos_mark_dump_t_print (vl_api_qos_mark_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_mark_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_mark_details_t_print
#define _vl_api_defined_qos_mark_details_t_print
static inline void *vl_api_qos_mark_details_t_print (vl_api_qos_mark_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_mark_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_qos_mark_details_reply_t_print
#define _vl_api_defined_qos_mark_details_reply_t_print
static inline void *vl_api_qos_mark_details_reply_t_print (vl_api_qos_mark_details_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_qos_mark_details_reply_t:\n");
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

#ifndef _vl_api_defined_qos_store_t_endian
#define _vl_api_defined_qos_store_t_endian
static inline void vl_api_qos_store_t_endian (vl_api_qos_store_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->input_source = a->input_source (no-op) */
    /* a->value = a->value (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_record_t_endian
#define _vl_api_defined_qos_record_t_endian
static inline void vl_api_qos_record_t_endian (vl_api_qos_record_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->input_source = a->input_source (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_egress_map_row_t_endian
#define _vl_api_defined_qos_egress_map_row_t_endian
static inline void vl_api_qos_egress_map_row_t_endian (vl_api_qos_egress_map_row_t *a)
{
}

#endif

#ifndef _vl_api_defined_qos_egress_map_t_endian
#define _vl_api_defined_qos_egress_map_t_endian
static inline void vl_api_qos_egress_map_t_endian (vl_api_qos_egress_map_t *a)
{
    a->id = clib_net_to_host_u32(a->id);
}

#endif

#ifndef _vl_api_defined_qos_mark_t_endian
#define _vl_api_defined_qos_mark_t_endian
static inline void vl_api_qos_mark_t_endian (vl_api_qos_mark_t *a)
{
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->map_id = clib_net_to_host_u32(a->map_id);
    /* a->output_source = a->output_source (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_store_enable_disable_t_endian
#define _vl_api_defined_qos_store_enable_disable_t_endian
static inline void vl_api_qos_store_enable_disable_t_endian (vl_api_qos_store_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    /* a->store = a->store (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_store_enable_disable_reply_t_endian
#define _vl_api_defined_qos_store_enable_disable_reply_t_endian
static inline void vl_api_qos_store_enable_disable_reply_t_endian (vl_api_qos_store_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_qos_store_dump_t_endian
#define _vl_api_defined_qos_store_dump_t_endian
static inline void vl_api_qos_store_dump_t_endian (vl_api_qos_store_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_qos_store_details_t_endian
#define _vl_api_defined_qos_store_details_t_endian
static inline void vl_api_qos_store_details_t_endian (vl_api_qos_store_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->store = a->store (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_record_enable_disable_t_endian
#define _vl_api_defined_qos_record_enable_disable_t_endian
static inline void vl_api_qos_record_enable_disable_t_endian (vl_api_qos_record_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    /* a->record = a->record (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_record_enable_disable_reply_t_endian
#define _vl_api_defined_qos_record_enable_disable_reply_t_endian
static inline void vl_api_qos_record_enable_disable_reply_t_endian (vl_api_qos_record_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_qos_record_dump_t_endian
#define _vl_api_defined_qos_record_dump_t_endian
static inline void vl_api_qos_record_dump_t_endian (vl_api_qos_record_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_qos_record_details_t_endian
#define _vl_api_defined_qos_record_details_t_endian
static inline void vl_api_qos_record_details_t_endian (vl_api_qos_record_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->record = a->record (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_egress_map_update_t_endian
#define _vl_api_defined_qos_egress_map_update_t_endian
static inline void vl_api_qos_egress_map_update_t_endian (vl_api_qos_egress_map_update_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->map = a->map (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_egress_map_update_reply_t_endian
#define _vl_api_defined_qos_egress_map_update_reply_t_endian
static inline void vl_api_qos_egress_map_update_reply_t_endian (vl_api_qos_egress_map_update_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_qos_egress_map_delete_t_endian
#define _vl_api_defined_qos_egress_map_delete_t_endian
static inline void vl_api_qos_egress_map_delete_t_endian (vl_api_qos_egress_map_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u32(a->id);
}

#endif

#ifndef _vl_api_defined_qos_egress_map_delete_reply_t_endian
#define _vl_api_defined_qos_egress_map_delete_reply_t_endian
static inline void vl_api_qos_egress_map_delete_reply_t_endian (vl_api_qos_egress_map_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_qos_egress_map_dump_t_endian
#define _vl_api_defined_qos_egress_map_dump_t_endian
static inline void vl_api_qos_egress_map_dump_t_endian (vl_api_qos_egress_map_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_qos_egress_map_details_t_endian
#define _vl_api_defined_qos_egress_map_details_t_endian
static inline void vl_api_qos_egress_map_details_t_endian (vl_api_qos_egress_map_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->map = a->map (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_mark_enable_disable_t_endian
#define _vl_api_defined_qos_mark_enable_disable_t_endian
static inline void vl_api_qos_mark_enable_disable_t_endian (vl_api_qos_mark_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
    /* a->mark = a->mark (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_mark_enable_disable_reply_t_endian
#define _vl_api_defined_qos_mark_enable_disable_reply_t_endian
static inline void vl_api_qos_mark_enable_disable_reply_t_endian (vl_api_qos_mark_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_qos_mark_dump_t_endian
#define _vl_api_defined_qos_mark_dump_t_endian
static inline void vl_api_qos_mark_dump_t_endian (vl_api_qos_mark_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_qos_mark_details_t_endian
#define _vl_api_defined_qos_mark_details_t_endian
static inline void vl_api_qos_mark_details_t_endian (vl_api_qos_mark_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->mark = a->mark (no-op) */
}

#endif

#ifndef _vl_api_defined_qos_mark_details_reply_t_endian
#define _vl_api_defined_qos_mark_details_reply_t_endian
static inline void vl_api_qos_mark_details_reply_t_endian (vl_api_qos_mark_details_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(qos.api, 1, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(qos.api, 0x8754a74e)

#endif

