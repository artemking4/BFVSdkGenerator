// Object: ServerRemoveAffector
// ClassId: 21
// RuntimeId: 60570
// TypeInfo: 0x0000000144DD6530
#include "../DiceShooter/ServerAffector.h"

namespace DiceShooter {
    class ServerRemoveAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x10];
    }; // 0xA0
    static_assert(sizeof(ServerRemoveAffector) == 0xA0);
}