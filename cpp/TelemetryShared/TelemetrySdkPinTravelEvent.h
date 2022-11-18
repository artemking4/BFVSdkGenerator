// Object: TelemetrySdkPinTravelEvent
// ClassId: 5143
// RuntimeId: 51373
// TypeInfo: 0x0000000144F599E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinTravelEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString start_loc; // 0x100
        CString end_loc; // 0x108
        Uint32 travel_dur; // 0x110
        char pad_0x114[0x4];
        CString status; // 0x118
        CString type; // 0x120
        Uint8 FieldFlagChanged0; // 0x128
        char pad_0x129[0x7];
    }; // 0x130
    static_assert(sizeof(TelemetrySdkPinTravelEvent) == 0x130);
}
#pragma pack(pop)