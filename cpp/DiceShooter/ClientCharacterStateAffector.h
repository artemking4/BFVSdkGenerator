// Object: ClientCharacterStateAffector
// ClassId: 5
// RuntimeId: 47415
// TypeInfo: 0x0000000144DD67B0
#include "../DiceShooter/ClientAffector.h"

namespace DiceShooter {
    class ClientCharacterStateAffector : public DiceShooter::ClientAffector {
        char pad_0x28[0x8];
    }; // 0x30
    static_assert(sizeof(ClientCharacterStateAffector) == 0x30);
}