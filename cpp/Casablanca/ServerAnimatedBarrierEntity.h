// Object: ServerAnimatedBarrierEntity
// ClassId: 8008
// RuntimeId: 6201
// TypeInfo: 0x0000000144C3C730
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerAnimatedBarrierEntity : public Entity::SpatialEntity {
        char pad_0x30[0x290];
    }; // 0x2C0
    static_assert(sizeof(ServerAnimatedBarrierEntity) == 0x2C0);
}