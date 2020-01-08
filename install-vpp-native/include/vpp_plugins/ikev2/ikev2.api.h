/*
 * VLIB API definitions 2020-01-07 14:22:04
 * Input file: ikev2.api
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
#warning no content included from ikev2.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IKEV2_PLUGIN_GET_VERSION, vl_api_ikev2_plugin_get_version_t_handler)
vl_msg_id(VL_API_IKEV2_PLUGIN_GET_VERSION_REPLY, vl_api_ikev2_plugin_get_version_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_ADD_DEL, vl_api_ikev2_profile_add_del_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_ADD_DEL_REPLY, vl_api_ikev2_profile_add_del_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_AUTH, vl_api_ikev2_profile_set_auth_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_AUTH_REPLY, vl_api_ikev2_profile_set_auth_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_ID, vl_api_ikev2_profile_set_id_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_ID_REPLY, vl_api_ikev2_profile_set_id_reply_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_TS, vl_api_ikev2_profile_set_ts_t_handler)
vl_msg_id(VL_API_IKEV2_PROFILE_SET_TS_REPLY, vl_api_ikev2_profile_set_ts_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_LOCAL_KEY, vl_api_ikev2_set_local_key_t_handler)
vl_msg_id(VL_API_IKEV2_SET_LOCAL_KEY_REPLY, vl_api_ikev2_set_local_key_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_RESPONDER, vl_api_ikev2_set_responder_t_handler)
vl_msg_id(VL_API_IKEV2_SET_RESPONDER_REPLY, vl_api_ikev2_set_responder_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_IKE_TRANSFORMS, vl_api_ikev2_set_ike_transforms_t_handler)
vl_msg_id(VL_API_IKEV2_SET_IKE_TRANSFORMS_REPLY, vl_api_ikev2_set_ike_transforms_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_ESP_TRANSFORMS, vl_api_ikev2_set_esp_transforms_t_handler)
vl_msg_id(VL_API_IKEV2_SET_ESP_TRANSFORMS_REPLY, vl_api_ikev2_set_esp_transforms_reply_t_handler)
vl_msg_id(VL_API_IKEV2_SET_SA_LIFETIME, vl_api_ikev2_set_sa_lifetime_t_handler)
vl_msg_id(VL_API_IKEV2_SET_SA_LIFETIME_REPLY, vl_api_ikev2_set_sa_lifetime_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_SA_INIT, vl_api_ikev2_initiate_sa_init_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_SA_INIT_REPLY, vl_api_ikev2_initiate_sa_init_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_IKE_SA, vl_api_ikev2_initiate_del_ike_sa_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_IKE_SA_REPLY, vl_api_ikev2_initiate_del_ike_sa_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_CHILD_SA, vl_api_ikev2_initiate_del_child_sa_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_DEL_CHILD_SA_REPLY, vl_api_ikev2_initiate_del_child_sa_reply_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA, vl_api_ikev2_initiate_rekey_child_sa_t_handler)
vl_msg_id(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA_REPLY, vl_api_ikev2_initiate_rekey_child_sa_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ikev2_plugin_get_version_t, 1)
vl_msg_name(vl_api_ikev2_plugin_get_version_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_add_del_t, 1)
vl_msg_name(vl_api_ikev2_profile_add_del_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_auth_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_auth_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_id_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_id_reply_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_ts_t, 1)
vl_msg_name(vl_api_ikev2_profile_set_ts_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_local_key_t, 1)
vl_msg_name(vl_api_ikev2_set_local_key_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_responder_t, 1)
vl_msg_name(vl_api_ikev2_set_responder_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_ike_transforms_t, 1)
vl_msg_name(vl_api_ikev2_set_ike_transforms_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_esp_transforms_t, 1)
vl_msg_name(vl_api_ikev2_set_esp_transforms_reply_t, 1)
vl_msg_name(vl_api_ikev2_set_sa_lifetime_t, 1)
vl_msg_name(vl_api_ikev2_set_sa_lifetime_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_sa_init_t, 1)
vl_msg_name(vl_api_ikev2_initiate_sa_init_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_ike_sa_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_ike_sa_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_child_sa_t, 1)
vl_msg_name(vl_api_ikev2_initiate_del_child_sa_reply_t, 1)
vl_msg_name(vl_api_ikev2_initiate_rekey_child_sa_t, 1)
vl_msg_name(vl_api_ikev2_initiate_rekey_child_sa_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ikev2 \
_(VL_API_IKEV2_PLUGIN_GET_VERSION, ikev2_plugin_get_version, 51077d14) \
_(VL_API_IKEV2_PLUGIN_GET_VERSION_REPLY, ikev2_plugin_get_version_reply, 9b32cf86) \
_(VL_API_IKEV2_PROFILE_ADD_DEL, ikev2_profile_add_del, 405b222e) \
_(VL_API_IKEV2_PROFILE_ADD_DEL_REPLY, ikev2_profile_add_del_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_AUTH, ikev2_profile_set_auth, bd76f369) \
_(VL_API_IKEV2_PROFILE_SET_AUTH_REPLY, ikev2_profile_set_auth_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_ID, ikev2_profile_set_id, ca88c0ef) \
_(VL_API_IKEV2_PROFILE_SET_ID_REPLY, ikev2_profile_set_id_reply, e8d4e804) \
_(VL_API_IKEV2_PROFILE_SET_TS, ikev2_profile_set_ts, 481aad89) \
_(VL_API_IKEV2_PROFILE_SET_TS_REPLY, ikev2_profile_set_ts_reply, e8d4e804) \
_(VL_API_IKEV2_SET_LOCAL_KEY, ikev2_set_local_key, e4996cd5) \
_(VL_API_IKEV2_SET_LOCAL_KEY_REPLY, ikev2_set_local_key_reply, e8d4e804) \
_(VL_API_IKEV2_SET_RESPONDER, ikev2_set_responder, a99996f3) \
_(VL_API_IKEV2_SET_RESPONDER_REPLY, ikev2_set_responder_reply, e8d4e804) \
_(VL_API_IKEV2_SET_IKE_TRANSFORMS, ikev2_set_ike_transforms, 919f5efd) \
_(VL_API_IKEV2_SET_IKE_TRANSFORMS_REPLY, ikev2_set_ike_transforms_reply, e8d4e804) \
_(VL_API_IKEV2_SET_ESP_TRANSFORMS, ikev2_set_esp_transforms, 919f5efd) \
_(VL_API_IKEV2_SET_ESP_TRANSFORMS_REPLY, ikev2_set_esp_transforms_reply, e8d4e804) \
_(VL_API_IKEV2_SET_SA_LIFETIME, ikev2_set_sa_lifetime, 46d31203) \
_(VL_API_IKEV2_SET_SA_LIFETIME_REPLY, ikev2_set_sa_lifetime_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_SA_INIT, ikev2_initiate_sa_init, 0cb71b0e) \
_(VL_API_IKEV2_INITIATE_SA_INIT_REPLY, ikev2_initiate_sa_init_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_DEL_IKE_SA, ikev2_initiate_del_ike_sa, 8d125bdd) \
_(VL_API_IKEV2_INITIATE_DEL_IKE_SA_REPLY, ikev2_initiate_del_ike_sa_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_DEL_CHILD_SA, ikev2_initiate_del_child_sa, 7f004d2e) \
_(VL_API_IKEV2_INITIATE_DEL_CHILD_SA_REPLY, ikev2_initiate_del_child_sa_reply, e8d4e804) \
_(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA, ikev2_initiate_rekey_child_sa, 7f004d2e) \
_(VL_API_IKEV2_INITIATE_REKEY_CHILD_SA_REPLY, ikev2_initiate_rekey_child_sa_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_ikev2_api
#define included_ikev2_api
#ifndef _vl_api_defined_ikev2_plugin_get_version
#define _vl_api_defined_ikev2_plugin_get_version
typedef VL_API_PACKED(struct _vl_api_ikev2_plugin_get_version {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_ikev2_plugin_get_version_t;
#endif

#ifndef _vl_api_defined_ikev2_plugin_get_version_reply
#define _vl_api_defined_ikev2_plugin_get_version_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_plugin_get_version_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 major;
    u32 minor;
}) vl_api_ikev2_plugin_get_version_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_add_del
#define _vl_api_defined_ikev2_profile_add_del
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u8 is_add;
}) vl_api_ikev2_profile_add_del_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_add_del_reply
#define _vl_api_defined_ikev2_profile_add_del_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_profile_add_del_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_set_auth
#define _vl_api_defined_ikev2_profile_set_auth
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_set_auth {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u8 auth_method;
    u8 is_hex;
    u32 data_len;
    u8 data[0];
}) vl_api_ikev2_profile_set_auth_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_set_auth_reply
#define _vl_api_defined_ikev2_profile_set_auth_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_set_auth_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_profile_set_auth_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_set_id
#define _vl_api_defined_ikev2_profile_set_id
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_set_id {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u8 is_local;
    u8 id_type;
    u32 data_len;
    u8 data[0];
}) vl_api_ikev2_profile_set_id_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_set_id_reply
#define _vl_api_defined_ikev2_profile_set_id_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_set_id_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_profile_set_id_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_set_ts
#define _vl_api_defined_ikev2_profile_set_ts
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_set_ts {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u8 is_local;
    u8 proto;
    u16 start_port;
    u16 end_port;
    u32 start_addr;
    u32 end_addr;
}) vl_api_ikev2_profile_set_ts_t;
#endif

#ifndef _vl_api_defined_ikev2_profile_set_ts_reply
#define _vl_api_defined_ikev2_profile_set_ts_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_profile_set_ts_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_profile_set_ts_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_set_local_key
#define _vl_api_defined_ikev2_set_local_key
typedef VL_API_PACKED(struct _vl_api_ikev2_set_local_key {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 key_file[256];
}) vl_api_ikev2_set_local_key_t;
#endif

#ifndef _vl_api_defined_ikev2_set_local_key_reply
#define _vl_api_defined_ikev2_set_local_key_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_set_local_key_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_set_local_key_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_set_responder
#define _vl_api_defined_ikev2_set_responder
typedef VL_API_PACKED(struct _vl_api_ikev2_set_responder {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u32 sw_if_index;
    u8 address[4];
}) vl_api_ikev2_set_responder_t;
#endif

#ifndef _vl_api_defined_ikev2_set_responder_reply
#define _vl_api_defined_ikev2_set_responder_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_set_responder_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_set_responder_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_set_ike_transforms
#define _vl_api_defined_ikev2_set_ike_transforms
typedef VL_API_PACKED(struct _vl_api_ikev2_set_ike_transforms {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u32 crypto_alg;
    u32 crypto_key_size;
    u32 integ_alg;
    u32 dh_group;
}) vl_api_ikev2_set_ike_transforms_t;
#endif

#ifndef _vl_api_defined_ikev2_set_ike_transforms_reply
#define _vl_api_defined_ikev2_set_ike_transforms_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_set_ike_transforms_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_set_ike_transforms_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_set_esp_transforms
#define _vl_api_defined_ikev2_set_esp_transforms
typedef VL_API_PACKED(struct _vl_api_ikev2_set_esp_transforms {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u32 crypto_alg;
    u32 crypto_key_size;
    u32 integ_alg;
    u32 dh_group;
}) vl_api_ikev2_set_esp_transforms_t;
#endif

#ifndef _vl_api_defined_ikev2_set_esp_transforms_reply
#define _vl_api_defined_ikev2_set_esp_transforms_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_set_esp_transforms_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_set_esp_transforms_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_set_sa_lifetime
#define _vl_api_defined_ikev2_set_sa_lifetime
typedef VL_API_PACKED(struct _vl_api_ikev2_set_sa_lifetime {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
    u64 lifetime;
    u32 lifetime_jitter;
    u32 handover;
    u64 lifetime_maxdata;
}) vl_api_ikev2_set_sa_lifetime_t;
#endif

#ifndef _vl_api_defined_ikev2_set_sa_lifetime_reply
#define _vl_api_defined_ikev2_set_sa_lifetime_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_set_sa_lifetime_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_set_sa_lifetime_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_sa_init
#define _vl_api_defined_ikev2_initiate_sa_init
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_sa_init {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[64];
}) vl_api_ikev2_initiate_sa_init_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_sa_init_reply
#define _vl_api_defined_ikev2_initiate_sa_init_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_sa_init_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_initiate_sa_init_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_del_ike_sa
#define _vl_api_defined_ikev2_initiate_del_ike_sa
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_del_ike_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 ispi;
}) vl_api_ikev2_initiate_del_ike_sa_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_del_ike_sa_reply
#define _vl_api_defined_ikev2_initiate_del_ike_sa_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_del_ike_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_initiate_del_ike_sa_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_del_child_sa
#define _vl_api_defined_ikev2_initiate_del_child_sa
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_del_child_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 ispi;
}) vl_api_ikev2_initiate_del_child_sa_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_del_child_sa_reply
#define _vl_api_defined_ikev2_initiate_del_child_sa_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_del_child_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_initiate_del_child_sa_reply_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_rekey_child_sa
#define _vl_api_defined_ikev2_initiate_rekey_child_sa
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_rekey_child_sa {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 ispi;
}) vl_api_ikev2_initiate_rekey_child_sa_t;
#endif

#ifndef _vl_api_defined_ikev2_initiate_rekey_child_sa_reply
#define _vl_api_defined_ikev2_initiate_rekey_child_sa_reply
typedef VL_API_PACKED(struct _vl_api_ikev2_initiate_rekey_child_sa_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ikev2_initiate_rekey_child_sa_reply_t;
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

#ifndef _vl_api_defined_ikev2_plugin_get_version_t_print
#define _vl_api_defined_ikev2_plugin_get_version_t_print
static inline void *vl_api_ikev2_plugin_get_version_t_print (vl_api_ikev2_plugin_get_version_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_plugin_get_version_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_plugin_get_version_reply_t_print
#define _vl_api_defined_ikev2_plugin_get_version_reply_t_print
static inline void *vl_api_ikev2_plugin_get_version_reply_t_print (vl_api_ikev2_plugin_get_version_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_plugin_get_version_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "major: %u\n", a->major);
    vl_print(handle, "minor: %u\n", a->minor);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_add_del_t_print
#define _vl_api_defined_ikev2_profile_add_del_t_print
static inline void *vl_api_ikev2_profile_add_del_t_print (vl_api_ikev2_profile_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_add_del_reply_t_print
#define _vl_api_defined_ikev2_profile_add_del_reply_t_print
static inline void *vl_api_ikev2_profile_add_del_reply_t_print (vl_api_ikev2_profile_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_auth_t_print
#define _vl_api_defined_ikev2_profile_set_auth_t_print
static inline void *vl_api_ikev2_profile_set_auth_t_print (vl_api_ikev2_profile_set_auth_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_set_auth_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "auth_method: %u\n", a->auth_method);
    vl_print(handle, "is_hex: %u\n", a->is_hex);
    vl_print(handle, "data_len: %u\n", a->data_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_auth_reply_t_print
#define _vl_api_defined_ikev2_profile_set_auth_reply_t_print
static inline void *vl_api_ikev2_profile_set_auth_reply_t_print (vl_api_ikev2_profile_set_auth_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_set_auth_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_id_t_print
#define _vl_api_defined_ikev2_profile_set_id_t_print
static inline void *vl_api_ikev2_profile_set_id_t_print (vl_api_ikev2_profile_set_id_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_set_id_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_local: %u\n", a->is_local);
    vl_print(handle, "id_type: %u\n", a->id_type);
    vl_print(handle, "data_len: %u\n", a->data_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_id_reply_t_print
#define _vl_api_defined_ikev2_profile_set_id_reply_t_print
static inline void *vl_api_ikev2_profile_set_id_reply_t_print (vl_api_ikev2_profile_set_id_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_set_id_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_ts_t_print
#define _vl_api_defined_ikev2_profile_set_ts_t_print
static inline void *vl_api_ikev2_profile_set_ts_t_print (vl_api_ikev2_profile_set_ts_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_set_ts_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_local: %u\n", a->is_local);
    vl_print(handle, "proto: %u\n", a->proto);
    vl_print(handle, "start_port: %u\n", a->start_port);
    vl_print(handle, "end_port: %u\n", a->end_port);
    vl_print(handle, "start_addr: %u\n", a->start_addr);
    vl_print(handle, "end_addr: %u\n", a->end_addr);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_ts_reply_t_print
#define _vl_api_defined_ikev2_profile_set_ts_reply_t_print
static inline void *vl_api_ikev2_profile_set_ts_reply_t_print (vl_api_ikev2_profile_set_ts_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_profile_set_ts_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_local_key_t_print
#define _vl_api_defined_ikev2_set_local_key_t_print
static inline void *vl_api_ikev2_set_local_key_t_print (vl_api_ikev2_set_local_key_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_local_key_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_local_key_reply_t_print
#define _vl_api_defined_ikev2_set_local_key_reply_t_print
static inline void *vl_api_ikev2_set_local_key_reply_t_print (vl_api_ikev2_set_local_key_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_local_key_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_responder_t_print
#define _vl_api_defined_ikev2_set_responder_t_print
static inline void *vl_api_ikev2_set_responder_t_print (vl_api_ikev2_set_responder_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_responder_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_responder_reply_t_print
#define _vl_api_defined_ikev2_set_responder_reply_t_print
static inline void *vl_api_ikev2_set_responder_reply_t_print (vl_api_ikev2_set_responder_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_responder_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_ike_transforms_t_print
#define _vl_api_defined_ikev2_set_ike_transforms_t_print
static inline void *vl_api_ikev2_set_ike_transforms_t_print (vl_api_ikev2_set_ike_transforms_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_ike_transforms_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "crypto_alg: %u\n", a->crypto_alg);
    vl_print(handle, "crypto_key_size: %u\n", a->crypto_key_size);
    vl_print(handle, "integ_alg: %u\n", a->integ_alg);
    vl_print(handle, "dh_group: %u\n", a->dh_group);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_ike_transforms_reply_t_print
#define _vl_api_defined_ikev2_set_ike_transforms_reply_t_print
static inline void *vl_api_ikev2_set_ike_transforms_reply_t_print (vl_api_ikev2_set_ike_transforms_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_ike_transforms_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_esp_transforms_t_print
#define _vl_api_defined_ikev2_set_esp_transforms_t_print
static inline void *vl_api_ikev2_set_esp_transforms_t_print (vl_api_ikev2_set_esp_transforms_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_esp_transforms_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "crypto_alg: %u\n", a->crypto_alg);
    vl_print(handle, "crypto_key_size: %u\n", a->crypto_key_size);
    vl_print(handle, "integ_alg: %u\n", a->integ_alg);
    vl_print(handle, "dh_group: %u\n", a->dh_group);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_esp_transforms_reply_t_print
#define _vl_api_defined_ikev2_set_esp_transforms_reply_t_print
static inline void *vl_api_ikev2_set_esp_transforms_reply_t_print (vl_api_ikev2_set_esp_transforms_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_esp_transforms_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_sa_lifetime_t_print
#define _vl_api_defined_ikev2_set_sa_lifetime_t_print
static inline void *vl_api_ikev2_set_sa_lifetime_t_print (vl_api_ikev2_set_sa_lifetime_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_sa_lifetime_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "lifetime: %llu\n", a->lifetime);
    vl_print(handle, "lifetime_jitter: %u\n", a->lifetime_jitter);
    vl_print(handle, "handover: %u\n", a->handover);
    vl_print(handle, "lifetime_maxdata: %llu\n", a->lifetime_maxdata);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_set_sa_lifetime_reply_t_print
#define _vl_api_defined_ikev2_set_sa_lifetime_reply_t_print
static inline void *vl_api_ikev2_set_sa_lifetime_reply_t_print (vl_api_ikev2_set_sa_lifetime_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_set_sa_lifetime_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_sa_init_t_print
#define _vl_api_defined_ikev2_initiate_sa_init_t_print
static inline void *vl_api_ikev2_initiate_sa_init_t_print (vl_api_ikev2_initiate_sa_init_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_sa_init_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_sa_init_reply_t_print
#define _vl_api_defined_ikev2_initiate_sa_init_reply_t_print
static inline void *vl_api_ikev2_initiate_sa_init_reply_t_print (vl_api_ikev2_initiate_sa_init_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_sa_init_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_ike_sa_t_print
#define _vl_api_defined_ikev2_initiate_del_ike_sa_t_print
static inline void *vl_api_ikev2_initiate_del_ike_sa_t_print (vl_api_ikev2_initiate_del_ike_sa_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_del_ike_sa_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ispi: %llu\n", a->ispi);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_ike_sa_reply_t_print
#define _vl_api_defined_ikev2_initiate_del_ike_sa_reply_t_print
static inline void *vl_api_ikev2_initiate_del_ike_sa_reply_t_print (vl_api_ikev2_initiate_del_ike_sa_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_del_ike_sa_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_child_sa_t_print
#define _vl_api_defined_ikev2_initiate_del_child_sa_t_print
static inline void *vl_api_ikev2_initiate_del_child_sa_t_print (vl_api_ikev2_initiate_del_child_sa_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_del_child_sa_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ispi: %u\n", a->ispi);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_child_sa_reply_t_print
#define _vl_api_defined_ikev2_initiate_del_child_sa_reply_t_print
static inline void *vl_api_ikev2_initiate_del_child_sa_reply_t_print (vl_api_ikev2_initiate_del_child_sa_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_del_child_sa_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_rekey_child_sa_t_print
#define _vl_api_defined_ikev2_initiate_rekey_child_sa_t_print
static inline void *vl_api_ikev2_initiate_rekey_child_sa_t_print (vl_api_ikev2_initiate_rekey_child_sa_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_rekey_child_sa_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "ispi: %u\n", a->ispi);
    return handle;
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_rekey_child_sa_reply_t_print
#define _vl_api_defined_ikev2_initiate_rekey_child_sa_reply_t_print
static inline void *vl_api_ikev2_initiate_rekey_child_sa_reply_t_print (vl_api_ikev2_initiate_rekey_child_sa_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ikev2_initiate_rekey_child_sa_reply_t:\n");
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

#ifndef _vl_api_defined_ikev2_plugin_get_version_t_endian
#define _vl_api_defined_ikev2_plugin_get_version_t_endian
static inline void vl_api_ikev2_plugin_get_version_t_endian (vl_api_ikev2_plugin_get_version_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ikev2_plugin_get_version_reply_t_endian
#define _vl_api_defined_ikev2_plugin_get_version_reply_t_endian
static inline void vl_api_ikev2_plugin_get_version_reply_t_endian (vl_api_ikev2_plugin_get_version_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
}

#endif

#ifndef _vl_api_defined_ikev2_profile_add_del_t_endian
#define _vl_api_defined_ikev2_profile_add_del_t_endian
static inline void vl_api_ikev2_profile_add_del_t_endian (vl_api_ikev2_profile_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_ikev2_profile_add_del_reply_t_endian
#define _vl_api_defined_ikev2_profile_add_del_reply_t_endian
static inline void vl_api_ikev2_profile_add_del_reply_t_endian (vl_api_ikev2_profile_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_auth_t_endian
#define _vl_api_defined_ikev2_profile_set_auth_t_endian
static inline void vl_api_ikev2_profile_set_auth_t_endian (vl_api_ikev2_profile_set_auth_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->auth_method = a->auth_method (no-op) */
    /* a->is_hex = a->is_hex (no-op) */
    a->data_len = clib_net_to_host_u32(a->data_len);
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_auth_reply_t_endian
#define _vl_api_defined_ikev2_profile_set_auth_reply_t_endian
static inline void vl_api_ikev2_profile_set_auth_reply_t_endian (vl_api_ikev2_profile_set_auth_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_id_t_endian
#define _vl_api_defined_ikev2_profile_set_id_t_endian
static inline void vl_api_ikev2_profile_set_id_t_endian (vl_api_ikev2_profile_set_id_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_local = a->is_local (no-op) */
    /* a->id_type = a->id_type (no-op) */
    a->data_len = clib_net_to_host_u32(a->data_len);
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_id_reply_t_endian
#define _vl_api_defined_ikev2_profile_set_id_reply_t_endian
static inline void vl_api_ikev2_profile_set_id_reply_t_endian (vl_api_ikev2_profile_set_id_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_ts_t_endian
#define _vl_api_defined_ikev2_profile_set_ts_t_endian
static inline void vl_api_ikev2_profile_set_ts_t_endian (vl_api_ikev2_profile_set_ts_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_local = a->is_local (no-op) */
    /* a->proto = a->proto (no-op) */
    a->start_port = clib_net_to_host_u16(a->start_port);
    a->end_port = clib_net_to_host_u16(a->end_port);
    a->start_addr = clib_net_to_host_u32(a->start_addr);
    a->end_addr = clib_net_to_host_u32(a->end_addr);
}

#endif

#ifndef _vl_api_defined_ikev2_profile_set_ts_reply_t_endian
#define _vl_api_defined_ikev2_profile_set_ts_reply_t_endian
static inline void vl_api_ikev2_profile_set_ts_reply_t_endian (vl_api_ikev2_profile_set_ts_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_set_local_key_t_endian
#define _vl_api_defined_ikev2_set_local_key_t_endian
static inline void vl_api_ikev2_set_local_key_t_endian (vl_api_ikev2_set_local_key_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ikev2_set_local_key_reply_t_endian
#define _vl_api_defined_ikev2_set_local_key_reply_t_endian
static inline void vl_api_ikev2_set_local_key_reply_t_endian (vl_api_ikev2_set_local_key_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_set_responder_t_endian
#define _vl_api_defined_ikev2_set_responder_t_endian
static inline void vl_api_ikev2_set_responder_t_endian (vl_api_ikev2_set_responder_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_ikev2_set_responder_reply_t_endian
#define _vl_api_defined_ikev2_set_responder_reply_t_endian
static inline void vl_api_ikev2_set_responder_reply_t_endian (vl_api_ikev2_set_responder_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_set_ike_transforms_t_endian
#define _vl_api_defined_ikev2_set_ike_transforms_t_endian
static inline void vl_api_ikev2_set_ike_transforms_t_endian (vl_api_ikev2_set_ike_transforms_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->crypto_alg = clib_net_to_host_u32(a->crypto_alg);
    a->crypto_key_size = clib_net_to_host_u32(a->crypto_key_size);
    a->integ_alg = clib_net_to_host_u32(a->integ_alg);
    a->dh_group = clib_net_to_host_u32(a->dh_group);
}

#endif

#ifndef _vl_api_defined_ikev2_set_ike_transforms_reply_t_endian
#define _vl_api_defined_ikev2_set_ike_transforms_reply_t_endian
static inline void vl_api_ikev2_set_ike_transforms_reply_t_endian (vl_api_ikev2_set_ike_transforms_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_set_esp_transforms_t_endian
#define _vl_api_defined_ikev2_set_esp_transforms_t_endian
static inline void vl_api_ikev2_set_esp_transforms_t_endian (vl_api_ikev2_set_esp_transforms_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->crypto_alg = clib_net_to_host_u32(a->crypto_alg);
    a->crypto_key_size = clib_net_to_host_u32(a->crypto_key_size);
    a->integ_alg = clib_net_to_host_u32(a->integ_alg);
    a->dh_group = clib_net_to_host_u32(a->dh_group);
}

#endif

#ifndef _vl_api_defined_ikev2_set_esp_transforms_reply_t_endian
#define _vl_api_defined_ikev2_set_esp_transforms_reply_t_endian
static inline void vl_api_ikev2_set_esp_transforms_reply_t_endian (vl_api_ikev2_set_esp_transforms_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_set_sa_lifetime_t_endian
#define _vl_api_defined_ikev2_set_sa_lifetime_t_endian
static inline void vl_api_ikev2_set_sa_lifetime_t_endian (vl_api_ikev2_set_sa_lifetime_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->lifetime = clib_net_to_host_u64(a->lifetime);
    a->lifetime_jitter = clib_net_to_host_u32(a->lifetime_jitter);
    a->handover = clib_net_to_host_u32(a->handover);
    a->lifetime_maxdata = clib_net_to_host_u64(a->lifetime_maxdata);
}

#endif

#ifndef _vl_api_defined_ikev2_set_sa_lifetime_reply_t_endian
#define _vl_api_defined_ikev2_set_sa_lifetime_reply_t_endian
static inline void vl_api_ikev2_set_sa_lifetime_reply_t_endian (vl_api_ikev2_set_sa_lifetime_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_sa_init_t_endian
#define _vl_api_defined_ikev2_initiate_sa_init_t_endian
static inline void vl_api_ikev2_initiate_sa_init_t_endian (vl_api_ikev2_initiate_sa_init_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_sa_init_reply_t_endian
#define _vl_api_defined_ikev2_initiate_sa_init_reply_t_endian
static inline void vl_api_ikev2_initiate_sa_init_reply_t_endian (vl_api_ikev2_initiate_sa_init_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_ike_sa_t_endian
#define _vl_api_defined_ikev2_initiate_del_ike_sa_t_endian
static inline void vl_api_ikev2_initiate_del_ike_sa_t_endian (vl_api_ikev2_initiate_del_ike_sa_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->ispi = clib_net_to_host_u64(a->ispi);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_ike_sa_reply_t_endian
#define _vl_api_defined_ikev2_initiate_del_ike_sa_reply_t_endian
static inline void vl_api_ikev2_initiate_del_ike_sa_reply_t_endian (vl_api_ikev2_initiate_del_ike_sa_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_child_sa_t_endian
#define _vl_api_defined_ikev2_initiate_del_child_sa_t_endian
static inline void vl_api_ikev2_initiate_del_child_sa_t_endian (vl_api_ikev2_initiate_del_child_sa_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->ispi = clib_net_to_host_u32(a->ispi);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_del_child_sa_reply_t_endian
#define _vl_api_defined_ikev2_initiate_del_child_sa_reply_t_endian
static inline void vl_api_ikev2_initiate_del_child_sa_reply_t_endian (vl_api_ikev2_initiate_del_child_sa_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_rekey_child_sa_t_endian
#define _vl_api_defined_ikev2_initiate_rekey_child_sa_t_endian
static inline void vl_api_ikev2_initiate_rekey_child_sa_t_endian (vl_api_ikev2_initiate_rekey_child_sa_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->ispi = clib_net_to_host_u32(a->ispi);
}

#endif

#ifndef _vl_api_defined_ikev2_initiate_rekey_child_sa_reply_t_endian
#define _vl_api_defined_ikev2_initiate_rekey_child_sa_reply_t_endian
static inline void vl_api_ikev2_initiate_rekey_child_sa_reply_t_endian (vl_api_ikev2_initiate_rekey_child_sa_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ikev2.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ikev2.api, 0x5af0daa1)

#endif

