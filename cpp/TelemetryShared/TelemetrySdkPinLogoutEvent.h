// Object: TelemetrySdkPinLogoutEvent
// ClassId: 5087
// RuntimeId: 27615
// TypeInfo: 0x0000000144F5B460
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinLogoutEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString end_reason; // 0x108
        CString status_code; // 0x110
        Uint32 sdur; // 0x118
        Uint8 FieldFlagChanged0; // 0x11C
        char pad_0x11D[0x3];
    }; // 0x120
    static_assert(sizeof(TelemetrySdkPinLogoutEvent) == 0x120);
}
#pragma pack(pop)