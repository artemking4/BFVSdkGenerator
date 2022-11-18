// Object: PlayersQueryEntity
// ClassId: 7319
// RuntimeId: 36089
// TypeInfo: 0x0000000144DCC780
#include "../Entity/Entity.h"

namespace DiceShooter {
    class PlayersQueryEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(PlayersQueryEntity) == 0xC8);
}