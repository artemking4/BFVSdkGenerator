// Object: SpartaSwitchToScreen
// ClassId: 4886
// RuntimeId: 6070
// TypeInfo: 0x0000000144F4FDC0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaSwitchToScreen : public SpartaShared::SpartaPayload {
        CString ScreenName; // 0x18
    }; // 0x20
    static_assert(sizeof(SpartaSwitchToScreen) == 0x20);
}
#pragma pack(pop)