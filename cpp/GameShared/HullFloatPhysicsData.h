// Object: HullFloatPhysicsData
// ClassId: 1638
// RuntimeId: 136
// TypeInfo: 0x0000000144E9B710
#include "../Physics/FloatPhysicsData.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class HullFloatPhysicsData : public Physics::FloatPhysicsData {
        Core::Vec3 WaterResistanceAxisMod; // 0x20
        Core::Vec3 WaterFrictionAxisMod; // 0x30
        Core::Vec3 Offset; // 0x40
        Int32 SubSurfaceSplits; // 0x50
        Float32 Depth; // 0x54
        Float32 Width; // 0x58
        Float32 Length; // 0x5C
        Float32 FrontCurveDegree; // 0x60
        Float32 SideCurveDegree; // 0x64
        Float32 NonEngineSteer; // 0x68
        Float32 NonEngineSteerMinSpeed; // 0x6C
        Float32 NonEngineSteerMaxSpeed; // 0x70
        Float32 WaterDampeningMod; // 0x74
        Float32 LiftModifier; // 0x78
        Float32 SupportSizeMod; // 0x7C
        Float32 SampleHeightModifier; // 0x80
        Float32 AngularDampening; // 0x84
        Float32 MinShoreResistance; // 0x88
        Float32 MaxShoreResistance; // 0x8C
        Float32 DepthMinShoreResistance; // 0x90
        Float32 DepthMaxShoreResistance; // 0x94
        Float32 FrictionThrottleModifier; // 0x98
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(HullFloatPhysicsData) == 0xA0);
}
#pragma pack(pop)