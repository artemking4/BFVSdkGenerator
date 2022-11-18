// Object: CharacterStateCheckStartClimbingControllerData
// ClassId: 1329
// RuntimeId: 61856
// TypeInfo: 0x0000000144EF3AA0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateCheckStartClimbingControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::BoolChannelData EnabledChannel; // 0x50
        MotionMachineShared::BoolChannelData ClimbingRequestedChannel; // 0x58
        MotionMachineShared::BoolChannelData StartClimbingChannel; // 0x60
        MotionMachineShared::TransformChannelData CharacterTransform; // 0x68
        MotionMachineShared::TransformChannelData LadderTransform; // 0x70
        MotionMachineShared::FloatChannelData LadderHeightChannel; // 0x78
        MotionMachineShared::FloatChannelData ThrottleChannel; // 0x80
        Float32 MaxDistToLadder; // 0x88
        Float32 MaxAngleToLadder; // 0x8C
        Float32 SearchHeight; // 0x90
        Boolean AutoClimb; // 0x94
        Boolean FrontOnly; // 0x95
        char pad_0x96[0x2];
    }; // 0x98
    static_assert(sizeof(CharacterStateCheckStartClimbingControllerData) == 0x98);
}
#pragma pack(pop)