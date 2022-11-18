// Object: TelemetrySdkPinErrorEvent
// ClassId: 5066
// RuntimeId: 22646
// TypeInfo: 0x0000000144F59460
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinErrorEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString errid; // 0x108
        Uint8 FieldFlagChanged0; // 0x110
        char pad_0x111[0x7];
    }; // 0x118
    static_assert(sizeof(TelemetrySdkPinErrorEvent) == 0x118);
}
#pragma pack(pop)