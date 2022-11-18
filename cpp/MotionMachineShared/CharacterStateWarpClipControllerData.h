// Object: CharacterStateWarpClipControllerData
// ClassId: 1368
// RuntimeId: 2733
// TypeInfo: 0x0000000144EF4920
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/WarpClipTargetData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class CharacterStateWarpClipControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::CharacterStateBaseControllerData ExtendedClip; // 0x50
        char pad_0x58[0x8];
        Core::Vec3 StaticBlendWeightTranslation; // 0x60
        Core::Vec3 Weights; // 0x70
        Core::LinearTransform LocalOffsetToTargetTransform; // 0x80
        MotionMachineShared::TransformChannelData PositionChannel; // 0xC0
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0xC8
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0xD0
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0xD8
        MotionMachineShared::TransformChannelData RootMotionChannel; // 0xE0
        MotionMachineShared::TransformChannelData ConnectChannel; // 0xE8
        MotionMachineShared::BoolChannelData HaveTargetChannel; // 0xF0
        Array<MotionMachineShared::WarpClipTargetData> WarpClipTargets; // 0xF8
        Float32 StaticBlendWeight; // 0x100
        char pad_0x104[0x4];
        MotionMachineShared::Vec3ChannelData WeightsChannel; // 0x108
        MotionMachineShared::IntChannelData BlendIndexChannel; // 0x110
        MotionMachineShared::FloatChannelData DynamicBlendWeightRotationChannel; // 0x118
        MotionMachineShared::Vec3ChannelData DynamicBlendWeightTranslationChannel; // 0x120
        Boolean DisplaySubjectPose; // 0x128
        Boolean UseLookAtTargetOrientation; // 0x129
        Boolean AllowPitchRotationInLookAtTarget; // 0x12A
        Boolean UseTargetTranslation; // 0x12B
        Boolean AllowAdjustTranslationOppositeToAuthoredVelocity; // 0x12C
        Boolean UseFractionPerFrame; // 0x12D
        char pad_0x12E[0x2];
    }; // 0x130
    static_assert(sizeof(CharacterStateWarpClipControllerData) == 0x130);
}
#pragma pack(pop)