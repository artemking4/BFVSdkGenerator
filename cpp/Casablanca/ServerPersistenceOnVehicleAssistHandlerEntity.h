// Object: ServerPersistenceOnVehicleAssistHandlerEntity
// ClassId: 7622
// RuntimeId: 14286
// TypeInfo: 0x0000000144CEDD90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceOnVehicleAssistHandlerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerPersistenceOnVehicleAssistHandlerEntity) == 0x58);
}