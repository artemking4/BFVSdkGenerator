// Object: PhysicsEntityData
// ClassId: 2997
// RuntimeId: 34230
// TypeInfo: 0x0000000144F0FC00
#include "../Entity/EntityData.h"
#include "../Physics/HavokAsset.h"
#include "../Physics/RigidBodyData.h"
#include "../Physics/FloatPhysicsData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Physics/ProximityData.h"
#include "../Physics/PhysicsConstraintData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Physics {
    class PhysicsEntityData : public Entity::EntityData {
        Physics::HavokAsset Asset; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 InertiaModifier; // 0x30
        Array<Physics::RigidBodyData> RigidBodies; // 0x40
        Physics::FloatPhysicsData FloatPhysics; // 0x48
        Float32 Mass; // 0x50
        Float32 AngularVelocityDamping; // 0x54
        Float32 LinearVelocityDamping; // 0x58
        char pad_0x5C[0x4];
        Physics::ProximityData Proximity; // 0x60
        Array<Physics::PhysicsConstraintData> Constraints; // 0x68
        Boolean MovableParts; // 0x70
        Boolean IsComposite; // 0x71
        char pad_0x72[0xE];
    }; // 0x80
    static_assert(sizeof(PhysicsEntityData) == 0x80);
}
#pragma pack(pop)