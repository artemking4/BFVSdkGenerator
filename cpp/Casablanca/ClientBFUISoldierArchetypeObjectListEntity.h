// Object: ClientBFUISoldierArchetypeObjectListEntity
// ClassId: 6577
// RuntimeId: 37369
// TypeInfo: 0x0000000144CC8310
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierArchetypeObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierArchetypeObjectListEntity) == 0x40);
}