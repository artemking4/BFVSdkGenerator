// Object: RemoveAffectorAsset
// ClassId: 296
// RuntimeId: 19977
// TypeInfo: 0x0000000144DF38F0
#include "../DiceShooterShared/AffectorAsset.h"
#include "../DiceShooterShared/RemoveAffectorData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class RemoveAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<DiceShooterShared::RemoveAffectorData> RankData; // 0x38
    }; // 0x40
    static_assert(sizeof(RemoveAffectorAsset) == 0x40);
}
#pragma pack(pop)