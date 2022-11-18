// Object: TelemetrySdkPinPlayerObEvent
// ClassId: 5120
// RuntimeId: 30829
// TypeInfo: 0x0000000144F5B9E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerObEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        Core::Vec3 p_dir; // 0x120
        CString type; // 0x130
        CString p_class; // 0x138
        CString p_team_id; // 0x140
        CString p_veh_id; // 0x148
        Uint32 max_duration; // 0x150
        char pad_0x154[0x4];
        CString boundary_type; // 0x158
        TelemetryShared::RawJsonString p_attr; // 0x160
        Uint16 FieldFlagChanged0; // 0x168
        char pad_0x16A[0x6];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinPlayerObEvent) == 0x170);
}
#pragma pack(pop)