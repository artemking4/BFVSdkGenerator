// Object: ServerPersistenceVehicleHandleEntity
// ClassId: 7648
// RuntimeId: 27099
// TypeInfo: 0x0000000144CEEC90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceVehicleHandleEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerPersistenceVehicleHandleEntity) == 0x58);
}