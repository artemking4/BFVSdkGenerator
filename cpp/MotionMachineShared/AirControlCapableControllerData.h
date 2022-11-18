// Object: AirControlCapableControllerData
// ClassId: 1319
// RuntimeId: 54311
// TypeInfo: 0x0000000144EF3820
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/DSJetpackMovementMode.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Ant/AntRef.h"

namespace MotionMachineShared {
    class AirControlCapableControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 ForwardThrust; // 0x38
        Float32 UpThrust; // 0x3C
        Float32 ExtraUpThrustFromFalling; // 0x40
        Float32 AirControlModifierForward; // 0x44
        Float32 AirControlModifierBackward; // 0x48
        Float32 AirControlModifierStrafe; // 0x4C
        MotionMachineShared::DSJetpackMovementMode MovementMode; // 0x50
        char pad_0x54[0x4];
        MotionMachineShared::Vec3ChannelData Acceleration; // 0x58
        MotionMachineShared::FloatChannelData AimerYawInput; // 0x60
        Ant::AntRef AntController; // 0x68
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(AirControlCapableControllerData) == 0x80);
}