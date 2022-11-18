// Object: ServerFrontLineSpawnEntity
// ClassId: 7562
// RuntimeId: 43157
// TypeInfo: 0x0000000144C3EDB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFrontLineSpawnEntity : public Entity::Entity {
        char pad_0x20[0x128];
    }; // 0x148
    static_assert(sizeof(ServerFrontLineSpawnEntity) == 0x148);
}