/*
 * VLIB API definitions 2020-01-07 14:25:56
 * Input file: ioam_vxlan_gpe.api
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
#warning no content included from ioam_vxlan_gpe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_VXLAN_GPE_IOAM_ENABLE, vl_api_vxlan_gpe_ioam_enable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_ENABLE_REPLY, vl_api_vxlan_gpe_ioam_enable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_DISABLE, vl_api_vxlan_gpe_ioam_disable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_DISABLE_REPLY, vl_api_vxlan_gpe_ioam_disable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE, vl_api_vxlan_gpe_ioam_vni_enable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE_REPLY, vl_api_vxlan_gpe_ioam_vni_enable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE, vl_api_vxlan_gpe_ioam_vni_disable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE_REPLY, vl_api_vxlan_gpe_ioam_vni_disable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE, vl_api_vxlan_gpe_ioam_transit_enable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE_REPLY, vl_api_vxlan_gpe_ioam_transit_enable_reply_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE, vl_api_vxlan_gpe_ioam_transit_disable_t_handler)
vl_msg_id(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE_REPLY, vl_api_vxlan_gpe_ioam_transit_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_vxlan_gpe_ioam_enable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_enable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_disable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_disable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_enable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_enable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_disable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_vni_disable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_enable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_enable_reply_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_disable_t, 1)
vl_msg_name(vl_api_vxlan_gpe_ioam_transit_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ioam_vxlan_gpe \
_(VL_API_VXLAN_GPE_IOAM_ENABLE, vxlan_gpe_ioam_enable, 7727876d) \
_(VL_API_VXLAN_GPE_IOAM_ENABLE_REPLY, vxlan_gpe_ioam_enable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_DISABLE, vxlan_gpe_ioam_disable, 6b16a45e) \
_(VL_API_VXLAN_GPE_IOAM_DISABLE_REPLY, vxlan_gpe_ioam_disable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE, vxlan_gpe_ioam_vni_enable, 6d93fc5d) \
_(VL_API_VXLAN_GPE_IOAM_VNI_ENABLE_REPLY, vxlan_gpe_ioam_vni_enable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE, vxlan_gpe_ioam_vni_disable, 6d93fc5d) \
_(VL_API_VXLAN_GPE_IOAM_VNI_DISABLE_REPLY, vxlan_gpe_ioam_vni_disable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE, vxlan_gpe_ioam_transit_enable, 7c6ff202) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_ENABLE_REPLY, vxlan_gpe_ioam_transit_enable_reply, e8d4e804) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE, vxlan_gpe_ioam_transit_disable, 7c6ff202) \
_(VL_API_VXLAN_GPE_IOAM_TRANSIT_DISABLE_REPLY, vxlan_gpe_ioam_transit_disable_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_ioam_vxlan_gpe_api
#define included_ioam_vxlan_gpe_api
#ifndef _vl_api_defined_vxlan_gpe_ioam_enable
#define _vl_api_defined_vxlan_gpe_ioam_enable
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 id;
    u8 trace_ppc;
    u8 pow_enable;
    u8 trace_enable;
}) vl_api_vxlan_gpe_ioam_enable_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_enable_reply
#define _vl_api_defined_vxlan_gpe_ioam_enable_reply
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_vxlan_gpe_ioam_enable_reply_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_disable
#define _vl_api_defined_vxlan_gpe_ioam_disable
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u16 id;
}) vl_api_vxlan_gpe_ioam_disable_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_disable_reply
#define _vl_api_defined_vxlan_gpe_ioam_disable_reply
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_vxlan_gpe_ioam_disable_reply_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_enable
#define _vl_api_defined_vxlan_gpe_ioam_vni_enable
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_vni_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vni;
    u8 local[16];
    u8 remote[16];
    u8 is_ipv6;
}) vl_api_vxlan_gpe_ioam_vni_enable_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_enable_reply
#define _vl_api_defined_vxlan_gpe_ioam_vni_enable_reply
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_vni_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_vxlan_gpe_ioam_vni_enable_reply_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_disable
#define _vl_api_defined_vxlan_gpe_ioam_vni_disable
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_vni_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vni;
    u8 local[16];
    u8 remote[16];
    u8 is_ipv6;
}) vl_api_vxlan_gpe_ioam_vni_disable_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_disable_reply
#define _vl_api_defined_vxlan_gpe_ioam_vni_disable_reply
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_vni_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_vxlan_gpe_ioam_vni_disable_reply_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_enable
#define _vl_api_defined_vxlan_gpe_ioam_transit_enable
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_transit_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 outer_fib_index;
    u8 dst_addr[16];
    u8 is_ipv6;
}) vl_api_vxlan_gpe_ioam_transit_enable_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_enable_reply
#define _vl_api_defined_vxlan_gpe_ioam_transit_enable_reply
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_transit_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_vxlan_gpe_ioam_transit_enable_reply_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_disable
#define _vl_api_defined_vxlan_gpe_ioam_transit_disable
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_transit_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 outer_fib_index;
    u8 dst_addr[16];
    u8 is_ipv6;
}) vl_api_vxlan_gpe_ioam_transit_disable_t;
#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_disable_reply
#define _vl_api_defined_vxlan_gpe_ioam_transit_disable_reply
typedef VL_API_PACKED(struct _vl_api_vxlan_gpe_ioam_transit_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_vxlan_gpe_ioam_transit_disable_reply_t;
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

#ifndef _vl_api_defined_vxlan_gpe_ioam_enable_t_print
#define _vl_api_defined_vxlan_gpe_ioam_enable_t_print
static inline void *vl_api_vxlan_gpe_ioam_enable_t_print (vl_api_vxlan_gpe_ioam_enable_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_enable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "trace_ppc: %u\n", a->trace_ppc);
    vl_print(handle, "pow_enable: %u\n", a->pow_enable);
    vl_print(handle, "trace_enable: %u\n", a->trace_enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_enable_reply_t_print
#define _vl_api_defined_vxlan_gpe_ioam_enable_reply_t_print
static inline void *vl_api_vxlan_gpe_ioam_enable_reply_t_print (vl_api_vxlan_gpe_ioam_enable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_enable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_disable_t_print
#define _vl_api_defined_vxlan_gpe_ioam_disable_t_print
static inline void *vl_api_vxlan_gpe_ioam_disable_t_print (vl_api_vxlan_gpe_ioam_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_disable_reply_t_print
#define _vl_api_defined_vxlan_gpe_ioam_disable_reply_t_print
static inline void *vl_api_vxlan_gpe_ioam_disable_reply_t_print (vl_api_vxlan_gpe_ioam_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_enable_t_print
#define _vl_api_defined_vxlan_gpe_ioam_vni_enable_t_print
static inline void *vl_api_vxlan_gpe_ioam_vni_enable_t_print (vl_api_vxlan_gpe_ioam_vni_enable_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_vni_enable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_enable_reply_t_print
#define _vl_api_defined_vxlan_gpe_ioam_vni_enable_reply_t_print
static inline void *vl_api_vxlan_gpe_ioam_vni_enable_reply_t_print (vl_api_vxlan_gpe_ioam_vni_enable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_vni_enable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_disable_t_print
#define _vl_api_defined_vxlan_gpe_ioam_vni_disable_t_print
static inline void *vl_api_vxlan_gpe_ioam_vni_disable_t_print (vl_api_vxlan_gpe_ioam_vni_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_vni_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vni: %u\n", a->vni);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_disable_reply_t_print
#define _vl_api_defined_vxlan_gpe_ioam_vni_disable_reply_t_print
static inline void *vl_api_vxlan_gpe_ioam_vni_disable_reply_t_print (vl_api_vxlan_gpe_ioam_vni_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_vni_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_enable_t_print
#define _vl_api_defined_vxlan_gpe_ioam_transit_enable_t_print
static inline void *vl_api_vxlan_gpe_ioam_transit_enable_t_print (vl_api_vxlan_gpe_ioam_transit_enable_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_transit_enable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "outer_fib_index: %u\n", a->outer_fib_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_enable_reply_t_print
#define _vl_api_defined_vxlan_gpe_ioam_transit_enable_reply_t_print
static inline void *vl_api_vxlan_gpe_ioam_transit_enable_reply_t_print (vl_api_vxlan_gpe_ioam_transit_enable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_transit_enable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_disable_t_print
#define _vl_api_defined_vxlan_gpe_ioam_transit_disable_t_print
static inline void *vl_api_vxlan_gpe_ioam_transit_disable_t_print (vl_api_vxlan_gpe_ioam_transit_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_transit_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "outer_fib_index: %u\n", a->outer_fib_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_disable_reply_t_print
#define _vl_api_defined_vxlan_gpe_ioam_transit_disable_reply_t_print
static inline void *vl_api_vxlan_gpe_ioam_transit_disable_reply_t_print (vl_api_vxlan_gpe_ioam_transit_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_vxlan_gpe_ioam_transit_disable_reply_t:\n");
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

#ifndef _vl_api_defined_vxlan_gpe_ioam_enable_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_enable_t_endian
static inline void vl_api_vxlan_gpe_ioam_enable_t_endian (vl_api_vxlan_gpe_ioam_enable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
    /* a->trace_ppc = a->trace_ppc (no-op) */
    /* a->pow_enable = a->pow_enable (no-op) */
    /* a->trace_enable = a->trace_enable (no-op) */
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_enable_reply_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_enable_reply_t_endian
static inline void vl_api_vxlan_gpe_ioam_enable_reply_t_endian (vl_api_vxlan_gpe_ioam_enable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_disable_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_disable_t_endian
static inline void vl_api_vxlan_gpe_ioam_disable_t_endian (vl_api_vxlan_gpe_ioam_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->id = clib_net_to_host_u16(a->id);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_disable_reply_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_disable_reply_t_endian
static inline void vl_api_vxlan_gpe_ioam_disable_reply_t_endian (vl_api_vxlan_gpe_ioam_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_enable_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_vni_enable_t_endian
static inline void vl_api_vxlan_gpe_ioam_vni_enable_t_endian (vl_api_vxlan_gpe_ioam_vni_enable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_enable_reply_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_vni_enable_reply_t_endian
static inline void vl_api_vxlan_gpe_ioam_vni_enable_reply_t_endian (vl_api_vxlan_gpe_ioam_vni_enable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_disable_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_vni_disable_t_endian
static inline void vl_api_vxlan_gpe_ioam_vni_disable_t_endian (vl_api_vxlan_gpe_ioam_vni_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_vni_disable_reply_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_vni_disable_reply_t_endian
static inline void vl_api_vxlan_gpe_ioam_vni_disable_reply_t_endian (vl_api_vxlan_gpe_ioam_vni_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_enable_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_transit_enable_t_endian
static inline void vl_api_vxlan_gpe_ioam_transit_enable_t_endian (vl_api_vxlan_gpe_ioam_transit_enable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->outer_fib_index = clib_net_to_host_u32(a->outer_fib_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_enable_reply_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_transit_enable_reply_t_endian
static inline void vl_api_vxlan_gpe_ioam_transit_enable_reply_t_endian (vl_api_vxlan_gpe_ioam_transit_enable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_disable_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_transit_disable_t_endian
static inline void vl_api_vxlan_gpe_ioam_transit_disable_t_endian (vl_api_vxlan_gpe_ioam_transit_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->outer_fib_index = clib_net_to_host_u32(a->outer_fib_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_vxlan_gpe_ioam_transit_disable_reply_t_endian
#define _vl_api_defined_vxlan_gpe_ioam_transit_disable_reply_t_endian
static inline void vl_api_vxlan_gpe_ioam_transit_disable_reply_t_endian (vl_api_vxlan_gpe_ioam_transit_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ioam_vxlan_gpe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ioam_vxlan_gpe.api, 0x3c50f9af)

#endif

