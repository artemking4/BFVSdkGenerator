// Object: TelemetrySdkPinPrestigeEvent
// ClassId: 5131
// RuntimeId: 41731
// TypeInfo: 0x0000000144F5BA60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPrestigeEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString catagory; // 0x100
        CString type; // 0x108
        Int32 prest_lev; // 0x110
        char pad_0x114[0x4];
        CString instance_id; // 0x118
        Int32 cdur; // 0x120
        Uint8 FieldFlagChanged0; // 0x124
        char pad_0x125[0x3];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinPrestigeEvent) == 0x128);
}
#pragma pack(pop)