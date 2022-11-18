// Object: ServerPlayerCounterEntity
// ClassId: 7666
// RuntimeId: 64064
// TypeInfo: 0x0000000144CEB7D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPlayerCounterEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ServerPlayerCounterEntity) == 0xA8);
}