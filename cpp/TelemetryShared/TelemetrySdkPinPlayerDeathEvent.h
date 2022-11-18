// Object: TelemetrySdkPinPlayerDeathEvent
// ClassId: 5112
// RuntimeId: 58938
// TypeInfo: 0x0000000144F5A1E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../TelemetryShared/RawJsonString.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerDeathEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 v_loc; // 0x110
        Core::Vec3 v_dir; // 0x120
        Core::Vec3 k_loc; // 0x130
        Core::Vec3 k_dir; // 0x140
        CString cause; // 0x150
        CString downed_action; // 0x158
        CString v_state; // 0x160
        TelemetryShared::RawJsonString v_attr; // 0x168
        CString k_id; // 0x170
        CString k_type; // 0x178
        CString k_class; // 0x180
        CString k_weap; // 0x188
        CString k_state; // 0x190
        CString v_weap; // 0x198
        CString v_class; // 0x1A0
        Uint32 k_lifetime; // 0x1A8
        Uint32 v_lifetime; // 0x1AC
        Array<CString> v_buff; // 0x1B0
        Array<CString> k_buff; // 0x1B8
        CString v_team_id; // 0x1C0
        CString k_team_id; // 0x1C8
        CString v_veh_id; // 0x1D0
        CString k_veh_id; // 0x1D8
        TelemetryShared::RawJsonString k_attr; // 0x1E0
        CString v_squad_id; // 0x1E8
        Uint32 FieldFlagChanged0; // 0x1F0
        Boolean is_vads; // 0x1F4
        Boolean is_kads; // 0x1F5
        char pad_0x1F6[0xA];
    }; // 0x200
    static_assert(sizeof(TelemetrySdkPinPlayerDeathEvent) == 0x200);
}
#pragma pack(pop)