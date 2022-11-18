// Object: TelemetrySdkPinTimerEvent
// ClassId: 5141
// RuntimeId: 6656
// TypeInfo: 0x0000000144F5B960
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinTimerEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString category; // 0x100
        CString measure; // 0x108
        Uint32 dur; // 0x110
        char pad_0x114[0x4];
        TelemetryShared::RawJsonString _meta; // 0x118
        Uint8 FieldFlagChanged0; // 0x120
        char pad_0x121[0x7];
    }; // 0x128
    static_assert(sizeof(TelemetrySdkPinTimerEvent) == 0x128);
}
#pragma pack(pop)