// Object: AbilityInputMappingAffectorAsset
// ClassId: 289
// RuntimeId: 63903
// TypeInfo: 0x0000000144DF37F0
#include "../DiceShooterShared/AffectorAsset.h"
#include "../DiceShooterShared/PlayerAbilityEntryInputContainer.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AbilityInputMappingAffectorAsset : public DiceShooterShared::AffectorAsset {
        Array<DiceShooterShared::PlayerAbilityEntryInputContainer> EntryInputActionMap; // 0x38
    }; // 0x40
    static_assert(sizeof(AbilityInputMappingAffectorAsset) == 0x40);
}
#pragma pack(pop)