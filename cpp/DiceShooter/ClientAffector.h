// Object: ClientAffector
// ClassId: 2
// RuntimeId: 35888
// TypeInfo: 0x0000000144DD6830
#include "../DiceShooter/Affector.h"

namespace DiceShooter {
    class ClientAffector : public DiceShooter::Affector {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(ClientAffector) == 0x28);
}