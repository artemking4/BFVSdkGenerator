// Object: ServerPersistentValueEntity
// ClassId: 7650
// RuntimeId: 38397
// TypeInfo: 0x0000000144CEBB00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistentValueEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerPersistentValueEntity) == 0x50);
}