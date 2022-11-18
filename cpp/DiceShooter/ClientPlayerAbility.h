// Object: ClientPlayerAbility
// ClassId: 8391
// RuntimeId: 47529
// TypeInfo: 0x0000000144DCD770
#include "../DiceShooter/PlayerAbility.h"

namespace DiceShooter {
    class ClientPlayerAbility : public DiceShooter::PlayerAbility {
        char pad_0x30[0xA0];
    }; // 0xD0
    static_assert(sizeof(ClientPlayerAbility) == 0xD0);
}