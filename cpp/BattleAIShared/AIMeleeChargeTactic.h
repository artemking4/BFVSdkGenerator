// Object: AIMeleeChargeTactic
// ClassId: 413
// RuntimeId: 11292
// TypeInfo: 0x0000000144C11380
#include "../BattleAIShared/TacticBase.h"
#include "../BattleAIShared/ProjectileSettings.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIMeleeChargeTactic : public BattleAIShared::TacticBase {
        BattleAIShared::ProjectileSettings MeleeProjectileSettings; // 0x28
        Float32 MinMeleeChargeDistance; // 0x30
        Float32 MaxMeleeChargeDistance; // 0x34
        Float32 MinTimeInPlayerViewToCharge; // 0x38
        Float32 MaxTimeInPlayerViewToCharge; // 0x3C
        Boolean BypassTokenRequirement; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(AIMeleeChargeTactic) == 0x48);
}
#pragma pack(pop)