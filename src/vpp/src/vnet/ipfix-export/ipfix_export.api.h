/*
 * VLIB API definitions 2020-06-13 06:00:57
 * Input file: ipfix_export.api
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
#warning no content included from ipfix_export.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SET_IPFIX_EXPORTER, vl_api_set_ipfix_exporter_t_handler)
vl_msg_id(VL_API_SET_IPFIX_EXPORTER_REPLY, vl_api_set_ipfix_exporter_reply_t_handler)
vl_msg_id(VL_API_IPFIX_EXPORTER_DUMP, vl_api_ipfix_exporter_dump_t_handler)
vl_msg_id(VL_API_IPFIX_EXPORTER_DETAILS, vl_api_ipfix_exporter_details_t_handler)
vl_msg_id(VL_API_SET_IPFIX_CLASSIFY_STREAM, vl_api_set_ipfix_classify_stream_t_handler)
vl_msg_id(VL_API_SET_IPFIX_CLASSIFY_STREAM_REPLY, vl_api_set_ipfix_classify_stream_reply_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_STREAM_DUMP, vl_api_ipfix_classify_stream_dump_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_STREAM_DETAILS, vl_api_ipfix_classify_stream_details_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL, vl_api_ipfix_classify_table_add_del_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL_REPLY, vl_api_ipfix_classify_table_add_del_reply_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_DUMP, vl_api_ipfix_classify_table_dump_t_handler)
vl_msg_id(VL_API_IPFIX_CLASSIFY_TABLE_DETAILS, vl_api_ipfix_classify_table_details_t_handler)
vl_msg_id(VL_API_IPFIX_FLUSH, vl_api_ipfix_flush_t_handler)
vl_msg_id(VL_API_IPFIX_FLUSH_REPLY, vl_api_ipfix_flush_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_set_ipfix_exporter_t, 1)
vl_msg_name(vl_api_set_ipfix_exporter_reply_t, 1)
vl_msg_name(vl_api_ipfix_exporter_dump_t, 1)
vl_msg_name(vl_api_ipfix_exporter_details_t, 1)
vl_msg_name(vl_api_set_ipfix_classify_stream_t, 1)
vl_msg_name(vl_api_set_ipfix_classify_stream_reply_t, 1)
vl_msg_name(vl_api_ipfix_classify_stream_dump_t, 1)
vl_msg_name(vl_api_ipfix_classify_stream_details_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_add_del_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_add_del_reply_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_dump_t, 1)
vl_msg_name(vl_api_ipfix_classify_table_details_t, 1)
vl_msg_name(vl_api_ipfix_flush_t, 1)
vl_msg_name(vl_api_ipfix_flush_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ipfix_export \
_(VL_API_SET_IPFIX_EXPORTER, set_ipfix_exporter, 4ff71dea) \
_(VL_API_SET_IPFIX_EXPORTER_REPLY, set_ipfix_exporter_reply, e8d4e804) \
_(VL_API_IPFIX_EXPORTER_DUMP, ipfix_exporter_dump, 51077d14) \
_(VL_API_IPFIX_EXPORTER_DETAILS, ipfix_exporter_details, 742dddee) \
_(VL_API_SET_IPFIX_CLASSIFY_STREAM, set_ipfix_classify_stream, c9cbe053) \
_(VL_API_SET_IPFIX_CLASSIFY_STREAM_REPLY, set_ipfix_classify_stream_reply, e8d4e804) \
_(VL_API_IPFIX_CLASSIFY_STREAM_DUMP, ipfix_classify_stream_dump, 51077d14) \
_(VL_API_IPFIX_CLASSIFY_STREAM_DETAILS, ipfix_classify_stream_details, 2903539d) \
_(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL, ipfix_classify_table_add_del, 48efe167) \
_(VL_API_IPFIX_CLASSIFY_TABLE_ADD_DEL_REPLY, ipfix_classify_table_add_del_reply, e8d4e804) \
_(VL_API_IPFIX_CLASSIFY_TABLE_DUMP, ipfix_classify_table_dump, 51077d14) \
_(VL_API_IPFIX_CLASSIFY_TABLE_DETAILS, ipfix_classify_table_details, 973d0d5b) \
_(VL_API_IPFIX_FLUSH, ipfix_flush, 51077d14) \
_(VL_API_IPFIX_FLUSH_REPLY, ipfix_flush_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_ipfix_export_api
#define included_ipfix_export_api
#ifndef _vl_api_defined_set_ipfix_exporter
#define _vl_api_defined_set_ipfix_exporter
typedef VL_API_PACKED(struct _vl_api_set_ipfix_exporter {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 collector_address[16];
    u16 collector_port;
    u8 src_address[16];
    u32 vrf_id;
    u32 path_mtu;
    u32 template_interval;
    u8 udp_checksum;
}) vl_api_set_ipfix_exporter_t;
#endif

#ifndef _vl_api_defined_set_ipfix_exporter_reply
#define _vl_api_defined_set_ipfix_exporter_reply
typedef VL_API_PACKED(struct _vl_api_set_ipfix_exporter_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_set_ipfix_exporter_reply_t;
#endif

#ifndef _vl_api_defined_ipfix_exporter_dump
#define _vl_api_defined_ipfix_exporter_dump
typedef VL_API_PACKED(struct _vl_api_ipfix_exporter_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ipfix_exporter_dump_t;
#endif

#ifndef _vl_api_defined_ipfix_exporter_details
#define _vl_api_defined_ipfix_exporter_details
typedef VL_API_PACKED(struct _vl_api_ipfix_exporter_details {
    u16 _vl_msg_id;
    u32 context;
    u8 collector_address[16];
    u16 collector_port;
    u8 src_address[16];
    u32 vrf_id;
    u32 path_mtu;
    u32 template_interval;
    u8 udp_checksum;
}) vl_api_ipfix_exporter_details_t;
#endif

#ifndef _vl_api_defined_set_ipfix_classify_stream
#define _vl_api_defined_set_ipfix_classify_stream
typedef VL_API_PACKED(struct _vl_api_set_ipfix_classify_stream {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 domain_id;
    u16 src_port;
}) vl_api_set_ipfix_classify_stream_t;
#endif

#ifndef _vl_api_defined_set_ipfix_classify_stream_reply
#define _vl_api_defined_set_ipfix_classify_stream_reply
typedef VL_API_PACKED(struct _vl_api_set_ipfix_classify_stream_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_set_ipfix_classify_stream_reply_t;
#endif

#ifndef _vl_api_defined_ipfix_classify_stream_dump
#define _vl_api_defined_ipfix_classify_stream_dump
typedef VL_API_PACKED(struct _vl_api_ipfix_classify_stream_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ipfix_classify_stream_dump_t;
#endif

#ifndef _vl_api_defined_ipfix_classify_stream_details
#define _vl_api_defined_ipfix_classify_stream_details
typedef VL_API_PACKED(struct _vl_api_ipfix_classify_stream_details {
    u16 _vl_msg_id;
    u32 context;
    u32 domain_id;
    u16 src_port;
}) vl_api_ipfix_classify_stream_details_t;
#endif

#ifndef _vl_api_defined_ipfix_classify_table_add_del
#define _vl_api_defined_ipfix_classify_table_add_del
typedef VL_API_PACKED(struct _vl_api_ipfix_classify_table_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 table_id;
    u8 ip_version;
    u8 transport_protocol;
    u8 is_add;
}) vl_api_ipfix_classify_table_add_del_t;
#endif

#ifndef _vl_api_defined_ipfix_classify_table_add_del_reply
#define _vl_api_defined_ipfix_classify_table_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ipfix_classify_table_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipfix_classify_table_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ipfix_classify_table_dump
#define _vl_api_defined_ipfix_classify_table_dump
typedef VL_API_PACKED(struct _vl_api_ipfix_classify_table_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ipfix_classify_table_dump_t;
#endif

#ifndef _vl_api_defined_ipfix_classify_table_details
#define _vl_api_defined_ipfix_classify_table_details
typedef VL_API_PACKED(struct _vl_api_ipfix_classify_table_details {
    u16 _vl_msg_id;
    u32 context;
    u32 table_id;
    u8 ip_version;
    u8 transport_protocol;
}) vl_api_ipfix_classify_table_details_t;
#endif

#ifndef _vl_api_defined_ipfix_flush
#define _vl_api_defined_ipfix_flush
typedef VL_API_PACKED(struct _vl_api_ipfix_flush {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ipfix_flush_t;
#endif

#ifndef _vl_api_defined_ipfix_flush_reply
#define _vl_api_defined_ipfix_flush_reply
typedef VL_API_PACKED(struct _vl_api_ipfix_flush_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ipfix_flush_reply_t;
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

#ifndef _vl_api_defined_set_ipfix_exporter_t_print
#define _vl_api_defined_set_ipfix_exporter_t_print
static inline void *vl_api_set_ipfix_exporter_t_print (vl_api_set_ipfix_exporter_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_ipfix_exporter_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "collector_port: %u\n", a->collector_port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "path_mtu: %u\n", a->path_mtu);
    vl_print(handle, "template_interval: %u\n", a->template_interval);
    vl_print(handle, "udp_checksum: %u\n", a->udp_checksum);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_ipfix_exporter_reply_t_print
#define _vl_api_defined_set_ipfix_exporter_reply_t_print
static inline void *vl_api_set_ipfix_exporter_reply_t_print (vl_api_set_ipfix_exporter_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_ipfix_exporter_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_exporter_dump_t_print
#define _vl_api_defined_ipfix_exporter_dump_t_print
static inline void *vl_api_ipfix_exporter_dump_t_print (vl_api_ipfix_exporter_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_exporter_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_exporter_details_t_print
#define _vl_api_defined_ipfix_exporter_details_t_print
static inline void *vl_api_ipfix_exporter_details_t_print (vl_api_ipfix_exporter_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_exporter_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "collector_port: %u\n", a->collector_port);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    vl_print(handle, "path_mtu: %u\n", a->path_mtu);
    vl_print(handle, "template_interval: %u\n", a->template_interval);
    vl_print(handle, "udp_checksum: %u\n", a->udp_checksum);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_ipfix_classify_stream_t_print
#define _vl_api_defined_set_ipfix_classify_stream_t_print
static inline void *vl_api_set_ipfix_classify_stream_t_print (vl_api_set_ipfix_classify_stream_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_ipfix_classify_stream_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "domain_id: %u\n", a->domain_id);
    vl_print(handle, "src_port: %u\n", a->src_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_set_ipfix_classify_stream_reply_t_print
#define _vl_api_defined_set_ipfix_classify_stream_reply_t_print
static inline void *vl_api_set_ipfix_classify_stream_reply_t_print (vl_api_set_ipfix_classify_stream_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_set_ipfix_classify_stream_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_classify_stream_dump_t_print
#define _vl_api_defined_ipfix_classify_stream_dump_t_print
static inline void *vl_api_ipfix_classify_stream_dump_t_print (vl_api_ipfix_classify_stream_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_classify_stream_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_classify_stream_details_t_print
#define _vl_api_defined_ipfix_classify_stream_details_t_print
static inline void *vl_api_ipfix_classify_stream_details_t_print (vl_api_ipfix_classify_stream_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_classify_stream_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "domain_id: %u\n", a->domain_id);
    vl_print(handle, "src_port: %u\n", a->src_port);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_add_del_t_print
#define _vl_api_defined_ipfix_classify_table_add_del_t_print
static inline void *vl_api_ipfix_classify_table_add_del_t_print (vl_api_ipfix_classify_table_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_classify_table_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "ip_version: %u\n", a->ip_version);
    vl_print(handle, "transport_protocol: %u\n", a->transport_protocol);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_add_del_reply_t_print
#define _vl_api_defined_ipfix_classify_table_add_del_reply_t_print
static inline void *vl_api_ipfix_classify_table_add_del_reply_t_print (vl_api_ipfix_classify_table_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_classify_table_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_dump_t_print
#define _vl_api_defined_ipfix_classify_table_dump_t_print
static inline void *vl_api_ipfix_classify_table_dump_t_print (vl_api_ipfix_classify_table_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_classify_table_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_details_t_print
#define _vl_api_defined_ipfix_classify_table_details_t_print
static inline void *vl_api_ipfix_classify_table_details_t_print (vl_api_ipfix_classify_table_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_classify_table_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "ip_version: %u\n", a->ip_version);
    vl_print(handle, "transport_protocol: %u\n", a->transport_protocol);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_flush_t_print
#define _vl_api_defined_ipfix_flush_t_print
static inline void *vl_api_ipfix_flush_t_print (vl_api_ipfix_flush_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_flush_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ipfix_flush_reply_t_print
#define _vl_api_defined_ipfix_flush_reply_t_print
static inline void *vl_api_ipfix_flush_reply_t_print (vl_api_ipfix_flush_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ipfix_flush_reply_t:\n");
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

#ifndef _vl_api_defined_set_ipfix_exporter_t_endian
#define _vl_api_defined_set_ipfix_exporter_t_endian
static inline void vl_api_set_ipfix_exporter_t_endian (vl_api_set_ipfix_exporter_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->collector_port = clib_net_to_host_u16(a->collector_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
    a->template_interval = clib_net_to_host_u32(a->template_interval);
    /* a->udp_checksum = a->udp_checksum (no-op) */
}

#endif

#ifndef _vl_api_defined_set_ipfix_exporter_reply_t_endian
#define _vl_api_defined_set_ipfix_exporter_reply_t_endian
static inline void vl_api_set_ipfix_exporter_reply_t_endian (vl_api_set_ipfix_exporter_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipfix_exporter_dump_t_endian
#define _vl_api_defined_ipfix_exporter_dump_t_endian
static inline void vl_api_ipfix_exporter_dump_t_endian (vl_api_ipfix_exporter_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ipfix_exporter_details_t_endian
#define _vl_api_defined_ipfix_exporter_details_t_endian
static inline void vl_api_ipfix_exporter_details_t_endian (vl_api_ipfix_exporter_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->collector_port = clib_net_to_host_u16(a->collector_port);
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
    a->path_mtu = clib_net_to_host_u32(a->path_mtu);
    a->template_interval = clib_net_to_host_u32(a->template_interval);
    /* a->udp_checksum = a->udp_checksum (no-op) */
}

#endif

#ifndef _vl_api_defined_set_ipfix_classify_stream_t_endian
#define _vl_api_defined_set_ipfix_classify_stream_t_endian
static inline void vl_api_set_ipfix_classify_stream_t_endian (vl_api_set_ipfix_classify_stream_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->domain_id = clib_net_to_host_u32(a->domain_id);
    a->src_port = clib_net_to_host_u16(a->src_port);
}

#endif

#ifndef _vl_api_defined_set_ipfix_classify_stream_reply_t_endian
#define _vl_api_defined_set_ipfix_classify_stream_reply_t_endian
static inline void vl_api_set_ipfix_classify_stream_reply_t_endian (vl_api_set_ipfix_classify_stream_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipfix_classify_stream_dump_t_endian
#define _vl_api_defined_ipfix_classify_stream_dump_t_endian
static inline void vl_api_ipfix_classify_stream_dump_t_endian (vl_api_ipfix_classify_stream_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ipfix_classify_stream_details_t_endian
#define _vl_api_defined_ipfix_classify_stream_details_t_endian
static inline void vl_api_ipfix_classify_stream_details_t_endian (vl_api_ipfix_classify_stream_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->domain_id = clib_net_to_host_u32(a->domain_id);
    a->src_port = clib_net_to_host_u16(a->src_port);
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_add_del_t_endian
#define _vl_api_defined_ipfix_classify_table_add_del_t_endian
static inline void vl_api_ipfix_classify_table_add_del_t_endian (vl_api_ipfix_classify_table_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->ip_version = a->ip_version (no-op) */
    /* a->transport_protocol = a->transport_protocol (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_add_del_reply_t_endian
#define _vl_api_defined_ipfix_classify_table_add_del_reply_t_endian
static inline void vl_api_ipfix_classify_table_add_del_reply_t_endian (vl_api_ipfix_classify_table_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_dump_t_endian
#define _vl_api_defined_ipfix_classify_table_dump_t_endian
static inline void vl_api_ipfix_classify_table_dump_t_endian (vl_api_ipfix_classify_table_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ipfix_classify_table_details_t_endian
#define _vl_api_defined_ipfix_classify_table_details_t_endian
static inline void vl_api_ipfix_classify_table_details_t_endian (vl_api_ipfix_classify_table_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
    /* a->ip_version = a->ip_version (no-op) */
    /* a->transport_protocol = a->transport_protocol (no-op) */
}

#endif

#ifndef _vl_api_defined_ipfix_flush_t_endian
#define _vl_api_defined_ipfix_flush_t_endian
static inline void vl_api_ipfix_flush_t_endian (vl_api_ipfix_flush_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ipfix_flush_reply_t_endian
#define _vl_api_defined_ipfix_flush_reply_t_endian
static inline void vl_api_ipfix_flush_reply_t_endian (vl_api_ipfix_flush_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ipfix_export.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ipfix_export.api, 0x3f920e13)

#endif

