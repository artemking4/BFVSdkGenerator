// Object: ClientArmorAffector
// ClassId: 4
// RuntimeId: 19483
// TypeInfo: 0x0000000144C451A0
#include "../DiceShooter/ClientAffector.h"

namespace Casablanca {
    class ClientArmorAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x10];
    }; // 0x38
    static_assert(sizeof(ClientArmorAffector) == 0x38);
}