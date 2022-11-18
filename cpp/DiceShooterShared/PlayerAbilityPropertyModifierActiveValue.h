// Object: PlayerAbilityPropertyModifierActiveValue
// ClassId: 4434
// RuntimeId: 64152
// TypeInfo: 0x0000000144DF7BC0
#include "../DiceShooterShared/PlayerAbilityPropertyModifierValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyModifierActiveValue : public DiceShooterShared::PlayerAbilityPropertyModifierValue {
        Float32 ActiveTime; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PlayerAbilityPropertyModifierActiveValue) == 0x20);
}
#pragma pack(pop)