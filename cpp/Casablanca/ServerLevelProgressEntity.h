// Object: ServerLevelProgressEntity
// ClassId: 7590
// RuntimeId: 1898
// TypeInfo: 0x0000000144C600C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLevelProgressEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerLevelProgressEntity) == 0x30);
}