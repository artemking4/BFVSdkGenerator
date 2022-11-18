// Object: TelemetrySdkPinVehicleInteractEvent
// ClassId: 5147
// RuntimeId: 27097
// TypeInfo: 0x0000000144F59FE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinVehicleInteractEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 veh_loc; // 0x110
        Core::Vec3 p_loc; // 0x120
        Core::Vec3 p_dir; // 0x130
        Uint32 veh_dur; // 0x140
        char pad_0x144[0x4];
        CString veh_id; // 0x148
        CString veh_guid; // 0x150
        CString action; // 0x158
        Float32 veh_maxfuel; // 0x160
        Float32 veh_fuel; // 0x164
        Uint16 FieldFlagChanged0; // 0x168
        char pad_0x16A[0x6];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinVehicleInteractEvent) == 0x170);
}
#pragma pack(pop)