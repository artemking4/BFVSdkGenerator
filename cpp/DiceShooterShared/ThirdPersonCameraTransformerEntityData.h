// Object: ThirdPersonCameraTransformerEntityData
// ClassId: 2460
// RuntimeId: 18200
// TypeInfo: 0x0000000144DEE820
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/ThirdPersonCamInertiaValues.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ThirdPersonCameraTransformerEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 InRollInput; // 0x28
        Float32 InYawInput; // 0x2C
        Float32 InPitchInput; // 0x30
        char pad_0x34[0xC];
        Core::LinearTransform RotationOffset; // 0x40
        Float32 PitchMinAngle; // 0x80
        Float32 PitchMaxAngle; // 0x84
        Float32 PitchDefaultAngle; // 0x88
        Float32 PitchCushionAngle; // 0x8C
        Float32 PitchCushionSoftness; // 0x90
        Float32 YawMinAngle; // 0x94
        Float32 YawMaxAngle; // 0x98
        Float32 YawDefaultAngle; // 0x9C
        Float32 YawCushionAngle; // 0xA0
        Float32 YawCushionSoftness; // 0xA4
        Float32 RollMaxAngle; // 0xA8
        DiceShooterShared::ThirdPersonCamInertiaValues PitchAccInertia; // 0xAC
        DiceShooterShared::ThirdPersonCamInertiaValues YawAccInertia; // 0xB4
        DiceShooterShared::ThirdPersonCamInertiaValues RollAccInertia; // 0xBC
        Float32 RotSpeed; // 0xC4
        Float32 OverrideYaw; // 0xC8
        Float32 OverridePitch; // 0xCC
    }; // 0xD0
    static_assert(sizeof(ThirdPersonCameraTransformerEntityData) == 0xD0);
}
#pragma pack(pop)