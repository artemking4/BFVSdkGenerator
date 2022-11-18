// Object: AICloseCombatTactic
// ClassId: 409
// RuntimeId: 64276
// TypeInfo: 0x0000000144C12600
#include "../BattleAIShared/TacticBase.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/PoseSettings.h"
#include "../BattleAIShared/ProjectileSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AICloseCombatTactic : public BattleAIShared::TacticBase {
        Float32 TargetExtrapolationTime; // 0x28
        char pad_0x2C[0x4];
        BattleAIShared::PoseSettings PoseSettings; // 0x30
        BattleAIShared::ProjectileSettings MeleeProjectileSettings; // 0x38
        Float32 Distance; // 0x40
        Float32 HeightDistance; // 0x44
        Float32 MaxMovementToTargetDirectionAngle; // 0x48
        Float32 DistanceLimit; // 0x4C
        Float32 LostVisibilityTimeout; // 0x50
        Float32 MinTimeInCloseCombat; // 0x54
        Boolean DisableWhenMovingToCover; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(AICloseCombatTactic) == 0x60);
}
#pragma pack(pop)