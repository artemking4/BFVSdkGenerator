// Object: ClientRechargeablePlayerAbility
// ClassId: 8394
// RuntimeId: 37921
// TypeInfo: 0x0000000144DCD6F0
#include "../DiceShooter/ClientBasicPlayerAbility.h"

namespace DiceShooter {
    class ClientRechargeablePlayerAbility : public DiceShooter::ClientBasicPlayerAbility {
        char pad_0x258[0x18];
    }; // 0x270
    static_assert(sizeof(ClientRechargeablePlayerAbility) == 0x270);
}