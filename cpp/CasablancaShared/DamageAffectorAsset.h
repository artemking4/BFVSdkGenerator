// Object: DamageAffectorAsset
// ClassId: 293
// RuntimeId: 64928
// TypeInfo: 0x0000000144D51350
#include "../DiceShooterShared/AffectorAsset.h"
#include "../CasablancaShared/DamageAffectorData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DamageAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<CasablancaShared::DamageAffectorData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(DamageAffectorAsset) == 0x40);
}
#pragma pack(pop)