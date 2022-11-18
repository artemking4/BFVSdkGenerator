// Object: WeaponZoomLevelModifier
// ClassId: 5687
// RuntimeId: 14533
// TypeInfo: 0x0000000144F432B0
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Global/Int32.h"
#include "../SoldierShared/WeaponZoomLevelData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponZoomLevelModifier : public WeaponShared::WeaponModifierDynamicBase {
        Int32 ZoomLevelIndex; // 0x20
        char pad_0x24[0x4];
        SoldierShared::WeaponZoomLevelData WeaponZoomLevel; // 0x28
    }; // 0x30
    static_assert(sizeof(WeaponZoomLevelModifier) == 0x30);
}
#pragma pack(pop)