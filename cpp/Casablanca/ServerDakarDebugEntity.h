// Object: ServerDakarDebugEntity
// ClassId: 7482
// RuntimeId: 25333
// TypeInfo: 0x0000000144CDE5F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarDebugEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerDakarDebugEntity) == 0x38);
}