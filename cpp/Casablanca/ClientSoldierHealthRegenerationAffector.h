// Object: ClientSoldierHealthRegenerationAffector
// ClassId: 11
// RuntimeId: 26053
// TypeInfo: 0x0000000144C44F20
#include "../DiceShooter/ClientAffector.h"

namespace Casablanca {
    class ClientSoldierHealthRegenerationAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x18];
    }; // 0x40
    static_assert(sizeof(ClientSoldierHealthRegenerationAffector) == 0x40);
}