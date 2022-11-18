// Object: ServerReviveTriggerEntity
// ClassId: 7699
// RuntimeId: 58991
// TypeInfo: 0x0000000144C37CC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerReviveTriggerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerReviveTriggerEntity) == 0x30);
}