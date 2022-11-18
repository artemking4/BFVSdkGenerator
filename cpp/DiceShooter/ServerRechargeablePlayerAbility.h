// Object: ServerRechargeablePlayerAbility
// ClassId: 8401
// RuntimeId: 58430
// TypeInfo: 0x0000000144DE1DF0
#include "../DiceShooter/ServerBasicPlayerAbility.h"

namespace DiceShooter {
    class ServerRechargeablePlayerAbility : public DiceShooter::ServerBasicPlayerAbility {
        char pad_0x80[0x18];
    }; // 0x98
    static_assert(sizeof(ServerRechargeablePlayerAbility) == 0x98);
}