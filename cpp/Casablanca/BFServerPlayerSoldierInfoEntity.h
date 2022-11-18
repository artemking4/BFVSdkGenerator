// Object: BFServerPlayerSoldierInfoEntity
// ClassId: 6236
// RuntimeId: 37666
// TypeInfo: 0x0000000144C38540
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerSoldierInfoEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(BFServerPlayerSoldierInfoEntity) == 0x70);
}