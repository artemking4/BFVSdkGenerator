// Object: ServerCategorizationEntity
// ClassId: 7457
// RuntimeId: 13329
// TypeInfo: 0x0000000144CF0460
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerCategorizationEntity) == 0x48);
}