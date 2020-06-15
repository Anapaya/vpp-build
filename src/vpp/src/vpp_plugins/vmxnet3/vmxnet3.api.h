/*
 * VLIB API definitions 2020-06-13 06:02:15
 * Input file: vmxnet3.api
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
#warning no content included from vmxnet3.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VMXNET3_CREATE, vl_api_vmxnet3_create_t_handler)
vl_msg_id(VL_API_VMXNET3_CREATE_REPLY, vl_api_vmxnet3_create_reply_t_handler)
vl_msg_id(VL_API_VMXNET3_DELETE, vl_api_vmxnet3_delete_t_handler)
vl_msg_id(VL_API_VMXNET3_DELETE_REPLY, vl_api_vmxnet3_delete_reply_t_handler)
vl_msg_id(VL_API_VMXNET3_DETAILS, vl_api_vmxnet3_details_t_handler)
vl_msg_id(VL_API_VMXNET3_DUMP, vl_api_vmxnet3_dump_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_vmxnet3_create_t, 1)
vl_msg_name(vl_api_vmxnet3_create_reply_t, 1)
vl_msg_name(vl_api_vmxnet3_delete_t, 1)
vl_msg_name(vl_api_vmxnet3_delete_reply_t, 1)
vl_msg_name(vl_api_vmxnet3_details_t, 1)
vl_msg_name(vl_api_vmxnet3_dump_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vmxnet3 \
_(VL_API_VMXNET3_CREATE, vmxnet3_create, 6da613a5) \
_(VL_API_VMXNET3_CREATE_REPLY, vmxnet3_create_reply, fda5941f) \
_(VL_API_VMXNET3_DELETE, vmxnet3_delete, 529cb13f) \
_(VL_API_VMXNET3_DELETE_REPLY, vmxnet3_delete_reply, e8d4e804) \
_(VL_API_VMXNET3_DETAILS, vmxnet3_details, 25f4412f) \
_(VL_API_VMXNET3_DUMP, vmxnet3_dump, 51077d14) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_vmxnet3_api
#define included_vmxnet3_api
#ifndef _vl_api_defined_vmxnet3_tx_list
#define _vl_api_defined_vmxnet3_tx_list
typedef VL_API_PACKED(struct _vl_api_vmxnet3_tx_list {
    u16 tx_qsize;
    u16 tx_next;
    u16 tx_produce;
    u16 tx_consume;
}) vl_api_vmxnet3_tx_list_t;
#endif

#ifndef _vl_api_defined_vmxnet3_rx_list
#define _vl_api_defined_vmxnet3_rx_list
typedef VL_API_PACKED(struct _vl_api_vmxnet3_rx_list {
    u16 rx_qsize;
    u16 rx_fill[2];
    u16 rx_next;
    u16 rx_produce[2];
    u16 rx_consume[2];
}) vl_api_vmxnet3_rx_list_t;
#endif

#ifndef _vl_api_defined_vmxnet3_create
#define _vl_api_defined_vmxnet3_create
typedef VL_API_PACKED(struct _vl_api_vmxnet3_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 pci_addr;
    i32 enable_elog;
    u16 rxq_size;
    u16 rxq_num;
    u16 txq_size;
    u16 txq_num;
    u8 bind;
}) vl_api_vmxnet3_create_t;
#endif

#ifndef _vl_api_defined_vmxnet3_create_reply
#define _vl_api_defined_vmxnet3_create_reply
typedef VL_API_PACKED(struct _vl_api_vmxnet3_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_vmxnet3_create_reply_t;
#endif

#ifndef _vl_api_defined_vmxnet3_delete
#define _vl_api_defined_vmxnet3_delete
typedef VL_API_PACKED(struct _vl_api_vmxnet3_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_vmxnet3_delete_t;
#endif

#ifndef _vl_api_defined_vmxnet3_delete_reply
#define _vl_api_defined_vmxnet3_delete_reply
typedef VL_API_PACKED(struct _vl_api_vmxnet3_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_vmxnet3_delete_reply_t;
#endif

#ifndef _vl_api_defined_vmxnet3_details
#define _vl_api_defined_vmxnet3_details
typedef VL_API_PACKED(struct _vl_api_vmxnet3_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 if_name[64];
    u8 hw_addr[6];
    u32 pci_addr;
    u8 version;
    u8 admin_up_down;
    u8 rx_count;
    vl_api_vmxnet3_rx_list_t rx_list[16];
    u8 tx_count;
    vl_api_vmxnet3_tx_list_t tx_list[8];
}) vl_api_vmxnet3_details_t;
#endif

#ifndef _vl_api_defined_vmxnet3_dump
#define _vl_api_defined_vmxnet3_dump
typedef VL_API_PACKED(struct _vl_api_vmxnet3_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_vmxnet3_dump_t;
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

#ifndef _vl_api_defined_vmxnet3_tx_list_t_print
#define _vl_api_defined_vmxnet3_tx_list_t_print
static inline void *vl_api_vmxnet3_tx_list_t_print (vl_api_vmxnet3_tx_list_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_tx_list_t:\n");
    vl_print(handle, "tx_qsize: %u\n", a->tx_qsize);
    vl_print(handle, "tx_next: %u\n", a->tx_next);
    vl_print(handle, "tx_produce: %u\n", a->tx_produce);
    vl_print(handle, "tx_consume: %u\n", a->tx_consume);
    return handle;
}

#endif

#ifndef _vl_api_defined_vmxnet3_rx_list_t_print
#define _vl_api_defined_vmxnet3_rx_list_t_print
static inline void *vl_api_vmxnet3_rx_list_t_print (vl_api_vmxnet3_rx_list_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_rx_list_t:\n");
    vl_print(handle, "rx_qsize: %u\n", a->rx_qsize);
    vl_print(handle, "rx_next: %u\n", a->rx_next);
    return handle;
}

#endif

#ifndef _vl_api_defined_vmxnet3_create_t_print
#define _vl_api_defined_vmxnet3_create_t_print
static inline void *vl_api_vmxnet3_create_t_print (vl_api_vmxnet3_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "pci_addr: %u\n", a->pci_addr);
    vl_print(handle, "enable_elog: %ld\n", a->enable_elog);
    vl_print(handle, "rxq_size: %u\n", a->rxq_size);
    vl_print(handle, "rxq_num: %u\n", a->rxq_num);
    vl_print(handle, "txq_size: %u\n", a->txq_size);
    vl_print(handle, "txq_num: %u\n", a->txq_num);
    vl_print(handle, "bind: %u\n", a->bind);
    return handle;
}

#endif

#ifndef _vl_api_defined_vmxnet3_create_reply_t_print
#define _vl_api_defined_vmxnet3_create_reply_t_print
static inline void *vl_api_vmxnet3_create_reply_t_print (vl_api_vmxnet3_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_vmxnet3_delete_t_print
#define _vl_api_defined_vmxnet3_delete_t_print
static inline void *vl_api_vmxnet3_delete_t_print (vl_api_vmxnet3_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_vmxnet3_delete_reply_t_print
#define _vl_api_defined_vmxnet3_delete_reply_t_print
static inline void *vl_api_vmxnet3_delete_reply_t_print (vl_api_vmxnet3_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_vmxnet3_details_t_print
#define _vl_api_defined_vmxnet3_details_t_print
static inline void *vl_api_vmxnet3_details_t_print (vl_api_vmxnet3_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "pci_addr: %u\n", a->pci_addr);
    vl_print(handle, "version: %u\n", a->version);
    vl_print(handle, "admin_up_down: %u\n", a->admin_up_down);
    vl_print(handle, "rx_count: %u\n", a->rx_count);
    vl_print(handle, "tx_count: %u\n", a->tx_count);
    return handle;
}

#endif

#ifndef _vl_api_defined_vmxnet3_dump_t_print
#define _vl_api_defined_vmxnet3_dump_t_print
static inline void *vl_api_vmxnet3_dump_t_print (vl_api_vmxnet3_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_vmxnet3_dump_t:\n");
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

#ifndef _vl_api_defined_vmxnet3_tx_list_t_endian
#define _vl_api_defined_vmxnet3_tx_list_t_endian
static inline void vl_api_vmxnet3_tx_list_t_endian (vl_api_vmxnet3_tx_list_t *a)
{
    a->tx_qsize = clib_net_to_host_u16(a->tx_qsize);
    a->tx_next = clib_net_to_host_u16(a->tx_next);
    a->tx_produce = clib_net_to_host_u16(a->tx_produce);
    a->tx_consume = clib_net_to_host_u16(a->tx_consume);
}

#endif

#ifndef _vl_api_defined_vmxnet3_rx_list_t_endian
#define _vl_api_defined_vmxnet3_rx_list_t_endian
static inline void vl_api_vmxnet3_rx_list_t_endian (vl_api_vmxnet3_rx_list_t *a)
{
    a->rx_qsize = clib_net_to_host_u16(a->rx_qsize);
    a->rx_next = clib_net_to_host_u16(a->rx_next);
}

#endif

#ifndef _vl_api_defined_vmxnet3_create_t_endian
#define _vl_api_defined_vmxnet3_create_t_endian
static inline void vl_api_vmxnet3_create_t_endian (vl_api_vmxnet3_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->pci_addr = clib_net_to_host_u32(a->pci_addr);
    a->enable_elog = clib_net_to_host_u32(a->enable_elog);
    a->rxq_size = clib_net_to_host_u16(a->rxq_size);
    a->rxq_num = clib_net_to_host_u16(a->rxq_num);
    a->txq_size = clib_net_to_host_u16(a->txq_size);
    a->txq_num = clib_net_to_host_u16(a->txq_num);
    /* a->bind = a->bind (no-op) */
}

#endif

#ifndef _vl_api_defined_vmxnet3_create_reply_t_endian
#define _vl_api_defined_vmxnet3_create_reply_t_endian
static inline void vl_api_vmxnet3_create_reply_t_endian (vl_api_vmxnet3_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_vmxnet3_delete_t_endian
#define _vl_api_defined_vmxnet3_delete_t_endian
static inline void vl_api_vmxnet3_delete_t_endian (vl_api_vmxnet3_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_vmxnet3_delete_reply_t_endian
#define _vl_api_defined_vmxnet3_delete_reply_t_endian
static inline void vl_api_vmxnet3_delete_reply_t_endian (vl_api_vmxnet3_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_vmxnet3_details_t_endian
#define _vl_api_defined_vmxnet3_details_t_endian
static inline void vl_api_vmxnet3_details_t_endian (vl_api_vmxnet3_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->pci_addr = clib_net_to_host_u32(a->pci_addr);
    /* a->version = a->version (no-op) */
    /* a->admin_up_down = a->admin_up_down (no-op) */
    /* a->rx_count = a->rx_count (no-op) */
    /* a->tx_count = a->tx_count (no-op) */
}

#endif

#ifndef _vl_api_defined_vmxnet3_dump_t_endian
#define _vl_api_defined_vmxnet3_dump_t_endian
static inline void vl_api_vmxnet3_dump_t_endian (vl_api_vmxnet3_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(vmxnet3.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vmxnet3.api, 0xe9e9abb1)

#endif

