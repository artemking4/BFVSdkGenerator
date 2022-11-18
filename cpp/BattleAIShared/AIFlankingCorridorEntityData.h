// Object: AIFlankingCorridorEntityData
// ClassId: 1995
// RuntimeId: 17179
// TypeInfo: 0x0000000144C11F80
#include "../BattleAIShared/AIParameterWithShapeEntityData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIFlankingCorridorEntityData : public BattleAIShared::AIParameterWithShapeEntityData {
        Int32 AdvanceCount; // 0x80
        Float32 AdvanceInterval; // 0x84
        Float32 HumanTargetDistance; // 0x88
        Boolean AllowLeavingFlankingCorridor; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(AIFlankingCorridorEntityData) == 0x90);
}
#pragma pack(pop)