// Object: LocalIBLEntity
// ClassId: 7215
// RuntimeId: 20217
// TypeInfo: 0x0000000144EB7D60
#include "../Entity/Entity.h"

namespace WorldRender {
    class LocalIBLEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(LocalIBLEntity) == 0xE0);
}