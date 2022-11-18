// Object: CustomizeSoldierData
// ClassId: 241
// RuntimeId: 33041
// TypeInfo: 0x0000000144F44EB0
#include "../GameShared/CustomizeCharacterData.h"
#include "../SoldierShared/UnlockWeaponAndSlot.h"
#include "../WeaponShared/WeaponSlot.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/PickupEntityAsset.h"
#include "../DiceCommonsShared/CharacterDefinition.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class CustomizeSoldierData : public GameShared::CustomizeCharacterData {
        Array<SoldierShared::UnlockWeaponAndSlot> Weapons; // 0x40
        WeaponShared::WeaponSlot ActiveSlot; // 0x48
        char pad_0x4C[0x4];
        SoldierShared::PickupEntityAsset DeathPickup; // 0x50
        DiceCommonsShared::CharacterDefinition CharacterDefinition; // 0x58
        Boolean KeepCurrentActiveSlot; // 0x60
        Boolean RemoveAllExistingWeapons; // 0x61
        Boolean DisableDeathPickup; // 0x62
        char pad_0x63[0x5];
    }; // 0x68
    static_assert(sizeof(CustomizeSoldierData) == 0x68);
}
#pragma pack(pop)