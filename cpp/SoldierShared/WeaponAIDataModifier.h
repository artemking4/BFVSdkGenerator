// Object: WeaponAIDataModifier
// ClassId: 5660
// RuntimeId: 60905
// TypeInfo: 0x0000000144F42F30
#include "../WeaponShared/WeaponModifierBase.h"
#include "../GameShared/GameAIWeaponData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponAIDataModifier : public WeaponShared::WeaponModifierBase {
        GameShared::GameAIWeaponData AIData; // 0x20
    }; // 0x28
    static_assert(sizeof(WeaponAIDataModifier) == 0x28);
}
#pragma pack(pop)