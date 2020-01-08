/*
 * VLIB API definitions 2020-01-07 14:25:46
 * Input file: acl.api
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
#warning no content included from acl.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_ACL_PLUGIN_GET_VERSION, vl_api_acl_plugin_get_version_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_GET_VERSION_REPLY, vl_api_acl_plugin_get_version_reply_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_CONTROL_PING, vl_api_acl_plugin_control_ping_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_CONTROL_PING_REPLY, vl_api_acl_plugin_control_ping_reply_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES, vl_api_acl_plugin_get_conn_table_max_entries_t_handler)
vl_msg_id(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES_REPLY, vl_api_acl_plugin_get_conn_table_max_entries_reply_t_handler)
vl_msg_id(VL_API_ACL_ADD_REPLACE, vl_api_acl_add_replace_t_handler)
vl_msg_id(VL_API_ACL_ADD_REPLACE_REPLY, vl_api_acl_add_replace_reply_t_handler)
vl_msg_id(VL_API_ACL_DEL, vl_api_acl_del_t_handler)
vl_msg_id(VL_API_ACL_DEL_REPLY, vl_api_acl_del_reply_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ADD_DEL, vl_api_acl_interface_add_del_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ADD_DEL_REPLY, vl_api_acl_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ACL_LIST, vl_api_acl_interface_set_acl_list_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ACL_LIST_REPLY, vl_api_acl_interface_set_acl_list_reply_t_handler)
vl_msg_id(VL_API_ACL_DUMP, vl_api_acl_dump_t_handler)
vl_msg_id(VL_API_ACL_DETAILS, vl_api_acl_details_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_LIST_DUMP, vl_api_acl_interface_list_dump_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_LIST_DETAILS, vl_api_acl_interface_list_details_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD, vl_api_macip_acl_add_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD_REPLY, vl_api_macip_acl_add_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD_REPLACE, vl_api_macip_acl_add_replace_t_handler)
vl_msg_id(VL_API_MACIP_ACL_ADD_REPLACE_REPLY, vl_api_macip_acl_add_replace_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DEL, vl_api_macip_acl_del_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DEL_REPLY, vl_api_macip_acl_del_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_ADD_DEL, vl_api_macip_acl_interface_add_del_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_ADD_DEL_REPLY, vl_api_macip_acl_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DUMP, vl_api_macip_acl_dump_t_handler)
vl_msg_id(VL_API_MACIP_ACL_DETAILS, vl_api_macip_acl_details_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_GET, vl_api_macip_acl_interface_get_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_GET_REPLY, vl_api_macip_acl_interface_get_reply_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_LIST_DUMP, vl_api_macip_acl_interface_list_dump_t_handler)
vl_msg_id(VL_API_MACIP_ACL_INTERFACE_LIST_DETAILS, vl_api_macip_acl_interface_list_details_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST, vl_api_acl_interface_set_etype_whitelist_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST_REPLY, vl_api_acl_interface_set_etype_whitelist_reply_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DUMP, vl_api_acl_interface_etype_whitelist_dump_t_handler)
vl_msg_id(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DETAILS, vl_api_acl_interface_etype_whitelist_details_t_handler)
vl_msg_id(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE, vl_api_acl_stats_intf_counters_enable_t_handler)
vl_msg_id(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE_REPLY, vl_api_acl_stats_intf_counters_enable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_acl_plugin_get_version_t, 1)
vl_msg_name(vl_api_acl_plugin_get_version_reply_t, 1)
vl_msg_name(vl_api_acl_plugin_control_ping_t, 1)
vl_msg_name(vl_api_acl_plugin_control_ping_reply_t, 1)
vl_msg_name(vl_api_acl_plugin_get_conn_table_max_entries_t, 1)
vl_msg_name(vl_api_acl_plugin_get_conn_table_max_entries_reply_t, 1)
vl_msg_name(vl_api_acl_add_replace_t, 1)
vl_msg_name(vl_api_acl_add_replace_reply_t, 1)
vl_msg_name(vl_api_acl_del_t, 1)
vl_msg_name(vl_api_acl_del_reply_t, 1)
vl_msg_name(vl_api_acl_interface_add_del_t, 1)
vl_msg_name(vl_api_acl_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_acl_interface_set_acl_list_t, 1)
vl_msg_name(vl_api_acl_interface_set_acl_list_reply_t, 1)
vl_msg_name(vl_api_acl_dump_t, 1)
vl_msg_name(vl_api_acl_details_t, 1)
vl_msg_name(vl_api_acl_interface_list_dump_t, 1)
vl_msg_name(vl_api_acl_interface_list_details_t, 1)
vl_msg_name(vl_api_macip_acl_add_t, 1)
vl_msg_name(vl_api_macip_acl_add_reply_t, 1)
vl_msg_name(vl_api_macip_acl_add_replace_t, 1)
vl_msg_name(vl_api_macip_acl_add_replace_reply_t, 1)
vl_msg_name(vl_api_macip_acl_del_t, 1)
vl_msg_name(vl_api_macip_acl_del_reply_t, 1)
vl_msg_name(vl_api_macip_acl_interface_add_del_t, 1)
vl_msg_name(vl_api_macip_acl_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_macip_acl_dump_t, 1)
vl_msg_name(vl_api_macip_acl_details_t, 1)
vl_msg_name(vl_api_macip_acl_interface_get_t, 1)
vl_msg_name(vl_api_macip_acl_interface_get_reply_t, 1)
vl_msg_name(vl_api_macip_acl_interface_list_dump_t, 1)
vl_msg_name(vl_api_macip_acl_interface_list_details_t, 1)
vl_msg_name(vl_api_acl_interface_set_etype_whitelist_t, 1)
vl_msg_name(vl_api_acl_interface_set_etype_whitelist_reply_t, 1)
vl_msg_name(vl_api_acl_interface_etype_whitelist_dump_t, 1)
vl_msg_name(vl_api_acl_interface_etype_whitelist_details_t, 1)
vl_msg_name(vl_api_acl_stats_intf_counters_enable_t, 1)
vl_msg_name(vl_api_acl_stats_intf_counters_enable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_acl \
_(VL_API_ACL_PLUGIN_GET_VERSION, acl_plugin_get_version, 51077d14) \
_(VL_API_ACL_PLUGIN_GET_VERSION_REPLY, acl_plugin_get_version_reply, 9b32cf86) \
_(VL_API_ACL_PLUGIN_CONTROL_PING, acl_plugin_control_ping, 51077d14) \
_(VL_API_ACL_PLUGIN_CONTROL_PING_REPLY, acl_plugin_control_ping_reply, f6b0b8ca) \
_(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES, acl_plugin_get_conn_table_max_entries, 51077d14) \
_(VL_API_ACL_PLUGIN_GET_CONN_TABLE_MAX_ENTRIES_REPLY, acl_plugin_get_conn_table_max_entries_reply, 7a096d3d) \
_(VL_API_ACL_ADD_REPLACE, acl_add_replace, 13bc8539) \
_(VL_API_ACL_ADD_REPLACE_REPLY, acl_add_replace_reply, ac407b0c) \
_(VL_API_ACL_DEL, acl_del, ef34fea4) \
_(VL_API_ACL_DEL_REPLY, acl_del_reply, e8d4e804) \
_(VL_API_ACL_INTERFACE_ADD_DEL, acl_interface_add_del, 0b2aedd1) \
_(VL_API_ACL_INTERFACE_ADD_DEL_REPLY, acl_interface_add_del_reply, e8d4e804) \
_(VL_API_ACL_INTERFACE_SET_ACL_LIST, acl_interface_set_acl_list, 8baece38) \
_(VL_API_ACL_INTERFACE_SET_ACL_LIST_REPLY, acl_interface_set_acl_list_reply, e8d4e804) \
_(VL_API_ACL_DUMP, acl_dump, ef34fea4) \
_(VL_API_ACL_DETAILS, acl_details, f89d7a88) \
_(VL_API_ACL_INTERFACE_LIST_DUMP, acl_interface_list_dump, 529cb13f) \
_(VL_API_ACL_INTERFACE_LIST_DETAILS, acl_interface_list_details, d5e80809) \
_(VL_API_MACIP_ACL_ADD, macip_acl_add, 0c680ca5) \
_(VL_API_MACIP_ACL_ADD_REPLY, macip_acl_add_reply, ac407b0c) \
_(VL_API_MACIP_ACL_ADD_REPLACE, macip_acl_add_replace, d3d313e7) \
_(VL_API_MACIP_ACL_ADD_REPLACE_REPLY, macip_acl_add_replace_reply, ac407b0c) \
_(VL_API_MACIP_ACL_DEL, macip_acl_del, ef34fea4) \
_(VL_API_MACIP_ACL_DEL_REPLY, macip_acl_del_reply, e8d4e804) \
_(VL_API_MACIP_ACL_INTERFACE_ADD_DEL, macip_acl_interface_add_del, 6a6be97c) \
_(VL_API_MACIP_ACL_INTERFACE_ADD_DEL_REPLY, macip_acl_interface_add_del_reply, e8d4e804) \
_(VL_API_MACIP_ACL_DUMP, macip_acl_dump, ef34fea4) \
_(VL_API_MACIP_ACL_DETAILS, macip_acl_details, e164e69a) \
_(VL_API_MACIP_ACL_INTERFACE_GET, macip_acl_interface_get, 51077d14) \
_(VL_API_MACIP_ACL_INTERFACE_GET_REPLY, macip_acl_interface_get_reply, accf9b05) \
_(VL_API_MACIP_ACL_INTERFACE_LIST_DUMP, macip_acl_interface_list_dump, 529cb13f) \
_(VL_API_MACIP_ACL_INTERFACE_LIST_DETAILS, macip_acl_interface_list_details, 29783fa0) \
_(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST, acl_interface_set_etype_whitelist, f515efc5) \
_(VL_API_ACL_INTERFACE_SET_ETYPE_WHITELIST_REPLY, acl_interface_set_etype_whitelist_reply, e8d4e804) \
_(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DUMP, acl_interface_etype_whitelist_dump, 529cb13f) \
_(VL_API_ACL_INTERFACE_ETYPE_WHITELIST_DETAILS, acl_interface_etype_whitelist_details, 6a5d4e81) \
_(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE, acl_stats_intf_counters_enable, b3e225d2) \
_(VL_API_ACL_STATS_INTF_COUNTERS_ENABLE_REPLY, acl_stats_intf_counters_enable_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_acl_api
#define included_acl_api
#ifndef _vl_api_defined_acl_rule
#define _vl_api_defined_acl_rule
typedef VL_API_PACKED(struct _vl_api_acl_rule {
    u8 is_permit;
    u8 is_ipv6;
    u8 src_ip_addr[16];
    u8 src_ip_prefix_len;
    u8 dst_ip_addr[16];
    u8 dst_ip_prefix_len;
    u8 proto;
    u16 srcport_or_icmptype_first;
    u16 srcport_or_icmptype_last;
    u16 dstport_or_icmpcode_first;
    u16 dstport_or_icmpcode_last;
    u8 tcp_flags_mask;
    u8 tcp_flags_value;
}) vl_api_acl_rule_t;
#endif

#ifndef _vl_api_defined_macip_acl_rule
#define _vl_api_defined_macip_acl_rule
typedef VL_API_PACKED(struct _vl_api_macip_acl_rule {
    u8 is_permit;
    u8 is_ipv6;
    u8 src_mac[6];
    u8 src_mac_mask[6];
    u8 src_ip_addr[16];
    u8 src_ip_prefix_len;
}) vl_api_macip_acl_rule_t;
#endif

#ifndef _vl_api_defined_acl_plugin_get_version
#define _vl_api_defined_acl_plugin_get_version
typedef VL_API_PACKED(struct _vl_api_acl_plugin_get_version {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_acl_plugin_get_version_t;
#endif

#ifndef _vl_api_defined_acl_plugin_get_version_reply
#define _vl_api_defined_acl_plugin_get_version_reply
typedef VL_API_PACKED(struct _vl_api_acl_plugin_get_version_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 major;
    u32 minor;
}) vl_api_acl_plugin_get_version_reply_t;
#endif

#ifndef _vl_api_defined_acl_plugin_control_ping
#define _vl_api_defined_acl_plugin_control_ping
typedef VL_API_PACKED(struct _vl_api_acl_plugin_control_ping {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_acl_plugin_control_ping_t;
#endif

#ifndef _vl_api_defined_acl_plugin_control_ping_reply
#define _vl_api_defined_acl_plugin_control_ping_reply
typedef VL_API_PACKED(struct _vl_api_acl_plugin_control_ping_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 client_index;
    u32 vpe_pid;
}) vl_api_acl_plugin_control_ping_reply_t;
#endif

#ifndef _vl_api_defined_acl_plugin_get_conn_table_max_entries
#define _vl_api_defined_acl_plugin_get_conn_table_max_entries
typedef VL_API_PACKED(struct _vl_api_acl_plugin_get_conn_table_max_entries {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_acl_plugin_get_conn_table_max_entries_t;
#endif

#ifndef _vl_api_defined_acl_plugin_get_conn_table_max_entries_reply
#define _vl_api_defined_acl_plugin_get_conn_table_max_entries_reply
typedef VL_API_PACKED(struct _vl_api_acl_plugin_get_conn_table_max_entries_reply {
    u16 _vl_msg_id;
    u32 context;
    u64 conn_table_max_entries;
}) vl_api_acl_plugin_get_conn_table_max_entries_reply_t;
#endif

#ifndef _vl_api_defined_acl_add_replace
#define _vl_api_defined_acl_add_replace
typedef VL_API_PACKED(struct _vl_api_acl_add_replace {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 acl_index;
    u8 tag[64];
    u32 count;
    vl_api_acl_rule_t r[0];
}) vl_api_acl_add_replace_t;
#endif

#ifndef _vl_api_defined_acl_add_replace_reply
#define _vl_api_defined_acl_add_replace_reply
typedef VL_API_PACKED(struct _vl_api_acl_add_replace_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 acl_index;
    i32 retval;
}) vl_api_acl_add_replace_reply_t;
#endif

#ifndef _vl_api_defined_acl_del
#define _vl_api_defined_acl_del
typedef VL_API_PACKED(struct _vl_api_acl_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 acl_index;
}) vl_api_acl_del_t;
#endif

#ifndef _vl_api_defined_acl_del_reply
#define _vl_api_defined_acl_del_reply
typedef VL_API_PACKED(struct _vl_api_acl_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_acl_del_reply_t;
#endif

#ifndef _vl_api_defined_acl_interface_add_del
#define _vl_api_defined_acl_interface_add_del
typedef VL_API_PACKED(struct _vl_api_acl_interface_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_input;
    u32 sw_if_index;
    u32 acl_index;
}) vl_api_acl_interface_add_del_t;
#endif

#ifndef _vl_api_defined_acl_interface_add_del_reply
#define _vl_api_defined_acl_interface_add_del_reply
typedef VL_API_PACKED(struct _vl_api_acl_interface_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_acl_interface_add_del_reply_t;
#endif

#ifndef _vl_api_defined_acl_interface_set_acl_list
#define _vl_api_defined_acl_interface_set_acl_list
typedef VL_API_PACKED(struct _vl_api_acl_interface_set_acl_list {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 count;
    u8 n_input;
    u32 acls[0];
}) vl_api_acl_interface_set_acl_list_t;
#endif

#ifndef _vl_api_defined_acl_interface_set_acl_list_reply
#define _vl_api_defined_acl_interface_set_acl_list_reply
typedef VL_API_PACKED(struct _vl_api_acl_interface_set_acl_list_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_acl_interface_set_acl_list_reply_t;
#endif

#ifndef _vl_api_defined_acl_dump
#define _vl_api_defined_acl_dump
typedef VL_API_PACKED(struct _vl_api_acl_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 acl_index;
}) vl_api_acl_dump_t;
#endif

#ifndef _vl_api_defined_acl_details
#define _vl_api_defined_acl_details
typedef VL_API_PACKED(struct _vl_api_acl_details {
    u16 _vl_msg_id;
    u32 context;
    u32 acl_index;
    u8 tag[64];
    u32 count;
    vl_api_acl_rule_t r[0];
}) vl_api_acl_details_t;
#endif

#ifndef _vl_api_defined_acl_interface_list_dump
#define _vl_api_defined_acl_interface_list_dump
typedef VL_API_PACKED(struct _vl_api_acl_interface_list_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_acl_interface_list_dump_t;
#endif

#ifndef _vl_api_defined_acl_interface_list_details
#define _vl_api_defined_acl_interface_list_details
typedef VL_API_PACKED(struct _vl_api_acl_interface_list_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 count;
    u8 n_input;
    u32 acls[0];
}) vl_api_acl_interface_list_details_t;
#endif

#ifndef _vl_api_defined_macip_acl_add
#define _vl_api_defined_macip_acl_add
typedef VL_API_PACKED(struct _vl_api_macip_acl_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 tag[64];
    u32 count;
    vl_api_macip_acl_rule_t r[0];
}) vl_api_macip_acl_add_t;
#endif

#ifndef _vl_api_defined_macip_acl_add_reply
#define _vl_api_defined_macip_acl_add_reply
typedef VL_API_PACKED(struct _vl_api_macip_acl_add_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 acl_index;
    i32 retval;
}) vl_api_macip_acl_add_reply_t;
#endif

#ifndef _vl_api_defined_macip_acl_add_replace
#define _vl_api_defined_macip_acl_add_replace
typedef VL_API_PACKED(struct _vl_api_macip_acl_add_replace {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 acl_index;
    u8 tag[64];
    u32 count;
    vl_api_macip_acl_rule_t r[0];
}) vl_api_macip_acl_add_replace_t;
#endif

#ifndef _vl_api_defined_macip_acl_add_replace_reply
#define _vl_api_defined_macip_acl_add_replace_reply
typedef VL_API_PACKED(struct _vl_api_macip_acl_add_replace_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 acl_index;
    i32 retval;
}) vl_api_macip_acl_add_replace_reply_t;
#endif

#ifndef _vl_api_defined_macip_acl_del
#define _vl_api_defined_macip_acl_del
typedef VL_API_PACKED(struct _vl_api_macip_acl_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 acl_index;
}) vl_api_macip_acl_del_t;
#endif

#ifndef _vl_api_defined_macip_acl_del_reply
#define _vl_api_defined_macip_acl_del_reply
typedef VL_API_PACKED(struct _vl_api_macip_acl_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_macip_acl_del_reply_t;
#endif

#ifndef _vl_api_defined_macip_acl_interface_add_del
#define _vl_api_defined_macip_acl_interface_add_del
typedef VL_API_PACKED(struct _vl_api_macip_acl_interface_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 sw_if_index;
    u32 acl_index;
}) vl_api_macip_acl_interface_add_del_t;
#endif

#ifndef _vl_api_defined_macip_acl_interface_add_del_reply
#define _vl_api_defined_macip_acl_interface_add_del_reply
typedef VL_API_PACKED(struct _vl_api_macip_acl_interface_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_macip_acl_interface_add_del_reply_t;
#endif

#ifndef _vl_api_defined_macip_acl_dump
#define _vl_api_defined_macip_acl_dump
typedef VL_API_PACKED(struct _vl_api_macip_acl_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 acl_index;
}) vl_api_macip_acl_dump_t;
#endif

#ifndef _vl_api_defined_macip_acl_details
#define _vl_api_defined_macip_acl_details
typedef VL_API_PACKED(struct _vl_api_macip_acl_details {
    u16 _vl_msg_id;
    u32 context;
    u32 acl_index;
    u8 tag[64];
    u32 count;
    vl_api_macip_acl_rule_t r[0];
}) vl_api_macip_acl_details_t;
#endif

#ifndef _vl_api_defined_macip_acl_interface_get
#define _vl_api_defined_macip_acl_interface_get
typedef VL_API_PACKED(struct _vl_api_macip_acl_interface_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_macip_acl_interface_get_t;
#endif

#ifndef _vl_api_defined_macip_acl_interface_get_reply
#define _vl_api_defined_macip_acl_interface_get_reply
typedef VL_API_PACKED(struct _vl_api_macip_acl_interface_get_reply {
    u16 _vl_msg_id;
    u32 context;
    u32 count;
    u32 acls[0];
}) vl_api_macip_acl_interface_get_reply_t;
#endif

#ifndef _vl_api_defined_macip_acl_interface_list_dump
#define _vl_api_defined_macip_acl_interface_list_dump
typedef VL_API_PACKED(struct _vl_api_macip_acl_interface_list_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_macip_acl_interface_list_dump_t;
#endif

#ifndef _vl_api_defined_macip_acl_interface_list_details
#define _vl_api_defined_macip_acl_interface_list_details
typedef VL_API_PACKED(struct _vl_api_macip_acl_interface_list_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 count;
    u32 acls[0];
}) vl_api_macip_acl_interface_list_details_t;
#endif

#ifndef _vl_api_defined_acl_interface_set_etype_whitelist
#define _vl_api_defined_acl_interface_set_etype_whitelist
typedef VL_API_PACKED(struct _vl_api_acl_interface_set_etype_whitelist {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u8 count;
    u8 n_input;
    u16 whitelist[0];
}) vl_api_acl_interface_set_etype_whitelist_t;
#endif

#ifndef _vl_api_defined_acl_interface_set_etype_whitelist_reply
#define _vl_api_defined_acl_interface_set_etype_whitelist_reply
typedef VL_API_PACKED(struct _vl_api_acl_interface_set_etype_whitelist_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_acl_interface_set_etype_whitelist_reply_t;
#endif

#ifndef _vl_api_defined_acl_interface_etype_whitelist_dump
#define _vl_api_defined_acl_interface_etype_whitelist_dump
typedef VL_API_PACKED(struct _vl_api_acl_interface_etype_whitelist_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_acl_interface_etype_whitelist_dump_t;
#endif

#ifndef _vl_api_defined_acl_interface_etype_whitelist_details
#define _vl_api_defined_acl_interface_etype_whitelist_details
typedef VL_API_PACKED(struct _vl_api_acl_interface_etype_whitelist_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u8 count;
    u8 n_input;
    u16 whitelist[0];
}) vl_api_acl_interface_etype_whitelist_details_t;
#endif

#ifndef _vl_api_defined_acl_stats_intf_counters_enable
#define _vl_api_defined_acl_stats_intf_counters_enable
typedef VL_API_PACKED(struct _vl_api_acl_stats_intf_counters_enable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    bool enable;
}) vl_api_acl_stats_intf_counters_enable_t;
#endif

#ifndef _vl_api_defined_acl_stats_intf_counters_enable_reply
#define _vl_api_defined_acl_stats_intf_counters_enable_reply
typedef VL_API_PACKED(struct _vl_api_acl_stats_intf_counters_enable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_acl_stats_intf_counters_enable_reply_t;
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

/***** manual: vl_api_acl_rule_t_print  *****/

/***** manual: vl_api_macip_acl_rule_t_print  *****/

#ifndef _vl_api_defined_acl_plugin_get_version_t_print
#define _vl_api_defined_acl_plugin_get_version_t_print
static inline void *vl_api_acl_plugin_get_version_t_print (vl_api_acl_plugin_get_version_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_plugin_get_version_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_plugin_get_version_reply_t_print
#define _vl_api_defined_acl_plugin_get_version_reply_t_print
static inline void *vl_api_acl_plugin_get_version_reply_t_print (vl_api_acl_plugin_get_version_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_plugin_get_version_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "major: %u\n", a->major);
    vl_print(handle, "minor: %u\n", a->minor);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_plugin_control_ping_t_print
#define _vl_api_defined_acl_plugin_control_ping_t_print
static inline void *vl_api_acl_plugin_control_ping_t_print (vl_api_acl_plugin_control_ping_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_plugin_control_ping_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_plugin_control_ping_reply_t_print
#define _vl_api_defined_acl_plugin_control_ping_reply_t_print
static inline void *vl_api_acl_plugin_control_ping_reply_t_print (vl_api_acl_plugin_control_ping_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_plugin_control_ping_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "vpe_pid: %u\n", a->vpe_pid);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_plugin_get_conn_table_max_entries_t_print
#define _vl_api_defined_acl_plugin_get_conn_table_max_entries_t_print
static inline void *vl_api_acl_plugin_get_conn_table_max_entries_t_print (vl_api_acl_plugin_get_conn_table_max_entries_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_plugin_get_conn_table_max_entries_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_plugin_get_conn_table_max_entries_reply_t_print
#define _vl_api_defined_acl_plugin_get_conn_table_max_entries_reply_t_print
static inline void *vl_api_acl_plugin_get_conn_table_max_entries_reply_t_print (vl_api_acl_plugin_get_conn_table_max_entries_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_plugin_get_conn_table_max_entries_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "conn_table_max_entries: %llu\n", a->conn_table_max_entries);
    return handle;
}

#endif

/***** manual: vl_api_acl_add_replace_t_print  *****/

#ifndef _vl_api_defined_acl_add_replace_reply_t_print
#define _vl_api_defined_acl_add_replace_reply_t_print
static inline void *vl_api_acl_add_replace_reply_t_print (vl_api_acl_add_replace_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_add_replace_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "acl_index: %u\n", a->acl_index);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_acl_del_t_print  *****/

#ifndef _vl_api_defined_acl_del_reply_t_print
#define _vl_api_defined_acl_del_reply_t_print
static inline void *vl_api_acl_del_reply_t_print (vl_api_acl_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_acl_interface_add_del_t_print  *****/

#ifndef _vl_api_defined_acl_interface_add_del_reply_t_print
#define _vl_api_defined_acl_interface_add_del_reply_t_print
static inline void *vl_api_acl_interface_add_del_reply_t_print (vl_api_acl_interface_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_interface_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_acl_interface_set_acl_list_t_print  *****/

#ifndef _vl_api_defined_acl_interface_set_acl_list_reply_t_print
#define _vl_api_defined_acl_interface_set_acl_list_reply_t_print
static inline void *vl_api_acl_interface_set_acl_list_reply_t_print (vl_api_acl_interface_set_acl_list_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_interface_set_acl_list_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_dump_t_print
#define _vl_api_defined_acl_dump_t_print
static inline void *vl_api_acl_dump_t_print (vl_api_acl_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "acl_index: %u\n", a->acl_index);
    return handle;
}

#endif

/***** manual: vl_api_acl_details_t_print  *****/

#ifndef _vl_api_defined_acl_interface_list_dump_t_print
#define _vl_api_defined_acl_interface_list_dump_t_print
static inline void *vl_api_acl_interface_list_dump_t_print (vl_api_acl_interface_list_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_interface_list_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_interface_list_details_t_print
#define _vl_api_defined_acl_interface_list_details_t_print
static inline void *vl_api_acl_interface_list_details_t_print (vl_api_acl_interface_list_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_interface_list_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "count: %u\n", a->count);
    vl_print(handle, "n_input: %u\n", a->n_input);
    return handle;
}

#endif

/***** manual: vl_api_macip_acl_add_t_print  *****/

#ifndef _vl_api_defined_macip_acl_add_reply_t_print
#define _vl_api_defined_macip_acl_add_reply_t_print
static inline void *vl_api_macip_acl_add_reply_t_print (vl_api_macip_acl_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "acl_index: %u\n", a->acl_index);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_macip_acl_add_replace_t_print  *****/

#ifndef _vl_api_defined_macip_acl_add_replace_reply_t_print
#define _vl_api_defined_macip_acl_add_replace_reply_t_print
static inline void *vl_api_macip_acl_add_replace_reply_t_print (vl_api_macip_acl_add_replace_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_add_replace_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "acl_index: %u\n", a->acl_index);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_macip_acl_del_t_print  *****/

#ifndef _vl_api_defined_macip_acl_del_reply_t_print
#define _vl_api_defined_macip_acl_del_reply_t_print
static inline void *vl_api_macip_acl_del_reply_t_print (vl_api_macip_acl_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

/***** manual: vl_api_macip_acl_interface_add_del_t_print  *****/

#ifndef _vl_api_defined_macip_acl_interface_add_del_reply_t_print
#define _vl_api_defined_macip_acl_interface_add_del_reply_t_print
static inline void *vl_api_macip_acl_interface_add_del_reply_t_print (vl_api_macip_acl_interface_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_interface_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_macip_acl_dump_t_print
#define _vl_api_defined_macip_acl_dump_t_print
static inline void *vl_api_macip_acl_dump_t_print (vl_api_macip_acl_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "acl_index: %u\n", a->acl_index);
    return handle;
}

#endif

/***** manual: vl_api_macip_acl_details_t_print  *****/

#ifndef _vl_api_defined_macip_acl_interface_get_t_print
#define _vl_api_defined_macip_acl_interface_get_t_print
static inline void *vl_api_macip_acl_interface_get_t_print (vl_api_macip_acl_interface_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_interface_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_get_reply_t_print
#define _vl_api_defined_macip_acl_interface_get_reply_t_print
static inline void *vl_api_macip_acl_interface_get_reply_t_print (vl_api_macip_acl_interface_get_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_interface_get_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_list_dump_t_print
#define _vl_api_defined_macip_acl_interface_list_dump_t_print
static inline void *vl_api_macip_acl_interface_list_dump_t_print (vl_api_macip_acl_interface_list_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_interface_list_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_list_details_t_print
#define _vl_api_defined_macip_acl_interface_list_details_t_print
static inline void *vl_api_macip_acl_interface_list_details_t_print (vl_api_macip_acl_interface_list_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_macip_acl_interface_list_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

/***** manual: vl_api_acl_interface_set_etype_whitelist_t_print  *****/

#ifndef _vl_api_defined_acl_interface_set_etype_whitelist_reply_t_print
#define _vl_api_defined_acl_interface_set_etype_whitelist_reply_t_print
static inline void *vl_api_acl_interface_set_etype_whitelist_reply_t_print (vl_api_acl_interface_set_etype_whitelist_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_interface_set_etype_whitelist_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_interface_etype_whitelist_dump_t_print
#define _vl_api_defined_acl_interface_etype_whitelist_dump_t_print
static inline void *vl_api_acl_interface_etype_whitelist_dump_t_print (vl_api_acl_interface_etype_whitelist_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_interface_etype_whitelist_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_interface_etype_whitelist_details_t_print
#define _vl_api_defined_acl_interface_etype_whitelist_details_t_print
static inline void *vl_api_acl_interface_etype_whitelist_details_t_print (vl_api_acl_interface_etype_whitelist_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_interface_etype_whitelist_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "count: %u\n", a->count);
    vl_print(handle, "n_input: %u\n", a->n_input);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_stats_intf_counters_enable_t_print
#define _vl_api_defined_acl_stats_intf_counters_enable_t_print
static inline void *vl_api_acl_stats_intf_counters_enable_t_print (vl_api_acl_stats_intf_counters_enable_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_stats_intf_counters_enable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_acl_stats_intf_counters_enable_reply_t_print
#define _vl_api_defined_acl_stats_intf_counters_enable_reply_t_print
static inline void *vl_api_acl_stats_intf_counters_enable_reply_t_print (vl_api_acl_stats_intf_counters_enable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_acl_stats_intf_counters_enable_reply_t:\n");
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

#ifndef _vl_api_defined_acl_rule_t_endian
#define _vl_api_defined_acl_rule_t_endian
static inline void vl_api_acl_rule_t_endian (vl_api_acl_rule_t *a)
{
    /* a->is_permit = a->is_permit (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->src_ip_prefix_len = a->src_ip_prefix_len (no-op) */
    /* a->dst_ip_prefix_len = a->dst_ip_prefix_len (no-op) */
    /* a->proto = a->proto (no-op) */
    a->srcport_or_icmptype_first = clib_net_to_host_u16(a->srcport_or_icmptype_first);
    a->srcport_or_icmptype_last = clib_net_to_host_u16(a->srcport_or_icmptype_last);
    a->dstport_or_icmpcode_first = clib_net_to_host_u16(a->dstport_or_icmpcode_first);
    a->dstport_or_icmpcode_last = clib_net_to_host_u16(a->dstport_or_icmpcode_last);
    /* a->tcp_flags_mask = a->tcp_flags_mask (no-op) */
    /* a->tcp_flags_value = a->tcp_flags_value (no-op) */
}

#endif

#ifndef _vl_api_defined_macip_acl_rule_t_endian
#define _vl_api_defined_macip_acl_rule_t_endian
static inline void vl_api_macip_acl_rule_t_endian (vl_api_macip_acl_rule_t *a)
{
    /* a->is_permit = a->is_permit (no-op) */
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    /* a->src_ip_prefix_len = a->src_ip_prefix_len (no-op) */
}

#endif

#ifndef _vl_api_defined_acl_plugin_get_version_t_endian
#define _vl_api_defined_acl_plugin_get_version_t_endian
static inline void vl_api_acl_plugin_get_version_t_endian (vl_api_acl_plugin_get_version_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_acl_plugin_get_version_reply_t_endian
#define _vl_api_defined_acl_plugin_get_version_reply_t_endian
static inline void vl_api_acl_plugin_get_version_reply_t_endian (vl_api_acl_plugin_get_version_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->major = clib_net_to_host_u32(a->major);
    a->minor = clib_net_to_host_u32(a->minor);
}

#endif

#ifndef _vl_api_defined_acl_plugin_control_ping_t_endian
#define _vl_api_defined_acl_plugin_control_ping_t_endian
static inline void vl_api_acl_plugin_control_ping_t_endian (vl_api_acl_plugin_control_ping_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_acl_plugin_control_ping_reply_t_endian
#define _vl_api_defined_acl_plugin_control_ping_reply_t_endian
static inline void vl_api_acl_plugin_control_ping_reply_t_endian (vl_api_acl_plugin_control_ping_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->vpe_pid = clib_net_to_host_u32(a->vpe_pid);
}

#endif

#ifndef _vl_api_defined_acl_plugin_get_conn_table_max_entries_t_endian
#define _vl_api_defined_acl_plugin_get_conn_table_max_entries_t_endian
static inline void vl_api_acl_plugin_get_conn_table_max_entries_t_endian (vl_api_acl_plugin_get_conn_table_max_entries_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_acl_plugin_get_conn_table_max_entries_reply_t_endian
#define _vl_api_defined_acl_plugin_get_conn_table_max_entries_reply_t_endian
static inline void vl_api_acl_plugin_get_conn_table_max_entries_reply_t_endian (vl_api_acl_plugin_get_conn_table_max_entries_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->conn_table_max_entries = clib_net_to_host_u64(a->conn_table_max_entries);
}

#endif

/***** manual: vl_api_acl_add_replace_t_endian  *****/

#ifndef _vl_api_defined_acl_add_replace_reply_t_endian
#define _vl_api_defined_acl_add_replace_reply_t_endian
static inline void vl_api_acl_add_replace_reply_t_endian (vl_api_acl_add_replace_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_acl_del_t_endian
#define _vl_api_defined_acl_del_t_endian
static inline void vl_api_acl_del_t_endian (vl_api_acl_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

#endif

#ifndef _vl_api_defined_acl_del_reply_t_endian
#define _vl_api_defined_acl_del_reply_t_endian
static inline void vl_api_acl_del_reply_t_endian (vl_api_acl_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_acl_interface_add_del_t_endian
#define _vl_api_defined_acl_interface_add_del_t_endian
static inline void vl_api_acl_interface_add_del_t_endian (vl_api_acl_interface_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_input = a->is_input (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

#endif

#ifndef _vl_api_defined_acl_interface_add_del_reply_t_endian
#define _vl_api_defined_acl_interface_add_del_reply_t_endian
static inline void vl_api_acl_interface_add_del_reply_t_endian (vl_api_acl_interface_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_acl_interface_set_acl_list_t_endian
#define _vl_api_defined_acl_interface_set_acl_list_t_endian
static inline void vl_api_acl_interface_set_acl_list_t_endian (vl_api_acl_interface_set_acl_list_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
}

#endif

#ifndef _vl_api_defined_acl_interface_set_acl_list_reply_t_endian
#define _vl_api_defined_acl_interface_set_acl_list_reply_t_endian
static inline void vl_api_acl_interface_set_acl_list_reply_t_endian (vl_api_acl_interface_set_acl_list_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_acl_dump_t_endian
#define _vl_api_defined_acl_dump_t_endian
static inline void vl_api_acl_dump_t_endian (vl_api_acl_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

#endif

/***** manual: vl_api_acl_details_t_endian  *****/

#ifndef _vl_api_defined_acl_interface_list_dump_t_endian
#define _vl_api_defined_acl_interface_list_dump_t_endian
static inline void vl_api_acl_interface_list_dump_t_endian (vl_api_acl_interface_list_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_acl_interface_list_details_t_endian
#define _vl_api_defined_acl_interface_list_details_t_endian
static inline void vl_api_acl_interface_list_details_t_endian (vl_api_acl_interface_list_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
}

#endif

/***** manual: vl_api_macip_acl_add_t_endian  *****/

#ifndef _vl_api_defined_macip_acl_add_reply_t_endian
#define _vl_api_defined_macip_acl_add_reply_t_endian
static inline void vl_api_macip_acl_add_reply_t_endian (vl_api_macip_acl_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

/***** manual: vl_api_macip_acl_add_replace_t_endian  *****/

#ifndef _vl_api_defined_macip_acl_add_replace_reply_t_endian
#define _vl_api_defined_macip_acl_add_replace_reply_t_endian
static inline void vl_api_macip_acl_add_replace_reply_t_endian (vl_api_macip_acl_add_replace_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_macip_acl_del_t_endian
#define _vl_api_defined_macip_acl_del_t_endian
static inline void vl_api_macip_acl_del_t_endian (vl_api_macip_acl_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

#endif

#ifndef _vl_api_defined_macip_acl_del_reply_t_endian
#define _vl_api_defined_macip_acl_del_reply_t_endian
static inline void vl_api_macip_acl_del_reply_t_endian (vl_api_macip_acl_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_add_del_t_endian
#define _vl_api_defined_macip_acl_interface_add_del_t_endian
static inline void vl_api_macip_acl_interface_add_del_t_endian (vl_api_macip_acl_interface_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_add_del_reply_t_endian
#define _vl_api_defined_macip_acl_interface_add_del_reply_t_endian
static inline void vl_api_macip_acl_interface_add_del_reply_t_endian (vl_api_macip_acl_interface_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_macip_acl_dump_t_endian
#define _vl_api_defined_macip_acl_dump_t_endian
static inline void vl_api_macip_acl_dump_t_endian (vl_api_macip_acl_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->acl_index = clib_net_to_host_u32(a->acl_index);
}

#endif

/***** manual: vl_api_macip_acl_details_t_endian  *****/

#ifndef _vl_api_defined_macip_acl_interface_get_t_endian
#define _vl_api_defined_macip_acl_interface_get_t_endian
static inline void vl_api_macip_acl_interface_get_t_endian (vl_api_macip_acl_interface_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_get_reply_t_endian
#define _vl_api_defined_macip_acl_interface_get_reply_t_endian
static inline void vl_api_macip_acl_interface_get_reply_t_endian (vl_api_macip_acl_interface_get_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->count = clib_net_to_host_u32(a->count);
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_list_dump_t_endian
#define _vl_api_defined_macip_acl_interface_list_dump_t_endian
static inline void vl_api_macip_acl_interface_list_dump_t_endian (vl_api_macip_acl_interface_list_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_macip_acl_interface_list_details_t_endian
#define _vl_api_defined_macip_acl_interface_list_details_t_endian
static inline void vl_api_macip_acl_interface_list_details_t_endian (vl_api_macip_acl_interface_list_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->count = a->count (no-op) */
}

#endif

#ifndef _vl_api_defined_acl_interface_set_etype_whitelist_t_endian
#define _vl_api_defined_acl_interface_set_etype_whitelist_t_endian
static inline void vl_api_acl_interface_set_etype_whitelist_t_endian (vl_api_acl_interface_set_etype_whitelist_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
}

#endif

#ifndef _vl_api_defined_acl_interface_set_etype_whitelist_reply_t_endian
#define _vl_api_defined_acl_interface_set_etype_whitelist_reply_t_endian
static inline void vl_api_acl_interface_set_etype_whitelist_reply_t_endian (vl_api_acl_interface_set_etype_whitelist_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_acl_interface_etype_whitelist_dump_t_endian
#define _vl_api_defined_acl_interface_etype_whitelist_dump_t_endian
static inline void vl_api_acl_interface_etype_whitelist_dump_t_endian (vl_api_acl_interface_etype_whitelist_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_acl_interface_etype_whitelist_details_t_endian
#define _vl_api_defined_acl_interface_etype_whitelist_details_t_endian
static inline void vl_api_acl_interface_etype_whitelist_details_t_endian (vl_api_acl_interface_etype_whitelist_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->count = a->count (no-op) */
    /* a->n_input = a->n_input (no-op) */
}

#endif

#ifndef _vl_api_defined_acl_stats_intf_counters_enable_t_endian
#define _vl_api_defined_acl_stats_intf_counters_enable_t_endian
static inline void vl_api_acl_stats_intf_counters_enable_t_endian (vl_api_acl_stats_intf_counters_enable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_acl_stats_intf_counters_enable_reply_t_endian
#define _vl_api_defined_acl_stats_intf_counters_enable_reply_t_endian
static inline void vl_api_acl_stats_intf_counters_enable_reply_t_endian (vl_api_acl_stats_intf_counters_enable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(acl.api, 1, 0, 1)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(acl.api, 0xedb7b898)

#endif

