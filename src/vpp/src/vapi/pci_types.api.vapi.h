#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vlib_pci_pci_types_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vlib_pci_pci_types_api_json

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


#define DEFINE_VAPI_MSG_IDS_PCI_TYPES_API_JSON\



#ifndef defined_vapi_type_pci_address
#define defined_vapi_type_pci_address
typedef struct __attribute__((__packed__)) {
  u16 domain;
  u8 bus;
  u8 slot;
  u8 function;
} vapi_type_pci_address;

static inline void vapi_type_pci_address_hton(vapi_type_pci_address *msg)
{
  msg->domain = htobe16(msg->domain);
}

static inline void vapi_type_pci_address_ntoh(vapi_type_pci_address *msg)
{
  msg->domain = be16toh(msg->domain);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
