// Object: SoldierWeaponPlayerAbilityAsset
// ClassId: 380
// RuntimeId: 44256
// TypeInfo: 0x0000000144DF86C0
#include "../DiceShooterShared/BasicPlayerAbilityAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SoldierWeaponPlayerAbilityAsset : public DiceShooterShared::BasicPlayerAbilityAsset {
        Array<Uint32> SecondaryFireAbilities; // 0xC0
        Boolean StartDeployingOnActivation; // 0xC8
        Boolean StayInActivatingDuringDeploy; // 0xC9
        Boolean AutomaticallySwitchBackOnOutOfAmmo; // 0xCA
        Boolean AutomaticallyRechargeOnOutOfAmmo; // 0xCB
        Boolean RefillMagazineOnReady; // 0xCC
        Boolean AutomaticallyEquip; // 0xCD
        Boolean AutomaticallyFire; // 0xCE
        char pad_0xCF[0x1];
    }; // 0xD0
    static_assert(sizeof(SoldierWeaponPlayerAbilityAsset) == 0xD0);
}
#pragma pack(pop)