// Object: ArmorAffectorAsset
// ClassId: 290
// RuntimeId: 38474
// TypeInfo: 0x0000000144D513D0
#include "../DiceShooterShared/AffectorAsset.h"
#include "../CasablancaShared/ArmorAffectorData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ArmorAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<CasablancaShared::ArmorAffectorData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(ArmorAffectorAsset) == 0x40);
}
#pragma pack(pop)