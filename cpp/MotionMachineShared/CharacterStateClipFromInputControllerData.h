// Object: CharacterStateClipFromInputControllerData
// ClassId: 1334
// RuntimeId: 54843
// TypeInfo: 0x0000000144EF48A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/ChannelSetData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../MotionMachineShared/CharacterStateKeyframedTransformChannelControllerData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class CharacterStateClipFromInputControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::ChannelSetData IncludedChannels; // 0x38
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x40
        char pad_0x48[0x8];
        Core::Vec3 DesiredLocalTargetIfNoInputOrVelocity; // 0x50
        Core::Vec3 Weights; // 0x60
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0x70
        MotionMachineShared::TransformChannelData PosAndRotChannel; // 0x78
        MotionMachineShared::TransformChannelData TrajectoryChannel; // 0x80
        MotionMachineShared::FloatChannelData ThrottleChannel; // 0x88
        MotionMachineShared::FloatChannelData StrafeChannel; // 0x90
        MotionMachineShared::FloatChannelData AimYawChannel; // 0x98
        MotionMachineShared::FloatChannelData AimPitchChannel; // 0xA0
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0xA8
        MotionMachineShared::IntChannelData ChosenClipIndexChannel; // 0xB0
        Array<MotionMachineShared::CharacterStateKeyframedTransformChannelControllerData> ChildControllerExtractedInfo; // 0xB8
        Float32 ProjectedDistance; // 0xC0
        Float32 SteerAnimatableFactor; // 0xC4
        Float32 AngleInfluenceMultiplier; // 0xC8
        Float32 EndPositionInfluenceMultiplier; // 0xCC
        MotionMachineShared::Vec3ChannelData WeightsChannel; // 0xD0
        Ant::AntRef AntController; // 0xD8
        Boolean DisplaySubjectPose; // 0xEC
        Boolean ZeroYTargetVelocityInCompensation; // 0xED
        Boolean AdjustDirection; // 0xEE
        Boolean DriveAcceleration; // 0xEF
    }; // 0xF0
    static_assert(sizeof(CharacterStateClipFromInputControllerData) == 0xF0);
}
#pragma pack(pop)