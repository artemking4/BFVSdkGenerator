// Object: TelemetrySdkPinGroupEvent
// ClassId: 5074
// RuntimeId: 51626
// TypeInfo: 0x0000000144F5EF60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint8.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinGroupEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString _class; // 0x108
        CString group_id; // 0x110
        CString status; // 0x118
        CString status_code; // 0x120
        CString member_id; // 0x128
        CString member_type; // 0x130
        TelemetryShared::RawJsonString members; // 0x138
        Uint8 FieldFlagChanged0; // 0x140
        char pad_0x141[0x7];
    }; // 0x148
    static_assert(sizeof(TelemetrySdkPinGroupEvent) == 0x148);
}
#pragma pack(pop)