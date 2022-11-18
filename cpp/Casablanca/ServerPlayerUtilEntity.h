// Object: ServerPlayerUtilEntity
// ClassId: 7672
// RuntimeId: 28800
// TypeInfo: 0x0000000144CEB4A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPlayerUtilEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerPlayerUtilEntity) == 0x30);
}