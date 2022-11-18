// Object: BoolChannelVariation
// ClassId: 1277
// RuntimeId: 17301
// TypeInfo: 0x0000000144DE8610
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/CharacterStatePublicBoolChannelData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class BoolChannelVariation : public Core::DataContainer {
        MotionMachineShared::CharacterStatePublicBoolChannelData VariationChannel; // 0x18
        Boolean VariationValue; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BoolChannelVariation) == 0x28);
}
#pragma pack(pop)