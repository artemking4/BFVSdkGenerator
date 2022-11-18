// Object: OBBCollisionEntityData
// ClassId: 3422
// RuntimeId: 2374
// TypeInfo: 0x0000000144E82CC0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Entity/EntityData.h"
#include "../Physics/RigidBodyCollisionLayer.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace GameShared {
    class OBBCollisionEntityData : public Entity::SpatialEntityData {
        Core::Vec3 HalfExtents; // 0x60
        Array<Entity::EntityData> PhysicsBodies; // 0x70
        Physics::RigidBodyCollisionLayer CollisionLayer; // 0x78
        Entity::MaterialDecl Material; // 0x7C
        Boolean Enabled; // 0x80
        char pad_0x81[0xF];
    }; // 0x90
    static_assert(sizeof(OBBCollisionEntityData) == 0x90);
}
#pragma pack(pop)