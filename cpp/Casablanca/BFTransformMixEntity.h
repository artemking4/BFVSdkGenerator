// Object: BFTransformMixEntity
// ClassId: 6246
// RuntimeId: 58789
// TypeInfo: 0x0000000144CCEA10
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFTransformMixEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(BFTransformMixEntity) == 0xB0);
}