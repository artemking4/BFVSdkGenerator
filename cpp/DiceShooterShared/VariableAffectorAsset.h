// Object: VariableAffectorAsset
// ClassId: 300
// RuntimeId: 45993
// TypeInfo: 0x0000000144DF39F0
#include "../DiceShooterShared/AffectorAsset.h"
#include "../DiceShooterShared/AffectorVariable.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class VariableAffectorAsset : public DiceShooterShared::AffectorAsset {
        DiceShooterShared::AffectorVariable Variable; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(VariableAffectorAsset) == 0x40);
}
#pragma pack(pop)