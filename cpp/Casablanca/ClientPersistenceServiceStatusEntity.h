// Object: ClientPersistenceServiceStatusEntity
// ClassId: 6782
// RuntimeId: 14554
// TypeInfo: 0x0000000144C524D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceServiceStatusEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientPersistenceServiceStatusEntity) == 0x50);
}