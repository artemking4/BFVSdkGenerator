// Object: TelemetrySdkPinNpcSpawnEvent
// ClassId: 5103
// RuntimeId: 50653
// TypeInfo: 0x0000000144F5A4E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinNpcSpawnEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        Uint32 gdur; // 0x108
        char pad_0x10C[0x4];
        Core::Vec3 npc_loc; // 0x110
        Core::Vec3 npc_dir; // 0x120
        Uint32 rdur; // 0x130
        char pad_0x134[0x4];
        CString npc_id; // 0x138
        CString npc_class; // 0x140
        CString team_id; // 0x148
        TelemetryShared::RawJsonString loadout; // 0x150
        CString veh_id; // 0x158
        Uint16 FieldFlagChanged0; // 0x160
        char pad_0x162[0xE];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinNpcSpawnEvent) == 0x170);
}
#pragma pack(pop)