// Object: SubLevelPreloadEntity
// ClassId: 8080
// RuntimeId: 57076
// TypeInfo: 0x0000000144E4CA80
#include "../Entity/Entity.h"

namespace GameCommon {
    class SubLevelPreloadEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(SubLevelPreloadEntity) == 0x90);
}