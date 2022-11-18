// Object: TelemetrySdkPinPlaySessionStartEvent
// ClassId: 5108
// RuntimeId: 47281
// TypeInfo: 0x0000000144F5B260
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlaySessionStartEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString status; // 0x100
        CString status_code; // 0x108
        TelemetryShared::RawJsonString play_sess_attr; // 0x110
        TelemetryShared::RawJsonString character_attr; // 0x118
        TelemetryShared::RawJsonString class_attr; // 0x120
        Uint8 FieldFlagChanged0; // 0x128
        char pad_0x129[0x7];
    }; // 0x130
    static_assert(sizeof(TelemetrySdkPinPlaySessionStartEvent) == 0x130);
}
#pragma pack(pop)