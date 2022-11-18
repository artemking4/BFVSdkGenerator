// Object: CharacterStateCameraRelativeSteeringControllerData
// ClassId: 1328
// RuntimeId: 45378
// TypeInfo: 0x0000000144EF3520
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/HillModification.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Core/AudioCurve.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateCameraRelativeSteeringControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        MotionMachineShared::HillModification UpHillModification; // 0x4C
        MotionMachineShared::HillModification DownHillModification; // 0x58
        Float32 Velocity; // 0x64
        MotionMachineShared::FloatChannelData SpeedInput; // 0x68
        Float32 SprintTopSpeedMultiplier; // 0x70
        char pad_0x74[0x4];
        MotionMachineShared::FloatChannelData SprintTopSpeedMultiplierInput; // 0x78
        Float32 Gain; // 0x80
        char pad_0x84[0x4];
        Core::AudioCurve GainCurve; // 0x88
        Float32 GainDriftFactor; // 0x98
        Float32 SprintGain; // 0x9C
        Core::AudioCurve SprintGainCurve; // 0xA0
        Float32 StopGain; // 0xB0
        char pad_0xB4[0x4];
        Core::AudioCurve StopGainCurve; // 0xB8
        MotionMachineShared::BoolChannelData SprintingInput; // 0xC8
        Float32 StrafeScale; // 0xD0
        char pad_0xD4[0x4];
        MotionMachineShared::FloatChannelData ThrottleInput; // 0xD8
        Float32 ConstantThrottleInput; // 0xE0
        char pad_0xE4[0x4];
        MotionMachineShared::FloatChannelData StrafeInput; // 0xE8
        Float32 ConstantStrafeInput; // 0xF0
        char pad_0xF4[0x4];
        MotionMachineShared::Vec3ChannelData NormalChannel; // 0xF8
        MotionMachineShared::TransformChannelData PositionChannel; // 0x100
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x108
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0x110
        Boolean AllowStrafing; // 0x118
        char pad_0x119[0x7];
    }; // 0x120
    static_assert(sizeof(CharacterStateCameraRelativeSteeringControllerData) == 0x120);
}
#pragma pack(pop)