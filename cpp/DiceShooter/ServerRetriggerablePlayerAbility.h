// Object: ServerRetriggerablePlayerAbility
// ClassId: 8402
// RuntimeId: 64876
// TypeInfo: 0x0000000144DE1D70
#include "../DiceShooter/ServerBasicPlayerAbility.h"

namespace DiceShooter {
    class ServerRetriggerablePlayerAbility : public DiceShooter::ServerBasicPlayerAbility {
        char pad_0x80[0x18];
    }; // 0x98
    static_assert(sizeof(ServerRetriggerablePlayerAbility) == 0x98);
}