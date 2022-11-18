// Object: TelemetrySdkPinPlayerKillAssistEvent
// ClassId: 5118
// RuntimeId: 32366
// TypeInfo: 0x0000000144F59EE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerKillAssistEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        CString k_id; // 0x108
        CString k_type; // 0x110
        CString v_id; // 0x118
        CString v_type; // 0x120
        Int32 damage; // 0x128
        Int32 percent; // 0x12C
        Uint8 FieldFlagChanged0; // 0x130
        char pad_0x131[0x7];
    }; // 0x138
    static_assert(sizeof(TelemetrySdkPinPlayerKillAssistEvent) == 0x138);
}
#pragma pack(pop)