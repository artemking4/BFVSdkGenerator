// Object: TelemetrySdkPinPlayerOutResourceEvent
// ClassId: 5121
// RuntimeId: 34065
// TypeInfo: 0x0000000144F59E60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerOutResourceEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        CString resource_type; // 0x108
        Uint8 FieldFlagChanged0; // 0x110
        char pad_0x111[0x7];
    }; // 0x118
    static_assert(sizeof(TelemetrySdkPinPlayerOutResourceEvent) == 0x118);
}
#pragma pack(pop)