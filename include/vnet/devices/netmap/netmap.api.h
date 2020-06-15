/*
 * VLIB API definitions 2020-06-13 05:56:05
 * Input file: netmap.api
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
#warning no content included from netmap.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_NETMAP_CREATE, vl_api_netmap_create_t_handler)
vl_msg_id(VL_API_NETMAP_CREATE_REPLY, vl_api_netmap_create_reply_t_handler)
vl_msg_id(VL_API_NETMAP_DELETE, vl_api_netmap_delete_t_handler)
vl_msg_id(VL_API_NETMAP_DELETE_REPLY, vl_api_netmap_delete_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_netmap_create_t, 1)
vl_msg_name(vl_api_netmap_create_reply_t, 1)
vl_msg_name(vl_api_netmap_delete_t, 1)
vl_msg_name(vl_api_netmap_delete_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_netmap \
_(VL_API_NETMAP_CREATE, netmap_create, 5299044e) \
_(VL_API_NETMAP_CREATE_REPLY, netmap_create_reply, e8d4e804) \
_(VL_API_NETMAP_DELETE, netmap_delete, a8b6c201) \
_(VL_API_NETMAP_DELETE_REPLY, netmap_delete_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_netmap_api
#define included_netmap_api
#ifndef _vl_api_defined_netmap_create
#define _vl_api_defined_netmap_create
typedef VL_API_PACKED(struct _vl_api_netmap_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 netmap_if_name[64];
    u8 hw_addr[6];
    u8 use_random_hw_addr;
    u8 is_pipe;
    u8 is_master;
}) vl_api_netmap_create_t;
#endif

#ifndef _vl_api_defined_netmap_create_reply
#define _vl_api_defined_netmap_create_reply
typedef VL_API_PACKED(struct _vl_api_netmap_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_netmap_create_reply_t;
#endif

#ifndef _vl_api_defined_netmap_delete
#define _vl_api_defined_netmap_delete
typedef VL_API_PACKED(struct _vl_api_netmap_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 netmap_if_name[64];
}) vl_api_netmap_delete_t;
#endif

#ifndef _vl_api_defined_netmap_delete_reply
#define _vl_api_defined_netmap_delete_reply
typedef VL_API_PACKED(struct _vl_api_netmap_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_netmap_delete_reply_t;
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

#ifndef _vl_api_defined_netmap_create_t_print
#define _vl_api_defined_netmap_create_t_print
static inline void *vl_api_netmap_create_t_print (vl_api_netmap_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_netmap_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "use_random_hw_addr: %u\n", a->use_random_hw_addr);
    vl_print(handle, "is_pipe: %u\n", a->is_pipe);
    vl_print(handle, "is_master: %u\n", a->is_master);
    return handle;
}

#endif

#ifndef _vl_api_defined_netmap_create_reply_t_print
#define _vl_api_defined_netmap_create_reply_t_print
static inline void *vl_api_netmap_create_reply_t_print (vl_api_netmap_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_netmap_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_netmap_delete_t_print
#define _vl_api_defined_netmap_delete_t_print
static inline void *vl_api_netmap_delete_t_print (vl_api_netmap_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_netmap_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_netmap_delete_reply_t_print
#define _vl_api_defined_netmap_delete_reply_t_print
static inline void *vl_api_netmap_delete_reply_t_print (vl_api_netmap_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_netmap_delete_reply_t:\n");
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

#ifndef _vl_api_defined_netmap_create_t_endian
#define _vl_api_defined_netmap_create_t_endian
static inline void vl_api_netmap_create_t_endian (vl_api_netmap_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->use_random_hw_addr = a->use_random_hw_addr (no-op) */
    /* a->is_pipe = a->is_pipe (no-op) */
    /* a->is_master = a->is_master (no-op) */
}

#endif

#ifndef _vl_api_defined_netmap_create_reply_t_endian
#define _vl_api_defined_netmap_create_reply_t_endian
static inline void vl_api_netmap_create_reply_t_endian (vl_api_netmap_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_netmap_delete_t_endian
#define _vl_api_defined_netmap_delete_t_endian
static inline void vl_api_netmap_delete_t_endian (vl_api_netmap_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_netmap_delete_reply_t_endian
#define _vl_api_defined_netmap_delete_reply_t_endian
static inline void vl_api_netmap_delete_reply_t_endian (vl_api_netmap_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(netmap.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(netmap.api, 0x6ae7e12e)

#endif

