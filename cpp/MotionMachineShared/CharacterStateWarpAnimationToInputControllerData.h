// Object: CharacterStateWarpAnimationToInputControllerData
// ClassId: 1367
// RuntimeId: 31309
// TypeInfo: 0x0000000144EFB830
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../MotionMachineShared/WarpClipTargetConnectFromInputData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class CharacterStateWarpAnimationToInputControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::CharacterStateBaseControllerData ExtendedClip; // 0x50
        char pad_0x58[0x8];
        Core::Vec3 Weights; // 0x60
        Core::LinearTransform LocalOffsetToTargetTransform; // 0x70
        MotionMachineShared::TransformChannelData PositionChannel; // 0xB0
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0xB8
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0xC0
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0xC8
        MotionMachineShared::TransformChannelData RootMotionChannel; // 0xD0
        MotionMachineShared::TransformChannelData ConnectChannel; // 0xD8
        MotionMachineShared::BoolChannelData HaveExternalTargetChannel; // 0xE0
        MotionMachineShared::TransformChannelData ExternalTargetChannel; // 0xE8
        MotionMachineShared::FloatChannelData DynamicBlendWeightChannel; // 0xF0
        MotionMachineShared::FloatChannelData DynamicBlendWeightTranslationChannel; // 0xF8
        Float32 StaticBlendWeight; // 0x100
        Float32 StaticBlendWeightTranslation; // 0x104
        MotionMachineShared::Vec3ChannelData WeightsChannel; // 0x108
        MotionMachineShared::WarpClipTargetConnectFromInputData TransformFromInput; // 0x110
        Boolean LimitToXZRotation; // 0x140
        Boolean WarpTranslationForInput; // 0x141
        Boolean WarpTranslationForExternalTarget; // 0x142
        Boolean UseLookAtForExternalRotation; // 0x143
        Boolean AllowAdjustTranslationOppositeToAuthoredVelocity; // 0x144
        Boolean StoreExternalAlignTransformOnInit; // 0x145
        char pad_0x146[0xA];
    }; // 0x150
    static_assert(sizeof(CharacterStateWarpAnimationToInputControllerData) == 0x150);
}
#pragma pack(pop)