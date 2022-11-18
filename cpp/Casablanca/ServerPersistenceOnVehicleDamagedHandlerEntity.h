// Object: ServerPersistenceOnVehicleDamagedHandlerEntity
// ClassId: 7623
// RuntimeId: 23702
// TypeInfo: 0x0000000144CEDC80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceOnVehicleDamagedHandlerEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ServerPersistenceOnVehicleDamagedHandlerEntity) == 0x100);
}