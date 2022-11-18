// Object: CharacterStateDynamicAvoidanceData
// ClassId: 1385
// RuntimeId: 46259
// TypeInfo: 0x0000000144EFAA30
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateDynamicAvoidanceData : public Core::DataContainer {
        MotionMachineShared::BoolChannelData EnableDynamicAvoidanceChannel; // 0x18
        MotionMachineShared::BoolChannelData RejectHardCollisionsWithNonAICharactersChannel; // 0x20
        MotionMachineShared::TransformChannelData PositionChannel; // 0x28
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x30
        MotionMachineShared::Vec3ChannelData AccelerationChannel; // 0x38
        MotionMachineShared::FloatChannelData ThrottleChannel; // 0x40
        MotionMachineShared::FloatChannelData StrafeChannel; // 0x48
        Float32 SeparationVelocityStill; // 0x50
        Float32 SeparationDistanceStill; // 0x54
        Float32 SeparationVelocityMoving; // 0x58
        Float32 SeparationDistanceMoving; // 0x5C
        Float32 RelativeVelocityLimitForMovingSeparation; // 0x60
        Boolean ResolveClippingWhileMoving; // 0x64
        Boolean AdjustSidewaysToLimitClipping; // 0x65
        char pad_0x66[0x2];
    }; // 0x68
    static_assert(sizeof(CharacterStateDynamicAvoidanceData) == 0x68);
}
#pragma pack(pop)