// Object: WeaponDispersionModifier
// ClassId: 5676
// RuntimeId: 35635
// TypeInfo: 0x0000000144F7A4E0
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponDispersionModifier : public WeaponShared::WeaponModifierDynamicBase {
        Float32 HorizontalModifier; // 0x20
        Float32 VerticalModifier; // 0x24
    }; // 0x28
    static_assert(sizeof(WeaponDispersionModifier) == 0x28);
}
#pragma pack(pop)