// Object: ServerDamageAffector
// ClassId: 18
// RuntimeId: 34043
// TypeInfo: 0x0000000144CDB910
#include "../DiceShooter/ServerAffector.h"

namespace Casablanca {
    class ServerDamageAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x50];
    }; // 0xE0
    static_assert(sizeof(ServerDamageAffector) == 0xE0);
}