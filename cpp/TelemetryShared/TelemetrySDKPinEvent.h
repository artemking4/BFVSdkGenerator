// Object: TelemetrySDKPinEvent
// ClassId: 5051
// RuntimeId: 20286
// TypeInfo: 0x0000000144F5C360
#include "../TelemetryShared/TelemetryLogEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/TelemetrySDKPinEventHeaderModifier.h"
#include "../Global/Boolean.h"

namespace TelemetryShared {
    class TelemetrySDKPinEvent : public TelemetryShared::TelemetryLogEvent {
        TelemetryShared::TelemetrySDKPinEventHeaderModifier eventHeaderModifier; // 0x18
        CString PinEventName; // 0xF0
        Boolean TrackChanges; // 0xF8
        char pad_0xF9[0x7];
    }; // 0x100
    static_assert(sizeof(TelemetrySDKPinEvent) == 0x100);
}