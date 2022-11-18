// Object: ClientUIDogTagReceivedEntity
// ClassId: 6939
// RuntimeId: 5044
// TypeInfo: 0x0000000144CAEB40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDogTagReceivedEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientUIDogTagReceivedEntity) == 0x98);
}