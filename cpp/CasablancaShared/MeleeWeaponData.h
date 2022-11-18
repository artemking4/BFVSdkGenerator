// Object: MeleeWeaponData
// ClassId: 5213
// RuntimeId: 60820
// TypeInfo: 0x0000000144D3FBD0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/MeleeWeaponId.h"
#include "../CasablancaShared/MeleeWeaponModifierData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class MeleeWeaponData : public CasablancaShared::BFWeaponData {
        char pad_0x28[0x8];
        Core::Vec3 KillingBlowImpulseDirectionStartOffset; // 0x30
        Core::Vec3 KillingBlowImpulsePositionOffset; // 0x40
        Float32 KillingBlowImpulse; // 0x50
        CasablancaShared::MeleeWeaponId MeleeWeaponId; // 0x54
        Float32 InvalidMeleeAttackZone; // 0x58
        char pad_0x5C[0x4];
        CasablancaShared::MeleeWeaponModifierData Modifier; // 0x60
        Boolean UseCannedAnimation; // 0x68
        Boolean UseSphereDamage; // 0x69
        Boolean AllowContextualLethalFinish; // 0x6A
        char pad_0x6B[0x5];
    }; // 0x70
    static_assert(sizeof(MeleeWeaponData) == 0x70);
}
#pragma pack(pop)