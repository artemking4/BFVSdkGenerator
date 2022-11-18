// Object: CharacterStateApplyAccelerationFromInputControllerData
// ClassId: 1323
// RuntimeId: 16763
// TypeInfo: 0x0000000144EF3BA0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/CharacterStateMovementInputScaling.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/CharacterStateApplyAccelerationFromInputModification.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class CharacterStateApplyAccelerationFromInputControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::BoolChannelData EnabledChannel; // 0x50
        char pad_0x58[0x8];
        Core::Vec3 ReorientUpDefault; // 0x60
        MotionMachineShared::CharacterStateMovementInputScaling InputScaling; // 0x70
        Float32 SprintStrafeInputScale; // 0x9C
        Float32 Velocity; // 0xA0
        char pad_0xA4[0x4];
        Array<MotionMachineShared::CharacterStateApplyAccelerationFromInputModification> TopSpeedModifications; // 0xA8
        Array<MotionMachineShared::CharacterStateApplyAccelerationFromInputModification> StrafeInputScaleModifications; // 0xB0
        MotionMachineShared::FloatChannelData SpeedInput; // 0xB8
        MotionMachineShared::FloatChannelData ClampSpeedInput; // 0xC0
        Float32 SprintTopSpeedMultiplier; // 0xC8
        char pad_0xCC[0x4];
        MotionMachineShared::FloatChannelData SprintTopSpeedMultiplierInput; // 0xD0
        Float32 Gain; // 0xD8
        Float32 SprintGain; // 0xDC
        Float32 StopGain; // 0xE0
        char pad_0xE4[0x4];
        MotionMachineShared::BoolChannelData SprintingInput; // 0xE8
        MotionMachineShared::FloatChannelData ThrottleInput; // 0xF0
        Float32 ConstantThrottleInput; // 0xF8
        char pad_0xFC[0x4];
        MotionMachineShared::FloatChannelData StrafeInput; // 0x100
        Float32 ConstantStrafeInput; // 0x108
        char pad_0x10C[0x4];
        MotionMachineShared::Vec3ChannelData NormalChannel; // 0x110
        MotionMachineShared::TransformChannelData PositionChannel; // 0x118
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x120
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0x128
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0x130
        MotionMachineShared::FloatChannelData MovementYawChannel; // 0x138
        MotionMachineShared::FloatChannelData MovementPitchChannel; // 0x140
        MotionMachineShared::Vec3ChannelData ReorientUpChannel; // 0x148
        Float32 RotateWithYawStrength; // 0x150
        Boolean AllowReduceSpeedInCurrentDirection; // 0x154
        Boolean ReorientUpDirection; // 0x155
        char pad_0x156[0xA];
    }; // 0x160
    static_assert(sizeof(CharacterStateApplyAccelerationFromInputControllerData) == 0x160);
}
#pragma pack(pop)