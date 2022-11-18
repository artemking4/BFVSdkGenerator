// Object: TransformChannelVariation
// ClassId: 5233
// RuntimeId: 11476
// TypeInfo: 0x0000000144DE8410
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/CharacterStatePublicTransformChannelData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class TransformChannelVariation : public Core::DataContainer {
        MotionMachineShared::CharacterStatePublicTransformChannelData VariationChannel; // 0x18
        Core::LinearTransform VariationValue; // 0x20
    }; // 0x60
    static_assert(sizeof(TransformChannelVariation) == 0x60);
}
#pragma pack(pop)