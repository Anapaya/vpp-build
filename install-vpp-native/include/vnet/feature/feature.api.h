/*
 * VLIB API definitions 2020-01-07 14:20:12
 * Input file: feature.api
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
#warning no content included from feature.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_FEATURE_ENABLE_DISABLE, vl_api_feature_enable_disable_t_handler)
vl_msg_id(VL_API_FEATURE_ENABLE_DISABLE_REPLY, vl_api_feature_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_feature_enable_disable_t, 1)
vl_msg_name(vl_api_feature_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_feature \
_(VL_API_FEATURE_ENABLE_DISABLE, feature_enable_disable, f525e210) \
_(VL_API_FEATURE_ENABLE_DISABLE_REPLY, feature_enable_disable_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_feature_api
#define included_feature_api
#ifndef _vl_api_defined_feature_enable_disable
#define _vl_api_defined_feature_enable_disable
typedef VL_API_PACKED(struct _vl_api_feature_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 enable;
    u8 arc_name[64];
    u8 feature_name[64];
}) vl_api_feature_enable_disable_t;
#endif

#ifndef _vl_api_defined_feature_enable_disable_reply
#define _vl_api_defined_feature_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_feature_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_feature_enable_disable_reply_t;
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

#ifndef _vl_api_defined_feature_enable_disable_t_print
#define _vl_api_defined_feature_enable_disable_t_print
static inline void *vl_api_feature_enable_disable_t_print (vl_api_feature_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_feature_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_feature_enable_disable_reply_t_print
#define _vl_api_defined_feature_enable_disable_reply_t_print
static inline void *vl_api_feature_enable_disable_reply_t_print (vl_api_feature_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_feature_enable_disable_reply_t:\n");
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

#ifndef _vl_api_defined_feature_enable_disable_t_endian
#define _vl_api_defined_feature_enable_disable_t_endian
static inline void vl_api_feature_enable_disable_t_endian (vl_api_feature_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_feature_enable_disable_reply_t_endian
#define _vl_api_defined_feature_enable_disable_reply_t_endian
static inline void vl_api_feature_enable_disable_reply_t_endian (vl_api_feature_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(feature.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(feature.api, 0x5aec37eb)

#endif

