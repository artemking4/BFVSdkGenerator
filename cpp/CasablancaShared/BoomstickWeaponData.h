// Object: BoomstickWeaponData
// ClassId: 5197
// RuntimeId: 44454
// TypeInfo: 0x0000000144D3F5D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../CasablancaShared/BoomstickLockingControllerData.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Boolean.h"
#include "../GameShared/ExplosionEntityData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BoomstickWeaponData : public CasablancaShared::BFWeaponData {
        CasablancaShared::BoomstickLockingControllerData LockingController; // 0x28
        Float32 UpdateRate; // 0x30
        Float32 MinTimeBetweenExplosions; // 0x34
        Float32 RayLength; // 0x38
        Entity::MaterialDecl RayMaterial; // 0x3C
        Float32 ExplosionOffset; // 0x40
        char pad_0x44[0x4];
        GameShared::ExplosionEntityData Explosion; // 0x48
        Boolean IgnoreSeeThrough; // 0x50
        Boolean IgnorePenetrable; // 0x51
        Boolean IncludeTerrain; // 0x52
        Boolean IncludeWater; // 0x53
        Boolean IncludeCharacters; // 0x54
        Boolean IncludeVehicles; // 0x55
        Boolean IncludeRagdolls; // 0x56
        Boolean IgnoreFriendlyCharacters; // 0x57
    }; // 0x58
    static_assert(sizeof(BoomstickWeaponData) == 0x58);
}
#pragma pack(pop)