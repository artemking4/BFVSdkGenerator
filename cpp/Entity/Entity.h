// Object: Entity
// ClassId: 6169
// RuntimeId: 9754
// TypeInfo: 0x0000000144EDC1F0
#include "../Entity/EntityBusPeer.h"

namespace Entity {
    class Entity : public Entity::EntityBusPeer {
        char pad_0x8[0x18];
    }; // 0x20
    static_assert(sizeof(Entity) == 0x20);
}