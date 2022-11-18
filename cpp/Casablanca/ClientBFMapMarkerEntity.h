// Object: ClientBFMapMarkerEntity
// ClassId: 7850
// RuntimeId: 13632
// TypeInfo: 0x0000000144C9F330
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientBFMapMarkerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x2C0];
    }; // 0x2F0
    static_assert(sizeof(ClientBFMapMarkerEntity) == 0x2F0);
}