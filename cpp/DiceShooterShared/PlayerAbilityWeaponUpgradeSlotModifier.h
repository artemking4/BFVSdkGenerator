// Object: PlayerAbilityWeaponUpgradeSlotModifier
// ClassId: 4431
// RuntimeId: 63579
// TypeInfo: 0x0000000144DE4EF0
#include "../DiceShooterShared/PlayerAbilityModifier.h"
#include "../Global/Uint32.h"
#include "../DiceShooterShared/SoldierWeaponUpgradeSlotModifierValue.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityWeaponUpgradeSlotModifier : public DiceShooterShared::PlayerAbilityModifier {
        Uint32 Identifier; // 0x20
        Uint32 IsEquippedHash; // 0x24
        Uint32 IsUnlockedHash; // 0x28
        Uint32 PlayerAbilityOwnerId; // 0x2C
        Array<DiceShooterShared::SoldierWeaponUpgradeSlotModifierValue> Values; // 0x30
        GameShared::UnlockAssetBase Unlock; // 0x38
        Boolean ForceEquipped; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(PlayerAbilityWeaponUpgradeSlotModifier) == 0x48);
}
#pragma pack(pop)