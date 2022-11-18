// Object: AIStealthEntityData
// ClassId: 2004
// RuntimeId: 25639
// TypeInfo: 0x0000000144C12400
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIStealthEntityData : public BattleAIShared::AIParameterEntityData {
        Float32 EnemeyTooCloseDistance; // 0x28
        Float32 ExtraBufferDistanceToResumeStealth; // 0x2C
        Boolean OnlyBeStealthyIfAwareOfEnemies; // 0x30
        Boolean OnlyBeStealthyIfTargetNotAlerted; // 0x31
        Boolean IsInvisibleWhileStealthy; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(AIStealthEntityData) == 0x38);
}
#pragma pack(pop)