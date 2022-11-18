// Object: ClientRemoveAffector
// ClassId: 9
// RuntimeId: 51173
// TypeInfo: 0x0000000144DD6730
#include "../DiceShooter/ClientAffector.h"

namespace DiceShooter {
    class ClientRemoveAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x8];
    }; // 0x30
    static_assert(sizeof(ClientRemoveAffector) == 0x30);
}