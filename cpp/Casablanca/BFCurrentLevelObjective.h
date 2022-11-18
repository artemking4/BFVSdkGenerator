// Object: BFCurrentLevelObjective
// ClassId: 6218
// RuntimeId: 13105
// TypeInfo: 0x0000000144CAE4E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFCurrentLevelObjective : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(BFCurrentLevelObjective) == 0x30);
}