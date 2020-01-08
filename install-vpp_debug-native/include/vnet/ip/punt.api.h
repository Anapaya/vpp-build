/*
 * VLIB API definitions 2020-01-07 14:25:06
 * Input file: punt.api
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
#warning no content included from punt.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SET_PUNT, vl_api_set_punt_t_handler)
vl_msg_id(VL_API_SET_PUNT_REPLY, vl_api_set_punt_reply_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_REGISTER, vl_api_punt_socket_register_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_REGISTER_REPLY, vl_api_punt_socket_register_reply_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DUMP, vl_api_punt_socket_dump_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DETAILS, vl_api_punt_socket_details_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DEREGISTER, vl_api_punt_socket_deregister_t_handler)
vl_msg_id(VL_API_PUNT_SOCKET_DEREGISTER_REPLY, vl_api_punt_socket_deregister_reply_t_handler)
vl_msg_id(VL_API_PUNT_REASON_DUMP, vl_api_punt_reason_dump_t_handler)
vl_msg_id(VL_API_PUNT_REASON_DETAILS, vl_api_punt_reason_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_set_punt_t, 1)
vl_msg_name(vl_api_set_punt_reply_t, 1)
vl_msg_name(vl_api_punt_socket_register_t, 1)
vl_msg_name(vl_api_punt_socket_register_reply_t, 1)
vl_msg_name(vl_api_punt_socket_dump_t, 1)
vl_msg_name(vl_api_punt_socket_details_t, 1)
vl_msg_name(vl_api_punt_socket_deregister_t, 1)
vl_msg_name(vl_api_punt_socket_deregister_reply_t, 1)
vl_msg_name(vl_api_punt_reason_dump_t, 1)
vl_msg_name(vl_api_punt_reason_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_punt \
_(VL_API_SET_PUNT, set_punt, 032a42ef) \
_(VL_API_SET_PUNT_REPLY, set_punt_reply, e8d4e804) \
_(VL_API_PUNT_SOCKET_REGISTER, punt_socket_register, ddc0d8e0) \
_(VL_API_PUNT_SOCKET_REGISTER_REPLY, punt_socket_register_reply, 42dc0ee6) \
_(VL_API_PUNT_SOCKET_DUMP, punt_socket_dump, 52974935) \
_(VL_API_PUNT_SOCKET_DETAILS, punt_socket_details, 25100aad) \
_(VL_API_PUNT_SOCKET_DEREGISTER, punt_socket_deregister, 98a444f4) \
_(VL_API_PUNT_SOCKET_DEREGISTER_REPLY, punt_socket_deregister_reply, e8d4e804) \
_(VL_API_PUNT_REASON_DUMP, punt_reason_dump, bf8f10da) \
_(VL_API_PUNT_REASON_DETAILS, punt_reason_details, aa3dd9e5) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_punt_api
#define included_punt_api
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

#ifndef _vl_api_defined_punt_type
#define _vl_api_defined_punt_type
typedef enum {
    PUNT_API_TYPE_L4 = 1,
    PUNT_API_TYPE_IP_PROTO = 2,
    PUNT_API_TYPE_EXCEPTION = 3,
} vl_api_punt_type_t;
#endif

#ifndef _vl_api_defined_punt_l4
#define _vl_api_defined_punt_l4
typedef VL_API_PACKED(struct _vl_api_punt_l4 {
    vl_api_address_family_t af;
    vl_api_ip_proto_t protocol;
    u16 port;
}) vl_api_punt_l4_t;
#endif

#ifndef _vl_api_defined_punt_ip_proto
#define _vl_api_defined_punt_ip_proto
typedef VL_API_PACKED(struct _vl_api_punt_ip_proto {
    vl_api_address_family_t af;
    vl_api_ip_proto_t protocol;
}) vl_api_punt_ip_proto_t;
#endif

#ifndef _vl_api_defined_punt_exception
#define _vl_api_defined_punt_exception
typedef VL_API_PACKED(struct _vl_api_punt_exception {
    u32 id;
}) vl_api_punt_exception_t;
#endif

#ifndef _vl_api_defined_punt_union
#define _vl_api_defined_punt_union
typedef VL_API_PACKED(union _vl_api_punt_union {
    vl_api_punt_exception_t exception;
    vl_api_punt_l4_t l4;
    vl_api_punt_ip_proto_t ip_proto;
}) vl_api_punt_union_t;
#endif

#ifndef _vl_api_defined_punt
#define _vl_api_defined_punt
typedef VL_API_PACKED(struct _vl_api_punt {
    vl_api_punt_type_t type;
    vl_api_punt_union_t punt;
}) vl_api_punt_t;
#endif

#ifndef _vl_api_defined_punt_reason
#define _vl_api_defined_punt_reason
typedef VL_API_PACKED(struct _vl_api_punt_reason {
    u32 id;
    vl_api_string_t name;
}) vl_api_punt_reason_t;
#endif

#ifndef _vl_api_defined_set_punt
#define _vl_api_defined_set_punt
typedef VL_API_PACKED(struct _vl_api_set_punt {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    vl_api_punt_t punt;
}) vl_api_set_punt_t;
#endif

#ifndef _vl_api_defined_set_punt_reply
#define _vl_api_defined_set_punt_reply
typedef VL_API_PACKED(struct _vl_api_set_punt_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_set_punt_reply_t;
#endif

#ifndef _vl_api_defined_punt_socket_register
#define _vl_api_defined_punt_socket_register
typedef VL_API_PACKED(struct _vl_api_punt_socket_register {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 header_version;
    vl_api_punt_t punt;
    u8 pathname[108];
}) vl_api_punt_socket_register_t;
#endif

#ifndef _vl_api_defined_punt_socket_register_reply
#define _vl_api_defined_punt_socket_register_reply
typedef VL_API_PACKED(struct _vl_api_punt_socket_register_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 pathname[64];
}) vl_api_punt_socket_register_reply_t;
#endif

#ifndef _vl_api_defined_punt_socket_dump
#define _vl_api_defined_punt_socket_dump
typedef VL_API_PACKED(struct _vl_api_punt_socket_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_type_t type;
}) vl_api_punt_socket_dump_t;
#endif

#ifndef _vl_api_defined_punt_socket_details
#define _vl_api_defined_punt_socket_details
typedef VL_API_PACKED(struct _vl_api_punt_socket_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_punt_t punt;
    u8 pathname[108];
}) vl_api_punt_socket_details_t;
#endif

#ifndef _vl_api_defined_punt_socket_deregister
#define _vl_api_defined_punt_socket_deregister
typedef VL_API_PACKED(struct _vl_api_punt_socket_deregister {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_t punt;
}) vl_api_punt_socket_deregister_t;
#endif

#ifndef _vl_api_defined_punt_socket_deregister_reply
#define _vl_api_defined_punt_socket_deregister_reply
typedef VL_API_PACKED(struct _vl_api_punt_socket_deregister_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_punt_socket_deregister_reply_t;
#endif

#ifndef _vl_api_defined_punt_reason_dump
#define _vl_api_defined_punt_reason_dump
typedef VL_API_PACKED(struct _vl_api_punt_reason_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_punt_reason_t reason;
}) vl_api_punt_reason_dump_t;
#endif

#ifndef _vl_api_defined_punt_reason_details
#define _vl_api_defined_punt_reason_details
typedef VL_API_PACKED(struct _vl_api_punt_reason_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_punt_reason_t reason;
}) vl_api_punt_reason_details_t;
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

#ifndef _vl_api_defined_punt_l4_t_print
#define _vl_api_defined_punt_l4_t_print
static inline void *vl_api_punt_l4_t_print (vl_api_punt_l4_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_l4_t:\n");
    vl_print(handle, "port: %u\n", a->port);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_ip_proto_t_print
#define _vl_api_defined_punt_ip_proto_t_print
static inline void *vl_api_punt_ip_proto_t_print (vl_api_punt_ip_proto_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_ip_proto_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_exception_t_print
#define _vl_api_defined_punt_exception_t_print
static inline void *vl_api_punt_exception_t_print (vl_api_punt_exception_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_exception_t:\n");
    vl_print(handle, "id: %u\n", a->id);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_union_t_print
#define _vl_api_defined_punt_union_t_print
static inline void *vl_api_punt_union_t_print (vl_api_punt_union_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_union_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_t_print
#define _vl_api_defined_punt_t_print
static inline void *vl_api_punt_t_print (vl_api_punt_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_reason_t_print
#define _vl_api_defined_punt_reason_t_print
static inline void *vl_api_punt_reason_t_print (vl_api_punt_reason_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_reason_t:\n");
    vl_print(handle, "id: %u\n", a->id);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_punt_t_print
#define _vl_api_defined_set_punt_t_print
static inline void *vl_api_set_punt_t_print (vl_api_set_punt_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_punt_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_punt_reply_t_print
#define _vl_api_defined_set_punt_reply_t_print
static inline void *vl_api_set_punt_reply_t_print (vl_api_set_punt_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_punt_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_socket_register_t_print
#define _vl_api_defined_punt_socket_register_t_print
static inline void *vl_api_punt_socket_register_t_print (vl_api_punt_socket_register_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_socket_register_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "header_version: %u\n", a->header_version);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_socket_register_reply_t_print
#define _vl_api_defined_punt_socket_register_reply_t_print
static inline void *vl_api_punt_socket_register_reply_t_print (vl_api_punt_socket_register_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_socket_register_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_socket_dump_t_print
#define _vl_api_defined_punt_socket_dump_t_print
static inline void *vl_api_punt_socket_dump_t_print (vl_api_punt_socket_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_socket_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_socket_details_t_print
#define _vl_api_defined_punt_socket_details_t_print
static inline void *vl_api_punt_socket_details_t_print (vl_api_punt_socket_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_socket_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_socket_deregister_t_print
#define _vl_api_defined_punt_socket_deregister_t_print
static inline void *vl_api_punt_socket_deregister_t_print (vl_api_punt_socket_deregister_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_socket_deregister_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_socket_deregister_reply_t_print
#define _vl_api_defined_punt_socket_deregister_reply_t_print
static inline void *vl_api_punt_socket_deregister_reply_t_print (vl_api_punt_socket_deregister_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_socket_deregister_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_reason_dump_t_print
#define _vl_api_defined_punt_reason_dump_t_print
static inline void *vl_api_punt_reason_dump_t_print (vl_api_punt_reason_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_reason_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_punt_reason_details_t_print
#define _vl_api_defined_punt_reason_details_t_print
static inline void *vl_api_punt_reason_details_t_print (vl_api_punt_reason_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_punt_reason_details_t:\n");
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

#ifndef _vl_api_defined_punt_l4_t_endian
#define _vl_api_defined_punt_l4_t_endian
static inline void vl_api_punt_l4_t_endian (vl_api_punt_l4_t *a)
{
    /* a->af = a->af (no-op) */
    /* a->protocol = a->protocol (no-op) */
    a->port = clib_net_to_host_u16(a->port);
}

#endif

#ifndef _vl_api_defined_punt_ip_proto_t_endian
#define _vl_api_defined_punt_ip_proto_t_endian
static inline void vl_api_punt_ip_proto_t_endian (vl_api_punt_ip_proto_t *a)
{
    /* a->af = a->af (no-op) */
    /* a->protocol = a->protocol (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_exception_t_endian
#define _vl_api_defined_punt_exception_t_endian
static inline void vl_api_punt_exception_t_endian (vl_api_punt_exception_t *a)
{
    a->id = clib_net_to_host_u32(a->id);
}

#endif

#ifndef _vl_api_defined_punt_union_t_endian
#define _vl_api_defined_punt_union_t_endian
static inline void vl_api_punt_union_t_endian (vl_api_punt_union_t *a)
{
    /* a->exception = a->exception (no-op) */
    /* a->l4 = a->l4 (no-op) */
    /* a->ip_proto = a->ip_proto (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_t_endian
#define _vl_api_defined_punt_t_endian
static inline void vl_api_punt_t_endian (vl_api_punt_t *a)
{
    /* a->type = a->type (no-op) */
    /* a->punt = a->punt (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_reason_t_endian
#define _vl_api_defined_punt_reason_t_endian
static inline void vl_api_punt_reason_t_endian (vl_api_punt_reason_t *a)
{
    a->id = clib_net_to_host_u32(a->id);
    /* a->name = a->name (no-op) */
}

#endif

#ifndef _vl_api_defined_set_punt_t_endian
#define _vl_api_defined_set_punt_t_endian
static inline void vl_api_set_punt_t_endian (vl_api_set_punt_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->punt = a->punt (no-op) */
}

#endif

#ifndef _vl_api_defined_set_punt_reply_t_endian
#define _vl_api_defined_set_punt_reply_t_endian
static inline void vl_api_set_punt_reply_t_endian (vl_api_set_punt_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_punt_socket_register_t_endian
#define _vl_api_defined_punt_socket_register_t_endian
static inline void vl_api_punt_socket_register_t_endian (vl_api_punt_socket_register_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->header_version = clib_net_to_host_u32(a->header_version);
    /* a->punt = a->punt (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_socket_register_reply_t_endian
#define _vl_api_defined_punt_socket_register_reply_t_endian
static inline void vl_api_punt_socket_register_reply_t_endian (vl_api_punt_socket_register_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_punt_socket_dump_t_endian
#define _vl_api_defined_punt_socket_dump_t_endian
static inline void vl_api_punt_socket_dump_t_endian (vl_api_punt_socket_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->type = a->type (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_socket_details_t_endian
#define _vl_api_defined_punt_socket_details_t_endian
static inline void vl_api_punt_socket_details_t_endian (vl_api_punt_socket_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->punt = a->punt (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_socket_deregister_t_endian
#define _vl_api_defined_punt_socket_deregister_t_endian
static inline void vl_api_punt_socket_deregister_t_endian (vl_api_punt_socket_deregister_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->punt = a->punt (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_socket_deregister_reply_t_endian
#define _vl_api_defined_punt_socket_deregister_reply_t_endian
static inline void vl_api_punt_socket_deregister_reply_t_endian (vl_api_punt_socket_deregister_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_punt_reason_dump_t_endian
#define _vl_api_defined_punt_reason_dump_t_endian
static inline void vl_api_punt_reason_dump_t_endian (vl_api_punt_reason_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->reason = a->reason (no-op) */
}

#endif

#ifndef _vl_api_defined_punt_reason_details_t_endian
#define _vl_api_defined_punt_reason_details_t_endian
static inline void vl_api_punt_reason_details_t_endian (vl_api_punt_reason_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->reason = a->reason (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(punt.api, 2, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(punt.api, 0xd16c6294)

#endif

