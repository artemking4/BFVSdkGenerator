// Object: TelemetrySdkPinRoundEndEvent
// ClassId: 5133
// RuntimeId: 18801
// TypeInfo: 0x0000000144F5B1E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinRoundEndEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 round; // 0x100
        Uint32 gdur; // 0x104
        Uint32 rdur; // 0x108
        char pad_0x10C[0x4];
        CString status_code; // 0x110
        CString end_reason; // 0x118
        TelemetryShared::RawJsonString teams_stats; // 0x120
        TelemetryShared::RawJsonString player_stats; // 0x128
        TelemetryShared::RawJsonString round_attr; // 0x130
        TelemetryShared::RawJsonString character_attr; // 0x138
        TelemetryShared::RawJsonString class_attr; // 0x140
        Uint32 team_id; // 0x148
        Uint16 FieldFlagChanged0; // 0x14C
        char pad_0x14E[0x2];
    }; // 0x150
    static_assert(sizeof(TelemetrySdkPinRoundEndEvent) == 0x150);
}
#pragma pack(pop)