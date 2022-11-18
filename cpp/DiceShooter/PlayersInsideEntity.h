// Object: PlayersInsideEntity
// ClassId: 7318
// RuntimeId: 31358
// TypeInfo: 0x0000000144DCC890
#include "../Entity/Entity.h"

namespace DiceShooter {
    class PlayersInsideEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(PlayersInsideEntity) == 0xF8);
}