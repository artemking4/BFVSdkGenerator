// Object: ClientPersistenceUnlockInfoEntity
// ClassId: 6783
// RuntimeId: 52484
// TypeInfo: 0x0000000144C8B1B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceUnlockInfoEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientPersistenceUnlockInfoEntity) == 0x60);
}