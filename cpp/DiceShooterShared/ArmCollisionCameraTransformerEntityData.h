// Object: ArmCollisionCameraTransformerEntityData
// ClassId: 2452
// RuntimeId: 34359
// TypeInfo: 0x0000000144DEE8A0
#include "../DiceShooterShared/CameraTransformerEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ArmCollisionCameraTransformerEntityData : public DiceShooterShared::CameraTransformerEntityData {
        Float32 MaxPitch; // 0x28
        char pad_0x2C[0x4];
        DiceShooterShared::QueryEntityResult EntitiesToExclude; // 0x30
        Float32 CollisionBlendIn; // 0x40
        Float32 CollisionBlendOut; // 0x44
        char pad_0x48[0x8];
        Core::LinearTransform CameraJointTransform; // 0x50
        Float32 CollisionWidthPadding; // 0x90
        Float32 MaxReducedArmLength; // 0x94
        Float32 ReduceMinPitch; // 0x98
        Float32 ReduceMaxPitch; // 0x9C
        Float32 MinimumCameraArmLength; // 0xA0
        Float32 CameraArmLength; // 0xA4
        Boolean UseCameraJointTransformRoll; // 0xA8
        Boolean AdjustArmLengthIfLocalTransformUsed; // 0xA9
        Boolean UseMaxPitchClamping; // 0xAA
        Boolean EnableSoftCollision; // 0xAB
        Boolean IgnoreBlendInForArmLengthDecrease; // 0xAC
        Boolean ReduceArmLengthLookingUp; // 0xAD
        Boolean UseLookAt; // 0xAE
        char pad_0xAF[0x1];
    }; // 0xB0
    static_assert(sizeof(ArmCollisionCameraTransformerEntityData) == 0xB0);
}
#pragma pack(pop)