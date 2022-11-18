// Object: PlayerAbilityPropertyModifierRechargeValue
// ClassId: 4436
// RuntimeId: 59156
// TypeInfo: 0x0000000144DF7C40
#include "../DiceShooterShared/PlayerAbilityPropertyModifierValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyModifierRechargeValue : public DiceShooterShared::PlayerAbilityPropertyModifierValue {
        Float32 RechargeTime; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PlayerAbilityPropertyModifierRechargeValue) == 0x20);
}
#pragma pack(pop)