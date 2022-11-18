// Object: CharacterStateParachuteControllerData
// ClassId: 1356
// RuntimeId: 50382
// TypeInfo: 0x0000000144EF3B20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateParachuteControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::BoolChannelData EnabledChannel; // 0x50
        MotionMachineShared::TransformChannelData TransformChannel; // 0x58
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x60
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0x68
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0x70
        MotionMachineShared::FloatChannelData InputLRChannel; // 0x78
        MotionMachineShared::FloatChannelData InputUDChannel; // 0x80
        Float32 Gravity; // 0x88
        Float32 TerminalVelocity; // 0x8C
        Float32 ForwardDragCoefficient; // 0x90
        Float32 BankOffset; // 0x94
        Float32 ThrottleOffset; // 0x98
        Float32 BrakeOffset; // 0x9C
        Float32 AngleOfAttack; // 0xA0
        Float32 MaxPitchVelocity; // 0xA4
        Float32 MaxRollVelocity; // 0xA8
        Float32 MaxYawVelocity; // 0xAC
        Float32 DeployTime; // 0xB0
        char pad_0xB4[0x4];
    }; // 0xB8
    static_assert(sizeof(CharacterStateParachuteControllerData) == 0xB8);
}
#pragma pack(pop)