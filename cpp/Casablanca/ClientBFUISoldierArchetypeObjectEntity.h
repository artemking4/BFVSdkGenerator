// Object: ClientBFUISoldierArchetypeObjectEntity
// ClassId: 6576
// RuntimeId: 51651
// TypeInfo: 0x0000000144CC8420
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierArchetypeObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierArchetypeObjectEntity) == 0x40);
}