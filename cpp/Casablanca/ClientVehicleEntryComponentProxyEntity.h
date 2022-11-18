// Object: ClientVehicleEntryComponentProxyEntity
// ClassId: 7032
// RuntimeId: 12827
// TypeInfo: 0x0000000144C5C880
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientVehicleEntryComponentProxyEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientVehicleEntryComponentProxyEntity) == 0x98);
}