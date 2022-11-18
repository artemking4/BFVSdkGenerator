// Object: TelemetrySdkPinModeEnterEvent
// ClassId: 5093
// RuntimeId: 7165
// TypeInfo: 0x0000000144F5B3E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinModeEnterEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString instance_id; // 0x100
        CString status; // 0x108
        CString status_code; // 0x110
        CString msid; // 0x118
        Boolean is_first; // 0x120
        Uint8 FieldFlagChanged0; // 0x121
        char pad_0x122[0x6];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinModeEnterEvent) == 0x128);
}
#pragma pack(pop)