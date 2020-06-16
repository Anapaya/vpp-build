/*
 * VLIB API definitions 2020-06-13 05:56:05
 * Input file: af_packet.api
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
#warning no content included from af_packet.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_AF_PACKET_CREATE, vl_api_af_packet_create_t_handler)
vl_msg_id(VL_API_AF_PACKET_CREATE_REPLY, vl_api_af_packet_create_reply_t_handler)
vl_msg_id(VL_API_AF_PACKET_DELETE, vl_api_af_packet_delete_t_handler)
vl_msg_id(VL_API_AF_PACKET_DELETE_REPLY, vl_api_af_packet_delete_reply_t_handler)
vl_msg_id(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD, vl_api_af_packet_set_l4_cksum_offload_t_handler)
vl_msg_id(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD_REPLY, vl_api_af_packet_set_l4_cksum_offload_reply_t_handler)
vl_msg_id(VL_API_AF_PACKET_DUMP, vl_api_af_packet_dump_t_handler)
vl_msg_id(VL_API_AF_PACKET_DETAILS, vl_api_af_packet_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_af_packet_create_t, 1)
vl_msg_name(vl_api_af_packet_create_reply_t, 1)
vl_msg_name(vl_api_af_packet_delete_t, 1)
vl_msg_name(vl_api_af_packet_delete_reply_t, 1)
vl_msg_name(vl_api_af_packet_set_l4_cksum_offload_t, 1)
vl_msg_name(vl_api_af_packet_set_l4_cksum_offload_reply_t, 1)
vl_msg_name(vl_api_af_packet_dump_t, 1)
vl_msg_name(vl_api_af_packet_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_af_packet \
_(VL_API_AF_PACKET_CREATE, af_packet_create, 6d5d30d6) \
_(VL_API_AF_PACKET_CREATE_REPLY, af_packet_create_reply, fda5941f) \
_(VL_API_AF_PACKET_DELETE, af_packet_delete, 3efceda3) \
_(VL_API_AF_PACKET_DELETE_REPLY, af_packet_delete_reply, e8d4e804) \
_(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD, af_packet_set_l4_cksum_offload, 86538585) \
_(VL_API_AF_PACKET_SET_L4_CKSUM_OFFLOAD_REPLY, af_packet_set_l4_cksum_offload_reply, e8d4e804) \
_(VL_API_AF_PACKET_DUMP, af_packet_dump, 51077d14) \
_(VL_API_AF_PACKET_DETAILS, af_packet_details, 057205fa) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_af_packet_api
#define included_af_packet_api
#ifndef _vl_api_defined_af_packet_create
#define _vl_api_defined_af_packet_create
typedef VL_API_PACKED(struct _vl_api_af_packet_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 host_if_name[64];
    u8 hw_addr[6];
    u8 use_random_hw_addr;
}) vl_api_af_packet_create_t;
#endif

#ifndef _vl_api_defined_af_packet_create_reply
#define _vl_api_defined_af_packet_create_reply
typedef VL_API_PACKED(struct _vl_api_af_packet_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_af_packet_create_reply_t;
#endif

#ifndef _vl_api_defined_af_packet_delete
#define _vl_api_defined_af_packet_delete
typedef VL_API_PACKED(struct _vl_api_af_packet_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 host_if_name[64];
}) vl_api_af_packet_delete_t;
#endif

#ifndef _vl_api_defined_af_packet_delete_reply
#define _vl_api_defined_af_packet_delete_reply
typedef VL_API_PACKED(struct _vl_api_af_packet_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_af_packet_delete_reply_t;
#endif

#ifndef _vl_api_defined_af_packet_set_l4_cksum_offload
#define _vl_api_defined_af_packet_set_l4_cksum_offload
typedef VL_API_PACKED(struct _vl_api_af_packet_set_l4_cksum_offload {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 sw_if_index;
    u8 set;
}) vl_api_af_packet_set_l4_cksum_offload_t;
#endif

#ifndef _vl_api_defined_af_packet_set_l4_cksum_offload_reply
#define _vl_api_defined_af_packet_set_l4_cksum_offload_reply
typedef VL_API_PACKED(struct _vl_api_af_packet_set_l4_cksum_offload_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_af_packet_set_l4_cksum_offload_reply_t;
#endif

#ifndef _vl_api_defined_af_packet_dump
#define _vl_api_defined_af_packet_dump
typedef VL_API_PACKED(struct _vl_api_af_packet_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_af_packet_dump_t;
#endif

#ifndef _vl_api_defined_af_packet_details
#define _vl_api_defined_af_packet_details
typedef VL_API_PACKED(struct _vl_api_af_packet_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 host_if_name[64];
}) vl_api_af_packet_details_t;
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

#ifndef _vl_api_defined_af_packet_create_t_print
#define _vl_api_defined_af_packet_create_t_print
static inline void *vl_api_af_packet_create_t_print (vl_api_af_packet_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "use_random_hw_addr: %u\n", a->use_random_hw_addr);
    return handle;
}

#endif

#ifndef _vl_api_defined_af_packet_create_reply_t_print
#define _vl_api_defined_af_packet_create_reply_t_print
static inline void *vl_api_af_packet_create_reply_t_print (vl_api_af_packet_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_af_packet_delete_t_print
#define _vl_api_defined_af_packet_delete_t_print
static inline void *vl_api_af_packet_delete_t_print (vl_api_af_packet_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_af_packet_delete_reply_t_print
#define _vl_api_defined_af_packet_delete_reply_t_print
static inline void *vl_api_af_packet_delete_reply_t_print (vl_api_af_packet_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_af_packet_set_l4_cksum_offload_t_print
#define _vl_api_defined_af_packet_set_l4_cksum_offload_t_print
static inline void *vl_api_af_packet_set_l4_cksum_offload_t_print (vl_api_af_packet_set_l4_cksum_offload_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_set_l4_cksum_offload_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "set: %u\n", a->set);
    return handle;
}

#endif

#ifndef _vl_api_defined_af_packet_set_l4_cksum_offload_reply_t_print
#define _vl_api_defined_af_packet_set_l4_cksum_offload_reply_t_print
static inline void *vl_api_af_packet_set_l4_cksum_offload_reply_t_print (vl_api_af_packet_set_l4_cksum_offload_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_set_l4_cksum_offload_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_af_packet_dump_t_print
#define _vl_api_defined_af_packet_dump_t_print
static inline void *vl_api_af_packet_dump_t_print (vl_api_af_packet_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_af_packet_details_t_print
#define _vl_api_defined_af_packet_details_t_print
static inline void *vl_api_af_packet_details_t_print (vl_api_af_packet_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_af_packet_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
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

#ifndef _vl_api_defined_af_packet_create_t_endian
#define _vl_api_defined_af_packet_create_t_endian
static inline void vl_api_af_packet_create_t_endian (vl_api_af_packet_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->use_random_hw_addr = a->use_random_hw_addr (no-op) */
}

#endif

#ifndef _vl_api_defined_af_packet_create_reply_t_endian
#define _vl_api_defined_af_packet_create_reply_t_endian
static inline void vl_api_af_packet_create_reply_t_endian (vl_api_af_packet_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_af_packet_delete_t_endian
#define _vl_api_defined_af_packet_delete_t_endian
static inline void vl_api_af_packet_delete_t_endian (vl_api_af_packet_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_af_packet_delete_reply_t_endian
#define _vl_api_defined_af_packet_delete_reply_t_endian
static inline void vl_api_af_packet_delete_reply_t_endian (vl_api_af_packet_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_af_packet_set_l4_cksum_offload_t_endian
#define _vl_api_defined_af_packet_set_l4_cksum_offload_t_endian
static inline void vl_api_af_packet_set_l4_cksum_offload_t_endian (vl_api_af_packet_set_l4_cksum_offload_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->sw_if_index = a->sw_if_index (no-op) */
    /* a->set = a->set (no-op) */
}

#endif

#ifndef _vl_api_defined_af_packet_set_l4_cksum_offload_reply_t_endian
#define _vl_api_defined_af_packet_set_l4_cksum_offload_reply_t_endian
static inline void vl_api_af_packet_set_l4_cksum_offload_reply_t_endian (vl_api_af_packet_set_l4_cksum_offload_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_af_packet_dump_t_endian
#define _vl_api_defined_af_packet_dump_t_endian
static inline void vl_api_af_packet_dump_t_endian (vl_api_af_packet_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_af_packet_details_t_endian
#define _vl_api_defined_af_packet_details_t_endian
static inline void vl_api_af_packet_details_t_endian (vl_api_af_packet_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(af_packet.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(af_packet.api, 0xfefd69b7)

#endif

