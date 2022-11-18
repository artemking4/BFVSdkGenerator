// Object: TelemetrySdkPinPlayerDownedEvent
// ClassId: 5114
// RuntimeId: 52482
// TypeInfo: 0x0000000144F5A2E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerDownedEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        char pad_0x104[0x4];
        CString cause; // 0x108
        Core::Vec3 v_loc; // 0x110
        Core::Vec3 v_dir; // 0x120
        Core::Vec3 k_loc; // 0x130
        Core::Vec3 k_dir; // 0x140
        CString v_state; // 0x150
        TelemetryShared::RawJsonString v_attr; // 0x158
        CString k_id; // 0x160
        CString k_type; // 0x168
        CString k_class; // 0x170
        CString k_weap; // 0x178
        CString k_state; // 0x180
        CString v_weap; // 0x188
        CString v_class; // 0x190
        CString v_veh_id; // 0x198
        CString k_veh_id; // 0x1A0
        Uint32 alive_dur; // 0x1A8
        Uint32 k_lifetime; // 0x1AC
        Uint32 v_lifetime; // 0x1B0
        Int32 last_dmg_amt; // 0x1B4
        CString v_team_id; // 0x1B8
        CString k_team_id; // 0x1C0
        TelemetryShared::RawJsonString k_attr; // 0x1C8
        Uint32 FieldFlagChanged0; // 0x1D0
        Boolean is_vads; // 0x1D4
        Boolean is_kads; // 0x1D5
        char pad_0x1D6[0xA];
    }; // 0x1E0
    static_assert(sizeof(TelemetrySdkPinPlayerDownedEvent) == 0x1E0);
}
#pragma pack(pop)