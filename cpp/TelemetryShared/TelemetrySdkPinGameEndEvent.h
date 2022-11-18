// Object: TelemetrySdkPinGameEndEvent
// ClassId: 5071
// RuntimeId: 19394
// TypeInfo: 0x0000000144F5B5E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinGameEndEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString end_reason; // 0x100
        CString status; // 0x108
        CString status_code; // 0x110
        Uint32 sdur; // 0x118
        Uint32 gdur; // 0x11C
        TelemetryShared::RawJsonString player_stats; // 0x120
        Uint32 cdur; // 0x128
        char pad_0x12C[0x4];
        TelemetryShared::RawJsonString teams_stats; // 0x130
        TelemetryShared::RawJsonString game_attr; // 0x138
        TelemetryShared::RawJsonString character_attr; // 0x140
        TelemetryShared::RawJsonString class_attr; // 0x148
        Uint16 FieldFlagChanged0; // 0x150
        char pad_0x152[0x6];
    }; // 0x158
    static_assert(sizeof(TelemetrySdkPinGameEndEvent) == 0x158);
}
#pragma pack(pop)