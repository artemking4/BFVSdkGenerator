// Object: TelemetrySdkPinPlayerAbilityEvent
// ClassId: 5109
// RuntimeId: 20257
// TypeInfo: 0x0000000144F5A3E0
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../TelemetryShared/RawJsonString.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerAbilityEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        CString ability; // 0x120
        Int32 ability_dur; // 0x128
        char pad_0x12C[0x4];
        CString p_state; // 0x130
        TelemetryShared::RawJsonString ability_data; // 0x138
        CString p_class; // 0x140
        CString p_team_id; // 0x148
        CString p_veh_id; // 0x150
        Uint16 FieldFlagChanged0; // 0x158
        char pad_0x15A[0x6];
    }; // 0x160
    static_assert(sizeof(TelemetrySdkPinPlayerAbilityEvent) == 0x160);
}
#pragma pack(pop)