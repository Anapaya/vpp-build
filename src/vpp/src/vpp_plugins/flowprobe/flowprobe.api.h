/*
 * VLIB API definitions 2020-06-13 06:01:44
 * Input file: flowprobe.api
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
#warning no content included from flowprobe.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL, vl_api_flowprobe_tx_interface_add_del_t_handler)
vl_msg_id(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL_REPLY, vl_api_flowprobe_tx_interface_add_del_reply_t_handler)
vl_msg_id(VL_API_FLOWPROBE_PARAMS, vl_api_flowprobe_params_t_handler)
vl_msg_id(VL_API_FLOWPROBE_PARAMS_REPLY, vl_api_flowprobe_params_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_flowprobe_tx_interface_add_del_t, 1)
vl_msg_name(vl_api_flowprobe_tx_interface_add_del_reply_t, 1)
vl_msg_name(vl_api_flowprobe_params_t, 1)
vl_msg_name(vl_api_flowprobe_params_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_flowprobe \
_(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL, flowprobe_tx_interface_add_del, 10c2fbab) \
_(VL_API_FLOWPROBE_TX_INTERFACE_ADD_DEL_REPLY, flowprobe_tx_interface_add_del_reply, e8d4e804) \
_(VL_API_FLOWPROBE_PARAMS, flowprobe_params, 574adc1c) \
_(VL_API_FLOWPROBE_PARAMS_REPLY, flowprobe_params_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_flowprobe_api
#define included_flowprobe_api
#ifndef _vl_api_defined_flowprobe_tx_interface_add_del
#define _vl_api_defined_flowprobe_tx_interface_add_del
typedef VL_API_PACKED(struct _vl_api_flowprobe_tx_interface_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_add;
    u8 which;
    u32 sw_if_index;
}) vl_api_flowprobe_tx_interface_add_del_t;
#endif

#ifndef _vl_api_defined_flowprobe_tx_interface_add_del_reply
#define _vl_api_defined_flowprobe_tx_interface_add_del_reply
typedef VL_API_PACKED(struct _vl_api_flowprobe_tx_interface_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_flowprobe_tx_interface_add_del_reply_t;
#endif

#ifndef _vl_api_defined_flowprobe_params
#define _vl_api_defined_flowprobe_params
typedef VL_API_PACKED(struct _vl_api_flowprobe_params {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 record_l2;
    u8 record_l3;
    u8 record_l4;
    u32 active_timer;
    u32 passive_timer;
}) vl_api_flowprobe_params_t;
#endif

#ifndef _vl_api_defined_flowprobe_params_reply
#define _vl_api_defined_flowprobe_params_reply
typedef VL_API_PACKED(struct _vl_api_flowprobe_params_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_flowprobe_params_reply_t;
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

/***** manual: vl_api_flowprobe_tx_interface_add_del_t_print  *****/

#ifndef _vl_api_defined_flowprobe_tx_interface_add_del_reply_t_print
#define _vl_api_defined_flowprobe_tx_interface_add_del_reply_t_print
static inline void *vl_api_flowprobe_tx_interface_add_del_reply_t_print (vl_api_flowprobe_tx_interface_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_flowprobe_tx_interface_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_flowprobe_params_t_print
#define _vl_api_defined_flowprobe_params_t_print
static inline void *vl_api_flowprobe_params_t_print (vl_api_flowprobe_params_t *a,void *handle)
{
    vl_print(handle, "vl_api_flowprobe_params_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "record_l2: %u\n", a->record_l2);
    vl_print(handle, "record_l3: %u\n", a->record_l3);
    vl_print(handle, "record_l4: %u\n", a->record_l4);
    vl_print(handle, "active_timer: %u\n", a->active_timer);
    vl_print(handle, "passive_timer: %u\n", a->passive_timer);
    return handle;
}

#endif

#ifndef _vl_api_defined_flowprobe_params_reply_t_print
#define _vl_api_defined_flowprobe_params_reply_t_print
static inline void *vl_api_flowprobe_params_reply_t_print (vl_api_flowprobe_params_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_flowprobe_params_reply_t:\n");
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

#ifndef _vl_api_defined_flowprobe_tx_interface_add_del_t_endian
#define _vl_api_defined_flowprobe_tx_interface_add_del_t_endian
static inline void vl_api_flowprobe_tx_interface_add_del_t_endian (vl_api_flowprobe_tx_interface_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_add = a->is_add (no-op) */
    /* a->which = a->which (no-op) */
    a->sw_if_index = clib_net_to_host_u32(a->sw_if_index);
}

#endif

#ifndef _vl_api_defined_flowprobe_tx_interface_add_del_reply_t_endian
#define _vl_api_defined_flowprobe_tx_interface_add_del_reply_t_endian
static inline void vl_api_flowprobe_tx_interface_add_del_reply_t_endian (vl_api_flowprobe_tx_interface_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_flowprobe_params_t_endian
#define _vl_api_defined_flowprobe_params_t_endian
static inline void vl_api_flowprobe_params_t_endian (vl_api_flowprobe_params_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->record_l2 = a->record_l2 (no-op) */
    /* a->record_l3 = a->record_l3 (no-op) */
    /* a->record_l4 = a->record_l4 (no-op) */
    a->active_timer = clib_net_to_host_u32(a->active_timer);
    a->passive_timer = clib_net_to_host_u32(a->passive_timer);
}

#endif

#ifndef _vl_api_defined_flowprobe_params_reply_t_endian
#define _vl_api_defined_flowprobe_params_reply_t_endian
static inline void vl_api_flowprobe_params_reply_t_endian (vl_api_flowprobe_params_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(flowprobe.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(flowprobe.api, 0xf2f0286c)

#endif

