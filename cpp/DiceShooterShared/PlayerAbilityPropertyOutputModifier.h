// Object: PlayerAbilityPropertyOutputModifier
// ClassId: 4430
// RuntimeId: 62398
// TypeInfo: 0x0000000144DF7DC0
#include "../DiceShooterShared/PlayerAbilityModifier.h"
#include "../Global/Uint32.h"
#include "../DiceShooterShared/PlayerAbilityPropertyOutputModifierValue.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyOutputModifier : public DiceShooterShared::PlayerAbilityModifier {
        Uint32 OutputHash; // 0x20
        char pad_0x24[0x4];
        Array<DiceShooterShared::PlayerAbilityPropertyOutputModifierValue> Values; // 0x28
    }; // 0x30
    static_assert(sizeof(PlayerAbilityPropertyOutputModifier) == 0x30);
}
#pragma pack(pop)