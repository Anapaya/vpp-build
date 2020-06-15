/*
 * VLIB API definitions 2020-06-13 05:56:03
 * Input file: lisp_gpe.api
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
#warning no content included from lisp_gpe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_GPE_ADD_DEL_FWD_ENTRY, vl_api_gpe_add_del_fwd_entry_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_FWD_ENTRY_REPLY, vl_api_gpe_add_del_fwd_entry_reply_t_handler)
vl_msg_id(VL_API_GPE_ENABLE_DISABLE, vl_api_gpe_enable_disable_t_handler)
vl_msg_id(VL_API_GPE_ENABLE_DISABLE_REPLY, vl_api_gpe_enable_disable_reply_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_IFACE, vl_api_gpe_add_del_iface_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_IFACE_REPLY, vl_api_gpe_add_del_iface_reply_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_VNIS_GET, vl_api_gpe_fwd_entry_vnis_get_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_VNIS_GET_REPLY, vl_api_gpe_fwd_entry_vnis_get_reply_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRIES_GET, vl_api_gpe_fwd_entries_get_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRIES_GET_REPLY, vl_api_gpe_fwd_entries_get_reply_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_PATH_DUMP, vl_api_gpe_fwd_entry_path_dump_t_handler)
vl_msg_id(VL_API_GPE_FWD_ENTRY_PATH_DETAILS, vl_api_gpe_fwd_entry_path_details_t_handler)
vl_msg_id(VL_API_GPE_SET_ENCAP_MODE, vl_api_gpe_set_encap_mode_t_handler)
vl_msg_id(VL_API_GPE_SET_ENCAP_MODE_REPLY, vl_api_gpe_set_encap_mode_reply_t_handler)
vl_msg_id(VL_API_GPE_GET_ENCAP_MODE, vl_api_gpe_get_encap_mode_t_handler)
vl_msg_id(VL_API_GPE_GET_ENCAP_MODE_REPLY, vl_api_gpe_get_encap_mode_reply_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH, vl_api_gpe_add_del_native_fwd_rpath_t_handler)
vl_msg_id(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH_REPLY, vl_api_gpe_add_del_native_fwd_rpath_reply_t_handler)
vl_msg_id(VL_API_GPE_NATIVE_FWD_RPATHS_GET, vl_api_gpe_native_fwd_rpaths_get_t_handler)
vl_msg_id(VL_API_GPE_NATIVE_FWD_RPATHS_GET_REPLY, vl_api_gpe_native_fwd_rpaths_get_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_gpe_add_del_fwd_entry_t, 1)
vl_msg_name(vl_api_gpe_add_del_fwd_entry_reply_t, 1)
vl_msg_name(vl_api_gpe_enable_disable_t, 1)
vl_msg_name(vl_api_gpe_enable_disable_reply_t, 1)
vl_msg_name(vl_api_gpe_add_del_iface_t, 1)
vl_msg_name(vl_api_gpe_add_del_iface_reply_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_vnis_get_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_vnis_get_reply_t, 1)
vl_msg_name(vl_api_gpe_fwd_entries_get_t, 1)
vl_msg_name(vl_api_gpe_fwd_entries_get_reply_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_path_dump_t, 1)
vl_msg_name(vl_api_gpe_fwd_entry_path_details_t, 1)
vl_msg_name(vl_api_gpe_set_encap_mode_t, 1)
vl_msg_name(vl_api_gpe_set_encap_mode_reply_t, 1)
vl_msg_name(vl_api_gpe_get_encap_mode_t, 1)
vl_msg_name(vl_api_gpe_get_encap_mode_reply_t, 1)
vl_msg_name(vl_api_gpe_add_del_native_fwd_rpath_t, 1)
vl_msg_name(vl_api_gpe_add_del_native_fwd_rpath_reply_t, 1)
vl_msg_name(vl_api_gpe_native_fwd_rpaths_get_t, 1)
vl_msg_name(vl_api_gpe_native_fwd_rpaths_get_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lisp_gpe \
_(VL_API_GPE_ADD_DEL_FWD_ENTRY, gpe_add_del_fwd_entry, afbf857a) \
_(VL_API_GPE_ADD_DEL_FWD_ENTRY_REPLY, gpe_add_del_fwd_entry_reply, efe5f176) \
_(VL_API_GPE_ENABLE_DISABLE, gpe_enable_disable, eb0e943b) \
_(VL_API_GPE_ENABLE_DISABLE_REPLY, gpe_enable_disable_reply, e8d4e804) \
_(VL_API_GPE_ADD_DEL_IFACE, gpe_add_del_iface, 42d6b533) \
_(VL_API_GPE_ADD_DEL_IFACE_REPLY, gpe_add_del_iface_reply, e8d4e804) \
_(VL_API_GPE_FWD_ENTRY_VNIS_GET, gpe_fwd_entry_vnis_get, 51077d14) \
_(VL_API_GPE_FWD_ENTRY_VNIS_GET_REPLY, gpe_fwd_entry_vnis_get_reply, aa70da20) \
_(VL_API_GPE_FWD_ENTRIES_GET, gpe_fwd_entries_get, 8d1f2fe9) \
_(VL_API_GPE_FWD_ENTRIES_GET_REPLY, gpe_fwd_entries_get_reply, 07b02c34) \
_(VL_API_GPE_FWD_ENTRY_PATH_DUMP, gpe_fwd_entry_path_dump, 39bce980) \
_(VL_API_GPE_FWD_ENTRY_PATH_DETAILS, gpe_fwd_entry_path_details, a9bdc1f1) \
_(VL_API_GPE_SET_ENCAP_MODE, gpe_set_encap_mode, f3f93ce9) \
_(VL_API_GPE_SET_ENCAP_MODE_REPLY, gpe_set_encap_mode_reply, e8d4e804) \
_(VL_API_GPE_GET_ENCAP_MODE, gpe_get_encap_mode, 51077d14) \
_(VL_API_GPE_GET_ENCAP_MODE_REPLY, gpe_get_encap_mode_reply, 36e3f7ca) \
_(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH, gpe_add_del_native_fwd_rpath, bfc42b8f) \
_(VL_API_GPE_ADD_DEL_NATIVE_FWD_RPATH_REPLY, gpe_add_del_native_fwd_rpath_reply, e8d4e804) \
_(VL_API_GPE_NATIVE_FWD_RPATHS_GET, gpe_native_fwd_rpaths_get, c5e0d91b) \
_(VL_API_GPE_NATIVE_FWD_RPATHS_GET_REPLY, gpe_native_fwd_rpaths_get_reply, 1e4536e3) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_lisp_gpe_api
#define included_lisp_gpe_api
#ifndef _vl_api_defined_gpe_locator
#define _vl_api_defined_gpe_locator
typedef VL_API_PACKED(struct _vl_api_gpe_locator {
    u8 is_ip4;
    u8 weight;
    u8 addr[16];
}) vl_api_gpe_locator_t;
#endif

#ifndef _vl_api_defined_gpe_fwd_entry
#define _vl_api_defined_gpe_fwd_entry
typedef VL_API_PACKED(struct _vl_api_gpe_fwd_entry {
    u32 fwd_entry_index;
    u32 dp_table;
    u8 eid_type;
    u8 leid_prefix_len;
    u8 reid_prefix_len;
    u8 leid[16];
    u8 reid[16];
    u32 vni;
    u8 action;
}) vl_api_gpe_fwd_entry_t;
#endif

#ifndef _vl_api_defined_gpe_native_fwd_rpath
#define _vl_api_defined_gpe_native_fwd_rpath
typedef VL_API_PACKED(struct _vl_api_gpe_native_fwd_rpath {
    u32 fib_index;
    u32 nh_sw_if_index;
    u8 is_ip4;
    u8 nh_addr[16];
}) vl_api_gpe_native_fwd_rpath_t;
#endif

#ifndef _vl_api_defined_gpe_add_del_fwd_entry
#define _vl_api_defined_gpe_add_del_fwd_entry
typedef VL_API_PACKED(struct _vl_api_gpe_add_del_fwd_entry {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 eid_type;
    u8 rmt_eid[16];
    u8 lcl_eid[16];
    u8 rmt_len;
    u8 lcl_len;
    u32 vni;
    u32 dp_table;
    u8 action;
    u32 loc_num;
    vl_api_gpe_locator_t locs[0];
}) vl_api_gpe_add_del_fwd_entry_t;
#endif

#ifndef _vl_api_defined_gpe_add_del_fwd_entry_reply
#define _vl_api_defined_gpe_add_del_fwd_entry_reply
typedef VL_API_PACKED(struct _vl_api_gpe_add_del_fwd_entry_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 fwd_entry_index;
}) vl_api_gpe_add_del_fwd_entry_reply_t;
#endif

#ifndef _vl_api_defined_gpe_enable_disable
#define _vl_api_defined_gpe_enable_disable
typedef VL_API_PACKED(struct _vl_api_gpe_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_en;
}) vl_api_gpe_enable_disable_t;
#endif

#ifndef _vl_api_defined_gpe_enable_disable_reply
#define _vl_api_defined_gpe_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_gpe_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gpe_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_gpe_add_del_iface
#define _vl_api_defined_gpe_add_del_iface
typedef VL_API_PACKED(struct _vl_api_gpe_add_del_iface {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 is_l2;
    u32 dp_table;
    u32 vni;
}) vl_api_gpe_add_del_iface_t;
#endif

#ifndef _vl_api_defined_gpe_add_del_iface_reply
#define _vl_api_defined_gpe_add_del_iface_reply
typedef VL_API_PACKED(struct _vl_api_gpe_add_del_iface_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gpe_add_del_iface_reply_t;
#endif

#ifndef _vl_api_defined_gpe_fwd_entry_vnis_get
#define _vl_api_defined_gpe_fwd_entry_vnis_get
typedef VL_API_PACKED(struct _vl_api_gpe_fwd_entry_vnis_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gpe_fwd_entry_vnis_get_t;
#endif

#ifndef _vl_api_defined_gpe_fwd_entry_vnis_get_reply
#define _vl_api_defined_gpe_fwd_entry_vnis_get_reply
typedef VL_API_PACKED(struct _vl_api_gpe_fwd_entry_vnis_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    u32 vnis[0];
}) vl_api_gpe_fwd_entry_vnis_get_reply_t;
#endif

#ifndef _vl_api_defined_gpe_fwd_entries_get
#define _vl_api_defined_gpe_fwd_entries_get
typedef VL_API_PACKED(struct _vl_api_gpe_fwd_entries_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 vni;
}) vl_api_gpe_fwd_entries_get_t;
#endif

#ifndef _vl_api_defined_gpe_fwd_entries_get_reply
#define _vl_api_defined_gpe_fwd_entries_get_reply
typedef VL_API_PACKED(struct _vl_api_gpe_fwd_entries_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_gpe_fwd_entry_t entries[0];
}) vl_api_gpe_fwd_entries_get_reply_t;
#endif

#ifndef _vl_api_defined_gpe_fwd_entry_path_dump
#define _vl_api_defined_gpe_fwd_entry_path_dump
typedef VL_API_PACKED(struct _vl_api_gpe_fwd_entry_path_dump {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u32 fwd_entry_index;
}) vl_api_gpe_fwd_entry_path_dump_t;
#endif

#ifndef _vl_api_defined_gpe_fwd_entry_path_details
#define _vl_api_defined_gpe_fwd_entry_path_details
typedef VL_API_PACKED(struct _vl_api_gpe_fwd_entry_path_details {
    u16 _vl_msg_id;
    u32 context;
    vl_api_gpe_locator_t lcl_loc;
    vl_api_gpe_locator_t rmt_loc;
}) vl_api_gpe_fwd_entry_path_details_t;
#endif

#ifndef _vl_api_defined_gpe_set_encap_mode
#define _vl_api_defined_gpe_set_encap_mode
typedef VL_API_PACKED(struct _vl_api_gpe_set_encap_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 mode;
}) vl_api_gpe_set_encap_mode_t;
#endif

#ifndef _vl_api_defined_gpe_set_encap_mode_reply
#define _vl_api_defined_gpe_set_encap_mode_reply
typedef VL_API_PACKED(struct _vl_api_gpe_set_encap_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gpe_set_encap_mode_reply_t;
#endif

#ifndef _vl_api_defined_gpe_get_encap_mode
#define _vl_api_defined_gpe_get_encap_mode
typedef VL_API_PACKED(struct _vl_api_gpe_get_encap_mode {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
}) vl_api_gpe_get_encap_mode_t;
#endif

#ifndef _vl_api_defined_gpe_get_encap_mode_reply
#define _vl_api_defined_gpe_get_encap_mode_reply
typedef VL_API_PACKED(struct _vl_api_gpe_get_encap_mode_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 encap_mode;
}) vl_api_gpe_get_encap_mode_reply_t;
#endif

#ifndef _vl_api_defined_gpe_add_del_native_fwd_rpath
#define _vl_api_defined_gpe_add_del_native_fwd_rpath
typedef VL_API_PACKED(struct _vl_api_gpe_add_del_native_fwd_rpath {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u32 table_id;
    u32 nh_sw_if_index;
    u8 is_ip4;
    u8 nh_addr[16];
}) vl_api_gpe_add_del_native_fwd_rpath_t;
#endif

#ifndef _vl_api_defined_gpe_add_del_native_fwd_rpath_reply
#define _vl_api_defined_gpe_add_del_native_fwd_rpath_reply
typedef VL_API_PACKED(struct _vl_api_gpe_add_del_native_fwd_rpath_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_gpe_add_del_native_fwd_rpath_reply_t;
#endif

#ifndef _vl_api_defined_gpe_native_fwd_rpaths_get
#define _vl_api_defined_gpe_native_fwd_rpaths_get
typedef VL_API_PACKED(struct _vl_api_gpe_native_fwd_rpaths_get {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ip4;
}) vl_api_gpe_native_fwd_rpaths_get_t;
#endif

#ifndef _vl_api_defined_gpe_native_fwd_rpaths_get_reply
#define _vl_api_defined_gpe_native_fwd_rpaths_get_reply
typedef VL_API_PACKED(struct _vl_api_gpe_native_fwd_rpaths_get_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u32 count;
    vl_api_gpe_native_fwd_rpath_t entries[0];
}) vl_api_gpe_native_fwd_rpaths_get_reply_t;
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

/***** manual: vl_api_gpe_locator_t_print  *****/

/***** manual: vl_api_gpe_fwd_entry_t_print  *****/

/***** manual: vl_api_gpe_native_fwd_rpath_t_print  *****/

/***** manual: vl_api_gpe_add_del_fwd_entry_t_print  *****/

#ifndef _vl_api_defined_gpe_add_del_fwd_entry_reply_t_print
#define _vl_api_defined_gpe_add_del_fwd_entry_reply_t_print
static inline void *vl_api_gpe_add_del_fwd_entry_reply_t_print (vl_api_gpe_add_del_fwd_entry_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_add_del_fwd_entry_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "fwd_entry_index: %u\n", a->fwd_entry_index);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_enable_disable_t_print
#define _vl_api_defined_gpe_enable_disable_t_print
static inline void *vl_api_gpe_enable_disable_t_print (vl_api_gpe_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_en: %u\n", a->is_en);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_enable_disable_reply_t_print
#define _vl_api_defined_gpe_enable_disable_reply_t_print
static inline void *vl_api_gpe_enable_disable_reply_t_print (vl_api_gpe_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_add_del_iface_t_print
#define _vl_api_defined_gpe_add_del_iface_t_print
static inline void *vl_api_gpe_add_del_iface_t_print (vl_api_gpe_add_del_iface_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_add_del_iface_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "is_l2: %u\n", a->is_l2);
    vl_print(handle, "dp_table: %u\n", a->dp_table);
    vl_print(handle, "vni: %u\n", a->vni);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_add_del_iface_reply_t_print
#define _vl_api_defined_gpe_add_del_iface_reply_t_print
static inline void *vl_api_gpe_add_del_iface_reply_t_print (vl_api_gpe_add_del_iface_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_add_del_iface_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_fwd_entry_vnis_get_t_print
#define _vl_api_defined_gpe_fwd_entry_vnis_get_t_print
static inline void *vl_api_gpe_fwd_entry_vnis_get_t_print (vl_api_gpe_fwd_entry_vnis_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_fwd_entry_vnis_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

/***** manual: vl_api_gpe_fwd_entry_vnis_get_reply_t_print  *****/

#ifndef _vl_api_defined_gpe_fwd_entries_get_t_print
#define _vl_api_defined_gpe_fwd_entries_get_t_print
static inline void *vl_api_gpe_fwd_entries_get_t_print (vl_api_gpe_fwd_entries_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_fwd_entries_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "vni: %u\n", a->vni);
    return handle;
}

#endif

/***** manual: vl_api_gpe_fwd_entries_get_reply_t_print  *****/

#ifndef _vl_api_defined_gpe_fwd_entry_path_dump_t_print
#define _vl_api_defined_gpe_fwd_entry_path_dump_t_print
static inline void *vl_api_gpe_fwd_entry_path_dump_t_print (vl_api_gpe_fwd_entry_path_dump_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_fwd_entry_path_dump_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "fwd_entry_index: %u\n", a->fwd_entry_index);
    return handle;
}

#endif

/***** manual: vl_api_gpe_fwd_entry_path_details_t_print  *****/

#ifndef _vl_api_defined_gpe_set_encap_mode_t_print
#define _vl_api_defined_gpe_set_encap_mode_t_print
static inline void *vl_api_gpe_set_encap_mode_t_print (vl_api_gpe_set_encap_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_set_encap_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "mode: %u\n", a->mode);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_set_encap_mode_reply_t_print
#define _vl_api_defined_gpe_set_encap_mode_reply_t_print
static inline void *vl_api_gpe_set_encap_mode_reply_t_print (vl_api_gpe_set_encap_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_set_encap_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_get_encap_mode_t_print
#define _vl_api_defined_gpe_get_encap_mode_t_print
static inline void *vl_api_gpe_get_encap_mode_t_print (vl_api_gpe_get_encap_mode_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_get_encap_mode_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_get_encap_mode_reply_t_print
#define _vl_api_defined_gpe_get_encap_mode_reply_t_print
static inline void *vl_api_gpe_get_encap_mode_reply_t_print (vl_api_gpe_get_encap_mode_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_get_encap_mode_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "encap_mode: %u\n", a->encap_mode);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_add_del_native_fwd_rpath_t_print
#define _vl_api_defined_gpe_add_del_native_fwd_rpath_t_print
static inline void *vl_api_gpe_add_del_native_fwd_rpath_t_print (vl_api_gpe_add_del_native_fwd_rpath_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_add_del_native_fwd_rpath_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_add: %u\n", a->is_add);
    vl_print(handle, "table_id: %u\n", a->table_id);
    vl_print(handle, "nh_sw_if_index: %u\n", a->nh_sw_if_index);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_add_del_native_fwd_rpath_reply_t_print
#define _vl_api_defined_gpe_add_del_native_fwd_rpath_reply_t_print
static inline void *vl_api_gpe_add_del_native_fwd_rpath_reply_t_print (vl_api_gpe_add_del_native_fwd_rpath_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_add_del_native_fwd_rpath_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_gpe_native_fwd_rpaths_get_t_print
#define _vl_api_defined_gpe_native_fwd_rpaths_get_t_print
static inline void *vl_api_gpe_native_fwd_rpaths_get_t_print (vl_api_gpe_native_fwd_rpaths_get_t *a,void *handle)
{
    vl_print(handle, "vl_api_gpe_native_fwd_rpaths_get_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ip4: %u\n", a->is_ip4);
    return handle;
}

#endif

/***** manual: vl_api_gpe_native_fwd_rpaths_get_reply_t_print  *****/


#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

/***** manual: vl_api_gpe_locator_t_endian  *****/

/***** manual: vl_api_gpe_fwd_entry_t_endian  *****/

/***** manual: vl_api_gpe_native_fwd_rpath_t_endian  *****/

/***** manual: vl_api_gpe_add_del_fwd_entry_t_endian  *****/

#ifndef _vl_api_defined_gpe_add_del_fwd_entry_reply_t_endian
#define _vl_api_defined_gpe_add_del_fwd_entry_reply_t_endian
static inline void vl_api_gpe_add_del_fwd_entry_reply_t_endian (vl_api_gpe_add_del_fwd_entry_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    a->fwd_entry_index = clib_net_to_host_u32(a->fwd_entry_index);
}

#endif

#ifndef _vl_api_defined_gpe_enable_disable_t_endian
#define _vl_api_defined_gpe_enable_disable_t_endian
static inline void vl_api_gpe_enable_disable_t_endian (vl_api_gpe_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_en = a->is_en (no-op) */
}

#endif

#ifndef _vl_api_defined_gpe_enable_disable_reply_t_endian
#define _vl_api_defined_gpe_enable_disable_reply_t_endian
static inline void vl_api_gpe_enable_disable_reply_t_endian (vl_api_gpe_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gpe_add_del_iface_t_endian
#define _vl_api_defined_gpe_add_del_iface_t_endian
static inline void vl_api_gpe_add_del_iface_t_endian (vl_api_gpe_add_del_iface_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->is_l2 = a->is_l2 (no-op) */
    a->dp_table = clib_net_to_host_u32(a->dp_table);
    a->vni = clib_net_to_host_u32(a->vni);
}

#endif

#ifndef _vl_api_defined_gpe_add_del_iface_reply_t_endian
#define _vl_api_defined_gpe_add_del_iface_reply_t_endian
static inline void vl_api_gpe_add_del_iface_reply_t_endian (vl_api_gpe_add_del_iface_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gpe_fwd_entry_vnis_get_t_endian
#define _vl_api_defined_gpe_fwd_entry_vnis_get_t_endian
static inline void vl_api_gpe_fwd_entry_vnis_get_t_endian (vl_api_gpe_fwd_entry_vnis_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

/***** manual: vl_api_gpe_fwd_entry_vnis_get_reply_t_endian  *****/

#ifndef _vl_api_defined_gpe_fwd_entries_get_t_endian
#define _vl_api_defined_gpe_fwd_entries_get_t_endian
static inline void vl_api_gpe_fwd_entries_get_t_endian (vl_api_gpe_fwd_entries_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->vni = clib_net_to_host_u32(a->vni);
}

#endif

/***** manual: vl_api_gpe_fwd_entries_get_reply_t_endian  *****/

#ifndef _vl_api_defined_gpe_fwd_entry_path_dump_t_endian
#define _vl_api_defined_gpe_fwd_entry_path_dump_t_endian
static inline void vl_api_gpe_fwd_entry_path_dump_t_endian (vl_api_gpe_fwd_entry_path_dump_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    a->fwd_entry_index = clib_net_to_host_u32(a->fwd_entry_index);
}

#endif

/***** manual: vl_api_gpe_fwd_entry_path_details_t_endian  *****/

#ifndef _vl_api_defined_gpe_set_encap_mode_t_endian
#define _vl_api_defined_gpe_set_encap_mode_t_endian
static inline void vl_api_gpe_set_encap_mode_t_endian (vl_api_gpe_set_encap_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->mode = a->mode (no-op) */
}

#endif

#ifndef _vl_api_defined_gpe_set_encap_mode_reply_t_endian
#define _vl_api_defined_gpe_set_encap_mode_reply_t_endian
static inline void vl_api_gpe_set_encap_mode_reply_t_endian (vl_api_gpe_set_encap_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gpe_get_encap_mode_t_endian
#define _vl_api_defined_gpe_get_encap_mode_t_endian
static inline void vl_api_gpe_get_encap_mode_t_endian (vl_api_gpe_get_encap_mode_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_gpe_get_encap_mode_reply_t_endian
#define _vl_api_defined_gpe_get_encap_mode_reply_t_endian
static inline void vl_api_gpe_get_encap_mode_reply_t_endian (vl_api_gpe_get_encap_mode_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->encap_mode = a->encap_mode (no-op) */
}

#endif

#ifndef _vl_api_defined_gpe_add_del_native_fwd_rpath_t_endian
#define _vl_api_defined_gpe_add_del_native_fwd_rpath_t_endian
static inline void vl_api_gpe_add_del_native_fwd_rpath_t_endian (vl_api_gpe_add_del_native_fwd_rpath_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    a->table_id = clib_net_to_host_u32(a->table_id);
    a->nh_sw_if_index = clib_net_to_host_u32(a->nh_sw_if_index);
    /* a->is_ip4 = a->is_ip4 (no-op) */
}

#endif

#ifndef _vl_api_defined_gpe_add_del_native_fwd_rpath_reply_t_endian
#define _vl_api_defined_gpe_add_del_native_fwd_rpath_reply_t_endian
static inline void vl_api_gpe_add_del_native_fwd_rpath_reply_t_endian (vl_api_gpe_add_del_native_fwd_rpath_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_gpe_native_fwd_rpaths_get_t_endian
#define _vl_api_defined_gpe_native_fwd_rpaths_get_t_endian
static inline void vl_api_gpe_native_fwd_rpaths_get_t_endian (vl_api_gpe_native_fwd_rpaths_get_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip4 = a->is_ip4 (no-op) */
}

#endif

/***** manual: vl_api_gpe_native_fwd_rpaths_get_reply_t_endian  *****/


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(lisp_gpe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lisp_gpe.api, 0xc6e77c9)

#endif

