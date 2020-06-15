#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_vmxnet3_vmxnet3_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_vmxnet3_vmxnet3_api_json

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

extern vapi_msg_id_t vapi_msg_id_vmxnet3_create_reply;
extern vapi_msg_id_t vapi_msg_id_vmxnet3_delete_reply;
extern vapi_msg_id_t vapi_msg_id_vmxnet3_details;
extern vapi_msg_id_t vapi_msg_id_vmxnet3_dump;
extern vapi_msg_id_t vapi_msg_id_vmxnet3_delete;
extern vapi_msg_id_t vapi_msg_id_vmxnet3_create;

#define DEFINE_VAPI_MSG_IDS_VMXNET3_API_JSON\
  vapi_msg_id_t vapi_msg_id_vmxnet3_create_reply;\
  vapi_msg_id_t vapi_msg_id_vmxnet3_delete_reply;\
  vapi_msg_id_t vapi_msg_id_vmxnet3_details;\
  vapi_msg_id_t vapi_msg_id_vmxnet3_dump;\
  vapi_msg_id_t vapi_msg_id_vmxnet3_delete;\
  vapi_msg_id_t vapi_msg_id_vmxnet3_create;


#ifndef defined_vapi_type_vmxnet3_tx_list
#define defined_vapi_type_vmxnet3_tx_list
typedef struct __attribute__((__packed__)) {
  u16 tx_qsize;
  u16 tx_next;
  u16 tx_produce;
  u16 tx_consume;
} vapi_type_vmxnet3_tx_list;

static inline void vapi_type_vmxnet3_tx_list_hton(vapi_type_vmxnet3_tx_list *msg)
{
  msg->tx_qsize = htobe16(msg->tx_qsize);
  msg->tx_next = htobe16(msg->tx_next);
  msg->tx_produce = htobe16(msg->tx_produce);
  msg->tx_consume = htobe16(msg->tx_consume);
}

static inline void vapi_type_vmxnet3_tx_list_ntoh(vapi_type_vmxnet3_tx_list *msg)
{
  msg->tx_qsize = be16toh(msg->tx_qsize);
  msg->tx_next = be16toh(msg->tx_next);
  msg->tx_produce = be16toh(msg->tx_produce);
  msg->tx_consume = be16toh(msg->tx_consume);
}
#endif

#ifndef defined_vapi_type_vmxnet3_rx_list
#define defined_vapi_type_vmxnet3_rx_list
typedef struct __attribute__((__packed__)) {
  u16 rx_qsize;
  u16 rx_fill[2];
  u16 rx_next;
  u16 rx_produce[2];
  u16 rx_consume[2];
} vapi_type_vmxnet3_rx_list;

static inline void vapi_type_vmxnet3_rx_list_hton(vapi_type_vmxnet3_rx_list *msg)
{
  msg->rx_qsize = htobe16(msg->rx_qsize);
  do { unsigned i; for (i = 0; i < 2; ++i) { msg->rx_fill[i] = htobe16(msg->rx_fill[i]); } } while(0);
  msg->rx_next = htobe16(msg->rx_next);
  do { unsigned i; for (i = 0; i < 2; ++i) { msg->rx_produce[i] = htobe16(msg->rx_produce[i]); } } while(0);
  do { unsigned i; for (i = 0; i < 2; ++i) { msg->rx_consume[i] = htobe16(msg->rx_consume[i]); } } while(0);
}

static inline void vapi_type_vmxnet3_rx_list_ntoh(vapi_type_vmxnet3_rx_list *msg)
{
  msg->rx_qsize = be16toh(msg->rx_qsize);
  do { unsigned i; for (i = 0; i < 2; ++i) { msg->rx_fill[i] = be16toh(msg->rx_fill[i]); } } while(0);
  msg->rx_next = be16toh(msg->rx_next);
  do { unsigned i; for (i = 0; i < 2; ++i) { msg->rx_produce[i] = be16toh(msg->rx_produce[i]); } } while(0);
  do { unsigned i; for (i = 0; i < 2; ++i) { msg->rx_consume[i] = be16toh(msg->rx_consume[i]); } } while(0);
}
#endif

#ifndef defined_vapi_msg_vmxnet3_create_reply
#define defined_vapi_msg_vmxnet3_create_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 sw_if_index; 
} vapi_payload_vmxnet3_create_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vmxnet3_create_reply payload;
} vapi_msg_vmxnet3_create_reply;

static inline void vapi_msg_vmxnet3_create_reply_payload_hton(vapi_payload_vmxnet3_create_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vmxnet3_create_reply_payload_ntoh(vapi_payload_vmxnet3_create_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vmxnet3_create_reply_hton(vapi_msg_vmxnet3_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_create_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vmxnet3_create_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_vmxnet3_create_reply_ntoh(vapi_msg_vmxnet3_create_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_create_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vmxnet3_create_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vmxnet3_create_reply_msg_size(vapi_msg_vmxnet3_create_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_vmxnet3_create_reply()
{
  static const char name[] = "vmxnet3_create_reply";
  static const char name_with_crc[] = "vmxnet3_create_reply_fda5941f";
  static vapi_message_desc_t __vapi_metadata_vmxnet3_create_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vmxnet3_create_reply, payload),
    sizeof(vapi_msg_vmxnet3_create_reply),
    (generic_swap_fn_t)vapi_msg_vmxnet3_create_reply_hton,
    (generic_swap_fn_t)vapi_msg_vmxnet3_create_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vmxnet3_create_reply = vapi_register_msg(&__vapi_metadata_vmxnet3_create_reply);
  VAPI_DBG("Assigned msg id %d to vmxnet3_create_reply", vapi_msg_id_vmxnet3_create_reply);
}

static inline void vapi_set_vapi_msg_vmxnet3_create_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vmxnet3_create_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vmxnet3_create_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vmxnet3_delete_reply
#define defined_vapi_msg_vmxnet3_delete_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_vmxnet3_delete_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vmxnet3_delete_reply payload;
} vapi_msg_vmxnet3_delete_reply;

static inline void vapi_msg_vmxnet3_delete_reply_payload_hton(vapi_payload_vmxnet3_delete_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_vmxnet3_delete_reply_payload_ntoh(vapi_payload_vmxnet3_delete_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_vmxnet3_delete_reply_hton(vapi_msg_vmxnet3_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_delete_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vmxnet3_delete_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_vmxnet3_delete_reply_ntoh(vapi_msg_vmxnet3_delete_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_delete_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vmxnet3_delete_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vmxnet3_delete_reply_msg_size(vapi_msg_vmxnet3_delete_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_vmxnet3_delete_reply()
{
  static const char name[] = "vmxnet3_delete_reply";
  static const char name_with_crc[] = "vmxnet3_delete_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_vmxnet3_delete_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vmxnet3_delete_reply, payload),
    sizeof(vapi_msg_vmxnet3_delete_reply),
    (generic_swap_fn_t)vapi_msg_vmxnet3_delete_reply_hton,
    (generic_swap_fn_t)vapi_msg_vmxnet3_delete_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vmxnet3_delete_reply = vapi_register_msg(&__vapi_metadata_vmxnet3_delete_reply);
  VAPI_DBG("Assigned msg id %d to vmxnet3_delete_reply", vapi_msg_id_vmxnet3_delete_reply);
}

static inline void vapi_set_vapi_msg_vmxnet3_delete_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vmxnet3_delete_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vmxnet3_delete_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vmxnet3_details
#define defined_vapi_msg_vmxnet3_details
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index;
  u8 if_name[64];
  u8 hw_addr[6];
  u32 pci_addr;
  u8 version;
  u8 admin_up_down;
  u8 rx_count;
  vapi_type_vmxnet3_rx_list rx_list[16];
  u8 tx_count;
  vapi_type_vmxnet3_tx_list tx_list[8]; 
} vapi_payload_vmxnet3_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_vmxnet3_details payload;
} vapi_msg_vmxnet3_details;

static inline void vapi_msg_vmxnet3_details_payload_hton(vapi_payload_vmxnet3_details *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
  payload->pci_addr = htobe32(payload->pci_addr);
  do { unsigned i; for (i = 0; i < 16; ++i) { vapi_type_vmxnet3_rx_list_hton(&payload->rx_list[i]); } } while(0);
  do { unsigned i; for (i = 0; i < 8; ++i) { vapi_type_vmxnet3_tx_list_hton(&payload->tx_list[i]); } } while(0);
}

static inline void vapi_msg_vmxnet3_details_payload_ntoh(vapi_payload_vmxnet3_details *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
  payload->pci_addr = be32toh(payload->pci_addr);
  do { unsigned i; for (i = 0; i < 16; ++i) { vapi_type_vmxnet3_rx_list_ntoh(&payload->rx_list[i]); } } while(0);
  do { unsigned i; for (i = 0; i < 8; ++i) { vapi_type_vmxnet3_tx_list_ntoh(&payload->tx_list[i]); } } while(0);
}

static inline void vapi_msg_vmxnet3_details_hton(vapi_msg_vmxnet3_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_vmxnet3_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_vmxnet3_details_ntoh(vapi_msg_vmxnet3_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_vmxnet3_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vmxnet3_details_msg_size(vapi_msg_vmxnet3_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_vmxnet3_details()
{
  static const char name[] = "vmxnet3_details";
  static const char name_with_crc[] = "vmxnet3_details_25f4412f";
  static vapi_message_desc_t __vapi_metadata_vmxnet3_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_vmxnet3_details, payload),
    sizeof(vapi_msg_vmxnet3_details),
    (generic_swap_fn_t)vapi_msg_vmxnet3_details_hton,
    (generic_swap_fn_t)vapi_msg_vmxnet3_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vmxnet3_details = vapi_register_msg(&__vapi_metadata_vmxnet3_details);
  VAPI_DBG("Assigned msg id %d to vmxnet3_details", vapi_msg_id_vmxnet3_details);
}

static inline void vapi_set_vapi_msg_vmxnet3_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_vmxnet3_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_vmxnet3_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_vmxnet3_dump
#define defined_vapi_msg_vmxnet3_dump
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_vmxnet3_dump;

static inline void vapi_msg_vmxnet3_dump_hton(vapi_msg_vmxnet3_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_vmxnet3_dump_ntoh(vapi_msg_vmxnet3_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_vmxnet3_dump_msg_size(vapi_msg_vmxnet3_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_vmxnet3_dump* vapi_alloc_vmxnet3_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_vmxnet3_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_vmxnet3_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vmxnet3_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vmxnet3_dump);

  return msg;
}

static inline vapi_error_e vapi_vmxnet3_dump(struct vapi_ctx_s *ctx,
  vapi_msg_vmxnet3_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vmxnet3_details *reply),
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
  vapi_msg_vmxnet3_dump_hton(msg);
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
    vapi_msg_vmxnet3_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vmxnet3_dump()
{
  static const char name[] = "vmxnet3_dump";
  static const char name_with_crc[] = "vmxnet3_dump_51077d14";
  static vapi_message_desc_t __vapi_metadata_vmxnet3_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_vmxnet3_dump),
    (generic_swap_fn_t)vapi_msg_vmxnet3_dump_hton,
    (generic_swap_fn_t)vapi_msg_vmxnet3_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vmxnet3_dump = vapi_register_msg(&__vapi_metadata_vmxnet3_dump);
  VAPI_DBG("Assigned msg id %d to vmxnet3_dump", vapi_msg_id_vmxnet3_dump);
}
#endif

#ifndef defined_vapi_msg_vmxnet3_delete
#define defined_vapi_msg_vmxnet3_delete
typedef struct __attribute__ ((__packed__)) {
  u32 sw_if_index; 
} vapi_payload_vmxnet3_delete;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vmxnet3_delete payload;
} vapi_msg_vmxnet3_delete;

static inline void vapi_msg_vmxnet3_delete_payload_hton(vapi_payload_vmxnet3_delete *payload)
{
  payload->sw_if_index = htobe32(payload->sw_if_index);
}

static inline void vapi_msg_vmxnet3_delete_payload_ntoh(vapi_payload_vmxnet3_delete *payload)
{
  payload->sw_if_index = be32toh(payload->sw_if_index);
}

static inline void vapi_msg_vmxnet3_delete_hton(vapi_msg_vmxnet3_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_delete'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vmxnet3_delete_payload_hton(&msg->payload);
}

static inline void vapi_msg_vmxnet3_delete_ntoh(vapi_msg_vmxnet3_delete *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_delete'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vmxnet3_delete_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vmxnet3_delete_msg_size(vapi_msg_vmxnet3_delete *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_vmxnet3_delete* vapi_alloc_vmxnet3_delete(struct vapi_ctx_s *ctx)
{
  vapi_msg_vmxnet3_delete *msg = NULL;
  const size_t size = sizeof(vapi_msg_vmxnet3_delete);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vmxnet3_delete*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vmxnet3_delete);

  return msg;
}

static inline vapi_error_e vapi_vmxnet3_delete(struct vapi_ctx_s *ctx,
  vapi_msg_vmxnet3_delete *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vmxnet3_delete_reply *reply),
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
  vapi_msg_vmxnet3_delete_hton(msg);
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
    vapi_msg_vmxnet3_delete_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vmxnet3_delete()
{
  static const char name[] = "vmxnet3_delete";
  static const char name_with_crc[] = "vmxnet3_delete_529cb13f";
  static vapi_message_desc_t __vapi_metadata_vmxnet3_delete = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vmxnet3_delete, payload),
    sizeof(vapi_msg_vmxnet3_delete),
    (generic_swap_fn_t)vapi_msg_vmxnet3_delete_hton,
    (generic_swap_fn_t)vapi_msg_vmxnet3_delete_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vmxnet3_delete = vapi_register_msg(&__vapi_metadata_vmxnet3_delete);
  VAPI_DBG("Assigned msg id %d to vmxnet3_delete", vapi_msg_id_vmxnet3_delete);
}
#endif

#ifndef defined_vapi_msg_vmxnet3_create
#define defined_vapi_msg_vmxnet3_create
typedef struct __attribute__ ((__packed__)) {
  u32 pci_addr;
  i32 enable_elog;
  u16 rxq_size;
  u16 rxq_num;
  u16 txq_size;
  u16 txq_num;
  u8 bind; 
} vapi_payload_vmxnet3_create;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_vmxnet3_create payload;
} vapi_msg_vmxnet3_create;

static inline void vapi_msg_vmxnet3_create_payload_hton(vapi_payload_vmxnet3_create *payload)
{
  payload->pci_addr = htobe32(payload->pci_addr);
  payload->enable_elog = htobe32(payload->enable_elog);
  payload->rxq_size = htobe16(payload->rxq_size);
  payload->rxq_num = htobe16(payload->rxq_num);
  payload->txq_size = htobe16(payload->txq_size);
  payload->txq_num = htobe16(payload->txq_num);
}

static inline void vapi_msg_vmxnet3_create_payload_ntoh(vapi_payload_vmxnet3_create *payload)
{
  payload->pci_addr = be32toh(payload->pci_addr);
  payload->enable_elog = be32toh(payload->enable_elog);
  payload->rxq_size = be16toh(payload->rxq_size);
  payload->rxq_num = be16toh(payload->rxq_num);
  payload->txq_size = be16toh(payload->txq_size);
  payload->txq_num = be16toh(payload->txq_num);
}

static inline void vapi_msg_vmxnet3_create_hton(vapi_msg_vmxnet3_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_create'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_vmxnet3_create_payload_hton(&msg->payload);
}

static inline void vapi_msg_vmxnet3_create_ntoh(vapi_msg_vmxnet3_create *msg)
{
  VAPI_DBG("Swapping `vapi_msg_vmxnet3_create'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_vmxnet3_create_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_vmxnet3_create_msg_size(vapi_msg_vmxnet3_create *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_vmxnet3_create* vapi_alloc_vmxnet3_create(struct vapi_ctx_s *ctx)
{
  vapi_msg_vmxnet3_create *msg = NULL;
  const size_t size = sizeof(vapi_msg_vmxnet3_create);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_vmxnet3_create*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_vmxnet3_create);

  return msg;
}

static inline vapi_error_e vapi_vmxnet3_create(struct vapi_ctx_s *ctx,
  vapi_msg_vmxnet3_create *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_vmxnet3_create_reply *reply),
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
  vapi_msg_vmxnet3_create_hton(msg);
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
    vapi_msg_vmxnet3_create_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_vmxnet3_create()
{
  static const char name[] = "vmxnet3_create";
  static const char name_with_crc[] = "vmxnet3_create_6da613a5";
  static vapi_message_desc_t __vapi_metadata_vmxnet3_create = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_vmxnet3_create, payload),
    sizeof(vapi_msg_vmxnet3_create),
    (generic_swap_fn_t)vapi_msg_vmxnet3_create_hton,
    (generic_swap_fn_t)vapi_msg_vmxnet3_create_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_vmxnet3_create = vapi_register_msg(&__vapi_metadata_vmxnet3_create);
  VAPI_DBG("Assigned msg id %d to vmxnet3_create", vapi_msg_id_vmxnet3_create);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
