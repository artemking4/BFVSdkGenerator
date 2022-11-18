// Object: PlayerAbilityAsset
// ClassId: 375
// RuntimeId: 47819
// TypeInfo: 0x0000000144DF78A0
#include "../DiceShooterShared/PlayerAbilityAssetBase.h"
#include "../Global/Boolean.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../DiceShooterShared/PlayerAbilityCategory.h"
#include "../Entity/Blueprint.h"
#include "../Global/Uint32.h"
#include "../DiceShooterShared/PlayerAbilityInputModifier.h"
#include "../DiceShooterShared/PlayerAbilityBlockingRule.h"
#include "../DiceShooterShared/PlayerAbilityModifier.h"
#include "../DiceShooterShared/PlayerAbilityPickupEntityBlueprint.h"
#include "../Core/Asset.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityAsset : public DiceShooterShared::PlayerAbilityAssetBase {
        GameShared::UnlockAssetBase Unlock; // 0x20
        DiceShooterShared::PlayerAbilityCategory Category; // 0x28
        char pad_0x2C[0x4];
        Entity::Blueprint Blueprint; // 0x30
        Array<Uint32> DescriptorIds; // 0x38
        Array<DiceShooterShared::PlayerAbilityInputModifier> InputModifiers; // 0x40
        Array<DiceShooterShared::PlayerAbilityBlockingRule> BlockPlayerAbilitiesRules; // 0x48
        Array<Uint32> BlockedPlayerAbilityIds; // 0x50
        Uint32 UnblockedByAbilityId; // 0x58
        Uint32 Identifier; // 0x5C
        Array<DiceShooterShared::PlayerAbilityModifier> AbilityModifiers; // 0x60
        DiceShooterShared::PlayerAbilityPickupEntityBlueprint PickupBlueprint; // 0x68
        Core::Asset NonStreamedPickupMesh; // 0x70
        Boolean IsSupportedOnAIPlayers; // 0x78
        Boolean IsSupportedOnHumanPlayers; // 0x79
        Boolean IgnoreNetworkingErrors; // 0x7A
        Boolean ResetOnSpawn; // 0x7B
        Boolean ApplyBlockPlayerAbilitiesDuringActive; // 0x7C
        Boolean ApplyBlockPlayerAbilitiesDuringActivation; // 0x7D
        Boolean IsHidden; // 0x7E
        Boolean IsDefaultUnlocked; // 0x7F
        Boolean DropAsPickupOnDeath; // 0x80
        char pad_0x81[0x7];
    }; // 0x88
    static_assert(sizeof(PlayerAbilityAsset) == 0x88);
}
#pragma pack(pop)