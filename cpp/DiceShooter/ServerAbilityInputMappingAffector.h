// Object: ServerAbilityInputMappingAffector
// ClassId: 15
// RuntimeId: 60351
// TypeInfo: 0x0000000144DD66B0
#include "../DiceShooter/ServerAffector.h"

namespace DiceShooter {
    class ServerAbilityInputMappingAffector : public DiceShooter::ServerAffector {
        char pad_0x90[0x10];
    }; // 0xA0
    static_assert(sizeof(ServerAbilityInputMappingAffector) == 0xA0);
}