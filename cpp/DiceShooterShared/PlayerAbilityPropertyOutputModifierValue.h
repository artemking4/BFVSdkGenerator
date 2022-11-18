// Object: PlayerAbilityPropertyOutputModifierValue
// ClassId: 4438
// RuntimeId: 49692
// TypeInfo: 0x0000000144DF80C0
#include "../Core/DataContainer.h"
#include "../DiceShooterShared/PlayerAbilityLevel.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyOutputModifierValue : public Core::DataContainer {
        DiceShooterShared::PlayerAbilityLevel MinAbilityLevel; // 0x18
        DiceShooterShared::PlayerAbilityLevel MaxAbilityLevel; // 0x1C
    }; // 0x20
    static_assert(sizeof(PlayerAbilityPropertyOutputModifierValue) == 0x20);
}
#pragma pack(pop)