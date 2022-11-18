// Object: TelemetrySdkPinCinematicEvent
// ClassId: 5059
// RuntimeId: 57354
// TypeInfo: 0x0000000144F5ADE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinCinematicEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString instance_id; // 0x100
        Uint32 cdur; // 0x108
        Uint32 gdur; // 0x10C
        Uint32 rdur; // 0x110
        char pad_0x114[0x4];
        CString cine_id; // 0x118
        Uint32 cine_dur; // 0x120
        char pad_0x124[0x4];
        CString status; // 0x128
        CString status_code; // 0x130
        Uint8 FieldFlagChanged0; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinCinematicEvent) == 0x140);
}
#pragma pack(pop)