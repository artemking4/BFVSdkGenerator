// Object: AIFlareGadget
// ClassId: 362
// RuntimeId: 10314
// TypeInfo: 0x0000000144C18D30
#include "../BattleAIShared/WeaponGadgetBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIFlareGadget : public BattleAIShared::WeaponGadgetBase {
        Float32 ValidationStartFraction; // 0x68
        Float32 ValidationEndFraction; // 0x6C
        Float32 MinDistanceFromEnemy; // 0x70
        Float32 MaxDistanceFromEnemy; // 0x74
        Float32 MinAllyDistance; // 0x78
        Float32 DispersionRadius; // 0x7C
        Boolean OnlyTargetPassiveEnemies; // 0x80
        Boolean TargetEnemyClusters; // 0x81
        char pad_0x82[0x6];
    }; // 0x88
    static_assert(sizeof(AIFlareGadget) == 0x88);
}
#pragma pack(pop)