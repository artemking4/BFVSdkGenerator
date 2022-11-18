// Object: ClientBFUIFactionObjectEntity
// ClassId: 6393
// RuntimeId: 48450
// TypeInfo: 0x0000000144CAA740
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIFactionObjectEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIFactionObjectEntity) == 0x40);
}