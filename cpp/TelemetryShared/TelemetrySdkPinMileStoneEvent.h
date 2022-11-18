// Object: TelemetrySdkPinMileStoneEvent
// ClassId: 5092
// RuntimeId: 55045
// TypeInfo: 0x0000000144F5BD60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinMileStoneEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString moment; // 0x108
        CString mstid; // 0x110
        CString instance_id; // 0x118
        CString diff; // 0x120
        Uint32 gdur; // 0x128
        Uint32 sdur; // 0x12C
        Uint32 cdur; // 0x130
        Uint32 tdur; // 0x134
        Uint16 FieldFlagChanged0; // 0x138
        char pad_0x13A[0x6];
    }; // 0x140
    static_assert(sizeof(TelemetrySdkPinMileStoneEvent) == 0x140);
}
#pragma pack(pop)