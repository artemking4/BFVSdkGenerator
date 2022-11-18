// Object: CharacterStatePoseInfo
// ClassId: 1386
// RuntimeId: 57719
// TypeInfo: 0x0000000144F10580
#include "../Core/DataContainer.h"
#include "../Physics/CharacterPoseType.h"
#include "../Global/Float32.h"
#include "../Physics/SpeedModifierData.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterStatePoseInfo : public Core::DataContainer {
        Physics::CharacterPoseType PoseType; // 0x18
        Float32 Velocity; // 0x1C
        Float32 ForwardBackwardAccelerationGain; // 0x20
        Float32 LeftRightAccelerationGain; // 0x24
        Float32 DecelerationGain; // 0x28
        Float32 DecelerationGain_TickRateMult; // 0x2C
        Float32 DecelerationGain_TickRatePower; // 0x30
        Float32 DirectionChangeAccelerationGain; // 0x34
        Float32 ForwardBackwardDirectionChangeAccelerationGain; // 0x38
        Float32 LeftRightDirectionChangeAccelerationGain; // 0x3C
        Float32 DirectionChangeThreshold; // 0x40
        Float32 SprintGain; // 0x44
        Float32 SprintMultiplier; // 0x48
        Physics::SpeedModifierData SpeedModifier; // 0x4C
        Float32 ShallowWaterMultiplier; // 0x5C
    }; // 0x60
    static_assert(sizeof(CharacterStatePoseInfo) == 0x60);
}
#pragma pack(pop)