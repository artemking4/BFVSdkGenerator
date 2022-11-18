// Object: ServerKillCounterEntity
// ClassId: 7584
// RuntimeId: 30110
// TypeInfo: 0x0000000144DD5300
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerKillCounterEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ServerKillCounterEntity) == 0xC0);
}