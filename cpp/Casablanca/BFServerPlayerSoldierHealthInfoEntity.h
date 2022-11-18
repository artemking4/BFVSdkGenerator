// Object: BFServerPlayerSoldierHealthInfoEntity
// ClassId: 6235
// RuntimeId: 36068
// TypeInfo: 0x0000000144CE3880
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerSoldierHealthInfoEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(BFServerPlayerSoldierHealthInfoEntity) == 0x50);
}