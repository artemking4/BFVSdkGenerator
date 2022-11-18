// Object: ServerHealingAffector
// ClassId: 19
// RuntimeId: 48306
// TypeInfo: 0x0000000144CDB890
#include "../DiceShooter/ServerAffector.h"

namespace Casablanca {
    class ServerHealingAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x30];
    }; // 0xC0
    static_assert(sizeof(ServerHealingAffector) == 0xC0);
}