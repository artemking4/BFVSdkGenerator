// Object: ServerLevolutionMessageEntity
// ClassId: 7591
// RuntimeId: 31228
// TypeInfo: 0x0000000144CE6A80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLevolutionMessageEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerLevolutionMessageEntity) == 0x70);
}