// Object: ClientSoldierAgilityAffector
// ClassId: 10
// RuntimeId: 45557
// TypeInfo: 0x0000000144C44FA0
#include "../DiceShooter/ClientAffector.h"

namespace Casablanca {
    class ClientSoldierAgilityAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(ClientSoldierAgilityAffector) == 0x38);
}