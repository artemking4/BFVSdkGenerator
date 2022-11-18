// Object: ClientVisibleAreaEntity
// ClassId: 7881
// RuntimeId: 30286
// TypeInfo: 0x0000000144EC8470
#include "../Entity/SpatialEntity.h"

namespace WorldSim {
    class ClientVisibleAreaEntity : public Entity::SpatialEntity {
        char pad_0x30[0x40];
    }; // 0x70
    static_assert(sizeof(ClientVisibleAreaEntity) == 0x70);
}