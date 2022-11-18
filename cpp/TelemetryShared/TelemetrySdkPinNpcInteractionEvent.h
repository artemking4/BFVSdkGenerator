// Object: TelemetrySdkPinNpcInteractionEvent
// ClassId: 5099
// RuntimeId: 4350
// TypeInfo: 0x0000000144F5A6E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinNpcInteractionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 cdur; // 0x100
        Uint32 gdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 npc_loc; // 0x110
        Uint32 rdur; // 0x120
        char pad_0x124[0x4];
        CString instance_id; // 0x128
        CString npc_id; // 0x130
        CString npc_char; // 0x138
        CString npc_class; // 0x140
        CString action; // 0x148
        TelemetryShared::RawJsonString content; // 0x150
        Uint16 FieldFlagChanged0; // 0x158
        char pad_0x15A[0x6];
    }; // 0x160
    static_assert(sizeof(TelemetrySdkPinNpcInteractionEvent) == 0x160);
}
#pragma pack(pop)