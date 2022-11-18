// Object: TelemetrySdkPinNpcInteractEvent
// ClassId: 5098
// RuntimeId: 17684
// TypeInfo: 0x0000000144F5A760
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinNpcInteractEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 item_loc; // 0x110
        Core::Vec3 p_dir; // 0x120
        Core::Vec3 p_loc; // 0x130
        Core::Vec3 npc_dir; // 0x140
        Core::Vec3 npc_loc; // 0x150
        CString item_id; // 0x160
        CString item_category; // 0x168
        CString item_type; // 0x170
        CString action; // 0x178
        CString p_state; // 0x180
        CString npc_id; // 0x188
        Uint16 FieldFlagChanged0; // 0x190
        char pad_0x192[0xE];
    }; // 0x1A0
    static_assert(sizeof(TelemetrySdkPinNpcInteractEvent) == 0x1A0);
}
#pragma pack(pop)