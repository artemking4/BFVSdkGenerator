// Object: PlayerAbilityPropertyModifierChargeCountValue
// ClassId: 4435
// RuntimeId: 15635
// TypeInfo: 0x0000000144DF7AC0
#include "../DiceShooterShared/PlayerAbilityPropertyModifierValue.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyModifierChargeCountValue : public DiceShooterShared::PlayerAbilityPropertyModifierValue {
        Int32 ChargeCount; // 0x18
        Int32 StartChargeCount; // 0x1C
    }; // 0x20
    static_assert(sizeof(PlayerAbilityPropertyModifierChargeCountValue) == 0x20);
}
#pragma pack(pop)