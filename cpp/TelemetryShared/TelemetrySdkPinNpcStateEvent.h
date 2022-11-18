// Object: TelemetrySdkPinNpcStateEvent
// ClassId: 5104
// RuntimeId: 47844
// TypeInfo: 0x0000000144F5A460
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinNpcStateEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 npc_loc; // 0x110
        Core::Vec3 p_loc; // 0x120
        Core::Vec3 p_aim; // 0x130
        CString npc_id; // 0x140
        CString cur_npc_state; // 0x148
        CString prev_npc_state; // 0x150
        CString source; // 0x158
        CString p_state; // 0x160
        Uint16 FieldFlagChanged0; // 0x168
        Boolean ai_state; // 0x16A
        Boolean is_alarm; // 0x16B
        char pad_0x16C[0x4];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinNpcStateEvent) == 0x170);
}
#pragma pack(pop)