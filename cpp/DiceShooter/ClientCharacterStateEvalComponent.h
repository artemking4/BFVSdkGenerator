// Object: ClientCharacterStateEvalComponent
// ClassId: 5835
// RuntimeId: 35910
// TypeInfo: 0x0000000144DCBE60
#include "../Soldier/ClientExternalCharacterStateControlComponent.h"

namespace DiceShooter {
    class ClientCharacterStateEvalComponent : public Soldier::ClientExternalCharacterStateControlComponent {
        char pad_0x40[0x1D60];
    }; // 0x1DA0
    static_assert(sizeof(ClientCharacterStateEvalComponent) == 0x1DA0);
}