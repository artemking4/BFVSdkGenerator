// Object: ClientPersistenceScoreEntity
// ClassId: 6781
// RuntimeId: 53649
// TypeInfo: 0x0000000144C525E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceScoreEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientPersistenceScoreEntity) == 0xC0);
}