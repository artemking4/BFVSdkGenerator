// Object: SoldierWeaponCustomizationAsset
// ClassId: 390
// RuntimeId: 64998
// TypeInfo: 0x0000000144F49F40
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/CustomizationTable.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponCustomizationAsset : public Core::DataContainerPolicyAsset {
        GameShared::CustomizationTable Customization; // 0x20
    }; // 0x28
    static_assert(sizeof(SoldierWeaponCustomizationAsset) == 0x28);
}
#pragma pack(pop)