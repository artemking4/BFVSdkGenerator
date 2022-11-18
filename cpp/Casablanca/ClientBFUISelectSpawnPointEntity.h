// Object: ClientBFUISelectSpawnPointEntity
// ClassId: 6563
// RuntimeId: 48028
// TypeInfo: 0x0000000144CAFF50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISelectSpawnPointEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUISelectSpawnPointEntity) == 0x30);
}