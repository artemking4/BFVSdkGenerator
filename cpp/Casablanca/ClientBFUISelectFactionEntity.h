// Object: ClientBFUISelectFactionEntity
// ClassId: 6560
// RuntimeId: 35958
// TypeInfo: 0x0000000144CA5F20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISelectFactionEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUISelectFactionEntity) == 0x40);
}