// Object: ServerAimInputComponent
// ClassId: 5943
// RuntimeId: 55485
// TypeInfo: 0x0000000144DCB660
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerAimInputComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x78];
    }; // 0xB0
    static_assert(sizeof(ServerAimInputComponent) == 0xB0);
}