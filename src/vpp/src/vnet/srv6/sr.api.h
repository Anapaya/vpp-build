/*
 * VLIB API definitions 2020-06-13 06:00:57
 * Input file: sr.api
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
#warning no content included from sr.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SR_LOCALSID_ADD_DEL, vl_api_sr_localsid_add_del_t_handler)
vl_msg_id(VL_API_SR_LOCALSID_ADD_DEL_REPLY, vl_api_sr_localsid_add_del_reply_t_handler)
vl_msg_id(VL_API_SR_POLICY_ADD, vl_api_sr_policy_add_t_handler)
vl_msg_id(VL_API_SR_POLICY_ADD_REPLY, vl_api_sr_policy_add_reply_t_handler)
vl_msg_id(VL_API_SR_POLICY_MOD, vl_api_sr_policy_mod_t_handler)
vl_msg_id(VL_API_SR_POLICY_MOD_REPLY, vl_api_sr_policy_mod_reply_t_handler)
vl_msg_id(VL_API_SR_POLICY_DEL, vl_api_sr_policy_del_t_handler)
vl_msg_id(VL_API_SR_POLICY_DEL_REPLY, vl_api_sr_policy_del_reply_t_handler)
vl_msg_id(VL_API_SR_SET_ENCAP_SOURCE, vl_api_sr_set_encap_source_t_handler)
vl_msg_id(VL_API_SR_SET_ENCAP_SOURCE_REPLY, vl_api_sr_set_encap_source_reply_t_handler)
vl_msg_id(VL_API_SR_STEERING_ADD_DEL, vl_api_sr_steering_add_del_t_handler)
vl_msg_id(VL_API_SR_STEERING_ADD_DEL_REPLY, vl_api_sr_steering_add_del_reply_t_handler)
vl_msg_id(VL_API_SR_LOCALSIDS_DUMP, vl_api_sr_localsids_dump_t_handler)
vl_msg_id(VL_API_SR_LOCALSIDS_DETAILS, vl_api_sr_localsids_details_t_handler)
vl_msg_id(VL_API_SR_POLICIES_DUMP, vl_api_sr_policies_dump_t_handler)
vl_msg_id(VL_API_SR_POLICIES_DETAILS, vl_api_sr_policies_details_t_handler)
vl_msg_id(VL_API_SR_STEERING_POL_DUMP, vl_api_sr_steering_pol_dump_t_handler)
vl_msg_id(VL_API_SR_STEERING_POL_DETAILS, vl_api_sr_steering_pol_details_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sr_localsid_add_del_t, 1)
vl_msg_name(vl_api_sr_localsid_add_del_reply_t, 1)
vl_msg_name(vl_api_sr_policy_add_t, 1)
vl_msg_name(vl_api_sr_policy_add_reply_t, 1)
vl_msg_name(vl_api_sr_policy_mod_t, 1)
vl_msg_name(vl_api_sr_policy_mod_reply_t, 1)
vl_msg_name(vl_api_sr_policy_del_t, 1)
vl_msg_name(vl_api_sr_policy_del_reply_t, 1)
vl_msg_name(vl_api_sr_set_encap_source_t, 1)
vl_msg_name(vl_api_sr_set_encap_source_reply_t, 1)
vl_msg_name(vl_api_sr_steering_add_del_t, 1)
vl_msg_name(vl_api_sr_steering_add_del_reply_t, 1)
vl_msg_name(vl_api_sr_localsids_dump_t, 1)
vl_msg_name(vl_api_sr_localsids_details_t, 1)
vl_msg_name(vl_api_sr_policies_dump_t, 1)
vl_msg_name(vl_api_sr_policies_details_t, 1)
vl_msg_name(vl_api_sr_steering_pol_dump_t, 1)
vl_msg_name(vl_api_sr_steering_pol_details_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_sr \
_(VL_API_SR_LOCALSID_ADD_DEL, sr_localsid_add_del, b30489eb) \
_(VL_API_SR_LOCALSID_ADD_DEL_REPLY, sr_localsid_add_del_reply, e8d4e804) \
_(VL_API_SR_POLICY_ADD, sr_policy_add, 4b6e2484) \
_(VL_API_SR_POLICY_ADD_REPLY, sr_policy_add_reply, e8d4e804) \
_(VL_API_SR_POLICY_MOD, sr_policy_mod, c1dfaee0) \
_(VL_API_SR_POLICY_MOD_REPLY, sr_policy_mod_reply, e8d4e804) \
_(VL_API_SR_POLICY_DEL, sr_policy_del, e4133171) \
_(VL_API_SR_POLICY_DEL_REPLY, sr_policy_del_reply, e8d4e804) \
_(VL_API_SR_SET_ENCAP_SOURCE, sr_set_encap_source, d05bb4de) \
_(VL_API_SR_SET_ENCAP_SOURCE_REPLY, sr_set_encap_source_reply, e8d4e804) \
_(VL_API_SR_STEERING_ADD_DEL, sr_steering_add_del, 28b5dcab) \
_(VL_API_SR_STEERING_ADD_DEL_REPLY, sr_steering_add_del_reply, e8d4e804) \
_(VL_API_SR_LOCALSIDS_DUMP, sr_localsids_dump, 51077d14) \
_(VL_API_SR_LOCALSIDS_DETAILS, sr_localsids_details, 0791babc) \
_(VL_API_SR_POLICIES_DUMP, sr_policies_dump, 51077d14) \
_(VL_API_SR_POLICIES_DETAILS, sr_policies_details, 5087f460) \
_(VL_API_SR_STEERING_POL_DUMP, sr_steering_pol_dump, 51077d14) \
_(VL_API_SR_STEERING_POL_DETAILS, sr_steering_pol_details, 5627d483) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_sr_api
#define included_sr_api
#ifndef _vl_api_defined_srv6_sid
#define _vl_api_defined_srv6_sid
typedef VL_API_PACKED(struct _vl_api_srv6_sid {
    u8 addr[16];
}) vl_api_srv6_sid_t;
#endif

#ifndef _vl_api_defined_srv6_sid_list
#define _vl_api_defined_srv6_sid_list
typedef VL_API_PACKED(struct _vl_api_srv6_sid_list {
    u8 num_sids;
    u32 weight;
    vl_api_srv6_sid_t sids[16];
}) vl_api_srv6_sid_list_t;
#endif

#ifndef _vl_api_defined_sr_ip6_address
#define _vl_api_defined_sr_ip6_address
typedef VL_API_PACKED(struct _vl_api_sr_ip6_address {
    u8 data[16];
}) vl_api_sr_ip6_address_t;
#endif

#ifndef _vl_api_defined_sr_localsid_add_del
#define _vl_api_defined_sr_localsid_add_del
typedef VL_API_PACKED(struct _vl_api_sr_localsid_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_del;
    vl_api_srv6_sid_t localsid;
    u8 end_psp;
    u8 behavior;
    u32 sw_if_index;
    u32 vlan_index;
    u32 fib_table;
    u8 nh_addr6[16];
    u8 nh_addr4[4];
}) vl_api_sr_localsid_add_del_t;
#endif

#ifndef _vl_api_defined_sr_localsid_add_del_reply
#define _vl_api_defined_sr_localsid_add_del_reply
typedef VL_API_PACKED(struct _vl_api_sr_localsid_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_localsid_add_del_reply_t;
#endif

#ifndef _vl_api_defined_sr_policy_add
#define _vl_api_defined_sr_policy_add
typedef VL_API_PACKED(struct _vl_api_sr_policy_add {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 bsid_addr[16];
    u32 weight;
    u8 is_encap;
    u8 type;
    u32 fib_table;
    vl_api_srv6_sid_list_t sids;
}) vl_api_sr_policy_add_t;
#endif

#ifndef _vl_api_defined_sr_policy_add_reply
#define _vl_api_defined_sr_policy_add_reply
typedef VL_API_PACKED(struct _vl_api_sr_policy_add_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_policy_add_reply_t;
#endif

#ifndef _vl_api_defined_sr_policy_mod
#define _vl_api_defined_sr_policy_mod
typedef VL_API_PACKED(struct _vl_api_sr_policy_mod {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 bsid_addr[16];
    u32 sr_policy_index;
    u32 fib_table;
    u8 operation;
    u32 sl_index;
    u32 weight;
    vl_api_srv6_sid_list_t sids;
}) vl_api_sr_policy_mod_t;
#endif

#ifndef _vl_api_defined_sr_policy_mod_reply
#define _vl_api_defined_sr_policy_mod_reply
typedef VL_API_PACKED(struct _vl_api_sr_policy_mod_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_policy_mod_reply_t;
#endif

#ifndef _vl_api_defined_sr_policy_del
#define _vl_api_defined_sr_policy_del
typedef VL_API_PACKED(struct _vl_api_sr_policy_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    vl_api_srv6_sid_t bsid_addr;
    u32 sr_policy_index;
}) vl_api_sr_policy_del_t;
#endif

#ifndef _vl_api_defined_sr_policy_del_reply
#define _vl_api_defined_sr_policy_del_reply
typedef VL_API_PACKED(struct _vl_api_sr_policy_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_policy_del_reply_t;
#endif

#ifndef _vl_api_defined_sr_set_encap_source
#define _vl_api_defined_sr_set_encap_source
typedef VL_API_PACKED(struct _vl_api_sr_set_encap_source {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 encaps_source[16];
}) vl_api_sr_set_encap_source_t;
#endif

#ifndef _vl_api_defined_sr_set_encap_source_reply
#define _vl_api_defined_sr_set_encap_source_reply
typedef VL_API_PACKED(struct _vl_api_sr_set_encap_source_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_set_encap_source_reply_t;
#endif

#ifndef _vl_api_defined_sr_steering_add_del
#define _vl_api_defined_sr_steering_add_del
typedef VL_API_PACKED(struct _vl_api_sr_steering_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_del;
    u8 bsid_addr[16];
    u32 sr_policy_index;
    u32 table_id;
    u8 prefix_addr[16];
    u32 mask_width;
    u32 sw_if_index;
    u8 traffic_type;
}) vl_api_sr_steering_add_del_t;
#endif

#ifndef _vl_api_defined_sr_steering_add_del_reply
#define _vl_api_defined_sr_steering_add_del_reply
typedef VL_API_PACKED(struct _vl_api_sr_steering_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sr_steering_add_del_reply_t;
#endif

#ifndef _vl_api_defined_sr_localsids_dump
#define _vl_api_defined_sr_localsids_dump
typedef VL_API_PACKED(struct _vl_api_sr_localsids_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sr_localsids_dump_t;
#endif

#ifndef _vl_api_defined_sr_localsids_details
#define _vl_api_defined_sr_localsids_details
typedef VL_API_PACKED(struct _vl_api_sr_localsids_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_srv6_sid_t addr;
    u8 end_psp;
    u16 behavior;
    u32 fib_table;
    u32 vlan_index;
    u8 xconnect_nh_addr6[16];
    u8 xconnect_nh_addr4[4];
    u32 xconnect_iface_or_vrf_table;
}) vl_api_sr_localsids_details_t;
#endif

#ifndef _vl_api_defined_sr_policies_dump
#define _vl_api_defined_sr_policies_dump
typedef VL_API_PACKED(struct _vl_api_sr_policies_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sr_policies_dump_t;
#endif

#ifndef _vl_api_defined_sr_policies_details
#define _vl_api_defined_sr_policies_details
typedef VL_API_PACKED(struct _vl_api_sr_policies_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_srv6_sid_t bsid;
    u8 type;
    u8 is_encap;
    u32 fib_table;
    u8 num_sid_lists;
    vl_api_srv6_sid_list_t sid_lists[0];
}) vl_api_sr_policies_details_t;
#endif

#ifndef _vl_api_defined_sr_steering_pol_dump
#define _vl_api_defined_sr_steering_pol_dump
typedef VL_API_PACKED(struct _vl_api_sr_steering_pol_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_sr_steering_pol_dump_t;
#endif

#ifndef _vl_api_defined_sr_steering_pol_details
#define _vl_api_defined_sr_steering_pol_details
typedef VL_API_PACKED(struct _vl_api_sr_steering_pol_details {
    u16 _vl_msg_id;
    u32 context;
    u8 traffic_type;
    u32 fib_table;
    u8 prefix_addr[16];
    u32 mask_width;
    u32 sw_if_index;
    vl_api_srv6_sid_t bsid;
}) vl_api_sr_steering_pol_details_t;
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

#ifndef _vl_api_defined_srv6_sid_t_print
#define _vl_api_defined_srv6_sid_t_print
static inline void *vl_api_srv6_sid_t_print (vl_api_srv6_sid_t *a,void *handle)
{
    vl_print(handle, "vl_api_srv6_sid_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_srv6_sid_list_t_print
#define _vl_api_defined_srv6_sid_list_t_print
static inline void *vl_api_srv6_sid_list_t_print (vl_api_srv6_sid_list_t *a,void *handle)
{
    vl_print(handle, "vl_api_srv6_sid_list_t:\n");
    vl_print(handle, "num_sids: %u\n", a->num_sids);
    vl_print(handle, "weight: %u\n", a->weight);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_ip6_address_t_print
#define _vl_api_defined_sr_ip6_address_t_print
static inline void *vl_api_sr_ip6_address_t_print (vl_api_sr_ip6_address_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_ip6_address_t:\n");
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_localsid_add_del_t_print
#define _vl_api_defined_sr_localsid_add_del_t_print
static inline void *vl_api_sr_localsid_add_del_t_print (vl_api_sr_localsid_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_localsid_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_del: %u\n", a->is_del);
    vl_print(handle, "end_psp: %u\n", a->end_psp);
    vl_print(handle, "behavior: %u\n", a->behavior);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "vlan_index: %u\n", a->vlan_index);
    vl_print(handle, "fib_table: %u\n", a->fib_table);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_localsid_add_del_reply_t_print
#define _vl_api_defined_sr_localsid_add_del_reply_t_print
static inline void *vl_api_sr_localsid_add_del_reply_t_print (vl_api_sr_localsid_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_localsid_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policy_add_t_print
#define _vl_api_defined_sr_policy_add_t_print
static inline void *vl_api_sr_policy_add_t_print (vl_api_sr_policy_add_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policy_add_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "weight: %u\n", a->weight);
    vl_print(handle, "is_encap: %u\n", a->is_encap);
    vl_print(handle, "type: %u\n", a->type);
    vl_print(handle, "fib_table: %u\n", a->fib_table);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policy_add_reply_t_print
#define _vl_api_defined_sr_policy_add_reply_t_print
static inline void *vl_api_sr_policy_add_reply_t_print (vl_api_sr_policy_add_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policy_add_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policy_mod_t_print
#define _vl_api_defined_sr_policy_mod_t_print
static inline void *vl_api_sr_policy_mod_t_print (vl_api_sr_policy_mod_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policy_mod_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sr_policy_index: %u\n", a->sr_policy_index);
    vl_print(handle, "fib_table: %u\n", a->fib_table);
    vl_print(handle, "operation: %u\n", a->operation);
    vl_print(handle, "sl_index: %u\n", a->sl_index);
    vl_print(handle, "weight: %u\n", a->weight);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policy_mod_reply_t_print
#define _vl_api_defined_sr_policy_mod_reply_t_print
static inline void *vl_api_sr_policy_mod_reply_t_print (vl_api_sr_policy_mod_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policy_mod_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policy_del_t_print
#define _vl_api_defined_sr_policy_del_t_print
static inline void *vl_api_sr_policy_del_t_print (vl_api_sr_policy_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policy_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "sr_policy_index: %u\n", a->sr_policy_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policy_del_reply_t_print
#define _vl_api_defined_sr_policy_del_reply_t_print
static inline void *vl_api_sr_policy_del_reply_t_print (vl_api_sr_policy_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policy_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_set_encap_source_t_print
#define _vl_api_defined_sr_set_encap_source_t_print
static inline void *vl_api_sr_set_encap_source_t_print (vl_api_sr_set_encap_source_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_set_encap_source_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_set_encap_source_reply_t_print
#define _vl_api_defined_sr_set_encap_source_reply_t_print
static inline void *vl_api_sr_set_encap_source_reply_t_print (vl_api_sr_set_encap_source_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_set_encap_source_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_steering_add_del_t_print
#define _vl_api_defined_sr_steering_add_del_t_print
static inline void *vl_api_sr_steering_add_del_t_print (vl_api_sr_steering_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_steering_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_del: %u\n", a->is_del);
    vl_print(handle, "sr_policy_index: %u\n", a->sr_policy_index);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "mask_width: %u\n", a->mask_width);
    vl_print(handle, "sw_if_index: %u\n", a->sw_if_index);
    vl_print(handle, "traffic_type: %u\n", a->traffic_type);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_steering_add_del_reply_t_print
#define _vl_api_defined_sr_steering_add_del_reply_t_print
static inline void *vl_api_sr_steering_add_del_reply_t_print (vl_api_sr_steering_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_steering_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_localsids_dump_t_print
#define _vl_api_defined_sr_localsids_dump_t_print
static inline void *vl_api_sr_localsids_dump_t_print (vl_api_sr_localsids_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_localsids_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_localsids_details_t_print
#define _vl_api_defined_sr_localsids_details_t_print
static inline void *vl_api_sr_localsids_details_t_print (vl_api_sr_localsids_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_localsids_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "end_psp: %u\n", a->end_psp);
    vl_print(handle, "behavior: %u\n", a->behavior);
    vl_print(handle, "fib_table: %u\n", a->fib_table);
    vl_print(handle, "vlan_index: %u\n", a->vlan_index);
    vl_print(handle, "xconnect_iface_or_vrf_table: %u\n", a->xconnect_iface_or_vrf_table);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policies_dump_t_print
#define _vl_api_defined_sr_policies_dump_t_print
static inline void *vl_api_sr_policies_dump_t_print (vl_api_sr_policies_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policies_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_policies_details_t_print
#define _vl_api_defined_sr_policies_details_t_print
static inline void *vl_api_sr_policies_details_t_print (vl_api_sr_policies_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_policies_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "type: %u\n", a->type);
    vl_print(handle, "is_encap: %u\n", a->is_encap);
    vl_print(handle, "fib_table: %u\n", a->fib_table);
    vl_print(handle, "num_sid_lists: %u\n", a->num_sid_lists);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_steering_pol_dump_t_print
#define _vl_api_defined_sr_steering_pol_dump_t_print
static inline void *vl_api_sr_steering_pol_dump_t_print (vl_api_sr_steering_pol_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_steering_pol_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_sr_steering_pol_details_t_print
#define _vl_api_defined_sr_steering_pol_details_t_print
static inline void *vl_api_sr_steering_pol_details_t_print (vl_api_sr_steering_pol_details_t *a,void *handle)
{
    vl_print(handle, "vl_api_sr_steering_pol_details_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "traffic_type: %u\n", a->traffic_type);
    vl_print(handle, "fib_table: %u\n", a->fib_table);
    vl_print(handle, "mask_width: %u\n", a->mask_width);
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

#ifndef _vl_api_defined_srv6_sid_t_endian
#define _vl_api_defined_srv6_sid_t_endian
static inline void vl_api_srv6_sid_t_endian (vl_api_srv6_sid_t *a)
{
}

#endif

#ifndef _vl_api_defined_srv6_sid_list_t_endian
#define _vl_api_defined_srv6_sid_list_t_endian
static inline void vl_api_srv6_sid_list_t_endian (vl_api_srv6_sid_list_t *a)
{
    /* a->num_sids = a->num_sids (no-op) */
    a->weight = clib_net_to_host_u32(a->weight);
}

#endif

#ifndef _vl_api_defined_sr_ip6_address_t_endian
#define _vl_api_defined_sr_ip6_address_t_endian
static inline void vl_api_sr_ip6_address_t_endian (vl_api_sr_ip6_address_t *a)
{
}

#endif

#ifndef _vl_api_defined_sr_localsid_add_del_t_endian
#define _vl_api_defined_sr_localsid_add_del_t_endian
static inline void vl_api_sr_localsid_add_del_t_endian (vl_api_sr_localsid_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_del = a->is_del (no-op) */
    /* a->localsid = a->localsid (no-op) */
    /* a->end_psp = a->end_psp (no-op) */
    /* a->behavior = a->behavior (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    a->vlan_index = clib_net_to_host_u32(a->vlan_index);
    a->fib_table = clib_net_to_host_u32(a->fib_table);
}

#endif

#ifndef _vl_api_defined_sr_localsid_add_del_reply_t_endian
#define _vl_api_defined_sr_localsid_add_del_reply_t_endian
static inline void vl_api_sr_localsid_add_del_reply_t_endian (vl_api_sr_localsid_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_policy_add_t_endian
#define _vl_api_defined_sr_policy_add_t_endian
static inline void vl_api_sr_policy_add_t_endian (vl_api_sr_policy_add_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->weight = clib_net_to_host_u32(a->weight);
    /* a->is_encap = a->is_encap (no-op) */
    /* a->type = a->type (no-op) */
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    /* a->sids = a->sids (no-op) */
}

#endif

#ifndef _vl_api_defined_sr_policy_add_reply_t_endian
#define _vl_api_defined_sr_policy_add_reply_t_endian
static inline void vl_api_sr_policy_add_reply_t_endian (vl_api_sr_policy_add_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_policy_mod_t_endian
#define _vl_api_defined_sr_policy_mod_t_endian
static inline void vl_api_sr_policy_mod_t_endian (vl_api_sr_policy_mod_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->sr_policy_index = clib_net_to_host_u32(a->sr_policy_index);
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    /* a->operation = a->operation (no-op) */
    a->sl_index = clib_net_to_host_u32(a->sl_index);
    a->weight = clib_net_to_host_u32(a->weight);
    /* a->sids = a->sids (no-op) */
}

#endif

#ifndef _vl_api_defined_sr_policy_mod_reply_t_endian
#define _vl_api_defined_sr_policy_mod_reply_t_endian
static inline void vl_api_sr_policy_mod_reply_t_endian (vl_api_sr_policy_mod_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_policy_del_t_endian
#define _vl_api_defined_sr_policy_del_t_endian
static inline void vl_api_sr_policy_del_t_endian (vl_api_sr_policy_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->bsid_addr = a->bsid_addr (no-op) */
    a->sr_policy_index = clib_net_to_host_u32(a->sr_policy_index);
}

#endif

#ifndef _vl_api_defined_sr_policy_del_reply_t_endian
#define _vl_api_defined_sr_policy_del_reply_t_endian
static inline void vl_api_sr_policy_del_reply_t_endian (vl_api_sr_policy_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_set_encap_source_t_endian
#define _vl_api_defined_sr_set_encap_source_t_endian
static inline void vl_api_sr_set_encap_source_t_endian (vl_api_sr_set_encap_source_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sr_set_encap_source_reply_t_endian
#define _vl_api_defined_sr_set_encap_source_reply_t_endian
static inline void vl_api_sr_set_encap_source_reply_t_endian (vl_api_sr_set_encap_source_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_steering_add_del_t_endian
#define _vl_api_defined_sr_steering_add_del_t_endian
static inline void vl_api_sr_steering_add_del_t_endian (vl_api_sr_steering_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_del = a->is_del (no-op) */
    a->sr_policy_index = clib_net_to_host_u32(a->sr_policy_index);
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->mask_width = clib_net_to_host_u32(a->mask_width);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->traffic_type = a->traffic_type (no-op) */
}

#endif

#ifndef _vl_api_defined_sr_steering_add_del_reply_t_endian
#define _vl_api_defined_sr_steering_add_del_reply_t_endian
static inline void vl_api_sr_steering_add_del_reply_t_endian (vl_api_sr_steering_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sr_localsids_dump_t_endian
#define _vl_api_defined_sr_localsids_dump_t_endian
static inline void vl_api_sr_localsids_dump_t_endian (vl_api_sr_localsids_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sr_localsids_details_t_endian
#define _vl_api_defined_sr_localsids_details_t_endian
static inline void vl_api_sr_localsids_details_t_endian (vl_api_sr_localsids_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->addr = a->addr (no-op) */
    /* a->end_psp = a->end_psp (no-op) */
    a->behavior = clib_net_to_host_u16(a->behavior);
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    a->vlan_index = clib_net_to_host_u32(a->vlan_index);
    a->xconnect_iface_or_vrf_table = clib_net_to_host_u32(a->xconnect_iface_or_vrf_table);
}

#endif

#ifndef _vl_api_defined_sr_policies_dump_t_endian
#define _vl_api_defined_sr_policies_dump_t_endian
static inline void vl_api_sr_policies_dump_t_endian (vl_api_sr_policies_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sr_policies_details_t_endian
#define _vl_api_defined_sr_policies_details_t_endian
static inline void vl_api_sr_policies_details_t_endian (vl_api_sr_policies_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->bsid = a->bsid (no-op) */
    /* a->type = a->type (no-op) */
    /* a->is_encap = a->is_encap (no-op) */
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    /* a->num_sid_lists = a->num_sid_lists (no-op) */
}

#endif

#ifndef _vl_api_defined_sr_steering_pol_dump_t_endian
#define _vl_api_defined_sr_steering_pol_dump_t_endian
static inline void vl_api_sr_steering_pol_dump_t_endian (vl_api_sr_steering_pol_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_sr_steering_pol_details_t_endian
#define _vl_api_defined_sr_steering_pol_details_t_endian
static inline void vl_api_sr_steering_pol_details_t_endian (vl_api_sr_steering_pol_details_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    /* a->traffic_type = a->traffic_type (no-op) */
    a->fib_table = clib_net_to_host_u32(a->fib_table);
    a->mask_width = clib_net_to_host_u32(a->mask_width);
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
    /* a->bsid = a->bsid (no-op) */
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(sr.api, 1, 2, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(sr.api, 0xaa3993c3)

#endif

