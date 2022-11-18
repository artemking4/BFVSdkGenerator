// Object: ServerExternalCharacterStateControlComponent
// ClassId: 5998
// RuntimeId: 46184
// TypeInfo: 0x0000000144F30190
#include "../GameServer/ServerGameComponent.h"

namespace Soldier {
    class ServerExternalCharacterStateControlComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ServerExternalCharacterStateControlComponent) == 0x40);
}