// Object: ServerBasicPlayerAbility
// ClassId: 8400
// RuntimeId: 22866
// TypeInfo: 0x0000000144DCD570
#include "../DiceShooter/ServerCorrectedPlayerAbility.h"

namespace DiceShooter {
    class ServerBasicPlayerAbility : public DiceShooter::ServerCorrectedPlayerAbility {
        char pad_0x38[0x48];
    }; // 0x80
    static_assert(sizeof(ServerBasicPlayerAbility) == 0x80);
}