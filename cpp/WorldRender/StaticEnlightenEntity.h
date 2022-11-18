// Object: StaticEnlightenEntity
// ClassId: 8073
// RuntimeId: 54418
// TypeInfo: 0x0000000144EB6C60
#include "../Entity/Entity.h"

namespace WorldRender {
    class StaticEnlightenEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(StaticEnlightenEntity) == 0x38);
}