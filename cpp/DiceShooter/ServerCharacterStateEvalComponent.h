// Object: ServerCharacterStateEvalComponent
// ClassId: 5999
// RuntimeId: 39397
// TypeInfo: 0x0000000144DCBDE0
#include "../Soldier/ServerExternalCharacterStateControlComponent.h"

namespace DiceShooter {
    class ServerCharacterStateEvalComponent : public Soldier::ServerExternalCharacterStateControlComponent {
        char pad_0x40[0x3570];
    }; // 0x35B0
    static_assert(sizeof(ServerCharacterStateEvalComponent) == 0x35B0);
}