// Object: PlayerAbilityPropertyModifierActivationValue
// ClassId: 4433
// RuntimeId: 63879
// TypeInfo: 0x0000000144DF7B40
#include "../DiceShooterShared/PlayerAbilityPropertyModifierValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyModifierActivationValue : public DiceShooterShared::PlayerAbilityPropertyModifierValue {
        Float32 ActivationTime; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PlayerAbilityPropertyModifierActivationValue) == 0x20);
}
#pragma pack(pop)