// Object: TelemetrySdkPinLoginEvent
// ClassId: 5086
// RuntimeId: 19242
// TypeInfo: 0x0000000144F5B4E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinLoginEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString status; // 0x108
        CString status_code; // 0x110
        CString source; // 0x118
        Uint8 FieldFlagChanged0; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinLoginEvent) == 0x128);
}
#pragma pack(pop)