// Object: ServerReceivedDamageModifierAffector
// ClassId: 20
// RuntimeId: 57283
// TypeInfo: 0x0000000144CDB810
#include "../DiceShooter/ServerAffector.h"

namespace Casablanca {
    class ServerReceivedDamageModifierAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x20];
    }; // 0xB0
    static_assert(sizeof(ServerReceivedDamageModifierAffector) == 0xB0);
}