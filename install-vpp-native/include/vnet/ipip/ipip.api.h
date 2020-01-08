/*
 * VLIB API definitions 2020-01-07 14:20:11
 * Input file: ipip.api
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
#warning no content included from ipip.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IPIP_ADD_TUNNEL, vl_api_ipip_add_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_ADD_TUNNEL_REPLY, vl_api_ipip_add_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_DEL_TUNNEL, vl_api_ipip_del_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_DEL_TUNNEL_REPLY, vl_api_ipip_del_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_6RD_ADD_TUNNEL, vl_api_ipip_6rd_add_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_6RD_ADD_TUNNEL_REPLY, vl_api_ipip_6rd_add_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_6RD_DEL_TUNNEL, vl_api_ipip_6rd_del_tunnel_t_handler)
vl_msg_id(VL_API_IPIP_6RD_DEL_TUNNEL_REPLY, vl_api_ipip_6rd_del_tunnel_reply_t_handler)
vl_msg_id(VL_API_IPIP_TUNNEL_DUMP, vl_api_ipip_tunnel_dump_t_handler)
vl_msg_id(VL_API_IPIP_TUNNEL_DETAILS, vl_api_ipip_tunnel_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ipip_add_tunnel_t, 1)
vl_msg_name(vl_api_ipip_add_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_del_tunnel_t, 1)
vl_msg_name(vl_api_ipip_del_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_6rd_add_tunnel_t, 1)
vl_msg_name(vl_api_ipip_6rd_add_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_6rd_del_tunnel_t, 1)
vl_msg_name(vl_api_ipip_6rd_del_tunnel_reply_t, 1)
vl_msg_name(vl_api_ipip_tunnel_dump_t, 1)
vl_msg_name(vl_api_ipip_tunnel_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ipip \
_(VL_API_IPIP_ADD_TUNNEL, ipip_add_tunnel, 3a82fd98) \
_(VL_API_IPIP_ADD_TUNNEL_REPLY, ipip_add_tunnel_reply, 903324db) \
_(VL_API_IPIP_DEL_TUNNEL, ipip_del_tunnel, d85aab0d) \
_(VL_API_IPIP_DEL_TUNNEL_REPLY, ipip_del_tunnel_reply, e8d4e804) \
_(VL_API_IPIP_6RD_ADD_TUNNEL, ipip_6rd_add_tunnel, 98df11ca) \
_(VL_API_IPIP_6RD_ADD_TUNNEL_REPLY, ipip_6rd_add_tunnel_reply, 903324db) \
_(VL_API_IPIP_6RD_DEL_TUNNEL, ipip_6rd_del_tunnel, d85aab0d) \
_(VL_API_IPIP_6RD_DEL_TUNNEL_REPLY, ipip_6rd_del_tunnel_reply, e8d4e804) \
_(VL_API_IPIP_TUNNEL_DUMP, ipip_tunnel_dump, d85aab0d) \
_(VL_API_IPIP_TUNNEL_DETAILS, ipip_tunnel_details, 67f720e6) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_ipip_api
#define included_ipip_api
#ifndef _vl_api_defined_ip6_address
#define _vl_api_defined_ip6_address
typedef u8 vl_api_ip6_address_t[16];
#endif

#ifndef _vl_api_defined_ip4_address
#define _vl_api_defined_ip4_address
typedef u8 vl_api_ip4_address_t[4];
#endif

#ifndef _vl_api_defined_interface_index
#define _vl_api_defined_interface_index
typedef u32 vl_api_interface_index_t;
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

#ifndef _vl_api_defined_ipip_tunnel
#define _vl_api_defined_ipip_tunnel
typedef VL_API_PACKED(struct _vl_api_ipip_tunnel {
    u32 instance;
    vl_api_address_t src;
    vl_api_address_t dst;
    vl_api_interface_index_t sw_if_index;
    u32 table_id;
    u8 tc_tos;
}) vl_api_ipip_tunnel_t;
#endif

#ifndef _vl_api_defined_ipip_add_tunnel
#define _vl_api_defined_ipip_add_tunnel
typedef VL_API_PACKED(struct _vl_api_ipip_add_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_ipip_tunnel_t tunnel;
}) vl_api_ipip_add_tunnel_t;
#endif

#ifndef _vl_api_defined_ipip_add_tunnel_reply
#define _vl_api_defined_ipip_add_tunnel_reply
typedef VL_API_PACKED(struct _vl_api_ipip_add_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
}) vl_api_ipip_add_tunnel_reply_t;
#endif

#ifndef _vl_api_defined_ipip_del_tunnel
#define _vl_api_defined_ipip_del_tunnel
typedef VL_API_PACKED(struct _vl_api_ipip_del_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
}) vl_api_ipip_del_tunnel_t;
#endif

#ifndef _vl_api_defined_ipip_del_tunnel_reply
#define _vl_api_defined_ipip_del_tunnel_reply
typedef VL_API_PACKED(struct _vl_api_ipip_del_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipip_del_tunnel_reply_t;
#endif

#ifndef _vl_api_defined_ipip_6rd_add_tunnel
#define _vl_api_defined_ipip_6rd_add_tunnel
typedef VL_API_PACKED(struct _vl_api_ipip_6rd_add_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 ip6_table_id;
    u32 ip4_table_id;
    vl_api_ip6_prefix_t ip6_prefix;
    vl_api_ip4_prefix_t ip4_prefix;
    vl_api_ip4_address_t ip4_src;
    bool security_check;
    u8 tc_tos;
}) vl_api_ipip_6rd_add_tunnel_t;
#endif

#ifndef _vl_api_defined_ipip_6rd_add_tunnel_reply
#define _vl_api_defined_ipip_6rd_add_tunnel_reply
typedef VL_API_PACKED(struct _vl_api_ipip_6rd_add_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    vl_api_interface_index_t sw_if_index;
}) vl_api_ipip_6rd_add_tunnel_reply_t;
#endif

#ifndef _vl_api_defined_ipip_6rd_del_tunnel
#define _vl_api_defined_ipip_6rd_del_tunnel
typedef VL_API_PACKED(struct _vl_api_ipip_6rd_del_tunnel {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
}) vl_api_ipip_6rd_del_tunnel_t;
#endif

#ifndef _vl_api_defined_ipip_6rd_del_tunnel_reply
#define _vl_api_defined_ipip_6rd_del_tunnel_reply
typedef VL_API_PACKED(struct _vl_api_ipip_6rd_del_tunnel_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipip_6rd_del_tunnel_reply_t;
#endif

#ifndef _vl_api_defined_ipip_tunnel_dump
#define _vl_api_defined_ipip_tunnel_dump
typedef VL_API_PACKED(struct _vl_api_ipip_tunnel_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_interface_index_t sw_if_index;
}) vl_api_ipip_tunnel_dump_t;
#endif

#ifndef _vl_api_defined_ipip_tunnel_details
#define _vl_api_defined_ipip_tunnel_details
typedef VL_API_PACKED(struct _vl_api_ipip_tunnel_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_ipip_tunnel_t tunnel;
}) vl_api_ipip_tunnel_details_t;
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

#ifndef _vl_api_defined_ipip_tunnel_t_print
#define _vl_api_defined_ipip_tunnel_t_print
static inline void *vl_api_ipip_tunnel_t_print (vl_api_ipip_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_tunnel_t:\n");
    vl_print(handle, "instance: %u\n", a->instance);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "tc_tos: %u\n", a->tc_tos);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_add_tunnel_t_print
#define _vl_api_defined_ipip_add_tunnel_t_print
static inline void *vl_api_ipip_add_tunnel_t_print (vl_api_ipip_add_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_add_tunnel_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_add_tunnel_reply_t_print
#define _vl_api_defined_ipip_add_tunnel_reply_t_print
static inline void *vl_api_ipip_add_tunnel_reply_t_print (vl_api_ipip_add_tunnel_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_add_tunnel_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_del_tunnel_t_print
#define _vl_api_defined_ipip_del_tunnel_t_print
static inline void *vl_api_ipip_del_tunnel_t_print (vl_api_ipip_del_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_del_tunnel_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_del_tunnel_reply_t_print
#define _vl_api_defined_ipip_del_tunnel_reply_t_print
static inline void *vl_api_ipip_del_tunnel_reply_t_print (vl_api_ipip_del_tunnel_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_del_tunnel_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_6rd_add_tunnel_t_print
#define _vl_api_defined_ipip_6rd_add_tunnel_t_print
static inline void *vl_api_ipip_6rd_add_tunnel_t_print (vl_api_ipip_6rd_add_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_6rd_add_tunnel_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ip6_table_id: %u\n", a->ip6_table_id);
    vl_print(handle, "ip4_table_id: %u\n", a->ip4_table_id);
    vl_print(handle, "tc_tos: %u\n", a->tc_tos);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_6rd_add_tunnel_reply_t_print
#define _vl_api_defined_ipip_6rd_add_tunnel_reply_t_print
static inline void *vl_api_ipip_6rd_add_tunnel_reply_t_print (vl_api_ipip_6rd_add_tunnel_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_6rd_add_tunnel_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_6rd_del_tunnel_t_print
#define _vl_api_defined_ipip_6rd_del_tunnel_t_print
static inline void *vl_api_ipip_6rd_del_tunnel_t_print (vl_api_ipip_6rd_del_tunnel_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_6rd_del_tunnel_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_6rd_del_tunnel_reply_t_print
#define _vl_api_defined_ipip_6rd_del_tunnel_reply_t_print
static inline void *vl_api_ipip_6rd_del_tunnel_reply_t_print (vl_api_ipip_6rd_del_tunnel_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_6rd_del_tunnel_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_tunnel_dump_t_print
#define _vl_api_defined_ipip_tunnel_dump_t_print
static inline void *vl_api_ipip_tunnel_dump_t_print (vl_api_ipip_tunnel_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_tunnel_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipip_tunnel_details_t_print
#define _vl_api_defined_ipip_tunnel_details_t_print
static inline void *vl_api_ipip_tunnel_details_t_print (vl_api_ipip_tunnel_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipip_tunnel_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
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

#ifndef _vl_api_defined_ipip_tunnel_t_endian
#define _vl_api_defined_ipip_tunnel_t_endian
static inline void vl_api_ipip_tunnel_t_endian (vl_api_ipip_tunnel_t *a)
{
    a->instance = clib_net_to_host_u32(a->instance);
    /* a->src = a->src (no-op) */
    /* a->dst = a->dst (no-op) */
    /* a->sw_if_index = a->sw_if_index (no-op) */
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->tc_tos = a->tc_tos (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_add_tunnel_t_endian
#define _vl_api_defined_ipip_add_tunnel_t_endian
static inline void vl_api_ipip_add_tunnel_t_endian (vl_api_ipip_add_tunnel_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->tunnel = a->tunnel (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_add_tunnel_reply_t_endian
#define _vl_api_defined_ipip_add_tunnel_reply_t_endian
static inline void vl_api_ipip_add_tunnel_reply_t_endian (vl_api_ipip_add_tunnel_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_del_tunnel_t_endian
#define _vl_api_defined_ipip_del_tunnel_t_endian
static inline void vl_api_ipip_del_tunnel_t_endian (vl_api_ipip_del_tunnel_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_del_tunnel_reply_t_endian
#define _vl_api_defined_ipip_del_tunnel_reply_t_endian
static inline void vl_api_ipip_del_tunnel_reply_t_endian (vl_api_ipip_del_tunnel_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipip_6rd_add_tunnel_t_endian
#define _vl_api_defined_ipip_6rd_add_tunnel_t_endian
static inline void vl_api_ipip_6rd_add_tunnel_t_endian (vl_api_ipip_6rd_add_tunnel_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->ip6_table_id = clib_net_to_host_u32(a->ip6_table_id);
    a->ip4_table_id = clib_net_to_host_u32(a->ip4_table_id);
    /* a->ip6_prefix = a->ip6_prefix (no-op) */
    /* a->ip4_prefix = a->ip4_prefix (no-op) */
    /* a->ip4_src = a->ip4_src (no-op) */
    /* a->security_check = a->security_check (no-op) */
    /* a->tc_tos = a->tc_tos (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_6rd_add_tunnel_reply_t_endian
#define _vl_api_defined_ipip_6rd_add_tunnel_reply_t_endian
static inline void vl_api_ipip_6rd_add_tunnel_reply_t_endian (vl_api_ipip_6rd_add_tunnel_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_6rd_del_tunnel_t_endian
#define _vl_api_defined_ipip_6rd_del_tunnel_t_endian
static inline void vl_api_ipip_6rd_del_tunnel_t_endian (vl_api_ipip_6rd_del_tunnel_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_6rd_del_tunnel_reply_t_endian
#define _vl_api_defined_ipip_6rd_del_tunnel_reply_t_endian
static inline void vl_api_ipip_6rd_del_tunnel_reply_t_endian (vl_api_ipip_6rd_del_tunnel_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipip_tunnel_dump_t_endian
#define _vl_api_defined_ipip_tunnel_dump_t_endian
static inline void vl_api_ipip_tunnel_dump_t_endian (vl_api_ipip_tunnel_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
}

#endif

#ifndef _vl_api_defined_ipip_tunnel_details_t_endian
#define _vl_api_defined_ipip_tunnel_details_t_endian
static inline void vl_api_ipip_tunnel_details_t_endian (vl_api_ipip_tunnel_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->tunnel = a->tunnel (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ipip.api, 1, 2, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ipip.api, 0x45442869)

#endif

