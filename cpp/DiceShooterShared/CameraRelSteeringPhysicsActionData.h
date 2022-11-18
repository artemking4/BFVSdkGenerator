// Object: CameraRelSteeringPhysicsActionData
// ClassId: 2949
// RuntimeId: 57234
// TypeInfo: 0x0000000144DED6A0
#include "../DiceShooterShared/PhysicsActionBaseData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/AudioCurve.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CameraRelSteeringPhysicsActionData : public DiceShooterShared::PhysicsActionBaseData {
        Int32 InputActionYaw; // 0x58
        Int32 InputActionPitch; // 0x5C
        Int32 InputActionRoll; // 0x60
        Float32 YawMaxSpeed; // 0x64
        Core::AudioCurve YawMaxSpeedMultiplierCurve; // 0x68
        Float32 YawInertiaOnInput; // 0x78
        Float32 YawInertiaOnNoInput; // 0x7C
        Float32 PitchMaxSpeed; // 0x80
        char pad_0x84[0x4];
        Core::AudioCurve PitchMaxSpeedMultiplierCurve; // 0x88
        Float32 PitchInertiaOnInput; // 0x98
        Float32 PitchInertiaOnNoInput; // 0x9C
        Float32 RollMaxSpeed; // 0xA0
        char pad_0xA4[0x4];
        Core::AudioCurve RollMaxSpeedMultiplierCurve; // 0xA8
        Float32 RollInertiaOnInput; // 0xB8
        Float32 RollInertiaOnNoInput; // 0xBC
        Float32 VisualRollMaxAngle; // 0xC0
        Float32 VisualRollYawSpeedForMaxAngle; // 0xC4
        Float32 VisualRollIncInertia; // 0xC8
        Float32 VisualRollDecInertia; // 0xCC
        Float32 AutoRollOnYawFadeOutAngle; // 0xD0
        Float32 NumSimStepsToReachCameraTransform; // 0xD4
        Boolean ResetTargetOrientation; // 0xD8
        char pad_0xD9[0x7];
    }; // 0xE0
    static_assert(sizeof(CameraRelSteeringPhysicsActionData) == 0xE0);
}
#pragma pack(pop)