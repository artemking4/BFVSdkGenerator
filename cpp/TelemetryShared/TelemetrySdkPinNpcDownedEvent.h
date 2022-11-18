// Object: TelemetrySdkPinNpcDownedEvent
// ClassId: 5096
// RuntimeId: 3987
// TypeInfo: 0x0000000144F5A860
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinNpcDownedEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 v_loc; // 0x110
        Core::Vec3 v_dir; // 0x120
        Core::Vec3 k_loc; // 0x130
        Core::Vec3 k_dir; // 0x140
        CString k_weap; // 0x150
        CString cause; // 0x158
        CString v_id; // 0x160
        CString v_type; // 0x168
        CString v_state; // 0x170
        CString k_id; // 0x178
        CString k_veh_id; // 0x180
        CString k_type; // 0x188
        CString k_state; // 0x190
        CString v_weap; // 0x198
        CString v_team_id; // 0x1A0
        CString v_class; // 0x1A8
        Uint32 v_lifetime; // 0x1B0
        Uint32 k_lifetime; // 0x1B4
        CString k_class; // 0x1B8
        Uint32 FieldFlagChanged0; // 0x1C0
        Boolean is_vads; // 0x1C4
        Boolean is_kads; // 0x1C5
        char pad_0x1C6[0xA];
    }; // 0x1D0
    static_assert(sizeof(TelemetrySdkPinNpcDownedEvent) == 0x1D0);
}
#pragma pack(pop)