// Object: AICombatBehaviorEntityData
// ClassId: 1987
// RuntimeId: 15183
// TypeInfo: 0x0000000144C11D00
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/CombatEnvironment.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AICombatBehaviorEntityData : public BattleAIShared::AIParameterEntityData {
        BattleAIShared::CombatEnvironment CombatEnvironment; // 0x28
        Boolean AllowFire; // 0x2C
        Boolean AllowFireDuringScriptedAnimations; // 0x2D
        Boolean AllowDetectPlayers; // 0x2E
        Boolean IsOnHumanSquad; // 0x2F
        Boolean TryAdvanceEvenIfAlreadyInWeaponRange; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(AICombatBehaviorEntityData) == 0x38);
}
#pragma pack(pop)