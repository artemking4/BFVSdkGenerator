// Object: MotorbikeData
// ClassId: 4312
// RuntimeId: 17842
// TypeInfo: 0x0000000144E9B890
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class MotorbikeData : public Core::DataContainer {
        Float32 MaxLeaningRoll; // 0x18
        Float32 CounterLeanForce; // 0x1C
        Core::Vec3 DampBigJumpImpactCounterForce; // 0x20
        Core::Vec3 WheelieForce; // 0x30
        Core::Vec3 WheelieForceBodyOffset; // 0x40
        Float32 StandStillLeanForce; // 0x50
        Float32 LeanForce; // 0x54
        Float32 JumpForwardLeanMinAngle; // 0x58
        Float32 JumpForwardLeanMomentum; // 0x5C
        Float32 JumpForwardLeanMinNoContactTime; // 0x60
        Float32 LeanForceMaxVel; // 0x64
        Float32 KickstandRoll; // 0x68
        Float32 KickstandLinearDamping; // 0x6C
        Float32 StandStillRoll; // 0x70
        Float32 DampBigJumpImpactVelocity; // 0x74
        Float32 DampBigJumpMaxSpringForceFraction; // 0x78
        Float32 DampBigJumpImpactVerticalVelocity; // 0x7C
        Float32 StoppieActivationVelocity; // 0x80
        Float32 StoppieStartVelocity; // 0x84
        Float32 StoppieStopVelocity; // 0x88
        Float32 StoppieMomentum; // 0x8C
        Float32 OffGroundGravityMultiplier; // 0x90
        Float32 ShortOffgroundGravityMultiplier; // 0x94
        Float32 ShortOffgroundPeriod; // 0x98
        Float32 WheelieSwitchOffNoContactTime; // 0x9C
        Float32 WheelieMaxNoDownForceContactTime; // 0xA0
        Float32 WheelieMaxNoContactTime; // 0xA4
        Float32 WheelieSteeringFactor; // 0xA8
        Float32 WheelieInertia; // 0xAC
        Float32 WheelieStartVelocity; // 0xB0
        Float32 WheelieMaxVelocityUndamped; // 0xB4
        Float32 WheelieMaxVelocityDampRange; // 0xB8
        Float32 WheelieOutAngularMomentum; // 0xBC
        Float32 WheelieSpringDamping; // 0xC0
        Float32 WheelieSpringKScale; // 0xC4
        Float32 WheelieAngularDamping; // 0xC8
        Float32 WheelieAngularDampingSpeed; // 0xCC
        Float32 WheelieMaxAngle; // 0xD0
        Float32 WheelieMaxVelocity; // 0xD4
        Float32 WheelieVelocityForceScale; // 0xD8
        Float32 WheelieAngularStartMomentum; // 0xDC
        Boolean DampBigJumpImpact; // 0xE0
        char pad_0xE1[0xF];
    }; // 0xF0
    static_assert(sizeof(MotorbikeData) == 0xF0);
}
#pragma pack(pop)