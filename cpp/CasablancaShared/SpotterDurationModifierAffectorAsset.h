// Object: SpotterDurationModifierAffectorAsset
// ClassId: 299
// RuntimeId: 33858
// TypeInfo: 0x0000000144D512D0
#include "../DiceShooterShared/AffectorAsset.h"
#include "../CasablancaShared/SpotterDurationModifierAffectorData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpotterDurationModifierAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<CasablancaShared::SpotterDurationModifierAffectorData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(SpotterDurationModifierAffectorAsset) == 0x40);
}
#pragma pack(pop)