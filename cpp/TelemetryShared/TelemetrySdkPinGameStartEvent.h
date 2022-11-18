// Object: TelemetrySdkPinGameStartEvent
// ClassId: 5073
// RuntimeId: 30601
// TypeInfo: 0x0000000144F5B560
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinGameStartEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString status; // 0x100
        CString status_code; // 0x108
        Float32 ldur; // 0x110
        char pad_0x114[0x4];
        TelemetryShared::RawJsonString player_stats; // 0x118
        TelemetryShared::RawJsonString teams_stats; // 0x120
        TelemetryShared::RawJsonString game_attr; // 0x128
        TelemetryShared::RawJsonString character_attr; // 0x130
        TelemetryShared::RawJsonString class_attr; // 0x138
        Uint8 FieldFlagChanged0; // 0x140
        char pad_0x141[0x7];
    }; // 0x148
    static_assert(sizeof(TelemetrySdkPinGameStartEvent) == 0x148);
}
#pragma pack(pop)