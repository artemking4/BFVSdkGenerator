// Object: ServerSupplySphereEntity
// ClassId: 8043
// RuntimeId: 47968
// TypeInfo: 0x0000000144CE0000
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerSupplySphereEntity : public Entity::SpatialEntity {
        char pad_0x30[0x4B0];
    }; // 0x4E0
    static_assert(sizeof(ServerSupplySphereEntity) == 0x4E0);
}