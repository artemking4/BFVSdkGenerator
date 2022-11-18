// Object: ParachuteStateData
// ClassId: 1381
// RuntimeId: 18113
// TypeInfo: 0x0000000144F10000
#include "../Physics/CharacterStateData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class ParachuteStateData : public Physics::CharacterStateData {
        Float32 ParaDeployTime; // 0x20
        Float32 ThrottleVelocity; // 0x24
        Float32 StrafeVelocity; // 0x28
        Float32 AirControlGain; // 0x2C
        Float32 RotationalSpeed; // 0x30
        Float32 DescendSpeed; // 0x34
        Float32 StopGain; // 0x38
        Float32 DeployTime; // 0x3C
        Float32 TerminalVelocity; // 0x40
        Float32 ForwardDragCoefficient; // 0x44
        Float32 AngleOfAttack; // 0x48
        Float32 BankOffset; // 0x4C
        Float32 ThrottleOffset; // 0x50
        Float32 BrakeOffset; // 0x54
        Float32 MaxRollVelocity; // 0x58
        Float32 MaxPitchVelocity; // 0x5C
        Float32 MaxYawVelocity; // 0x60
        Boolean IsParachuteGlider; // 0x64
        Boolean UseAimYawToSteer; // 0x65
        char pad_0x66[0x2];
    }; // 0x68
    static_assert(sizeof(ParachuteStateData) == 0x68);
}
#pragma pack(pop)