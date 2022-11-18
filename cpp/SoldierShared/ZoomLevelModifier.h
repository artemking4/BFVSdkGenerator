// Object: ZoomLevelModifier
// ClassId: 5688
// RuntimeId: 12154
// TypeInfo: 0x0000000144F43230
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Global/Int32.h"
#include "../SoldierShared/ZoomLevelData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ZoomLevelModifier : public WeaponShared::WeaponModifierDynamicBase {
        Int32 ZoomLevelIndex; // 0x20
        char pad_0x24[0x4];
        SoldierShared::ZoomLevelData ZoomLevel; // 0x28
    }; // 0x30
    static_assert(sizeof(ZoomLevelModifier) == 0x30);
}
#pragma pack(pop)