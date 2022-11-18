// Object: ServerKitCategorizationEntity
// ClassId: 7586
// RuntimeId: 1774
// TypeInfo: 0x0000000144CF0020
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerKitCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerKitCategorizationEntity) == 0x50);
}