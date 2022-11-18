// Object: ServerLevelCategorizationEntity
// ClassId: 7587
// RuntimeId: 30546
// TypeInfo: 0x0000000144CEFF10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLevelCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerLevelCategorizationEntity) == 0x48);
}