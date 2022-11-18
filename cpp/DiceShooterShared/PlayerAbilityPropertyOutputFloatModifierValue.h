// Object: PlayerAbilityPropertyOutputFloatModifierValue
// ClassId: 4440
// RuntimeId: 5975
// TypeInfo: 0x0000000144DF7F40
#include "../DiceShooterShared/PlayerAbilityPropertyOutputModifierValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyOutputFloatModifierValue : public DiceShooterShared::PlayerAbilityPropertyOutputModifierValue {
        Float32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PlayerAbilityPropertyOutputFloatModifierValue) == 0x28);
}
#pragma pack(pop)