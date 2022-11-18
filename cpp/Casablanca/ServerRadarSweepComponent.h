// Object: ServerRadarSweepComponent
// ClassId: 6025
// RuntimeId: 14327
// TypeInfo: 0x0000000144CE9390
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerRadarSweepComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xF0];
    }; // 0x128
    static_assert(sizeof(ServerRadarSweepComponent) == 0x128);
}