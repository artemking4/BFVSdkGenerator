// Object: SpartaNetworkResolveRequestPayload
// ClassId: 4833
// RuntimeId: 46867
// TypeInfo: 0x0000000144F51040
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaNetworkResolveRequestPayload : public SpartaShared::SpartaPayload {
        Array<CString> Targets; // 0x18
    }; // 0x20
    static_assert(sizeof(SpartaNetworkResolveRequestPayload) == 0x20);
}
#pragma pack(pop)