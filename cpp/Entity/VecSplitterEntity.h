// Object: VecSplitterEntity
// ClassId: 8256
// RuntimeId: 50962
// TypeInfo: 0x0000000144ECE670
#include "../Entity/Entity.h"

namespace Entity {
    class VecSplitterEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(VecSplitterEntity) == 0x60);
}