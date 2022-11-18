// Object: TelemetrySdkPinPageViewEvent
// ClassId: 5105
// RuntimeId: 23413
// TypeInfo: 0x0000000144F5BCE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPageViewEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString pgid; // 0x108
        Uint32 pgdur; // 0x110
        char pad_0x114[0x4];
        CString fromid; // 0x118
        Float32 ldur; // 0x120
        Uint8 FieldFlagChanged0; // 0x124
        char pad_0x125[0x3];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinPageViewEvent) == 0x128);
}
#pragma pack(pop)