// Object: CharacterStateFollowGroundControllerData
// ClassId: 1340
// RuntimeId: 29133
// TypeInfo: 0x0000000144EF3EA0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateFollowGroundControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Float32 CharacterSpringScaleFirstFrame; // 0x38
        Float32 CharacterSpringScaleMovingUnderTerrain; // 0x3C
        Float32 CharacterSpringScaleMovingOverTerrain; // 0x40
        Float32 CharacterSpringScaleStill; // 0x44
        Float32 FallWithGravityDistanceFromGround; // 0x48
        Float32 GravityWhenFalling; // 0x4C
        Float32 TargetOffset; // 0x50
        Float32 ClampDistanceToGroundMin; // 0x54
        Float32 ClampDistanceToGroundMax; // 0x58
        char pad_0x5C[0x4];
        MotionMachineShared::FloatChannelData DistanceFromGround; // 0x60
        Array<MotionMachineShared::BoolChannelData> EnabledChannels; // 0x68
        MotionMachineShared::Vec3ChannelData Acceleration; // 0x70
        MotionMachineShared::Vec3ChannelData Velocity; // 0x78
        MotionMachineShared::FloatChannelData ThrottleInput; // 0x80
        MotionMachineShared::FloatChannelData StrafeInput; // 0x88
        Ant::AntRef AntController; // 0x90
        char pad_0xA4[0x4];
    }; // 0xA8
    static_assert(sizeof(CharacterStateFollowGroundControllerData) == 0xA8);
}
#pragma pack(pop)