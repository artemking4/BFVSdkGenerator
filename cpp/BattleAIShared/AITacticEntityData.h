// Object: AITacticEntityData
// ClassId: 2005
// RuntimeId: 35282
// TypeInfo: 0x0000000144C12080
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../BattleAIShared/TacticsEnumeration.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AITacticEntityData : public BattleAIShared::AIParameterEntityData {
        BattleAIShared::TacticsEnumeration Tactic; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(AITacticEntityData) == 0x30);
}
#pragma pack(pop)