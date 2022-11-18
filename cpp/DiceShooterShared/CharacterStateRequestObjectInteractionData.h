// Object: CharacterStateRequestObjectInteractionData
// ClassId: 1400
// RuntimeId: 25122
// TypeInfo: 0x0000000144DE8310
#include "../DiceShooterShared/CharacterStateRequestDataBase.h"
#include "../MotionMachineShared/CharacterStatePublicBoolChannelData.h"
#include "../MotionMachineShared/CharacterStatePublicTransformChannelData.h"
#include "../DiceShooterShared/ChannelVariationList.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateRequestObjectInteractionData : public DiceShooterShared::CharacterStateRequestDataBase {
        MotionMachineShared::CharacterStatePublicBoolChannelData HaveTargetChannel; // 0x28
        MotionMachineShared::CharacterStatePublicTransformChannelData TransformChannelToSet; // 0x30
        MotionMachineShared::CharacterStatePublicBoolChannelData TriggerToSet; // 0x38
        DiceShooterShared::ChannelVariationList VariationList; // 0x40
    }; // 0x68
    static_assert(sizeof(CharacterStateRequestObjectInteractionData) == 0x68);
}
#pragma pack(pop)