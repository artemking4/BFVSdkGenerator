// Object: ServerArmorAffector
// ClassId: 16
// RuntimeId: 12327
// TypeInfo: 0x0000000144CDB990
#include "../DiceShooter/ServerAffector.h"

namespace Casablanca {
    class ServerArmorAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x30];
    }; // 0xC0
    static_assert(sizeof(ServerArmorAffector) == 0xC0);
}