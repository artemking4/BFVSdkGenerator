// Object: SpartaToastNotificationResponsePayload
// ClassId: 4888
// RuntimeId: 65144
// TypeInfo: 0x0000000144F4FC40
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaToastNotificationResponsePayload : public SpartaShared::SpartaPayload {
        CString Tag; // 0x18
        Boolean Activated; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(SpartaToastNotificationResponsePayload) == 0x28);
}
#pragma pack(pop)