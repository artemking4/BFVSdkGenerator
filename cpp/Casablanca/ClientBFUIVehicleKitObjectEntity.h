// Object: ClientBFUIVehicleKitObjectEntity
// ClassId: 6603
// RuntimeId: 20166
// TypeInfo: 0x0000000144C89ED0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleKitObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIVehicleKitObjectEntity) == 0x40);
}