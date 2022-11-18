// Object: ClientBFUISoldierInstanceObjectEntity
// ClassId: 6581
// RuntimeId: 22800
// TypeInfo: 0x0000000144CC7FE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierInstanceObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierInstanceObjectEntity) == 0x40);
}