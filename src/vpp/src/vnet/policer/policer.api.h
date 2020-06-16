/*
 * VLIB API definitions 2020-06-13 06:00:57
 * Input file: policer.api
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
#warning no content included from policer.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_POLICER_ADD_DEL, vl_api_policer_add_del_t_handler)
vl_msg_id(VL_API_POLICER_ADD_DEL_REPLY, vl_api_policer_add_del_reply_t_handler)
vl_msg_id(VL_API_POLICER_DUMP, vl_api_policer_dump_t_handler)
vl_msg_id(VL_API_POLICER_DETAILS, vl_api_policer_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_policer_add_del_t, 1)
vl_msg_name(vl_api_policer_add_del_reply_t, 1)
vl_msg_name(vl_api_policer_dump_t, 1)
vl_msg_name(vl_api_policer_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_policer \
_(VL_API_POLICER_ADD_DEL, policer_add_del, dfea2be8) \
_(VL_API_POLICER_ADD_DEL_REPLY, policer_add_del_reply, a177cef2) \
_(VL_API_POLICER_DUMP, policer_dump, 8be04d34) \
_(VL_API_POLICER_DETAILS, policer_details, ff2765f0) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_policer_api
#define included_policer_api
#ifndef _vl_api_defined_policer_add_del
#define _vl_api_defined_policer_add_del
typedef VL_API_PACKED(struct _vl_api_policer_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 name[64];
    u32 cir;
    u32 eir;
    u64 cb;
    u64 eb;
    u8 rate_type;
    u8 round_type;
    u8 type;
    u8 color_aware;
    u8 conform_action_type;
    u8 conform_dscp;
    u8 exceed_action_type;
    u8 exceed_dscp;
    u8 violate_action_type;
    u8 violate_dscp;
}) vl_api_policer_add_del_t;
#endif

#ifndef _vl_api_defined_policer_add_del_reply
#define _vl_api_defined_policer_add_del_reply
typedef VL_API_PACKED(struct _vl_api_policer_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 policer_index;
}) vl_api_policer_add_del_reply_t;
#endif

#ifndef _vl_api_defined_policer_dump
#define _vl_api_defined_policer_dump
typedef VL_API_PACKED(struct _vl_api_policer_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 match_name_valid;
    u8 match_name[64];
}) vl_api_policer_dump_t;
#endif

#ifndef _vl_api_defined_policer_details
#define _vl_api_defined_policer_details
typedef VL_API_PACKED(struct _vl_api_policer_details {
    u16 _vl_msg_id;
    u32 context;
    u8 name[64];
    u32 cir;
    u32 eir;
    u64 cb;
    u64 eb;
    u8 rate_type;
    u8 round_type;
    u8 type;
    u8 conform_action_type;
    u8 conform_dscp;
    u8 exceed_action_type;
    u8 exceed_dscp;
    u8 violate_action_type;
    u8 violate_dscp;
    u8 single_rate;
    u8 color_aware;
    u32 scale;
    u32 cir_tokens_per_period;
    u32 pir_tokens_per_period;
    u32 current_limit;
    u32 current_bucket;
    u32 extended_limit;
    u32 extended_bucket;
    u64 last_update_time;
}) vl_api_policer_details_t;
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

#ifndef _vl_api_defined_policer_add_del_t_print
#define _vl_api_defined_policer_add_del_t_print
static inline void *vl_api_policer_add_del_t_print (vl_api_policer_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "cir: %u\n", a->cir);
    vl_print(handle, "eir: %u\n", a->eir);
    vl_print(handle, "cb: %llu\n", a->cb);
    vl_print(handle, "eb: %llu\n", a->eb);
    vl_print(handle, "rate_type: %u\n", a->rate_type);
    vl_print(handle, "round_type: %u\n", a->round_type);
    vl_print(handle, "type: %u\n", a->type);
    vl_print(handle, "color_aware: %u\n", a->color_aware);
    vl_print(handle, "conform_action_type: %u\n", a->conform_action_type);
    vl_print(handle, "conform_dscp: %u\n", a->conform_dscp);
    vl_print(handle, "exceed_action_type: %u\n", a->exceed_action_type);
    vl_print(handle, "exceed_dscp: %u\n", a->exceed_dscp);
    vl_print(handle, "violate_action_type: %u\n", a->violate_action_type);
    vl_print(handle, "violate_dscp: %u\n", a->violate_dscp);
    return handle;
}

#endif

#ifndef _vl_api_defined_policer_add_del_reply_t_print
#define _vl_api_defined_policer_add_del_reply_t_print
static inline void *vl_api_policer_add_del_reply_t_print (vl_api_policer_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "policer_index: %u\n", a->policer_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_policer_dump_t_print
#define _vl_api_defined_policer_dump_t_print
static inline void *vl_api_policer_dump_t_print (vl_api_policer_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "match_name_valid: %u\n", a->match_name_valid);
    return handle;
}

#endif

#ifndef _vl_api_defined_policer_details_t_print
#define _vl_api_defined_policer_details_t_print
static inline void *vl_api_policer_details_t_print (vl_api_policer_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "cir: %u\n", a->cir);
    vl_print(handle, "eir: %u\n", a->eir);
    vl_print(handle, "cb: %llu\n", a->cb);
    vl_print(handle, "eb: %llu\n", a->eb);
    vl_print(handle, "rate_type: %u\n", a->rate_type);
    vl_print(handle, "round_type: %u\n", a->round_type);
    vl_print(handle, "type: %u\n", a->type);
    vl_print(handle, "conform_action_type: %u\n", a->conform_action_type);
    vl_print(handle, "conform_dscp: %u\n", a->conform_dscp);
    vl_print(handle, "exceed_action_type: %u\n", a->exceed_action_type);
    vl_print(handle, "exceed_dscp: %u\n", a->exceed_dscp);
    vl_print(handle, "violate_action_type: %u\n", a->violate_action_type);
    vl_print(handle, "violate_dscp: %u\n", a->violate_dscp);
    vl_print(handle, "single_rate: %u\n", a->single_rate);
    vl_print(handle, "color_aware: %u\n", a->color_aware);
    vl_print(handle, "scale: %u\n", a->scale);
    vl_print(handle, "cir_tokens_per_period: %u\n", a->cir_tokens_per_period);
    vl_print(handle, "pir_tokens_per_period: %u\n", a->pir_tokens_per_period);
    vl_print(handle, "current_limit: %u\n", a->current_limit);
    vl_print(handle, "current_bucket: %u\n", a->current_bucket);
    vl_print(handle, "extended_limit: %u\n", a->extended_limit);
    vl_print(handle, "extended_bucket: %u\n", a->extended_bucket);
    vl_print(handle, "last_update_time: %llu\n", a->last_update_time);
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

#ifndef _vl_api_defined_policer_add_del_t_endian
#define _vl_api_defined_policer_add_del_t_endian
static inline void vl_api_policer_add_del_t_endian (vl_api_policer_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->cir = clib_net_to_host_u32(a->cir);
    a->eir = clib_net_to_host_u32(a->eir);
    a->cb = clib_net_to_host_u64(a->cb);
    a->eb = clib_net_to_host_u64(a->eb);
    /* a->rate_type = a->rate_type (no-op) */
    /* a->round_type = a->round_type (no-op) */
    /* a->type = a->type (no-op) */
    /* a->color_aware = a->color_aware (no-op) */
    /* a->conform_action_type = a->conform_action_type (no-op) */
    /* a->conform_dscp = a->conform_dscp (no-op) */
    /* a->exceed_action_type = a->exceed_action_type (no-op) */
    /* a->exceed_dscp = a->exceed_dscp (no-op) */
    /* a->violate_action_type = a->violate_action_type (no-op) */
    /* a->violate_dscp = a->violate_dscp (no-op) */
}

#endif

#ifndef _vl_api_defined_policer_add_del_reply_t_endian
#define _vl_api_defined_policer_add_del_reply_t_endian
static inline void vl_api_policer_add_del_reply_t_endian (vl_api_policer_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->policer_index = clib_net_to_host_u32(a->policer_index);
}

#endif

#ifndef _vl_api_defined_policer_dump_t_endian
#define _vl_api_defined_policer_dump_t_endian
static inline void vl_api_policer_dump_t_endian (vl_api_policer_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->match_name_valid = a->match_name_valid (no-op) */
}

#endif

#ifndef _vl_api_defined_policer_details_t_endian
#define _vl_api_defined_policer_details_t_endian
static inline void vl_api_policer_details_t_endian (vl_api_policer_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->cir = clib_net_to_host_u32(a->cir);
    a->eir = clib_net_to_host_u32(a->eir);
    a->cb = clib_net_to_host_u64(a->cb);
    a->eb = clib_net_to_host_u64(a->eb);
    /* a->rate_type = a->rate_type (no-op) */
    /* a->round_type = a->round_type (no-op) */
    /* a->type = a->type (no-op) */
    /* a->conform_action_type = a->conform_action_type (no-op) */
    /* a->conform_dscp = a->conform_dscp (no-op) */
    /* a->exceed_action_type = a->exceed_action_type (no-op) */
    /* a->exceed_dscp = a->exceed_dscp (no-op) */
    /* a->violate_action_type = a->violate_action_type (no-op) */
    /* a->violate_dscp = a->violate_dscp (no-op) */
    /* a->single_rate = a->single_rate (no-op) */
    /* a->color_aware = a->color_aware (no-op) */
    a->scale = clib_net_to_host_u32(a->scale);
    a->cir_tokens_per_period = clib_net_to_host_u32(a->cir_tokens_per_period);
    a->pir_tokens_per_period = clib_net_to_host_u32(a->pir_tokens_per_period);
    a->current_limit = clib_net_to_host_u32(a->current_limit);
    a->current_bucket = clib_net_to_host_u32(a->current_bucket);
    a->extended_limit = clib_net_to_host_u32(a->extended_limit);
    a->extended_bucket = clib_net_to_host_u32(a->extended_bucket);
    a->last_update_time = clib_net_to_host_u64(a->last_update_time);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(policer.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(policer.api, 0x7807cc8d)

#endif

