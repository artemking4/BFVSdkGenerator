// Object: TelemetrySdkPinPlayerDecisionEvent
// ClassId: 5113
// RuntimeId: 9947
// TypeInfo: 0x0000000144F5A160
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerDecisionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 cdur; // 0x100
        Uint32 gdur; // 0x104
        Uint32 rdur; // 0x108
        char pad_0x10C[0x4];
        CString instance_id; // 0x110
        CString choice_id; // 0x118
        CString choice_type; // 0x120
        Array<CString> choices; // 0x128
        CString cine_id; // 0x130
        CString decision; // 0x138
        Uint32 ddur; // 0x140
        Uint16 FieldFlagChanged0; // 0x144
        char pad_0x146[0x2];
    }; // 0x148
    static_assert(sizeof(TelemetrySdkPinPlayerDecisionEvent) == 0x148);
}
#pragma pack(pop)