// Object: SpartaNetworkResolveResponsePayload
// ClassId: 4834
// RuntimeId: 1991
// TypeInfo: 0x0000000144F50F40
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaNetworkResolveResponsePayload : public SpartaShared::SpartaPayload {
        CString Host; // 0x18
        CString Ip; // 0x20
    }; // 0x28
    static_assert(sizeof(SpartaNetworkResolveResponsePayload) == 0x28);
}
#pragma pack(pop)