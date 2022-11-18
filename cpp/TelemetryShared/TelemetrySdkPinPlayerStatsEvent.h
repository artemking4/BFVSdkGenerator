// Object: TelemetrySdkPinPlayerStatsEvent
// ClassId: 5127
// RuntimeId: 41372
// TypeInfo: 0x0000000144F5BAE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerStatsEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        char pad_0x104[0x4];
        TelemetryShared::RawJsonString player_attr; // 0x108
        TelemetryShared::RawJsonString player_stats; // 0x110
        CString type; // 0x118
        Uint8 FieldFlagChanged0; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinPlayerStatsEvent) == 0x128);
}
#pragma pack(pop)