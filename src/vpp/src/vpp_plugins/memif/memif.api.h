/*
 * VLIB API definitions 2020-06-13 06:01:58
 * Input file: memif.api
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
#warning no content included from memif.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL, vl_api_memif_socket_filename_add_del_t_handler)
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL_REPLY, vl_api_memif_socket_filename_add_del_reply_t_handler)
vl_msg_id(VL_API_MEMIF_CREATE, vl_api_memif_create_t_handler)
vl_msg_id(VL_API_MEMIF_CREATE_REPLY, vl_api_memif_create_reply_t_handler)
vl_msg_id(VL_API_MEMIF_DELETE, vl_api_memif_delete_t_handler)
vl_msg_id(VL_API_MEMIF_DELETE_REPLY, vl_api_memif_delete_reply_t_handler)
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_DETAILS, vl_api_memif_socket_filename_details_t_handler)
vl_msg_id(VL_API_MEMIF_SOCKET_FILENAME_DUMP, vl_api_memif_socket_filename_dump_t_handler)
vl_msg_id(VL_API_MEMIF_DETAILS, vl_api_memif_details_t_handler)
vl_msg_id(VL_API_MEMIF_DUMP, vl_api_memif_dump_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_memif_socket_filename_add_del_t, 1)
vl_msg_name(vl_api_memif_socket_filename_add_del_reply_t, 1)
vl_msg_name(vl_api_memif_create_t, 1)
vl_msg_name(vl_api_memif_create_reply_t, 1)
vl_msg_name(vl_api_memif_delete_t, 1)
vl_msg_name(vl_api_memif_delete_reply_t, 1)
vl_msg_name(vl_api_memif_socket_filename_details_t, 1)
vl_msg_name(vl_api_memif_socket_filename_dump_t, 1)
vl_msg_name(vl_api_memif_details_t, 1)
vl_msg_name(vl_api_memif_dump_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_memif \
_(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL, memif_socket_filename_add_del, 30e3929d) \
_(VL_API_MEMIF_SOCKET_FILENAME_ADD_DEL_REPLY, memif_socket_filename_add_del_reply, e8d4e804) \
_(VL_API_MEMIF_CREATE, memif_create, 6597cdb2) \
_(VL_API_MEMIF_CREATE_REPLY, memif_create_reply, fda5941f) \
_(VL_API_MEMIF_DELETE, memif_delete, 529cb13f) \
_(VL_API_MEMIF_DELETE_REPLY, memif_delete_reply, e8d4e804) \
_(VL_API_MEMIF_SOCKET_FILENAME_DETAILS, memif_socket_filename_details, e347e32f) \
_(VL_API_MEMIF_SOCKET_FILENAME_DUMP, memif_socket_filename_dump, 51077d14) \
_(VL_API_MEMIF_DETAILS, memif_details, 4f5a3397) \
_(VL_API_MEMIF_DUMP, memif_dump, 51077d14) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_memif_api
#define included_memif_api
#ifndef _vl_api_defined_memif_socket_filename_add_del
#define _vl_api_defined_memif_socket_filename_add_del
typedef VL_API_PACKED(struct _vl_api_memif_socket_filename_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 socket_id;
    u8 socket_filename[128];
}) vl_api_memif_socket_filename_add_del_t;
#endif

#ifndef _vl_api_defined_memif_socket_filename_add_del_reply
#define _vl_api_defined_memif_socket_filename_add_del_reply
typedef VL_API_PACKED(struct _vl_api_memif_socket_filename_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_memif_socket_filename_add_del_reply_t;
#endif

#ifndef _vl_api_defined_memif_create
#define _vl_api_defined_memif_create
typedef VL_API_PACKED(struct _vl_api_memif_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 role;
    u8 mode;
    u8 rx_queues;
    u8 tx_queues;
    u32 id;
    u32 socket_id;
    u8 secret[24];
    u32 ring_size;
    u16 buffer_size;
    u8 hw_addr[6];
}) vl_api_memif_create_t;
#endif

#ifndef _vl_api_defined_memif_create_reply
#define _vl_api_defined_memif_create_reply
typedef VL_API_PACKED(struct _vl_api_memif_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_memif_create_reply_t;
#endif

#ifndef _vl_api_defined_memif_delete
#define _vl_api_defined_memif_delete
typedef VL_API_PACKED(struct _vl_api_memif_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_memif_delete_t;
#endif

#ifndef _vl_api_defined_memif_delete_reply
#define _vl_api_defined_memif_delete_reply
typedef VL_API_PACKED(struct _vl_api_memif_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_memif_delete_reply_t;
#endif

#ifndef _vl_api_defined_memif_socket_filename_details
#define _vl_api_defined_memif_socket_filename_details
typedef VL_API_PACKED(struct _vl_api_memif_socket_filename_details {
    u16 _vl_msg_id;
    u32 context;
    u32 socket_id;
    u8 socket_filename[128];
}) vl_api_memif_socket_filename_details_t;
#endif

#ifndef _vl_api_defined_memif_socket_filename_dump
#define _vl_api_defined_memif_socket_filename_dump
typedef VL_API_PACKED(struct _vl_api_memif_socket_filename_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_memif_socket_filename_dump_t;
#endif

#ifndef _vl_api_defined_memif_details
#define _vl_api_defined_memif_details
typedef VL_API_PACKED(struct _vl_api_memif_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 if_name[64];
    u8 hw_addr[6];
    u32 id;
    u8 role;
    u8 mode;
    u32 socket_id;
    u32 ring_size;
    u16 buffer_size;
    u8 admin_up_down;
    u8 link_up_down;
}) vl_api_memif_details_t;
#endif

#ifndef _vl_api_defined_memif_dump
#define _vl_api_defined_memif_dump
typedef VL_API_PACKED(struct _vl_api_memif_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_memif_dump_t;
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

#ifndef _vl_api_defined_memif_socket_filename_add_del_t_print
#define _vl_api_defined_memif_socket_filename_add_del_t_print
static inline void *vl_api_memif_socket_filename_add_del_t_print (vl_api_memif_socket_filename_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_socket_filename_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "socket_id: %u\n", a->socket_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_socket_filename_add_del_reply_t_print
#define _vl_api_defined_memif_socket_filename_add_del_reply_t_print
static inline void *vl_api_memif_socket_filename_add_del_reply_t_print (vl_api_memif_socket_filename_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_socket_filename_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_create_t_print
#define _vl_api_defined_memif_create_t_print
static inline void *vl_api_memif_create_t_print (vl_api_memif_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "role: %u\n", a->role);
    vl_print(handle, "mode: %u\n", a->mode);
    vl_print(handle, "rx_queues: %u\n", a->rx_queues);
    vl_print(handle, "tx_queues: %u\n", a->tx_queues);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "socket_id: %u\n", a->socket_id);
    vl_print(handle, "ring_size: %u\n", a->ring_size);
    vl_print(handle, "buffer_size: %u\n", a->buffer_size);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_create_reply_t_print
#define _vl_api_defined_memif_create_reply_t_print
static inline void *vl_api_memif_create_reply_t_print (vl_api_memif_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_delete_t_print
#define _vl_api_defined_memif_delete_t_print
static inline void *vl_api_memif_delete_t_print (vl_api_memif_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_delete_reply_t_print
#define _vl_api_defined_memif_delete_reply_t_print
static inline void *vl_api_memif_delete_reply_t_print (vl_api_memif_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_socket_filename_details_t_print
#define _vl_api_defined_memif_socket_filename_details_t_print
static inline void *vl_api_memif_socket_filename_details_t_print (vl_api_memif_socket_filename_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_socket_filename_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "socket_id: %u\n", a->socket_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_socket_filename_dump_t_print
#define _vl_api_defined_memif_socket_filename_dump_t_print
static inline void *vl_api_memif_socket_filename_dump_t_print (vl_api_memif_socket_filename_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_socket_filename_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_details_t_print
#define _vl_api_defined_memif_details_t_print
static inline void *vl_api_memif_details_t_print (vl_api_memif_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "role: %u\n", a->role);
    vl_print(handle, "mode: %u\n", a->mode);
    vl_print(handle, "socket_id: %u\n", a->socket_id);
    vl_print(handle, "ring_size: %u\n", a->ring_size);
    vl_print(handle, "buffer_size: %u\n", a->buffer_size);
    vl_print(handle, "admin_up_down: %u\n", a->admin_up_down);
    vl_print(handle, "link_up_down: %u\n", a->link_up_down);
    return handle;
}

#endif

#ifndef _vl_api_defined_memif_dump_t_print
#define _vl_api_defined_memif_dump_t_print
static inline void *vl_api_memif_dump_t_print (vl_api_memif_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_memif_dump_t:\n");
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

#ifndef _vl_api_defined_memif_socket_filename_add_del_t_endian
#define _vl_api_defined_memif_socket_filename_add_del_t_endian
static inline void vl_api_memif_socket_filename_add_del_t_endian (vl_api_memif_socket_filename_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->socket_id = clib_net_to_host_u32(a->socket_id);
}

#endif

#ifndef _vl_api_defined_memif_socket_filename_add_del_reply_t_endian
#define _vl_api_defined_memif_socket_filename_add_del_reply_t_endian
static inline void vl_api_memif_socket_filename_add_del_reply_t_endian (vl_api_memif_socket_filename_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_memif_create_t_endian
#define _vl_api_defined_memif_create_t_endian
static inline void vl_api_memif_create_t_endian (vl_api_memif_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->role = a->role (no-op) */
    /* a->mode = a->mode (no-op) */
    /* a->rx_queues = a->rx_queues (no-op) */
    /* a->tx_queues = a->tx_queues (no-op) */
    a->id = clib_net_to_host_u32(a->id);
    a->socket_id = clib_net_to_host_u32(a->socket_id);
    a->ring_size = clib_net_to_host_u32(a->ring_size);
    a->buffer_size = clib_net_to_host_u16(a->buffer_size);
}

#endif

#ifndef _vl_api_defined_memif_create_reply_t_endian
#define _vl_api_defined_memif_create_reply_t_endian
static inline void vl_api_memif_create_reply_t_endian (vl_api_memif_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_memif_delete_t_endian
#define _vl_api_defined_memif_delete_t_endian
static inline void vl_api_memif_delete_t_endian (vl_api_memif_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_memif_delete_reply_t_endian
#define _vl_api_defined_memif_delete_reply_t_endian
static inline void vl_api_memif_delete_reply_t_endian (vl_api_memif_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_memif_socket_filename_details_t_endian
#define _vl_api_defined_memif_socket_filename_details_t_endian
static inline void vl_api_memif_socket_filename_details_t_endian (vl_api_memif_socket_filename_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->socket_id = clib_net_to_host_u32(a->socket_id);
}

#endif

#ifndef _vl_api_defined_memif_socket_filename_dump_t_endian
#define _vl_api_defined_memif_socket_filename_dump_t_endian
static inline void vl_api_memif_socket_filename_dump_t_endian (vl_api_memif_socket_filename_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_memif_details_t_endian
#define _vl_api_defined_memif_details_t_endian
static inline void vl_api_memif_details_t_endian (vl_api_memif_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->id = clib_net_to_host_u32(a->id);
    /* a->role = a->role (no-op) */
    /* a->mode = a->mode (no-op) */
    a->socket_id = clib_net_to_host_u32(a->socket_id);
    a->ring_size = clib_net_to_host_u32(a->ring_size);
    a->buffer_size = clib_net_to_host_u16(a->buffer_size);
    /* a->admin_up_down = a->admin_up_down (no-op) */
    /* a->link_up_down = a->link_up_down (no-op) */
}

#endif

#ifndef _vl_api_defined_memif_dump_t_endian
#define _vl_api_defined_memif_dump_t_endian
static inline void vl_api_memif_dump_t_endian (vl_api_memif_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(memif.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(memif.api, 0x939f78a7)

#endif

