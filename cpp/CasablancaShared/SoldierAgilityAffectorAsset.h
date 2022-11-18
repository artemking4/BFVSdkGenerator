// Object: SoldierAgilityAffectorAsset
// ClassId: 297
// RuntimeId: 8075
// TypeInfo: 0x0000000144D511D0
#include "../DiceShooterShared/AffectorAsset.h"
#include "../CasablancaShared/SoldierAgilityAffectorData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierAgilityAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<CasablancaShared::SoldierAgilityAffectorData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(SoldierAgilityAffectorAsset) == 0x40);
}
#pragma pack(pop)