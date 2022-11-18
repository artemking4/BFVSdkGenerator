// Object: CharacterStateApplyFrictionControllerData
// ClassId: 1324
// RuntimeId: 51306
// TypeInfo: 0x0000000144EF3D20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateApplyFrictionControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 DynamicFriction; // 0x38
        Float32 DistanceToGroundCutoff; // 0x3C
        Float32 Gravity; // 0x40
        char pad_0x44[0x4];
        MotionMachineShared::Vec3ChannelData Velocity; // 0x48
        MotionMachineShared::Vec3ChannelData GroundNormal; // 0x50
        MotionMachineShared::FloatChannelData DistanceToGround; // 0x58
        MotionMachineShared::FloatChannelData Friction; // 0x60
        MotionMachineShared::Vec3ChannelData Acceleration; // 0x68
        Ant::AntRef AntController; // 0x70
        char pad_0x84[0x4];
    }; // 0x88
    static_assert(sizeof(CharacterStateApplyFrictionControllerData) == 0x88);
}
#pragma pack(pop)