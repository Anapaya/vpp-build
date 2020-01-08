/*
 * VLIB API definitions 2020-01-07 14:20:13
 * Input file: vpe_types.api
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
#warning no content included from vpe_types.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
#endif
/****** Message names ******/

#ifdef vl_msg_name
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_vpe_types 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_vpe_types_api
#define included_vpe_types_api
#ifndef _vl_api_defined_timestamp
#define _vl_api_defined_timestamp
typedef f64 vl_api_timestamp_t;
#endif

#ifndef _vl_api_defined_timedelta
#define _vl_api_defined_timedelta
typedef f64 vl_api_timedelta_t;
#endif

#ifndef _vl_api_defined_version
#define _vl_api_defined_version
typedef VL_API_PACKED(struct _vl_api_version {
    u32 major;
    u32 minor;
    u32 patch;
    u8 pre_release[17];
    u8 build_metadata[17];
}) vl_api_version_t;
#endif

#ifndef _vl_api_defined_log_level
#define _vl_api_defined_log_level
typedef enum {
    VPE_API_LOG_LEVEL_EMERG = 0,
    VPE_API_LOG_LEVEL_ALERT = 1,
    VPE_API_LOG_LEVEL_CRIT = 2,
    VPE_API_LOG_LEVEL_ERR = 3,
    VPE_API_LOG_LEVEL_WARNING = 4,
    VPE_API_LOG_LEVEL_NOTICE = 5,
    VPE_API_LOG_LEVEL_INFO = 6,
    VPE_API_LOG_LEVEL_DEBUG = 7,
    VPE_API_LOG_LEVEL_DISABLED = 8,
} vl_api_log_level_t;
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

#ifndef _vl_api_defined_version_t_print
#define _vl_api_defined_version_t_print
static inline void *vl_api_version_t_print (vl_api_version_t *a,void *handle)
{
    vl_print(handle, "vl_api_version_t:\n");
    vl_print(handle, "major: %u\n", a->major);
    vl_print(handle, "minor: %u\n", a->minor);
    vl_print(handle, "patch: %u\n", a->patch);
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

#ifndef _vl_api_defined_version_t_endian
#define _vl_api_defined_version_t_endian
static inline void vl_api_version_t_endian (vl_api_version_t *a)
{
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
    a->patch = clib_net_to_host_u32(a->patch);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple


#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(vpe_types.api, 0x3369988d)

#endif

