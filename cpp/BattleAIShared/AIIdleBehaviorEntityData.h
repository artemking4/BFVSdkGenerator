// Object: AIIdleBehaviorEntityData
// ClassId: 1991
// RuntimeId: 34141
// TypeInfo: 0x0000000144C11C00
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../BattleAIShared/IdleReadiness.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIIdleBehaviorEntityData : public BattleAIShared::AIParameterEntityData {
        BattleAIShared::IdleReadiness IdleReadiness; // 0x28
        Float32 AimingTargetDistance; // 0x2C
        Boolean AllowAimingWhileScripted; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(AIIdleBehaviorEntityData) == 0x38);
}
#pragma pack(pop)