/*
 * VLIB API definitions 2020-01-07 14:20:13
 * Input file: avf.api
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
#warning no content included from avf.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_AVF_CREATE, vl_api_avf_create_t_handler)
vl_msg_id(VL_API_AVF_CREATE_REPLY, vl_api_avf_create_reply_t_handler)
vl_msg_id(VL_API_AVF_DELETE, vl_api_avf_delete_t_handler)
vl_msg_id(VL_API_AVF_DELETE_REPLY, vl_api_avf_delete_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_avf_create_t, 1)
vl_msg_name(vl_api_avf_create_reply_t, 1)
vl_msg_name(vl_api_avf_delete_t, 1)
vl_msg_name(vl_api_avf_delete_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_avf \
_(VL_API_AVF_CREATE, avf_create, daab8ae2) \
_(VL_API_AVF_CREATE_REPLY, avf_create_reply, fda5941f) \
_(VL_API_AVF_DELETE, avf_delete, 529cb13f) \
_(VL_API_AVF_DELETE_REPLY, avf_delete_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_avf_api
#define included_avf_api
#ifndef _vl_api_defined_avf_create
#define _vl_api_defined_avf_create
typedef VL_API_PACKED(struct _vl_api_avf_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 pci_addr;
    i32 enable_elog;
    u16 rxq_num;
    u16 rxq_size;
    u16 txq_size;
}) vl_api_avf_create_t;
#endif

#ifndef _vl_api_defined_avf_create_reply
#define _vl_api_defined_avf_create_reply
typedef VL_API_PACKED(struct _vl_api_avf_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_avf_create_reply_t;
#endif

#ifndef _vl_api_defined_avf_delete
#define _vl_api_defined_avf_delete
typedef VL_API_PACKED(struct _vl_api_avf_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_avf_delete_t;
#endif

#ifndef _vl_api_defined_avf_delete_reply
#define _vl_api_defined_avf_delete_reply
typedef VL_API_PACKED(struct _vl_api_avf_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_avf_delete_reply_t;
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

#ifndef _vl_api_defined_avf_create_t_print
#define _vl_api_defined_avf_create_t_print
static inline void *vl_api_avf_create_t_print (vl_api_avf_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_avf_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "pci_addr: %u\n", a->pci_addr);
    vl_print(handle, "enable_elog: %ld\n", a->enable_elog);
    vl_print(handle, "rxq_num: %u\n", a->rxq_num);
    vl_print(handle, "rxq_size: %u\n", a->rxq_size);
    vl_print(handle, "txq_size: %u\n", a->txq_size);
    return handle;
}

#endif

#ifndef _vl_api_defined_avf_create_reply_t_print
#define _vl_api_defined_avf_create_reply_t_print
static inline void *vl_api_avf_create_reply_t_print (vl_api_avf_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_avf_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_avf_delete_t_print
#define _vl_api_defined_avf_delete_t_print
static inline void *vl_api_avf_delete_t_print (vl_api_avf_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_avf_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_avf_delete_reply_t_print
#define _vl_api_defined_avf_delete_reply_t_print
static inline void *vl_api_avf_delete_reply_t_print (vl_api_avf_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_avf_delete_reply_t:\n");
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

#ifndef _vl_api_defined_avf_create_t_endian
#define _vl_api_defined_avf_create_t_endian
static inline void vl_api_avf_create_t_endian (vl_api_avf_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->pci_addr = clib_net_to_host_u32(a->pci_addr);
    a->enable_elog = clib_net_to_host_u32(a->enable_elog);
    a->rxq_num = clib_net_to_host_u16(a->rxq_num);
    a->rxq_size = clib_net_to_host_u16(a->rxq_size);
    a->txq_size = clib_net_to_host_u16(a->txq_size);
}

#endif

#ifndef _vl_api_defined_avf_create_reply_t_endian
#define _vl_api_defined_avf_create_reply_t_endian
static inline void vl_api_avf_create_reply_t_endian (vl_api_avf_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_avf_delete_t_endian
#define _vl_api_defined_avf_delete_t_endian
static inline void vl_api_avf_delete_t_endian (vl_api_avf_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_avf_delete_reply_t_endian
#define _vl_api_defined_avf_delete_reply_t_endian
static inline void vl_api_avf_delete_reply_t_endian (vl_api_avf_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(avf.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(avf.api, 0x3dffe16a)

#endif

