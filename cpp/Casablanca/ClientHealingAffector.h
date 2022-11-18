// Object: ClientHealingAffector
// ClassId: 7
// RuntimeId: 29105
// TypeInfo: 0x0000000144C450A0
#include "../DiceShooter/ClientAffector.h"

namespace Casablanca {
    class ClientHealingAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x18];
    }; // 0x40
    static_assert(sizeof(ClientHealingAffector) == 0x40);
}