#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_vnet_srv6_sr_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_vnet_srv6_sr_api_json

#include <stdlib.h>
#include <stddef.h>
#include <arpa/inet.h>
#include <vapi/vapi_internal.h>
#include <vapi/vapi.h>
#include <vapi/vapi_dbg.h>

#ifdef __cplusplus
extern "C" {
#endif
#include <vapi/vpe.api.vapi.h>

extern vapi_msg_id_t vapi_msg_id_sr_steering_pol_dump;
extern vapi_msg_id_t vapi_msg_id_sr_steering_pol_details;
extern vapi_msg_id_t vapi_msg_id_sr_policy_mod_reply;
extern vapi_msg_id_t vapi_msg_id_sr_localsid_add_del;
extern vapi_msg_id_t vapi_msg_id_sr_steering_add_del;
extern vapi_msg_id_t vapi_msg_id_sr_set_encap_source;
extern vapi_msg_id_t vapi_msg_id_sr_localsids_dump;
extern vapi_msg_id_t vapi_msg_id_sr_policy_add;
extern vapi_msg_id_t vapi_msg_id_sr_policies_dump;
extern vapi_msg_id_t vapi_msg_id_sr_policy_mod;
extern vapi_msg_id_t vapi_msg_id_sr_steering_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_sr_localsids_details;
extern vapi_msg_id_t vapi_msg_id_sr_policy_del_reply;
extern vapi_msg_id_t vapi_msg_id_sr_localsid_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_sr_policy_add_reply;
extern vapi_msg_id_t vapi_msg_id_sr_policy_del;
extern vapi_msg_id_t vapi_msg_id_sr_policies_details;
extern vapi_msg_id_t vapi_msg_id_sr_set_encap_source_reply;

#define DEFINE_VAPI_MSG_IDS_SR_API_JSON\
  vapi_msg_id_t vapi_msg_id_sr_steering_pol_dump;\
  vapi_msg_id_t vapi_msg_id_sr_steering_pol_details;\
  vapi_msg_id_t vapi_msg_id_sr_policy_mod_reply;\
  vapi_msg_id_t vapi_msg_id_sr_localsid_add_del;\
  vapi_msg_id_t vapi_msg_id_sr_steering_add_del;\
  vapi_msg_id_t vapi_msg_id_sr_set_encap_source;\
  vapi_msg_id_t vapi_msg_id_sr_localsids_dump;\
  vapi_msg_id_t vapi_msg_id_sr_policy_add;\
  vapi_msg_id_t vapi_msg_id_sr_policies_dump;\
  vapi_msg_id_t vapi_msg_id_sr_policy_mod;\
  vapi_msg_id_t vapi_msg_id_sr_steering_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_sr_localsids_details;\
  vapi_msg_id_t vapi_msg_id_sr_policy_del_reply;\
  vapi_msg_id_t vapi_msg_id_sr_localsid_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_sr_policy_add_reply;\
  vapi_msg_id_t vapi_msg_id_sr_policy_del;\
  vapi_msg_id_t vapi_msg_id_sr_policies_details;\
  vapi_msg_id_t vapi_msg_id_sr_set_encap_source_reply;


#ifndef defined_vapi_type_srv6_sid
#define defined_vapi_type_srv6_sid
typedef struct __attribute__((__packed__)) {
  u8 addr[16];
} vapi_type_srv6_sid;

static inline void vapi_type_srv6_sid_hton(vapi_type_srv6_sid *msg)
{

}

static inline void vapi_type_srv6_sid_ntoh(vapi_type_srv6_sid *msg)
{

}
#endif

#ifndef defined_vapi_type_srv6_sid_list
#define defined_vapi_type_srv6_sid_list
typedef struct __attribute__((__packed__)) {
  u8 num_sids;
  u32 weight;
  vapi_type_srv6_sid sids[16];
} vapi_type_srv6_sid_list;

static inline void vapi_type_srv6_sid_list_hton(vapi_type_srv6_sid_list *msg)
{
  msg->weight = htobe32(msg->weight);
}

static inline void vapi_type_srv6_sid_list_ntoh(vapi_type_srv6_sid_list *msg)
{
  msg->weight = be32toh(msg->weight);
}
#endif

#ifndef defined_vapi_type_sr_ip6_address
#define defined_vapi_type_sr_ip6_address
typedef struct __attribute__((__packed__)) {
  u8 data[16];
} vapi_type_sr_ip6_address;

static inline void vapi_type_sr_ip6_address_hton(vapi_type_sr_ip6_address *msg)
{

}

static inline void vapi_type_sr_ip6_address_ntoh(vapi_type_sr_ip6_address *msg)
{

}
#endif

#ifndef defined_vapi_msg_sr_steering_pol_details
#define defined_vapi_msg_sr_steering_pol_details
typedef struct __attribute__ ((__packed__)) {
  u8 traffic_type;
  u32 fib_table;
  u8 prefix_addr[16];
  u32 mask_width;
  u32 sw_if_index;
  vapi_type_srv6_sid bsid; 
} vapi_payload_sr_steering_pol_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_steering_pol_details payload;
} vapi_msg_sr_steering_pol_details;

static inline void vapi_msg_sr_steering_pol_details_payload_hton(vapi_payload_sr_steering_pol_details *payload)
{
  payload->fib_table = htobe32(payload->fib_table);
  payload->mask_width = htobe32(payload->mask_width);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sr_steering_pol_details_payload_ntoh(vapi_payload_sr_steering_pol_details *payload)
{
  payload->fib_table = be32toh(payload->fib_table);
  payload->mask_width = be32toh(payload->mask_width);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sr_steering_pol_details_hton(vapi_msg_sr_steering_pol_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_pol_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_steering_pol_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_steering_pol_details_ntoh(vapi_msg_sr_steering_pol_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_pol_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_steering_pol_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_steering_pol_details_msg_size(vapi_msg_sr_steering_pol_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_steering_pol_details()
{
  static const char name[] = "sr_steering_pol_details";
  static const char name_with_crc[] = "sr_steering_pol_details_5627d483";
  static vapi_message_desc_t __vapi_metadata_sr_steering_pol_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_steering_pol_details, payload),
    sizeof(vapi_msg_sr_steering_pol_details),
    (generic_swap_fn_t)vapi_msg_sr_steering_pol_details_hton,
    (generic_swap_fn_t)vapi_msg_sr_steering_pol_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_steering_pol_details = vapi_register_msg(&__vapi_metadata_sr_steering_pol_details);
  VAPI_DBG("Assigned msg id %d to sr_steering_pol_details", vapi_msg_id_sr_steering_pol_details);
}

static inline void vapi_set_vapi_msg_sr_steering_pol_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_steering_pol_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_steering_pol_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_steering_pol_dump
#define defined_vapi_msg_sr_steering_pol_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sr_steering_pol_dump;

static inline void vapi_msg_sr_steering_pol_dump_hton(vapi_msg_sr_steering_pol_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_pol_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sr_steering_pol_dump_ntoh(vapi_msg_sr_steering_pol_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_pol_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sr_steering_pol_dump_msg_size(vapi_msg_sr_steering_pol_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_steering_pol_dump* vapi_alloc_sr_steering_pol_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_steering_pol_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_steering_pol_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_steering_pol_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_steering_pol_dump);

  return msg;
}

static inline vapi_error_e vapi_sr_steering_pol_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sr_steering_pol_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_steering_pol_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_steering_pol_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_steering_pol_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_steering_pol_dump()
{
  static const char name[] = "sr_steering_pol_dump";
  static const char name_with_crc[] = "sr_steering_pol_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sr_steering_pol_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sr_steering_pol_dump),
    (generic_swap_fn_t)vapi_msg_sr_steering_pol_dump_hton,
    (generic_swap_fn_t)vapi_msg_sr_steering_pol_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_steering_pol_dump = vapi_register_msg(&__vapi_metadata_sr_steering_pol_dump);
  VAPI_DBG("Assigned msg id %d to sr_steering_pol_dump", vapi_msg_id_sr_steering_pol_dump);
}
#endif

#ifndef defined_vapi_msg_sr_policy_mod_reply
#define defined_vapi_msg_sr_policy_mod_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_policy_mod_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_policy_mod_reply payload;
} vapi_msg_sr_policy_mod_reply;

static inline void vapi_msg_sr_policy_mod_reply_payload_hton(vapi_payload_sr_policy_mod_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_policy_mod_reply_payload_ntoh(vapi_payload_sr_policy_mod_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_policy_mod_reply_hton(vapi_msg_sr_policy_mod_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_mod_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_policy_mod_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_policy_mod_reply_ntoh(vapi_msg_sr_policy_mod_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_mod_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_policy_mod_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_policy_mod_reply_msg_size(vapi_msg_sr_policy_mod_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_policy_mod_reply()
{
  static const char name[] = "sr_policy_mod_reply";
  static const char name_with_crc[] = "sr_policy_mod_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_policy_mod_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_policy_mod_reply, payload),
    sizeof(vapi_msg_sr_policy_mod_reply),
    (generic_swap_fn_t)vapi_msg_sr_policy_mod_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_policy_mod_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policy_mod_reply = vapi_register_msg(&__vapi_metadata_sr_policy_mod_reply);
  VAPI_DBG("Assigned msg id %d to sr_policy_mod_reply", vapi_msg_id_sr_policy_mod_reply);
}

static inline void vapi_set_vapi_msg_sr_policy_mod_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_policy_mod_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_policy_mod_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_localsid_add_del_reply
#define defined_vapi_msg_sr_localsid_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_localsid_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_localsid_add_del_reply payload;
} vapi_msg_sr_localsid_add_del_reply;

static inline void vapi_msg_sr_localsid_add_del_reply_payload_hton(vapi_payload_sr_localsid_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_localsid_add_del_reply_payload_ntoh(vapi_payload_sr_localsid_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_localsid_add_del_reply_hton(vapi_msg_sr_localsid_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsid_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_localsid_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_localsid_add_del_reply_ntoh(vapi_msg_sr_localsid_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsid_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_localsid_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_localsid_add_del_reply_msg_size(vapi_msg_sr_localsid_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_localsid_add_del_reply()
{
  static const char name[] = "sr_localsid_add_del_reply";
  static const char name_with_crc[] = "sr_localsid_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_localsid_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_localsid_add_del_reply, payload),
    sizeof(vapi_msg_sr_localsid_add_del_reply),
    (generic_swap_fn_t)vapi_msg_sr_localsid_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_localsid_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_localsid_add_del_reply = vapi_register_msg(&__vapi_metadata_sr_localsid_add_del_reply);
  VAPI_DBG("Assigned msg id %d to sr_localsid_add_del_reply", vapi_msg_id_sr_localsid_add_del_reply);
}

static inline void vapi_set_vapi_msg_sr_localsid_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_localsid_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_localsid_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_localsid_add_del
#define defined_vapi_msg_sr_localsid_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_del;
  vapi_type_srv6_sid localsid;
  u8 end_psp;
  u8 behavior;
  u32 sw_if_index;
  u32 vlan_index;
  u32 fib_table;
  u8 nh_addr6[16];
  u8 nh_addr4[4]; 
} vapi_payload_sr_localsid_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_localsid_add_del payload;
} vapi_msg_sr_localsid_add_del;

static inline void vapi_msg_sr_localsid_add_del_payload_hton(vapi_payload_sr_localsid_add_del *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->vlan_index = htobe32(payload->vlan_index);
  payload->fib_table = htobe32(payload->fib_table);
}

static inline void vapi_msg_sr_localsid_add_del_payload_ntoh(vapi_payload_sr_localsid_add_del *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->vlan_index = be32toh(payload->vlan_index);
  payload->fib_table = be32toh(payload->fib_table);
}

static inline void vapi_msg_sr_localsid_add_del_hton(vapi_msg_sr_localsid_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsid_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_localsid_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_localsid_add_del_ntoh(vapi_msg_sr_localsid_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsid_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_localsid_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_localsid_add_del_msg_size(vapi_msg_sr_localsid_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_localsid_add_del* vapi_alloc_sr_localsid_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_localsid_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_localsid_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_localsid_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_localsid_add_del);

  return msg;
}

static inline vapi_error_e vapi_sr_localsid_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_sr_localsid_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_localsid_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_localsid_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_localsid_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_localsid_add_del()
{
  static const char name[] = "sr_localsid_add_del";
  static const char name_with_crc[] = "sr_localsid_add_del_b30489eb";
  static vapi_message_desc_t __vapi_metadata_sr_localsid_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_localsid_add_del, payload),
    sizeof(vapi_msg_sr_localsid_add_del),
    (generic_swap_fn_t)vapi_msg_sr_localsid_add_del_hton,
    (generic_swap_fn_t)vapi_msg_sr_localsid_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_localsid_add_del = vapi_register_msg(&__vapi_metadata_sr_localsid_add_del);
  VAPI_DBG("Assigned msg id %d to sr_localsid_add_del", vapi_msg_id_sr_localsid_add_del);
}
#endif

#ifndef defined_vapi_msg_sr_steering_add_del_reply
#define defined_vapi_msg_sr_steering_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_steering_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_steering_add_del_reply payload;
} vapi_msg_sr_steering_add_del_reply;

static inline void vapi_msg_sr_steering_add_del_reply_payload_hton(vapi_payload_sr_steering_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_steering_add_del_reply_payload_ntoh(vapi_payload_sr_steering_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_steering_add_del_reply_hton(vapi_msg_sr_steering_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_steering_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_steering_add_del_reply_ntoh(vapi_msg_sr_steering_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_steering_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_steering_add_del_reply_msg_size(vapi_msg_sr_steering_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_steering_add_del_reply()
{
  static const char name[] = "sr_steering_add_del_reply";
  static const char name_with_crc[] = "sr_steering_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_steering_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_steering_add_del_reply, payload),
    sizeof(vapi_msg_sr_steering_add_del_reply),
    (generic_swap_fn_t)vapi_msg_sr_steering_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_steering_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_steering_add_del_reply = vapi_register_msg(&__vapi_metadata_sr_steering_add_del_reply);
  VAPI_DBG("Assigned msg id %d to sr_steering_add_del_reply", vapi_msg_id_sr_steering_add_del_reply);
}

static inline void vapi_set_vapi_msg_sr_steering_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_steering_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_steering_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_steering_add_del
#define defined_vapi_msg_sr_steering_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 is_del;
  u8 bsid_addr[16];
  u32 sr_policy_index;
  u32 table_id;
  u8 prefix_addr[16];
  u32 mask_width;
  u32 sw_if_index;
  u8 traffic_type; 
} vapi_payload_sr_steering_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_steering_add_del payload;
} vapi_msg_sr_steering_add_del;

static inline void vapi_msg_sr_steering_add_del_payload_hton(vapi_payload_sr_steering_add_del *payload)
{
  payload->sr_policy_index = htobe32(payload->sr_policy_index);
  payload->table_id = htobe32(payload->table_id);
  payload->mask_width = htobe32(payload->mask_width);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_sr_steering_add_del_payload_ntoh(vapi_payload_sr_steering_add_del *payload)
{
  payload->sr_policy_index = be32toh(payload->sr_policy_index);
  payload->table_id = be32toh(payload->table_id);
  payload->mask_width = be32toh(payload->mask_width);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_sr_steering_add_del_hton(vapi_msg_sr_steering_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_steering_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_steering_add_del_ntoh(vapi_msg_sr_steering_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_steering_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_steering_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_steering_add_del_msg_size(vapi_msg_sr_steering_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_steering_add_del* vapi_alloc_sr_steering_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_steering_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_steering_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_steering_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_steering_add_del);

  return msg;
}

static inline vapi_error_e vapi_sr_steering_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_sr_steering_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_steering_add_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_steering_add_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_steering_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_steering_add_del()
{
  static const char name[] = "sr_steering_add_del";
  static const char name_with_crc[] = "sr_steering_add_del_28b5dcab";
  static vapi_message_desc_t __vapi_metadata_sr_steering_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_steering_add_del, payload),
    sizeof(vapi_msg_sr_steering_add_del),
    (generic_swap_fn_t)vapi_msg_sr_steering_add_del_hton,
    (generic_swap_fn_t)vapi_msg_sr_steering_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_steering_add_del = vapi_register_msg(&__vapi_metadata_sr_steering_add_del);
  VAPI_DBG("Assigned msg id %d to sr_steering_add_del", vapi_msg_id_sr_steering_add_del);
}
#endif

#ifndef defined_vapi_msg_sr_set_encap_source_reply
#define defined_vapi_msg_sr_set_encap_source_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_set_encap_source_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_set_encap_source_reply payload;
} vapi_msg_sr_set_encap_source_reply;

static inline void vapi_msg_sr_set_encap_source_reply_payload_hton(vapi_payload_sr_set_encap_source_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_set_encap_source_reply_payload_ntoh(vapi_payload_sr_set_encap_source_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_set_encap_source_reply_hton(vapi_msg_sr_set_encap_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_set_encap_source_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_set_encap_source_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_set_encap_source_reply_ntoh(vapi_msg_sr_set_encap_source_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_set_encap_source_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_set_encap_source_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_set_encap_source_reply_msg_size(vapi_msg_sr_set_encap_source_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_set_encap_source_reply()
{
  static const char name[] = "sr_set_encap_source_reply";
  static const char name_with_crc[] = "sr_set_encap_source_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_set_encap_source_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_set_encap_source_reply, payload),
    sizeof(vapi_msg_sr_set_encap_source_reply),
    (generic_swap_fn_t)vapi_msg_sr_set_encap_source_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_set_encap_source_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_set_encap_source_reply = vapi_register_msg(&__vapi_metadata_sr_set_encap_source_reply);
  VAPI_DBG("Assigned msg id %d to sr_set_encap_source_reply", vapi_msg_id_sr_set_encap_source_reply);
}

static inline void vapi_set_vapi_msg_sr_set_encap_source_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_set_encap_source_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_set_encap_source_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_set_encap_source
#define defined_vapi_msg_sr_set_encap_source
typedef struct __attribute__ ((__packed__)) {
  u8 encaps_source[16]; 
} vapi_payload_sr_set_encap_source;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_set_encap_source payload;
} vapi_msg_sr_set_encap_source;

static inline void vapi_msg_sr_set_encap_source_payload_hton(vapi_payload_sr_set_encap_source *payload)
{

}

static inline void vapi_msg_sr_set_encap_source_payload_ntoh(vapi_payload_sr_set_encap_source *payload)
{

}

static inline void vapi_msg_sr_set_encap_source_hton(vapi_msg_sr_set_encap_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_set_encap_source'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_set_encap_source_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_set_encap_source_ntoh(vapi_msg_sr_set_encap_source *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_set_encap_source'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_set_encap_source_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_set_encap_source_msg_size(vapi_msg_sr_set_encap_source *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_set_encap_source* vapi_alloc_sr_set_encap_source(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_set_encap_source *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_set_encap_source);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_set_encap_source*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_set_encap_source);

  return msg;
}

static inline vapi_error_e vapi_sr_set_encap_source(struct vapi_ctx_s *ctx,
  vapi_msg_sr_set_encap_source *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_set_encap_source_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_set_encap_source_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_set_encap_source_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_set_encap_source()
{
  static const char name[] = "sr_set_encap_source";
  static const char name_with_crc[] = "sr_set_encap_source_d05bb4de";
  static vapi_message_desc_t __vapi_metadata_sr_set_encap_source = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_set_encap_source, payload),
    sizeof(vapi_msg_sr_set_encap_source),
    (generic_swap_fn_t)vapi_msg_sr_set_encap_source_hton,
    (generic_swap_fn_t)vapi_msg_sr_set_encap_source_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_set_encap_source = vapi_register_msg(&__vapi_metadata_sr_set_encap_source);
  VAPI_DBG("Assigned msg id %d to sr_set_encap_source", vapi_msg_id_sr_set_encap_source);
}
#endif

#ifndef defined_vapi_msg_sr_localsids_details
#define defined_vapi_msg_sr_localsids_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_srv6_sid addr;
  u8 end_psp;
  u16 behavior;
  u32 fib_table;
  u32 vlan_index;
  u8 xconnect_nh_addr6[16];
  u8 xconnect_nh_addr4[4];
  u32 xconnect_iface_or_vrf_table; 
} vapi_payload_sr_localsids_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_localsids_details payload;
} vapi_msg_sr_localsids_details;

static inline void vapi_msg_sr_localsids_details_payload_hton(vapi_payload_sr_localsids_details *payload)
{
  payload->behavior = htobe16(payload->behavior);
  payload->fib_table = htobe32(payload->fib_table);
  payload->vlan_index = htobe32(payload->vlan_index);
  payload->xconnect_iface_or_vrf_table = htobe32(payload->xconnect_iface_or_vrf_table);
}

static inline void vapi_msg_sr_localsids_details_payload_ntoh(vapi_payload_sr_localsids_details *payload)
{
  payload->behavior = be16toh(payload->behavior);
  payload->fib_table = be32toh(payload->fib_table);
  payload->vlan_index = be32toh(payload->vlan_index);
  payload->xconnect_iface_or_vrf_table = be32toh(payload->xconnect_iface_or_vrf_table);
}

static inline void vapi_msg_sr_localsids_details_hton(vapi_msg_sr_localsids_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsids_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_localsids_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_localsids_details_ntoh(vapi_msg_sr_localsids_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsids_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_localsids_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_localsids_details_msg_size(vapi_msg_sr_localsids_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_localsids_details()
{
  static const char name[] = "sr_localsids_details";
  static const char name_with_crc[] = "sr_localsids_details_0791babc";
  static vapi_message_desc_t __vapi_metadata_sr_localsids_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_localsids_details, payload),
    sizeof(vapi_msg_sr_localsids_details),
    (generic_swap_fn_t)vapi_msg_sr_localsids_details_hton,
    (generic_swap_fn_t)vapi_msg_sr_localsids_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_localsids_details = vapi_register_msg(&__vapi_metadata_sr_localsids_details);
  VAPI_DBG("Assigned msg id %d to sr_localsids_details", vapi_msg_id_sr_localsids_details);
}

static inline void vapi_set_vapi_msg_sr_localsids_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_localsids_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_localsids_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_localsids_dump
#define defined_vapi_msg_sr_localsids_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sr_localsids_dump;

static inline void vapi_msg_sr_localsids_dump_hton(vapi_msg_sr_localsids_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsids_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sr_localsids_dump_ntoh(vapi_msg_sr_localsids_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_localsids_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sr_localsids_dump_msg_size(vapi_msg_sr_localsids_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_localsids_dump* vapi_alloc_sr_localsids_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_localsids_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_localsids_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_localsids_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_localsids_dump);

  return msg;
}

static inline vapi_error_e vapi_sr_localsids_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sr_localsids_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_localsids_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_localsids_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_localsids_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_localsids_dump()
{
  static const char name[] = "sr_localsids_dump";
  static const char name_with_crc[] = "sr_localsids_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sr_localsids_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sr_localsids_dump),
    (generic_swap_fn_t)vapi_msg_sr_localsids_dump_hton,
    (generic_swap_fn_t)vapi_msg_sr_localsids_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_localsids_dump = vapi_register_msg(&__vapi_metadata_sr_localsids_dump);
  VAPI_DBG("Assigned msg id %d to sr_localsids_dump", vapi_msg_id_sr_localsids_dump);
}
#endif

#ifndef defined_vapi_msg_sr_policy_add_reply
#define defined_vapi_msg_sr_policy_add_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_policy_add_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_policy_add_reply payload;
} vapi_msg_sr_policy_add_reply;

static inline void vapi_msg_sr_policy_add_reply_payload_hton(vapi_payload_sr_policy_add_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_policy_add_reply_payload_ntoh(vapi_payload_sr_policy_add_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_policy_add_reply_hton(vapi_msg_sr_policy_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_add_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_policy_add_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_policy_add_reply_ntoh(vapi_msg_sr_policy_add_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_add_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_policy_add_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_policy_add_reply_msg_size(vapi_msg_sr_policy_add_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_policy_add_reply()
{
  static const char name[] = "sr_policy_add_reply";
  static const char name_with_crc[] = "sr_policy_add_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_policy_add_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_policy_add_reply, payload),
    sizeof(vapi_msg_sr_policy_add_reply),
    (generic_swap_fn_t)vapi_msg_sr_policy_add_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_policy_add_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policy_add_reply = vapi_register_msg(&__vapi_metadata_sr_policy_add_reply);
  VAPI_DBG("Assigned msg id %d to sr_policy_add_reply", vapi_msg_id_sr_policy_add_reply);
}

static inline void vapi_set_vapi_msg_sr_policy_add_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_policy_add_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_policy_add_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_policy_add
#define defined_vapi_msg_sr_policy_add
typedef struct __attribute__ ((__packed__)) {
  u8 bsid_addr[16];
  u32 weight;
  u8 is_encap;
  u8 type;
  u32 fib_table;
  vapi_type_srv6_sid_list sids; 
} vapi_payload_sr_policy_add;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_policy_add payload;
} vapi_msg_sr_policy_add;

static inline void vapi_msg_sr_policy_add_payload_hton(vapi_payload_sr_policy_add *payload)
{
  payload->weight = htobe32(payload->weight);
  payload->fib_table = htobe32(payload->fib_table);
  vapi_type_srv6_sid_list_hton(&payload->sids);
}

static inline void vapi_msg_sr_policy_add_payload_ntoh(vapi_payload_sr_policy_add *payload)
{
  payload->weight = be32toh(payload->weight);
  payload->fib_table = be32toh(payload->fib_table);
  vapi_type_srv6_sid_list_ntoh(&payload->sids);
}

static inline void vapi_msg_sr_policy_add_hton(vapi_msg_sr_policy_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_add'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_policy_add_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_policy_add_ntoh(vapi_msg_sr_policy_add *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_add'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_policy_add_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_policy_add_msg_size(vapi_msg_sr_policy_add *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_policy_add* vapi_alloc_sr_policy_add(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_policy_add *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_policy_add);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_policy_add*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_policy_add);

  return msg;
}

static inline vapi_error_e vapi_sr_policy_add(struct vapi_ctx_s *ctx,
  vapi_msg_sr_policy_add *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_policy_add_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_policy_add_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_policy_add_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_policy_add()
{
  static const char name[] = "sr_policy_add";
  static const char name_with_crc[] = "sr_policy_add_4b6e2484";
  static vapi_message_desc_t __vapi_metadata_sr_policy_add = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_policy_add, payload),
    sizeof(vapi_msg_sr_policy_add),
    (generic_swap_fn_t)vapi_msg_sr_policy_add_hton,
    (generic_swap_fn_t)vapi_msg_sr_policy_add_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policy_add = vapi_register_msg(&__vapi_metadata_sr_policy_add);
  VAPI_DBG("Assigned msg id %d to sr_policy_add", vapi_msg_id_sr_policy_add);
}
#endif

#ifndef defined_vapi_msg_sr_policies_details
#define defined_vapi_msg_sr_policies_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_srv6_sid bsid;
  u8 type;
  u8 is_encap;
  u32 fib_table;
  u8 num_sid_lists;
  vapi_type_srv6_sid_list sid_lists[0]; 
} vapi_payload_sr_policies_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_policies_details payload;
} vapi_msg_sr_policies_details;

static inline void vapi_msg_sr_policies_details_payload_hton(vapi_payload_sr_policies_details *payload)
{
  payload->fib_table = htobe32(payload->fib_table);
  do { unsigned i; for (i = 0; i < payload->num_sid_lists; ++i) { vapi_type_srv6_sid_list_hton(&payload->sid_lists[i]); } } while(0);
}

static inline void vapi_msg_sr_policies_details_payload_ntoh(vapi_payload_sr_policies_details *payload)
{
  payload->fib_table = be32toh(payload->fib_table);
  do { unsigned i; for (i = 0; i < payload->num_sid_lists; ++i) { vapi_type_srv6_sid_list_ntoh(&payload->sid_lists[i]); } } while(0);
}

static inline void vapi_msg_sr_policies_details_hton(vapi_msg_sr_policies_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policies_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_policies_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_policies_details_ntoh(vapi_msg_sr_policies_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policies_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_policies_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_policies_details_msg_size(vapi_msg_sr_policies_details *msg)
{
  return sizeof(*msg)+ msg->payload.num_sid_lists * sizeof(msg->payload.sid_lists[0]);
}

static void __attribute__((constructor)) __vapi_constructor_sr_policies_details()
{
  static const char name[] = "sr_policies_details";
  static const char name_with_crc[] = "sr_policies_details_5087f460";
  static vapi_message_desc_t __vapi_metadata_sr_policies_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_policies_details, payload),
    sizeof(vapi_msg_sr_policies_details),
    (generic_swap_fn_t)vapi_msg_sr_policies_details_hton,
    (generic_swap_fn_t)vapi_msg_sr_policies_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policies_details = vapi_register_msg(&__vapi_metadata_sr_policies_details);
  VAPI_DBG("Assigned msg id %d to sr_policies_details", vapi_msg_id_sr_policies_details);
}

static inline void vapi_set_vapi_msg_sr_policies_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_policies_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_policies_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_policies_dump
#define defined_vapi_msg_sr_policies_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_sr_policies_dump;

static inline void vapi_msg_sr_policies_dump_hton(vapi_msg_sr_policies_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policies_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_sr_policies_dump_ntoh(vapi_msg_sr_policies_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policies_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_sr_policies_dump_msg_size(vapi_msg_sr_policies_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_policies_dump* vapi_alloc_sr_policies_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_policies_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_policies_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_policies_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_policies_dump);

  return msg;
}

static inline vapi_error_e vapi_sr_policies_dump(struct vapi_ctx_s *ctx,
  vapi_msg_sr_policies_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_policies_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_policies_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_policies_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_policies_dump()
{
  static const char name[] = "sr_policies_dump";
  static const char name_with_crc[] = "sr_policies_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_sr_policies_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_sr_policies_dump),
    (generic_swap_fn_t)vapi_msg_sr_policies_dump_hton,
    (generic_swap_fn_t)vapi_msg_sr_policies_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policies_dump = vapi_register_msg(&__vapi_metadata_sr_policies_dump);
  VAPI_DBG("Assigned msg id %d to sr_policies_dump", vapi_msg_id_sr_policies_dump);
}
#endif

#ifndef defined_vapi_msg_sr_policy_mod
#define defined_vapi_msg_sr_policy_mod
typedef struct __attribute__ ((__packed__)) {
  u8 bsid_addr[16];
  u32 sr_policy_index;
  u32 fib_table;
  u8 operation;
  u32 sl_index;
  u32 weight;
  vapi_type_srv6_sid_list sids; 
} vapi_payload_sr_policy_mod;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_policy_mod payload;
} vapi_msg_sr_policy_mod;

static inline void vapi_msg_sr_policy_mod_payload_hton(vapi_payload_sr_policy_mod *payload)
{
  payload->sr_policy_index = htobe32(payload->sr_policy_index);
  payload->fib_table = htobe32(payload->fib_table);
  payload->sl_index = htobe32(payload->sl_index);
  payload->weight = htobe32(payload->weight);
  vapi_type_srv6_sid_list_hton(&payload->sids);
}

static inline void vapi_msg_sr_policy_mod_payload_ntoh(vapi_payload_sr_policy_mod *payload)
{
  payload->sr_policy_index = be32toh(payload->sr_policy_index);
  payload->fib_table = be32toh(payload->fib_table);
  payload->sl_index = be32toh(payload->sl_index);
  payload->weight = be32toh(payload->weight);
  vapi_type_srv6_sid_list_ntoh(&payload->sids);
}

static inline void vapi_msg_sr_policy_mod_hton(vapi_msg_sr_policy_mod *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_mod'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_policy_mod_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_policy_mod_ntoh(vapi_msg_sr_policy_mod *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_mod'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_policy_mod_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_policy_mod_msg_size(vapi_msg_sr_policy_mod *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_policy_mod* vapi_alloc_sr_policy_mod(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_policy_mod *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_policy_mod);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_policy_mod*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_policy_mod);

  return msg;
}

static inline vapi_error_e vapi_sr_policy_mod(struct vapi_ctx_s *ctx,
  vapi_msg_sr_policy_mod *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_policy_mod_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_policy_mod_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_policy_mod_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_policy_mod()
{
  static const char name[] = "sr_policy_mod";
  static const char name_with_crc[] = "sr_policy_mod_c1dfaee0";
  static vapi_message_desc_t __vapi_metadata_sr_policy_mod = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_policy_mod, payload),
    sizeof(vapi_msg_sr_policy_mod),
    (generic_swap_fn_t)vapi_msg_sr_policy_mod_hton,
    (generic_swap_fn_t)vapi_msg_sr_policy_mod_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policy_mod = vapi_register_msg(&__vapi_metadata_sr_policy_mod);
  VAPI_DBG("Assigned msg id %d to sr_policy_mod", vapi_msg_id_sr_policy_mod);
}
#endif

#ifndef defined_vapi_msg_sr_policy_del_reply
#define defined_vapi_msg_sr_policy_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_sr_policy_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_sr_policy_del_reply payload;
} vapi_msg_sr_policy_del_reply;

static inline void vapi_msg_sr_policy_del_reply_payload_hton(vapi_payload_sr_policy_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_sr_policy_del_reply_payload_ntoh(vapi_payload_sr_policy_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_sr_policy_del_reply_hton(vapi_msg_sr_policy_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_sr_policy_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_policy_del_reply_ntoh(vapi_msg_sr_policy_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_sr_policy_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_policy_del_reply_msg_size(vapi_msg_sr_policy_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_sr_policy_del_reply()
{
  static const char name[] = "sr_policy_del_reply";
  static const char name_with_crc[] = "sr_policy_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_sr_policy_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_sr_policy_del_reply, payload),
    sizeof(vapi_msg_sr_policy_del_reply),
    (generic_swap_fn_t)vapi_msg_sr_policy_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_sr_policy_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policy_del_reply = vapi_register_msg(&__vapi_metadata_sr_policy_del_reply);
  VAPI_DBG("Assigned msg id %d to sr_policy_del_reply", vapi_msg_id_sr_policy_del_reply);
}

static inline void vapi_set_vapi_msg_sr_policy_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_sr_policy_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_sr_policy_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_sr_policy_del
#define defined_vapi_msg_sr_policy_del
typedef struct __attribute__ ((__packed__)) {
  vapi_type_srv6_sid bsid_addr;
  u32 sr_policy_index; 
} vapi_payload_sr_policy_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_sr_policy_del payload;
} vapi_msg_sr_policy_del;

static inline void vapi_msg_sr_policy_del_payload_hton(vapi_payload_sr_policy_del *payload)
{
  payload->sr_policy_index = htobe32(payload->sr_policy_index);
}

static inline void vapi_msg_sr_policy_del_payload_ntoh(vapi_payload_sr_policy_del *payload)
{
  payload->sr_policy_index = be32toh(payload->sr_policy_index);
}

static inline void vapi_msg_sr_policy_del_hton(vapi_msg_sr_policy_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_sr_policy_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_sr_policy_del_ntoh(vapi_msg_sr_policy_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_sr_policy_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_sr_policy_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_sr_policy_del_msg_size(vapi_msg_sr_policy_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_sr_policy_del* vapi_alloc_sr_policy_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_sr_policy_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_sr_policy_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_sr_policy_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_sr_policy_del);

  return msg;
}

static inline vapi_error_e vapi_sr_policy_del(struct vapi_ctx_s *ctx,
  vapi_msg_sr_policy_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_sr_policy_del_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_sr_policy_del_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_sr_policy_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_sr_policy_del()
{
  static const char name[] = "sr_policy_del";
  static const char name_with_crc[] = "sr_policy_del_e4133171";
  static vapi_message_desc_t __vapi_metadata_sr_policy_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_sr_policy_del, payload),
    sizeof(vapi_msg_sr_policy_del),
    (generic_swap_fn_t)vapi_msg_sr_policy_del_hton,
    (generic_swap_fn_t)vapi_msg_sr_policy_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_sr_policy_del = vapi_register_msg(&__vapi_metadata_sr_policy_del);
  VAPI_DBG("Assigned msg id %d to sr_policy_del", vapi_msg_id_sr_policy_del);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
