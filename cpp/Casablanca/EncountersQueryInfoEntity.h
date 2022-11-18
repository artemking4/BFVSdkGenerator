// Object: EncountersQueryInfoEntity
// ClassId: 7138
// RuntimeId: 62514
// TypeInfo: 0x0000000144CE30D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class EncountersQueryInfoEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(EncountersQueryInfoEntity) == 0x98);
}