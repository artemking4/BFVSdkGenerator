// Object: SoldierCustomizationAsset
// ClassId: 329
// RuntimeId: 46674
// TypeInfo: 0x0000000144F39490
#include "../GameShared/CharacterCustomizationAsset.h"
#include "../GameShared/CustomizationTable.h"
#include "../SoldierShared/SoldierWeaponSlotCustomizationAsset.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierCustomizationAsset : public GameShared::CharacterCustomizationAsset {
        GameShared::CustomizationTable WeaponTable; // 0x58
        SoldierShared::SoldierWeaponSlotCustomizationAsset WeaponCustomization; // 0x60
    }; // 0x68
    static_assert(sizeof(SoldierCustomizationAsset) == 0x68);
}
#pragma pack(pop)