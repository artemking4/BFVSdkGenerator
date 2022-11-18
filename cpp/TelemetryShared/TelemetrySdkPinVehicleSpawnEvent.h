// Object: TelemetrySdkPinVehicleSpawnEvent
// ClassId: 5148
// RuntimeId: 6026
// TypeInfo: 0x0000000144F59860
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinVehicleSpawnEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 veh_loc; // 0x110
        CString veh_id; // 0x120
        CString veh_type; // 0x128
        Int32 veh_lev; // 0x130
        char pad_0x134[0x4];
        TelemetryShared::RawJsonString veh_loadout; // 0x138
        CString veh_instance_id; // 0x140
        CString spawn_region; // 0x148
        CString team_id; // 0x150
        Uint16 FieldFlagChanged0; // 0x158
        char pad_0x15A[0x6];
    }; // 0x160
    static_assert(sizeof(TelemetrySdkPinVehicleSpawnEvent) == 0x160);
}
#pragma pack(pop)