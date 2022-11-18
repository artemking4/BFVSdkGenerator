// Object: ClientBFUISoldierKitObjectEntity
// ClassId: 6583
// RuntimeId: 27703
// TypeInfo: 0x0000000144CC7DC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierKitObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierKitObjectEntity) == 0x40);
}