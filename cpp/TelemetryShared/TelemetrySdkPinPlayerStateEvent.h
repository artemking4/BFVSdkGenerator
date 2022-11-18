// Object: TelemetrySdkPinPlayerStateEvent
// ClassId: 5126
// RuntimeId: 59948
// TypeInfo: 0x0000000144F59D60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinPlayerStateEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 p_loc; // 0x110
        Core::Vec3 p_dir; // 0x120
        CString p_state; // 0x130
        CString prev_state; // 0x138
        Uint32 prev_dur; // 0x140
        char pad_0x144[0x4];
        CString p_class; // 0x148
        CString p_team_id; // 0x150
        CString veh_id; // 0x158
        Float32 dist; // 0x160
        Uint16 FieldFlagChanged0; // 0x164
        char pad_0x166[0xA];
    }; // 0x170
    static_assert(sizeof(TelemetrySdkPinPlayerStateEvent) == 0x170);
}
#pragma pack(pop)