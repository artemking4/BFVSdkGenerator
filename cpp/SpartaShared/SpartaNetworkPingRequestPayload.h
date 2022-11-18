// Object: SpartaNetworkPingRequestPayload
// ClassId: 4831
// RuntimeId: 12244
// TypeInfo: 0x0000000144F510C0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaNetworkPingRequestPayload : public SpartaShared::SpartaPayload {
        Array<CString> Targets; // 0x18
        Boolean IsQos; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SpartaNetworkPingRequestPayload) == 0x28);
}
#pragma pack(pop)