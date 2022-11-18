// Object: TelemetrySdkPinUiInteractionEvent
// ClassId: 5144
// RuntimeId: 39699
// TypeInfo: 0x0000000144F5B8E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinUiInteractionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString action; // 0x100
        CString object_id; // 0x108
        CString object_type; // 0x110
        CString pgid; // 0x118
        Uint32 sdur; // 0x120
        Uint32 mdur; // 0x124
        Uint8 FieldFlagChanged0; // 0x128
        char pad_0x129[0x7];
    }; // 0x130
    static_assert(sizeof(TelemetrySdkPinUiInteractionEvent) == 0x130);
}
#pragma pack(pop)