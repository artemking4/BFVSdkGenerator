// Object: ClientBasicPlayerAbility
// ClassId: 8393
// RuntimeId: 51687
// TypeInfo: 0x0000000144DCD8F0
#include "../DiceShooter/ClientCorrectedPlayerAbility.h"

namespace DiceShooter {
    class ClientBasicPlayerAbility : public DiceShooter::ClientCorrectedPlayerAbility {
        char pad_0x218[0x40];
    }; // 0x258
    static_assert(sizeof(ClientBasicPlayerAbility) == 0x258);
}