/*
 * VLIB API definitions 2020-01-07 14:20:10
 * Input file: bond.api
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
#warning no content included from bond.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_BOND_CREATE, vl_api_bond_create_t_handler)
vl_msg_id(VL_API_BOND_CREATE_REPLY, vl_api_bond_create_reply_t_handler)
vl_msg_id(VL_API_BOND_DELETE, vl_api_bond_delete_t_handler)
vl_msg_id(VL_API_BOND_DELETE_REPLY, vl_api_bond_delete_reply_t_handler)
vl_msg_id(VL_API_BOND_ENSLAVE, vl_api_bond_enslave_t_handler)
vl_msg_id(VL_API_BOND_ENSLAVE_REPLY, vl_api_bond_enslave_reply_t_handler)
vl_msg_id(VL_API_BOND_DETACH_SLAVE, vl_api_bond_detach_slave_t_handler)
vl_msg_id(VL_API_BOND_DETACH_SLAVE_REPLY, vl_api_bond_detach_slave_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_BOND_DUMP, vl_api_sw_interface_bond_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_BOND_DETAILS, vl_api_sw_interface_bond_details_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SLAVE_DUMP, vl_api_sw_interface_slave_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_SLAVE_DETAILS, vl_api_sw_interface_slave_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_bond_create_t, 1)
vl_msg_name(vl_api_bond_create_reply_t, 1)
vl_msg_name(vl_api_bond_delete_t, 1)
vl_msg_name(vl_api_bond_delete_reply_t, 1)
vl_msg_name(vl_api_bond_enslave_t, 1)
vl_msg_name(vl_api_bond_enslave_reply_t, 1)
vl_msg_name(vl_api_bond_detach_slave_t, 1)
vl_msg_name(vl_api_bond_detach_slave_reply_t, 1)
vl_msg_name(vl_api_sw_interface_bond_dump_t, 1)
vl_msg_name(vl_api_sw_interface_bond_details_t, 1)
vl_msg_name(vl_api_sw_interface_slave_dump_t, 1)
vl_msg_name(vl_api_sw_interface_slave_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_bond \
_(VL_API_BOND_CREATE, bond_create, f19b4ad0) \
_(VL_API_BOND_CREATE_REPLY, bond_create_reply, fda5941f) \
_(VL_API_BOND_DELETE, bond_delete, 529cb13f) \
_(VL_API_BOND_DELETE_REPLY, bond_delete_reply, e8d4e804) \
_(VL_API_BOND_ENSLAVE, bond_enslave, 0ded34f6) \
_(VL_API_BOND_ENSLAVE_REPLY, bond_enslave_reply, e8d4e804) \
_(VL_API_BOND_DETACH_SLAVE, bond_detach_slave, 529cb13f) \
_(VL_API_BOND_DETACH_SLAVE_REPLY, bond_detach_slave_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_BOND_DUMP, sw_interface_bond_dump, 51077d14) \
_(VL_API_SW_INTERFACE_BOND_DETAILS, sw_interface_bond_details, a8ac5a5f) \
_(VL_API_SW_INTERFACE_SLAVE_DUMP, sw_interface_slave_dump, 529cb13f) \
_(VL_API_SW_INTERFACE_SLAVE_DETAILS, sw_interface_slave_details, d5c58e45) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_bond_api
#define included_bond_api
#ifndef _vl_api_defined_bond_create
#define _vl_api_defined_bond_create
typedef VL_API_PACKED(struct _vl_api_bond_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 id;
    u8 use_custom_mac;
    u8 mac_address[6];
    u8 mode;
    u8 lb;
    u8 numa_only;
}) vl_api_bond_create_t;
#endif

#ifndef _vl_api_defined_bond_create_reply
#define _vl_api_defined_bond_create_reply
typedef VL_API_PACKED(struct _vl_api_bond_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_bond_create_reply_t;
#endif

#ifndef _vl_api_defined_bond_delete
#define _vl_api_defined_bond_delete
typedef VL_API_PACKED(struct _vl_api_bond_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_bond_delete_t;
#endif

#ifndef _vl_api_defined_bond_delete_reply
#define _vl_api_defined_bond_delete_reply
typedef VL_API_PACKED(struct _vl_api_bond_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bond_delete_reply_t;
#endif

#ifndef _vl_api_defined_bond_enslave
#define _vl_api_defined_bond_enslave
typedef VL_API_PACKED(struct _vl_api_bond_enslave {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 bond_sw_if_index;
    u8 is_passive;
    u8 is_long_timeout;
}) vl_api_bond_enslave_t;
#endif

#ifndef _vl_api_defined_bond_enslave_reply
#define _vl_api_defined_bond_enslave_reply
typedef VL_API_PACKED(struct _vl_api_bond_enslave_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bond_enslave_reply_t;
#endif

#ifndef _vl_api_defined_bond_detach_slave
#define _vl_api_defined_bond_detach_slave
typedef VL_API_PACKED(struct _vl_api_bond_detach_slave {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_bond_detach_slave_t;
#endif

#ifndef _vl_api_defined_bond_detach_slave_reply
#define _vl_api_defined_bond_detach_slave_reply
typedef VL_API_PACKED(struct _vl_api_bond_detach_slave_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bond_detach_slave_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_bond_dump
#define _vl_api_defined_sw_interface_bond_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_bond_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sw_interface_bond_dump_t;
#endif

#ifndef _vl_api_defined_sw_interface_bond_details
#define _vl_api_defined_sw_interface_bond_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_bond_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 id;
    u8 interface_name[64];
    u8 mode;
    u8 lb;
    u8 numa_only;
    u32 active_slaves;
    u32 slaves;
}) vl_api_sw_interface_bond_details_t;
#endif

#ifndef _vl_api_defined_sw_interface_slave_dump
#define _vl_api_defined_sw_interface_slave_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_slave_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_sw_interface_slave_dump_t;
#endif

#ifndef _vl_api_defined_sw_interface_slave_details
#define _vl_api_defined_sw_interface_slave_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_slave_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 interface_name[64];
    u8 is_passive;
    u8 is_long_timeout;
}) vl_api_sw_interface_slave_details_t;
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

#ifndef _vl_api_defined_bond_create_t_print
#define _vl_api_defined_bond_create_t_print
static inline void *vl_api_bond_create_t_print (vl_api_bond_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "use_custom_mac: %u\n", a->use_custom_mac);
    vl_print(handle, "mode: %u\n", a->mode);
    vl_print(handle, "lb: %u\n", a->lb);
    vl_print(handle, "numa_only: %u\n", a->numa_only);
    return handle;
}

#endif

#ifndef _vl_api_defined_bond_create_reply_t_print
#define _vl_api_defined_bond_create_reply_t_print
static inline void *vl_api_bond_create_reply_t_print (vl_api_bond_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bond_delete_t_print
#define _vl_api_defined_bond_delete_t_print
static inline void *vl_api_bond_delete_t_print (vl_api_bond_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bond_delete_reply_t_print
#define _vl_api_defined_bond_delete_reply_t_print
static inline void *vl_api_bond_delete_reply_t_print (vl_api_bond_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bond_enslave_t_print
#define _vl_api_defined_bond_enslave_t_print
static inline void *vl_api_bond_enslave_t_print (vl_api_bond_enslave_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_enslave_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "bond_sw_if_index: %u\n", a->bond_sw_if_index);
    vl_print(handle, "is_passive: %u\n", a->is_passive);
    vl_print(handle, "is_long_timeout: %u\n", a->is_long_timeout);
    return handle;
}

#endif

#ifndef _vl_api_defined_bond_enslave_reply_t_print
#define _vl_api_defined_bond_enslave_reply_t_print
static inline void *vl_api_bond_enslave_reply_t_print (vl_api_bond_enslave_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_enslave_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bond_detach_slave_t_print
#define _vl_api_defined_bond_detach_slave_t_print
static inline void *vl_api_bond_detach_slave_t_print (vl_api_bond_detach_slave_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_detach_slave_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bond_detach_slave_reply_t_print
#define _vl_api_defined_bond_detach_slave_reply_t_print
static inline void *vl_api_bond_detach_slave_reply_t_print (vl_api_bond_detach_slave_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bond_detach_slave_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_bond_dump_t_print
#define _vl_api_defined_sw_interface_bond_dump_t_print
static inline void *vl_api_sw_interface_bond_dump_t_print (vl_api_sw_interface_bond_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_bond_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_bond_details_t_print
#define _vl_api_defined_sw_interface_bond_details_t_print
static inline void *vl_api_sw_interface_bond_details_t_print (vl_api_sw_interface_bond_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_bond_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "mode: %u\n", a->mode);
    vl_print(handle, "lb: %u\n", a->lb);
    vl_print(handle, "numa_only: %u\n", a->numa_only);
    vl_print(handle, "active_slaves: %u\n", a->active_slaves);
    vl_print(handle, "slaves: %u\n", a->slaves);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_slave_dump_t_print
#define _vl_api_defined_sw_interface_slave_dump_t_print
static inline void *vl_api_sw_interface_slave_dump_t_print (vl_api_sw_interface_slave_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_slave_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_slave_details_t_print
#define _vl_api_defined_sw_interface_slave_details_t_print
static inline void *vl_api_sw_interface_slave_details_t_print (vl_api_sw_interface_slave_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_slave_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_passive: %u\n", a->is_passive);
    vl_print(handle, "is_long_timeout: %u\n", a->is_long_timeout);
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

#ifndef _vl_api_defined_bond_create_t_endian
#define _vl_api_defined_bond_create_t_endian
static inline void vl_api_bond_create_t_endian (vl_api_bond_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u32(a->id);
    /* a->use_custom_mac = a->use_custom_mac (no-op) */
    /* a->mode = a->mode (no-op) */
    /* a->lb = a->lb (no-op) */
    /* a->numa_only = a->numa_only (no-op) */
}

#endif

#ifndef _vl_api_defined_bond_create_reply_t_endian
#define _vl_api_defined_bond_create_reply_t_endian
static inline void vl_api_bond_create_reply_t_endian (vl_api_bond_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_bond_delete_t_endian
#define _vl_api_defined_bond_delete_t_endian
static inline void vl_api_bond_delete_t_endian (vl_api_bond_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_bond_delete_reply_t_endian
#define _vl_api_defined_bond_delete_reply_t_endian
static inline void vl_api_bond_delete_reply_t_endian (vl_api_bond_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bond_enslave_t_endian
#define _vl_api_defined_bond_enslave_t_endian
static inline void vl_api_bond_enslave_t_endian (vl_api_bond_enslave_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->bond_sw_if_index = clib_net_to_host_u32(a->bond_sw_if_index);
    /* a->is_passive = a->is_passive (no-op) */
    /* a->is_long_timeout = a->is_long_timeout (no-op) */
}

#endif

#ifndef _vl_api_defined_bond_enslave_reply_t_endian
#define _vl_api_defined_bond_enslave_reply_t_endian
static inline void vl_api_bond_enslave_reply_t_endian (vl_api_bond_enslave_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bond_detach_slave_t_endian
#define _vl_api_defined_bond_detach_slave_t_endian
static inline void vl_api_bond_detach_slave_t_endian (vl_api_bond_detach_slave_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_bond_detach_slave_reply_t_endian
#define _vl_api_defined_bond_detach_slave_reply_t_endian
static inline void vl_api_bond_detach_slave_reply_t_endian (vl_api_bond_detach_slave_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_bond_dump_t_endian
#define _vl_api_defined_sw_interface_bond_dump_t_endian
static inline void vl_api_sw_interface_bond_dump_t_endian (vl_api_sw_interface_bond_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sw_interface_bond_details_t_endian
#define _vl_api_defined_sw_interface_bond_details_t_endian
static inline void vl_api_sw_interface_bond_details_t_endian (vl_api_sw_interface_bond_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->id = clib_net_to_host_u32(a->id);
    /* a->mode = a->mode (no-op) */
    /* a->lb = a->lb (no-op) */
    /* a->numa_only = a->numa_only (no-op) */
    a->active_slaves = clib_net_to_host_u32(a->active_slaves);
    a->slaves = clib_net_to_host_u32(a->slaves);
}

#endif

#ifndef _vl_api_defined_sw_interface_slave_dump_t_endian
#define _vl_api_defined_sw_interface_slave_dump_t_endian
static inline void vl_api_sw_interface_slave_dump_t_endian (vl_api_sw_interface_slave_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_sw_interface_slave_details_t_endian
#define _vl_api_defined_sw_interface_slave_details_t_endian
static inline void vl_api_sw_interface_slave_details_t_endian (vl_api_sw_interface_slave_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_passive = a->is_passive (no-op) */
    /* a->is_long_timeout = a->is_long_timeout (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(bond.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(bond.api, 0xf29d9886)

#endif

