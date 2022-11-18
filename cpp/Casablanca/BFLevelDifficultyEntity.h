// Object: BFLevelDifficultyEntity
// ClassId: 6222
// RuntimeId: 14731
// TypeInfo: 0x0000000144C1FC60
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFLevelDifficultyEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BFLevelDifficultyEntity) == 0x40);
}