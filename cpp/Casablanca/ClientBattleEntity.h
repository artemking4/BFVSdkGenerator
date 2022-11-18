// Object: ClientBattleEntity
// ClassId: 6611
// RuntimeId: 15185
// TypeInfo: 0x0000000144C9F660
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBattleEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientBattleEntity) == 0xB0);
}