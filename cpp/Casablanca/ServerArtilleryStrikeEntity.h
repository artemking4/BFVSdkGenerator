// Object: ServerArtilleryStrikeEntity
// ClassId: 8009
// RuntimeId: 52832
// TypeInfo: 0x0000000144C3C620
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerArtilleryStrikeEntity : public Entity::SpatialEntity {
        char pad_0x30[0x60];
    }; // 0x90
    static_assert(sizeof(ServerArtilleryStrikeEntity) == 0x90);
}