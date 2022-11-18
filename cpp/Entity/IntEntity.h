// Object: IntEntity
// ClassId: 7201
// RuntimeId: 20450
// TypeInfo: 0x0000000144ED9E10
#include "../Entity/Entity.h"

namespace Entity {
    class IntEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(IntEntity) == 0x48);
}