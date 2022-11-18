// Object: ServerCharacterStateAffector
// ClassId: 17
// RuntimeId: 32122
// TypeInfo: 0x0000000144DD65B0
#include "../DiceShooter/ServerAffector.h"

namespace DiceShooter {
    class ServerCharacterStateAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x10];
    }; // 0xA0
    static_assert(sizeof(ServerCharacterStateAffector) == 0xA0);
}