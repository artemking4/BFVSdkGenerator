// Object: ServerPersistenceOnVehicleDisabledHandlerEntity
// ClassId: 7625
// RuntimeId: 19696
// TypeInfo: 0x0000000144CEDA60
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceOnVehicleDisabledHandlerEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ServerPersistenceOnVehicleDisabledHandlerEntity) == 0xA0);
}