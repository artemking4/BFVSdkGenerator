// Object: ServerZoneControlSpawnerEntity
// ClassId: 7800
// RuntimeId: 49098
// TypeInfo: 0x0000000144CE1790
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerZoneControlSpawnerEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ServerZoneControlSpawnerEntity) == 0xB0);
}