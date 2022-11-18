// Object: TelemetrySdkPinPathEvent
// ClassId: 5106
// RuntimeId: 31238
// TypeInfo: 0x0000000144F5BC60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinPathEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString category; // 0x108
        CString name; // 0x110
        CString status; // 0x118
        CString object_id; // 0x120
        CString object_type; // 0x128
        CString source; // 0x130
        CString cur_step; // 0x138
        CString prev_step; // 0x140
        Uint32 step_duration; // 0x148
        char pad_0x14C[0x4];
        CString visit_id; // 0x150
        Float32 price; // 0x158
        Float32 discount_price; // 0x15C
        CString discount_type; // 0x160
        CString discount_id; // 0x168
        CString currency_name; // 0x170
        CString store; // 0x178
        Float32 scroll_percent; // 0x180
        Uint32 FieldFlagChanged0; // 0x184
    }; // 0x188
    static_assert(sizeof(TelemetrySdkPinPathEvent) == 0x188);
}
#pragma pack(pop)