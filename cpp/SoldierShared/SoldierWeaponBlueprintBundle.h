// Object: SoldierWeaponBlueprintBundle
// ClassId: 733
// RuntimeId: 58106
// TypeInfo: 0x0000000144F42BB0
#include "../GameShared/BlueprintBundle.h"
#include "../Ant/AntStateAsset.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierWeaponBlueprintBundle : public GameShared::BlueprintBundle {
        Array<Ant::AntStateAsset> AntStateAssets; // 0x28
    }; // 0x30
    static_assert(sizeof(SoldierWeaponBlueprintBundle) == 0x30);
}
#pragma pack(pop)