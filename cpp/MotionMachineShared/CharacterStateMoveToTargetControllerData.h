// Object: CharacterStateMoveToTargetControllerData
// ClassId: 1353
// RuntimeId: 24875
// TypeInfo: 0x0000000144EF3920
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/MoveToControllerType.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateMoveToTargetControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::MoveToControllerType MovementType; // 0x38
        Float32 DistanceTolerance; // 0x3C
        Float32 Velocity; // 0x40
        char pad_0x44[0x4];
        MotionMachineShared::FloatChannelData SpeedInput; // 0x48
        Float32 TimeToTarget; // 0x50
        Float32 PauseTimeAfterMove; // 0x54
        Float32 SlowDownFactorInPause; // 0x58
        char pad_0x5C[0x4];
        MotionMachineShared::FloatChannelData TimeInput; // 0x60
        Ant::AntRef AntController; // 0x68
        char pad_0x7C[0x4];
        MotionMachineShared::Vec3ChannelData TargetPositionInput; // 0x80
        MotionMachineShared::TransformChannelData TargetTransformInput; // 0x88
        MotionMachineShared::BoolChannelData ReachedTargetOutput; // 0x90
        MotionMachineShared::TransformChannelData PositionChannel; // 0x98
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0xA0
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0xA8
    }; // 0xB0
    static_assert(sizeof(CharacterStateMoveToTargetControllerData) == 0xB0);
}
#pragma pack(pop)