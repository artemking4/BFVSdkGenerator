// Object: ClientBFUIVehicleInstanceObjectEntity
// ClassId: 6601
// RuntimeId: 39545
// TypeInfo: 0x0000000144CC7870
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleInstanceObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIVehicleInstanceObjectEntity) == 0x40);
}