// Object: ClientPersistenceAwardExpiredEntity
// ClassId: 6775
// RuntimeId: 31487
// TypeInfo: 0x0000000144C52C40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceAwardExpiredEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientPersistenceAwardExpiredEntity) == 0x60);
}