// Object: RayCastEntityData
// ClassId: 3098
// RuntimeId: 28968
// TypeInfo: 0x0000000144DE4770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class RayCastEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Start; // 0x30
        Core::Vec3 Stop; // 0x40
        Float32 Radius; // 0x50
        Boolean SeeThrough; // 0x54
        Boolean Penetrable; // 0x55
        Boolean IncludeTerrain; // 0x56
        Boolean IncludeWater; // 0x57
        Boolean IncludeCharacters; // 0x58
        Boolean IncludeVehicles; // 0x59
        Boolean IncludeRagdolls; // 0x5A
        Boolean IncludeFixed; // 0x5B
        Boolean IncludeKeyframed; // 0x5C
        Boolean IncludeDynamic; // 0x5D
        Boolean Async; // 0x5E
        Boolean DetailedQueryMode; // 0x5F
        Boolean ExcludeAttachedControllable; // 0x60
        Boolean Enabled; // 0x61
        char pad_0x62[0xE];
    }; // 0x70
    static_assert(sizeof(RayCastEntityData) == 0x70);
}
#pragma pack(pop)