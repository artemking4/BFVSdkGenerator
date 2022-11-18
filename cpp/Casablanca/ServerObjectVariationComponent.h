// Object: ServerObjectVariationComponent
// ClassId: 6014
// RuntimeId: 9851
// TypeInfo: 0x0000000144CE9410
#include "../GameServer/ServerGameComponent.h"

namespace Casablanca {
    class ServerObjectVariationComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x70];
    }; // 0xA8
    static_assert(sizeof(ServerObjectVariationComponent) == 0xA8);
}