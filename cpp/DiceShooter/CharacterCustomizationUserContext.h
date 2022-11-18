// Object: CharacterCustomizationUserContext
// ClassId: 8728
// RuntimeId: 61024
// TypeInfo: 0x0000000144DD0430
#include "../GameCommon/UserSpawnContext.h"

namespace DiceShooter {
    class CharacterCustomizationUserContext : public GameCommon::UserSpawnContext {
        char pad_0x10[0xC18];
    }; // 0xC28
    static_assert(sizeof(CharacterCustomizationUserContext) == 0xC28);
}