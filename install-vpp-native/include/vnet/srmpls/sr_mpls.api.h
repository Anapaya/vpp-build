/*
 * VLIB API definitions 2020-01-07 14:20:13
 * Input file: sr_mpls.api
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
#warning no content included from sr_mpls.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SR_MPLS_POLICY_ADD, vl_api_sr_mpls_policy_add_t_handler)
vl_msg_id(VL_API_SR_MPLS_POLICY_ADD_REPLY, vl_api_sr_mpls_policy_add_reply_t_handler)
vl_msg_id(VL_API_SR_MPLS_POLICY_MOD, vl_api_sr_mpls_policy_mod_t_handler)
vl_msg_id(VL_API_SR_MPLS_POLICY_MOD_REPLY, vl_api_sr_mpls_policy_mod_reply_t_handler)
vl_msg_id(VL_API_SR_MPLS_POLICY_DEL, vl_api_sr_mpls_policy_del_t_handler)
vl_msg_id(VL_API_SR_MPLS_POLICY_DEL_REPLY, vl_api_sr_mpls_policy_del_reply_t_handler)
vl_msg_id(VL_API_SR_MPLS_STEERING_ADD_DEL, vl_api_sr_mpls_steering_add_del_t_handler)
vl_msg_id(VL_API_SR_MPLS_STEERING_ADD_DEL_REPLY, vl_api_sr_mpls_steering_add_del_reply_t_handler)
vl_msg_id(VL_API_SR_MPLS_POLICY_ASSIGN_ENDPOINT_COLOR, vl_api_sr_mpls_policy_assign_endpoint_color_t_handler)
vl_msg_id(VL_API_SR_MPLS_POLICY_ASSIGN_ENDPOINT_COLOR_REPLY, vl_api_sr_mpls_policy_assign_endpoint_color_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sr_mpls_policy_add_t, 1)
vl_msg_name(vl_api_sr_mpls_policy_add_reply_t, 1)
vl_msg_name(vl_api_sr_mpls_policy_mod_t, 1)
vl_msg_name(vl_api_sr_mpls_policy_mod_reply_t, 1)
vl_msg_name(vl_api_sr_mpls_policy_del_t, 1)
vl_msg_name(vl_api_sr_mpls_policy_del_reply_t, 1)
vl_msg_name(vl_api_sr_mpls_steering_add_del_t, 1)
vl_msg_name(vl_api_sr_mpls_steering_add_del_reply_t, 1)
vl_msg_name(vl_api_sr_mpls_policy_assign_endpoint_color_t, 1)
vl_msg_name(vl_api_sr_mpls_policy_assign_endpoint_color_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_sr_mpls \
_(VL_API_SR_MPLS_POLICY_ADD, sr_mpls_policy_add, 6f5b21cc) \
_(VL_API_SR_MPLS_POLICY_ADD_REPLY, sr_mpls_policy_add_reply, e8d4e804) \
_(VL_API_SR_MPLS_POLICY_MOD, sr_mpls_policy_mod, 09d338ac) \
_(VL_API_SR_MPLS_POLICY_MOD_REPLY, sr_mpls_policy_mod_reply, e8d4e804) \
_(VL_API_SR_MPLS_POLICY_DEL, sr_mpls_policy_del, e29d34fa) \
_(VL_API_SR_MPLS_POLICY_DEL_REPLY, sr_mpls_policy_del_reply, e8d4e804) \
_(VL_API_SR_MPLS_STEERING_ADD_DEL, sr_mpls_steering_add_del, 1591f94a) \
_(VL_API_SR_MPLS_STEERING_ADD_DEL_REPLY, sr_mpls_steering_add_del_reply, e8d4e804) \
_(VL_API_SR_MPLS_POLICY_ASSIGN_ENDPOINT_COLOR, sr_mpls_policy_assign_endpoint_color, 6c82a6da) \
_(VL_API_SR_MPLS_POLICY_ASSIGN_ENDPOINT_COLOR_REPLY, sr_mpls_policy_assign_endpoint_color_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_sr_mpls_api
#define included_sr_mpls_api
#ifndef _vl_api_defined_sr_mpls_policy_add
#define _vl_api_defined_sr_mpls_policy_add
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bsid;
    u32 weight;
    u8 type;
    u8 n_segments;
    u32 segments[0];
}) vl_api_sr_mpls_policy_add_t;
#endif

#ifndef _vl_api_defined_sr_mpls_policy_add_reply
#define _vl_api_defined_sr_mpls_policy_add_reply
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_mpls_policy_add_reply_t;
#endif

#ifndef _vl_api_defined_sr_mpls_policy_mod
#define _vl_api_defined_sr_mpls_policy_mod
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_mod {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bsid;
    u8 operation;
    u32 sl_index;
    u32 weight;
    u8 n_segments;
    u32 segments[0];
}) vl_api_sr_mpls_policy_mod_t;
#endif

#ifndef _vl_api_defined_sr_mpls_policy_mod_reply
#define _vl_api_defined_sr_mpls_policy_mod_reply
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_mod_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_mpls_policy_mod_reply_t;
#endif

#ifndef _vl_api_defined_sr_mpls_policy_del
#define _vl_api_defined_sr_mpls_policy_del
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bsid;
}) vl_api_sr_mpls_policy_del_t;
#endif

#ifndef _vl_api_defined_sr_mpls_policy_del_reply
#define _vl_api_defined_sr_mpls_policy_del_reply
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_mpls_policy_del_reply_t;
#endif

#ifndef _vl_api_defined_sr_mpls_steering_add_del
#define _vl_api_defined_sr_mpls_steering_add_del
typedef VL_API_PACKED(struct _vl_api_sr_mpls_steering_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_del;
    u32 bsid;
    u32 table_id;
    u8 prefix_addr[16];
    u32 mask_width;
    u8 traffic_type;
    u8 next_hop[16];
    u8 nh_type;
    u32 color;
    u8 co_bits;
    u32 vpn_label;
}) vl_api_sr_mpls_steering_add_del_t;
#endif

#ifndef _vl_api_defined_sr_mpls_steering_add_del_reply
#define _vl_api_defined_sr_mpls_steering_add_del_reply
typedef VL_API_PACKED(struct _vl_api_sr_mpls_steering_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_mpls_steering_add_del_reply_t;
#endif

#ifndef _vl_api_defined_sr_mpls_policy_assign_endpoint_color
#define _vl_api_defined_sr_mpls_policy_assign_endpoint_color
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_assign_endpoint_color {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 bsid;
    u8 endpoint[16];
    u8 endpoint_type;
    u32 color;
}) vl_api_sr_mpls_policy_assign_endpoint_color_t;
#endif

#ifndef _vl_api_defined_sr_mpls_policy_assign_endpoint_color_reply
#define _vl_api_defined_sr_mpls_policy_assign_endpoint_color_reply
typedef VL_API_PACKED(struct _vl_api_sr_mpls_policy_assign_endpoint_color_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_mpls_policy_assign_endpoint_color_reply_t;
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

#ifndef _vl_api_defined_sr_mpls_policy_add_t_print
#define _vl_api_defined_sr_mpls_policy_add_t_print
static inline void *vl_api_sr_mpls_policy_add_t_print (vl_api_sr_mpls_policy_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bsid: %u\n", a->bsid);
    vl_print(handle, "weight: %u\n", a->weight);
    vl_print(handle, "type: %u\n", a->type);
    vl_print(handle, "n_segments: %u\n", a->n_segments);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_add_reply_t_print
#define _vl_api_defined_sr_mpls_policy_add_reply_t_print
static inline void *vl_api_sr_mpls_policy_add_reply_t_print (vl_api_sr_mpls_policy_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_mod_t_print
#define _vl_api_defined_sr_mpls_policy_mod_t_print
static inline void *vl_api_sr_mpls_policy_mod_t_print (vl_api_sr_mpls_policy_mod_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_mod_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bsid: %u\n", a->bsid);
    vl_print(handle, "operation: %u\n", a->operation);
    vl_print(handle, "sl_index: %u\n", a->sl_index);
    vl_print(handle, "weight: %u\n", a->weight);
    vl_print(handle, "n_segments: %u\n", a->n_segments);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_mod_reply_t_print
#define _vl_api_defined_sr_mpls_policy_mod_reply_t_print
static inline void *vl_api_sr_mpls_policy_mod_reply_t_print (vl_api_sr_mpls_policy_mod_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_mod_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_del_t_print
#define _vl_api_defined_sr_mpls_policy_del_t_print
static inline void *vl_api_sr_mpls_policy_del_t_print (vl_api_sr_mpls_policy_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bsid: %u\n", a->bsid);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_del_reply_t_print
#define _vl_api_defined_sr_mpls_policy_del_reply_t_print
static inline void *vl_api_sr_mpls_policy_del_reply_t_print (vl_api_sr_mpls_policy_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_steering_add_del_t_print
#define _vl_api_defined_sr_mpls_steering_add_del_t_print
static inline void *vl_api_sr_mpls_steering_add_del_t_print (vl_api_sr_mpls_steering_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_steering_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_del: %u\n", a->is_del);
    vl_print(handle, "bsid: %u\n", a->bsid);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "mask_width: %u\n", a->mask_width);
    vl_print(handle, "traffic_type: %u\n", a->traffic_type);
    vl_print(handle, "nh_type: %u\n", a->nh_type);
    vl_print(handle, "color: %u\n", a->color);
    vl_print(handle, "co_bits: %u\n", a->co_bits);
    vl_print(handle, "vpn_label: %u\n", a->vpn_label);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_steering_add_del_reply_t_print
#define _vl_api_defined_sr_mpls_steering_add_del_reply_t_print
static inline void *vl_api_sr_mpls_steering_add_del_reply_t_print (vl_api_sr_mpls_steering_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_steering_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_assign_endpoint_color_t_print
#define _vl_api_defined_sr_mpls_policy_assign_endpoint_color_t_print
static inline void *vl_api_sr_mpls_policy_assign_endpoint_color_t_print (vl_api_sr_mpls_policy_assign_endpoint_color_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_assign_endpoint_color_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "bsid: %u\n", a->bsid);
    vl_print(handle, "endpoint_type: %u\n", a->endpoint_type);
    vl_print(handle, "color: %u\n", a->color);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_assign_endpoint_color_reply_t_print
#define _vl_api_defined_sr_mpls_policy_assign_endpoint_color_reply_t_print
static inline void *vl_api_sr_mpls_policy_assign_endpoint_color_reply_t_print (vl_api_sr_mpls_policy_assign_endpoint_color_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_mpls_policy_assign_endpoint_color_reply_t:\n");
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

#ifndef _vl_api_defined_sr_mpls_policy_add_t_endian
#define _vl_api_defined_sr_mpls_policy_add_t_endian
static inline void vl_api_sr_mpls_policy_add_t_endian (vl_api_sr_mpls_policy_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bsid = clib_net_to_host_u32(a->bsid);
    a->weight = clib_net_to_host_u32(a->weight);
    /* a->type = a->type (no-op) */
    /* a->n_segments = a->n_segments (no-op) */
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_add_reply_t_endian
#define _vl_api_defined_sr_mpls_policy_add_reply_t_endian
static inline void vl_api_sr_mpls_policy_add_reply_t_endian (vl_api_sr_mpls_policy_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_mod_t_endian
#define _vl_api_defined_sr_mpls_policy_mod_t_endian
static inline void vl_api_sr_mpls_policy_mod_t_endian (vl_api_sr_mpls_policy_mod_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bsid = clib_net_to_host_u32(a->bsid);
    /* a->operation = a->operation (no-op) */
    a->sl_index = clib_net_to_host_u32(a->sl_index);
    a->weight = clib_net_to_host_u32(a->weight);
    /* a->n_segments = a->n_segments (no-op) */
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_mod_reply_t_endian
#define _vl_api_defined_sr_mpls_policy_mod_reply_t_endian
static inline void vl_api_sr_mpls_policy_mod_reply_t_endian (vl_api_sr_mpls_policy_mod_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_del_t_endian
#define _vl_api_defined_sr_mpls_policy_del_t_endian
static inline void vl_api_sr_mpls_policy_del_t_endian (vl_api_sr_mpls_policy_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bsid = clib_net_to_host_u32(a->bsid);
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_del_reply_t_endian
#define _vl_api_defined_sr_mpls_policy_del_reply_t_endian
static inline void vl_api_sr_mpls_policy_del_reply_t_endian (vl_api_sr_mpls_policy_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_mpls_steering_add_del_t_endian
#define _vl_api_defined_sr_mpls_steering_add_del_t_endian
static inline void vl_api_sr_mpls_steering_add_del_t_endian (vl_api_sr_mpls_steering_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_del = a->is_del (no-op) */
    a->bsid = clib_net_to_host_u32(a->bsid);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->mask_width = clib_net_to_host_u32(a->mask_width);
    /* a->traffic_type = a->traffic_type (no-op) */
    /* a->nh_type = a->nh_type (no-op) */
    a->color = clib_net_to_host_u32(a->color);
    /* a->co_bits = a->co_bits (no-op) */
    a->vpn_label = clib_net_to_host_u32(a->vpn_label);
}

#endif

#ifndef _vl_api_defined_sr_mpls_steering_add_del_reply_t_endian
#define _vl_api_defined_sr_mpls_steering_add_del_reply_t_endian
static inline void vl_api_sr_mpls_steering_add_del_reply_t_endian (vl_api_sr_mpls_steering_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_assign_endpoint_color_t_endian
#define _vl_api_defined_sr_mpls_policy_assign_endpoint_color_t_endian
static inline void vl_api_sr_mpls_policy_assign_endpoint_color_t_endian (vl_api_sr_mpls_policy_assign_endpoint_color_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->bsid = clib_net_to_host_u32(a->bsid);
    /* a->endpoint_type = a->endpoint_type (no-op) */
    a->color = clib_net_to_host_u32(a->color);
}

#endif

#ifndef _vl_api_defined_sr_mpls_policy_assign_endpoint_color_reply_t_endian
#define _vl_api_defined_sr_mpls_policy_assign_endpoint_color_reply_t_endian
static inline void vl_api_sr_mpls_policy_assign_endpoint_color_reply_t_endian (vl_api_sr_mpls_policy_assign_endpoint_color_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(sr_mpls.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(sr_mpls.api, 0x93240385)

#endif

