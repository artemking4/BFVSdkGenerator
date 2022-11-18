// Object: WeaponFireLogicModifier
// ClassId: 5677
// RuntimeId: 54331
// TypeInfo: 0x0000000144F7A760
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponFireLogicModifier : public WeaponShared::WeaponModifierDynamicBase {
        Float32 RateOfFire; // 0x20
        Float32 RateOfFireForBurst; // 0x24
        Float32 RateOfFireForSingleFire; // 0x28
        Float32 BoltActionDelay; // 0x2C
        Float32 SuppressionBoltActionDelay; // 0x30
        Float32 BoltActionTime; // 0x34
        Float32 BoltActionTimeCompletedFraction; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(WeaponFireLogicModifier) == 0x40);
}
#pragma pack(pop)