// Object: ServerPersistenceRelatedPlayerIteratorEntity
// ClassId: 7635
// RuntimeId: 38375
// TypeInfo: 0x0000000144CECFC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceRelatedPlayerIteratorEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerPersistenceRelatedPlayerIteratorEntity) == 0x40);
}