// Object: TelemetrySdkPinCareerEvent
// ClassId: 5057
// RuntimeId: 41211
// TypeInfo: 0x0000000144F5BF60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinCareerEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString status; // 0x100
        CString instance_id; // 0x108
        Uint32 cdur; // 0x110
        Uint8 FieldFlagChanged0; // 0x114
        char pad_0x115[0x3];
    }; // 0x118
    static_assert(sizeof(TelemetrySdkPinCareerEvent) == 0x118);
}
#pragma pack(pop)