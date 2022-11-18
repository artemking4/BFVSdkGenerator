// Object: IntChannelVariation
// ClassId: 4174
// RuntimeId: 46259
// TypeInfo: 0x0000000144DE8590
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/CharacterStatePublicIntChannelData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class IntChannelVariation : public Core::DataContainer {
        MotionMachineShared::CharacterStatePublicIntChannelData VariationChannel; // 0x18
        Int32 VariationValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(IntChannelVariation) == 0x28);
}
#pragma pack(pop)