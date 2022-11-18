// Object: BFServerLoadoutEntity
// ClassId: 6228
// RuntimeId: 57408
// TypeInfo: 0x0000000144C62AC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerLoadoutEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(BFServerLoadoutEntity) == 0x90);
}