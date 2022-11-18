// Object: HeavyPlanePilotEntityData
// ClassId: 3001
// RuntimeId: 39663
// TypeInfo: 0x0000000144C188B0
#include "../BattleAIShared/PilotEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class HeavyPlanePilotEntityData : public BattleAIShared::PilotEntityData {
        Float32 MaxRollAngle; // 0xF0
        Float32 YawAngleDiffForMaxRollAngle; // 0xF4
        Boolean SquaredRollAngleCurve; // 0xF8
        char pad_0xF9[0x7];
    }; // 0x100
    static_assert(sizeof(HeavyPlanePilotEntityData) == 0x100);
}
#pragma pack(pop)