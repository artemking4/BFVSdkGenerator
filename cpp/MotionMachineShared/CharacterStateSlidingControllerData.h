// Object: CharacterStateSlidingControllerData
// ClassId: 1362
// RuntimeId: 52401
// TypeInfo: 0x0000000144EF38A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateSlidingControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 HorizontalInputScale; // 0x38
        Float32 GravityScale; // 0x3C
        Float32 Velocity; // 0x40
        Float32 Gain; // 0x44
        Ant::AntRef AntController; // 0x48
        Float32 CharacterSpringScale; // 0x5C
        Float32 AllowedDistanceFromGround; // 0x60
        char pad_0x64[0x4];
        MotionMachineShared::FloatChannelData ThrottleInput; // 0x68
        MotionMachineShared::FloatChannelData StrafeInput; // 0x70
        MotionMachineShared::FloatChannelData DistanceFromGround; // 0x78
        MotionMachineShared::Vec3ChannelData NormalChannel; // 0x80
        MotionMachineShared::TransformChannelData PositionChannel; // 0x88
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x90
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0x98
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0xA0
        MotionMachineShared::FloatChannelData MovementYawChannel; // 0xA8
        Float32 RotateWithYawStrength; // 0xB0
        Float32 Friction; // 0xB4
    }; // 0xB8
    static_assert(sizeof(CharacterStateSlidingControllerData) == 0xB8);
}
#pragma pack(pop)