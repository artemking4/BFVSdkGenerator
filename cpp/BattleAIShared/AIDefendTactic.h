// Object: AIDefendTactic
// ClassId: 418
// RuntimeId: 56805
// TypeInfo: 0x0000000144C11A80
#include "../BattleAIShared/CoverTactic.h"
#include "../BattleAIShared/ProjectileSettings.h"
#include "../BattleAIShared/CoverQueryData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIDefendTactic : public BattleAIShared::CoverTactic {
        BattleAIShared::ProjectileSettings ProjectileSettings; // 0x38
        BattleAIShared::ProjectileSettings MeleeProjectileSettings; // 0x40
        BattleAIShared::CoverQueryData HideCoverQuery; // 0x48
        BattleAIShared::CoverQueryData TargetlessQuery; // 0x50
        Boolean ReevaluateCoversWhileHiding; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(AIDefendTactic) == 0x60);
}
#pragma pack(pop)