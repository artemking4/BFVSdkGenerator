// Object: NonStaticCollisionTriggerEntityData
// ClassId: 3420
// RuntimeId: 47566
// TypeInfo: 0x0000000144C830C0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Physics/RigidBodyCollisionLayer.h"

#pragma pack(push, 16)
namespace Casablanca {
    class NonStaticCollisionTriggerEntityData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        Physics::RigidBodyCollisionLayer CollisionLayer; // 0x64
        Boolean Enabled; // 0x68
        Boolean TriggerOnCharacters; // 0x69
        Boolean TriggerOnVehicles; // 0x6A
        Boolean TriggerOnDynamicObjects; // 0x6B
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(NonStaticCollisionTriggerEntityData) == 0x70);
}
#pragma pack(pop)