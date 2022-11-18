// Object: TelemetrySdkPinPlayerSpawnEvent
// ClassId: 5124
// RuntimeId: 59436
// TypeInfo: 0x0000000144F59DE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerSpawnEvent : public TelemetryShared::TelemetrySDKPinEvent {
        CString type; // 0x100
        Uint32 gdur; // 0x108
        char pad_0x10C[0x4];
        Core::Vec3 p_loc; // 0x110
        Core::Vec3 p_dir; // 0x120
        Uint32 rdur; // 0x130
        char pad_0x134[0x4];
        CString veh_type; // 0x138
        CString team_id; // 0x140
        TelemetryShared::RawJsonString loadout; // 0x148
        CString p_class; // 0x150
        CString spawn_region; // 0x158
        CString cam_state; // 0x160
        CString veh_id; // 0x168
        CString squad_id; // 0x170
        Uint16 FieldFlagChanged0; // 0x178
        char pad_0x17A[0x6];
    }; // 0x180
    static_assert(sizeof(TelemetrySdkPinPlayerSpawnEvent) == 0x180);
}
#pragma pack(pop)