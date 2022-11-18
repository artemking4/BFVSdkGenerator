// Object: ServerSoldierHealthRegenerationAffector
// ClassId: 23
// RuntimeId: 39349
// TypeInfo: 0x0000000144CDB690
#include "../DiceShooter/ServerAffector.h"

namespace Casablanca {
    class ServerSoldierHealthRegenerationAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x20];
    }; // 0xB0
    static_assert(sizeof(ServerSoldierHealthRegenerationAffector) == 0xB0);
}