// Object: ClientUIVehicleEntity
// ClassId: 7018
// RuntimeId: 13480
// TypeInfo: 0x0000000144CB7050
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIVehicleEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientUIVehicleEntity) == 0xA0);
}