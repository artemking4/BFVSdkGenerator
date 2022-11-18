// Object: ClientBFUISoldierKitObjectListEntity
// ClassId: 6584
// RuntimeId: 38726
// TypeInfo: 0x0000000144CC7CB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierKitObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierKitObjectListEntity) == 0x40);
}