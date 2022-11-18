// Object: CharacterStatePoseControllerData
// ClassId: 1358
// RuntimeId: 44245
// TypeInfo: 0x0000000144EF3FA0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Physics/CharacterPoseData.h"
#include "../Physics/CharacterStatePoseInfo.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePoseControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<Physics::CharacterPoseData> Poses; // 0x38
        Array<Physics::CharacterStatePoseInfo> PoseInfos; // 0x40
        MotionMachineShared::BoolChannelData Sprinting; // 0x48
        MotionMachineShared::IntChannelData DesiredPose; // 0x50
        MotionMachineShared::BoolChannelData OverrideDesiredPoseWithStand; // 0x58
        MotionMachineShared::IntChannelData CurrentPose; // 0x60
        MotionMachineShared::IntChannelData ChangingToPose; // 0x68
        MotionMachineShared::FloatChannelData StepHeight; // 0x70
        MotionMachineShared::FloatChannelData MaxSpeed; // 0x78
        MotionMachineShared::Vec3ChannelData LocalEyePositionChannel; // 0x80
        Ant::AntRef AntController; // 0x88
        Boolean AllowPoseChangeDuringTransition; // 0x9C
        char pad_0x9D[0x3];
    }; // 0xA0
    static_assert(sizeof(CharacterStatePoseControllerData) == 0xA0);
}
#pragma pack(pop)