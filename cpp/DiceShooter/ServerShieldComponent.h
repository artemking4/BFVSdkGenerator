// Object: ServerShieldComponent
// ClassId: 6027
// RuntimeId: 11997
// TypeInfo: 0x0000000144DCF5F0
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerShieldComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x50];
    }; // 0x88
    static_assert(sizeof(ServerShieldComponent) == 0x88);
}