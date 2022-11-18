// Object: ServerBFMapMarkerEntity
// ClassId: 8010
// RuntimeId: 4780
// TypeInfo: 0x0000000144C61E00
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerBFMapMarkerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x400];
    }; // 0x430
    static_assert(sizeof(ServerBFMapMarkerEntity) == 0x430);
}