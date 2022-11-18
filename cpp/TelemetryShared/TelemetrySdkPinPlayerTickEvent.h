// Object: TelemetrySdkPinPlayerTickEvent
// ClassId: 5128
// RuntimeId: 8560
// TypeInfo: 0x0000000144F59CE0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Core/Vec3.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../TelemetryShared/RawJsonString.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerTickEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        Core::Vec3 p_dir; // 0x120
        Core::Vec3 cam_dir; // 0x130
        CString p_char; // 0x140
        CString p_class; // 0x148
        CString p_state; // 0x150
        CString veh_type; // 0x158
        CString veh_state; // 0x160
        CString item_id; // 0x168
        CString item_category; // 0x170
        CString item_type; // 0x178
        CString item_name; // 0x180
        CString p_team_id; // 0x188
        CString cam_state; // 0x190
        CString veh_id; // 0x198
        TelemetryShared::RawJsonString p_attr; // 0x1A0
        TelemetryShared::RawJsonString custom; // 0x1A8
        Uint32 FieldFlagChanged0; // 0x1B0
        Boolean is_ads; // 0x1B4
        char pad_0x1B5[0xB];
    }; // 0x1C0
    static_assert(sizeof(TelemetrySdkPinPlayerTickEvent) == 0x1C0);
}
#pragma pack(pop)