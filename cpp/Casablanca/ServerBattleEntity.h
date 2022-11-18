// Object: ServerBattleEntity
// ClassId: 7452
// RuntimeId: 11139
// TypeInfo: 0x0000000144C62240
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerBattleEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ServerBattleEntity) == 0xA8);
}