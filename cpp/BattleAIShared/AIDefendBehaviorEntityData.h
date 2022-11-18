// Object: AIDefendBehaviorEntityData
// ClassId: 1989
// RuntimeId: 60757
// TypeInfo: 0x0000000144C10D00
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIDefendBehaviorEntityData : public BattleAIShared::AIParameterEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform DefendTransform; // 0x30
        Float32 DefendRadius; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(AIDefendBehaviorEntityData) == 0x80);
}
#pragma pack(pop)