// Object: RandomIntEntity
// ClassId: 7349
// RuntimeId: 20303
// TypeInfo: 0x0000000144ED0650
#include "../Entity/Entity.h"

namespace Entity {
    class RandomIntEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(RandomIntEntity) == 0x58);
}