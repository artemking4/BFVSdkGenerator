// Object: TelemetrySdkPinBootEndEvent
// ClassId: 5054
// RuntimeId: 922
// TypeInfo: 0x0000000144F5B6E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinBootEndEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString end_reason; // 0x100
        CString status_code; // 0x108
        Uint32 sdur; // 0x110
        Uint8 FieldFlagChanged0; // 0x114
        char pad_0x115[0x3];
    }; // 0x118
    static_assert(sizeof(TelemetrySdkPinBootEndEvent) == 0x118);
}
#pragma pack(pop)