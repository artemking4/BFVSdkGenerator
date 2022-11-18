// Object: ClientCheckpointFlagEntity
// ClassId: 6633
// RuntimeId: 54472
// TypeInfo: 0x0000000144C9EAB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCheckpointFlagEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientCheckpointFlagEntity) == 0xB0);
}