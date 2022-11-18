// Object: ThrowableMeleeWeaponData
// ClassId: 5214
// RuntimeId: 42810
// TypeInfo: 0x0000000144D3FB50
#include "../CasablancaShared/MeleeWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ThrowableMeleeWeaponData : public CasablancaShared::MeleeWeaponData {
        Float32 ThrownProjectileSpeedModifier; // 0x70
        Float32 DelayBetweenThrows; // 0x74
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(ThrowableMeleeWeaponData) == 0x80);
}
#pragma pack(pop)