// Object: ClientBFUISoldierLoadoutObjectEntity
// ClassId: 6585
// RuntimeId: 50481
// TypeInfo: 0x0000000144CC7BA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierLoadoutObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierLoadoutObjectEntity) == 0x40);
}