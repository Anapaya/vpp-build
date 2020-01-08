/*
 * VLIB API definitions 2020-01-07 14:25:06
 * Input file: classify.api
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
#warning no content included from classify.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_TABLE, vl_api_classify_add_del_table_t_handler)
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_TABLE_REPLY, vl_api_classify_add_del_table_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_SESSION, vl_api_classify_add_del_session_t_handler)
vl_msg_id(VL_API_CLASSIFY_ADD_DEL_SESSION_REPLY, vl_api_classify_add_del_session_reply_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_SET_INTERFACE, vl_api_policer_classify_set_interface_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_SET_INTERFACE_REPLY, vl_api_policer_classify_set_interface_reply_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_DUMP, vl_api_policer_classify_dump_t_handler)
vl_msg_id(VL_API_POLICER_CLASSIFY_DETAILS, vl_api_policer_classify_details_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_IDS, vl_api_classify_table_ids_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_IDS_REPLY, vl_api_classify_table_ids_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_BY_INTERFACE, vl_api_classify_table_by_interface_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_BY_INTERFACE_REPLY, vl_api_classify_table_by_interface_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_INFO, vl_api_classify_table_info_t_handler)
vl_msg_id(VL_API_CLASSIFY_TABLE_INFO_REPLY, vl_api_classify_table_info_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_SESSION_DUMP, vl_api_classify_session_dump_t_handler)
vl_msg_id(VL_API_CLASSIFY_SESSION_DETAILS, vl_api_classify_session_details_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_SET_INTERFACE, vl_api_flow_classify_set_interface_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_SET_INTERFACE_REPLY, vl_api_flow_classify_set_interface_reply_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_DUMP, vl_api_flow_classify_dump_t_handler)
vl_msg_id(VL_API_FLOW_CLASSIFY_DETAILS, vl_api_flow_classify_details_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE, vl_api_classify_set_interface_ip_table_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE_REPLY, vl_api_classify_set_interface_ip_table_reply_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES, vl_api_classify_set_interface_l2_tables_t_handler)
vl_msg_id(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES_REPLY, vl_api_classify_set_interface_l2_tables_reply_t_handler)
vl_msg_id(VL_API_INPUT_ACL_SET_INTERFACE, vl_api_input_acl_set_interface_t_handler)
vl_msg_id(VL_API_INPUT_ACL_SET_INTERFACE_REPLY, vl_api_input_acl_set_interface_reply_t_handler)
vl_msg_id(VL_API_OUTPUT_ACL_SET_INTERFACE, vl_api_output_acl_set_interface_t_handler)
vl_msg_id(VL_API_OUTPUT_ACL_SET_INTERFACE_REPLY, vl_api_output_acl_set_interface_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_classify_add_del_table_t, 1)
vl_msg_name(vl_api_classify_add_del_table_reply_t, 1)
vl_msg_name(vl_api_classify_add_del_session_t, 1)
vl_msg_name(vl_api_classify_add_del_session_reply_t, 1)
vl_msg_name(vl_api_policer_classify_set_interface_t, 1)
vl_msg_name(vl_api_policer_classify_set_interface_reply_t, 1)
vl_msg_name(vl_api_policer_classify_dump_t, 1)
vl_msg_name(vl_api_policer_classify_details_t, 1)
vl_msg_name(vl_api_classify_table_ids_t, 1)
vl_msg_name(vl_api_classify_table_ids_reply_t, 1)
vl_msg_name(vl_api_classify_table_by_interface_t, 1)
vl_msg_name(vl_api_classify_table_by_interface_reply_t, 1)
vl_msg_name(vl_api_classify_table_info_t, 1)
vl_msg_name(vl_api_classify_table_info_reply_t, 1)
vl_msg_name(vl_api_classify_session_dump_t, 1)
vl_msg_name(vl_api_classify_session_details_t, 1)
vl_msg_name(vl_api_flow_classify_set_interface_t, 1)
vl_msg_name(vl_api_flow_classify_set_interface_reply_t, 1)
vl_msg_name(vl_api_flow_classify_dump_t, 1)
vl_msg_name(vl_api_flow_classify_details_t, 1)
vl_msg_name(vl_api_classify_set_interface_ip_table_t, 1)
vl_msg_name(vl_api_classify_set_interface_ip_table_reply_t, 1)
vl_msg_name(vl_api_classify_set_interface_l2_tables_t, 1)
vl_msg_name(vl_api_classify_set_interface_l2_tables_reply_t, 1)
vl_msg_name(vl_api_input_acl_set_interface_t, 1)
vl_msg_name(vl_api_input_acl_set_interface_reply_t, 1)
vl_msg_name(vl_api_output_acl_set_interface_t, 1)
vl_msg_name(vl_api_output_acl_set_interface_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_classify \
_(VL_API_CLASSIFY_ADD_DEL_TABLE, classify_add_del_table, 9bd794ae) \
_(VL_API_CLASSIFY_ADD_DEL_TABLE_REPLY, classify_add_del_table_reply, 05486349) \
_(VL_API_CLASSIFY_ADD_DEL_SESSION, classify_add_del_session, 85fd79f4) \
_(VL_API_CLASSIFY_ADD_DEL_SESSION_REPLY, classify_add_del_session_reply, e8d4e804) \
_(VL_API_POLICER_CLASSIFY_SET_INTERFACE, policer_classify_set_interface, e09537b0) \
_(VL_API_POLICER_CLASSIFY_SET_INTERFACE_REPLY, policer_classify_set_interface_reply, e8d4e804) \
_(VL_API_POLICER_CLASSIFY_DUMP, policer_classify_dump, 41503530) \
_(VL_API_POLICER_CLASSIFY_DETAILS, policer_classify_details, cc3461ad) \
_(VL_API_CLASSIFY_TABLE_IDS, classify_table_ids, 51077d14) \
_(VL_API_CLASSIFY_TABLE_IDS_REPLY, classify_table_ids_reply, d1d20e1d) \
_(VL_API_CLASSIFY_TABLE_BY_INTERFACE, classify_table_by_interface, 529cb13f) \
_(VL_API_CLASSIFY_TABLE_BY_INTERFACE_REPLY, classify_table_by_interface_reply, eccde823) \
_(VL_API_CLASSIFY_TABLE_INFO, classify_table_info, 0cca2cd9) \
_(VL_API_CLASSIFY_TABLE_INFO_REPLY, classify_table_info_reply, 4a573c0e) \
_(VL_API_CLASSIFY_SESSION_DUMP, classify_session_dump, 0cca2cd9) \
_(VL_API_CLASSIFY_SESSION_DETAILS, classify_session_details, 60e3ef94) \
_(VL_API_FLOW_CLASSIFY_SET_INTERFACE, flow_classify_set_interface, 275fa12c) \
_(VL_API_FLOW_CLASSIFY_SET_INTERFACE_REPLY, flow_classify_set_interface_reply, e8d4e804) \
_(VL_API_FLOW_CLASSIFY_DUMP, flow_classify_dump, 41503530) \
_(VL_API_FLOW_CLASSIFY_DETAILS, flow_classify_details, cc3461ad) \
_(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE, classify_set_interface_ip_table, d7199b03) \
_(VL_API_CLASSIFY_SET_INTERFACE_IP_TABLE_REPLY, classify_set_interface_ip_table_reply, e8d4e804) \
_(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES, classify_set_interface_l2_tables, 6d60ab5f) \
_(VL_API_CLASSIFY_SET_INTERFACE_L2_TABLES_REPLY, classify_set_interface_l2_tables_reply, e8d4e804) \
_(VL_API_INPUT_ACL_SET_INTERFACE, input_acl_set_interface, e09537b0) \
_(VL_API_INPUT_ACL_SET_INTERFACE_REPLY, input_acl_set_interface_reply, e8d4e804) \
_(VL_API_OUTPUT_ACL_SET_INTERFACE, output_acl_set_interface, e09537b0) \
_(VL_API_OUTPUT_ACL_SET_INTERFACE_REPLY, output_acl_set_interface_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_classify_api
#define included_classify_api
#ifndef _vl_api_defined_classify_add_del_table
#define _vl_api_defined_classify_add_del_table
typedef VL_API_PACKED(struct _vl_api_classify_add_del_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 del_chain;
    u32 table_index;
    u32 nbuckets;
    u32 memory_size;
    u32 skip_n_vectors;
    u32 match_n_vectors;
    u32 next_table_index;
    u32 miss_next_index;
    u32 current_data_flag;
    i32 current_data_offset;
    u32 mask_len;
    u8 mask[0];
}) vl_api_classify_add_del_table_t;
#endif

#ifndef _vl_api_defined_classify_add_del_table_reply
#define _vl_api_defined_classify_add_del_table_reply
typedef VL_API_PACKED(struct _vl_api_classify_add_del_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 new_table_index;
    u32 skip_n_vectors;
    u32 match_n_vectors;
}) vl_api_classify_add_del_table_reply_t;
#endif

#ifndef _vl_api_defined_classify_add_del_session
#define _vl_api_defined_classify_add_del_session
typedef VL_API_PACKED(struct _vl_api_classify_add_del_session {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 table_index;
    u32 hit_next_index;
    u32 opaque_index;
    i32 advance;
    u8 action;
    u32 metadata;
    u32 match_len;
    u8 match[0];
}) vl_api_classify_add_del_session_t;
#endif

#ifndef _vl_api_defined_classify_add_del_session_reply
#define _vl_api_defined_classify_add_del_session_reply
typedef VL_API_PACKED(struct _vl_api_classify_add_del_session_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_classify_add_del_session_reply_t;
#endif

#ifndef _vl_api_defined_policer_classify_set_interface
#define _vl_api_defined_policer_classify_set_interface
typedef VL_API_PACKED(struct _vl_api_policer_classify_set_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 ip4_table_index;
    u32 ip6_table_index;
    u32 l2_table_index;
    u8 is_add;
}) vl_api_policer_classify_set_interface_t;
#endif

#ifndef _vl_api_defined_policer_classify_set_interface_reply
#define _vl_api_defined_policer_classify_set_interface_reply
typedef VL_API_PACKED(struct _vl_api_policer_classify_set_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_policer_classify_set_interface_reply_t;
#endif

#ifndef _vl_api_defined_policer_classify_dump
#define _vl_api_defined_policer_classify_dump
typedef VL_API_PACKED(struct _vl_api_policer_classify_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 type;
}) vl_api_policer_classify_dump_t;
#endif

#ifndef _vl_api_defined_policer_classify_details
#define _vl_api_defined_policer_classify_details
typedef VL_API_PACKED(struct _vl_api_policer_classify_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 table_index;
}) vl_api_policer_classify_details_t;
#endif

#ifndef _vl_api_defined_classify_table_ids
#define _vl_api_defined_classify_table_ids
typedef VL_API_PACKED(struct _vl_api_classify_table_ids {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_classify_table_ids_t;
#endif

#ifndef _vl_api_defined_classify_table_ids_reply
#define _vl_api_defined_classify_table_ids_reply
typedef VL_API_PACKED(struct _vl_api_classify_table_ids_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    u32 ids[0];
}) vl_api_classify_table_ids_reply_t;
#endif

#ifndef _vl_api_defined_classify_table_by_interface
#define _vl_api_defined_classify_table_by_interface
typedef VL_API_PACKED(struct _vl_api_classify_table_by_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
}) vl_api_classify_table_by_interface_t;
#endif

#ifndef _vl_api_defined_classify_table_by_interface_reply
#define _vl_api_defined_classify_table_by_interface_reply
typedef VL_API_PACKED(struct _vl_api_classify_table_by_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 sw_if_index;
    u32 l2_table_id;
    u32 ip4_table_id;
    u32 ip6_table_id;
}) vl_api_classify_table_by_interface_reply_t;
#endif

#ifndef _vl_api_defined_classify_table_info
#define _vl_api_defined_classify_table_info
typedef VL_API_PACKED(struct _vl_api_classify_table_info {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 table_id;
}) vl_api_classify_table_info_t;
#endif

#ifndef _vl_api_defined_classify_table_info_reply
#define _vl_api_defined_classify_table_info_reply
typedef VL_API_PACKED(struct _vl_api_classify_table_info_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 table_id;
    u32 nbuckets;
    u32 match_n_vectors;
    u32 skip_n_vectors;
    u32 active_sessions;
    u32 next_table_index;
    u32 miss_next_index;
    u32 mask_length;
    u8 mask[0];
}) vl_api_classify_table_info_reply_t;
#endif

#ifndef _vl_api_defined_classify_session_dump
#define _vl_api_defined_classify_session_dump
typedef VL_API_PACKED(struct _vl_api_classify_session_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 table_id;
}) vl_api_classify_session_dump_t;
#endif

#ifndef _vl_api_defined_classify_session_details
#define _vl_api_defined_classify_session_details
typedef VL_API_PACKED(struct _vl_api_classify_session_details {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 table_id;
    u32 hit_next_index;
    i32 advance;
    u32 opaque_index;
    u32 match_length;
    u8 match[0];
}) vl_api_classify_session_details_t;
#endif

#ifndef _vl_api_defined_flow_classify_set_interface
#define _vl_api_defined_flow_classify_set_interface
typedef VL_API_PACKED(struct _vl_api_flow_classify_set_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 ip4_table_index;
    u32 ip6_table_index;
    u8 is_add;
}) vl_api_flow_classify_set_interface_t;
#endif

#ifndef _vl_api_defined_flow_classify_set_interface_reply
#define _vl_api_defined_flow_classify_set_interface_reply
typedef VL_API_PACKED(struct _vl_api_flow_classify_set_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_flow_classify_set_interface_reply_t;
#endif

#ifndef _vl_api_defined_flow_classify_dump
#define _vl_api_defined_flow_classify_dump
typedef VL_API_PACKED(struct _vl_api_flow_classify_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 type;
}) vl_api_flow_classify_dump_t;
#endif

#ifndef _vl_api_defined_flow_classify_details
#define _vl_api_defined_flow_classify_details
typedef VL_API_PACKED(struct _vl_api_flow_classify_details {
    u16 _vl_msg_id;
    u32 context;
    u32 sw_if_index;
    u32 table_index;
}) vl_api_flow_classify_details_t;
#endif

#ifndef _vl_api_defined_classify_set_interface_ip_table
#define _vl_api_defined_classify_set_interface_ip_table
typedef VL_API_PACKED(struct _vl_api_classify_set_interface_ip_table {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ipv6;
    u32 sw_if_index;
    u32 table_index;
}) vl_api_classify_set_interface_ip_table_t;
#endif

#ifndef _vl_api_defined_classify_set_interface_ip_table_reply
#define _vl_api_defined_classify_set_interface_ip_table_reply
typedef VL_API_PACKED(struct _vl_api_classify_set_interface_ip_table_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_classify_set_interface_ip_table_reply_t;
#endif

#ifndef _vl_api_defined_classify_set_interface_l2_tables
#define _vl_api_defined_classify_set_interface_l2_tables
typedef VL_API_PACKED(struct _vl_api_classify_set_interface_l2_tables {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 ip4_table_index;
    u32 ip6_table_index;
    u32 other_table_index;
    u8 is_input;
}) vl_api_classify_set_interface_l2_tables_t;
#endif

#ifndef _vl_api_defined_classify_set_interface_l2_tables_reply
#define _vl_api_defined_classify_set_interface_l2_tables_reply
typedef VL_API_PACKED(struct _vl_api_classify_set_interface_l2_tables_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_classify_set_interface_l2_tables_reply_t;
#endif

#ifndef _vl_api_defined_input_acl_set_interface
#define _vl_api_defined_input_acl_set_interface
typedef VL_API_PACKED(struct _vl_api_input_acl_set_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 ip4_table_index;
    u32 ip6_table_index;
    u32 l2_table_index;
    u8 is_add;
}) vl_api_input_acl_set_interface_t;
#endif

#ifndef _vl_api_defined_input_acl_set_interface_reply
#define _vl_api_defined_input_acl_set_interface_reply
typedef VL_API_PACKED(struct _vl_api_input_acl_set_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_input_acl_set_interface_reply_t;
#endif

#ifndef _vl_api_defined_output_acl_set_interface
#define _vl_api_defined_output_acl_set_interface
typedef VL_API_PACKED(struct _vl_api_output_acl_set_interface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 sw_if_index;
    u32 ip4_table_index;
    u32 ip6_table_index;
    u32 l2_table_index;
    u8 is_add;
}) vl_api_output_acl_set_interface_t;
#endif

#ifndef _vl_api_defined_output_acl_set_interface_reply
#define _vl_api_defined_output_acl_set_interface_reply
typedef VL_API_PACKED(struct _vl_api_output_acl_set_interface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_output_acl_set_interface_reply_t;
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

#ifndef _vl_api_defined_classify_add_del_table_t_print
#define _vl_api_defined_classify_add_del_table_t_print
static inline void *vl_api_classify_add_del_table_t_print (vl_api_classify_add_del_table_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_add_del_table_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "del_chain: %u\n", a->del_chain);
    vl_print(handle, "table_index: %u\n", a->table_index);
    vl_print(handle, "nbuckets: %u\n", a->nbuckets);
    vl_print(handle, "memory_size: %u\n", a->memory_size);
    vl_print(handle, "skip_n_vectors: %u\n", a->skip_n_vectors);
    vl_print(handle, "match_n_vectors: %u\n", a->match_n_vectors);
    vl_print(handle, "next_table_index: %u\n", a->next_table_index);
    vl_print(handle, "miss_next_index: %u\n", a->miss_next_index);
    vl_print(handle, "current_data_flag: %u\n", a->current_data_flag);
    vl_print(handle, "current_data_offset: %ld\n", a->current_data_offset);
    vl_print(handle, "mask_len: %u\n", a->mask_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_add_del_table_reply_t_print
#define _vl_api_defined_classify_add_del_table_reply_t_print
static inline void *vl_api_classify_add_del_table_reply_t_print (vl_api_classify_add_del_table_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_add_del_table_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "new_table_index: %u\n", a->new_table_index);
    vl_print(handle, "skip_n_vectors: %u\n", a->skip_n_vectors);
    vl_print(handle, "match_n_vectors: %u\n", a->match_n_vectors);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_add_del_session_t_print
#define _vl_api_defined_classify_add_del_session_t_print
static inline void *vl_api_classify_add_del_session_t_print (vl_api_classify_add_del_session_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_add_del_session_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "table_index: %u\n", a->table_index);
    vl_print(handle, "hit_next_index: %u\n", a->hit_next_index);
    vl_print(handle, "opaque_index: %u\n", a->opaque_index);
    vl_print(handle, "advance: %ld\n", a->advance);
    vl_print(handle, "action: %u\n", a->action);
    vl_print(handle, "metadata: %u\n", a->metadata);
    vl_print(handle, "match_len: %u\n", a->match_len);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_add_del_session_reply_t_print
#define _vl_api_defined_classify_add_del_session_reply_t_print
static inline void *vl_api_classify_add_del_session_reply_t_print (vl_api_classify_add_del_session_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_add_del_session_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_policer_classify_set_interface_t_print
#define _vl_api_defined_policer_classify_set_interface_t_print
static inline void *vl_api_policer_classify_set_interface_t_print (vl_api_policer_classify_set_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_classify_set_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "ip4_table_index: %u\n", a->ip4_table_index);
    vl_print(handle, "ip6_table_index: %u\n", a->ip6_table_index);
    vl_print(handle, "l2_table_index: %u\n", a->l2_table_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_policer_classify_set_interface_reply_t_print
#define _vl_api_defined_policer_classify_set_interface_reply_t_print
static inline void *vl_api_policer_classify_set_interface_reply_t_print (vl_api_policer_classify_set_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_classify_set_interface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_policer_classify_dump_t_print
#define _vl_api_defined_policer_classify_dump_t_print
static inline void *vl_api_policer_classify_dump_t_print (vl_api_policer_classify_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_classify_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "type: %u\n", a->type);
    return handle;
}

#endif

#ifndef _vl_api_defined_policer_classify_details_t_print
#define _vl_api_defined_policer_classify_details_t_print
static inline void *vl_api_policer_classify_details_t_print (vl_api_policer_classify_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_policer_classify_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "table_index: %u\n", a->table_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_table_ids_t_print
#define _vl_api_defined_classify_table_ids_t_print
static inline void *vl_api_classify_table_ids_t_print (vl_api_classify_table_ids_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_table_ids_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_table_ids_reply_t_print
#define _vl_api_defined_classify_table_ids_reply_t_print
static inline void *vl_api_classify_table_ids_reply_t_print (vl_api_classify_table_ids_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_table_ids_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "count: %u\n", a->count);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_table_by_interface_t_print
#define _vl_api_defined_classify_table_by_interface_t_print
static inline void *vl_api_classify_table_by_interface_t_print (vl_api_classify_table_by_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_table_by_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_table_by_interface_reply_t_print
#define _vl_api_defined_classify_table_by_interface_reply_t_print
static inline void *vl_api_classify_table_by_interface_reply_t_print (vl_api_classify_table_by_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_table_by_interface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "l2_table_id: %u\n", a->l2_table_id);
    vl_print(handle, "ip4_table_id: %u\n", a->ip4_table_id);
    vl_print(handle, "ip6_table_id: %u\n", a->ip6_table_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_table_info_t_print
#define _vl_api_defined_classify_table_info_t_print
static inline void *vl_api_classify_table_info_t_print (vl_api_classify_table_info_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_table_info_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "table_id: %u\n", a->table_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_table_info_reply_t_print
#define _vl_api_defined_classify_table_info_reply_t_print
static inline void *vl_api_classify_table_info_reply_t_print (vl_api_classify_table_info_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_table_info_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "nbuckets: %u\n", a->nbuckets);
    vl_print(handle, "match_n_vectors: %u\n", a->match_n_vectors);
    vl_print(handle, "skip_n_vectors: %u\n", a->skip_n_vectors);
    vl_print(handle, "active_sessions: %u\n", a->active_sessions);
    vl_print(handle, "next_table_index: %u\n", a->next_table_index);
    vl_print(handle, "miss_next_index: %u\n", a->miss_next_index);
    vl_print(handle, "mask_length: %u\n", a->mask_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_session_dump_t_print
#define _vl_api_defined_classify_session_dump_t_print
static inline void *vl_api_classify_session_dump_t_print (vl_api_classify_session_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_session_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "table_id: %u\n", a->table_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_session_details_t_print
#define _vl_api_defined_classify_session_details_t_print
static inline void *vl_api_classify_session_details_t_print (vl_api_classify_session_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_session_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "hit_next_index: %u\n", a->hit_next_index);
    vl_print(handle, "advance: %ld\n", a->advance);
    vl_print(handle, "opaque_index: %u\n", a->opaque_index);
    vl_print(handle, "match_length: %u\n", a->match_length);
    return handle;
}

#endif

#ifndef _vl_api_defined_flow_classify_set_interface_t_print
#define _vl_api_defined_flow_classify_set_interface_t_print
static inline void *vl_api_flow_classify_set_interface_t_print (vl_api_flow_classify_set_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_flow_classify_set_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "ip4_table_index: %u\n", a->ip4_table_index);
    vl_print(handle, "ip6_table_index: %u\n", a->ip6_table_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_flow_classify_set_interface_reply_t_print
#define _vl_api_defined_flow_classify_set_interface_reply_t_print
static inline void *vl_api_flow_classify_set_interface_reply_t_print (vl_api_flow_classify_set_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_flow_classify_set_interface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_flow_classify_dump_t_print
#define _vl_api_defined_flow_classify_dump_t_print
static inline void *vl_api_flow_classify_dump_t_print (vl_api_flow_classify_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_flow_classify_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "type: %u\n", a->type);
    return handle;
}

#endif

#ifndef _vl_api_defined_flow_classify_details_t_print
#define _vl_api_defined_flow_classify_details_t_print
static inline void *vl_api_flow_classify_details_t_print (vl_api_flow_classify_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_flow_classify_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "table_index: %u\n", a->table_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_set_interface_ip_table_t_print
#define _vl_api_defined_classify_set_interface_ip_table_t_print
static inline void *vl_api_classify_set_interface_ip_table_t_print (vl_api_classify_set_interface_ip_table_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_set_interface_ip_table_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "table_index: %u\n", a->table_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_set_interface_ip_table_reply_t_print
#define _vl_api_defined_classify_set_interface_ip_table_reply_t_print
static inline void *vl_api_classify_set_interface_ip_table_reply_t_print (vl_api_classify_set_interface_ip_table_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_set_interface_ip_table_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_set_interface_l2_tables_t_print
#define _vl_api_defined_classify_set_interface_l2_tables_t_print
static inline void *vl_api_classify_set_interface_l2_tables_t_print (vl_api_classify_set_interface_l2_tables_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_set_interface_l2_tables_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "ip4_table_index: %u\n", a->ip4_table_index);
    vl_print(handle, "ip6_table_index: %u\n", a->ip6_table_index);
    vl_print(handle, "other_table_index: %u\n", a->other_table_index);
    vl_print(handle, "is_input: %u\n", a->is_input);
    return handle;
}

#endif

#ifndef _vl_api_defined_classify_set_interface_l2_tables_reply_t_print
#define _vl_api_defined_classify_set_interface_l2_tables_reply_t_print
static inline void *vl_api_classify_set_interface_l2_tables_reply_t_print (vl_api_classify_set_interface_l2_tables_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_classify_set_interface_l2_tables_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_input_acl_set_interface_t_print
#define _vl_api_defined_input_acl_set_interface_t_print
static inline void *vl_api_input_acl_set_interface_t_print (vl_api_input_acl_set_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_input_acl_set_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "ip4_table_index: %u\n", a->ip4_table_index);
    vl_print(handle, "ip6_table_index: %u\n", a->ip6_table_index);
    vl_print(handle, "l2_table_index: %u\n", a->l2_table_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_input_acl_set_interface_reply_t_print
#define _vl_api_defined_input_acl_set_interface_reply_t_print
static inline void *vl_api_input_acl_set_interface_reply_t_print (vl_api_input_acl_set_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_input_acl_set_interface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_output_acl_set_interface_t_print
#define _vl_api_defined_output_acl_set_interface_t_print
static inline void *vl_api_output_acl_set_interface_t_print (vl_api_output_acl_set_interface_t *a,void *handle)
{
    vl_print(handle, "vl_api_output_acl_set_interface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "ip4_table_index: %u\n", a->ip4_table_index);
    vl_print(handle, "ip6_table_index: %u\n", a->ip6_table_index);
    vl_print(handle, "l2_table_index: %u\n", a->l2_table_index);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_output_acl_set_interface_reply_t_print
#define _vl_api_defined_output_acl_set_interface_reply_t_print
static inline void *vl_api_output_acl_set_interface_reply_t_print (vl_api_output_acl_set_interface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_output_acl_set_interface_reply_t:\n");
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

#ifndef _vl_api_defined_classify_add_del_table_t_endian
#define _vl_api_defined_classify_add_del_table_t_endian
static inline void vl_api_classify_add_del_table_t_endian (vl_api_classify_add_del_table_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->del_chain = a->del_chain (no-op) */
    a->table_index = clib_net_to_host_u32(a->table_index);
    a->nbuckets = clib_net_to_host_u32(a->nbuckets);
    a->memory_size = clib_net_to_host_u32(a->memory_size);
    a->skip_n_vectors = clib_net_to_host_u32(a->skip_n_vectors);
    a->match_n_vectors = clib_net_to_host_u32(a->match_n_vectors);
    a->next_table_index = clib_net_to_host_u32(a->next_table_index);
    a->miss_next_index = clib_net_to_host_u32(a->miss_next_index);
    a->current_data_flag = clib_net_to_host_u32(a->current_data_flag);
    a->current_data_offset = clib_net_to_host_u32(a->current_data_offset);
    a->mask_len = clib_net_to_host_u32(a->mask_len);
}

#endif

#ifndef _vl_api_defined_classify_add_del_table_reply_t_endian
#define _vl_api_defined_classify_add_del_table_reply_t_endian
static inline void vl_api_classify_add_del_table_reply_t_endian (vl_api_classify_add_del_table_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->new_table_index = clib_net_to_host_u32(a->new_table_index);
    a->skip_n_vectors = clib_net_to_host_u32(a->skip_n_vectors);
    a->match_n_vectors = clib_net_to_host_u32(a->match_n_vectors);
}

#endif

#ifndef _vl_api_defined_classify_add_del_session_t_endian
#define _vl_api_defined_classify_add_del_session_t_endian
static inline void vl_api_classify_add_del_session_t_endian (vl_api_classify_add_del_session_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->table_index = clib_net_to_host_u32(a->table_index);
    a->hit_next_index = clib_net_to_host_u32(a->hit_next_index);
    a->opaque_index = clib_net_to_host_u32(a->opaque_index);
    a->advance = clib_net_to_host_u32(a->advance);
    /* a->action = a->action (no-op) */
    a->metadata = clib_net_to_host_u32(a->metadata);
    a->match_len = clib_net_to_host_u32(a->match_len);
}

#endif

#ifndef _vl_api_defined_classify_add_del_session_reply_t_endian
#define _vl_api_defined_classify_add_del_session_reply_t_endian
static inline void vl_api_classify_add_del_session_reply_t_endian (vl_api_classify_add_del_session_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_policer_classify_set_interface_t_endian
#define _vl_api_defined_policer_classify_set_interface_t_endian
static inline void vl_api_policer_classify_set_interface_t_endian (vl_api_policer_classify_set_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->l2_table_index = clib_net_to_host_u32(a->l2_table_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_policer_classify_set_interface_reply_t_endian
#define _vl_api_defined_policer_classify_set_interface_reply_t_endian
static inline void vl_api_policer_classify_set_interface_reply_t_endian (vl_api_policer_classify_set_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_policer_classify_dump_t_endian
#define _vl_api_defined_policer_classify_dump_t_endian
static inline void vl_api_policer_classify_dump_t_endian (vl_api_policer_classify_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->type = a->type (no-op) */
}

#endif

#ifndef _vl_api_defined_policer_classify_details_t_endian
#define _vl_api_defined_policer_classify_details_t_endian
static inline void vl_api_policer_classify_details_t_endian (vl_api_policer_classify_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->table_index = clib_net_to_host_u32(a->table_index);
}

#endif

#ifndef _vl_api_defined_classify_table_ids_t_endian
#define _vl_api_defined_classify_table_ids_t_endian
static inline void vl_api_classify_table_ids_t_endian (vl_api_classify_table_ids_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_classify_table_ids_reply_t_endian
#define _vl_api_defined_classify_table_ids_reply_t_endian
static inline void vl_api_classify_table_ids_reply_t_endian (vl_api_classify_table_ids_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->count = clib_net_to_host_u32(a->count);
}

#endif

#ifndef _vl_api_defined_classify_table_by_interface_t_endian
#define _vl_api_defined_classify_table_by_interface_t_endian
static inline void vl_api_classify_table_by_interface_t_endian (vl_api_classify_table_by_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_classify_table_by_interface_reply_t_endian
#define _vl_api_defined_classify_table_by_interface_reply_t_endian
static inline void vl_api_classify_table_by_interface_reply_t_endian (vl_api_classify_table_by_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->l2_table_id = clib_net_to_host_u32(a->l2_table_id);
    a->ip4_table_id = clib_net_to_host_u32(a->ip4_table_id);
    a->ip6_table_id = clib_net_to_host_u32(a->ip6_table_id);
}

#endif

#ifndef _vl_api_defined_classify_table_info_t_endian
#define _vl_api_defined_classify_table_info_t_endian
static inline void vl_api_classify_table_info_t_endian (vl_api_classify_table_info_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
}

#endif

#ifndef _vl_api_defined_classify_table_info_reply_t_endian
#define _vl_api_defined_classify_table_info_reply_t_endian
static inline void vl_api_classify_table_info_reply_t_endian (vl_api_classify_table_info_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->nbuckets = clib_net_to_host_u32(a->nbuckets);
    a->match_n_vectors = clib_net_to_host_u32(a->match_n_vectors);
    a->skip_n_vectors = clib_net_to_host_u32(a->skip_n_vectors);
    a->active_sessions = clib_net_to_host_u32(a->active_sessions);
    a->next_table_index = clib_net_to_host_u32(a->next_table_index);
    a->miss_next_index = clib_net_to_host_u32(a->miss_next_index);
    a->mask_length = clib_net_to_host_u32(a->mask_length);
}

#endif

#ifndef _vl_api_defined_classify_session_dump_t_endian
#define _vl_api_defined_classify_session_dump_t_endian
static inline void vl_api_classify_session_dump_t_endian (vl_api_classify_session_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->table_id = clib_net_to_host_u32(a->table_id);
}

#endif

#ifndef _vl_api_defined_classify_session_details_t_endian
#define _vl_api_defined_classify_session_details_t_endian
static inline void vl_api_classify_session_details_t_endian (vl_api_classify_session_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->hit_next_index = clib_net_to_host_u32(a->hit_next_index);
    a->advance = clib_net_to_host_u32(a->advance);
    a->opaque_index = clib_net_to_host_u32(a->opaque_index);
    a->match_length = clib_net_to_host_u32(a->match_length);
}

#endif

#ifndef _vl_api_defined_flow_classify_set_interface_t_endian
#define _vl_api_defined_flow_classify_set_interface_t_endian
static inline void vl_api_flow_classify_set_interface_t_endian (vl_api_flow_classify_set_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_flow_classify_set_interface_reply_t_endian
#define _vl_api_defined_flow_classify_set_interface_reply_t_endian
static inline void vl_api_flow_classify_set_interface_reply_t_endian (vl_api_flow_classify_set_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_flow_classify_dump_t_endian
#define _vl_api_defined_flow_classify_dump_t_endian
static inline void vl_api_flow_classify_dump_t_endian (vl_api_flow_classify_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->type = a->type (no-op) */
}

#endif

#ifndef _vl_api_defined_flow_classify_details_t_endian
#define _vl_api_defined_flow_classify_details_t_endian
static inline void vl_api_flow_classify_details_t_endian (vl_api_flow_classify_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->table_index = clib_net_to_host_u32(a->table_index);
}

#endif

#ifndef _vl_api_defined_classify_set_interface_ip_table_t_endian
#define _vl_api_defined_classify_set_interface_ip_table_t_endian
static inline void vl_api_classify_set_interface_ip_table_t_endian (vl_api_classify_set_interface_ip_table_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->table_index = clib_net_to_host_u32(a->table_index);
}

#endif

#ifndef _vl_api_defined_classify_set_interface_ip_table_reply_t_endian
#define _vl_api_defined_classify_set_interface_ip_table_reply_t_endian
static inline void vl_api_classify_set_interface_ip_table_reply_t_endian (vl_api_classify_set_interface_ip_table_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_classify_set_interface_l2_tables_t_endian
#define _vl_api_defined_classify_set_interface_l2_tables_t_endian
static inline void vl_api_classify_set_interface_l2_tables_t_endian (vl_api_classify_set_interface_l2_tables_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->other_table_index = clib_net_to_host_u32(a->other_table_index);
    /* a->is_input = a->is_input (no-op) */
}

#endif

#ifndef _vl_api_defined_classify_set_interface_l2_tables_reply_t_endian
#define _vl_api_defined_classify_set_interface_l2_tables_reply_t_endian
static inline void vl_api_classify_set_interface_l2_tables_reply_t_endian (vl_api_classify_set_interface_l2_tables_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_input_acl_set_interface_t_endian
#define _vl_api_defined_input_acl_set_interface_t_endian
static inline void vl_api_input_acl_set_interface_t_endian (vl_api_input_acl_set_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->l2_table_index = clib_net_to_host_u32(a->l2_table_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_input_acl_set_interface_reply_t_endian
#define _vl_api_defined_input_acl_set_interface_reply_t_endian
static inline void vl_api_input_acl_set_interface_reply_t_endian (vl_api_input_acl_set_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_output_acl_set_interface_t_endian
#define _vl_api_defined_output_acl_set_interface_t_endian
static inline void vl_api_output_acl_set_interface_t_endian (vl_api_output_acl_set_interface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->ip4_table_index = clib_net_to_host_u32(a->ip4_table_index);
    a->ip6_table_index = clib_net_to_host_u32(a->ip6_table_index);
    a->l2_table_index = clib_net_to_host_u32(a->l2_table_index);
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_output_acl_set_interface_reply_t_endian
#define _vl_api_defined_output_acl_set_interface_reply_t_endian
static inline void vl_api_output_acl_set_interface_reply_t_endian (vl_api_output_acl_set_interface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(classify.api, 2, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(classify.api, 0x18314b61)

#endif

