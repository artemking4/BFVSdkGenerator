// Object: ServerPlayerReadyEntity
// ClassId: 7671
// RuntimeId: 37911
// TypeInfo: 0x0000000144CEB5B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPlayerReadyEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ServerPlayerReadyEntity) == 0xC8);
}