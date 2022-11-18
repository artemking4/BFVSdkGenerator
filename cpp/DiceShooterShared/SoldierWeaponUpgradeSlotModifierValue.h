// Object: SoldierWeaponUpgradeSlotModifierValue
// ClassId: 4651
// RuntimeId: 28168
// TypeInfo: 0x0000000144DE4F70
#include "../Core/DataContainer.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../DiceShooterShared/PlayerAbilityAsset.h"
#include "../Global/Uint32.h"
#include "../DiceShooterShared/PlayerAbilityLevel.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SoldierWeaponUpgradeSlotModifierValue : public Core::DataContainer {
        Array<GameShared::UnlockAssetBase> ModifierUnlocks; // 0x18
        DiceShooterShared::PlayerAbilityAsset SecondaryFireAbility; // 0x20
        Uint32 SecondaryFireAbilityId; // 0x28
        DiceShooterShared::PlayerAbilityLevel MinAbilityLevel; // 0x2C
        DiceShooterShared::PlayerAbilityLevel MaxAbilityLevel; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(SoldierWeaponUpgradeSlotModifierValue) == 0x38);
}
#pragma pack(pop)