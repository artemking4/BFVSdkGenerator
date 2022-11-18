// Object: ServerRandomTerrainPositionEntity
// ClassId: 7684
// RuntimeId: 17562
// TypeInfo: 0x0000000144C3E420
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerRandomTerrainPositionEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerRandomTerrainPositionEntity) == 0x48);
}