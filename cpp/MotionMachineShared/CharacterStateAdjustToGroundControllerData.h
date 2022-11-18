// Object: CharacterStateAdjustToGroundControllerData
// ClassId: 1322
// RuntimeId: 47438
// TypeInfo: 0x0000000144EF36A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/AdjustToGroundModeEnum.h"
#include "../Core/Vec2.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateAdjustToGroundControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::AdjustToGroundModeEnum AdjustToGroundMode; // 0x38
        Core::Vec2 RotFadeRange; // 0x3C
        Core::Vec2 RotSmoothTime; // 0x44
        char pad_0x4C[0x4];
        MotionMachineShared::Vec3ChannelData GroundNormal; // 0x50
        MotionMachineShared::TransformChannelData CurrentTransform; // 0x58
        MotionMachineShared::Vec3ChannelData AngularVelocity; // 0x60
        Ant::AntRef AntController; // 0x68
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(CharacterStateAdjustToGroundControllerData) == 0x80);
}
#pragma pack(pop)