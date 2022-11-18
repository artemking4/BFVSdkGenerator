// Object: TelemetrySdkPinVehicleDestructionEvent
// ClassId: 5145
// RuntimeId: 45575
// TypeInfo: 0x0000000144F59960
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinVehicleDestructionEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 veh_loc; // 0x110
        Core::Vec3 pilot_loc; // 0x120
        Core::Vec3 pilot_dir; // 0x130
        Core::Vec3 k_loc; // 0x140
        Core::Vec3 k_dir; // 0x150
        CString veh_id; // 0x160
        CString cause; // 0x168
        CString veh_type; // 0x170
        CString pilot_id; // 0x178
        CString pilot_type; // 0x180
        CString k_id; // 0x188
        CString k_type; // 0x190
        Uint32 veh_dur; // 0x198
        char pad_0x19C[0x4];
        CString veh_instance_id; // 0x1A0
        CString k_weap; // 0x1A8
        CString k_veh_id; // 0x1B0
        Uint32 FieldFlagChanged0; // 0x1B8
        Boolean is_eject; // 0x1BC
        char pad_0x1BD[0x3];
    }; // 0x1C0
    static_assert(sizeof(TelemetrySdkPinVehicleDestructionEvent) == 0x1C0);
}
#pragma pack(pop)