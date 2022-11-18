// Object: ServerPlayerAbility
// ClassId: 8398
// RuntimeId: 51414
// TypeInfo: 0x0000000144DE1E70
#include "../DiceShooter/PlayerAbility.h"

namespace DiceShooter {
    class ServerPlayerAbility : public DiceShooter::PlayerAbility {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ServerPlayerAbility) == 0x38);
}