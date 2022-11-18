// Object: TelemetrySdkPinPlayerStatEvent
// ClassId: 5125
// RuntimeId: 174
// TypeInfo: 0x0000000144F597E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerStatEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        CString stat_id; // 0x120
        Float32 stat_value; // 0x128
        Float32 stat_value_change; // 0x12C
        CString stat_category; // 0x130
        CString p_class; // 0x138
        CString p_team_id; // 0x140
        CString p_veh_id; // 0x148
        TelemetryShared::RawJsonString p_params; // 0x150
        Uint16 FieldFlagChanged0; // 0x158
        char pad_0x15A[0x6];
    }; // 0x160
    static_assert(sizeof(TelemetrySdkPinPlayerStatEvent) == 0x160);
}
#pragma pack(pop)