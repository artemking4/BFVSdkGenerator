// Object: TelemetrySdkPinRegistrationEvent
// ClassId: 5132
// RuntimeId: 57945
// TypeInfo: 0x0000000144F5C0E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinRegistrationEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString source; // 0x100
        CString status; // 0x108
        CString status_code; // 0x110
        CString domain; // 0x118
        Uint8 FieldFlagChanged0; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinRegistrationEvent) == 0x128);
}
#pragma pack(pop)