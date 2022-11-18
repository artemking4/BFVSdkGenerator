// Object: ServerPingMarkerManagerEntity
// ClassId: 7656
// RuntimeId: 37023
// TypeInfo: 0x0000000144CEB8E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPingMarkerManagerEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ServerPingMarkerManagerEntity) == 0x88);
}