// Object: ClientCombatAreaTriggerEntity
// ClassId: 6637
// RuntimeId: 7092
// TypeInfo: 0x0000000144E3B870
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientCombatAreaTriggerEntity : public Entity::Entity {
        char pad_0x20[0xD80];
    }; // 0xDA0
    static_assert(sizeof(ClientCombatAreaTriggerEntity) == 0xDA0);
}