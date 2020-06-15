/*
 * VLIB API definitions 2020-06-13 06:02:11
 * Input file: stn.api
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
#warning no content included from stn.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_STN_ADD_DEL_RULE, vl_api_stn_add_del_rule_t_handler)
vl_msg_id(VL_API_STN_ADD_DEL_RULE_REPLY, vl_api_stn_add_del_rule_reply_t_handler)
vl_msg_id(VL_API_STN_RULES_DUMP, vl_api_stn_rules_dump_t_handler)
vl_msg_id(VL_API_STN_RULES_DETAILS, vl_api_stn_rules_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_stn_add_del_rule_t, 1)
vl_msg_name(vl_api_stn_add_del_rule_reply_t, 1)
vl_msg_name(vl_api_stn_rules_dump_t, 1)
vl_msg_name(vl_api_stn_rules_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_stn \
_(VL_API_STN_ADD_DEL_RULE, stn_add_del_rule, 9f0bbe21) \
_(VL_API_STN_ADD_DEL_RULE_REPLY, stn_add_del_rule_reply, e8d4e804) \
_(VL_API_STN_RULES_DUMP, stn_rules_dump, 51077d14) \
_(VL_API_STN_RULES_DETAILS, stn_rules_details, 5eafa31e) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_stn_api
#define included_stn_api
#ifndef _vl_api_defined_stn_add_del_rule
#define _vl_api_defined_stn_add_del_rule
typedef VL_API_PACKED(struct _vl_api_stn_add_del_rule {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ip4;
    u8 ip_address[16];
    u32 sw_if_index;
    u8 is_add;
}) vl_api_stn_add_del_rule_t;
#endif

#ifndef _vl_api_defined_stn_add_del_rule_reply
#define _vl_api_defined_stn_add_del_rule_reply
typedef VL_API_PACKED(struct _vl_api_stn_add_del_rule_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_stn_add_del_rule_reply_t;
#endif

#ifndef _vl_api_defined_stn_rules_dump
#define _vl_api_defined_stn_rules_dump
typedef VL_API_PACKED(struct _vl_api_stn_rules_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_stn_rules_dump_t;
#endif

#ifndef _vl_api_defined_stn_rules_details
#define _vl_api_defined_stn_rules_details
typedef VL_API_PACKED(struct _vl_api_stn_rules_details {
    u16 _vl_msg_id;
    u32 context;
    u8 is_ip4;
    u8 ip_address[16];
    u32 sw_if_index;
}) vl_api_stn_rules_details_t;
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

/***** manual: vl_api_stn_add_del_rule_t_print  *****/

#ifndef _vl_api_defined_stn_add_del_rule_reply_t_print
#define _vl_api_defined_stn_add_del_rule_reply_t_print
static inline void *vl_api_stn_add_del_rule_reply_t_print (vl_api_stn_add_del_rule_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_stn_add_del_rule_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_stn_rules_dump_t_print
#define _vl_api_defined_stn_rules_dump_t_print
static inline void *vl_api_stn_rules_dump_t_print (vl_api_stn_rules_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_stn_rules_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_stn_rules_details_t_print
#define _vl_api_defined_stn_rules_details_t_print
static inline void *vl_api_stn_rules_details_t_print (vl_api_stn_rules_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_stn_rules_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
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

#ifndef _vl_api_defined_stn_add_del_rule_t_endian
#define _vl_api_defined_stn_add_del_rule_t_endian
static inline void vl_api_stn_add_del_rule_t_endian (vl_api_stn_add_del_rule_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip4 = a->is_ip4 (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_stn_add_del_rule_reply_t_endian
#define _vl_api_defined_stn_add_del_rule_reply_t_endian
static inline void vl_api_stn_add_del_rule_reply_t_endian (vl_api_stn_add_del_rule_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_stn_rules_dump_t_endian
#define _vl_api_defined_stn_rules_dump_t_endian
static inline void vl_api_stn_rules_dump_t_endian (vl_api_stn_rules_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_stn_rules_details_t_endian
#define _vl_api_defined_stn_rules_details_t_endian
static inline void vl_api_stn_rules_details_t_endian (vl_api_stn_rules_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip4 = a->is_ip4 (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(stn.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(stn.api, 0x7bef82b9)

#endif

