// Object: TelemetrySdkPinNpcHealthEvent
// ClassId: 5097
// RuntimeId: 827
// TypeInfo: 0x0000000144F5A7E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinNpcHealthEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 source_loc; // 0x110
        Core::Vec3 npc_loc; // 0x120
        CString source_id; // 0x130
        CString source_type; // 0x138
        CString source_item; // 0x140
        CString source_item_cat; // 0x148
        Int32 amount; // 0x150
        Int32 health; // 0x154
        CString npc_team_id; // 0x158
        CString npc_weap; // 0x160
        Uint16 FieldFlagChanged0; // 0x168
        Boolean is_heal; // 0x16A
        Boolean is_revived; // 0x16B
        char pad_0x16C[0x4];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinNpcHealthEvent) == 0x170);
}
#pragma pack(pop)