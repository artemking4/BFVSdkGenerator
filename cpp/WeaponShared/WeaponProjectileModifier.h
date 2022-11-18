// Object: WeaponProjectileModifier
// ClassId: 5682
// RuntimeId: 42503
// TypeInfo: 0x0000000144F7A860
#include "../WeaponShared/WeaponModifierDynamicBase.h"
#include "../WeaponShared/ProjectileEntityData.h"
#include "../WeaponShared/ProjectileBlueprint.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponProjectileModifier : public WeaponShared::WeaponModifierDynamicBase {
        WeaponShared::ProjectileEntityData ProjectileData; // 0x20
        WeaponShared::ProjectileBlueprint Projectile; // 0x28
        Int32 MaxCount; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(WeaponProjectileModifier) == 0x38);
}
#pragma pack(pop)