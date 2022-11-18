// Object: LevelDescriptionOverrideEntity
// ClassId: 7210
// RuntimeId: 1523
// TypeInfo: 0x0000000144CDA1D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class LevelDescriptionOverrideEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LevelDescriptionOverrideEntity) == 0x30);
}