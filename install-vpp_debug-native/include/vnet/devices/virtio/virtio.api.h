/*
 * VLIB API definitions 2020-01-07 14:25:07
 * Input file: virtio.api
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
#warning no content included from virtio.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VIRTIO_PCI_CREATE, vl_api_virtio_pci_create_t_handler)
vl_msg_id(VL_API_VIRTIO_PCI_CREATE_REPLY, vl_api_virtio_pci_create_reply_t_handler)
vl_msg_id(VL_API_VIRTIO_PCI_DELETE, vl_api_virtio_pci_delete_t_handler)
vl_msg_id(VL_API_VIRTIO_PCI_DELETE_REPLY, vl_api_virtio_pci_delete_reply_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VIRTIO_PCI_DUMP, vl_api_sw_interface_virtio_pci_dump_t_handler)
vl_msg_id(VL_API_SW_INTERFACE_VIRTIO_PCI_DETAILS, vl_api_sw_interface_virtio_pci_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_virtio_pci_create_t, 1)
vl_msg_name(vl_api_virtio_pci_create_reply_t, 1)
vl_msg_name(vl_api_virtio_pci_delete_t, 1)
vl_msg_name(vl_api_virtio_pci_delete_reply_t, 1)
vl_msg_name(vl_api_sw_interface_virtio_pci_dump_t, 1)
vl_msg_name(vl_api_sw_interface_virtio_pci_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_virtio \
_(VL_API_VIRTIO_PCI_CREATE, virtio_pci_create, 2964dcb5) \
_(VL_API_VIRTIO_PCI_CREATE_REPLY, virtio_pci_create_reply, fda5941f) \
_(VL_API_VIRTIO_PCI_DELETE, virtio_pci_delete, 529cb13f) \
_(VL_API_VIRTIO_PCI_DELETE_REPLY, virtio_pci_delete_reply, e8d4e804) \
_(VL_API_SW_INTERFACE_VIRTIO_PCI_DUMP, sw_interface_virtio_pci_dump, 51077d14) \
_(VL_API_SW_INTERFACE_VIRTIO_PCI_DETAILS, sw_interface_virtio_pci_details, d3a3ade3) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_virtio_api
#define included_virtio_api
#ifndef _vl_api_defined_virtio_pci_create
#define _vl_api_defined_virtio_pci_create
typedef VL_API_PACKED(struct _vl_api_virtio_pci_create {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 pci_addr;
    u8 use_random_mac;
    u8 mac_address[6];
    u8 gso_enabled;
    u64 features;
}) vl_api_virtio_pci_create_t;
#endif

#ifndef _vl_api_defined_virtio_pci_create_reply
#define _vl_api_defined_virtio_pci_create_reply
typedef VL_API_PACKED(struct _vl_api_virtio_pci_create_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
}) vl_api_virtio_pci_create_reply_t;
#endif

#ifndef _vl_api_defined_virtio_pci_delete
#define _vl_api_defined_virtio_pci_delete
typedef VL_API_PACKED(struct _vl_api_virtio_pci_delete {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_virtio_pci_delete_t;
#endif

#ifndef _vl_api_defined_virtio_pci_delete_reply
#define _vl_api_defined_virtio_pci_delete_reply
typedef VL_API_PACKED(struct _vl_api_virtio_pci_delete_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_virtio_pci_delete_reply_t;
#endif

#ifndef _vl_api_defined_sw_interface_virtio_pci_dump
#define _vl_api_defined_sw_interface_virtio_pci_dump
typedef VL_API_PACKED(struct _vl_api_sw_interface_virtio_pci_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sw_interface_virtio_pci_dump_t;
#endif

#ifndef _vl_api_defined_sw_interface_virtio_pci_details
#define _vl_api_defined_sw_interface_virtio_pci_details
typedef VL_API_PACKED(struct _vl_api_sw_interface_virtio_pci_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 pci_addr;
    u8 mac_addr[6];
    u16 tx_ring_sz;
    u16 rx_ring_sz;
    u64 features;
}) vl_api_sw_interface_virtio_pci_details_t;
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

#ifndef _vl_api_defined_virtio_pci_create_t_print
#define _vl_api_defined_virtio_pci_create_t_print
static inline void *vl_api_virtio_pci_create_t_print (vl_api_virtio_pci_create_t *a,void *handle)
{
    vl_print(handle, "vl_api_virtio_pci_create_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "pci_addr: %u\n", a->pci_addr);
    vl_print(handle, "use_random_mac: %u\n", a->use_random_mac);
    vl_print(handle, "gso_enabled: %u\n", a->gso_enabled);
    vl_print(handle, "features: %llu\n", a->features);
    return handle;
}

#endif

#ifndef _vl_api_defined_virtio_pci_create_reply_t_print
#define _vl_api_defined_virtio_pci_create_reply_t_print
static inline void *vl_api_virtio_pci_create_reply_t_print (vl_api_virtio_pci_create_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_virtio_pci_create_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_virtio_pci_delete_t_print
#define _vl_api_defined_virtio_pci_delete_t_print
static inline void *vl_api_virtio_pci_delete_t_print (vl_api_virtio_pci_delete_t *a,void *handle)
{
    vl_print(handle, "vl_api_virtio_pci_delete_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_virtio_pci_delete_reply_t_print
#define _vl_api_defined_virtio_pci_delete_reply_t_print
static inline void *vl_api_virtio_pci_delete_reply_t_print (vl_api_virtio_pci_delete_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_virtio_pci_delete_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_virtio_pci_dump_t_print
#define _vl_api_defined_sw_interface_virtio_pci_dump_t_print
static inline void *vl_api_sw_interface_virtio_pci_dump_t_print (vl_api_sw_interface_virtio_pci_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_virtio_pci_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sw_interface_virtio_pci_details_t_print
#define _vl_api_defined_sw_interface_virtio_pci_details_t_print
static inline void *vl_api_sw_interface_virtio_pci_details_t_print (vl_api_sw_interface_virtio_pci_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sw_interface_virtio_pci_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "pci_addr: %u\n", a->pci_addr);
    vl_print(handle, "tx_ring_sz: %u\n", a->tx_ring_sz);
    vl_print(handle, "rx_ring_sz: %u\n", a->rx_ring_sz);
    vl_print(handle, "features: %llu\n", a->features);
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

#ifndef _vl_api_defined_virtio_pci_create_t_endian
#define _vl_api_defined_virtio_pci_create_t_endian
static inline void vl_api_virtio_pci_create_t_endian (vl_api_virtio_pci_create_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->pci_addr = clib_net_to_host_u32(a->pci_addr);
    /* a->use_random_mac = a->use_random_mac (no-op) */
    /* a->gso_enabled = a->gso_enabled (no-op) */
    a->features = clib_net_to_host_u64(a->features);
}

#endif

#ifndef _vl_api_defined_virtio_pci_create_reply_t_endian
#define _vl_api_defined_virtio_pci_create_reply_t_endian
static inline void vl_api_virtio_pci_create_reply_t_endian (vl_api_virtio_pci_create_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_virtio_pci_delete_t_endian
#define _vl_api_defined_virtio_pci_delete_t_endian
static inline void vl_api_virtio_pci_delete_t_endian (vl_api_virtio_pci_delete_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_virtio_pci_delete_reply_t_endian
#define _vl_api_defined_virtio_pci_delete_reply_t_endian
static inline void vl_api_virtio_pci_delete_reply_t_endian (vl_api_virtio_pci_delete_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sw_interface_virtio_pci_dump_t_endian
#define _vl_api_defined_sw_interface_virtio_pci_dump_t_endian
static inline void vl_api_sw_interface_virtio_pci_dump_t_endian (vl_api_sw_interface_virtio_pci_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sw_interface_virtio_pci_details_t_endian
#define _vl_api_defined_sw_interface_virtio_pci_details_t_endian
static inline void vl_api_sw_interface_virtio_pci_details_t_endian (vl_api_sw_interface_virtio_pci_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->pci_addr = clib_net_to_host_u32(a->pci_addr);
    a->tx_ring_sz = clib_net_to_host_u16(a->tx_ring_sz);
    a->rx_ring_sz = clib_net_to_host_u16(a->rx_ring_sz);
    a->features = clib_net_to_host_u64(a->features);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(virtio.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(virtio.api, 0xcffb2d69)

#endif

