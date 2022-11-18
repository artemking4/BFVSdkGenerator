// Object: TelemetrySdkPinPlayerClassEvent
// ClassId: 5110
// RuntimeId: 42900
// TypeInfo: 0x0000000144F5A360
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerClassEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        CString p_class; // 0x108
        CString sub_class; // 0x110
        CString prev_class; // 0x118
        Uint8 FieldFlagChanged0; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinPlayerClassEvent) == 0x128);
}
#pragma pack(pop)