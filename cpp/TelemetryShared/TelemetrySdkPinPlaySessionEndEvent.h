// Object: TelemetrySdkPinPlaySessionEndEvent
// ClassId: 5107
// RuntimeId: 14870
// TypeInfo: 0x0000000144F5B2E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlaySessionEndEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 sdur; // 0x100
        Uint32 gdur; // 0x104
        CString goid; // 0x108
        CString status_code; // 0x110
        CString end_reason; // 0x118
        TelemetryShared::RawJsonString player_stats; // 0x120
        TelemetryShared::RawJsonString play_sess_attr; // 0x128
        TelemetryShared::RawJsonString character_attr; // 0x130
        TelemetryShared::RawJsonString class_attr; // 0x138
        Uint16 FieldFlagChanged0; // 0x140
        char pad_0x142[0x6];
    }; // 0x148
    static_assert(sizeof(TelemetrySdkPinPlaySessionEndEvent) == 0x148);
}
#pragma pack(pop)