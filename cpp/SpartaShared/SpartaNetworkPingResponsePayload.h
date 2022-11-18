// Object: SpartaNetworkPingResponsePayload
// ClassId: 4832
// RuntimeId: 20958
// TypeInfo: 0x0000000144F50FC0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaNetworkPingResponsePayload : public SpartaShared::SpartaPayload {
        CString Target; // 0x18
        Int32 Ping; // 0x20
        Boolean Timeout; // 0x24
        Boolean IsQos; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(SpartaNetworkPingResponsePayload) == 0x28);
}
#pragma pack(pop)