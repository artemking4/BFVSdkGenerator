// Object: ClientPersistenceGlobalStatsReportEntity
// ClassId: 6780
// RuntimeId: 51222
// TypeInfo: 0x0000000144C526F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPersistenceGlobalStatsReportEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientPersistenceGlobalStatsReportEntity) == 0x48);
}