// Object: ClientBFUIVehicleInstanceObjectListEntity
// ClassId: 6602
// RuntimeId: 15676
// TypeInfo: 0x0000000144C89FE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleInstanceObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIVehicleInstanceObjectListEntity) == 0x40);
}