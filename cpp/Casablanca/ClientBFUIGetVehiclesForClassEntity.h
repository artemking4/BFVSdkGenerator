// Object: ClientBFUIGetVehiclesForClassEntity
// ClassId: 6471
// RuntimeId: 44293
// TypeInfo: 0x0000000144CC3570
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehiclesForClassEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIGetVehiclesForClassEntity) == 0x60);
}