// Object: ServerFuelComponent
// ClassId: 6001
// RuntimeId: 35901
// TypeInfo: 0x0000000144DD03B0
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerFuelComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x48];
    }; // 0x80
    static_assert(sizeof(ServerFuelComponent) == 0x80);
}