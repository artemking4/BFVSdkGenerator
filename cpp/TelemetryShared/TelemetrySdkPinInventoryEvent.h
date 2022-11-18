// Object: TelemetrySdkPinInventoryEvent
// ClassId: 5078
// RuntimeId: 36190
// TypeInfo: 0x0000000144F5AF60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinInventoryEvent : public TelemetryShared::TelemetrySDKPinEvent {
        TelemetryShared::RawJsonString playerid; // 0x100
        TelemetryShared::RawJsonString assets; // 0x108
        Uint8 FieldFlagChanged0; // 0x110
        char pad_0x111[0x7];
    }; // 0x118
    static_assert(sizeof(TelemetrySdkPinInventoryEvent) == 0x118);
}
#pragma pack(pop)