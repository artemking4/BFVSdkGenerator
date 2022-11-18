// Object: ClientActionEntity
// ClassId: 6305
// RuntimeId: 57923
// TypeInfo: 0x0000000144BFD030
#include "../Entity/Entity.h"

namespace BattleAI {
    class ClientActionEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientActionEntity) == 0x90);
}