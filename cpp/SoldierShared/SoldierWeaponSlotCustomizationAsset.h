// Object: SoldierWeaponSlotCustomizationAsset
// ClassId: 738
// RuntimeId: 6148
// TypeInfo: 0x0000000144F39510
#include "../Core/Asset.h"
#include "../GameShared/CustomizationUnlockParts.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponSlotCustomizationAsset : public Core::Asset {
        Array<GameShared::CustomizationUnlockParts> Slots; // 0x20
    }; // 0x28
    static_assert(sizeof(SoldierWeaponSlotCustomizationAsset) == 0x28);
}
#pragma pack(pop)