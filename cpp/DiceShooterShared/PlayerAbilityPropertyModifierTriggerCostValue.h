// Object: PlayerAbilityPropertyModifierTriggerCostValue
// ClassId: 4437
// RuntimeId: 5070
// TypeInfo: 0x0000000144DF7A40
#include "../DiceShooterShared/PlayerAbilityPropertyModifierValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyModifierTriggerCostValue : public DiceShooterShared::PlayerAbilityPropertyModifierValue {
        Float32 TriggerCost; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PlayerAbilityPropertyModifierTriggerCostValue) == 0x20);
}
#pragma pack(pop)