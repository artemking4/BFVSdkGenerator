// Object: ClientRetriggerablePlayerAbility
// ClassId: 8395
// RuntimeId: 3400
// TypeInfo: 0x0000000144DCD670
#include "../DiceShooter/ClientBasicPlayerAbility.h"

namespace DiceShooter {
    class ClientRetriggerablePlayerAbility : public DiceShooter::ClientBasicPlayerAbility {
        char pad_0x258[0x18];
    }; // 0x270
    static_assert(sizeof(ClientRetriggerablePlayerAbility) == 0x270);
}