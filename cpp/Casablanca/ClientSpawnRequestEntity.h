// Object: ClientSpawnRequestEntity
// ClassId: 6867
// RuntimeId: 47533
// TypeInfo: 0x0000000144CD7BC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSpawnRequestEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientSpawnRequestEntity) == 0x30);
}