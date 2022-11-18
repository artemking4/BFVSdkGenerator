// Object: ServerVehicleProxyEntity
// ClassId: 7783
// RuntimeId: 16085
// TypeInfo: 0x0000000144C64CA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerVehicleProxyEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ServerVehicleProxyEntity) == 0xA0);
}