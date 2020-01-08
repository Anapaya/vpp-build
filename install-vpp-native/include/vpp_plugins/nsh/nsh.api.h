/*
 * VLIB API definitions 2020-01-07 14:21:52
 * Input file: nsh.api
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
#warning no content included from nsh.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_NSH_ADD_DEL_ENTRY, vl_api_nsh_add_del_entry_t_handler)
vl_msg_id(VL_API_NSH_ADD_DEL_ENTRY_REPLY, vl_api_nsh_add_del_entry_reply_t_handler)
vl_msg_id(VL_API_NSH_ENTRY_DUMP, vl_api_nsh_entry_dump_t_handler)
vl_msg_id(VL_API_NSH_ENTRY_DETAILS, vl_api_nsh_entry_details_t_handler)
vl_msg_id(VL_API_NSH_ADD_DEL_MAP, vl_api_nsh_add_del_map_t_handler)
vl_msg_id(VL_API_NSH_ADD_DEL_MAP_REPLY, vl_api_nsh_add_del_map_reply_t_handler)
vl_msg_id(VL_API_NSH_MAP_DUMP, vl_api_nsh_map_dump_t_handler)
vl_msg_id(VL_API_NSH_MAP_DETAILS, vl_api_nsh_map_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_nsh_add_del_entry_t, 1)
vl_msg_name(vl_api_nsh_add_del_entry_reply_t, 1)
vl_msg_name(vl_api_nsh_entry_dump_t, 1)
vl_msg_name(vl_api_nsh_entry_details_t, 1)
vl_msg_name(vl_api_nsh_add_del_map_t, 1)
vl_msg_name(vl_api_nsh_add_del_map_reply_t, 1)
vl_msg_name(vl_api_nsh_map_dump_t, 1)
vl_msg_name(vl_api_nsh_map_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_nsh \
_(VL_API_NSH_ADD_DEL_ENTRY, nsh_add_del_entry, 395ee8fb) \
_(VL_API_NSH_ADD_DEL_ENTRY_REPLY, nsh_add_del_entry_reply, 6296a9eb) \
_(VL_API_NSH_ENTRY_DUMP, nsh_entry_dump, cdaf8ccb) \
_(VL_API_NSH_ENTRY_DETAILS, nsh_entry_details, 046fb556) \
_(VL_API_NSH_ADD_DEL_MAP, nsh_add_del_map, 3af737a1) \
_(VL_API_NSH_ADD_DEL_MAP_REPLY, nsh_add_del_map_reply, b2b127ef) \
_(VL_API_NSH_MAP_DUMP, nsh_map_dump, 8fc06b82) \
_(VL_API_NSH_MAP_DETAILS, nsh_map_details, a5c4e8fa) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_nsh_api
#define included_nsh_api
#ifndef _vl_api_defined_nsh_add_del_entry
#define _vl_api_defined_nsh_add_del_entry
typedef VL_API_PACKED(struct _vl_api_nsh_add_del_entry {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 nsp_nsi;
    u8 md_type;
    u8 ver_o_c;
    u8 ttl;
    u8 length;
    u8 next_protocol;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    u8 tlv_length;
    u8 tlv[248];
}) vl_api_nsh_add_del_entry_t;
#endif

#ifndef _vl_api_defined_nsh_add_del_entry_reply
#define _vl_api_defined_nsh_add_del_entry_reply
typedef VL_API_PACKED(struct _vl_api_nsh_add_del_entry_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 entry_index;
}) vl_api_nsh_add_del_entry_reply_t;
#endif

#ifndef _vl_api_defined_nsh_entry_dump
#define _vl_api_defined_nsh_entry_dump
typedef VL_API_PACKED(struct _vl_api_nsh_entry_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 entry_index;
}) vl_api_nsh_entry_dump_t;
#endif

#ifndef _vl_api_defined_nsh_entry_details
#define _vl_api_defined_nsh_entry_details
typedef VL_API_PACKED(struct _vl_api_nsh_entry_details {
    u16 _vl_msg_id;
    u32 context;
    u32 entry_index;
    u32 nsp_nsi;
    u8 md_type;
    u8 ver_o_c;
    u8 ttl;
    u8 length;
    u8 next_protocol;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    u8 tlv_length;
    u8 tlv[248];
}) vl_api_nsh_entry_details_t;
#endif

#ifndef _vl_api_defined_nsh_add_del_map
#define _vl_api_defined_nsh_add_del_map
typedef VL_API_PACKED(struct _vl_api_nsh_add_del_map {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 nsp_nsi;
    u32 mapped_nsp_nsi;
    u32 nsh_action;
    u32 sw_if_index;
    u32 rx_sw_if_index;
    u32 next_node;
}) vl_api_nsh_add_del_map_t;
#endif

#ifndef _vl_api_defined_nsh_add_del_map_reply
#define _vl_api_defined_nsh_add_del_map_reply
typedef VL_API_PACKED(struct _vl_api_nsh_add_del_map_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 map_index;
}) vl_api_nsh_add_del_map_reply_t;
#endif

#ifndef _vl_api_defined_nsh_map_dump
#define _vl_api_defined_nsh_map_dump
typedef VL_API_PACKED(struct _vl_api_nsh_map_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 map_index;
}) vl_api_nsh_map_dump_t;
#endif

#ifndef _vl_api_defined_nsh_map_details
#define _vl_api_defined_nsh_map_details
typedef VL_API_PACKED(struct _vl_api_nsh_map_details {
    u16 _vl_msg_id;
    u32 context;
    u32 map_index;
    u32 nsp_nsi;
    u32 mapped_nsp_nsi;
    u32 nsh_action;
    u32 sw_if_index;
    u32 rx_sw_if_index;
    u32 next_node;
}) vl_api_nsh_map_details_t;
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

#ifndef _vl_api_defined_nsh_add_del_entry_t_print
#define _vl_api_defined_nsh_add_del_entry_t_print
static inline void *vl_api_nsh_add_del_entry_t_print (vl_api_nsh_add_del_entry_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_add_del_entry_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "nsp_nsi: %u\n", a->nsp_nsi);
    vl_print(handle, "md_type: %u\n", a->md_type);
    vl_print(handle, "ver_o_c: %u\n", a->ver_o_c);
    vl_print(handle, "ttl: %u\n", a->ttl);
    vl_print(handle, "length: %u\n", a->length);
    vl_print(handle, "next_protocol: %u\n", a->next_protocol);
    vl_print(handle, "c1: %u\n", a->c1);
    vl_print(handle, "c2: %u\n", a->c2);
    vl_print(handle, "c3: %u\n", a->c3);
    vl_print(handle, "c4: %u\n", a->c4);
    vl_print(handle, "tlv_length: %u\n", a->tlv_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsh_add_del_entry_reply_t_print
#define _vl_api_defined_nsh_add_del_entry_reply_t_print
static inline void *vl_api_nsh_add_del_entry_reply_t_print (vl_api_nsh_add_del_entry_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_add_del_entry_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "entry_index: %u\n", a->entry_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsh_entry_dump_t_print
#define _vl_api_defined_nsh_entry_dump_t_print
static inline void *vl_api_nsh_entry_dump_t_print (vl_api_nsh_entry_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_entry_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "entry_index: %u\n", a->entry_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsh_entry_details_t_print
#define _vl_api_defined_nsh_entry_details_t_print
static inline void *vl_api_nsh_entry_details_t_print (vl_api_nsh_entry_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_entry_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "entry_index: %u\n", a->entry_index);
    vl_print(handle, "nsp_nsi: %u\n", a->nsp_nsi);
    vl_print(handle, "md_type: %u\n", a->md_type);
    vl_print(handle, "ver_o_c: %u\n", a->ver_o_c);
    vl_print(handle, "ttl: %u\n", a->ttl);
    vl_print(handle, "length: %u\n", a->length);
    vl_print(handle, "next_protocol: %u\n", a->next_protocol);
    vl_print(handle, "c1: %u\n", a->c1);
    vl_print(handle, "c2: %u\n", a->c2);
    vl_print(handle, "c3: %u\n", a->c3);
    vl_print(handle, "c4: %u\n", a->c4);
    vl_print(handle, "tlv_length: %u\n", a->tlv_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsh_add_del_map_t_print
#define _vl_api_defined_nsh_add_del_map_t_print
static inline void *vl_api_nsh_add_del_map_t_print (vl_api_nsh_add_del_map_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_add_del_map_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "nsp_nsi: %u\n", a->nsp_nsi);
    vl_print(handle, "mapped_nsp_nsi: %u\n", a->mapped_nsp_nsi);
    vl_print(handle, "nsh_action: %u\n", a->nsh_action);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "rx_sw_if_index: %u\n", a->rx_sw_if_index);
    vl_print(handle, "next_node: %u\n", a->next_node);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsh_add_del_map_reply_t_print
#define _vl_api_defined_nsh_add_del_map_reply_t_print
static inline void *vl_api_nsh_add_del_map_reply_t_print (vl_api_nsh_add_del_map_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_add_del_map_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "map_index: %u\n", a->map_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsh_map_dump_t_print
#define _vl_api_defined_nsh_map_dump_t_print
static inline void *vl_api_nsh_map_dump_t_print (vl_api_nsh_map_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_map_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "map_index: %u\n", a->map_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsh_map_details_t_print
#define _vl_api_defined_nsh_map_details_t_print
static inline void *vl_api_nsh_map_details_t_print (vl_api_nsh_map_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsh_map_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "map_index: %u\n", a->map_index);
    vl_print(handle, "nsp_nsi: %u\n", a->nsp_nsi);
    vl_print(handle, "mapped_nsp_nsi: %u\n", a->mapped_nsp_nsi);
    vl_print(handle, "nsh_action: %u\n", a->nsh_action);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "rx_sw_if_index: %u\n", a->rx_sw_if_index);
    vl_print(handle, "next_node: %u\n", a->next_node);
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

#ifndef _vl_api_defined_nsh_add_del_entry_t_endian
#define _vl_api_defined_nsh_add_del_entry_t_endian
static inline void vl_api_nsh_add_del_entry_t_endian (vl_api_nsh_add_del_entry_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->nsp_nsi = clib_net_to_host_u32(a->nsp_nsi);
    /* a->md_type = a->md_type (no-op) */
    /* a->ver_o_c = a->ver_o_c (no-op) */
    /* a->ttl = a->ttl (no-op) */
    /* a->length = a->length (no-op) */
    /* a->next_protocol = a->next_protocol (no-op) */
    a->c1 = clib_net_to_host_u32(a->c1);
    a->c2 = clib_net_to_host_u32(a->c2);
    a->c3 = clib_net_to_host_u32(a->c3);
    a->c4 = clib_net_to_host_u32(a->c4);
    /* a->tlv_length = a->tlv_length (no-op) */
}

#endif

#ifndef _vl_api_defined_nsh_add_del_entry_reply_t_endian
#define _vl_api_defined_nsh_add_del_entry_reply_t_endian
static inline void vl_api_nsh_add_del_entry_reply_t_endian (vl_api_nsh_add_del_entry_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->entry_index = clib_net_to_host_u32(a->entry_index);
}

#endif

#ifndef _vl_api_defined_nsh_entry_dump_t_endian
#define _vl_api_defined_nsh_entry_dump_t_endian
static inline void vl_api_nsh_entry_dump_t_endian (vl_api_nsh_entry_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->entry_index = clib_net_to_host_u32(a->entry_index);
}

#endif

#ifndef _vl_api_defined_nsh_entry_details_t_endian
#define _vl_api_defined_nsh_entry_details_t_endian
static inline void vl_api_nsh_entry_details_t_endian (vl_api_nsh_entry_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->entry_index = clib_net_to_host_u32(a->entry_index);
    a->nsp_nsi = clib_net_to_host_u32(a->nsp_nsi);
    /* a->md_type = a->md_type (no-op) */
    /* a->ver_o_c = a->ver_o_c (no-op) */
    /* a->ttl = a->ttl (no-op) */
    /* a->length = a->length (no-op) */
    /* a->next_protocol = a->next_protocol (no-op) */
    a->c1 = clib_net_to_host_u32(a->c1);
    a->c2 = clib_net_to_host_u32(a->c2);
    a->c3 = clib_net_to_host_u32(a->c3);
    a->c4 = clib_net_to_host_u32(a->c4);
    /* a->tlv_length = a->tlv_length (no-op) */
}

#endif

#ifndef _vl_api_defined_nsh_add_del_map_t_endian
#define _vl_api_defined_nsh_add_del_map_t_endian
static inline void vl_api_nsh_add_del_map_t_endian (vl_api_nsh_add_del_map_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->nsp_nsi = clib_net_to_host_u32(a->nsp_nsi);
    a->mapped_nsp_nsi = clib_net_to_host_u32(a->mapped_nsp_nsi);
    a->nsh_action = clib_net_to_host_u32(a->nsh_action);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->rx_sw_if_index = clib_net_to_host_u32(a->rx_sw_if_index);
    a->next_node = clib_net_to_host_u32(a->next_node);
}

#endif

#ifndef _vl_api_defined_nsh_add_del_map_reply_t_endian
#define _vl_api_defined_nsh_add_del_map_reply_t_endian
static inline void vl_api_nsh_add_del_map_reply_t_endian (vl_api_nsh_add_del_map_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->map_index = clib_net_to_host_u32(a->map_index);
}

#endif

#ifndef _vl_api_defined_nsh_map_dump_t_endian
#define _vl_api_defined_nsh_map_dump_t_endian
static inline void vl_api_nsh_map_dump_t_endian (vl_api_nsh_map_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->map_index = clib_net_to_host_u32(a->map_index);
}

#endif

#ifndef _vl_api_defined_nsh_map_details_t_endian
#define _vl_api_defined_nsh_map_details_t_endian
static inline void vl_api_nsh_map_details_t_endian (vl_api_nsh_map_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->map_index = clib_net_to_host_u32(a->map_index);
    a->nsp_nsi = clib_net_to_host_u32(a->nsp_nsi);
    a->mapped_nsp_nsi = clib_net_to_host_u32(a->mapped_nsp_nsi);
    a->nsh_action = clib_net_to_host_u32(a->nsh_action);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->rx_sw_if_index = clib_net_to_host_u32(a->rx_sw_if_index);
    a->next_node = clib_net_to_host_u32(a->next_node);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple


#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(nsh.api, 0x6de57acf)

#endif

