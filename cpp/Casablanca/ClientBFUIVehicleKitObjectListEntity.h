// Object: ClientBFUIVehicleKitObjectListEntity
// ClassId: 6604
// RuntimeId: 39007
// TypeInfo: 0x0000000144C89DC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleKitObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIVehicleKitObjectListEntity) == 0x40);
}