// Object: ServerMeleeEntity
// ClassId: 7600
// RuntimeId: 36113
// TypeInfo: 0x0000000144C37EE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerMeleeEntity : public Entity::Entity {
        char pad_0x20[0x1F0];
    }; // 0x210
    static_assert(sizeof(ServerMeleeEntity) == 0x210);
}