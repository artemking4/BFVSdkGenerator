// Object: PlayerAbilityPropertyModifier
// ClassId: 4429
// RuntimeId: 20914
// TypeInfo: 0x0000000144DF79C0
#include "../DiceShooterShared/PlayerAbilityModifier.h"
#include "../DiceShooterShared/PlayerAbilityPropertyModifierValue.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyModifier : public DiceShooterShared::PlayerAbilityModifier {
        Array<DiceShooterShared::PlayerAbilityPropertyModifierValue> Values; // 0x20
    }; // 0x28
    static_assert(sizeof(PlayerAbilityPropertyModifier) == 0x28);
}
#pragma pack(pop)