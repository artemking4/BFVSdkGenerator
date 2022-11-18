// Object: AIAttackTactic
// ClassId: 416
// RuntimeId: 23880
// TypeInfo: 0x0000000144C11780
#include "../BattleAIShared/CoverTactic.h"
#include "../BattleAIShared/CoverQueryData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/AttackCoverRequestSettings.h"
#include "../BattleAIShared/ProjectileSettings.h"
#include "../BattleAIShared/AICombatIntensity.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIAttackTactic : public BattleAIShared::CoverTactic {
        BattleAIShared::CoverQueryData SquadCoverQuery; // 0x38
        BattleAIShared::CoverQueryData ProtectionCoverQuery; // 0x40
        BattleAIShared::CoverQueryData HideCoverQuery; // 0x48
        BattleAIShared::CoverQueryData TargetlessQuery; // 0x50
        BattleAIShared::CoverQueryData ValidCoverQuery; // 0x58
        BattleAIShared::AttackCoverRequestSettings CoverRequestSettings; // 0x60
        BattleAIShared::AttackCoverRequestSettings IndoorCoverRequestSettings; // 0xBC
        BattleAIShared::AttackCoverRequestSettings OutdoorCoverRequestSettings; // 0x118
        char pad_0x174[0x4];
        BattleAIShared::ProjectileSettings ProjectileSettings; // 0x178
        BattleAIShared::ProjectileSettings MeleeProjectileSettings; // 0x180
        BattleAIShared::AICombatIntensity CombatIntensity; // 0x188
        Boolean ReevaluateCoversWhileHiding; // 0x18C
        char pad_0x18D[0x3];
    }; // 0x190
    static_assert(sizeof(AIAttackTactic) == 0x190);
}
#pragma pack(pop)