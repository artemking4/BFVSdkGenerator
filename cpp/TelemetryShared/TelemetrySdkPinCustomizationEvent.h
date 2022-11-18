// Object: TelemetrySdkPinCustomizationEvent
// ClassId: 5062
// RuntimeId: 34084
// TypeInfo: 0x0000000144F5BEE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinCustomizationEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString target; // 0x108
        TelemetryShared::RawJsonString selection; // 0x110
        Uint8 FieldFlagChanged0; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(TelemetrySdkPinCustomizationEvent) == 0x120);
}
#pragma pack(pop)