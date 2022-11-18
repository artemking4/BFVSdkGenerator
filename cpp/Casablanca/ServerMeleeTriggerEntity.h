// Object: ServerMeleeTriggerEntity
// ClassId: 7601
// RuntimeId: 14702
// TypeInfo: 0x0000000144C37DD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerMeleeTriggerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerMeleeTriggerEntity) == 0x30);
}