// Object: LevelProgressionQuery
// ClassId: 7211
// RuntimeId: 54628
// TypeInfo: 0x0000000144CB2620
#include "../Entity/Entity.h"

namespace Casablanca {
    class LevelProgressionQuery : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(LevelProgressionQuery) == 0x58);
}