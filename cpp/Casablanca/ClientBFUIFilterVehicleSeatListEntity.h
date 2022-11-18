// Object: ClientBFUIFilterVehicleSeatListEntity
// ClassId: 6407
// RuntimeId: 6354
// TypeInfo: 0x0000000144C58F30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIFilterVehicleSeatListEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIFilterVehicleSeatListEntity) == 0x50);
}