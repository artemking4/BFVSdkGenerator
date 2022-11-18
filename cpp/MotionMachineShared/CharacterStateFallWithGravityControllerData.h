// Object: CharacterStateFallWithGravityControllerData
// ClassId: 1338
// RuntimeId: 19706
// TypeInfo: 0x0000000144EF3DA0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateFallWithGravityControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 Gravity; // 0x38
        Float32 Drag; // 0x3C
        Float32 DragXZCoefficient; // 0x40
        Float32 DragXZStartSpeed; // 0x44
        MotionMachineShared::Vec3ChannelData Acceleration; // 0x48
        MotionMachineShared::Vec3ChannelData Velocity; // 0x50
        Ant::AntRef AntController; // 0x58
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(CharacterStateFallWithGravityControllerData) == 0x70);
}
#pragma pack(pop)