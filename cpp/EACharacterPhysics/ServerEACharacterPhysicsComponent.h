// Object: ServerEACharacterPhysicsComponent
// ClassId: 5985
// RuntimeId: 62705
// TypeInfo: 0x0000000144DFA220
#include "../GameServer/ServerGameComponent.h"

namespace EACharacterPhysics {
    class ServerEACharacterPhysicsComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x88];
    }; // 0xC0
    static_assert(sizeof(ServerEACharacterPhysicsComponent) == 0xC0);
}