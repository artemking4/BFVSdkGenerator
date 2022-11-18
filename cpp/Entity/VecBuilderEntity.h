// Object: VecBuilderEntity
// ClassId: 8255
// RuntimeId: 29909
// TypeInfo: 0x0000000144ECE230
#include "../Entity/Entity.h"

namespace Entity {
    class VecBuilderEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(VecBuilderEntity) == 0x88);
}