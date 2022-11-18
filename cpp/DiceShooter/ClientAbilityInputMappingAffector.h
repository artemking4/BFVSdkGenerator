// Object: ClientAbilityInputMappingAffector
// ClassId: 3
// RuntimeId: 27499
// TypeInfo: 0x0000000144DD68B0
#include "../DiceShooter/ClientAffector.h"

namespace DiceShooter {
    class ClientAbilityInputMappingAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x18];
    }; // 0x40
    static_assert(sizeof(ClientAbilityInputMappingAffector) == 0x40);
}