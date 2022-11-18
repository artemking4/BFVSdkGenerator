// Object: ArtilleryStrikeEntityData
// ClassId: 3257
// RuntimeId: 30217
// TypeInfo: 0x0000000144C331F0
#include "../Entity/SpatialEntityData.h"
#include "../WeaponShared/MissileEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ArtilleryStrikeEntityData : public Entity::SpatialEntityData {
        WeaponShared::MissileEntityData MissileData; // 0x60
        Float32 MissileSpawnRadius; // 0x68
        Float32 DurationOfArtilleryStrike; // 0x6C
        Float32 MaxDelayBetweenProjectiles; // 0x70
        Float32 MinDelayBetweenProjectiles; // 0x74
        Float32 MaxDelayBetweenStrikes; // 0x78
        Float32 MinDelayBetweenStrikes; // 0x7C
        Float32 MinRadiusToSoldier; // 0x80
        Float32 RadiusWhenFollowingSoldier; // 0x84
        Float32 HeightOffsetWhenFollowingSoldier; // 0x88
        Uint32 NumberOfStrikes; // 0x8C
        Uint32 MaxProjectilesPerStrike; // 0x90
        Uint32 MinProjectilesPerStrike; // 0x94
        Boolean FollowSoldier; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(ArtilleryStrikeEntityData) == 0xA0);
}
#pragma pack(pop)