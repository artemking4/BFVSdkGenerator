// Object: PlayerEventToQueryResultEntity
// ClassId: 7312
// RuntimeId: 11208
// TypeInfo: 0x0000000144DCC9A0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class PlayerEventToQueryResultEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(PlayerEventToQueryResultEntity) == 0x90);
}