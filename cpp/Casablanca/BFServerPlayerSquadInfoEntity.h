// Object: BFServerPlayerSquadInfoEntity
// ClassId: 6238
// RuntimeId: 62599
// TypeInfo: 0x0000000144C38320
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerSquadInfoEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(BFServerPlayerSquadInfoEntity) == 0x88);
}