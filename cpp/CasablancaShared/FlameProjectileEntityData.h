// Object: FlameProjectileEntityData
// ClassId: 3314
// RuntimeId: 64831
// TypeInfo: 0x0000000144D402D0
#include "../WeaponShared/ProjectileEntityData.h"
#include "../Global/Float32.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class FlameProjectileEntityData : public WeaponShared::ProjectileEntityData {
        Float32 Gravity; // 0xF0
        char pad_0xF4[0x4];
        EffectBase::EffectBlueprint TrailEffect; // 0xF8
        Float32 FlameExclusiveRadius; // 0x100
        Boolean FlameEnabled; // 0x104
        Boolean FlameAttachToCharacters; // 0x105
        Boolean FlameAttachToVehicles; // 0x106
        Boolean FlameExcludeFriendlies; // 0x107
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(FlameProjectileEntityData) == 0x110);
}
#pragma pack(pop)