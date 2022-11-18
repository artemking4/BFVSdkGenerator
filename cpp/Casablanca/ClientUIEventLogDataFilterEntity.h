// Object: ClientUIEventLogDataFilterEntity
// ClassId: 6941
// RuntimeId: 944
// TypeInfo: 0x0000000144CAEA30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIEventLogDataFilterEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientUIEventLogDataFilterEntity) == 0x50);
}