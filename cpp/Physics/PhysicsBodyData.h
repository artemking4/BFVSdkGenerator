// Object: PhysicsBodyData
// ClassId: 2975
// RuntimeId: 48387
// TypeInfo: 0x0000000144F0F480
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Physics/RigidBodyCollisionLayer.h"
#include "../Core/Asset.h"
#include "../Global/Uint8.h"
#include "../Global/Boolean.h"

namespace Physics {
    class PhysicsBodyData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Physics::RigidBodyCollisionLayer CollisionLayer; // 0x24
        Core::Asset Asset; // 0x28
        Uint8 AssetIndex; // 0x30
        Uint8 TransformIndex; // 0x31
        Uint8 WorldIndex; // 0x32
        Uint8 CollisionRootShapeIndex; // 0x33
        Uint8 RaycastRootShapeIndex; // 0x34
        Boolean AddToSpatialQueryManager; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(PhysicsBodyData) == 0x38);
}