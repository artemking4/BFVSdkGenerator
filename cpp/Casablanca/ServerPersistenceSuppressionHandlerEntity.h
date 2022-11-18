// Object: ServerPersistenceSuppressionHandlerEntity
// ClassId: 7646
// RuntimeId: 10102
// TypeInfo: 0x0000000144CEEEB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceSuppressionHandlerEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ServerPersistenceSuppressionHandlerEntity) == 0xD0);
}