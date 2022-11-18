// Object: ShrinkingPlayAreaEntity
// ClassId: 7805
// RuntimeId: 49303
// TypeInfo: 0x0000000144C1ECB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ShrinkingPlayAreaEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ShrinkingPlayAreaEntity) == 0xD0);
}