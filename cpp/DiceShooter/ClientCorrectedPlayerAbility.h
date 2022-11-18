// Object: ClientCorrectedPlayerAbility
// ClassId: 8392
// RuntimeId: 21270
// TypeInfo: 0x0000000144DCD870
#include "../DiceShooter/ClientPlayerAbility.h"

namespace DiceShooter {
    class ClientCorrectedPlayerAbility : public DiceShooter::ClientPlayerAbility {
        char pad_0xD0[0x148];
    }; // 0x218
    static_assert(sizeof(ClientCorrectedPlayerAbility) == 0x218);
}