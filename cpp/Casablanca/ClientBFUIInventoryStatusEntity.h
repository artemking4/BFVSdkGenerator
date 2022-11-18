// Object: ClientBFUIInventoryStatusEntity
// ClassId: 6484
// RuntimeId: 8951
// TypeInfo: 0x0000000144CA8CD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIInventoryStatusEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUIInventoryStatusEntity) == 0x80);
}