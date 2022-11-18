// Object: CharacterStateFluidDragAndBuoyancyControllerData
// ClassId: 1339
// RuntimeId: 60545
// TypeInfo: 0x0000000144EF3E20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Global/Float32.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateFluidDragAndBuoyancyControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::FloatChannelData DistanceFromFluidSurface; // 0x38
        MotionMachineShared::FloatChannelData FluidSurfaceSpeed; // 0x40
        Array<MotionMachineShared::BoolChannelData> EnabledChannels; // 0x48
        MotionMachineShared::Vec3ChannelData Acceleration; // 0x50
        MotionMachineShared::Vec3ChannelData Velocity; // 0x58
        Float32 BuoyancyCoefficient; // 0x60
        Float32 DragCoefficientLinear; // 0x64
        Float32 DragCoefficientQuadratic; // 0x68
        Float32 GravityCoefficient; // 0x6C
        Float32 ObjectHeight; // 0x70
        Float32 TargetOffset; // 0x74
        Float32 TargetOffsetVariance; // 0x78
        Float32 TargetOffsetVarianceFrequency; // 0x7C
        Ant::AntRef AntController; // 0x80
        char pad_0x94[0x4];
    }; // 0x98
    static_assert(sizeof(CharacterStateFluidDragAndBuoyancyControllerData) == 0x98);
}
#pragma pack(pop)