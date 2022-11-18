// Object: ClientVehicleTestEntity
// ClassId: 7034
// RuntimeId: 44964
// TypeInfo: 0x0000000144C4A040
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVehicleTestEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientVehicleTestEntity) == 0x50);
}