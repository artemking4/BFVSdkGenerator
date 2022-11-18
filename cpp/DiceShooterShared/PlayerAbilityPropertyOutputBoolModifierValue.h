// Object: PlayerAbilityPropertyOutputBoolModifierValue
// ClassId: 4439
// RuntimeId: 57064
// TypeInfo: 0x0000000144DF8040
#include "../DiceShooterShared/PlayerAbilityPropertyOutputModifierValue.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyOutputBoolModifierValue : public DiceShooterShared::PlayerAbilityPropertyOutputModifierValue {
        Boolean Value; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(PlayerAbilityPropertyOutputBoolModifierValue) == 0x28);
}
#pragma pack(pop)