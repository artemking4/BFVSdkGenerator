// Object: ServerPersistenceSameSquadEntity
// ClassId: 7640
// RuntimeId: 7587
// TypeInfo: 0x0000000144CEF510
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceSameSquadEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerPersistenceSameSquadEntity) == 0x38);
}