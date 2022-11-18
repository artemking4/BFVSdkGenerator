// Object: WeaponObjectVariationModifier
// ClassId: 5689
// RuntimeId: 58721
// TypeInfo: 0x0000000144F43030
#include "../WeaponShared/WeaponModifierBase.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponObjectVariationModifier : public WeaponShared::WeaponModifierBase {
        Uint32 ObjectVariation1pNameHash; // 0x20
        Uint32 ObjectVariation3pNameHash; // 0x24
    }; // 0x28
    static_assert(sizeof(WeaponObjectVariationModifier) == 0x28);
}
#pragma pack(pop)