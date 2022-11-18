// Object: ServerPersistencePlayerIteratorEntity
// ClassId: 7629
// RuntimeId: 56651
// TypeInfo: 0x0000000144CED620
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistencePlayerIteratorEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerPersistencePlayerIteratorEntity) == 0x40);
}