// Object: ServerPersistencePlayerStateEntity
// ClassId: 7631
// RuntimeId: 44399
// TypeInfo: 0x0000000144CED400
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistencePlayerStateEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ServerPersistencePlayerStateEntity) == 0xC0);
}