// Object: ServerTowHitchComponent
// ClassId: 6050
// RuntimeId: 9004
// TypeInfo: 0x0000000144F6FC30
#include "../GameServer/ServerGameComponent.h"

namespace Vehicle {
    class ServerTowHitchComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xC8];
    }; // 0x100
    static_assert(sizeof(ServerTowHitchComponent) == 0x100);
}