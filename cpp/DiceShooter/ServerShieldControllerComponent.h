// Object: ServerShieldControllerComponent
// ClassId: 6028
// RuntimeId: 54464
// TypeInfo: 0x0000000144DCF570
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerShieldControllerComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xD0];
    }; // 0x108
    static_assert(sizeof(ServerShieldControllerComponent) == 0x108);
}