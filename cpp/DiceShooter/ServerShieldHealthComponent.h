// Object: ServerShieldHealthComponent
// ClassId: 6090
// RuntimeId: 42488
// TypeInfo: 0x0000000144DCF4F0
#include "../GameServer/ServerGameHealthComponent.h"

namespace DiceShooter {
    class ServerShieldHealthComponent : public GameServer::ServerGameHealthComponent {
        char pad_0x30[0x40];
    }; // 0x70
    static_assert(sizeof(ServerShieldHealthComponent) == 0x70);
}