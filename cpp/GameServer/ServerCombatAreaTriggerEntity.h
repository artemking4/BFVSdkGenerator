// Object: ServerCombatAreaTriggerEntity
// ClassId: 7468
// RuntimeId: 16920
// TypeInfo: 0x0000000144E63FA0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerCombatAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0xD90];
    }; // 0xDB0
    static_assert(sizeof(ServerCombatAreaTriggerEntity) == 0xDB0);
}