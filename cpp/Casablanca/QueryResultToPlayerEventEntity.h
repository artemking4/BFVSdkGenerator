// Object: QueryResultToPlayerEventEntity
// ClassId: 7339
// RuntimeId: 13946
// TypeInfo: 0x0000000144CD9620
#include "../Entity/Entity.h"

namespace Casablanca {
    class QueryResultToPlayerEventEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(QueryResultToPlayerEventEntity) == 0x70);
}