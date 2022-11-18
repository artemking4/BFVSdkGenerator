// Object: ServerLootPoint
// ClassId: 8029
// RuntimeId: 58599
// TypeInfo: 0x0000000144C5E140
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerLootPoint : public Entity::SpatialEntity {
        char pad_0x30[0x80];
    }; // 0xB0
    static_assert(sizeof(ServerLootPoint) == 0xB0);
}