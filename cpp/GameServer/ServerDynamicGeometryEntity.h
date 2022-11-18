// Object: ServerDynamicGeometryEntity
// ClassId: 7532
// RuntimeId: 54160
// TypeInfo: 0x0000000144E5CE90
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerDynamicGeometryEntity : public Entity::Entity {
        char pad_0x20[0x160];
    }; // 0x180
    static_assert(sizeof(ServerDynamicGeometryEntity) == 0x180);
}