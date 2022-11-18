// Object: CharacterStatePairedClipControllerData
// ClassId: 1355
// RuntimeId: 25971
// TypeInfo: 0x0000000144EF34A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePairedClipControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0x50
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x58
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0x60
        MotionMachineShared::TransformChannelData PositionChannel; // 0x68
        MotionMachineShared::TransformChannelData ConnectChannel; // 0x70
        MotionMachineShared::TransformChannelData TargetConnectChannel; // 0x78
        MotionMachineShared::FloatChannelData BlendWeightChannel; // 0x80
    }; // 0x88
    static_assert(sizeof(CharacterStatePairedClipControllerData) == 0x88);
}
#pragma pack(pop)