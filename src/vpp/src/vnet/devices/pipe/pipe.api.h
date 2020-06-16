/*
 * VLIB API definitions 2020-06-13 06:00:58
 * Input file: pipe.api
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
#warning no content included from pipe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_PIPE_CREATE, vl_api_pipe_create_t_handler)
vl_msg_id(VL_API_PIPE_CREATE_REPLY, vl_api_pipe_create_reply_t_handler)
vl_msg_id(VL_API_PIPE_DELETE, vl_api_pipe_delete_t_handler)
vl_msg_id(VL_API_PIPE_DELETE_REPLY, vl_api_pipe_delete_reply_t_handler)
vl_msg_id(VL_API_PIPE_DUMP, vl_api_pipe_dump_t_handler)
vl_msg_id(VL_API_PIPE_DETAILS, vl_api_pipe_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_pipe_create_t, 1)
vl_msg_name(vl_api_pipe_create_reply_t, 1)
vl_msg_name(vl_api_pipe_delete_t, 1)
vl_msg_name(vl_api_pipe_delete_reply_t, 1)
vl_msg_name(vl_api_pipe_dump_t, 1)
vl_msg_name(vl_api_pipe_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_pipe \
_(VL_API_PIPE_CREATE, pipe_create, db413409) \
_(VL_API_PIPE_CREATE_REPLY, pipe_create_reply, 9f0eef14) \
_(VL_API_PIPE_DELETE, pipe_delete, 529cb13f) \
_(VL_API_PIPE_DELETE_REPLY, pipe_delete_reply, e8d4e804) \
_(VL_API_PIPE_DUMP, pipe_dump, 51077d14) \
_(VL_API_PIPE_DETAILS, pipe_details, 91286b09) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_pipe_api
#define included_pipe_api
#ifndef _vl_api_defined_pipe_create
#define _vl_api_defined_pipe_create
typedef VL_API_PACKED(struct _vl_api_pipe_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_specified;
    u32 user_instance;
}) vl_api_pipe_create_t;
#endif

#ifndef _vl_api_defined_pipe_create_reply
#define _vl_api_defined_pipe_create_reply
typedef VL_API_PACKED(struct _vl_api_pipe_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
    u32 pipe_sw_if_index[2];
}) vl_api_pipe_create_reply_t;
#endif

#ifndef _vl_api_defined_pipe_delete
#define _vl_api_defined_pipe_delete
typedef VL_API_PACKED(struct _vl_api_pipe_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_pipe_delete_t;
#endif

#ifndef _vl_api_defined_pipe_delete_reply
#define _vl_api_defined_pipe_delete_reply
typedef VL_API_PACKED(struct _vl_api_pipe_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_pipe_delete_reply_t;
#endif

#ifndef _vl_api_defined_pipe_dump
#define _vl_api_defined_pipe_dump
typedef VL_API_PACKED(struct _vl_api_pipe_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_pipe_dump_t;
#endif

#ifndef _vl_api_defined_pipe_details
#define _vl_api_defined_pipe_details
typedef VL_API_PACKED(struct _vl_api_pipe_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 pipe_sw_if_index[2];
    u32 instance;
}) vl_api_pipe_details_t;
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

#ifndef _vl_api_defined_pipe_create_t_print
#define _vl_api_defined_pipe_create_t_print
static inline void *vl_api_pipe_create_t_print (vl_api_pipe_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_pipe_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_specified: %u\n", a->is_specified);
    vl_print(handle, "user_instance: %u\n", a->user_instance);
    return handle;
}

#endif

#ifndef _vl_api_defined_pipe_create_reply_t_print
#define _vl_api_defined_pipe_create_reply_t_print
static inline void *vl_api_pipe_create_reply_t_print (vl_api_pipe_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pipe_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_pipe_delete_t_print
#define _vl_api_defined_pipe_delete_t_print
static inline void *vl_api_pipe_delete_t_print (vl_api_pipe_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_pipe_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_pipe_delete_reply_t_print
#define _vl_api_defined_pipe_delete_reply_t_print
static inline void *vl_api_pipe_delete_reply_t_print (vl_api_pipe_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pipe_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_pipe_dump_t_print
#define _vl_api_defined_pipe_dump_t_print
static inline void *vl_api_pipe_dump_t_print (vl_api_pipe_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_pipe_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_pipe_details_t_print
#define _vl_api_defined_pipe_details_t_print
static inline void *vl_api_pipe_details_t_print (vl_api_pipe_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_pipe_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "instance: %u\n", a->instance);
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

#ifndef _vl_api_defined_pipe_create_t_endian
#define _vl_api_defined_pipe_create_t_endian
static inline void vl_api_pipe_create_t_endian (vl_api_pipe_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_specified = a->is_specified (no-op) */
    a->user_instance = clib_net_to_host_u32(a->user_instance);
}

#endif

#ifndef _vl_api_defined_pipe_create_reply_t_endian
#define _vl_api_defined_pipe_create_reply_t_endian
static inline void vl_api_pipe_create_reply_t_endian (vl_api_pipe_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_pipe_delete_t_endian
#define _vl_api_defined_pipe_delete_t_endian
static inline void vl_api_pipe_delete_t_endian (vl_api_pipe_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_pipe_delete_reply_t_endian
#define _vl_api_defined_pipe_delete_reply_t_endian
static inline void vl_api_pipe_delete_reply_t_endian (vl_api_pipe_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_pipe_dump_t_endian
#define _vl_api_defined_pipe_dump_t_endian
static inline void vl_api_pipe_dump_t_endian (vl_api_pipe_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_pipe_details_t_endian
#define _vl_api_defined_pipe_details_t_endian
static inline void vl_api_pipe_details_t_endian (vl_api_pipe_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->instance = clib_net_to_host_u32(a->instance);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(pipe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(pipe.api, 0xd1b0e995)

#endif

