// Object: ServerVehicleEntryComponentProxyEntity
// ClassId: 7782
// RuntimeId: 46019
// TypeInfo: 0x0000000144C64DB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerVehicleEntryComponentProxyEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ServerVehicleEntryComponentProxyEntity) == 0x88);
}