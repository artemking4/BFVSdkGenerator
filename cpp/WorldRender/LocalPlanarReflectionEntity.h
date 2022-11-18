// Object: LocalPlanarReflectionEntity
// ClassId: 7229
// RuntimeId: 24984
// TypeInfo: 0x0000000144EB7A30
#include "../Entity/Entity.h"

namespace WorldRender {
    class LocalPlanarReflectionEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(LocalPlanarReflectionEntity) == 0xC0);
}