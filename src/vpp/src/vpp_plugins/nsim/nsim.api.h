/*
 * VLIB API definitions 2020-06-13 06:02:07
 * Input file: nsim.api
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
#warning no content included from nsim.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_NSIM_CROSS_CONNECT_ENABLE_DISABLE, vl_api_nsim_cross_connect_enable_disable_t_handler)
vl_msg_id(VL_API_NSIM_CROSS_CONNECT_ENABLE_DISABLE_REPLY, vl_api_nsim_cross_connect_enable_disable_reply_t_handler)
vl_msg_id(VL_API_NSIM_OUTPUT_FEATURE_ENABLE_DISABLE, vl_api_nsim_output_feature_enable_disable_t_handler)
vl_msg_id(VL_API_NSIM_OUTPUT_FEATURE_ENABLE_DISABLE_REPLY, vl_api_nsim_output_feature_enable_disable_reply_t_handler)
vl_msg_id(VL_API_NSIM_CONFIGURE, vl_api_nsim_configure_t_handler)
vl_msg_id(VL_API_NSIM_CONFIGURE_REPLY, vl_api_nsim_configure_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_nsim_cross_connect_enable_disable_t, 1)
vl_msg_name(vl_api_nsim_cross_connect_enable_disable_reply_t, 1)
vl_msg_name(vl_api_nsim_output_feature_enable_disable_t, 1)
vl_msg_name(vl_api_nsim_output_feature_enable_disable_reply_t, 1)
vl_msg_name(vl_api_nsim_configure_t, 1)
vl_msg_name(vl_api_nsim_configure_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_nsim \
_(VL_API_NSIM_CROSS_CONNECT_ENABLE_DISABLE, nsim_cross_connect_enable_disable, df4e7ba9) \
_(VL_API_NSIM_CROSS_CONNECT_ENABLE_DISABLE_REPLY, nsim_cross_connect_enable_disable_reply, e8d4e804) \
_(VL_API_NSIM_OUTPUT_FEATURE_ENABLE_DISABLE, nsim_output_feature_enable_disable, 57298519) \
_(VL_API_NSIM_OUTPUT_FEATURE_ENABLE_DISABLE_REPLY, nsim_output_feature_enable_disable_reply, e8d4e804) \
_(VL_API_NSIM_CONFIGURE, nsim_configure, 16ed400f) \
_(VL_API_NSIM_CONFIGURE_REPLY, nsim_configure_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_nsim_api
#define included_nsim_api
#ifndef _vl_api_defined_nsim_cross_connect_enable_disable
#define _vl_api_defined_nsim_cross_connect_enable_disable
typedef VL_API_PACKED(struct _vl_api_nsim_cross_connect_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 sw_if_index0;
    u32 sw_if_index1;
}) vl_api_nsim_cross_connect_enable_disable_t;
#endif

#ifndef _vl_api_defined_nsim_cross_connect_enable_disable_reply
#define _vl_api_defined_nsim_cross_connect_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_nsim_cross_connect_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nsim_cross_connect_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_nsim_output_feature_enable_disable
#define _vl_api_defined_nsim_output_feature_enable_disable
typedef VL_API_PACKED(struct _vl_api_nsim_output_feature_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable_disable;
    u32 sw_if_index;
}) vl_api_nsim_output_feature_enable_disable_t;
#endif

#ifndef _vl_api_defined_nsim_output_feature_enable_disable_reply
#define _vl_api_defined_nsim_output_feature_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_nsim_output_feature_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nsim_output_feature_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_nsim_configure
#define _vl_api_defined_nsim_configure
typedef VL_API_PACKED(struct _vl_api_nsim_configure {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 delay_in_usec;
    u32 average_packet_size;
    u64 bandwidth_in_bits_per_second;
    u32 packets_per_drop;
}) vl_api_nsim_configure_t;
#endif

#ifndef _vl_api_defined_nsim_configure_reply
#define _vl_api_defined_nsim_configure_reply
typedef VL_API_PACKED(struct _vl_api_nsim_configure_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_nsim_configure_reply_t;
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

#ifndef _vl_api_defined_nsim_cross_connect_enable_disable_t_print
#define _vl_api_defined_nsim_cross_connect_enable_disable_t_print
static inline void *vl_api_nsim_cross_connect_enable_disable_t_print (vl_api_nsim_cross_connect_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsim_cross_connect_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "sw_if_index0: %u\n", a->sw_if_index0);
    vl_print(handle, "sw_if_index1: %u\n", a->sw_if_index1);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsim_cross_connect_enable_disable_reply_t_print
#define _vl_api_defined_nsim_cross_connect_enable_disable_reply_t_print
static inline void *vl_api_nsim_cross_connect_enable_disable_reply_t_print (vl_api_nsim_cross_connect_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsim_cross_connect_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsim_output_feature_enable_disable_t_print
#define _vl_api_defined_nsim_output_feature_enable_disable_t_print
static inline void *vl_api_nsim_output_feature_enable_disable_t_print (vl_api_nsim_output_feature_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsim_output_feature_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsim_output_feature_enable_disable_reply_t_print
#define _vl_api_defined_nsim_output_feature_enable_disable_reply_t_print
static inline void *vl_api_nsim_output_feature_enable_disable_reply_t_print (vl_api_nsim_output_feature_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsim_output_feature_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsim_configure_t_print
#define _vl_api_defined_nsim_configure_t_print
static inline void *vl_api_nsim_configure_t_print (vl_api_nsim_configure_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsim_configure_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "delay_in_usec: %u\n", a->delay_in_usec);
    vl_print(handle, "average_packet_size: %u\n", a->average_packet_size);
    vl_print(handle, "bandwidth_in_bits_per_second: %llu\n", a->bandwidth_in_bits_per_second);
    vl_print(handle, "packets_per_drop: %u\n", a->packets_per_drop);
    return handle;
}

#endif

#ifndef _vl_api_defined_nsim_configure_reply_t_print
#define _vl_api_defined_nsim_configure_reply_t_print
static inline void *vl_api_nsim_configure_reply_t_print (vl_api_nsim_configure_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_nsim_configure_reply_t:\n");
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

#ifndef _vl_api_defined_nsim_cross_connect_enable_disable_t_endian
#define _vl_api_defined_nsim_cross_connect_enable_disable_t_endian
static inline void vl_api_nsim_cross_connect_enable_disable_t_endian (vl_api_nsim_cross_connect_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->sw_if_index0 = clib_net_to_host_u32(a->sw_if_index0);
    a->sw_if_index1 = clib_net_to_host_u32(a->sw_if_index1);
}

#endif

#ifndef _vl_api_defined_nsim_cross_connect_enable_disable_reply_t_endian
#define _vl_api_defined_nsim_cross_connect_enable_disable_reply_t_endian
static inline void vl_api_nsim_cross_connect_enable_disable_reply_t_endian (vl_api_nsim_cross_connect_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nsim_output_feature_enable_disable_t_endian
#define _vl_api_defined_nsim_output_feature_enable_disable_t_endian
static inline void vl_api_nsim_output_feature_enable_disable_t_endian (vl_api_nsim_output_feature_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable_disable = a->enable_disable (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_nsim_output_feature_enable_disable_reply_t_endian
#define _vl_api_defined_nsim_output_feature_enable_disable_reply_t_endian
static inline void vl_api_nsim_output_feature_enable_disable_reply_t_endian (vl_api_nsim_output_feature_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_nsim_configure_t_endian
#define _vl_api_defined_nsim_configure_t_endian
static inline void vl_api_nsim_configure_t_endian (vl_api_nsim_configure_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->delay_in_usec = clib_net_to_host_u32(a->delay_in_usec);
    a->average_packet_size = clib_net_to_host_u32(a->average_packet_size);
    a->bandwidth_in_bits_per_second = clib_net_to_host_u64(a->bandwidth_in_bits_per_second);
    a->packets_per_drop = clib_net_to_host_u32(a->packets_per_drop);
}

#endif

#ifndef _vl_api_defined_nsim_configure_reply_t_endian
#define _vl_api_defined_nsim_configure_reply_t_endian
static inline void vl_api_nsim_configure_reply_t_endian (vl_api_nsim_configure_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(nsim.api, 2, 1, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(nsim.api, 0x760acaa)

#endif

