// Object: ServerDynamicAreaTriggerEntity
// ClassId: 7530
// RuntimeId: 277
// TypeInfo: 0x0000000144C3FF20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDynamicAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0x220];
    }; // 0x240
    static_assert(sizeof(ServerDynamicAreaTriggerEntity) == 0x240);
}