// Object: ClientEACharacterPhysicsComponent
// ClassId: 5818
// RuntimeId: 9645
// TypeInfo: 0x0000000144DFA2A0
#include "../GameClient/ClientGameComponent.h"

namespace EACharacterPhysics {
    class ClientEACharacterPhysicsComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x88];
    }; // 0xC0
    static_assert(sizeof(ClientEACharacterPhysicsComponent) == 0xC0);
}