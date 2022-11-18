// Object: TelemetrySdkPinSocMessageEvent
// ClassId: 5138
// RuntimeId: 8487
// TypeInfo: 0x0000000144F5EEE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinSocMessageEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        CString placement; // 0x108
        CString content_type; // 0x110
        CString network; // 0x118
        CString format; // 0x120
        CString status; // 0x128
        CString status_code; // 0x130
        CString message_id; // 0x138
        TelemetryShared::RawJsonString items; // 0x140
        CString event_id; // 0x148
        CString event_name; // 0x150
        CString event_type; // 0x158
        Uint32 count; // 0x160
        char pad_0x164[0x4];
        TelemetryShared::RawJsonString recipients; // 0x168
        TelemetryShared::RawJsonString sender; // 0x170
        Uint16 FieldFlagChanged0; // 0x178
        char pad_0x17A[0x6];
    }; // 0x180
    static_assert(sizeof(TelemetrySdkPinSocMessageEvent) == 0x180);
}
#pragma pack(pop)