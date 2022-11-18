// Object: PlayerAbilityPropertyOutputIntModifierValue
// ClassId: 4441
// RuntimeId: 54185
// TypeInfo: 0x0000000144DF7EC0
#include "../DiceShooterShared/PlayerAbilityPropertyOutputModifierValue.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyOutputIntModifierValue : public DiceShooterShared::PlayerAbilityPropertyOutputModifierValue {
        Int32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PlayerAbilityPropertyOutputIntModifierValue) == 0x28);
}
#pragma pack(pop)