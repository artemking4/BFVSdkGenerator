// Object: ClientBFUIVehicleClassObjectListEntity
// ClassId: 6599
// RuntimeId: 11700
// TypeInfo: 0x0000000144CC7980
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIVehicleClassObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIVehicleClassObjectListEntity) == 0x40);
}