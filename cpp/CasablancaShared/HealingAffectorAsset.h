// Object: HealingAffectorAsset
// ClassId: 294
// RuntimeId: 7980
// TypeInfo: 0x0000000144D51450
#include "../DiceShooterShared/AffectorAsset.h"
#include "../CasablancaShared/HealingAffectorData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class HealingAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<CasablancaShared::HealingAffectorData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(HealingAffectorAsset) == 0x40);
}
#pragma pack(pop)