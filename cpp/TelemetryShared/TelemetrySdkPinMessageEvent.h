// Object: TelemetrySdkPinMessageEvent
// ClassId: 5091
// RuntimeId: 56446
// TypeInfo: 0x0000000144F5BDE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Int64.h"
#include "../Core/Vec2.h"
#include "../Global/Uint32.h"
#include "../TelemetryShared/RawJsonString.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetrySdkPinMessageEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Int64 destination_id; // 0x100
        CString type; // 0x108
        CString service; // 0x110
        CString content_type; // 0x118
        CString format; // 0x120
        CString media; // 0x128
        CString campaign_id; // 0x130
        CString client_state; // 0x138
        CString msg_id; // 0x140
        CString status; // 0x148
        CString status_code; // 0x150
        CString option; // 0x158
        CString content; // 0x160
        CString destination_name; // 0x168
        CString place; // 0x170
        Core::Vec2 loc; // 0x178
        Core::Vec2 size; // 0x180
        CString segment_id; // 0x188
        Uint32 count; // 0x190
        Uint32 sdur; // 0x194
        TelemetryShared::RawJsonString track; // 0x198
        Uint32 FieldFlagChanged0; // 0x1A0
        char pad_0x1A4[0x4];
    }; // 0x1A8
    static_assert(sizeof(TelemetrySdkPinMessageEvent) == 0x1A8);
}
#pragma pack(pop)