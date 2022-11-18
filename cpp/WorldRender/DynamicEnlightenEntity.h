// Object: DynamicEnlightenEntity
// ClassId: 7132
// RuntimeId: 47231
// TypeInfo: 0x0000000144EBA470
#include "../Entity/Entity.h"

namespace WorldRender {
    class DynamicEnlightenEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(DynamicEnlightenEntity) == 0x38);
}