// Object: TelemetrySdkPinModeExitEvent
// ClassId: 5094
// RuntimeId: 42395
// TypeInfo: 0x0000000144F5B360
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinModeExitEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString instance_id; // 0x100
        Uint32 mdur; // 0x108
        Uint32 cdur; // 0x10C
        Uint32 sdur; // 0x110
        Uint32 gdur; // 0x114
        CString leave_reason; // 0x118
        CString msid; // 0x120
        Uint8 FieldFlagChanged0; // 0x128
        char pad_0x129[0x7];
    }; // 0x130
    static_assert(sizeof(TelemetrySdkPinModeExitEvent) == 0x130);
}
#pragma pack(pop)