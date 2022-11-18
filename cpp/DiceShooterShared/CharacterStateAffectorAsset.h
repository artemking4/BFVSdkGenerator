// Object: CharacterStateAffectorAsset
// ClassId: 292
// RuntimeId: 9656
// TypeInfo: 0x0000000144DF3870
#include "../DiceShooterShared/AffectorAsset.h"
#include "../DiceShooterShared/CharacterStateAffectorData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<DiceShooterShared::CharacterStateAffectorData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(CharacterStateAffectorAsset) == 0x40);
}
#pragma pack(pop)