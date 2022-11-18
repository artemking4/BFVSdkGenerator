// Object: TelemetrySdkPinRoundStartEvent
// ClassId: 5134
// RuntimeId: 7494
// TypeInfo: 0x0000000144F5B160
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinRoundStartEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 round; // 0x104
        CString status; // 0x108
        CString status_code; // 0x110
        TelemetryShared::RawJsonString round_attr; // 0x118
        TelemetryShared::RawJsonString character_attr; // 0x120
        TelemetryShared::RawJsonString class_attr; // 0x128
        Uint32 team_id; // 0x130
        Uint8 FieldFlagChanged0; // 0x134
        char pad_0x135[0x3];
    }; // 0x138
    static_assert(sizeof(TelemetrySdkPinRoundStartEvent) == 0x138);
}
#pragma pack(pop)