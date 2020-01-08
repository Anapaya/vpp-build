#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_igmp_igmp_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_plugins_igmp_igmp_api_json

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

extern vapi_msg_id_t vapi_msg_id_want_igmp_events;
extern vapi_msg_id_t vapi_msg_id_igmp_details;
extern vapi_msg_id_t vapi_msg_id_igmp_listen_reply;
extern vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del;
extern vapi_msg_id_t vapi_msg_id_igmp_dump;
extern vapi_msg_id_t vapi_msg_id_igmp_clear_interface;
extern vapi_msg_id_t vapi_msg_id_igmp_enable_disable;
extern vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del_interface;
extern vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del_reply;
extern vapi_msg_id_t vapi_msg_id_igmp_event;
extern vapi_msg_id_t vapi_msg_id_igmp_group_prefix_set;
extern vapi_msg_id_t vapi_msg_id_igmp_group_prefix_dump;
extern vapi_msg_id_t vapi_msg_id_want_igmp_events_reply;
extern vapi_msg_id_t vapi_msg_id_igmp_group_prefix_details;
extern vapi_msg_id_t vapi_msg_id_igmp_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del_interface_reply;
extern vapi_msg_id_t vapi_msg_id_igmp_listen;
extern vapi_msg_id_t vapi_msg_id_igmp_group_prefix_set_reply;
extern vapi_msg_id_t vapi_msg_id_igmp_clear_interface_reply;

#define DEFINE_VAPI_MSG_IDS_IGMP_API_JSON\
  vapi_msg_id_t vapi_msg_id_want_igmp_events;\
  vapi_msg_id_t vapi_msg_id_igmp_details;\
  vapi_msg_id_t vapi_msg_id_igmp_listen_reply;\
  vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del;\
  vapi_msg_id_t vapi_msg_id_igmp_dump;\
  vapi_msg_id_t vapi_msg_id_igmp_clear_interface;\
  vapi_msg_id_t vapi_msg_id_igmp_enable_disable;\
  vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del_interface;\
  vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del_reply;\
  vapi_msg_id_t vapi_msg_id_igmp_event;\
  vapi_msg_id_t vapi_msg_id_igmp_group_prefix_set;\
  vapi_msg_id_t vapi_msg_id_igmp_group_prefix_dump;\
  vapi_msg_id_t vapi_msg_id_want_igmp_events_reply;\
  vapi_msg_id_t vapi_msg_id_igmp_group_prefix_details;\
  vapi_msg_id_t vapi_msg_id_igmp_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_igmp_proxy_device_add_del_interface_reply;\
  vapi_msg_id_t vapi_msg_id_igmp_listen;\
  vapi_msg_id_t vapi_msg_id_igmp_group_prefix_set_reply;\
  vapi_msg_id_t vapi_msg_id_igmp_clear_interface_reply;


#ifndef defined_vapi_enum_address_family
#define defined_vapi_enum_address_family
typedef enum {
  ADDRESS_IP4 = 0,
  ADDRESS_IP6 = 1,
} vapi_enum_address_family;

#endif

#ifndef defined_vapi_enum_ip_ecn
#define defined_vapi_enum_ip_ecn
typedef enum {
  IP_API_ECN_NONE = 0,
  IP_API_ECN_ECT0 = 1,
  IP_API_ECN_ECT1 = 2,
  IP_API_ECN_CE = 3,
} vapi_enum_ip_ecn;

#endif

#ifndef defined_vapi_enum_ip_dscp
#define defined_vapi_enum_ip_dscp
typedef enum {
  IP_API_DSCP_CS0 = 0,
  IP_API_DSCP_CS1 = 8,
  IP_API_DSCP_AF11 = 10,
  IP_API_DSCP_AF12 = 12,
  IP_API_DSCP_AF13 = 14,
  IP_API_DSCP_CS2 = 16,
  IP_API_DSCP_AF21 = 18,
  IP_API_DSCP_AF22 = 20,
  IP_API_DSCP_AF23 = 22,
  IP_API_DSCP_CS3 = 24,
  IP_API_DSCP_AF31 = 26,
  IP_API_DSCP_AF32 = 28,
  IP_API_DSCP_AF33 = 30,
  IP_API_DSCP_CS4 = 32,
  IP_API_DSCP_AF41 = 34,
  IP_API_DSCP_AF42 = 36,
  IP_API_DSCP_AF43 = 38,
  IP_API_DSCP_CS5 = 40,
  IP_API_DSCP_EF = 46,
  IP_API_DSCP_CS6 = 48,
  IP_API_DSCP_CS7 = 50,
} vapi_enum_ip_dscp;

#endif

#ifndef defined_vapi_enum_ip_proto
#define defined_vapi_enum_ip_proto
typedef enum {
  IP_API_PROTO_HOPOPT = 0,
  IP_API_PROTO_ICMP = 1,
  IP_API_PROTO_IGMP = 2,
  IP_API_PROTO_TCP = 6,
  IP_API_PROTO_UDP = 17,
  IP_API_PROTO_GRE = 47,
  IP_API_PROTO_AH = 50,
  IP_API_PROTO_ESP = 51,
  IP_API_PROTO_EIGRP = 88,
  IP_API_PROTO_OSPF = 89,
  IP_API_PROTO_SCTP = 132,
  IP_API_PROTO_RESERVED = 255,
} vapi_enum_ip_proto;

#endif

#ifndef defined_vapi_enum_filter_mode
#define defined_vapi_enum_filter_mode
typedef enum {
  EXCLUDE = 0,
  INCLUDE = 1,
} vapi_enum_filter_mode;

#endif

#ifndef defined_vapi_enum_group_prefix_type
#define defined_vapi_enum_group_prefix_type
typedef enum {
  ASM = 0,
  SSM = 1,
} vapi_enum_group_prefix_type;

#endif

#ifndef defined_vapi_type_ip6_address
#define defined_vapi_type_ip6_address
typedef u8 vapi_type_ip6_address[16];

#endif

#ifndef defined_vapi_type_ip4_address
#define defined_vapi_type_ip4_address
typedef u8 vapi_type_ip4_address[4];

#endif

#ifndef defined_vapi_union_address_union
#define defined_vapi_union_address_union
typedef union {
  vapi_type_ip4_address ip4;
  vapi_type_ip6_address ip6;
} vapi_union_address_union;

#endif

#ifndef defined_vapi_type_ip6_prefix
#define defined_vapi_type_ip6_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_ip6_address address;
  u8 len;
} vapi_type_ip6_prefix;

static inline void vapi_type_ip6_prefix_hton(vapi_type_ip6_prefix *msg)
{

}

static inline void vapi_type_ip6_prefix_ntoh(vapi_type_ip6_prefix *msg)
{

}
#endif

#ifndef defined_vapi_type_ip4_prefix
#define defined_vapi_type_ip4_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_ip4_address address;
  u8 len;
} vapi_type_ip4_prefix;

static inline void vapi_type_ip4_prefix_hton(vapi_type_ip4_prefix *msg)
{

}

static inline void vapi_type_ip4_prefix_ntoh(vapi_type_ip4_prefix *msg)
{

}
#endif

#ifndef defined_vapi_type_prefix_matcher
#define defined_vapi_type_prefix_matcher
typedef struct __attribute__((__packed__)) {
  u8 le;
  u8 ge;
} vapi_type_prefix_matcher;

static inline void vapi_type_prefix_matcher_hton(vapi_type_prefix_matcher *msg)
{

}

static inline void vapi_type_prefix_matcher_ntoh(vapi_type_prefix_matcher *msg)
{

}
#endif

#ifndef defined_vapi_type_igmp_group
#define defined_vapi_type_igmp_group
typedef struct __attribute__((__packed__)) {
  vapi_enum_filter_mode filter;
  u8 n_srcs;
  u32 sw_if_index;
  vapi_type_ip4_address gaddr;
  vapi_type_ip4_address saddrs[0];
} vapi_type_igmp_group;

static inline void vapi_type_igmp_group_hton(vapi_type_igmp_group *msg)
{
  msg->filter = (vapi_enum_filter_mode)htobe32(msg->filter);
  msg->sw_if_index = htobe32(msg->sw_if_index);
}

static inline void vapi_type_igmp_group_ntoh(vapi_type_igmp_group *msg)
{
  msg->filter = (vapi_enum_filter_mode)be32toh(msg->filter);
  msg->sw_if_index = be32toh(msg->sw_if_index);
}
#endif

#ifndef defined_vapi_type_address
#define defined_vapi_type_address
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  vapi_union_address_union un;
} vapi_type_address;

static inline void vapi_type_address_hton(vapi_type_address *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
}

static inline void vapi_type_address_ntoh(vapi_type_address *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
}
#endif

#ifndef defined_vapi_type_prefix
#define defined_vapi_type_prefix
typedef struct __attribute__((__packed__)) {
  vapi_type_address address;
  u8 len;
} vapi_type_prefix;

static inline void vapi_type_prefix_hton(vapi_type_prefix *msg)
{
  vapi_type_address_hton(&msg->address);
}

static inline void vapi_type_prefix_ntoh(vapi_type_prefix *msg)
{
  vapi_type_address_ntoh(&msg->address);
}
#endif

#ifndef defined_vapi_type_mprefix
#define defined_vapi_type_mprefix
typedef struct __attribute__((__packed__)) {
  vapi_enum_address_family af;
  u16 grp_address_length;
  vapi_union_address_union grp_address;
  vapi_union_address_union src_address;
} vapi_type_mprefix;

static inline void vapi_type_mprefix_hton(vapi_type_mprefix *msg)
{
  msg->af = (vapi_enum_address_family)htobe32(msg->af);
  msg->grp_address_length = htobe16(msg->grp_address_length);
}

static inline void vapi_type_mprefix_ntoh(vapi_type_mprefix *msg)
{
  msg->af = (vapi_enum_address_family)be32toh(msg->af);
  msg->grp_address_length = be16toh(msg->grp_address_length);
}
#endif

#ifndef defined_vapi_type_group_prefix
#define defined_vapi_type_group_prefix
typedef struct __attribute__((__packed__)) {
  vapi_enum_group_prefix_type type;
  vapi_type_prefix prefix;
} vapi_type_group_prefix;

static inline void vapi_type_group_prefix_hton(vapi_type_group_prefix *msg)
{
  msg->type = (vapi_enum_group_prefix_type)htobe32(msg->type);
  vapi_type_prefix_hton(&msg->prefix);
}

static inline void vapi_type_group_prefix_ntoh(vapi_type_group_prefix *msg)
{
  msg->type = (vapi_enum_group_prefix_type)be32toh(msg->type);
  vapi_type_prefix_ntoh(&msg->prefix);
}
#endif

#ifndef defined_vapi_msg_want_igmp_events_reply
#define defined_vapi_msg_want_igmp_events_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_want_igmp_events_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_want_igmp_events_reply payload;
} vapi_msg_want_igmp_events_reply;

static inline void vapi_msg_want_igmp_events_reply_payload_hton(vapi_payload_want_igmp_events_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_want_igmp_events_reply_payload_ntoh(vapi_payload_want_igmp_events_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_want_igmp_events_reply_hton(vapi_msg_want_igmp_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_igmp_events_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_want_igmp_events_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_igmp_events_reply_ntoh(vapi_msg_want_igmp_events_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_igmp_events_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_want_igmp_events_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_igmp_events_reply_msg_size(vapi_msg_want_igmp_events_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_want_igmp_events_reply()
{
  static const char name[] = "want_igmp_events_reply";
  static const char name_with_crc[] = "want_igmp_events_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_want_igmp_events_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_want_igmp_events_reply, payload),
    sizeof(vapi_msg_want_igmp_events_reply),
    (generic_swap_fn_t)vapi_msg_want_igmp_events_reply_hton,
    (generic_swap_fn_t)vapi_msg_want_igmp_events_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_igmp_events_reply = vapi_register_msg(&__vapi_metadata_want_igmp_events_reply);
  VAPI_DBG("Assigned msg id %d to want_igmp_events_reply", vapi_msg_id_want_igmp_events_reply);
}

static inline void vapi_set_vapi_msg_want_igmp_events_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_want_igmp_events_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_want_igmp_events_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_want_igmp_events
#define defined_vapi_msg_want_igmp_events
typedef struct __attribute__ ((__packed__)) {
  u32 enable;
  u32 pid; 
} vapi_payload_want_igmp_events;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_want_igmp_events payload;
} vapi_msg_want_igmp_events;

static inline void vapi_msg_want_igmp_events_payload_hton(vapi_payload_want_igmp_events *payload)
{
  payload->enable = htobe32(payload->enable);
  payload->pid = htobe32(payload->pid);
}

static inline void vapi_msg_want_igmp_events_payload_ntoh(vapi_payload_want_igmp_events *payload)
{
  payload->enable = be32toh(payload->enable);
  payload->pid = be32toh(payload->pid);
}

static inline void vapi_msg_want_igmp_events_hton(vapi_msg_want_igmp_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_igmp_events'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_want_igmp_events_payload_hton(&msg->payload);
}

static inline void vapi_msg_want_igmp_events_ntoh(vapi_msg_want_igmp_events *msg)
{
  VAPI_DBG("Swapping `vapi_msg_want_igmp_events'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_want_igmp_events_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_want_igmp_events_msg_size(vapi_msg_want_igmp_events *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_want_igmp_events* vapi_alloc_want_igmp_events(struct vapi_ctx_s *ctx)
{
  vapi_msg_want_igmp_events *msg = NULL;
  const size_t size = sizeof(vapi_msg_want_igmp_events);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_want_igmp_events*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_want_igmp_events);

  return msg;
}

static inline vapi_error_e vapi_want_igmp_events(struct vapi_ctx_s *ctx,
  vapi_msg_want_igmp_events *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_want_igmp_events_reply *reply),
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
  vapi_msg_want_igmp_events_hton(msg);
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
    vapi_msg_want_igmp_events_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_want_igmp_events()
{
  static const char name[] = "want_igmp_events";
  static const char name_with_crc[] = "want_igmp_events_cfaccc1f";
  static vapi_message_desc_t __vapi_metadata_want_igmp_events = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_want_igmp_events, payload),
    sizeof(vapi_msg_want_igmp_events),
    (generic_swap_fn_t)vapi_msg_want_igmp_events_hton,
    (generic_swap_fn_t)vapi_msg_want_igmp_events_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_want_igmp_events = vapi_register_msg(&__vapi_metadata_want_igmp_events);
  VAPI_DBG("Assigned msg id %d to want_igmp_events", vapi_msg_id_want_igmp_events);
}
#endif

#ifndef defined_vapi_msg_igmp_details
#define defined_vapi_msg_igmp_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  vapi_type_ip4_address saddr;
  vapi_type_ip4_address gaddr; 
} vapi_payload_igmp_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_details payload;
} vapi_msg_igmp_details;

static inline void vapi_msg_igmp_details_payload_hton(vapi_payload_igmp_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_igmp_details_payload_ntoh(vapi_payload_igmp_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_igmp_details_hton(vapi_msg_igmp_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_details_ntoh(vapi_msg_igmp_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_details_msg_size(vapi_msg_igmp_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_details()
{
  static const char name[] = "igmp_details";
  static const char name_with_crc[] = "igmp_details_238a59f3";
  static vapi_message_desc_t __vapi_metadata_igmp_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_details, payload),
    sizeof(vapi_msg_igmp_details),
    (generic_swap_fn_t)vapi_msg_igmp_details_hton,
    (generic_swap_fn_t)vapi_msg_igmp_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_details = vapi_register_msg(&__vapi_metadata_igmp_details);
  VAPI_DBG("Assigned msg id %d to igmp_details", vapi_msg_id_igmp_details);
}

static inline void vapi_set_vapi_msg_igmp_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_listen_reply
#define defined_vapi_msg_igmp_listen_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_igmp_listen_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_listen_reply payload;
} vapi_msg_igmp_listen_reply;

static inline void vapi_msg_igmp_listen_reply_payload_hton(vapi_payload_igmp_listen_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_igmp_listen_reply_payload_ntoh(vapi_payload_igmp_listen_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_igmp_listen_reply_hton(vapi_msg_igmp_listen_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_listen_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_listen_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_listen_reply_ntoh(vapi_msg_igmp_listen_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_listen_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_listen_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_listen_reply_msg_size(vapi_msg_igmp_listen_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_listen_reply()
{
  static const char name[] = "igmp_listen_reply";
  static const char name_with_crc[] = "igmp_listen_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_igmp_listen_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_listen_reply, payload),
    sizeof(vapi_msg_igmp_listen_reply),
    (generic_swap_fn_t)vapi_msg_igmp_listen_reply_hton,
    (generic_swap_fn_t)vapi_msg_igmp_listen_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_listen_reply = vapi_register_msg(&__vapi_metadata_igmp_listen_reply);
  VAPI_DBG("Assigned msg id %d to igmp_listen_reply", vapi_msg_id_igmp_listen_reply);
}

static inline void vapi_set_vapi_msg_igmp_listen_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_listen_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_listen_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_proxy_device_add_del_reply
#define defined_vapi_msg_igmp_proxy_device_add_del_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_igmp_proxy_device_add_del_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_proxy_device_add_del_reply payload;
} vapi_msg_igmp_proxy_device_add_del_reply;

static inline void vapi_msg_igmp_proxy_device_add_del_reply_payload_hton(vapi_payload_igmp_proxy_device_add_del_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_igmp_proxy_device_add_del_reply_payload_ntoh(vapi_payload_igmp_proxy_device_add_del_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_igmp_proxy_device_add_del_reply_hton(vapi_msg_igmp_proxy_device_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_proxy_device_add_del_reply_ntoh(vapi_msg_igmp_proxy_device_add_del_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_proxy_device_add_del_reply_msg_size(vapi_msg_igmp_proxy_device_add_del_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_proxy_device_add_del_reply()
{
  static const char name[] = "igmp_proxy_device_add_del_reply";
  static const char name_with_crc[] = "igmp_proxy_device_add_del_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_igmp_proxy_device_add_del_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_proxy_device_add_del_reply, payload),
    sizeof(vapi_msg_igmp_proxy_device_add_del_reply),
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_reply_hton,
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_proxy_device_add_del_reply = vapi_register_msg(&__vapi_metadata_igmp_proxy_device_add_del_reply);
  VAPI_DBG("Assigned msg id %d to igmp_proxy_device_add_del_reply", vapi_msg_id_igmp_proxy_device_add_del_reply);
}

static inline void vapi_set_vapi_msg_igmp_proxy_device_add_del_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_proxy_device_add_del_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_proxy_device_add_del_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_proxy_device_add_del
#define defined_vapi_msg_igmp_proxy_device_add_del
typedef struct __attribute__ ((__packed__)) {
  u8 add;
  u32 vrf_id;
  u32 sw_if_index; 
} vapi_payload_igmp_proxy_device_add_del;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_igmp_proxy_device_add_del payload;
} vapi_msg_igmp_proxy_device_add_del;

static inline void vapi_msg_igmp_proxy_device_add_del_payload_hton(vapi_payload_igmp_proxy_device_add_del *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_igmp_proxy_device_add_del_payload_ntoh(vapi_payload_igmp_proxy_device_add_del *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_igmp_proxy_device_add_del_hton(vapi_msg_igmp_proxy_device_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_proxy_device_add_del_ntoh(vapi_msg_igmp_proxy_device_add_del *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_proxy_device_add_del_msg_size(vapi_msg_igmp_proxy_device_add_del *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_proxy_device_add_del* vapi_alloc_igmp_proxy_device_add_del(struct vapi_ctx_s *ctx)
{
  vapi_msg_igmp_proxy_device_add_del *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_proxy_device_add_del);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_proxy_device_add_del*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_proxy_device_add_del);

  return msg;
}

static inline vapi_error_e vapi_igmp_proxy_device_add_del(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_proxy_device_add_del *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_proxy_device_add_del_reply *reply),
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
  vapi_msg_igmp_proxy_device_add_del_hton(msg);
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
    vapi_msg_igmp_proxy_device_add_del_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_proxy_device_add_del()
{
  static const char name[] = "igmp_proxy_device_add_del";
  static const char name_with_crc[] = "igmp_proxy_device_add_del_f753aab3";
  static vapi_message_desc_t __vapi_metadata_igmp_proxy_device_add_del = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_igmp_proxy_device_add_del, payload),
    sizeof(vapi_msg_igmp_proxy_device_add_del),
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_hton,
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_proxy_device_add_del = vapi_register_msg(&__vapi_metadata_igmp_proxy_device_add_del);
  VAPI_DBG("Assigned msg id %d to igmp_proxy_device_add_del", vapi_msg_id_igmp_proxy_device_add_del);
}
#endif

#ifndef defined_vapi_msg_igmp_dump
#define defined_vapi_msg_igmp_dump
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_igmp_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_igmp_dump payload;
} vapi_msg_igmp_dump;

static inline void vapi_msg_igmp_dump_payload_hton(vapi_payload_igmp_dump *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_igmp_dump_payload_ntoh(vapi_payload_igmp_dump *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_igmp_dump_hton(vapi_msg_igmp_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_igmp_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_dump_ntoh(vapi_msg_igmp_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_igmp_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_dump_msg_size(vapi_msg_igmp_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_dump* vapi_alloc_igmp_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_igmp_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_dump);

  return msg;
}

static inline vapi_error_e vapi_igmp_dump(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_details *reply),
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
  vapi_msg_igmp_dump_hton(msg);
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
    vapi_msg_igmp_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_dump()
{
  static const char name[] = "igmp_dump";
  static const char name_with_crc[] = "igmp_dump_529cb13f";
  static vapi_message_desc_t __vapi_metadata_igmp_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_igmp_dump, payload),
    sizeof(vapi_msg_igmp_dump),
    (generic_swap_fn_t)vapi_msg_igmp_dump_hton,
    (generic_swap_fn_t)vapi_msg_igmp_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_dump = vapi_register_msg(&__vapi_metadata_igmp_dump);
  VAPI_DBG("Assigned msg id %d to igmp_dump", vapi_msg_id_igmp_dump);
}
#endif

#ifndef defined_vapi_msg_igmp_clear_interface_reply
#define defined_vapi_msg_igmp_clear_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_igmp_clear_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_clear_interface_reply payload;
} vapi_msg_igmp_clear_interface_reply;

static inline void vapi_msg_igmp_clear_interface_reply_payload_hton(vapi_payload_igmp_clear_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_igmp_clear_interface_reply_payload_ntoh(vapi_payload_igmp_clear_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_igmp_clear_interface_reply_hton(vapi_msg_igmp_clear_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_clear_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_clear_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_clear_interface_reply_ntoh(vapi_msg_igmp_clear_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_clear_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_clear_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_clear_interface_reply_msg_size(vapi_msg_igmp_clear_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_clear_interface_reply()
{
  static const char name[] = "igmp_clear_interface_reply";
  static const char name_with_crc[] = "igmp_clear_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_igmp_clear_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_clear_interface_reply, payload),
    sizeof(vapi_msg_igmp_clear_interface_reply),
    (generic_swap_fn_t)vapi_msg_igmp_clear_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_igmp_clear_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_clear_interface_reply = vapi_register_msg(&__vapi_metadata_igmp_clear_interface_reply);
  VAPI_DBG("Assigned msg id %d to igmp_clear_interface_reply", vapi_msg_id_igmp_clear_interface_reply);
}

static inline void vapi_set_vapi_msg_igmp_clear_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_clear_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_clear_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_clear_interface
#define defined_vapi_msg_igmp_clear_interface
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_igmp_clear_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_igmp_clear_interface payload;
} vapi_msg_igmp_clear_interface;

static inline void vapi_msg_igmp_clear_interface_payload_hton(vapi_payload_igmp_clear_interface *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_igmp_clear_interface_payload_ntoh(vapi_payload_igmp_clear_interface *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_igmp_clear_interface_hton(vapi_msg_igmp_clear_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_clear_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_igmp_clear_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_clear_interface_ntoh(vapi_msg_igmp_clear_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_clear_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_igmp_clear_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_clear_interface_msg_size(vapi_msg_igmp_clear_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_clear_interface* vapi_alloc_igmp_clear_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_igmp_clear_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_clear_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_clear_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_clear_interface);

  return msg;
}

static inline vapi_error_e vapi_igmp_clear_interface(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_clear_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_clear_interface_reply *reply),
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
  vapi_msg_igmp_clear_interface_hton(msg);
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
    vapi_msg_igmp_clear_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_clear_interface()
{
  static const char name[] = "igmp_clear_interface";
  static const char name_with_crc[] = "igmp_clear_interface_529cb13f";
  static vapi_message_desc_t __vapi_metadata_igmp_clear_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_igmp_clear_interface, payload),
    sizeof(vapi_msg_igmp_clear_interface),
    (generic_swap_fn_t)vapi_msg_igmp_clear_interface_hton,
    (generic_swap_fn_t)vapi_msg_igmp_clear_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_clear_interface = vapi_register_msg(&__vapi_metadata_igmp_clear_interface);
  VAPI_DBG("Assigned msg id %d to igmp_clear_interface", vapi_msg_id_igmp_clear_interface);
}
#endif

#ifndef defined_vapi_msg_igmp_enable_disable_reply
#define defined_vapi_msg_igmp_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_igmp_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_enable_disable_reply payload;
} vapi_msg_igmp_enable_disable_reply;

static inline void vapi_msg_igmp_enable_disable_reply_payload_hton(vapi_payload_igmp_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_igmp_enable_disable_reply_payload_ntoh(vapi_payload_igmp_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_igmp_enable_disable_reply_hton(vapi_msg_igmp_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_enable_disable_reply_ntoh(vapi_msg_igmp_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_enable_disable_reply_msg_size(vapi_msg_igmp_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_enable_disable_reply()
{
  static const char name[] = "igmp_enable_disable_reply";
  static const char name_with_crc[] = "igmp_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_igmp_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_enable_disable_reply, payload),
    sizeof(vapi_msg_igmp_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_igmp_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_igmp_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_enable_disable_reply = vapi_register_msg(&__vapi_metadata_igmp_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to igmp_enable_disable_reply", vapi_msg_id_igmp_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_igmp_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_enable_disable
#define defined_vapi_msg_igmp_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 enable;
  u8 mode;
  u32 sw_if_index; 
} vapi_payload_igmp_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_igmp_enable_disable payload;
} vapi_msg_igmp_enable_disable;

static inline void vapi_msg_igmp_enable_disable_payload_hton(vapi_payload_igmp_enable_disable *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_igmp_enable_disable_payload_ntoh(vapi_payload_igmp_enable_disable *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_igmp_enable_disable_hton(vapi_msg_igmp_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_igmp_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_enable_disable_ntoh(vapi_msg_igmp_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_igmp_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_enable_disable_msg_size(vapi_msg_igmp_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_enable_disable* vapi_alloc_igmp_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_igmp_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_igmp_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_enable_disable_reply *reply),
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
  vapi_msg_igmp_enable_disable_hton(msg);
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
    vapi_msg_igmp_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_enable_disable()
{
  static const char name[] = "igmp_enable_disable";
  static const char name_with_crc[] = "igmp_enable_disable_5bd2a570";
  static vapi_message_desc_t __vapi_metadata_igmp_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_igmp_enable_disable, payload),
    sizeof(vapi_msg_igmp_enable_disable),
    (generic_swap_fn_t)vapi_msg_igmp_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_igmp_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_enable_disable = vapi_register_msg(&__vapi_metadata_igmp_enable_disable);
  VAPI_DBG("Assigned msg id %d to igmp_enable_disable", vapi_msg_id_igmp_enable_disable);
}
#endif

#ifndef defined_vapi_msg_igmp_proxy_device_add_del_interface_reply
#define defined_vapi_msg_igmp_proxy_device_add_del_interface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_igmp_proxy_device_add_del_interface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_proxy_device_add_del_interface_reply payload;
} vapi_msg_igmp_proxy_device_add_del_interface_reply;

static inline void vapi_msg_igmp_proxy_device_add_del_interface_reply_payload_hton(vapi_payload_igmp_proxy_device_add_del_interface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_igmp_proxy_device_add_del_interface_reply_payload_ntoh(vapi_payload_igmp_proxy_device_add_del_interface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_igmp_proxy_device_add_del_interface_reply_hton(vapi_msg_igmp_proxy_device_add_del_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del_interface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_interface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_proxy_device_add_del_interface_reply_ntoh(vapi_msg_igmp_proxy_device_add_del_interface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del_interface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_interface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_proxy_device_add_del_interface_reply_msg_size(vapi_msg_igmp_proxy_device_add_del_interface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_proxy_device_add_del_interface_reply()
{
  static const char name[] = "igmp_proxy_device_add_del_interface_reply";
  static const char name_with_crc[] = "igmp_proxy_device_add_del_interface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_igmp_proxy_device_add_del_interface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_proxy_device_add_del_interface_reply, payload),
    sizeof(vapi_msg_igmp_proxy_device_add_del_interface_reply),
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_interface_reply_hton,
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_interface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_proxy_device_add_del_interface_reply = vapi_register_msg(&__vapi_metadata_igmp_proxy_device_add_del_interface_reply);
  VAPI_DBG("Assigned msg id %d to igmp_proxy_device_add_del_interface_reply", vapi_msg_id_igmp_proxy_device_add_del_interface_reply);
}

static inline void vapi_set_vapi_msg_igmp_proxy_device_add_del_interface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_proxy_device_add_del_interface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_proxy_device_add_del_interface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_proxy_device_add_del_interface
#define defined_vapi_msg_igmp_proxy_device_add_del_interface
typedef struct __attribute__ ((__packed__)) {
  u8 add;
  u32 vrf_id;
  u32 sw_if_index; 
} vapi_payload_igmp_proxy_device_add_del_interface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_igmp_proxy_device_add_del_interface payload;
} vapi_msg_igmp_proxy_device_add_del_interface;

static inline void vapi_msg_igmp_proxy_device_add_del_interface_payload_hton(vapi_payload_igmp_proxy_device_add_del_interface *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_igmp_proxy_device_add_del_interface_payload_ntoh(vapi_payload_igmp_proxy_device_add_del_interface *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_igmp_proxy_device_add_del_interface_hton(vapi_msg_igmp_proxy_device_add_del_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del_interface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_interface_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_proxy_device_add_del_interface_ntoh(vapi_msg_igmp_proxy_device_add_del_interface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_proxy_device_add_del_interface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_igmp_proxy_device_add_del_interface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_proxy_device_add_del_interface_msg_size(vapi_msg_igmp_proxy_device_add_del_interface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_proxy_device_add_del_interface* vapi_alloc_igmp_proxy_device_add_del_interface(struct vapi_ctx_s *ctx)
{
  vapi_msg_igmp_proxy_device_add_del_interface *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_proxy_device_add_del_interface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_proxy_device_add_del_interface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_proxy_device_add_del_interface);

  return msg;
}

static inline vapi_error_e vapi_igmp_proxy_device_add_del_interface(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_proxy_device_add_del_interface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_proxy_device_add_del_interface_reply *reply),
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
  vapi_msg_igmp_proxy_device_add_del_interface_hton(msg);
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
    vapi_msg_igmp_proxy_device_add_del_interface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_proxy_device_add_del_interface()
{
  static const char name[] = "igmp_proxy_device_add_del_interface";
  static const char name_with_crc[] = "igmp_proxy_device_add_del_interface_f753aab3";
  static vapi_message_desc_t __vapi_metadata_igmp_proxy_device_add_del_interface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_igmp_proxy_device_add_del_interface, payload),
    sizeof(vapi_msg_igmp_proxy_device_add_del_interface),
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_interface_hton,
    (generic_swap_fn_t)vapi_msg_igmp_proxy_device_add_del_interface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_proxy_device_add_del_interface = vapi_register_msg(&__vapi_metadata_igmp_proxy_device_add_del_interface);
  VAPI_DBG("Assigned msg id %d to igmp_proxy_device_add_del_interface", vapi_msg_id_igmp_proxy_device_add_del_interface);
}
#endif

#ifndef defined_vapi_msg_igmp_event
#define defined_vapi_msg_igmp_event
typedef struct __attribute__ ((__packed__)) {
  u16 _vl_msg_id;
  u32 sw_if_index;
  vapi_enum_filter_mode filter;
  vapi_type_ip4_address saddr;
  vapi_type_ip4_address gaddr; 
} vapi_payload_igmp_event;

typedef struct __attribute__ ((__packed__)) {

  vapi_payload_igmp_event payload;
} vapi_msg_igmp_event;

static inline void vapi_msg_igmp_event_payload_hton(vapi_payload_igmp_event *payload)
{
  payload->_vl_msg_id = htobe16(payload->_vl_msg_id);
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->filter = (vapi_enum_filter_mode)htobe32(payload->filter);
}

static inline void vapi_msg_igmp_event_payload_ntoh(vapi_payload_igmp_event *payload)
{
  payload->_vl_msg_id = be16toh(payload->_vl_msg_id);
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->filter = (vapi_enum_filter_mode)be32toh(payload->filter);
}

static inline void vapi_msg_igmp_event_hton(vapi_msg_igmp_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_event'@%p to big endian", msg);

  vapi_msg_igmp_event_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_event_ntoh(vapi_msg_igmp_event *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_event'@%p to host byte order", msg);

  vapi_msg_igmp_event_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_event_msg_size(vapi_msg_igmp_event *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_event()
{
  static const char name[] = "igmp_event";
  static const char name_with_crc[] = "igmp_event_e630f8e7";
  static vapi_message_desc_t __vapi_metadata_igmp_event = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    false,
    0,
    offsetof(vapi_msg_igmp_event, payload),
    sizeof(vapi_msg_igmp_event),
    (generic_swap_fn_t)vapi_msg_igmp_event_hton,
    (generic_swap_fn_t)vapi_msg_igmp_event_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_event = vapi_register_msg(&__vapi_metadata_igmp_event);
  VAPI_DBG("Assigned msg id %d to igmp_event", vapi_msg_id_igmp_event);
}

static inline void vapi_set_vapi_msg_igmp_event_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_event *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_event, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_group_prefix_set_reply
#define defined_vapi_msg_igmp_group_prefix_set_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_igmp_group_prefix_set_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_group_prefix_set_reply payload;
} vapi_msg_igmp_group_prefix_set_reply;

static inline void vapi_msg_igmp_group_prefix_set_reply_payload_hton(vapi_payload_igmp_group_prefix_set_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_igmp_group_prefix_set_reply_payload_ntoh(vapi_payload_igmp_group_prefix_set_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_igmp_group_prefix_set_reply_hton(vapi_msg_igmp_group_prefix_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_set_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_group_prefix_set_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_group_prefix_set_reply_ntoh(vapi_msg_igmp_group_prefix_set_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_set_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_group_prefix_set_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_group_prefix_set_reply_msg_size(vapi_msg_igmp_group_prefix_set_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_group_prefix_set_reply()
{
  static const char name[] = "igmp_group_prefix_set_reply";
  static const char name_with_crc[] = "igmp_group_prefix_set_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_igmp_group_prefix_set_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_group_prefix_set_reply, payload),
    sizeof(vapi_msg_igmp_group_prefix_set_reply),
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_set_reply_hton,
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_set_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_group_prefix_set_reply = vapi_register_msg(&__vapi_metadata_igmp_group_prefix_set_reply);
  VAPI_DBG("Assigned msg id %d to igmp_group_prefix_set_reply", vapi_msg_id_igmp_group_prefix_set_reply);
}

static inline void vapi_set_vapi_msg_igmp_group_prefix_set_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_group_prefix_set_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_group_prefix_set_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_group_prefix_set
#define defined_vapi_msg_igmp_group_prefix_set
typedef struct __attribute__ ((__packed__)) {
  vapi_type_group_prefix gp; 
} vapi_payload_igmp_group_prefix_set;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_igmp_group_prefix_set payload;
} vapi_msg_igmp_group_prefix_set;

static inline void vapi_msg_igmp_group_prefix_set_payload_hton(vapi_payload_igmp_group_prefix_set *payload)
{
  vapi_type_group_prefix_hton(&payload->gp);
}

static inline void vapi_msg_igmp_group_prefix_set_payload_ntoh(vapi_payload_igmp_group_prefix_set *payload)
{
  vapi_type_group_prefix_ntoh(&payload->gp);
}

static inline void vapi_msg_igmp_group_prefix_set_hton(vapi_msg_igmp_group_prefix_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_set'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_igmp_group_prefix_set_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_group_prefix_set_ntoh(vapi_msg_igmp_group_prefix_set *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_set'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_igmp_group_prefix_set_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_group_prefix_set_msg_size(vapi_msg_igmp_group_prefix_set *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_group_prefix_set* vapi_alloc_igmp_group_prefix_set(struct vapi_ctx_s *ctx)
{
  vapi_msg_igmp_group_prefix_set *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_group_prefix_set);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_group_prefix_set*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_group_prefix_set);

  return msg;
}

static inline vapi_error_e vapi_igmp_group_prefix_set(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_group_prefix_set *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_group_prefix_set_reply *reply),
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
  vapi_msg_igmp_group_prefix_set_hton(msg);
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
    vapi_msg_igmp_group_prefix_set_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_group_prefix_set()
{
  static const char name[] = "igmp_group_prefix_set";
  static const char name_with_crc[] = "igmp_group_prefix_set_368311d2";
  static vapi_message_desc_t __vapi_metadata_igmp_group_prefix_set = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_igmp_group_prefix_set, payload),
    sizeof(vapi_msg_igmp_group_prefix_set),
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_set_hton,
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_set_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_group_prefix_set = vapi_register_msg(&__vapi_metadata_igmp_group_prefix_set);
  VAPI_DBG("Assigned msg id %d to igmp_group_prefix_set", vapi_msg_id_igmp_group_prefix_set);
}
#endif

#ifndef defined_vapi_msg_igmp_group_prefix_details
#define defined_vapi_msg_igmp_group_prefix_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_group_prefix gp; 
} vapi_payload_igmp_group_prefix_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_igmp_group_prefix_details payload;
} vapi_msg_igmp_group_prefix_details;

static inline void vapi_msg_igmp_group_prefix_details_payload_hton(vapi_payload_igmp_group_prefix_details *payload)
{
  vapi_type_group_prefix_hton(&payload->gp);
}

static inline void vapi_msg_igmp_group_prefix_details_payload_ntoh(vapi_payload_igmp_group_prefix_details *payload)
{
  vapi_type_group_prefix_ntoh(&payload->gp);
}

static inline void vapi_msg_igmp_group_prefix_details_hton(vapi_msg_igmp_group_prefix_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_igmp_group_prefix_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_group_prefix_details_ntoh(vapi_msg_igmp_group_prefix_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_igmp_group_prefix_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_group_prefix_details_msg_size(vapi_msg_igmp_group_prefix_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_igmp_group_prefix_details()
{
  static const char name[] = "igmp_group_prefix_details";
  static const char name_with_crc[] = "igmp_group_prefix_details_fe05d407";
  static vapi_message_desc_t __vapi_metadata_igmp_group_prefix_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_igmp_group_prefix_details, payload),
    sizeof(vapi_msg_igmp_group_prefix_details),
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_details_hton,
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_group_prefix_details = vapi_register_msg(&__vapi_metadata_igmp_group_prefix_details);
  VAPI_DBG("Assigned msg id %d to igmp_group_prefix_details", vapi_msg_id_igmp_group_prefix_details);
}

static inline void vapi_set_vapi_msg_igmp_group_prefix_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_igmp_group_prefix_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_igmp_group_prefix_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_igmp_group_prefix_dump
#define defined_vapi_msg_igmp_group_prefix_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_igmp_group_prefix_dump;

static inline void vapi_msg_igmp_group_prefix_dump_hton(vapi_msg_igmp_group_prefix_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_igmp_group_prefix_dump_ntoh(vapi_msg_igmp_group_prefix_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_group_prefix_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_igmp_group_prefix_dump_msg_size(vapi_msg_igmp_group_prefix_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_group_prefix_dump* vapi_alloc_igmp_group_prefix_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_igmp_group_prefix_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_group_prefix_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_group_prefix_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_group_prefix_dump);

  return msg;
}

static inline vapi_error_e vapi_igmp_group_prefix_dump(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_group_prefix_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_group_prefix_details *reply),
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
  vapi_msg_igmp_group_prefix_dump_hton(msg);
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
    vapi_msg_igmp_group_prefix_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_group_prefix_dump()
{
  static const char name[] = "igmp_group_prefix_dump";
  static const char name_with_crc[] = "igmp_group_prefix_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_igmp_group_prefix_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_igmp_group_prefix_dump),
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_dump_hton,
    (generic_swap_fn_t)vapi_msg_igmp_group_prefix_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_group_prefix_dump = vapi_register_msg(&__vapi_metadata_igmp_group_prefix_dump);
  VAPI_DBG("Assigned msg id %d to igmp_group_prefix_dump", vapi_msg_id_igmp_group_prefix_dump);
}
#endif

#ifndef defined_vapi_msg_igmp_listen
#define defined_vapi_msg_igmp_listen
typedef struct __attribute__ ((__packed__)) {
  vapi_type_igmp_group group; 
} vapi_payload_igmp_listen;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_igmp_listen payload;
} vapi_msg_igmp_listen;

static inline void vapi_msg_igmp_listen_payload_hton(vapi_payload_igmp_listen *payload)
{
  vapi_type_igmp_group_hton(&payload->group);
}

static inline void vapi_msg_igmp_listen_payload_ntoh(vapi_payload_igmp_listen *payload)
{
  vapi_type_igmp_group_ntoh(&payload->group);
}

static inline void vapi_msg_igmp_listen_hton(vapi_msg_igmp_listen *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_listen'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_igmp_listen_payload_hton(&msg->payload);
}

static inline void vapi_msg_igmp_listen_ntoh(vapi_msg_igmp_listen *msg)
{
  VAPI_DBG("Swapping `vapi_msg_igmp_listen'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_igmp_listen_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_igmp_listen_msg_size(vapi_msg_igmp_listen *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_igmp_listen* vapi_alloc_igmp_listen(struct vapi_ctx_s *ctx, size_t group_saddrs_array_size)
{
  vapi_msg_igmp_listen *msg = NULL;
  const size_t size = sizeof(vapi_msg_igmp_listen) + sizeof(msg->payload.group.saddrs[0]) * group_saddrs_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_igmp_listen*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_igmp_listen);
  msg->payload.group.n_srcs = group_saddrs_array_size;

  return msg;
}

static inline vapi_error_e vapi_igmp_listen(struct vapi_ctx_s *ctx,
  vapi_msg_igmp_listen *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_igmp_listen_reply *reply),
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
  vapi_msg_igmp_listen_hton(msg);
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
    vapi_msg_igmp_listen_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_igmp_listen()
{
  static const char name[] = "igmp_listen";
  static const char name_with_crc[] = "igmp_listen_ffa3e375";
  static vapi_message_desc_t __vapi_metadata_igmp_listen = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_igmp_listen, payload),
    sizeof(vapi_msg_igmp_listen),
    (generic_swap_fn_t)vapi_msg_igmp_listen_hton,
    (generic_swap_fn_t)vapi_msg_igmp_listen_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_igmp_listen = vapi_register_msg(&__vapi_metadata_igmp_listen);
  VAPI_DBG("Assigned msg id %d to igmp_listen", vapi_msg_id_igmp_listen);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
