// Object: CharacterStateJetpackControllerData
// ClassId: 1320
// RuntimeId: 20963
// TypeInfo: 0x0000000144EF3720
#include "../MotionMachineShared/AirControlCapableControllerData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateJetpackControllerData : public MotionMachineShared::AirControlCapableControllerData {
        Float32 MinActiveTime; // 0x80
        Float32 MaxActiveTime; // 0x84
        Float32 MinimumTimeBeforeLand; // 0x88
        Float32 TargetVelocityXZWhenLanding; // 0x8C
        Float32 BrakeThrustY; // 0x90
        Float32 BrakeThrustXZ; // 0x94
        Float32 TargetVelocityXZWhenFlying; // 0x98
        Float32 TargetVelocityYWhenFlying; // 0x9C
        Float32 MaxHeightOverGround; // 0xA0
        char pad_0xA4[0x4];
        MotionMachineShared::TransformChannelData CharacterTransform; // 0xA8
        MotionMachineShared::Vec3ChannelData CurrentVelocity; // 0xB0
        MotionMachineShared::FloatChannelData ThrustInput; // 0xB8
        MotionMachineShared::FloatChannelData ThrottleInput; // 0xC0
        MotionMachineShared::FloatChannelData StrafeInput; // 0xC8
        MotionMachineShared::BoolChannelData IsOnGround; // 0xD0
        MotionMachineShared::FloatChannelData DistanceFromGround; // 0xD8
        MotionMachineShared::BoolChannelData JetpackActive; // 0xE0
        MotionMachineShared::BoolChannelData JetpackFinished; // 0xE8
        MotionMachineShared::IntChannelData JetpackStateChannel; // 0xF0
        MotionMachineShared::FloatChannelData HeightLimitChannel; // 0xF8
    }; // 0x100
    static_assert(sizeof(CharacterStateJetpackControllerData) == 0x100);
}
#pragma pack(pop)