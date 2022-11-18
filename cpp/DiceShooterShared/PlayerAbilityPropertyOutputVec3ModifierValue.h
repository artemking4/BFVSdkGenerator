// Object: PlayerAbilityPropertyOutputVec3ModifierValue
// ClassId: 4442
// RuntimeId: 8951
// TypeInfo: 0x0000000144DF7FC0
#include "../DiceShooterShared/PlayerAbilityPropertyOutputModifierValue.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class PlayerAbilityPropertyOutputVec3ModifierValue : public DiceShooterShared::PlayerAbilityPropertyOutputModifierValue {
        Core::Vec3 Value; // 0x20
    }; // 0x30
    static_assert(sizeof(PlayerAbilityPropertyOutputVec3ModifierValue) == 0x30);
}
#pragma pack(pop)