// Object: WeaponSilencerModifier
// ClassId: 5685
// RuntimeId: 51251
// TypeInfo: 0x0000000144F7AB60
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponSilencerModifier : public WeaponShared::WeaponModifierDynamicBase {
        Boolean IsSilenced; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(WeaponSilencerModifier) == 0x28);
}
#pragma pack(pop)