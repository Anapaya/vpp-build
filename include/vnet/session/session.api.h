/*
 * VLIB API definitions 2020-06-13 05:56:05
 * Input file: session.api
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
#warning no content included from session.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_APPLICATION_ATTACH, vl_api_application_attach_t_handler)
vl_msg_id(VL_API_APPLICATION_ATTACH_REPLY, vl_api_application_attach_reply_t_handler)
vl_msg_id(VL_API_APP_ATTACH, vl_api_app_attach_t_handler)
vl_msg_id(VL_API_APP_ATTACH_REPLY, vl_api_app_attach_reply_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_CERT_ADD, vl_api_application_tls_cert_add_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_CERT_ADD_REPLY, vl_api_application_tls_cert_add_reply_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_KEY_ADD, vl_api_application_tls_key_add_t_handler)
vl_msg_id(VL_API_APPLICATION_TLS_KEY_ADD_REPLY, vl_api_application_tls_key_add_reply_t_handler)
vl_msg_id(VL_API_APPLICATION_DETACH, vl_api_application_detach_t_handler)
vl_msg_id(VL_API_APPLICATION_DETACH_REPLY, vl_api_application_detach_reply_t_handler)
vl_msg_id(VL_API_MAP_ANOTHER_SEGMENT, vl_api_map_another_segment_t_handler)
vl_msg_id(VL_API_MAP_ANOTHER_SEGMENT_REPLY, vl_api_map_another_segment_reply_t_handler)
vl_msg_id(VL_API_UNMAP_SEGMENT, vl_api_unmap_segment_t_handler)
vl_msg_id(VL_API_UNMAP_SEGMENT_REPLY, vl_api_unmap_segment_reply_t_handler)
vl_msg_id(VL_API_BIND_URI, vl_api_bind_uri_t_handler)
vl_msg_id(VL_API_BIND_URI_REPLY, vl_api_bind_uri_reply_t_handler)
vl_msg_id(VL_API_UNBIND_URI, vl_api_unbind_uri_t_handler)
vl_msg_id(VL_API_UNBIND_URI_REPLY, vl_api_unbind_uri_reply_t_handler)
vl_msg_id(VL_API_CONNECT_URI, vl_api_connect_uri_t_handler)
vl_msg_id(VL_API_CONNECT_URI_REPLY, vl_api_connect_uri_reply_t_handler)
vl_msg_id(VL_API_DISCONNECT_SESSION, vl_api_disconnect_session_t_handler)
vl_msg_id(VL_API_DISCONNECT_SESSION_REPLY, vl_api_disconnect_session_reply_t_handler)
vl_msg_id(VL_API_BIND_SOCK, vl_api_bind_sock_t_handler)
vl_msg_id(VL_API_BIND_SOCK_REPLY, vl_api_bind_sock_reply_t_handler)
vl_msg_id(VL_API_UNBIND_SOCK, vl_api_unbind_sock_t_handler)
vl_msg_id(VL_API_UNBIND_SOCK_REPLY, vl_api_unbind_sock_reply_t_handler)
vl_msg_id(VL_API_CONNECT_SOCK, vl_api_connect_sock_t_handler)
vl_msg_id(VL_API_CONNECT_SOCK_REPLY, vl_api_connect_sock_reply_t_handler)
vl_msg_id(VL_API_APP_CUT_THROUGH_REGISTRATION_ADD, vl_api_app_cut_through_registration_add_t_handler)
vl_msg_id(VL_API_APP_CUT_THROUGH_REGISTRATION_ADD_REPLY, vl_api_app_cut_through_registration_add_reply_t_handler)
vl_msg_id(VL_API_APP_WORKER_ADD_DEL, vl_api_app_worker_add_del_t_handler)
vl_msg_id(VL_API_APP_WORKER_ADD_DEL_REPLY, vl_api_app_worker_add_del_reply_t_handler)
vl_msg_id(VL_API_SESSION_ENABLE_DISABLE, vl_api_session_enable_disable_t_handler)
vl_msg_id(VL_API_SESSION_ENABLE_DISABLE_REPLY, vl_api_session_enable_disable_reply_t_handler)
vl_msg_id(VL_API_APP_NAMESPACE_ADD_DEL, vl_api_app_namespace_add_del_t_handler)
vl_msg_id(VL_API_APP_NAMESPACE_ADD_DEL_REPLY, vl_api_app_namespace_add_del_reply_t_handler)
vl_msg_id(VL_API_SESSION_RULE_ADD_DEL, vl_api_session_rule_add_del_t_handler)
vl_msg_id(VL_API_SESSION_RULE_ADD_DEL_REPLY, vl_api_session_rule_add_del_reply_t_handler)
vl_msg_id(VL_API_SESSION_RULES_DUMP, vl_api_session_rules_dump_t_handler)
vl_msg_id(VL_API_SESSION_RULES_DETAILS, vl_api_session_rules_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_application_attach_t, 1)
vl_msg_name(vl_api_application_attach_reply_t, 1)
vl_msg_name(vl_api_app_attach_t, 1)
vl_msg_name(vl_api_app_attach_reply_t, 1)
vl_msg_name(vl_api_application_tls_cert_add_t, 1)
vl_msg_name(vl_api_application_tls_cert_add_reply_t, 1)
vl_msg_name(vl_api_application_tls_key_add_t, 1)
vl_msg_name(vl_api_application_tls_key_add_reply_t, 1)
vl_msg_name(vl_api_application_detach_t, 1)
vl_msg_name(vl_api_application_detach_reply_t, 1)
vl_msg_name(vl_api_map_another_segment_t, 1)
vl_msg_name(vl_api_map_another_segment_reply_t, 1)
vl_msg_name(vl_api_unmap_segment_t, 1)
vl_msg_name(vl_api_unmap_segment_reply_t, 1)
vl_msg_name(vl_api_bind_uri_t, 1)
vl_msg_name(vl_api_bind_uri_reply_t, 1)
vl_msg_name(vl_api_unbind_uri_t, 1)
vl_msg_name(vl_api_unbind_uri_reply_t, 1)
vl_msg_name(vl_api_connect_uri_t, 1)
vl_msg_name(vl_api_connect_uri_reply_t, 1)
vl_msg_name(vl_api_disconnect_session_t, 1)
vl_msg_name(vl_api_disconnect_session_reply_t, 1)
vl_msg_name(vl_api_bind_sock_t, 1)
vl_msg_name(vl_api_bind_sock_reply_t, 1)
vl_msg_name(vl_api_unbind_sock_t, 1)
vl_msg_name(vl_api_unbind_sock_reply_t, 1)
vl_msg_name(vl_api_connect_sock_t, 1)
vl_msg_name(vl_api_connect_sock_reply_t, 1)
vl_msg_name(vl_api_app_cut_through_registration_add_t, 1)
vl_msg_name(vl_api_app_cut_through_registration_add_reply_t, 1)
vl_msg_name(vl_api_app_worker_add_del_t, 1)
vl_msg_name(vl_api_app_worker_add_del_reply_t, 1)
vl_msg_name(vl_api_session_enable_disable_t, 1)
vl_msg_name(vl_api_session_enable_disable_reply_t, 1)
vl_msg_name(vl_api_app_namespace_add_del_t, 1)
vl_msg_name(vl_api_app_namespace_add_del_reply_t, 1)
vl_msg_name(vl_api_session_rule_add_del_t, 1)
vl_msg_name(vl_api_session_rule_add_del_reply_t, 1)
vl_msg_name(vl_api_session_rules_dump_t, 1)
vl_msg_name(vl_api_session_rules_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_session \
_(VL_API_APPLICATION_ATTACH, application_attach, 81d4f974) \
_(VL_API_APPLICATION_ATTACH_REPLY, application_attach_reply, 581866e8) \
_(VL_API_APP_ATTACH, app_attach, ed08f4bd) \
_(VL_API_APP_ATTACH_REPLY, app_attach_reply, 0112f647) \
_(VL_API_APPLICATION_TLS_CERT_ADD, application_tls_cert_add, 3f5cfe45) \
_(VL_API_APPLICATION_TLS_CERT_ADD_REPLY, application_tls_cert_add_reply, e8d4e804) \
_(VL_API_APPLICATION_TLS_KEY_ADD, application_tls_key_add, 5eaf70cd) \
_(VL_API_APPLICATION_TLS_KEY_ADD_REPLY, application_tls_key_add_reply, e8d4e804) \
_(VL_API_APPLICATION_DETACH, application_detach, 51077d14) \
_(VL_API_APPLICATION_DETACH_REPLY, application_detach_reply, e8d4e804) \
_(VL_API_MAP_ANOTHER_SEGMENT, map_another_segment, dc2d630b) \
_(VL_API_MAP_ANOTHER_SEGMENT_REPLY, map_another_segment_reply, e8d4e804) \
_(VL_API_UNMAP_SEGMENT, unmap_segment, f77096f6) \
_(VL_API_UNMAP_SEGMENT_REPLY, unmap_segment_reply, e8d4e804) \
_(VL_API_BIND_URI, bind_uri, fae140cb) \
_(VL_API_BIND_URI_REPLY, bind_uri_reply, e8d4e804) \
_(VL_API_UNBIND_URI, unbind_uri, 294cf07d) \
_(VL_API_UNBIND_URI_REPLY, unbind_uri_reply, e8d4e804) \
_(VL_API_CONNECT_URI, connect_uri, a36143d6) \
_(VL_API_CONNECT_URI_REPLY, connect_uri_reply, e8d4e804) \
_(VL_API_DISCONNECT_SESSION, disconnect_session, 7279205b) \
_(VL_API_DISCONNECT_SESSION_REPLY, disconnect_session_reply, d6960a03) \
_(VL_API_BIND_SOCK, bind_sock, 0394633f) \
_(VL_API_BIND_SOCK_REPLY, bind_sock_reply, e8d4e804) \
_(VL_API_UNBIND_SOCK, unbind_sock, 08880908) \
_(VL_API_UNBIND_SOCK_REPLY, unbind_sock_reply, e8d4e804) \
_(VL_API_CONNECT_SOCK, connect_sock, d2b460ca) \
_(VL_API_CONNECT_SOCK_REPLY, connect_sock_reply, e8d4e804) \
_(VL_API_APP_CUT_THROUGH_REGISTRATION_ADD, app_cut_through_registration_add, 6d73b1b9) \
_(VL_API_APP_CUT_THROUGH_REGISTRATION_ADD_REPLY, app_cut_through_registration_add_reply, e8d4e804) \
_(VL_API_APP_WORKER_ADD_DEL, app_worker_add_del, 6d2b2279) \
_(VL_API_APP_WORKER_ADD_DEL_REPLY, app_worker_add_del_reply, 56b21abc) \
_(VL_API_SESSION_ENABLE_DISABLE, session_enable_disable, 30ac9be7) \
_(VL_API_SESSION_ENABLE_DISABLE_REPLY, session_enable_disable_reply, e8d4e804) \
_(VL_API_APP_NAMESPACE_ADD_DEL, app_namespace_add_del, dd074c65) \
_(VL_API_APP_NAMESPACE_ADD_DEL_REPLY, app_namespace_add_del_reply, 85137120) \
_(VL_API_SESSION_RULE_ADD_DEL, session_rule_add_del, 4ab2eb06) \
_(VL_API_SESSION_RULE_ADD_DEL_REPLY, session_rule_add_del_reply, e8d4e804) \
_(VL_API_SESSION_RULES_DUMP, session_rules_dump, 51077d14) \
_(VL_API_SESSION_RULES_DETAILS, session_rules_details, a52b0e96) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_session_api
#define included_session_api
#ifndef _vl_api_defined_application_attach
#define _vl_api_defined_application_attach
typedef VL_API_PACKED(struct _vl_api_application_attach {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 initial_segment_size;
    u64 options[16];
    u8 namespace_id_len;
    u8 namespace_id[64];
}) vl_api_application_attach_t;
#endif

#ifndef _vl_api_defined_application_attach_reply
#define _vl_api_defined_application_attach_reply
typedef VL_API_PACKED(struct _vl_api_application_attach_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 app_event_queue_address;
    u8 n_fds;
    u8 fd_flags;
    u32 segment_size;
    u8 segment_name_length;
    u8 segment_name[128];
    u32 app_index;
    u64 segment_handle;
}) vl_api_application_attach_reply_t;
#endif

#ifndef _vl_api_defined_app_attach
#define _vl_api_defined_app_attach
typedef VL_API_PACKED(struct _vl_api_app_attach {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 options[16];
    u8 namespace_id_len;
    u8 namespace_id[64];
}) vl_api_app_attach_t;
#endif

#ifndef _vl_api_defined_app_attach_reply
#define _vl_api_defined_app_attach_reply
typedef VL_API_PACKED(struct _vl_api_app_attach_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 app_mq;
    u64 vpp_ctrl_mq;
    u8 vpp_ctrl_mq_thread;
    u32 app_index;
    u8 n_fds;
    u8 fd_flags;
    u32 segment_size;
    u8 segment_name_length;
    u8 segment_name[128];
    u64 segment_handle;
}) vl_api_app_attach_reply_t;
#endif

#ifndef _vl_api_defined_application_tls_cert_add
#define _vl_api_defined_application_tls_cert_add
typedef VL_API_PACKED(struct _vl_api_application_tls_cert_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 app_index;
    u16 cert_len;
    u8 cert[0];
}) vl_api_application_tls_cert_add_t;
#endif

#ifndef _vl_api_defined_application_tls_cert_add_reply
#define _vl_api_defined_application_tls_cert_add_reply
typedef VL_API_PACKED(struct _vl_api_application_tls_cert_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_application_tls_cert_add_reply_t;
#endif

#ifndef _vl_api_defined_application_tls_key_add
#define _vl_api_defined_application_tls_key_add
typedef VL_API_PACKED(struct _vl_api_application_tls_key_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 app_index;
    u16 key_len;
    u8 key[0];
}) vl_api_application_tls_key_add_t;
#endif

#ifndef _vl_api_defined_application_tls_key_add_reply
#define _vl_api_defined_application_tls_key_add_reply
typedef VL_API_PACKED(struct _vl_api_application_tls_key_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_application_tls_key_add_reply_t;
#endif

#ifndef _vl_api_defined_application_detach
#define _vl_api_defined_application_detach
typedef VL_API_PACKED(struct _vl_api_application_detach {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_application_detach_t;
#endif

#ifndef _vl_api_defined_application_detach_reply
#define _vl_api_defined_application_detach_reply
typedef VL_API_PACKED(struct _vl_api_application_detach_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_application_detach_reply_t;
#endif

#ifndef _vl_api_defined_map_another_segment
#define _vl_api_defined_map_another_segment
typedef VL_API_PACKED(struct _vl_api_map_another_segment {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 fd_flags;
    u32 segment_size;
    u8 segment_name[128];
    u64 segment_handle;
}) vl_api_map_another_segment_t;
#endif

#ifndef _vl_api_defined_map_another_segment_reply
#define _vl_api_defined_map_another_segment_reply
typedef VL_API_PACKED(struct _vl_api_map_another_segment_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_map_another_segment_reply_t;
#endif

#ifndef _vl_api_defined_unmap_segment
#define _vl_api_defined_unmap_segment
typedef VL_API_PACKED(struct _vl_api_unmap_segment {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 segment_handle;
}) vl_api_unmap_segment_t;
#endif

#ifndef _vl_api_defined_unmap_segment_reply
#define _vl_api_defined_unmap_segment_reply
typedef VL_API_PACKED(struct _vl_api_unmap_segment_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_unmap_segment_reply_t;
#endif

#ifndef _vl_api_defined_bind_uri
#define _vl_api_defined_bind_uri
typedef VL_API_PACKED(struct _vl_api_bind_uri {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 accept_cookie;
    u8 uri[128];
}) vl_api_bind_uri_t;
#endif

#ifndef _vl_api_defined_bind_uri_reply
#define _vl_api_defined_bind_uri_reply
typedef VL_API_PACKED(struct _vl_api_bind_uri_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bind_uri_reply_t;
#endif

#ifndef _vl_api_defined_unbind_uri
#define _vl_api_defined_unbind_uri
typedef VL_API_PACKED(struct _vl_api_unbind_uri {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 uri[128];
}) vl_api_unbind_uri_t;
#endif

#ifndef _vl_api_defined_unbind_uri_reply
#define _vl_api_defined_unbind_uri_reply
typedef VL_API_PACKED(struct _vl_api_unbind_uri_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_unbind_uri_reply_t;
#endif

#ifndef _vl_api_defined_connect_uri
#define _vl_api_defined_connect_uri
typedef VL_API_PACKED(struct _vl_api_connect_uri {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 client_queue_address;
    u64 options[16];
    u8 uri[128];
}) vl_api_connect_uri_t;
#endif

#ifndef _vl_api_defined_connect_uri_reply
#define _vl_api_defined_connect_uri_reply
typedef VL_API_PACKED(struct _vl_api_connect_uri_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_connect_uri_reply_t;
#endif

#ifndef _vl_api_defined_disconnect_session
#define _vl_api_defined_disconnect_session
typedef VL_API_PACKED(struct _vl_api_disconnect_session {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 handle;
}) vl_api_disconnect_session_t;
#endif

#ifndef _vl_api_defined_disconnect_session_reply
#define _vl_api_defined_disconnect_session_reply
typedef VL_API_PACKED(struct _vl_api_disconnect_session_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u64 handle;
}) vl_api_disconnect_session_reply_t;
#endif

#ifndef _vl_api_defined_bind_sock
#define _vl_api_defined_bind_sock
typedef VL_API_PACKED(struct _vl_api_bind_sock {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 wrk_index;
    u32 vrf;
    u8 is_ip4;
    u8 ip[16];
    u16 port;
    u8 proto;
    u64 options[16];
}) vl_api_bind_sock_t;
#endif

#ifndef _vl_api_defined_bind_sock_reply
#define _vl_api_defined_bind_sock_reply
typedef VL_API_PACKED(struct _vl_api_bind_sock_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_bind_sock_reply_t;
#endif

#ifndef _vl_api_defined_unbind_sock
#define _vl_api_defined_unbind_sock
typedef VL_API_PACKED(struct _vl_api_unbind_sock {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 wrk_index;
    u64 handle;
}) vl_api_unbind_sock_t;
#endif

#ifndef _vl_api_defined_unbind_sock_reply
#define _vl_api_defined_unbind_sock_reply
typedef VL_API_PACKED(struct _vl_api_unbind_sock_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_unbind_sock_reply_t;
#endif

#ifndef _vl_api_defined_connect_sock
#define _vl_api_defined_connect_sock
typedef VL_API_PACKED(struct _vl_api_connect_sock {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 wrk_index;
    u64 client_queue_address;
    u64 options[16];
    u32 vrf;
    u8 is_ip4;
    u8 ip[16];
    u16 port;
    u8 proto;
    u64 parent_handle;
    u8 hostname_len;
    u8 hostname[0];
}) vl_api_connect_sock_t;
#endif

#ifndef _vl_api_defined_connect_sock_reply
#define _vl_api_defined_connect_sock_reply
typedef VL_API_PACKED(struct _vl_api_connect_sock_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_connect_sock_reply_t;
#endif

#ifndef _vl_api_defined_app_cut_through_registration_add
#define _vl_api_defined_app_cut_through_registration_add
typedef VL_API_PACKED(struct _vl_api_app_cut_through_registration_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 evt_q_address;
    u64 peer_evt_q_address;
    u32 wrk_index;
    u8 n_fds;
    u8 fd_flags;
}) vl_api_app_cut_through_registration_add_t;
#endif

#ifndef _vl_api_defined_app_cut_through_registration_add_reply
#define _vl_api_defined_app_cut_through_registration_add_reply
typedef VL_API_PACKED(struct _vl_api_app_cut_through_registration_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_app_cut_through_registration_add_reply_t;
#endif

#ifndef _vl_api_defined_app_worker_add_del
#define _vl_api_defined_app_worker_add_del
typedef VL_API_PACKED(struct _vl_api_app_worker_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 app_index;
    u32 wrk_index;
    u8 is_add;
}) vl_api_app_worker_add_del_t;
#endif

#ifndef _vl_api_defined_app_worker_add_del_reply
#define _vl_api_defined_app_worker_add_del_reply
typedef VL_API_PACKED(struct _vl_api_app_worker_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 wrk_index;
    u64 app_event_queue_address;
    u8 n_fds;
    u8 fd_flags;
    u8 segment_name_length;
    u8 segment_name[128];
    u64 segment_handle;
    u8 is_add;
}) vl_api_app_worker_add_del_reply_t;
#endif

#ifndef _vl_api_defined_session_enable_disable
#define _vl_api_defined_session_enable_disable
typedef VL_API_PACKED(struct _vl_api_session_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_enable;
}) vl_api_session_enable_disable_t;
#endif

#ifndef _vl_api_defined_session_enable_disable_reply
#define _vl_api_defined_session_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_session_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_session_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_app_namespace_add_del
#define _vl_api_defined_app_namespace_add_del
typedef VL_API_PACKED(struct _vl_api_app_namespace_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u64 secret;
    u32 sw_if_index;
    u32 ip4_fib_id;
    u32 ip6_fib_id;
    u8 namespace_id_len;
    u8 namespace_id[64];
}) vl_api_app_namespace_add_del_t;
#endif

#ifndef _vl_api_defined_app_namespace_add_del_reply
#define _vl_api_defined_app_namespace_add_del_reply
typedef VL_API_PACKED(struct _vl_api_app_namespace_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 appns_index;
}) vl_api_app_namespace_add_del_reply_t;
#endif

#ifndef _vl_api_defined_session_rule_add_del
#define _vl_api_defined_session_rule_add_del
typedef VL_API_PACKED(struct _vl_api_session_rule_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 transport_proto;
    u8 is_ip4;
    u8 lcl_ip[16];
    u8 lcl_plen;
    u8 rmt_ip[16];
    u8 rmt_plen;
    u16 lcl_port;
    u16 rmt_port;
    u32 action_index;
    u8 is_add;
    u32 appns_index;
    u8 scope;
    u8 tag[64];
}) vl_api_session_rule_add_del_t;
#endif

#ifndef _vl_api_defined_session_rule_add_del_reply
#define _vl_api_defined_session_rule_add_del_reply
typedef VL_API_PACKED(struct _vl_api_session_rule_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_session_rule_add_del_reply_t;
#endif

#ifndef _vl_api_defined_session_rules_dump
#define _vl_api_defined_session_rules_dump
typedef VL_API_PACKED(struct _vl_api_session_rules_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_session_rules_dump_t;
#endif

#ifndef _vl_api_defined_session_rules_details
#define _vl_api_defined_session_rules_details
typedef VL_API_PACKED(struct _vl_api_session_rules_details {
    u16 _vl_msg_id;
    u32 context;
    u8 transport_proto;
    u8 is_ip4;
    u8 lcl_ip[16];
    u8 lcl_plen;
    u8 rmt_ip[16];
    u8 rmt_plen;
    u16 lcl_port;
    u16 rmt_port;
    u32 action_index;
    u32 appns_index;
    u8 scope;
    u8 tag[64];
}) vl_api_session_rules_details_t;
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

#ifndef _vl_api_defined_application_attach_t_print
#define _vl_api_defined_application_attach_t_print
static inline void *vl_api_application_attach_t_print (vl_api_application_attach_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_attach_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "initial_segment_size: %u\n", a->initial_segment_size);
    vl_print(handle, "namespace_id_len: %u\n", a->namespace_id_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_application_attach_reply_t_print
#define _vl_api_defined_application_attach_reply_t_print
static inline void *vl_api_application_attach_reply_t_print (vl_api_application_attach_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_attach_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "app_event_queue_address: %llu\n", a->app_event_queue_address);
    vl_print(handle, "n_fds: %u\n", a->n_fds);
    vl_print(handle, "fd_flags: %u\n", a->fd_flags);
    vl_print(handle, "segment_size: %u\n", a->segment_size);
    vl_print(handle, "segment_name_length: %u\n", a->segment_name_length);
    vl_print(handle, "app_index: %u\n", a->app_index);
    vl_print(handle, "segment_handle: %llu\n", a->segment_handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_attach_t_print
#define _vl_api_defined_app_attach_t_print
static inline void *vl_api_app_attach_t_print (vl_api_app_attach_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_attach_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "namespace_id_len: %u\n", a->namespace_id_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_attach_reply_t_print
#define _vl_api_defined_app_attach_reply_t_print
static inline void *vl_api_app_attach_reply_t_print (vl_api_app_attach_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_attach_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "app_mq: %llu\n", a->app_mq);
    vl_print(handle, "vpp_ctrl_mq: %llu\n", a->vpp_ctrl_mq);
    vl_print(handle, "vpp_ctrl_mq_thread: %u\n", a->vpp_ctrl_mq_thread);
    vl_print(handle, "app_index: %u\n", a->app_index);
    vl_print(handle, "n_fds: %u\n", a->n_fds);
    vl_print(handle, "fd_flags: %u\n", a->fd_flags);
    vl_print(handle, "segment_size: %u\n", a->segment_size);
    vl_print(handle, "segment_name_length: %u\n", a->segment_name_length);
    vl_print(handle, "segment_handle: %llu\n", a->segment_handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_application_tls_cert_add_t_print
#define _vl_api_defined_application_tls_cert_add_t_print
static inline void *vl_api_application_tls_cert_add_t_print (vl_api_application_tls_cert_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_tls_cert_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "app_index: %u\n", a->app_index);
    vl_print(handle, "cert_len: %u\n", a->cert_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_application_tls_cert_add_reply_t_print
#define _vl_api_defined_application_tls_cert_add_reply_t_print
static inline void *vl_api_application_tls_cert_add_reply_t_print (vl_api_application_tls_cert_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_tls_cert_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_application_tls_key_add_t_print
#define _vl_api_defined_application_tls_key_add_t_print
static inline void *vl_api_application_tls_key_add_t_print (vl_api_application_tls_key_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_tls_key_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "app_index: %u\n", a->app_index);
    vl_print(handle, "key_len: %u\n", a->key_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_application_tls_key_add_reply_t_print
#define _vl_api_defined_application_tls_key_add_reply_t_print
static inline void *vl_api_application_tls_key_add_reply_t_print (vl_api_application_tls_key_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_tls_key_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_application_detach_t_print
#define _vl_api_defined_application_detach_t_print
static inline void *vl_api_application_detach_t_print (vl_api_application_detach_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_detach_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_application_detach_reply_t_print
#define _vl_api_defined_application_detach_reply_t_print
static inline void *vl_api_application_detach_reply_t_print (vl_api_application_detach_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_application_detach_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_another_segment_t_print
#define _vl_api_defined_map_another_segment_t_print
static inline void *vl_api_map_another_segment_t_print (vl_api_map_another_segment_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_another_segment_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "fd_flags: %u\n", a->fd_flags);
    vl_print(handle, "segment_size: %u\n", a->segment_size);
    vl_print(handle, "segment_handle: %llu\n", a->segment_handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_map_another_segment_reply_t_print
#define _vl_api_defined_map_another_segment_reply_t_print
static inline void *vl_api_map_another_segment_reply_t_print (vl_api_map_another_segment_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_map_another_segment_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_unmap_segment_t_print
#define _vl_api_defined_unmap_segment_t_print
static inline void *vl_api_unmap_segment_t_print (vl_api_unmap_segment_t *a,void *handle)
{
    vl_print(handle, "vl_api_unmap_segment_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "segment_handle: %llu\n", a->segment_handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_unmap_segment_reply_t_print
#define _vl_api_defined_unmap_segment_reply_t_print
static inline void *vl_api_unmap_segment_reply_t_print (vl_api_unmap_segment_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_unmap_segment_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_bind_uri_t_print
#define _vl_api_defined_bind_uri_t_print
static inline void *vl_api_bind_uri_t_print (vl_api_bind_uri_t *a,void *handle)
{
    vl_print(handle, "vl_api_bind_uri_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "accept_cookie: %u\n", a->accept_cookie);
    return handle;
}

#endif

#ifndef _vl_api_defined_bind_uri_reply_t_print
#define _vl_api_defined_bind_uri_reply_t_print
static inline void *vl_api_bind_uri_reply_t_print (vl_api_bind_uri_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bind_uri_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_unbind_uri_t_print
#define _vl_api_defined_unbind_uri_t_print
static inline void *vl_api_unbind_uri_t_print (vl_api_unbind_uri_t *a,void *handle)
{
    vl_print(handle, "vl_api_unbind_uri_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_unbind_uri_reply_t_print
#define _vl_api_defined_unbind_uri_reply_t_print
static inline void *vl_api_unbind_uri_reply_t_print (vl_api_unbind_uri_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_unbind_uri_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_connect_uri_t_print
#define _vl_api_defined_connect_uri_t_print
static inline void *vl_api_connect_uri_t_print (vl_api_connect_uri_t *a,void *handle)
{
    vl_print(handle, "vl_api_connect_uri_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "client_queue_address: %llu\n", a->client_queue_address);
    return handle;
}

#endif

#ifndef _vl_api_defined_connect_uri_reply_t_print
#define _vl_api_defined_connect_uri_reply_t_print
static inline void *vl_api_connect_uri_reply_t_print (vl_api_connect_uri_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_connect_uri_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_disconnect_session_t_print
#define _vl_api_defined_disconnect_session_t_print
static inline void *vl_api_disconnect_session_t_print (vl_api_disconnect_session_t *a,void *handle)
{
    vl_print(handle, "vl_api_disconnect_session_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "handle: %llu\n", a->handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_disconnect_session_reply_t_print
#define _vl_api_defined_disconnect_session_reply_t_print
static inline void *vl_api_disconnect_session_reply_t_print (vl_api_disconnect_session_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_disconnect_session_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "handle: %llu\n", a->handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_bind_sock_t_print
#define _vl_api_defined_bind_sock_t_print
static inline void *vl_api_bind_sock_t_print (vl_api_bind_sock_t *a,void *handle)
{
    vl_print(handle, "vl_api_bind_sock_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "wrk_index: %u\n", a->wrk_index);
    vl_print(handle, "vrf: %u\n", a->vrf);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "proto: %u\n", a->proto);
    return handle;
}

#endif

#ifndef _vl_api_defined_bind_sock_reply_t_print
#define _vl_api_defined_bind_sock_reply_t_print
static inline void *vl_api_bind_sock_reply_t_print (vl_api_bind_sock_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_bind_sock_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_unbind_sock_t_print
#define _vl_api_defined_unbind_sock_t_print
static inline void *vl_api_unbind_sock_t_print (vl_api_unbind_sock_t *a,void *handle)
{
    vl_print(handle, "vl_api_unbind_sock_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "wrk_index: %u\n", a->wrk_index);
    vl_print(handle, "handle: %llu\n", a->handle);
    return handle;
}

#endif

#ifndef _vl_api_defined_unbind_sock_reply_t_print
#define _vl_api_defined_unbind_sock_reply_t_print
static inline void *vl_api_unbind_sock_reply_t_print (vl_api_unbind_sock_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_unbind_sock_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_connect_sock_t_print
#define _vl_api_defined_connect_sock_t_print
static inline void *vl_api_connect_sock_t_print (vl_api_connect_sock_t *a,void *handle)
{
    vl_print(handle, "vl_api_connect_sock_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "wrk_index: %u\n", a->wrk_index);
    vl_print(handle, "client_queue_address: %llu\n", a->client_queue_address);
    vl_print(handle, "vrf: %u\n", a->vrf);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    vl_print(handle, "port: %u\n", a->port);
    vl_print(handle, "proto: %u\n", a->proto);
    vl_print(handle, "parent_handle: %llu\n", a->parent_handle);
    vl_print(handle, "hostname_len: %u\n", a->hostname_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_connect_sock_reply_t_print
#define _vl_api_defined_connect_sock_reply_t_print
static inline void *vl_api_connect_sock_reply_t_print (vl_api_connect_sock_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_connect_sock_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_cut_through_registration_add_t_print
#define _vl_api_defined_app_cut_through_registration_add_t_print
static inline void *vl_api_app_cut_through_registration_add_t_print (vl_api_app_cut_through_registration_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_cut_through_registration_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "evt_q_address: %llu\n", a->evt_q_address);
    vl_print(handle, "peer_evt_q_address: %llu\n", a->peer_evt_q_address);
    vl_print(handle, "wrk_index: %u\n", a->wrk_index);
    vl_print(handle, "n_fds: %u\n", a->n_fds);
    vl_print(handle, "fd_flags: %u\n", a->fd_flags);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_cut_through_registration_add_reply_t_print
#define _vl_api_defined_app_cut_through_registration_add_reply_t_print
static inline void *vl_api_app_cut_through_registration_add_reply_t_print (vl_api_app_cut_through_registration_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_cut_through_registration_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_worker_add_del_t_print
#define _vl_api_defined_app_worker_add_del_t_print
static inline void *vl_api_app_worker_add_del_t_print (vl_api_app_worker_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_worker_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "app_index: %u\n", a->app_index);
    vl_print(handle, "wrk_index: %u\n", a->wrk_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_worker_add_del_reply_t_print
#define _vl_api_defined_app_worker_add_del_reply_t_print
static inline void *vl_api_app_worker_add_del_reply_t_print (vl_api_app_worker_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_worker_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "wrk_index: %u\n", a->wrk_index);
    vl_print(handle, "app_event_queue_address: %llu\n", a->app_event_queue_address);
    vl_print(handle, "n_fds: %u\n", a->n_fds);
    vl_print(handle, "fd_flags: %u\n", a->fd_flags);
    vl_print(handle, "segment_name_length: %u\n", a->segment_name_length);
    vl_print(handle, "segment_handle: %llu\n", a->segment_handle);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_session_enable_disable_t_print
#define _vl_api_defined_session_enable_disable_t_print
static inline void *vl_api_session_enable_disable_t_print (vl_api_session_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_session_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_enable: %u\n", a->is_enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_session_enable_disable_reply_t_print
#define _vl_api_defined_session_enable_disable_reply_t_print
static inline void *vl_api_session_enable_disable_reply_t_print (vl_api_session_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_session_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_namespace_add_del_t_print
#define _vl_api_defined_app_namespace_add_del_t_print
static inline void *vl_api_app_namespace_add_del_t_print (vl_api_app_namespace_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_namespace_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "secret: %llu\n", a->secret);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "ip4_fib_id: %u\n", a->ip4_fib_id);
    vl_print(handle, "ip6_fib_id: %u\n", a->ip6_fib_id);
    vl_print(handle, "namespace_id_len: %u\n", a->namespace_id_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_app_namespace_add_del_reply_t_print
#define _vl_api_defined_app_namespace_add_del_reply_t_print
static inline void *vl_api_app_namespace_add_del_reply_t_print (vl_api_app_namespace_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_app_namespace_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "appns_index: %u\n", a->appns_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_session_rule_add_del_t_print
#define _vl_api_defined_session_rule_add_del_t_print
static inline void *vl_api_session_rule_add_del_t_print (vl_api_session_rule_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_session_rule_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "transport_proto: %u\n", a->transport_proto);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    vl_print(handle, "lcl_plen: %u\n", a->lcl_plen);
    vl_print(handle, "rmt_plen: %u\n", a->rmt_plen);
    vl_print(handle, "lcl_port: %u\n", a->lcl_port);
    vl_print(handle, "rmt_port: %u\n", a->rmt_port);
    vl_print(handle, "action_index: %u\n", a->action_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "appns_index: %u\n", a->appns_index);
    vl_print(handle, "scope: %u\n", a->scope);
    return handle;
}

#endif

#ifndef _vl_api_defined_session_rule_add_del_reply_t_print
#define _vl_api_defined_session_rule_add_del_reply_t_print
static inline void *vl_api_session_rule_add_del_reply_t_print (vl_api_session_rule_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_session_rule_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_session_rules_dump_t_print
#define _vl_api_defined_session_rules_dump_t_print
static inline void *vl_api_session_rules_dump_t_print (vl_api_session_rules_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_session_rules_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_session_rules_details_t_print
#define _vl_api_defined_session_rules_details_t_print
static inline void *vl_api_session_rules_details_t_print (vl_api_session_rules_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_session_rules_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "transport_proto: %u\n", a->transport_proto);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    vl_print(handle, "lcl_plen: %u\n", a->lcl_plen);
    vl_print(handle, "rmt_plen: %u\n", a->rmt_plen);
    vl_print(handle, "lcl_port: %u\n", a->lcl_port);
    vl_print(handle, "rmt_port: %u\n", a->rmt_port);
    vl_print(handle, "action_index: %u\n", a->action_index);
    vl_print(handle, "appns_index: %u\n", a->appns_index);
    vl_print(handle, "scope: %u\n", a->scope);
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

#ifndef _vl_api_defined_application_attach_t_endian
#define _vl_api_defined_application_attach_t_endian
static inline void vl_api_application_attach_t_endian (vl_api_application_attach_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->initial_segment_size = clib_net_to_host_u32(a->initial_segment_size);
    /* a->namespace_id_len = a->namespace_id_len (no-op) */
}

#endif

#ifndef _vl_api_defined_application_attach_reply_t_endian
#define _vl_api_defined_application_attach_reply_t_endian
static inline void vl_api_application_attach_reply_t_endian (vl_api_application_attach_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->app_event_queue_address = clib_net_to_host_u64(a->app_event_queue_address);
    /* a->n_fds = a->n_fds (no-op) */
    /* a->fd_flags = a->fd_flags (no-op) */
    a->segment_size = clib_net_to_host_u32(a->segment_size);
    /* a->segment_name_length = a->segment_name_length (no-op) */
    a->app_index = clib_net_to_host_u32(a->app_index);
    a->segment_handle = clib_net_to_host_u64(a->segment_handle);
}

#endif

#ifndef _vl_api_defined_app_attach_t_endian
#define _vl_api_defined_app_attach_t_endian
static inline void vl_api_app_attach_t_endian (vl_api_app_attach_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->namespace_id_len = a->namespace_id_len (no-op) */
}

#endif

#ifndef _vl_api_defined_app_attach_reply_t_endian
#define _vl_api_defined_app_attach_reply_t_endian
static inline void vl_api_app_attach_reply_t_endian (vl_api_app_attach_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->app_mq = clib_net_to_host_u64(a->app_mq);
    a->vpp_ctrl_mq = clib_net_to_host_u64(a->vpp_ctrl_mq);
    /* a->vpp_ctrl_mq_thread = a->vpp_ctrl_mq_thread (no-op) */
    a->app_index = clib_net_to_host_u32(a->app_index);
    /* a->n_fds = a->n_fds (no-op) */
    /* a->fd_flags = a->fd_flags (no-op) */
    a->segment_size = clib_net_to_host_u32(a->segment_size);
    /* a->segment_name_length = a->segment_name_length (no-op) */
    a->segment_handle = clib_net_to_host_u64(a->segment_handle);
}

#endif

#ifndef _vl_api_defined_application_tls_cert_add_t_endian
#define _vl_api_defined_application_tls_cert_add_t_endian
static inline void vl_api_application_tls_cert_add_t_endian (vl_api_application_tls_cert_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->app_index = clib_net_to_host_u32(a->app_index);
    a->cert_len = clib_net_to_host_u16(a->cert_len);
}

#endif

#ifndef _vl_api_defined_application_tls_cert_add_reply_t_endian
#define _vl_api_defined_application_tls_cert_add_reply_t_endian
static inline void vl_api_application_tls_cert_add_reply_t_endian (vl_api_application_tls_cert_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_application_tls_key_add_t_endian
#define _vl_api_defined_application_tls_key_add_t_endian
static inline void vl_api_application_tls_key_add_t_endian (vl_api_application_tls_key_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->app_index = clib_net_to_host_u32(a->app_index);
    a->key_len = clib_net_to_host_u16(a->key_len);
}

#endif

#ifndef _vl_api_defined_application_tls_key_add_reply_t_endian
#define _vl_api_defined_application_tls_key_add_reply_t_endian
static inline void vl_api_application_tls_key_add_reply_t_endian (vl_api_application_tls_key_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_application_detach_t_endian
#define _vl_api_defined_application_detach_t_endian
static inline void vl_api_application_detach_t_endian (vl_api_application_detach_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_application_detach_reply_t_endian
#define _vl_api_defined_application_detach_reply_t_endian
static inline void vl_api_application_detach_reply_t_endian (vl_api_application_detach_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_map_another_segment_t_endian
#define _vl_api_defined_map_another_segment_t_endian
static inline void vl_api_map_another_segment_t_endian (vl_api_map_another_segment_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->fd_flags = a->fd_flags (no-op) */
    a->segment_size = clib_net_to_host_u32(a->segment_size);
    a->segment_handle = clib_net_to_host_u64(a->segment_handle);
}

#endif

#ifndef _vl_api_defined_map_another_segment_reply_t_endian
#define _vl_api_defined_map_another_segment_reply_t_endian
static inline void vl_api_map_another_segment_reply_t_endian (vl_api_map_another_segment_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_unmap_segment_t_endian
#define _vl_api_defined_unmap_segment_t_endian
static inline void vl_api_unmap_segment_t_endian (vl_api_unmap_segment_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->segment_handle = clib_net_to_host_u64(a->segment_handle);
}

#endif

#ifndef _vl_api_defined_unmap_segment_reply_t_endian
#define _vl_api_defined_unmap_segment_reply_t_endian
static inline void vl_api_unmap_segment_reply_t_endian (vl_api_unmap_segment_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_bind_uri_t_endian
#define _vl_api_defined_bind_uri_t_endian
static inline void vl_api_bind_uri_t_endian (vl_api_bind_uri_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->accept_cookie = clib_net_to_host_u32(a->accept_cookie);
}

#endif

#ifndef _vl_api_defined_bind_uri_reply_t_endian
#define _vl_api_defined_bind_uri_reply_t_endian
static inline void vl_api_bind_uri_reply_t_endian (vl_api_bind_uri_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_unbind_uri_t_endian
#define _vl_api_defined_unbind_uri_t_endian
static inline void vl_api_unbind_uri_t_endian (vl_api_unbind_uri_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_unbind_uri_reply_t_endian
#define _vl_api_defined_unbind_uri_reply_t_endian
static inline void vl_api_unbind_uri_reply_t_endian (vl_api_unbind_uri_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_connect_uri_t_endian
#define _vl_api_defined_connect_uri_t_endian
static inline void vl_api_connect_uri_t_endian (vl_api_connect_uri_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->client_queue_address = clib_net_to_host_u64(a->client_queue_address);
}

#endif

#ifndef _vl_api_defined_connect_uri_reply_t_endian
#define _vl_api_defined_connect_uri_reply_t_endian
static inline void vl_api_connect_uri_reply_t_endian (vl_api_connect_uri_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_disconnect_session_t_endian
#define _vl_api_defined_disconnect_session_t_endian
static inline void vl_api_disconnect_session_t_endian (vl_api_disconnect_session_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->handle = clib_net_to_host_u64(a->handle);
}

#endif

#ifndef _vl_api_defined_disconnect_session_reply_t_endian
#define _vl_api_defined_disconnect_session_reply_t_endian
static inline void vl_api_disconnect_session_reply_t_endian (vl_api_disconnect_session_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->handle = clib_net_to_host_u64(a->handle);
}

#endif

#ifndef _vl_api_defined_bind_sock_t_endian
#define _vl_api_defined_bind_sock_t_endian
static inline void vl_api_bind_sock_t_endian (vl_api_bind_sock_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    a->vrf = clib_net_to_host_u32(a->vrf);
    /* a->is_ip4 = a->is_ip4 (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    /* a->proto = a->proto (no-op) */
}

#endif

#ifndef _vl_api_defined_bind_sock_reply_t_endian
#define _vl_api_defined_bind_sock_reply_t_endian
static inline void vl_api_bind_sock_reply_t_endian (vl_api_bind_sock_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_unbind_sock_t_endian
#define _vl_api_defined_unbind_sock_t_endian
static inline void vl_api_unbind_sock_t_endian (vl_api_unbind_sock_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    a->handle = clib_net_to_host_u64(a->handle);
}

#endif

#ifndef _vl_api_defined_unbind_sock_reply_t_endian
#define _vl_api_defined_unbind_sock_reply_t_endian
static inline void vl_api_unbind_sock_reply_t_endian (vl_api_unbind_sock_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_connect_sock_t_endian
#define _vl_api_defined_connect_sock_t_endian
static inline void vl_api_connect_sock_t_endian (vl_api_connect_sock_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    a->client_queue_address = clib_net_to_host_u64(a->client_queue_address);
    a->vrf = clib_net_to_host_u32(a->vrf);
    /* a->is_ip4 = a->is_ip4 (no-op) */
    a->port = clib_net_to_host_u16(a->port);
    /* a->proto = a->proto (no-op) */
    a->parent_handle = clib_net_to_host_u64(a->parent_handle);
    /* a->hostname_len = a->hostname_len (no-op) */
}

#endif

#ifndef _vl_api_defined_connect_sock_reply_t_endian
#define _vl_api_defined_connect_sock_reply_t_endian
static inline void vl_api_connect_sock_reply_t_endian (vl_api_connect_sock_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_app_cut_through_registration_add_t_endian
#define _vl_api_defined_app_cut_through_registration_add_t_endian
static inline void vl_api_app_cut_through_registration_add_t_endian (vl_api_app_cut_through_registration_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->evt_q_address = clib_net_to_host_u64(a->evt_q_address);
    a->peer_evt_q_address = clib_net_to_host_u64(a->peer_evt_q_address);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    /* a->n_fds = a->n_fds (no-op) */
    /* a->fd_flags = a->fd_flags (no-op) */
}

#endif

#ifndef _vl_api_defined_app_cut_through_registration_add_reply_t_endian
#define _vl_api_defined_app_cut_through_registration_add_reply_t_endian
static inline void vl_api_app_cut_through_registration_add_reply_t_endian (vl_api_app_cut_through_registration_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_app_worker_add_del_t_endian
#define _vl_api_defined_app_worker_add_del_t_endian
static inline void vl_api_app_worker_add_del_t_endian (vl_api_app_worker_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->app_index = clib_net_to_host_u32(a->app_index);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_app_worker_add_del_reply_t_endian
#define _vl_api_defined_app_worker_add_del_reply_t_endian
static inline void vl_api_app_worker_add_del_reply_t_endian (vl_api_app_worker_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->wrk_index = clib_net_to_host_u32(a->wrk_index);
    a->app_event_queue_address = clib_net_to_host_u64(a->app_event_queue_address);
    /* a->n_fds = a->n_fds (no-op) */
    /* a->fd_flags = a->fd_flags (no-op) */
    /* a->segment_name_length = a->segment_name_length (no-op) */
    a->segment_handle = clib_net_to_host_u64(a->segment_handle);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_session_enable_disable_t_endian
#define _vl_api_defined_session_enable_disable_t_endian
static inline void vl_api_session_enable_disable_t_endian (vl_api_session_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_enable = a->is_enable (no-op) */
}

#endif

#ifndef _vl_api_defined_session_enable_disable_reply_t_endian
#define _vl_api_defined_session_enable_disable_reply_t_endian
static inline void vl_api_session_enable_disable_reply_t_endian (vl_api_session_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_app_namespace_add_del_t_endian
#define _vl_api_defined_app_namespace_add_del_t_endian
static inline void vl_api_app_namespace_add_del_t_endian (vl_api_app_namespace_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->secret = clib_net_to_host_u64(a->secret);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->ip4_fib_id = clib_net_to_host_u32(a->ip4_fib_id);
    a->ip6_fib_id = clib_net_to_host_u32(a->ip6_fib_id);
    /* a->namespace_id_len = a->namespace_id_len (no-op) */
}

#endif

#ifndef _vl_api_defined_app_namespace_add_del_reply_t_endian
#define _vl_api_defined_app_namespace_add_del_reply_t_endian
static inline void vl_api_app_namespace_add_del_reply_t_endian (vl_api_app_namespace_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->appns_index = clib_net_to_host_u32(a->appns_index);
}

#endif

#ifndef _vl_api_defined_session_rule_add_del_t_endian
#define _vl_api_defined_session_rule_add_del_t_endian
static inline void vl_api_session_rule_add_del_t_endian (vl_api_session_rule_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->transport_proto = a->transport_proto (no-op) */
    /* a->is_ip4 = a->is_ip4 (no-op) */
    /* a->lcl_plen = a->lcl_plen (no-op) */
    /* a->rmt_plen = a->rmt_plen (no-op) */
    a->lcl_port = clib_net_to_host_u16(a->lcl_port);
    a->rmt_port = clib_net_to_host_u16(a->rmt_port);
    a->action_index = clib_net_to_host_u32(a->action_index);
    /* a->is_add = a->is_add (no-op) */
    a->appns_index = clib_net_to_host_u32(a->appns_index);
    /* a->scope = a->scope (no-op) */
}

#endif

#ifndef _vl_api_defined_session_rule_add_del_reply_t_endian
#define _vl_api_defined_session_rule_add_del_reply_t_endian
static inline void vl_api_session_rule_add_del_reply_t_endian (vl_api_session_rule_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_session_rules_dump_t_endian
#define _vl_api_defined_session_rules_dump_t_endian
static inline void vl_api_session_rules_dump_t_endian (vl_api_session_rules_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_session_rules_details_t_endian
#define _vl_api_defined_session_rules_details_t_endian
static inline void vl_api_session_rules_details_t_endian (vl_api_session_rules_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->transport_proto = a->transport_proto (no-op) */
    /* a->is_ip4 = a->is_ip4 (no-op) */
    /* a->lcl_plen = a->lcl_plen (no-op) */
    /* a->rmt_plen = a->rmt_plen (no-op) */
    a->lcl_port = clib_net_to_host_u16(a->lcl_port);
    a->rmt_port = clib_net_to_host_u16(a->rmt_port);
    a->action_index = clib_net_to_host_u32(a->action_index);
    a->appns_index = clib_net_to_host_u32(a->appns_index);
    /* a->scope = a->scope (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(session.api, 1, 7, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(session.api, 0x116a172d)

#endif

