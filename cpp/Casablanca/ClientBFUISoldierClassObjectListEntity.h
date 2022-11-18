// Object: ClientBFUISoldierClassObjectListEntity
// ClassId: 6579
// RuntimeId: 30621
// TypeInfo: 0x0000000144CC80F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierClassObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierClassObjectListEntity) == 0x40);
}