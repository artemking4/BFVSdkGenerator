// Object: ServerSectorEntity
// ClassId: 7704
// RuntimeId: 42092
// TypeInfo: 0x0000000144CEA8F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSectorEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ServerSectorEntity) == 0xD8);
}