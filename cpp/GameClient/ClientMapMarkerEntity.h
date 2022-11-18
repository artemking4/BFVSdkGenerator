// Object: ClientMapMarkerEntity
// ClassId: 7865
// RuntimeId: 46990
// TypeInfo: 0x0000000144E3C970
#include "../Entity/SpatialEntity.h"

namespace GameClient {
    class ClientMapMarkerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x2C0];
    }; // 0x2F0
    static_assert(sizeof(ClientMapMarkerEntity) == 0x2F0);
}