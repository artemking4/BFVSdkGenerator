// Object: TelemetrySdkPinBootStartEvent
// ClassId: 5055
// RuntimeId: 48226
// TypeInfo: 0x0000000144F5B660
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinBootStartEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString status; // 0x100
        CString source; // 0x108
        CString status_code; // 0x110
        Boolean is_trial; // 0x118
        Uint8 FieldFlagChanged0; // 0x119
        char pad_0x11A[0x6];
    }; // 0x120
    static_assert(sizeof(TelemetrySdkPinBootStartEvent) == 0x120);
}
#pragma pack(pop)