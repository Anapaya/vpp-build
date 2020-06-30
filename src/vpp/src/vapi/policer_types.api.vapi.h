#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_policer_policer_types_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_policer_policer_types_api_json

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


#define DEFINE_VAPI_MSG_IDS_POLICER_TYPES_API_JSON\



#ifndef defined_vapi_enum_sse2_qos_rate_type
#define defined_vapi_enum_sse2_qos_rate_type
typedef enum {
  SSE2_QOS_RATE_API_KBPS = 0,
  SSE2_QOS_RATE_API_PPS = 1,
  SSE2_QOS_RATE_API_INVALID = 2,
} __attribute__((packed)) vapi_enum_sse2_qos_rate_type;

#endif

#ifndef defined_vapi_enum_sse2_qos_round_type
#define defined_vapi_enum_sse2_qos_round_type
typedef enum {
  SSE2_QOS_ROUND_API_TO_CLOSEST = 0,
  SSE2_QOS_ROUND_API_TO_UP = 1,
  SSE2_QOS_ROUND_API_TO_DOWN = 2,
  SSE2_QOS_ROUND_API_INVALID = 3,
} __attribute__((packed)) vapi_enum_sse2_qos_round_type;

#endif

#ifndef defined_vapi_enum_sse2_qos_policer_type
#define defined_vapi_enum_sse2_qos_policer_type
typedef enum {
  SSE2_QOS_POLICER_TYPE_API_1R2C = 0,
  SSE2_QOS_POLICER_TYPE_API_1R3C_RFC_2697 = 1,
  SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_2698 = 2,
  SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_4115 = 3,
  SSE2_QOS_POLICER_TYPE_API_2R3C_RFC_MEF5CF1 = 4,
  SSE2_QOS_POLICER_TYPE_API_MAX = 5,
} __attribute__((packed)) vapi_enum_sse2_qos_policer_type;

#endif

#ifndef defined_vapi_enum_sse2_qos_action_type
#define defined_vapi_enum_sse2_qos_action_type
typedef enum {
  SSE2_QOS_ACTION_API_DROP = 0,
  SSE2_QOS_ACTION_API_TRANSMIT = 1,
  SSE2_QOS_ACTION_API_MARK_AND_TRANSMIT = 2,
} __attribute__((packed)) vapi_enum_sse2_qos_action_type;

#endif

#ifndef defined_vapi_type_sse2_qos_action
#define defined_vapi_type_sse2_qos_action
typedef struct __attribute__((__packed__)) {
  vapi_enum_sse2_qos_action_type type;
  u8 dscp;
} vapi_type_sse2_qos_action;

static inline void vapi_type_sse2_qos_action_hton(vapi_type_sse2_qos_action *msg)
{

}

static inline void vapi_type_sse2_qos_action_ntoh(vapi_type_sse2_qos_action *msg)
{

}
#endif


#ifdef __cplusplus
}
#endif

#endif
