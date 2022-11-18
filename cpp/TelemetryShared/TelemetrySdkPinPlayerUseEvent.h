// Object: TelemetrySdkPinPlayerUseEvent
// ClassId: 5129
// RuntimeId: 30905
// TypeInfo: 0x0000000144F59C60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerUseEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        Core::Vec3 item_loc; // 0x120
        CString item_id; // 0x130
        CString item_category; // 0x138
        CString item_type; // 0x140
        CString item_name; // 0x148
        Uint32 item_dur; // 0x150
        char pad_0x154[0x4];
        CString p_state; // 0x158
        CString action; // 0x160
        CString p_team_id; // 0x168
        CString p_class; // 0x170
        CString veh_id; // 0x178
        TelemetryShared::RawJsonString p_attr; // 0x180
        Uint16 FieldFlagChanged0; // 0x188
        char pad_0x18A[0x6];
    }; // 0x190
    static_assert(sizeof(TelemetrySdkPinPlayerUseEvent) == 0x190);
}
#pragma pack(pop)