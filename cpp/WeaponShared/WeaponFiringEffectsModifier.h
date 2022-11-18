// Object: WeaponFiringEffectsModifier
// ClassId: 5679
// RuntimeId: 10647
// TypeInfo: 0x0000000144F7A9E0
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../WeaponShared/FireEffectData.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponFiringEffectsModifier : public WeaponShared::WeaponModifierDynamicBase {
        Array<WeaponShared::FireEffectData> FireEffects1p; // 0x20
        Array<WeaponShared::FireEffectData> FireEffects3p; // 0x28
    }; // 0x30
    static_assert(sizeof(WeaponFiringEffectsModifier) == 0x30);
}
#pragma pack(pop)