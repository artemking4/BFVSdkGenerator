// Object: EnumIntSourceEntity
// ClassId: 7145
// RuntimeId: 16451
// TypeInfo: 0x0000000144EDB630
#include "../Entity/Entity.h"

namespace Entity {
    class EnumIntSourceEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(EnumIntSourceEntity) == 0x50);
}