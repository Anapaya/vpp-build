/*
 * VLIB API definitions 2020-06-13 06:01:52
 * Input file: pot.api
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
#warning no content included from pot.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_POT_PROFILE_ADD, vl_api_pot_profile_add_t_handler)
vl_msg_id(VL_API_POT_PROFILE_ADD_REPLY, vl_api_pot_profile_add_reply_t_handler)
vl_msg_id(VL_API_POT_PROFILE_ACTIVATE, vl_api_pot_profile_activate_t_handler)
vl_msg_id(VL_API_POT_PROFILE_ACTIVATE_REPLY, vl_api_pot_profile_activate_reply_t_handler)
vl_msg_id(VL_API_POT_PROFILE_DEL, vl_api_pot_profile_del_t_handler)
vl_msg_id(VL_API_POT_PROFILE_DEL_REPLY, vl_api_pot_profile_del_reply_t_handler)
vl_msg_id(VL_API_POT_PROFILE_SHOW_CONFIG_DUMP, vl_api_pot_profile_show_config_dump_t_handler)
vl_msg_id(VL_API_POT_PROFILE_SHOW_CONFIG_DETAILS, vl_api_pot_profile_show_config_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_pot_profile_add_t, 1)
vl_msg_name(vl_api_pot_profile_add_reply_t, 1)
vl_msg_name(vl_api_pot_profile_activate_t, 1)
vl_msg_name(vl_api_pot_profile_activate_reply_t, 1)
vl_msg_name(vl_api_pot_profile_del_t, 1)
vl_msg_name(vl_api_pot_profile_del_reply_t, 1)
vl_msg_name(vl_api_pot_profile_show_config_dump_t, 1)
vl_msg_name(vl_api_pot_profile_show_config_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_pot \
_(VL_API_POT_PROFILE_ADD, pot_profile_add, e8f1d058) \
_(VL_API_POT_PROFILE_ADD_REPLY, pot_profile_add_reply, e8d4e804) \
_(VL_API_POT_PROFILE_ACTIVATE, pot_profile_activate, eeada566) \
_(VL_API_POT_PROFILE_ACTIVATE_REPLY, pot_profile_activate_reply, e8d4e804) \
_(VL_API_POT_PROFILE_DEL, pot_profile_del, bb100832) \
_(VL_API_POT_PROFILE_DEL_REPLY, pot_profile_del_reply, e8d4e804) \
_(VL_API_POT_PROFILE_SHOW_CONFIG_DUMP, pot_profile_show_config_dump, 005b7d59) \
_(VL_API_POT_PROFILE_SHOW_CONFIG_DETAILS, pot_profile_show_config_details, b7ce0618) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_pot_api
#define included_pot_api
#ifndef _vl_api_defined_pot_profile_add
#define _vl_api_defined_pot_profile_add
typedef VL_API_PACKED(struct _vl_api_pot_profile_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 id;
    u8 validator;
    u64 secret_key;
    u64 secret_share;
    u64 prime;
    u8 max_bits;
    u64 lpc;
    u64 polynomial_public;
    u8 list_name_len;
    u8 list_name[0];
}) vl_api_pot_profile_add_t;
#endif

#ifndef _vl_api_defined_pot_profile_add_reply
#define _vl_api_defined_pot_profile_add_reply
typedef VL_API_PACKED(struct _vl_api_pot_profile_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_pot_profile_add_reply_t;
#endif

#ifndef _vl_api_defined_pot_profile_activate
#define _vl_api_defined_pot_profile_activate
typedef VL_API_PACKED(struct _vl_api_pot_profile_activate {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 id;
    u8 list_name_len;
    u8 list_name[0];
}) vl_api_pot_profile_activate_t;
#endif

#ifndef _vl_api_defined_pot_profile_activate_reply
#define _vl_api_defined_pot_profile_activate_reply
typedef VL_API_PACKED(struct _vl_api_pot_profile_activate_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_pot_profile_activate_reply_t;
#endif

#ifndef _vl_api_defined_pot_profile_del
#define _vl_api_defined_pot_profile_del
typedef VL_API_PACKED(struct _vl_api_pot_profile_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 list_name_len;
    u8 list_name[0];
}) vl_api_pot_profile_del_t;
#endif

#ifndef _vl_api_defined_pot_profile_del_reply
#define _vl_api_defined_pot_profile_del_reply
typedef VL_API_PACKED(struct _vl_api_pot_profile_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_pot_profile_del_reply_t;
#endif

#ifndef _vl_api_defined_pot_profile_show_config_dump
#define _vl_api_defined_pot_profile_show_config_dump
typedef VL_API_PACKED(struct _vl_api_pot_profile_show_config_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 id;
}) vl_api_pot_profile_show_config_dump_t;
#endif

#ifndef _vl_api_defined_pot_profile_show_config_details
#define _vl_api_defined_pot_profile_show_config_details
typedef VL_API_PACKED(struct _vl_api_pot_profile_show_config_details {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 id;
    u8 validator;
    u64 secret_key;
    u64 secret_share;
    u64 prime;
    u64 bit_mask;
    u64 lpc;
    u64 polynomial_public;
}) vl_api_pot_profile_show_config_details_t;
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

#ifndef _vl_api_defined_pot_profile_add_t_print
#define _vl_api_defined_pot_profile_add_t_print
static inline void *vl_api_pot_profile_add_t_print (vl_api_pot_profile_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "validator: %u\n", a->validator);
    vl_print(handle, "secret_key: %llu\n", a->secret_key);
    vl_print(handle, "secret_share: %llu\n", a->secret_share);
    vl_print(handle, "prime: %llu\n", a->prime);
    vl_print(handle, "max_bits: %u\n", a->max_bits);
    vl_print(handle, "lpc: %llu\n", a->lpc);
    vl_print(handle, "polynomial_public: %llu\n", a->polynomial_public);
    vl_print(handle, "list_name_len: %u\n", a->list_name_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_pot_profile_add_reply_t_print
#define _vl_api_defined_pot_profile_add_reply_t_print
static inline void *vl_api_pot_profile_add_reply_t_print (vl_api_pot_profile_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_pot_profile_activate_t_print
#define _vl_api_defined_pot_profile_activate_t_print
static inline void *vl_api_pot_profile_activate_t_print (vl_api_pot_profile_activate_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_activate_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "list_name_len: %u\n", a->list_name_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_pot_profile_activate_reply_t_print
#define _vl_api_defined_pot_profile_activate_reply_t_print
static inline void *vl_api_pot_profile_activate_reply_t_print (vl_api_pot_profile_activate_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_activate_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_pot_profile_del_t_print
#define _vl_api_defined_pot_profile_del_t_print
static inline void *vl_api_pot_profile_del_t_print (vl_api_pot_profile_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "list_name_len: %u\n", a->list_name_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_pot_profile_del_reply_t_print
#define _vl_api_defined_pot_profile_del_reply_t_print
static inline void *vl_api_pot_profile_del_reply_t_print (vl_api_pot_profile_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_pot_profile_show_config_dump_t_print
#define _vl_api_defined_pot_profile_show_config_dump_t_print
static inline void *vl_api_pot_profile_show_config_dump_t_print (vl_api_pot_profile_show_config_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_show_config_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "id: %u\n", a->id);
    return handle;
}

#endif

#ifndef _vl_api_defined_pot_profile_show_config_details_t_print
#define _vl_api_defined_pot_profile_show_config_details_t_print
static inline void *vl_api_pot_profile_show_config_details_t_print (vl_api_pot_profile_show_config_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_pot_profile_show_config_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "id: %u\n", a->id);
    vl_print(handle, "validator: %u\n", a->validator);
    vl_print(handle, "secret_key: %llu\n", a->secret_key);
    vl_print(handle, "secret_share: %llu\n", a->secret_share);
    vl_print(handle, "prime: %llu\n", a->prime);
    vl_print(handle, "bit_mask: %llu\n", a->bit_mask);
    vl_print(handle, "lpc: %llu\n", a->lpc);
    vl_print(handle, "polynomial_public: %llu\n", a->polynomial_public);
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

#ifndef _vl_api_defined_pot_profile_add_t_endian
#define _vl_api_defined_pot_profile_add_t_endian
static inline void vl_api_pot_profile_add_t_endian (vl_api_pot_profile_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->id = a->id (no-op) */
    /* a->validator = a->validator (no-op) */
    a->secret_key = clib_net_to_host_u64(a->secret_key);
    a->secret_share = clib_net_to_host_u64(a->secret_share);
    a->prime = clib_net_to_host_u64(a->prime);
    /* a->max_bits = a->max_bits (no-op) */
    a->lpc = clib_net_to_host_u64(a->lpc);
    a->polynomial_public = clib_net_to_host_u64(a->polynomial_public);
    /* a->list_name_len = a->list_name_len (no-op) */
}

#endif

#ifndef _vl_api_defined_pot_profile_add_reply_t_endian
#define _vl_api_defined_pot_profile_add_reply_t_endian
static inline void vl_api_pot_profile_add_reply_t_endian (vl_api_pot_profile_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_pot_profile_activate_t_endian
#define _vl_api_defined_pot_profile_activate_t_endian
static inline void vl_api_pot_profile_activate_t_endian (vl_api_pot_profile_activate_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->id = a->id (no-op) */
    /* a->list_name_len = a->list_name_len (no-op) */
}

#endif

#ifndef _vl_api_defined_pot_profile_activate_reply_t_endian
#define _vl_api_defined_pot_profile_activate_reply_t_endian
static inline void vl_api_pot_profile_activate_reply_t_endian (vl_api_pot_profile_activate_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_pot_profile_del_t_endian
#define _vl_api_defined_pot_profile_del_t_endian
static inline void vl_api_pot_profile_del_t_endian (vl_api_pot_profile_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->list_name_len = a->list_name_len (no-op) */
}

#endif

#ifndef _vl_api_defined_pot_profile_del_reply_t_endian
#define _vl_api_defined_pot_profile_del_reply_t_endian
static inline void vl_api_pot_profile_del_reply_t_endian (vl_api_pot_profile_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_pot_profile_show_config_dump_t_endian
#define _vl_api_defined_pot_profile_show_config_dump_t_endian
static inline void vl_api_pot_profile_show_config_dump_t_endian (vl_api_pot_profile_show_config_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->id = a->id (no-op) */
}

#endif

#ifndef _vl_api_defined_pot_profile_show_config_details_t_endian
#define _vl_api_defined_pot_profile_show_config_details_t_endian
static inline void vl_api_pot_profile_show_config_details_t_endian (vl_api_pot_profile_show_config_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->id = a->id (no-op) */
    /* a->validator = a->validator (no-op) */
    a->secret_key = clib_net_to_host_u64(a->secret_key);
    a->secret_share = clib_net_to_host_u64(a->secret_share);
    a->prime = clib_net_to_host_u64(a->prime);
    a->bit_mask = clib_net_to_host_u64(a->bit_mask);
    a->lpc = clib_net_to_host_u64(a->lpc);
    a->polynomial_public = clib_net_to_host_u64(a->polynomial_public);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(pot.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(pot.api, 0x98eccbe7)

#endif

