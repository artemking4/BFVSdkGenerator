// Object: ServerCharacterCustomizationComponent
// ClassId: 5968
// RuntimeId: 49584
// TypeInfo: 0x0000000144E5AE80
#include "../GameServer/ServerGameComponent.h"

namespace GameServer {
    class ServerCharacterCustomizationComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x5A0];
    }; // 0x5D8
    static_assert(sizeof(ServerCharacterCustomizationComponent) == 0x5D8);
}