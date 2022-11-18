// Object: ClientReceivedDamageModifierAffector
// ClassId: 8
// RuntimeId: 7589
// TypeInfo: 0x0000000144C45020
#include "../DiceShooter/ClientAffector.h"

namespace Casablanca {
    class ClientReceivedDamageModifierAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x18];
    }; // 0x40
    static_assert(sizeof(ClientReceivedDamageModifierAffector) == 0x40);
}