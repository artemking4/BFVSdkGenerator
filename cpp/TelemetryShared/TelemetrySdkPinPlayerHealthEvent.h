// Object: TelemetrySdkPinPlayerHealthEvent
// ClassId: 5116
// RuntimeId: 52614
// TypeInfo: 0x0000000144F5A060
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../TelemetryShared/RawJsonString.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerHealthEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 source_loc; // 0x110
        Core::Vec3 p_loc; // 0x120
        CString source_id; // 0x130
        CString source_type; // 0x138
        Int32 amount; // 0x140
        Int32 health; // 0x144
        CString p_weap; // 0x148
        CString veh_id; // 0x150
        CString source_item; // 0x158
        CString source_item_cat; // 0x160
        CString p_team_id; // 0x168
        CString p_state; // 0x170
        CString source_team_id; // 0x178
        TelemetryShared::RawJsonString p_attr; // 0x180
        CString health_type; // 0x188
        Uint32 FieldFlagChanged0; // 0x190
        Boolean is_heal; // 0x194
        Boolean is_revived; // 0x195
        char pad_0x196[0xA];
    }; // 0x1A0
    static_assert(sizeof(TelemetrySdkPinPlayerHealthEvent) == 0x1A0);
}
#pragma pack(pop)