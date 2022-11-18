// Object: TelemetrySdkPinFriendsEvent
// ClassId: 5069
// RuntimeId: 9725
// TypeInfo: 0x0000000144F5EFE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinFriendsEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Array<CString> frid; // 0x100
        CString friend_type; // 0x108
        CString source; // 0x110
        CString network; // 0x118
        CString action; // 0x120
        CString status_code; // 0x128
        TelemetryShared::RawJsonString friends; // 0x130
        Uint8 FieldFlagChanged0; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinFriendsEvent) == 0x140);
}
#pragma pack(pop)