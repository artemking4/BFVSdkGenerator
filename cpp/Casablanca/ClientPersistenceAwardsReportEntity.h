// Object: ClientPersistenceAwardsReportEntity
// ClassId: 6778
// RuntimeId: 40765
// TypeInfo: 0x0000000144C52910
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceAwardsReportEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientPersistenceAwardsReportEntity) == 0x48);
}