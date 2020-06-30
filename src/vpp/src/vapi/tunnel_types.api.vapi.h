#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_tunnel_tunnel_types_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_tunnel_tunnel_types_api_json

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


#define DEFINE_VAPI_MSG_IDS_TUNNEL_TYPES_API_JSON\



#ifndef defined_vapi_enum_tunnel_encap_decap_flags
#define defined_vapi_enum_tunnel_encap_decap_flags
typedef enum {
  TUNNEL_API_ENCAP_DECAP_FLAG_NONE = 0,
  TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_DF = 1,
  TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_SET_DF = 2,
  TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_DSCP = 4,
  TUNNEL_API_ENCAP_DECAP_FLAG_ENCAP_COPY_ECN = 8,
  TUNNEL_API_ENCAP_DECAP_FLAG_DECAP_COPY_ECN = 16,
} __attribute__((packed)) vapi_enum_tunnel_encap_decap_flags;

#endif

#ifndef defined_vapi_enum_tunnel_mode
#define defined_vapi_enum_tunnel_mode
typedef enum {
  TUNNEL_API_MODE_P2P = 0,
  TUNNEL_API_MODE_MP = 1,
} __attribute__((packed)) vapi_enum_tunnel_mode;

#endif


#ifdef __cplusplus
}
#endif

#endif
