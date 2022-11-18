// Object: ClientSkeletonInputEntity
// ClassId: 6858
// RuntimeId: 54122
// TypeInfo: 0x0000000144C92710
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSkeletonInputEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientSkeletonInputEntity) == 0x30);
}