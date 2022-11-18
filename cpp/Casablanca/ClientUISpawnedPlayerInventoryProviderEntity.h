// Object: ClientUISpawnedPlayerInventoryProviderEntity
// ClassId: 7004
// RuntimeId: 36318
// TypeInfo: 0x0000000144C589E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISpawnedPlayerInventoryProviderEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientUISpawnedPlayerInventoryProviderEntity) == 0x78);
}