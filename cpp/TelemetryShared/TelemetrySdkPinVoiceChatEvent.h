// Object: TelemetrySdkPinVoiceChatEvent
// ClassId: 5149
// RuntimeId: 60110
// TypeInfo: 0x0000000144F5B860
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Int32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinVoiceChatEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Int32 count; // 0x100
        char pad_0x104[0x4];
        TelemetryShared::RawJsonString team_chat; // 0x108
        Uint8 FieldFlagChanged0; // 0x110
        char pad_0x111[0x7];
    }; // 0x118
    static_assert(sizeof(TelemetrySdkPinVoiceChatEvent) == 0x118);
}
#pragma pack(pop)