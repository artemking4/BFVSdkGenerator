// Object: ServerDamageAreaOverTimeBase
// ClassId: 8016
// RuntimeId: 40714
// TypeInfo: 0x0000000144C3C0D0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerDamageAreaOverTimeBase : public Entity::SpatialEntity {
        char pad_0x30[0x150];
    }; // 0x180
    static_assert(sizeof(ServerDamageAreaOverTimeBase) == 0x180);
}