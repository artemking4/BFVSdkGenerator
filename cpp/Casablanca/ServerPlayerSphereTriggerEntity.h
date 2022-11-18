// Object: ServerPlayerSphereTriggerEntity
// ClassId: 8033
// RuntimeId: 27650
// TypeInfo: 0x0000000144C3CC80
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerPlayerSphereTriggerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x70];
    }; // 0xA0
    static_assert(sizeof(ServerPlayerSphereTriggerEntity) == 0xA0);
}