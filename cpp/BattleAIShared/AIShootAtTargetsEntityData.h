// Object: AIShootAtTargetsEntityData
// ClassId: 2002
// RuntimeId: 35836
// TypeInfo: 0x0000000144C13700
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../BattleAIShared/AIShootType.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AICombatIntensity.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIShootAtTargetsEntityData : public BattleAIShared::AIParameterEntityData {
        BattleAIShared::AIShootType ShootType; // 0x28
        BattleAIShared::AICombatIntensity CombatIntensity; // 0x2C
        Float32 TargetWeightMultiplier; // 0x30
        Boolean CycleTargets; // 0x34
        Boolean RandomTargetOrder; // 0x35
        Boolean DisableOnSoldierEngaged; // 0x36
        char pad_0x37[0x1];
    }; // 0x38
    static_assert(sizeof(AIShootAtTargetsEntityData) == 0x38);
}
#pragma pack(pop)