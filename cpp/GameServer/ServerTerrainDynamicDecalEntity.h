// Object: ServerTerrainDynamicDecalEntity
// ClassId: 7751
// RuntimeId: 10604
// TypeInfo: 0x0000000144E57640
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerTerrainDynamicDecalEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerTerrainDynamicDecalEntity) == 0x48);
}