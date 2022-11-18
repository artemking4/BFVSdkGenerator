// Object: TelemetrySdkPinScoreEvent
// ClassId: 5135
// RuntimeId: 14745
// TypeInfo: 0x0000000144F59B60
#include "../TelemetryShared/TelemetrySDKPinEvent.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace TelemetryShared {
    class TelemetrySdkPinScoreEvent : public TelemetryShared::TelemetrySDKPinEvent {
        Uint32 gdur; // 0x100
        Uint32 rdur; // 0x104
        char pad_0x108[0x8];
        Core::Vec3 shot_pos; // 0x110
        Core::Vec3 assist_pos; // 0x120
        Core::Vec3 score_pos; // 0x130
        CString type; // 0x140
        Int32 amount; // 0x148
        char pad_0x14C[0x4];
        CString team_id; // 0x150
        Int32 player_dbid; // 0x158
        Int32 clock_time; // 0x15C
        Int32 category; // 0x160
        Int32 shot_flags; // 0x164
        Int32 goal_flags1; // 0x168
        Int32 goal_flags2; // 0x16C
        Int32 goal_flags3; // 0x170
        Uint16 FieldFlagChanged0; // 0x174
        char pad_0x176[0xA];
    }; // 0x180
    static_assert(sizeof(TelemetrySdkPinScoreEvent) == 0x180);
}
#pragma pack(pop)