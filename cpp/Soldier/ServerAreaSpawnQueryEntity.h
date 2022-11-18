// Object: ServerAreaSpawnQueryEntity
// ClassId: 7443
// RuntimeId: 1007
// TypeInfo: 0x0000000144F2E4D0
#include "../Entity/Entity.h"

namespace Soldier {
    class ServerAreaSpawnQueryEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ServerAreaSpawnQueryEntity) == 0xB0);
}