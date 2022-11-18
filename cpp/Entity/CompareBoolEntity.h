// Object: CompareBoolEntity
// ClassId: 7069
// RuntimeId: 44673
// TypeInfo: 0x0000000144EDC960
#include "../Entity/Entity.h"

namespace Entity {
    class CompareBoolEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(CompareBoolEntity) == 0x48);
}