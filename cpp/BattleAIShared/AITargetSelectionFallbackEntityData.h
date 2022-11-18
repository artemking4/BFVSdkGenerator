// Object: AITargetSelectionFallbackEntityData
// ClassId: 2006
// RuntimeId: 50131
// TypeInfo: 0x0000000144C13600
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AITargetSelectionFallbackEntityData : public BattleAIShared::AIParameterEntityData {
        Boolean FallbackToFirstEnemy; // 0x28
        Boolean FallbackToClosestEnemy; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(AITargetSelectionFallbackEntityData) == 0x30);
}
#pragma pack(pop)