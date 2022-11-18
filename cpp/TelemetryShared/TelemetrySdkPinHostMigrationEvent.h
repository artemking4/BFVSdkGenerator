// Object: TelemetrySdkPinHostMigrationEvent
// ClassId: 5077
// RuntimeId: 33267
// TypeInfo: 0x0000000144F59360
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinHostMigrationEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString mid; // 0x100
        CString goid; // 0x108
        CString reason; // 0x110
        Uint8 FieldFlagChanged0; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(TelemetrySdkPinHostMigrationEvent) == 0x120);
}
#pragma pack(pop)