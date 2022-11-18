// Object: ClientBFUIGetPlayerListFromVehicleEntryListEntity
// ClassId: 6436
// RuntimeId: 28688
// TypeInfo: 0x0000000144CC0240
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetPlayerListFromVehicleEntryListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIGetPlayerListFromVehicleEntryListEntity) == 0x40);
}