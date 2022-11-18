// Object: TelemetrySdkPinGameActionEvent
// ClassId: 5070
// RuntimeId: 2051
// TypeInfo: 0x0000000144F5AC60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinGameActionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        CString action; // 0x108
        TelemetryShared::RawJsonString action_attr; // 0x110
        Uint8 FieldFlagChanged0; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(TelemetrySdkPinGameActionEvent) == 0x120);
}
#pragma pack(pop)