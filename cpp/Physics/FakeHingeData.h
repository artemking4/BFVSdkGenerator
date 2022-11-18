// Object: FakeHingeData
// ClassId: 1620
// RuntimeId: 44495
// TypeInfo: 0x0000000144F0E340
#include "../Physics/FakePhysicsData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Physics {
    class FakeHingeData : public Physics::FakePhysicsData {
        char pad_0x48[0x8];
        Core::Vec3 Pivot; // 0x50
        Core::Vec3 RotationAxis; // 0x60
        Core::Vec3 ExtensionAxis; // 0x70
        Float32 MinAngle; // 0x80
        Float32 MaxAngle; // 0x84
        Float32 AngularDampening; // 0x88
        Float32 PullbackAcceleration; // 0x8C
        Float32 ProgressiveExponent; // 0x90
        Float32 InertiaModifier; // 0x94
        char pad_0x98[0x8];
    }; // 0xA0
    static_assert(sizeof(FakeHingeData) == 0xA0);
}
#pragma pack(pop)