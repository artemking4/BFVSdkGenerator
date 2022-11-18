// Object: ServerCheckpointFlagEntity
// ClassId: 7463
// RuntimeId: 50624
// TypeInfo: 0x0000000144CE7DA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerCheckpointFlagEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ServerCheckpointFlagEntity) == 0x120);
}