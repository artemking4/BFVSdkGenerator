// Object: CollisionTriggerEntityData
// ClassId: 3286
// RuntimeId: 31197
// TypeInfo: 0x0000000144C83140
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Physics/RigidBodyCollisionLayer.h"

#pragma pack(push, 16)
namespace Casablanca {
    class CollisionTriggerEntityData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        Physics::RigidBodyCollisionLayer CollisionLayer; // 0x64
        Boolean Enabled; // 0x68
        char pad_0x69[0x7];
    }; // 0x70
    static_assert(sizeof(CollisionTriggerEntityData) == 0x70);
}
#pragma pack(pop)