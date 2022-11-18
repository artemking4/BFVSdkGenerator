// Object: ClientBFUISoldierClassObjectEntity
// ClassId: 6578
// RuntimeId: 44004
// TypeInfo: 0x0000000144CC8200
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierClassObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierClassObjectEntity) == 0x40);
}