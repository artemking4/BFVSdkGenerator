// Object: TelemetrySdkPinHeartBeatEvent
// ClassId: 5076
// RuntimeId: 25787
// TypeInfo: 0x0000000144F5B0E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinHeartBeatEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 sdur; // 0x100
        Uint32 gdur; // 0x104
        Uint8 FieldFlagChanged0; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(TelemetrySdkPinHeartBeatEvent) == 0x110);
}
#pragma pack(pop)