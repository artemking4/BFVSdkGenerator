// Object: CharacterStateClimbingControllerData
// ClassId: 1332
// RuntimeId: 61936
// TypeInfo: 0x0000000144EF39A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateClimbingControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::BoolChannelData ClimbingRequestedChannel; // 0x50
        MotionMachineShared::FloatChannelData ClimbingInputChannel; // 0x58
        MotionMachineShared::BoolChannelData SlideDownChannel; // 0x60
        MotionMachineShared::BoolChannelData JumpInputChannel; // 0x68
        MotionMachineShared::BoolChannelData StopClimbingChannel; // 0x70
        MotionMachineShared::BoolChannelData JumpFromClimbChannel; // 0x78
        MotionMachineShared::TransformChannelData CharacterTransform; // 0x80
        MotionMachineShared::TransformChannelData AITrajectory; // 0x88
        MotionMachineShared::TransformChannelData Connect; // 0x90
        MotionMachineShared::TransformChannelData LadderTransform; // 0x98
        MotionMachineShared::FloatChannelData LadderHeightChannel; // 0xA0
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0xA8
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0xB0
        Float32 SnapToLadderSpeed; // 0xB8
        Float32 ClimbSpeed; // 0xBC
        Boolean AlignWithLadder; // 0xC0
        char pad_0xC1[0x7];
    }; // 0xC8
    static_assert(sizeof(CharacterStateClimbingControllerData) == 0xC8);
}
#pragma pack(pop)