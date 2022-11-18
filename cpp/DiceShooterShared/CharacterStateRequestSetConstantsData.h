// Object: CharacterStateRequestSetConstantsData
// ClassId: 1401
// RuntimeId: 53728
// TypeInfo: 0x0000000144DE8290
#include "../DiceShooterShared/CharacterStateRequestDataBase.h"
#include "../DiceShooterShared/ChannelVariationList.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateRequestSetConstantsData : public DiceShooterShared::CharacterStateRequestDataBase {
        DiceShooterShared::ChannelVariationList VariationList; // 0x28
    }; // 0x50
    static_assert(sizeof(CharacterStateRequestSetConstantsData) == 0x50);
}
#pragma pack(pop)