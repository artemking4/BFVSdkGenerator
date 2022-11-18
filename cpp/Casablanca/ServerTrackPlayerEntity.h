// Object: ServerTrackPlayerEntity
// ClassId: 8045
// RuntimeId: 39060
// TypeInfo: 0x0000000144CDFBC0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerTrackPlayerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x2D0];
    }; // 0x300
    static_assert(sizeof(ServerTrackPlayerEntity) == 0x300);
}