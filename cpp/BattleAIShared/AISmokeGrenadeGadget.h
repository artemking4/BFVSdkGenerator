// Object: AISmokeGrenadeGadget
// ClassId: 358
// RuntimeId: 35712
// TypeInfo: 0x0000000144C19130
#include "../BattleAIShared/GadgetBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/BattleAIProjectile.h"
#include "../BattleAIShared/AISmokeGrenadeObscureReviveBehavior.h"
#include "../BattleAIShared/AISmokeGrenadePassiveTargetBehavior.h"
#include "../BattleAIShared/AISmokeGrenadeToProtectFriendliesBehavior.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISmokeGrenadeGadget : public BattleAIShared::GadgetBase {
        Float32 MinThrowDistance; // 0x40
        Float32 MaxThrowDistance; // 0x44
        BattleAIShared::BattleAIProjectile Projectile; // 0x48
        BattleAIShared::AISmokeGrenadeObscureReviveBehavior ObscureReviveBehavior; // 0x50
        BattleAIShared::AISmokeGrenadePassiveTargetBehavior PassiveTargetBehavior; // 0x58
        BattleAIShared::AISmokeGrenadeToProtectFriendliesBehavior ProtectFriendliesBehavior; // 0x64
        Boolean ObscureFriendlyRevives; // 0x70
        char pad_0x71[0x7];
    }; // 0x78
    static_assert(sizeof(AISmokeGrenadeGadget) == 0x78);
}
#pragma pack(pop)