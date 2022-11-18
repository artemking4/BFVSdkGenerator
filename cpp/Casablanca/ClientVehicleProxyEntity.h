// Object: ClientVehicleProxyEntity
// ClassId: 7033
// RuntimeId: 61275
// TypeInfo: 0x0000000144C5C770
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVehicleProxyEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientVehicleProxyEntity) == 0xD0);
}