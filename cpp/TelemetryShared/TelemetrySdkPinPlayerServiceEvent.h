// Object: TelemetrySdkPinPlayerServiceEvent
// ClassId: 5123
// RuntimeId: 29727
// TypeInfo: 0x0000000144F5B760
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerServiceEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString service; // 0x100
        CString action; // 0x108
        TelemetryShared::RawJsonString metadata; // 0x110
        Uint8 FieldFlagChanged0; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(TelemetrySdkPinPlayerServiceEvent) == 0x120);
}
#pragma pack(pop)