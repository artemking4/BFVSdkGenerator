// Object: ServerDamageTriggerEntity
// ClassId: 8019
// RuntimeId: 2022
// TypeInfo: 0x0000000144CE1350
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerDamageTriggerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x90];
    }; // 0xC0
    static_assert(sizeof(ServerDamageTriggerEntity) == 0xC0);
}