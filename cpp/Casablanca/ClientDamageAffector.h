// Object: ClientDamageAffector
// ClassId: 6
// RuntimeId: 50602
// TypeInfo: 0x0000000144C45120
#include "../DiceShooter/ClientAffector.h"

namespace Casablanca {
    class ClientDamageAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x20];
    }; // 0x48
    static_assert(sizeof(ClientDamageAffector) == 0x48);
}