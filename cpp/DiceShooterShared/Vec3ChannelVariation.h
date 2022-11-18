// Object: Vec3ChannelVariation
// ClassId: 5560
// RuntimeId: 12947
// TypeInfo: 0x0000000144DE8490
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/CharacterStatePublicVec3ChannelData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class Vec3ChannelVariation : public Core::DataContainer {
        MotionMachineShared::CharacterStatePublicVec3ChannelData VariationChannel; // 0x18
        Core::Vec3 VariationValue; // 0x20
    }; // 0x30
    static_assert(sizeof(Vec3ChannelVariation) == 0x30);
}
#pragma pack(pop)