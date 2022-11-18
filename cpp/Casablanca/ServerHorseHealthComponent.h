// Object: ServerHorseHealthComponent
// ClassId: 6084
// RuntimeId: 31884
// TypeInfo: 0x0000000144CE9590
#include "../GameServer/ServerControllableHealthComponent.h"

namespace Casablanca {
    class ServerHorseHealthComponent : public GameServer::ServerControllableHealthComponent {
        char pad_0x48[0x58];
    }; // 0xA0
    static_assert(sizeof(ServerHorseHealthComponent) == 0xA0);
}