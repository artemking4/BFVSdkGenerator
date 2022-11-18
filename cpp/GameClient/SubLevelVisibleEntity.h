// Object: SubLevelVisibleEntity
// ClassId: 8082
// RuntimeId: 58917
// TypeInfo: 0x0000000144E33930
#include "../Entity/Entity.h"

namespace GameClient {
    class SubLevelVisibleEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(SubLevelVisibleEntity) == 0x78);
}