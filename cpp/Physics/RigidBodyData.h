// Object: RigidBodyData
// ClassId: 2979
// RuntimeId: 24884
// TypeInfo: 0x0000000144F0F400
#include "../Physics/PhysicsBodyData.h"
#include "../Physics/RigidBodyType.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Physics/RigidBodyMotionType.h"
#include "../Physics/RigidBodyQualityType.h"
#include "../Global/Uint32.h"
#include "../Physics/FloatPhysicsData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Physics {
    class RigidBodyData : public Physics::PhysicsBodyData {
        char pad_0x38[0x8];
        Core::Vec3 CenterOfMass; // 0x40
        Core::Vec3 InertiaModifier; // 0x50
        Core::LinearTransform Transform; // 0x60
        Core::LinearTransform KeyframeTransform; // 0xA0
        Physics::RigidBodyType RigidBodyType; // 0xE0
        Float32 Mass; // 0xE4
        Entity::MaterialDecl Material; // 0xE8
        Float32 DynamicFriction; // 0xEC
        Float32 StaticFriction; // 0xF0
        Float32 Restitution; // 0xF4
        Float32 AngularVelocityDamping; // 0xF8
        Float32 LinearVelocityDamping; // 0xFC
        Physics::RigidBodyMotionType MotionType; // 0x100
        Physics::RigidBodyQualityType QualityType; // 0x104
        Uint32 SystemGroup; // 0x108
        Uint32 SubSystemId; // 0x10C
        Uint32 SubSystemIdNoCollide; // 0x110
        char pad_0x114[0x4];
        Array<Uint32> PartIndices; // 0x118
        Physics::FloatPhysicsData FloatPhysics; // 0x120
        Boolean ComputeCenterOfMass; // 0x128
        Boolean IsRootController; // 0x129
        char pad_0x12A[0x6];
    }; // 0x130
    static_assert(sizeof(RigidBodyData) == 0x130);
}
#pragma pack(pop)