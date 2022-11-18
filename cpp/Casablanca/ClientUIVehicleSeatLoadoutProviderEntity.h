// Object: ClientUIVehicleSeatLoadoutProviderEntity
// ClassId: 7020
// RuntimeId: 35233
// TypeInfo: 0x0000000144C588D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVehicleSeatLoadoutProviderEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientUIVehicleSeatLoadoutProviderEntity) == 0x78);
}