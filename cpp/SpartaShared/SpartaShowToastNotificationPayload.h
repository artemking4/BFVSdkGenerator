// Object: SpartaShowToastNotificationPayload
// ClassId: 4841
// RuntimeId: 37518
// TypeInfo: 0x0000000144F4FCC0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../SpartaShared/SpartaUserId.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaShowToastNotificationPayload : public SpartaShared::SpartaPayload {
        CString Title; // 0x18
        CString Message; // 0x20
        CString ImageRef; // 0x28
        CString Tag; // 0x30
        Int32 DurationMs; // 0x38
        char pad_0x3C[0x4];
        SpartaShared::SpartaUserId User; // 0x40
        Boolean CanRead; // 0x68
        Boolean CanJoin; // 0x69
        char pad_0x6A[0x6];
    }; // 0x70
    static_assert(sizeof(SpartaShowToastNotificationPayload) == 0x70);
}
#pragma pack(pop)