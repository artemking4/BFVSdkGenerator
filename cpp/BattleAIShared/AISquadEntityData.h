// Object: AISquadEntityData
// ClassId: 2003
// RuntimeId: 5353
// TypeInfo: 0x0000000144C12500
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISquadEntityData : public BattleAIShared::AIParameterEntityData {
        Float32 SquadMoveThreshold; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(AISquadEntityData) == 0x30);
}
#pragma pack(pop)