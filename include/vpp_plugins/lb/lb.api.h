/*
 * VLIB API definitions 2020-06-13 05:57:58
 * Input file: lb.api
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
#warning no content included from lb.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_LB_CONF, vl_api_lb_conf_t_handler)
vl_msg_id(VL_API_LB_CONF_REPLY, vl_api_lb_conf_reply_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_VIP, vl_api_lb_add_del_vip_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_VIP_REPLY, vl_api_lb_add_del_vip_reply_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_AS, vl_api_lb_add_del_as_t_handler)
vl_msg_id(VL_API_LB_ADD_DEL_AS_REPLY, vl_api_lb_add_del_as_reply_t_handler)
vl_msg_id(VL_API_LB_FLUSH_VIP, vl_api_lb_flush_vip_t_handler)
vl_msg_id(VL_API_LB_FLUSH_VIP_REPLY, vl_api_lb_flush_vip_reply_t_handler)
vl_msg_id(VL_API_LB_VIP_DUMP, vl_api_lb_vip_dump_t_handler)
vl_msg_id(VL_API_LB_VIP_DETAILS, vl_api_lb_vip_details_t_handler)
vl_msg_id(VL_API_LB_AS_DUMP, vl_api_lb_as_dump_t_handler)
vl_msg_id(VL_API_LB_AS_DETAILS, vl_api_lb_as_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_lb_conf_t, 1)
vl_msg_name(vl_api_lb_conf_reply_t, 1)
vl_msg_name(vl_api_lb_add_del_vip_t, 1)
vl_msg_name(vl_api_lb_add_del_vip_reply_t, 1)
vl_msg_name(vl_api_lb_add_del_as_t, 1)
vl_msg_name(vl_api_lb_add_del_as_reply_t, 1)
vl_msg_name(vl_api_lb_flush_vip_t, 1)
vl_msg_name(vl_api_lb_flush_vip_reply_t, 1)
vl_msg_name(vl_api_lb_vip_dump_t, 1)
vl_msg_name(vl_api_lb_vip_details_t, 1)
vl_msg_name(vl_api_lb_as_dump_t, 1)
vl_msg_name(vl_api_lb_as_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lb \
_(VL_API_LB_CONF, lb_conf, 22ddb739) \
_(VL_API_LB_CONF_REPLY, lb_conf_reply, e8d4e804) \
_(VL_API_LB_ADD_DEL_VIP, lb_add_del_vip, d15b7ddc) \
_(VL_API_LB_ADD_DEL_VIP_REPLY, lb_add_del_vip_reply, e8d4e804) \
_(VL_API_LB_ADD_DEL_AS, lb_add_del_as, 78628987) \
_(VL_API_LB_ADD_DEL_AS_REPLY, lb_add_del_as_reply, e8d4e804) \
_(VL_API_LB_FLUSH_VIP, lb_flush_vip, 1063f819) \
_(VL_API_LB_FLUSH_VIP_REPLY, lb_flush_vip_reply, e8d4e804) \
_(VL_API_LB_VIP_DUMP, lb_vip_dump, c7bcb124) \
_(VL_API_LB_VIP_DETAILS, lb_vip_details, 08f39bed) \
_(VL_API_LB_AS_DUMP, lb_as_dump, 1063f819) \
_(VL_API_LB_AS_DETAILS, lb_as_details, 9c39f60e) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_lb_api
#define included_lb_api
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

#ifndef _vl_api_defined_lb_srv_type
#define _vl_api_defined_lb_srv_type
typedef enum {
    LB_API_SRV_TYPE_CLUSTERIP = 0,
    LB_API_SRV_TYPE_NODEPORT = 1,
    LB_API_SRV_N_TYPES = 2,
} vl_api_lb_srv_type_t;
#endif

#ifndef _vl_api_defined_lb_encap_type
#define _vl_api_defined_lb_encap_type
typedef enum {
    LB_API_ENCAP_TYPE_GRE4 = 0,
    LB_API_ENCAP_TYPE_GRE6 = 1,
    LB_API_ENCAP_TYPE_L3DSR = 2,
    LB_API_ENCAP_TYPE_NAT4 = 3,
    LB_API_ENCAP_TYPE_NAT6 = 4,
    LB_API_ENCAP_N_TYPES = 5,
} vl_api_lb_encap_type_t;
#endif

#ifndef _vl_api_defined_lb_lkp_type_t
#define _vl_api_defined_lb_lkp_type_t
typedef enum {
    LB_API_LKP_SAME_IP_PORT = 0,
    LB_API_LKP_DIFF_IP_PORT = 1,
    LB_API_LKP_ALL_PORT_IP = 2,
    LB_API_LKP_N_TYPES = 3,
} vl_api_lb_lkp_type_t_t;
#endif

#ifndef _vl_api_defined_lb_vip_type
#define _vl_api_defined_lb_vip_type
typedef enum {
    LB_API_VIP_TYPE_IP6_GRE6 = 0,
    LB_API_VIP_TYPE_IP6_GRE4 = 1,
    LB_API_VIP_TYPE_IP4_GRE6 = 2,
    LB_API_VIP_TYPE_IP4_GRE4 = 3,
    LB_API_VIP_TYPE_IP4_L3DSR = 4,
    LB_API_VIP_TYPE_IP4_NAT4 = 5,
    LB_API_VIP_TYPE_IP6_NAT6 = 6,
    LB_API_VIP_N_TYPES = 7,
} vl_api_lb_vip_type_t;
#endif

#ifndef _vl_api_defined_lb_nat_protocol
#define _vl_api_defined_lb_nat_protocol
typedef enum {
    LB_API_NAT_PROTOCOL_UDP = 6,
    LB_API_NAT_PROTOCOL_TCP = 23,
    LB_API_NAT_PROTOCOL_ANY = 4294967295,
} vl_api_lb_nat_protocol_t;
#endif

#ifndef _vl_api_defined_lb_vip
#define _vl_api_defined_lb_vip
typedef VL_API_PACKED(struct _vl_api_lb_vip {
    vl_api_address_with_prefix_t pfx;
    vl_api_ip_proto_t protocol;
    u16 port;
}) vl_api_lb_vip_t;
#endif

#ifndef _vl_api_defined_lb_conf
#define _vl_api_defined_lb_conf
typedef VL_API_PACKED(struct _vl_api_lb_conf {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ip4_address_t ip4_src_address;
    vl_api_ip6_address_t ip6_src_address;
    u32 sticky_buckets_per_core;
    u32 flow_timeout;
}) vl_api_lb_conf_t;
#endif

#ifndef _vl_api_defined_lb_conf_reply
#define _vl_api_defined_lb_conf_reply
typedef VL_API_PACKED(struct _vl_api_lb_conf_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_lb_conf_reply_t;
#endif

#ifndef _vl_api_defined_lb_add_del_vip
#define _vl_api_defined_lb_add_del_vip
typedef VL_API_PACKED(struct _vl_api_lb_add_del_vip {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
    vl_api_lb_encap_type_t encap;
    u8 dscp;
    vl_api_lb_srv_type_t type;
    u16 target_port;
    u16 node_port;
    u32 new_flows_table_length;
    bool is_del;
}) vl_api_lb_add_del_vip_t;
#endif

#ifndef _vl_api_defined_lb_add_del_vip_reply
#define _vl_api_defined_lb_add_del_vip_reply
typedef VL_API_PACKED(struct _vl_api_lb_add_del_vip_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_lb_add_del_vip_reply_t;
#endif

#ifndef _vl_api_defined_lb_add_del_as
#define _vl_api_defined_lb_add_del_as
typedef VL_API_PACKED(struct _vl_api_lb_add_del_as {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
    vl_api_address_t as_address;
    bool is_del;
    bool is_flush;
}) vl_api_lb_add_del_as_t;
#endif

#ifndef _vl_api_defined_lb_add_del_as_reply
#define _vl_api_defined_lb_add_del_as_reply
typedef VL_API_PACKED(struct _vl_api_lb_add_del_as_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_lb_add_del_as_reply_t;
#endif

#ifndef _vl_api_defined_lb_flush_vip
#define _vl_api_defined_lb_flush_vip
typedef VL_API_PACKED(struct _vl_api_lb_flush_vip {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
}) vl_api_lb_flush_vip_t;
#endif

#ifndef _vl_api_defined_lb_flush_vip_reply
#define _vl_api_defined_lb_flush_vip_reply
typedef VL_API_PACKED(struct _vl_api_lb_flush_vip_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_lb_flush_vip_reply_t;
#endif

#ifndef _vl_api_defined_lb_vip_dump
#define _vl_api_defined_lb_vip_dump
typedef VL_API_PACKED(struct _vl_api_lb_vip_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    vl_api_prefix_matcher_t pfx_matcher;
    u8 protocol;
    u16 port;
}) vl_api_lb_vip_dump_t;
#endif

#ifndef _vl_api_defined_lb_vip_details
#define _vl_api_defined_lb_vip_details
typedef VL_API_PACKED(struct _vl_api_lb_vip_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_lb_vip_t vip;
    vl_api_lb_encap_type_t encap;
    vl_api_ip_dscp_t dscp;
    vl_api_lb_srv_type_t srv_type;
    u16 target_port;
    u16 flow_table_length;
}) vl_api_lb_vip_details_t;
#endif

#ifndef _vl_api_defined_lb_as_dump
#define _vl_api_defined_lb_as_dump
typedef VL_API_PACKED(struct _vl_api_lb_as_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_address_with_prefix_t pfx;
    u8 protocol;
    u16 port;
}) vl_api_lb_as_dump_t;
#endif

#ifndef _vl_api_defined_lb_as_details
#define _vl_api_defined_lb_as_details
typedef VL_API_PACKED(struct _vl_api_lb_as_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_lb_vip_t vip;
    vl_api_address_t app_srv;
    u8 flags;
    u32 in_use_since;
}) vl_api_lb_as_details_t;
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

#ifndef _vl_api_defined_lb_vip_t_print
#define _vl_api_defined_lb_vip_t_print
static inline void *vl_api_lb_vip_t_print (vl_api_lb_vip_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_vip_t:\n");
    vl_print(handle, "port: %u\n", a->port);
    return handle;
}

#endif

/***** manual: vl_api_lb_conf_t_print  *****/

#ifndef _vl_api_defined_lb_conf_reply_t_print
#define _vl_api_defined_lb_conf_reply_t_print
static inline void *vl_api_lb_conf_reply_t_print (vl_api_lb_conf_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_conf_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_lb_add_del_vip_t_print  *****/

#ifndef _vl_api_defined_lb_add_del_vip_reply_t_print
#define _vl_api_defined_lb_add_del_vip_reply_t_print
static inline void *vl_api_lb_add_del_vip_reply_t_print (vl_api_lb_add_del_vip_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_add_del_vip_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_lb_add_del_as_t_print  *****/

#ifndef _vl_api_defined_lb_add_del_as_reply_t_print
#define _vl_api_defined_lb_add_del_as_reply_t_print
static inline void *vl_api_lb_add_del_as_reply_t_print (vl_api_lb_add_del_as_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_add_del_as_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_lb_flush_vip_t_print  *****/

#ifndef _vl_api_defined_lb_flush_vip_reply_t_print
#define _vl_api_defined_lb_flush_vip_reply_t_print
static inline void *vl_api_lb_flush_vip_reply_t_print (vl_api_lb_flush_vip_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_flush_vip_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_lb_vip_dump_t_print
#define _vl_api_defined_lb_vip_dump_t_print
static inline void *vl_api_lb_vip_dump_t_print (vl_api_lb_vip_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_vip_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "port: %u\n", a->port);
    return handle;
}

#endif

#ifndef _vl_api_defined_lb_vip_details_t_print
#define _vl_api_defined_lb_vip_details_t_print
static inline void *vl_api_lb_vip_details_t_print (vl_api_lb_vip_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_vip_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "target_port: %u\n", a->target_port);
    vl_print(handle, "flow_table_length: %u\n", a->flow_table_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_lb_as_dump_t_print
#define _vl_api_defined_lb_as_dump_t_print
static inline void *vl_api_lb_as_dump_t_print (vl_api_lb_as_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_as_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "protocol: %u\n", a->protocol);
    vl_print(handle, "port: %u\n", a->port);
    return handle;
}

#endif

#ifndef _vl_api_defined_lb_as_details_t_print
#define _vl_api_defined_lb_as_details_t_print
static inline void *vl_api_lb_as_details_t_print (vl_api_lb_as_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_lb_as_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "flags: %u\n", a->flags);
    vl_print(handle, "in_use_since: %u\n", a->in_use_since);
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

#ifndef _vl_api_defined_lb_vip_t_endian
#define _vl_api_defined_lb_vip_t_endian
static inline void vl_api_lb_vip_t_endian (vl_api_lb_vip_t *a)
{
    /* a->pfx = a->pfx (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

#endif

#ifndef _vl_api_defined_lb_conf_t_endian
#define _vl_api_defined_lb_conf_t_endian
static inline void vl_api_lb_conf_t_endian (vl_api_lb_conf_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->ip4_src_address = a->ip4_src_address (no-op) */
    /* a->ip6_src_address = a->ip6_src_address (no-op) */
    a->sticky_buckets_per_core = clib_net_to_host_u32(a->sticky_buckets_per_core);
    a->flow_timeout = clib_net_to_host_u32(a->flow_timeout);
}

#endif

#ifndef _vl_api_defined_lb_conf_reply_t_endian
#define _vl_api_defined_lb_conf_reply_t_endian
static inline void vl_api_lb_conf_reply_t_endian (vl_api_lb_conf_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_lb_add_del_vip_t_endian
#define _vl_api_defined_lb_add_del_vip_t_endian
static inline void vl_api_lb_add_del_vip_t_endian (vl_api_lb_add_del_vip_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->pfx = a->pfx (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    /* a->encap = a->encap (no-op) */
    /* a->dscp = a->dscp (no-op) */
    /* a->type = a->type (no-op) */
    a->target_port = clib_net_to_host_u16(a->target_port);
    a->node_port = clib_net_to_host_u16(a->node_port);
    a->new_flows_table_length = clib_net_to_host_u32(a->new_flows_table_length);
    /* a->is_del = a->is_del (no-op) */
}

#endif

#ifndef _vl_api_defined_lb_add_del_vip_reply_t_endian
#define _vl_api_defined_lb_add_del_vip_reply_t_endian
static inline void vl_api_lb_add_del_vip_reply_t_endian (vl_api_lb_add_del_vip_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_lb_add_del_as_t_endian
#define _vl_api_defined_lb_add_del_as_t_endian
static inline void vl_api_lb_add_del_as_t_endian (vl_api_lb_add_del_as_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->pfx = a->pfx (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    /* a->as_address = a->as_address (no-op) */
    /* a->is_del = a->is_del (no-op) */
    /* a->is_flush = a->is_flush (no-op) */
}

#endif

#ifndef _vl_api_defined_lb_add_del_as_reply_t_endian
#define _vl_api_defined_lb_add_del_as_reply_t_endian
static inline void vl_api_lb_add_del_as_reply_t_endian (vl_api_lb_add_del_as_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_lb_flush_vip_t_endian
#define _vl_api_defined_lb_flush_vip_t_endian
static inline void vl_api_lb_flush_vip_t_endian (vl_api_lb_flush_vip_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->pfx = a->pfx (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

#endif

#ifndef _vl_api_defined_lb_flush_vip_reply_t_endian
#define _vl_api_defined_lb_flush_vip_reply_t_endian
static inline void vl_api_lb_flush_vip_reply_t_endian (vl_api_lb_flush_vip_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_lb_vip_dump_t_endian
#define _vl_api_defined_lb_vip_dump_t_endian
static inline void vl_api_lb_vip_dump_t_endian (vl_api_lb_vip_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->pfx = a->pfx (no-op) */
    /* a->pfx_matcher = a->pfx_matcher (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

#endif

#ifndef _vl_api_defined_lb_vip_details_t_endian
#define _vl_api_defined_lb_vip_details_t_endian
static inline void vl_api_lb_vip_details_t_endian (vl_api_lb_vip_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->vip = a->vip (no-op) */
    /* a->encap = a->encap (no-op) */
    /* a->dscp = a->dscp (no-op) */
    /* a->srv_type = a->srv_type (no-op) */
    a->target_port = clib_net_to_host_u16(a->target_port);
    a->flow_table_length = clib_net_to_host_u16(a->flow_table_length);
}

#endif

#ifndef _vl_api_defined_lb_as_dump_t_endian
#define _vl_api_defined_lb_as_dump_t_endian
static inline void vl_api_lb_as_dump_t_endian (vl_api_lb_as_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->pfx = a->pfx (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

#endif

#ifndef _vl_api_defined_lb_as_details_t_endian
#define _vl_api_defined_lb_as_details_t_endian
static inline void vl_api_lb_as_details_t_endian (vl_api_lb_as_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->vip = a->vip (no-op) */
    /* a->app_srv = a->app_srv (no-op) */
    /* a->flags = a->flags (no-op) */
    a->in_use_since = clib_net_to_host_u32(a->in_use_since);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(lb.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lb.api, 0x5a2437c3)

#endif

