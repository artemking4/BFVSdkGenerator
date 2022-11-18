// Object: TelemetrySdkPinVehicleHealthEvent
// ClassId: 5146
// RuntimeId: 63656
// TypeInfo: 0x0000000144F598E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinVehicleHealthEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 veh_loc; // 0x110
        Core::Vec3 source_loc; // 0x120
        CString veh_id; // 0x130
        CString veh_type; // 0x138
        CString veh_guid; // 0x140
        CString source_id; // 0x148
        CString source_type; // 0x150
        Int32 amount; // 0x158
        Int32 health; // 0x15C
        CString source_item; // 0x160
        CString source_item_cat; // 0x168
        Uint16 FieldFlagChanged0; // 0x170
        Boolean is_heal; // 0x172
        char pad_0x173[0xD];
    }; // 0x180
    static_assert(sizeof(TelemetrySdkPinVehicleHealthEvent) == 0x180);
}
#pragma pack(pop)