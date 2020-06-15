/*
 * VLIB API definitions 2020-06-13 06:00:58
 * Input file: vhost_user.api
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
#warning no content included from vhost_user.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_CREATE_VHOST_USER_IF, vl_api_create_vhost_user_if_t_handler)
vl_msg_id(VL_API_CREATE_VHOST_USER_IF_REPLY, vl_api_create_vhost_user_if_reply_t_handler)
vl_msg_id(VL_API_MODIFY_VHOST_USER_IF, vl_api_modify_vhost_user_if_t_handler)
vl_msg_id(VL_API_MODIFY_VHOST_USER_IF_REPLY, vl_api_modify_vhost_user_if_reply_t_handler)
vl_msg_id(VL_API_DELETE_VHOST_USER_IF, vl_api_delete_vhost_user_if_t_handler)
vl_msg_id(VL_API_DELETE_VHOST_USER_IF_REPLY, vl_api_delete_vhost_user_if_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VHOST_USER_DETAILS, vl_api_sw_interface_vhost_user_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VHOST_USER_DUMP, vl_api_sw_interface_vhost_user_dump_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_create_vhost_user_if_t, 1)
vl_msg_name(vl_api_create_vhost_user_if_reply_t, 1)
vl_msg_name(vl_api_modify_vhost_user_if_t, 1)
vl_msg_name(vl_api_modify_vhost_user_if_reply_t, 1)
vl_msg_name(vl_api_delete_vhost_user_if_t, 1)
vl_msg_name(vl_api_delete_vhost_user_if_reply_t, 1)
vl_msg_name(vl_api_sw_interface_vhost_user_details_t, 1)
vl_msg_name(vl_api_sw_interface_vhost_user_dump_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vhost_user \
_(VL_API_CREATE_VHOST_USER_IF, create_vhost_user_if, a3438cd4) \
_(VL_API_CREATE_VHOST_USER_IF_REPLY, create_vhost_user_if_reply, fda5941f) \
_(VL_API_MODIFY_VHOST_USER_IF, modify_vhost_user_if, 3fd4c094) \
_(VL_API_MODIFY_VHOST_USER_IF_REPLY, modify_vhost_user_if_reply, e8d4e804) \
_(VL_API_DELETE_VHOST_USER_IF, delete_vhost_user_if, 529cb13f) \
_(VL_API_DELETE_VHOST_USER_IF_REPLY, delete_vhost_user_if_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_VHOST_USER_DETAILS, sw_interface_vhost_user_details, 91ff3307) \
_(VL_API_SW_INTERFACE_VHOST_USER_DUMP, sw_interface_vhost_user_dump, 51077d14) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_vhost_user_api
#define included_vhost_user_api
#ifndef _vl_api_defined_create_vhost_user_if
#define _vl_api_defined_create_vhost_user_if
typedef VL_API_PACKED(struct _vl_api_create_vhost_user_if {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_server;
    u8 sock_filename[256];
    u8 renumber;
    u8 disable_mrg_rxbuf;
    u8 disable_indirect_desc;
    u8 enable_gso;
    u32 custom_dev_instance;
    u8 use_custom_mac;
    u8 mac_address[6];
    u8 tag[64];
}) vl_api_create_vhost_user_if_t;
#endif

#ifndef _vl_api_defined_create_vhost_user_if_reply
#define _vl_api_defined_create_vhost_user_if_reply
typedef VL_API_PACKED(struct _vl_api_create_vhost_user_if_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_create_vhost_user_if_reply_t;
#endif

#ifndef _vl_api_defined_modify_vhost_user_if
#define _vl_api_defined_modify_vhost_user_if
typedef VL_API_PACKED(struct _vl_api_modify_vhost_user_if {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 is_server;
    u8 sock_filename[256];
    u8 renumber;
    u8 enable_gso;
    u32 custom_dev_instance;
}) vl_api_modify_vhost_user_if_t;
#endif

#ifndef _vl_api_defined_modify_vhost_user_if_reply
#define _vl_api_defined_modify_vhost_user_if_reply
typedef VL_API_PACKED(struct _vl_api_modify_vhost_user_if_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_modify_vhost_user_if_reply_t;
#endif

#ifndef _vl_api_defined_delete_vhost_user_if
#define _vl_api_defined_delete_vhost_user_if
typedef VL_API_PACKED(struct _vl_api_delete_vhost_user_if {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_delete_vhost_user_if_t;
#endif

#ifndef _vl_api_defined_delete_vhost_user_if_reply
#define _vl_api_defined_delete_vhost_user_if_reply
typedef VL_API_PACKED(struct _vl_api_delete_vhost_user_if_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_delete_vhost_user_if_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_vhost_user_details
#define _vl_api_defined_sw_interface_vhost_user_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_vhost_user_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 interface_name[64];
    u32 virtio_net_hdr_sz;
    u64 features;
    u8 is_server;
    u8 sock_filename[256];
    u32 num_regions;
    i32 sock_errno;
}) vl_api_sw_interface_vhost_user_details_t;
#endif

#ifndef _vl_api_defined_sw_interface_vhost_user_dump
#define _vl_api_defined_sw_interface_vhost_user_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_vhost_user_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sw_interface_vhost_user_dump_t;
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

#ifndef _vl_api_defined_create_vhost_user_if_t_print
#define _vl_api_defined_create_vhost_user_if_t_print
static inline void *vl_api_create_vhost_user_if_t_print (vl_api_create_vhost_user_if_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_vhost_user_if_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_server: %u\n", a->is_server);
    vl_print(handle, "renumber: %u\n", a->renumber);
    vl_print(handle, "disable_mrg_rxbuf: %u\n", a->disable_mrg_rxbuf);
    vl_print(handle, "disable_indirect_desc: %u\n", a->disable_indirect_desc);
    vl_print(handle, "enable_gso: %u\n", a->enable_gso);
    vl_print(handle, "custom_dev_instance: %u\n", a->custom_dev_instance);
    vl_print(handle, "use_custom_mac: %u\n", a->use_custom_mac);
    return handle;
}

#endif

#ifndef _vl_api_defined_create_vhost_user_if_reply_t_print
#define _vl_api_defined_create_vhost_user_if_reply_t_print
static inline void *vl_api_create_vhost_user_if_reply_t_print (vl_api_create_vhost_user_if_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_create_vhost_user_if_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_modify_vhost_user_if_t_print
#define _vl_api_defined_modify_vhost_user_if_t_print
static inline void *vl_api_modify_vhost_user_if_t_print (vl_api_modify_vhost_user_if_t *a,void *handle)
{
    vl_print(handle, "vl_api_modify_vhost_user_if_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_server: %u\n", a->is_server);
    vl_print(handle, "renumber: %u\n", a->renumber);
    vl_print(handle, "enable_gso: %u\n", a->enable_gso);
    vl_print(handle, "custom_dev_instance: %u\n", a->custom_dev_instance);
    return handle;
}

#endif

#ifndef _vl_api_defined_modify_vhost_user_if_reply_t_print
#define _vl_api_defined_modify_vhost_user_if_reply_t_print
static inline void *vl_api_modify_vhost_user_if_reply_t_print (vl_api_modify_vhost_user_if_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_modify_vhost_user_if_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_delete_vhost_user_if_t_print
#define _vl_api_defined_delete_vhost_user_if_t_print
static inline void *vl_api_delete_vhost_user_if_t_print (vl_api_delete_vhost_user_if_t *a,void *handle)
{
    vl_print(handle, "vl_api_delete_vhost_user_if_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_delete_vhost_user_if_reply_t_print
#define _vl_api_defined_delete_vhost_user_if_reply_t_print
static inline void *vl_api_delete_vhost_user_if_reply_t_print (vl_api_delete_vhost_user_if_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_delete_vhost_user_if_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_vhost_user_details_t_print
#define _vl_api_defined_sw_interface_vhost_user_details_t_print
static inline void *vl_api_sw_interface_vhost_user_details_t_print (vl_api_sw_interface_vhost_user_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_vhost_user_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "virtio_net_hdr_sz: %u\n", a->virtio_net_hdr_sz);
    vl_print(handle, "features: %llu\n", a->features);
    vl_print(handle, "is_server: %u\n", a->is_server);
    vl_print(handle, "num_regions: %u\n", a->num_regions);
    vl_print(handle, "sock_errno: %ld\n", a->sock_errno);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_vhost_user_dump_t_print
#define _vl_api_defined_sw_interface_vhost_user_dump_t_print
static inline void *vl_api_sw_interface_vhost_user_dump_t_print (vl_api_sw_interface_vhost_user_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_vhost_user_dump_t:\n");
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

#ifndef _vl_api_defined_create_vhost_user_if_t_endian
#define _vl_api_defined_create_vhost_user_if_t_endian
static inline void vl_api_create_vhost_user_if_t_endian (vl_api_create_vhost_user_if_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_server = a->is_server (no-op) */
    /* a->renumber = a->renumber (no-op) */
    /* a->disable_mrg_rxbuf = a->disable_mrg_rxbuf (no-op) */
    /* a->disable_indirect_desc = a->disable_indirect_desc (no-op) */
    /* a->enable_gso = a->enable_gso (no-op) */
    a->custom_dev_instance = clib_net_to_host_u32(a->custom_dev_instance);
    /* a->use_custom_mac = a->use_custom_mac (no-op) */
}

#endif

#ifndef _vl_api_defined_create_vhost_user_if_reply_t_endian
#define _vl_api_defined_create_vhost_user_if_reply_t_endian
static inline void vl_api_create_vhost_user_if_reply_t_endian (vl_api_create_vhost_user_if_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_modify_vhost_user_if_t_endian
#define _vl_api_defined_modify_vhost_user_if_t_endian
static inline void vl_api_modify_vhost_user_if_t_endian (vl_api_modify_vhost_user_if_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_server = a->is_server (no-op) */
    /* a->renumber = a->renumber (no-op) */
    /* a->enable_gso = a->enable_gso (no-op) */
    a->custom_dev_instance = clib_net_to_host_u32(a->custom_dev_instance);
}

#endif

#ifndef _vl_api_defined_modify_vhost_user_if_reply_t_endian
#define _vl_api_defined_modify_vhost_user_if_reply_t_endian
static inline void vl_api_modify_vhost_user_if_reply_t_endian (vl_api_modify_vhost_user_if_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_delete_vhost_user_if_t_endian
#define _vl_api_defined_delete_vhost_user_if_t_endian
static inline void vl_api_delete_vhost_user_if_t_endian (vl_api_delete_vhost_user_if_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_delete_vhost_user_if_reply_t_endian
#define _vl_api_defined_delete_vhost_user_if_reply_t_endian
static inline void vl_api_delete_vhost_user_if_reply_t_endian (vl_api_delete_vhost_user_if_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_vhost_user_details_t_endian
#define _vl_api_defined_sw_interface_vhost_user_details_t_endian
static inline void vl_api_sw_interface_vhost_user_details_t_endian (vl_api_sw_interface_vhost_user_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->virtio_net_hdr_sz = clib_net_to_host_u32(a->virtio_net_hdr_sz);
    a->features = clib_net_to_host_u64(a->features);
    /* a->is_server = a->is_server (no-op) */
    a->num_regions = clib_net_to_host_u32(a->num_regions);
    a->sock_errno = clib_net_to_host_u32(a->sock_errno);
}

#endif

#ifndef _vl_api_defined_sw_interface_vhost_user_dump_t_endian
#define _vl_api_defined_sw_interface_vhost_user_dump_t_endian
static inline void vl_api_sw_interface_vhost_user_dump_t_endian (vl_api_sw_interface_vhost_user_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vhost_user.api, 3, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vhost_user.api, 0x2762ee64)

#endif

