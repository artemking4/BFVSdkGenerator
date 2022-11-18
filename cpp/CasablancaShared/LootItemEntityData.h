// Object: LootItemEntityData
// ClassId: 3310
// RuntimeId: 29674
// TypeInfo: 0x0000000144D02720
#include "../SoldierShared/WeaponUnlockPickupEntityData.h"
#include "../GameShared/UnlockAsset.h"
#include "../CasablancaShared/LootPickupType.h"
#include "../CasablancaShared/LootPickupGroup.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../SoldierShared/WeaponClassEnum.h"
#include "../SoldierShared/SharedAmmoType.h"
#include "../Global/Int32.h"
#include "../Audio/SoundAsset.h"
#include "../UIIncubatorShared/LocalizedStringId.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LootItemEntityData : public SoldierShared::WeaponUnlockPickupEntityData {
        GameShared::UnlockAsset VisualUnlockAsset; // 0x110
        CasablancaShared::LootPickupType LootType; // 0x118
        CasablancaShared::LootPickupGroup LootGroup; // 0x11C
        Float32 InteractionDuration; // 0x120
        Float32 ArmorAmount; // 0x124
        SoldierShared::WeaponClassEnum WeaponClassForAmmo; // 0x128
        SoldierShared::SharedAmmoType AmmoType; // 0x12C
        Int32 AmmoPickupAmount; // 0x130
        Int32 BackpackTier; // 0x134
        Int32 PickupMaxAmmoAmountOverride; // 0x138
        Float32 DropTime; // 0x13C
        Audio::SoundAsset PickupSound; // 0x140
        Audio::SoundAsset PickupSoundRemote; // 0x148
        Float32 PickupRemoteRange; // 0x150
        char pad_0x154[0x4];
        Audio::SoundAsset PickupFailedSound; // 0x158
        Audio::SoundAsset DropSound; // 0x160
        Audio::SoundAsset CollisionSound; // 0x168
        Audio::SoundAsset InteractSound; // 0x170
        UIIncubatorShared::LocalizedStringId LootGroupNameSid; // 0x178
        Boolean OverrideInteractionDuration; // 0x180
        Boolean SuppressPickupOnInteract; // 0x181
        Boolean PickupGivesAmmoWhenAlreadyEquipped; // 0x182
        Boolean WeaponAmmoIsEmptyOnPickup; // 0x183
        Boolean AddPickupAmmoToLoadedMagazine; // 0x184
        Boolean ApplyTierToIconName; // 0x185
        Boolean UseCustomizationOnWeaponPickup; // 0x186
        char pad_0x187[0x9];
    }; // 0x190
    static_assert(sizeof(LootItemEntityData) == 0x190);
}
#pragma pack(pop)