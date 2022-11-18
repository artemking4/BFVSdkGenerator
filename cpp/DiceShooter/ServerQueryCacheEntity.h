// Object: ServerQueryCacheEntity
// ClassId: 7679
// RuntimeId: 26302
// TypeInfo: 0x0000000144DD2D40
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerQueryCacheEntity : public Entity::Entity {
        char pad_0x20[0x1E0];
    }; // 0x200
    static_assert(sizeof(ServerQueryCacheEntity) == 0x200);
}