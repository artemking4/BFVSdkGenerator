// Object: SphereCollisionEntityData
// ClassId: 3447
// RuntimeId: 56496
// TypeInfo: 0x0000000144E82D40
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Entity/EntityData.h"
#include "../Physics/RigidBodyCollisionLayer.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace GameShared {
    class SphereCollisionEntityData : public Entity::SpatialEntityData {
        Core::Vec3 Position; // 0x60
        Float32 Radius; // 0x70
        char pad_0x74[0x4];
        Array<Entity::EntityData> PhysicsBodies; // 0x78
        Physics::RigidBodyCollisionLayer CollisionLayer; // 0x80
        Entity::MaterialDecl Material; // 0x84
        Boolean Enabled; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(SphereCollisionEntityData) == 0x90);
}
#pragma pack(pop)