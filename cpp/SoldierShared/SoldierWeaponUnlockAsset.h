// Object: SoldierWeaponUnlockAsset
// ClassId: 450
// RuntimeId: 23459
// TypeInfo: 0x0000000144F49FC0
#include "../WeaponShared/WeaponUnlockAsset.h"
#include "../GameShared/BlueprintBundleReference.h"
#include "../Entity/Blueprint.h"
#include "../SoldierShared/SoldierWeaponCustomizationAsset.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../SoldierShared/StoredWeaponData.h"
#include "../SoldierShared/UnlockToBlueprintBundle.h"
#include "../SoldierShared/UnlocksToUnlock.h"
#include "../SoldierShared/SoldierWeaponUnlockRemappingData.h"
#include "../SoldierShared/OtherSoldierWeaponUnlockMappingData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponUnlockAsset : public WeaponShared::WeaponUnlockAsset {
        GameShared::BlueprintBundleReference WeaponBlueprintBundleReference; // 0x58
        GameShared::BlueprintBundleReference Weapon1pBlueprintBundleReference; // 0x90
        Entity::Blueprint NonStreamedBlueprint; // 0xC8
        SoldierShared::SoldierWeaponCustomizationAsset Customization; // 0xD0
        GameShared::UnlockAssetBase Extra; // 0xD8
        Core::DataContainerPolicyAsset WeaponClass; // 0xE0
        GameShared::UnlockAssetBase UnlockToApplyToCloneWeapon; // 0xE8
        GameShared::UnlockAssetBase CloneWeaponRequiredUnlock; // 0xF0
        Int32 AddCloneWeaponToSlot; // 0xF8
        Uint32 WeaponIdentifier; // 0xFC
        Uint32 Category; // 0x100
        SoldierShared::StoredWeaponData WeaponData; // 0x104
        Array<SoldierShared::UnlockToBlueprintBundle> UnlockToBlueprintBundle; // 0x118
        Array<SoldierShared::UnlocksToUnlock> RelatedWeaponParts; // 0x120
        Array<SoldierShared::SoldierWeaponUnlockRemappingData> UnlockRemappings; // 0x128
        Array<SoldierShared::OtherSoldierWeaponUnlockMappingData> OtherWeaponUnlockMappings; // 0x130
    }; // 0x138
    static_assert(sizeof(SoldierWeaponUnlockAsset) == 0x138);
}
#pragma pack(pop)