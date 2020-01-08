/*
 * VLIB API definitions 2020-01-07 14:20:10
 * Input file: bfd.api
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
#warning no content included from bfd.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_BFD_UDP_SET_ECHO_SOURCE, vl_api_bfd_udp_set_echo_source_t_handler)
vl_msg_id(VL_API_BFD_UDP_SET_ECHO_SOURCE_REPLY, vl_api_bfd_udp_set_echo_source_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL_ECHO_SOURCE, vl_api_bfd_udp_del_echo_source_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL_ECHO_SOURCE_REPLY, vl_api_bfd_udp_del_echo_source_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_GET_ECHO_SOURCE, vl_api_bfd_udp_get_echo_source_t_handler)
vl_msg_id(VL_API_BFD_UDP_GET_ECHO_SOURCE_REPLY, vl_api_bfd_udp_get_echo_source_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_ADD, vl_api_bfd_udp_add_t_handler)
vl_msg_id(VL_API_BFD_UDP_ADD_REPLY, vl_api_bfd_udp_add_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_MOD, vl_api_bfd_udp_mod_t_handler)
vl_msg_id(VL_API_BFD_UDP_MOD_REPLY, vl_api_bfd_udp_mod_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL, vl_api_bfd_udp_del_t_handler)
vl_msg_id(VL_API_BFD_UDP_DEL_REPLY, vl_api_bfd_udp_del_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_DUMP, vl_api_bfd_udp_session_dump_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_DETAILS, vl_api_bfd_udp_session_details_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_SET_FLAGS, vl_api_bfd_udp_session_set_flags_t_handler)
vl_msg_id(VL_API_BFD_UDP_SESSION_SET_FLAGS_REPLY, vl_api_bfd_udp_session_set_flags_reply_t_handler)
vl_msg_id(VL_API_WANT_BFD_EVENTS, vl_api_want_bfd_events_t_handler)
vl_msg_id(VL_API_WANT_BFD_EVENTS_REPLY, vl_api_want_bfd_events_reply_t_handler)
vl_msg_id(VL_API_BFD_AUTH_SET_KEY, vl_api_bfd_auth_set_key_t_handler)
vl_msg_id(VL_API_BFD_AUTH_SET_KEY_REPLY, vl_api_bfd_auth_set_key_reply_t_handler)
vl_msg_id(VL_API_BFD_AUTH_DEL_KEY, vl_api_bfd_auth_del_key_t_handler)
vl_msg_id(VL_API_BFD_AUTH_DEL_KEY_REPLY, vl_api_bfd_auth_del_key_reply_t_handler)
vl_msg_id(VL_API_BFD_AUTH_KEYS_DUMP, vl_api_bfd_auth_keys_dump_t_handler)
vl_msg_id(VL_API_BFD_AUTH_KEYS_DETAILS, vl_api_bfd_auth_keys_details_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_ACTIVATE, vl_api_bfd_udp_auth_activate_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_ACTIVATE_REPLY, vl_api_bfd_udp_auth_activate_reply_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_DEACTIVATE, vl_api_bfd_udp_auth_deactivate_t_handler)
vl_msg_id(VL_API_BFD_UDP_AUTH_DEACTIVATE_REPLY, vl_api_bfd_udp_auth_deactivate_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_bfd_udp_set_echo_source_t, 1)
vl_msg_name(vl_api_bfd_udp_set_echo_source_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_del_echo_source_t, 1)
vl_msg_name(vl_api_bfd_udp_del_echo_source_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_get_echo_source_t, 1)
vl_msg_name(vl_api_bfd_udp_get_echo_source_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_add_t, 1)
vl_msg_name(vl_api_bfd_udp_add_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_mod_t, 1)
vl_msg_name(vl_api_bfd_udp_mod_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_del_t, 1)
vl_msg_name(vl_api_bfd_udp_del_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_session_dump_t, 1)
vl_msg_name(vl_api_bfd_udp_session_details_t, 1)
vl_msg_name(vl_api_bfd_udp_session_set_flags_t, 1)
vl_msg_name(vl_api_bfd_udp_session_set_flags_reply_t, 1)
vl_msg_name(vl_api_want_bfd_events_t, 1)
vl_msg_name(vl_api_want_bfd_events_reply_t, 1)
vl_msg_name(vl_api_bfd_auth_set_key_t, 1)
vl_msg_name(vl_api_bfd_auth_set_key_reply_t, 1)
vl_msg_name(vl_api_bfd_auth_del_key_t, 1)
vl_msg_name(vl_api_bfd_auth_del_key_reply_t, 1)
vl_msg_name(vl_api_bfd_auth_keys_dump_t, 1)
vl_msg_name(vl_api_bfd_auth_keys_details_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_activate_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_activate_reply_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_deactivate_t, 1)
vl_msg_name(vl_api_bfd_udp_auth_deactivate_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_bfd \
_(VL_API_BFD_UDP_SET_ECHO_SOURCE, bfd_udp_set_echo_source, 529cb13f) \
_(VL_API_BFD_UDP_SET_ECHO_SOURCE_REPLY, bfd_udp_set_echo_source_reply, e8d4e804) \
_(VL_API_BFD_UDP_DEL_ECHO_SOURCE, bfd_udp_del_echo_source, 51077d14) \
_(VL_API_BFD_UDP_DEL_ECHO_SOURCE_REPLY, bfd_udp_del_echo_source_reply, e8d4e804) \
_(VL_API_BFD_UDP_GET_ECHO_SOURCE, bfd_udp_get_echo_source, 51077d14) \
_(VL_API_BFD_UDP_GET_ECHO_SOURCE_REPLY, bfd_udp_get_echo_source_reply, 6924ca6b) \
_(VL_API_BFD_UDP_ADD, bfd_udp_add, 61cf1850) \
_(VL_API_BFD_UDP_ADD_REPLY, bfd_udp_add_reply, e8d4e804) \
_(VL_API_BFD_UDP_MOD, bfd_udp_mod, 6049bf47) \
_(VL_API_BFD_UDP_MOD_REPLY, bfd_udp_mod_reply, e8d4e804) \
_(VL_API_BFD_UDP_DEL, bfd_udp_del, c9e9cc5a) \
_(VL_API_BFD_UDP_DEL_REPLY, bfd_udp_del_reply, e8d4e804) \
_(VL_API_BFD_UDP_SESSION_DUMP, bfd_udp_session_dump, 51077d14) \
_(VL_API_BFD_UDP_SESSION_DETAILS, bfd_udp_session_details, 837bb0ed) \
_(VL_API_BFD_UDP_SESSION_SET_FLAGS, bfd_udp_session_set_flags, 667d6e7c) \
_(VL_API_BFD_UDP_SESSION_SET_FLAGS_REPLY, bfd_udp_session_set_flags_reply, e8d4e804) \
_(VL_API_WANT_BFD_EVENTS, want_bfd_events, 476f5a08) \
_(VL_API_WANT_BFD_EVENTS_REPLY, want_bfd_events_reply, e8d4e804) \
_(VL_API_BFD_AUTH_SET_KEY, bfd_auth_set_key, 690b8877) \
_(VL_API_BFD_AUTH_SET_KEY_REPLY, bfd_auth_set_key_reply, e8d4e804) \
_(VL_API_BFD_AUTH_DEL_KEY, bfd_auth_del_key, 65310b22) \
_(VL_API_BFD_AUTH_DEL_KEY_REPLY, bfd_auth_del_key_reply, e8d4e804) \
_(VL_API_BFD_AUTH_KEYS_DUMP, bfd_auth_keys_dump, 51077d14) \
_(VL_API_BFD_AUTH_KEYS_DETAILS, bfd_auth_keys_details, 84130e9f) \
_(VL_API_BFD_UDP_AUTH_ACTIVATE, bfd_udp_auth_activate, 1bae0947) \
_(VL_API_BFD_UDP_AUTH_ACTIVATE_REPLY, bfd_udp_auth_activate_reply, e8d4e804) \
_(VL_API_BFD_UDP_AUTH_DEACTIVATE, bfd_udp_auth_deactivate, 10661991) \
_(VL_API_BFD_UDP_AUTH_DEACTIVATE_REPLY, bfd_udp_auth_deactivate_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_bfd_api
#define included_bfd_api
#ifndef _vl_api_defined_bfd_udp_set_echo_source
#define _vl_api_defined_bfd_udp_set_echo_source
typedef VL_API_PACKED(struct _vl_api_bfd_udp_set_echo_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_bfd_udp_set_echo_source_t;
#endif

#ifndef _vl_api_defined_bfd_udp_set_echo_source_reply
#define _vl_api_defined_bfd_udp_set_echo_source_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_set_echo_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_set_echo_source_reply_t;
#endif

#ifndef _vl_api_defined_bfd_udp_del_echo_source
#define _vl_api_defined_bfd_udp_del_echo_source
typedef VL_API_PACKED(struct _vl_api_bfd_udp_del_echo_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_bfd_udp_del_echo_source_t;
#endif

#ifndef _vl_api_defined_bfd_udp_del_echo_source_reply
#define _vl_api_defined_bfd_udp_del_echo_source_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_del_echo_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_del_echo_source_reply_t;
#endif

#ifndef _vl_api_defined_bfd_udp_get_echo_source
#define _vl_api_defined_bfd_udp_get_echo_source
typedef VL_API_PACKED(struct _vl_api_bfd_udp_get_echo_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_bfd_udp_get_echo_source_t;
#endif

#ifndef _vl_api_defined_bfd_udp_get_echo_source_reply
#define _vl_api_defined_bfd_udp_get_echo_source_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_get_echo_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
    u8 is_set;
    u8 have_usable_ip4;
    u8 ip4_addr[4];
    u8 have_usable_ip6;
    u8 ip6_addr[16];
}) vl_api_bfd_udp_get_echo_source_reply_t;
#endif

#ifndef _vl_api_defined_bfd_udp_add
#define _vl_api_defined_bfd_udp_add
typedef VL_API_PACKED(struct _vl_api_bfd_udp_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 desired_min_tx;
    u32 required_min_rx;
    u8 local_addr[16];
    u8 peer_addr[16];
    u8 is_ipv6;
    u8 detect_mult;
    u8 is_authenticated;
    u8 bfd_key_id;
    u32 conf_key_id;
}) vl_api_bfd_udp_add_t;
#endif

#ifndef _vl_api_defined_bfd_udp_add_reply
#define _vl_api_defined_bfd_udp_add_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_add_reply_t;
#endif

#ifndef _vl_api_defined_bfd_udp_mod
#define _vl_api_defined_bfd_udp_mod
typedef VL_API_PACKED(struct _vl_api_bfd_udp_mod {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 desired_min_tx;
    u32 required_min_rx;
    u8 local_addr[16];
    u8 peer_addr[16];
    u8 is_ipv6;
    u8 detect_mult;
}) vl_api_bfd_udp_mod_t;
#endif

#ifndef _vl_api_defined_bfd_udp_mod_reply
#define _vl_api_defined_bfd_udp_mod_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_mod_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_mod_reply_t;
#endif

#ifndef _vl_api_defined_bfd_udp_del
#define _vl_api_defined_bfd_udp_del
typedef VL_API_PACKED(struct _vl_api_bfd_udp_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 local_addr[16];
    u8 peer_addr[16];
    u8 is_ipv6;
}) vl_api_bfd_udp_del_t;
#endif

#ifndef _vl_api_defined_bfd_udp_del_reply
#define _vl_api_defined_bfd_udp_del_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_del_reply_t;
#endif

#ifndef _vl_api_defined_bfd_udp_session_dump
#define _vl_api_defined_bfd_udp_session_dump
typedef VL_API_PACKED(struct _vl_api_bfd_udp_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_bfd_udp_session_dump_t;
#endif

#ifndef _vl_api_defined_bfd_udp_session_details
#define _vl_api_defined_bfd_udp_session_details
typedef VL_API_PACKED(struct _vl_api_bfd_udp_session_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 local_addr[16];
    u8 peer_addr[16];
    u8 is_ipv6;
    u8 state;
    u8 is_authenticated;
    u8 bfd_key_id;
    u32 conf_key_id;
    u32 required_min_rx;
    u32 desired_min_tx;
    u8 detect_mult;
}) vl_api_bfd_udp_session_details_t;
#endif

#ifndef _vl_api_defined_bfd_udp_session_set_flags
#define _vl_api_defined_bfd_udp_session_set_flags
typedef VL_API_PACKED(struct _vl_api_bfd_udp_session_set_flags {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 local_addr[16];
    u8 peer_addr[16];
    u8 is_ipv6;
    u8 admin_up_down;
}) vl_api_bfd_udp_session_set_flags_t;
#endif

#ifndef _vl_api_defined_bfd_udp_session_set_flags_reply
#define _vl_api_defined_bfd_udp_session_set_flags_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_session_set_flags_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_session_set_flags_reply_t;
#endif

#ifndef _vl_api_defined_want_bfd_events
#define _vl_api_defined_want_bfd_events
typedef VL_API_PACKED(struct _vl_api_want_bfd_events {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 enable_disable;
    u32 pid;
}) vl_api_want_bfd_events_t;
#endif

#ifndef _vl_api_defined_want_bfd_events_reply
#define _vl_api_defined_want_bfd_events_reply
typedef VL_API_PACKED(struct _vl_api_want_bfd_events_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_want_bfd_events_reply_t;
#endif

#ifndef _vl_api_defined_bfd_auth_set_key
#define _vl_api_defined_bfd_auth_set_key
typedef VL_API_PACKED(struct _vl_api_bfd_auth_set_key {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 conf_key_id;
    u8 key_len;
    u8 auth_type;
    u8 key[20];
}) vl_api_bfd_auth_set_key_t;
#endif

#ifndef _vl_api_defined_bfd_auth_set_key_reply
#define _vl_api_defined_bfd_auth_set_key_reply
typedef VL_API_PACKED(struct _vl_api_bfd_auth_set_key_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_auth_set_key_reply_t;
#endif

#ifndef _vl_api_defined_bfd_auth_del_key
#define _vl_api_defined_bfd_auth_del_key
typedef VL_API_PACKED(struct _vl_api_bfd_auth_del_key {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 conf_key_id;
}) vl_api_bfd_auth_del_key_t;
#endif

#ifndef _vl_api_defined_bfd_auth_del_key_reply
#define _vl_api_defined_bfd_auth_del_key_reply
typedef VL_API_PACKED(struct _vl_api_bfd_auth_del_key_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_auth_del_key_reply_t;
#endif

#ifndef _vl_api_defined_bfd_auth_keys_dump
#define _vl_api_defined_bfd_auth_keys_dump
typedef VL_API_PACKED(struct _vl_api_bfd_auth_keys_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_bfd_auth_keys_dump_t;
#endif

#ifndef _vl_api_defined_bfd_auth_keys_details
#define _vl_api_defined_bfd_auth_keys_details
typedef VL_API_PACKED(struct _vl_api_bfd_auth_keys_details {
    u16 _vl_msg_id;
    u32 context;
    u32 conf_key_id;
    u32 use_count;
    u8 auth_type;
}) vl_api_bfd_auth_keys_details_t;
#endif

#ifndef _vl_api_defined_bfd_udp_auth_activate
#define _vl_api_defined_bfd_udp_auth_activate
typedef VL_API_PACKED(struct _vl_api_bfd_udp_auth_activate {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 local_addr[16];
    u8 peer_addr[16];
    u8 is_ipv6;
    u8 is_delayed;
    u8 bfd_key_id;
    u32 conf_key_id;
}) vl_api_bfd_udp_auth_activate_t;
#endif

#ifndef _vl_api_defined_bfd_udp_auth_activate_reply
#define _vl_api_defined_bfd_udp_auth_activate_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_auth_activate_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_auth_activate_reply_t;
#endif

#ifndef _vl_api_defined_bfd_udp_auth_deactivate
#define _vl_api_defined_bfd_udp_auth_deactivate
typedef VL_API_PACKED(struct _vl_api_bfd_udp_auth_deactivate {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 local_addr[16];
    u8 peer_addr[16];
    u8 is_ipv6;
    u8 is_delayed;
}) vl_api_bfd_udp_auth_deactivate_t;
#endif

#ifndef _vl_api_defined_bfd_udp_auth_deactivate_reply
#define _vl_api_defined_bfd_udp_auth_deactivate_reply
typedef VL_API_PACKED(struct _vl_api_bfd_udp_auth_deactivate_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bfd_udp_auth_deactivate_reply_t;
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

#ifndef _vl_api_defined_bfd_udp_set_echo_source_t_print
#define _vl_api_defined_bfd_udp_set_echo_source_t_print
static inline void *vl_api_bfd_udp_set_echo_source_t_print (vl_api_bfd_udp_set_echo_source_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_set_echo_source_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_set_echo_source_reply_t_print
#define _vl_api_defined_bfd_udp_set_echo_source_reply_t_print
static inline void *vl_api_bfd_udp_set_echo_source_reply_t_print (vl_api_bfd_udp_set_echo_source_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_set_echo_source_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_echo_source_t_print
#define _vl_api_defined_bfd_udp_del_echo_source_t_print
static inline void *vl_api_bfd_udp_del_echo_source_t_print (vl_api_bfd_udp_del_echo_source_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_del_echo_source_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_echo_source_reply_t_print
#define _vl_api_defined_bfd_udp_del_echo_source_reply_t_print
static inline void *vl_api_bfd_udp_del_echo_source_reply_t_print (vl_api_bfd_udp_del_echo_source_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_del_echo_source_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_get_echo_source_t_print
#define _vl_api_defined_bfd_udp_get_echo_source_t_print
static inline void *vl_api_bfd_udp_get_echo_source_t_print (vl_api_bfd_udp_get_echo_source_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_get_echo_source_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_get_echo_source_reply_t_print
#define _vl_api_defined_bfd_udp_get_echo_source_reply_t_print
static inline void *vl_api_bfd_udp_get_echo_source_reply_t_print (vl_api_bfd_udp_get_echo_source_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_get_echo_source_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_set: %u\n", a->is_set);
    vl_print(handle, "have_usable_ip4: %u\n", a->have_usable_ip4);
    vl_print(handle, "have_usable_ip6: %u\n", a->have_usable_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_add_t_print
#define _vl_api_defined_bfd_udp_add_t_print
static inline void *vl_api_bfd_udp_add_t_print (vl_api_bfd_udp_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "desired_min_tx: %u\n", a->desired_min_tx);
    vl_print(handle, "required_min_rx: %u\n", a->required_min_rx);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "detect_mult: %u\n", a->detect_mult);
    vl_print(handle, "is_authenticated: %u\n", a->is_authenticated);
    vl_print(handle, "bfd_key_id: %u\n", a->bfd_key_id);
    vl_print(handle, "conf_key_id: %u\n", a->conf_key_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_add_reply_t_print
#define _vl_api_defined_bfd_udp_add_reply_t_print
static inline void *vl_api_bfd_udp_add_reply_t_print (vl_api_bfd_udp_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_mod_t_print
#define _vl_api_defined_bfd_udp_mod_t_print
static inline void *vl_api_bfd_udp_mod_t_print (vl_api_bfd_udp_mod_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_mod_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "desired_min_tx: %u\n", a->desired_min_tx);
    vl_print(handle, "required_min_rx: %u\n", a->required_min_rx);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "detect_mult: %u\n", a->detect_mult);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_mod_reply_t_print
#define _vl_api_defined_bfd_udp_mod_reply_t_print
static inline void *vl_api_bfd_udp_mod_reply_t_print (vl_api_bfd_udp_mod_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_mod_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_t_print
#define _vl_api_defined_bfd_udp_del_t_print
static inline void *vl_api_bfd_udp_del_t_print (vl_api_bfd_udp_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_reply_t_print
#define _vl_api_defined_bfd_udp_del_reply_t_print
static inline void *vl_api_bfd_udp_del_reply_t_print (vl_api_bfd_udp_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_dump_t_print
#define _vl_api_defined_bfd_udp_session_dump_t_print
static inline void *vl_api_bfd_udp_session_dump_t_print (vl_api_bfd_udp_session_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_session_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_details_t_print
#define _vl_api_defined_bfd_udp_session_details_t_print
static inline void *vl_api_bfd_udp_session_details_t_print (vl_api_bfd_udp_session_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_session_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "state: %u\n", a->state);
    vl_print(handle, "is_authenticated: %u\n", a->is_authenticated);
    vl_print(handle, "bfd_key_id: %u\n", a->bfd_key_id);
    vl_print(handle, "conf_key_id: %u\n", a->conf_key_id);
    vl_print(handle, "required_min_rx: %u\n", a->required_min_rx);
    vl_print(handle, "desired_min_tx: %u\n", a->desired_min_tx);
    vl_print(handle, "detect_mult: %u\n", a->detect_mult);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_set_flags_t_print
#define _vl_api_defined_bfd_udp_session_set_flags_t_print
static inline void *vl_api_bfd_udp_session_set_flags_t_print (vl_api_bfd_udp_session_set_flags_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_session_set_flags_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "admin_up_down: %u\n", a->admin_up_down);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_set_flags_reply_t_print
#define _vl_api_defined_bfd_udp_session_set_flags_reply_t_print
static inline void *vl_api_bfd_udp_session_set_flags_reply_t_print (vl_api_bfd_udp_session_set_flags_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_session_set_flags_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_bfd_events_t_print
#define _vl_api_defined_want_bfd_events_t_print
static inline void *vl_api_want_bfd_events_t_print (vl_api_want_bfd_events_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_bfd_events_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable_disable: %u\n", a->enable_disable);
    vl_print(handle, "pid: %u\n", a->pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_want_bfd_events_reply_t_print
#define _vl_api_defined_want_bfd_events_reply_t_print
static inline void *vl_api_want_bfd_events_reply_t_print (vl_api_want_bfd_events_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_want_bfd_events_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_auth_set_key_t_print
#define _vl_api_defined_bfd_auth_set_key_t_print
static inline void *vl_api_bfd_auth_set_key_t_print (vl_api_bfd_auth_set_key_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_auth_set_key_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "conf_key_id: %u\n", a->conf_key_id);
    vl_print(handle, "key_len: %u\n", a->key_len);
    vl_print(handle, "auth_type: %u\n", a->auth_type);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_auth_set_key_reply_t_print
#define _vl_api_defined_bfd_auth_set_key_reply_t_print
static inline void *vl_api_bfd_auth_set_key_reply_t_print (vl_api_bfd_auth_set_key_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_auth_set_key_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_auth_del_key_t_print
#define _vl_api_defined_bfd_auth_del_key_t_print
static inline void *vl_api_bfd_auth_del_key_t_print (vl_api_bfd_auth_del_key_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_auth_del_key_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "conf_key_id: %u\n", a->conf_key_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_auth_del_key_reply_t_print
#define _vl_api_defined_bfd_auth_del_key_reply_t_print
static inline void *vl_api_bfd_auth_del_key_reply_t_print (vl_api_bfd_auth_del_key_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_auth_del_key_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_auth_keys_dump_t_print
#define _vl_api_defined_bfd_auth_keys_dump_t_print
static inline void *vl_api_bfd_auth_keys_dump_t_print (vl_api_bfd_auth_keys_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_auth_keys_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_auth_keys_details_t_print
#define _vl_api_defined_bfd_auth_keys_details_t_print
static inline void *vl_api_bfd_auth_keys_details_t_print (vl_api_bfd_auth_keys_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_auth_keys_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "conf_key_id: %u\n", a->conf_key_id);
    vl_print(handle, "use_count: %u\n", a->use_count);
    vl_print(handle, "auth_type: %u\n", a->auth_type);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_activate_t_print
#define _vl_api_defined_bfd_udp_auth_activate_t_print
static inline void *vl_api_bfd_udp_auth_activate_t_print (vl_api_bfd_udp_auth_activate_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_auth_activate_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "is_delayed: %u\n", a->is_delayed);
    vl_print(handle, "bfd_key_id: %u\n", a->bfd_key_id);
    vl_print(handle, "conf_key_id: %u\n", a->conf_key_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_activate_reply_t_print
#define _vl_api_defined_bfd_udp_auth_activate_reply_t_print
static inline void *vl_api_bfd_udp_auth_activate_reply_t_print (vl_api_bfd_udp_auth_activate_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_auth_activate_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_deactivate_t_print
#define _vl_api_defined_bfd_udp_auth_deactivate_t_print
static inline void *vl_api_bfd_udp_auth_deactivate_t_print (vl_api_bfd_udp_auth_deactivate_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_auth_deactivate_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "is_delayed: %u\n", a->is_delayed);
    return handle;
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_deactivate_reply_t_print
#define _vl_api_defined_bfd_udp_auth_deactivate_reply_t_print
static inline void *vl_api_bfd_udp_auth_deactivate_reply_t_print (vl_api_bfd_udp_auth_deactivate_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bfd_udp_auth_deactivate_reply_t:\n");
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

#ifndef _vl_api_defined_bfd_udp_set_echo_source_t_endian
#define _vl_api_defined_bfd_udp_set_echo_source_t_endian
static inline void vl_api_bfd_udp_set_echo_source_t_endian (vl_api_bfd_udp_set_echo_source_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_bfd_udp_set_echo_source_reply_t_endian
#define _vl_api_defined_bfd_udp_set_echo_source_reply_t_endian
static inline void vl_api_bfd_udp_set_echo_source_reply_t_endian (vl_api_bfd_udp_set_echo_source_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_echo_source_t_endian
#define _vl_api_defined_bfd_udp_del_echo_source_t_endian
static inline void vl_api_bfd_udp_del_echo_source_t_endian (vl_api_bfd_udp_del_echo_source_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_echo_source_reply_t_endian
#define _vl_api_defined_bfd_udp_del_echo_source_reply_t_endian
static inline void vl_api_bfd_udp_del_echo_source_reply_t_endian (vl_api_bfd_udp_del_echo_source_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_udp_get_echo_source_t_endian
#define _vl_api_defined_bfd_udp_get_echo_source_t_endian
static inline void vl_api_bfd_udp_get_echo_source_t_endian (vl_api_bfd_udp_get_echo_source_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_bfd_udp_get_echo_source_reply_t_endian
#define _vl_api_defined_bfd_udp_get_echo_source_reply_t_endian
static inline void vl_api_bfd_udp_get_echo_source_reply_t_endian (vl_api_bfd_udp_get_echo_source_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_set = a->is_set (no-op) */
    /* a->have_usable_ip4 = a->have_usable_ip4 (no-op) */
    /* a->have_usable_ip6 = a->have_usable_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_udp_add_t_endian
#define _vl_api_defined_bfd_udp_add_t_endian
static inline void vl_api_bfd_udp_add_t_endian (vl_api_bfd_udp_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->desired_min_tx = clib_net_to_host_u32(a->desired_min_tx);
    a->required_min_rx = clib_net_to_host_u32(a->required_min_rx);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->detect_mult = a->detect_mult (no-op) */
    /* a->is_authenticated = a->is_authenticated (no-op) */
    /* a->bfd_key_id = a->bfd_key_id (no-op) */
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
}

#endif

#ifndef _vl_api_defined_bfd_udp_add_reply_t_endian
#define _vl_api_defined_bfd_udp_add_reply_t_endian
static inline void vl_api_bfd_udp_add_reply_t_endian (vl_api_bfd_udp_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_udp_mod_t_endian
#define _vl_api_defined_bfd_udp_mod_t_endian
static inline void vl_api_bfd_udp_mod_t_endian (vl_api_bfd_udp_mod_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->desired_min_tx = clib_net_to_host_u32(a->desired_min_tx);
    a->required_min_rx = clib_net_to_host_u32(a->required_min_rx);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->detect_mult = a->detect_mult (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_udp_mod_reply_t_endian
#define _vl_api_defined_bfd_udp_mod_reply_t_endian
static inline void vl_api_bfd_udp_mod_reply_t_endian (vl_api_bfd_udp_mod_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_t_endian
#define _vl_api_defined_bfd_udp_del_t_endian
static inline void vl_api_bfd_udp_del_t_endian (vl_api_bfd_udp_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_udp_del_reply_t_endian
#define _vl_api_defined_bfd_udp_del_reply_t_endian
static inline void vl_api_bfd_udp_del_reply_t_endian (vl_api_bfd_udp_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_dump_t_endian
#define _vl_api_defined_bfd_udp_session_dump_t_endian
static inline void vl_api_bfd_udp_session_dump_t_endian (vl_api_bfd_udp_session_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_details_t_endian
#define _vl_api_defined_bfd_udp_session_details_t_endian
static inline void vl_api_bfd_udp_session_details_t_endian (vl_api_bfd_udp_session_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->state = a->state (no-op) */
    /* a->is_authenticated = a->is_authenticated (no-op) */
    /* a->bfd_key_id = a->bfd_key_id (no-op) */
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
    a->required_min_rx = clib_net_to_host_u32(a->required_min_rx);
    a->desired_min_tx = clib_net_to_host_u32(a->desired_min_tx);
    /* a->detect_mult = a->detect_mult (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_set_flags_t_endian
#define _vl_api_defined_bfd_udp_session_set_flags_t_endian
static inline void vl_api_bfd_udp_session_set_flags_t_endian (vl_api_bfd_udp_session_set_flags_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->admin_up_down = a->admin_up_down (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_udp_session_set_flags_reply_t_endian
#define _vl_api_defined_bfd_udp_session_set_flags_reply_t_endian
static inline void vl_api_bfd_udp_session_set_flags_reply_t_endian (vl_api_bfd_udp_session_set_flags_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_want_bfd_events_t_endian
#define _vl_api_defined_want_bfd_events_t_endian
static inline void vl_api_want_bfd_events_t_endian (vl_api_want_bfd_events_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->enable_disable = clib_net_to_host_u32(a->enable_disable);
    a->pid = clib_net_to_host_u32(a->pid);
}

#endif

#ifndef _vl_api_defined_want_bfd_events_reply_t_endian
#define _vl_api_defined_want_bfd_events_reply_t_endian
static inline void vl_api_want_bfd_events_reply_t_endian (vl_api_want_bfd_events_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_auth_set_key_t_endian
#define _vl_api_defined_bfd_auth_set_key_t_endian
static inline void vl_api_bfd_auth_set_key_t_endian (vl_api_bfd_auth_set_key_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
    /* a->key_len = a->key_len (no-op) */
    /* a->auth_type = a->auth_type (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_auth_set_key_reply_t_endian
#define _vl_api_defined_bfd_auth_set_key_reply_t_endian
static inline void vl_api_bfd_auth_set_key_reply_t_endian (vl_api_bfd_auth_set_key_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_auth_del_key_t_endian
#define _vl_api_defined_bfd_auth_del_key_t_endian
static inline void vl_api_bfd_auth_del_key_t_endian (vl_api_bfd_auth_del_key_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
}

#endif

#ifndef _vl_api_defined_bfd_auth_del_key_reply_t_endian
#define _vl_api_defined_bfd_auth_del_key_reply_t_endian
static inline void vl_api_bfd_auth_del_key_reply_t_endian (vl_api_bfd_auth_del_key_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_auth_keys_dump_t_endian
#define _vl_api_defined_bfd_auth_keys_dump_t_endian
static inline void vl_api_bfd_auth_keys_dump_t_endian (vl_api_bfd_auth_keys_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_bfd_auth_keys_details_t_endian
#define _vl_api_defined_bfd_auth_keys_details_t_endian
static inline void vl_api_bfd_auth_keys_details_t_endian (vl_api_bfd_auth_keys_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
    a->use_count = clib_net_to_host_u32(a->use_count);
    /* a->auth_type = a->auth_type (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_activate_t_endian
#define _vl_api_defined_bfd_udp_auth_activate_t_endian
static inline void vl_api_bfd_udp_auth_activate_t_endian (vl_api_bfd_udp_auth_activate_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->is_delayed = a->is_delayed (no-op) */
    /* a->bfd_key_id = a->bfd_key_id (no-op) */
    a->conf_key_id = clib_net_to_host_u32(a->conf_key_id);
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_activate_reply_t_endian
#define _vl_api_defined_bfd_udp_auth_activate_reply_t_endian
static inline void vl_api_bfd_udp_auth_activate_reply_t_endian (vl_api_bfd_udp_auth_activate_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_deactivate_t_endian
#define _vl_api_defined_bfd_udp_auth_deactivate_t_endian
static inline void vl_api_bfd_udp_auth_deactivate_t_endian (vl_api_bfd_udp_auth_deactivate_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->is_delayed = a->is_delayed (no-op) */
}

#endif

#ifndef _vl_api_defined_bfd_udp_auth_deactivate_reply_t_endian
#define _vl_api_defined_bfd_udp_auth_deactivate_reply_t_endian
static inline void vl_api_bfd_udp_auth_deactivate_reply_t_endian (vl_api_bfd_udp_auth_deactivate_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(bfd.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(bfd.api, 0x5c3ba394)

#endif

