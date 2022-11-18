// Object: CharacterStateCheckStartVaultControllerData
// ClassId: 1330
// RuntimeId: 55290
// TypeInfo: 0x0000000144EF3A20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../MotionMachineShared/CheckStartVaultHeightProperties.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateCheckStartVaultControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::TransformChannelData CharacterTransform; // 0x50
        MotionMachineShared::BoolChannelData VaultRequestedChannel; // 0x58
        MotionMachineShared::FloatChannelData ThrottleChannel; // 0x60
        MotionMachineShared::FloatChannelData PitchChannel; // 0x68
        MotionMachineShared::FloatChannelData GroundDistanceChannel; // 0x70
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x78
        MotionMachineShared::BoolChannelData InAirChannel; // 0x80
        MotionMachineShared::BoolChannelData InWaterChannel; // 0x88
        MotionMachineShared::BoolChannelData SprintChannel; // 0x90
        MotionMachineShared::BoolChannelData StartVaultChannel; // 0x98
        MotionMachineShared::TransformChannelData VaultStartAlignTransformChannel; // 0xA0
        MotionMachineShared::FloatChannelData VaultEndFollowOffsetXChannel; // 0xA8
        MotionMachineShared::FloatChannelData VaultEndFollowOffsetYChannel; // 0xB0
        MotionMachineShared::FloatChannelData VaultEndFollowOffsetZChannel; // 0xB8
        MotionMachineShared::IntChannelData VaultTypeChannel; // 0xC0
        MotionMachineShared::IntChannelData PhysicsStateChannel; // 0xC8
        MotionMachineShared::FloatChannelData VaultStartHeightChannel; // 0xD0
        MotionMachineShared::FloatChannelData VaultEndHeightChannel; // 0xD8
        Int32 UpdateFrequency; // 0xE0
        char pad_0xE4[0x4];
        Array<MotionMachineShared::CheckStartVaultHeightProperties> HeightProperties; // 0xE8
        Float32 DetectDistance; // 0xF0
        Float32 DetectDistanceMoving; // 0xF4
        Float32 DetectDistanceVaultGrab; // 0xF8
        Float32 DetectDistanceMovingVaultGrab; // 0xFC
        Float32 VaultGrabMinGroundDistance; // 0x100
        Float32 VaultGrabMinFallSpeed; // 0x104
        Array<Int32> DisallowedPoses; // 0x108
        Array<Int32> DisallowedPhysicsStates; // 0x110
        Boolean AutoVault; // 0x118
        Boolean RequireInputRelease; // 0x119
        char pad_0x11A[0x6];
    }; // 0x120
    static_assert(sizeof(CharacterStateCheckStartVaultControllerData) == 0x120);
}
#pragma pack(pop)