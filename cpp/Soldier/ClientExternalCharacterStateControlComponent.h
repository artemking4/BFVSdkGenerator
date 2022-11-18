// Object: ClientExternalCharacterStateControlComponent
// ClassId: 5834
// RuntimeId: 43273
// TypeInfo: 0x0000000144F2EED0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientExternalCharacterStateControlComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientExternalCharacterStateControlComponent) == 0x40);
}