// Object: ClientPersistenceAwardGainedEntity
// ClassId: 6776
// RuntimeId: 32778
// TypeInfo: 0x0000000144C52B30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceAwardGainedEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientPersistenceAwardGainedEntity) == 0x70);
}