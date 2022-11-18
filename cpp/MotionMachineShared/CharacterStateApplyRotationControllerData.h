// Object: CharacterStateApplyRotationControllerData
// ClassId: 1325
// RuntimeId: 8022
// TypeInfo: 0x0000000144EF35A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateApplyRotationControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 RotationSpeedYaw; // 0x38
        Float32 RotationSpeedPitch; // 0x3C
        Float32 RotationSpeedRoll; // 0x40
        Float32 DeltaYawSpeedScale; // 0x44
        Float32 DeltaPitchSpeedScale; // 0x48
        Float32 DeltaRollSpeedScale; // 0x4C
        MotionMachineShared::FloatChannelData Yaw; // 0x50
        MotionMachineShared::FloatChannelData YawRotationScale; // 0x58
        MotionMachineShared::FloatChannelData DeltaYaw; // 0x60
        MotionMachineShared::FloatChannelData Pitch; // 0x68
        MotionMachineShared::FloatChannelData PitchRotationScale; // 0x70
        MotionMachineShared::FloatChannelData DeltaPitch; // 0x78
        MotionMachineShared::FloatChannelData Roll; // 0x80
        MotionMachineShared::FloatChannelData RollRotationScale; // 0x88
        MotionMachineShared::FloatChannelData DeltaRoll; // 0x90
        MotionMachineShared::TransformChannelData CurrentTransform; // 0x98
        MotionMachineShared::Vec3ChannelData AngularVelocity; // 0xA0
        Ant::AntRef AntController; // 0xA8
        Boolean ReorientUp; // 0xBC
        char pad_0xBD[0x3];
    }; // 0xC0
    static_assert(sizeof(CharacterStateApplyRotationControllerData) == 0xC0);
}
#pragma pack(pop)