// Object: TelemetrySdkPinPlayerInteractEvent
// ClassId: 5117
// RuntimeId: 26006
// TypeInfo: 0x0000000144F59F60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerInteractEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 item_loc; // 0x110
        Core::Vec3 p_dir; // 0x120
        Core::Vec3 p_loc; // 0x130
        CString item_id; // 0x140
        CString item_category; // 0x148
        CString item_type; // 0x150
        CString action; // 0x158
        CString p_state; // 0x160
        CString p_char; // 0x168
        CString p_team_id; // 0x170
        CString p_class; // 0x178
        Float32 round_time; // 0x180
        char pad_0x184[0x4];
        TelemetryShared::RawJsonString p_attr; // 0x188
        Uint16 FieldFlagChanged0; // 0x190
        char pad_0x192[0xE];
    }; // 0x1A0
    static_assert(sizeof(TelemetrySdkPinPlayerInteractEvent) == 0x1A0);
}
#pragma pack(pop)