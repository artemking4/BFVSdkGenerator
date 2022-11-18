// Object: FloatChannelVariation
// ClassId: 1627
// RuntimeId: 61094
// TypeInfo: 0x0000000144DE8510
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/CharacterStatePublicFloatChannelData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class FloatChannelVariation : public Core::DataContainer {
        MotionMachineShared::CharacterStatePublicFloatChannelData VariationChannel; // 0x18
        Float32 VariationValue; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(FloatChannelVariation) == 0x28);
}
#pragma pack(pop)