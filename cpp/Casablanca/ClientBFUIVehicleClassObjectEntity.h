// Object: ClientBFUIVehicleClassObjectEntity
// ClassId: 6598
// RuntimeId: 21709
// TypeInfo: 0x0000000144CC7A90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleClassObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIVehicleClassObjectEntity) == 0x40);
}