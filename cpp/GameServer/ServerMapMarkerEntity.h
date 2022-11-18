// Object: ServerMapMarkerEntity
// ClassId: 8030
// RuntimeId: 5663
// TypeInfo: 0x0000000144E61060
#include "../Entity/SpatialEntity.h"

namespace GameServer {
    class ServerMapMarkerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x400];
    }; // 0x430
    static_assert(sizeof(ServerMapMarkerEntity) == 0x430);
}