// Object: ServerSoldierAgilityAffector
// ClassId: 22
// RuntimeId: 3881
// TypeInfo: 0x0000000144CDB790
#include "../DiceShooter/ServerAffector.h"

namespace Casablanca {
    class ServerSoldierAgilityAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x20];
    }; // 0xB0
    static_assert(sizeof(ServerSoldierAgilityAffector) == 0xB0);
}