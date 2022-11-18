// Object: ClientPersistenceAwardSelectorEntity
// ClassId: 6777
// RuntimeId: 53572
// TypeInfo: 0x0000000144C52A20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceAwardSelectorEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientPersistenceAwardSelectorEntity) == 0x78);
}