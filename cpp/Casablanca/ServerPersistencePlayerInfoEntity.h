// Object: ServerPersistencePlayerInfoEntity
// ClassId: 7628
// RuntimeId: 44909
// TypeInfo: 0x0000000144CED730
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistencePlayerInfoEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerPersistencePlayerInfoEntity) == 0x48);
}