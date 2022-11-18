// Object: ClientBFUISoldierInstanceObjectListEntity
// ClassId: 6582
// RuntimeId: 29278
// TypeInfo: 0x0000000144CC7ED0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISoldierInstanceObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISoldierInstanceObjectListEntity) == 0x40);
}