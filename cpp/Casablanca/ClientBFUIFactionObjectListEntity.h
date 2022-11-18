// Object: ClientBFUIFactionObjectListEntity
// ClassId: 6394
// RuntimeId: 23061
// TypeInfo: 0x0000000144CAA630
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIFactionObjectListEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIFactionObjectListEntity) == 0x40);
}