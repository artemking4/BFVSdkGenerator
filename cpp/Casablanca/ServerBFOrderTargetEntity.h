// Object: ServerBFOrderTargetEntity
// ClassId: 8011
// RuntimeId: 40212
// TypeInfo: 0x0000000144CE1240
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerBFOrderTargetEntity : public Entity::SpatialEntity {
        char pad_0x30[0x160];
    }; // 0x190
    static_assert(sizeof(ServerBFOrderTargetEntity) == 0x190);
}