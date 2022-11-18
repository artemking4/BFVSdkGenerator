// Object: ScatterWeaponData
// ClassId: 5225
// RuntimeId: 2891
// TypeInfo: 0x0000000144D40950
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/ProjectileIndexResetMode.h"
#include "../CasablancaShared/ScatterProjectileInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ScatterWeaponData : public CasablancaShared::BFWeaponData {
        CasablancaShared::ProjectileIndexResetMode ScatterProjectileIndexResetMode; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::ScatterProjectileInfo> ScatterProjectiles; // 0x30
        Boolean SpawnFireEffectForEveryProjectile; // 0x38
        Boolean SequentialFiring; // 0x39
        Boolean FireOriginalProjectile; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(ScatterWeaponData) == 0x40);
}
#pragma pack(pop)