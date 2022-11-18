// Object: ServerNonStaticCollisionTriggerEntity
// ClassId: 8032
// RuntimeId: 3568
// TypeInfo: 0x0000000144CE1570
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerNonStaticCollisionTriggerEntity : public Entity::SpatialEntity {
        char pad_0x30[0xB0];
    }; // 0xE0
    static_assert(sizeof(ServerNonStaticCollisionTriggerEntity) == 0xE0);
}