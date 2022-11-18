// Object: AndEntity
// ClassId: 6182
// RuntimeId: 31386
// TypeInfo: 0x0000000144ED10F0
#include "../Entity/Entity.h"

namespace Entity {
    class AndEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(AndEntity) == 0x40);
}