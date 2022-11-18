// Object: ReceivedDamageModifierAffectorAsset
// ClassId: 295
// RuntimeId: 9348
// TypeInfo: 0x0000000144D51250
#include "../DiceShooterShared/AffectorAsset.h"
#include "../CasablancaShared/ReceivedDamageModifierAffectorAssetData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ReceivedDamageModifierAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<CasablancaShared::ReceivedDamageModifierAffectorAssetData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(ReceivedDamageModifierAffectorAsset) == 0x40);
}
#pragma pack(pop)