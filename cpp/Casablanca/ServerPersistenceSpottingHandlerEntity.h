// Object: ServerPersistenceSpottingHandlerEntity
// ClassId: 7643
// RuntimeId: 45567
// TypeInfo: 0x0000000144CEF1E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceSpottingHandlerEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ServerPersistenceSpottingHandlerEntity) == 0xC0);
}