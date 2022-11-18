// Object: TelemetrySdkPinCustomErrorEvent
// ClassId: 5061
// RuntimeId: 16503
// TypeInfo: 0x0000000144F593E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinCustomErrorEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString severity; // 0x100
        TelemetryShared::RawJsonString metadata; // 0x108
        Uint8 FieldFlagChanged0; // 0x110
        char pad_0x111[0x7];
    }; // 0x118
    static_assert(sizeof(TelemetrySdkPinCustomErrorEvent) == 0x118);
}
#pragma pack(pop)