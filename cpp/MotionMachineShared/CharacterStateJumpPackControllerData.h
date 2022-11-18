// Object: CharacterStateJumpPackControllerData
// ClassId: 1321
// RuntimeId: 26799
// TypeInfo: 0x0000000144EF37A0
#include "../MotionMachineShared/AirControlCapableControllerData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateJumpPackControllerData : public MotionMachineShared::AirControlCapableControllerData {
        Float32 MinActiveTime; // 0x80
        Float32 MaxActiveTime; // 0x84
        Float32 AccelerateTime; // 0x88
        Float32 MaxAccelerateTime; // 0x8C
        Float32 MinimumTimeBeforeLand; // 0x90
        Float32 StartBrakeTimeY; // 0x94
        Float32 TargetVelocityYWhenLanding; // 0x98
        Float32 BrakeThrustY; // 0x9C
        Float32 StartBrakeTimeXZ; // 0xA0
        Float32 TargetVelocityXZWhenLanding; // 0xA4
        Float32 BrakeThrustXZ; // 0xA8
        char pad_0xAC[0x4];
        MotionMachineShared::TransformChannelData CharacterTransform; // 0xB0
        MotionMachineShared::Vec3ChannelData CurrentVelocity; // 0xB8
        MotionMachineShared::FloatChannelData ThrottleInput; // 0xC0
        MotionMachineShared::FloatChannelData StrafeInput; // 0xC8
        MotionMachineShared::BoolChannelData IsOnGround; // 0xD0
        MotionMachineShared::FloatChannelData DistanceFromGround; // 0xD8
        MotionMachineShared::BoolChannelData JetpackActive; // 0xE0
        MotionMachineShared::BoolChannelData JetpackFinished; // 0xE8
        MotionMachineShared::IntChannelData JetpackStateChannel; // 0xF0
        Boolean ActivateOnGroundOnly; // 0xF8
        Boolean ResetYVelocityOnActivation; // 0xF9
        char pad_0xFA[0x6];
    }; // 0x100
    static_assert(sizeof(CharacterStateJumpPackControllerData) == 0x100);
}
#pragma pack(pop)