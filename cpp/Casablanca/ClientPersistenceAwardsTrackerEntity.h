// Object: ClientPersistenceAwardsTrackerEntity
// ClassId: 6779
// RuntimeId: 36931
// TypeInfo: 0x0000000144C52800
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceAwardsTrackerEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientPersistenceAwardsTrackerEntity) == 0x58);
}