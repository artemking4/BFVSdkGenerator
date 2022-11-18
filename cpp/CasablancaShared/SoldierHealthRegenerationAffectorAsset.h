// Object: SoldierHealthRegenerationAffectorAsset
// ClassId: 301
// RuntimeId: 36229
// TypeInfo: 0x0000000144D514D0
#include "../DiceShooterShared/VariableAffectorAsset.h"
#include "../CasablancaShared/SoldierHealthRegenerationAffectorData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SoldierHealthRegenerationAffectorAsset : public DiceShooterShared::VariableAffectorAsset {
        Array<CasablancaShared::SoldierHealthRegenerationAffectorData> RankData; // 0x40
    }; // 0x48
    static_assert(sizeof(SoldierHealthRegenerationAffectorAsset) == 0x48);
}
#pragma pack(pop)