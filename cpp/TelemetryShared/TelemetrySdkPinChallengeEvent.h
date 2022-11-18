// Object: TelemetrySdkPinChallengeEvent
// ClassId: 5058
// RuntimeId: 22915
// TypeInfo: 0x0000000144F5F060
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinChallengeEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString status; // 0x108
        CString status_code; // 0x110
        CString challenge_id; // 0x118
        TelemetryShared::RawJsonString recipients; // 0x120
        TelemetryShared::RawJsonString challenger; // 0x128
        CString challenge_guid; // 0x130
        Uint8 FieldFlagChanged0; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinChallengeEvent) == 0x140);
}
#pragma pack(pop)