// Object: CharacterStateConstantVelocityControllerData
// ClassId: 1336
// RuntimeId: 53818
// TypeInfo: 0x0000000144EF3CA0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Core/Vec3.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class CharacterStateConstantVelocityControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::FloatChannelData RotateTargetVelocityAboutXChannel; // 0x38
        Float32 ScaleRotationValue; // 0x40
        char pad_0x44[0xC];
        Core::Vec3 TargetVelocity; // 0x50
        Core::Vec3 Weights; // 0x60
        Float32 ClampRotationValueMin; // 0x70
        Float32 ClampRotationValueMax; // 0x74
        MotionMachineShared::FloatChannelData MovementPitchChannel; // 0x78
        MotionMachineShared::FloatChannelData MovementYawChannel; // 0x80
        MotionMachineShared::Vec3ChannelData CurrentVelocityChannel; // 0x88
        MotionMachineShared::TransformChannelData CurrentTransformChannel; // 0x90
        MotionMachineShared::Vec3ChannelData Acceleration; // 0x98
        Ant::AntRef AntController; // 0xA0
        Boolean FollowLookDirection; // 0xB4
        char pad_0xB5[0xB];
    }; // 0xC0
    static_assert(sizeof(CharacterStateConstantVelocityControllerData) == 0xC0);
}
#pragma pack(pop)