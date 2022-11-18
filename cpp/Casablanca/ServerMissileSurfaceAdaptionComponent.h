// Object: ServerMissileSurfaceAdaptionComponent
// ClassId: 6010
// RuntimeId: 62887
// TypeInfo: 0x0000000144CE9490
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerMissileSurfaceAdaptionComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ServerMissileSurfaceAdaptionComponent) == 0x48);
}