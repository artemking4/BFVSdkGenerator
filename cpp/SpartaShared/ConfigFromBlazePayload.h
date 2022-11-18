// Object: ConfigFromBlazePayload
// ClassId: 4809
// RuntimeId: 57662
// TypeInfo: 0x0000000144F505C0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class ConfigFromBlazePayload : public SpartaShared::SpartaPayload {
        CString gatewayProtocol; // 0x18
        CString gatewayHost; // 0x20
        CString gatewayTenancyRootEnv; // 0x28
        CString gatewayTenancyBlazeEnv; // 0x30
    }; // 0x38
    static_assert(sizeof(ConfigFromBlazePayload) == 0x38);
}
#pragma pack(pop)