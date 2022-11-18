// Object: PlayerAbilityModifierUnlockModifier
// ClassId: 4428
// RuntimeId: 42942
// TypeInfo: 0x0000000144DF7D40
#include "../DiceShooterShared/PlayerAbilityModifier.h"
#include "../Global/Uint32.h"
#include "../DiceShooterShared/PlayerAbilityLevel.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityModifierUnlockModifier : public DiceShooterShared::PlayerAbilityModifier {
        Uint32 UnlockId; // 0x20
        DiceShooterShared::PlayerAbilityLevel MinAbilityLevel; // 0x24
        DiceShooterShared::PlayerAbilityLevel MaxAbilityLevel; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(PlayerAbilityModifierUnlockModifier) == 0x30);
}
#pragma pack(pop)