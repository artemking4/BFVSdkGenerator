// Object: ServerCharacterHealthComponent
// ClassId: 6081
// RuntimeId: 22997
// TypeInfo: 0x0000000144E5AE00
#include "../GameServer/ServerControllableHealthComponent.h"

namespace GameServer {
    class ServerCharacterHealthComponent : public GameServer::ServerControllableHealthComponent {
        char pad_0x48[0x28];
    }; // 0x70
    static_assert(sizeof(ServerCharacterHealthComponent) == 0x70);
}