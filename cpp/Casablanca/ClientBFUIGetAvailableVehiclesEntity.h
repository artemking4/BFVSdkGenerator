// Object: ClientBFUIGetAvailableVehiclesEntity
// ClassId: 6415
// RuntimeId: 44376
// TypeInfo: 0x0000000144CC64C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableVehiclesEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientBFUIGetAvailableVehiclesEntity) == 0x98);
}