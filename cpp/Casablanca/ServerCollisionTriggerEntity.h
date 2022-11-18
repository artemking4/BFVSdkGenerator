// Object: ServerCollisionTriggerEntity
// ClassId: 8013
// RuntimeId: 18829
// TypeInfo: 0x0000000144CE1680
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerCollisionTriggerEntity : public Entity::SpatialEntity {
        char pad_0x30[0xA0];
    }; // 0xD0
    static_assert(sizeof(ServerCollisionTriggerEntity) == 0xD0);
}