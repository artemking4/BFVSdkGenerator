// Object: TelemetrySdkPinPlayerContentEvent
// ClassId: 5111
// RuntimeId: 48886
// TypeInfo: 0x0000000144F5BBE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerContentEvent : public TelemetryShared::TelemetrySDKPinEvent {
        TelemetryShared::RawJsonString content; // 0x100
        Uint8 FieldFlagChanged0; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(TelemetrySdkPinPlayerContentEvent) == 0x110);
}
#pragma pack(pop)