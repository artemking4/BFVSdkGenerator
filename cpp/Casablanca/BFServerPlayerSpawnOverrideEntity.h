// Object: BFServerPlayerSpawnOverrideEntity
// ClassId: 6237
// RuntimeId: 26593
// TypeInfo: 0x0000000144C38430
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFServerPlayerSpawnOverrideEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BFServerPlayerSpawnOverrideEntity) == 0x40);
}