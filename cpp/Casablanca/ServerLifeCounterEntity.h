// Object: ServerLifeCounterEntity
// ClassId: 7592
// RuntimeId: 31745
// TypeInfo: 0x0000000144CE6970
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLifeCounterEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ServerLifeCounterEntity) == 0xC0);
}